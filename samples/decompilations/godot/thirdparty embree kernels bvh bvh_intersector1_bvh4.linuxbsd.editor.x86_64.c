
/* embree::VerifyMultiTargetLinking::getISA(int) [clone .constprop.0] */

undefined8 embree::VerifyMultiTargetLinking::getISA(int param_1)

{
  return 0x2000003;
}



/* embree::sse2::getISA() */

void __thiscall embree::sse2::getISA(sse2 *this)

{
  VerifyMultiTargetLinking::getISA((int)this);
  return;
}



/* embree::sse2::BVH4Triangle4Intersector1Moeller() */

sse2 * __thiscall embree::sse2::BVH4Triangle4Intersector1Moeller(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4Intersector1Moeller";
  return this;
}



/* embree::sse2::BVH4Triangle4iIntersector1Moeller() */

sse2 * __thiscall embree::sse2::BVH4Triangle4iIntersector1Moeller(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4iIntersector1Moeller";
  return this;
}



/* embree::sse2::BVH4Triangle4vIntersector1Pluecker() */

sse2 * __thiscall embree::sse2::BVH4Triangle4vIntersector1Pluecker(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4vIntersector1Pluecker";
  return this;
}



/* embree::sse2::BVH4Triangle4iIntersector1Pluecker() */

sse2 * __thiscall embree::sse2::BVH4Triangle4iIntersector1Pluecker(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4iIntersector1Pluecker";
  return this;
}



/* embree::sse2::BVH4Triangle4vMBIntersector1Moeller() */

sse2 * __thiscall embree::sse2::BVH4Triangle4vMBIntersector1Moeller(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4vMBIntersector1Moeller";
  return this;
}



/* embree::sse2::BVH4Triangle4iMBIntersector1Moeller() */

sse2 * __thiscall embree::sse2::BVH4Triangle4iMBIntersector1Moeller(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4iMBIntersector1Moeller";
  return this;
}



/* embree::sse2::BVH4Triangle4vMBIntersector1Pluecker() */

sse2 * __thiscall embree::sse2::BVH4Triangle4vMBIntersector1Pluecker(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4vMBIntersector1Pluecker";
  return this;
}



/* embree::sse2::BVH4Triangle4iMBIntersector1Pluecker() */

sse2 * __thiscall embree::sse2::BVH4Triangle4iMBIntersector1Pluecker(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::BVH4Triangle4iMBIntersector1Pluecker";
  return this;
}



/* embree::sse2::QBVH4Triangle4iIntersector1Pluecker() */

sse2 * __thiscall embree::sse2::QBVH4Triangle4iIntersector1Pluecker(sse2 *this)

{
  *(code **)this =
       BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::intersect;
  *(code **)(this + 8) =
       BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::occluded;
  *(code **)(this + 0x10) =
       BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
       ::pointQuery;
  *(char **)(this + 0x18) = "sse2::QBVH4Triangle4iIntersector1Pluecker";
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  PointQueryK *pPVar10;
  PointQueryK *pPVar11;
  PointQueryK *pPVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_1038 [160];
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined4 local_f80 [2];
  PointQueryK local_f78 [3896];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)param_2;
    local_f80[0] = 0;
    fVar28 = *(float *)(param_3 + 0x58);
    fVar32 = *(float *)(param_3 + 0x54);
    local_f88 = *(undefined8 *)(*(long *)param_1 + 0x70);
    fVar23 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar27 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pPVar10 = local_f78;
    fVar24 = fVar23;
    fVar25 = fVar23;
    fVar26 = fVar23;
    fVar29 = fVar28;
    fVar30 = fVar28;
    fVar31 = fVar28;
    fVar33 = fVar32;
    fVar34 = fVar32;
    fVar35 = fVar32;
    bVar20 = 0;
LAB_00100330:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00100358:
        uVar8 = (uint)uVar9 & 8;
        uVar13 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00100470;
LAB_00100369:
        pPVar10 = pPVar12;
        if (uVar8 == 0) {
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar37._4_4_ = fVar2;
          auVar37._0_4_ = fVar2;
          auVar37._8_4_ = fVar2;
          auVar37._12_4_ = fVar2;
          auVar54 = maxps(auVar57,*(undefined1 (*) [16])(uVar13 + 0x20));
          auVar37 = maxps(auVar37,*(undefined1 (*) [16])(uVar13 + 0x40));
          auVar55 = minps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x30));
          auVar54._4_4_ = fVar1;
          auVar54._0_4_ = fVar1;
          auVar54._8_4_ = fVar1;
          auVar54._12_4_ = fVar1;
          auVar37 = minps(auVar37,*(undefined1 (*) [16])(uVar13 + 0x50));
          auVar54 = maxps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x60));
          auVar54 = minps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x70));
          fVar53 = auVar55._0_4_ - fVar3;
          fVar59 = auVar55._4_4_ - fVar3;
          fVar60 = auVar55._8_4_ - fVar3;
          fVar61 = auVar55._12_4_ - fVar3;
          fVar36 = auVar37._0_4_ - fVar2;
          fVar42 = auVar37._4_4_ - fVar2;
          fVar43 = auVar37._8_4_ - fVar2;
          fVar44 = auVar37._12_4_ - fVar2;
          fVar45 = auVar54._0_4_ - fVar1;
          fVar50 = auVar54._4_4_ - fVar1;
          fVar51 = auVar54._8_4_ - fVar1;
          fVar52 = auVar54._12_4_ - fVar1;
          local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
          local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
          local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
          local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
          auVar66._4_4_ = -(uint)(local_f98._4_4_ <= fVar24 * fVar24);
          auVar66._0_4_ = -(uint)(local_f98._0_4_ <= fVar23 * fVar23);
          auVar66._8_4_ = -(uint)(local_f98._8_4_ <= fVar25 * fVar25);
          auVar66._12_4_ = -(uint)(local_f98._12_4_ <= fVar26 * fVar26);
          auVar55._4_4_ = -(uint)(*(float *)(uVar13 + 0x24) <= *(float *)(uVar13 + 0x34));
          auVar55._0_4_ = -(uint)(*(float *)(uVar13 + 0x20) <= *(float *)(uVar13 + 0x30));
          auVar55._8_4_ = -(uint)(*(float *)(uVar13 + 0x28) <= *(float *)(uVar13 + 0x38));
          auVar55._12_4_ = -(uint)(*(float *)(uVar13 + 0x2c) <= *(float *)(uVar13 + 0x3c));
          uVar8 = movmskps(0,auVar66);
          uVar18 = movmskps((int)param_1,auVar55);
          uVar8 = uVar8 & uVar18;
          while( true ) {
            param_1 = (Intersectors *)(ulong)uVar18;
            uVar9 = (ulong)(int)uVar8;
            if (uVar9 == 0) goto LAB_00100330;
            uVar14 = uVar13 & 0xfffffffffffffff0;
            lVar22 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            uVar13 = *(ulong *)(uVar14 + lVar22 * 8);
            param_1 = (Intersectors *)(uVar9 - 1 & uVar9);
            pPVar12 = pPVar10;
            uVar9 = uVar13;
            if (param_1 == (Intersectors *)0x0) goto LAB_00100358;
            lVar5 = 0;
            if (param_1 != (Intersectors *)0x0) {
              for (; ((ulong)param_1 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
              }
            }
            uVar9 = *(ulong *)(uVar14 + lVar5 * 8);
            uVar8 = *(uint *)(local_f98 + lVar22 * 4);
            uVar18 = *(uint *)(local_f98 + lVar5 * 4);
            uVar19 = (ulong)((PointQueryK *)param_1 + -1) & (ulong)param_1;
            if (uVar19 != 0) break;
            pPVar12 = pPVar10 + 0x10;
            param_1 = (Intersectors *)pPVar12;
            if (uVar18 <= uVar8) {
              *(ulong *)pPVar10 = uVar13;
              *(uint *)(pPVar10 + 8) = uVar8;
              goto LAB_00100358;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar13 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar18;
            if (iVar4 == 1) goto LAB_00100369;
LAB_00100470:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00100560;
            auVar37 = *(undefined1 (*) [16])(uVar13 + 0x20);
            auVar65._4_4_ = fVar3;
            auVar65._0_4_ = fVar3;
            auVar65._8_4_ = fVar3;
            auVar65._12_4_ = fVar3;
            auVar38._4_4_ = fVar2;
            auVar38._0_4_ = fVar2;
            auVar38._8_4_ = fVar2;
            auVar38._12_4_ = fVar2;
            auVar55 = maxps(auVar38,*(undefined1 (*) [16])(uVar13 + 0x40));
            auVar54 = *(undefined1 (*) [16])(uVar13 + 0x30);
            auVar55 = minps(auVar55,*(undefined1 (*) [16])(uVar13 + 0x50));
            auVar66 = maxps(auVar65,auVar37);
            auVar56._4_4_ = fVar1;
            auVar56._0_4_ = fVar1;
            auVar56._8_4_ = fVar1;
            auVar56._12_4_ = fVar1;
            auVar57 = maxps(auVar56,*(undefined1 (*) [16])(uVar13 + 0x60));
            fVar36 = auVar55._0_4_ - fVar2;
            fVar42 = auVar55._4_4_ - fVar2;
            fVar43 = auVar55._8_4_ - fVar2;
            fVar44 = auVar55._12_4_ - fVar2;
            auVar55 = minps(auVar57,*(undefined1 (*) [16])(uVar13 + 0x70));
            auVar57 = minps(auVar66,auVar54);
            fVar45 = auVar55._0_4_ - fVar1;
            fVar50 = auVar55._4_4_ - fVar1;
            fVar51 = auVar55._8_4_ - fVar1;
            fVar52 = auVar55._12_4_ - fVar1;
            fVar53 = auVar57._0_4_ - fVar3;
            fVar59 = auVar57._4_4_ - fVar3;
            fVar60 = auVar57._8_4_ - fVar3;
            fVar61 = auVar57._12_4_ - fVar3;
            auVar47._4_4_ = -(uint)(fVar1 + fVar29 < *(float *)(uVar13 + 100));
            auVar47._0_4_ = -(uint)(fVar1 + fVar28 < *(float *)(uVar13 + 0x60));
            auVar47._8_4_ = -(uint)(fVar1 + fVar30 < *(float *)(uVar13 + 0x68));
            auVar47._12_4_ = -(uint)(fVar1 + fVar31 < *(float *)(uVar13 + 0x6c));
            local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
            local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
            local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
            local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
            auVar69._4_4_ = -(uint)(*(float *)(uVar13 + 0x74) < fVar1 - fVar29);
            auVar69._0_4_ = -(uint)(*(float *)(uVar13 + 0x70) < fVar1 - fVar28);
            auVar69._8_4_ = -(uint)(*(float *)(uVar13 + 0x78) < fVar1 - fVar30);
            auVar69._12_4_ = -(uint)(*(float *)(uVar13 + 0x7c) < fVar1 - fVar31);
            auVar58._4_4_ = -(uint)(auVar37._4_4_ <= auVar54._4_4_);
            auVar58._0_4_ = -(uint)(auVar37._0_4_ <= auVar54._0_4_);
            auVar58._8_4_ = -(uint)(auVar37._8_4_ <= auVar54._8_4_);
            auVar58._12_4_ = -(uint)(auVar37._12_4_ <= auVar54._12_4_);
            auVar72._4_4_ = -(uint)(fVar2 + fVar33 < *(float *)(uVar13 + 0x44));
            auVar72._0_4_ = -(uint)(fVar2 + fVar32 < *(float *)(uVar13 + 0x40));
            auVar72._8_4_ = -(uint)(fVar2 + fVar34 < *(float *)(uVar13 + 0x48));
            auVar72._12_4_ = -(uint)(fVar2 + fVar35 < *(float *)(uVar13 + 0x4c));
            uVar18 = movmskps((int)param_1,auVar58);
            auVar75._4_4_ = -(uint)(*(float *)(uVar13 + 0x54) < fVar2 - fVar33);
            auVar75._0_4_ = -(uint)(*(float *)(uVar13 + 0x50) < fVar2 - fVar32);
            auVar75._8_4_ = -(uint)(*(float *)(uVar13 + 0x58) < fVar2 - fVar34);
            auVar75._12_4_ = -(uint)(*(float *)(uVar13 + 0x5c) < fVar2 - fVar35);
            auVar62._4_4_ = -(uint)(fVar3 + fVar24 < auVar37._4_4_);
            auVar62._0_4_ = -(uint)(fVar3 + fVar23 < auVar37._0_4_);
            auVar62._8_4_ = -(uint)(fVar3 + fVar25 < auVar37._8_4_);
            auVar62._12_4_ = -(uint)(fVar3 + fVar26 < auVar37._12_4_);
            auVar46._4_4_ = -(uint)(auVar54._4_4_ < fVar3 - fVar24);
            auVar46._0_4_ = -(uint)(auVar54._0_4_ < fVar3 - fVar23);
            auVar46._8_4_ = -(uint)(auVar54._8_4_ < fVar3 - fVar25);
            auVar46._12_4_ = -(uint)(auVar54._12_4_ < fVar3 - fVar26);
            auVar47 = auVar46 | auVar62 | auVar75 | auVar72 | auVar69 | auVar47;
            auVar48._0_4_ = auVar47._0_4_ ^ __LC0;
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001153b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001153b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001153bc;
            uVar8 = movmskps(0,auVar48);
            uVar8 = uVar8 & uVar18;
          }
          auVar49._8_4_ = uVar8;
          auVar49._0_8_ = uVar13;
          auVar49._12_4_ = 0;
          lVar22 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
            }
          }
          param_1 = *(Intersectors **)(uVar14 + lVar22 * 8);
          auVar63._8_4_ = uVar18;
          auVar63._0_8_ = uVar9;
          auVar63._12_4_ = 0;
          iVar4 = *(int *)(local_f98 + lVar22 * 4);
          auVar67._8_4_ = iVar4;
          auVar67._0_8_ = param_1;
          auVar67._12_4_ = 0;
          auVar39._8_4_ = -(uint)((int)uVar8 < (int)uVar18);
          uVar19 = uVar19 - 1 & uVar19;
          if (uVar19 == 0) {
            auVar39._4_4_ = auVar39._8_4_;
            auVar39._0_4_ = auVar39._8_4_;
            auVar39._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x20;
            auVar54 = auVar49 & auVar39 | ~auVar39 & auVar63;
            auVar64._8_4_ = -(uint)(auVar54._8_4_ < iVar4);
            auVar37 = auVar39 & auVar63 | ~auVar39 & auVar49;
            auVar64._0_8_ = CONCAT44(auVar64._8_4_,auVar64._8_4_);
            auVar64._12_4_ = auVar64._8_4_;
            auVar55 = auVar67 & auVar64 | ~auVar64 & auVar54;
            uVar9 = auVar54._0_8_ & auVar64._0_8_ | ~auVar64._0_8_ & (ulong)param_1;
            auVar73._8_4_ = -(uint)(auVar37._8_4_ < auVar55._8_4_);
            auVar73._4_4_ = auVar73._8_4_;
            auVar73._0_4_ = auVar73._8_4_;
            auVar73._12_4_ = auVar73._8_4_;
            *(undefined1 (*) [16])pPVar10 = auVar55 & auVar73 | ~auVar73 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar37 & auVar73 | ~auVar73 & auVar55;
          }
          else {
            lVar22 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            param_1 = *(Intersectors **)(uVar14 + lVar22 * 8);
            auVar40._4_4_ = auVar39._8_4_;
            auVar40._0_4_ = auVar39._8_4_;
            auVar40._8_4_ = auVar39._8_4_;
            auVar40._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x30;
            auVar70._8_4_ = *(int *)(local_f98 + lVar22 * 4);
            auVar70._0_8_ = param_1;
            auVar70._12_4_ = 0;
            auVar55 = auVar49 & auVar40 | ~auVar40 & auVar63;
            auVar41._8_4_ = -(uint)(iVar4 < *(int *)(local_f98 + lVar22 * 4));
            auVar57 = auVar63 & auVar40 | ~auVar40 & auVar49;
            auVar41._4_4_ = auVar41._8_4_;
            auVar41._0_4_ = auVar41._8_4_;
            auVar41._12_4_ = auVar41._8_4_;
            auVar54 = auVar67 & auVar41 | ~auVar41 & auVar70;
            auVar37 = auVar41 & auVar70 | ~auVar41 & auVar67;
            auVar74._8_4_ = -(uint)(auVar57._8_4_ < auVar37._8_4_);
            auVar74._4_4_ = auVar74._8_4_;
            auVar74._0_4_ = auVar74._8_4_;
            auVar74._12_4_ = auVar74._8_4_;
            auVar66 = auVar57 & auVar74 | ~auVar74 & auVar37;
            auVar68._8_4_ = -(uint)(auVar55._8_4_ < auVar54._8_4_);
            *(undefined1 (*) [16])pPVar10 = auVar37 & auVar74 | ~auVar74 & auVar57;
            auVar68._0_8_ = CONCAT44(auVar68._8_4_,auVar68._8_4_);
            auVar68._12_4_ = auVar68._8_4_;
            auStack_1038._0_16_ = ~auVar68 & auVar54;
            auVar37 = auVar54 & auVar68 | ~auVar68 & auVar55;
            auVar71._8_4_ = -(uint)(auVar37._8_4_ < auVar66._8_4_);
            auVar71._4_4_ = auVar71._8_4_;
            auVar71._0_4_ = auVar71._8_4_;
            auVar71._12_4_ = auVar71._8_4_;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar66 & auVar71 | ~auVar71 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x20) = auVar37 & auVar71 | ~auVar71 & auVar66;
            uVar9 = auVar55._0_8_ & auVar68._0_8_ | SUB168(auStack_1038._0_16_,0);
          }
          goto LAB_00100358;
        }
LAB_00100560:
        uVar9 = (ulong)((uint)uVar13 & 0xf);
        if (uVar9 == 8) break;
        puVar15 = (uint *)((uVar13 & 0xfffffffffffffff0) + 0xa0);
        lVar22 = 0;
        auVar6[0xf] = 0;
        auVar6._0_15_ = auStack_1038._1_15_;
        auStack_1038._0_16_ = auVar6 << 8;
        do {
          bVar21 = 0;
          puVar16 = puVar15 + -4;
          do {
            uVar8 = *puVar16;
            if (uVar8 == 0xffffffff) break;
            puVar17 = puVar16 + 1;
            param_1 = *(Intersectors **)(*(long *)(*(long *)param_3 + 0x1e0) + (ulong)uVar8 * 8);
            *(uint *)(param_3 + 0x44) = uVar8;
            *(uint *)(param_3 + 0x40) = puVar16[4];
            bVar7 = embree::Geometry::pointQuery
                              ((PointQueryK *)param_1,(PointQueryContext *)param_2);
            bVar21 = bVar21 | bVar7;
            puVar16 = puVar17;
          } while (puVar15 != puVar17);
          bVar21 = auStack_1038[0] | bVar21;
          auStack_1038[0] = bVar21;
          lVar22 = lVar22 + 1;
          puVar15 = puVar15 + 0x2c;
        } while (uVar9 - 8 != lVar22);
        if (bVar21 == 0) break;
        fVar23 = *(float *)(param_3 + 0x50);
        fVar32 = *(float *)(param_3 + 0x54);
        fVar28 = *(float *)(param_3 + 0x58);
        fVar24 = fVar23;
        fVar25 = fVar23;
        fVar26 = fVar23;
        fVar29 = fVar28;
        fVar30 = fVar28;
        fVar31 = fVar28;
        fVar33 = fVar32;
        fVar34 = fVar32;
        fVar35 = fVar32;
        if (*(int *)(param_3 + 0x18) == 1) {
          fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
          bVar20 = bVar21;
          break;
        }
        fVar27 = fVar23 * fVar23 + fVar32 * fVar32 + fVar28 * fVar28;
        pPVar11 = pPVar10;
        bVar20 = bVar21;
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_001006b1;
      }
      goto LAB_00100330;
    }
  }
LAB_001006b1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  PointQueryK *pPVar10;
  PointQueryK *pPVar11;
  PointQueryK *pPVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_1038 [160];
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined4 local_f80 [2];
  PointQueryK local_f78 [3896];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)param_2;
    local_f80[0] = 0;
    fVar28 = *(float *)(param_3 + 0x58);
    fVar32 = *(float *)(param_3 + 0x54);
    local_f88 = *(undefined8 *)(*(long *)param_1 + 0x70);
    fVar23 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar27 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pPVar10 = local_f78;
    fVar24 = fVar23;
    fVar25 = fVar23;
    fVar26 = fVar23;
    fVar29 = fVar28;
    fVar30 = fVar28;
    fVar31 = fVar28;
    fVar33 = fVar32;
    fVar34 = fVar32;
    fVar35 = fVar32;
    bVar20 = 0;
LAB_00100a80:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00100aa8:
        uVar8 = (uint)uVar9 & 8;
        uVar15 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00100bc0;
LAB_00100ab9:
        pPVar10 = pPVar12;
        if (uVar8 == 0) {
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar37._4_4_ = fVar2;
          auVar37._0_4_ = fVar2;
          auVar37._8_4_ = fVar2;
          auVar37._12_4_ = fVar2;
          auVar54 = maxps(auVar57,*(undefined1 (*) [16])(uVar15 + 0x20));
          auVar37 = maxps(auVar37,*(undefined1 (*) [16])(uVar15 + 0x40));
          auVar55 = minps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x30));
          auVar54._4_4_ = fVar1;
          auVar54._0_4_ = fVar1;
          auVar54._8_4_ = fVar1;
          auVar54._12_4_ = fVar1;
          auVar37 = minps(auVar37,*(undefined1 (*) [16])(uVar15 + 0x50));
          auVar54 = maxps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x60));
          auVar54 = minps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x70));
          fVar53 = auVar55._0_4_ - fVar3;
          fVar59 = auVar55._4_4_ - fVar3;
          fVar60 = auVar55._8_4_ - fVar3;
          fVar61 = auVar55._12_4_ - fVar3;
          fVar36 = auVar37._0_4_ - fVar2;
          fVar42 = auVar37._4_4_ - fVar2;
          fVar43 = auVar37._8_4_ - fVar2;
          fVar44 = auVar37._12_4_ - fVar2;
          fVar45 = auVar54._0_4_ - fVar1;
          fVar50 = auVar54._4_4_ - fVar1;
          fVar51 = auVar54._8_4_ - fVar1;
          fVar52 = auVar54._12_4_ - fVar1;
          local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
          local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
          local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
          local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
          auVar66._4_4_ = -(uint)(local_f98._4_4_ <= fVar24 * fVar24);
          auVar66._0_4_ = -(uint)(local_f98._0_4_ <= fVar23 * fVar23);
          auVar66._8_4_ = -(uint)(local_f98._8_4_ <= fVar25 * fVar25);
          auVar66._12_4_ = -(uint)(local_f98._12_4_ <= fVar26 * fVar26);
          auVar55._4_4_ = -(uint)(*(float *)(uVar15 + 0x24) <= *(float *)(uVar15 + 0x34));
          auVar55._0_4_ = -(uint)(*(float *)(uVar15 + 0x20) <= *(float *)(uVar15 + 0x30));
          auVar55._8_4_ = -(uint)(*(float *)(uVar15 + 0x28) <= *(float *)(uVar15 + 0x38));
          auVar55._12_4_ = -(uint)(*(float *)(uVar15 + 0x2c) <= *(float *)(uVar15 + 0x3c));
          uVar8 = movmskps(0,auVar66);
          uVar17 = movmskps((int)param_1,auVar55);
          uVar8 = uVar8 & uVar17;
          while( true ) {
            param_1 = (Intersectors *)(ulong)uVar17;
            uVar9 = (ulong)(int)uVar8;
            if (uVar9 == 0) goto LAB_00100a80;
            uVar18 = uVar15 & 0xfffffffffffffff0;
            lVar22 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            uVar15 = *(ulong *)(uVar18 + lVar22 * 8);
            param_1 = (Intersectors *)(uVar9 - 1 & uVar9);
            pPVar12 = pPVar10;
            uVar9 = uVar15;
            if (param_1 == (Intersectors *)0x0) goto LAB_00100aa8;
            lVar5 = 0;
            if (param_1 != (Intersectors *)0x0) {
              for (; ((ulong)param_1 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
              }
            }
            uVar9 = *(ulong *)(uVar18 + lVar5 * 8);
            uVar8 = *(uint *)(local_f98 + lVar22 * 4);
            uVar17 = *(uint *)(local_f98 + lVar5 * 4);
            uVar19 = (ulong)((PointQueryK *)param_1 + -1) & (ulong)param_1;
            if (uVar19 != 0) break;
            pPVar12 = pPVar10 + 0x10;
            param_1 = (Intersectors *)pPVar12;
            if (uVar17 <= uVar8) {
              *(ulong *)pPVar10 = uVar15;
              *(uint *)(pPVar10 + 8) = uVar8;
              goto LAB_00100aa8;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar15 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar17;
            if (iVar4 == 1) goto LAB_00100ab9;
LAB_00100bc0:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00100cb0;
            auVar37 = *(undefined1 (*) [16])(uVar15 + 0x20);
            auVar65._4_4_ = fVar3;
            auVar65._0_4_ = fVar3;
            auVar65._8_4_ = fVar3;
            auVar65._12_4_ = fVar3;
            auVar38._4_4_ = fVar2;
            auVar38._0_4_ = fVar2;
            auVar38._8_4_ = fVar2;
            auVar38._12_4_ = fVar2;
            auVar55 = maxps(auVar38,*(undefined1 (*) [16])(uVar15 + 0x40));
            auVar54 = *(undefined1 (*) [16])(uVar15 + 0x30);
            auVar55 = minps(auVar55,*(undefined1 (*) [16])(uVar15 + 0x50));
            auVar66 = maxps(auVar65,auVar37);
            auVar56._4_4_ = fVar1;
            auVar56._0_4_ = fVar1;
            auVar56._8_4_ = fVar1;
            auVar56._12_4_ = fVar1;
            auVar57 = maxps(auVar56,*(undefined1 (*) [16])(uVar15 + 0x60));
            fVar36 = auVar55._0_4_ - fVar2;
            fVar42 = auVar55._4_4_ - fVar2;
            fVar43 = auVar55._8_4_ - fVar2;
            fVar44 = auVar55._12_4_ - fVar2;
            auVar55 = minps(auVar57,*(undefined1 (*) [16])(uVar15 + 0x70));
            auVar57 = minps(auVar66,auVar54);
            fVar45 = auVar55._0_4_ - fVar1;
            fVar50 = auVar55._4_4_ - fVar1;
            fVar51 = auVar55._8_4_ - fVar1;
            fVar52 = auVar55._12_4_ - fVar1;
            fVar53 = auVar57._0_4_ - fVar3;
            fVar59 = auVar57._4_4_ - fVar3;
            fVar60 = auVar57._8_4_ - fVar3;
            fVar61 = auVar57._12_4_ - fVar3;
            auVar47._4_4_ = -(uint)(fVar1 + fVar29 < *(float *)(uVar15 + 100));
            auVar47._0_4_ = -(uint)(fVar1 + fVar28 < *(float *)(uVar15 + 0x60));
            auVar47._8_4_ = -(uint)(fVar1 + fVar30 < *(float *)(uVar15 + 0x68));
            auVar47._12_4_ = -(uint)(fVar1 + fVar31 < *(float *)(uVar15 + 0x6c));
            local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
            local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
            local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
            local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
            auVar69._4_4_ = -(uint)(*(float *)(uVar15 + 0x74) < fVar1 - fVar29);
            auVar69._0_4_ = -(uint)(*(float *)(uVar15 + 0x70) < fVar1 - fVar28);
            auVar69._8_4_ = -(uint)(*(float *)(uVar15 + 0x78) < fVar1 - fVar30);
            auVar69._12_4_ = -(uint)(*(float *)(uVar15 + 0x7c) < fVar1 - fVar31);
            auVar58._4_4_ = -(uint)(auVar37._4_4_ <= auVar54._4_4_);
            auVar58._0_4_ = -(uint)(auVar37._0_4_ <= auVar54._0_4_);
            auVar58._8_4_ = -(uint)(auVar37._8_4_ <= auVar54._8_4_);
            auVar58._12_4_ = -(uint)(auVar37._12_4_ <= auVar54._12_4_);
            auVar72._4_4_ = -(uint)(fVar2 + fVar33 < *(float *)(uVar15 + 0x44));
            auVar72._0_4_ = -(uint)(fVar2 + fVar32 < *(float *)(uVar15 + 0x40));
            auVar72._8_4_ = -(uint)(fVar2 + fVar34 < *(float *)(uVar15 + 0x48));
            auVar72._12_4_ = -(uint)(fVar2 + fVar35 < *(float *)(uVar15 + 0x4c));
            uVar17 = movmskps((int)param_1,auVar58);
            auVar75._4_4_ = -(uint)(*(float *)(uVar15 + 0x54) < fVar2 - fVar33);
            auVar75._0_4_ = -(uint)(*(float *)(uVar15 + 0x50) < fVar2 - fVar32);
            auVar75._8_4_ = -(uint)(*(float *)(uVar15 + 0x58) < fVar2 - fVar34);
            auVar75._12_4_ = -(uint)(*(float *)(uVar15 + 0x5c) < fVar2 - fVar35);
            auVar62._4_4_ = -(uint)(fVar3 + fVar24 < auVar37._4_4_);
            auVar62._0_4_ = -(uint)(fVar3 + fVar23 < auVar37._0_4_);
            auVar62._8_4_ = -(uint)(fVar3 + fVar25 < auVar37._8_4_);
            auVar62._12_4_ = -(uint)(fVar3 + fVar26 < auVar37._12_4_);
            auVar46._4_4_ = -(uint)(auVar54._4_4_ < fVar3 - fVar24);
            auVar46._0_4_ = -(uint)(auVar54._0_4_ < fVar3 - fVar23);
            auVar46._8_4_ = -(uint)(auVar54._8_4_ < fVar3 - fVar25);
            auVar46._12_4_ = -(uint)(auVar54._12_4_ < fVar3 - fVar26);
            auVar47 = auVar46 | auVar62 | auVar75 | auVar72 | auVar69 | auVar47;
            auVar48._0_4_ = auVar47._0_4_ ^ __LC0;
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001153b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001153b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001153bc;
            uVar8 = movmskps(0,auVar48);
            uVar8 = uVar8 & uVar17;
          }
          auVar49._8_4_ = uVar8;
          auVar49._0_8_ = uVar15;
          auVar49._12_4_ = 0;
          lVar22 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
            }
          }
          param_1 = *(Intersectors **)(uVar18 + lVar22 * 8);
          auVar63._8_4_ = uVar17;
          auVar63._0_8_ = uVar9;
          auVar63._12_4_ = 0;
          iVar4 = *(int *)(local_f98 + lVar22 * 4);
          auVar67._8_4_ = iVar4;
          auVar67._0_8_ = param_1;
          auVar67._12_4_ = 0;
          auVar39._8_4_ = -(uint)((int)uVar8 < (int)uVar17);
          uVar19 = uVar19 - 1 & uVar19;
          if (uVar19 == 0) {
            auVar39._4_4_ = auVar39._8_4_;
            auVar39._0_4_ = auVar39._8_4_;
            auVar39._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x20;
            auVar54 = auVar49 & auVar39 | ~auVar39 & auVar63;
            auVar64._8_4_ = -(uint)(auVar54._8_4_ < iVar4);
            auVar37 = auVar39 & auVar63 | ~auVar39 & auVar49;
            auVar64._0_8_ = CONCAT44(auVar64._8_4_,auVar64._8_4_);
            auVar64._12_4_ = auVar64._8_4_;
            auVar55 = auVar67 & auVar64 | ~auVar64 & auVar54;
            uVar9 = auVar54._0_8_ & auVar64._0_8_ | ~auVar64._0_8_ & (ulong)param_1;
            auVar73._8_4_ = -(uint)(auVar37._8_4_ < auVar55._8_4_);
            auVar73._4_4_ = auVar73._8_4_;
            auVar73._0_4_ = auVar73._8_4_;
            auVar73._12_4_ = auVar73._8_4_;
            *(undefined1 (*) [16])pPVar10 = auVar55 & auVar73 | ~auVar73 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar37 & auVar73 | ~auVar73 & auVar55;
          }
          else {
            lVar22 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            param_1 = *(Intersectors **)(uVar18 + lVar22 * 8);
            auVar40._4_4_ = auVar39._8_4_;
            auVar40._0_4_ = auVar39._8_4_;
            auVar40._8_4_ = auVar39._8_4_;
            auVar40._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x30;
            auVar70._8_4_ = *(int *)(local_f98 + lVar22 * 4);
            auVar70._0_8_ = param_1;
            auVar70._12_4_ = 0;
            auVar55 = auVar49 & auVar40 | ~auVar40 & auVar63;
            auVar41._8_4_ = -(uint)(iVar4 < *(int *)(local_f98 + lVar22 * 4));
            auVar57 = auVar63 & auVar40 | ~auVar40 & auVar49;
            auVar41._4_4_ = auVar41._8_4_;
            auVar41._0_4_ = auVar41._8_4_;
            auVar41._12_4_ = auVar41._8_4_;
            auVar54 = auVar67 & auVar41 | ~auVar41 & auVar70;
            auVar37 = auVar41 & auVar70 | ~auVar41 & auVar67;
            auVar74._8_4_ = -(uint)(auVar57._8_4_ < auVar37._8_4_);
            auVar74._4_4_ = auVar74._8_4_;
            auVar74._0_4_ = auVar74._8_4_;
            auVar74._12_4_ = auVar74._8_4_;
            auVar66 = auVar57 & auVar74 | ~auVar74 & auVar37;
            auVar68._8_4_ = -(uint)(auVar55._8_4_ < auVar54._8_4_);
            *(undefined1 (*) [16])pPVar10 = auVar37 & auVar74 | ~auVar74 & auVar57;
            auVar68._0_8_ = CONCAT44(auVar68._8_4_,auVar68._8_4_);
            auVar68._12_4_ = auVar68._8_4_;
            auStack_1038._0_16_ = ~auVar68 & auVar54;
            auVar37 = auVar54 & auVar68 | ~auVar68 & auVar55;
            auVar71._8_4_ = -(uint)(auVar37._8_4_ < auVar66._8_4_);
            auVar71._4_4_ = auVar71._8_4_;
            auVar71._0_4_ = auVar71._8_4_;
            auVar71._12_4_ = auVar71._8_4_;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar66 & auVar71 | ~auVar71 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x20) = auVar37 & auVar71 | ~auVar71 & auVar66;
            uVar9 = auVar55._0_8_ & auVar68._0_8_ | SUB168(auStack_1038._0_16_,0);
          }
          goto LAB_00100aa8;
        }
LAB_00100cb0:
        uVar9 = (ulong)((uint)uVar15 & 0xf);
        if (uVar9 == 8) break;
        lVar22 = 0;
        auVar6[0xf] = 0;
        auVar6._0_15_ = auStack_1038._1_15_;
        auStack_1038._0_16_ = auVar6 << 8;
        piVar16 = (int *)(uVar15 & 0xfffffffffffffff0);
        do {
          bVar21 = 0;
          piVar13 = piVar16 + 0x10;
          do {
            if (*piVar13 == -1) break;
            piVar14 = piVar13 + 1;
            param_1 = *(Intersectors **)
                       (*(long *)(*(long *)param_3 + 0x1e0) + (ulong)(uint)piVar13[-4] * 8);
            *(int *)(param_3 + 0x44) = piVar13[-4];
            *(int *)(param_3 + 0x40) = *piVar13;
            bVar7 = embree::Geometry::pointQuery
                              ((PointQueryK *)param_1,(PointQueryContext *)param_2);
            bVar21 = bVar21 | bVar7;
            piVar13 = piVar14;
          } while (piVar16 + 0x14 != piVar14);
          bVar21 = auStack_1038[0] | bVar21;
          auStack_1038[0] = bVar21;
          lVar22 = lVar22 + 1;
          piVar16 = piVar16 + 0x14;
        } while (uVar9 - 8 != lVar22);
        if (bVar21 == 0) break;
        fVar23 = *(float *)(param_3 + 0x50);
        fVar32 = *(float *)(param_3 + 0x54);
        fVar28 = *(float *)(param_3 + 0x58);
        fVar24 = fVar23;
        fVar25 = fVar23;
        fVar26 = fVar23;
        fVar29 = fVar28;
        fVar30 = fVar28;
        fVar31 = fVar28;
        fVar33 = fVar32;
        fVar34 = fVar32;
        fVar35 = fVar32;
        if (*(int *)(param_3 + 0x18) == 1) {
          fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
          bVar20 = bVar21;
          break;
        }
        fVar27 = fVar23 * fVar23 + fVar32 * fVar32 + fVar28 * fVar28;
        pPVar11 = pPVar10;
        bVar20 = bVar21;
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00100df4;
      }
      goto LAB_00100a80;
    }
  }
LAB_00100df4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  PointQueryK *pPVar10;
  PointQueryK *pPVar11;
  PointQueryK *pPVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_1038 [160];
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined4 local_f80 [2];
  PointQueryK local_f78 [3896];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)param_2;
    local_f80[0] = 0;
    fVar28 = *(float *)(param_3 + 0x58);
    fVar32 = *(float *)(param_3 + 0x54);
    local_f88 = *(undefined8 *)(*(long *)param_1 + 0x70);
    fVar23 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar27 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pPVar10 = local_f78;
    fVar24 = fVar23;
    fVar25 = fVar23;
    fVar26 = fVar23;
    fVar29 = fVar28;
    fVar30 = fVar28;
    fVar31 = fVar28;
    fVar33 = fVar32;
    fVar34 = fVar32;
    fVar35 = fVar32;
    bVar20 = 0;
LAB_001011c0:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_001011e8:
        uVar8 = (uint)uVar9 & 8;
        uVar15 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00101300;
LAB_001011f9:
        pPVar10 = pPVar12;
        if (uVar8 == 0) {
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar37._4_4_ = fVar2;
          auVar37._0_4_ = fVar2;
          auVar37._8_4_ = fVar2;
          auVar37._12_4_ = fVar2;
          auVar54 = maxps(auVar57,*(undefined1 (*) [16])(uVar15 + 0x20));
          auVar37 = maxps(auVar37,*(undefined1 (*) [16])(uVar15 + 0x40));
          auVar55 = minps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x30));
          auVar54._4_4_ = fVar1;
          auVar54._0_4_ = fVar1;
          auVar54._8_4_ = fVar1;
          auVar54._12_4_ = fVar1;
          auVar37 = minps(auVar37,*(undefined1 (*) [16])(uVar15 + 0x50));
          auVar54 = maxps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x60));
          auVar54 = minps(auVar54,*(undefined1 (*) [16])(uVar15 + 0x70));
          fVar53 = auVar55._0_4_ - fVar3;
          fVar59 = auVar55._4_4_ - fVar3;
          fVar60 = auVar55._8_4_ - fVar3;
          fVar61 = auVar55._12_4_ - fVar3;
          fVar36 = auVar37._0_4_ - fVar2;
          fVar42 = auVar37._4_4_ - fVar2;
          fVar43 = auVar37._8_4_ - fVar2;
          fVar44 = auVar37._12_4_ - fVar2;
          fVar45 = auVar54._0_4_ - fVar1;
          fVar50 = auVar54._4_4_ - fVar1;
          fVar51 = auVar54._8_4_ - fVar1;
          fVar52 = auVar54._12_4_ - fVar1;
          local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
          local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
          local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
          local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
          auVar66._4_4_ = -(uint)(local_f98._4_4_ <= fVar24 * fVar24);
          auVar66._0_4_ = -(uint)(local_f98._0_4_ <= fVar23 * fVar23);
          auVar66._8_4_ = -(uint)(local_f98._8_4_ <= fVar25 * fVar25);
          auVar66._12_4_ = -(uint)(local_f98._12_4_ <= fVar26 * fVar26);
          auVar55._4_4_ = -(uint)(*(float *)(uVar15 + 0x24) <= *(float *)(uVar15 + 0x34));
          auVar55._0_4_ = -(uint)(*(float *)(uVar15 + 0x20) <= *(float *)(uVar15 + 0x30));
          auVar55._8_4_ = -(uint)(*(float *)(uVar15 + 0x28) <= *(float *)(uVar15 + 0x38));
          auVar55._12_4_ = -(uint)(*(float *)(uVar15 + 0x2c) <= *(float *)(uVar15 + 0x3c));
          uVar8 = movmskps(0,auVar66);
          uVar17 = movmskps((int)param_1,auVar55);
          uVar8 = uVar8 & uVar17;
          while( true ) {
            param_1 = (Intersectors *)(ulong)uVar17;
            uVar9 = (ulong)(int)uVar8;
            if (uVar9 == 0) goto LAB_001011c0;
            uVar18 = uVar15 & 0xfffffffffffffff0;
            lVar22 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            uVar15 = *(ulong *)(uVar18 + lVar22 * 8);
            param_1 = (Intersectors *)(uVar9 - 1 & uVar9);
            pPVar12 = pPVar10;
            uVar9 = uVar15;
            if (param_1 == (Intersectors *)0x0) goto LAB_001011e8;
            lVar5 = 0;
            if (param_1 != (Intersectors *)0x0) {
              for (; ((ulong)param_1 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
              }
            }
            uVar9 = *(ulong *)(uVar18 + lVar5 * 8);
            uVar8 = *(uint *)(local_f98 + lVar22 * 4);
            uVar17 = *(uint *)(local_f98 + lVar5 * 4);
            uVar19 = (ulong)((PointQueryK *)param_1 + -1) & (ulong)param_1;
            if (uVar19 != 0) break;
            pPVar12 = pPVar10 + 0x10;
            param_1 = (Intersectors *)pPVar12;
            if (uVar17 <= uVar8) {
              *(ulong *)pPVar10 = uVar15;
              *(uint *)(pPVar10 + 8) = uVar8;
              goto LAB_001011e8;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar15 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar17;
            if (iVar4 == 1) goto LAB_001011f9;
LAB_00101300:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_001013f0;
            auVar37 = *(undefined1 (*) [16])(uVar15 + 0x20);
            auVar65._4_4_ = fVar3;
            auVar65._0_4_ = fVar3;
            auVar65._8_4_ = fVar3;
            auVar65._12_4_ = fVar3;
            auVar38._4_4_ = fVar2;
            auVar38._0_4_ = fVar2;
            auVar38._8_4_ = fVar2;
            auVar38._12_4_ = fVar2;
            auVar55 = maxps(auVar38,*(undefined1 (*) [16])(uVar15 + 0x40));
            auVar54 = *(undefined1 (*) [16])(uVar15 + 0x30);
            auVar55 = minps(auVar55,*(undefined1 (*) [16])(uVar15 + 0x50));
            auVar66 = maxps(auVar65,auVar37);
            auVar56._4_4_ = fVar1;
            auVar56._0_4_ = fVar1;
            auVar56._8_4_ = fVar1;
            auVar56._12_4_ = fVar1;
            auVar57 = maxps(auVar56,*(undefined1 (*) [16])(uVar15 + 0x60));
            fVar36 = auVar55._0_4_ - fVar2;
            fVar42 = auVar55._4_4_ - fVar2;
            fVar43 = auVar55._8_4_ - fVar2;
            fVar44 = auVar55._12_4_ - fVar2;
            auVar55 = minps(auVar57,*(undefined1 (*) [16])(uVar15 + 0x70));
            auVar57 = minps(auVar66,auVar54);
            fVar45 = auVar55._0_4_ - fVar1;
            fVar50 = auVar55._4_4_ - fVar1;
            fVar51 = auVar55._8_4_ - fVar1;
            fVar52 = auVar55._12_4_ - fVar1;
            fVar53 = auVar57._0_4_ - fVar3;
            fVar59 = auVar57._4_4_ - fVar3;
            fVar60 = auVar57._8_4_ - fVar3;
            fVar61 = auVar57._12_4_ - fVar3;
            auVar47._4_4_ = -(uint)(fVar1 + fVar29 < *(float *)(uVar15 + 100));
            auVar47._0_4_ = -(uint)(fVar1 + fVar28 < *(float *)(uVar15 + 0x60));
            auVar47._8_4_ = -(uint)(fVar1 + fVar30 < *(float *)(uVar15 + 0x68));
            auVar47._12_4_ = -(uint)(fVar1 + fVar31 < *(float *)(uVar15 + 0x6c));
            local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
            local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
            local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
            local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
            auVar69._4_4_ = -(uint)(*(float *)(uVar15 + 0x74) < fVar1 - fVar29);
            auVar69._0_4_ = -(uint)(*(float *)(uVar15 + 0x70) < fVar1 - fVar28);
            auVar69._8_4_ = -(uint)(*(float *)(uVar15 + 0x78) < fVar1 - fVar30);
            auVar69._12_4_ = -(uint)(*(float *)(uVar15 + 0x7c) < fVar1 - fVar31);
            auVar58._4_4_ = -(uint)(auVar37._4_4_ <= auVar54._4_4_);
            auVar58._0_4_ = -(uint)(auVar37._0_4_ <= auVar54._0_4_);
            auVar58._8_4_ = -(uint)(auVar37._8_4_ <= auVar54._8_4_);
            auVar58._12_4_ = -(uint)(auVar37._12_4_ <= auVar54._12_4_);
            auVar72._4_4_ = -(uint)(fVar2 + fVar33 < *(float *)(uVar15 + 0x44));
            auVar72._0_4_ = -(uint)(fVar2 + fVar32 < *(float *)(uVar15 + 0x40));
            auVar72._8_4_ = -(uint)(fVar2 + fVar34 < *(float *)(uVar15 + 0x48));
            auVar72._12_4_ = -(uint)(fVar2 + fVar35 < *(float *)(uVar15 + 0x4c));
            uVar17 = movmskps((int)param_1,auVar58);
            auVar75._4_4_ = -(uint)(*(float *)(uVar15 + 0x54) < fVar2 - fVar33);
            auVar75._0_4_ = -(uint)(*(float *)(uVar15 + 0x50) < fVar2 - fVar32);
            auVar75._8_4_ = -(uint)(*(float *)(uVar15 + 0x58) < fVar2 - fVar34);
            auVar75._12_4_ = -(uint)(*(float *)(uVar15 + 0x5c) < fVar2 - fVar35);
            auVar62._4_4_ = -(uint)(fVar3 + fVar24 < auVar37._4_4_);
            auVar62._0_4_ = -(uint)(fVar3 + fVar23 < auVar37._0_4_);
            auVar62._8_4_ = -(uint)(fVar3 + fVar25 < auVar37._8_4_);
            auVar62._12_4_ = -(uint)(fVar3 + fVar26 < auVar37._12_4_);
            auVar46._4_4_ = -(uint)(auVar54._4_4_ < fVar3 - fVar24);
            auVar46._0_4_ = -(uint)(auVar54._0_4_ < fVar3 - fVar23);
            auVar46._8_4_ = -(uint)(auVar54._8_4_ < fVar3 - fVar25);
            auVar46._12_4_ = -(uint)(auVar54._12_4_ < fVar3 - fVar26);
            auVar47 = auVar46 | auVar62 | auVar75 | auVar72 | auVar69 | auVar47;
            auVar48._0_4_ = auVar47._0_4_ ^ __LC0;
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001153b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001153b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001153bc;
            uVar8 = movmskps(0,auVar48);
            uVar8 = uVar8 & uVar17;
          }
          auVar49._8_4_ = uVar8;
          auVar49._0_8_ = uVar15;
          auVar49._12_4_ = 0;
          lVar22 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
            }
          }
          param_1 = *(Intersectors **)(uVar18 + lVar22 * 8);
          auVar63._8_4_ = uVar17;
          auVar63._0_8_ = uVar9;
          auVar63._12_4_ = 0;
          iVar4 = *(int *)(local_f98 + lVar22 * 4);
          auVar67._8_4_ = iVar4;
          auVar67._0_8_ = param_1;
          auVar67._12_4_ = 0;
          auVar39._8_4_ = -(uint)((int)uVar8 < (int)uVar17);
          uVar19 = uVar19 - 1 & uVar19;
          if (uVar19 == 0) {
            auVar39._4_4_ = auVar39._8_4_;
            auVar39._0_4_ = auVar39._8_4_;
            auVar39._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x20;
            auVar54 = auVar49 & auVar39 | ~auVar39 & auVar63;
            auVar64._8_4_ = -(uint)(auVar54._8_4_ < iVar4);
            auVar37 = auVar39 & auVar63 | ~auVar39 & auVar49;
            auVar64._0_8_ = CONCAT44(auVar64._8_4_,auVar64._8_4_);
            auVar64._12_4_ = auVar64._8_4_;
            auVar55 = auVar67 & auVar64 | ~auVar64 & auVar54;
            uVar9 = auVar54._0_8_ & auVar64._0_8_ | ~auVar64._0_8_ & (ulong)param_1;
            auVar73._8_4_ = -(uint)(auVar37._8_4_ < auVar55._8_4_);
            auVar73._4_4_ = auVar73._8_4_;
            auVar73._0_4_ = auVar73._8_4_;
            auVar73._12_4_ = auVar73._8_4_;
            *(undefined1 (*) [16])pPVar10 = auVar55 & auVar73 | ~auVar73 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar37 & auVar73 | ~auVar73 & auVar55;
          }
          else {
            lVar22 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            param_1 = *(Intersectors **)(uVar18 + lVar22 * 8);
            auVar40._4_4_ = auVar39._8_4_;
            auVar40._0_4_ = auVar39._8_4_;
            auVar40._8_4_ = auVar39._8_4_;
            auVar40._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x30;
            auVar70._8_4_ = *(int *)(local_f98 + lVar22 * 4);
            auVar70._0_8_ = param_1;
            auVar70._12_4_ = 0;
            auVar55 = auVar49 & auVar40 | ~auVar40 & auVar63;
            auVar41._8_4_ = -(uint)(iVar4 < *(int *)(local_f98 + lVar22 * 4));
            auVar57 = auVar63 & auVar40 | ~auVar40 & auVar49;
            auVar41._4_4_ = auVar41._8_4_;
            auVar41._0_4_ = auVar41._8_4_;
            auVar41._12_4_ = auVar41._8_4_;
            auVar54 = auVar67 & auVar41 | ~auVar41 & auVar70;
            auVar37 = auVar41 & auVar70 | ~auVar41 & auVar67;
            auVar74._8_4_ = -(uint)(auVar57._8_4_ < auVar37._8_4_);
            auVar74._4_4_ = auVar74._8_4_;
            auVar74._0_4_ = auVar74._8_4_;
            auVar74._12_4_ = auVar74._8_4_;
            auVar66 = auVar57 & auVar74 | ~auVar74 & auVar37;
            auVar68._8_4_ = -(uint)(auVar55._8_4_ < auVar54._8_4_);
            *(undefined1 (*) [16])pPVar10 = auVar37 & auVar74 | ~auVar74 & auVar57;
            auVar68._0_8_ = CONCAT44(auVar68._8_4_,auVar68._8_4_);
            auVar68._12_4_ = auVar68._8_4_;
            auStack_1038._0_16_ = ~auVar68 & auVar54;
            auVar37 = auVar54 & auVar68 | ~auVar68 & auVar55;
            auVar71._8_4_ = -(uint)(auVar37._8_4_ < auVar66._8_4_);
            auVar71._4_4_ = auVar71._8_4_;
            auVar71._0_4_ = auVar71._8_4_;
            auVar71._12_4_ = auVar71._8_4_;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar66 & auVar71 | ~auVar71 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x20) = auVar37 & auVar71 | ~auVar71 & auVar66;
            uVar9 = auVar55._0_8_ & auVar68._0_8_ | SUB168(auStack_1038._0_16_,0);
          }
          goto LAB_001011e8;
        }
LAB_001013f0:
        uVar9 = (ulong)((uint)uVar15 & 0xf);
        if (uVar9 == 8) break;
        lVar22 = 0;
        auVar6[0xf] = 0;
        auVar6._0_15_ = auStack_1038._1_15_;
        auStack_1038._0_16_ = auVar6 << 8;
        piVar16 = (int *)(uVar15 & 0xfffffffffffffff0);
        do {
          bVar21 = 0;
          piVar13 = piVar16 + 0x10;
          do {
            if (*piVar13 == -1) break;
            piVar14 = piVar13 + 1;
            param_1 = *(Intersectors **)
                       (*(long *)(*(long *)param_3 + 0x1e0) + (ulong)(uint)piVar13[-4] * 8);
            *(int *)(param_3 + 0x44) = piVar13[-4];
            *(int *)(param_3 + 0x40) = *piVar13;
            bVar7 = embree::Geometry::pointQuery
                              ((PointQueryK *)param_1,(PointQueryContext *)param_2);
            bVar21 = bVar21 | bVar7;
            piVar13 = piVar14;
          } while (piVar16 + 0x14 != piVar14);
          bVar21 = auStack_1038[0] | bVar21;
          auStack_1038[0] = bVar21;
          lVar22 = lVar22 + 1;
          piVar16 = piVar16 + 0x14;
        } while (uVar9 - 8 != lVar22);
        if (bVar21 == 0) break;
        fVar23 = *(float *)(param_3 + 0x50);
        fVar32 = *(float *)(param_3 + 0x54);
        fVar28 = *(float *)(param_3 + 0x58);
        fVar24 = fVar23;
        fVar25 = fVar23;
        fVar26 = fVar23;
        fVar29 = fVar28;
        fVar30 = fVar28;
        fVar31 = fVar28;
        fVar33 = fVar32;
        fVar34 = fVar32;
        fVar35 = fVar32;
        if (*(int *)(param_3 + 0x18) == 1) {
          fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
          bVar20 = bVar21;
          break;
        }
        fVar27 = fVar23 * fVar23 + fVar32 * fVar32 + fVar28 * fVar28;
        pPVar11 = pPVar10;
        bVar20 = bVar21;
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00101534;
      }
      goto LAB_001011c0;
    }
  }
LAB_00101534:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  PointQueryK *pPVar10;
  PointQueryK *pPVar11;
  PointQueryK *pPVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_1038 [160];
  undefined1 local_f98 [16];
  undefined8 local_f88;
  undefined4 local_f80 [2];
  PointQueryK local_f78 [3896];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)param_2;
    local_f80[0] = 0;
    fVar28 = *(float *)(param_3 + 0x58);
    fVar32 = *(float *)(param_3 + 0x54);
    local_f88 = *(undefined8 *)(*(long *)param_1 + 0x70);
    fVar23 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar27 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pPVar10 = local_f78;
    fVar24 = fVar23;
    fVar25 = fVar23;
    fVar26 = fVar23;
    fVar29 = fVar28;
    fVar30 = fVar28;
    fVar31 = fVar28;
    fVar33 = fVar32;
    fVar34 = fVar32;
    fVar35 = fVar32;
    bVar20 = 0;
LAB_00101900:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00101928:
        uVar8 = (uint)uVar9 & 8;
        uVar13 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00101a40;
LAB_00101939:
        pPVar10 = pPVar12;
        if (uVar8 == 0) {
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar37._4_4_ = fVar2;
          auVar37._0_4_ = fVar2;
          auVar37._8_4_ = fVar2;
          auVar37._12_4_ = fVar2;
          auVar54 = maxps(auVar57,*(undefined1 (*) [16])(uVar13 + 0x20));
          auVar37 = maxps(auVar37,*(undefined1 (*) [16])(uVar13 + 0x40));
          auVar55 = minps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x30));
          auVar54._4_4_ = fVar1;
          auVar54._0_4_ = fVar1;
          auVar54._8_4_ = fVar1;
          auVar54._12_4_ = fVar1;
          auVar37 = minps(auVar37,*(undefined1 (*) [16])(uVar13 + 0x50));
          auVar54 = maxps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x60));
          auVar54 = minps(auVar54,*(undefined1 (*) [16])(uVar13 + 0x70));
          fVar53 = auVar55._0_4_ - fVar3;
          fVar59 = auVar55._4_4_ - fVar3;
          fVar60 = auVar55._8_4_ - fVar3;
          fVar61 = auVar55._12_4_ - fVar3;
          fVar36 = auVar37._0_4_ - fVar2;
          fVar42 = auVar37._4_4_ - fVar2;
          fVar43 = auVar37._8_4_ - fVar2;
          fVar44 = auVar37._12_4_ - fVar2;
          fVar45 = auVar54._0_4_ - fVar1;
          fVar50 = auVar54._4_4_ - fVar1;
          fVar51 = auVar54._8_4_ - fVar1;
          fVar52 = auVar54._12_4_ - fVar1;
          local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
          local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
          local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
          local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
          auVar66._4_4_ = -(uint)(local_f98._4_4_ <= fVar24 * fVar24);
          auVar66._0_4_ = -(uint)(local_f98._0_4_ <= fVar23 * fVar23);
          auVar66._8_4_ = -(uint)(local_f98._8_4_ <= fVar25 * fVar25);
          auVar66._12_4_ = -(uint)(local_f98._12_4_ <= fVar26 * fVar26);
          auVar55._4_4_ = -(uint)(*(float *)(uVar13 + 0x24) <= *(float *)(uVar13 + 0x34));
          auVar55._0_4_ = -(uint)(*(float *)(uVar13 + 0x20) <= *(float *)(uVar13 + 0x30));
          auVar55._8_4_ = -(uint)(*(float *)(uVar13 + 0x28) <= *(float *)(uVar13 + 0x38));
          auVar55._12_4_ = -(uint)(*(float *)(uVar13 + 0x2c) <= *(float *)(uVar13 + 0x3c));
          uVar8 = movmskps(0,auVar66);
          uVar18 = movmskps((int)param_1,auVar55);
          uVar8 = uVar8 & uVar18;
          while( true ) {
            param_1 = (Intersectors *)(ulong)uVar18;
            uVar9 = (ulong)(int)uVar8;
            if (uVar9 == 0) goto LAB_00101900;
            uVar14 = uVar13 & 0xfffffffffffffff0;
            lVar22 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            uVar13 = *(ulong *)(uVar14 + lVar22 * 8);
            param_1 = (Intersectors *)(uVar9 - 1 & uVar9);
            pPVar12 = pPVar10;
            uVar9 = uVar13;
            if (param_1 == (Intersectors *)0x0) goto LAB_00101928;
            lVar5 = 0;
            if (param_1 != (Intersectors *)0x0) {
              for (; ((ulong)param_1 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
              }
            }
            uVar9 = *(ulong *)(uVar14 + lVar5 * 8);
            uVar8 = *(uint *)(local_f98 + lVar22 * 4);
            uVar18 = *(uint *)(local_f98 + lVar5 * 4);
            uVar19 = (ulong)((PointQueryK *)param_1 + -1) & (ulong)param_1;
            if (uVar19 != 0) break;
            pPVar12 = pPVar10 + 0x10;
            param_1 = (Intersectors *)pPVar12;
            if (uVar18 <= uVar8) {
              *(ulong *)pPVar10 = uVar13;
              *(uint *)(pPVar10 + 8) = uVar8;
              goto LAB_00101928;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar13 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar18;
            if (iVar4 == 1) goto LAB_00101939;
LAB_00101a40:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00101b30;
            auVar37 = *(undefined1 (*) [16])(uVar13 + 0x20);
            auVar65._4_4_ = fVar3;
            auVar65._0_4_ = fVar3;
            auVar65._8_4_ = fVar3;
            auVar65._12_4_ = fVar3;
            auVar38._4_4_ = fVar2;
            auVar38._0_4_ = fVar2;
            auVar38._8_4_ = fVar2;
            auVar38._12_4_ = fVar2;
            auVar55 = maxps(auVar38,*(undefined1 (*) [16])(uVar13 + 0x40));
            auVar54 = *(undefined1 (*) [16])(uVar13 + 0x30);
            auVar55 = minps(auVar55,*(undefined1 (*) [16])(uVar13 + 0x50));
            auVar66 = maxps(auVar65,auVar37);
            auVar56._4_4_ = fVar1;
            auVar56._0_4_ = fVar1;
            auVar56._8_4_ = fVar1;
            auVar56._12_4_ = fVar1;
            auVar57 = maxps(auVar56,*(undefined1 (*) [16])(uVar13 + 0x60));
            fVar36 = auVar55._0_4_ - fVar2;
            fVar42 = auVar55._4_4_ - fVar2;
            fVar43 = auVar55._8_4_ - fVar2;
            fVar44 = auVar55._12_4_ - fVar2;
            auVar55 = minps(auVar57,*(undefined1 (*) [16])(uVar13 + 0x70));
            auVar57 = minps(auVar66,auVar54);
            fVar45 = auVar55._0_4_ - fVar1;
            fVar50 = auVar55._4_4_ - fVar1;
            fVar51 = auVar55._8_4_ - fVar1;
            fVar52 = auVar55._12_4_ - fVar1;
            fVar53 = auVar57._0_4_ - fVar3;
            fVar59 = auVar57._4_4_ - fVar3;
            fVar60 = auVar57._8_4_ - fVar3;
            fVar61 = auVar57._12_4_ - fVar3;
            auVar47._4_4_ = -(uint)(fVar1 + fVar29 < *(float *)(uVar13 + 100));
            auVar47._0_4_ = -(uint)(fVar1 + fVar28 < *(float *)(uVar13 + 0x60));
            auVar47._8_4_ = -(uint)(fVar1 + fVar30 < *(float *)(uVar13 + 0x68));
            auVar47._12_4_ = -(uint)(fVar1 + fVar31 < *(float *)(uVar13 + 0x6c));
            local_f98._0_4_ = fVar36 * fVar36 + fVar53 * fVar53 + fVar45 * fVar45;
            local_f98._4_4_ = fVar42 * fVar42 + fVar59 * fVar59 + fVar50 * fVar50;
            local_f98._8_4_ = fVar43 * fVar43 + fVar60 * fVar60 + fVar51 * fVar51;
            local_f98._12_4_ = fVar44 * fVar44 + fVar61 * fVar61 + fVar52 * fVar52;
            auVar69._4_4_ = -(uint)(*(float *)(uVar13 + 0x74) < fVar1 - fVar29);
            auVar69._0_4_ = -(uint)(*(float *)(uVar13 + 0x70) < fVar1 - fVar28);
            auVar69._8_4_ = -(uint)(*(float *)(uVar13 + 0x78) < fVar1 - fVar30);
            auVar69._12_4_ = -(uint)(*(float *)(uVar13 + 0x7c) < fVar1 - fVar31);
            auVar58._4_4_ = -(uint)(auVar37._4_4_ <= auVar54._4_4_);
            auVar58._0_4_ = -(uint)(auVar37._0_4_ <= auVar54._0_4_);
            auVar58._8_4_ = -(uint)(auVar37._8_4_ <= auVar54._8_4_);
            auVar58._12_4_ = -(uint)(auVar37._12_4_ <= auVar54._12_4_);
            auVar72._4_4_ = -(uint)(fVar2 + fVar33 < *(float *)(uVar13 + 0x44));
            auVar72._0_4_ = -(uint)(fVar2 + fVar32 < *(float *)(uVar13 + 0x40));
            auVar72._8_4_ = -(uint)(fVar2 + fVar34 < *(float *)(uVar13 + 0x48));
            auVar72._12_4_ = -(uint)(fVar2 + fVar35 < *(float *)(uVar13 + 0x4c));
            uVar18 = movmskps((int)param_1,auVar58);
            auVar75._4_4_ = -(uint)(*(float *)(uVar13 + 0x54) < fVar2 - fVar33);
            auVar75._0_4_ = -(uint)(*(float *)(uVar13 + 0x50) < fVar2 - fVar32);
            auVar75._8_4_ = -(uint)(*(float *)(uVar13 + 0x58) < fVar2 - fVar34);
            auVar75._12_4_ = -(uint)(*(float *)(uVar13 + 0x5c) < fVar2 - fVar35);
            auVar62._4_4_ = -(uint)(fVar3 + fVar24 < auVar37._4_4_);
            auVar62._0_4_ = -(uint)(fVar3 + fVar23 < auVar37._0_4_);
            auVar62._8_4_ = -(uint)(fVar3 + fVar25 < auVar37._8_4_);
            auVar62._12_4_ = -(uint)(fVar3 + fVar26 < auVar37._12_4_);
            auVar46._4_4_ = -(uint)(auVar54._4_4_ < fVar3 - fVar24);
            auVar46._0_4_ = -(uint)(auVar54._0_4_ < fVar3 - fVar23);
            auVar46._8_4_ = -(uint)(auVar54._8_4_ < fVar3 - fVar25);
            auVar46._12_4_ = -(uint)(auVar54._12_4_ < fVar3 - fVar26);
            auVar47 = auVar46 | auVar62 | auVar75 | auVar72 | auVar69 | auVar47;
            auVar48._0_4_ = auVar47._0_4_ ^ __LC0;
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001153b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001153b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001153bc;
            uVar8 = movmskps(0,auVar48);
            uVar8 = uVar8 & uVar18;
          }
          auVar49._8_4_ = uVar8;
          auVar49._0_8_ = uVar13;
          auVar49._12_4_ = 0;
          lVar22 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
            }
          }
          param_1 = *(Intersectors **)(uVar14 + lVar22 * 8);
          auVar63._8_4_ = uVar18;
          auVar63._0_8_ = uVar9;
          auVar63._12_4_ = 0;
          iVar4 = *(int *)(local_f98 + lVar22 * 4);
          auVar67._8_4_ = iVar4;
          auVar67._0_8_ = param_1;
          auVar67._12_4_ = 0;
          auVar39._8_4_ = -(uint)((int)uVar8 < (int)uVar18);
          uVar19 = uVar19 - 1 & uVar19;
          if (uVar19 == 0) {
            auVar39._4_4_ = auVar39._8_4_;
            auVar39._0_4_ = auVar39._8_4_;
            auVar39._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x20;
            auVar54 = auVar49 & auVar39 | ~auVar39 & auVar63;
            auVar64._8_4_ = -(uint)(auVar54._8_4_ < iVar4);
            auVar37 = auVar39 & auVar63 | ~auVar39 & auVar49;
            auVar64._0_8_ = CONCAT44(auVar64._8_4_,auVar64._8_4_);
            auVar64._12_4_ = auVar64._8_4_;
            auVar55 = auVar67 & auVar64 | ~auVar64 & auVar54;
            uVar9 = auVar54._0_8_ & auVar64._0_8_ | ~auVar64._0_8_ & (ulong)param_1;
            auVar73._8_4_ = -(uint)(auVar37._8_4_ < auVar55._8_4_);
            auVar73._4_4_ = auVar73._8_4_;
            auVar73._0_4_ = auVar73._8_4_;
            auVar73._12_4_ = auVar73._8_4_;
            *(undefined1 (*) [16])pPVar10 = auVar55 & auVar73 | ~auVar73 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar37 & auVar73 | ~auVar73 & auVar55;
          }
          else {
            lVar22 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            param_1 = *(Intersectors **)(uVar14 + lVar22 * 8);
            auVar40._4_4_ = auVar39._8_4_;
            auVar40._0_4_ = auVar39._8_4_;
            auVar40._8_4_ = auVar39._8_4_;
            auVar40._12_4_ = auVar39._8_4_;
            pPVar12 = pPVar10 + 0x30;
            auVar70._8_4_ = *(int *)(local_f98 + lVar22 * 4);
            auVar70._0_8_ = param_1;
            auVar70._12_4_ = 0;
            auVar55 = auVar49 & auVar40 | ~auVar40 & auVar63;
            auVar41._8_4_ = -(uint)(iVar4 < *(int *)(local_f98 + lVar22 * 4));
            auVar57 = auVar63 & auVar40 | ~auVar40 & auVar49;
            auVar41._4_4_ = auVar41._8_4_;
            auVar41._0_4_ = auVar41._8_4_;
            auVar41._12_4_ = auVar41._8_4_;
            auVar54 = auVar67 & auVar41 | ~auVar41 & auVar70;
            auVar37 = auVar41 & auVar70 | ~auVar41 & auVar67;
            auVar74._8_4_ = -(uint)(auVar57._8_4_ < auVar37._8_4_);
            auVar74._4_4_ = auVar74._8_4_;
            auVar74._0_4_ = auVar74._8_4_;
            auVar74._12_4_ = auVar74._8_4_;
            auVar66 = auVar57 & auVar74 | ~auVar74 & auVar37;
            auVar68._8_4_ = -(uint)(auVar55._8_4_ < auVar54._8_4_);
            *(undefined1 (*) [16])pPVar10 = auVar37 & auVar74 | ~auVar74 & auVar57;
            auVar68._0_8_ = CONCAT44(auVar68._8_4_,auVar68._8_4_);
            auVar68._12_4_ = auVar68._8_4_;
            auStack_1038._0_16_ = ~auVar68 & auVar54;
            auVar37 = auVar54 & auVar68 | ~auVar68 & auVar55;
            auVar71._8_4_ = -(uint)(auVar37._8_4_ < auVar66._8_4_);
            auVar71._4_4_ = auVar71._8_4_;
            auVar71._0_4_ = auVar71._8_4_;
            auVar71._12_4_ = auVar71._8_4_;
            *(undefined1 (*) [16])(pPVar10 + 0x10) = auVar66 & auVar71 | ~auVar71 & auVar37;
            *(undefined1 (*) [16])(pPVar10 + 0x20) = auVar37 & auVar71 | ~auVar71 & auVar66;
            uVar9 = auVar55._0_8_ & auVar68._0_8_ | SUB168(auStack_1038._0_16_,0);
          }
          goto LAB_00101928;
        }
LAB_00101b30:
        uVar9 = (ulong)((uint)uVar13 & 0xf);
        if (uVar9 == 8) break;
        puVar15 = (uint *)((uVar13 & 0xfffffffffffffff0) + 0xa0);
        lVar22 = 0;
        auVar6[0xf] = 0;
        auVar6._0_15_ = auStack_1038._1_15_;
        auStack_1038._0_16_ = auVar6 << 8;
        do {
          bVar21 = 0;
          puVar16 = puVar15 + -4;
          do {
            uVar8 = *puVar16;
            if (uVar8 == 0xffffffff) break;
            puVar17 = puVar16 + 1;
            param_1 = *(Intersectors **)(*(long *)(*(long *)param_3 + 0x1e0) + (ulong)uVar8 * 8);
            *(uint *)(param_3 + 0x44) = uVar8;
            *(uint *)(param_3 + 0x40) = puVar16[4];
            bVar7 = embree::Geometry::pointQuery
                              ((PointQueryK *)param_1,(PointQueryContext *)param_2);
            bVar21 = bVar21 | bVar7;
            puVar16 = puVar17;
          } while (puVar15 != puVar17);
          bVar21 = auStack_1038[0] | bVar21;
          auStack_1038[0] = bVar21;
          lVar22 = lVar22 + 1;
          puVar15 = puVar15 + 0x2c;
        } while (uVar9 - 8 != lVar22);
        if (bVar21 == 0) break;
        fVar23 = *(float *)(param_3 + 0x50);
        fVar32 = *(float *)(param_3 + 0x54);
        fVar28 = *(float *)(param_3 + 0x58);
        fVar24 = fVar23;
        fVar25 = fVar23;
        fVar26 = fVar23;
        fVar29 = fVar28;
        fVar30 = fVar28;
        fVar31 = fVar28;
        fVar33 = fVar32;
        fVar34 = fVar32;
        fVar35 = fVar32;
        if (*(int *)(param_3 + 0x18) == 1) {
          fVar27 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
          bVar20 = bVar21;
          break;
        }
        fVar27 = fVar23 * fVar23 + fVar32 * fVar32 + fVar28 * fVar28;
        pPVar11 = pPVar10;
        bVar20 = bVar21;
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00101c81;
      }
      goto LAB_00101900;
    }
  }
LAB_00101c81:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PointQueryK *pPVar5;
  long lVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  ulong in_R9;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar64;
  float fVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 local_1038 [32];
  undefined1 local_1018 [8];
  float fStack_1010;
  float fStack_100c;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float local_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  ulong uVar13;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    local_1018._4_4_ = *(undefined4 *)(param_3 + 0x58);
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    local_f80 = 0;
    fVar3 = *(float *)param_2;
    local_1018._0_4_ = local_1018._4_4_;
    fStack_1010 = (float)local_1018._4_4_;
    fStack_100c = (float)local_1018._4_4_;
    local_fa8 = *(float *)(param_3 + 0x54);
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    fVar24 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar23 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pauVar17 = (undefined1 (*) [16])local_f78;
    fVar25 = fVar24;
    fVar26 = fVar24;
    fVar27 = fVar24;
    fStack_fa4 = local_fa8;
    fStack_fa0 = local_fa8;
    fStack_f9c = local_fa8;
    bVar20 = 0;
LAB_00102060:
    bVar21 = bVar20;
    pauVar16 = pauVar17;
    bVar20 = bVar21;
    if (pauVar17 != (undefined1 (*) [16])local_f88) {
LAB_00102069:
      pauVar17 = pauVar16 + -1;
      if (*(float *)(pauVar16[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar16[-1];
LAB_00102098:
        uVar12 = (uint)uVar11 & 0xf;
        uVar13 = (ulong)uVar12;
        uVar10 = (uint)uVar11 & 8;
        piVar9 = (int *)(uVar11 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00102210;
          auVar29._4_4_ = fVar2;
          auVar29._0_4_ = fVar2;
          auVar29._8_4_ = fVar2;
          auVar29._12_4_ = fVar2;
          auVar55._4_4_ = fVar3;
          auVar55._0_4_ = fVar3;
          auVar55._8_4_ = fVar3;
          auVar55._12_4_ = fVar3;
          auVar39._0_4_ = (float)piVar9[0x28] * fVar4 + (float)piVar9[0x10];
          auVar39._4_4_ = (float)piVar9[0x29] * fVar4 + (float)piVar9[0x11];
          auVar39._8_4_ = (float)piVar9[0x2a] * fVar4 + (float)piVar9[0x12];
          auVar39._12_4_ = (float)piVar9[0x2b] * fVar4 + (float)piVar9[0x13];
          auVar47._0_4_ = (float)piVar9[0x20] * fVar4 + (float)piVar9[8];
          auVar47._4_4_ = (float)piVar9[0x21] * fVar4 + (float)piVar9[9];
          auVar47._8_4_ = (float)piVar9[0x22] * fVar4 + (float)piVar9[10];
          auVar47._12_4_ = (float)piVar9[0x23] * fVar4 + (float)piVar9[0xb];
          auVar67._0_4_ = (float)piVar9[0x30] * fVar4 + (float)piVar9[0x18];
          auVar67._4_4_ = (float)piVar9[0x31] * fVar4 + (float)piVar9[0x19];
          auVar67._8_4_ = (float)piVar9[0x32] * fVar4 + (float)piVar9[0x1a];
          auVar67._12_4_ = (float)piVar9[0x33] * fVar4 + (float)piVar9[0x1b];
          auVar30 = maxps(auVar29,auVar39);
          auVar49._0_4_ = (float)piVar9[0x24] * fVar4 + (float)piVar9[0xc];
          auVar49._4_4_ = (float)piVar9[0x25] * fVar4 + (float)piVar9[0xd];
          auVar49._8_4_ = (float)piVar9[0x26] * fVar4 + (float)piVar9[0xe];
          auVar49._12_4_ = (float)piVar9[0x27] * fVar4 + (float)piVar9[0xf];
          auVar56 = maxps(auVar55,auVar47);
          auVar40._0_4_ = (float)piVar9[0x2c] * fVar4 + (float)piVar9[0x14];
          auVar40._4_4_ = (float)piVar9[0x2d] * fVar4 + (float)piVar9[0x15];
          auVar40._8_4_ = (float)piVar9[0x2e] * fVar4 + (float)piVar9[0x16];
          auVar40._12_4_ = (float)piVar9[0x2f] * fVar4 + (float)piVar9[0x17];
          auVar48._4_4_ = -(uint)(auVar47._4_4_ <= auVar49._4_4_);
          auVar48._0_4_ = -(uint)(auVar47._0_4_ <= auVar49._0_4_);
          auVar48._8_4_ = -(uint)(auVar47._8_4_ <= auVar49._8_4_);
          auVar48._12_4_ = -(uint)(auVar47._12_4_ <= auVar49._12_4_);
          auVar57 = minps(auVar56,auVar49);
          auVar30 = minps(auVar30,auVar40);
          auVar41._4_4_ = fVar1;
          auVar41._0_4_ = fVar1;
          auVar41._8_4_ = fVar1;
          auVar41._12_4_ = fVar1;
          uVar18 = movmskps((int)in_R9,auVar48);
          in_R9 = (ulong)uVar18;
          auVar56 = maxps(auVar41,auVar67);
          fVar54 = auVar57._0_4_ - fVar3;
          fVar64 = auVar57._4_4_ - fVar3;
          fVar65 = auVar57._8_4_ - fVar3;
          fVar66 = auVar57._12_4_ - fVar3;
          fVar28 = auVar30._0_4_ - fVar2;
          fVar35 = auVar30._4_4_ - fVar2;
          fVar36 = auVar30._8_4_ - fVar2;
          fVar37 = auVar30._12_4_ - fVar2;
          auVar68._0_4_ = (float)piVar9[0x34] * fVar4 + (float)piVar9[0x1c];
          auVar68._4_4_ = (float)piVar9[0x35] * fVar4 + (float)piVar9[0x1d];
          auVar68._8_4_ = (float)piVar9[0x36] * fVar4 + (float)piVar9[0x1e];
          auVar68._12_4_ = (float)piVar9[0x37] * fVar4 + (float)piVar9[0x1f];
          auVar30 = minps(auVar56,auVar68);
          fVar38 = auVar30._0_4_ - fVar1;
          fVar44 = auVar30._4_4_ - fVar1;
          fVar45 = auVar30._8_4_ - fVar1;
          fVar46 = auVar30._12_4_ - fVar1;
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar31._4_4_ = -(uint)(local_f98[1] <= fVar25 * fVar25);
          auVar31._0_4_ = -(uint)(local_f98[0] <= fVar24 * fVar24);
          auVar31._8_4_ = -(uint)(local_f98[2] <= fVar26 * fVar26);
          auVar31._12_4_ = -(uint)(local_f98[3] <= fVar27 * fVar27);
          uVar10 = movmskps(uVar10,auVar31);
          uVar10 = uVar10 & uVar18;
          if (uVar13 == 6) {
            auVar33._0_4_ = -(uint)((float)piVar9[0x38] <= fVar4 && fVar4 < (float)piVar9[0x3c]);
            auVar33._4_4_ = -(uint)((float)piVar9[0x39] <= fVar4 && fVar4 < (float)piVar9[0x3d]);
            auVar33._8_4_ = -(uint)((float)piVar9[0x3a] <= fVar4 && fVar4 < (float)piVar9[0x3e]);
            auVar33._12_4_ = -(uint)((float)piVar9[0x3b] <= fVar4 && fVar4 < (float)piVar9[0x3f]);
            uVar12 = movmskps(uVar12,auVar33);
            uVar10 = uVar10 & uVar12;
          }
        }
        else {
          if ((uVar11 & 8) != 0) goto LAB_00102210;
          auVar50._4_4_ = fVar2;
          auVar50._0_4_ = fVar2;
          auVar50._8_4_ = fVar2;
          auVar50._12_4_ = fVar2;
          auVar58._0_4_ = (float)piVar9[0x20] * fVar4 + (float)piVar9[8];
          auVar58._4_4_ = (float)piVar9[0x21] * fVar4 + (float)piVar9[9];
          auVar58._8_4_ = (float)piVar9[0x22] * fVar4 + (float)piVar9[10];
          auVar58._12_4_ = (float)piVar9[0x23] * fVar4 + (float)piVar9[0xb];
          auVar79._0_4_ = (float)piVar9[0x28] * fVar4 + (float)piVar9[0x10];
          auVar79._4_4_ = (float)piVar9[0x29] * fVar4 + (float)piVar9[0x11];
          auVar79._8_4_ = (float)piVar9[0x2a] * fVar4 + (float)piVar9[0x12];
          auVar79._12_4_ = (float)piVar9[0x2b] * fVar4 + (float)piVar9[0x13];
          auVar30._0_4_ = (float)piVar9[0x24] * fVar4 + (float)piVar9[0xc];
          auVar30._4_4_ = (float)piVar9[0x25] * fVar4 + (float)piVar9[0xd];
          auVar30._8_4_ = (float)piVar9[0x26] * fVar4 + (float)piVar9[0xe];
          auVar30._12_4_ = (float)piVar9[0x27] * fVar4 + (float)piVar9[0xf];
          local_1038._0_4_ = (float)piVar9[0x14] + (float)piVar9[0x2c] * fVar4;
          local_1038._4_4_ = (float)piVar9[0x15] + (float)piVar9[0x2d] * fVar4;
          local_1038._8_4_ = (float)piVar9[0x16] + (float)piVar9[0x2e] * fVar4;
          local_1038._12_4_ = (float)piVar9[0x17] + (float)piVar9[0x2f] * fVar4;
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar71._0_4_ = (float)piVar9[0x30] * fVar4 + (float)piVar9[0x18];
          auVar71._4_4_ = (float)piVar9[0x31] * fVar4 + (float)piVar9[0x19];
          auVar71._8_4_ = (float)piVar9[0x32] * fVar4 + (float)piVar9[0x1a];
          auVar71._12_4_ = (float)piVar9[0x33] * fVar4 + (float)piVar9[0x1b];
          auVar56 = maxps(auVar57,auVar58);
          auVar57 = maxps(auVar50,auVar79);
          auVar77._0_4_ = (float)piVar9[0x34] * fVar4 + (float)piVar9[0x1c];
          auVar77._4_4_ = (float)piVar9[0x35] * fVar4 + (float)piVar9[0x1d];
          auVar77._8_4_ = (float)piVar9[0x36] * fVar4 + (float)piVar9[0x1e];
          auVar77._12_4_ = (float)piVar9[0x37] * fVar4 + (float)piVar9[0x1f];
          auVar56 = minps(auVar56,auVar30);
          auVar53 = minps(auVar57,local_1038._0_16_);
          auVar62._4_4_ = fVar1;
          auVar62._0_4_ = fVar1;
          auVar62._8_4_ = fVar1;
          auVar62._12_4_ = fVar1;
          auVar57 = maxps(auVar62,auVar71);
          fVar28 = auVar56._0_4_ - fVar3;
          fVar35 = auVar56._4_4_ - fVar3;
          fVar36 = auVar56._8_4_ - fVar3;
          fVar37 = auVar56._12_4_ - fVar3;
          fVar54 = auVar53._0_4_ - fVar2;
          fVar64 = auVar53._4_4_ - fVar2;
          fVar65 = auVar53._8_4_ - fVar2;
          fVar66 = auVar53._12_4_ - fVar2;
          auVar56 = minps(auVar57,auVar77);
          fVar38 = auVar56._0_4_ - fVar1;
          fVar44 = auVar56._4_4_ - fVar1;
          fVar45 = auVar56._8_4_ - fVar1;
          fVar46 = auVar56._12_4_ - fVar1;
          auVar73._4_4_ = -(uint)((float)local_1018._4_4_ + fVar1 < auVar71._4_4_);
          auVar73._0_4_ = -(uint)((float)local_1018._0_4_ + fVar1 < auVar71._0_4_);
          auVar73._8_4_ = -(uint)(fStack_1010 + fVar1 < auVar71._8_4_);
          auVar73._12_4_ = -(uint)(fStack_100c + fVar1 < auVar71._12_4_);
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar53._4_4_ = -(uint)(auVar58._4_4_ <= auVar30._4_4_);
          auVar53._0_4_ = -(uint)(auVar58._0_4_ <= auVar30._0_4_);
          auVar53._8_4_ = -(uint)(auVar58._8_4_ <= auVar30._8_4_);
          auVar53._12_4_ = -(uint)(auVar58._12_4_ <= auVar30._12_4_);
          auVar78._4_4_ = -(uint)(auVar77._4_4_ < fVar1 - (float)local_1018._4_4_);
          auVar78._0_4_ = -(uint)(auVar77._0_4_ < fVar1 - (float)local_1018._0_4_);
          auVar78._8_4_ = -(uint)(auVar77._8_4_ < fVar1 - fStack_1010);
          auVar78._12_4_ = -(uint)(auVar77._12_4_ < fVar1 - fStack_100c);
          uVar18 = movmskps((int)in_R9,auVar53);
          in_R9 = (ulong)uVar18;
          auVar80._4_4_ = -(uint)(fStack_fa4 + fVar2 < auVar79._4_4_);
          auVar80._0_4_ = -(uint)(local_fa8 + fVar2 < auVar79._0_4_);
          auVar80._8_4_ = -(uint)(fStack_fa0 + fVar2 < auVar79._8_4_);
          auVar80._12_4_ = -(uint)(fStack_f9c + fVar2 < auVar79._12_4_);
          auVar72._4_4_ = -(uint)(local_1038._4_4_ < fVar2 - fStack_fa4);
          auVar72._0_4_ = -(uint)(local_1038._0_4_ < fVar2 - local_fa8);
          auVar72._8_4_ = -(uint)(local_1038._8_4_ < fVar2 - fStack_fa0);
          auVar72._12_4_ = -(uint)(local_1038._12_4_ < fVar2 - fStack_f9c);
          auVar59._4_4_ = -(uint)(fVar3 + fVar25 < auVar58._4_4_);
          auVar59._0_4_ = -(uint)(fVar3 + fVar24 < auVar58._0_4_);
          auVar59._8_4_ = -(uint)(fVar3 + fVar26 < auVar58._8_4_);
          auVar59._12_4_ = -(uint)(fVar3 + fVar27 < auVar58._12_4_);
          auVar56._4_4_ = -(uint)(auVar30._4_4_ < fVar3 - fVar25);
          auVar56._0_4_ = -(uint)(auVar30._0_4_ < fVar3 - fVar24);
          auVar56._8_4_ = -(uint)(auVar30._8_4_ < fVar3 - fVar26);
          auVar56._12_4_ = -(uint)(auVar30._12_4_ < fVar3 - fVar27);
          auVar73 = auVar72 | auVar56 | auVar59 | auVar80 | auVar78 | auVar73;
          auVar74._0_4_ = auVar73._0_4_ ^ __LC0;
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001153b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001153b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001153bc;
          uVar10 = movmskps(uVar10,auVar74);
          uVar10 = uVar10 & uVar18;
          if (uVar13 == 6) {
            auVar32._0_4_ = -(uint)((float)piVar9[0x38] <= fVar4 && fVar4 < (float)piVar9[0x3c]);
            auVar32._4_4_ = -(uint)((float)piVar9[0x39] <= fVar4 && fVar4 < (float)piVar9[0x3d]);
            auVar32._8_4_ = -(uint)((float)piVar9[0x3a] <= fVar4 && fVar4 < (float)piVar9[0x3e]);
            auVar32._12_4_ = -(uint)((float)piVar9[0x3b] <= fVar4 && fVar4 < (float)piVar9[0x3f]);
            uVar12 = movmskps(uVar12,auVar32);
            uVar10 = uVar10 & uVar12;
          }
        }
        uVar11 = (ulong)(int)uVar10;
        if (uVar11 == 0) goto LAB_00102060;
        lVar22 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
          }
        }
        uVar13 = *(ulong *)(piVar9 + lVar22 * 2);
        in_R9 = uVar11 - 1 & uVar11;
        uVar11 = uVar13;
        if (in_R9 != 0) {
          lVar6 = 0;
          if (in_R9 != 0) {
            for (; (in_R9 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
            }
          }
          uVar11 = *(ulong *)(piVar9 + lVar6 * 2);
          fVar28 = local_f98[lVar22];
          fVar35 = local_f98[lVar6];
          uVar19 = in_R9 - 1 & in_R9;
          if (uVar19 == 0) {
            if ((uint)fVar28 < (uint)fVar35) {
              *(ulong *)*pauVar17 = uVar11;
              *(float *)(*pauVar17 + 8) = fVar35;
              uVar11 = uVar13;
              pauVar17 = pauVar17 + 1;
            }
            else {
              *(ulong *)*pauVar17 = uVar13;
              *(float *)(*pauVar17 + 8) = fVar28;
              pauVar17 = pauVar17 + 1;
            }
          }
          else {
            in_R9 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> in_R9 & 1) == 0; in_R9 = in_R9 + 1) {
              }
            }
            auVar51._8_4_ = fVar28;
            auVar51._0_8_ = uVar13;
            auVar51._12_4_ = 0;
            fVar36 = local_f98[in_R9];
            auVar60._8_4_ = fVar35;
            auVar60._0_8_ = uVar11;
            auVar60._12_4_ = 0;
            auVar34._8_4_ = fVar36;
            auVar34._0_8_ = *(ulong *)(piVar9 + in_R9 * 2);
            auVar34._12_4_ = 0;
            auVar42._8_4_ = -(uint)((int)fVar28 < (int)fVar35);
            uVar19 = uVar19 - 1 & uVar19;
            if (uVar19 == 0) {
              auVar42._4_4_ = auVar42._8_4_;
              auVar42._0_4_ = auVar42._8_4_;
              auVar42._12_4_ = auVar42._8_4_;
              auVar57 = auVar51 & auVar42 | ~auVar42 & auVar60;
              auVar61._8_4_ = -(uint)(auVar57._8_4_ < (int)fVar36);
              auVar56 = auVar42 & auVar60 | ~auVar42 & auVar51;
              auVar61._0_8_ = CONCAT44(auVar61._8_4_,auVar61._8_4_);
              auVar61._12_4_ = auVar61._8_4_;
              auVar30 = auVar34 & auVar61 | ~auVar61 & auVar57;
              uVar11 = auVar57._0_8_ & auVar61._0_8_ |
                       ~auVar61._0_8_ & *(ulong *)(piVar9 + in_R9 * 2);
              auVar75._8_4_ = -(uint)(auVar56._8_4_ < auVar30._8_4_);
              auVar75._4_4_ = auVar75._8_4_;
              auVar75._0_4_ = auVar75._8_4_;
              auVar75._12_4_ = auVar75._8_4_;
              *pauVar17 = auVar30 & auVar75 | ~auVar75 & auVar56;
              pauVar17[1] = auVar56 & auVar75 | ~auVar75 & auVar30;
              pauVar17 = pauVar17 + 2;
            }
            else {
              lVar22 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
                }
              }
              auVar43._4_4_ = auVar42._8_4_;
              auVar43._0_4_ = auVar42._8_4_;
              auVar43._8_4_ = auVar42._8_4_;
              auVar43._12_4_ = auVar42._8_4_;
              auVar69._8_4_ = local_f98[lVar22];
              auVar69._0_8_ = *(undefined8 *)(piVar9 + lVar22 * 2);
              auVar69._12_4_ = 0;
              auVar57 = auVar51 & auVar43 | ~auVar43 & auVar60;
              auVar52._8_4_ = -(uint)((int)fVar36 < (int)local_f98[lVar22]);
              auVar62 = auVar60 & auVar43 | ~auVar43 & auVar51;
              auVar52._4_4_ = auVar52._8_4_;
              auVar52._0_4_ = auVar52._8_4_;
              auVar52._12_4_ = auVar52._8_4_;
              auVar56 = auVar34 & auVar52 | ~auVar52 & auVar69;
              auVar30 = auVar69 & auVar52 | ~auVar52 & auVar34;
              auVar76._8_4_ = -(uint)(auVar62._8_4_ < auVar30._8_4_);
              auVar76._4_4_ = auVar76._8_4_;
              auVar76._0_4_ = auVar76._8_4_;
              auVar76._12_4_ = auVar76._8_4_;
              auVar63._8_4_ = -(uint)(auVar57._8_4_ < auVar56._8_4_);
              auVar53 = auVar62 & auVar76 | ~auVar76 & auVar30;
              *pauVar17 = auVar30 & auVar76 | ~auVar76 & auVar62;
              auVar63._0_8_ = CONCAT44(auVar63._8_4_,auVar63._8_4_);
              auVar63._12_4_ = auVar63._8_4_;
              local_1038._0_16_ = ~auVar63 & auVar56;
              auVar30 = auVar56 & auVar63 | ~auVar63 & auVar57;
              auVar70._8_4_ = -(uint)(auVar30._8_4_ < auVar53._8_4_);
              auVar70._4_4_ = auVar70._8_4_;
              auVar70._0_4_ = auVar70._8_4_;
              auVar70._12_4_ = auVar70._8_4_;
              pauVar17[1] = auVar53 & auVar70 | ~auVar70 & auVar30;
              pauVar17[2] = auVar30 & auVar70 | ~auVar70 & auVar53;
              uVar11 = SUB168(local_1038._0_16_,0) | auVar57._0_8_ & auVar63._0_8_;
              pauVar17 = pauVar17 + 3;
            }
          }
        }
        goto LAB_00102098;
      }
      goto LAB_00102060;
    }
  }
LAB_00102344:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
LAB_00102210:
  if (uVar13 == 8) goto LAB_00102060;
  lVar22 = 0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_1038._1_15_;
  local_1038._0_16_ = auVar7 << 8;
  do {
    bVar21 = 0;
    piVar14 = piVar9 + 0x10;
    do {
      if (*piVar14 == -1) break;
      in_R9 = (ulong)(uint)piVar14[-4];
      piVar15 = piVar14 + 1;
      pPVar5 = *(PointQueryK **)(*(long *)(*(long *)param_3 + 0x1e0) + in_R9 * 8);
      *(int *)(param_3 + 0x44) = piVar14[-4];
      *(int *)(param_3 + 0x40) = *piVar14;
      bVar8 = embree::Geometry::pointQuery(pPVar5,(PointQueryContext *)param_2);
      bVar21 = bVar21 | bVar8;
      piVar14 = piVar15;
    } while (piVar9 + 0x14 != piVar15);
    bVar21 = local_1038[0] | bVar21;
    local_1038[0] = bVar21;
    lVar22 = lVar22 + 1;
    piVar9 = piVar9 + 0x14;
  } while (uVar13 - 8 != lVar22);
  if (bVar21 == 0) goto LAB_00102060;
  fVar24 = *(float *)(param_3 + 0x50);
  local_fa8 = *(float *)(param_3 + 0x54);
  fVar23 = *(float *)(param_3 + 0x58);
  local_1018._4_4_ = fVar23;
  local_1018._0_4_ = fVar23;
  fStack_1010 = fVar23;
  fStack_100c = fVar23;
  fVar25 = fVar24;
  fVar26 = fVar24;
  fVar27 = fVar24;
  fStack_fa4 = local_fa8;
  fStack_fa0 = local_fa8;
  fStack_f9c = local_fa8;
  if (*(int *)(param_3 + 0x18) == 1) {
    fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    bVar20 = bVar21;
    goto LAB_00102060;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar16 = pauVar17;
  bVar20 = bVar21;
  if (pauVar17 == (undefined1 (*) [16])local_f88) goto LAB_00102344;
  goto LAB_00102069;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PointQueryK *pPVar5;
  long lVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  ulong in_R9;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long lVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar64;
  float fVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 local_1038 [32];
  undefined1 local_1018 [8];
  float fStack_1010;
  float fStack_100c;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float local_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  ulong uVar13;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    local_1018._4_4_ = *(undefined4 *)(param_3 + 0x58);
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    local_f80 = 0;
    fVar3 = *(float *)param_2;
    local_1018._0_4_ = local_1018._4_4_;
    fStack_1010 = (float)local_1018._4_4_;
    fStack_100c = (float)local_1018._4_4_;
    local_fa8 = *(float *)(param_3 + 0x54);
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    fVar24 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar23 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pauVar17 = (undefined1 (*) [16])local_f78;
    fVar25 = fVar24;
    fVar26 = fVar24;
    fVar27 = fVar24;
    fStack_fa4 = local_fa8;
    fStack_fa0 = local_fa8;
    fStack_f9c = local_fa8;
    bVar20 = 0;
LAB_001028e0:
    bVar21 = bVar20;
    pauVar16 = pauVar17;
    bVar20 = bVar21;
    if (pauVar17 != (undefined1 (*) [16])local_f88) {
LAB_001028e9:
      pauVar17 = pauVar16 + -1;
      if (*(float *)(pauVar16[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar16[-1];
LAB_00102918:
        uVar12 = (uint)uVar11 & 0xf;
        uVar13 = (ulong)uVar12;
        uVar10 = (uint)uVar11 & 8;
        piVar9 = (int *)(uVar11 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00102a90;
          auVar29._4_4_ = fVar2;
          auVar29._0_4_ = fVar2;
          auVar29._8_4_ = fVar2;
          auVar29._12_4_ = fVar2;
          auVar55._4_4_ = fVar3;
          auVar55._0_4_ = fVar3;
          auVar55._8_4_ = fVar3;
          auVar55._12_4_ = fVar3;
          auVar39._0_4_ = (float)piVar9[0x28] * fVar4 + (float)piVar9[0x10];
          auVar39._4_4_ = (float)piVar9[0x29] * fVar4 + (float)piVar9[0x11];
          auVar39._8_4_ = (float)piVar9[0x2a] * fVar4 + (float)piVar9[0x12];
          auVar39._12_4_ = (float)piVar9[0x2b] * fVar4 + (float)piVar9[0x13];
          auVar47._0_4_ = (float)piVar9[0x20] * fVar4 + (float)piVar9[8];
          auVar47._4_4_ = (float)piVar9[0x21] * fVar4 + (float)piVar9[9];
          auVar47._8_4_ = (float)piVar9[0x22] * fVar4 + (float)piVar9[10];
          auVar47._12_4_ = (float)piVar9[0x23] * fVar4 + (float)piVar9[0xb];
          auVar67._0_4_ = (float)piVar9[0x30] * fVar4 + (float)piVar9[0x18];
          auVar67._4_4_ = (float)piVar9[0x31] * fVar4 + (float)piVar9[0x19];
          auVar67._8_4_ = (float)piVar9[0x32] * fVar4 + (float)piVar9[0x1a];
          auVar67._12_4_ = (float)piVar9[0x33] * fVar4 + (float)piVar9[0x1b];
          auVar30 = maxps(auVar29,auVar39);
          auVar49._0_4_ = (float)piVar9[0x24] * fVar4 + (float)piVar9[0xc];
          auVar49._4_4_ = (float)piVar9[0x25] * fVar4 + (float)piVar9[0xd];
          auVar49._8_4_ = (float)piVar9[0x26] * fVar4 + (float)piVar9[0xe];
          auVar49._12_4_ = (float)piVar9[0x27] * fVar4 + (float)piVar9[0xf];
          auVar56 = maxps(auVar55,auVar47);
          auVar40._0_4_ = (float)piVar9[0x2c] * fVar4 + (float)piVar9[0x14];
          auVar40._4_4_ = (float)piVar9[0x2d] * fVar4 + (float)piVar9[0x15];
          auVar40._8_4_ = (float)piVar9[0x2e] * fVar4 + (float)piVar9[0x16];
          auVar40._12_4_ = (float)piVar9[0x2f] * fVar4 + (float)piVar9[0x17];
          auVar48._4_4_ = -(uint)(auVar47._4_4_ <= auVar49._4_4_);
          auVar48._0_4_ = -(uint)(auVar47._0_4_ <= auVar49._0_4_);
          auVar48._8_4_ = -(uint)(auVar47._8_4_ <= auVar49._8_4_);
          auVar48._12_4_ = -(uint)(auVar47._12_4_ <= auVar49._12_4_);
          auVar57 = minps(auVar56,auVar49);
          auVar30 = minps(auVar30,auVar40);
          auVar41._4_4_ = fVar1;
          auVar41._0_4_ = fVar1;
          auVar41._8_4_ = fVar1;
          auVar41._12_4_ = fVar1;
          uVar18 = movmskps((int)in_R9,auVar48);
          in_R9 = (ulong)uVar18;
          auVar56 = maxps(auVar41,auVar67);
          fVar54 = auVar57._0_4_ - fVar3;
          fVar64 = auVar57._4_4_ - fVar3;
          fVar65 = auVar57._8_4_ - fVar3;
          fVar66 = auVar57._12_4_ - fVar3;
          fVar28 = auVar30._0_4_ - fVar2;
          fVar35 = auVar30._4_4_ - fVar2;
          fVar36 = auVar30._8_4_ - fVar2;
          fVar37 = auVar30._12_4_ - fVar2;
          auVar68._0_4_ = (float)piVar9[0x34] * fVar4 + (float)piVar9[0x1c];
          auVar68._4_4_ = (float)piVar9[0x35] * fVar4 + (float)piVar9[0x1d];
          auVar68._8_4_ = (float)piVar9[0x36] * fVar4 + (float)piVar9[0x1e];
          auVar68._12_4_ = (float)piVar9[0x37] * fVar4 + (float)piVar9[0x1f];
          auVar30 = minps(auVar56,auVar68);
          fVar38 = auVar30._0_4_ - fVar1;
          fVar44 = auVar30._4_4_ - fVar1;
          fVar45 = auVar30._8_4_ - fVar1;
          fVar46 = auVar30._12_4_ - fVar1;
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar31._4_4_ = -(uint)(local_f98[1] <= fVar25 * fVar25);
          auVar31._0_4_ = -(uint)(local_f98[0] <= fVar24 * fVar24);
          auVar31._8_4_ = -(uint)(local_f98[2] <= fVar26 * fVar26);
          auVar31._12_4_ = -(uint)(local_f98[3] <= fVar27 * fVar27);
          uVar10 = movmskps(uVar10,auVar31);
          uVar10 = uVar10 & uVar18;
          if (uVar13 == 6) {
            auVar33._0_4_ = -(uint)((float)piVar9[0x38] <= fVar4 && fVar4 < (float)piVar9[0x3c]);
            auVar33._4_4_ = -(uint)((float)piVar9[0x39] <= fVar4 && fVar4 < (float)piVar9[0x3d]);
            auVar33._8_4_ = -(uint)((float)piVar9[0x3a] <= fVar4 && fVar4 < (float)piVar9[0x3e]);
            auVar33._12_4_ = -(uint)((float)piVar9[0x3b] <= fVar4 && fVar4 < (float)piVar9[0x3f]);
            uVar12 = movmskps(uVar12,auVar33);
            uVar10 = uVar10 & uVar12;
          }
        }
        else {
          if ((uVar11 & 8) != 0) goto LAB_00102a90;
          auVar50._4_4_ = fVar2;
          auVar50._0_4_ = fVar2;
          auVar50._8_4_ = fVar2;
          auVar50._12_4_ = fVar2;
          auVar58._0_4_ = (float)piVar9[0x20] * fVar4 + (float)piVar9[8];
          auVar58._4_4_ = (float)piVar9[0x21] * fVar4 + (float)piVar9[9];
          auVar58._8_4_ = (float)piVar9[0x22] * fVar4 + (float)piVar9[10];
          auVar58._12_4_ = (float)piVar9[0x23] * fVar4 + (float)piVar9[0xb];
          auVar79._0_4_ = (float)piVar9[0x28] * fVar4 + (float)piVar9[0x10];
          auVar79._4_4_ = (float)piVar9[0x29] * fVar4 + (float)piVar9[0x11];
          auVar79._8_4_ = (float)piVar9[0x2a] * fVar4 + (float)piVar9[0x12];
          auVar79._12_4_ = (float)piVar9[0x2b] * fVar4 + (float)piVar9[0x13];
          auVar30._0_4_ = (float)piVar9[0x24] * fVar4 + (float)piVar9[0xc];
          auVar30._4_4_ = (float)piVar9[0x25] * fVar4 + (float)piVar9[0xd];
          auVar30._8_4_ = (float)piVar9[0x26] * fVar4 + (float)piVar9[0xe];
          auVar30._12_4_ = (float)piVar9[0x27] * fVar4 + (float)piVar9[0xf];
          local_1038._0_4_ = (float)piVar9[0x14] + (float)piVar9[0x2c] * fVar4;
          local_1038._4_4_ = (float)piVar9[0x15] + (float)piVar9[0x2d] * fVar4;
          local_1038._8_4_ = (float)piVar9[0x16] + (float)piVar9[0x2e] * fVar4;
          local_1038._12_4_ = (float)piVar9[0x17] + (float)piVar9[0x2f] * fVar4;
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar71._0_4_ = (float)piVar9[0x30] * fVar4 + (float)piVar9[0x18];
          auVar71._4_4_ = (float)piVar9[0x31] * fVar4 + (float)piVar9[0x19];
          auVar71._8_4_ = (float)piVar9[0x32] * fVar4 + (float)piVar9[0x1a];
          auVar71._12_4_ = (float)piVar9[0x33] * fVar4 + (float)piVar9[0x1b];
          auVar56 = maxps(auVar57,auVar58);
          auVar57 = maxps(auVar50,auVar79);
          auVar77._0_4_ = (float)piVar9[0x34] * fVar4 + (float)piVar9[0x1c];
          auVar77._4_4_ = (float)piVar9[0x35] * fVar4 + (float)piVar9[0x1d];
          auVar77._8_4_ = (float)piVar9[0x36] * fVar4 + (float)piVar9[0x1e];
          auVar77._12_4_ = (float)piVar9[0x37] * fVar4 + (float)piVar9[0x1f];
          auVar56 = minps(auVar56,auVar30);
          auVar53 = minps(auVar57,local_1038._0_16_);
          auVar62._4_4_ = fVar1;
          auVar62._0_4_ = fVar1;
          auVar62._8_4_ = fVar1;
          auVar62._12_4_ = fVar1;
          auVar57 = maxps(auVar62,auVar71);
          fVar28 = auVar56._0_4_ - fVar3;
          fVar35 = auVar56._4_4_ - fVar3;
          fVar36 = auVar56._8_4_ - fVar3;
          fVar37 = auVar56._12_4_ - fVar3;
          fVar54 = auVar53._0_4_ - fVar2;
          fVar64 = auVar53._4_4_ - fVar2;
          fVar65 = auVar53._8_4_ - fVar2;
          fVar66 = auVar53._12_4_ - fVar2;
          auVar56 = minps(auVar57,auVar77);
          fVar38 = auVar56._0_4_ - fVar1;
          fVar44 = auVar56._4_4_ - fVar1;
          fVar45 = auVar56._8_4_ - fVar1;
          fVar46 = auVar56._12_4_ - fVar1;
          auVar73._4_4_ = -(uint)((float)local_1018._4_4_ + fVar1 < auVar71._4_4_);
          auVar73._0_4_ = -(uint)((float)local_1018._0_4_ + fVar1 < auVar71._0_4_);
          auVar73._8_4_ = -(uint)(fStack_1010 + fVar1 < auVar71._8_4_);
          auVar73._12_4_ = -(uint)(fStack_100c + fVar1 < auVar71._12_4_);
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar53._4_4_ = -(uint)(auVar58._4_4_ <= auVar30._4_4_);
          auVar53._0_4_ = -(uint)(auVar58._0_4_ <= auVar30._0_4_);
          auVar53._8_4_ = -(uint)(auVar58._8_4_ <= auVar30._8_4_);
          auVar53._12_4_ = -(uint)(auVar58._12_4_ <= auVar30._12_4_);
          auVar78._4_4_ = -(uint)(auVar77._4_4_ < fVar1 - (float)local_1018._4_4_);
          auVar78._0_4_ = -(uint)(auVar77._0_4_ < fVar1 - (float)local_1018._0_4_);
          auVar78._8_4_ = -(uint)(auVar77._8_4_ < fVar1 - fStack_1010);
          auVar78._12_4_ = -(uint)(auVar77._12_4_ < fVar1 - fStack_100c);
          uVar18 = movmskps((int)in_R9,auVar53);
          in_R9 = (ulong)uVar18;
          auVar80._4_4_ = -(uint)(fStack_fa4 + fVar2 < auVar79._4_4_);
          auVar80._0_4_ = -(uint)(local_fa8 + fVar2 < auVar79._0_4_);
          auVar80._8_4_ = -(uint)(fStack_fa0 + fVar2 < auVar79._8_4_);
          auVar80._12_4_ = -(uint)(fStack_f9c + fVar2 < auVar79._12_4_);
          auVar72._4_4_ = -(uint)(local_1038._4_4_ < fVar2 - fStack_fa4);
          auVar72._0_4_ = -(uint)(local_1038._0_4_ < fVar2 - local_fa8);
          auVar72._8_4_ = -(uint)(local_1038._8_4_ < fVar2 - fStack_fa0);
          auVar72._12_4_ = -(uint)(local_1038._12_4_ < fVar2 - fStack_f9c);
          auVar59._4_4_ = -(uint)(fVar3 + fVar25 < auVar58._4_4_);
          auVar59._0_4_ = -(uint)(fVar3 + fVar24 < auVar58._0_4_);
          auVar59._8_4_ = -(uint)(fVar3 + fVar26 < auVar58._8_4_);
          auVar59._12_4_ = -(uint)(fVar3 + fVar27 < auVar58._12_4_);
          auVar56._4_4_ = -(uint)(auVar30._4_4_ < fVar3 - fVar25);
          auVar56._0_4_ = -(uint)(auVar30._0_4_ < fVar3 - fVar24);
          auVar56._8_4_ = -(uint)(auVar30._8_4_ < fVar3 - fVar26);
          auVar56._12_4_ = -(uint)(auVar30._12_4_ < fVar3 - fVar27);
          auVar73 = auVar72 | auVar56 | auVar59 | auVar80 | auVar78 | auVar73;
          auVar74._0_4_ = auVar73._0_4_ ^ __LC0;
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001153b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001153b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001153bc;
          uVar10 = movmskps(uVar10,auVar74);
          uVar10 = uVar10 & uVar18;
          if (uVar13 == 6) {
            auVar32._0_4_ = -(uint)((float)piVar9[0x38] <= fVar4 && fVar4 < (float)piVar9[0x3c]);
            auVar32._4_4_ = -(uint)((float)piVar9[0x39] <= fVar4 && fVar4 < (float)piVar9[0x3d]);
            auVar32._8_4_ = -(uint)((float)piVar9[0x3a] <= fVar4 && fVar4 < (float)piVar9[0x3e]);
            auVar32._12_4_ = -(uint)((float)piVar9[0x3b] <= fVar4 && fVar4 < (float)piVar9[0x3f]);
            uVar12 = movmskps(uVar12,auVar32);
            uVar10 = uVar10 & uVar12;
          }
        }
        uVar11 = (ulong)(int)uVar10;
        if (uVar11 == 0) goto LAB_001028e0;
        lVar22 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
          }
        }
        uVar13 = *(ulong *)(piVar9 + lVar22 * 2);
        in_R9 = uVar11 - 1 & uVar11;
        uVar11 = uVar13;
        if (in_R9 != 0) {
          lVar6 = 0;
          if (in_R9 != 0) {
            for (; (in_R9 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
            }
          }
          uVar11 = *(ulong *)(piVar9 + lVar6 * 2);
          fVar28 = local_f98[lVar22];
          fVar35 = local_f98[lVar6];
          uVar19 = in_R9 - 1 & in_R9;
          if (uVar19 == 0) {
            if ((uint)fVar28 < (uint)fVar35) {
              *(ulong *)*pauVar17 = uVar11;
              *(float *)(*pauVar17 + 8) = fVar35;
              uVar11 = uVar13;
              pauVar17 = pauVar17 + 1;
            }
            else {
              *(ulong *)*pauVar17 = uVar13;
              *(float *)(*pauVar17 + 8) = fVar28;
              pauVar17 = pauVar17 + 1;
            }
          }
          else {
            in_R9 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> in_R9 & 1) == 0; in_R9 = in_R9 + 1) {
              }
            }
            auVar51._8_4_ = fVar28;
            auVar51._0_8_ = uVar13;
            auVar51._12_4_ = 0;
            fVar36 = local_f98[in_R9];
            auVar60._8_4_ = fVar35;
            auVar60._0_8_ = uVar11;
            auVar60._12_4_ = 0;
            auVar34._8_4_ = fVar36;
            auVar34._0_8_ = *(ulong *)(piVar9 + in_R9 * 2);
            auVar34._12_4_ = 0;
            auVar42._8_4_ = -(uint)((int)fVar28 < (int)fVar35);
            uVar19 = uVar19 - 1 & uVar19;
            if (uVar19 == 0) {
              auVar42._4_4_ = auVar42._8_4_;
              auVar42._0_4_ = auVar42._8_4_;
              auVar42._12_4_ = auVar42._8_4_;
              auVar57 = auVar51 & auVar42 | ~auVar42 & auVar60;
              auVar61._8_4_ = -(uint)(auVar57._8_4_ < (int)fVar36);
              auVar56 = auVar42 & auVar60 | ~auVar42 & auVar51;
              auVar61._0_8_ = CONCAT44(auVar61._8_4_,auVar61._8_4_);
              auVar61._12_4_ = auVar61._8_4_;
              auVar30 = auVar34 & auVar61 | ~auVar61 & auVar57;
              uVar11 = auVar57._0_8_ & auVar61._0_8_ |
                       ~auVar61._0_8_ & *(ulong *)(piVar9 + in_R9 * 2);
              auVar75._8_4_ = -(uint)(auVar56._8_4_ < auVar30._8_4_);
              auVar75._4_4_ = auVar75._8_4_;
              auVar75._0_4_ = auVar75._8_4_;
              auVar75._12_4_ = auVar75._8_4_;
              *pauVar17 = auVar30 & auVar75 | ~auVar75 & auVar56;
              pauVar17[1] = auVar56 & auVar75 | ~auVar75 & auVar30;
              pauVar17 = pauVar17 + 2;
            }
            else {
              lVar22 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
                }
              }
              auVar43._4_4_ = auVar42._8_4_;
              auVar43._0_4_ = auVar42._8_4_;
              auVar43._8_4_ = auVar42._8_4_;
              auVar43._12_4_ = auVar42._8_4_;
              auVar69._8_4_ = local_f98[lVar22];
              auVar69._0_8_ = *(undefined8 *)(piVar9 + lVar22 * 2);
              auVar69._12_4_ = 0;
              auVar57 = auVar51 & auVar43 | ~auVar43 & auVar60;
              auVar52._8_4_ = -(uint)((int)fVar36 < (int)local_f98[lVar22]);
              auVar62 = auVar60 & auVar43 | ~auVar43 & auVar51;
              auVar52._4_4_ = auVar52._8_4_;
              auVar52._0_4_ = auVar52._8_4_;
              auVar52._12_4_ = auVar52._8_4_;
              auVar56 = auVar34 & auVar52 | ~auVar52 & auVar69;
              auVar30 = auVar69 & auVar52 | ~auVar52 & auVar34;
              auVar76._8_4_ = -(uint)(auVar62._8_4_ < auVar30._8_4_);
              auVar76._4_4_ = auVar76._8_4_;
              auVar76._0_4_ = auVar76._8_4_;
              auVar76._12_4_ = auVar76._8_4_;
              auVar63._8_4_ = -(uint)(auVar57._8_4_ < auVar56._8_4_);
              auVar53 = auVar62 & auVar76 | ~auVar76 & auVar30;
              *pauVar17 = auVar30 & auVar76 | ~auVar76 & auVar62;
              auVar63._0_8_ = CONCAT44(auVar63._8_4_,auVar63._8_4_);
              auVar63._12_4_ = auVar63._8_4_;
              local_1038._0_16_ = ~auVar63 & auVar56;
              auVar30 = auVar56 & auVar63 | ~auVar63 & auVar57;
              auVar70._8_4_ = -(uint)(auVar30._8_4_ < auVar53._8_4_);
              auVar70._4_4_ = auVar70._8_4_;
              auVar70._0_4_ = auVar70._8_4_;
              auVar70._12_4_ = auVar70._8_4_;
              pauVar17[1] = auVar53 & auVar70 | ~auVar70 & auVar30;
              pauVar17[2] = auVar30 & auVar70 | ~auVar70 & auVar53;
              uVar11 = SUB168(local_1038._0_16_,0) | auVar57._0_8_ & auVar63._0_8_;
              pauVar17 = pauVar17 + 3;
            }
          }
        }
        goto LAB_00102918;
      }
      goto LAB_001028e0;
    }
  }
LAB_00102bc4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
LAB_00102a90:
  if (uVar13 == 8) goto LAB_001028e0;
  lVar22 = 0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_1038._1_15_;
  local_1038._0_16_ = auVar7 << 8;
  do {
    bVar21 = 0;
    piVar14 = piVar9 + 0x10;
    do {
      if (*piVar14 == -1) break;
      in_R9 = (ulong)(uint)piVar14[-4];
      piVar15 = piVar14 + 1;
      pPVar5 = *(PointQueryK **)(*(long *)(*(long *)param_3 + 0x1e0) + in_R9 * 8);
      *(int *)(param_3 + 0x44) = piVar14[-4];
      *(int *)(param_3 + 0x40) = *piVar14;
      bVar8 = embree::Geometry::pointQuery(pPVar5,(PointQueryContext *)param_2);
      bVar21 = bVar21 | bVar8;
      piVar14 = piVar15;
    } while (piVar9 + 0x14 != piVar15);
    bVar21 = local_1038[0] | bVar21;
    local_1038[0] = bVar21;
    lVar22 = lVar22 + 1;
    piVar9 = piVar9 + 0x14;
  } while (uVar13 - 8 != lVar22);
  if (bVar21 == 0) goto LAB_001028e0;
  fVar24 = *(float *)(param_3 + 0x50);
  local_fa8 = *(float *)(param_3 + 0x54);
  fVar23 = *(float *)(param_3 + 0x58);
  local_1018._4_4_ = fVar23;
  local_1018._0_4_ = fVar23;
  fStack_1010 = fVar23;
  fStack_100c = fVar23;
  fVar25 = fVar24;
  fVar26 = fVar24;
  fVar27 = fVar24;
  fStack_fa4 = local_fa8;
  fStack_fa0 = local_fa8;
  fStack_f9c = local_fa8;
  if (*(int *)(param_3 + 0x18) == 1) {
    fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    bVar20 = bVar21;
    goto LAB_001028e0;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar16 = pauVar17;
  bVar20 = bVar21;
  if (pauVar17 == (undefined1 (*) [16])local_f88) goto LAB_00102bc4;
  goto LAB_001028e9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PointQueryK *pPVar5;
  long lVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulong in_R8;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar64;
  float fVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 local_1038 [32];
  undefined1 local_1018 [8];
  float fStack_1010;
  float fStack_100c;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float local_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  bVar22 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    local_1018._4_4_ = *(undefined4 *)(param_3 + 0x58);
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    local_f80 = 0;
    fVar3 = *(float *)param_2;
    local_1018._0_4_ = local_1018._4_4_;
    fStack_1010 = (float)local_1018._4_4_;
    fStack_100c = (float)local_1018._4_4_;
    local_fa8 = *(float *)(param_3 + 0x54);
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    fVar24 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar23 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pauVar16 = (undefined1 (*) [16])local_f78;
    fVar25 = fVar24;
    fVar26 = fVar24;
    fVar27 = fVar24;
    fStack_fa4 = local_fa8;
    fStack_fa0 = local_fa8;
    fStack_f9c = local_fa8;
    bVar21 = 0;
LAB_00103160:
    bVar22 = bVar21;
    pauVar15 = pauVar16;
    bVar21 = bVar22;
    if (pauVar16 != (undefined1 (*) [16])local_f88) {
LAB_00103169:
      pauVar16 = pauVar15 + -1;
      if (*(float *)(pauVar15[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar15[-1];
LAB_00103198:
        uVar19 = (ulong)((uint)uVar11 & 0xf);
        uVar10 = (uint)uVar11 & 8;
        uVar9 = uVar11 & 0xfffffffffffffff0;
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00103318;
          auVar29._4_4_ = fVar2;
          auVar29._0_4_ = fVar2;
          auVar29._8_4_ = fVar2;
          auVar29._12_4_ = fVar2;
          auVar55._4_4_ = fVar3;
          auVar55._0_4_ = fVar3;
          auVar55._8_4_ = fVar3;
          auVar55._12_4_ = fVar3;
          auVar39._0_4_ = *(float *)(uVar9 + 0xa0) * fVar4 + *(float *)(uVar9 + 0x40);
          auVar39._4_4_ = *(float *)(uVar9 + 0xa4) * fVar4 + *(float *)(uVar9 + 0x44);
          auVar39._8_4_ = *(float *)(uVar9 + 0xa8) * fVar4 + *(float *)(uVar9 + 0x48);
          auVar39._12_4_ = *(float *)(uVar9 + 0xac) * fVar4 + *(float *)(uVar9 + 0x4c);
          auVar47._0_4_ = *(float *)(uVar9 + 0x80) * fVar4 + *(float *)(uVar9 + 0x20);
          auVar47._4_4_ = *(float *)(uVar9 + 0x84) * fVar4 + *(float *)(uVar9 + 0x24);
          auVar47._8_4_ = *(float *)(uVar9 + 0x88) * fVar4 + *(float *)(uVar9 + 0x28);
          auVar47._12_4_ = *(float *)(uVar9 + 0x8c) * fVar4 + *(float *)(uVar9 + 0x2c);
          auVar67._0_4_ = *(float *)(uVar9 + 0xc0) * fVar4 + *(float *)(uVar9 + 0x60);
          auVar67._4_4_ = *(float *)(uVar9 + 0xc4) * fVar4 + *(float *)(uVar9 + 100);
          auVar67._8_4_ = *(float *)(uVar9 + 200) * fVar4 + *(float *)(uVar9 + 0x68);
          auVar67._12_4_ = *(float *)(uVar9 + 0xcc) * fVar4 + *(float *)(uVar9 + 0x6c);
          auVar30 = maxps(auVar29,auVar39);
          auVar49._0_4_ = *(float *)(uVar9 + 0x90) * fVar4 + *(float *)(uVar9 + 0x30);
          auVar49._4_4_ = *(float *)(uVar9 + 0x94) * fVar4 + *(float *)(uVar9 + 0x34);
          auVar49._8_4_ = *(float *)(uVar9 + 0x98) * fVar4 + *(float *)(uVar9 + 0x38);
          auVar49._12_4_ = *(float *)(uVar9 + 0x9c) * fVar4 + *(float *)(uVar9 + 0x3c);
          auVar56 = maxps(auVar55,auVar47);
          auVar40._0_4_ = *(float *)(uVar9 + 0xb0) * fVar4 + *(float *)(uVar9 + 0x50);
          auVar40._4_4_ = *(float *)(uVar9 + 0xb4) * fVar4 + *(float *)(uVar9 + 0x54);
          auVar40._8_4_ = *(float *)(uVar9 + 0xb8) * fVar4 + *(float *)(uVar9 + 0x58);
          auVar40._12_4_ = *(float *)(uVar9 + 0xbc) * fVar4 + *(float *)(uVar9 + 0x5c);
          auVar48._4_4_ = -(uint)(auVar47._4_4_ <= auVar49._4_4_);
          auVar48._0_4_ = -(uint)(auVar47._0_4_ <= auVar49._0_4_);
          auVar48._8_4_ = -(uint)(auVar47._8_4_ <= auVar49._8_4_);
          auVar48._12_4_ = -(uint)(auVar47._12_4_ <= auVar49._12_4_);
          auVar57 = minps(auVar56,auVar49);
          auVar30 = minps(auVar30,auVar40);
          auVar41._4_4_ = fVar1;
          auVar41._0_4_ = fVar1;
          auVar41._8_4_ = fVar1;
          auVar41._12_4_ = fVar1;
          uVar17 = movmskps((int)in_R8,auVar48);
          in_R8 = (ulong)uVar17;
          auVar56 = maxps(auVar41,auVar67);
          fVar54 = auVar57._0_4_ - fVar3;
          fVar64 = auVar57._4_4_ - fVar3;
          fVar65 = auVar57._8_4_ - fVar3;
          fVar66 = auVar57._12_4_ - fVar3;
          fVar28 = auVar30._0_4_ - fVar2;
          fVar35 = auVar30._4_4_ - fVar2;
          fVar36 = auVar30._8_4_ - fVar2;
          fVar37 = auVar30._12_4_ - fVar2;
          auVar68._0_4_ = *(float *)(uVar9 + 0xd0) * fVar4 + *(float *)(uVar9 + 0x70);
          auVar68._4_4_ = *(float *)(uVar9 + 0xd4) * fVar4 + *(float *)(uVar9 + 0x74);
          auVar68._8_4_ = *(float *)(uVar9 + 0xd8) * fVar4 + *(float *)(uVar9 + 0x78);
          auVar68._12_4_ = *(float *)(uVar9 + 0xdc) * fVar4 + *(float *)(uVar9 + 0x7c);
          auVar30 = minps(auVar56,auVar68);
          fVar38 = auVar30._0_4_ - fVar1;
          fVar44 = auVar30._4_4_ - fVar1;
          fVar45 = auVar30._8_4_ - fVar1;
          fVar46 = auVar30._12_4_ - fVar1;
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar31._4_4_ = -(uint)(local_f98[1] <= fVar25 * fVar25);
          auVar31._0_4_ = -(uint)(local_f98[0] <= fVar24 * fVar24);
          auVar31._8_4_ = -(uint)(local_f98[2] <= fVar26 * fVar26);
          auVar31._12_4_ = -(uint)(local_f98[3] <= fVar27 * fVar27);
          uVar10 = movmskps(uVar10,auVar31);
          uVar10 = uVar10 & uVar17;
          if (uVar19 == 6) {
            auVar33._0_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe0) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf0));
            auVar33._4_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe4) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf4));
            auVar33._8_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe8) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf8));
            auVar33._12_4_ =
                 -(uint)(*(float *)(uVar9 + 0xec) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xfc));
            uVar17 = movmskps(uVar17,auVar33);
            in_R8 = (ulong)uVar17;
            uVar10 = uVar10 & uVar17;
          }
        }
        else {
          if ((uVar11 & 8) != 0) goto LAB_00103318;
          auVar50._4_4_ = fVar2;
          auVar50._0_4_ = fVar2;
          auVar50._8_4_ = fVar2;
          auVar50._12_4_ = fVar2;
          auVar58._0_4_ = *(float *)(uVar9 + 0x80) * fVar4 + *(float *)(uVar9 + 0x20);
          auVar58._4_4_ = *(float *)(uVar9 + 0x84) * fVar4 + *(float *)(uVar9 + 0x24);
          auVar58._8_4_ = *(float *)(uVar9 + 0x88) * fVar4 + *(float *)(uVar9 + 0x28);
          auVar58._12_4_ = *(float *)(uVar9 + 0x8c) * fVar4 + *(float *)(uVar9 + 0x2c);
          auVar79._0_4_ = *(float *)(uVar9 + 0xa0) * fVar4 + *(float *)(uVar9 + 0x40);
          auVar79._4_4_ = *(float *)(uVar9 + 0xa4) * fVar4 + *(float *)(uVar9 + 0x44);
          auVar79._8_4_ = *(float *)(uVar9 + 0xa8) * fVar4 + *(float *)(uVar9 + 0x48);
          auVar79._12_4_ = *(float *)(uVar9 + 0xac) * fVar4 + *(float *)(uVar9 + 0x4c);
          auVar30._0_4_ = *(float *)(uVar9 + 0x90) * fVar4 + *(float *)(uVar9 + 0x30);
          auVar30._4_4_ = *(float *)(uVar9 + 0x94) * fVar4 + *(float *)(uVar9 + 0x34);
          auVar30._8_4_ = *(float *)(uVar9 + 0x98) * fVar4 + *(float *)(uVar9 + 0x38);
          auVar30._12_4_ = *(float *)(uVar9 + 0x9c) * fVar4 + *(float *)(uVar9 + 0x3c);
          local_1038._0_4_ = *(float *)(uVar9 + 0x50) + *(float *)(uVar9 + 0xb0) * fVar4;
          local_1038._4_4_ = *(float *)(uVar9 + 0x54) + *(float *)(uVar9 + 0xb4) * fVar4;
          local_1038._8_4_ = *(float *)(uVar9 + 0x58) + *(float *)(uVar9 + 0xb8) * fVar4;
          local_1038._12_4_ = *(float *)(uVar9 + 0x5c) + *(float *)(uVar9 + 0xbc) * fVar4;
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar71._0_4_ = *(float *)(uVar9 + 0xc0) * fVar4 + *(float *)(uVar9 + 0x60);
          auVar71._4_4_ = *(float *)(uVar9 + 0xc4) * fVar4 + *(float *)(uVar9 + 100);
          auVar71._8_4_ = *(float *)(uVar9 + 200) * fVar4 + *(float *)(uVar9 + 0x68);
          auVar71._12_4_ = *(float *)(uVar9 + 0xcc) * fVar4 + *(float *)(uVar9 + 0x6c);
          auVar56 = maxps(auVar57,auVar58);
          auVar57 = maxps(auVar50,auVar79);
          auVar77._0_4_ = *(float *)(uVar9 + 0xd0) * fVar4 + *(float *)(uVar9 + 0x70);
          auVar77._4_4_ = *(float *)(uVar9 + 0xd4) * fVar4 + *(float *)(uVar9 + 0x74);
          auVar77._8_4_ = *(float *)(uVar9 + 0xd8) * fVar4 + *(float *)(uVar9 + 0x78);
          auVar77._12_4_ = *(float *)(uVar9 + 0xdc) * fVar4 + *(float *)(uVar9 + 0x7c);
          auVar56 = minps(auVar56,auVar30);
          auVar53 = minps(auVar57,local_1038._0_16_);
          auVar62._4_4_ = fVar1;
          auVar62._0_4_ = fVar1;
          auVar62._8_4_ = fVar1;
          auVar62._12_4_ = fVar1;
          auVar57 = maxps(auVar62,auVar71);
          fVar28 = auVar56._0_4_ - fVar3;
          fVar35 = auVar56._4_4_ - fVar3;
          fVar36 = auVar56._8_4_ - fVar3;
          fVar37 = auVar56._12_4_ - fVar3;
          fVar54 = auVar53._0_4_ - fVar2;
          fVar64 = auVar53._4_4_ - fVar2;
          fVar65 = auVar53._8_4_ - fVar2;
          fVar66 = auVar53._12_4_ - fVar2;
          auVar56 = minps(auVar57,auVar77);
          fVar38 = auVar56._0_4_ - fVar1;
          fVar44 = auVar56._4_4_ - fVar1;
          fVar45 = auVar56._8_4_ - fVar1;
          fVar46 = auVar56._12_4_ - fVar1;
          auVar73._4_4_ = -(uint)((float)local_1018._4_4_ + fVar1 < auVar71._4_4_);
          auVar73._0_4_ = -(uint)((float)local_1018._0_4_ + fVar1 < auVar71._0_4_);
          auVar73._8_4_ = -(uint)(fStack_1010 + fVar1 < auVar71._8_4_);
          auVar73._12_4_ = -(uint)(fStack_100c + fVar1 < auVar71._12_4_);
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar53._4_4_ = -(uint)(auVar58._4_4_ <= auVar30._4_4_);
          auVar53._0_4_ = -(uint)(auVar58._0_4_ <= auVar30._0_4_);
          auVar53._8_4_ = -(uint)(auVar58._8_4_ <= auVar30._8_4_);
          auVar53._12_4_ = -(uint)(auVar58._12_4_ <= auVar30._12_4_);
          auVar78._4_4_ = -(uint)(auVar77._4_4_ < fVar1 - (float)local_1018._4_4_);
          auVar78._0_4_ = -(uint)(auVar77._0_4_ < fVar1 - (float)local_1018._0_4_);
          auVar78._8_4_ = -(uint)(auVar77._8_4_ < fVar1 - fStack_1010);
          auVar78._12_4_ = -(uint)(auVar77._12_4_ < fVar1 - fStack_100c);
          uVar17 = movmskps((int)in_R8,auVar53);
          in_R8 = (ulong)uVar17;
          auVar80._4_4_ = -(uint)(fStack_fa4 + fVar2 < auVar79._4_4_);
          auVar80._0_4_ = -(uint)(local_fa8 + fVar2 < auVar79._0_4_);
          auVar80._8_4_ = -(uint)(fStack_fa0 + fVar2 < auVar79._8_4_);
          auVar80._12_4_ = -(uint)(fStack_f9c + fVar2 < auVar79._12_4_);
          auVar72._4_4_ = -(uint)(local_1038._4_4_ < fVar2 - fStack_fa4);
          auVar72._0_4_ = -(uint)(local_1038._0_4_ < fVar2 - local_fa8);
          auVar72._8_4_ = -(uint)(local_1038._8_4_ < fVar2 - fStack_fa0);
          auVar72._12_4_ = -(uint)(local_1038._12_4_ < fVar2 - fStack_f9c);
          auVar59._4_4_ = -(uint)(fVar3 + fVar25 < auVar58._4_4_);
          auVar59._0_4_ = -(uint)(fVar3 + fVar24 < auVar58._0_4_);
          auVar59._8_4_ = -(uint)(fVar3 + fVar26 < auVar58._8_4_);
          auVar59._12_4_ = -(uint)(fVar3 + fVar27 < auVar58._12_4_);
          auVar56._4_4_ = -(uint)(auVar30._4_4_ < fVar3 - fVar25);
          auVar56._0_4_ = -(uint)(auVar30._0_4_ < fVar3 - fVar24);
          auVar56._8_4_ = -(uint)(auVar30._8_4_ < fVar3 - fVar26);
          auVar56._12_4_ = -(uint)(auVar30._12_4_ < fVar3 - fVar27);
          auVar73 = auVar72 | auVar56 | auVar59 | auVar80 | auVar78 | auVar73;
          auVar74._0_4_ = auVar73._0_4_ ^ __LC0;
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001153b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001153b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001153bc;
          uVar10 = movmskps(uVar10,auVar74);
          uVar10 = uVar10 & uVar17;
          if (uVar19 == 6) {
            auVar32._0_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe0) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf0));
            auVar32._4_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe4) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf4));
            auVar32._8_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe8) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf8));
            auVar32._12_4_ =
                 -(uint)(*(float *)(uVar9 + 0xec) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xfc));
            uVar17 = movmskps(uVar17,auVar32);
            in_R8 = (ulong)uVar17;
            uVar10 = uVar10 & uVar17;
          }
        }
        uVar11 = (ulong)(int)uVar10;
        if (uVar11 == 0) goto LAB_00103160;
        lVar20 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
          }
        }
        uVar19 = *(ulong *)(uVar9 + lVar20 * 8);
        in_R8 = uVar11 - 1 & uVar11;
        uVar11 = uVar19;
        if (in_R8 != 0) {
          lVar6 = 0;
          if (in_R8 != 0) {
            for (; (in_R8 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
            }
          }
          uVar11 = *(ulong *)(uVar9 + lVar6 * 8);
          fVar28 = local_f98[lVar20];
          fVar35 = local_f98[lVar6];
          uVar18 = in_R8 - 1 & in_R8;
          if (uVar18 == 0) {
            if ((uint)fVar28 < (uint)fVar35) {
              *(ulong *)*pauVar16 = uVar11;
              *(float *)(*pauVar16 + 8) = fVar35;
              pauVar16 = pauVar16 + 1;
              uVar11 = uVar19;
            }
            else {
              *(ulong *)*pauVar16 = uVar19;
              *(float *)(*pauVar16 + 8) = fVar28;
              pauVar16 = pauVar16 + 1;
            }
          }
          else {
            auVar51._8_4_ = fVar28;
            auVar51._0_8_ = uVar19;
            auVar51._12_4_ = 0;
            lVar20 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
              }
            }
            in_R8 = *(ulong *)(uVar9 + lVar20 * 8);
            auVar60._8_4_ = fVar35;
            auVar60._0_8_ = uVar11;
            auVar60._12_4_ = 0;
            fVar36 = local_f98[lVar20];
            auVar34._8_4_ = fVar36;
            auVar34._0_8_ = in_R8;
            auVar34._12_4_ = 0;
            auVar42._8_4_ = -(uint)((int)fVar28 < (int)fVar35);
            uVar18 = uVar18 - 1 & uVar18;
            if (uVar18 == 0) {
              auVar42._4_4_ = auVar42._8_4_;
              auVar42._0_4_ = auVar42._8_4_;
              auVar42._12_4_ = auVar42._8_4_;
              auVar57 = auVar51 & auVar42 | ~auVar42 & auVar60;
              auVar61._8_4_ = -(uint)(auVar57._8_4_ < (int)fVar36);
              auVar56 = auVar42 & auVar60 | ~auVar42 & auVar51;
              auVar61._0_8_ = CONCAT44(auVar61._8_4_,auVar61._8_4_);
              auVar61._12_4_ = auVar61._8_4_;
              auVar30 = auVar34 & auVar61 | ~auVar61 & auVar57;
              uVar11 = auVar57._0_8_ & auVar61._0_8_ | ~auVar61._0_8_ & in_R8;
              auVar75._8_4_ = -(uint)(auVar56._8_4_ < auVar30._8_4_);
              auVar75._4_4_ = auVar75._8_4_;
              auVar75._0_4_ = auVar75._8_4_;
              auVar75._12_4_ = auVar75._8_4_;
              *pauVar16 = auVar30 & auVar75 | ~auVar75 & auVar56;
              pauVar16[1] = auVar56 & auVar75 | ~auVar75 & auVar30;
              pauVar16 = pauVar16 + 2;
            }
            else {
              lVar20 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                }
              }
              auVar43._4_4_ = auVar42._8_4_;
              auVar43._0_4_ = auVar42._8_4_;
              auVar43._8_4_ = auVar42._8_4_;
              auVar43._12_4_ = auVar42._8_4_;
              auVar69._8_4_ = local_f98[lVar20];
              auVar69._0_8_ = *(undefined8 *)(uVar9 + lVar20 * 8);
              auVar69._12_4_ = 0;
              auVar57 = auVar51 & auVar43 | ~auVar43 & auVar60;
              auVar52._8_4_ = -(uint)((int)fVar36 < (int)local_f98[lVar20]);
              auVar62 = auVar60 & auVar43 | ~auVar43 & auVar51;
              auVar52._4_4_ = auVar52._8_4_;
              auVar52._0_4_ = auVar52._8_4_;
              auVar52._12_4_ = auVar52._8_4_;
              auVar56 = auVar34 & auVar52 | ~auVar52 & auVar69;
              auVar30 = auVar69 & auVar52 | ~auVar52 & auVar34;
              auVar76._8_4_ = -(uint)(auVar62._8_4_ < auVar30._8_4_);
              auVar76._4_4_ = auVar76._8_4_;
              auVar76._0_4_ = auVar76._8_4_;
              auVar76._12_4_ = auVar76._8_4_;
              auVar63._8_4_ = -(uint)(auVar57._8_4_ < auVar56._8_4_);
              auVar53 = auVar62 & auVar76 | ~auVar76 & auVar30;
              *pauVar16 = auVar30 & auVar76 | ~auVar76 & auVar62;
              auVar63._0_8_ = CONCAT44(auVar63._8_4_,auVar63._8_4_);
              auVar63._12_4_ = auVar63._8_4_;
              local_1038._0_16_ = ~auVar63 & auVar56;
              auVar30 = auVar56 & auVar63 | ~auVar63 & auVar57;
              auVar70._8_4_ = -(uint)(auVar30._8_4_ < auVar53._8_4_);
              auVar70._4_4_ = auVar70._8_4_;
              auVar70._0_4_ = auVar70._8_4_;
              auVar70._12_4_ = auVar70._8_4_;
              pauVar16[1] = auVar53 & auVar70 | ~auVar70 & auVar30;
              pauVar16[2] = auVar30 & auVar70 | ~auVar70 & auVar53;
              uVar11 = SUB168(local_1038._0_16_,0) | auVar57._0_8_ & auVar63._0_8_;
              pauVar16 = pauVar16 + 3;
            }
          }
        }
        goto LAB_00103198;
      }
      goto LAB_00103160;
    }
  }
LAB_00103458:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar22;
LAB_00103318:
  if (uVar19 == 8) goto LAB_00103160;
  puVar14 = (uint *)(uVar9 + 0x130);
  lVar20 = 0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_1038._1_15_;
  local_1038._0_16_ = auVar7 << 8;
  do {
    bVar22 = 0;
    puVar12 = puVar14 + -4;
    do {
      uVar10 = *puVar12;
      if (uVar10 == 0xffffffff) break;
      puVar13 = puVar12 + 1;
      in_R8 = *(ulong *)(*(long *)param_3 + 0x1e0);
      pPVar5 = *(PointQueryK **)(in_R8 + (ulong)uVar10 * 8);
      *(uint *)(param_3 + 0x44) = uVar10;
      *(uint *)(param_3 + 0x40) = puVar12[4];
      bVar8 = embree::Geometry::pointQuery(pPVar5,(PointQueryContext *)param_2);
      bVar22 = bVar22 | bVar8;
      puVar12 = puVar13;
    } while (puVar14 != puVar13);
    bVar22 = local_1038[0] | bVar22;
    local_1038[0] = bVar22;
    lVar20 = lVar20 + 1;
    puVar14 = puVar14 + 0x50;
  } while (uVar19 - 8 != lVar20);
  if (bVar22 == 0) goto LAB_00103160;
  fVar24 = *(float *)(param_3 + 0x50);
  local_fa8 = *(float *)(param_3 + 0x54);
  fVar23 = *(float *)(param_3 + 0x58);
  local_1018._4_4_ = fVar23;
  local_1018._0_4_ = fVar23;
  fStack_1010 = fVar23;
  fStack_100c = fVar23;
  fVar25 = fVar24;
  fVar26 = fVar24;
  fVar27 = fVar24;
  fStack_fa4 = local_fa8;
  fStack_fa0 = local_fa8;
  fStack_f9c = local_fa8;
  if (*(int *)(param_3 + 0x18) == 1) {
    fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    bVar21 = bVar22;
    goto LAB_00103160;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar15 = pauVar16;
  bVar21 = bVar22;
  if (pauVar16 == (undefined1 (*) [16])local_f88) goto LAB_00103458;
  goto LAB_00103169;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  PointQueryK *pPVar5;
  long lVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ulong in_R8;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar35;
  float fVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar64;
  float fVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 local_1038 [32];
  undefined1 local_1018 [8];
  float fStack_1010;
  float fStack_100c;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float local_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  bVar22 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    local_1018._4_4_ = *(undefined4 *)(param_3 + 0x58);
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    local_f80 = 0;
    fVar3 = *(float *)param_2;
    local_1018._0_4_ = local_1018._4_4_;
    fStack_1010 = (float)local_1018._4_4_;
    fStack_100c = (float)local_1018._4_4_;
    local_fa8 = *(float *)(param_3 + 0x54);
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    fVar24 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      fVar23 = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50) +
               *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
               *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
    }
    pauVar16 = (undefined1 (*) [16])local_f78;
    fVar25 = fVar24;
    fVar26 = fVar24;
    fVar27 = fVar24;
    fStack_fa4 = local_fa8;
    fStack_fa0 = local_fa8;
    fStack_f9c = local_fa8;
    bVar21 = 0;
LAB_00103a00:
    bVar22 = bVar21;
    pauVar15 = pauVar16;
    bVar21 = bVar22;
    if (pauVar16 != (undefined1 (*) [16])local_f88) {
LAB_00103a09:
      pauVar16 = pauVar15 + -1;
      if (*(float *)(pauVar15[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar15[-1];
LAB_00103a38:
        uVar19 = (ulong)((uint)uVar11 & 0xf);
        uVar10 = (uint)uVar11 & 8;
        uVar9 = uVar11 & 0xfffffffffffffff0;
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00103bb8;
          auVar29._4_4_ = fVar2;
          auVar29._0_4_ = fVar2;
          auVar29._8_4_ = fVar2;
          auVar29._12_4_ = fVar2;
          auVar55._4_4_ = fVar3;
          auVar55._0_4_ = fVar3;
          auVar55._8_4_ = fVar3;
          auVar55._12_4_ = fVar3;
          auVar39._0_4_ = *(float *)(uVar9 + 0xa0) * fVar4 + *(float *)(uVar9 + 0x40);
          auVar39._4_4_ = *(float *)(uVar9 + 0xa4) * fVar4 + *(float *)(uVar9 + 0x44);
          auVar39._8_4_ = *(float *)(uVar9 + 0xa8) * fVar4 + *(float *)(uVar9 + 0x48);
          auVar39._12_4_ = *(float *)(uVar9 + 0xac) * fVar4 + *(float *)(uVar9 + 0x4c);
          auVar47._0_4_ = *(float *)(uVar9 + 0x80) * fVar4 + *(float *)(uVar9 + 0x20);
          auVar47._4_4_ = *(float *)(uVar9 + 0x84) * fVar4 + *(float *)(uVar9 + 0x24);
          auVar47._8_4_ = *(float *)(uVar9 + 0x88) * fVar4 + *(float *)(uVar9 + 0x28);
          auVar47._12_4_ = *(float *)(uVar9 + 0x8c) * fVar4 + *(float *)(uVar9 + 0x2c);
          auVar67._0_4_ = *(float *)(uVar9 + 0xc0) * fVar4 + *(float *)(uVar9 + 0x60);
          auVar67._4_4_ = *(float *)(uVar9 + 0xc4) * fVar4 + *(float *)(uVar9 + 100);
          auVar67._8_4_ = *(float *)(uVar9 + 200) * fVar4 + *(float *)(uVar9 + 0x68);
          auVar67._12_4_ = *(float *)(uVar9 + 0xcc) * fVar4 + *(float *)(uVar9 + 0x6c);
          auVar30 = maxps(auVar29,auVar39);
          auVar49._0_4_ = *(float *)(uVar9 + 0x90) * fVar4 + *(float *)(uVar9 + 0x30);
          auVar49._4_4_ = *(float *)(uVar9 + 0x94) * fVar4 + *(float *)(uVar9 + 0x34);
          auVar49._8_4_ = *(float *)(uVar9 + 0x98) * fVar4 + *(float *)(uVar9 + 0x38);
          auVar49._12_4_ = *(float *)(uVar9 + 0x9c) * fVar4 + *(float *)(uVar9 + 0x3c);
          auVar56 = maxps(auVar55,auVar47);
          auVar40._0_4_ = *(float *)(uVar9 + 0xb0) * fVar4 + *(float *)(uVar9 + 0x50);
          auVar40._4_4_ = *(float *)(uVar9 + 0xb4) * fVar4 + *(float *)(uVar9 + 0x54);
          auVar40._8_4_ = *(float *)(uVar9 + 0xb8) * fVar4 + *(float *)(uVar9 + 0x58);
          auVar40._12_4_ = *(float *)(uVar9 + 0xbc) * fVar4 + *(float *)(uVar9 + 0x5c);
          auVar48._4_4_ = -(uint)(auVar47._4_4_ <= auVar49._4_4_);
          auVar48._0_4_ = -(uint)(auVar47._0_4_ <= auVar49._0_4_);
          auVar48._8_4_ = -(uint)(auVar47._8_4_ <= auVar49._8_4_);
          auVar48._12_4_ = -(uint)(auVar47._12_4_ <= auVar49._12_4_);
          auVar57 = minps(auVar56,auVar49);
          auVar30 = minps(auVar30,auVar40);
          auVar41._4_4_ = fVar1;
          auVar41._0_4_ = fVar1;
          auVar41._8_4_ = fVar1;
          auVar41._12_4_ = fVar1;
          uVar17 = movmskps((int)in_R8,auVar48);
          in_R8 = (ulong)uVar17;
          auVar56 = maxps(auVar41,auVar67);
          fVar54 = auVar57._0_4_ - fVar3;
          fVar64 = auVar57._4_4_ - fVar3;
          fVar65 = auVar57._8_4_ - fVar3;
          fVar66 = auVar57._12_4_ - fVar3;
          fVar28 = auVar30._0_4_ - fVar2;
          fVar35 = auVar30._4_4_ - fVar2;
          fVar36 = auVar30._8_4_ - fVar2;
          fVar37 = auVar30._12_4_ - fVar2;
          auVar68._0_4_ = *(float *)(uVar9 + 0xd0) * fVar4 + *(float *)(uVar9 + 0x70);
          auVar68._4_4_ = *(float *)(uVar9 + 0xd4) * fVar4 + *(float *)(uVar9 + 0x74);
          auVar68._8_4_ = *(float *)(uVar9 + 0xd8) * fVar4 + *(float *)(uVar9 + 0x78);
          auVar68._12_4_ = *(float *)(uVar9 + 0xdc) * fVar4 + *(float *)(uVar9 + 0x7c);
          auVar30 = minps(auVar56,auVar68);
          fVar38 = auVar30._0_4_ - fVar1;
          fVar44 = auVar30._4_4_ - fVar1;
          fVar45 = auVar30._8_4_ - fVar1;
          fVar46 = auVar30._12_4_ - fVar1;
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar31._4_4_ = -(uint)(local_f98[1] <= fVar25 * fVar25);
          auVar31._0_4_ = -(uint)(local_f98[0] <= fVar24 * fVar24);
          auVar31._8_4_ = -(uint)(local_f98[2] <= fVar26 * fVar26);
          auVar31._12_4_ = -(uint)(local_f98[3] <= fVar27 * fVar27);
          uVar10 = movmskps(uVar10,auVar31);
          uVar10 = uVar10 & uVar17;
          if (uVar19 == 6) {
            auVar33._0_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe0) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf0));
            auVar33._4_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe4) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf4));
            auVar33._8_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe8) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf8));
            auVar33._12_4_ =
                 -(uint)(*(float *)(uVar9 + 0xec) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xfc));
            uVar17 = movmskps(uVar17,auVar33);
            in_R8 = (ulong)uVar17;
            uVar10 = uVar10 & uVar17;
          }
        }
        else {
          if ((uVar11 & 8) != 0) goto LAB_00103bb8;
          auVar50._4_4_ = fVar2;
          auVar50._0_4_ = fVar2;
          auVar50._8_4_ = fVar2;
          auVar50._12_4_ = fVar2;
          auVar58._0_4_ = *(float *)(uVar9 + 0x80) * fVar4 + *(float *)(uVar9 + 0x20);
          auVar58._4_4_ = *(float *)(uVar9 + 0x84) * fVar4 + *(float *)(uVar9 + 0x24);
          auVar58._8_4_ = *(float *)(uVar9 + 0x88) * fVar4 + *(float *)(uVar9 + 0x28);
          auVar58._12_4_ = *(float *)(uVar9 + 0x8c) * fVar4 + *(float *)(uVar9 + 0x2c);
          auVar79._0_4_ = *(float *)(uVar9 + 0xa0) * fVar4 + *(float *)(uVar9 + 0x40);
          auVar79._4_4_ = *(float *)(uVar9 + 0xa4) * fVar4 + *(float *)(uVar9 + 0x44);
          auVar79._8_4_ = *(float *)(uVar9 + 0xa8) * fVar4 + *(float *)(uVar9 + 0x48);
          auVar79._12_4_ = *(float *)(uVar9 + 0xac) * fVar4 + *(float *)(uVar9 + 0x4c);
          auVar30._0_4_ = *(float *)(uVar9 + 0x90) * fVar4 + *(float *)(uVar9 + 0x30);
          auVar30._4_4_ = *(float *)(uVar9 + 0x94) * fVar4 + *(float *)(uVar9 + 0x34);
          auVar30._8_4_ = *(float *)(uVar9 + 0x98) * fVar4 + *(float *)(uVar9 + 0x38);
          auVar30._12_4_ = *(float *)(uVar9 + 0x9c) * fVar4 + *(float *)(uVar9 + 0x3c);
          local_1038._0_4_ = *(float *)(uVar9 + 0x50) + *(float *)(uVar9 + 0xb0) * fVar4;
          local_1038._4_4_ = *(float *)(uVar9 + 0x54) + *(float *)(uVar9 + 0xb4) * fVar4;
          local_1038._8_4_ = *(float *)(uVar9 + 0x58) + *(float *)(uVar9 + 0xb8) * fVar4;
          local_1038._12_4_ = *(float *)(uVar9 + 0x5c) + *(float *)(uVar9 + 0xbc) * fVar4;
          auVar57._4_4_ = fVar3;
          auVar57._0_4_ = fVar3;
          auVar57._8_4_ = fVar3;
          auVar57._12_4_ = fVar3;
          auVar71._0_4_ = *(float *)(uVar9 + 0xc0) * fVar4 + *(float *)(uVar9 + 0x60);
          auVar71._4_4_ = *(float *)(uVar9 + 0xc4) * fVar4 + *(float *)(uVar9 + 100);
          auVar71._8_4_ = *(float *)(uVar9 + 200) * fVar4 + *(float *)(uVar9 + 0x68);
          auVar71._12_4_ = *(float *)(uVar9 + 0xcc) * fVar4 + *(float *)(uVar9 + 0x6c);
          auVar56 = maxps(auVar57,auVar58);
          auVar57 = maxps(auVar50,auVar79);
          auVar77._0_4_ = *(float *)(uVar9 + 0xd0) * fVar4 + *(float *)(uVar9 + 0x70);
          auVar77._4_4_ = *(float *)(uVar9 + 0xd4) * fVar4 + *(float *)(uVar9 + 0x74);
          auVar77._8_4_ = *(float *)(uVar9 + 0xd8) * fVar4 + *(float *)(uVar9 + 0x78);
          auVar77._12_4_ = *(float *)(uVar9 + 0xdc) * fVar4 + *(float *)(uVar9 + 0x7c);
          auVar56 = minps(auVar56,auVar30);
          auVar53 = minps(auVar57,local_1038._0_16_);
          auVar62._4_4_ = fVar1;
          auVar62._0_4_ = fVar1;
          auVar62._8_4_ = fVar1;
          auVar62._12_4_ = fVar1;
          auVar57 = maxps(auVar62,auVar71);
          fVar28 = auVar56._0_4_ - fVar3;
          fVar35 = auVar56._4_4_ - fVar3;
          fVar36 = auVar56._8_4_ - fVar3;
          fVar37 = auVar56._12_4_ - fVar3;
          fVar54 = auVar53._0_4_ - fVar2;
          fVar64 = auVar53._4_4_ - fVar2;
          fVar65 = auVar53._8_4_ - fVar2;
          fVar66 = auVar53._12_4_ - fVar2;
          auVar56 = minps(auVar57,auVar77);
          fVar38 = auVar56._0_4_ - fVar1;
          fVar44 = auVar56._4_4_ - fVar1;
          fVar45 = auVar56._8_4_ - fVar1;
          fVar46 = auVar56._12_4_ - fVar1;
          auVar73._4_4_ = -(uint)((float)local_1018._4_4_ + fVar1 < auVar71._4_4_);
          auVar73._0_4_ = -(uint)((float)local_1018._0_4_ + fVar1 < auVar71._0_4_);
          auVar73._8_4_ = -(uint)(fStack_1010 + fVar1 < auVar71._8_4_);
          auVar73._12_4_ = -(uint)(fStack_100c + fVar1 < auVar71._12_4_);
          local_f98[0] = fVar28 * fVar28 + fVar54 * fVar54 + fVar38 * fVar38;
          local_f98[1] = fVar35 * fVar35 + fVar64 * fVar64 + fVar44 * fVar44;
          local_f98[2] = fVar36 * fVar36 + fVar65 * fVar65 + fVar45 * fVar45;
          local_f98[3] = fVar37 * fVar37 + fVar66 * fVar66 + fVar46 * fVar46;
          auVar53._4_4_ = -(uint)(auVar58._4_4_ <= auVar30._4_4_);
          auVar53._0_4_ = -(uint)(auVar58._0_4_ <= auVar30._0_4_);
          auVar53._8_4_ = -(uint)(auVar58._8_4_ <= auVar30._8_4_);
          auVar53._12_4_ = -(uint)(auVar58._12_4_ <= auVar30._12_4_);
          auVar78._4_4_ = -(uint)(auVar77._4_4_ < fVar1 - (float)local_1018._4_4_);
          auVar78._0_4_ = -(uint)(auVar77._0_4_ < fVar1 - (float)local_1018._0_4_);
          auVar78._8_4_ = -(uint)(auVar77._8_4_ < fVar1 - fStack_1010);
          auVar78._12_4_ = -(uint)(auVar77._12_4_ < fVar1 - fStack_100c);
          uVar17 = movmskps((int)in_R8,auVar53);
          in_R8 = (ulong)uVar17;
          auVar80._4_4_ = -(uint)(fStack_fa4 + fVar2 < auVar79._4_4_);
          auVar80._0_4_ = -(uint)(local_fa8 + fVar2 < auVar79._0_4_);
          auVar80._8_4_ = -(uint)(fStack_fa0 + fVar2 < auVar79._8_4_);
          auVar80._12_4_ = -(uint)(fStack_f9c + fVar2 < auVar79._12_4_);
          auVar72._4_4_ = -(uint)(local_1038._4_4_ < fVar2 - fStack_fa4);
          auVar72._0_4_ = -(uint)(local_1038._0_4_ < fVar2 - local_fa8);
          auVar72._8_4_ = -(uint)(local_1038._8_4_ < fVar2 - fStack_fa0);
          auVar72._12_4_ = -(uint)(local_1038._12_4_ < fVar2 - fStack_f9c);
          auVar59._4_4_ = -(uint)(fVar3 + fVar25 < auVar58._4_4_);
          auVar59._0_4_ = -(uint)(fVar3 + fVar24 < auVar58._0_4_);
          auVar59._8_4_ = -(uint)(fVar3 + fVar26 < auVar58._8_4_);
          auVar59._12_4_ = -(uint)(fVar3 + fVar27 < auVar58._12_4_);
          auVar56._4_4_ = -(uint)(auVar30._4_4_ < fVar3 - fVar25);
          auVar56._0_4_ = -(uint)(auVar30._0_4_ < fVar3 - fVar24);
          auVar56._8_4_ = -(uint)(auVar30._8_4_ < fVar3 - fVar26);
          auVar56._12_4_ = -(uint)(auVar30._12_4_ < fVar3 - fVar27);
          auVar73 = auVar72 | auVar56 | auVar59 | auVar80 | auVar78 | auVar73;
          auVar74._0_4_ = auVar73._0_4_ ^ __LC0;
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001153b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001153b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001153bc;
          uVar10 = movmskps(uVar10,auVar74);
          uVar10 = uVar10 & uVar17;
          if (uVar19 == 6) {
            auVar32._0_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe0) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf0));
            auVar32._4_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe4) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf4));
            auVar32._8_4_ =
                 -(uint)(*(float *)(uVar9 + 0xe8) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xf8));
            auVar32._12_4_ =
                 -(uint)(*(float *)(uVar9 + 0xec) <= fVar4 && fVar4 < *(float *)(uVar9 + 0xfc));
            uVar17 = movmskps(uVar17,auVar32);
            in_R8 = (ulong)uVar17;
            uVar10 = uVar10 & uVar17;
          }
        }
        uVar11 = (ulong)(int)uVar10;
        if (uVar11 == 0) goto LAB_00103a00;
        lVar20 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
          }
        }
        uVar19 = *(ulong *)(uVar9 + lVar20 * 8);
        in_R8 = uVar11 - 1 & uVar11;
        uVar11 = uVar19;
        if (in_R8 != 0) {
          lVar6 = 0;
          if (in_R8 != 0) {
            for (; (in_R8 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
            }
          }
          uVar11 = *(ulong *)(uVar9 + lVar6 * 8);
          fVar28 = local_f98[lVar20];
          fVar35 = local_f98[lVar6];
          uVar18 = in_R8 - 1 & in_R8;
          if (uVar18 == 0) {
            if ((uint)fVar28 < (uint)fVar35) {
              *(ulong *)*pauVar16 = uVar11;
              *(float *)(*pauVar16 + 8) = fVar35;
              pauVar16 = pauVar16 + 1;
              uVar11 = uVar19;
            }
            else {
              *(ulong *)*pauVar16 = uVar19;
              *(float *)(*pauVar16 + 8) = fVar28;
              pauVar16 = pauVar16 + 1;
            }
          }
          else {
            auVar51._8_4_ = fVar28;
            auVar51._0_8_ = uVar19;
            auVar51._12_4_ = 0;
            lVar20 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
              }
            }
            in_R8 = *(ulong *)(uVar9 + lVar20 * 8);
            auVar60._8_4_ = fVar35;
            auVar60._0_8_ = uVar11;
            auVar60._12_4_ = 0;
            fVar36 = local_f98[lVar20];
            auVar34._8_4_ = fVar36;
            auVar34._0_8_ = in_R8;
            auVar34._12_4_ = 0;
            auVar42._8_4_ = -(uint)((int)fVar28 < (int)fVar35);
            uVar18 = uVar18 - 1 & uVar18;
            if (uVar18 == 0) {
              auVar42._4_4_ = auVar42._8_4_;
              auVar42._0_4_ = auVar42._8_4_;
              auVar42._12_4_ = auVar42._8_4_;
              auVar57 = auVar51 & auVar42 | ~auVar42 & auVar60;
              auVar61._8_4_ = -(uint)(auVar57._8_4_ < (int)fVar36);
              auVar56 = auVar42 & auVar60 | ~auVar42 & auVar51;
              auVar61._0_8_ = CONCAT44(auVar61._8_4_,auVar61._8_4_);
              auVar61._12_4_ = auVar61._8_4_;
              auVar30 = auVar34 & auVar61 | ~auVar61 & auVar57;
              uVar11 = auVar57._0_8_ & auVar61._0_8_ | ~auVar61._0_8_ & in_R8;
              auVar75._8_4_ = -(uint)(auVar56._8_4_ < auVar30._8_4_);
              auVar75._4_4_ = auVar75._8_4_;
              auVar75._0_4_ = auVar75._8_4_;
              auVar75._12_4_ = auVar75._8_4_;
              *pauVar16 = auVar30 & auVar75 | ~auVar75 & auVar56;
              pauVar16[1] = auVar56 & auVar75 | ~auVar75 & auVar30;
              pauVar16 = pauVar16 + 2;
            }
            else {
              lVar20 = 0;
              if (uVar18 != 0) {
                for (; (uVar18 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                }
              }
              auVar43._4_4_ = auVar42._8_4_;
              auVar43._0_4_ = auVar42._8_4_;
              auVar43._8_4_ = auVar42._8_4_;
              auVar43._12_4_ = auVar42._8_4_;
              auVar69._8_4_ = local_f98[lVar20];
              auVar69._0_8_ = *(undefined8 *)(uVar9 + lVar20 * 8);
              auVar69._12_4_ = 0;
              auVar57 = auVar51 & auVar43 | ~auVar43 & auVar60;
              auVar52._8_4_ = -(uint)((int)fVar36 < (int)local_f98[lVar20]);
              auVar62 = auVar60 & auVar43 | ~auVar43 & auVar51;
              auVar52._4_4_ = auVar52._8_4_;
              auVar52._0_4_ = auVar52._8_4_;
              auVar52._12_4_ = auVar52._8_4_;
              auVar56 = auVar34 & auVar52 | ~auVar52 & auVar69;
              auVar30 = auVar69 & auVar52 | ~auVar52 & auVar34;
              auVar76._8_4_ = -(uint)(auVar62._8_4_ < auVar30._8_4_);
              auVar76._4_4_ = auVar76._8_4_;
              auVar76._0_4_ = auVar76._8_4_;
              auVar76._12_4_ = auVar76._8_4_;
              auVar63._8_4_ = -(uint)(auVar57._8_4_ < auVar56._8_4_);
              auVar53 = auVar62 & auVar76 | ~auVar76 & auVar30;
              *pauVar16 = auVar30 & auVar76 | ~auVar76 & auVar62;
              auVar63._0_8_ = CONCAT44(auVar63._8_4_,auVar63._8_4_);
              auVar63._12_4_ = auVar63._8_4_;
              local_1038._0_16_ = ~auVar63 & auVar56;
              auVar30 = auVar56 & auVar63 | ~auVar63 & auVar57;
              auVar70._8_4_ = -(uint)(auVar30._8_4_ < auVar53._8_4_);
              auVar70._4_4_ = auVar70._8_4_;
              auVar70._0_4_ = auVar70._8_4_;
              auVar70._12_4_ = auVar70._8_4_;
              pauVar16[1] = auVar53 & auVar70 | ~auVar70 & auVar30;
              pauVar16[2] = auVar30 & auVar70 | ~auVar70 & auVar53;
              uVar11 = SUB168(local_1038._0_16_,0) | auVar57._0_8_ & auVar63._0_8_;
              pauVar16 = pauVar16 + 3;
            }
          }
        }
        goto LAB_00103a38;
      }
      goto LAB_00103a00;
    }
  }
LAB_00103cf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar22;
LAB_00103bb8:
  if (uVar19 == 8) goto LAB_00103a00;
  puVar14 = (uint *)(uVar9 + 0x130);
  lVar20 = 0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = local_1038._1_15_;
  local_1038._0_16_ = auVar7 << 8;
  do {
    bVar22 = 0;
    puVar12 = puVar14 + -4;
    do {
      uVar10 = *puVar12;
      if (uVar10 == 0xffffffff) break;
      puVar13 = puVar12 + 1;
      in_R8 = *(ulong *)(*(long *)param_3 + 0x1e0);
      pPVar5 = *(PointQueryK **)(in_R8 + (ulong)uVar10 * 8);
      *(uint *)(param_3 + 0x44) = uVar10;
      *(uint *)(param_3 + 0x40) = puVar12[4];
      bVar8 = embree::Geometry::pointQuery(pPVar5,(PointQueryContext *)param_2);
      bVar22 = bVar22 | bVar8;
      puVar12 = puVar13;
    } while (puVar14 != puVar13);
    bVar22 = local_1038[0] | bVar22;
    local_1038[0] = bVar22;
    lVar20 = lVar20 + 1;
    puVar14 = puVar14 + 0x50;
  } while (uVar19 - 8 != lVar20);
  if (bVar22 == 0) goto LAB_00103a00;
  fVar24 = *(float *)(param_3 + 0x50);
  local_fa8 = *(float *)(param_3 + 0x54);
  fVar23 = *(float *)(param_3 + 0x58);
  local_1018._4_4_ = fVar23;
  local_1018._0_4_ = fVar23;
  fStack_1010 = fVar23;
  fStack_100c = fVar23;
  fVar25 = fVar24;
  fVar26 = fVar24;
  fVar27 = fVar24;
  fStack_fa4 = local_fa8;
  fStack_fa0 = local_fa8;
  fStack_f9c = local_fa8;
  if (*(int *)(param_3 + 0x18) == 1) {
    fVar23 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    bVar21 = bVar22;
    goto LAB_00103a00;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar15 = pauVar16;
  bVar21 = bVar22;
  if (pauVar16 == (undefined1 (*) [16])local_f88) goto LAB_00103cf8;
  goto LAB_00103a09;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  code *pcVar13;
  undefined4 uVar14;
  RayQueryContext *pRVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  RayQueryContext *pRVar20;
  byte *pbVar21;
  RayQueryContext *pRVar22;
  long in_FS_OFFSET;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
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
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar71;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar82;
  float fVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  int iStack_8fc;
  int *piStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  RayK *pRStack_8e0;
  undefined4 *puStack_8d8;
  undefined4 uStack_8d0;
  float fStack_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  float local_848 [4];
  float local_838 [4];
  float local_828 [4];
  float local_818 [4];
  float local_808 [4];
  float local_7f8 [4];
  undefined8 local_7e8;
  RayQueryContext local_7e0 [1952];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar34 = *(float *)(param_2 + 0x20), 0.0 <= fVar34)) {
    fVar66 = *(float *)(param_2 + 0xc);
    local_7e8 = *(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar66 < 0.0) {
      fVar66 = 0.0;
    }
    fVar9 = *(float *)param_2;
    fVar10 = *(float *)(param_2 + 4);
    fVar11 = *(float *)(param_2 + 8);
    pRVar22 = local_7e0;
    uVar23 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar24 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar25 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar26 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar69._0_4_ = ~uVar23 & *(uint *)(param_2 + 0x10);
    auVar69._4_4_ = ~uVar24 & *(uint *)(param_2 + 0x14);
    auVar69._8_4_ = ~uVar25 & *(uint *)(param_2 + 0x18);
    auVar69._12_4_ = ~uVar26 & *(uint *)(param_2 + 0x1c);
    auVar28._0_4_ = uVar23 & (uint)_LC5;
    auVar28._4_4_ = uVar24 & (uint)_LC5;
    auVar28._8_4_ = uVar25 & (uint)_LC5;
    auVar28._12_4_ = uVar26 & (uint)_LC5;
    auVar28 = auVar28 | auVar69;
    auVar48 = rcpps(auVar69,auVar28);
    fVar38 = auVar48._0_4_;
    fVar40 = auVar48._4_4_;
    fVar42 = auVar48._8_4_;
    fVar38 = (_LC7 - auVar28._0_4_ * fVar38) * fVar38 + fVar38;
    fVar40 = (_LC7 - auVar28._4_4_ * fVar40) * fVar40 + fVar40;
    fVar42 = (_LC7 - auVar28._8_4_ * fVar42) * fVar42 + fVar42;
    auVar48._4_4_ = fVar34;
    auVar48._0_4_ = fVar34;
    uVar12 = (ulong)(fVar38 < 0.0) * 0x10;
    auVar48._8_4_ = fVar34;
    auVar48._12_4_ = fVar34;
    pRVar15 = param_3;
    do {
      uVar23 = _LC9;
      uVar16 = *(ulong *)(pRVar22 + -8);
      pRVar22 = pRVar22 + -8;
      while ((uVar16 & 8) == 0) {
        pfVar18 = (float *)(uVar16 + (ulong)(-(uint)(fVar42 < 0.0) & 0x10) + 0x60);
        pfVar1 = (float *)(uVar16 + 0x20 + uVar12);
        pfVar2 = (float *)(uVar16 + (ulong)(-(uint)(fVar40 < 0.0) & 0x10) + 0x40);
        pfVar3 = (float *)(uVar16 + (-(ulong)(fVar40 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar68._0_4_ = (*pfVar18 - fVar11) * fVar42;
        auVar68._4_4_ = (pfVar18[1] - fVar11) * fVar42;
        auVar68._8_4_ = (pfVar18[2] - fVar11) * fVar42;
        auVar68._12_4_ = (pfVar18[3] - fVar11) * fVar42;
        auVar79._0_4_ = (*pfVar2 - fVar10) * fVar40;
        auVar79._4_4_ = (pfVar2[1] - fVar10) * fVar40;
        auVar79._8_4_ = (pfVar2[2] - fVar10) * fVar40;
        auVar79._12_4_ = (pfVar2[3] - fVar10) * fVar40;
        auVar49._0_4_ = (*pfVar1 - fVar9) * fVar38;
        auVar49._4_4_ = (pfVar1[1] - fVar9) * fVar38;
        auVar49._8_4_ = (pfVar1[2] - fVar9) * fVar38;
        auVar49._12_4_ = (pfVar1[3] - fVar9) * fVar38;
        auVar81._4_4_ = fVar66;
        auVar81._0_4_ = fVar66;
        auVar81._8_4_ = fVar66;
        auVar81._12_4_ = fVar66;
        auVar69 = maxps(auVar68,auVar81);
        auVar28 = maxps(auVar49,auVar79);
        pfVar18 = (float *)(uVar16 + (-(ulong)(fVar42 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar28 = maxps(auVar28,auVar69);
        pfVar1 = (float *)(uVar16 + 0x20 + (uVar12 ^ 0x10));
        auVar80._0_4_ = (*pfVar18 - fVar11) * fVar42;
        auVar80._4_4_ = (pfVar18[1] - fVar11) * fVar42;
        auVar80._8_4_ = (pfVar18[2] - fVar11) * fVar42;
        auVar80._12_4_ = (pfVar18[3] - fVar11) * fVar42;
        auVar70._0_4_ = (*pfVar1 - fVar9) * fVar38;
        auVar70._4_4_ = (pfVar1[1] - fVar9) * fVar38;
        auVar70._8_4_ = (pfVar1[2] - fVar9) * fVar38;
        auVar70._12_4_ = (pfVar1[3] - fVar9) * fVar38;
        auVar81 = minps(auVar80,auVar48);
        auVar8._4_4_ = (pfVar3[1] - fVar10) * fVar40;
        auVar8._0_4_ = (*pfVar3 - fVar10) * fVar40;
        auVar8._8_4_ = (pfVar3[2] - fVar10) * fVar40;
        auVar8._12_4_ = (pfVar3[3] - fVar10) * fVar40;
        auVar69 = minps(auVar70,auVar8);
        auVar69 = minps(auVar69,auVar81);
        auVar50._4_4_ = -(uint)(auVar28._4_4_ <= auVar69._4_4_);
        auVar50._0_4_ = -(uint)(auVar28._0_4_ <= auVar69._0_4_);
        auVar50._8_4_ = -(uint)(auVar28._8_4_ <= auVar69._8_4_);
        auVar50._12_4_ = -(uint)(auVar28._12_4_ <= auVar69._12_4_);
        uVar14 = movmskps((int)pRVar15,auVar50);
        pRVar15 = (RayQueryContext *)CONCAT44((int)((ulong)pRVar15 >> 0x20),uVar14);
        if (pRVar15 == (RayQueryContext *)0x0) goto LAB_0010443c;
        uVar17 = uVar16 & 0xfffffffffffffff0;
        lVar19 = 0;
        if (pRVar15 != (RayQueryContext *)0x0) {
          for (; ((ulong)pRVar15 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
          }
        }
        uVar16 = *(ulong *)(uVar17 + lVar19 * 8);
        pRVar20 = (RayQueryContext *)((ulong)(pRVar15 + -1) & (ulong)pRVar15);
        if (pRVar20 != (RayQueryContext *)0x0) {
          *(ulong *)pRVar22 = uVar16;
          pRVar15 = pRVar20 + -1;
          lVar19 = 0;
          if (pRVar20 != (RayQueryContext *)0x0) {
            for (; ((ulong)pRVar20 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
            }
          }
          while( true ) {
            pRVar22 = pRVar22 + 8;
            uVar16 = *(ulong *)(uVar17 + lVar19 * 8);
            pRVar15 = (RayQueryContext *)((ulong)pRVar15 & (ulong)pRVar20);
            if (pRVar15 == (RayQueryContext *)0x0) break;
            *(ulong *)pRVar22 = uVar16;
            pRVar20 = pRVar15 + -1;
            lVar19 = 0;
            if (pRVar15 != (RayQueryContext *)0x0) {
              for (; ((ulong)pRVar15 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
              }
            }
          }
        }
      }
      lVar19 = 0;
      pfVar18 = (float *)(uVar16 & 0xfffffffffffffff0);
      uVar16 = (ulong)((uint)uVar16 & 0xf);
      if (uVar16 != 8) {
        do {
          fVar34 = pfVar18[0x18];
          fVar35 = pfVar18[0x19];
          fVar36 = pfVar18[0x1a];
          fVar37 = pfVar18[0x1b];
          fVar54 = pfVar18[0x20];
          fVar55 = pfVar18[0x21];
          fVar56 = pfVar18[0x22];
          fVar57 = pfVar18[0x23];
          fVar65 = *(float *)param_2;
          fVar53 = *(float *)(param_2 + 4);
          fVar73 = *(float *)(param_2 + 8);
          fVar39 = pfVar18[0x10] * fVar34 - pfVar18[0xc] * pfVar18[0x1c];
          fVar41 = pfVar18[0x11] * fVar35 - pfVar18[0xd] * pfVar18[0x1d];
          fVar43 = pfVar18[0x12] * fVar36 - pfVar18[0xe] * pfVar18[0x1e];
          fVar45 = pfVar18[0x13] * fVar37 - pfVar18[0xf] * pfVar18[0x1f];
          fVar67 = pfVar18[8] - fVar73;
          fVar71 = pfVar18[9] - fVar73;
          fVar72 = pfVar18[10] - fVar73;
          fVar73 = pfVar18[0xb] - fVar73;
          fVar47 = pfVar18[4] - fVar53;
          fVar51 = pfVar18[5] - fVar53;
          fVar52 = pfVar18[6] - fVar53;
          fVar53 = pfVar18[7] - fVar53;
          fVar33 = *(float *)(param_2 + 0x10);
          fVar58 = *(float *)(param_2 + 0x14);
          fVar59 = *(float *)(param_2 + 0x18);
          fVar62 = *pfVar18 - fVar65;
          fVar63 = pfVar18[1] - fVar65;
          fVar64 = pfVar18[2] - fVar65;
          fVar65 = pfVar18[3] - fVar65;
          fVar89 = pfVar18[0xc] * fVar54 - pfVar18[0x14] * fVar34;
          fVar90 = pfVar18[0xd] * fVar55 - pfVar18[0x15] * fVar35;
          fVar91 = pfVar18[0xe] * fVar56 - pfVar18[0x16] * fVar36;
          fVar92 = pfVar18[0xf] * fVar57 - pfVar18[0x17] * fVar37;
          fVar93 = pfVar18[0x1c] * pfVar18[0x14] - pfVar18[0x10] * fVar54;
          fVar94 = pfVar18[0x1d] * pfVar18[0x15] - pfVar18[0x11] * fVar55;
          fVar95 = pfVar18[0x1e] * pfVar18[0x16] - pfVar18[0x12] * fVar56;
          fVar96 = pfVar18[0x1f] * pfVar18[0x17] - pfVar18[0x13] * fVar57;
          fVar85 = fVar62 * fVar58 - fVar47 * fVar33;
          fVar86 = fVar63 * fVar58 - fVar51 * fVar33;
          fVar87 = fVar64 * fVar58 - fVar52 * fVar33;
          fVar88 = fVar65 * fVar58 - fVar53 * fVar33;
          fVar78 = fVar67 * fVar33 - fVar62 * fVar59;
          fVar82 = fVar71 * fVar33 - fVar63 * fVar59;
          fVar83 = fVar72 * fVar33 - fVar64 * fVar59;
          fVar84 = fVar73 * fVar33 - fVar65 * fVar59;
          fVar74 = fVar47 * fVar59 - fVar67 * fVar58;
          fVar75 = fVar51 * fVar59 - fVar71 * fVar58;
          fVar76 = fVar52 * fVar59 - fVar72 * fVar58;
          fVar77 = fVar53 * fVar59 - fVar73 * fVar58;
          fVar27 = fVar58 * fVar89 + fVar59 * fVar39 + fVar33 * fVar93;
          fVar31 = fVar58 * fVar90 + fVar59 * fVar41 + fVar33 * fVar94;
          fVar32 = fVar58 * fVar91 + fVar59 * fVar43 + fVar33 * fVar95;
          fVar33 = fVar58 * fVar92 + fVar59 * fVar45 + fVar33 * fVar96;
          uVar25 = uVar23 & (uint)fVar27;
          uVar26 = uVar23 & (uint)fVar31;
          uVar44 = uVar23 & (uint)fVar32;
          uVar46 = uVar23 & (uint)fVar33;
          fVar58 = (float)(_LC3 & (uint)fVar27);
          fVar59 = (float)(_UNK_001153c4 & (uint)fVar31);
          fVar60 = (float)(_UNK_001153c8 & (uint)fVar32);
          fVar61 = (float)(_UNK_001153cc & (uint)fVar33);
          fVar34 = (float)((uint)(pfVar18[0x1c] * fVar78 + fVar54 * fVar85 + fVar34 * fVar74) ^
                          uVar25);
          fVar35 = (float)((uint)(pfVar18[0x1d] * fVar82 + fVar55 * fVar86 + fVar35 * fVar75) ^
                          uVar26);
          fVar36 = (float)((uint)(pfVar18[0x1e] * fVar83 + fVar56 * fVar87 + fVar36 * fVar76) ^
                          uVar44);
          fVar37 = (float)((uint)(pfVar18[0x1f] * fVar84 + fVar57 * fVar88 + fVar37 * fVar77) ^
                          uVar46);
          fVar54 = (float)((uint)(pfVar18[0x14] * fVar85 + pfVar18[0x10] * fVar78 +
                                 pfVar18[0xc] * fVar74) ^ uVar25);
          fVar55 = (float)((uint)(pfVar18[0x15] * fVar86 + pfVar18[0x11] * fVar82 +
                                 pfVar18[0xd] * fVar75) ^ uVar26);
          fVar56 = (float)((uint)(pfVar18[0x16] * fVar87 + pfVar18[0x12] * fVar83 +
                                 pfVar18[0xe] * fVar76) ^ uVar44);
          fVar57 = (float)((uint)(pfVar18[0x17] * fVar88 + pfVar18[0x13] * fVar84 +
                                 pfVar18[0xf] * fVar77) ^ uVar46);
          auVar29._0_4_ =
               -(uint)(fVar54 + fVar34 <= fVar58 &&
                      ((fVar27 != 0.0 && 0.0 <= fVar34) && 0.0 <= fVar54)) & _DAT_00116108;
          auVar29._4_4_ =
               -(uint)(fVar55 + fVar35 <= fVar59 &&
                      ((fVar31 != 0.0 && 0.0 <= fVar35) && 0.0 <= fVar55)) & uRam000000000011610c;
          auVar29._8_4_ =
               -(uint)(fVar56 + fVar36 <= fVar60 &&
                      ((fVar32 != 0.0 && 0.0 <= fVar36) && 0.0 <= fVar56)) & uRam0000000000116110;
          auVar29._12_4_ =
               -(uint)(fVar57 + fVar37 <= fVar61 &&
                      ((fVar33 != 0.0 && 0.0 <= fVar37) && 0.0 <= fVar57)) & uRam0000000000116114;
          uVar24 = movmskps((int)pRVar15,auVar29);
          pRVar15 = (RayQueryContext *)(ulong)uVar24;
          if (uVar24 != 0) {
            fVar33 = *(float *)(param_2 + 0x20);
            fVar27 = (float)((uint)(fVar47 * fVar89 + fVar67 * fVar39 + fVar62 * fVar93) ^ uVar25);
            fVar31 = (float)((uint)(fVar51 * fVar90 + fVar71 * fVar41 + fVar63 * fVar94) ^ uVar26);
            fVar32 = (float)((uint)(fVar52 * fVar91 + fVar72 * fVar43 + fVar64 * fVar95) ^ uVar44);
            fVar53 = (float)((uint)(fVar53 * fVar92 + fVar73 * fVar45 + fVar65 * fVar96) ^ uVar46);
            fVar65 = *(float *)(param_2 + 0xc);
            auVar30._0_4_ =
                 auVar29._0_4_ & -(uint)(fVar27 <= fVar33 * fVar58 && fVar65 * fVar58 < fVar27);
            auVar30._4_4_ =
                 auVar29._4_4_ & -(uint)(fVar31 <= fVar33 * fVar59 && fVar65 * fVar59 < fVar31);
            auVar30._8_4_ =
                 auVar29._8_4_ & -(uint)(fVar32 <= fVar33 * fVar60 && fVar65 * fVar60 < fVar32);
            auVar30._12_4_ =
                 auVar29._12_4_ & -(uint)(fVar53 <= fVar33 * fVar61 && fVar65 * fVar61 < fVar53);
            uVar24 = movmskps(uVar24,auVar30);
            pRVar15 = (RayQueryContext *)(ulong)uVar24;
            if (uVar24 != 0) {
              auVar7._4_4_ = fVar59;
              auVar7._0_4_ = fVar58;
              auVar7._8_4_ = fVar60;
              auVar7._12_4_ = fVar61;
              auVar28 = rcpps(auVar30,auVar7);
              uVar17 = (ulong)(int)uVar24;
              lVar4 = *(long *)param_3;
              fVar65 = auVar28._0_4_;
              fVar73 = auVar28._4_4_;
              fVar47 = auVar28._8_4_;
              fVar51 = auVar28._12_4_;
              local_818[0] = fVar93;
              local_818[1] = fVar94;
              local_818[2] = fVar95;
              local_818[3] = fVar96;
              local_808[0] = fVar89;
              local_808[1] = fVar90;
              local_808[2] = fVar91;
              local_808[3] = fVar92;
              local_7f8[0] = fVar39;
              local_7f8[1] = fVar41;
              local_7f8[2] = fVar43;
              local_7f8[3] = fVar45;
              fVar65 = (_LC7 - fVar58 * fVar65) * fVar65 + fVar65;
              fVar73 = (_LC7 - fVar59 * fVar73) * fVar73 + fVar73;
              fVar47 = (_LC7 - fVar60 * fVar47) * fVar47 + fVar47;
              fVar51 = (_LC7 - fVar61 * fVar51) * fVar51 + fVar51;
              local_828[0] = fVar27 * fVar65;
              local_828[1] = fVar31 * fVar73;
              local_828[2] = fVar32 * fVar47;
              local_828[3] = fVar53 * fVar51;
              local_848[0] = fVar34 * fVar65;
              local_848[1] = fVar35 * fVar73;
              local_848[2] = fVar36 * fVar47;
              local_848[3] = fVar37 * fVar51;
              local_838[0] = fVar65 * fVar54;
              local_838[1] = fVar73 * fVar55;
              local_838[2] = fVar47 * fVar56;
              local_838[3] = fVar51 * fVar57;
              do {
                pbVar21 = *(byte **)(param_3 + 0x10);
                uVar6 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                fVar34 = pfVar18[uVar6 + 0x24];
                lVar5 = *(long *)(*(long *)(lVar4 + 0x1e0) + (ulong)(uint)fVar34 * 8);
                pcVar13 = *(code **)(pbVar21 + 0x10);
                if ((pcVar13 == (code *)0x0) && (*(long *)(lVar5 + 0x48) == 0)) {
LAB_0010476c:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010444d;
                }
                fStack_8b8 = local_838[uVar6];
                fStack_8b4 = pfVar18[uVar6 + 0x28];
                iStack_8fc = -1;
                fStack_8bc = local_848[uVar6];
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                fStack_8c0 = local_7f8[uVar6];
                piStack_8f8 = &iStack_8fc;
                fStack_8c4 = local_808[uVar6];
                fStack_8c8 = local_818[uVar6];
                *(float *)(param_2 + 0x20) = local_828[uVar6];
                uStack_8f0 = *(undefined8 *)(lVar5 + 0x18);
                uStack_8e8 = *(undefined8 *)(param_3 + 8);
                puStack_8d8 = &fStack_8c8;
                uStack_8d0 = 1;
                pRStack_8e0 = param_2;
                fStack_8b0 = fVar34;
                if (*(code **)(lVar5 + 0x48) == (code *)0x0) {
LAB_00104913:
                  if ((pcVar13 == (code *)0x0) ||
                     ((((*pbVar21 & 2) == 0 && ((*(byte *)(lVar5 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar13)(&piStack_8f8), *piStack_8f8 != 0)))) goto LAB_0010476c;
                }
                else {
                  (**(code **)(lVar5 + 0x48))(&piStack_8f8);
                  if (*piStack_8f8 != 0) {
                    pbVar21 = *(byte **)(param_3 + 0x10);
                    pcVar13 = *(code **)(pbVar21 + 0x10);
                    goto LAB_00104913;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar33;
                uVar17 = uVar17 ^ 1L << (uVar6 & 0x3f);
              } while (uVar17 != 0);
              pRVar15 = (RayQueryContext *)0x0;
            }
          }
          lVar19 = lVar19 + 1;
          pfVar18 = pfVar18 + 0x2c;
        } while (lVar19 != uVar16 - 8);
      }
LAB_0010443c:
      pRVar15 = (RayQueryContext *)&local_7e8;
    } while (pRVar22 != pRVar15);
  }
LAB_0010444d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int ****ppppiVar16;
  float *pfVar17;
  ulong *puVar18;
  int iVar19;
  ulong uVar20;
  int ****ppppiVar21;
  float *pfVar22;
  byte *pbVar23;
  code *pcVar24;
  undefined4 uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar39;
  undefined1 auVar35 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  float fVar49;
  float fVar50;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  undefined1 auVar52 [16];
  float fVar56;
  float fVar60;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar68;
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar75;
  float fVar77;
  undefined1 auVar73 [16];
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar74 [16];
  float fVar81;
  float fVar84;
  float fVar85;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined8 local_a28;
  undefined8 local_a18;
  undefined8 local_a08;
  undefined4 uStack_8fc;
  int ***pppiStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  RayK *pRStack_8e0;
  undefined4 *puStack_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  float local_848 [4];
  float local_838 [4];
  float local_828 [4];
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar41 = *(float *)(param_2 + 0x20), 0.0 <= fVar41)) {
    fVar49 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar49 < 0.0) {
      fVar49 = 0.0;
    }
    fVar13 = *(float *)param_2;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_2 + 8);
    auVar51._4_4_ = fVar41;
    auVar51._0_4_ = fVar41;
    uVar29 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar30 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    puVar18 = local_7e0;
    auVar73._0_4_ = ~uVar29 & *(uint *)(param_2 + 0x10);
    auVar73._4_4_ = ~uVar30 & *(uint *)(param_2 + 0x14);
    auVar73._8_4_ = ~uVar31 & *(uint *)(param_2 + 0x18);
    auVar73._12_4_ = ~uVar32 & *(uint *)(param_2 + 0x1c);
    auVar35._0_4_ = uVar29 & (uint)_LC5;
    auVar35._4_4_ = uVar30 & (uint)_LC5;
    auVar35._8_4_ = uVar31 & (uint)_LC5;
    auVar35._12_4_ = uVar32 & (uint)_LC5;
    auVar35 = auVar35 | auVar73;
    auVar73 = rcpps(auVar73,auVar35);
    fVar33 = auVar73._0_4_;
    fVar37 = auVar73._4_4_;
    fVar39 = auVar73._8_4_;
    fVar33 = (_LC7 - auVar35._0_4_ * fVar33) * fVar33 + fVar33;
    fVar37 = (_LC7 - auVar35._4_4_ * fVar37) * fVar37 + fVar37;
    fVar39 = (_LC7 - auVar35._8_4_ * fVar39) * fVar39 + fVar39;
    auVar51._8_4_ = fVar41;
    auVar51._12_4_ = fVar41;
    do {
      uVar29 = _LC9;
      fVar41 = *(float *)(param_2 + 0x1c);
      uVar20 = puVar18[-1];
      puVar18 = puVar18 + -1;
      while( true ) {
        pfVar17 = (float *)(uVar20 & 0xfffffffffffffff0);
        uVar27 = (ulong)((uint)uVar20 & 0xf);
        ppppiVar21 = (int ****)(ulong)((uint)uVar20 & 8);
        if ((uVar20 & 8) != 0) break;
        auVar82._4_4_ = fVar49;
        auVar82._0_4_ = fVar49;
        auVar82._8_4_ = fVar49;
        auVar82._12_4_ = fVar49;
        pfVar1 = (float *)((long)pfVar17 + (ulong)(-(uint)(fVar37 < 0.0) & 0x10) + 0x40);
        pfVar2 = (float *)((long)pfVar17 + (ulong)(-(uint)(fVar39 < 0.0) & 0x10) + 0x60);
        pfVar3 = pfVar17 + (ulong)(fVar33 < 0.0) * 4 + 8;
        pfVar4 = (float *)((long)pfVar17 + ((ulong)(fVar33 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar5 = (float *)((long)pfVar17 + (-(ulong)(fVar37 < 0.0) & 0xfffffffffffffff0) + 0x50);
        pfVar22 = (float *)((long)pfVar17 + (-(ulong)(fVar39 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar57._0_4_ = ((pfVar1[0x18] * fVar41 + *pfVar1) - fVar14) * fVar37;
        auVar57._4_4_ = ((pfVar1[0x19] * fVar41 + pfVar1[1]) - fVar14) * fVar37;
        auVar57._8_4_ = ((pfVar1[0x1a] * fVar41 + pfVar1[2]) - fVar14) * fVar37;
        auVar57._12_4_ = ((pfVar1[0x1b] * fVar41 + pfVar1[3]) - fVar14) * fVar37;
        auVar64._0_4_ = ((pfVar2[0x18] * fVar41 + *pfVar2) - fVar15) * fVar39;
        auVar64._4_4_ = ((pfVar2[0x19] * fVar41 + pfVar2[1]) - fVar15) * fVar39;
        auVar64._8_4_ = ((pfVar2[0x1a] * fVar41 + pfVar2[2]) - fVar15) * fVar39;
        auVar64._12_4_ = ((pfVar2[0x1b] * fVar41 + pfVar2[3]) - fVar15) * fVar39;
        auVar35 = maxps(auVar57,auVar64);
        auVar65._0_4_ = ((pfVar3[0x18] * fVar41 + *pfVar3) - fVar13) * fVar33;
        auVar65._4_4_ = ((pfVar3[0x19] * fVar41 + pfVar3[1]) - fVar13) * fVar33;
        auVar65._8_4_ = ((pfVar3[0x1a] * fVar41 + pfVar3[2]) - fVar13) * fVar33;
        auVar65._12_4_ = ((pfVar3[0x1b] * fVar41 + pfVar3[3]) - fVar13) * fVar33;
        auVar73 = maxps(auVar82,auVar65);
        auVar73 = maxps(auVar73,auVar35);
        auVar66._0_4_ = ((pfVar22[0x18] * fVar41 + *pfVar22) - fVar15) * fVar39;
        auVar66._4_4_ = ((pfVar22[0x19] * fVar41 + pfVar22[1]) - fVar15) * fVar39;
        auVar66._8_4_ = ((pfVar22[0x1a] * fVar41 + pfVar22[2]) - fVar15) * fVar39;
        auVar66._12_4_ = ((pfVar22[0x1b] * fVar41 + pfVar22[3]) - fVar15) * fVar39;
        auVar58._0_4_ = ((pfVar5[0x18] * fVar41 + *pfVar5) - fVar14) * fVar37;
        auVar58._4_4_ = ((pfVar5[0x19] * fVar41 + pfVar5[1]) - fVar14) * fVar37;
        auVar58._8_4_ = ((pfVar5[0x1a] * fVar41 + pfVar5[2]) - fVar14) * fVar37;
        auVar58._12_4_ = ((pfVar5[0x1b] * fVar41 + pfVar5[3]) - fVar14) * fVar37;
        auVar35 = minps(auVar58,auVar66);
        auVar67._0_4_ = ((pfVar4[0x18] * fVar41 + *pfVar4) - fVar13) * fVar33;
        auVar67._4_4_ = ((pfVar4[0x19] * fVar41 + pfVar4[1]) - fVar13) * fVar33;
        auVar67._8_4_ = ((pfVar4[0x1a] * fVar41 + pfVar4[2]) - fVar13) * fVar33;
        auVar67._12_4_ = ((pfVar4[0x1b] * fVar41 + pfVar4[3]) - fVar13) * fVar33;
        auVar116 = minps(auVar51,auVar67);
        auVar35 = minps(auVar116,auVar35);
        bVar8 = auVar73._0_4_ <= auVar35._0_4_;
        bVar9 = auVar73._4_4_ <= auVar35._4_4_;
        bVar10 = auVar73._8_4_ <= auVar35._8_4_;
        bVar11 = auVar73._12_4_ <= auVar35._12_4_;
        auVar83._4_4_ = -(uint)bVar9;
        auVar83._0_4_ = -(uint)bVar8;
        auVar83._8_4_ = -(uint)bVar10;
        auVar83._12_4_ = -(uint)bVar11;
        if (uVar27 == 6) {
          auVar83._0_4_ = -(uint)((pfVar17[0x38] <= fVar41 && fVar41 < pfVar17[0x3c]) && bVar8);
          auVar83._4_4_ = -(uint)((pfVar17[0x39] <= fVar41 && fVar41 < pfVar17[0x3d]) && bVar9);
          auVar83._8_4_ = -(uint)((pfVar17[0x3a] <= fVar41 && fVar41 < pfVar17[0x3e]) && bVar10);
          auVar83._12_4_ = -(uint)((pfVar17[0x3b] <= fVar41 && fVar41 < pfVar17[0x3f]) && bVar11);
        }
        uVar25 = movmskps((int)pfVar4,auVar83);
        uVar27 = CONCAT44((int)((ulong)pfVar4 >> 0x20),uVar25);
        if (uVar27 == 0) goto LAB_00104d3a;
        lVar28 = 0;
        if (uVar27 != 0) {
          for (; (uVar27 >> lVar28 & 1) == 0; lVar28 = lVar28 + 1) {
          }
        }
        uVar20 = *(ulong *)(pfVar17 + lVar28 * 2);
        uVar27 = uVar27 - 1 & uVar27;
        if (uVar27 != 0) {
          *puVar18 = uVar20;
          uVar26 = uVar27 - 1;
          lVar28 = 0;
          if (uVar27 != 0) {
            for (; (uVar27 >> lVar28 & 1) == 0; lVar28 = lVar28 + 1) {
            }
          }
          while( true ) {
            puVar18 = puVar18 + 1;
            uVar20 = *(ulong *)(pfVar17 + lVar28 * 2);
            uVar26 = uVar26 & uVar27;
            if (uVar26 == 0) break;
            *puVar18 = uVar20;
            uVar27 = uVar26 - 1;
            lVar28 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> lVar28 & 1) == 0; lVar28 = lVar28 + 1) {
              }
            }
          }
        }
      }
      lVar28 = 0;
      if (uVar27 != 8) {
        do {
          fVar87 = pfVar17[0x2c] * fVar41 + pfVar17[8];
          fVar88 = pfVar17[0x2d] * fVar41 + pfVar17[9];
          fVar89 = pfVar17[0x2e] * fVar41 + pfVar17[10];
          fVar90 = pfVar17[0x2f] * fVar41 + pfVar17[0xb];
          fVar43 = *(float *)param_2;
          fVar34 = *(float *)(param_2 + 4);
          fVar38 = *(float *)(param_2 + 8);
          fVar56 = pfVar17[0x28] * fVar41 + pfVar17[4];
          fVar60 = pfVar17[0x29] * fVar41 + pfVar17[5];
          fVar61 = pfVar17[0x2a] * fVar41 + pfVar17[6];
          fVar62 = pfVar17[0x2b] * fVar41 + pfVar17[7];
          fVar81 = pfVar17[0x24] * fVar41 + *pfVar17;
          fVar84 = pfVar17[0x25] * fVar41 + pfVar17[1];
          fVar85 = pfVar17[0x26] * fVar41 + pfVar17[2];
          fVar86 = pfVar17[0x27] * fVar41 + pfVar17[3];
          fVar120 = fVar87 - (pfVar17[0x38] * fVar41 + pfVar17[0x14]);
          fVar121 = fVar88 - (pfVar17[0x39] * fVar41 + pfVar17[0x15]);
          fVar122 = fVar89 - (pfVar17[0x3a] * fVar41 + pfVar17[0x16]);
          fVar123 = fVar90 - (pfVar17[0x3b] * fVar41 + pfVar17[0x17]);
          fVar63 = (pfVar17[0x44] * fVar41 + pfVar17[0x20]) - fVar87;
          fVar68 = (pfVar17[0x45] * fVar41 + pfVar17[0x21]) - fVar88;
          fVar69 = (pfVar17[0x46] * fVar41 + pfVar17[0x22]) - fVar89;
          fVar70 = (pfVar17[0x47] * fVar41 + pfVar17[0x23]) - fVar90;
          fVar50 = (pfVar17[0x40] * fVar41 + pfVar17[0x1c]) - fVar56;
          fVar53 = (pfVar17[0x41] * fVar41 + pfVar17[0x1d]) - fVar60;
          fVar54 = (pfVar17[0x42] * fVar41 + pfVar17[0x1e]) - fVar61;
          fVar55 = (pfVar17[0x43] * fVar41 + pfVar17[0x1f]) - fVar62;
          fVar95 = fVar56 - (pfVar17[0x34] * fVar41 + pfVar17[0x10]);
          fVar96 = fVar60 - (pfVar17[0x35] * fVar41 + pfVar17[0x11]);
          fVar97 = fVar61 - (pfVar17[0x36] * fVar41 + pfVar17[0x12]);
          fVar98 = fVar62 - (pfVar17[0x37] * fVar41 + pfVar17[0x13]);
          fVar91 = fVar81 - (pfVar17[0x30] * fVar41 + pfVar17[0xc]);
          fVar92 = fVar84 - (pfVar17[0x31] * fVar41 + pfVar17[0xd]);
          fVar93 = fVar85 - (pfVar17[0x32] * fVar41 + pfVar17[0xe]);
          fVar94 = fVar86 - (pfVar17[0x33] * fVar41 + pfVar17[0xf]);
          fVar42 = (fVar41 * pfVar17[0x3c] + pfVar17[0x18]) - fVar81;
          fVar45 = (fVar41 * pfVar17[0x3d] + pfVar17[0x19]) - fVar84;
          fVar47 = (fVar41 * pfVar17[0x3e] + pfVar17[0x1a]) - fVar85;
          fVar48 = (fVar41 * pfVar17[0x3f] + pfVar17[0x1b]) - fVar86;
          fVar81 = fVar81 - fVar43;
          fVar84 = fVar84 - fVar43;
          fVar85 = fVar85 - fVar43;
          fVar86 = fVar86 - fVar43;
          fVar71 = fVar95 * fVar42 - fVar91 * fVar50;
          fVar75 = fVar96 * fVar45 - fVar92 * fVar53;
          fVar77 = fVar97 * fVar47 - fVar93 * fVar54;
          fVar79 = fVar98 * fVar48 - fVar94 * fVar55;
          local_a28 = CONCAT44(fVar75,fVar71);
          fVar72 = fVar91 * fVar63 - fVar120 * fVar42;
          fVar76 = fVar92 * fVar68 - fVar121 * fVar45;
          fVar78 = fVar93 * fVar69 - fVar122 * fVar47;
          fVar80 = fVar94 * fVar70 - fVar123 * fVar48;
          local_a18 = CONCAT44(fVar76,fVar72);
          fVar41 = *(float *)(param_2 + 0x10);
          fVar43 = *(float *)(param_2 + 0x14);
          fVar46 = *(float *)(param_2 + 0x18);
          fVar107 = fVar120 * fVar50 - fVar95 * fVar63;
          fVar109 = fVar121 * fVar53 - fVar96 * fVar68;
          fVar111 = fVar122 * fVar54 - fVar97 * fVar69;
          fVar113 = fVar123 * fVar55 - fVar98 * fVar70;
          local_a08 = CONCAT44(fVar109,fVar107);
          fVar56 = fVar56 - fVar34;
          fVar60 = fVar60 - fVar34;
          fVar61 = fVar61 - fVar34;
          fVar62 = fVar62 - fVar34;
          fVar87 = fVar87 - fVar38;
          fVar88 = fVar88 - fVar38;
          fVar89 = fVar89 - fVar38;
          fVar90 = fVar90 - fVar38;
          fVar115 = fVar81 * fVar43 - fVar56 * fVar41;
          fVar117 = fVar84 * fVar43 - fVar60 * fVar41;
          fVar118 = fVar85 * fVar43 - fVar61 * fVar41;
          fVar119 = fVar86 * fVar43 - fVar62 * fVar41;
          fVar108 = fVar87 * fVar41 - fVar81 * fVar46;
          fVar110 = fVar88 * fVar41 - fVar84 * fVar46;
          fVar112 = fVar89 * fVar41 - fVar85 * fVar46;
          fVar114 = fVar90 * fVar41 - fVar86 * fVar46;
          fVar103 = fVar56 * fVar46 - fVar87 * fVar43;
          fVar104 = fVar60 * fVar46 - fVar88 * fVar43;
          fVar105 = fVar61 * fVar46 - fVar89 * fVar43;
          fVar106 = fVar62 * fVar46 - fVar90 * fVar43;
          fVar34 = fVar43 * fVar72 + fVar46 * fVar71 + fVar41 * fVar107;
          fVar38 = fVar43 * fVar76 + fVar46 * fVar75 + fVar41 * fVar109;
          fVar40 = fVar43 * fVar78 + fVar46 * fVar77 + fVar41 * fVar111;
          fVar41 = fVar43 * fVar80 + fVar46 * fVar79 + fVar41 * fVar113;
          auVar74._0_4_ = uVar29 & (uint)fVar34;
          auVar74._4_4_ = uVar29 & (uint)fVar38;
          auVar74._8_4_ = uVar29 & (uint)fVar40;
          auVar74._12_4_ = uVar29 & (uint)fVar41;
          fVar99 = (float)(_LC3 & (uint)fVar34);
          fVar100 = (float)(_UNK_001153c4 & (uint)fVar38);
          fVar101 = (float)(_UNK_001153c8 & (uint)fVar40);
          fVar102 = (float)(_UNK_001153cc & (uint)fVar41);
          auVar52._0_4_ = fVar50 * fVar108 + fVar63 * fVar115 + fVar42 * fVar103;
          auVar52._4_4_ = fVar53 * fVar110 + fVar68 * fVar117 + fVar45 * fVar104;
          auVar52._8_4_ = fVar54 * fVar112 + fVar69 * fVar118 + fVar47 * fVar105;
          auVar52._12_4_ = fVar55 * fVar114 + fVar70 * fVar119 + fVar48 * fVar106;
          auVar52 = auVar52 ^ auVar74;
          fVar47 = auVar52._0_4_;
          fVar48 = auVar52._4_4_;
          fVar50 = auVar52._8_4_;
          fVar53 = auVar52._12_4_;
          auVar44._0_4_ = fVar120 * fVar115 + fVar95 * fVar108 + fVar91 * fVar103;
          auVar44._4_4_ = fVar121 * fVar117 + fVar96 * fVar110 + fVar92 * fVar104;
          auVar44._8_4_ = fVar122 * fVar118 + fVar97 * fVar112 + fVar93 * fVar105;
          auVar44._12_4_ = fVar123 * fVar119 + fVar98 * fVar114 + fVar94 * fVar106;
          auVar44 = auVar44 ^ auVar74;
          fVar43 = auVar44._0_4_;
          fVar46 = auVar44._4_4_;
          fVar42 = auVar44._8_4_;
          fVar45 = auVar44._12_4_;
          auVar116._0_4_ =
               -(uint)((0.0 <= fVar43 && (0.0 <= fVar47 && fVar34 != 0.0)) &&
                      fVar43 + fVar47 <= fVar99) & _DAT_00116108;
          auVar116._4_4_ =
               -(uint)(((0.0 <= fVar48 && fVar38 != 0.0) && 0.0 <= fVar46) &&
                      fVar46 + fVar48 <= fVar100) & uRam000000000011610c;
          auVar116._8_4_ =
               -(uint)(((fVar40 != 0.0 && 0.0 <= fVar50) && 0.0 <= fVar42) &&
                      fVar42 + fVar50 <= fVar101) & uRam0000000000116110;
          auVar116._12_4_ =
               -(uint)(((0.0 <= fVar53 && fVar41 != 0.0) && 0.0 <= fVar45) &&
                      fVar45 + fVar53 <= fVar102) & uRam0000000000116114;
          uVar25 = (undefined4)((ulong)ppppiVar21 >> 0x20);
          iVar19 = movmskps((int)ppppiVar21,auVar116);
          ppppiVar21 = (int ****)CONCAT44(uVar25,iVar19);
          if (iVar19 != 0) {
            auVar59._0_4_ = fVar56 * fVar72 + fVar87 * fVar71 + fVar81 * fVar107;
            auVar59._4_4_ = fVar60 * fVar76 + fVar88 * fVar75 + fVar84 * fVar109;
            auVar59._8_4_ = fVar61 * fVar78 + fVar89 * fVar77 + fVar85 * fVar111;
            auVar59._12_4_ = fVar62 * fVar80 + fVar90 * fVar79 + fVar86 * fVar113;
            auVar59 = auVar59 ^ auVar74;
            fVar41 = *(float *)(param_2 + 0x20);
            fVar38 = auVar59._0_4_;
            fVar40 = auVar59._4_4_;
            fVar54 = auVar59._8_4_;
            fVar55 = auVar59._12_4_;
            fVar34 = *(float *)(param_2 + 0xc);
            auVar36._0_4_ =
                 auVar116._0_4_ & -(uint)(fVar34 * fVar99 < fVar38 && fVar38 <= fVar41 * fVar99);
            auVar36._4_4_ =
                 auVar116._4_4_ & -(uint)(fVar34 * fVar100 < fVar40 && fVar40 <= fVar41 * fVar100);
            auVar36._8_4_ =
                 auVar116._8_4_ & -(uint)(fVar34 * fVar101 < fVar54 && fVar54 <= fVar41 * fVar101);
            auVar36._12_4_ =
                 auVar116._12_4_ & -(uint)(fVar34 * fVar102 < fVar55 && fVar55 <= fVar41 * fVar102);
            iVar19 = movmskps(iVar19,auVar36);
            ppppiVar16 = (int ****)CONCAT44(uVar25,iVar19);
            ppppiVar21 = ppppiVar16;
            if (iVar19 != 0) {
              auVar12._4_4_ = fVar100;
              auVar12._0_4_ = fVar99;
              auVar12._8_4_ = fVar101;
              auVar12._12_4_ = fVar102;
              auVar35 = rcpps(auVar36,auVar12);
              local_818 = local_a08;
              uStack_810 = CONCAT44(fVar113,fVar111);
              lVar6 = *(long *)param_3;
              fVar34 = auVar35._0_4_;
              fVar56 = auVar35._4_4_;
              fVar60 = auVar35._8_4_;
              fVar61 = auVar35._12_4_;
              local_808 = local_a18;
              uStack_800 = CONCAT44(fVar80,fVar78);
              local_7f8 = local_a28;
              uStack_7f0 = CONCAT44(fVar79,fVar77);
              fVar34 = (_LC7 - fVar99 * fVar34) * fVar34 + fVar34;
              fVar56 = (_LC7 - fVar100 * fVar56) * fVar56 + fVar56;
              fVar60 = (_LC7 - fVar101 * fVar60) * fVar60 + fVar60;
              fVar61 = (_LC7 - fVar102 * fVar61) * fVar61 + fVar61;
              local_828[0] = fVar38 * fVar34;
              local_828[1] = fVar40 * fVar56;
              local_828[2] = fVar54 * fVar60;
              local_828[3] = fVar55 * fVar61;
              local_848[0] = fVar47 * fVar34;
              local_848[1] = fVar48 * fVar56;
              local_848[2] = fVar50 * fVar60;
              local_848[3] = fVar53 * fVar61;
              local_838[0] = fVar34 * fVar43;
              local_838[1] = fVar56 * fVar46;
              local_838[2] = fVar60 * fVar42;
              local_838[3] = fVar61 * fVar45;
              do {
                uVar20 = 0;
                if (ppppiVar16 != (int ****)0x0) {
                  for (; ((ulong)ppppiVar16 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                  }
                }
                fVar43 = pfVar17[uVar20 + 0x48];
                lVar7 = *(long *)(*(long *)(lVar6 + 0x1e0) + (ulong)(uint)fVar43 * 8);
                pbVar23 = *(byte **)(param_3 + 0x10);
                pcVar24 = *(code **)(pbVar23 + 0x10);
                if ((pcVar24 == (code *)0x0) && (*(long *)(lVar7 + 0x48) == 0)) {
LAB_0010511a:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00104d4b;
                }
                fStack_8b8 = local_838[uVar20];
                fStack_8b4 = pfVar17[uVar20 + 0x4c];
                uStack_8fc = 0xffffffff;
                fStack_8bc = local_848[uVar20];
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar20 * 4);
                pppiStack_8f8 = (int ***)&uStack_8fc;
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar20 * 4);
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar20 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar20];
                uStack_8f0 = *(undefined8 *)(lVar7 + 0x18);
                uStack_8e8 = *(undefined8 *)(param_3 + 8);
                puStack_8d8 = &uStack_8c8;
                uStack_8d0 = 1;
                pRStack_8e0 = param_2;
                fStack_8b0 = fVar43;
                if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
LAB_001052e7:
                  if ((pcVar24 != (code *)0x0) &&
                     (((*pbVar23 & 2) != 0 || ((*(byte *)(lVar7 + 0x3e) & 0x40) != 0)))) {
                    ppppiVar21 = &pppiStack_8f8;
                    (*pcVar24)();
                    if (*(int *)pppiStack_8f8 == 0) goto LAB_00105383;
                  }
                  goto LAB_0010511a;
                }
                (**(code **)(lVar7 + 0x48))(&pppiStack_8f8);
                ppppiVar21 = (int ****)pppiStack_8f8;
                if (*(int *)pppiStack_8f8 != 0) {
                  pbVar23 = *(byte **)(param_3 + 0x10);
                  pcVar24 = *(code **)(pbVar23 + 0x10);
                  goto LAB_001052e7;
                }
LAB_00105383:
                *(float *)(param_2 + 0x20) = fVar41;
                ppppiVar16 = (int ****)((ulong)ppppiVar16 ^ 1L << (uVar20 & 0x3f));
              } while (ppppiVar16 != (int ****)0x0);
            }
          }
          lVar28 = lVar28 + 1;
          pfVar17 = pfVar17 + 0x50;
          if (lVar28 == uVar27 - 8) break;
          fVar41 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_00104d3a:
    } while (puVar18 != &local_7e8);
  }
LAB_00104d4b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  ulong uVar19;
  ulong *puVar20;
  uint *puVar21;
  uint *puVar22;
  code *pcVar23;
  ulong uVar24;
  ulong *puVar25;
  float *pfVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  uint *puVar32;
  long in_FS_OFFSET;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar51 [16];
  float fVar60;
  float fVar61;
  float fVar67;
  float fVar69;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar74 [16];
  float fVar82;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar84 [16];
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar113;
  float fVar116;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar131 [16];
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar144 [16];
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  uint uStack_8ec;
  uint *puStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  RayK *pRStack_8d0;
  undefined4 *puStack_8c8;
  undefined4 uStack_8c0;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  float fStack_8a4;
  float fStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  float local_808 [4];
  float local_7f8 [4];
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar4 = *(float *)(param_2 + 0x20), 0.0 <= fVar4)) {
    fVar48 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar48 < 0.0) {
      fVar48 = 0.0;
    }
    fVar13 = *(float *)param_2;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_2 + 8);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _UNK_001153d4);
    uVar37 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _UNK_001153d8);
    uVar41 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _UNK_001153dc);
    auVar109._4_4_ = _LC7;
    auVar109._0_4_ = _LC7;
    auVar62._0_4_ = uVar33 & (uint)_LC5;
    auVar62._4_4_ = uVar34 & (uint)_UNK_001153d4;
    auVar62._8_4_ = uVar37 & (uint)_UNK_001153d8;
    auVar62._12_4_ = uVar41 & (uint)_UNK_001153dc;
    auVar64._0_4_ = ~uVar33 & *(uint *)(param_2 + 0x10);
    auVar64._4_4_ = ~uVar34 & *(uint *)(param_2 + 0x14);
    auVar64._8_4_ = ~uVar37 & *(uint *)(param_2 + 0x18);
    auVar64._12_4_ = ~uVar41 & *(uint *)(param_2 + 0x1c);
    auVar109._8_4_ = _LC7;
    auVar109._12_4_ = _LC7;
    auVar62 = divps(auVar109,auVar62 | auVar64);
    fVar45 = _LC12 * auVar62._0_4_;
    fVar52 = _LC12 * auVar62._4_4_;
    fVar55 = _LC12 * auVar62._8_4_;
    fVar60 = auVar62._0_4_ * _LC14;
    fVar67 = auVar62._4_4_ * _LC14;
    fVar69 = auVar62._8_4_ * _LC14;
    uVar19 = (ulong)(fVar45 < 0.0) * 0x10;
    uVar30 = (ulong)(-(uint)(fVar52 < 0.0) & 0x10) + 0x20;
    puVar20 = local_7e0;
    do {
      uVar31 = puVar20[-1];
      puVar25 = puVar20 + -1;
      while ((uVar31 & 8) == 0) {
        pfVar26 = (float *)(uVar31 + (ulong)(-(uint)(fVar55 < 0.0) & 0x10) + 0x60);
        pfVar1 = (float *)(uVar31 + 0x20 + uVar19);
        pfVar2 = (float *)(uVar31 + 0x20 + uVar30);
        pfVar3 = (float *)(uVar31 + (-(ulong)(fVar52 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar63._0_4_ = (*pfVar26 - fVar15) * fVar55;
        auVar63._4_4_ = (pfVar26[1] - fVar15) * fVar55;
        auVar63._8_4_ = (pfVar26[2] - fVar15) * fVar55;
        auVar63._12_4_ = (pfVar26[3] - fVar15) * fVar55;
        auVar107._0_4_ = (*pfVar2 - fVar14) * fVar52;
        auVar107._4_4_ = (pfVar2[1] - fVar14) * fVar52;
        auVar107._8_4_ = (pfVar2[2] - fVar14) * fVar52;
        auVar107._12_4_ = (pfVar2[3] - fVar14) * fVar52;
        auVar49._0_4_ = (*pfVar1 - fVar13) * fVar45;
        auVar49._4_4_ = (pfVar1[1] - fVar13) * fVar45;
        auVar49._8_4_ = (pfVar1[2] - fVar13) * fVar45;
        auVar49._12_4_ = (pfVar1[3] - fVar13) * fVar45;
        auVar144._0_4_ = (*pfVar3 - fVar14) * fVar67;
        auVar144._4_4_ = (pfVar3[1] - fVar14) * fVar67;
        auVar144._8_4_ = (pfVar3[2] - fVar14) * fVar67;
        auVar144._12_4_ = (pfVar3[3] - fVar14) * fVar67;
        auVar10._4_4_ = fVar48;
        auVar10._0_4_ = fVar48;
        auVar10._8_4_ = fVar48;
        auVar10._12_4_ = fVar48;
        auVar64 = maxps(auVar63,auVar10);
        auVar62 = maxps(auVar49,auVar107);
        pfVar26 = (float *)(uVar31 + (-(ulong)(fVar55 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar62 = maxps(auVar62,auVar64);
        pfVar1 = (float *)(uVar31 + 0x20 + (uVar19 ^ 0x10));
        auVar108._0_4_ = (*pfVar26 - fVar15) * fVar69;
        auVar108._4_4_ = (pfVar26[1] - fVar15) * fVar69;
        auVar108._8_4_ = (pfVar26[2] - fVar15) * fVar69;
        auVar108._12_4_ = (pfVar26[3] - fVar15) * fVar69;
        auVar65._0_4_ = (*pfVar1 - fVar13) * fVar60;
        auVar65._4_4_ = (pfVar1[1] - fVar13) * fVar60;
        auVar65._8_4_ = (pfVar1[2] - fVar13) * fVar60;
        auVar65._12_4_ = (pfVar1[3] - fVar13) * fVar60;
        auVar9._4_4_ = fVar4;
        auVar9._0_4_ = fVar4;
        auVar9._8_4_ = fVar4;
        auVar9._12_4_ = fVar4;
        auVar109 = minps(auVar108,auVar9);
        auVar64 = minps(auVar65,auVar144);
        auVar64 = minps(auVar64,auVar109);
        auVar50._4_4_ = -(uint)(auVar62._4_4_ <= auVar64._4_4_);
        auVar50._0_4_ = -(uint)(auVar62._0_4_ <= auVar64._0_4_);
        auVar50._8_4_ = -(uint)(auVar62._8_4_ <= auVar64._8_4_);
        auVar50._12_4_ = -(uint)(auVar62._12_4_ <= auVar64._12_4_);
        uVar18 = movmskps((int)puVar20,auVar50);
        puVar20 = (ulong *)CONCAT44((int)((ulong)puVar20 >> 0x20),uVar18);
        if (puVar20 == (ulong *)0x0) goto LAB_00105eb0;
        uVar27 = uVar31 & 0xfffffffffffffff0;
        lVar29 = 0;
        if (puVar20 != (ulong *)0x0) {
          for (; ((ulong)puVar20 >> lVar29 & 1) == 0; lVar29 = lVar29 + 1) {
          }
        }
        uVar31 = *(ulong *)(uVar27 + lVar29 * 8);
        uVar24 = (long)puVar20 - 1U & (ulong)puVar20;
        if (uVar24 != 0) {
          *puVar25 = uVar31;
          puVar20 = (ulong *)(uVar24 - 1);
          lVar29 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> lVar29 & 1) == 0; lVar29 = lVar29 + 1) {
            }
          }
          while( true ) {
            puVar25 = puVar25 + 1;
            uVar31 = *(ulong *)(uVar27 + lVar29 * 8);
            puVar20 = (ulong *)((ulong)puVar20 & uVar24);
            if (puVar20 == (ulong *)0x0) break;
            *puVar25 = uVar31;
            uVar24 = (long)puVar20 - 1;
            lVar29 = 0;
            if (puVar20 != (ulong *)0x0) {
              for (; ((ulong)puVar20 >> lVar29 & 1) == 0; lVar29 = lVar29 + 1) {
              }
            }
          }
        }
      }
      pfVar26 = (float *)(uVar31 & 0xfffffffffffffff0);
      puVar21 = (uint *)((ulong)((uint)uVar31 & 0xf) - 8);
      if (puVar21 != (uint *)0x0) {
        puVar32 = (uint *)0x0;
        puVar22 = puVar21;
        uVar31 = uVar30;
        do {
          fVar71 = *(float *)param_2;
          fVar103 = *(float *)(param_2 + 4);
          fVar80 = *(float *)(param_2 + 8);
          fVar91 = *(float *)(param_2 + 0x10);
          fVar79 = *(float *)(param_2 + 0x14);
          fVar130 = *(float *)(param_2 + 0x18);
          fVar92 = pfVar26[0x20] - fVar80;
          fVar94 = pfVar26[0x21] - fVar80;
          fVar95 = pfVar26[0x22] - fVar80;
          fVar96 = pfVar26[0x23] - fVar80;
          fVar122 = pfVar26[4] - fVar103;
          fVar123 = pfVar26[5] - fVar103;
          fVar124 = pfVar26[6] - fVar103;
          fVar125 = pfVar26[7] - fVar103;
          fVar132 = pfVar26[0x14] - fVar80;
          fVar133 = pfVar26[0x15] - fVar80;
          fVar134 = pfVar26[0x16] - fVar80;
          fVar135 = pfVar26[0x17] - fVar80;
          fVar126 = pfVar26[0x10] - fVar103;
          fVar127 = pfVar26[0x11] - fVar103;
          fVar128 = pfVar26[0x12] - fVar103;
          fVar129 = pfVar26[0x13] - fVar103;
          fVar145 = pfVar26[0xc] - fVar71;
          fVar146 = pfVar26[0xd] - fVar71;
          fVar147 = pfVar26[0xe] - fVar71;
          fVar148 = pfVar26[0xf] - fVar71;
          fVar149 = *pfVar26 - fVar71;
          fVar150 = pfVar26[1] - fVar71;
          fVar151 = pfVar26[2] - fVar71;
          fVar152 = pfVar26[3] - fVar71;
          fVar72 = pfVar26[8] - fVar80;
          fVar75 = pfVar26[9] - fVar80;
          fVar77 = pfVar26[10] - fVar80;
          fVar80 = pfVar26[0xb] - fVar80;
          fVar97 = pfVar26[0x1c] - fVar103;
          fVar101 = pfVar26[0x1d] - fVar103;
          fVar102 = pfVar26[0x1e] - fVar103;
          fVar103 = pfVar26[0x1f] - fVar103;
          fVar104 = fVar132 - fVar92;
          fVar113 = fVar133 - fVar94;
          fVar116 = fVar134 - fVar95;
          fVar119 = fVar135 - fVar96;
          fVar61 = pfVar26[0x18] - fVar71;
          fVar68 = pfVar26[0x19] - fVar71;
          fVar70 = pfVar26[0x1a] - fVar71;
          fVar71 = pfVar26[0x1b] - fVar71;
          fVar46 = fVar92 - fVar72;
          fVar53 = fVar94 - fVar75;
          fVar56 = fVar95 - fVar77;
          fVar58 = fVar96 - fVar80;
          auVar131._0_4_ = fVar149 - fVar145;
          auVar131._4_4_ = fVar150 - fVar146;
          auVar131._8_4_ = fVar151 - fVar147;
          auVar131._12_4_ = fVar152 - fVar148;
          fVar82 = fVar97 - fVar122;
          fVar85 = fVar101 - fVar123;
          fVar87 = fVar102 - fVar124;
          fVar89 = fVar103 - fVar125;
          fVar105 = fVar126 - fVar97;
          fVar114 = fVar127 - fVar101;
          fVar117 = fVar128 - fVar102;
          fVar120 = fVar129 - fVar103;
          fVar136 = fVar61 - fVar149;
          fVar138 = fVar68 - fVar150;
          fVar140 = fVar70 - fVar151;
          fVar142 = fVar71 - fVar152;
          fVar106 = fVar145 - fVar61;
          fVar115 = fVar146 - fVar68;
          fVar118 = fVar147 - fVar70;
          fVar121 = fVar148 - fVar71;
          fVar83 = fVar122 - fVar126;
          fVar86 = fVar123 - fVar127;
          fVar88 = fVar124 - fVar128;
          fVar90 = fVar125 - fVar129;
          fVar73 = fVar72 - fVar132;
          fVar76 = fVar75 - fVar133;
          fVar78 = fVar77 - fVar134;
          fVar81 = fVar80 - fVar135;
          fVar47 = ((fVar149 + fVar61) * fVar46 - fVar136 * (fVar72 + fVar92)) * fVar79 +
                   (fVar136 * (fVar122 + fVar97) - fVar82 * (fVar149 + fVar61)) * fVar130 +
                   ((fVar72 + fVar92) * fVar82 - (fVar122 + fVar97) * fVar46) * fVar91;
          fVar54 = ((fVar150 + fVar68) * fVar53 - fVar138 * (fVar75 + fVar94)) * fVar79 +
                   (fVar138 * (fVar123 + fVar101) - fVar85 * (fVar150 + fVar68)) * fVar130 +
                   ((fVar75 + fVar94) * fVar85 - (fVar123 + fVar101) * fVar53) * fVar91;
          fVar57 = ((fVar151 + fVar70) * fVar56 - fVar140 * (fVar77 + fVar95)) * fVar79 +
                   (fVar140 * (fVar124 + fVar102) - fVar87 * (fVar151 + fVar70)) * fVar130 +
                   ((fVar77 + fVar95) * fVar87 - (fVar124 + fVar102) * fVar56) * fVar91;
          fVar59 = ((fVar152 + fVar71) * fVar58 - fVar142 * (fVar80 + fVar96)) * fVar79 +
                   (fVar142 * (fVar125 + fVar103) - fVar89 * (fVar152 + fVar71)) * fVar130 +
                   ((fVar80 + fVar96) * fVar89 - (fVar125 + fVar103) * fVar58) * fVar91;
          fVar137 = ((fVar149 + fVar145) * fVar73 - auVar131._0_4_ * (fVar72 + fVar132)) * fVar79 +
                    (auVar131._0_4_ * (fVar122 + fVar126) - fVar83 * (fVar149 + fVar145)) * fVar130
                    + ((fVar72 + fVar132) * fVar83 - (fVar122 + fVar126) * fVar73) * fVar91;
          fVar139 = ((fVar150 + fVar146) * fVar76 - auVar131._4_4_ * (fVar75 + fVar133)) * fVar79 +
                    (auVar131._4_4_ * (fVar123 + fVar127) - fVar86 * (fVar150 + fVar146)) * fVar130
                    + ((fVar75 + fVar133) * fVar86 - (fVar123 + fVar127) * fVar76) * fVar91;
          fVar141 = ((fVar151 + fVar147) * fVar78 - auVar131._8_4_ * (fVar77 + fVar134)) * fVar79 +
                    (auVar131._8_4_ * (fVar124 + fVar128) - fVar88 * (fVar151 + fVar147)) * fVar130
                    + ((fVar77 + fVar134) * fVar88 - (fVar124 + fVar128) * fVar78) * fVar91;
          fVar143 = ((fVar152 + fVar148) * fVar81 - auVar131._12_4_ * (fVar80 + fVar135)) * fVar79 +
                    (auVar131._12_4_ * (fVar125 + fVar129) - fVar90 * (fVar152 + fVar148)) * fVar130
                    + ((fVar80 + fVar135) * fVar90 - (fVar125 + fVar129) * fVar81) * fVar91;
          auVar110._8_4_ = fVar57;
          auVar110._0_8_ = CONCAT44(fVar54,fVar47);
          auVar110._12_4_ = fVar59;
          auVar11._4_4_ = fVar139;
          auVar11._0_4_ = fVar137;
          auVar11._8_4_ = fVar141;
          auVar11._12_4_ = fVar143;
          auVar64 = maxps(auVar110,auVar11);
          auVar98._8_4_ = fVar57;
          auVar98._0_8_ = CONCAT44(fVar54,fVar47);
          auVar98._12_4_ = fVar59;
          auVar12._4_4_ = fVar139;
          auVar12._0_4_ = fVar137;
          auVar12._8_4_ = fVar141;
          auVar12._12_4_ = fVar143;
          auVar62 = minps(auVar98,auVar12);
          auVar93._0_4_ =
               ((fVar132 + fVar92) * fVar105 - (fVar97 + fVar126) * fVar104) * fVar91 +
               ((fVar61 + fVar145) * fVar104 - fVar106 * (fVar132 + fVar92)) * fVar79 +
               (fVar106 * (fVar97 + fVar126) - fVar105 * (fVar61 + fVar145)) * fVar130;
          auVar93._4_4_ =
               ((fVar133 + fVar94) * fVar114 - (fVar101 + fVar127) * fVar113) * fVar91 +
               ((fVar68 + fVar146) * fVar113 - fVar115 * (fVar133 + fVar94)) * fVar79 +
               (fVar115 * (fVar101 + fVar127) - fVar114 * (fVar68 + fVar146)) * fVar130;
          auVar93._8_4_ =
               ((fVar134 + fVar95) * fVar117 - (fVar102 + fVar128) * fVar116) * fVar91 +
               ((fVar70 + fVar147) * fVar116 - fVar118 * (fVar134 + fVar95)) * fVar79 +
               (fVar118 * (fVar102 + fVar128) - fVar117 * (fVar70 + fVar147)) * fVar130;
          auVar93._12_4_ =
               ((fVar135 + fVar96) * fVar120 - (fVar103 + fVar129) * fVar119) * fVar91 +
               ((fVar71 + fVar148) * fVar119 - fVar121 * (fVar135 + fVar96)) * fVar79 +
               (fVar121 * (fVar103 + fVar129) - fVar120 * (fVar71 + fVar148)) * fVar130;
          fVar70 = fVar47 + fVar137 + auVar93._0_4_;
          fVar92 = fVar54 + fVar139 + auVar93._4_4_;
          fVar94 = fVar57 + fVar141 + auVar93._8_4_;
          fVar95 = fVar59 + fVar143 + auVar93._12_4_;
          auVar64 = maxps(auVar64,auVar93);
          auVar62 = minps(auVar62,auVar93);
          fVar71 = __LC15 * (float)(_LC3 & (uint)fVar70);
          fVar103 = _UNK_00115404 * (float)(_UNK_001153c4 & (uint)fVar92);
          fVar61 = _UNK_00115408 * (float)(_UNK_001153c8 & (uint)fVar94);
          fVar68 = _UNK_0011540c * (float)(_UNK_001153cc & (uint)fVar95);
          auVar111._4_4_ = -(uint)(auVar64._4_4_ <= fVar103);
          auVar111._0_4_ = -(uint)(auVar64._0_4_ <= fVar71);
          auVar111._8_4_ = -(uint)(auVar64._8_4_ <= fVar61);
          auVar111._12_4_ = -(uint)(auVar64._12_4_ <= fVar68);
          auVar99._4_4_ = -(uint)((float)((uint)fVar103 ^ _UNK_001153f4) <= auVar62._4_4_);
          auVar99._0_4_ = -(uint)((float)((uint)fVar71 ^ _LC9) <= auVar62._0_4_);
          auVar99._8_4_ = -(uint)((float)((uint)fVar61 ^ _UNK_001153f8) <= auVar62._8_4_);
          auVar99._12_4_ = -(uint)((float)((uint)fVar68 ^ _UNK_001153fc) <= auVar62._12_4_);
          auVar99 = auVar99 | auVar111;
          auVar100._0_4_ = auVar99._0_4_ & _DAT_00116108;
          auVar100._4_4_ = auVar99._4_4_ & uRam000000000011610c;
          auVar100._8_4_ = auVar99._8_4_ & uRam0000000000116110;
          auVar100._12_4_ = auVar99._12_4_ & uRam0000000000116114;
          uVar33 = movmskps((int)puVar22,auVar100);
          puVar22 = (uint *)(ulong)uVar33;
          if (uVar33 != 0) {
            uVar33 = -(uint)((float)(_LC3 & (uint)(fVar46 * fVar83)) <
                            (float)(_LC3 & (uint)(fVar105 * fVar73)));
            uVar41 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar53 * fVar86)) <
                            (float)(_UNK_001153c4 & (uint)(fVar114 * fVar76)));
            uVar38 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar56 * fVar88)) <
                            (float)(_UNK_001153c8 & (uint)(fVar117 * fVar78)));
            uVar42 = -(uint)((float)(_UNK_001153cc & (uint)(fVar58 * fVar90)) <
                            (float)(_UNK_001153cc & (uint)(fVar120 * fVar81)));
            uVar34 = -(uint)((float)(_LC3 & (uint)(fVar136 * fVar73)) <
                            (float)(_LC3 & (uint)(fVar104 * auVar131._0_4_)));
            uVar35 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar138 * fVar76)) <
                            (float)(_UNK_001153c4 & (uint)(fVar113 * auVar131._4_4_)));
            uVar39 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar140 * fVar78)) <
                            (float)(_UNK_001153c8 & (uint)(fVar116 * auVar131._8_4_)));
            uVar43 = -(uint)((float)(_UNK_001153cc & (uint)(fVar142 * fVar81)) <
                            (float)(_UNK_001153cc & (uint)(fVar119 * auVar131._12_4_)));
            uVar37 = -(uint)((float)(_LC3 & (uint)(fVar82 * auVar131._0_4_)) <
                            (float)(_LC3 & (uint)(fVar106 * fVar83)));
            uVar36 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar85 * auVar131._4_4_)) <
                            (float)(_UNK_001153c4 & (uint)(fVar115 * fVar86)));
            uVar40 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar87 * auVar131._8_4_)) <
                            (float)(_UNK_001153c8 & (uint)(fVar118 * fVar88)));
            uVar44 = -(uint)((float)(_UNK_001153cc & (uint)(fVar89 * auVar131._12_4_)) <
                            (float)(_UNK_001153cc & (uint)(fVar121 * fVar90)));
            fVar61 = (float)(uVar37 & (uint)(fVar136 * fVar83 - fVar82 * auVar131._0_4_) |
                            ~uVar37 & (uint)(fVar105 * auVar131._0_4_ - fVar106 * fVar83));
            fVar68 = (float)(uVar36 & (uint)(fVar138 * fVar86 - fVar85 * auVar131._4_4_) |
                            ~uVar36 & (uint)(fVar114 * auVar131._4_4_ - fVar115 * fVar86));
            fVar96 = (float)(uVar40 & (uint)(fVar140 * fVar88 - fVar87 * auVar131._8_4_) |
                            ~uVar40 & (uint)(fVar117 * auVar131._8_4_ - fVar118 * fVar88));
            fVar97 = (float)(uVar44 & (uint)(fVar142 * fVar90 - fVar89 * auVar131._12_4_) |
                            ~uVar44 & (uint)(fVar120 * auVar131._12_4_ - fVar121 * fVar90));
            fVar101 = (float)(uVar34 & (uint)(fVar46 * auVar131._0_4_ - fVar136 * fVar73) |
                             ~uVar34 & (uint)(fVar106 * fVar73 - fVar104 * auVar131._0_4_));
            fVar102 = (float)(uVar35 & (uint)(fVar53 * auVar131._4_4_ - fVar138 * fVar76) |
                             ~uVar35 & (uint)(fVar115 * fVar76 - fVar113 * auVar131._4_4_));
            fVar106 = (float)(uVar39 & (uint)(fVar56 * auVar131._8_4_ - fVar140 * fVar78) |
                             ~uVar39 & (uint)(fVar118 * fVar78 - fVar116 * auVar131._8_4_));
            fVar115 = (float)(uVar43 & (uint)(fVar58 * auVar131._12_4_ - fVar142 * fVar81) |
                             ~uVar43 & (uint)(fVar121 * fVar81 - fVar119 * auVar131._12_4_));
            auVar112._0_4_ = uVar33 & (uint)(fVar82 * fVar73 - fVar46 * fVar83);
            auVar112._4_4_ = uVar41 & (uint)(fVar85 * fVar76 - fVar53 * fVar86);
            auVar112._8_4_ = uVar38 & (uint)(fVar87 * fVar78 - fVar56 * fVar88);
            auVar112._12_4_ = uVar42 & (uint)(fVar89 * fVar81 - fVar58 * fVar90);
            auVar6._4_4_ = ~uVar41 & (uint)(fVar86 * fVar113 - fVar114 * fVar76);
            auVar6._0_4_ = ~uVar33 & (uint)(fVar83 * fVar104 - fVar105 * fVar73);
            auVar6._8_4_ = ~uVar38 & (uint)(fVar88 * fVar116 - fVar117 * fVar78);
            auVar6._12_4_ = ~uVar42 & (uint)(fVar90 * fVar119 - fVar120 * fVar81);
            auVar112 = auVar112 | auVar6;
            fVar71 = fVar79 * fVar101 + fVar130 * fVar61 + fVar91 * auVar112._0_4_;
            fVar103 = fVar79 * fVar102 + fVar130 * fVar68 + fVar91 * auVar112._4_4_;
            fVar46 = fVar79 * fVar106 + fVar130 * fVar96 + fVar91 * auVar112._8_4_;
            fVar91 = fVar79 * fVar115 + fVar130 * fVar97 + fVar91 * auVar112._12_4_;
            auVar84._0_4_ = fVar71 + fVar71;
            auVar84._4_4_ = fVar103 + fVar103;
            auVar84._8_4_ = fVar46 + fVar46;
            auVar84._12_4_ = fVar91 + fVar91;
            auVar62 = rcpps(auVar131,auVar84);
            fVar130 = auVar62._0_4_;
            fVar46 = auVar62._4_4_;
            fVar53 = auVar62._8_4_;
            fVar56 = auVar62._12_4_;
            fVar103 = fVar122 * fVar101 + fVar72 * fVar61 + fVar149 * auVar112._0_4_;
            fVar91 = fVar123 * fVar102 + fVar75 * fVar68 + fVar150 * auVar112._4_4_;
            fVar79 = fVar124 * fVar106 + fVar77 * fVar96 + fVar151 * auVar112._8_4_;
            fVar80 = fVar125 * fVar115 + fVar80 * fVar97 + fVar152 * auVar112._12_4_;
            fVar71 = *(float *)(param_2 + 0x20);
            auVar74._0_4_ =
                 (fVar103 + fVar103) * ((_LC7 - auVar84._0_4_ * fVar130) * fVar130 + fVar130);
            auVar74._4_4_ = (fVar91 + fVar91) * ((_LC7 - auVar84._4_4_ * fVar46) * fVar46 + fVar46);
            auVar74._8_4_ = (fVar79 + fVar79) * ((_LC7 - auVar84._8_4_ * fVar53) * fVar53 + fVar53);
            auVar74._12_4_ =
                 (fVar80 + fVar80) * ((_LC7 - auVar84._12_4_ * fVar56) * fVar56 + fVar56);
            fVar103 = *(float *)(param_2 + 0xc);
            auVar7._4_4_ = -(uint)(fVar103 <= auVar74._4_4_ && auVar74._4_4_ <= fVar71) &
                           auVar100._4_4_ & -(uint)(auVar84._4_4_ != 0.0);
            auVar7._0_4_ = -(uint)(fVar103 <= auVar74._0_4_ && auVar74._0_4_ <= fVar71) &
                           auVar100._0_4_ & -(uint)(auVar84._0_4_ != 0.0);
            auVar7._8_4_ = -(uint)(fVar103 <= auVar74._8_4_ && auVar74._8_4_ <= fVar71) &
                           auVar100._8_4_ & -(uint)(auVar84._8_4_ != 0.0);
            auVar7._12_4_ =
                 -(uint)(fVar103 <= auVar74._12_4_ && auVar74._12_4_ <= fVar71) & auVar100._12_4_ &
                 -(uint)(auVar84._12_4_ != 0.0);
            uVar33 = movmskps((int)uVar31,auVar7);
            uVar31 = (ulong)uVar33;
            if (uVar33 != 0) {
              lVar29 = *(long *)param_3;
              local_828 = auVar74;
              auVar8._4_4_ = fVar92;
              auVar8._0_4_ = fVar70;
              auVar8._8_4_ = fVar94;
              auVar8._12_4_ = fVar95;
              auVar62 = rcpps(auVar74,auVar8);
              local_808[0] = fVar101;
              local_808[1] = fVar102;
              local_808[2] = fVar106;
              local_808[3] = fVar115;
              local_818 = auVar112;
              local_7f8[0] = fVar61;
              local_7f8[1] = fVar68;
              local_7f8[2] = fVar96;
              local_7f8[3] = fVar97;
              fVar103 = auVar62._0_4_;
              fVar80 = auVar62._4_4_;
              fVar91 = auVar62._8_4_;
              fVar79 = auVar62._12_4_;
              fVar103 = (float)(~-(uint)((float)(_LC3 & (uint)fVar70) < _LC5) &
                               (uint)((_LC7 - fVar70 * fVar103) * fVar103 + fVar103));
              fVar80 = (float)(~-(uint)((float)(_UNK_001153c4 & (uint)fVar92) < _UNK_001153d4) &
                              (uint)((_LC7 - fVar92 * fVar80) * fVar80 + fVar80));
              fVar91 = (float)(~-(uint)((float)(_UNK_001153c8 & (uint)fVar94) < _UNK_001153d8) &
                              (uint)((_LC7 - fVar94 * fVar91) * fVar91 + fVar91));
              fVar79 = (float)(~-(uint)((float)(_UNK_001153cc & (uint)fVar95) < _UNK_001153dc) &
                              (uint)((_LC7 - fVar95 * fVar79) * fVar79 + fVar79));
              auVar51._0_4_ = fVar47 * fVar103;
              auVar51._4_4_ = fVar54 * fVar80;
              auVar51._8_4_ = fVar57 * fVar91;
              auVar51._12_4_ = fVar59 * fVar79;
              auVar66._0_4_ = fVar103 * fVar137;
              auVar66._4_4_ = fVar80 * fVar139;
              auVar66._8_4_ = fVar91 * fVar141;
              auVar66._12_4_ = fVar79 * fVar143;
              auVar16._4_12_ = _UNK_001153e4;
              auVar16._0_4_ = _LC7;
              local_848 = minps(auVar51,auVar16);
              auVar17._4_12_ = _UNK_001153e4;
              auVar17._0_4_ = _LC7;
              local_838 = minps(auVar66,auVar17);
              do {
                pbVar28 = *(byte **)(param_3 + 0x10);
                uVar27 = 0;
                if (uVar31 != 0) {
                  for (; (uVar31 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                fVar103 = pfVar26[uVar27 + 0x24];
                lVar5 = *(long *)(*(long *)(lVar29 + 0x1e0) + (ulong)(uint)fVar103 * 8);
                pcVar23 = *(code **)(pbVar28 + 0x10);
                if ((pcVar23 == (code *)0x0) && (*(long *)(lVar5 + 0x48) == 0)) {
LAB_00105bfc:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00105c04;
                }
                uStack_8a8 = *(undefined4 *)(local_838 + uVar27 * 4);
                fStack_8a4 = pfVar26[uVar27 + 0x28];
                uStack_8ec = 0xffffffff;
                uStack_8ac = *(undefined4 *)(local_848 + uVar27 * 4);
                uStack_89c = **(undefined4 **)(param_3 + 8);
                fStack_8b0 = local_7f8[uVar27];
                fStack_8b4 = local_808[uVar27];
                puStack_8e8 = &uStack_8ec;
                fStack_8b8 = local_808[uVar27 - 4];
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_828 + uVar27 * 4);
                uStack_8e0 = *(undefined8 *)(lVar5 + 0x18);
                uStack_8d8 = *(undefined8 *)(param_3 + 8);
                puStack_8c8 = &fStack_8b8;
                uStack_8c0 = 1;
                pRStack_8d0 = param_2;
                fStack_8a0 = fVar103;
                if (*(code **)(lVar5 + 0x48) == (code *)0x0) {
LAB_00105d86:
                  if ((pcVar23 != (code *)0x0) &&
                     (((*pbVar28 & 2) != 0 || ((*(byte *)(lVar5 + 0x3e) & 0x40) != 0)))) {
                    (*pcVar23)(&puStack_8e8);
                    puVar22 = (uint *)(ulong)*puStack_8e8;
                    if (*puStack_8e8 == 0) goto LAB_00105df4;
                  }
                  goto LAB_00105bfc;
                }
                (**(code **)(lVar5 + 0x48))(&puStack_8e8);
                puVar22 = puStack_8e8;
                if (*puStack_8e8 != 0) {
                  pbVar28 = *(byte **)(param_3 + 0x10);
                  pcVar23 = *(code **)(pbVar28 + 0x10);
                  goto LAB_00105d86;
                }
LAB_00105df4:
                *(float *)(param_2 + 0x20) = fVar71;
                uVar31 = uVar31 ^ 1L << (uVar27 & 0x3f);
              } while (uVar31 != 0);
              uVar31 = 0;
            }
          }
          puVar32 = (uint *)((long)puVar32 + 1);
          pfVar26 = pfVar26 + 0x2c;
        } while (puVar32 != puVar21);
      }
LAB_00105eb0:
      puVar20 = puVar25;
    } while (puVar25 != &local_7e8);
  }
LAB_00105c04:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *puVar22;
  float *pfVar23;
  uint *puVar24;
  code *pcVar25;
  float *pfVar26;
  undefined4 uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar47 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar56 [16];
  float fVar66;
  float fVar67;
  float fVar71;
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar70 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar81 [16];
  float fVar97;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar112;
  float fVar113;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar114;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar126;
  float fVar127;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  uint uStack_8ec;
  uint *puStack_8e8;
  undefined8 uStack_8e0;
  undefined4 *puStack_8d8;
  RayK *pRStack_8d0;
  undefined4 *puStack_8c8;
  undefined4 uStack_8c0;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  float fStack_8a4;
  float fStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  float local_808 [4];
  float local_7f8 [4];
  undefined8 local_7e8;
  undefined8 local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar4 = *(float *)(param_2 + 0x20), 0.0 <= fVar4)) {
    fVar53 = *(float *)(param_2 + 0xc);
    local_7e8 = *(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar53 < 0.0) {
      fVar53 = 0.0;
    }
    auVar128._4_4_ = fVar53;
    auVar128._0_4_ = fVar53;
    fVar17 = *(float *)param_2;
    fVar18 = *(float *)(param_2 + 4);
    fVar19 = *(float *)(param_2 + 8);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _UNK_001153d4);
    uVar37 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _UNK_001153d8);
    uVar41 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _UNK_001153dc);
    auVar149._4_4_ = _LC7;
    auVar149._0_4_ = _LC7;
    auVar149._8_4_ = _LC7;
    auVar149._12_4_ = _LC7;
    auVar124._0_4_ = uVar33 & (uint)_LC5;
    auVar124._4_4_ = uVar34 & (uint)_UNK_001153d4;
    auVar124._8_4_ = uVar37 & (uint)_UNK_001153d8;
    auVar124._12_4_ = uVar41 & (uint)_UNK_001153dc;
    auVar138._0_4_ = ~uVar33 & *(uint *)(param_2 + 0x10);
    auVar138._4_4_ = ~uVar34 & *(uint *)(param_2 + 0x14);
    auVar138._8_4_ = ~uVar37 & *(uint *)(param_2 + 0x18);
    auVar138._12_4_ = ~uVar41 & *(uint *)(param_2 + 0x1c);
    auVar124 = divps(auVar149,auVar124 | auVar138);
    fVar45 = _LC12 * auVar124._0_4_;
    fVar48 = _LC12 * auVar124._4_4_;
    fVar50 = _LC12 * auVar124._8_4_;
    fVar123 = auVar124._0_4_ * _LC14;
    fVar126 = auVar124._4_4_ * _LC14;
    fVar127 = auVar124._8_4_ * _LC14;
    puVar22 = local_7e0;
    uVar32 = (ulong)(-(uint)(fVar48 < 0.0) & 0x10);
    auVar128._8_4_ = fVar53;
    auVar128._12_4_ = fVar53;
    do {
      fVar53 = *(float *)(param_2 + 0x1c);
      puVar24 = (uint *)puVar22[-1];
      puVar22 = puVar22 + -1;
      while( true ) {
        pfVar26 = (float *)((ulong)puVar24 & 0xfffffffffffffff0);
        uVar30 = (ulong)((uint)puVar24 & 0xf);
        if (((ulong)puVar24 & 8) != 0) break;
        auVar148._4_4_ = fVar4;
        auVar148._0_4_ = fVar4;
        auVar148._8_4_ = fVar4;
        auVar148._12_4_ = fVar4;
        pfVar1 = (float *)((long)pfVar26 + uVar32 + 0x40);
        pfVar23 = (float *)((long)pfVar26 + (ulong)(-(uint)(fVar50 < 0.0) & 0x10) + 0x60);
        pfVar2 = pfVar26 + (ulong)(fVar45 < 0.0) * 4 + 8;
        pfVar3 = (float *)((long)pfVar26 + (-(ulong)(fVar48 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar105._0_4_ = ((pfVar23[0x18] * fVar53 + *pfVar23) - fVar19) * fVar50;
        auVar105._4_4_ = ((pfVar23[0x19] * fVar53 + pfVar23[1]) - fVar19) * fVar50;
        auVar105._8_4_ = ((pfVar23[0x1a] * fVar53 + pfVar23[2]) - fVar19) * fVar50;
        auVar105._12_4_ = ((pfVar23[0x1b] * fVar53 + pfVar23[3]) - fVar19) * fVar50;
        auVar68._0_4_ = ((pfVar1[0x18] * fVar53 + *pfVar1) - fVar18) * fVar48;
        auVar68._4_4_ = ((pfVar1[0x19] * fVar53 + pfVar1[1]) - fVar18) * fVar48;
        auVar68._8_4_ = ((pfVar1[0x1a] * fVar53 + pfVar1[2]) - fVar18) * fVar48;
        auVar68._12_4_ = ((pfVar1[0x1b] * fVar53 + pfVar1[3]) - fVar18) * fVar48;
        auVar124 = maxps(auVar68,auVar105);
        pfVar1 = (float *)((long)pfVar26 + ((ulong)(fVar45 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar23 = (float *)((long)pfVar26 + (-(ulong)(fVar50 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar106._0_4_ = ((pfVar2[0x18] * fVar53 + *pfVar2) - fVar17) * fVar45;
        auVar106._4_4_ = ((pfVar2[0x19] * fVar53 + pfVar2[1]) - fVar17) * fVar45;
        auVar106._8_4_ = ((pfVar2[0x1a] * fVar53 + pfVar2[2]) - fVar17) * fVar45;
        auVar106._12_4_ = ((pfVar2[0x1b] * fVar53 + pfVar2[3]) - fVar17) * fVar45;
        auVar138 = maxps(auVar128,auVar106);
        auVar138 = maxps(auVar138,auVar124);
        auVar107._0_4_ = ((pfVar23[0x18] * fVar53 + *pfVar23) - fVar19) * fVar127;
        auVar107._4_4_ = ((pfVar23[0x19] * fVar53 + pfVar23[1]) - fVar19) * fVar127;
        auVar107._8_4_ = ((pfVar23[0x1a] * fVar53 + pfVar23[2]) - fVar19) * fVar127;
        auVar107._12_4_ = ((pfVar23[0x1b] * fVar53 + pfVar23[3]) - fVar19) * fVar127;
        auVar69._0_4_ = ((pfVar3[0x18] * fVar53 + *pfVar3) - fVar18) * fVar126;
        auVar69._4_4_ = ((pfVar3[0x19] * fVar53 + pfVar3[1]) - fVar18) * fVar126;
        auVar69._8_4_ = ((pfVar3[0x1a] * fVar53 + pfVar3[2]) - fVar18) * fVar126;
        auVar69._12_4_ = ((pfVar3[0x1b] * fVar53 + pfVar3[3]) - fVar18) * fVar126;
        auVar124 = minps(auVar69,auVar107);
        auVar108._0_4_ = ((pfVar1[0x18] * fVar53 + *pfVar1) - fVar17) * fVar123;
        auVar108._4_4_ = ((pfVar1[0x19] * fVar53 + pfVar1[1]) - fVar17) * fVar123;
        auVar108._8_4_ = ((pfVar1[0x1a] * fVar53 + pfVar1[2]) - fVar17) * fVar123;
        auVar108._12_4_ = ((pfVar1[0x1b] * fVar53 + pfVar1[3]) - fVar17) * fVar123;
        auVar149 = minps(auVar148,auVar108);
        auVar124 = minps(auVar149,auVar124);
        bVar8 = auVar138._0_4_ <= auVar124._0_4_;
        bVar9 = auVar138._4_4_ <= auVar124._4_4_;
        bVar10 = auVar138._8_4_ <= auVar124._8_4_;
        bVar11 = auVar138._12_4_ <= auVar124._12_4_;
        auVar139._4_4_ = -(uint)bVar9;
        auVar139._0_4_ = -(uint)bVar8;
        auVar139._8_4_ = -(uint)bVar10;
        auVar139._12_4_ = -(uint)bVar11;
        if (uVar30 == 6) {
          auVar139._0_4_ = -(uint)((pfVar26[0x38] <= fVar53 && fVar53 < pfVar26[0x3c]) && bVar8);
          auVar139._4_4_ = -(uint)((pfVar26[0x39] <= fVar53 && fVar53 < pfVar26[0x3d]) && bVar9);
          auVar139._8_4_ = -(uint)((pfVar26[0x3a] <= fVar53 && fVar53 < pfVar26[0x3e]) && bVar10);
          auVar139._12_4_ = -(uint)((pfVar26[0x3b] <= fVar53 && fVar53 < pfVar26[0x3f]) && bVar11);
        }
        uVar27 = movmskps((int)pfVar1,auVar139);
        uVar30 = CONCAT44((int)((ulong)pfVar1 >> 0x20),uVar27);
        if (uVar30 == 0) goto LAB_001068f0;
        lVar31 = 0;
        if (uVar30 != 0) {
          for (; (uVar30 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
          }
        }
        puVar24 = *(uint **)(pfVar26 + lVar31 * 2);
        uVar30 = uVar30 - 1 & uVar30;
        if (uVar30 != 0) {
          *puVar22 = puVar24;
          uVar28 = uVar30 - 1;
          lVar31 = 0;
          if (uVar30 != 0) {
            for (; (uVar30 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
            }
          }
          while( true ) {
            puVar22 = puVar22 + 1;
            puVar24 = *(uint **)(pfVar26 + lVar31 * 2);
            uVar28 = uVar28 & uVar30;
            if (uVar28 == 0) break;
            *puVar22 = puVar24;
            uVar30 = uVar28 - 1;
            lVar31 = 0;
            if (uVar28 != 0) {
              for (; (uVar28 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
              }
            }
          }
        }
      }
      if (uVar30 != 8) {
        lVar31 = 0;
        uVar28 = uVar32 + 0x20;
        do {
          fVar67 = *(float *)(param_2 + 0x10);
          fVar72 = *(float *)(param_2 + 0x14);
          fVar74 = *(float *)(param_2 + 0x18);
          fVar52 = *(float *)param_2;
          fVar103 = *(float *)(param_2 + 4);
          fVar96 = *(float *)(param_2 + 8);
          fVar76 = (pfVar26[0x2c] * fVar53 + pfVar26[8]) - fVar96;
          fVar82 = (pfVar26[0x2d] * fVar53 + pfVar26[9]) - fVar96;
          fVar87 = (pfVar26[0x2e] * fVar53 + pfVar26[10]) - fVar96;
          fVar92 = (pfVar26[0x2f] * fVar53 + pfVar26[0xb]) - fVar96;
          fVar119 = (pfVar26[0x34] * fVar53 + pfVar26[0x10]) - fVar103;
          fVar120 = (pfVar26[0x35] * fVar53 + pfVar26[0x11]) - fVar103;
          fVar121 = (pfVar26[0x36] * fVar53 + pfVar26[0x12]) - fVar103;
          fVar122 = (pfVar26[0x37] * fVar53 + pfVar26[0x13]) - fVar103;
          fVar115 = (pfVar26[0x30] * fVar53 + pfVar26[0xc]) - fVar52;
          fVar116 = (pfVar26[0x31] * fVar53 + pfVar26[0xd]) - fVar52;
          fVar117 = (pfVar26[0x32] * fVar53 + pfVar26[0xe]) - fVar52;
          fVar118 = (pfVar26[0x33] * fVar53 + pfVar26[0xf]) - fVar52;
          fVar77 = (pfVar26[0x28] * fVar53 + pfVar26[4]) - fVar103;
          fVar83 = (pfVar26[0x29] * fVar53 + pfVar26[5]) - fVar103;
          fVar88 = (pfVar26[0x2a] * fVar53 + pfVar26[6]) - fVar103;
          fVar93 = (pfVar26[0x2b] * fVar53 + pfVar26[7]) - fVar103;
          fVar78 = (pfVar26[0x24] * fVar53 + *pfVar26) - fVar52;
          fVar84 = (pfVar26[0x25] * fVar53 + pfVar26[1]) - fVar52;
          fVar89 = (pfVar26[0x26] * fVar53 + pfVar26[2]) - fVar52;
          fVar94 = (pfVar26[0x27] * fVar53 + pfVar26[3]) - fVar52;
          fVar79 = (pfVar26[0x38] * fVar53 + pfVar26[0x14]) - fVar96;
          fVar85 = (pfVar26[0x39] * fVar53 + pfVar26[0x15]) - fVar96;
          fVar90 = (pfVar26[0x3a] * fVar53 + pfVar26[0x16]) - fVar96;
          fVar95 = (pfVar26[0x3b] * fVar53 + pfVar26[0x17]) - fVar96;
          fVar80 = (pfVar26[0x44] * fVar53 + pfVar26[0x20]) - fVar96;
          fVar86 = (pfVar26[0x45] * fVar53 + pfVar26[0x21]) - fVar96;
          fVar91 = (pfVar26[0x46] * fVar53 + pfVar26[0x22]) - fVar96;
          fVar96 = (pfVar26[0x47] * fVar53 + pfVar26[0x23]) - fVar96;
          fVar130 = fVar79 - fVar80;
          fVar131 = fVar85 - fVar86;
          fVar132 = fVar90 - fVar91;
          fVar133 = fVar95 - fVar96;
          fVar97 = (pfVar26[0x40] * fVar53 + pfVar26[0x1c]) - fVar103;
          fVar101 = (pfVar26[0x41] * fVar53 + pfVar26[0x1d]) - fVar103;
          fVar102 = (pfVar26[0x42] * fVar53 + pfVar26[0x1e]) - fVar103;
          fVar103 = (pfVar26[0x43] * fVar53 + pfVar26[0x1f]) - fVar103;
          fVar46 = (fVar53 * pfVar26[0x3c] + pfVar26[0x18]) - fVar52;
          fVar49 = (fVar53 * pfVar26[0x3d] + pfVar26[0x19]) - fVar52;
          fVar51 = (fVar53 * pfVar26[0x3e] + pfVar26[0x1a]) - fVar52;
          fVar52 = (fVar53 * pfVar26[0x3f] + pfVar26[0x1b]) - fVar52;
          fVar53 = fVar80 - fVar76;
          fVar57 = fVar86 - fVar82;
          fVar60 = fVar91 - fVar87;
          fVar63 = fVar96 - fVar92;
          fVar66 = fVar77 - fVar119;
          fVar71 = fVar83 - fVar120;
          fVar73 = fVar88 - fVar121;
          fVar75 = fVar93 - fVar122;
          fVar140 = fVar119 - fVar97;
          fVar142 = fVar120 - fVar101;
          fVar144 = fVar121 - fVar102;
          fVar146 = fVar122 - fVar103;
          fVar134 = fVar46 - fVar78;
          fVar135 = fVar49 - fVar84;
          fVar136 = fVar51 - fVar89;
          fVar137 = fVar52 - fVar94;
          fVar54 = fVar97 - fVar77;
          fVar58 = fVar101 - fVar83;
          fVar61 = fVar102 - fVar88;
          fVar64 = fVar103 - fVar93;
          fVar141 = fVar115 - fVar46;
          fVar143 = fVar116 - fVar49;
          fVar145 = fVar117 - fVar51;
          fVar147 = fVar118 - fVar52;
          auVar129._0_4_ = fVar78 - fVar115;
          auVar129._4_4_ = fVar84 - fVar116;
          auVar129._8_4_ = fVar89 - fVar117;
          auVar129._12_4_ = fVar94 - fVar118;
          fVar150 = fVar76 - fVar79;
          fVar151 = fVar82 - fVar85;
          fVar152 = fVar87 - fVar90;
          fVar153 = fVar92 - fVar95;
          fVar55 = ((fVar78 + fVar46) * fVar53 - fVar134 * (fVar76 + fVar80)) * fVar72 +
                   (fVar134 * (fVar77 + fVar97) - fVar54 * (fVar78 + fVar46)) * fVar74 +
                   ((fVar76 + fVar80) * fVar54 - (fVar77 + fVar97) * fVar53) * fVar67;
          fVar59 = ((fVar84 + fVar49) * fVar57 - fVar135 * (fVar82 + fVar86)) * fVar72 +
                   (fVar135 * (fVar83 + fVar101) - fVar58 * (fVar84 + fVar49)) * fVar74 +
                   ((fVar82 + fVar86) * fVar58 - (fVar83 + fVar101) * fVar57) * fVar67;
          fVar62 = ((fVar89 + fVar51) * fVar60 - fVar136 * (fVar87 + fVar91)) * fVar72 +
                   (fVar136 * (fVar88 + fVar102) - fVar61 * (fVar89 + fVar51)) * fVar74 +
                   ((fVar87 + fVar91) * fVar61 - (fVar88 + fVar102) * fVar60) * fVar67;
          fVar65 = ((fVar94 + fVar52) * fVar63 - fVar137 * (fVar92 + fVar96)) * fVar72 +
                   (fVar137 * (fVar93 + fVar103) - fVar64 * (fVar94 + fVar52)) * fVar74 +
                   ((fVar92 + fVar96) * fVar64 - (fVar93 + fVar103) * fVar63) * fVar67;
          fVar104 = ((fVar78 + fVar115) * fVar150 - auVar129._0_4_ * (fVar76 + fVar79)) * fVar72 +
                    (auVar129._0_4_ * (fVar77 + fVar119) - fVar66 * (fVar78 + fVar115)) * fVar74 +
                    ((fVar76 + fVar79) * fVar66 - (fVar77 + fVar119) * fVar150) * fVar67;
          fVar112 = ((fVar84 + fVar116) * fVar151 - auVar129._4_4_ * (fVar82 + fVar85)) * fVar72 +
                    (auVar129._4_4_ * (fVar83 + fVar120) - fVar71 * (fVar84 + fVar116)) * fVar74 +
                    ((fVar82 + fVar85) * fVar71 - (fVar83 + fVar120) * fVar151) * fVar67;
          fVar113 = ((fVar89 + fVar117) * fVar152 - auVar129._8_4_ * (fVar87 + fVar90)) * fVar72 +
                    (auVar129._8_4_ * (fVar88 + fVar121) - fVar73 * (fVar89 + fVar117)) * fVar74 +
                    ((fVar87 + fVar90) * fVar73 - (fVar88 + fVar121) * fVar152) * fVar67;
          fVar114 = ((fVar94 + fVar118) * fVar153 - auVar129._12_4_ * (fVar92 + fVar95)) * fVar72 +
                    (auVar129._12_4_ * (fVar93 + fVar122) - fVar75 * (fVar94 + fVar118)) * fVar74 +
                    ((fVar92 + fVar95) * fVar75 - (fVar93 + fVar122) * fVar153) * fVar67;
          auVar109._8_4_ = fVar62;
          auVar109._0_8_ = CONCAT44(fVar59,fVar55);
          auVar109._12_4_ = fVar65;
          auVar15._8_4_ = fVar113;
          auVar15._0_8_ = CONCAT44(fVar112,fVar104);
          auVar15._12_4_ = fVar114;
          auVar138 = maxps(auVar109,auVar15);
          auVar98._8_4_ = fVar62;
          auVar98._0_8_ = CONCAT44(fVar59,fVar55);
          auVar98._12_4_ = fVar65;
          auVar16._8_4_ = fVar113;
          auVar16._0_8_ = CONCAT44(fVar112,fVar104);
          auVar16._12_4_ = fVar114;
          auVar124 = minps(auVar98,auVar16);
          auVar81._0_4_ =
               ((fVar79 + fVar80) * fVar140 - (fVar97 + fVar119) * fVar130) * fVar67 +
               ((fVar46 + fVar115) * fVar130 - fVar141 * (fVar79 + fVar80)) * fVar72 +
               (fVar141 * (fVar97 + fVar119) - fVar140 * (fVar46 + fVar115)) * fVar74;
          auVar81._4_4_ =
               ((fVar85 + fVar86) * fVar142 - (fVar101 + fVar120) * fVar131) * fVar67 +
               ((fVar49 + fVar116) * fVar131 - fVar143 * (fVar85 + fVar86)) * fVar72 +
               (fVar143 * (fVar101 + fVar120) - fVar142 * (fVar49 + fVar116)) * fVar74;
          auVar81._8_4_ =
               ((fVar90 + fVar91) * fVar144 - (fVar102 + fVar121) * fVar132) * fVar67 +
               ((fVar51 + fVar117) * fVar132 - fVar145 * (fVar90 + fVar91)) * fVar72 +
               (fVar145 * (fVar102 + fVar121) - fVar144 * (fVar51 + fVar117)) * fVar74;
          auVar81._12_4_ =
               ((fVar95 + fVar96) * fVar146 - (fVar103 + fVar122) * fVar133) * fVar67 +
               ((fVar52 + fVar118) * fVar133 - fVar147 * (fVar95 + fVar96)) * fVar72 +
               (fVar147 * (fVar103 + fVar122) - fVar146 * (fVar52 + fVar118)) * fVar74;
          fVar49 = fVar55 + fVar104 + auVar81._0_4_;
          fVar51 = fVar59 + fVar112 + auVar81._4_4_;
          fVar79 = fVar62 + fVar113 + auVar81._8_4_;
          fVar80 = fVar65 + fVar114 + auVar81._12_4_;
          auVar138 = maxps(auVar138,auVar81);
          auVar124 = minps(auVar124,auVar81);
          fVar52 = __LC15 * (float)(_LC3 & (uint)fVar49);
          fVar103 = _UNK_00115404 * (float)(_UNK_001153c4 & (uint)fVar51);
          fVar96 = _UNK_00115408 * (float)(_UNK_001153c8 & (uint)fVar79);
          fVar46 = _UNK_0011540c * (float)(_UNK_001153cc & (uint)fVar80);
          auVar110._4_4_ = -(uint)(auVar138._4_4_ <= fVar103);
          auVar110._0_4_ = -(uint)(auVar138._0_4_ <= fVar52);
          auVar110._8_4_ = -(uint)(auVar138._8_4_ <= fVar96);
          auVar110._12_4_ = -(uint)(auVar138._12_4_ <= fVar46);
          auVar99._4_4_ = -(uint)((float)((uint)fVar103 ^ _UNK_001153f4) <= auVar124._4_4_);
          auVar99._0_4_ = -(uint)((float)((uint)fVar52 ^ _LC9) <= auVar124._0_4_);
          auVar99._8_4_ = -(uint)((float)((uint)fVar96 ^ _UNK_001153f8) <= auVar124._8_4_);
          auVar99._12_4_ = -(uint)((float)((uint)fVar46 ^ _UNK_001153fc) <= auVar124._12_4_);
          auVar99 = auVar99 | auVar110;
          auVar100._0_4_ = auVar99._0_4_ & _DAT_00116108;
          auVar100._4_4_ = auVar99._4_4_ & uRam000000000011610c;
          auVar100._8_4_ = auVar99._8_4_ & uRam0000000000116110;
          auVar100._12_4_ = auVar99._12_4_ & uRam0000000000116114;
          uVar33 = movmskps((int)puVar24,auVar100);
          puVar24 = (uint *)(ulong)uVar33;
          if (uVar33 != 0) {
            uVar33 = -(uint)((float)(_LC3 & (uint)(fVar53 * fVar66)) <
                            (float)(_LC3 & (uint)(fVar140 * fVar150)));
            uVar41 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar57 * fVar71)) <
                            (float)(_UNK_001153c4 & (uint)(fVar142 * fVar151)));
            uVar38 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar60 * fVar73)) <
                            (float)(_UNK_001153c8 & (uint)(fVar144 * fVar152)));
            uVar42 = -(uint)((float)(_UNK_001153cc & (uint)(fVar63 * fVar75)) <
                            (float)(_UNK_001153cc & (uint)(fVar146 * fVar153)));
            uVar34 = -(uint)((float)(_LC3 & (uint)(fVar134 * fVar150)) <
                            (float)(_LC3 & (uint)(fVar130 * auVar129._0_4_)));
            uVar35 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar135 * fVar151)) <
                            (float)(_UNK_001153c4 & (uint)(fVar131 * auVar129._4_4_)));
            uVar39 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar136 * fVar152)) <
                            (float)(_UNK_001153c8 & (uint)(fVar132 * auVar129._8_4_)));
            uVar43 = -(uint)((float)(_UNK_001153cc & (uint)(fVar137 * fVar153)) <
                            (float)(_UNK_001153cc & (uint)(fVar133 * auVar129._12_4_)));
            uVar37 = -(uint)((float)(_LC3 & (uint)(fVar54 * auVar129._0_4_)) <
                            (float)(_LC3 & (uint)(fVar141 * fVar66)));
            uVar36 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar58 * auVar129._4_4_)) <
                            (float)(_UNK_001153c4 & (uint)(fVar143 * fVar71)));
            uVar40 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar61 * auVar129._8_4_)) <
                            (float)(_UNK_001153c8 & (uint)(fVar145 * fVar73)));
            uVar44 = -(uint)((float)(_UNK_001153cc & (uint)(fVar64 * auVar129._12_4_)) <
                            (float)(_UNK_001153cc & (uint)(fVar147 * fVar75)));
            fVar103 = (float)(uVar37 & (uint)(fVar134 * fVar66 - fVar54 * auVar129._0_4_) |
                             ~uVar37 & (uint)(fVar140 * auVar129._0_4_ - fVar141 * fVar66));
            fVar96 = (float)(uVar36 & (uint)(fVar135 * fVar71 - fVar58 * auVar129._4_4_) |
                            ~uVar36 & (uint)(fVar142 * auVar129._4_4_ - fVar143 * fVar71));
            fVar46 = (float)(uVar40 & (uint)(fVar136 * fVar73 - fVar61 * auVar129._8_4_) |
                            ~uVar40 & (uint)(fVar144 * auVar129._8_4_ - fVar145 * fVar73));
            fVar85 = (float)(uVar44 & (uint)(fVar137 * fVar75 - fVar64 * auVar129._12_4_) |
                            ~uVar44 & (uint)(fVar146 * auVar129._12_4_ - fVar147 * fVar75));
            fVar86 = (float)(uVar34 & (uint)(fVar53 * auVar129._0_4_ - fVar134 * fVar150) |
                            ~uVar34 & (uint)(fVar141 * fVar150 - fVar130 * auVar129._0_4_));
            fVar90 = (float)(uVar35 & (uint)(fVar57 * auVar129._4_4_ - fVar135 * fVar151) |
                            ~uVar35 & (uint)(fVar143 * fVar151 - fVar131 * auVar129._4_4_));
            fVar91 = (float)(uVar39 & (uint)(fVar60 * auVar129._8_4_ - fVar136 * fVar152) |
                            ~uVar39 & (uint)(fVar145 * fVar152 - fVar132 * auVar129._8_4_));
            fVar95 = (float)(uVar43 & (uint)(fVar63 * auVar129._12_4_ - fVar137 * fVar153) |
                            ~uVar43 & (uint)(fVar147 * fVar153 - fVar133 * auVar129._12_4_));
            auVar111._0_4_ = uVar33 & (uint)(fVar54 * fVar150 - fVar53 * fVar66);
            auVar111._4_4_ = uVar41 & (uint)(fVar58 * fVar151 - fVar57 * fVar71);
            auVar111._8_4_ = uVar38 & (uint)(fVar61 * fVar152 - fVar60 * fVar73);
            auVar111._12_4_ = uVar42 & (uint)(fVar64 * fVar153 - fVar63 * fVar75);
            auVar12._4_4_ = ~uVar41 & (uint)(fVar71 * fVar131 - fVar142 * fVar151);
            auVar12._0_4_ = ~uVar33 & (uint)(fVar66 * fVar130 - fVar140 * fVar150);
            auVar12._8_4_ = ~uVar38 & (uint)(fVar73 * fVar132 - fVar144 * fVar152);
            auVar12._12_4_ = ~uVar42 & (uint)(fVar75 * fVar133 - fVar146 * fVar153);
            auVar111 = auVar111 | auVar12;
            fVar54 = fVar72 * fVar86 + fVar74 * fVar103 + fVar67 * auVar111._0_4_;
            fVar57 = fVar72 * fVar90 + fVar74 * fVar96 + fVar67 * auVar111._4_4_;
            fVar58 = fVar72 * fVar91 + fVar74 * fVar46 + fVar67 * auVar111._8_4_;
            fVar60 = fVar72 * fVar95 + fVar74 * fVar85 + fVar67 * auVar111._12_4_;
            fVar54 = fVar54 + fVar54;
            fVar57 = fVar57 + fVar57;
            fVar58 = fVar58 + fVar58;
            fVar60 = fVar60 + fVar60;
            auVar13._4_4_ = fVar57;
            auVar13._0_4_ = fVar54;
            auVar13._8_4_ = fVar58;
            auVar13._12_4_ = fVar60;
            auVar124 = rcpps(auVar129,auVar13);
            fVar61 = auVar124._0_4_;
            fVar63 = auVar124._4_4_;
            fVar64 = auVar124._8_4_;
            fVar66 = auVar124._12_4_;
            fVar67 = fVar77 * fVar86 + fVar76 * fVar103 + fVar78 * auVar111._0_4_;
            fVar72 = fVar83 * fVar90 + fVar82 * fVar96 + fVar84 * auVar111._4_4_;
            fVar74 = fVar88 * fVar91 + fVar87 * fVar46 + fVar89 * auVar111._8_4_;
            fVar52 = fVar93 * fVar95 + fVar92 * fVar85 + fVar94 * auVar111._12_4_;
            fVar53 = *(float *)(param_2 + 0x20);
            auVar70._0_4_ = (fVar67 + fVar67) * ((_LC7 - fVar54 * fVar61) * fVar61 + fVar61);
            auVar70._4_4_ = (fVar72 + fVar72) * ((_LC7 - fVar57 * fVar63) * fVar63 + fVar63);
            auVar70._8_4_ = (fVar74 + fVar74) * ((_LC7 - fVar58 * fVar64) * fVar64 + fVar64);
            auVar70._12_4_ = (fVar52 + fVar52) * ((_LC7 - fVar60 * fVar66) * fVar66 + fVar66);
            fVar67 = *(float *)(param_2 + 0xc);
            auVar125._0_4_ =
                 -(uint)(auVar70._0_4_ <= fVar53 && fVar67 <= auVar70._0_4_) & auVar100._0_4_ &
                 -(uint)(fVar54 != 0.0);
            auVar125._4_4_ =
                 -(uint)(auVar70._4_4_ <= fVar53 && fVar67 <= auVar70._4_4_) & auVar100._4_4_ &
                 -(uint)(fVar57 != 0.0);
            auVar125._8_4_ =
                 -(uint)(auVar70._8_4_ <= fVar53 && fVar67 <= auVar70._8_4_) & auVar100._8_4_ &
                 -(uint)(fVar58 != 0.0);
            auVar125._12_4_ =
                 -(uint)(auVar70._12_4_ <= fVar53 && fVar67 <= auVar70._12_4_) & auVar100._12_4_ &
                 -(uint)(fVar60 != 0.0);
            uVar33 = movmskps((int)uVar28,auVar125);
            uVar28 = (ulong)uVar33;
            if (uVar33 != 0) {
              lVar5 = *(long *)param_3;
              local_828 = auVar70;
              auVar14._4_4_ = fVar51;
              auVar14._0_4_ = fVar49;
              auVar14._8_4_ = fVar79;
              auVar14._12_4_ = fVar80;
              auVar124 = rcpps(auVar70,auVar14);
              local_7f8[0] = fVar103;
              local_7f8[1] = fVar96;
              local_7f8[2] = fVar46;
              local_7f8[3] = fVar85;
              local_818 = auVar111;
              fVar67 = auVar124._0_4_;
              fVar72 = auVar124._4_4_;
              fVar74 = auVar124._8_4_;
              fVar52 = auVar124._12_4_;
              local_808[0] = fVar86;
              local_808[1] = fVar90;
              local_808[2] = fVar91;
              local_808[3] = fVar95;
              fVar67 = (float)(~-(uint)((float)(_LC3 & (uint)fVar49) < _LC5) &
                              (uint)((_LC7 - fVar49 * fVar67) * fVar67 + fVar67));
              fVar72 = (float)(~-(uint)((float)(_UNK_001153c4 & (uint)fVar51) < _UNK_001153d4) &
                              (uint)((_LC7 - fVar51 * fVar72) * fVar72 + fVar72));
              fVar74 = (float)(~-(uint)((float)(_UNK_001153c8 & (uint)fVar79) < _UNK_001153d8) &
                              (uint)((_LC7 - fVar79 * fVar74) * fVar74 + fVar74));
              fVar52 = (float)(~-(uint)((float)(_UNK_001153cc & (uint)fVar80) < _UNK_001153dc) &
                              (uint)((_LC7 - fVar80 * fVar52) * fVar52 + fVar52));
              auVar56._0_4_ = fVar55 * fVar67;
              auVar56._4_4_ = fVar59 * fVar72;
              auVar56._8_4_ = fVar62 * fVar74;
              auVar56._12_4_ = fVar65 * fVar52;
              auVar47._0_4_ = fVar67 * fVar104;
              auVar47._4_4_ = fVar72 * fVar112;
              auVar47._8_4_ = fVar74 * fVar113;
              auVar47._12_4_ = fVar52 * fVar114;
              auVar20._4_12_ = _UNK_001153e4;
              auVar20._0_4_ = _LC7;
              local_848 = minps(auVar56,auVar20);
              auVar21._4_12_ = _UNK_001153e4;
              auVar21._0_4_ = _LC7;
              local_838 = minps(auVar47,auVar21);
              do {
                pbVar29 = *(byte **)(param_3 + 0x10);
                uVar7 = 0;
                if (uVar28 != 0) {
                  for (; (uVar28 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                  }
                }
                fVar67 = pfVar26[uVar7 + 0x48];
                lVar6 = *(long *)(*(long *)(lVar5 + 0x1e0) + (ulong)(uint)fVar67 * 8);
                pcVar25 = *(code **)(pbVar29 + 0x10);
                if ((pcVar25 == (code *)0x0) && (*(long *)(lVar6 + 0x48) == 0)) {
LAB_00106842:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010684b;
                }
                fStack_8a4 = pfVar26[uVar7 + 0x4c];
                uStack_8a8 = *(undefined4 *)(local_838 + uVar7 * 4);
                uStack_8ac = *(undefined4 *)(local_848 + uVar7 * 4);
                fStack_8b0 = local_7f8[uVar7];
                uStack_8ec = 0xffffffff;
                puStack_8d8 = *(undefined4 **)(param_3 + 8);
                fStack_8b4 = local_808[uVar7];
                uStack_89c = *puStack_8d8;
                fStack_8b8 = local_808[uVar7 - 4];
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_828 + uVar7 * 4);
                puStack_8e8 = &uStack_8ec;
                uStack_8e0 = *(undefined8 *)(lVar6 + 0x18);
                puStack_8c8 = &fStack_8b8;
                uStack_8c0 = 1;
                pRStack_8d0 = param_2;
                fStack_8a0 = fVar67;
                if (*(code **)(lVar6 + 0x48) == (code *)0x0) {
LAB_00106aa7:
                  if ((pcVar25 != (code *)0x0) &&
                     (((*pbVar29 & 2) != 0 || ((*(byte *)(lVar6 + 0x3e) & 0x40) != 0)))) {
                    (*pcVar25)(&puStack_8e8);
                    puVar24 = (uint *)(ulong)*puStack_8e8;
                    if (*puStack_8e8 == 0) goto LAB_00106b1b;
                  }
                  goto LAB_00106842;
                }
                (**(code **)(lVar6 + 0x48))(&puStack_8e8);
                puVar24 = puStack_8e8;
                if (*puStack_8e8 != 0) {
                  pbVar29 = *(byte **)(param_3 + 0x10);
                  pcVar25 = *(code **)(pbVar29 + 0x10);
                  goto LAB_00106aa7;
                }
LAB_00106b1b:
                *(float *)(param_2 + 0x20) = fVar53;
                uVar28 = uVar28 ^ 1L << (uVar7 & 0x3f);
              } while (uVar28 != 0);
              uVar28 = 0;
            }
          }
          lVar31 = lVar31 + 1;
          pfVar26 = pfVar26 + 0x50;
          if (lVar31 == uVar30 - 8) break;
          fVar53 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_001068f0:
    } while (puVar22 != &local_7e8);
  }
LAB_0010684b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  code *pcVar12;
  ulong uVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  int iVar17;
  byte *pbVar18;
  RayHitK *pRVar19;
  undefined4 uVar20;
  int iVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  long lVar25;
  long in_FS_OFFSET;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar37;
  float fVar39;
  undefined1 auVar32 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar50 [16];
  float fVar56;
  uint uVar57;
  float fVar58;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  float fVar76;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float local_11b8;
  float fStack_11b4;
  float fStack_11b0;
  float fStack_11ac;
  undefined1 local_11a8 [252];
  undefined4 uStack_10ac;
  RayHitK *pRStack_10a8;
  undefined8 uStack_10a0;
  undefined4 *puStack_1098;
  RayHitK *pRStack_1090;
  int *piStack_1088;
  undefined4 uStack_1080;
  undefined1 auStack_1078 [16];
  int iStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  float fStack_105c;
  float fStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048 [6] [16];
  float afStack_fe8 [4];
  float afStack_fd8 [4];
  undefined1 auStack_fc8 [16];
  undefined1 auStack_fb8 [16];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  undefined1 (*pauVar21) [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar94 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar94 < 0.0) {
      fVar94 = 0.0;
    }
    fVar52 = *(float *)(param_2 + 0xc);
    if (fVar52 < 0.0) {
      fVar52 = 0.0;
    }
    fVar9 = *(float *)param_2;
    fVar10 = *(float *)(param_2 + 4);
    fVar11 = *(float *)(param_2 + 8);
    uVar26 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar27 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar28 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar29 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar67._0_4_ = ~uVar26 & *(uint *)(param_2 + 0x10);
    auVar67._4_4_ = ~uVar27 & *(uint *)(param_2 + 0x14);
    auVar67._8_4_ = ~uVar28 & *(uint *)(param_2 + 0x18);
    auVar67._12_4_ = ~uVar29 & *(uint *)(param_2 + 0x1c);
    auVar32._0_4_ = uVar26 & (uint)_LC5;
    auVar32._4_4_ = uVar27 & (uint)_LC5;
    auVar32._8_4_ = uVar28 & (uint)_LC5;
    auVar32._12_4_ = uVar29 & (uint)_LC5;
    auVar32 = auVar32 | auVar67;
    auVar66 = rcpps(auVar67,auVar32);
    fVar30 = auVar66._0_4_;
    fVar37 = auVar66._4_4_;
    fVar39 = auVar66._8_4_;
    fVar30 = (_LC7 - auVar32._0_4_ * fVar30) * fVar30 + fVar30;
    fVar37 = (_LC7 - auVar32._4_4_ * fVar37) * fVar37 + fVar37;
    fVar39 = (_LC7 - auVar32._8_4_ * fVar39) * fVar39 + fVar39;
    auVar66._4_4_ = fVar52;
    auVar66._0_4_ = fVar52;
    auVar66._8_4_ = fVar52;
    auVar66._12_4_ = fVar52;
    pauVar24 = (undefined1 (*) [16])local_f78;
    fVar56 = fVar94;
    fVar54 = fVar94;
    fVar52 = fVar94;
joined_r0x00106d1b:
    pauVar21 = pauVar24;
    if (pauVar21 != (undefined1 (*) [16])local_f88) {
      fStack_11b4 = *(float *)(param_2 + 0x20);
      pauVar24 = pauVar21 + -1;
      local_11a8._0_4_ = fStack_11b4;
      if (*(float *)(pauVar21[-1] + 8) <= fStack_11b4) {
        pauVar15 = *(undefined1 (**) [16])pauVar21[-1];
        if (((ulong)pauVar15 & 8) == 0) {
          do {
            pfVar14 = (float *)(pauVar15[6] + (-(uint)(fVar39 < 0.0) & 0x10));
            pauVar23 = pauVar15 + (ulong)(fVar30 < 0.0) + 2;
            pfVar1 = (float *)(pauVar15[4] + (-(uint)(fVar37 < 0.0) & 0x10));
            pfVar2 = (float *)(pauVar15[5] + (-(ulong)(fVar37 < 0.0) & 0xfffffffffffffff0));
            auVar115._0_4_ = (*pfVar14 - fVar11) * fVar39;
            auVar115._4_4_ = (pfVar14[1] - fVar11) * fVar39;
            auVar115._8_4_ = (pfVar14[2] - fVar11) * fVar39;
            auVar115._12_4_ = (pfVar14[3] - fVar11) * fVar39;
            auVar80._0_4_ = (*pfVar1 - fVar10) * fVar37;
            auVar80._4_4_ = (pfVar1[1] - fVar10) * fVar37;
            auVar80._8_4_ = (pfVar1[2] - fVar10) * fVar37;
            auVar80._12_4_ = (pfVar1[3] - fVar10) * fVar37;
            auVar110._0_4_ = (*(float *)*pauVar23 - fVar9) * fVar30;
            auVar110._4_4_ = (*(float *)(*pauVar23 + 4) - fVar9) * fVar30;
            auVar110._8_4_ = (*(float *)(*pauVar23 + 8) - fVar9) * fVar30;
            auVar110._12_4_ = (*(float *)(*pauVar23 + 0xc) - fVar9) * fVar30;
            auVar107._0_4_ = (*pfVar2 - fVar10) * fVar37;
            auVar107._4_4_ = (pfVar2[1] - fVar10) * fVar37;
            auVar107._8_4_ = (pfVar2[2] - fVar10) * fVar37;
            auVar107._12_4_ = (pfVar2[3] - fVar10) * fVar37;
            auVar67 = maxps(auVar115,auVar66);
            auVar32 = maxps(auVar110,auVar80);
            pfVar14 = (float *)(pauVar15[7] + (-(ulong)(fVar39 < 0.0) & 0xfffffffffffffff0));
            local_1048[0] = maxps(auVar32,auVar67);
            pfVar1 = (float *)(pauVar15[2] + ((ulong)(fVar30 < 0.0) * 0x10 ^ 0x10));
            auVar81._0_4_ = (*pfVar14 - fVar11) * fVar39;
            auVar81._4_4_ = (pfVar14[1] - fVar11) * fVar39;
            auVar81._8_4_ = (pfVar14[2] - fVar11) * fVar39;
            auVar81._12_4_ = (pfVar14[3] - fVar11) * fVar39;
            auVar68._0_4_ = (*pfVar1 - fVar9) * fVar30;
            auVar68._4_4_ = (pfVar1[1] - fVar9) * fVar30;
            auVar68._8_4_ = (pfVar1[2] - fVar9) * fVar30;
            auVar68._12_4_ = (pfVar1[3] - fVar9) * fVar30;
            auVar84._4_4_ = fVar54;
            auVar84._0_4_ = fVar52;
            auVar84._8_4_ = fVar56;
            auVar84._12_4_ = fVar94;
            auVar67 = minps(auVar81,auVar84);
            auVar32 = minps(auVar68,auVar107);
            auVar32 = minps(auVar32,auVar67);
            auVar82._4_4_ = -(uint)(SUB164(local_1048[0],4) <= auVar32._4_4_);
            auVar82._0_4_ = -(uint)(SUB164(local_1048[0],0) <= auVar32._0_4_);
            auVar82._8_4_ = -(uint)(SUB164(local_1048[0],8) <= auVar32._8_4_);
            auVar82._12_4_ = -(uint)(SUB164(local_1048[0],0xc) <= auVar32._12_4_);
            uVar20 = movmskps((int)pauVar21,auVar82);
            pauVar21 = (undefined1 (*) [16])CONCAT44((int)((ulong)pauVar21 >> 0x20),uVar20);
            if (pauVar21 == (undefined1 (*) [16])0x0) goto joined_r0x00106d1b;
            param_1 = (Intersectors *)((ulong)pauVar15 & 0xfffffffffffffff0);
            lVar16 = 0;
            if (pauVar21 != (undefined1 (*) [16])0x0) {
              for (; ((ulong)pauVar21 >> lVar16 & 1) == 0; lVar16 = lVar16 + 1) {
              }
            }
            pauVar15 = *(undefined1 (**) [16])(param_1 + lVar16 * 8);
            uVar13 = (ulong)(pauVar21[-1] + 0xf) & (ulong)pauVar21;
            pauVar23 = pauVar24;
            if (uVar13 != 0) {
              fVar42 = afStack_fe8[lVar16 + -0x18];
              lVar16 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> lVar16 & 1) == 0; lVar16 = lVar16 + 1) {
                }
              }
              pauVar21 = *(undefined1 (**) [16])(param_1 + lVar16 * 8);
              fVar46 = afStack_fe8[lVar16 + -0x18];
              uVar13 = uVar13 & uVar13 - 1;
              if (uVar13 == 0) {
                pauVar23 = pauVar24 + 1;
                if ((uint)fVar42 < (uint)fVar46) {
                  *(undefined1 (**) [16])*pauVar24 = pauVar21;
                  *(float *)(*pauVar24 + 8) = fVar46;
                }
                else {
                  *(undefined1 (**) [16])*pauVar24 = pauVar15;
                  *(float *)(*pauVar24 + 8) = fVar42;
                  pauVar15 = pauVar21;
                }
              }
              else {
                lVar16 = 0;
                if (uVar13 != 0) {
                  for (; (uVar13 >> lVar16 & 1) == 0; lVar16 = lVar16 + 1) {
                  }
                }
                fVar47 = afStack_fe8[lVar16 + -0x18];
                auVar112._8_4_ = fVar42;
                auVar112._0_8_ = pauVar15;
                auVar112._12_4_ = 0;
                auVar117._8_4_ = fVar46;
                auVar117._0_8_ = pauVar21;
                auVar117._12_4_ = 0;
                auVar61._8_4_ = fVar47;
                auVar61._0_8_ = *(ulong *)(param_1 + lVar16 * 8);
                auVar61._12_4_ = 0;
                auVar72._8_4_ = -(uint)((int)fVar42 < (int)fVar46);
                uVar13 = uVar13 - 1 & uVar13;
                if (uVar13 == 0) {
                  auVar72._4_4_ = auVar72._8_4_;
                  auVar72._0_4_ = auVar72._8_4_;
                  auVar72._12_4_ = auVar72._8_4_;
                  pauVar23 = pauVar24 + 2;
                  auVar84 = auVar112 & auVar72 | ~auVar72 & auVar117;
                  auVar67 = auVar72 & auVar117 | ~auVar72 & auVar112;
                  auVar109._8_4_ = -(uint)(auVar84._8_4_ < (int)fVar47);
                  auVar109._0_8_ = CONCAT44(auVar109._8_4_,auVar109._8_4_);
                  auVar109._12_4_ = auVar109._8_4_;
                  auVar32 = auVar61 & auVar109 | ~auVar109 & auVar84;
                  pauVar15 = (undefined1 (*) [16])
                             (auVar84._0_8_ & auVar109._0_8_ |
                             ~auVar109._0_8_ & *(ulong *)(param_1 + lVar16 * 8));
                  auVar113._8_4_ = -(uint)(auVar67._8_4_ < auVar32._8_4_);
                  auVar113._4_4_ = auVar113._8_4_;
                  auVar113._0_4_ = auVar113._8_4_;
                  auVar113._12_4_ = auVar113._8_4_;
                  *pauVar24 = auVar32 & auVar113 | ~auVar113 & auVar67;
                  pauVar24[1] = auVar67 & auVar113 | ~auVar113 & auVar32;
                  pauVar21 = (undefined1 (*) [16])0x0;
                }
                else {
                  pauVar21 = (undefined1 (*) [16])0x0;
                  if (uVar13 != 0) {
                    for (; (uVar13 >> (long)pauVar21 & 1) == 0;
                        pauVar21 = (undefined1 (*) [16])(*pauVar21 + 1)) {
                    }
                  }
                  auVar75._4_4_ = auVar72._8_4_;
                  auVar75._0_4_ = auVar72._8_4_;
                  auVar75._8_4_ = auVar72._8_4_;
                  auVar75._12_4_ = auVar72._8_4_;
                  pauVar23 = pauVar24 + 3;
                  auVar119._8_4_ = afStack_fe8[(long)(pauVar21[-2] + 8)];
                  auVar119._0_8_ = *(undefined8 *)(param_1 + (long)pauVar21 * 8);
                  auVar119._12_4_ = 0;
                  auVar110 = auVar112 & auVar75 | ~auVar75 & auVar117;
                  auVar114._8_4_ = -(uint)((int)fVar47 < (int)afStack_fe8[(long)(pauVar21[-2] + 8)])
                  ;
                  auVar67 = auVar75 & auVar117 | ~auVar75 & auVar112;
                  auVar114._4_4_ = auVar114._8_4_;
                  auVar114._0_4_ = auVar114._8_4_;
                  auVar114._12_4_ = auVar114._8_4_;
                  auVar84 = auVar61 & auVar114 | ~auVar114 & auVar119;
                  auVar32 = auVar119 & auVar114 | ~auVar114 & auVar61;
                  auVar118._8_4_ = -(uint)(auVar67._8_4_ < auVar32._8_4_);
                  auVar118._4_4_ = auVar118._8_4_;
                  auVar118._0_4_ = auVar118._8_4_;
                  auVar118._12_4_ = auVar118._8_4_;
                  auVar115 = auVar67 & auVar118 | ~auVar118 & auVar32;
                  local_11a8._0_16_ = ~auVar118 & auVar67;
                  iVar17 = -(uint)(auVar110._8_4_ < auVar84._8_4_);
                  auVar120._0_8_ = CONCAT44(iVar17,iVar17);
                  auVar120._8_4_ = iVar17;
                  auVar120._12_4_ = iVar17;
                  auVar67 = ~auVar120 & auVar110 | auVar84 & auVar120;
                  auVar85._8_4_ = -(uint)(auVar67._8_4_ < auVar115._8_4_);
                  auVar85._4_4_ = auVar85._8_4_;
                  auVar85._0_4_ = auVar85._8_4_;
                  auVar85._12_4_ = auVar85._8_4_;
                  pauVar24[1] = auVar115 & auVar85 | ~auVar85 & auVar67;
                  *pauVar24 = auVar32 & auVar118 | local_11a8._0_16_;
                  pauVar24[2] = auVar67 & auVar85 | ~auVar85 & auVar115;
                  pauVar15 = (undefined1 (*) [16])
                             (auVar110._0_8_ & auVar120._0_8_ | ~auVar120._0_8_ & auVar84._0_8_);
                }
              }
            }
            pauVar24 = pauVar23;
          } while (((ulong)pauVar15 & 8) == 0);
          uVar26 = (uint)pauVar15;
        }
        else {
          uVar26 = (uint)pauVar15;
          pauVar23 = pauVar24;
        }
        pauVar24 = pauVar23;
        fVar94 = fStack_11b4;
        fVar56 = fStack_11b4;
        fVar54 = fStack_11b4;
        fVar52 = fStack_11b4;
        if ((ulong)(uVar26 & 0xf) != 8) {
          pfVar14 = (float *)((ulong)pauVar15 & 0xfffffffffffffff0);
          lVar16 = 0;
          local_11b8 = fStack_11b4;
          fStack_11b0 = fStack_11b4;
          fStack_11ac = fStack_11b4;
          do {
            fVar94 = pfVar14[0x18];
            fVar52 = pfVar14[0x19];
            fVar54 = pfVar14[0x1a];
            fVar56 = pfVar14[0x1b];
            fVar42 = pfVar14[0x20];
            fVar46 = pfVar14[0x21];
            fVar47 = pfVar14[0x22];
            fVar48 = pfVar14[0x23];
            fVar89 = *(float *)param_2;
            fVar64 = *(float *)(param_2 + 4);
            fVar93 = *(float *)(param_2 + 8);
            fVar49 = pfVar14[0x10] * fVar94 - pfVar14[0xc] * pfVar14[0x1c];
            fVar51 = pfVar14[0x11] * fVar52 - pfVar14[0xd] * pfVar14[0x1d];
            auVar116._4_4_ = fVar51;
            auVar116._0_4_ = fVar49;
            fVar53 = pfVar14[0x12] * fVar54 - pfVar14[0xe] * pfVar14[0x1e];
            fVar55 = pfVar14[0x13] * fVar56 - pfVar14[0xf] * pfVar14[0x1f];
            fVar90 = pfVar14[8] - fVar93;
            fVar91 = pfVar14[9] - fVar93;
            fVar92 = pfVar14[10] - fVar93;
            fVar93 = pfVar14[0xb] - fVar93;
            fVar58 = pfVar14[4] - fVar64;
            fVar62 = pfVar14[5] - fVar64;
            fVar63 = pfVar14[6] - fVar64;
            fVar64 = pfVar14[7] - fVar64;
            auVar116._8_4_ = fVar53;
            auVar116._12_4_ = fVar55;
            fVar41 = *(float *)(param_2 + 0x10);
            fVar65 = *(float *)(param_2 + 0x14);
            fVar76 = *(float *)(param_2 + 0x18);
            fVar86 = *pfVar14 - fVar89;
            fVar87 = pfVar14[1] - fVar89;
            fVar88 = pfVar14[2] - fVar89;
            fVar89 = pfVar14[3] - fVar89;
            auVar108._0_4_ = pfVar14[0xc] * fVar42 - pfVar14[0x14] * fVar94;
            auVar108._4_4_ = pfVar14[0xd] * fVar46 - pfVar14[0x15] * fVar52;
            auVar108._8_4_ = pfVar14[0xe] * fVar47 - pfVar14[0x16] * fVar54;
            auVar108._12_4_ = pfVar14[0xf] * fVar48 - pfVar14[0x17] * fVar56;
            auVar111._0_4_ = pfVar14[0x1c] * pfVar14[0x14] - pfVar14[0x10] * fVar42;
            auVar111._4_4_ = pfVar14[0x1d] * pfVar14[0x15] - pfVar14[0x11] * fVar46;
            auVar111._8_4_ = pfVar14[0x1e] * pfVar14[0x16] - pfVar14[0x12] * fVar47;
            auVar111._12_4_ = pfVar14[0x1f] * pfVar14[0x17] - pfVar14[0x13] * fVar48;
            fVar103 = fVar86 * fVar65 - fVar58 * fVar41;
            fVar104 = fVar87 * fVar65 - fVar62 * fVar41;
            fVar105 = fVar88 * fVar65 - fVar63 * fVar41;
            fVar106 = fVar89 * fVar65 - fVar64 * fVar41;
            fVar99 = fVar90 * fVar41 - fVar86 * fVar76;
            fVar100 = fVar91 * fVar41 - fVar87 * fVar76;
            fVar101 = fVar92 * fVar41 - fVar88 * fVar76;
            fVar102 = fVar93 * fVar41 - fVar89 * fVar76;
            fVar95 = fVar58 * fVar76 - fVar90 * fVar65;
            fVar96 = fVar62 * fVar76 - fVar91 * fVar65;
            fVar97 = fVar63 * fVar76 - fVar92 * fVar65;
            fVar98 = fVar64 * fVar76 - fVar93 * fVar65;
            fVar31 = fVar65 * auVar108._0_4_ + fVar76 * fVar49 + fVar41 * auVar111._0_4_;
            fVar38 = fVar65 * auVar108._4_4_ + fVar76 * fVar51 + fVar41 * auVar111._4_4_;
            fVar40 = fVar65 * auVar108._8_4_ + fVar76 * fVar53 + fVar41 * auVar111._8_4_;
            fVar41 = fVar65 * auVar108._12_4_ + fVar76 * fVar55 + fVar41 * auVar111._12_4_;
            auVar50._0_4_ = _LC9 & (uint)fVar31;
            auVar50._4_4_ = _UNK_001153f4 & (uint)fVar38;
            auVar50._8_4_ = _UNK_001153f8 & (uint)fVar40;
            auVar50._12_4_ = _UNK_001153fc & (uint)fVar41;
            auVar83._0_4_ = (float)(_LC3 & (uint)fVar31);
            auVar83._4_4_ = (float)(_UNK_001153c4 & (uint)fVar38);
            auVar83._8_4_ = (float)(_UNK_001153c8 & (uint)fVar40);
            auVar83._12_4_ = (float)(_UNK_001153cc & (uint)fVar41);
            auVar43._0_4_ = pfVar14[0x1c] * fVar99 + fVar42 * fVar103 + fVar94 * fVar95;
            auVar43._4_4_ = pfVar14[0x1d] * fVar100 + fVar46 * fVar104 + fVar52 * fVar96;
            auVar43._8_4_ = pfVar14[0x1e] * fVar101 + fVar47 * fVar105 + fVar54 * fVar97;
            auVar43._12_4_ = pfVar14[0x1f] * fVar102 + fVar48 * fVar106 + fVar56 * fVar98;
            auVar43 = auVar43 ^ auVar50;
            fVar42 = auVar43._0_4_;
            fVar46 = auVar43._4_4_;
            fVar47 = auVar43._8_4_;
            fVar48 = auVar43._12_4_;
            auVar69._0_4_ = pfVar14[0x14] * fVar103 + pfVar14[0x10] * fVar99 + pfVar14[0xc] * fVar95
            ;
            auVar69._4_4_ =
                 pfVar14[0x15] * fVar104 + pfVar14[0x11] * fVar100 + pfVar14[0xd] * fVar96;
            auVar69._8_4_ =
                 pfVar14[0x16] * fVar105 + pfVar14[0x12] * fVar101 + pfVar14[0xe] * fVar97;
            auVar69._12_4_ =
                 pfVar14[0x17] * fVar106 + pfVar14[0x13] * fVar102 + pfVar14[0xf] * fVar98;
            auVar69 = auVar69 ^ auVar50;
            fVar65 = auVar69._0_4_;
            fVar76 = auVar69._4_4_;
            fVar95 = auVar69._8_4_;
            fVar96 = auVar69._12_4_;
            auVar33._0_4_ =
                 -(uint)((0.0 <= fVar65 && (0.0 <= fVar42 && fVar31 != 0.0)) &&
                        fVar65 + fVar42 <= auVar83._0_4_) & _DAT_00116108;
            auVar33._4_4_ =
                 -(uint)(((0.0 <= fVar46 && fVar38 != 0.0) && 0.0 <= fVar76) &&
                        fVar76 + fVar46 <= auVar83._4_4_) & uRam000000000011610c;
            auVar33._8_4_ =
                 -(uint)(((fVar40 != 0.0 && 0.0 <= fVar47) && 0.0 <= fVar95) &&
                        fVar95 + fVar47 <= auVar83._8_4_) & uRam0000000000116110;
            auVar33._12_4_ =
                 -(uint)(((0.0 <= fVar48 && fVar41 != 0.0) && 0.0 <= fVar96) &&
                        fVar96 + fVar48 <= auVar83._12_4_) & uRam0000000000116114;
            uVar20 = (undefined4)((ulong)param_1 >> 0x20);
            iVar17 = movmskps((int)param_1,auVar33);
            param_1 = (Intersectors *)CONCAT44(uVar20,iVar17);
            fVar52 = local_11b8;
            fVar54 = fStack_11b4;
            fVar56 = fStack_11b0;
            fVar94 = fStack_11ac;
            if (iVar17 != 0) {
              auVar59._0_4_ = fVar58 * auVar108._0_4_ + fVar90 * fVar49 + fVar86 * auVar111._0_4_;
              auVar59._4_4_ = fVar62 * auVar108._4_4_ + fVar91 * fVar51 + fVar87 * auVar111._4_4_;
              auVar59._8_4_ = fVar63 * auVar108._8_4_ + fVar92 * fVar53 + fVar88 * auVar111._8_4_;
              auVar59._12_4_ = fVar64 * auVar108._12_4_ + fVar93 * fVar55 + fVar89 * auVar111._12_4_
              ;
              auVar59 = auVar59 ^ auVar50;
              fVar64 = auVar59._0_4_;
              fVar93 = auVar59._4_4_;
              fVar41 = auVar59._8_4_;
              fVar31 = auVar59._12_4_;
              bVar5 = fVar64 <= local_11b8 * auVar83._0_4_;
              bVar6 = fVar93 <= fStack_11b4 * auVar83._4_4_;
              bVar7 = fVar41 <= fStack_11b0 * auVar83._8_4_;
              bVar8 = fVar31 <= fStack_11ac * auVar83._12_4_;
              auVar77._4_4_ = -(uint)bVar6;
              auVar77._0_4_ = -(uint)bVar5;
              auVar77._8_4_ = -(uint)bVar7;
              auVar77._12_4_ = -(uint)bVar8;
              fVar89 = *(float *)(param_2 + 0xc);
              auVar34._0_4_ = auVar33._0_4_ & -(uint)(fVar89 * auVar83._0_4_ < fVar64 && bVar5);
              auVar34._4_4_ = auVar33._4_4_ & -(uint)(fVar89 * auVar83._4_4_ < fVar93 && bVar6);
              auVar34._8_4_ = auVar33._8_4_ & -(uint)(fVar89 * auVar83._8_4_ < fVar41 && bVar7);
              auVar34._12_4_ = auVar33._12_4_ & -(uint)(fVar89 * auVar83._12_4_ < fVar31 && bVar8);
              iVar17 = movmskps(iVar17,auVar34);
              param_1 = (Intersectors *)CONCAT44(uVar20,iVar17);
              if (iVar17 != 0) {
                auVar32 = rcpps(auVar77,auVar83);
                auStack_1078 = auVar34;
                lVar3 = *(long *)param_3;
                fVar94 = auVar32._0_4_;
                fVar52 = auVar32._4_4_;
                fVar54 = auVar32._8_4_;
                fVar56 = auVar32._12_4_;
                auStack_fb8 = auVar111;
                auStack_fa8 = auVar108;
                auStack_f98 = auVar116;
                fVar94 = (_LC7 - auVar83._0_4_ * fVar94) * fVar94 + fVar94;
                fVar52 = (_LC7 - auVar83._4_4_ * fVar52) * fVar52 + fVar52;
                fVar54 = (_LC7 - auVar83._8_4_ * fVar54) * fVar54 + fVar54;
                fVar56 = (_LC7 - auVar83._12_4_ * fVar56) * fVar56 + fVar56;
                auVar60._0_4_ = fVar64 * fVar94;
                auVar60._4_4_ = fVar93 * fVar52;
                auVar60._8_4_ = fVar41 * fVar54;
                auVar60._12_4_ = fVar31 * fVar56;
                auStack_fc8 = auVar60;
                afStack_fe8[0] = fVar42 * fVar94;
                afStack_fe8[1] = fVar46 * fVar52;
                afStack_fe8[2] = fVar47 * fVar54;
                afStack_fe8[3] = fVar48 * fVar56;
                afStack_fd8[0] = fVar94 * fVar65;
                afStack_fd8[1] = fVar52 * fVar76;
                afStack_fd8[2] = fVar54 * fVar95;
                afStack_fd8[3] = fVar56 * fVar96;
                auVar44._0_4_ = auVar34._0_4_ & (uint)auVar60._0_4_;
                auVar44._4_4_ = auVar34._4_4_ & (uint)auVar60._4_4_;
                auVar44._8_4_ = auVar34._8_4_ & (uint)auVar60._8_4_;
                auVar44._12_4_ = auVar34._12_4_ & (uint)auVar60._12_4_;
                auVar70._0_4_ = ~auVar34._0_4_ & _LC18;
                auVar70._4_4_ = ~auVar34._4_4_ & _LC18;
                auVar70._8_4_ = ~auVar34._8_4_ & _LC18;
                auVar70._12_4_ = ~auVar34._12_4_ & _LC18;
                auVar44 = auVar44 | auVar70;
                auVar71._4_4_ = auVar44._0_4_;
                auVar71._0_4_ = auVar44._4_4_;
                auVar71._8_4_ = auVar44._12_4_;
                auVar71._12_4_ = auVar44._8_4_;
                auVar32 = minps(auVar71,auVar44);
                auVar78._0_8_ = auVar32._8_8_;
                auVar78._8_4_ = auVar32._0_4_;
                auVar78._12_4_ = auVar32._4_4_;
                auVar32 = minps(auVar78,auVar32);
                auVar35._0_4_ = auVar34._0_4_ & -(uint)(auVar44._0_4_ == auVar32._0_4_);
                auVar35._4_4_ = auVar34._4_4_ & -(uint)(auVar44._4_4_ == auVar32._4_4_);
                auVar35._8_4_ = auVar34._8_4_ & -(uint)(auVar44._8_4_ == auVar32._8_4_);
                auVar35._12_4_ = auVar34._12_4_ & -(uint)(auVar44._12_4_ == auVar32._12_4_);
                iVar17 = movmskps((int)lVar3,auVar35);
                if (iVar17 != 0) {
                  param_1 = (Intersectors *)CONCAT44((int)((ulong)lVar3 >> 0x20),iVar17);
                }
                lVar25 = 0;
                if (param_1 != (Intersectors *)0x0) {
                  for (; ((ulong)param_1 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
                  }
                }
                fVar94 = pfVar14[lVar25 + 0x24];
                uVar27 = _LC18;
                uVar28 = _LC18;
                uVar29 = _LC18;
                uVar57 = _LC18;
                while( true ) {
                  lVar4 = *(long *)(*(long *)(lVar3 + 0x1e0) + (ulong)(uint)fVar94 * 8);
                  pbVar18 = *(byte **)(param_3 + 0x10);
                  pcVar12 = *(code **)(pbVar18 + 0x10);
                  if ((pcVar12 == (code *)0x0) && (*(long *)(lVar4 + 0x40) == 0)) break;
                  fStack_1050 = fVar94;
                  fStack_105c = afStack_fe8[lVar25];
                  uStack_10ac = 0xffffffff;
                  fStack_1058 = afStack_fd8[lVar25];
                  puStack_1098 = *(undefined4 **)(param_3 + 8);
                  uStack_1060 = *(undefined4 *)(auStack_f98 + lVar25 * 4);
                  iStack_1068 = *(int *)(auStack_fb8 + lVar25 * 4);
                  fStack_1054 = pfVar14[lVar25 + 0x28];
                  uStack_1064 = *(undefined4 *)(auStack_fa8 + lVar25 * 4);
                  uStack_104c = *puStack_1098;
                  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar25 * 4);
                  pRStack_10a8 = (RayHitK *)&uStack_10ac;
                  uStack_10a0 = *(undefined8 *)(lVar4 + 0x18);
                  piStack_1088 = &iStack_1068;
                  pRStack_1090 = param_2;
                  uStack_1080 = 1;
                  if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
LAB_001075c9:
                    if ((pcVar12 != (code *)0x0) &&
                       ((((*pbVar18 & 2) != 0 || ((*(byte *)(lVar4 + 0x3e) & 0x40) != 0)) &&
                        ((*pcVar12)(&pRStack_10a8), uVar27 = _LC18, uVar28 = _UNK_00115414,
                        uVar29 = _UNK_00115418, uVar57 = _UNK_0011541c, *(int *)pRStack_10a8 == 0)))
                       ) goto LAB_001078d5;
                    *(int *)(pRStack_1090 + 0x30) = *piStack_1088;
                    *(int *)(pRStack_1090 + 0x34) = piStack_1088[1];
                    *(int *)(pRStack_1090 + 0x38) = piStack_1088[2];
                    *(int *)(pRStack_1090 + 0x3c) = piStack_1088[3];
                    *(int *)(pRStack_1090 + 0x40) = piStack_1088[4];
                    *(int *)(pRStack_1090 + 0x44) = piStack_1088[5];
                    *(int *)(pRStack_1090 + 0x48) = piStack_1088[6];
                    *(int *)(pRStack_1090 + 0x4c) = piStack_1088[7];
                    local_11a8._0_4_ = *(undefined4 *)(param_2 + 0x20);
                    fStack_11b4 = (float)local_11a8._0_4_;
                    local_11b8 = (float)local_11a8._0_4_;
                    fStack_11b0 = (float)local_11a8._0_4_;
                    fStack_11ac = (float)local_11a8._0_4_;
                    pRVar19 = pRStack_1090;
                  }
                  else {
                    (**(code **)(lVar4 + 0x40))(&pRStack_10a8);
                    if (*(int *)pRStack_10a8 != 0) {
                      pbVar18 = *(byte **)(param_3 + 0x10);
                      pcVar12 = *(code **)(pbVar18 + 0x10);
                      uVar27 = _LC18;
                      uVar28 = _UNK_00115414;
                      uVar29 = _UNK_00115418;
                      uVar57 = _UNK_0011541c;
                      goto LAB_001075c9;
                    }
LAB_001078d5:
                    uVar57 = _UNK_0011541c;
                    uVar29 = _UNK_00115418;
                    uVar28 = _UNK_00115414;
                    uVar27 = _LC18;
                    *(undefined4 *)(param_2 + 0x20) = local_11a8._0_4_;
                    pRVar19 = pRStack_10a8;
                  }
                  *(undefined4 *)(auStack_1078 + lVar25 * 4) = 0;
                  auStack_1078._0_4_ = -(uint)(auVar60._0_4_ <= local_11b8) & auStack_1078._0_4_;
                  auStack_1078._4_4_ = -(uint)(auVar60._4_4_ <= fStack_11b4) & auStack_1078._4_4_;
                  auStack_1078._8_4_ = -(uint)(auVar60._8_4_ <= fStack_11b0) & auStack_1078._8_4_;
                  auStack_1078._12_4_ = -(uint)(auVar60._12_4_ <= fStack_11ac) & auStack_1078._12_4_
                  ;
                  iVar17 = movmskps((int)pRVar19,auStack_1078);
                  param_1 = (Intersectors *)CONCAT44((int)((ulong)pRVar19 >> 0x20),iVar17);
                  fVar52 = local_11b8;
                  fVar54 = fStack_11b4;
                  fVar56 = fStack_11b0;
                  fVar94 = fStack_11ac;
                  if (iVar17 == 0) goto LAB_00106ffd;
                  auVar73._0_4_ = ~auStack_1078._0_4_ & uVar27;
                  auVar73._4_4_ = ~auStack_1078._4_4_ & uVar28;
                  auVar73._8_4_ = ~auStack_1078._8_4_ & uVar29;
                  auVar73._12_4_ = ~auStack_1078._12_4_ & uVar57;
                  auVar45._0_4_ = auStack_1078._0_4_ & (uint)auVar60._0_4_;
                  auVar45._4_4_ = auStack_1078._4_4_ & (uint)auVar60._4_4_;
                  auVar45._8_4_ = auStack_1078._8_4_ & (uint)auVar60._8_4_;
                  auVar45._12_4_ = auStack_1078._12_4_ & (uint)auVar60._12_4_;
                  auVar45 = auVar45 | auVar73;
                  auVar74._4_4_ = auVar45._0_4_;
                  auVar74._0_4_ = auVar45._4_4_;
                  auVar74._8_4_ = auVar45._12_4_;
                  auVar74._12_4_ = auVar45._8_4_;
                  auVar32 = minps(auVar74,auVar45);
                  auVar79._0_8_ = auVar32._8_8_;
                  auVar79._8_4_ = auVar32._0_4_;
                  auVar79._12_4_ = auVar32._4_4_;
                  auVar32 = minps(auVar79,auVar32);
                  auVar36._0_4_ = auStack_1078._0_4_ & -(uint)(auVar45._0_4_ == auVar32._0_4_);
                  auVar36._4_4_ = auStack_1078._4_4_ & -(uint)(auVar45._4_4_ == auVar32._4_4_);
                  auVar36._8_4_ = auStack_1078._8_4_ & -(uint)(auVar45._8_4_ == auVar32._8_4_);
                  auVar36._12_4_ = auStack_1078._12_4_ & -(uint)(auVar45._12_4_ == auVar32._12_4_);
                  iVar22 = movmskps((int)lVar25,auVar36);
                  if (iVar22 != 0) {
                    iVar17 = iVar22;
                  }
                  lVar25 = 0;
                  if ((long)iVar17 != 0) {
                    for (; ((ulong)(long)iVar17 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
                    }
                  }
                  fVar94 = pfVar14[lVar25 + 0x24];
                }
                local_11a8._0_4_ = *(undefined4 *)(auStack_fc8 + lVar25 * 4);
                *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(auStack_fb8 + lVar25 * 4);
                uVar20 = *(undefined4 *)(auStack_fa8 + lVar25 * 4);
                fVar52 = afStack_fe8[lVar25];
                fVar54 = afStack_fd8[lVar25];
                *(undefined4 *)(param_2 + 0x20) = local_11a8._0_4_;
                *(undefined4 *)(param_2 + 0x34) = uVar20;
                uVar20 = *(undefined4 *)(auStack_f98 + lVar25 * 4);
                *(float *)(param_2 + 0x3c) = fVar52;
                *(undefined4 *)(param_2 + 0x38) = uVar20;
                *(float *)(param_2 + 0x40) = fVar54;
                *(float *)(param_2 + 0x44) = pfVar14[lVar25 + 0x28];
                *(float *)(param_2 + 0x48) = fVar94;
                fStack_11b4 = (float)local_11a8._0_4_;
                local_11b8 = (float)local_11a8._0_4_;
                fStack_11b0 = (float)local_11a8._0_4_;
                fStack_11ac = (float)local_11a8._0_4_;
                param_1 = (Intersectors *)(ulong)**(uint **)(param_3 + 8);
                *(uint *)(param_2 + 0x4c) = **(uint **)(param_3 + 8);
                fVar52 = (float)local_11a8._0_4_;
                fVar54 = (float)local_11a8._0_4_;
                fVar56 = (float)local_11a8._0_4_;
                fVar94 = (float)local_11a8._0_4_;
              }
            }
LAB_00106ffd:
            lVar16 = lVar16 + 1;
            pfVar14 = pfVar14 + 0x2c;
          } while (lVar16 != (ulong)(uVar26 & 0xf) - 8);
        }
      }
      goto joined_r0x00106d1b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  float *pfVar24;
  RayHitK *pRVar25;
  float *pfVar26;
  undefined4 uVar27;
  byte *pbVar28;
  RayHitK *pRVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  long lVar32;
  long in_FS_OFFSET;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar47;
  float fVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar52;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar53 [16];
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  float fVar66;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar80;
  float fVar81;
  float fVar93;
  float fVar95;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar99;
  float fVar106;
  float fVar107;
  undefined1 auVar100 [16];
  float fVar108;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar142;
  float fVar143;
  undefined1 auVar136 [16];
  float fVar144;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar145;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar146 [16];
  undefined8 local_11c8;
  undefined8 local_11b8;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  ulong uStack_1198;
  undefined1 auStack_1188 [8];
  float fStack_1180;
  float fStack_117c;
  undefined1 local_1178 [64];
  ulong uStack_1138;
  undefined4 uStack_10ac;
  RayHitK *pRStack_10a8;
  RayHitK *pRStack_10a0;
  undefined4 *puStack_1098;
  RayHitK *pRStack_1090;
  int *piStack_1088;
  undefined4 uStack_1080;
  undefined1 auStack_1078 [16];
  int iStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  float fStack_105c;
  float fStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048 [6] [16];
  float afStack_fe8 [4];
  float afStack_fd8 [4];
  undefined1 auStack_fc8 [16];
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar59 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar59 < 0.0) {
      fVar59 = 0.0;
    }
    fVar52 = *(float *)(param_2 + 0xc);
    if (fVar52 < 0.0) {
      fVar52 = 0.0;
    }
    fVar13 = *(float *)param_2;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_2 + 8);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar36 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar100._0_4_ = ~uVar33 & *(uint *)(param_2 + 0x10);
    auVar100._4_4_ = ~uVar34 & *(uint *)(param_2 + 0x14);
    auVar100._8_4_ = ~uVar35 & *(uint *)(param_2 + 0x18);
    auVar100._12_4_ = ~uVar36 & *(uint *)(param_2 + 0x1c);
    auVar40._0_4_ = uVar33 & (uint)_LC5;
    auVar40._4_4_ = uVar34 & (uint)_LC5;
    auVar40._8_4_ = uVar35 & (uint)_LC5;
    auVar40._12_4_ = uVar36 & (uint)_LC5;
    auVar40 = auVar40 | auVar100;
    auVar82 = rcpps(auVar100,auVar40);
    fVar37 = auVar82._0_4_;
    fVar47 = auVar82._4_4_;
    fVar49 = auVar82._8_4_;
    fVar37 = (_LC7 - auVar40._0_4_ * fVar37) * fVar37 + fVar37;
    fVar47 = (_LC7 - auVar40._4_4_ * fVar47) * fVar47 + fVar47;
    fVar49 = (_LC7 - auVar40._8_4_ * fVar49) * fVar49 + fVar49;
    uVar17 = (ulong)(fVar37 < 0.0) * 0x10;
    auVar82._4_4_ = fVar52;
    auVar82._0_4_ = fVar52;
    auVar82._8_4_ = fVar52;
    auVar82._12_4_ = fVar52;
    pauVar31 = (undefined1 (*) [16])local_f78;
    fVar60 = fVar59;
    fVar57 = fVar59;
    fVar52 = fVar59;
joined_r0x00107ab3:
    pauVar16 = pauVar31;
    if (pauVar16 != (undefined1 (*) [16])local_f88) {
      fStack_1180 = *(float *)(param_2 + 0x20);
      pauVar31 = pauVar16 + -1;
      local_1178._0_4_ = fStack_1180;
      if (*(float *)(pauVar16[-1] + 8) <= fStack_1180) {
        fVar39 = *(float *)(param_2 + 0x1c);
        uStack_1138 = *(ulong *)pauVar16[-1];
        if ((uStack_1138 & 8) == 0) {
          do {
            auVar136._4_4_ = fVar57;
            auVar136._0_4_ = fVar52;
            auVar136._8_4_ = fVar60;
            auVar136._12_4_ = fVar59;
            uVar19 = uStack_1138 & 0xfffffffffffffff0;
            lVar20 = uVar19 + 0x20;
            pfVar26 = (float *)(lVar20 + (ulong)(-(uint)(fVar47 < 0.0) & 0x10) + 0x20);
            pfVar1 = (float *)(lVar20 + (ulong)(-(uint)(fVar49 < 0.0) & 0x10) + 0x40);
            pfVar2 = (float *)(lVar20 + uVar17);
            pfVar3 = (float *)(lVar20 + (uVar17 ^ 0x10));
            pfVar4 = (float *)(lVar20 + (-(ulong)(fVar47 < 0.0) & 0xfffffffffffffff0) + 0x30);
            pfVar24 = (float *)(lVar20 + (-(ulong)(fVar49 < 0.0) & 0xfffffffffffffff0) + 0x50);
            auVar137._0_4_ = ((pfVar26[0x18] * fVar39 + *pfVar26) - fVar14) * fVar47;
            auVar137._4_4_ = ((pfVar26[0x19] * fVar39 + pfVar26[1]) - fVar14) * fVar47;
            auVar137._8_4_ = ((pfVar26[0x1a] * fVar39 + pfVar26[2]) - fVar14) * fVar47;
            auVar137._12_4_ = ((pfVar26[0x1b] * fVar39 + pfVar26[3]) - fVar14) * fVar47;
            auVar83._0_4_ = ((pfVar1[0x18] * fVar39 + *pfVar1) - fVar15) * fVar49;
            auVar83._4_4_ = ((pfVar1[0x19] * fVar39 + pfVar1[1]) - fVar15) * fVar49;
            auVar83._8_4_ = ((pfVar1[0x1a] * fVar39 + pfVar1[2]) - fVar15) * fVar49;
            auVar83._12_4_ = ((pfVar1[0x1b] * fVar39 + pfVar1[3]) - fVar15) * fVar49;
            auVar40 = maxps(auVar137,auVar83);
            auVar84._0_4_ = ((pfVar2[0x18] * fVar39 + *pfVar2) - fVar13) * fVar37;
            auVar84._4_4_ = ((pfVar2[0x19] * fVar39 + pfVar2[1]) - fVar13) * fVar37;
            auVar84._8_4_ = ((pfVar2[0x1a] * fVar39 + pfVar2[2]) - fVar13) * fVar37;
            auVar84._12_4_ = ((pfVar2[0x1b] * fVar39 + pfVar2[3]) - fVar13) * fVar37;
            auVar100 = maxps(auVar82,auVar84);
            local_1048[0] = maxps(auVar100,auVar40);
            auVar85._0_4_ = ((pfVar24[0x18] * fVar39 + *pfVar24) - fVar15) * fVar49;
            auVar85._4_4_ = ((pfVar24[0x19] * fVar39 + pfVar24[1]) - fVar15) * fVar49;
            auVar85._8_4_ = ((pfVar24[0x1a] * fVar39 + pfVar24[2]) - fVar15) * fVar49;
            auVar85._12_4_ = ((pfVar24[0x1b] * fVar39 + pfVar24[3]) - fVar15) * fVar49;
            auVar103._0_4_ = ((pfVar4[0x18] * fVar39 + *pfVar4) - fVar14) * fVar47;
            auVar103._4_4_ = ((pfVar4[0x19] * fVar39 + pfVar4[1]) - fVar14) * fVar47;
            auVar103._8_4_ = ((pfVar4[0x1a] * fVar39 + pfVar4[2]) - fVar14) * fVar47;
            auVar103._12_4_ = ((pfVar4[0x1b] * fVar39 + pfVar4[3]) - fVar14) * fVar47;
            auVar40 = minps(auVar103,auVar85);
            auVar86._0_4_ = ((pfVar3[0x18] * fVar39 + *pfVar3) - fVar13) * fVar37;
            auVar86._4_4_ = ((pfVar3[0x19] * fVar39 + pfVar3[1]) - fVar13) * fVar37;
            auVar86._8_4_ = ((pfVar3[0x1a] * fVar39 + pfVar3[2]) - fVar13) * fVar37;
            auVar86._12_4_ = ((pfVar3[0x1b] * fVar39 + pfVar3[3]) - fVar13) * fVar37;
            auVar100 = minps(auVar136,auVar86);
            auVar40 = minps(auVar100,auVar40);
            bVar8 = SUB164(local_1048[0],0) <= auVar40._0_4_;
            bVar9 = SUB164(local_1048[0],4) <= auVar40._4_4_;
            bVar10 = SUB164(local_1048[0],8) <= auVar40._8_4_;
            bVar11 = SUB164(local_1048[0],0xc) <= auVar40._12_4_;
            auVar140._4_4_ = -(uint)bVar9;
            auVar140._0_4_ = -(uint)bVar8;
            auVar140._8_4_ = -(uint)bVar10;
            auVar140._12_4_ = -(uint)bVar11;
            if (((uint)uStack_1138 & 0xf) == 6) {
              auVar41._0_4_ =
                   -(uint)((*(float *)(uVar19 + 0xe0) <= fVar39 &&
                           fVar39 < *(float *)(uVar19 + 0xf0)) && bVar8);
              auVar41._4_4_ =
                   -(uint)((*(float *)(uVar19 + 0xe4) <= fVar39 &&
                           fVar39 < *(float *)(uVar19 + 0xf4)) && bVar9);
              auVar41._8_4_ =
                   -(uint)((*(float *)(uVar19 + 0xe8) <= fVar39 &&
                           fVar39 < *(float *)(uVar19 + 0xf8)) && bVar10);
              auVar41._12_4_ =
                   -(uint)((*(float *)(uVar19 + 0xec) <= fVar39 &&
                           fVar39 < *(float *)(uVar19 + 0xfc)) && bVar11);
              uVar27 = movmskps((int)pfVar3,auVar41);
            }
            else {
              uVar27 = movmskps((int)pfVar3,auVar140);
            }
            uVar23 = CONCAT44((int)((ulong)pfVar3 >> 0x20),uVar27);
            if (uVar23 == 0) goto joined_r0x00107ab3;
            lVar20 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
              }
            }
            uVar5 = *(ulong *)(uVar19 + lVar20 * 8);
            uVar23 = uVar23 - 1 & uVar23;
            uStack_1138 = uVar5;
            if (uVar23 != 0) {
              lVar32 = 0;
              if (uVar23 != 0) {
                for (; (uVar23 >> lVar32 & 1) == 0; lVar32 = lVar32 + 1) {
                }
              }
              uStack_1138 = *(ulong *)(uVar19 + lVar32 * 8);
              fVar38 = afStack_fe8[lVar20 + -0x18];
              fVar48 = afStack_fe8[lVar32 + -0x18];
              uVar23 = uVar23 - 1 & uVar23;
              if (uVar23 == 0) {
                if ((uint)fVar38 < (uint)fVar48) {
                  *(ulong *)*pauVar31 = uStack_1138;
                  *(float *)(*pauVar31 + 8) = fVar48;
                  uStack_1138 = uVar5;
                  pauVar31 = pauVar31 + 1;
                }
                else {
                  *(ulong *)*pauVar31 = uVar5;
                  *(float *)(*pauVar31 + 8) = fVar38;
                  pauVar31 = pauVar31 + 1;
                }
              }
              else {
                auVar101._8_4_ = fVar38;
                auVar101._0_8_ = uVar5;
                auVar101._12_4_ = 0;
                lVar20 = 0;
                if (uVar23 != 0) {
                  for (; (uVar23 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                  }
                }
                uVar5 = *(ulong *)(uVar19 + lVar20 * 8);
                auVar146._8_4_ = fVar48;
                auVar146._0_8_ = uStack_1138;
                auVar146._12_4_ = 0;
                fVar50 = afStack_fe8[lVar20 + -0x18];
                auVar44._8_4_ = fVar50;
                auVar44._0_8_ = uVar5;
                auVar44._12_4_ = 0;
                auVar90._8_4_ = -(uint)((int)fVar38 < (int)fVar48);
                uVar23 = uVar23 - 1 & uVar23;
                if (uVar23 == 0) {
                  auVar90._4_4_ = auVar90._8_4_;
                  auVar90._0_4_ = auVar90._8_4_;
                  auVar90._12_4_ = auVar90._8_4_;
                  auVar137 = ~auVar90 & auVar146 | auVar101 & auVar90;
                  auVar100 = auVar90 & auVar146 | ~auVar90 & auVar101;
                  auVar102._8_4_ = -(uint)(auVar137._8_4_ < (int)fVar50);
                  auVar102._0_8_ = CONCAT44(auVar102._8_4_,auVar102._8_4_);
                  auVar102._12_4_ = auVar102._8_4_;
                  auStack_1188 = (undefined1  [8])(~auVar102._0_8_ & uVar5);
                  auVar40 = auVar44 & auVar102 | ~auVar102 & auVar137;
                  auVar138._8_4_ = -(uint)(auVar100._8_4_ < auVar40._8_4_);
                  auVar138._4_4_ = auVar138._8_4_;
                  auVar138._0_4_ = auVar138._8_4_;
                  auVar138._12_4_ = auVar138._8_4_;
                  *pauVar31 = auVar40 & auVar138 | ~auVar138 & auVar100;
                  uStack_1198 = auVar137._0_8_;
                  pauVar31[1] = auVar100 & auVar138 | ~auVar138 & auVar40;
                  uStack_1138 = uStack_1198 & auVar102._0_8_ | (ulong)auStack_1188;
                  pauVar31 = pauVar31 + 2;
                }
                else {
                  lVar20 = 0;
                  if (uVar23 != 0) {
                    for (; (uVar23 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                    }
                  }
                  auVar46._8_4_ = afStack_fe8[lVar20 + -0x18];
                  auVar46._0_8_ = *(undefined8 *)(uVar19 + lVar20 * 8);
                  auVar46._12_4_ = 0;
                  auVar139._4_4_ = auVar90._8_4_;
                  auVar139._0_4_ = auVar90._8_4_;
                  auVar139._8_4_ = auVar90._8_4_;
                  auVar139._12_4_ = auVar90._8_4_;
                  auVar140 = auVar139 & auVar101 | ~auVar139 & auVar146;
                  auVar103 = auVar139 & auVar146 | ~auVar139 & auVar101;
                  auVar104._8_4_ = -(uint)((int)fVar50 < (int)afStack_fe8[lVar20 + -0x18]);
                  auVar104._4_4_ = auVar104._8_4_;
                  auVar104._0_4_ = auVar104._8_4_;
                  auVar104._12_4_ = auVar104._8_4_;
                  auVar137 = auVar44 & auVar104 | ~auVar104 & auVar46;
                  auVar40 = auVar46 & auVar104 | ~auVar104 & auVar44;
                  iVar21 = -(uint)(auVar103._8_4_ < auVar40._8_4_);
                  auVar141._4_4_ = iVar21;
                  auVar141._0_4_ = iVar21;
                  auVar141._8_4_ = iVar21;
                  auVar141._12_4_ = iVar21;
                  auVar100 = auVar103 & auVar141 | ~auVar141 & auVar40;
                  local_1178._0_16_ = ~auVar141 & auVar103;
                  auVar105._8_4_ = -(uint)(auVar140._8_4_ < auVar137._8_4_);
                  auVar105._0_8_ = CONCAT44(auVar105._8_4_,auVar105._8_4_);
                  auVar105._12_4_ = auVar105._8_4_;
                  uStack_1138 = ~auVar105._0_8_ & auVar137._0_8_;
                  auVar137 = ~auVar105 & auVar140 | auVar137 & auVar105;
                  auVar92._8_4_ = -(uint)(auVar137._8_4_ < auVar100._8_4_);
                  auVar92._4_4_ = auVar92._8_4_;
                  auVar92._0_4_ = auVar92._8_4_;
                  auVar92._12_4_ = auVar92._8_4_;
                  pauVar31[1] = auVar100 & auVar92 | ~auVar92 & auVar137;
                  *pauVar31 = auVar141 & auVar40 | local_1178._0_16_;
                  pauVar31[2] = auVar137 & auVar92 | ~auVar92 & auVar100;
                  uStack_1138 = uStack_1138 | auVar140._0_8_ & auVar105._0_8_;
                  pauVar31 = pauVar31 + 3;
                }
              }
            }
          } while ((uStack_1138 & 8) == 0);
        }
        pfVar26 = (float *)(uStack_1138 & 0xfffffffffffffff0);
        uVar19 = (ulong)((uint)uStack_1138 & 0xf);
        lVar20 = uVar19 - 8;
        fVar59 = fStack_1180;
        fVar60 = fStack_1180;
        fVar57 = fStack_1180;
        fVar52 = fStack_1180;
        if (uVar19 != 8) {
          lVar32 = 0;
          auStack_1188._4_4_ = fStack_1180;
          auStack_1188._0_4_ = fStack_1180;
          fStack_117c = fStack_1180;
          do {
            fVar59 = *(float *)param_2;
            fVar52 = *(float *)(param_2 + 4);
            fVar57 = *(float *)(param_2 + 8);
            fVar113 = pfVar26[0x2c] * fVar39 + pfVar26[8];
            fVar114 = pfVar26[0x2d] * fVar39 + pfVar26[9];
            fVar115 = pfVar26[0x2e] * fVar39 + pfVar26[10];
            fVar116 = pfVar26[0x2f] * fVar39 + pfVar26[0xb];
            fVar66 = pfVar26[0x28] * fVar39 + pfVar26[4];
            fVar69 = pfVar26[0x29] * fVar39 + pfVar26[5];
            fVar70 = pfVar26[0x2a] * fVar39 + pfVar26[6];
            fVar71 = pfVar26[0x2b] * fVar39 + pfVar26[7];
            fVar99 = pfVar26[0x24] * fVar39 + *pfVar26;
            fVar106 = pfVar26[0x25] * fVar39 + pfVar26[1];
            fVar107 = pfVar26[0x26] * fVar39 + pfVar26[2];
            fVar108 = pfVar26[0x27] * fVar39 + pfVar26[3];
            fVar145 = fVar113 - (pfVar26[0x38] * fVar39 + pfVar26[0x14]);
            fVar147 = fVar114 - (pfVar26[0x39] * fVar39 + pfVar26[0x15]);
            fVar148 = fVar115 - (pfVar26[0x3a] * fVar39 + pfVar26[0x16]);
            fVar149 = fVar116 - (pfVar26[0x3b] * fVar39 + pfVar26[0x17]);
            fVar72 = (pfVar26[0x44] * fVar39 + pfVar26[0x20]) - fVar113;
            fVar77 = (pfVar26[0x45] * fVar39 + pfVar26[0x21]) - fVar114;
            fVar78 = (pfVar26[0x46] * fVar39 + pfVar26[0x22]) - fVar115;
            fVar79 = (pfVar26[0x47] * fVar39 + pfVar26[0x23]) - fVar116;
            fVar61 = (pfVar26[0x40] * fVar39 + pfVar26[0x1c]) - fVar66;
            fVar63 = (pfVar26[0x41] * fVar39 + pfVar26[0x1d]) - fVar69;
            fVar64 = (pfVar26[0x42] * fVar39 + pfVar26[0x1e]) - fVar70;
            fVar65 = (pfVar26[0x43] * fVar39 + pfVar26[0x1f]) - fVar71;
            fVar117 = fVar66 - (pfVar26[0x34] * fVar39 + pfVar26[0x10]);
            fVar118 = fVar69 - (pfVar26[0x35] * fVar39 + pfVar26[0x11]);
            fVar119 = fVar70 - (pfVar26[0x36] * fVar39 + pfVar26[0x12]);
            fVar120 = fVar71 - (pfVar26[0x37] * fVar39 + pfVar26[0x13]);
            fVar109 = fVar99 - (pfVar26[0x30] * fVar39 + pfVar26[0xc]);
            fVar110 = fVar106 - (pfVar26[0x31] * fVar39 + pfVar26[0xd]);
            fVar111 = fVar107 - (pfVar26[0x32] * fVar39 + pfVar26[0xe]);
            fVar112 = fVar108 - (pfVar26[0x33] * fVar39 + pfVar26[0xf]);
            fVar38 = (fVar39 * pfVar26[0x3c] + pfVar26[0x18]) - fVar99;
            fVar48 = (fVar39 * pfVar26[0x3d] + pfVar26[0x19]) - fVar106;
            fVar50 = (fVar39 * pfVar26[0x3e] + pfVar26[0x1a]) - fVar107;
            fVar51 = (fVar39 * pfVar26[0x3f] + pfVar26[0x1b]) - fVar108;
            fVar99 = fVar99 - fVar59;
            fVar106 = fVar106 - fVar59;
            fVar107 = fVar107 - fVar59;
            fVar108 = fVar108 - fVar59;
            fVar80 = fVar117 * fVar38 - fVar109 * fVar61;
            fVar93 = fVar118 * fVar48 - fVar110 * fVar63;
            fVar95 = fVar119 * fVar50 - fVar111 * fVar64;
            fVar97 = fVar120 * fVar51 - fVar112 * fVar65;
            local_11c8 = CONCAT44(fVar93,fVar80);
            fVar81 = fVar109 * fVar72 - fVar145 * fVar38;
            fVar94 = fVar110 * fVar77 - fVar147 * fVar48;
            fVar96 = fVar111 * fVar78 - fVar148 * fVar50;
            fVar98 = fVar112 * fVar79 - fVar149 * fVar51;
            local_11b8 = CONCAT44(fVar94,fVar81);
            fVar59 = *(float *)(param_2 + 0x10);
            fVar60 = *(float *)(param_2 + 0x14);
            fVar39 = *(float *)(param_2 + 0x18);
            fVar129 = fVar145 * fVar61 - fVar117 * fVar72;
            fVar131 = fVar147 * fVar63 - fVar118 * fVar77;
            uStack_11a0._0_4_ = fVar148 * fVar64 - fVar119 * fVar78;
            uStack_11a0._4_4_ = fVar149 * fVar65 - fVar120 * fVar79;
            uStack_11a8 = CONCAT44(fVar131,fVar129);
            fVar66 = fVar66 - fVar52;
            fVar69 = fVar69 - fVar52;
            fVar70 = fVar70 - fVar52;
            fVar71 = fVar71 - fVar52;
            fVar113 = fVar113 - fVar57;
            fVar114 = fVar114 - fVar57;
            fVar115 = fVar115 - fVar57;
            fVar116 = fVar116 - fVar57;
            fVar135 = fVar99 * fVar60 - fVar66 * fVar59;
            fVar142 = fVar106 * fVar60 - fVar69 * fVar59;
            fVar143 = fVar107 * fVar60 - fVar70 * fVar59;
            fVar144 = fVar108 * fVar60 - fVar71 * fVar59;
            fVar130 = fVar113 * fVar59 - fVar99 * fVar39;
            fVar132 = fVar114 * fVar59 - fVar106 * fVar39;
            fVar133 = fVar115 * fVar59 - fVar107 * fVar39;
            fVar134 = fVar116 * fVar59 - fVar108 * fVar39;
            fVar125 = fVar66 * fVar39 - fVar113 * fVar60;
            fVar126 = fVar69 * fVar39 - fVar114 * fVar60;
            fVar127 = fVar70 * fVar39 - fVar115 * fVar60;
            fVar128 = fVar71 * fVar39 - fVar116 * fVar60;
            fVar52 = fVar60 * fVar81 + fVar39 * fVar80 + fVar59 * fVar129;
            fVar57 = fVar60 * fVar94 + fVar39 * fVar93 + fVar59 * fVar131;
            fVar58 = fVar60 * fVar96 + fVar39 * fVar95 + fVar59 * (float)uStack_11a0;
            fVar59 = fVar60 * fVar98 + fVar39 * fVar97 + fVar59 * uStack_11a0._4_4_;
            auVar87._0_4_ = _LC9 & (uint)fVar52;
            auVar87._4_4_ = _UNK_001153f4 & (uint)fVar57;
            auVar87._8_4_ = _UNK_001153f8 & (uint)fVar58;
            auVar87._12_4_ = _UNK_001153fc & (uint)fVar59;
            fVar121 = (float)(_LC3 & (uint)fVar52);
            fVar122 = (float)(_UNK_001153c4 & (uint)fVar57);
            fVar123 = (float)(_UNK_001153c8 & (uint)fVar58);
            fVar124 = (float)(_UNK_001153cc & (uint)fVar59);
            auVar62._0_4_ = fVar61 * fVar130 + fVar72 * fVar135 + fVar38 * fVar125;
            auVar62._4_4_ = fVar63 * fVar132 + fVar77 * fVar142 + fVar48 * fVar126;
            auVar62._8_4_ = fVar64 * fVar133 + fVar78 * fVar143 + fVar50 * fVar127;
            auVar62._12_4_ = fVar65 * fVar134 + fVar79 * fVar144 + fVar51 * fVar128;
            auVar62 = auVar62 ^ auVar87;
            fVar51 = auVar62._0_4_;
            fVar61 = auVar62._4_4_;
            fVar63 = auVar62._8_4_;
            fVar64 = auVar62._12_4_;
            auVar42._0_4_ = fVar145 * fVar135 + fVar117 * fVar130 + fVar109 * fVar125;
            auVar42._4_4_ = fVar147 * fVar142 + fVar118 * fVar132 + fVar110 * fVar126;
            auVar42._8_4_ = fVar148 * fVar143 + fVar119 * fVar133 + fVar111 * fVar127;
            auVar42._12_4_ = fVar149 * fVar144 + fVar120 * fVar134 + fVar112 * fVar128;
            auVar42 = auVar42 ^ auVar87;
            fVar39 = auVar42._0_4_;
            fVar38 = auVar42._4_4_;
            fVar48 = auVar42._8_4_;
            fVar50 = auVar42._12_4_;
            auVar53._0_4_ =
                 -(uint)((0.0 <= fVar39 && (0.0 <= fVar51 && fVar52 != 0.0)) &&
                        fVar39 + fVar51 <= fVar121) & _DAT_00116108;
            auVar53._4_4_ =
                 -(uint)(((0.0 <= fVar61 && fVar57 != 0.0) && 0.0 <= fVar38) &&
                        fVar38 + fVar61 <= fVar122) & uRam000000000011610c;
            auVar53._8_4_ =
                 -(uint)(((fVar58 != 0.0 && 0.0 <= fVar63) && 0.0 <= fVar48) &&
                        fVar48 + fVar63 <= fVar123) & uRam0000000000116110;
            auVar53._12_4_ =
                 -(uint)(((0.0 <= fVar64 && fVar59 != 0.0) && 0.0 <= fVar50) &&
                        fVar50 + fVar64 <= fVar124) & uRam0000000000116114;
            uVar27 = (undefined4)(uVar19 >> 0x20);
            iVar21 = movmskps((int)uVar19,auVar53);
            uVar19 = CONCAT44(uVar27,iVar21);
            fVar52 = (float)auStack_1188._0_4_;
            fVar57 = (float)auStack_1188._4_4_;
            fVar60 = fStack_1180;
            fVar59 = fStack_117c;
            if (iVar21 != 0) {
              auVar67._0_4_ = fVar66 * fVar81 + fVar113 * fVar80 + fVar99 * fVar129;
              auVar67._4_4_ = fVar69 * fVar94 + fVar114 * fVar93 + fVar106 * fVar131;
              auVar67._8_4_ = fVar70 * fVar96 + fVar115 * fVar95 + fVar107 * (float)uStack_11a0;
              auVar67._12_4_ = fVar71 * fVar98 + fVar116 * fVar97 + fVar108 * uStack_11a0._4_4_;
              auVar67 = auVar67 ^ auVar87;
              fVar65 = auVar67._0_4_;
              fVar66 = auVar67._4_4_;
              fVar69 = auVar67._8_4_;
              fVar70 = auVar67._12_4_;
              bVar8 = fVar65 <= (float)auStack_1188._0_4_ * fVar121;
              bVar9 = fVar66 <= (float)auStack_1188._4_4_ * fVar122;
              bVar10 = fVar69 <= fStack_1180 * fVar123;
              bVar11 = fVar70 <= fStack_117c * fVar124;
              auVar88._4_4_ = -(uint)bVar9;
              auVar88._0_4_ = -(uint)bVar8;
              auVar88._8_4_ = -(uint)bVar10;
              auVar88._12_4_ = -(uint)bVar11;
              fVar58 = *(float *)(param_2 + 0xc);
              auVar73._0_4_ = -(uint)(fVar58 * fVar121 < fVar65 && bVar8) & auVar53._0_4_;
              auVar73._4_4_ = -(uint)(fVar58 * fVar122 < fVar66 && bVar9) & auVar53._4_4_;
              auVar73._8_4_ = -(uint)(fVar58 * fVar123 < fVar69 && bVar10) & auVar53._8_4_;
              auVar73._12_4_ = -(uint)(fVar58 * fVar124 < fVar70 && bVar11) & auVar53._12_4_;
              iVar21 = movmskps(iVar21,auVar73);
              uVar19 = CONCAT44(uVar27,iVar21);
              if (iVar21 != 0) {
                auVar12._4_4_ = fVar122;
                auVar12._0_4_ = fVar121;
                auVar12._8_4_ = fVar123;
                auVar12._12_4_ = fVar124;
                auVar40 = rcpps(auVar88,auVar12);
                auStack_1078 = auVar73;
                uStack_fb8 = uStack_11a8;
                uStack_fb0 = uStack_11a0;
                lVar6 = *(long *)param_3;
                fVar59 = auVar40._0_4_;
                fVar52 = auVar40._4_4_;
                fVar57 = auVar40._8_4_;
                fVar60 = auVar40._12_4_;
                uStack_fa8 = local_11b8;
                uStack_fa0 = CONCAT44(fVar98,fVar96);
                uStack_f98 = local_11c8;
                uStack_f90 = CONCAT44(fVar97,fVar95);
                fVar59 = (_LC7 - fVar121 * fVar59) * fVar59 + fVar59;
                fVar52 = (_LC7 - fVar122 * fVar52) * fVar52 + fVar52;
                fVar57 = (_LC7 - fVar123 * fVar57) * fVar57 + fVar57;
                fVar60 = (_LC7 - fVar124 * fVar60) * fVar60 + fVar60;
                auVar68._0_4_ = fVar65 * fVar59;
                auVar68._4_4_ = fVar66 * fVar52;
                auVar68._8_4_ = fVar69 * fVar57;
                auVar68._12_4_ = fVar70 * fVar60;
                afStack_fe8[0] = fVar51 * fVar59;
                afStack_fe8[1] = fVar61 * fVar52;
                afStack_fe8[2] = fVar63 * fVar57;
                afStack_fe8[3] = fVar64 * fVar60;
                auVar43._0_4_ = auVar73._0_4_ & (uint)auVar68._0_4_;
                auVar43._4_4_ = auVar73._4_4_ & (uint)auVar68._4_4_;
                auVar43._8_4_ = auVar73._8_4_ & (uint)auVar68._8_4_;
                auVar43._12_4_ = auVar73._12_4_ & (uint)auVar68._12_4_;
                auStack_fc8 = auVar68;
                afStack_fd8[0] = fVar59 * fVar39;
                afStack_fd8[1] = fVar52 * fVar38;
                afStack_fd8[2] = fVar57 * fVar48;
                afStack_fd8[3] = fVar60 * fVar50;
                auVar54._0_4_ = ~auVar73._0_4_ & _LC18;
                auVar54._4_4_ = ~auVar73._4_4_ & _LC18;
                auVar54._8_4_ = ~auVar73._8_4_ & _LC18;
                auVar54._12_4_ = ~auVar73._12_4_ & _LC18;
                auVar43 = auVar43 | auVar54;
                auVar55._4_4_ = auVar43._0_4_;
                auVar55._0_4_ = auVar43._4_4_;
                auVar55._8_4_ = auVar43._12_4_;
                auVar55._12_4_ = auVar43._8_4_;
                auVar40 = minps(auVar55,auVar43);
                auVar89._0_8_ = auVar40._8_8_;
                auVar89._8_4_ = auVar40._0_4_;
                auVar89._12_4_ = auVar40._4_4_;
                auVar40 = minps(auVar89,auVar40);
                auVar74._0_4_ = auVar73._0_4_ & -(uint)(auVar43._0_4_ == auVar40._0_4_);
                auVar74._4_4_ = auVar73._4_4_ & -(uint)(auVar43._4_4_ == auVar40._4_4_);
                auVar74._8_4_ = auVar73._8_4_ & -(uint)(auVar43._8_4_ == auVar40._8_4_);
                auVar74._12_4_ = auVar73._12_4_ & -(uint)(auVar43._12_4_ == auVar40._12_4_);
                iVar21 = movmskps((int)lVar6,auVar74);
                if (iVar21 != 0) {
                  uVar19 = CONCAT44((int)((ulong)lVar6 >> 0x20),iVar21);
                }
                lVar30 = 0;
                if (uVar19 != 0) {
                  for (; (uVar19 >> lVar30 & 1) == 0; lVar30 = lVar30 + 1) {
                  }
                }
                fVar59 = pfVar26[lVar30 + 0x48];
                uVar33 = _LC18;
                uVar34 = _LC18;
                uVar35 = _LC18;
                uVar36 = _LC18;
                while( true ) {
                  pRVar25 = *(RayHitK **)(*(long *)(lVar6 + 0x1e0) + (ulong)(uint)fVar59 * 8);
                  pbVar28 = *(byte **)(param_3 + 0x10);
                  pcVar18 = *(code **)(pbVar28 + 0x10);
                  if ((pcVar18 == (code *)0x0) && (*(RayHitK **)(pRVar25 + 0x40) == (RayHitK *)0x0))
                  break;
                  fStack_1050 = fVar59;
                  fStack_105c = afStack_fe8[lVar30];
                  uStack_10ac = 0xffffffff;
                  fStack_1058 = afStack_fd8[lVar30];
                  puStack_1098 = *(undefined4 **)(param_3 + 8);
                  uStack_1060 = *(undefined4 *)((long)&uStack_f98 + lVar30 * 4);
                  iStack_1068 = *(int *)((long)&uStack_fb8 + lVar30 * 4);
                  fStack_1054 = pfVar26[lVar30 + 0x4c];
                  uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar30 * 4);
                  uStack_104c = *puStack_1098;
                  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar30 * 4);
                  pRStack_10a8 = (RayHitK *)&uStack_10ac;
                  pRStack_10a0 = *(RayHitK **)(pRVar25 + 0x18);
                  piStack_1088 = &iStack_1068;
                  pRStack_1090 = param_2;
                  uStack_1080 = 1;
                  if (*(RayHitK **)(pRVar25 + 0x40) == (RayHitK *)0x0) {
LAB_001084e6:
                    if ((pcVar18 != (code *)0x0) &&
                       (((*pbVar28 & 2) != 0 || (((byte)pRVar25[0x3e] & 0x40) != 0)))) {
                      pRVar29 = (RayHitK *)&pRStack_10a8;
                      (*pcVar18)();
                      pRVar25 = pRStack_10a8;
                      uVar33 = _LC18;
                      uVar34 = _UNK_00115414;
                      uVar35 = _UNK_00115418;
                      uVar36 = _UNK_0011541c;
                      if (*(int *)pRStack_10a8 == 0) goto LAB_00108821;
                    }
                    *(int *)(pRStack_1090 + 0x30) = *piStack_1088;
                    *(int *)(pRStack_1090 + 0x34) = piStack_1088[1];
                    *(int *)(pRStack_1090 + 0x38) = piStack_1088[2];
                    *(int *)(pRStack_1090 + 0x3c) = piStack_1088[3];
                    *(int *)(pRStack_1090 + 0x40) = piStack_1088[4];
                    *(int *)(pRStack_1090 + 0x44) = piStack_1088[5];
                    *(int *)(pRStack_1090 + 0x48) = piStack_1088[6];
                    iVar21 = piStack_1088[7];
                    *(int *)(pRStack_1090 + 0x4c) = iVar21;
                    local_1178._0_4_ = *(undefined4 *)(param_2 + 0x20);
                    auStack_1188._4_4_ = local_1178._0_4_;
                    auStack_1188._0_4_ = local_1178._0_4_;
                    fStack_1180 = (float)local_1178._0_4_;
                    fStack_117c = (float)local_1178._0_4_;
                    pRVar25 = pRStack_1090;
                  }
                  else {
                    (*(code *)*(RayHitK **)(pRVar25 + 0x40))(&pRStack_10a8);
                    pRVar29 = pRStack_10a8;
                    if (*(int *)pRStack_10a8 != 0) {
                      pbVar28 = *(byte **)(param_3 + 0x10);
                      pcVar18 = *(code **)(pbVar28 + 0x10);
                      uVar33 = _LC18;
                      uVar34 = _UNK_00115414;
                      uVar35 = _UNK_00115418;
                      uVar36 = _UNK_0011541c;
                      goto LAB_001084e6;
                    }
LAB_00108821:
                    uVar36 = _UNK_0011541c;
                    uVar35 = _UNK_00115418;
                    uVar34 = _UNK_00115414;
                    uVar33 = _LC18;
                    iVar21 = (int)pRVar29;
                    *(undefined4 *)(param_2 + 0x20) = local_1178._0_4_;
                  }
                  fVar52 = SUB164(_auStack_1188,0);
                  fVar57 = SUB164(_auStack_1188,4);
                  fVar60 = SUB164(_auStack_1188,8);
                  fVar59 = SUB164(_auStack_1188,0xc);
                  *(undefined4 *)(auStack_1078 + lVar30 * 4) = 0;
                  auStack_1078._0_4_ = -(uint)(auVar68._0_4_ <= fVar52) & auStack_1078._0_4_;
                  auStack_1078._4_4_ = -(uint)(auVar68._4_4_ <= fVar57) & auStack_1078._4_4_;
                  auStack_1078._8_4_ = -(uint)(auVar68._8_4_ <= fVar60) & auStack_1078._8_4_;
                  auStack_1078._12_4_ = -(uint)(auVar68._12_4_ <= fVar59) & auStack_1078._12_4_;
                  iVar22 = movmskps((int)pRVar25,auStack_1078);
                  uVar19 = CONCAT44((int)((ulong)pRVar25 >> 0x20),iVar22);
                  if (iVar22 == 0) goto LAB_00107f98;
                  auVar75._0_4_ = ~auStack_1078._0_4_ & uVar33;
                  auVar75._4_4_ = ~auStack_1078._4_4_ & uVar34;
                  auVar75._8_4_ = ~auStack_1078._8_4_ & uVar35;
                  auVar75._12_4_ = ~auStack_1078._12_4_ & uVar36;
                  auVar56._0_4_ = auStack_1078._0_4_ & (uint)auVar68._0_4_;
                  auVar56._4_4_ = auStack_1078._4_4_ & (uint)auVar68._4_4_;
                  auVar56._8_4_ = auStack_1078._8_4_ & (uint)auVar68._8_4_;
                  auVar56._12_4_ = auStack_1078._12_4_ & (uint)auVar68._12_4_;
                  auVar56 = auVar56 | auVar75;
                  auVar76._4_4_ = auVar56._0_4_;
                  auVar76._0_4_ = auVar56._4_4_;
                  auVar76._8_4_ = auVar56._12_4_;
                  auVar76._12_4_ = auVar56._8_4_;
                  auVar40 = minps(auVar76,auVar56);
                  auVar91._0_8_ = auVar40._8_8_;
                  auVar91._8_4_ = auVar40._0_4_;
                  auVar91._12_4_ = auVar40._4_4_;
                  auVar40 = minps(auVar91,auVar40);
                  auVar45._0_4_ = auStack_1078._0_4_ & -(uint)(auVar56._0_4_ == auVar40._0_4_);
                  auVar45._4_4_ = auStack_1078._4_4_ & -(uint)(auVar56._4_4_ == auVar40._4_4_);
                  auVar45._8_4_ = auStack_1078._8_4_ & -(uint)(auVar56._8_4_ == auVar40._8_4_);
                  auVar45._12_4_ = auStack_1078._12_4_ & -(uint)(auVar56._12_4_ == auVar40._12_4_);
                  iVar21 = movmskps(iVar21,auVar45);
                  if (iVar21 != 0) {
                    iVar22 = iVar21;
                  }
                  lVar30 = 0;
                  if ((long)iVar22 != 0) {
                    for (; ((ulong)(long)iVar22 >> lVar30 & 1) == 0; lVar30 = lVar30 + 1) {
                    }
                  }
                  fVar59 = pfVar26[lVar30 + 0x48];
                }
                fVar52 = *(float *)(auStack_fc8 + lVar30 * 4);
                fVar57 = afStack_fe8[lVar30];
                *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)((long)&uStack_fb8 + lVar30 * 4);
                uVar27 = *(undefined4 *)((long)&uStack_fa8 + lVar30 * 4);
                fVar60 = afStack_fd8[lVar30];
                *(float *)(param_2 + 0x20) = fVar52;
                *(undefined4 *)(param_2 + 0x34) = uVar27;
                auStack_1188._4_4_ = fVar52;
                auStack_1188._0_4_ = fVar52;
                fStack_1180 = fVar52;
                fStack_117c = fVar52;
                uVar27 = *(undefined4 *)((long)&uStack_f98 + lVar30 * 4);
                *(float *)(param_2 + 0x3c) = fVar57;
                *(undefined4 *)(param_2 + 0x38) = uVar27;
                *(float *)(param_2 + 0x40) = fVar60;
                local_1178._0_4_ = fVar52;
                *(float *)(param_2 + 0x44) = pfVar26[lVar30 + 0x4c];
                puVar7 = *(uint **)(param_3 + 8);
                *(float *)(param_2 + 0x48) = fVar59;
                uVar19 = (ulong)*puVar7;
                *(uint *)(param_2 + 0x4c) = *puVar7;
                fVar57 = fVar52;
                fVar60 = fVar52;
                fVar59 = fVar52;
              }
            }
LAB_00107f98:
            lVar32 = lVar32 + 1;
            pfVar26 = pfVar26 + 0x50;
            if (lVar32 == lVar20) break;
            fVar39 = *(float *)(param_2 + 0x1c);
          } while( true );
        }
      }
      goto joined_r0x00107ab3;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvIntersector1Pluecker<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  ulong uVar13;
  RayHitK *pRVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar18;
  code *pcVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  byte *pbVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined4 uVar28;
  float *pfVar30;
  long in_FS_OFFSET;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar70;
  float fVar72;
  float fVar74;
  undefined1 auVar65 [16];
  float fVar71;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar75;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar82;
  float fVar88;
  float fVar91;
  undefined1 auVar85 [16];
  float fVar83;
  float fVar84;
  float fVar89;
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar102;
  float fVar105;
  undefined1 auVar99 [16];
  float fVar103;
  float fVar104;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar121;
  float fVar124;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar122;
  float fVar123;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar130;
  float fVar139;
  float fVar140;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar141;
  undefined1 auVar134 [16];
  float fVar142;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  float fVar143;
  float fVar149;
  float fVar150;
  undefined1 auVar144 [16];
  float fVar151;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  float fVar152;
  float fVar154;
  float fVar155;
  float fVar156;
  undefined1 auVar153 [16];
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  undefined1 auStack_12a8 [16];
  int iStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined1 auStack_1278 [16];
  float fStack_1218;
  float fStack_1214;
  float fStack_1210;
  float fStack_120c;
  undefined1 local_11c8 [8];
  float fStack_11c0;
  float fStack_11bc;
  float local_119c;
  uint uStack_109c;
  uint *puStack_1098;
  undefined8 uStack_1090;
  undefined4 *puStack_1088;
  RayHitK *pRStack_1080;
  float *pfStack_1078;
  undefined4 uStack_1070;
  undefined1 auStack_1068 [16];
  float fStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  float fStack_1044;
  float fStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  undefined1 auStack_fc8 [16];
  undefined1 auStack_fb8 [16];
  float afStack_fa8 [4];
  float afStack_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  code *pcVar17;
  undefined1 (*pauVar29) [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_00108baf:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_11c8._4_4_ = *(undefined4 *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if ((float)local_11c8._4_4_ < 0.0) {
    local_11c8._4_4_ = 0.0;
  }
  fVar63 = *(float *)(param_2 + 0xc);
  if (fVar63 < 0.0) {
    fVar63 = 0.0;
  }
  fVar6 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 8);
  pauVar26 = (undefined1 (*) [16])local_f78;
  local_11c8._0_4_ = local_11c8._4_4_;
  fStack_11c0 = (float)local_11c8._4_4_;
  fStack_11bc = (float)local_11c8._4_4_;
  uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001153d4);
  uVar39 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001153d8);
  uVar43 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001153dc);
  auVar137._4_4_ = _LC7;
  auVar137._0_4_ = _LC7;
  auVar137._8_4_ = _LC7;
  auVar137._12_4_ = _LC7;
  auVar85._0_4_ = uVar31 & (uint)_LC5;
  auVar85._4_4_ = uVar35 & (uint)_UNK_001153d4;
  auVar85._8_4_ = uVar39 & (uint)_UNK_001153d8;
  auVar85._12_4_ = uVar43 & (uint)_UNK_001153dc;
  auVar115._0_4_ = ~uVar31 & *(uint *)(param_2 + 0x10);
  auVar115._4_4_ = ~uVar35 & *(uint *)(param_2 + 0x14);
  auVar115._8_4_ = ~uVar39 & *(uint *)(param_2 + 0x18);
  auVar115._12_4_ = ~uVar43 & *(uint *)(param_2 + 0x1c);
  auVar85 = divps(auVar137,auVar85 | auVar115);
  fVar47 = _LC12 * auVar85._0_4_;
  fVar54 = _LC12 * auVar85._4_4_;
  fVar56 = _LC12 * auVar85._8_4_;
  fVar82 = auVar85._0_4_ * _LC14;
  fVar88 = auVar85._4_4_ * _LC14;
  fVar91 = auVar85._8_4_ * _LC14;
  uVar16 = -(ulong)(fVar54 < 0.0) & 0xfffffffffffffff0;
  uVar31 = _LC3;
  uVar35 = _LC3;
  uVar39 = _LC3;
  uVar43 = _LC3;
LAB_00108a40:
  uVar12 = _LC9;
  pauVar29 = pauVar26;
  if (pauVar26 != (undefined1 (*) [16])local_f88) {
    do {
      fStack_1218 = *(float *)(param_2 + 0x20);
      pauVar27 = pauVar29 + -1;
      if (*(float *)(pauVar29[-1] + 8) <= fStack_1218) {
        pauVar23 = *(undefined1 (**) [16])pauVar29[-1];
        pauVar26 = pauVar27;
        if (((ulong)pauVar23 & 8) != 0) goto LAB_00108bf1;
        auVar11._4_4_ = fVar63;
        auVar11._0_4_ = fVar63;
        auVar11._8_4_ = fVar63;
        auVar11._12_4_ = fVar63;
        while( true ) {
          pfVar21 = (float *)(pauVar23[6] + (-(uint)(fVar56 < 0.0) & 0x10));
          pfVar30 = (float *)(pauVar23[4] + (-(uint)(fVar54 < 0.0) & 0x10));
          pfVar22 = (float *)((pauVar23 + 2)[3] + uVar16);
          auVar114._4_4_ = (pfVar21[1] - fVar8) * fVar56;
          auVar114._0_4_ = (*pfVar21 - fVar8) * fVar56;
          auVar131._0_4_ = (*pfVar30 - fVar7) * fVar54;
          auVar131._4_4_ = (pfVar30[1] - fVar7) * fVar54;
          auVar131._8_4_ = (pfVar30[2] - fVar7) * fVar54;
          auVar131._12_4_ = (pfVar30[3] - fVar7) * fVar54;
          auVar144._0_4_ = (*pfVar22 - fVar7) * fVar88;
          auVar144._4_4_ = (pfVar22[1] - fVar7) * fVar88;
          auVar144._8_4_ = (pfVar22[2] - fVar7) * fVar88;
          auVar144._12_4_ = (pfVar22[3] - fVar7) * fVar88;
          auVar114._8_4_ = (pfVar21[2] - fVar8) * fVar56;
          auVar114._12_4_ = (pfVar21[3] - fVar8) * fVar56;
          pauVar26 = pauVar23 + (ulong)(fVar47 < 0.0) + 2;
          auVar115 = maxps(auVar114,auVar11);
          auVar99._0_4_ = (*(float *)*pauVar26 - fVar6) * fVar47;
          auVar99._4_4_ = (*(float *)(*pauVar26 + 4) - fVar6) * fVar47;
          auVar99._8_4_ = (*(float *)(*pauVar26 + 8) - fVar6) * fVar47;
          auVar99._12_4_ = (*(float *)(*pauVar26 + 0xc) - fVar6) * fVar47;
          auVar85 = maxps(auVar99,auVar131);
          pfVar21 = (float *)(pauVar23[7] + (-(ulong)(fVar56 < 0.0) & 0xfffffffffffffff0));
          local_1038[0] = maxps(auVar85,auVar115);
          pfVar30 = (float *)(pauVar23[2] + ((ulong)(fVar47 < 0.0) * 0x10 ^ 0x10));
          auVar132._0_4_ = (*pfVar21 - fVar8) * fVar91;
          auVar132._4_4_ = (pfVar21[1] - fVar8) * fVar91;
          auVar132._8_4_ = (pfVar21[2] - fVar8) * fVar91;
          auVar132._12_4_ = (pfVar21[3] - fVar8) * fVar91;
          auVar116._0_4_ = (*pfVar30 - fVar6) * fVar82;
          auVar116._4_4_ = (pfVar30[1] - fVar6) * fVar82;
          auVar116._8_4_ = (pfVar30[2] - fVar6) * fVar82;
          auVar116._12_4_ = (pfVar30[3] - fVar6) * fVar82;
          auVar115 = minps(auVar132,_local_11c8);
          auVar85 = minps(auVar116,auVar144);
          auVar85 = minps(auVar85,auVar115);
          auVar133._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar85._4_4_);
          auVar133._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar85._0_4_);
          auVar133._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar85._8_4_);
          auVar133._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar85._12_4_);
          uVar28 = movmskps((int)pauVar29,auVar133);
          pauVar29 = (undefined1 (*) [16])CONCAT44((int)((ulong)pauVar29 >> 0x20),uVar28);
          if (pauVar29 == (undefined1 (*) [16])0x0) break;
          uVar18 = (ulong)pauVar23 & 0xfffffffffffffff0;
          lVar24 = 0;
          if (pauVar29 != (undefined1 (*) [16])0x0) {
            for (; ((ulong)pauVar29 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
            }
          }
          pauVar23 = *(undefined1 (**) [16])(uVar18 + lVar24 * 8);
          uVar13 = (ulong)(pauVar29[-1] + 0xf) & (ulong)pauVar29;
          pauVar26 = pauVar27;
          if (uVar13 != 0) {
            uVar32 = *(uint *)(local_1038[0] + lVar24 * 4);
            lVar24 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
              }
            }
            pauVar29 = *(undefined1 (**) [16])(uVar18 + lVar24 * 8);
            uVar33 = *(uint *)(local_1038[0] + lVar24 * 4);
            uVar13 = uVar13 & uVar13 - 1;
            if (uVar13 == 0) {
              pauVar26 = pauVar27 + 1;
              if (uVar32 < uVar33) {
                *(undefined1 (**) [16])*pauVar27 = pauVar29;
                *(uint *)(*pauVar27 + 8) = uVar33;
              }
              else {
                *(undefined1 (**) [16])*pauVar27 = pauVar23;
                *(uint *)(*pauVar27 + 8) = uVar32;
                pauVar23 = pauVar29;
              }
            }
            else {
              auVar136._8_4_ = uVar32;
              auVar136._0_8_ = pauVar23;
              auVar136._12_4_ = 0;
              lVar24 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
                }
              }
              uVar4 = *(ulong *)(uVar18 + lVar24 * 8);
              auVar146._8_4_ = uVar33;
              auVar146._0_8_ = pauVar29;
              auVar146._12_4_ = 0;
              uVar34 = *(uint *)(local_1038[0] + lVar24 * 4);
              auVar101._8_4_ = uVar34;
              auVar101._0_8_ = uVar4;
              auVar101._12_4_ = 0;
              auVar118._8_4_ = -(uint)((int)uVar32 < (int)uVar33);
              uVar13 = uVar13 - 1 & uVar13;
              if (uVar13 == 0) {
                auVar118._4_4_ = auVar118._8_4_;
                auVar118._0_4_ = auVar118._8_4_;
                auVar118._12_4_ = auVar118._8_4_;
                pauVar26 = pauVar27 + 2;
                auVar137 = auVar136 & auVar118 | ~auVar118 & auVar146;
                auVar115 = auVar118 & auVar146 | ~auVar118 & auVar136;
                iStack_1290 = auVar137._8_4_;
                auVar147._8_4_ = -(uint)(iStack_1290 < (int)uVar34);
                auVar147._0_8_ = CONCAT44(auVar147._8_4_,auVar147._8_4_);
                auVar147._12_4_ = auVar147._8_4_;
                auVar85 = auVar101 & auVar147 | ~auVar147 & auVar137;
                auStack_12a8._8_4_ = auVar115._8_4_;
                auVar119._8_4_ = -(uint)((int)auStack_12a8._8_4_ < auVar85._8_4_);
                auVar119._4_4_ = auVar119._8_4_;
                auVar119._0_4_ = auVar119._8_4_;
                auVar119._12_4_ = auVar119._8_4_;
                *pauVar27 = auVar85 & auVar119 | ~auVar119 & auVar115;
                pauVar23 = (undefined1 (*) [16])
                           (auVar137._0_8_ & auVar147._0_8_ | ~auVar147._0_8_ & uVar4);
                pauVar27[1] = auVar119 & auVar115 | ~auVar119 & auVar85;
                pauVar29 = (undefined1 (*) [16])0x0;
              }
              else {
                pauVar29 = (undefined1 (*) [16])0x0;
                if (uVar13 != 0) {
                  for (; (uVar13 >> (long)pauVar29 & 1) == 0;
                      pauVar29 = (undefined1 (*) [16])(*pauVar29 + 1)) {
                  }
                }
                uVar5 = *(undefined8 *)(uVar18 + (long)pauVar29 * 8);
                pauVar26 = pauVar27 + 3;
                uVar32 = *(uint *)(local_1038[0] + (long)pauVar29 * 4);
                auVar138._4_4_ = auVar118._8_4_;
                auVar138._0_4_ = auVar118._8_4_;
                auVar138._8_4_ = auVar118._8_4_;
                auVar138._12_4_ = auVar118._8_4_;
                auVar85 = ~auVar138 & auVar146 | auVar136 & auVar138;
                auStack_1278._0_4_ = (undefined4)uVar5;
                auStack_1278._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
                auVar115 = auVar146 & auVar138 | ~auVar138 & auVar136;
                auStack_12a8._0_4_ = (undefined4)uVar4;
                auStack_12a8._4_4_ = (undefined4)(uVar4 >> 0x20);
                uVar37 = -(uint)((int)uVar34 < (int)uVar32);
                uVar33 = auStack_1278._0_4_ & uVar37;
                uVar36 = auStack_1278._4_4_ & uVar37;
                auStack_1278._8_4_ = ~uVar37 & uVar32 | uVar34 & uVar37;
                auStack_1278._4_4_ = ~uVar37 & auStack_1278._4_4_ | auStack_12a8._4_4_ & uVar37;
                auStack_1278._0_4_ = ~uVar37 & auStack_1278._0_4_ | auStack_12a8._0_4_ & uVar37;
                auStack_1278._12_4_ = 0;
                uVar33 = uVar33 | ~uVar37 & auStack_12a8._0_4_;
                uVar36 = uVar36 | ~uVar37 & auStack_12a8._4_4_;
                uVar32 = uVar32 & uVar37 | ~uVar37 & uVar34;
                uStack_1280._0_4_ = auVar115._8_4_;
                uVar34 = -(uint)((int)(uint)uStack_1280 < (int)uVar32);
                uStack_1288._0_4_ = auVar115._0_4_;
                uStack_1288._4_4_ = auVar115._4_4_;
                uStack_1280._4_4_ = auVar115._12_4_;
                auStack_12a8._8_4_ = (uint)uStack_1280 & uVar34 | ~uVar34 & uVar32;
                auStack_12a8._4_4_ = uStack_1288._4_4_ & uVar34 | ~uVar34 & uVar36;
                auStack_12a8._0_4_ = (uint)uStack_1288 & uVar34 | ~uVar34 & uVar33;
                auStack_12a8._12_4_ = uStack_1280._4_4_ & uVar34;
                uStack_1288 = CONCAT44(~uVar34 & uStack_1288._4_4_,~uVar34 & (uint)uStack_1288);
                uStack_1280._0_4_ = ~uVar34 & (uint)uStack_1280;
                uStack_1280._4_4_ = ~uVar34 & uStack_1280._4_4_;
                auVar148._8_4_ = -(uint)(auVar85._8_4_ < (int)auStack_1278._8_4_);
                auVar148._0_8_ = CONCAT44(auVar148._8_4_,auVar148._8_4_);
                auVar148._12_4_ = auVar148._8_4_;
                auVar115 = ~auVar148 & auVar85 | auStack_1278 & auVar148;
                auVar120._8_4_ = -(uint)(auVar115._8_4_ < (int)auStack_12a8._8_4_);
                auVar120._4_4_ = auVar120._8_4_;
                auVar120._0_4_ = auVar120._8_4_;
                auVar120._12_4_ = auVar120._8_4_;
                *(ulong *)*pauVar27 =
                     CONCAT44(uVar34,uVar34) & CONCAT44(uVar36,uVar33) | uStack_1288;
                *(ulong *)(*pauVar27 + 8) = uVar34 & uVar32 | uStack_1280;
                pauVar27[2] = auVar115 & auVar120 | ~auVar120 & auStack_12a8;
                pauVar27[1] = auStack_12a8 & auVar120 | ~auVar120 & auVar115;
                pauVar23 = (undefined1 (*) [16])
                           (auVar85._0_8_ & auVar148._0_8_ | ~auVar148._0_8_ & auStack_1278._0_8_);
              }
            }
          }
          pauVar27 = pauVar26;
          if (((ulong)pauVar23 & 8) != 0) goto LAB_00108bf1;
        }
      }
      pauVar29 = pauVar27;
      if (pauVar27 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_00108baf;
LAB_00108bf1:
  lVar24 = 0;
  pfVar21 = (float *)((ulong)pauVar23 & 0xfffffffffffffff0);
  uVar18 = (ulong)((uint)pauVar23 & 0xf);
  pcVar17 = (code *)(uVar16 + 0x30);
  pfVar30 = pfVar21;
  fStack_1214 = fStack_1218;
  fStack_1210 = fStack_1218;
  fStack_120c = fStack_1218;
  local_119c = fStack_1218;
  if (uVar18 == 8) {
    local_11c8._4_4_ = fStack_1218;
    local_11c8._0_4_ = fStack_1218;
    fStack_11c0 = fStack_1218;
    fStack_11bc = fStack_1218;
  }
  else {
    do {
      fVar142 = *(float *)(param_2 + 0x10);
      fVar71 = *(float *)(param_2 + 0x14);
      fVar73 = *(float *)(param_2 + 0x18);
      fVar58 = *(float *)param_2;
      fVar81 = *(float *)(param_2 + 4);
      fVar74 = *(float *)(param_2 + 8);
      fVar83 = pfVar30[4] - fVar81;
      fVar89 = pfVar30[5] - fVar81;
      fVar92 = pfVar30[6] - fVar81;
      fVar94 = pfVar30[7] - fVar81;
      fVar161 = pfVar30[0x10] - fVar81;
      fVar162 = pfVar30[0x11] - fVar81;
      fVar163 = pfVar30[0x12] - fVar81;
      fVar164 = pfVar30[0x13] - fVar81;
      fVar165 = pfVar30[0x14] - fVar74;
      fVar166 = pfVar30[0x15] - fVar74;
      fVar167 = pfVar30[0x16] - fVar74;
      fVar168 = pfVar30[0x17] - fVar74;
      fVar111 = pfVar30[8] - fVar74;
      fVar121 = pfVar30[9] - fVar74;
      fVar124 = pfVar30[10] - fVar74;
      fVar127 = pfVar30[0xb] - fVar74;
      fVar64 = pfVar30[0x20] - fVar74;
      fVar70 = pfVar30[0x21] - fVar74;
      fVar72 = pfVar30[0x22] - fVar74;
      fVar74 = pfVar30[0x23] - fVar74;
      fVar96 = *pfVar30 - fVar58;
      fVar102 = pfVar30[1] - fVar58;
      fVar105 = pfVar30[2] - fVar58;
      fVar108 = pfVar30[3] - fVar58;
      fVar157 = pfVar30[0xc] - fVar58;
      fVar158 = pfVar30[0xd] - fVar58;
      fVar159 = pfVar30[0xe] - fVar58;
      fVar160 = pfVar30[0xf] - fVar58;
      fVar75 = pfVar30[0x1c] - fVar81;
      fVar79 = pfVar30[0x1d] - fVar81;
      fVar80 = pfVar30[0x1e] - fVar81;
      fVar81 = pfVar30[0x1f] - fVar81;
      fVar177 = fVar83 - fVar161;
      fVar178 = fVar89 - fVar162;
      fVar179 = fVar92 - fVar163;
      fVar180 = fVar94 - fVar164;
      fVar48 = pfVar30[0x18] - fVar58;
      fVar55 = pfVar30[0x19] - fVar58;
      fVar57 = pfVar30[0x1a] - fVar58;
      fVar58 = pfVar30[0x1b] - fVar58;
      fVar169 = fVar64 - fVar111;
      fVar171 = fVar70 - fVar121;
      fVar173 = fVar72 - fVar124;
      fVar175 = fVar74 - fVar127;
      fVar130 = fVar96 - fVar157;
      fVar139 = fVar102 - fVar158;
      fVar140 = fVar105 - fVar159;
      fVar141 = fVar108 - fVar160;
      fVar112 = fVar75 - fVar83;
      fVar122 = fVar79 - fVar89;
      fVar125 = fVar80 - fVar92;
      fVar128 = fVar81 - fVar94;
      fVar152 = fVar48 - fVar96;
      fVar154 = fVar55 - fVar102;
      fVar155 = fVar57 - fVar105;
      fVar156 = fVar58 - fVar108;
      fVar170 = fVar111 - fVar165;
      fVar172 = fVar121 - fVar166;
      fVar174 = fVar124 - fVar167;
      fVar176 = fVar127 - fVar168;
      fVar113 = fVar157 - fVar48;
      fVar123 = fVar158 - fVar55;
      fVar126 = fVar159 - fVar57;
      fVar129 = fVar160 - fVar58;
      fVar97 = fVar165 - fVar64;
      fVar103 = fVar166 - fVar70;
      fVar106 = fVar167 - fVar72;
      fVar109 = fVar168 - fVar74;
      fVar98 = fVar161 - fVar75;
      fVar104 = fVar162 - fVar79;
      fVar107 = fVar163 - fVar80;
      fVar110 = fVar164 - fVar81;
      fVar143 = ((fVar96 + fVar48) * fVar169 - fVar152 * (fVar111 + fVar64)) * fVar71 +
                (fVar152 * (fVar83 + fVar75) - fVar112 * (fVar96 + fVar48)) * fVar73 +
                ((fVar111 + fVar64) * fVar112 - (fVar83 + fVar75) * fVar169) * fVar142;
      fVar149 = ((fVar102 + fVar55) * fVar171 - fVar154 * (fVar121 + fVar70)) * fVar71 +
                (fVar154 * (fVar89 + fVar79) - fVar122 * (fVar102 + fVar55)) * fVar73 +
                ((fVar121 + fVar70) * fVar122 - (fVar89 + fVar79) * fVar171) * fVar142;
      fVar150 = ((fVar105 + fVar57) * fVar173 - fVar155 * (fVar124 + fVar72)) * fVar71 +
                (fVar155 * (fVar92 + fVar80) - fVar125 * (fVar105 + fVar57)) * fVar73 +
                ((fVar124 + fVar72) * fVar125 - (fVar92 + fVar80) * fVar173) * fVar142;
      fVar151 = ((fVar108 + fVar58) * fVar175 - fVar156 * (fVar127 + fVar74)) * fVar71 +
                (fVar156 * (fVar94 + fVar81) - fVar128 * (fVar108 + fVar58)) * fVar73 +
                ((fVar127 + fVar74) * fVar128 - (fVar94 + fVar81) * fVar175) * fVar142;
      fVar84 = ((fVar96 + fVar157) * fVar170 - fVar130 * (fVar111 + fVar165)) * fVar71 +
               (fVar130 * (fVar83 + fVar161) - fVar177 * (fVar96 + fVar157)) * fVar73 +
               ((fVar111 + fVar165) * fVar177 - (fVar83 + fVar161) * fVar170) * fVar142;
      fVar90 = ((fVar102 + fVar158) * fVar172 - fVar139 * (fVar121 + fVar166)) * fVar71 +
               (fVar139 * (fVar89 + fVar162) - fVar178 * (fVar102 + fVar158)) * fVar73 +
               ((fVar121 + fVar166) * fVar178 - (fVar89 + fVar162) * fVar172) * fVar142;
      auVar145._4_4_ = fVar90;
      auVar145._0_4_ = fVar84;
      fVar93 = ((fVar105 + fVar159) * fVar174 - fVar140 * (fVar124 + fVar167)) * fVar71 +
               (fVar140 * (fVar92 + fVar163) - fVar179 * (fVar105 + fVar159)) * fVar73 +
               ((fVar124 + fVar167) * fVar179 - (fVar92 + fVar163) * fVar174) * fVar142;
      fVar95 = ((fVar108 + fVar160) * fVar176 - fVar141 * (fVar127 + fVar168)) * fVar71 +
               (fVar141 * (fVar94 + fVar164) - fVar180 * (fVar108 + fVar160)) * fVar73 +
               ((fVar127 + fVar168) * fVar180 - (fVar94 + fVar164) * fVar176) * fVar142;
      auVar145._8_4_ = fVar93;
      auVar145._12_4_ = fVar95;
      auVar76._8_4_ = fVar150;
      auVar76._0_8_ = CONCAT44(fVar149,fVar143);
      auVar76._12_4_ = fVar151;
      auVar85 = maxps(auVar76,auVar145);
      auVar65._0_4_ =
           ((fVar165 + fVar64) * fVar98 - (fVar75 + fVar161) * fVar97) * fVar142 +
           ((fVar48 + fVar157) * fVar97 - fVar113 * (fVar165 + fVar64)) * fVar71 +
           (fVar113 * (fVar75 + fVar161) - fVar98 * (fVar48 + fVar157)) * fVar73;
      auVar65._4_4_ =
           ((fVar166 + fVar70) * fVar104 - (fVar79 + fVar162) * fVar103) * fVar142 +
           ((fVar55 + fVar158) * fVar103 - fVar123 * (fVar166 + fVar70)) * fVar71 +
           (fVar123 * (fVar79 + fVar162) - fVar104 * (fVar55 + fVar158)) * fVar73;
      auVar65._8_4_ =
           ((fVar167 + fVar72) * fVar107 - (fVar80 + fVar163) * fVar106) * fVar142 +
           ((fVar57 + fVar159) * fVar106 - fVar126 * (fVar167 + fVar72)) * fVar71 +
           (fVar126 * (fVar80 + fVar163) - fVar107 * (fVar57 + fVar159)) * fVar73;
      auVar65._12_4_ =
           ((fVar168 + fVar74) * fVar110 - (fVar81 + fVar164) * fVar109) * fVar142 +
           ((fVar58 + fVar160) * fVar109 - fVar129 * (fVar168 + fVar74)) * fVar71 +
           (fVar129 * (fVar81 + fVar164) - fVar110 * (fVar58 + fVar160)) * fVar73;
      auVar115 = maxps(auVar85,auVar65);
      auVar117._0_4_ = fVar84 + fVar143 + auVar65._0_4_;
      auVar117._4_4_ = fVar90 + fVar149 + auVar65._4_4_;
      auVar117._8_4_ = fVar93 + fVar150 + auVar65._8_4_;
      auVar117._12_4_ = fVar95 + fVar151 + auVar65._12_4_;
      fVar58 = __LC15 * (float)((uint)auVar117._0_4_ & uVar31);
      fVar81 = _UNK_00115404 * (float)((uint)auVar117._4_4_ & uVar35);
      fVar74 = _UNK_00115408 * (float)((uint)auVar117._8_4_ & uVar39);
      fVar48 = _UNK_0011540c * (float)((uint)auVar117._12_4_ & uVar43);
      auVar49._8_4_ = fVar150;
      auVar49._0_8_ = CONCAT44(fVar149,fVar143);
      auVar49._12_4_ = fVar151;
      auVar85 = minps(auVar49,auVar145);
      auVar85 = minps(auVar85,auVar65);
      local_11c8._4_4_ = fStack_1214;
      local_11c8._0_4_ = fStack_1218;
      fStack_11c0 = fStack_1210;
      fStack_11bc = fStack_120c;
      auVar50._0_4_ =
           -(uint)((float)((uint)fVar58 ^ uVar12) <= auVar85._0_4_ || auVar115._0_4_ <= fVar58) &
           _DAT_00116108;
      auVar50._4_4_ =
           -(uint)((float)((uint)fVar81 ^ uVar12) <= auVar85._4_4_ || auVar115._4_4_ <= fVar81) &
           uRam000000000011610c;
      auVar50._8_4_ =
           -(uint)((float)((uint)fVar74 ^ uVar12) <= auVar85._8_4_ || auVar115._8_4_ <= fVar74) &
           uRam0000000000116110;
      auVar50._12_4_ =
           -(uint)((float)((uint)fVar48 ^ uVar12) <= auVar85._12_4_ || auVar115._12_4_ <= fVar48) &
           uRam0000000000116114;
      uVar28 = (undefined4)((ulong)pcVar17 >> 0x20);
      iVar15 = movmskps((int)pcVar17,auVar50);
      pcVar17 = (code *)CONCAT44(uVar28,iVar15);
      if (iVar15 != 0) {
        fVar58 = fVar98 * fVar170;
        fVar74 = fVar104 * fVar172;
        auVar153._4_4_ = fVar74;
        auVar153._0_4_ = fVar58;
        fVar55 = fVar107 * fVar174;
        fVar64 = fVar110 * fVar176;
        auVar153._8_4_ = fVar55;
        auVar153._12_4_ = fVar64;
        uVar32 = -(uint)((float)((uint)(fVar169 * fVar177) & uVar31) <
                        (float)((uint)fVar58 & uVar31));
        uVar36 = -(uint)((float)((uint)(fVar171 * fVar178) & uVar35) <
                        (float)((uint)fVar74 & uVar35));
        uVar40 = -(uint)((float)((uint)(fVar173 * fVar179) & uVar39) <
                        (float)((uint)fVar55 & uVar39));
        uVar44 = -(uint)((float)((uint)(fVar175 * fVar180) & uVar43) <
                        (float)((uint)fVar64 & uVar43));
        uVar33 = -(uint)((float)((uint)(fVar152 * fVar170) & uVar31) <
                        (float)((uint)(fVar97 * fVar130) & uVar31));
        uVar37 = -(uint)((float)((uint)(fVar154 * fVar172) & uVar35) <
                        (float)((uint)(fVar103 * fVar139) & uVar35));
        uVar41 = -(uint)((float)((uint)(fVar155 * fVar174) & uVar39) <
                        (float)((uint)(fVar106 * fVar140) & uVar39));
        uVar45 = -(uint)((float)((uint)(fVar156 * fVar176) & uVar43) <
                        (float)((uint)(fVar109 * fVar141) & uVar43));
        uVar34 = -(uint)((float)((uint)(fVar112 * fVar130) & uVar31) <
                        (float)((uint)(fVar113 * fVar177) & uVar31));
        uVar38 = -(uint)((float)((uint)(fVar122 * fVar139) & uVar35) <
                        (float)((uint)(fVar123 * fVar178) & uVar35));
        uVar42 = -(uint)((float)((uint)(fVar125 * fVar140) & uVar39) <
                        (float)((uint)(fVar126 * fVar179) & uVar39));
        uVar46 = -(uint)((float)((uint)(fVar128 * fVar141) & uVar43) <
                        (float)((uint)(fVar129 * fVar180) & uVar43));
        fVar81 = (float)(uVar34 & (uint)(fVar152 * fVar177 - fVar112 * fVar130) |
                        ~uVar34 & (uint)(fVar98 * fVar130 - fVar113 * fVar177));
        fVar48 = (float)(uVar38 & (uint)(fVar154 * fVar178 - fVar122 * fVar139) |
                        ~uVar38 & (uint)(fVar104 * fVar139 - fVar123 * fVar178));
        fVar57 = (float)(uVar42 & (uint)(fVar155 * fVar179 - fVar125 * fVar140) |
                        ~uVar42 & (uint)(fVar107 * fVar140 - fVar126 * fVar179));
        fVar70 = (float)(uVar46 & (uint)(fVar156 * fVar180 - fVar128 * fVar141) |
                        ~uVar46 & (uint)(fVar110 * fVar141 - fVar129 * fVar180));
        fVar72 = (float)(uVar33 & (uint)(fVar169 * fVar130 - fVar152 * fVar170) |
                        ~uVar33 & (uint)(fVar113 * fVar170 - fVar97 * fVar130));
        fVar75 = (float)(uVar37 & (uint)(fVar171 * fVar139 - fVar154 * fVar172) |
                        ~uVar37 & (uint)(fVar123 * fVar172 - fVar103 * fVar139));
        fVar79 = (float)(uVar41 & (uint)(fVar173 * fVar140 - fVar155 * fVar174) |
                        ~uVar41 & (uint)(fVar126 * fVar174 - fVar106 * fVar140));
        fVar80 = (float)(uVar45 & (uint)(fVar175 * fVar141 - fVar156 * fVar176) |
                        ~uVar45 & (uint)(fVar129 * fVar176 - fVar109 * fVar141));
        auVar134._0_4_ = ~uVar32 & (uint)(fVar97 * fVar177 - fVar58);
        auVar134._4_4_ = ~uVar36 & (uint)(fVar103 * fVar178 - fVar74);
        auVar134._8_4_ = ~uVar40 & (uint)(fVar106 * fVar179 - fVar55);
        auVar134._12_4_ = ~uVar44 & (uint)(fVar109 * fVar180 - fVar64);
        auVar86._0_4_ = uVar32 & (uint)(fVar112 * fVar170 - fVar169 * fVar177);
        auVar86._4_4_ = uVar36 & (uint)(fVar122 * fVar172 - fVar171 * fVar178);
        auVar86._8_4_ = uVar40 & (uint)(fVar125 * fVar174 - fVar173 * fVar179);
        auVar86._12_4_ = uVar44 & (uint)(fVar128 * fVar176 - fVar175 * fVar180);
        auVar86 = auVar86 | auVar134;
        fVar58 = fVar83 * fVar72 + fVar111 * fVar81 + fVar96 * auVar86._0_4_;
        fVar74 = fVar89 * fVar75 + fVar121 * fVar48 + fVar102 * auVar86._4_4_;
        fVar55 = fVar92 * fVar79 + fVar124 * fVar57 + fVar105 * auVar86._8_4_;
        fVar64 = fVar94 * fVar80 + fVar127 * fVar70 + fVar108 * auVar86._12_4_;
        fVar83 = fVar71 * fVar72 + fVar73 * fVar81 + fVar142 * auVar86._0_4_;
        fVar89 = fVar71 * fVar75 + fVar73 * fVar48 + fVar142 * auVar86._4_4_;
        fVar92 = fVar71 * fVar79 + fVar73 * fVar57 + fVar142 * auVar86._8_4_;
        fVar142 = fVar71 * fVar80 + fVar73 * fVar70 + fVar142 * auVar86._12_4_;
        auVar135._0_4_ = fVar83 + fVar83;
        auVar135._4_4_ = fVar89 + fVar89;
        auVar135._8_4_ = fVar92 + fVar92;
        auVar135._12_4_ = fVar142 + fVar142;
        auVar85 = rcpps(auVar153,auVar135);
        fVar142 = auVar85._0_4_;
        fVar71 = auVar85._4_4_;
        fVar73 = auVar85._8_4_;
        fVar83 = auVar85._12_4_;
        auVar100._0_4_ = (fVar58 + fVar58) * ((_LC7 - auVar135._0_4_ * fVar142) * fVar142 + fVar142)
        ;
        auVar100._4_4_ = (fVar74 + fVar74) * ((_LC7 - auVar135._4_4_ * fVar71) * fVar71 + fVar71);
        auVar100._8_4_ = (fVar55 + fVar55) * ((_LC7 - auVar135._8_4_ * fVar73) * fVar73 + fVar73);
        auVar100._12_4_ = (fVar64 + fVar64) * ((_LC7 - auVar135._12_4_ * fVar83) * fVar83 + fVar83);
        fVar142 = *(float *)(param_2 + 0xc);
        auVar51._0_4_ =
             auVar50._0_4_ & -(uint)(fVar142 <= auVar100._0_4_ && auVar100._0_4_ <= fStack_1218) &
             -(uint)(auVar135._0_4_ != 0.0);
        auVar51._4_4_ =
             auVar50._4_4_ & -(uint)(fVar142 <= auVar100._4_4_ && auVar100._4_4_ <= fStack_1214) &
             -(uint)(auVar135._4_4_ != 0.0);
        auVar51._8_4_ =
             auVar50._8_4_ & -(uint)(fVar142 <= auVar100._8_4_ && auVar100._8_4_ <= fStack_1210) &
             -(uint)(auVar135._8_4_ != 0.0);
        auVar51._12_4_ =
             auVar50._12_4_ & -(uint)(fVar142 <= auVar100._12_4_ && auVar100._12_4_ <= fStack_120c)
             & -(uint)(auVar135._12_4_ != 0.0);
        iVar20 = movmskps((int)pfVar21,auVar51);
        pfVar21 = (float *)CONCAT44((int)((ulong)pfVar21 >> 0x20),iVar20);
        if (iVar20 != 0) {
          auStack_fb8 = auVar86;
          auVar85 = rcpps(auVar86,auVar117);
          lVar2 = *(long *)param_3;
          afStack_fa8[0] = fVar72;
          afStack_fa8[1] = fVar75;
          afStack_fa8[2] = fVar79;
          afStack_fa8[3] = fVar80;
          afStack_f98[0] = fVar81;
          afStack_f98[1] = fVar48;
          afStack_f98[2] = fVar57;
          afStack_f98[3] = fVar70;
          auStack_1068 = auVar51;
          fVar142 = auVar85._0_4_;
          fVar71 = auVar85._4_4_;
          fVar73 = auVar85._8_4_;
          fVar58 = auVar85._12_4_;
          auStack_fc8 = auVar100;
          auVar87._4_4_ = _LC18;
          auVar87._0_4_ = _LC18;
          auVar87._8_4_ = _LC18;
          auVar87._12_4_ = _LC18;
          fVar142 = (float)(~-(uint)((float)((uint)auVar117._0_4_ & uVar31) < _LC5) &
                           (uint)((_LC7 - auVar117._0_4_ * fVar142) * fVar142 + fVar142));
          fVar71 = (float)(~-(uint)((float)((uint)auVar117._4_4_ & uVar35) < _UNK_001153d4) &
                          (uint)((_LC7 - auVar117._4_4_ * fVar71) * fVar71 + fVar71));
          fVar73 = (float)(~-(uint)((float)((uint)auVar117._8_4_ & uVar39) < _UNK_001153d8) &
                          (uint)((_LC7 - auVar117._8_4_ * fVar73) * fVar73 + fVar73));
          fVar58 = (float)(~-(uint)((float)((uint)auVar117._12_4_ & uVar43) < _UNK_001153dc) &
                          (uint)((_LC7 - auVar117._12_4_ * fVar58) * fVar58 + fVar58));
          auVar59._0_4_ = fVar143 * fVar142;
          auVar59._4_4_ = fVar149 * fVar71;
          auVar59._8_4_ = fVar150 * fVar73;
          auVar59._12_4_ = fVar151 * fVar58;
          auVar9._4_12_ = _UNK_001153e4;
          auVar9._0_4_ = _LC7;
          auStack_fe8 = minps(auVar59,auVar9);
          auVar60._0_4_ = fVar84 * fVar142;
          auVar60._4_4_ = fVar90 * fVar71;
          auVar60._8_4_ = fVar93 * fVar73;
          auVar60._12_4_ = fVar95 * fVar58;
          auVar10._4_12_ = _UNK_001153e4;
          auVar10._0_4_ = _LC7;
          auStack_fd8 = minps(auVar60,auVar10);
          auVar66._0_4_ = ~auVar51._0_4_ & _LC18;
          auVar66._4_4_ = ~auVar51._4_4_ & _LC18;
          auVar66._8_4_ = ~auVar51._8_4_ & _LC18;
          auVar66._12_4_ = ~auVar51._12_4_ & _LC18;
          auVar61._0_4_ = auVar51._0_4_ & (uint)auVar100._0_4_;
          auVar61._4_4_ = auVar51._4_4_ & (uint)auVar100._4_4_;
          auVar61._8_4_ = auVar51._8_4_ & (uint)auVar100._8_4_;
          auVar61._12_4_ = auVar51._12_4_ & (uint)auVar100._12_4_;
          auVar61 = auVar61 | auVar66;
          auVar67._4_4_ = auVar61._0_4_;
          auVar67._0_4_ = auVar61._4_4_;
          auVar67._8_4_ = auVar61._12_4_;
          auVar67._12_4_ = auVar61._8_4_;
          auVar85 = minps(auVar67,auVar61);
          auVar77._0_8_ = auVar85._8_8_;
          auVar77._8_4_ = auVar85._0_4_;
          auVar77._12_4_ = auVar85._4_4_;
          auVar85 = minps(auVar77,auVar85);
          auVar52._0_4_ = auVar51._0_4_ & -(uint)(auVar61._0_4_ == auVar85._0_4_);
          auVar52._4_4_ = auVar51._4_4_ & -(uint)(auVar61._4_4_ == auVar85._4_4_);
          auVar52._8_4_ = auVar51._8_4_ & -(uint)(auVar61._8_4_ == auVar85._8_4_);
          auVar52._12_4_ = auVar51._12_4_ & -(uint)(auVar61._12_4_ == auVar85._12_4_);
          iVar15 = movmskps(iVar15,auVar52);
          pfVar22 = pfVar21;
          if (iVar15 != 0) {
            pfVar22 = (float *)CONCAT44(uVar28,iVar15);
          }
          pfVar21 = (float *)0x0;
          if (pfVar22 != (float *)0x0) {
            for (; ((ulong)pfVar22 >> (long)pfVar21 & 1) == 0;
                pfVar21 = (float *)((long)pfVar21 + 1)) {
            }
          }
          fVar142 = pfVar30[(long)(pfVar21 + 9)];
          while( true ) {
            pbVar25 = *(byte **)(param_3 + 0x10);
            pRVar14 = *(RayHitK **)(*(long *)(lVar2 + 0x1e0) + (ulong)(uint)fVar142 * 8);
            pcVar19 = *(code **)(pbVar25 + 0x10);
            if ((pcVar19 == (code *)0x0) && (*(long *)(pRVar14 + 0x40) == 0)) break;
            fStack_1040 = fVar142;
            fStack_1044 = pfVar30[(long)(pfVar21 + 10)];
            uStack_109c = 0xffffffff;
            uStack_104c = *(undefined4 *)(auStack_fe8 + (long)pfVar21 * 4);
            puStack_1088 = *(undefined4 **)(param_3 + 8);
            uStack_1048 = *(undefined4 *)(auStack_fd8 + (long)pfVar21 * 4);
            fStack_1050 = afStack_f98[(long)pfVar21];
            fStack_1054 = afStack_fa8[(long)pfVar21];
            uStack_103c = **(undefined4 **)(param_3 + 8);
            fStack_1058 = afStack_fa8[(long)(pfVar21 + -1)];
            *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + (long)pfVar21 * 4);
            puStack_1098 = &uStack_109c;
            uStack_1090 = *(undefined8 *)(pRVar14 + 0x18);
            pfStack_1078 = &fStack_1058;
            pcVar17 = *(code **)(pRVar14 + 0x40);
            pRStack_1080 = param_2;
            uStack_1070 = 1;
            if (pcVar17 == (code *)0x0) {
LAB_00109457:
              if ((pcVar19 != (code *)0x0) &&
                 (((*pbVar25 & 2) != 0 || (((byte)pRVar14[0x3e] & 0x40) != 0)))) {
                (*pcVar19)(&puStack_1098);
                auVar87._4_12_ = _UNK_00115414;
                auVar87._0_4_ = _LC18;
                pRVar14 = (RayHitK *)(ulong)*puStack_1098;
                uVar31 = _LC3;
                uVar35 = _UNK_001153c4;
                uVar39 = _UNK_001153c8;
                uVar43 = _UNK_001153cc;
                if (*puStack_1098 == 0) goto LAB_001095e8;
              }
              *(float *)(pRStack_1080 + 0x30) = *pfStack_1078;
              *(float *)(pRStack_1080 + 0x34) = pfStack_1078[1];
              *(float *)(pRStack_1080 + 0x38) = pfStack_1078[2];
              *(float *)(pRStack_1080 + 0x3c) = pfStack_1078[3];
              *(float *)(pRStack_1080 + 0x40) = pfStack_1078[4];
              *(float *)(pRStack_1080 + 0x44) = pfStack_1078[5];
              pcVar17 = (code *)(ulong)(uint)pfStack_1078[6];
              *(float *)(pRStack_1080 + 0x48) = pfStack_1078[6];
              *(float *)(pRStack_1080 + 0x4c) = pfStack_1078[7];
              fStack_1218 = *(float *)(param_2 + 0x20);
              pRVar14 = pRStack_1080;
              fStack_1214 = fStack_1218;
              fStack_1210 = fStack_1218;
              fStack_120c = fStack_1218;
              local_119c = fStack_1218;
            }
            else {
              (*pcVar17)(&puStack_1098);
              auVar87._4_12_ = _UNK_00115414;
              auVar87._0_4_ = _LC18;
              if (*puStack_1098 != 0) {
                pbVar25 = *(byte **)(param_3 + 0x10);
                pcVar19 = *(code **)(pbVar25 + 0x10);
                uVar31 = _LC3;
                uVar35 = _UNK_001153c4;
                uVar39 = _UNK_001153c8;
                uVar43 = _UNK_001153cc;
                goto LAB_00109457;
              }
LAB_001095e8:
              uVar43 = _UNK_001153cc;
              uVar39 = _UNK_001153c8;
              uVar35 = _UNK_001153c4;
              uVar31 = _LC3;
              *(float *)(param_2 + 0x20) = local_119c;
            }
            local_11c8._4_4_ = fStack_1214;
            local_11c8._0_4_ = fStack_1218;
            fStack_11c0 = fStack_1210;
            fStack_11bc = fStack_120c;
            *(undefined4 *)(auStack_1068 + (long)pfVar21 * 4) = 0;
            auStack_1068._0_4_ = -(uint)(auVar100._0_4_ <= fStack_1218) & auStack_1068._0_4_;
            auStack_1068._4_4_ = -(uint)(auVar100._4_4_ <= fStack_1214) & auStack_1068._4_4_;
            auStack_1068._8_4_ = -(uint)(auVar100._8_4_ <= fStack_1210) & auStack_1068._8_4_;
            auStack_1068._12_4_ = -(uint)(auVar100._12_4_ <= fStack_120c) & auStack_1068._12_4_;
            iVar15 = movmskps((int)pfVar21,auStack_1068);
            pfVar21 = (float *)CONCAT44((int)((ulong)pfVar21 >> 0x20),iVar15);
            if (iVar15 == 0) goto LAB_001092c5;
            auVar68._0_4_ = ~auStack_1068._0_4_ & auVar87._0_4_;
            auVar68._4_4_ = ~auStack_1068._4_4_ & auVar87._4_4_;
            auVar68._8_4_ = ~auStack_1068._8_4_ & auVar87._8_4_;
            auVar68._12_4_ = ~auStack_1068._12_4_ & auVar87._12_4_;
            auVar62._0_4_ = auStack_1068._0_4_ & (uint)auVar100._0_4_;
            auVar62._4_4_ = auStack_1068._4_4_ & (uint)auVar100._4_4_;
            auVar62._8_4_ = auStack_1068._8_4_ & (uint)auVar100._8_4_;
            auVar62._12_4_ = auStack_1068._12_4_ & (uint)auVar100._12_4_;
            auVar62 = auVar62 | auVar68;
            auVar69._4_4_ = auVar62._0_4_;
            auVar69._0_4_ = auVar62._4_4_;
            auVar69._8_4_ = auVar62._12_4_;
            auVar69._12_4_ = auVar62._8_4_;
            auVar85 = minps(auVar69,auVar62);
            auVar78._0_8_ = auVar85._8_8_;
            auVar78._8_4_ = auVar85._0_4_;
            auVar78._12_4_ = auVar85._4_4_;
            auVar85 = minps(auVar78,auVar85);
            auVar53._0_4_ = auStack_1068._0_4_ & -(uint)(auVar62._0_4_ == auVar85._0_4_);
            auVar53._4_4_ = auStack_1068._4_4_ & -(uint)(auVar62._4_4_ == auVar85._4_4_);
            auVar53._8_4_ = auStack_1068._8_4_ & -(uint)(auVar62._8_4_ == auVar85._8_4_);
            auVar53._12_4_ = auStack_1068._12_4_ & -(uint)(auVar62._12_4_ == auVar85._12_4_);
            iVar15 = movmskps((int)pRVar14,auVar53);
            pfVar22 = pfVar21;
            if (iVar15 != 0) {
              pfVar22 = (float *)CONCAT44((int)((ulong)pRVar14 >> 0x20),iVar15);
            }
            pfVar21 = (float *)0x0;
            if (pfVar22 != (float *)0x0) {
              for (; ((ulong)pfVar22 >> (long)pfVar21 & 1) == 0;
                  pfVar21 = (float *)((long)pfVar21 + 1)) {
              }
            }
            fVar142 = pfVar30[(long)(pfVar21 + 9)];
          }
          fStack_1218 = *(float *)(auStack_fc8 + (long)pfVar21 * 4);
          uVar28 = *(undefined4 *)(auStack_fe8 + (long)pfVar21 * 4);
          uVar1 = *(undefined4 *)(auStack_fd8 + (long)pfVar21 * 4);
          *(float *)(param_2 + 0x30) = afStack_fa8[(long)(pfVar21 + -1)];
          fVar71 = afStack_fa8[(long)pfVar21];
          *(float *)(param_2 + 0x20) = fStack_1218;
          *(float *)(param_2 + 0x34) = fVar71;
          fVar71 = afStack_f98[(long)pfVar21];
          *(undefined4 *)(param_2 + 0x3c) = uVar28;
          *(float *)(param_2 + 0x38) = fVar71;
          *(undefined4 *)(param_2 + 0x40) = uVar1;
          fVar71 = pfVar30[(long)(pfVar21 + 10)];
          *(float *)(param_2 + 0x48) = fVar142;
          puVar3 = *(uint **)(param_3 + 8);
          *(float *)(param_2 + 0x44) = fVar71;
          pcVar17 = (code *)(ulong)*puVar3;
          *(uint *)(param_2 + 0x4c) = *puVar3;
          local_11c8._4_4_ = fStack_1218;
          local_11c8._0_4_ = fStack_1218;
          fStack_11c0 = fStack_1218;
          fStack_11bc = fStack_1218;
          fStack_1214 = fStack_1218;
          fStack_1210 = fStack_1218;
          fStack_120c = fStack_1218;
          local_119c = fStack_1218;
        }
      }
LAB_001092c5:
      lVar24 = lVar24 + 1;
      pfVar30 = pfVar30 + 0x2c;
    } while (lVar24 != uVar18 - 8);
  }
  goto LAB_00108a40;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Pluecker<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  float *pfVar23;
  RayHitK *pRVar24;
  int iVar25;
  code *pcVar26;
  ulong uVar28;
  code *pcVar29;
  float *pfVar30;
  ulong uVar31;
  byte *pbVar32;
  undefined4 uVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  int iVar36;
  ulong uVar37;
  long in_FS_OFFSET;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar66;
  float fVar68;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar67;
  float fVar69;
  float fVar70;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar111;
  float fVar117;
  undefined1 auVar105 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar128;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  float fVar169;
  float fVar175;
  float fVar176;
  undefined1 auVar170 [16];
  float fVar177;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  ulong uStack_12a8;
  uint uStack_1298;
  uint uStack_1294;
  uint uStack_1290;
  uint uStack_128c;
  undefined1 auStack_1288 [16];
  undefined1 auStack_1278 [16];
  undefined1 auStack_1238 [8];
  float fStack_1230;
  float fStack_122c;
  undefined1 local_11f8 [8];
  float fStack_11f0;
  float fStack_11ec;
  float local_119c;
  uint uStack_109c;
  uint *puStack_1098;
  undefined8 uStack_1090;
  undefined4 *puStack_1088;
  RayHitK *pRStack_1080;
  float *pfStack_1078;
  undefined4 uStack_1070;
  undefined1 auStack_1068 [16];
  float fStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  float fStack_1048;
  float fStack_1044;
  float fStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  float afStack_fc8 [4];
  undefined1 auStack_fb8 [16];
  float afStack_fa8 [4];
  float afStack_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  code *pcVar27;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_00109db8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fVar54 = *(float *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if (fVar54 < 0.0) {
    fVar54 = 0.0;
  }
  fVar87 = *(float *)(param_2 + 0xc);
  if (*(float *)(param_2 + 0xc) < 0.0) {
    fVar87 = 0.0;
  }
  fVar14 = *(float *)param_2;
  fVar15 = *(float *)(param_2 + 4);
  fVar16 = *(float *)(param_2 + 8);
  local_11f8._4_4_ = fVar54;
  local_11f8._0_4_ = fVar54;
  fStack_11f0 = fVar54;
  fStack_11ec = fVar54;
  pauVar35 = (undefined1 (*) [16])local_f78;
  uVar38 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar42 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001153d4);
  uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001153d8);
  uVar50 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001153dc);
  auVar105._0_4_ = uVar38 & (uint)_LC5;
  auVar105._4_4_ = uVar42 & (uint)_UNK_001153d4;
  auVar105._8_4_ = uVar46 & (uint)_UNK_001153d8;
  auVar105._12_4_ = uVar50 & (uint)_UNK_001153dc;
  auVar170._0_4_ = ~uVar38 & *(uint *)(param_2 + 0x10);
  auVar170._4_4_ = ~uVar42 & *(uint *)(param_2 + 0x14);
  auVar170._8_4_ = ~uVar46 & *(uint *)(param_2 + 0x18);
  auVar170._12_4_ = ~uVar50 & *(uint *)(param_2 + 0x1c);
  auVar173._4_4_ = _LC7;
  auVar173._0_4_ = _LC7;
  auVar173._8_4_ = _LC7;
  auVar173._12_4_ = _LC7;
  auVar105 = divps(auVar173,auVar105 | auVar170);
  fVar54 = _LC12 * auVar105._0_4_;
  fVar66 = _LC12 * auVar105._4_4_;
  fVar68 = _LC12 * auVar105._8_4_;
  fVar99 = auVar105._0_4_ * _LC14;
  fVar111 = auVar105._4_4_ * _LC14;
  fVar117 = auVar105._8_4_ * _LC14;
  uVar21 = (ulong)(fVar54 < 0.0) * 0x10;
  pcVar26 = (code *)((-(ulong)(fVar66 < 0.0) & 0xfffffffffffffff0) + 0x30);
  uVar38 = _LC3;
  uVar42 = _LC3;
  uVar46 = _LC3;
  uVar50 = _LC3;
LAB_00109ba0:
  uVar20 = _LC9;
  pauVar34 = pauVar35;
  if (pauVar35 != (undefined1 (*) [16])local_f88) {
    do {
      local_119c = *(float *)(param_2 + 0x20);
      pauVar35 = pauVar34 + -1;
      if (*(float *)(pauVar34[-1] + 8) <= local_119c) {
        fVar56 = *(float *)(param_2 + 0x1c);
        uVar31 = *(ulong *)pauVar34[-1];
        if ((uVar31 & 8) != 0) goto LAB_00109e66;
        auVar19._4_4_ = fVar87;
        auVar19._0_4_ = fVar87;
        auVar19._8_4_ = fVar87;
        auVar19._12_4_ = fVar87;
        while( true ) {
          uVar28 = uVar31 & 0xfffffffffffffff0;
          lVar1 = uVar28 + 0x20;
          pfVar30 = (float *)(lVar1 + (ulong)(-(uint)(fVar68 < 0.0) & 0x10) + 0x40);
          pfVar23 = (float *)(lVar1 + (ulong)(-(uint)(fVar66 < 0.0) & 0x10) + 0x20);
          pfVar2 = (float *)(lVar1 + uVar21);
          pfVar3 = (float *)(pcVar26 + lVar1);
          auVar57._0_4_ = ((pfVar23[0x18] * fVar56 + *pfVar23) - fVar15) * fVar66;
          auVar57._4_4_ = ((pfVar23[0x19] * fVar56 + pfVar23[1]) - fVar15) * fVar66;
          auVar57._8_4_ = ((pfVar23[0x1a] * fVar56 + pfVar23[2]) - fVar15) * fVar66;
          auVar57._12_4_ = ((pfVar23[0x1b] * fVar56 + pfVar23[3]) - fVar15) * fVar66;
          auVar161._0_4_ = ((pfVar30[0x18] * fVar56 + *pfVar30) - fVar16) * fVar68;
          auVar161._4_4_ = ((pfVar30[0x19] * fVar56 + pfVar30[1]) - fVar16) * fVar68;
          auVar161._8_4_ = ((pfVar30[0x1a] * fVar56 + pfVar30[2]) - fVar16) * fVar68;
          auVar161._12_4_ = ((pfVar30[0x1b] * fVar56 + pfVar30[3]) - fVar16) * fVar68;
          auVar105 = maxps(auVar57,auVar161);
          pfVar30 = (float *)(lVar1 + (uVar21 ^ 0x10));
          pfVar23 = (float *)(lVar1 + (-(ulong)(fVar68 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar162._0_4_ = ((pfVar2[0x18] * fVar56 + *pfVar2) - fVar14) * fVar54;
          auVar162._4_4_ = ((pfVar2[0x19] * fVar56 + pfVar2[1]) - fVar14) * fVar54;
          auVar162._8_4_ = ((pfVar2[0x1a] * fVar56 + pfVar2[2]) - fVar14) * fVar54;
          auVar162._12_4_ = ((pfVar2[0x1b] * fVar56 + pfVar2[3]) - fVar14) * fVar54;
          auVar170 = maxps(auVar19,auVar162);
          local_1038[0] = maxps(auVar170,auVar105);
          auVar163._0_4_ = ((pfVar23[0x18] * fVar56 + *pfVar23) - fVar16) * fVar117;
          auVar163._4_4_ = ((pfVar23[0x19] * fVar56 + pfVar23[1]) - fVar16) * fVar117;
          auVar163._8_4_ = ((pfVar23[0x1a] * fVar56 + pfVar23[2]) - fVar16) * fVar117;
          auVar163._12_4_ = ((pfVar23[0x1b] * fVar56 + pfVar23[3]) - fVar16) * fVar117;
          auVar58._0_4_ = ((pfVar3[0x18] * fVar56 + *pfVar3) - fVar15) * fVar111;
          auVar58._4_4_ = ((pfVar3[0x19] * fVar56 + pfVar3[1]) - fVar15) * fVar111;
          auVar58._8_4_ = ((pfVar3[0x1a] * fVar56 + pfVar3[2]) - fVar15) * fVar111;
          auVar58._12_4_ = ((pfVar3[0x1b] * fVar56 + pfVar3[3]) - fVar15) * fVar111;
          auVar105 = minps(auVar58,auVar163);
          auVar164._0_4_ = ((pfVar30[0x18] * fVar56 + *pfVar30) - fVar14) * fVar99;
          auVar164._4_4_ = ((pfVar30[0x19] * fVar56 + pfVar30[1]) - fVar14) * fVar99;
          auVar164._8_4_ = ((pfVar30[0x1a] * fVar56 + pfVar30[2]) - fVar14) * fVar99;
          auVar164._12_4_ = ((pfVar30[0x1b] * fVar56 + pfVar30[3]) - fVar14) * fVar99;
          auVar170 = minps(_local_11f8,auVar164);
          auVar105 = minps(auVar170,auVar105);
          bVar7 = SUB164(local_1038[0],0) <= auVar105._0_4_;
          bVar8 = SUB164(local_1038[0],4) <= auVar105._4_4_;
          bVar9 = SUB164(local_1038[0],8) <= auVar105._8_4_;
          bVar10 = SUB164(local_1038[0],0xc) <= auVar105._12_4_;
          auVar59._4_4_ = -(uint)bVar8;
          auVar59._0_4_ = -(uint)bVar7;
          auVar59._8_4_ = -(uint)bVar9;
          auVar59._12_4_ = -(uint)bVar10;
          if (((uint)uVar31 & 0xf) == 6) {
            auVar59._0_4_ =
                 -(uint)((*(float *)(uVar28 + 0xe0) <= fVar56 && fVar56 < *(float *)(uVar28 + 0xf0))
                        && bVar7);
            auVar59._4_4_ =
                 -(uint)((*(float *)(uVar28 + 0xe4) <= fVar56 && fVar56 < *(float *)(uVar28 + 0xf4))
                        && bVar8);
            auVar59._8_4_ =
                 -(uint)((*(float *)(uVar28 + 0xe8) <= fVar56 && fVar56 < *(float *)(uVar28 + 0xf8))
                        && bVar9);
            auVar59._12_4_ =
                 -(uint)((*(float *)(uVar28 + 0xec) <= fVar56 && fVar56 < *(float *)(uVar28 + 0xfc))
                        && bVar10);
          }
          uVar33 = movmskps((int)pfVar30,auVar59);
          uVar22 = CONCAT44((int)((ulong)pfVar30 >> 0x20),uVar33);
          if (uVar22 == 0) break;
          lVar1 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar37 = *(ulong *)(uVar28 + lVar1 * 8);
          uVar22 = uVar22 - 1 & uVar22;
          uVar31 = uVar37;
          if (uVar22 != 0) {
            uVar39 = *(uint *)(local_1038[0] + lVar1 * 4);
            lVar1 = 0;
            if (uVar22 != 0) {
              for (; (uVar22 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
              }
            }
            uVar31 = *(ulong *)(uVar28 + lVar1 * 8);
            uVar40 = *(uint *)(local_1038[0] + lVar1 * 4);
            uVar22 = uVar22 & uVar22 - 1;
            if (uVar22 == 0) {
              if (uVar39 < uVar40) {
                *(ulong *)*pauVar35 = uVar31;
                *(uint *)(*pauVar35 + 8) = uVar40;
                uVar31 = uVar37;
                pauVar35 = pauVar35 + 1;
              }
              else {
                *(ulong *)*pauVar35 = uVar37;
                *(uint *)(*pauVar35 + 8) = uVar39;
                pauVar35 = pauVar35 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar22 != 0) {
                for (; (uVar22 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uVar5 = *(ulong *)(uVar28 + lVar1 * 8);
              auVar172._8_4_ = uVar39;
              auVar172._0_8_ = uVar37;
              auVar172._12_4_ = 0;
              uVar41 = *(uint *)(local_1038[0] + lVar1 * 4);
              auVar178._8_4_ = uVar40;
              auVar178._0_8_ = uVar31;
              auVar178._12_4_ = 0;
              auVar65._8_4_ = uVar41;
              auVar65._0_8_ = uVar5;
              auVar65._12_4_ = 0;
              auVar166._8_4_ = -(uint)((int)uVar39 < (int)uVar40);
              uVar22 = uVar22 - 1 & uVar22;
              if (uVar22 == 0) {
                auVar166._4_4_ = auVar166._8_4_;
                auVar166._0_4_ = auVar166._8_4_;
                auVar166._12_4_ = auVar166._8_4_;
                auVar173 = ~auVar166 & auVar178 | auVar172 & auVar166;
                auVar105 = auVar166 & auVar178 | ~auVar166 & auVar172;
                iVar25 = -(uint)(auVar173._8_4_ < (int)uVar41);
                auVar174._0_8_ = CONCAT44(iVar25,iVar25);
                auVar174._8_4_ = iVar25;
                auVar174._12_4_ = iVar25;
                auStack_1288._0_8_ = ~auVar174._0_8_ & uVar5;
                auVar170 = auVar65 & auVar174 | ~auVar174 & auVar173;
                uStack_1290 = auVar105._8_4_;
                auVar179._8_4_ = -(uint)((int)uStack_1290 < auVar170._8_4_);
                auVar179._4_4_ = auVar179._8_4_;
                auVar179._0_4_ = auVar179._8_4_;
                auVar179._12_4_ = auVar179._8_4_;
                *pauVar35 = auVar170 & auVar179 | ~auVar179 & auVar105;
                uStack_12a8 = auVar173._0_8_;
                uVar31 = uStack_12a8 & auVar174._0_8_ | auStack_1288._0_8_;
                pauVar35[1] = auVar105 & auVar179 | ~auVar179 & auVar170;
                pauVar35 = pauVar35 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar22 != 0) {
                  for (; (uVar22 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                uVar6 = *(undefined8 *)(uVar28 + lVar1 * 8);
                auVar167._4_4_ = auVar166._8_4_;
                auVar167._0_4_ = auVar166._8_4_;
                auVar167._8_4_ = auVar166._8_4_;
                auVar167._12_4_ = auVar166._8_4_;
                uVar39 = *(uint *)(local_1038[0] + lVar1 * 4);
                auVar170 = ~auVar167 & auVar178 | auVar172 & auVar167;
                auStack_1278._0_4_ = (undefined4)uVar6;
                auStack_1278._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
                auVar105 = auVar167 & auVar178 | ~auVar167 & auVar172;
                auStack_1288._0_4_ = (undefined4)uVar5;
                auStack_1288._4_4_ = (undefined4)(uVar5 >> 0x20);
                uVar44 = -(uint)((int)uVar41 < (int)uVar39);
                uVar40 = auStack_1278._0_4_ & uVar44;
                uVar43 = auStack_1278._4_4_ & uVar44;
                auStack_1278._8_4_ = ~uVar44 & uVar39 | uVar41 & uVar44;
                auStack_1278._4_4_ = ~uVar44 & auStack_1278._4_4_ | auStack_1288._4_4_ & uVar44;
                auStack_1278._0_4_ = ~uVar44 & auStack_1278._0_4_ | auStack_1288._0_4_ & uVar44;
                auStack_1278._12_4_ = 0;
                uVar40 = uVar40 | ~uVar44 & auStack_1288._0_4_;
                uVar43 = uVar43 | ~uVar44 & auStack_1288._4_4_;
                uVar39 = uVar39 & uVar44 | ~uVar44 & uVar41;
                uStack_1290 = auVar105._8_4_;
                uVar41 = -(uint)((int)uStack_1290 < (int)uVar39);
                uStack_1298 = auVar105._0_4_;
                uStack_1294 = auVar105._4_4_;
                uStack_128c = auVar105._12_4_;
                uVar44 = ~uVar41 & uStack_1290;
                auStack_1288._8_4_ = uStack_1290 & uVar41 | ~uVar41 & uVar39;
                auStack_1288._4_4_ = uStack_1294 & uVar41 | ~uVar41 & uVar43;
                auStack_1288._0_4_ = uStack_1298 & uVar41 | ~uVar41 & uVar40;
                auStack_1288._12_4_ = uStack_128c & uVar41;
                auVar180._8_4_ = -(uint)(auVar170._8_4_ < (int)auStack_1278._8_4_);
                auVar180._0_8_ = CONCAT44(auVar180._8_4_,auVar180._8_4_);
                auVar180._12_4_ = auVar180._8_4_;
                auStack_1238 = (undefined1  [8])(~auVar180._0_8_ & auStack_1278._0_8_);
                auVar105 = auStack_1278 & auVar180 | ~auVar180 & auVar170;
                uStack_1290 = auVar105._8_4_;
                iVar25 = -(uint)((int)uStack_1290 < (int)auStack_1288._8_4_);
                auVar168._4_4_ = iVar25;
                auVar168._0_4_ = iVar25;
                auVar168._8_4_ = iVar25;
                auVar168._12_4_ = iVar25;
                *(ulong *)*pauVar35 =
                     CONCAT44(uVar43,uVar40) & CONCAT44(uVar41,uVar41) |
                     CONCAT44(~uVar41 & uStack_1294,~uVar41 & uStack_1298);
                *(ulong *)(*pauVar35 + 8) =
                     (ulong)(uVar39 & uVar41) | CONCAT44(~uVar41 & uStack_128c,uVar44);
                pauVar35[1] = auStack_1288 & auVar168 | ~auVar168 & auVar105;
                pauVar35[2] = auVar105 & auVar168 | ~auVar168 & auStack_1288;
                uStack_12a8 = auVar170._0_8_;
                uVar31 = uStack_12a8 & auVar180._0_8_ | (ulong)auStack_1238;
                pauVar35 = pauVar35 + 3;
              }
            }
          }
          if ((uVar31 & 8) != 0) goto LAB_00109e66;
        }
      }
      pauVar34 = pauVar35;
      if (pauVar34 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_00109db8;
LAB_00109e66:
  uVar22 = 0;
  pfVar30 = (float *)(uVar31 & 0xfffffffffffffff0);
  uVar28 = (ulong)((uint)uVar31 & 0xf);
  auStack_1238._4_4_ = local_119c;
  auStack_1238._0_4_ = local_119c;
  fStack_1230 = local_119c;
  fStack_122c = local_119c;
  pcVar27 = pcVar26;
  uVar31 = uVar22;
  if (uVar28 != 8) {
LAB_00109eef:
    fVar90 = *(float *)(param_2 + 0x10);
    fVar93 = *(float *)(param_2 + 0x14);
    fVar96 = *(float *)(param_2 + 0x18);
    fVar70 = *(float *)param_2;
    fVar134 = *(float *)(param_2 + 4);
    fVar127 = *(float *)(param_2 + 8);
    fVar100 = (pfVar30[0x2c] * fVar56 + pfVar30[8]) - fVar127;
    fVar112 = (pfVar30[0x2d] * fVar56 + pfVar30[9]) - fVar127;
    fVar118 = (pfVar30[0x2e] * fVar56 + pfVar30[10]) - fVar127;
    fVar123 = (pfVar30[0x2f] * fVar56 + pfVar30[0xb]) - fVar127;
    fVar135 = (pfVar30[0x28] * fVar56 + pfVar30[4]) - fVar134;
    fVar141 = (pfVar30[0x29] * fVar56 + pfVar30[5]) - fVar134;
    fVar145 = (pfVar30[0x2a] * fVar56 + pfVar30[6]) - fVar134;
    fVar149 = (pfVar30[0x2b] * fVar56 + pfVar30[7]) - fVar134;
    fVar157 = (pfVar30[0x24] * fVar56 + *pfVar30) - fVar70;
    fVar158 = (pfVar30[0x25] * fVar56 + pfVar30[1]) - fVar70;
    fVar159 = (pfVar30[0x26] * fVar56 + pfVar30[2]) - fVar70;
    fVar160 = (pfVar30[0x27] * fVar56 + pfVar30[3]) - fVar70;
    fVar101 = (pfVar30[0x38] * fVar56 + pfVar30[0x14]) - fVar127;
    fVar113 = (pfVar30[0x39] * fVar56 + pfVar30[0x15]) - fVar127;
    fVar119 = (pfVar30[0x3a] * fVar56 + pfVar30[0x16]) - fVar127;
    fVar124 = (pfVar30[0x3b] * fVar56 + pfVar30[0x17]) - fVar127;
    fVar102 = (pfVar30[0x34] * fVar56 + pfVar30[0x10]) - fVar134;
    fVar114 = (pfVar30[0x35] * fVar56 + pfVar30[0x11]) - fVar134;
    fVar120 = (pfVar30[0x36] * fVar56 + pfVar30[0x12]) - fVar134;
    fVar125 = (pfVar30[0x37] * fVar56 + pfVar30[0x13]) - fVar134;
    fVar103 = (pfVar30[0x30] * fVar56 + pfVar30[0xc]) - fVar70;
    fVar115 = (pfVar30[0x31] * fVar56 + pfVar30[0xd]) - fVar70;
    fVar121 = (pfVar30[0x32] * fVar56 + pfVar30[0xe]) - fVar70;
    fVar126 = (pfVar30[0x33] * fVar56 + pfVar30[0xf]) - fVar70;
    fVar104 = (pfVar30[0x44] * fVar56 + pfVar30[0x20]) - fVar127;
    fVar116 = (pfVar30[0x45] * fVar56 + pfVar30[0x21]) - fVar127;
    fVar122 = (pfVar30[0x46] * fVar56 + pfVar30[0x22]) - fVar127;
    fVar127 = (pfVar30[0x47] * fVar56 + pfVar30[0x23]) - fVar127;
    fVar153 = fVar101 - fVar104;
    fVar154 = fVar113 - fVar116;
    fVar155 = fVar119 - fVar122;
    fVar156 = fVar124 - fVar127;
    fVar128 = (pfVar30[0x40] * fVar56 + pfVar30[0x1c]) - fVar134;
    fVar132 = (pfVar30[0x41] * fVar56 + pfVar30[0x1d]) - fVar134;
    fVar133 = (pfVar30[0x42] * fVar56 + pfVar30[0x1e]) - fVar134;
    fVar134 = (pfVar30[0x43] * fVar56 + pfVar30[0x1f]) - fVar134;
    fVar55 = (fVar56 * pfVar30[0x3c] + pfVar30[0x18]) - fVar70;
    fVar67 = (fVar56 * pfVar30[0x3d] + pfVar30[0x19]) - fVar70;
    fVar69 = (fVar56 * pfVar30[0x3e] + pfVar30[0x1a]) - fVar70;
    fVar70 = (fVar56 * pfVar30[0x3f] + pfVar30[0x1b]) - fVar70;
    fVar88 = fVar100 - fVar101;
    fVar91 = fVar112 - fVar113;
    fVar94 = fVar118 - fVar119;
    fVar97 = fVar123 - fVar124;
    fVar71 = fVar104 - fVar100;
    fVar78 = fVar116 - fVar112;
    fVar81 = fVar122 - fVar118;
    fVar84 = fVar127 - fVar123;
    fVar181 = fVar128 - fVar135;
    fVar182 = fVar132 - fVar141;
    fVar183 = fVar133 - fVar145;
    fVar184 = fVar134 - fVar149;
    fVar169 = fVar55 - fVar157;
    fVar175 = fVar67 - fVar158;
    fVar176 = fVar69 - fVar159;
    fVar177 = fVar70 - fVar160;
    fVar72 = fVar102 - fVar128;
    fVar79 = fVar114 - fVar132;
    fVar82 = fVar120 - fVar133;
    fVar85 = fVar125 - fVar134;
    fVar136 = fVar157 - fVar103;
    fVar142 = fVar158 - fVar115;
    fVar146 = fVar159 - fVar121;
    fVar150 = fVar160 - fVar126;
    fVar89 = fVar135 - fVar102;
    fVar92 = fVar141 - fVar114;
    fVar95 = fVar145 - fVar120;
    fVar98 = fVar149 - fVar125;
    fVar73 = fVar103 - fVar55;
    fVar80 = fVar115 - fVar67;
    fVar83 = fVar121 - fVar69;
    fVar86 = fVar126 - fVar70;
    fVar137 = ((fVar157 + fVar55) * fVar71 - fVar169 * (fVar100 + fVar104)) * fVar93 +
              (fVar169 * (fVar135 + fVar128) - fVar181 * (fVar157 + fVar55)) * fVar96 +
              ((fVar100 + fVar104) * fVar181 - (fVar135 + fVar128) * fVar71) * fVar90;
    fVar143 = ((fVar158 + fVar67) * fVar78 - fVar175 * (fVar112 + fVar116)) * fVar93 +
              (fVar175 * (fVar141 + fVar132) - fVar182 * (fVar158 + fVar67)) * fVar96 +
              ((fVar112 + fVar116) * fVar182 - (fVar141 + fVar132) * fVar78) * fVar90;
    fVar147 = ((fVar159 + fVar69) * fVar81 - fVar176 * (fVar118 + fVar122)) * fVar93 +
              (fVar176 * (fVar145 + fVar133) - fVar183 * (fVar159 + fVar69)) * fVar96 +
              ((fVar118 + fVar122) * fVar183 - (fVar145 + fVar133) * fVar81) * fVar90;
    fVar151 = ((fVar160 + fVar70) * fVar84 - fVar177 * (fVar123 + fVar127)) * fVar93 +
              (fVar177 * (fVar149 + fVar134) - fVar184 * (fVar160 + fVar70)) * fVar96 +
              ((fVar123 + fVar127) * fVar184 - (fVar149 + fVar134) * fVar84) * fVar90;
    fVar138 = ((fVar157 + fVar103) * fVar88 - fVar136 * (fVar100 + fVar101)) * fVar93 +
              (fVar136 * (fVar135 + fVar102) - fVar89 * (fVar157 + fVar103)) * fVar96 +
              ((fVar100 + fVar101) * fVar89 - (fVar135 + fVar102) * fVar88) * fVar90;
    fVar144 = ((fVar158 + fVar115) * fVar91 - fVar142 * (fVar112 + fVar113)) * fVar93 +
              (fVar142 * (fVar141 + fVar114) - fVar92 * (fVar158 + fVar115)) * fVar96 +
              ((fVar112 + fVar113) * fVar92 - (fVar141 + fVar114) * fVar91) * fVar90;
    auVar171._4_4_ = fVar144;
    auVar171._0_4_ = fVar138;
    fVar148 = ((fVar159 + fVar121) * fVar94 - fVar146 * (fVar118 + fVar119)) * fVar93 +
              (fVar146 * (fVar145 + fVar120) - fVar95 * (fVar159 + fVar121)) * fVar96 +
              ((fVar118 + fVar119) * fVar95 - (fVar145 + fVar120) * fVar94) * fVar90;
    fVar152 = ((fVar160 + fVar126) * fVar97 - fVar150 * (fVar123 + fVar124)) * fVar93 +
              (fVar150 * (fVar149 + fVar125) - fVar98 * (fVar160 + fVar126)) * fVar96 +
              ((fVar123 + fVar124) * fVar98 - (fVar149 + fVar125) * fVar97) * fVar90;
    auVar171._8_4_ = fVar148;
    auVar171._12_4_ = fVar152;
    auVar129._8_4_ = fVar147;
    auVar129._0_8_ = CONCAT44(fVar143,fVar137);
    auVar129._12_4_ = fVar151;
    auVar105 = maxps(auVar129,auVar171);
    auVar106._0_4_ =
         ((fVar101 + fVar104) * fVar72 - (fVar128 + fVar102) * fVar153) * fVar90 +
         ((fVar55 + fVar103) * fVar153 - fVar73 * (fVar101 + fVar104)) * fVar93 +
         (fVar73 * (fVar128 + fVar102) - fVar72 * (fVar55 + fVar103)) * fVar96;
    auVar106._4_4_ =
         ((fVar113 + fVar116) * fVar79 - (fVar132 + fVar114) * fVar154) * fVar90 +
         ((fVar67 + fVar115) * fVar154 - fVar80 * (fVar113 + fVar116)) * fVar93 +
         (fVar80 * (fVar132 + fVar114) - fVar79 * (fVar67 + fVar115)) * fVar96;
    auVar106._8_4_ =
         ((fVar119 + fVar122) * fVar82 - (fVar133 + fVar120) * fVar155) * fVar90 +
         ((fVar69 + fVar121) * fVar155 - fVar83 * (fVar119 + fVar122)) * fVar93 +
         (fVar83 * (fVar133 + fVar120) - fVar82 * (fVar69 + fVar121)) * fVar96;
    auVar106._12_4_ =
         ((fVar124 + fVar127) * fVar85 - (fVar134 + fVar125) * fVar156) * fVar90 +
         ((fVar70 + fVar126) * fVar156 - fVar86 * (fVar124 + fVar127)) * fVar93 +
         (fVar86 * (fVar134 + fVar125) - fVar85 * (fVar70 + fVar126)) * fVar96;
    auVar170 = maxps(auVar105,auVar106);
    fVar55 = fVar137 + fVar138 + auVar106._0_4_;
    fVar67 = fVar143 + fVar144 + auVar106._4_4_;
    fVar69 = fVar147 + fVar148 + auVar106._8_4_;
    fVar101 = fVar151 + fVar152 + auVar106._12_4_;
    fVar56 = __LC15 * (float)((uint)fVar55 & uVar38);
    fVar70 = _UNK_00115404 * (float)((uint)fVar67 & uVar42);
    fVar134 = _UNK_00115408 * (float)((uint)fVar69 & uVar46);
    fVar127 = _UNK_0011540c * (float)((uint)fVar101 & uVar50);
    auVar60._8_4_ = fVar147;
    auVar60._0_8_ = CONCAT44(fVar143,fVar137);
    auVar60._12_4_ = fVar151;
    auVar105 = minps(auVar60,auVar171);
    auVar105 = minps(auVar105,auVar106);
    _local_11f8 = _auStack_1238;
    auVar61._0_4_ =
         -(uint)((float)((uint)fVar56 ^ uVar20) <= auVar105._0_4_ || auVar170._0_4_ <= fVar56) &
         _DAT_00116108;
    auVar61._4_4_ =
         -(uint)((float)((uint)fVar70 ^ uVar20) <= auVar105._4_4_ || auVar170._4_4_ <= fVar70) &
         uRam000000000011610c;
    auVar61._8_4_ =
         -(uint)((float)((uint)fVar134 ^ uVar20) <= auVar105._8_4_ || auVar170._8_4_ <= fVar134) &
         uRam0000000000116110;
    auVar61._12_4_ =
         -(uint)((float)((uint)fVar127 ^ uVar20) <= auVar105._12_4_ || auVar170._12_4_ <= fVar127) &
         uRam0000000000116114;
    uVar33 = (undefined4)((ulong)pcVar27 >> 0x20);
    iVar25 = movmskps((int)pcVar27,auVar61);
    pcVar27 = (code *)CONCAT44(uVar33,iVar25);
    if (iVar25 != 0) {
      fVar56 = fVar71 * fVar89;
      fVar70 = fVar78 * fVar92;
      auVar165._4_4_ = fVar70;
      auVar165._0_4_ = fVar56;
      fVar102 = fVar81 * fVar95;
      fVar104 = fVar84 * fVar98;
      auVar165._8_4_ = fVar102;
      auVar165._12_4_ = fVar104;
      uVar39 = -(uint)((float)((uint)fVar56 & uVar38) < (float)((uint)(fVar88 * fVar72) & uVar38));
      uVar43 = -(uint)((float)((uint)fVar70 & uVar42) < (float)((uint)(fVar91 * fVar79) & uVar42));
      uVar47 = -(uint)((float)((uint)fVar102 & uVar46) < (float)((uint)(fVar94 * fVar82) & uVar46));
      uVar51 = -(uint)((float)((uint)fVar104 & uVar50) < (float)((uint)(fVar97 * fVar85) & uVar50));
      uVar40 = -(uint)((float)((uint)(fVar169 * fVar88) & uVar38) <
                      (float)((uint)(fVar136 * fVar153) & uVar38));
      uVar44 = -(uint)((float)((uint)(fVar175 * fVar91) & uVar42) <
                      (float)((uint)(fVar142 * fVar154) & uVar42));
      uVar48 = -(uint)((float)((uint)(fVar176 * fVar94) & uVar46) <
                      (float)((uint)(fVar146 * fVar155) & uVar46));
      uVar52 = -(uint)((float)((uint)(fVar177 * fVar97) & uVar50) <
                      (float)((uint)(fVar150 * fVar156) & uVar50));
      uVar41 = -(uint)((float)((uint)(fVar181 * fVar136) & uVar38) <
                      (float)((uint)(fVar73 * fVar89) & uVar38));
      uVar45 = -(uint)((float)((uint)(fVar182 * fVar142) & uVar42) <
                      (float)((uint)(fVar80 * fVar92) & uVar42));
      uVar49 = -(uint)((float)((uint)(fVar183 * fVar146) & uVar46) <
                      (float)((uint)(fVar83 * fVar95) & uVar46));
      uVar53 = -(uint)((float)((uint)(fVar184 * fVar150) & uVar50) <
                      (float)((uint)(fVar86 * fVar98) & uVar50));
      fVar134 = (float)(uVar41 & (uint)(fVar169 * fVar89 - fVar181 * fVar136) |
                       ~uVar41 & (uint)(fVar72 * fVar136 - fVar73 * fVar89));
      fVar127 = (float)(uVar45 & (uint)(fVar175 * fVar92 - fVar182 * fVar142) |
                       ~uVar45 & (uint)(fVar79 * fVar142 - fVar80 * fVar92));
      fVar103 = (float)(uVar49 & (uint)(fVar176 * fVar95 - fVar183 * fVar146) |
                       ~uVar49 & (uint)(fVar82 * fVar146 - fVar83 * fVar95));
      fVar113 = (float)(uVar53 & (uint)(fVar177 * fVar98 - fVar184 * fVar150) |
                       ~uVar53 & (uint)(fVar85 * fVar150 - fVar86 * fVar98));
      fVar71 = (float)(uVar40 & (uint)(fVar71 * fVar136 - fVar169 * fVar88) |
                      ~uVar40 & (uint)(fVar73 * fVar88 - fVar136 * fVar153));
      fVar73 = (float)(uVar44 & (uint)(fVar78 * fVar142 - fVar175 * fVar91) |
                      ~uVar44 & (uint)(fVar80 * fVar91 - fVar142 * fVar154));
      fVar78 = (float)(uVar48 & (uint)(fVar81 * fVar146 - fVar176 * fVar94) |
                      ~uVar48 & (uint)(fVar83 * fVar94 - fVar146 * fVar155));
      fVar80 = (float)(uVar52 & (uint)(fVar84 * fVar150 - fVar177 * fVar97) |
                      ~uVar52 & (uint)(fVar86 * fVar97 - fVar150 * fVar156));
      auVar139._0_4_ = uVar39 & (uint)(fVar181 * fVar88 - fVar56);
      auVar139._4_4_ = uVar43 & (uint)(fVar182 * fVar91 - fVar70);
      auVar139._8_4_ = uVar47 & (uint)(fVar183 * fVar94 - fVar102);
      auVar139._12_4_ = uVar51 & (uint)(fVar184 * fVar97 - fVar104);
      auVar11._4_4_ = ~uVar43 & (uint)(fVar92 * fVar154 - fVar91 * fVar79);
      auVar11._0_4_ = ~uVar39 & (uint)(fVar89 * fVar153 - fVar88 * fVar72);
      auVar11._8_4_ = ~uVar47 & (uint)(fVar95 * fVar155 - fVar94 * fVar82);
      auVar11._12_4_ = ~uVar51 & (uint)(fVar98 * fVar156 - fVar97 * fVar85);
      auVar139 = auVar139 | auVar11;
      fVar72 = fVar93 * fVar71 + fVar96 * fVar134 + fVar90 * auVar139._0_4_;
      fVar79 = fVar93 * fVar73 + fVar96 * fVar127 + fVar90 * auVar139._4_4_;
      fVar81 = fVar93 * fVar78 + fVar96 * fVar103 + fVar90 * auVar139._8_4_;
      fVar82 = fVar93 * fVar80 + fVar96 * fVar113 + fVar90 * auVar139._12_4_;
      fVar72 = fVar72 + fVar72;
      fVar79 = fVar79 + fVar79;
      fVar81 = fVar81 + fVar81;
      fVar82 = fVar82 + fVar82;
      auVar12._4_4_ = fVar79;
      auVar12._0_4_ = fVar72;
      auVar12._8_4_ = fVar81;
      auVar12._12_4_ = fVar82;
      auVar105 = rcpps(auVar165,auVar12);
      fVar90 = auVar105._0_4_;
      fVar83 = auVar105._4_4_;
      fVar84 = auVar105._8_4_;
      fVar85 = auVar105._12_4_;
      fVar56 = fVar135 * fVar71 + fVar100 * fVar134 + fVar157 * auVar139._0_4_;
      fVar93 = fVar141 * fVar73 + fVar112 * fVar127 + fVar158 * auVar139._4_4_;
      fVar96 = fVar145 * fVar78 + fVar118 * fVar103 + fVar159 * auVar139._8_4_;
      fVar70 = fVar149 * fVar80 + fVar123 * fVar113 + fVar160 * auVar139._12_4_;
      fVar90 = (fVar56 + fVar56) * ((_LC7 - fVar72 * fVar90) * fVar90 + fVar90);
      fVar93 = (fVar93 + fVar93) * ((_LC7 - fVar79 * fVar83) * fVar83 + fVar83);
      fVar96 = (fVar96 + fVar96) * ((_LC7 - fVar81 * fVar84) * fVar84 + fVar84);
      fVar70 = (fVar70 + fVar70) * ((_LC7 - fVar82 * fVar85) * fVar85 + fVar85);
      fVar56 = *(float *)(param_2 + 0xc);
      auVar62._0_4_ =
           auVar61._0_4_ & -(uint)(fVar56 <= fVar90 && fVar90 <= (float)auStack_1238._0_4_) &
           -(uint)(fVar72 != 0.0);
      auVar62._4_4_ =
           auVar61._4_4_ & -(uint)(fVar56 <= fVar93 && fVar93 <= (float)auStack_1238._4_4_) &
           -(uint)(fVar79 != 0.0);
      auVar62._8_4_ =
           auVar61._8_4_ & -(uint)(fVar56 <= fVar96 && fVar96 <= fStack_1230) &
           -(uint)(fVar81 != 0.0);
      auVar62._12_4_ =
           auVar61._12_4_ & -(uint)(fVar56 <= fVar70 && fVar70 <= fStack_122c) &
           -(uint)(fVar82 != 0.0);
      iVar36 = movmskps((int)uVar31,auVar62);
      uVar31 = CONCAT44((int)(uVar31 >> 0x20),iVar36);
      if (iVar36 != 0) {
        auStack_fb8 = auVar139;
        auVar13._4_4_ = fVar67;
        auVar13._0_4_ = fVar55;
        auVar13._8_4_ = fVar69;
        auVar13._12_4_ = fVar101;
        auVar105 = rcpps(auVar139,auVar13);
        lVar1 = *(long *)param_3;
        afStack_fa8[0] = fVar71;
        afStack_fa8[1] = fVar73;
        afStack_fa8[2] = fVar78;
        afStack_fa8[3] = fVar80;
        afStack_f98[0] = fVar134;
        afStack_f98[1] = fVar127;
        afStack_f98[2] = fVar103;
        afStack_f98[3] = fVar113;
        auStack_1068 = auVar62;
        fVar56 = auVar105._0_4_;
        fVar134 = auVar105._4_4_;
        fVar127 = auVar105._8_4_;
        fVar71 = auVar105._12_4_;
        afStack_fc8[0] = fVar90;
        afStack_fc8[1] = fVar93;
        afStack_fc8[2] = fVar96;
        afStack_fc8[3] = fVar70;
        auVar140._4_4_ = _LC18;
        auVar140._0_4_ = _LC18;
        auVar140._8_4_ = _LC18;
        auVar140._12_4_ = _LC18;
        fVar56 = (float)(~-(uint)((float)((uint)fVar55 & uVar38) < _LC5) &
                        (uint)((_LC7 - fVar55 * fVar56) * fVar56 + fVar56));
        fVar134 = (float)(~-(uint)((float)((uint)fVar67 & uVar42) < _UNK_001153d4) &
                         (uint)((_LC7 - fVar67 * fVar134) * fVar134 + fVar134));
        fVar127 = (float)(~-(uint)((float)((uint)fVar69 & uVar46) < _UNK_001153d8) &
                         (uint)((_LC7 - fVar69 * fVar127) * fVar127 + fVar127));
        fVar55 = (float)(~-(uint)((float)((uint)fVar101 & uVar50) < _UNK_001153dc) &
                        (uint)((_LC7 - fVar101 * fVar71) * fVar71 + fVar71));
        auVar74._0_4_ = fVar137 * fVar56;
        auVar74._4_4_ = fVar143 * fVar134;
        auVar74._8_4_ = fVar147 * fVar127;
        auVar74._12_4_ = fVar151 * fVar55;
        auVar17._4_12_ = _UNK_001153e4;
        auVar17._0_4_ = _LC7;
        auStack_fe8 = minps(auVar74,auVar17);
        auVar75._0_4_ = fVar138 * fVar56;
        auVar75._4_4_ = fVar144 * fVar134;
        auVar75._8_4_ = fVar148 * fVar127;
        auVar75._12_4_ = fVar152 * fVar55;
        auVar18._4_12_ = _UNK_001153e4;
        auVar18._0_4_ = _LC7;
        auStack_fd8 = minps(auVar75,auVar18);
        auVar107._0_4_ = ~auVar62._0_4_ & _LC18;
        auVar107._4_4_ = ~auVar62._4_4_ & _LC18;
        auVar107._8_4_ = ~auVar62._8_4_ & _LC18;
        auVar107._12_4_ = ~auVar62._12_4_ & _LC18;
        auVar76._0_4_ = auVar62._0_4_ & (uint)fVar90;
        auVar76._4_4_ = auVar62._4_4_ & (uint)fVar93;
        auVar76._8_4_ = auVar62._8_4_ & (uint)fVar96;
        auVar76._12_4_ = auVar62._12_4_ & (uint)fVar70;
        auVar76 = auVar76 | auVar107;
        auVar108._4_4_ = auVar76._0_4_;
        auVar108._0_4_ = auVar76._4_4_;
        auVar108._8_4_ = auVar76._12_4_;
        auVar108._12_4_ = auVar76._8_4_;
        auVar105 = minps(auVar108,auVar76);
        auVar130._0_8_ = auVar105._8_8_;
        auVar130._8_4_ = auVar105._0_4_;
        auVar130._12_4_ = auVar105._4_4_;
        auVar105 = minps(auVar130,auVar105);
        auVar63._0_4_ = auVar62._0_4_ & -(uint)(auVar76._0_4_ == auVar105._0_4_);
        auVar63._4_4_ = auVar62._4_4_ & -(uint)(auVar76._4_4_ == auVar105._4_4_);
        auVar63._8_4_ = auVar62._8_4_ & -(uint)(auVar76._8_4_ == auVar105._8_4_);
        auVar63._12_4_ = auVar62._12_4_ & -(uint)(auVar76._12_4_ == auVar105._12_4_);
        iVar25 = movmskps(iVar25,auVar63);
        uVar37 = uVar31;
        if (iVar25 != 0) {
          uVar37 = CONCAT44(uVar33,iVar25);
        }
        uVar31 = 0;
        if (uVar37 != 0) {
          for (; (uVar37 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
          }
        }
        fVar56 = pfVar30[uVar31 + 0x48];
        do {
          pbVar32 = *(byte **)(param_3 + 0x10);
          pRVar24 = *(RayHitK **)(*(long *)(lVar1 + 0x1e0) + (ulong)(uint)fVar56 * 8);
          pcVar29 = *(code **)(pbVar32 + 0x10);
          if ((pcVar29 == (code *)0x0) && (*(long *)(pRVar24 + 0x40) == 0)) {
            local_119c = afStack_fc8[uVar31];
            uVar33 = *(undefined4 *)(auStack_fe8 + uVar31 * 4);
            fVar90 = afStack_fc8[uVar31 - 4];
            *(float *)(param_2 + 0x30) = afStack_fa8[uVar31 - 4];
            fVar93 = afStack_fa8[uVar31];
            *(float *)(param_2 + 0x20) = local_119c;
            *(float *)(param_2 + 0x34) = fVar93;
            fVar93 = afStack_f98[uVar31];
            *(undefined4 *)(param_2 + 0x3c) = uVar33;
            *(float *)(param_2 + 0x38) = fVar93;
            *(float *)(param_2 + 0x40) = fVar90;
            fVar90 = pfVar30[uVar31 + 0x4c];
            *(float *)(param_2 + 0x48) = fVar56;
            puVar4 = *(uint **)(param_3 + 8);
            *(float *)(param_2 + 0x44) = fVar90;
            pcVar27 = (code *)(ulong)*puVar4;
            auStack_1238._4_4_ = local_119c;
            auStack_1238._0_4_ = local_119c;
            fStack_1230 = local_119c;
            fStack_122c = local_119c;
            *(uint *)(param_2 + 0x4c) = *puVar4;
            local_11f8._4_4_ = local_119c;
            local_11f8._0_4_ = local_119c;
            fStack_11f0 = local_119c;
            fStack_11ec = local_119c;
            break;
          }
          fStack_1040 = fVar56;
          fStack_1044 = pfVar30[uVar31 + 0x4c];
          uStack_109c = 0xffffffff;
          uStack_104c = *(undefined4 *)(auStack_fe8 + uVar31 * 4);
          puStack_1088 = *(undefined4 **)(param_3 + 8);
          fStack_1048 = afStack_fc8[uVar31 - 4];
          fStack_1050 = afStack_f98[uVar31];
          uStack_103c = **(undefined4 **)(param_3 + 8);
          fStack_1054 = afStack_fa8[uVar31];
          *(float *)(param_2 + 0x20) = afStack_fc8[uVar31];
          puStack_1098 = &uStack_109c;
          uStack_1090 = *(undefined8 *)(pRVar24 + 0x18);
          pfStack_1078 = &fStack_1058;
          pcVar27 = *(code **)(pRVar24 + 0x40);
          pRStack_1080 = param_2;
          uStack_1070 = 1;
          fStack_1058 = afStack_fa8[uVar31 - 4];
          if (pcVar27 == (code *)0x0) {
LAB_0010a71e:
            if ((pcVar29 != (code *)0x0) &&
               (((*pbVar32 & 2) != 0 || (((byte)pRVar24[0x3e] & 0x40) != 0)))) {
              (*pcVar29)(&puStack_1098);
              auVar140._4_12_ = _UNK_00115414;
              auVar140._0_4_ = _LC18;
              pRVar24 = (RayHitK *)(ulong)*puStack_1098;
              uVar38 = _LC3;
              uVar42 = _UNK_001153c4;
              uVar46 = _UNK_001153c8;
              uVar50 = _UNK_001153cc;
              if (*puStack_1098 == 0) goto LAB_0010a858;
            }
            *(float *)(pRStack_1080 + 0x30) = *pfStack_1078;
            *(float *)(pRStack_1080 + 0x34) = pfStack_1078[1];
            *(float *)(pRStack_1080 + 0x38) = pfStack_1078[2];
            *(float *)(pRStack_1080 + 0x3c) = pfStack_1078[3];
            *(float *)(pRStack_1080 + 0x40) = pfStack_1078[4];
            *(float *)(pRStack_1080 + 0x44) = pfStack_1078[5];
            pcVar27 = (code *)(ulong)(uint)pfStack_1078[6];
            *(float *)(pRStack_1080 + 0x48) = pfStack_1078[6];
            *(float *)(pRStack_1080 + 0x4c) = pfStack_1078[7];
            local_119c = *(float *)(param_2 + 0x20);
            auStack_1238._4_4_ = local_119c;
            auStack_1238._0_4_ = local_119c;
            fStack_1230 = local_119c;
            fStack_122c = local_119c;
            pRVar24 = pRStack_1080;
          }
          else {
            (*pcVar27)(&puStack_1098);
            auVar140._4_12_ = _UNK_00115414;
            auVar140._0_4_ = _LC18;
            if (*puStack_1098 != 0) {
              pbVar32 = *(byte **)(param_3 + 0x10);
              pcVar29 = *(code **)(pbVar32 + 0x10);
              uVar38 = _LC3;
              uVar42 = _UNK_001153c4;
              uVar46 = _UNK_001153c8;
              uVar50 = _UNK_001153cc;
              goto LAB_0010a71e;
            }
LAB_0010a858:
            uVar50 = _UNK_001153cc;
            uVar46 = _UNK_001153c8;
            uVar42 = _UNK_001153c4;
            uVar38 = _LC3;
            *(float *)(param_2 + 0x20) = local_119c;
          }
          *(undefined4 *)(auStack_1068 + uVar31 * 4) = 0;
          auStack_1068._0_4_ = -(uint)(fVar90 <= (float)auStack_1238._0_4_) & auStack_1068._0_4_;
          auStack_1068._4_4_ = -(uint)(fVar93 <= (float)auStack_1238._4_4_) & auStack_1068._4_4_;
          auStack_1068._8_4_ = -(uint)(fVar96 <= fStack_1230) & auStack_1068._8_4_;
          auStack_1068._12_4_ = -(uint)(fVar70 <= fStack_122c) & auStack_1068._12_4_;
          iVar25 = movmskps((int)uVar31,auStack_1068);
          uVar31 = CONCAT44((int)(uVar31 >> 0x20),iVar25);
          if (iVar25 == 0) goto LAB_0010a890;
          auVar109._0_4_ = ~auStack_1068._0_4_ & auVar140._0_4_;
          auVar109._4_4_ = ~auStack_1068._4_4_ & auVar140._4_4_;
          auVar109._8_4_ = ~auStack_1068._8_4_ & auVar140._8_4_;
          auVar109._12_4_ = ~auStack_1068._12_4_ & auVar140._12_4_;
          auVar77._0_4_ = auStack_1068._0_4_ & (uint)fVar90;
          auVar77._4_4_ = auStack_1068._4_4_ & (uint)fVar93;
          auVar77._8_4_ = auStack_1068._8_4_ & (uint)fVar96;
          auVar77._12_4_ = auStack_1068._12_4_ & (uint)fVar70;
          auVar77 = auVar77 | auVar109;
          auVar110._4_4_ = auVar77._0_4_;
          auVar110._0_4_ = auVar77._4_4_;
          auVar110._8_4_ = auVar77._12_4_;
          auVar110._12_4_ = auVar77._8_4_;
          auVar105 = minps(auVar110,auVar77);
          auVar131._0_8_ = auVar105._8_8_;
          auVar131._8_4_ = auVar105._0_4_;
          auVar131._12_4_ = auVar105._4_4_;
          auVar105 = minps(auVar131,auVar105);
          auVar64._0_4_ = auStack_1068._0_4_ & -(uint)(auVar77._0_4_ == auVar105._0_4_);
          auVar64._4_4_ = auStack_1068._4_4_ & -(uint)(auVar77._4_4_ == auVar105._4_4_);
          auVar64._8_4_ = auStack_1068._8_4_ & -(uint)(auVar77._8_4_ == auVar105._8_4_);
          auVar64._12_4_ = auStack_1068._12_4_ & -(uint)(auVar77._12_4_ == auVar105._12_4_);
          iVar25 = movmskps((int)pRVar24,auVar64);
          uVar37 = uVar31;
          if (iVar25 != 0) {
            uVar37 = CONCAT44((int)((ulong)pRVar24 >> 0x20),iVar25);
          }
          uVar31 = 0;
          if (uVar37 != 0) {
            for (; (uVar37 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
            }
          }
          fVar56 = pfVar30[uVar31 + 0x48];
        } while( true );
      }
    }
    goto LAB_0010a585;
  }
  local_11f8._4_4_ = local_119c;
  local_11f8._0_4_ = local_119c;
  fStack_11f0 = local_119c;
  fStack_11ec = local_119c;
  goto LAB_00109ba0;
LAB_0010a890:
  _local_11f8 = _auStack_1238;
LAB_0010a585:
  uVar22 = uVar22 + 1;
  pfVar30 = pfVar30 + 0x50;
  if (uVar22 == uVar28 - 8) goto LAB_00109ba0;
  fVar56 = *(float *)(param_2 + 0x1c);
  goto LAB_00109eef;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  byte *pbVar27;
  code *pcVar28;
  ulong *puVar29;
  long in_FS_OFFSET;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  float fVar52;
  float fVar57;
  float fVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar56 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar68 [16];
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar74 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined8 local_a38;
  undefined8 local_a28;
  undefined8 local_a18;
  int iStack_91c;
  int *piStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  RayK *pRStack_900;
  undefined4 *puStack_8f8;
  undefined4 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  undefined4 uStack_8b4;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  float local_848 [4];
  float local_838 [4];
  float local_828 [4];
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar42 = *(float *)(param_2 + 0x20), 0.0 <= fVar42)) {
    fVar35 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar35 < 0.0) {
      fVar35 = 0.0;
    }
    fVar14 = *(float *)param_2;
    fVar15 = *(float *)(param_2 + 4);
    fVar16 = *(float *)(param_2 + 8);
    auVar67._4_4_ = fVar42;
    auVar67._0_4_ = fVar42;
    auVar67._8_4_ = fVar42;
    auVar67._12_4_ = fVar42;
    puVar29 = local_7e0;
    uVar30 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar53._0_4_ = ~uVar30 & *(uint *)(param_2 + 0x10);
    auVar53._4_4_ = ~uVar31 & *(uint *)(param_2 + 0x14);
    auVar53._8_4_ = ~uVar32 & *(uint *)(param_2 + 0x18);
    auVar53._12_4_ = ~uVar33 & *(uint *)(param_2 + 0x1c);
    auVar36._0_4_ = uVar30 & (uint)_LC5;
    auVar36._4_4_ = uVar31 & (uint)_LC5;
    auVar36._8_4_ = uVar32 & (uint)_LC5;
    auVar36._12_4_ = uVar33 & (uint)_LC5;
    auVar36 = auVar36 | auVar53;
    auVar53 = rcpps(auVar53,auVar36);
    fVar42 = auVar53._0_4_;
    fVar46 = auVar53._4_4_;
    fVar49 = auVar53._8_4_;
    fVar42 = (_LC7 - auVar36._0_4_ * fVar42) * fVar42 + fVar42;
    fVar46 = (_LC7 - auVar36._4_4_ * fVar46) * fVar46 + fVar46;
    fVar49 = (_LC7 - auVar36._8_4_ * fVar49) * fVar49 + fVar49;
    uVar18 = (ulong)(fVar42 < 0.0) * 0x10;
    puVar19 = (ulong *)((ulong)(-(uint)(fVar46 < 0.0) & 0x10) + 0x20);
    puVar20 = puVar19;
    do {
      uVar30 = _LC9;
      uVar21 = puVar29[-1];
      puVar29 = puVar29 + -1;
      while ((uVar21 & 8) == 0) {
        pfVar5 = (float *)(uVar21 + (ulong)(-(uint)(fVar49 < 0.0) & 0x10) + 0x60);
        pfVar6 = (float *)(uVar21 + 0x20 + uVar18);
        pfVar7 = (float *)(uVar21 + 0x20 + (long)puVar19);
        pfVar8 = (float *)(uVar21 + (-(ulong)(fVar46 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar61._0_4_ = (*pfVar5 - fVar16) * fVar49;
        auVar61._4_4_ = (pfVar5[1] - fVar16) * fVar49;
        auVar61._8_4_ = (pfVar5[2] - fVar16) * fVar49;
        auVar61._12_4_ = (pfVar5[3] - fVar16) * fVar49;
        auVar86._0_4_ = (*pfVar7 - fVar15) * fVar46;
        auVar86._4_4_ = (pfVar7[1] - fVar15) * fVar46;
        auVar86._8_4_ = (pfVar7[2] - fVar15) * fVar46;
        auVar86._12_4_ = (pfVar7[3] - fVar15) * fVar46;
        auVar54._0_4_ = (*pfVar6 - fVar14) * fVar42;
        auVar54._4_4_ = (pfVar6[1] - fVar14) * fVar42;
        auVar54._8_4_ = (pfVar6[2] - fVar14) * fVar42;
        auVar54._12_4_ = (pfVar6[3] - fVar14) * fVar42;
        auVar88._4_4_ = fVar35;
        auVar88._0_4_ = fVar35;
        auVar88._8_4_ = fVar35;
        auVar88._12_4_ = fVar35;
        auVar53 = maxps(auVar61,auVar88);
        auVar36 = maxps(auVar54,auVar86);
        pfVar5 = (float *)(uVar21 + (-(ulong)(fVar49 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar36 = maxps(auVar36,auVar53);
        pfVar6 = (float *)(uVar21 + 0x20 + (uVar18 ^ 0x10));
        auVar87._0_4_ = (*pfVar5 - fVar16) * fVar49;
        auVar87._4_4_ = (pfVar5[1] - fVar16) * fVar49;
        auVar87._8_4_ = (pfVar5[2] - fVar16) * fVar49;
        auVar87._12_4_ = (pfVar5[3] - fVar16) * fVar49;
        auVar62._0_4_ = (*pfVar6 - fVar14) * fVar42;
        auVar62._4_4_ = (pfVar6[1] - fVar14) * fVar42;
        auVar62._8_4_ = (pfVar6[2] - fVar14) * fVar42;
        auVar62._12_4_ = (pfVar6[3] - fVar14) * fVar42;
        auVar88 = minps(auVar87,auVar67);
        auVar13._4_4_ = (pfVar8[1] - fVar15) * fVar46;
        auVar13._0_4_ = (*pfVar8 - fVar15) * fVar46;
        auVar13._8_4_ = (pfVar8[2] - fVar15) * fVar46;
        auVar13._12_4_ = (pfVar8[3] - fVar15) * fVar46;
        auVar53 = minps(auVar62,auVar13);
        auVar53 = minps(auVar53,auVar88);
        auVar55._4_4_ = -(uint)(auVar36._4_4_ <= auVar53._4_4_);
        auVar55._0_4_ = -(uint)(auVar36._0_4_ <= auVar53._0_4_);
        auVar55._8_4_ = -(uint)(auVar36._8_4_ <= auVar53._8_4_);
        auVar55._12_4_ = -(uint)(auVar36._12_4_ <= auVar53._12_4_);
        uVar17 = movmskps((int)puVar20,auVar55);
        puVar20 = (ulong *)CONCAT44((int)((ulong)puVar20 >> 0x20),uVar17);
        if (puVar20 == (ulong *)0x0) goto LAB_0010aeea;
        uVar26 = uVar21 & 0xfffffffffffffff0;
        lVar24 = 0;
        if (puVar20 != (ulong *)0x0) {
          for (; ((ulong)puVar20 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
          }
        }
        uVar21 = *(ulong *)(uVar26 + lVar24 * 8);
        uVar22 = (long)puVar20 - 1U & (ulong)puVar20;
        if (uVar22 != 0) {
          *puVar29 = uVar21;
          puVar20 = (ulong *)(uVar22 - 1);
          lVar24 = 0;
          if (uVar22 != 0) {
            for (; (uVar22 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
            }
          }
          while( true ) {
            puVar29 = puVar29 + 1;
            uVar21 = *(ulong *)(uVar26 + lVar24 * 8);
            puVar20 = (ulong *)((ulong)puVar20 & uVar22);
            if (puVar20 == (ulong *)0x0) break;
            *puVar29 = uVar21;
            uVar22 = (long)puVar20 - 1;
            lVar24 = 0;
            if (puVar20 != (ulong *)0x0) {
              for (; ((ulong)puVar20 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
              }
            }
          }
        }
      }
      lVar24 = 0;
      puVar23 = (uint *)(uVar21 & 0xfffffffffffffff0);
      uVar21 = (ulong)((uint)uVar21 & 0xf);
      if (uVar21 != 8) {
        do {
          lVar9 = *(long *)param_3;
          lVar10 = *(long *)(lVar9 + 0x220);
          lVar11 = *(long *)(lVar10 + (ulong)puVar23[0xc] * 8);
          pfVar5 = (float *)(lVar11 + (ulong)*puVar23 * 4);
          fVar85 = *pfVar5;
          fVar66 = pfVar5[1];
          fVar120 = pfVar5[2];
          pfVar5 = (float *)(lVar11 + (ulong)puVar23[4] * 4);
          pfVar6 = (float *)(lVar11 + (ulong)puVar23[8] * 4);
          lVar11 = *(long *)(lVar10 + (ulong)puVar23[0xd] * 8);
          pfVar7 = (float *)(lVar11 + (ulong)puVar23[1] * 4);
          fVar89 = *pfVar7;
          fVar69 = pfVar7[1];
          fVar121 = pfVar7[2];
          pfVar7 = (float *)(lVar11 + (ulong)puVar23[5] * 4);
          pfVar8 = (float *)(lVar11 + (ulong)puVar23[9] * 4);
          lVar11 = *(long *)(lVar10 + (ulong)puVar23[0xe] * 8);
          pfVar1 = (float *)(lVar11 + (ulong)puVar23[2] * 4);
          fVar90 = *pfVar1;
          fVar70 = pfVar1[1];
          fVar122 = pfVar1[2];
          pfVar1 = (float *)(lVar11 + (ulong)puVar23[6] * 4);
          pfVar2 = (float *)(lVar11 + (ulong)puVar23[10] * 4);
          lVar10 = *(long *)(lVar10 + (ulong)puVar23[0xf] * 8);
          pfVar3 = (float *)(lVar10 + (ulong)puVar23[3] * 4);
          fVar91 = *pfVar3;
          fVar71 = pfVar3[1];
          fVar123 = pfVar3[2];
          pfVar3 = (float *)(lVar10 + (ulong)puVar23[7] * 4);
          fVar41 = *(float *)param_2;
          fVar34 = *(float *)(param_2 + 4);
          fVar39 = *(float *)(param_2 + 8);
          pfVar4 = (float *)(lVar10 + (ulong)puVar23[0xb] * 4);
          local_8e8 = *(undefined8 *)(puVar23 + 0x10);
          uStack_8e0 = *(undefined8 *)(puVar23 + 0x12);
          fVar92 = fVar85 - *pfVar5;
          fVar93 = fVar89 - *pfVar7;
          fVar94 = fVar90 - *pfVar1;
          fVar95 = fVar91 - *pfVar3;
          fVar96 = fVar66 - pfVar5[1];
          fVar97 = fVar69 - pfVar7[1];
          fVar98 = fVar70 - pfVar1[1];
          fVar99 = fVar71 - pfVar3[1];
          fVar43 = pfVar6[1] - fVar66;
          fVar47 = pfVar8[1] - fVar69;
          fVar50 = pfVar2[1] - fVar70;
          fVar51 = pfVar4[1] - fVar71;
          fVar81 = *pfVar6 - fVar85;
          fVar82 = *pfVar8 - fVar89;
          fVar83 = *pfVar2 - fVar90;
          fVar84 = *pfVar4 - fVar91;
          local_8d8 = *(undefined8 *)(puVar23 + 0xc);
          uStack_8d0 = *(undefined8 *)(puVar23 + 0xe);
          fVar52 = fVar120 - pfVar5[2];
          fVar57 = fVar121 - pfVar7[2];
          fVar58 = fVar122 - pfVar1[2];
          fVar59 = fVar123 - pfVar3[2];
          fVar60 = pfVar6[2] - fVar120;
          fVar63 = pfVar8[2] - fVar121;
          fVar64 = pfVar2[2] - fVar122;
          fVar65 = pfVar4[2] - fVar123;
          fVar85 = fVar85 - fVar41;
          fVar89 = fVar89 - fVar41;
          fVar90 = fVar90 - fVar41;
          fVar91 = fVar91 - fVar41;
          fVar72 = fVar96 * fVar81 - fVar92 * fVar43;
          fVar75 = fVar97 * fVar82 - fVar93 * fVar47;
          fVar77 = fVar98 * fVar83 - fVar94 * fVar50;
          fVar79 = fVar99 * fVar84 - fVar95 * fVar51;
          local_a38 = CONCAT44(fVar75,fVar72);
          fVar73 = fVar92 * fVar60 - fVar52 * fVar81;
          fVar76 = fVar93 * fVar63 - fVar57 * fVar82;
          fVar78 = fVar94 * fVar64 - fVar58 * fVar83;
          fVar80 = fVar95 * fVar65 - fVar59 * fVar84;
          local_a28 = CONCAT44(fVar76,fVar73);
          fVar41 = *(float *)(param_2 + 0x10);
          fVar44 = *(float *)(param_2 + 0x14);
          fVar48 = *(float *)(param_2 + 0x18);
          fVar108 = fVar52 * fVar43 - fVar96 * fVar60;
          fVar110 = fVar57 * fVar47 - fVar97 * fVar63;
          fVar112 = fVar58 * fVar50 - fVar98 * fVar64;
          fVar114 = fVar59 * fVar51 - fVar99 * fVar65;
          local_a18 = CONCAT44(fVar110,fVar108);
          fVar66 = fVar66 - fVar34;
          fVar69 = fVar69 - fVar34;
          fVar70 = fVar70 - fVar34;
          fVar71 = fVar71 - fVar34;
          fVar120 = fVar120 - fVar39;
          fVar121 = fVar121 - fVar39;
          fVar122 = fVar122 - fVar39;
          fVar123 = fVar123 - fVar39;
          fVar116 = fVar85 * fVar44 - fVar66 * fVar41;
          fVar117 = fVar89 * fVar44 - fVar69 * fVar41;
          fVar118 = fVar90 * fVar44 - fVar70 * fVar41;
          fVar119 = fVar91 * fVar44 - fVar71 * fVar41;
          fVar109 = fVar120 * fVar41 - fVar85 * fVar48;
          fVar111 = fVar121 * fVar41 - fVar89 * fVar48;
          fVar113 = fVar122 * fVar41 - fVar90 * fVar48;
          fVar115 = fVar123 * fVar41 - fVar91 * fVar48;
          fVar104 = fVar66 * fVar48 - fVar120 * fVar44;
          fVar105 = fVar69 * fVar48 - fVar121 * fVar44;
          fVar106 = fVar70 * fVar48 - fVar122 * fVar44;
          fVar107 = fVar71 * fVar48 - fVar123 * fVar44;
          fVar34 = fVar44 * fVar73 + fVar48 * fVar72 + fVar41 * fVar108;
          fVar39 = fVar44 * fVar76 + fVar48 * fVar75 + fVar41 * fVar110;
          fVar40 = fVar44 * fVar78 + fVar48 * fVar77 + fVar41 * fVar112;
          fVar41 = fVar44 * fVar80 + fVar48 * fVar79 + fVar41 * fVar114;
          auVar74._0_4_ = uVar30 & (uint)fVar34;
          auVar74._4_4_ = uVar30 & (uint)fVar39;
          auVar74._8_4_ = uVar30 & (uint)fVar40;
          auVar74._12_4_ = uVar30 & (uint)fVar41;
          fVar100 = (float)(_LC3 & (uint)fVar34);
          fVar101 = (float)(_UNK_001153c4 & (uint)fVar39);
          fVar102 = (float)(_UNK_001153c8 & (uint)fVar40);
          fVar103 = (float)(_UNK_001153cc & (uint)fVar41);
          auVar56._0_4_ = fVar52 * fVar116 + fVar96 * fVar109 + fVar92 * fVar104;
          auVar56._4_4_ = fVar57 * fVar117 + fVar97 * fVar111 + fVar93 * fVar105;
          auVar56._8_4_ = fVar58 * fVar118 + fVar98 * fVar113 + fVar94 * fVar106;
          auVar56._12_4_ = fVar59 * fVar119 + fVar99 * fVar115 + fVar95 * fVar107;
          auVar45._0_4_ = fVar43 * fVar109 + fVar60 * fVar116 + fVar81 * fVar104;
          auVar45._4_4_ = fVar47 * fVar111 + fVar63 * fVar117 + fVar82 * fVar105;
          auVar45._8_4_ = fVar50 * fVar113 + fVar64 * fVar118 + fVar83 * fVar106;
          auVar45._12_4_ = fVar51 * fVar115 + fVar65 * fVar119 + fVar84 * fVar107;
          auVar56 = auVar56 ^ auVar74;
          auVar45 = auVar45 ^ auVar74;
          fVar50 = auVar56._0_4_;
          fVar51 = auVar56._4_4_;
          fVar52 = auVar56._8_4_;
          fVar57 = auVar56._12_4_;
          fVar44 = auVar45._0_4_;
          fVar48 = auVar45._4_4_;
          fVar43 = auVar45._8_4_;
          fVar47 = auVar45._12_4_;
          auVar37._0_4_ =
               -(uint)((0.0 <= fVar50 && (0.0 <= fVar44 && fVar34 != 0.0)) &&
                      fVar50 + fVar44 <= fVar100) & _DAT_00116108;
          auVar37._4_4_ =
               -(uint)(((0.0 <= fVar48 && fVar39 != 0.0) && 0.0 <= fVar51) &&
                      fVar51 + fVar48 <= fVar101) & uRam000000000011610c;
          auVar37._8_4_ =
               -(uint)((0.0 <= fVar52 && (fVar40 != 0.0 && 0.0 <= fVar43)) &&
                      fVar52 + fVar43 <= fVar102) & uRam0000000000116110;
          auVar37._12_4_ =
               -(uint)(((0.0 <= fVar47 && fVar41 != 0.0) && 0.0 <= fVar57) &&
                      fVar57 + fVar47 <= fVar103) & uRam0000000000116114;
          iVar25 = movmskps((int)lVar10,auVar37);
          if (iVar25 != 0) {
            auVar68._0_4_ = fVar66 * fVar73 + fVar72 * fVar120 + fVar85 * fVar108;
            auVar68._4_4_ = fVar69 * fVar76 + fVar75 * fVar121 + fVar89 * fVar110;
            auVar68._8_4_ = fVar70 * fVar78 + fVar77 * fVar122 + fVar90 * fVar112;
            auVar68._12_4_ = fVar71 * fVar80 + fVar79 * fVar123 + fVar91 * fVar114;
            auVar68 = auVar68 ^ auVar74;
            fVar85 = *(float *)(param_2 + 0x20);
            fVar120 = auVar68._0_4_;
            fVar89 = auVar68._4_4_;
            fVar69 = auVar68._8_4_;
            fVar121 = auVar68._12_4_;
            fVar66 = *(float *)(param_2 + 0xc);
            auVar38._0_4_ =
                 auVar37._0_4_ & -(uint)(fVar120 <= fVar85 * fVar100 && fVar66 * fVar100 < fVar120);
            auVar38._4_4_ =
                 auVar37._4_4_ & -(uint)(fVar89 <= fVar85 * fVar101 && fVar66 * fVar101 < fVar89);
            auVar38._8_4_ =
                 auVar37._8_4_ & -(uint)(fVar69 <= fVar85 * fVar102 && fVar66 * fVar102 < fVar69);
            auVar38._12_4_ =
                 auVar37._12_4_ & -(uint)(fVar121 <= fVar85 * fVar103 && fVar66 * fVar103 < fVar121)
            ;
            iVar25 = movmskps(iVar25,auVar38);
            uVar26 = CONCAT44((int)((ulong)lVar10 >> 0x20),iVar25);
            if (iVar25 != 0) {
              auVar12._4_4_ = fVar101;
              auVar12._0_4_ = fVar100;
              auVar12._8_4_ = fVar102;
              auVar12._12_4_ = fVar103;
              auVar36 = rcpps(auVar38,auVar12);
              local_818 = local_a18;
              uStack_810 = CONCAT44(fVar114,fVar112);
              fVar66 = auVar36._0_4_;
              fVar90 = auVar36._4_4_;
              fVar70 = auVar36._8_4_;
              fVar122 = auVar36._12_4_;
              local_808 = local_a28;
              uStack_800 = CONCAT44(fVar80,fVar78);
              local_7f8 = local_a38;
              uStack_7f0 = CONCAT44(fVar79,fVar77);
              fVar66 = (_LC7 - fVar100 * fVar66) * fVar66 + fVar66;
              fVar90 = (_LC7 - fVar101 * fVar90) * fVar90 + fVar90;
              fVar70 = (_LC7 - fVar102 * fVar70) * fVar70 + fVar70;
              fVar122 = (_LC7 - fVar103 * fVar122) * fVar122 + fVar122;
              local_828[0] = fVar120 * fVar66;
              local_828[1] = fVar89 * fVar90;
              local_828[2] = fVar69 * fVar70;
              local_828[3] = fVar121 * fVar122;
              local_848[0] = fVar44 * fVar66;
              local_848[1] = fVar48 * fVar90;
              local_848[2] = fVar43 * fVar70;
              local_848[3] = fVar47 * fVar122;
              local_838[0] = fVar66 * fVar50;
              local_838[1] = fVar90 * fVar51;
              local_838[2] = fVar70 * fVar52;
              local_838[3] = fVar122 * fVar57;
              do {
                uVar22 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
                  }
                }
                uVar31 = *(uint *)((long)&local_8d8 + uVar22 * 4);
                lVar10 = *(long *)(*(long *)(lVar9 + 0x1e0) + (ulong)uVar31 * 8);
                pbVar27 = *(byte **)(param_3 + 0x10);
                pcVar28 = *(code **)(pbVar27 + 0x10);
                if ((pcVar28 == (code *)0x0) && (*(long *)(lVar10 + 0x48) == 0)) {
LAB_0010b353:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010aefb;
                }
                uStack_8b0 = uVar31;
                iStack_91c = -1;
                fStack_8bc = local_848[uVar22];
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar22 * 4);
                uStack_8b4 = *(undefined4 *)((long)&local_8e8 + uVar22 * 4);
                fStack_8b8 = local_838[uVar22];
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar22 * 4);
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                piStack_918 = &iStack_91c;
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar22 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar22];
                uStack_910 = *(undefined8 *)(lVar10 + 0x18);
                uStack_908 = *(undefined8 *)(param_3 + 8);
                puStack_8f8 = &uStack_8c8;
                uStack_8f0 = 1;
                pRStack_900 = param_2;
                if (*(code **)(lVar10 + 0x48) == (code *)0x0) {
LAB_0010b4f7:
                  if ((pcVar28 == (code *)0x0) ||
                     ((((*pbVar27 & 2) == 0 && ((*(byte *)(lVar10 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar28)(&piStack_918), *piStack_918 != 0)))) goto LAB_0010b353;
                }
                else {
                  (**(code **)(lVar10 + 0x48))(&piStack_918);
                  if (*piStack_918 != 0) {
                    pbVar27 = *(byte **)(param_3 + 0x10);
                    pcVar28 = *(code **)(pbVar27 + 0x10);
                    goto LAB_0010b4f7;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar85;
                uVar26 = uVar26 ^ 1L << (uVar22 & 0x3f);
              } while (uVar26 != 0);
            }
          }
          lVar24 = lVar24 + 1;
          puVar23 = puVar23 + 0x14;
        } while (lVar24 != uVar21 - 8);
      }
LAB_0010aeea:
      puVar20 = &local_7e8;
    } while (puVar29 != puVar20);
  }
LAB_0010aefb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong unaff_RBP;
  int iVar23;
  int iVar24;
  ulong uVar25;
  code *pcVar26;
  RayHitK *pRVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  long in_FS_OFFSET;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar41;
  float fVar43;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar65;
  float fVar66;
  undefined1 auVar59 [16];
  float fVar67;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  float fVar77;
  float fVar78;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar79;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar80;
  float fVar81;
  float fVar85;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar110;
  float fVar111;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar113;
  float fVar117;
  float fVar118;
  undefined1 auVar114 [16];
  float fVar119;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar120;
  float fVar121;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar130;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined1 auStack_11c8 [8];
  float fStack_11c0;
  float fStack_11bc;
  float local_119c;
  undefined4 uStack_10cc;
  RayHitK *pRStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  RayHitK *pRStack_10b0;
  int *piStack_10a8;
  undefined4 uStack_10a0;
  undefined1 auStack_1098 [16];
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  int iStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  float fStack_105c;
  float fStack_1058;
  undefined4 uStack_1054;
  uint uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048 [6] [16];
  float afStack_fe8 [4];
  float afStack_fd8 [4];
  undefined1 auStack_fc8 [16];
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar36 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar36 < 0.0) {
      fVar36 = 0.0;
    }
    fVar91 = *(float *)(param_2 + 0xc);
    if (fVar91 < 0.0) {
      fVar91 = 0.0;
    }
    fVar14 = *(float *)param_2;
    fVar15 = *(float *)(param_2 + 4);
    fVar16 = *(float *)(param_2 + 8);
    auVar82._4_4_ = fVar36;
    auVar82._0_4_ = fVar36;
    auVar82._8_4_ = fVar36;
    auVar82._12_4_ = fVar36;
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar69._0_4_ = ~uVar32 & *(uint *)(param_2 + 0x10);
    auVar69._4_4_ = ~uVar33 & *(uint *)(param_2 + 0x14);
    auVar69._8_4_ = ~uVar34 & *(uint *)(param_2 + 0x18);
    auVar69._12_4_ = ~uVar35 & *(uint *)(param_2 + 0x1c);
    auVar38._0_4_ = uVar32 & (uint)_LC5;
    auVar38._4_4_ = uVar33 & (uint)_LC5;
    auVar38._8_4_ = uVar34 & (uint)_LC5;
    auVar38._12_4_ = uVar35 & (uint)_LC5;
    auVar38 = auVar38 | auVar69;
    auVar69 = rcpps(auVar69,auVar38);
    fVar36 = auVar69._0_4_;
    fVar41 = auVar69._4_4_;
    fVar43 = auVar69._8_4_;
    fVar36 = (_LC7 - auVar38._0_4_ * fVar36) * fVar36 + fVar36;
    fVar41 = (_LC7 - auVar38._4_4_ * fVar41) * fVar41 + fVar41;
    fVar43 = (_LC7 - auVar38._8_4_ * fVar43) * fVar43 + fVar43;
    uVar19 = (ulong)(fVar36 < 0.0) * 0x10;
    auVar70._4_4_ = fVar91;
    auVar70._0_4_ = fVar91;
    auVar70._8_4_ = fVar91;
    auVar70._12_4_ = fVar91;
    uVar30 = uVar19 ^ 0x10;
    pauVar17 = (undefined1 (*) [16])local_f78;
joined_r0x0010b773:
    pauVar18 = pauVar17;
    if (pauVar18 != (undefined1 (*) [16])local_f88) {
      local_119c = *(float *)(param_2 + 0x20);
      pauVar17 = pauVar18 + -1;
      if (*(float *)(pauVar18[-1] + 8) <= local_119c) {
        uVar21 = *(ulong *)pauVar18[-1];
        while ((uVar21 & 8) == 0) {
          pfVar5 = (float *)(uVar21 + (ulong)(-(uint)(fVar43 < 0.0) & 0x10) + 0x60);
          pfVar6 = (float *)(uVar21 + 0x20 + uVar19);
          pfVar7 = (float *)(uVar21 + (ulong)(-(uint)(fVar41 < 0.0) & 0x10) + 0x40);
          pfVar8 = (float *)(uVar21 + (-(ulong)(fVar41 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar71._0_4_ = (*pfVar5 - fVar16) * fVar43;
          auVar71._4_4_ = (pfVar5[1] - fVar16) * fVar43;
          auVar71._8_4_ = (pfVar5[2] - fVar16) * fVar43;
          auVar71._12_4_ = (pfVar5[3] - fVar16) * fVar43;
          auVar104._0_4_ = (*pfVar7 - fVar15) * fVar41;
          auVar104._4_4_ = (pfVar7[1] - fVar15) * fVar41;
          auVar104._8_4_ = (pfVar7[2] - fVar15) * fVar41;
          auVar104._12_4_ = (pfVar7[3] - fVar15) * fVar41;
          auVar59._0_4_ = (*pfVar6 - fVar14) * fVar36;
          auVar59._4_4_ = (pfVar6[1] - fVar14) * fVar36;
          auVar59._8_4_ = (pfVar6[2] - fVar14) * fVar36;
          auVar59._12_4_ = (pfVar6[3] - fVar14) * fVar36;
          auVar114._0_4_ = (*pfVar8 - fVar15) * fVar41;
          auVar114._4_4_ = (pfVar8[1] - fVar15) * fVar41;
          auVar114._8_4_ = (pfVar8[2] - fVar15) * fVar41;
          auVar114._12_4_ = (pfVar8[3] - fVar15) * fVar41;
          auVar69 = maxps(auVar71,auVar70);
          auVar38 = maxps(auVar59,auVar104);
          pfVar5 = (float *)(uVar21 + (-(ulong)(fVar43 < 0.0) & 0xfffffffffffffff0) + 0x70);
          local_1048[0] = maxps(auVar38,auVar69);
          pfVar6 = (float *)(uVar21 + 0x20 + uVar30);
          auVar105._0_4_ = (*pfVar5 - fVar16) * fVar43;
          auVar105._4_4_ = (pfVar5[1] - fVar16) * fVar43;
          auVar105._8_4_ = (pfVar5[2] - fVar16) * fVar43;
          auVar105._12_4_ = (pfVar5[3] - fVar16) * fVar43;
          auVar72._0_4_ = (*pfVar6 - fVar14) * fVar36;
          auVar72._4_4_ = (pfVar6[1] - fVar14) * fVar36;
          auVar72._8_4_ = (pfVar6[2] - fVar14) * fVar36;
          auVar72._12_4_ = (pfVar6[3] - fVar14) * fVar36;
          auVar69 = minps(auVar105,auVar82);
          auVar38 = minps(auVar72,auVar114);
          auVar38 = minps(auVar38,auVar69);
          auVar106._4_4_ = -(uint)(SUB164(local_1048[0],4) <= auVar38._4_4_);
          auVar106._0_4_ = -(uint)(SUB164(local_1048[0],0) <= auVar38._0_4_);
          auVar106._8_4_ = -(uint)(SUB164(local_1048[0],8) <= auVar38._8_4_);
          auVar106._12_4_ = -(uint)(SUB164(local_1048[0],0xc) <= auVar38._12_4_);
          uVar22 = movmskps((int)unaff_RBP,auVar106);
          unaff_RBP = CONCAT44((int)(unaff_RBP >> 0x20),uVar22);
          if (unaff_RBP == 0) goto joined_r0x0010b773;
          uVar28 = uVar21 & 0xfffffffffffffff0;
          lVar13 = 0;
          if (unaff_RBP != 0) {
            for (; (unaff_RBP >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
            }
          }
          uVar21 = *(ulong *)(uVar28 + lVar13 * 8);
          uVar25 = unaff_RBP - 1 & unaff_RBP;
          if (uVar25 != 0) {
            fVar91 = afStack_fe8[lVar13 + -0x18];
            lVar13 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
              }
            }
            uVar11 = *(ulong *)(uVar28 + lVar13 * 8);
            fVar68 = afStack_fe8[lVar13 + -0x18];
            uVar25 = uVar25 & uVar25 - 1;
            if (uVar25 == 0) {
              unaff_RBP = uVar11;
              if ((uint)fVar91 < (uint)fVar68) {
                *(ulong *)*pauVar17 = uVar11;
                *(float *)(*pauVar17 + 8) = fVar68;
                pauVar17 = pauVar17 + 1;
              }
              else {
                *(ulong *)*pauVar17 = uVar21;
                *(float *)(*pauVar17 + 8) = fVar91;
                pauVar17 = pauVar17 + 1;
                uVar21 = uVar11;
              }
            }
            else {
              auVar122._8_4_ = fVar91;
              auVar122._0_8_ = uVar21;
              auVar122._12_4_ = 0;
              lVar13 = 0;
              if (uVar25 != 0) {
                for (; (uVar25 >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
                }
              }
              unaff_RBP = *(ulong *)(uVar28 + lVar13 * 8);
              auVar131._8_4_ = fVar68;
              auVar131._0_8_ = uVar11;
              auVar131._12_4_ = 0;
              fVar130 = afStack_fe8[lVar13 + -0x18];
              auVar62._8_4_ = fVar130;
              auVar62._0_8_ = unaff_RBP;
              auVar62._12_4_ = 0;
              auVar75._8_4_ = -(uint)((int)fVar91 < (int)fVar68);
              uVar25 = uVar25 - 1 & uVar25;
              if (uVar25 == 0) {
                auVar75._4_4_ = auVar75._8_4_;
                auVar75._0_4_ = auVar75._8_4_;
                auVar75._12_4_ = auVar75._8_4_;
                auVar107 = auVar122 & auVar75 | ~auVar75 & auVar131;
                auVar69 = auVar75 & auVar131 | ~auVar75 & auVar122;
                auVar115._8_4_ = -(uint)(auVar107._8_4_ < (int)fVar130);
                auVar115._0_8_ = CONCAT44(auVar115._8_4_,auVar115._8_4_);
                auVar115._12_4_ = auVar115._8_4_;
                auVar38 = auVar62 & auVar115 | ~auVar115 & auVar107;
                uVar21 = auVar107._0_8_ & auVar115._0_8_ | ~auVar115._0_8_ & unaff_RBP;
                auVar123._8_4_ = -(uint)(auVar69._8_4_ < auVar38._8_4_);
                auVar123._4_4_ = auVar123._8_4_;
                auVar123._0_4_ = auVar123._8_4_;
                auVar123._12_4_ = auVar123._8_4_;
                *pauVar17 = auVar38 & auVar123 | ~auVar123 & auVar69;
                pauVar17[1] = auVar69 & auVar123 | ~auVar123 & auVar38;
                pauVar17 = pauVar17 + 2;
              }
              else {
                lVar13 = 0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> lVar13 & 1) == 0; lVar13 = lVar13 + 1) {
                  }
                }
                auVar76._4_4_ = auVar75._8_4_;
                auVar76._0_4_ = auVar75._8_4_;
                auVar76._8_4_ = auVar75._8_4_;
                auVar76._12_4_ = auVar75._8_4_;
                auVar136._8_4_ = afStack_fe8[lVar13 + -0x18];
                auVar136._0_8_ = *(undefined8 *)(uVar28 + lVar13 * 8);
                auVar136._12_4_ = 0;
                auVar116 = auVar122 & auVar76 | ~auVar76 & auVar131;
                auVar124._8_4_ = -(uint)((int)fVar130 < (int)afStack_fe8[lVar13 + -0x18]);
                auVar69 = auVar76 & auVar131 | ~auVar76 & auVar122;
                auVar124._4_4_ = auVar124._8_4_;
                auVar124._0_4_ = auVar124._8_4_;
                auVar124._12_4_ = auVar124._8_4_;
                auVar108 = auVar62 & auVar124 | ~auVar124 & auVar136;
                auVar38 = auVar136 & auVar124 | ~auVar124 & auVar62;
                auVar132._8_4_ = -(uint)(auVar69._8_4_ < auVar38._8_4_);
                auVar132._4_4_ = auVar132._8_4_;
                auVar132._0_4_ = auVar132._8_4_;
                auVar132._12_4_ = auVar132._8_4_;
                auVar125 = auVar69 & auVar132 | ~auVar132 & auVar38;
                iVar23 = -(uint)(auVar116._8_4_ < auVar108._8_4_);
                auVar137._0_8_ = CONCAT44(iVar23,iVar23);
                auVar137._8_4_ = iVar23;
                auVar137._12_4_ = iVar23;
                auVar107 = ~auVar137 & auVar116 | auVar108 & auVar137;
                auVar109._8_4_ = -(uint)(auVar107._8_4_ < auVar125._8_4_);
                auVar109._4_4_ = auVar109._8_4_;
                auVar109._0_4_ = auVar109._8_4_;
                auVar109._12_4_ = auVar109._8_4_;
                pauVar17[1] = auVar125 & auVar109 | ~auVar109 & auVar107;
                *pauVar17 = auVar38 & auVar132 | ~auVar132 & auVar69;
                pauVar17[2] = auVar107 & auVar109 | ~auVar109 & auVar125;
                uVar21 = auVar116._0_8_ & auVar137._0_8_ | ~auVar137._0_8_ & auVar108._0_8_;
                pauVar17 = pauVar17 + 3;
              }
            }
          }
        }
        puVar20 = (uint *)(uVar21 & 0xfffffffffffffff0);
        uVar21 = (ulong)((uint)uVar21 & 0xf);
        if (uVar21 == 8) {
          auVar82._4_4_ = local_119c;
          auVar82._0_4_ = local_119c;
          auVar82._8_4_ = local_119c;
          auVar82._12_4_ = local_119c;
        }
        else {
          unaff_RBP = 0;
          auStack_11c8._4_4_ = local_119c;
          auStack_11c8._0_4_ = local_119c;
          fStack_11c0 = local_119c;
          fStack_11bc = local_119c;
          do {
            lVar13 = *(long *)param_3;
            lVar31 = *(long *)(lVar13 + 0x220);
            lVar10 = *(long *)(lVar31 + (ulong)puVar20[0xc] * 8);
            pfVar5 = (float *)(lVar10 + (ulong)*puVar20 * 4);
            fVar91 = *pfVar5;
            fVar68 = pfVar5[1];
            fVar130 = pfVar5[2];
            pfVar5 = (float *)(lVar10 + (ulong)puVar20[4] * 4);
            pfVar6 = (float *)(lVar10 + (ulong)puVar20[8] * 4);
            lVar10 = *(long *)(lVar31 + (ulong)puVar20[0xd] * 8);
            pfVar7 = (float *)(lVar10 + (ulong)puVar20[1] * 4);
            fVar92 = *pfVar7;
            fVar77 = pfVar7[1];
            fVar133 = pfVar7[2];
            pfVar7 = (float *)(lVar10 + (ulong)puVar20[5] * 4);
            pfVar8 = (float *)(lVar10 + (ulong)puVar20[9] * 4);
            lVar10 = *(long *)(lVar31 + (ulong)puVar20[0xe] * 8);
            pfVar1 = (float *)(lVar10 + (ulong)puVar20[2] * 4);
            fVar93 = *pfVar1;
            fVar78 = pfVar1[1];
            fVar134 = pfVar1[2];
            pfVar1 = (float *)(lVar10 + (ulong)puVar20[6] * 4);
            pfVar2 = (float *)(lVar10 + (ulong)puVar20[10] * 4);
            lVar31 = *(long *)(lVar31 + (ulong)puVar20[0xf] * 8);
            pfVar3 = (float *)(lVar31 + (ulong)puVar20[3] * 4);
            fVar94 = *pfVar3;
            fVar79 = pfVar3[1];
            fVar135 = pfVar3[2];
            pfVar3 = (float *)(lVar31 + (ulong)puVar20[7] * 4);
            pfVar4 = (float *)(lVar31 + (ulong)puVar20[0xb] * 4);
            uStack_1088 = *(undefined8 *)(puVar20 + 0x10);
            uStack_1080 = *(undefined8 *)(puVar20 + 0x12);
            fVar95 = fVar91 - *pfVar5;
            fVar96 = fVar92 - *pfVar7;
            fVar97 = fVar93 - *pfVar1;
            fVar98 = fVar94 - *pfVar3;
            fVar99 = fVar68 - pfVar5[1];
            fVar100 = fVar77 - pfVar7[1];
            fVar101 = fVar78 - pfVar1[1];
            fVar102 = fVar79 - pfVar3[1];
            fVar46 = pfVar6[1] - fVar68;
            fVar50 = pfVar8[1] - fVar77;
            fVar52 = pfVar2[1] - fVar78;
            fVar53 = pfVar4[1] - fVar79;
            fVar87 = *pfVar6 - fVar91;
            fVar88 = *pfVar8 - fVar92;
            fVar89 = *pfVar2 - fVar93;
            fVar90 = *pfVar4 - fVar94;
            uStack_1078 = *(undefined8 *)(puVar20 + 0xc);
            uStack_1070 = *(undefined8 *)(puVar20 + 0xe);
            fVar54 = fVar130 - pfVar5[2];
            fVar55 = fVar133 - pfVar7[2];
            fVar56 = fVar134 - pfVar1[2];
            fVar57 = fVar135 - pfVar3[2];
            fVar58 = pfVar6[2] - fVar130;
            fVar65 = pfVar8[2] - fVar133;
            fVar66 = pfVar2[2] - fVar134;
            fVar67 = pfVar4[2] - fVar135;
            fVar80 = fVar99 * fVar87 - fVar95 * fVar46;
            fVar85 = fVar100 * fVar88 - fVar96 * fVar50;
            uStack_11f0._0_4_ = fVar101 * fVar89 - fVar97 * fVar52;
            uStack_11f0._4_4_ = fVar102 * fVar90 - fVar98 * fVar53;
            uStack_11f8 = CONCAT44(fVar85,fVar80);
            fVar81 = fVar95 * fVar58 - fVar54 * fVar87;
            fVar86 = fVar96 * fVar65 - fVar55 * fVar88;
            uStack_11e0._0_4_ = fVar97 * fVar66 - fVar56 * fVar89;
            uStack_11e0._4_4_ = fVar98 * fVar67 - fVar57 * fVar90;
            uStack_11e8 = CONCAT44(fVar86,fVar81);
            fVar45 = *(float *)(param_2 + 0x10);
            fVar47 = *(float *)(param_2 + 0x14);
            fVar51 = *(float *)(param_2 + 0x18);
            fVar120 = fVar54 * fVar46 - fVar99 * fVar58;
            fVar126 = fVar55 * fVar50 - fVar100 * fVar65;
            uStack_11d0._0_4_ = fVar56 * fVar52 - fVar101 * fVar66;
            uStack_11d0._4_4_ = fVar57 * fVar53 - fVar102 * fVar67;
            uStack_11d8 = CONCAT44(fVar126,fVar120);
            fVar37 = *(float *)param_2;
            fVar42 = *(float *)(param_2 + 4);
            fVar44 = *(float *)(param_2 + 8);
            fVar68 = fVar68 - fVar42;
            fVar77 = fVar77 - fVar42;
            fVar78 = fVar78 - fVar42;
            fVar79 = fVar79 - fVar42;
            fVar91 = fVar91 - fVar37;
            fVar92 = fVar92 - fVar37;
            fVar93 = fVar93 - fVar37;
            fVar94 = fVar94 - fVar37;
            fVar130 = fVar130 - fVar44;
            fVar133 = fVar133 - fVar44;
            fVar134 = fVar134 - fVar44;
            fVar135 = fVar135 - fVar44;
            fVar121 = fVar91 * fVar47 - fVar68 * fVar45;
            fVar127 = fVar92 * fVar47 - fVar77 * fVar45;
            fVar128 = fVar93 * fVar47 - fVar78 * fVar45;
            fVar129 = fVar94 * fVar47 - fVar79 * fVar45;
            fVar113 = fVar130 * fVar45 - fVar91 * fVar51;
            fVar117 = fVar133 * fVar45 - fVar92 * fVar51;
            fVar118 = fVar134 * fVar45 - fVar93 * fVar51;
            fVar119 = fVar135 * fVar45 - fVar94 * fVar51;
            fVar103 = fVar68 * fVar51 - fVar130 * fVar47;
            fVar110 = fVar77 * fVar51 - fVar133 * fVar47;
            fVar111 = fVar78 * fVar51 - fVar134 * fVar47;
            fVar112 = fVar79 * fVar51 - fVar135 * fVar47;
            fVar37 = fVar47 * fVar81 + fVar51 * fVar80 + fVar45 * fVar120;
            fVar42 = fVar47 * fVar86 + fVar51 * fVar85 + fVar45 * fVar126;
            fVar44 = fVar47 * (float)uStack_11e0 + fVar51 * (float)uStack_11f0 +
                     fVar45 * (float)uStack_11d0;
            fVar45 = fVar47 * uStack_11e0._4_4_ + fVar51 * uStack_11f0._4_4_ +
                     fVar45 * uStack_11d0._4_4_;
            uVar32 = _LC9 & (uint)fVar37;
            uVar33 = _UNK_001153f4 & (uint)fVar42;
            uVar34 = _UNK_001153f8 & (uint)fVar44;
            uVar35 = _UNK_001153fc & (uint)fVar45;
            auVar108._0_4_ = (float)(_LC3 & (uint)fVar37);
            auVar108._4_4_ = (float)(_UNK_001153c4 & (uint)fVar42);
            auVar108._8_4_ = (float)(_UNK_001153c8 & (uint)fVar44);
            auVar108._12_4_ = (float)(_UNK_001153cc & (uint)fVar45);
            fVar54 = (float)((uint)(fVar54 * fVar121 + fVar99 * fVar113 + fVar95 * fVar103) ^ uVar32
                            );
            fVar55 = (float)((uint)(fVar55 * fVar127 + fVar100 * fVar117 + fVar96 * fVar110) ^
                            uVar33);
            fVar56 = (float)((uint)(fVar56 * fVar128 + fVar101 * fVar118 + fVar97 * fVar111) ^
                            uVar34);
            fVar57 = (float)((uint)(fVar57 * fVar129 + fVar102 * fVar119 + fVar98 * fVar112) ^
                            uVar35);
            fVar47 = (float)((uint)(fVar46 * fVar113 + fVar58 * fVar121 + fVar87 * fVar103) ^ uVar32
                            );
            fVar51 = (float)((uint)(fVar50 * fVar117 + fVar65 * fVar127 + fVar88 * fVar110) ^ uVar33
                            );
            fVar46 = (float)((uint)(fVar52 * fVar118 + fVar66 * fVar128 + fVar89 * fVar111) ^ uVar34
                            );
            fVar50 = (float)((uint)(fVar53 * fVar119 + fVar67 * fVar129 + fVar90 * fVar112) ^ uVar35
                            );
            auVar107._0_4_ =
                 -(uint)(((0.0 <= fVar47 && fVar37 != 0.0) && 0.0 <= fVar54) &&
                        fVar54 + fVar47 <= auVar108._0_4_) & _DAT_00116108;
            auVar107._4_4_ =
                 -(uint)(((0.0 <= fVar51 && fVar42 != 0.0) && 0.0 <= fVar55) &&
                        fVar55 + fVar51 <= auVar108._4_4_) & uRam000000000011610c;
            auVar107._8_4_ =
                 -(uint)((0.0 <= fVar56 && (fVar44 != 0.0 && 0.0 <= fVar46)) &&
                        fVar56 + fVar46 <= auVar108._8_4_) & uRam0000000000116110;
            auVar107._12_4_ =
                 -(uint)((0.0 <= fVar57 && (0.0 <= fVar50 && fVar45 != 0.0)) &&
                        fVar57 + fVar50 <= auVar108._12_4_) & uRam0000000000116114;
            iVar23 = movmskps((int)lVar31,auVar107);
            auVar82 = _auStack_11c8;
            if (iVar23 != 0) {
              auVar73._0_4_ = fVar68 * fVar81 + fVar130 * fVar80 + fVar91 * fVar120;
              auVar73._4_4_ = fVar77 * fVar86 + fVar133 * fVar85 + fVar92 * fVar126;
              auVar73._8_4_ =
                   fVar78 * (float)uStack_11e0 + fVar134 * (float)uStack_11f0 +
                   fVar93 * (float)uStack_11d0;
              auVar73._12_4_ =
                   fVar79 * uStack_11e0._4_4_ + fVar135 * uStack_11f0._4_4_ +
                   fVar94 * uStack_11d0._4_4_;
              auVar116._4_4_ = uVar33;
              auVar116._0_4_ = uVar32;
              auVar116._8_4_ = uVar34;
              auVar116._12_4_ = uVar35;
              auVar73 = auVar73 ^ auVar116;
              fVar68 = auVar73._0_4_;
              fVar130 = auVar73._4_4_;
              fVar92 = auVar73._8_4_;
              fVar77 = auVar73._12_4_;
              fVar91 = *(float *)(param_2 + 0xc);
              auVar125._0_4_ =
                   auVar107._0_4_ &
                   -(uint)(fVar68 <= SUB164(_auStack_11c8,0) * auVar108._0_4_ &&
                          fVar91 * auVar108._0_4_ < fVar68);
              auVar125._4_4_ =
                   auVar107._4_4_ &
                   -(uint)(fVar130 <= SUB164(_auStack_11c8,4) * auVar108._4_4_ &&
                          fVar91 * auVar108._4_4_ < fVar130);
              auVar125._8_4_ =
                   auVar107._8_4_ &
                   -(uint)(fVar92 <= SUB164(_auStack_11c8,8) * auVar108._8_4_ &&
                          fVar91 * auVar108._8_4_ < fVar92);
              auVar125._12_4_ =
                   auVar107._12_4_ &
                   -(uint)(fVar77 <= SUB164(_auStack_11c8,0xc) * auVar108._12_4_ &&
                          fVar91 * auVar108._12_4_ < fVar77);
              iVar23 = movmskps(iVar23,auVar125);
              if (iVar23 != 0) {
                auVar82 = rcpps(_auStack_11c8,auVar108);
                auStack_1098 = auVar125;
                uStack_fb8 = uStack_11d8;
                uStack_fb0 = uStack_11d0;
                fVar91 = auVar82._0_4_;
                fVar133 = auVar82._4_4_;
                fVar93 = auVar82._8_4_;
                fVar78 = auVar82._12_4_;
                uStack_fa8 = uStack_11e8;
                uStack_fa0 = uStack_11e0;
                uStack_f98 = uStack_11f8;
                uStack_f90 = uStack_11f0;
                fVar91 = (_LC7 - auVar108._0_4_ * fVar91) * fVar91 + fVar91;
                fVar133 = (_LC7 - auVar108._4_4_ * fVar133) * fVar133 + fVar133;
                fVar93 = (_LC7 - auVar108._8_4_ * fVar93) * fVar93 + fVar93;
                fVar78 = (_LC7 - auVar108._12_4_ * fVar78) * fVar78 + fVar78;
                auVar74._0_4_ = fVar68 * fVar91;
                auVar74._4_4_ = fVar130 * fVar133;
                auVar74._8_4_ = fVar92 * fVar93;
                auVar74._12_4_ = fVar77 * fVar78;
                auStack_fc8 = auVar74;
                afStack_fe8[0] = fVar47 * fVar91;
                afStack_fe8[1] = fVar51 * fVar133;
                afStack_fe8[2] = fVar46 * fVar93;
                afStack_fe8[3] = fVar50 * fVar78;
                afStack_fd8[0] = fVar91 * fVar54;
                afStack_fd8[1] = fVar133 * fVar55;
                afStack_fd8[2] = fVar93 * fVar56;
                afStack_fd8[3] = fVar78 * fVar57;
                auVar48._0_4_ = auVar125._0_4_ & (uint)auVar74._0_4_;
                auVar48._4_4_ = auVar125._4_4_ & (uint)auVar74._4_4_;
                auVar48._8_4_ = auVar125._8_4_ & (uint)auVar74._8_4_;
                auVar48._12_4_ = auVar125._12_4_ & (uint)auVar74._12_4_;
                auVar60._0_4_ = ~auVar125._0_4_ & _LC18;
                auVar60._4_4_ = ~auVar125._4_4_ & _LC18;
                auVar60._8_4_ = ~auVar125._8_4_ & _LC18;
                auVar60._12_4_ = ~auVar125._12_4_ & _LC18;
                auVar48 = auVar48 | auVar60;
                auVar61._4_4_ = auVar48._0_4_;
                auVar61._0_4_ = auVar48._4_4_;
                auVar61._8_4_ = auVar48._12_4_;
                auVar61._12_4_ = auVar48._8_4_;
                auVar82 = minps(auVar61,auVar48);
                auVar83._0_8_ = auVar82._8_8_;
                auVar83._8_4_ = auVar82._0_4_;
                auVar83._12_4_ = auVar82._4_4_;
                auVar82 = minps(auVar83,auVar82);
                auVar39._0_4_ = auVar125._0_4_ & -(uint)(auVar48._0_4_ == auVar82._0_4_);
                auVar39._4_4_ = auVar125._4_4_ & -(uint)(auVar48._4_4_ == auVar82._4_4_);
                auVar39._8_4_ = auVar125._8_4_ & -(uint)(auVar48._8_4_ == auVar82._8_4_);
                auVar39._12_4_ = auVar125._12_4_ & -(uint)(auVar48._12_4_ == auVar82._12_4_);
                uVar32 = movmskps(puVar20[0xb],auVar39);
                uVar28 = CONCAT44((int)((ulong)lVar31 >> 0x20),iVar23);
                if (uVar32 != 0) {
                  uVar28 = (ulong)uVar32;
                }
                lVar31 = 0;
                if (uVar28 != 0) {
                  for (; (uVar28 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                  }
                }
                uStack_11f8._0_4_ = *(undefined4 *)((long)&uStack_1078 + lVar31 * 4);
                uVar32 = _LC18;
                uVar33 = _LC18;
                uVar34 = _LC18;
                uVar35 = _LC18;
                while( true ) {
                  lVar10 = *(long *)(*(long *)(lVar13 + 0x1e0) + (ulong)(uint)uStack_11f8 * 8);
                  pbVar29 = *(byte **)(param_3 + 0x10);
                  pcVar26 = *(code **)(pbVar29 + 0x10);
                  if ((pcVar26 == (code *)0x0) && (*(long *)(lVar10 + 0x40) == 0)) break;
                  uStack_10cc = 0xffffffff;
                  fStack_105c = afStack_fe8[lVar31];
                  uStack_1054 = *(undefined4 *)((long)&uStack_1088 + lVar31 * 4);
                  fStack_1058 = afStack_fd8[lVar31];
                  uStack_1050 = (uint)uStack_11f8;
                  iStack_1068 = *(int *)((long)&uStack_fb8 + lVar31 * 4);
                  uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                  uStack_1060 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                  uStack_104c = **(undefined4 **)(param_3 + 8);
                  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar31 * 4);
                  pRStack_10c8 = (RayHitK *)&uStack_10cc;
                  uStack_10c0 = *(undefined8 *)(lVar10 + 0x18);
                  pRStack_10b0 = param_2;
                  uStack_10b8 = *(undefined8 *)(param_3 + 8);
                  piStack_10a8 = &iStack_1068;
                  uStack_10a0 = 1;
                  if (*(code **)(lVar10 + 0x40) == (code *)0x0) {
LAB_0010c13f:
                    if ((pcVar26 != (code *)0x0) &&
                       (((*pbVar29 & 2) != 0 || ((*(byte *)(lVar10 + 0x3e) & 0x40) != 0)))) {
                      iVar23 = (int)&pRStack_10c8;
                      uStack_11f8 = uVar30;
                      (*pcVar26)();
                      uVar32 = _LC18;
                      uVar33 = _UNK_00115414;
                      uVar34 = _UNK_00115418;
                      uVar35 = _UNK_0011541c;
                      if (*(int *)pRStack_10c8 == 0) goto LAB_0010c451;
                    }
                    *(int *)(pRStack_10b0 + 0x30) = *piStack_10a8;
                    *(int *)(pRStack_10b0 + 0x34) = piStack_10a8[1];
                    *(int *)(pRStack_10b0 + 0x38) = piStack_10a8[2];
                    *(int *)(pRStack_10b0 + 0x3c) = piStack_10a8[3];
                    *(int *)(pRStack_10b0 + 0x40) = piStack_10a8[4];
                    *(int *)(pRStack_10b0 + 0x44) = piStack_10a8[5];
                    *(int *)(pRStack_10b0 + 0x48) = piStack_10a8[6];
                    iVar23 = piStack_10a8[7];
                    *(int *)(pRStack_10b0 + 0x4c) = iVar23;
                    local_119c = *(float *)(param_2 + 0x20);
                    auStack_11c8._4_4_ = local_119c;
                    auStack_11c8._0_4_ = local_119c;
                    fStack_11c0 = local_119c;
                    fStack_11bc = local_119c;
                    pRVar27 = pRStack_10b0;
                  }
                  else {
                    iVar23 = (int)&pRStack_10c8;
                    uStack_11f8 = lVar10;
                    (**(code **)(lVar10 + 0x40))();
                    if (*(int *)pRStack_10c8 != 0) {
                      pbVar29 = *(byte **)(param_3 + 0x10);
                      pcVar26 = *(code **)(pbVar29 + 0x10);
                      uVar32 = _LC18;
                      uVar33 = _UNK_00115414;
                      uVar34 = _UNK_00115418;
                      uVar35 = _UNK_0011541c;
                      goto LAB_0010c13f;
                    }
LAB_0010c451:
                    uVar35 = _UNK_0011541c;
                    uVar34 = _UNK_00115418;
                    uVar33 = _UNK_00115414;
                    uVar32 = _LC18;
                    *(float *)(param_2 + 0x20) = local_119c;
                    pRVar27 = pRStack_10c8;
                  }
                  *(undefined4 *)(auStack_1098 + lVar31 * 4) = 0;
                  auStack_1098._0_4_ =
                       -(uint)(auVar74._0_4_ <= SUB164(_auStack_11c8,0)) & auStack_1098._0_4_;
                  auStack_1098._4_4_ =
                       -(uint)(auVar74._4_4_ <= SUB164(_auStack_11c8,4)) & auStack_1098._4_4_;
                  auStack_1098._8_4_ =
                       -(uint)(auVar74._8_4_ <= SUB164(_auStack_11c8,8)) & auStack_1098._8_4_;
                  auStack_1098._12_4_ =
                       -(uint)(auVar74._12_4_ <= SUB164(_auStack_11c8,0xc)) & auStack_1098._12_4_;
                  iVar24 = movmskps((int)pRVar27,auStack_1098);
                  auVar82 = _auStack_11c8;
                  if (iVar24 == 0) goto LAB_0010bba9;
                  auVar63._0_4_ = ~auStack_1098._0_4_ & uVar32;
                  auVar63._4_4_ = ~auStack_1098._4_4_ & uVar33;
                  auVar63._8_4_ = ~auStack_1098._8_4_ & uVar34;
                  auVar63._12_4_ = ~auStack_1098._12_4_ & uVar35;
                  auVar49._0_4_ = auStack_1098._0_4_ & (uint)auVar74._0_4_;
                  auVar49._4_4_ = auStack_1098._4_4_ & (uint)auVar74._4_4_;
                  auVar49._8_4_ = auStack_1098._8_4_ & (uint)auVar74._8_4_;
                  auVar49._12_4_ = auStack_1098._12_4_ & (uint)auVar74._12_4_;
                  auVar49 = auVar49 | auVar63;
                  auVar64._4_4_ = auVar49._0_4_;
                  auVar64._0_4_ = auVar49._4_4_;
                  auVar64._8_4_ = auVar49._12_4_;
                  auVar64._12_4_ = auVar49._8_4_;
                  auVar82 = minps(auVar64,auVar49);
                  auVar84._0_8_ = auVar82._8_8_;
                  auVar84._8_4_ = auVar82._0_4_;
                  auVar84._12_4_ = auVar82._4_4_;
                  auVar82 = minps(auVar84,auVar82);
                  auVar40._0_4_ = auStack_1098._0_4_ & -(uint)(auVar49._0_4_ == auVar82._0_4_);
                  auVar40._4_4_ = auStack_1098._4_4_ & -(uint)(auVar49._4_4_ == auVar82._4_4_);
                  auVar40._8_4_ = auStack_1098._8_4_ & -(uint)(auVar49._8_4_ == auVar82._8_4_);
                  auVar40._12_4_ = auStack_1098._12_4_ & -(uint)(auVar49._12_4_ == auVar82._12_4_);
                  iVar23 = movmskps(iVar23,auVar40);
                  if (iVar23 != 0) {
                    iVar24 = iVar23;
                  }
                  lVar31 = 0;
                  if ((long)iVar24 != 0) {
                    for (; ((ulong)(long)iVar24 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                    }
                  }
                  uStack_11f8._0_4_ = *(undefined4 *)((long)&uStack_1078 + lVar31 * 4);
                }
                uVar22 = *(undefined4 *)((long)&uStack_fb8 + lVar31 * 4);
                local_119c = *(float *)(auStack_fc8 + lVar31 * 4);
                *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)((long)&uStack_1088 + lVar31 * 4);
                *(undefined4 *)(param_2 + 0x30) = uVar22;
                uVar22 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                fVar91 = afStack_fe8[lVar31];
                fVar68 = afStack_fd8[lVar31];
                *(uint *)(param_2 + 0x48) = (uint)uStack_11f8;
                puVar12 = *(undefined4 **)(param_3 + 8);
                auVar82._4_4_ = local_119c;
                auVar82._0_4_ = local_119c;
                auVar82._8_4_ = local_119c;
                auVar82._12_4_ = local_119c;
                *(undefined4 *)(param_2 + 0x34) = uVar22;
                uVar22 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                uVar9 = *puVar12;
                *(float *)(param_2 + 0x20) = local_119c;
                *(undefined4 *)(param_2 + 0x38) = uVar22;
                *(undefined4 *)(param_2 + 0x4c) = uVar9;
                *(float *)(param_2 + 0x3c) = fVar91;
                *(float *)(param_2 + 0x40) = fVar68;
                auStack_11c8._4_4_ = local_119c;
                auStack_11c8._0_4_ = local_119c;
                fStack_11c0 = local_119c;
                fStack_11bc = local_119c;
              }
            }
LAB_0010bba9:
            unaff_RBP = unaff_RBP + 1;
            puVar20 = puVar20 + 0x14;
          } while (unaff_RBP != uVar21 - 8);
        }
      }
      goto joined_r0x0010b773;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  int iVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong uVar30;
  code *pcVar31;
  ulong uVar32;
  ulong *puVar33;
  uint *puVar34;
  ulong uVar35;
  byte *pbVar36;
  long lVar37;
  long in_FS_OFFSET;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar56;
  float fVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar55 [16];
  float fVar64;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar78;
  float fVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar77 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar92;
  float fVar95;
  undefined1 auVar90 [16];
  float fVar93;
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar91 [16];
  float fVar102;
  float fVar105;
  float fVar106;
  undefined1 auVar103 [16];
  float fVar107;
  undefined1 auVar104 [16];
  float fVar108;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined1 auVar142 [16];
  float fVar149;
  float fVar153;
  float fVar154;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  int iStack_90c;
  int *piStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  RayK *pRStack_8f0;
  undefined4 *puStack_8e8;
  undefined4 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  uint uStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  float local_818 [4];
  undefined1 local_808 [16];
  float local_7f8 [4];
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar138 = *(float *)(param_2 + 0x20), 0.0 <= fVar138)) {
    fVar131 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar131 < 0.0) {
      fVar131 = 0.0;
    }
    fVar21 = *(float *)param_2;
    fVar22 = *(float *)(param_2 + 4);
    fVar23 = *(float *)(param_2 + 8);
    auVar90._4_4_ = fVar138;
    auVar90._0_4_ = fVar138;
    uVar38 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar39 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _UNK_001153d4);
    uVar42 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _UNK_001153d8);
    uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _UNK_001153dc);
    auVar152._4_4_ = _LC7;
    auVar152._0_4_ = _LC7;
    auVar73._0_4_ = uVar38 & (uint)_LC5;
    auVar73._4_4_ = uVar39 & (uint)_UNK_001153d4;
    auVar73._8_4_ = uVar42 & (uint)_UNK_001153d8;
    auVar73._12_4_ = uVar46 & (uint)_UNK_001153dc;
    auVar75._0_4_ = ~uVar38 & *(uint *)(param_2 + 0x10);
    auVar75._4_4_ = ~uVar39 & *(uint *)(param_2 + 0x14);
    auVar75._8_4_ = ~uVar42 & *(uint *)(param_2 + 0x18);
    auVar75._12_4_ = ~uVar46 & *(uint *)(param_2 + 0x1c);
    auVar152._8_4_ = _LC7;
    auVar152._12_4_ = _LC7;
    auVar73 = divps(auVar152,auVar73 | auVar75);
    fVar50 = _LC12 * auVar73._0_4_;
    fVar56 = _LC12 * auVar73._4_4_;
    fVar59 = _LC12 * auVar73._8_4_;
    fVar70 = auVar73._0_4_ * _LC14;
    fVar78 = auVar73._4_4_ * _LC14;
    fVar81 = auVar73._8_4_ * _LC14;
    uVar28 = (ulong)(fVar50 < 0.0) * 0x10;
    auVar103._4_4_ = fVar131;
    auVar103._0_4_ = fVar131;
    auVar103._8_4_ = fVar131;
    auVar103._12_4_ = fVar131;
    auVar90._8_4_ = fVar138;
    auVar90._12_4_ = fVar138;
    puVar29 = local_7e0;
    do {
      uVar30 = puVar29[-1];
      puVar33 = puVar29 + -1;
      while ((uVar30 & 8) == 0) {
        pfVar9 = (float *)(uVar30 + (ulong)(-(uint)(fVar59 < 0.0) & 0x10) + 0x60);
        pfVar10 = (float *)(uVar30 + 0x20 + uVar28);
        pfVar11 = (float *)(uVar30 + (ulong)(-(uint)(fVar56 < 0.0) & 0x10) + 0x40);
        pfVar12 = (float *)(uVar30 + (-(ulong)(fVar56 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar74._0_4_ = (*pfVar9 - fVar23) * fVar59;
        auVar74._4_4_ = (pfVar9[1] - fVar23) * fVar59;
        auVar74._8_4_ = (pfVar9[2] - fVar23) * fVar59;
        auVar74._12_4_ = (pfVar9[3] - fVar23) * fVar59;
        auVar150._0_4_ = (*pfVar11 - fVar22) * fVar56;
        auVar150._4_4_ = (pfVar11[1] - fVar22) * fVar56;
        auVar150._8_4_ = (pfVar11[2] - fVar22) * fVar56;
        auVar150._12_4_ = (pfVar11[3] - fVar22) * fVar56;
        auVar53._0_4_ = (*pfVar10 - fVar21) * fVar50;
        auVar53._4_4_ = (pfVar10[1] - fVar21) * fVar50;
        auVar53._8_4_ = (pfVar10[2] - fVar21) * fVar50;
        auVar53._12_4_ = (pfVar10[3] - fVar21) * fVar50;
        auVar75 = maxps(auVar74,auVar103);
        auVar73 = maxps(auVar53,auVar150);
        pfVar9 = (float *)(uVar30 + (-(ulong)(fVar59 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar73 = maxps(auVar73,auVar75);
        pfVar10 = (float *)(uVar30 + 0x20 + (uVar28 ^ 0x10));
        auVar151._0_4_ = (*pfVar9 - fVar23) * fVar81;
        auVar151._4_4_ = (pfVar9[1] - fVar23) * fVar81;
        auVar151._8_4_ = (pfVar9[2] - fVar23) * fVar81;
        auVar151._12_4_ = (pfVar9[3] - fVar23) * fVar81;
        auVar76._0_4_ = (*pfVar10 - fVar21) * fVar70;
        auVar76._4_4_ = (pfVar10[1] - fVar21) * fVar70;
        auVar76._8_4_ = (pfVar10[2] - fVar21) * fVar70;
        auVar76._12_4_ = (pfVar10[3] - fVar21) * fVar70;
        auVar152 = minps(auVar151,auVar90);
        auVar20._4_4_ = (pfVar12[1] - fVar22) * fVar78;
        auVar20._0_4_ = (*pfVar12 - fVar22) * fVar78;
        auVar20._8_4_ = (pfVar12[2] - fVar22) * fVar78;
        auVar20._12_4_ = (pfVar12[3] - fVar22) * fVar78;
        auVar75 = minps(auVar76,auVar20);
        auVar75 = minps(auVar75,auVar152);
        auVar54._4_4_ = -(uint)(auVar73._4_4_ <= auVar75._4_4_);
        auVar54._0_4_ = -(uint)(auVar73._0_4_ <= auVar75._0_4_);
        auVar54._8_4_ = -(uint)(auVar73._8_4_ <= auVar75._8_4_);
        auVar54._12_4_ = -(uint)(auVar73._12_4_ <= auVar75._12_4_);
        uVar26 = movmskps((int)puVar29,auVar54);
        puVar29 = (ulong *)CONCAT44((int)((ulong)puVar29 >> 0x20),uVar26);
        if (puVar29 == (ulong *)0x0) goto LAB_0010d078;
        uVar35 = uVar30 & 0xfffffffffffffff0;
        lVar37 = 0;
        if (puVar29 != (ulong *)0x0) {
          for (; ((ulong)puVar29 >> lVar37 & 1) == 0; lVar37 = lVar37 + 1) {
          }
        }
        uVar30 = *(ulong *)(uVar35 + lVar37 * 8);
        uVar32 = (long)puVar29 - 1U & (ulong)puVar29;
        if (uVar32 != 0) {
          *puVar33 = uVar30;
          puVar29 = (ulong *)(uVar32 - 1);
          lVar37 = 0;
          if (uVar32 != 0) {
            for (; (uVar32 >> lVar37 & 1) == 0; lVar37 = lVar37 + 1) {
            }
          }
          while( true ) {
            puVar33 = puVar33 + 1;
            uVar30 = *(ulong *)(uVar35 + lVar37 * 8);
            puVar29 = (ulong *)((ulong)puVar29 & uVar32);
            if (puVar29 == (ulong *)0x0) break;
            *puVar33 = uVar30;
            uVar32 = (long)puVar29 - 1;
            lVar37 = 0;
            if (puVar29 != (ulong *)0x0) {
              for (; ((ulong)puVar29 >> lVar37 & 1) == 0; lVar37 = lVar37 + 1) {
              }
            }
          }
        }
      }
      puVar34 = (uint *)(uVar30 & 0xfffffffffffffff0);
      uVar30 = (ulong)((uint)uVar30 & 0xf);
      if (uVar30 != 8) {
        lVar37 = 0;
        do {
          lVar13 = *(long *)param_3;
          lVar14 = *(long *)(lVar13 + 0x220);
          lVar15 = *(long *)(lVar14 + (ulong)puVar34[0xc] * 8);
          pfVar9 = (float *)(lVar15 + (ulong)*puVar34 * 4);
          pfVar10 = (float *)(lVar15 + (ulong)puVar34[4] * 4);
          pfVar11 = (float *)(lVar15 + (ulong)puVar34[8] * 4);
          lVar15 = *(long *)(lVar14 + (ulong)puVar34[0xd] * 8);
          pfVar12 = (float *)(lVar15 + (ulong)puVar34[1] * 4);
          pfVar1 = (float *)(lVar15 + (ulong)puVar34[5] * 4);
          pfVar2 = (float *)(lVar15 + (ulong)puVar34[9] * 4);
          lVar15 = *(long *)(lVar14 + (ulong)puVar34[0xe] * 8);
          pfVar3 = (float *)(lVar15 + (ulong)puVar34[2] * 4);
          pfVar4 = (float *)(lVar15 + (ulong)puVar34[6] * 4);
          pfVar5 = (float *)(lVar15 + (ulong)puVar34[10] * 4);
          lVar14 = *(long *)(lVar14 + (ulong)puVar34[0xf] * 8);
          pfVar6 = (float *)(lVar14 + (ulong)puVar34[3] * 4);
          pfVar7 = (float *)(lVar14 + (ulong)puVar34[7] * 4);
          pfVar8 = (float *)(lVar14 + (ulong)puVar34[0xb] * 4);
          fVar138 = *(float *)param_2;
          fVar131 = *(float *)(param_2 + 4);
          fVar147 = *(float *)(param_2 + 8);
          local_8d8 = *(undefined8 *)(puVar34 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar34 + 0x12);
          fVar101 = *(float *)(param_2 + 0x10);
          fVar86 = *(float *)(param_2 + 0x14);
          fVar141 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar34 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar34 + 0xe);
          fVar108 = pfVar11[1] - fVar131;
          fVar111 = pfVar2[1] - fVar131;
          fVar112 = pfVar5[1] - fVar131;
          fVar113 = pfVar8[1] - fVar131;
          fVar102 = pfVar11[2] - fVar147;
          fVar105 = pfVar2[2] - fVar147;
          fVar106 = pfVar5[2] - fVar147;
          fVar107 = pfVar8[2] - fVar147;
          fVar149 = *pfVar9 - fVar138;
          fVar153 = *pfVar12 - fVar138;
          fVar154 = *pfVar3 - fVar138;
          fVar155 = *pfVar6 - fVar138;
          fVar71 = pfVar9[2] - fVar147;
          fVar79 = pfVar12[2] - fVar147;
          fVar82 = pfVar3[2] - fVar147;
          fVar84 = pfVar6[2] - fVar147;
          fVar64 = *pfVar11 - fVar138;
          fVar67 = *pfVar2 - fVar138;
          fVar68 = *pfVar5 - fVar138;
          fVar69 = *pfVar8 - fVar138;
          fVar135 = *pfVar10 - fVar138;
          fVar136 = *pfVar1 - fVar138;
          fVar137 = *pfVar4 - fVar138;
          fVar138 = *pfVar7 - fVar138;
          fVar156 = pfVar9[1] - fVar131;
          fVar157 = pfVar12[1] - fVar131;
          fVar158 = pfVar3[1] - fVar131;
          fVar159 = pfVar6[1] - fVar131;
          fVar139 = pfVar10[2] - fVar147;
          fVar143 = pfVar1[2] - fVar147;
          fVar145 = pfVar4[2] - fVar147;
          fVar147 = pfVar7[2] - fVar147;
          fVar119 = pfVar10[1] - fVar131;
          fVar123 = pfVar1[1] - fVar131;
          fVar127 = pfVar4[1] - fVar131;
          fVar131 = pfVar7[1] - fVar131;
          fVar87 = fVar102 - fVar71;
          fVar92 = fVar105 - fVar79;
          fVar95 = fVar106 - fVar82;
          fVar98 = fVar107 - fVar84;
          fVar51 = fVar64 - fVar149;
          fVar57 = fVar67 - fVar153;
          fVar60 = fVar68 - fVar154;
          fVar62 = fVar69 - fVar155;
          fVar72 = fVar71 - fVar139;
          fVar80 = fVar79 - fVar143;
          fVar83 = fVar82 - fVar145;
          fVar85 = fVar84 - fVar147;
          fVar88 = fVar108 - fVar156;
          fVar93 = fVar111 - fVar157;
          fVar96 = fVar112 - fVar158;
          fVar99 = fVar113 - fVar159;
          fVar140 = fVar149 - fVar135;
          fVar144 = fVar153 - fVar136;
          fVar146 = fVar154 - fVar137;
          fVar148 = fVar155 - fVar138;
          fVar89 = fVar156 - fVar119;
          fVar94 = fVar157 - fVar123;
          fVar97 = fVar158 - fVar127;
          fVar100 = fVar159 - fVar131;
          fVar120 = fVar139 - fVar102;
          fVar124 = fVar143 - fVar105;
          fVar128 = fVar145 - fVar106;
          fVar132 = fVar147 - fVar107;
          fVar121 = fVar119 - fVar108;
          fVar125 = fVar123 - fVar111;
          fVar129 = fVar127 - fVar112;
          fVar133 = fVar131 - fVar113;
          fVar122 = fVar135 - fVar64;
          fVar126 = fVar136 - fVar67;
          fVar130 = fVar137 - fVar68;
          fVar134 = fVar138 - fVar69;
          fVar52 = ((fVar149 + fVar64) * fVar87 - fVar51 * (fVar71 + fVar102)) * fVar86 +
                   (fVar51 * (fVar156 + fVar108) - fVar88 * (fVar149 + fVar64)) * fVar141 +
                   ((fVar71 + fVar102) * fVar88 - (fVar156 + fVar108) * fVar87) * fVar101;
          fVar58 = ((fVar153 + fVar67) * fVar92 - fVar57 * (fVar79 + fVar105)) * fVar86 +
                   (fVar57 * (fVar157 + fVar111) - fVar93 * (fVar153 + fVar67)) * fVar141 +
                   ((fVar79 + fVar105) * fVar93 - (fVar157 + fVar111) * fVar92) * fVar101;
          fVar61 = ((fVar154 + fVar68) * fVar95 - fVar60 * (fVar82 + fVar106)) * fVar86 +
                   (fVar60 * (fVar158 + fVar112) - fVar96 * (fVar154 + fVar68)) * fVar141 +
                   ((fVar82 + fVar106) * fVar96 - (fVar158 + fVar112) * fVar95) * fVar101;
          fVar63 = ((fVar155 + fVar69) * fVar98 - fVar62 * (fVar84 + fVar107)) * fVar86 +
                   (fVar62 * (fVar159 + fVar113) - fVar99 * (fVar155 + fVar69)) * fVar141 +
                   ((fVar84 + fVar107) * fVar99 - (fVar159 + fVar113) * fVar98) * fVar101;
          fVar114 = ((fVar149 + fVar135) * fVar72 - fVar140 * (fVar71 + fVar139)) * fVar86 +
                    (fVar140 * (fVar156 + fVar119) - fVar89 * (fVar149 + fVar135)) * fVar141 +
                    ((fVar71 + fVar139) * fVar89 - (fVar156 + fVar119) * fVar72) * fVar101;
          fVar116 = ((fVar153 + fVar136) * fVar80 - fVar144 * (fVar79 + fVar143)) * fVar86 +
                    (fVar144 * (fVar157 + fVar123) - fVar94 * (fVar153 + fVar136)) * fVar141 +
                    ((fVar79 + fVar143) * fVar94 - (fVar157 + fVar123) * fVar80) * fVar101;
          fVar117 = ((fVar154 + fVar137) * fVar83 - fVar146 * (fVar82 + fVar145)) * fVar86 +
                    (fVar146 * (fVar158 + fVar127) - fVar97 * (fVar154 + fVar137)) * fVar141 +
                    ((fVar82 + fVar145) * fVar97 - (fVar158 + fVar127) * fVar83) * fVar101;
          fVar118 = ((fVar155 + fVar138) * fVar85 - fVar148 * (fVar84 + fVar147)) * fVar86 +
                    (fVar148 * (fVar159 + fVar131) - fVar100 * (fVar155 + fVar138)) * fVar141 +
                    ((fVar84 + fVar147) * fVar100 - (fVar159 + fVar131) * fVar85) * fVar101;
          auVar115._8_4_ = fVar61;
          auVar115._0_8_ = CONCAT44(fVar58,fVar52);
          auVar115._12_4_ = fVar63;
          auVar18._8_4_ = fVar117;
          auVar18._0_8_ = CONCAT44(fVar116,fVar114);
          auVar18._12_4_ = fVar118;
          auVar75 = maxps(auVar115,auVar18);
          auVar109._8_4_ = fVar61;
          auVar109._0_8_ = CONCAT44(fVar58,fVar52);
          auVar109._12_4_ = fVar63;
          auVar19._8_4_ = fVar117;
          auVar19._0_8_ = CONCAT44(fVar116,fVar114);
          auVar19._12_4_ = fVar118;
          auVar73 = minps(auVar109,auVar19);
          auVar104._0_4_ =
               ((fVar139 + fVar102) * fVar121 - (fVar108 + fVar119) * fVar120) * fVar101 +
               ((fVar64 + fVar135) * fVar120 - fVar122 * (fVar139 + fVar102)) * fVar86 +
               (fVar122 * (fVar108 + fVar119) - fVar121 * (fVar64 + fVar135)) * fVar141;
          auVar104._4_4_ =
               ((fVar143 + fVar105) * fVar125 - (fVar111 + fVar123) * fVar124) * fVar101 +
               ((fVar67 + fVar136) * fVar124 - fVar126 * (fVar143 + fVar105)) * fVar86 +
               (fVar126 * (fVar111 + fVar123) - fVar125 * (fVar67 + fVar136)) * fVar141;
          auVar104._8_4_ =
               ((fVar145 + fVar106) * fVar129 - (fVar112 + fVar127) * fVar128) * fVar101 +
               ((fVar68 + fVar137) * fVar128 - fVar130 * (fVar145 + fVar106)) * fVar86 +
               (fVar130 * (fVar112 + fVar127) - fVar129 * (fVar68 + fVar137)) * fVar141;
          auVar104._12_4_ =
               ((fVar147 + fVar107) * fVar133 - (fVar113 + fVar131) * fVar132) * fVar101 +
               ((fVar69 + fVar138) * fVar132 - fVar134 * (fVar147 + fVar107)) * fVar86 +
               (fVar134 * (fVar113 + fVar131) - fVar133 * (fVar69 + fVar138)) * fVar141;
          fVar67 = fVar52 + fVar114 + auVar104._0_4_;
          fVar68 = fVar58 + fVar116 + auVar104._4_4_;
          fVar69 = fVar61 + fVar117 + auVar104._8_4_;
          fVar102 = fVar63 + fVar118 + auVar104._12_4_;
          auVar75 = maxps(auVar75,auVar104);
          auVar73 = minps(auVar73,auVar104);
          fVar138 = __LC15 * (float)(_LC3 & (uint)fVar67);
          fVar131 = _UNK_00115404 * (float)(_UNK_001153c4 & (uint)fVar68);
          fVar147 = _UNK_00115408 * (float)(_UNK_001153c8 & (uint)fVar69);
          fVar64 = _UNK_0011540c * (float)(_UNK_001153cc & (uint)fVar102);
          auVar65._0_4_ =
               _DAT_00116108 &
               -(uint)((float)((uint)fVar138 ^ _LC9) <= auVar73._0_4_ || auVar75._0_4_ <= fVar138);
          auVar65._4_4_ =
               uRam000000000011610c &
               -(uint)((float)((uint)fVar131 ^ _UNK_001153f4) <= auVar73._4_4_ ||
                      auVar75._4_4_ <= fVar131);
          auVar65._8_4_ =
               uRam0000000000116110 &
               -(uint)((float)((uint)fVar147 ^ _UNK_001153f8) <= auVar73._8_4_ ||
                      auVar75._8_4_ <= fVar147);
          auVar65._12_4_ =
               uRam0000000000116114 &
               -(uint)((float)((uint)fVar64 ^ _UNK_001153fc) <= auVar73._12_4_ ||
                      auVar75._12_4_ <= fVar64);
          iVar27 = movmskps((int)lVar14,auVar65);
          if (iVar27 != 0) {
            uVar38 = -(uint)((float)(_LC3 & (uint)(fVar87 * fVar89)) <
                            (float)(_LC3 & (uint)(fVar121 * fVar72)));
            uVar46 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar92 * fVar94)) <
                            (float)(_UNK_001153c4 & (uint)(fVar125 * fVar80)));
            uVar43 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar95 * fVar97)) <
                            (float)(_UNK_001153c8 & (uint)(fVar129 * fVar83)));
            uVar47 = -(uint)((float)(_UNK_001153cc & (uint)(fVar98 * fVar100)) <
                            (float)(_UNK_001153cc & (uint)(fVar133 * fVar85)));
            uVar39 = -(uint)((float)(_LC3 & (uint)(fVar51 * fVar72)) <
                            (float)(_LC3 & (uint)(fVar120 * fVar140)));
            uVar40 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar57 * fVar80)) <
                            (float)(_UNK_001153c4 & (uint)(fVar124 * fVar144)));
            uVar44 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar60 * fVar83)) <
                            (float)(_UNK_001153c8 & (uint)(fVar128 * fVar146)));
            uVar48 = -(uint)((float)(_UNK_001153cc & (uint)(fVar62 * fVar85)) <
                            (float)(_UNK_001153cc & (uint)(fVar132 * fVar148)));
            uVar42 = -(uint)((float)(_LC3 & (uint)(fVar88 * fVar140)) <
                            (float)(_LC3 & (uint)(fVar122 * fVar89)));
            uVar41 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar93 * fVar144)) <
                            (float)(_UNK_001153c4 & (uint)(fVar126 * fVar94)));
            uVar45 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar96 * fVar146)) <
                            (float)(_UNK_001153c8 & (uint)(fVar130 * fVar97)));
            uVar49 = -(uint)((float)(_UNK_001153cc & (uint)(fVar99 * fVar148)) <
                            (float)(_UNK_001153cc & (uint)(fVar134 * fVar100)));
            fVar64 = (float)(uVar42 & (uint)(fVar51 * fVar89 - fVar88 * fVar140) |
                            ~uVar42 & (uint)(fVar121 * fVar140 - fVar122 * fVar89));
            fVar105 = (float)(uVar41 & (uint)(fVar57 * fVar94 - fVar93 * fVar144) |
                             ~uVar41 & (uint)(fVar125 * fVar144 - fVar126 * fVar94));
            fVar106 = (float)(uVar45 & (uint)(fVar60 * fVar97 - fVar96 * fVar146) |
                             ~uVar45 & (uint)(fVar129 * fVar146 - fVar130 * fVar97));
            fVar107 = (float)(uVar49 & (uint)(fVar62 * fVar100 - fVar99 * fVar148) |
                             ~uVar49 & (uint)(fVar133 * fVar148 - fVar134 * fVar100));
            auVar142._0_4_ = ~uVar39 & (uint)(fVar122 * fVar72 - fVar120 * fVar140);
            auVar142._4_4_ = ~uVar40 & (uint)(fVar126 * fVar80 - fVar124 * fVar144);
            auVar142._8_4_ = ~uVar44 & (uint)(fVar130 * fVar83 - fVar128 * fVar146);
            auVar142._12_4_ = ~uVar48 & (uint)(fVar134 * fVar85 - fVar132 * fVar148);
            auVar110._0_4_ = uVar39 & (uint)(fVar87 * fVar140 - fVar51 * fVar72);
            auVar110._4_4_ = uVar40 & (uint)(fVar92 * fVar144 - fVar57 * fVar80);
            auVar110._8_4_ = uVar44 & (uint)(fVar95 * fVar146 - fVar60 * fVar83);
            auVar110._12_4_ = uVar48 & (uint)(fVar98 * fVar148 - fVar62 * fVar85);
            auVar110 = auVar110 | auVar142;
            fVar51 = (float)(uVar38 & (uint)(fVar88 * fVar72 - fVar87 * fVar89) |
                            ~uVar38 & (uint)(fVar89 * fVar120 - fVar121 * fVar72));
            fVar57 = (float)(uVar46 & (uint)(fVar93 * fVar80 - fVar92 * fVar94) |
                            ~uVar46 & (uint)(fVar94 * fVar124 - fVar125 * fVar80));
            fVar60 = (float)(uVar43 & (uint)(fVar96 * fVar83 - fVar95 * fVar97) |
                            ~uVar43 & (uint)(fVar97 * fVar128 - fVar129 * fVar83));
            fVar62 = (float)(uVar47 & (uint)(fVar99 * fVar85 - fVar98 * fVar100) |
                            ~uVar47 & (uint)(fVar100 * fVar132 - fVar133 * fVar85));
            fVar138 = fVar86 * auVar110._0_4_ + fVar141 * fVar64 + fVar101 * fVar51;
            fVar131 = fVar86 * auVar110._4_4_ + fVar141 * fVar105 + fVar101 * fVar57;
            fVar147 = fVar86 * auVar110._8_4_ + fVar141 * fVar106 + fVar101 * fVar60;
            fVar101 = fVar86 * auVar110._12_4_ + fVar141 * fVar107 + fVar101 * fVar62;
            auVar91._0_4_ = fVar138 + fVar138;
            auVar91._4_4_ = fVar131 + fVar131;
            auVar91._8_4_ = fVar147 + fVar147;
            auVar91._12_4_ = fVar101 + fVar101;
            auVar73 = rcpps(auVar142,auVar91);
            fVar141 = auVar73._0_4_;
            fVar72 = auVar73._4_4_;
            fVar80 = auVar73._8_4_;
            fVar83 = auVar73._12_4_;
            fVar131 = fVar156 * auVar110._0_4_ + fVar71 * fVar64 + fVar149 * fVar51;
            fVar147 = fVar157 * auVar110._4_4_ + fVar79 * fVar105 + fVar153 * fVar57;
            fVar101 = fVar158 * auVar110._8_4_ + fVar82 * fVar106 + fVar154 * fVar60;
            fVar86 = fVar159 * auVar110._12_4_ + fVar84 * fVar107 + fVar155 * fVar62;
            fVar138 = *(float *)(param_2 + 0x20);
            auVar77._0_4_ =
                 (fVar131 + fVar131) * ((_LC7 - auVar91._0_4_ * fVar141) * fVar141 + fVar141);
            auVar77._4_4_ =
                 (fVar147 + fVar147) * ((_LC7 - auVar91._4_4_ * fVar72) * fVar72 + fVar72);
            auVar77._8_4_ =
                 (fVar101 + fVar101) * ((_LC7 - auVar91._8_4_ * fVar80) * fVar80 + fVar80);
            auVar77._12_4_ =
                 (fVar86 + fVar86) * ((_LC7 - auVar91._12_4_ * fVar83) * fVar83 + fVar83);
            fVar131 = *(float *)(param_2 + 0xc);
            auVar16._4_4_ =
                 -(uint)(fVar131 <= auVar77._4_4_ && auVar77._4_4_ <= fVar138) & auVar65._4_4_ &
                 -(uint)(auVar91._4_4_ != 0.0);
            auVar16._0_4_ =
                 -(uint)(fVar131 <= auVar77._0_4_ && auVar77._0_4_ <= fVar138) & auVar65._0_4_ &
                 -(uint)(auVar91._0_4_ != 0.0);
            auVar16._8_4_ =
                 -(uint)(fVar131 <= auVar77._8_4_ && auVar77._8_4_ <= fVar138) & auVar65._8_4_ &
                 -(uint)(auVar91._8_4_ != 0.0);
            auVar16._12_4_ =
                 -(uint)(fVar131 <= auVar77._12_4_ && auVar77._12_4_ <= fVar138) & auVar65._12_4_ &
                 -(uint)(auVar91._12_4_ != 0.0);
            uVar38 = movmskps(puVar34[10],auVar16);
            uVar35 = (ulong)uVar38;
            if (uVar38 != 0) {
              local_828 = auVar77;
              auVar17._4_4_ = fVar68;
              auVar17._0_4_ = fVar67;
              auVar17._8_4_ = fVar69;
              auVar17._12_4_ = fVar102;
              auVar73 = rcpps(auVar77,auVar17);
              local_7f8[0] = fVar64;
              local_7f8[1] = fVar105;
              local_7f8[2] = fVar106;
              local_7f8[3] = fVar107;
              fVar131 = auVar73._0_4_;
              fVar147 = auVar73._4_4_;
              fVar101 = auVar73._8_4_;
              fVar86 = auVar73._12_4_;
              local_818[0] = fVar51;
              local_818[1] = fVar57;
              local_818[2] = fVar60;
              local_818[3] = fVar62;
              local_808 = auVar110;
              fVar131 = (float)(~-(uint)((float)(_LC3 & (uint)fVar67) < _LC5) &
                               (uint)((_LC7 - fVar67 * fVar131) * fVar131 + fVar131));
              fVar147 = (float)(~-(uint)((float)(_UNK_001153c4 & (uint)fVar68) < _UNK_001153d4) &
                               (uint)((_LC7 - fVar68 * fVar147) * fVar147 + fVar147));
              fVar101 = (float)(~-(uint)((float)(_UNK_001153c8 & (uint)fVar69) < _UNK_001153d8) &
                               (uint)((_LC7 - fVar69 * fVar101) * fVar101 + fVar101));
              fVar86 = (float)(~-(uint)((float)(_UNK_001153cc & (uint)fVar102) < _UNK_001153dc) &
                              (uint)((_LC7 - fVar102 * fVar86) * fVar86 + fVar86));
              auVar55._0_4_ = fVar52 * fVar131;
              auVar55._4_4_ = fVar58 * fVar147;
              auVar55._8_4_ = fVar61 * fVar101;
              auVar55._12_4_ = fVar63 * fVar86;
              auVar66._0_4_ = fVar131 * fVar114;
              auVar66._4_4_ = fVar147 * fVar116;
              auVar66._8_4_ = fVar101 * fVar117;
              auVar66._12_4_ = fVar86 * fVar118;
              auVar24._4_12_ = _UNK_001153e4;
              auVar24._0_4_ = _LC7;
              local_848 = minps(auVar55,auVar24);
              auVar25._4_12_ = _UNK_001153e4;
              auVar25._0_4_ = _LC7;
              local_838 = minps(auVar66,auVar25);
              do {
                pbVar36 = *(byte **)(param_3 + 0x10);
                uVar32 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> uVar32 & 1) == 0; uVar32 = uVar32 + 1) {
                  }
                }
                uVar38 = *(uint *)((long)&local_8c8 + uVar32 * 4);
                lVar14 = *(long *)(*(long *)(lVar13 + 0x1e0) + (ulong)uVar38 * 8);
                pcVar31 = *(code **)(pbVar36 + 0x10);
                if ((pcVar31 == (code *)0x0) && (*(long *)(lVar14 + 0x48) == 0)) {
LAB_0010cdb7:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010cdbf;
                }
                uStack_8a0 = uVar38;
                iStack_90c = -1;
                uStack_8ac = *(undefined4 *)(local_848 + uVar32 * 4);
                fStack_8b0 = local_7f8[uVar32];
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar32 * 4);
                fStack_8b4 = local_7f8[uVar32 - 4];
                uStack_89c = **(undefined4 **)(param_3 + 8);
                piStack_908 = &iStack_90c;
                uStack_8a8 = *(undefined4 *)(local_838 + uVar32 * 4);
                fStack_8b8 = local_818[uVar32];
                *(float *)(param_2 + 0x20) = local_818[uVar32 - 4];
                uStack_900 = *(undefined8 *)(lVar14 + 0x18);
                uStack_8f8 = *(undefined8 *)(param_3 + 8);
                puStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar14 + 0x48) == (code *)0x0) {
LAB_0010cf54:
                  if ((pcVar31 == (code *)0x0) ||
                     ((((*pbVar36 & 2) == 0 && ((*(byte *)(lVar14 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar31)(&piStack_908), *piStack_908 != 0)))) goto LAB_0010cdb7;
                }
                else {
                  (**(code **)(lVar14 + 0x48))(&piStack_908);
                  if (*piStack_908 != 0) {
                    pbVar36 = *(byte **)(param_3 + 0x10);
                    pcVar31 = *(code **)(pbVar36 + 0x10);
                    goto LAB_0010cf54;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar138;
                uVar35 = uVar35 ^ 1L << (uVar32 & 0x3f);
              } while (uVar35 != 0);
            }
          }
          lVar37 = lVar37 + 1;
          puVar34 = puVar34 + 0x14;
        } while (lVar37 != uVar30 - 8);
      }
LAB_0010d078:
      puVar29 = puVar33;
    } while (puVar33 != &local_7e8);
  }
LAB_0010cdbf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  RayHitK *pRVar31;
  ulong uVar32;
  code *pcVar33;
  uint *puVar34;
  ulong uVar35;
  int iVar36;
  byte *pbVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined4 uVar40;
  ulong in_R11;
  int iVar41;
  ulong uVar42;
  long in_FS_OFFSET;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar108;
  float fVar109;
  float fVar116;
  float fVar118;
  undefined1 auVar110 [16];
  float fVar117;
  float fVar119;
  float fVar120;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar121;
  float fVar130;
  float fVar133;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar122;
  float fVar123;
  float fVar131;
  float fVar132;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar139;
  float fVar140;
  float fVar146;
  float fVar148;
  undefined1 auVar141 [16];
  float fVar147;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar165;
  float fVar167;
  float fVar168;
  float fVar169;
  undefined1 auVar166 [16];
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  undefined1 auStack_12c8 [16];
  int iStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined1 auStack_1298 [16];
  undefined1 auStack_1248 [8];
  float fStack_1240;
  float fStack_123c;
  undefined1 local_11f8 [8];
  float fStack_11f0;
  float fStack_11ec;
  float local_11bc;
  uint uStack_10bc;
  uint *puStack_10b8;
  undefined8 uStack_10b0;
  undefined4 *puStack_10a8;
  RayHitK *pRStack_10a0;
  undefined4 *puStack_1098;
  undefined4 uStack_1090;
  undefined1 auStack_1088 [16];
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined4 uStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  float fStack_1048;
  undefined4 uStack_1044;
  uint uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  float afStack_fc8 [4];
  undefined1 auStack_fb8 [16];
  undefined1 auStack_fa8 [16];
  float afStack_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_0010d43e:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_11f8._4_4_ = *(undefined4 *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if ((float)local_11f8._4_4_ < 0.0) {
    local_11f8._4_4_ = 0.0;
  }
  fVar98 = *(float *)(param_2 + 0xc);
  if (fVar98 < 0.0) {
    fVar98 = 0.0;
  }
  fVar22 = *(float *)param_2;
  fVar23 = *(float *)(param_2 + 4);
  fVar24 = *(float *)(param_2 + 8);
  pauVar38 = (undefined1 (*) [16])local_f78;
  local_11f8._0_4_ = local_11f8._4_4_;
  fStack_11f0 = (float)local_11f8._4_4_;
  fStack_11ec = (float)local_11f8._4_4_;
  uVar43 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar47 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001153d4);
  uVar51 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001153d8);
  uVar55 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001153dc);
  auVar110._0_4_ = uVar43 & (uint)_LC5;
  auVar110._4_4_ = uVar47 & (uint)_UNK_001153d4;
  auVar110._8_4_ = uVar51 & (uint)_UNK_001153d8;
  auVar110._12_4_ = uVar55 & (uint)_UNK_001153dc;
  auVar126._0_4_ = ~uVar43 & *(uint *)(param_2 + 0x10);
  auVar126._4_4_ = ~uVar47 & *(uint *)(param_2 + 0x14);
  auVar126._8_4_ = ~uVar51 & *(uint *)(param_2 + 0x18);
  auVar126._12_4_ = ~uVar55 & *(uint *)(param_2 + 0x1c);
  auVar158._4_4_ = _LC7;
  auVar158._0_4_ = _LC7;
  auVar158._8_4_ = _LC7;
  auVar158._12_4_ = _LC7;
  auVar110 = divps(auVar158,auVar110 | auVar126);
  fVar59 = _LC12 * auVar110._0_4_;
  fVar67 = _LC12 * auVar110._4_4_;
  fVar69 = _LC12 * auVar110._8_4_;
  fVar108 = auVar110._0_4_ * _LC14;
  fVar116 = auVar110._4_4_ * _LC14;
  fVar118 = auVar110._8_4_ * _LC14;
  uVar29 = (ulong)(fVar59 < 0.0) * 0x10;
  uVar43 = _LC3;
  uVar47 = _LC3;
  uVar51 = _LC3;
  uVar55 = _LC3;
LAB_0010d2c8:
  uVar28 = _LC9;
  if (pauVar38 != (undefined1 (*) [16])local_f88) {
    do {
      local_11bc = *(float *)(param_2 + 0x20);
      pauVar39 = pauVar38 + -1;
      if (*(float *)(pauVar38[-1] + 8) <= local_11bc) {
        uVar35 = *(ulong *)pauVar38[-1];
        pauVar38 = pauVar39;
        if ((uVar35 & 8) != 0) goto LAB_0010d481;
        auVar27._4_4_ = fVar98;
        auVar27._0_4_ = fVar98;
        auVar27._8_4_ = fVar98;
        auVar27._12_4_ = fVar98;
        while( true ) {
          pfVar10 = (float *)((ulong)(-(uint)(fVar69 < 0.0) & 0x10) + 0x60 + uVar35);
          pfVar11 = (float *)((ulong)(-(uint)(fVar67 < 0.0) & 0x10) + 0x40 + uVar35);
          pfVar12 = (float *)(uVar35 + (-(ulong)(fVar67 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar124._0_4_ = (*pfVar10 - fVar24) * fVar69;
          auVar124._4_4_ = (pfVar10[1] - fVar24) * fVar69;
          auVar124._8_4_ = (pfVar10[2] - fVar24) * fVar69;
          auVar124._12_4_ = (pfVar10[3] - fVar24) * fVar69;
          auVar153._0_4_ = (*pfVar11 - fVar23) * fVar67;
          auVar153._4_4_ = (pfVar11[1] - fVar23) * fVar67;
          auVar153._8_4_ = (pfVar11[2] - fVar23) * fVar67;
          auVar153._12_4_ = (pfVar11[3] - fVar23) * fVar67;
          auVar160._0_4_ = (*pfVar12 - fVar23) * fVar116;
          auVar160._4_4_ = (pfVar12[1] - fVar23) * fVar116;
          auVar160._8_4_ = (pfVar12[2] - fVar23) * fVar116;
          auVar160._12_4_ = (pfVar12[3] - fVar23) * fVar116;
          auVar110 = maxps(auVar124,auVar27);
          pfVar10 = (float *)(uVar35 + 0x20 + uVar29);
          auVar125._0_4_ = (*pfVar10 - fVar22) * fVar59;
          auVar125._4_4_ = (pfVar10[1] - fVar22) * fVar59;
          auVar125._8_4_ = (pfVar10[2] - fVar22) * fVar59;
          auVar125._12_4_ = (pfVar10[3] - fVar22) * fVar59;
          auVar126 = maxps(auVar125,auVar153);
          pfVar10 = (float *)(uVar35 + (-(ulong)(fVar69 < 0.0) & 0xfffffffffffffff0) + 0x70);
          local_1038[0] = maxps(auVar126,auVar110);
          pfVar11 = (float *)((uVar29 ^ 0x10) + 0x20 + uVar35);
          auVar154._0_4_ = (*pfVar10 - fVar24) * fVar118;
          auVar154._4_4_ = (pfVar10[1] - fVar24) * fVar118;
          auVar154._8_4_ = (pfVar10[2] - fVar24) * fVar118;
          auVar154._12_4_ = (pfVar10[3] - fVar24) * fVar118;
          auVar141._0_4_ = (*pfVar11 - fVar22) * fVar108;
          auVar141._4_4_ = (pfVar11[1] - fVar22) * fVar108;
          auVar141._8_4_ = (pfVar11[2] - fVar22) * fVar108;
          auVar141._12_4_ = (pfVar11[3] - fVar22) * fVar108;
          auVar126 = minps(auVar154,_local_11f8);
          auVar110 = minps(auVar141,auVar160);
          auVar110 = minps(auVar110,auVar126);
          auVar155._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar110._4_4_);
          auVar155._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar110._0_4_);
          auVar155._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar110._8_4_);
          auVar155._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar110._12_4_);
          uVar40 = movmskps((int)in_R11,auVar155);
          in_R11 = CONCAT44((int)(in_R11 >> 0x20),uVar40);
          if (in_R11 == 0) break;
          uVar32 = uVar35 & 0xfffffffffffffff0;
          lVar19 = 0;
          if (in_R11 != 0) {
            for (; (in_R11 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
            }
          }
          uVar35 = *(ulong *)(uVar32 + lVar19 * 8);
          uVar30 = in_R11 - 1 & in_R11;
          pauVar38 = pauVar39;
          if (uVar30 != 0) {
            uVar44 = *(uint *)(local_1038[0] + lVar19 * 4);
            lVar19 = 0;
            if (uVar30 != 0) {
              for (; (uVar30 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
              }
            }
            in_R11 = *(ulong *)(uVar32 + lVar19 * 8);
            uVar45 = *(uint *)(local_1038[0] + lVar19 * 4);
            uVar30 = uVar30 & uVar30 - 1;
            if (uVar30 == 0) {
              pauVar38 = pauVar39 + 1;
              if (uVar44 < uVar45) {
                *(ulong *)*pauVar39 = in_R11;
                *(uint *)(*pauVar39 + 8) = uVar45;
              }
              else {
                *(ulong *)*pauVar39 = uVar35;
                *(uint *)(*pauVar39 + 8) = uVar44;
                uVar35 = in_R11;
              }
            }
            else {
              auVar157._8_4_ = uVar44;
              auVar157._0_8_ = uVar35;
              auVar157._12_4_ = 0;
              lVar19 = 0;
              if (uVar30 != 0) {
                for (; (uVar30 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
                }
              }
              uVar35 = *(ulong *)(uVar32 + lVar19 * 8);
              auVar162._8_4_ = uVar45;
              auVar162._0_8_ = in_R11;
              auVar162._12_4_ = 0;
              uVar46 = *(uint *)(local_1038[0] + lVar19 * 4);
              auVar129._8_4_ = uVar46;
              auVar129._0_8_ = uVar35;
              auVar129._12_4_ = 0;
              auVar143._8_4_ = -(uint)((int)uVar44 < (int)uVar45);
              uVar30 = uVar30 - 1 & uVar30;
              if (uVar30 == 0) {
                auVar143._4_4_ = auVar143._8_4_;
                auVar143._0_4_ = auVar143._8_4_;
                auVar143._12_4_ = auVar143._8_4_;
                pauVar38 = pauVar39 + 2;
                auVar158 = auVar157 & auVar143 | ~auVar143 & auVar162;
                auVar126 = auVar143 & auVar162 | ~auVar143 & auVar157;
                iStack_12b0 = auVar158._8_4_;
                auVar163._8_4_ = -(uint)(iStack_12b0 < (int)uVar46);
                auVar163._0_8_ = CONCAT44(auVar163._8_4_,auVar163._8_4_);
                auVar163._12_4_ = auVar163._8_4_;
                auVar110 = auVar129 & auVar163 | ~auVar163 & auVar158;
                auStack_12c8._8_4_ = auVar126._8_4_;
                auVar144._8_4_ = -(uint)((int)auStack_12c8._8_4_ < auVar110._8_4_);
                auVar144._4_4_ = auVar144._8_4_;
                auVar144._0_4_ = auVar144._8_4_;
                auVar144._12_4_ = auVar144._8_4_;
                *pauVar39 = auVar110 & auVar144 | ~auVar144 & auVar126;
                uVar35 = auVar158._0_8_ & auVar163._0_8_ | ~auVar163._0_8_ & uVar35;
                pauVar39[1] = auVar144 & auVar126 | ~auVar144 & auVar110;
                in_R11 = 0;
              }
              else {
                in_R11 = 0;
                if (uVar30 != 0) {
                  for (; (uVar30 >> in_R11 & 1) == 0; in_R11 = in_R11 + 1) {
                  }
                }
                uVar18 = *(undefined8 *)(uVar32 + in_R11 * 8);
                pauVar38 = pauVar39 + 3;
                uVar44 = *(uint *)(local_1038[0] + in_R11 * 4);
                auVar159._4_4_ = auVar143._8_4_;
                auVar159._0_4_ = auVar143._8_4_;
                auVar159._8_4_ = auVar143._8_4_;
                auVar159._12_4_ = auVar143._8_4_;
                auVar110 = ~auVar159 & auVar162 | auVar157 & auVar159;
                auStack_1298._0_4_ = (undefined4)uVar18;
                auStack_1298._4_4_ = (undefined4)((ulong)uVar18 >> 0x20);
                auVar126 = auVar162 & auVar159 | ~auVar159 & auVar157;
                auStack_12c8._0_4_ = (undefined4)uVar35;
                auStack_12c8._4_4_ = (undefined4)(uVar35 >> 0x20);
                uVar49 = -(uint)((int)uVar46 < (int)uVar44);
                uVar45 = auStack_1298._0_4_ & uVar49;
                uVar48 = auStack_1298._4_4_ & uVar49;
                auStack_1298._8_4_ = ~uVar49 & uVar44 | uVar46 & uVar49;
                auStack_1298._4_4_ = ~uVar49 & auStack_1298._4_4_ | auStack_12c8._4_4_ & uVar49;
                auStack_1298._0_4_ = ~uVar49 & auStack_1298._0_4_ | auStack_12c8._0_4_ & uVar49;
                auStack_1298._12_4_ = 0;
                uVar45 = uVar45 | ~uVar49 & auStack_12c8._0_4_;
                uVar48 = uVar48 | ~uVar49 & auStack_12c8._4_4_;
                uVar44 = uVar44 & uVar49 | ~uVar49 & uVar46;
                uStack_12a0._0_4_ = auVar126._8_4_;
                uVar46 = -(uint)((int)(uint)uStack_12a0 < (int)uVar44);
                uStack_12a8._0_4_ = auVar126._0_4_;
                uStack_12a8._4_4_ = auVar126._4_4_;
                uStack_12a0._4_4_ = auVar126._12_4_;
                auStack_12c8._8_4_ = (uint)uStack_12a0 & uVar46 | ~uVar46 & uVar44;
                auStack_12c8._4_4_ = uStack_12a8._4_4_ & uVar46 | ~uVar46 & uVar48;
                auStack_12c8._0_4_ = (uint)uStack_12a8 & uVar46 | ~uVar46 & uVar45;
                auStack_12c8._12_4_ = uStack_12a0._4_4_ & uVar46;
                uStack_12a8 = CONCAT44(~uVar46 & uStack_12a8._4_4_,~uVar46 & (uint)uStack_12a8);
                uStack_12a0._0_4_ = ~uVar46 & (uint)uStack_12a0;
                uStack_12a0._4_4_ = ~uVar46 & uStack_12a0._4_4_;
                auVar164._8_4_ = -(uint)(auVar110._8_4_ < (int)auStack_1298._8_4_);
                auVar164._0_8_ = CONCAT44(auVar164._8_4_,auVar164._8_4_);
                auVar164._12_4_ = auVar164._8_4_;
                auVar126 = ~auVar164 & auVar110 | auStack_1298 & auVar164;
                auVar145._8_4_ = -(uint)(auVar126._8_4_ < (int)auStack_12c8._8_4_);
                auVar145._4_4_ = auVar145._8_4_;
                auVar145._0_4_ = auVar145._8_4_;
                auVar145._12_4_ = auVar145._8_4_;
                *(ulong *)*pauVar39 =
                     CONCAT44(uVar46,uVar46) & CONCAT44(uVar48,uVar45) | uStack_12a8;
                *(ulong *)(*pauVar39 + 8) = uVar46 & uVar44 | uStack_12a0;
                pauVar39[2] = auVar126 & auVar145 | ~auVar145 & auStack_12c8;
                pauVar39[1] = auStack_12c8 & auVar145 | ~auVar145 & auVar126;
                uVar35 = auVar110._0_8_ & auVar164._0_8_ | ~auVar164._0_8_ & auStack_1298._0_8_;
              }
            }
          }
          pauVar39 = pauVar38;
          if ((uVar35 & 8) != 0) goto LAB_0010d481;
        }
      }
      pauVar38 = pauVar39;
      if (pauVar39 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_0010d43e;
LAB_0010d481:
  uVar32 = 0;
  puVar34 = (uint *)(uVar35 & 0xfffffffffffffff0);
  auStack_1248._4_4_ = local_11bc;
  auStack_1248._0_4_ = local_11bc;
  fStack_1240 = local_11bc;
  fStack_123c = local_11bc;
  uVar30 = (ulong)((uint)uVar35 & 0xf) - 8;
  in_R11 = uVar30;
  uVar35 = uVar32;
  if (uVar30 != 0) {
LAB_0010d4f8:
    lVar19 = *(long *)param_3;
    lVar15 = *(long *)(lVar19 + 0x220);
    lVar16 = *(long *)(lVar15 + (ulong)puVar34[0xc] * 8);
    pfVar10 = (float *)(lVar16 + (ulong)*puVar34 * 4);
    pfVar11 = (float *)(lVar16 + (ulong)puVar34[4] * 4);
    pfVar12 = (float *)(lVar16 + (ulong)puVar34[8] * 4);
    lVar16 = *(long *)(lVar15 + (ulong)puVar34[0xd] * 8);
    pfVar1 = (float *)(lVar16 + (ulong)puVar34[1] * 4);
    pfVar2 = (float *)(lVar16 + (ulong)puVar34[5] * 4);
    pfVar3 = (float *)(lVar16 + (ulong)puVar34[9] * 4);
    lVar16 = *(long *)(lVar15 + (ulong)puVar34[0xe] * 8);
    pfVar4 = (float *)(lVar16 + (ulong)puVar34[2] * 4);
    pfVar5 = (float *)(lVar16 + (ulong)puVar34[6] * 4);
    pfVar6 = (float *)(lVar16 + (ulong)puVar34[10] * 4);
    lVar15 = *(long *)(lVar15 + (ulong)puVar34[0xf] * 8);
    pfVar7 = (float *)(lVar15 + (ulong)puVar34[3] * 4);
    pfVar8 = (float *)(lVar15 + (ulong)puVar34[7] * 4);
    pfVar9 = (float *)(lVar15 + (ulong)puVar34[0xb] * 4);
    fVar152 = *(float *)(param_2 + 0x10);
    fVar90 = *(float *)(param_2 + 0x14);
    fVar93 = *(float *)(param_2 + 0x18);
    uStack_1078 = *(undefined8 *)(puVar34 + 0x10);
    uStack_1070 = *(undefined8 *)(puVar34 + 0x12);
    uStack_1068 = *(undefined8 *)(puVar34 + 0xc);
    uStack_1060 = *(undefined8 *)(puVar34 + 0xe);
    fVar192 = *(float *)param_2;
    fVar177 = *(float *)(param_2 + 4);
    fVar136 = *(float *)(param_2 + 8);
    fVar99 = pfVar12[2] - fVar136;
    fVar105 = pfVar3[2] - fVar136;
    fVar106 = pfVar6[2] - fVar136;
    fVar107 = pfVar9[2] - fVar136;
    fVar88 = pfVar10[2] - fVar136;
    fVar91 = pfVar1[2] - fVar136;
    fVar94 = pfVar4[2] - fVar136;
    fVar96 = pfVar7[2] - fVar136;
    fVar121 = pfVar11[2] - fVar136;
    fVar130 = pfVar2[2] - fVar136;
    fVar133 = pfVar5[2] - fVar136;
    fVar136 = pfVar8[2] - fVar136;
    fVar109 = pfVar12[1] - fVar177;
    fVar117 = pfVar3[1] - fVar177;
    fVar119 = pfVar6[1] - fVar177;
    fVar120 = pfVar9[1] - fVar177;
    fVar60 = *pfVar12 - fVar192;
    fVar68 = *pfVar3 - fVar192;
    fVar70 = *pfVar6 - fVar192;
    fVar71 = *pfVar9 - fVar192;
    fVar170 = *pfVar11 - fVar192;
    fVar171 = *pfVar2 - fVar192;
    fVar172 = *pfVar5 - fVar192;
    fVar173 = *pfVar8 - fVar192;
    fVar178 = pfVar10[1] - fVar177;
    fVar180 = pfVar1[1] - fVar177;
    fVar182 = pfVar4[1] - fVar177;
    fVar184 = pfVar7[1] - fVar177;
    fVar72 = fVar99 - fVar88;
    fVar79 = fVar105 - fVar91;
    fVar82 = fVar106 - fVar94;
    fVar85 = fVar107 - fVar96;
    fVar186 = *pfVar10 - fVar192;
    fVar188 = *pfVar1 - fVar192;
    fVar190 = *pfVar4 - fVar192;
    fVar192 = *pfVar7 - fVar192;
    fVar174 = pfVar11[1] - fVar177;
    fVar175 = pfVar2[1] - fVar177;
    fVar176 = pfVar5[1] - fVar177;
    fVar177 = pfVar8[1] - fVar177;
    fVar139 = fVar121 - fVar99;
    fVar146 = fVar130 - fVar105;
    fVar148 = fVar133 - fVar106;
    fVar150 = fVar136 - fVar107;
    fVar89 = fVar88 - fVar121;
    fVar92 = fVar91 - fVar130;
    fVar95 = fVar94 - fVar133;
    fVar97 = fVar96 - fVar136;
    fVar165 = fVar60 - fVar186;
    fVar167 = fVar68 - fVar188;
    fVar168 = fVar70 - fVar190;
    fVar169 = fVar71 - fVar192;
    fVar73 = fVar109 - fVar178;
    fVar80 = fVar117 - fVar180;
    fVar83 = fVar119 - fVar182;
    fVar86 = fVar120 - fVar184;
    fVar187 = fVar186 - fVar170;
    fVar189 = fVar188 - fVar171;
    fVar191 = fVar190 - fVar172;
    fVar193 = fVar192 - fVar173;
    fVar140 = fVar174 - fVar109;
    fVar147 = fVar175 - fVar117;
    fVar149 = fVar176 - fVar119;
    fVar151 = fVar177 - fVar120;
    fVar179 = fVar178 - fVar174;
    fVar181 = fVar180 - fVar175;
    fVar183 = fVar182 - fVar176;
    fVar185 = fVar184 - fVar177;
    fVar74 = fVar170 - fVar60;
    fVar81 = fVar171 - fVar68;
    fVar84 = fVar172 - fVar70;
    fVar87 = fVar173 - fVar71;
    fVar122 = ((fVar186 + fVar60) * fVar72 - fVar165 * (fVar88 + fVar99)) * fVar90 +
              (fVar165 * (fVar178 + fVar109) - fVar73 * (fVar186 + fVar60)) * fVar93 +
              ((fVar88 + fVar99) * fVar73 - (fVar178 + fVar109) * fVar72) * fVar152;
    fVar131 = ((fVar188 + fVar68) * fVar79 - fVar167 * (fVar91 + fVar105)) * fVar90 +
              (fVar167 * (fVar180 + fVar117) - fVar80 * (fVar188 + fVar68)) * fVar93 +
              ((fVar91 + fVar105) * fVar80 - (fVar180 + fVar117) * fVar79) * fVar152;
    fVar134 = ((fVar190 + fVar70) * fVar82 - fVar168 * (fVar94 + fVar106)) * fVar90 +
              (fVar168 * (fVar182 + fVar119) - fVar83 * (fVar190 + fVar70)) * fVar93 +
              ((fVar94 + fVar106) * fVar83 - (fVar182 + fVar119) * fVar82) * fVar152;
    fVar137 = ((fVar192 + fVar71) * fVar85 - fVar169 * (fVar96 + fVar107)) * fVar90 +
              (fVar169 * (fVar184 + fVar120) - fVar86 * (fVar192 + fVar71)) * fVar93 +
              ((fVar96 + fVar107) * fVar86 - (fVar184 + fVar120) * fVar85) * fVar152;
    fVar123 = ((fVar186 + fVar170) * fVar89 - fVar187 * (fVar88 + fVar121)) * fVar90 +
              (fVar187 * (fVar178 + fVar174) - fVar179 * (fVar186 + fVar170)) * fVar93 +
              ((fVar88 + fVar121) * fVar179 - (fVar178 + fVar174) * fVar89) * fVar152;
    fVar132 = ((fVar188 + fVar171) * fVar92 - fVar189 * (fVar91 + fVar130)) * fVar90 +
              (fVar189 * (fVar180 + fVar175) - fVar181 * (fVar188 + fVar171)) * fVar93 +
              ((fVar91 + fVar130) * fVar181 - (fVar180 + fVar175) * fVar92) * fVar152;
    auVar161._4_4_ = fVar132;
    auVar161._0_4_ = fVar123;
    fVar135 = ((fVar190 + fVar172) * fVar95 - fVar191 * (fVar94 + fVar133)) * fVar90 +
              (fVar191 * (fVar182 + fVar176) - fVar183 * (fVar190 + fVar172)) * fVar93 +
              ((fVar94 + fVar133) * fVar183 - (fVar182 + fVar176) * fVar95) * fVar152;
    fVar138 = ((fVar192 + fVar173) * fVar97 - fVar193 * (fVar96 + fVar136)) * fVar90 +
              (fVar193 * (fVar184 + fVar177) - fVar185 * (fVar192 + fVar173)) * fVar93 +
              ((fVar96 + fVar136) * fVar185 - (fVar184 + fVar177) * fVar97) * fVar152;
    auVar161._8_4_ = fVar135;
    auVar161._12_4_ = fVar138;
    auVar111._8_4_ = fVar134;
    auVar111._0_8_ = CONCAT44(fVar131,fVar122);
    auVar111._12_4_ = fVar137;
    auVar110 = maxps(auVar111,auVar161);
    auVar100._0_4_ =
         ((fVar121 + fVar99) * fVar140 - (fVar109 + fVar174) * fVar139) * fVar152 +
         ((fVar60 + fVar170) * fVar139 - fVar74 * (fVar121 + fVar99)) * fVar90 +
         (fVar74 * (fVar109 + fVar174) - fVar140 * (fVar60 + fVar170)) * fVar93;
    auVar100._4_4_ =
         ((fVar130 + fVar105) * fVar147 - (fVar117 + fVar175) * fVar146) * fVar152 +
         ((fVar68 + fVar171) * fVar146 - fVar81 * (fVar130 + fVar105)) * fVar90 +
         (fVar81 * (fVar117 + fVar175) - fVar147 * (fVar68 + fVar171)) * fVar93;
    auVar100._8_4_ =
         ((fVar133 + fVar106) * fVar149 - (fVar119 + fVar176) * fVar148) * fVar152 +
         ((fVar70 + fVar172) * fVar148 - fVar84 * (fVar133 + fVar106)) * fVar90 +
         (fVar84 * (fVar119 + fVar176) - fVar149 * (fVar70 + fVar172)) * fVar93;
    auVar100._12_4_ =
         ((fVar136 + fVar107) * fVar151 - (fVar120 + fVar177) * fVar150) * fVar152 +
         ((fVar71 + fVar173) * fVar150 - fVar87 * (fVar136 + fVar107)) * fVar90 +
         (fVar87 * (fVar120 + fVar177) - fVar151 * (fVar71 + fVar173)) * fVar93;
    auVar110 = maxps(auVar110,auVar100);
    auVar156._0_4_ = fVar123 + fVar122 + auVar100._0_4_;
    auVar156._4_4_ = fVar132 + fVar131 + auVar100._4_4_;
    auVar156._8_4_ = fVar135 + fVar134 + auVar100._8_4_;
    auVar156._12_4_ = fVar138 + fVar137 + auVar100._12_4_;
    fVar177 = (float)((uint)auVar156._0_4_ & uVar43) * __LC15;
    fVar136 = (float)((uint)auVar156._4_4_ & uVar47) * _UNK_00115404;
    fVar60 = (float)((uint)auVar156._8_4_ & uVar51) * _UNK_00115408;
    fVar68 = (float)((uint)auVar156._12_4_ & uVar55) * _UNK_0011540c;
    auVar112._4_4_ = -(uint)(auVar110._4_4_ <= fVar136);
    auVar112._0_4_ = -(uint)(auVar110._0_4_ <= fVar177);
    auVar112._8_4_ = -(uint)(auVar110._8_4_ <= fVar60);
    auVar112._12_4_ = -(uint)(auVar110._12_4_ <= fVar68);
    auVar61._8_4_ = fVar134;
    auVar61._0_8_ = CONCAT44(fVar131,fVar122);
    auVar61._12_4_ = fVar137;
    auVar110 = minps(auVar61,auVar161);
    auVar110 = minps(auVar110,auVar100);
    _local_11f8 = _auStack_1248;
    auVar62._4_4_ = -(uint)((float)((uint)fVar136 ^ uVar28) <= auVar110._4_4_);
    auVar62._0_4_ = -(uint)((float)((uint)fVar177 ^ uVar28) <= auVar110._0_4_);
    auVar62._8_4_ = -(uint)((float)((uint)fVar60 ^ uVar28) <= auVar110._8_4_);
    auVar62._12_4_ = -(uint)((float)((uint)fVar68 ^ uVar28) <= auVar110._12_4_);
    auVar62 = auVar62 | auVar112;
    auVar63._0_4_ = auVar62._0_4_ & _DAT_00116108;
    auVar63._4_4_ = auVar62._4_4_ & uRam000000000011610c;
    auVar63._8_4_ = auVar62._8_4_ & uRam0000000000116110;
    auVar63._12_4_ = auVar62._12_4_ & uRam0000000000116114;
    iVar36 = movmskps((int)lVar15,auVar63);
    if (iVar36 != 0) {
      fVar177 = fVar140 * fVar89;
      fVar136 = fVar147 * fVar92;
      auVar166._4_4_ = fVar136;
      auVar166._0_4_ = fVar177;
      fVar70 = fVar149 * fVar95;
      fVar99 = fVar151 * fVar97;
      auVar166._8_4_ = fVar70;
      auVar166._12_4_ = fVar99;
      uVar44 = -(uint)((float)((uint)(fVar72 * fVar179) & uVar43) < (float)((uint)fVar177 & uVar43))
      ;
      uVar48 = -(uint)((float)((uint)(fVar79 * fVar181) & uVar47) < (float)((uint)fVar136 & uVar47))
      ;
      uVar52 = -(uint)((float)((uint)(fVar82 * fVar183) & uVar51) < (float)((uint)fVar70 & uVar51));
      uVar56 = -(uint)((float)((uint)(fVar85 * fVar185) & uVar55) < (float)((uint)fVar99 & uVar55));
      uVar45 = -(uint)((float)((uint)(fVar165 * fVar89) & uVar43) <
                      (float)((uint)(fVar139 * fVar187) & uVar43));
      uVar49 = -(uint)((float)((uint)(fVar167 * fVar92) & uVar47) <
                      (float)((uint)(fVar146 * fVar189) & uVar47));
      uVar53 = -(uint)((float)((uint)(fVar168 * fVar95) & uVar51) <
                      (float)((uint)(fVar148 * fVar191) & uVar51));
      uVar57 = -(uint)((float)((uint)(fVar169 * fVar97) & uVar55) <
                      (float)((uint)(fVar150 * fVar193) & uVar55));
      uVar46 = -(uint)((float)((uint)(fVar73 * fVar187) & uVar43) <
                      (float)((uint)(fVar74 * fVar179) & uVar43));
      uVar50 = -(uint)((float)((uint)(fVar80 * fVar189) & uVar47) <
                      (float)((uint)(fVar81 * fVar181) & uVar47));
      uVar54 = -(uint)((float)((uint)(fVar83 * fVar191) & uVar51) <
                      (float)((uint)(fVar84 * fVar183) & uVar51));
      uVar58 = -(uint)((float)((uint)(fVar86 * fVar193) & uVar55) <
                      (float)((uint)(fVar87 * fVar185) & uVar55));
      fVar60 = (float)(uVar46 & (uint)(fVar165 * fVar179 - fVar73 * fVar187) |
                      ~uVar46 & (uint)(fVar140 * fVar187 - fVar74 * fVar179));
      fVar68 = (float)(uVar50 & (uint)(fVar167 * fVar181 - fVar80 * fVar189) |
                      ~uVar50 & (uint)(fVar147 * fVar189 - fVar81 * fVar181));
      fVar71 = (float)(uVar54 & (uint)(fVar168 * fVar183 - fVar83 * fVar191) |
                      ~uVar54 & (uint)(fVar149 * fVar191 - fVar84 * fVar183));
      fVar105 = (float)(uVar58 & (uint)(fVar169 * fVar185 - fVar86 * fVar193) |
                       ~uVar58 & (uint)(fVar151 * fVar193 - fVar87 * fVar185));
      auVar113._0_4_ = uVar45 & (uint)(fVar72 * fVar187 - fVar165 * fVar89);
      auVar113._4_4_ = uVar49 & (uint)(fVar79 * fVar189 - fVar167 * fVar92);
      auVar113._8_4_ = uVar53 & (uint)(fVar82 * fVar191 - fVar168 * fVar95);
      auVar113._12_4_ = uVar57 & (uint)(fVar85 * fVar193 - fVar169 * fVar97);
      auVar20._4_4_ = ~uVar49 & (uint)(fVar81 * fVar92 - fVar146 * fVar189);
      auVar20._0_4_ = ~uVar45 & (uint)(fVar74 * fVar89 - fVar139 * fVar187);
      auVar20._8_4_ = ~uVar53 & (uint)(fVar84 * fVar95 - fVar148 * fVar191);
      auVar20._12_4_ = ~uVar57 & (uint)(fVar87 * fVar97 - fVar150 * fVar193);
      auVar113 = auVar113 | auVar20;
      auVar127._0_4_ = uVar44 & (uint)(fVar73 * fVar89 - fVar72 * fVar179);
      auVar127._4_4_ = uVar48 & (uint)(fVar80 * fVar92 - fVar79 * fVar181);
      auVar127._8_4_ = uVar52 & (uint)(fVar83 * fVar95 - fVar82 * fVar183);
      auVar127._12_4_ = uVar56 & (uint)(fVar86 * fVar97 - fVar85 * fVar185);
      auVar21._4_4_ = ~uVar48 & (uint)(fVar146 * fVar181 - fVar136);
      auVar21._0_4_ = ~uVar44 & (uint)(fVar139 * fVar179 - fVar177);
      auVar21._8_4_ = ~uVar52 & (uint)(fVar148 * fVar183 - fVar70);
      auVar21._12_4_ = ~uVar56 & (uint)(fVar150 * fVar185 - fVar99);
      auVar127 = auVar127 | auVar21;
      fVar177 = fVar90 * auVar113._0_4_ + fVar93 * fVar60 + fVar152 * auVar127._0_4_;
      fVar136 = fVar90 * auVar113._4_4_ + fVar93 * fVar68 + fVar152 * auVar127._4_4_;
      fVar70 = fVar90 * auVar113._8_4_ + fVar93 * fVar71 + fVar152 * auVar127._8_4_;
      fVar152 = fVar90 * auVar113._12_4_ + fVar93 * fVar105 + fVar152 * auVar127._12_4_;
      auVar142._0_4_ = fVar177 + fVar177;
      auVar142._4_4_ = fVar136 + fVar136;
      auVar142._8_4_ = fVar70 + fVar70;
      auVar142._12_4_ = fVar152 + fVar152;
      auVar110 = rcpps(auVar166,auVar142);
      fVar90 = auVar110._0_4_;
      fVar70 = auVar110._4_4_;
      fVar72 = auVar110._8_4_;
      fVar73 = auVar110._12_4_;
      fVar152 = fVar178 * auVar113._0_4_ + fVar88 * fVar60 + fVar186 * auVar127._0_4_;
      fVar93 = fVar180 * auVar113._4_4_ + fVar91 * fVar68 + fVar188 * auVar127._4_4_;
      fVar177 = fVar182 * auVar113._8_4_ + fVar94 * fVar71 + fVar190 * auVar127._8_4_;
      fVar136 = fVar184 * auVar113._12_4_ + fVar96 * fVar105 + fVar192 * auVar127._12_4_;
      fVar90 = (fVar152 + fVar152) * ((_LC7 - auVar142._0_4_ * fVar90) * fVar90 + fVar90);
      fVar93 = (fVar93 + fVar93) * ((_LC7 - auVar142._4_4_ * fVar70) * fVar70 + fVar70);
      fVar192 = (fVar177 + fVar177) * ((_LC7 - auVar142._8_4_ * fVar72) * fVar72 + fVar72);
      fVar177 = (fVar136 + fVar136) * ((_LC7 - auVar142._12_4_ * fVar73) * fVar73 + fVar73);
      fVar152 = *(float *)(param_2 + 0xc);
      auVar64._0_4_ =
           auVar63._0_4_ & -(uint)(fVar152 <= fVar90 && fVar90 <= (float)auStack_1248._0_4_) &
           -(uint)(auVar142._0_4_ != 0.0);
      auVar64._4_4_ =
           auVar63._4_4_ & -(uint)(fVar152 <= fVar93 && fVar93 <= (float)auStack_1248._4_4_) &
           -(uint)(auVar142._4_4_ != 0.0);
      auVar64._8_4_ =
           auVar63._8_4_ & -(uint)(fVar152 <= fVar192 && fVar192 <= fStack_1240) &
           -(uint)(auVar142._8_4_ != 0.0);
      auVar64._12_4_ =
           auVar63._12_4_ & -(uint)(fVar152 <= fVar177 && fVar177 <= fStack_123c) &
           -(uint)(auVar142._12_4_ != 0.0);
      iVar41 = movmskps((int)uVar35,auVar64);
      uVar35 = CONCAT44((int)(uVar35 >> 0x20),iVar41);
      if (iVar41 != 0) {
        auStack_fb8 = auVar127;
        auVar110 = rcpps(auVar127,auVar156);
        auStack_fa8 = auVar113;
        afStack_f98[0] = fVar60;
        afStack_f98[1] = fVar68;
        afStack_f98[2] = fVar71;
        afStack_f98[3] = fVar105;
        auStack_1088 = auVar64;
        fVar152 = auVar110._0_4_;
        fVar136 = auVar110._4_4_;
        fVar60 = auVar110._8_4_;
        fVar68 = auVar110._12_4_;
        afStack_fc8[0] = fVar90;
        afStack_fc8[1] = fVar93;
        afStack_fc8[2] = fVar192;
        afStack_fc8[3] = fVar177;
        auVar128._4_4_ = _LC18;
        auVar128._0_4_ = _LC18;
        auVar128._8_4_ = _LC18;
        auVar128._12_4_ = _LC18;
        fVar152 = (float)(~-(uint)((float)((uint)auVar156._0_4_ & uVar43) < _LC5) &
                         (uint)((_LC7 - auVar156._0_4_ * fVar152) * fVar152 + fVar152));
        fVar136 = (float)(~-(uint)((float)((uint)auVar156._4_4_ & uVar47) < _UNK_001153d4) &
                         (uint)((_LC7 - auVar156._4_4_ * fVar136) * fVar136 + fVar136));
        fVar60 = (float)(~-(uint)((float)((uint)auVar156._8_4_ & uVar51) < _UNK_001153d8) &
                        (uint)((_LC7 - auVar156._8_4_ * fVar60) * fVar60 + fVar60));
        fVar68 = (float)(~-(uint)((float)((uint)auVar156._12_4_ & uVar55) < _UNK_001153dc) &
                        (uint)((_LC7 - auVar156._12_4_ * fVar68) * fVar68 + fVar68));
        auVar75._0_4_ = fVar122 * fVar152;
        auVar75._4_4_ = fVar131 * fVar136;
        auVar75._8_4_ = fVar134 * fVar60;
        auVar75._12_4_ = fVar137 * fVar68;
        auVar25._4_12_ = _UNK_001153e4;
        auVar25._0_4_ = _LC7;
        auStack_fe8 = minps(auVar75,auVar25);
        auVar76._0_4_ = fVar123 * fVar152;
        auVar76._4_4_ = fVar132 * fVar136;
        auVar76._8_4_ = fVar135 * fVar60;
        auVar76._12_4_ = fVar138 * fVar68;
        auVar26._4_12_ = _UNK_001153e4;
        auVar26._0_4_ = _LC7;
        auStack_fd8 = minps(auVar76,auVar26);
        auVar101._0_4_ = ~auVar64._0_4_ & _LC18;
        auVar101._4_4_ = ~auVar64._4_4_ & _LC18;
        auVar101._8_4_ = ~auVar64._8_4_ & _LC18;
        auVar101._12_4_ = ~auVar64._12_4_ & _LC18;
        auVar77._0_4_ = auVar64._0_4_ & (uint)fVar90;
        auVar77._4_4_ = auVar64._4_4_ & (uint)fVar93;
        auVar77._8_4_ = auVar64._8_4_ & (uint)fVar192;
        auVar77._12_4_ = auVar64._12_4_ & (uint)fVar177;
        auVar77 = auVar77 | auVar101;
        auVar102._4_4_ = auVar77._0_4_;
        auVar102._0_4_ = auVar77._4_4_;
        auVar102._8_4_ = auVar77._12_4_;
        auVar102._12_4_ = auVar77._8_4_;
        auVar110 = minps(auVar102,auVar77);
        auVar114._0_8_ = auVar110._8_8_;
        auVar114._8_4_ = auVar110._0_4_;
        auVar114._12_4_ = auVar110._4_4_;
        auVar110 = minps(auVar114,auVar110);
        auVar65._0_4_ = auVar64._0_4_ & -(uint)(auVar77._0_4_ == auVar110._0_4_);
        auVar65._4_4_ = auVar64._4_4_ & -(uint)(auVar77._4_4_ == auVar110._4_4_);
        auVar65._8_4_ = auVar64._8_4_ & -(uint)(auVar77._8_4_ == auVar110._8_4_);
        auVar65._12_4_ = auVar64._12_4_ & -(uint)(auVar77._12_4_ == auVar110._12_4_);
        iVar36 = movmskps(iVar36,auVar65);
        uVar42 = uVar35;
        if (iVar36 != 0) {
          uVar42 = CONCAT44((int)((ulong)lVar15 >> 0x20),iVar36);
        }
        uVar35 = 0;
        if (uVar42 != 0) {
          for (; (uVar42 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
          }
        }
        uVar44 = *(uint *)((long)&uStack_1068 + uVar35 * 4);
        do {
          pbVar37 = *(byte **)(param_3 + 0x10);
          pRVar31 = *(RayHitK **)(*(long *)(lVar19 + 0x1e0) + (ulong)uVar44 * 8);
          pcVar33 = *(code **)(pbVar37 + 0x10);
          if ((pcVar33 == (code *)0x0) && (*(long *)(pRVar31 + 0x40) == 0)) {
            uVar14 = *(undefined4 *)((long)&uStack_1078 + uVar35 * 4);
            *(uint *)(param_2 + 0x48) = uVar44;
            uVar40 = *(undefined4 *)(auStack_fb8 + uVar35 * 4);
            local_11bc = afStack_fc8[uVar35];
            uVar13 = *(undefined4 *)(auStack_fe8 + uVar35 * 4);
            *(undefined4 *)(param_2 + 0x44) = uVar14;
            puVar17 = *(undefined4 **)(param_3 + 8);
            *(undefined4 *)(param_2 + 0x30) = uVar40;
            fVar152 = afStack_fc8[uVar35 - 4];
            local_11f8._4_4_ = local_11bc;
            local_11f8._0_4_ = local_11bc;
            fStack_11f0 = local_11bc;
            fStack_11ec = local_11bc;
            uVar40 = *puVar17;
            *(float *)(param_2 + 0x34) = afStack_f98[uVar35 - 4];
            fVar90 = afStack_f98[uVar35];
            *(float *)(param_2 + 0x20) = local_11bc;
            *(undefined4 *)(param_2 + 0x4c) = uVar40;
            *(float *)(param_2 + 0x38) = fVar90;
            *(undefined4 *)(param_2 + 0x3c) = uVar13;
            *(float *)(param_2 + 0x40) = fVar152;
            break;
          }
          uStack_1040 = uVar44;
          uStack_104c = *(undefined4 *)(auStack_fe8 + uVar35 * 4);
          fStack_1050 = afStack_f98[uVar35];
          uStack_10bc = 0xffffffff;
          fStack_1048 = afStack_fc8[uVar35 - 4];
          uStack_1044 = *(undefined4 *)((long)&uStack_1078 + uVar35 * 4);
          puStack_10a8 = *(undefined4 **)(param_3 + 8);
          uStack_103c = **(undefined4 **)(param_3 + 8);
          fStack_1054 = afStack_f98[uVar35 - 4];
          *(float *)(param_2 + 0x20) = afStack_fc8[uVar35];
          puStack_10b8 = &uStack_10bc;
          uStack_10b0 = *(undefined8 *)(pRVar31 + 0x18);
          puStack_1098 = &uStack_1058;
          pRStack_10a0 = param_2;
          uStack_1090 = 1;
          uStack_1058 = *(undefined4 *)(auStack_fb8 + uVar35 * 4);
          if (*(code **)(pRVar31 + 0x40) == (code *)0x0) {
LAB_0010ddbe:
            if ((pcVar33 != (code *)0x0) &&
               (((*pbVar37 & 2) != 0 || (((byte)pRVar31[0x3e] & 0x40) != 0)))) {
              (*pcVar33)(&puStack_10b8);
              auVar128._4_12_ = _UNK_00115414;
              auVar128._0_4_ = _LC18;
              pRVar31 = (RayHitK *)(ulong)*puStack_10b8;
              uVar43 = _LC3;
              uVar47 = _UNK_001153c4;
              uVar51 = _UNK_001153c8;
              uVar55 = _UNK_001153cc;
              if (*puStack_10b8 == 0) goto LAB_0010df50;
            }
            *(undefined4 *)(pRStack_10a0 + 0x30) = *puStack_1098;
            *(undefined4 *)(pRStack_10a0 + 0x34) = puStack_1098[1];
            *(undefined4 *)(pRStack_10a0 + 0x38) = puStack_1098[2];
            *(undefined4 *)(pRStack_10a0 + 0x3c) = puStack_1098[3];
            *(undefined4 *)(pRStack_10a0 + 0x40) = puStack_1098[4];
            *(undefined4 *)(pRStack_10a0 + 0x44) = puStack_1098[5];
            *(undefined4 *)(pRStack_10a0 + 0x48) = puStack_1098[6];
            *(undefined4 *)(pRStack_10a0 + 0x4c) = puStack_1098[7];
            local_11bc = *(float *)(param_2 + 0x20);
            auStack_1248._4_4_ = local_11bc;
            auStack_1248._0_4_ = local_11bc;
            fStack_1240 = local_11bc;
            fStack_123c = local_11bc;
            pRVar31 = pRStack_10a0;
          }
          else {
            (**(code **)(pRVar31 + 0x40))(&puStack_10b8);
            auVar128._4_12_ = _UNK_00115414;
            auVar128._0_4_ = _LC18;
            if (*puStack_10b8 != 0) {
              pbVar37 = *(byte **)(param_3 + 0x10);
              pcVar33 = *(code **)(pbVar37 + 0x10);
              uVar43 = _LC3;
              uVar47 = _UNK_001153c4;
              uVar51 = _UNK_001153c8;
              uVar55 = _UNK_001153cc;
              goto LAB_0010ddbe;
            }
LAB_0010df50:
            uVar55 = _UNK_001153cc;
            uVar51 = _UNK_001153c8;
            uVar47 = _UNK_001153c4;
            uVar43 = _LC3;
            *(float *)(param_2 + 0x20) = local_11bc;
          }
          *(undefined4 *)(auStack_1088 + uVar35 * 4) = 0;
          auStack_1088._0_4_ = -(uint)(fVar90 <= SUB164(_auStack_1248,0)) & auStack_1088._0_4_;
          auStack_1088._4_4_ = -(uint)(fVar93 <= SUB164(_auStack_1248,4)) & auStack_1088._4_4_;
          auStack_1088._8_4_ = -(uint)(fVar192 <= SUB164(_auStack_1248,8)) & auStack_1088._8_4_;
          auStack_1088._12_4_ = -(uint)(fVar177 <= SUB164(_auStack_1248,0xc)) & auStack_1088._12_4_;
          iVar36 = movmskps((int)uVar35,auStack_1088);
          uVar35 = CONCAT44((int)(uVar35 >> 0x20),iVar36);
          if (iVar36 == 0) goto LAB_0010df90;
          auVar103._0_4_ = ~auStack_1088._0_4_ & auVar128._0_4_;
          auVar103._4_4_ = ~auStack_1088._4_4_ & auVar128._4_4_;
          auVar103._8_4_ = ~auStack_1088._8_4_ & auVar128._8_4_;
          auVar103._12_4_ = ~auStack_1088._12_4_ & auVar128._12_4_;
          auVar78._0_4_ = auStack_1088._0_4_ & (uint)fVar90;
          auVar78._4_4_ = auStack_1088._4_4_ & (uint)fVar93;
          auVar78._8_4_ = auStack_1088._8_4_ & (uint)fVar192;
          auVar78._12_4_ = auStack_1088._12_4_ & (uint)fVar177;
          auVar78 = auVar78 | auVar103;
          auVar104._4_4_ = auVar78._0_4_;
          auVar104._0_4_ = auVar78._4_4_;
          auVar104._8_4_ = auVar78._12_4_;
          auVar104._12_4_ = auVar78._8_4_;
          auVar110 = minps(auVar104,auVar78);
          auVar115._0_8_ = auVar110._8_8_;
          auVar115._8_4_ = auVar110._0_4_;
          auVar115._12_4_ = auVar110._4_4_;
          auVar110 = minps(auVar115,auVar110);
          auVar66._0_4_ = auStack_1088._0_4_ & -(uint)(auVar78._0_4_ == auVar110._0_4_);
          auVar66._4_4_ = auStack_1088._4_4_ & -(uint)(auVar78._4_4_ == auVar110._4_4_);
          auVar66._8_4_ = auStack_1088._8_4_ & -(uint)(auVar78._8_4_ == auVar110._8_4_);
          auVar66._12_4_ = auStack_1088._12_4_ & -(uint)(auVar78._12_4_ == auVar110._12_4_);
          iVar36 = movmskps((int)pRVar31,auVar66);
          uVar42 = uVar35;
          if (iVar36 != 0) {
            uVar42 = CONCAT44((int)((ulong)pRVar31 >> 0x20),iVar36);
          }
          uVar35 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
            }
          }
          uVar44 = *(uint *)((long)&uStack_1068 + uVar35 * 4);
        } while( true );
      }
    }
    goto LAB_0010dc35;
  }
  local_11f8._4_4_ = local_11bc;
  local_11f8._0_4_ = local_11bc;
  fStack_11f0 = local_11bc;
  fStack_11ec = local_11bc;
  goto LAB_0010d2c8;
LAB_0010df90:
  _local_11f8 = _auStack_1248;
LAB_0010dc35:
  uVar32 = uVar32 + 1;
  puVar34 = puVar34 + 0x14;
  _auStack_1248 = _local_11f8;
  if (uVar32 == uVar30) goto LAB_0010d2c8;
  goto LAB_0010d4f8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  ulong *puVar33;
  long lVar34;
  code *pcVar35;
  undefined4 uVar36;
  ulong uVar37;
  float *pfVar38;
  long lVar39;
  long lVar40;
  byte *pbVar41;
  ulong uVar42;
  uint *puVar43;
  ulong uVar44;
  long in_FS_OFFSET;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar52;
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar62;
  undefined1 auVar58 [16];
  float fVar63;
  float fVar64;
  float fVar70;
  float fVar72;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar81 [16];
  float fVar85;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  undefined1 auVar87 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar111;
  float fVar112;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined8 local_a98;
  undefined8 local_a88;
  float fStack_a30;
  float fStack_a2c;
  float fStack_a10;
  float fStack_a0c;
  undefined8 local_a08;
  int iStack_91c;
  int *piStack_918;
  undefined8 uStack_910;
  undefined4 *puStack_908;
  RayK *pRStack_900;
  undefined4 *puStack_8f8;
  undefined4 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  undefined4 uStack_8b4;
  uint uStack_8b0;
  undefined4 uStack_8ac;
  float local_848 [4];
  float local_838 [4];
  float local_828 [4];
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar22 = *(float *)(param_2 + 0x20), 0.0 <= fVar22)) {
    fVar79 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar79 < 0.0) {
      fVar79 = 0.0;
    }
    fVar29 = *(float *)param_2;
    fVar30 = *(float *)(param_2 + 4);
    fVar31 = *(float *)(param_2 + 8);
    uVar45 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
    uVar47 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
    auVar86._0_4_ = ~uVar45 & *(uint *)(param_2 + 0x10);
    auVar86._4_4_ = ~uVar46 & *(uint *)(param_2 + 0x14);
    auVar86._8_4_ = ~uVar47 & *(uint *)(param_2 + 0x18);
    auVar86._12_4_ = ~uVar48 & *(uint *)(param_2 + 0x1c);
    auVar50._0_4_ = uVar45 & (uint)_LC5;
    auVar50._4_4_ = uVar46 & (uint)_LC5;
    auVar50._8_4_ = uVar47 & (uint)_LC5;
    auVar50._12_4_ = uVar48 & (uint)_LC5;
    auVar50 = auVar50 | auVar86;
    auVar86 = rcpps(auVar86,auVar50);
    fVar63 = auVar86._0_4_;
    fVar70 = auVar86._4_4_;
    fVar72 = auVar86._8_4_;
    fVar63 = (_LC7 - auVar50._0_4_ * fVar63) * fVar63 + fVar63;
    fVar70 = (_LC7 - auVar50._4_4_ * fVar70) * fVar70 + fVar70;
    fVar72 = (_LC7 - auVar50._8_4_ * fVar72) * fVar72 + fVar72;
    puVar33 = local_7e0;
    do {
      fVar121 = *(float *)(param_2 + 0x1c);
      uVar44 = puVar33[-1];
      puVar33 = puVar33 + -1;
      while( true ) {
        puVar43 = (uint *)(uVar44 & 0xfffffffffffffff0);
        uVar42 = (ulong)((uint)uVar44 & 0xf);
        if ((uVar44 & 8) != 0) break;
        auVar109._4_4_ = fVar79;
        auVar109._0_4_ = fVar79;
        auVar109._8_4_ = fVar79;
        auVar109._12_4_ = fVar79;
        auVar114._4_4_ = fVar22;
        auVar114._0_4_ = fVar22;
        auVar114._8_4_ = fVar22;
        auVar114._12_4_ = fVar22;
        pfVar1 = (float *)((long)puVar43 + (ulong)(-(uint)(fVar70 < 0.0) & 0x10) + 0x40);
        pfVar2 = (float *)((long)puVar43 + (ulong)(-(uint)(fVar72 < 0.0) & 0x10) + 0x60);
        pfVar5 = (float *)(puVar43 + (ulong)(fVar63 < 0.0) * 4 + 8);
        pfVar3 = (float *)((long)puVar43 + ((ulong)(fVar63 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar4 = (float *)((long)puVar43 + (-(ulong)(fVar70 < 0.0) & 0xfffffffffffffff0) + 0x50);
        pfVar38 = (float *)((long)puVar43 + (-(ulong)(fVar72 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar56._0_4_ = ((pfVar1[0x18] * fVar121 + *pfVar1) - fVar30) * fVar70;
        auVar56._4_4_ = ((pfVar1[0x19] * fVar121 + pfVar1[1]) - fVar30) * fVar70;
        auVar56._8_4_ = ((pfVar1[0x1a] * fVar121 + pfVar1[2]) - fVar30) * fVar70;
        auVar56._12_4_ = ((pfVar1[0x1b] * fVar121 + pfVar1[3]) - fVar30) * fVar70;
        auVar65._0_4_ = ((pfVar2[0x18] * fVar121 + *pfVar2) - fVar31) * fVar72;
        auVar65._4_4_ = ((pfVar2[0x19] * fVar121 + pfVar2[1]) - fVar31) * fVar72;
        auVar65._8_4_ = ((pfVar2[0x1a] * fVar121 + pfVar2[2]) - fVar31) * fVar72;
        auVar65._12_4_ = ((pfVar2[0x1b] * fVar121 + pfVar2[3]) - fVar31) * fVar72;
        auVar50 = maxps(auVar56,auVar65);
        auVar66._0_4_ = ((pfVar5[0x18] * fVar121 + *pfVar5) - fVar29) * fVar63;
        auVar66._4_4_ = ((pfVar5[0x19] * fVar121 + pfVar5[1]) - fVar29) * fVar63;
        auVar66._8_4_ = ((pfVar5[0x1a] * fVar121 + pfVar5[2]) - fVar29) * fVar63;
        auVar66._12_4_ = ((pfVar5[0x1b] * fVar121 + pfVar5[3]) - fVar29) * fVar63;
        auVar86 = maxps(auVar109,auVar66);
        auVar86 = maxps(auVar86,auVar50);
        auVar67._0_4_ = ((pfVar38[0x18] * fVar121 + *pfVar38) - fVar31) * fVar72;
        auVar67._4_4_ = ((pfVar38[0x19] * fVar121 + pfVar38[1]) - fVar31) * fVar72;
        auVar67._8_4_ = ((pfVar38[0x1a] * fVar121 + pfVar38[2]) - fVar31) * fVar72;
        auVar67._12_4_ = ((pfVar38[0x1b] * fVar121 + pfVar38[3]) - fVar31) * fVar72;
        auVar57._0_4_ = ((pfVar4[0x18] * fVar121 + *pfVar4) - fVar30) * fVar70;
        auVar57._4_4_ = ((pfVar4[0x19] * fVar121 + pfVar4[1]) - fVar30) * fVar70;
        auVar57._8_4_ = ((pfVar4[0x1a] * fVar121 + pfVar4[2]) - fVar30) * fVar70;
        auVar57._12_4_ = ((pfVar4[0x1b] * fVar121 + pfVar4[3]) - fVar30) * fVar70;
        auVar50 = minps(auVar57,auVar67);
        auVar68._0_4_ = ((pfVar3[0x18] * fVar121 + *pfVar3) - fVar29) * fVar63;
        auVar68._4_4_ = ((pfVar3[0x19] * fVar121 + pfVar3[1]) - fVar29) * fVar63;
        auVar68._8_4_ = ((pfVar3[0x1a] * fVar121 + pfVar3[2]) - fVar29) * fVar63;
        auVar68._12_4_ = ((pfVar3[0x1b] * fVar121 + pfVar3[3]) - fVar29) * fVar63;
        auVar115 = minps(auVar114,auVar68);
        auVar50 = minps(auVar115,auVar50);
        bVar25 = auVar86._0_4_ <= auVar50._0_4_;
        bVar26 = auVar86._4_4_ <= auVar50._4_4_;
        bVar27 = auVar86._8_4_ <= auVar50._8_4_;
        bVar28 = auVar86._12_4_ <= auVar50._12_4_;
        auVar110._4_4_ = -(uint)bVar26;
        auVar110._0_4_ = -(uint)bVar25;
        auVar110._8_4_ = -(uint)bVar27;
        auVar110._12_4_ = -(uint)bVar28;
        if (uVar42 == 6) {
          auVar110._0_4_ =
               -(uint)(((float)puVar43[0x38] <= fVar121 && fVar121 < (float)puVar43[0x3c]) && bVar25
                      );
          auVar110._4_4_ =
               -(uint)(((float)puVar43[0x39] <= fVar121 && fVar121 < (float)puVar43[0x3d]) && bVar26
                      );
          auVar110._8_4_ =
               -(uint)(((float)puVar43[0x3a] <= fVar121 && fVar121 < (float)puVar43[0x3e]) && bVar27
                      );
          auVar110._12_4_ =
               -(uint)(((float)puVar43[0x3b] <= fVar121 && fVar121 < (float)puVar43[0x3f]) && bVar28
                      );
        }
        uVar36 = movmskps((int)pfVar3,auVar110);
        uVar42 = CONCAT44((int)((ulong)pfVar3 >> 0x20),uVar36);
        if (uVar42 == 0) goto LAB_0010e657;
        lVar39 = 0;
        if (uVar42 != 0) {
          for (; (uVar42 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
          }
        }
        uVar44 = *(ulong *)(puVar43 + lVar39 * 2);
        uVar42 = uVar42 - 1 & uVar42;
        if (uVar42 != 0) {
          *puVar33 = uVar44;
          uVar37 = uVar42 - 1;
          lVar39 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
            }
          }
          while( true ) {
            puVar33 = puVar33 + 1;
            uVar44 = *(ulong *)(puVar43 + lVar39 * 2);
            uVar37 = uVar37 & uVar42;
            if (uVar37 == 0) break;
            *puVar33 = uVar44;
            uVar42 = uVar37 - 1;
            lVar39 = 0;
            if (uVar37 != 0) {
              for (; (uVar37 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
              }
            }
          }
        }
      }
      if (uVar42 != 8) {
        do {
          lVar39 = *(long *)param_3;
          lVar40 = *(long *)(lVar39 + 0x1e0);
          lVar24 = *(long *)(lVar40 + (ulong)puVar43[0xc] * 8);
          fVar49 = ((fVar121 - *(float *)(lVar24 + 0x2c)) /
                   (*(float *)(lVar24 + 0x30) - *(float *)(lVar24 + 0x2c))) *
                   *(float *)(lVar24 + 0x28);
          fVar55 = *(float *)(lVar24 + 0x28) - _LC7;
          fVar121 = fVar49;
          if ((float)(_LC3 & (uint)fVar49) < _LC19) {
            fVar121 = (float)(~_LC3 & (uint)fVar49 |
                             (uint)((float)(int)fVar49 -
                                   (float)(-(uint)(fVar49 < (float)(int)fVar49) & (uint)_LC7)));
          }
          if (fVar55 <= fVar121) {
            fVar121 = fVar55;
          }
          if (0.0 <= fVar121) {
            fVar49 = fVar49 - fVar121;
            lVar34 = (long)(int)fVar121 * 0x30;
            local_a98 = (long)((int)fVar121 + 1) * 0x30;
          }
          else {
            local_a98 = 0x30;
            lVar34 = 0;
          }
          lVar23 = *(long *)(*(long *)(lVar24 + 0xd0) + lVar34);
          pfVar1 = (float *)(lVar23 + (ulong)*puVar43 * 4);
          pfVar2 = (float *)(lVar23 + (ulong)puVar43[2] * 4);
          pfVar5 = (float *)(lVar23 + (ulong)puVar43[1] * 4);
          pfVar3 = (float *)(lVar23 + (ulong)puVar43[3] * 4);
          pfVar4 = (float *)(lVar23 + (ulong)puVar43[4] * 4);
          pfVar38 = (float *)(lVar23 + (ulong)puVar43[5] * 4);
          pfVar6 = (float *)(lVar23 + (ulong)puVar43[6] * 4);
          pfVar7 = (float *)(lVar23 + (ulong)puVar43[7] * 4);
          pfVar8 = (float *)(lVar23 + (ulong)puVar43[8] * 4);
          lVar34 = lVar23 + (ulong)puVar43[10] * 4;
          pfVar9 = (float *)(lVar23 + (ulong)puVar43[9] * 4);
          lVar23 = lVar23 + (ulong)puVar43[0xb] * 4;
          local_a08 = CONCAT44(*(undefined4 *)(lVar23 + 8),*(undefined4 *)(lVar34 + 8));
          lVar24 = *(long *)(*(long *)(lVar24 + 0xd0) + local_a98);
          pfVar10 = (float *)(lVar24 + (ulong)*puVar43 * 4);
          pfVar11 = (float *)(lVar24 + (ulong)puVar43[2] * 4);
          pfVar12 = (float *)(lVar24 + (ulong)puVar43[1] * 4);
          pfVar13 = (float *)(lVar24 + (ulong)puVar43[3] * 4);
          pfVar14 = (float *)(lVar24 + (ulong)puVar43[4] * 4);
          pfVar15 = (float *)(lVar24 + (ulong)puVar43[6] * 4);
          pfVar16 = (float *)(lVar24 + (ulong)puVar43[7] * 4);
          pfVar17 = (float *)(lVar24 + (ulong)puVar43[5] * 4);
          pfVar18 = (float *)(lVar24 + (ulong)puVar43[8] * 4);
          pfVar19 = (float *)(lVar24 + (ulong)puVar43[0xb] * 4);
          pfVar20 = (float *)(lVar24 + (ulong)puVar43[10] * 4);
          pfVar21 = (float *)(lVar24 + (ulong)puVar43[9] * 4);
          fVar121 = _LC7 - fVar49;
          fVar75 = pfVar10[2] * fVar49 + pfVar1[2] * fVar121;
          fVar76 = pfVar12[2] * fVar49 + pfVar5[2] * fVar121;
          fVar77 = pfVar11[2] * fVar49 + pfVar2[2] * fVar121;
          fVar78 = pfVar13[2] * fVar49 + pfVar3[2] * fVar121;
          fVar80 = pfVar10[1] * fVar49 + pfVar1[1] * fVar121;
          fVar82 = pfVar12[1] * fVar49 + pfVar5[1] * fVar121;
          fVar83 = pfVar11[1] * fVar49 + pfVar2[1] * fVar121;
          fVar84 = pfVar13[1] * fVar49 + pfVar3[1] * fVar121;
          local_8e8 = *(undefined8 *)(puVar43 + 0x10);
          uStack_8e0 = *(undefined8 *)(puVar43 + 0x12);
          fVar85 = fVar75 - (pfVar14[2] * fVar49 + pfVar4[2] * fVar121);
          fVar88 = fVar76 - (pfVar17[2] * fVar49 + pfVar38[2] * fVar121);
          fVar89 = fVar77 - (pfVar15[2] * fVar49 + pfVar6[2] * fVar121);
          fVar90 = fVar78 - (pfVar16[2] * fVar49 + pfVar7[2] * fVar121);
          local_8d8 = *(undefined8 *)(puVar43 + 0xc);
          uStack_8d0 = *(undefined8 *)(puVar43 + 0xe);
          fVar95 = *pfVar10 * fVar49 + *pfVar1 * fVar121;
          fVar96 = *pfVar12 * fVar49 + *pfVar5 * fVar121;
          fVar97 = *pfVar11 * fVar49 + *pfVar2 * fVar121;
          fVar98 = *pfVar13 * fVar49 + *pfVar3 * fVar121;
          fVar64 = (pfVar18[2] * fVar49 + pfVar8[2] * fVar121) - fVar75;
          fVar71 = (pfVar21[2] * fVar49 + pfVar9[2] * fVar121) - fVar76;
          fVar73 = (pfVar20[2] * fVar49 + fStack_a10 * fVar121) - fVar77;
          fVar74 = (pfVar19[2] * fVar49 + fStack_a0c * fVar121) - fVar78;
          fVar108 = fVar80 - (pfVar4[1] * fVar121 + pfVar14[1] * fVar49);
          fVar111 = fVar82 - (pfVar38[1] * fVar121 + pfVar17[1] * fVar49);
          fVar112 = fVar83 - (pfVar6[1] * fVar121 + pfVar15[1] * fVar49);
          fVar113 = fVar84 - (pfVar7[1] * fVar121 + pfVar16[1] * fVar49);
          fVar104 = fVar95 - (*pfVar4 * fVar121 + *pfVar14 * fVar49);
          fVar105 = fVar96 - (*pfVar38 * fVar121 + *pfVar17 * fVar49);
          fVar106 = fVar97 - (*pfVar6 * fVar121 + *pfVar15 * fVar49);
          fVar107 = fVar98 - (*pfVar7 * fVar121 + *pfVar16 * fVar49);
          fVar53 = (pfVar18[1] * fVar49 + pfVar8[1] * fVar121) - fVar80;
          fVar59 = (pfVar21[1] * fVar49 + pfVar9[1] * fVar121) - fVar82;
          fVar61 = (pfVar20[1] * fVar49 + *(float *)(lVar34 + 4) * fVar121) - fVar83;
          fVar62 = (pfVar19[1] * fVar49 + *(float *)(lVar23 + 4) * fVar121) - fVar84;
          fVar91 = (*pfVar18 * fVar49 + fVar121 * *pfVar8) - fVar95;
          fVar92 = (*pfVar21 * fVar49 + fVar121 * *pfVar9) - fVar96;
          fVar93 = (*pfVar20 * fVar49 + fVar121 * fStack_a30) - fVar97;
          fVar94 = (*pfVar19 * fVar49 + fVar121 * fStack_a2c) - fVar98;
          fVar134 = fVar108 * fVar91 - fVar104 * fVar53;
          fVar135 = fVar111 * fVar92 - fVar105 * fVar59;
          fVar136 = fVar112 * fVar93 - fVar106 * fVar61;
          fVar137 = fVar113 * fVar94 - fVar107 * fVar62;
          local_a98 = CONCAT44(fVar135,fVar134);
          fVar99 = fVar104 * fVar64 - fVar85 * fVar91;
          fVar101 = fVar105 * fVar71 - fVar88 * fVar92;
          fVar102 = fVar106 * fVar73 - fVar89 * fVar93;
          fVar103 = fVar107 * fVar74 - fVar90 * fVar94;
          local_a88 = CONCAT44(fVar101,fVar99);
          fVar126 = fVar85 * fVar53 - fVar108 * fVar64;
          fVar128 = fVar88 * fVar59 - fVar111 * fVar71;
          fVar130 = fVar89 * fVar61 - fVar112 * fVar73;
          fVar132 = fVar90 * fVar62 - fVar113 * fVar74;
          fVar121 = *(float *)param_2;
          fVar49 = *(float *)(param_2 + 4);
          fVar55 = *(float *)(param_2 + 8);
          fVar52 = *(float *)(param_2 + 0x10);
          fVar54 = *(float *)(param_2 + 0x14);
          fVar60 = *(float *)(param_2 + 0x18);
          fVar80 = fVar80 - fVar49;
          fVar82 = fVar82 - fVar49;
          fVar83 = fVar83 - fVar49;
          fVar84 = fVar84 - fVar49;
          fVar95 = fVar95 - fVar121;
          fVar96 = fVar96 - fVar121;
          fVar97 = fVar97 - fVar121;
          fVar98 = fVar98 - fVar121;
          fVar75 = fVar75 - fVar55;
          fVar76 = fVar76 - fVar55;
          fVar77 = fVar77 - fVar55;
          fVar78 = fVar78 - fVar55;
          fVar127 = fVar95 * fVar54 - fVar80 * fVar52;
          fVar129 = fVar96 * fVar54 - fVar82 * fVar52;
          fVar131 = fVar97 * fVar54 - fVar83 * fVar52;
          fVar133 = fVar98 * fVar54 - fVar84 * fVar52;
          fVar122 = fVar75 * fVar52 - fVar95 * fVar60;
          fVar123 = fVar76 * fVar52 - fVar96 * fVar60;
          fVar124 = fVar77 * fVar52 - fVar97 * fVar60;
          fVar125 = fVar78 * fVar52 - fVar98 * fVar60;
          fVar117 = fVar80 * fVar60 - fVar75 * fVar54;
          fVar118 = fVar82 * fVar60 - fVar76 * fVar54;
          fVar119 = fVar83 * fVar60 - fVar77 * fVar54;
          fVar120 = fVar84 * fVar60 - fVar78 * fVar54;
          fVar121 = fVar54 * fVar99 + fVar60 * fVar134 + fVar52 * fVar126;
          fVar49 = fVar54 * fVar101 + fVar60 * fVar135 + fVar52 * fVar128;
          fVar55 = fVar54 * fVar102 + fVar60 * fVar136 + fVar52 * fVar130;
          fVar52 = fVar54 * fVar103 + fVar60 * fVar137 + fVar52 * fVar132;
          auVar100._0_4_ = _LC9 & (uint)fVar121;
          auVar100._4_4_ = _UNK_001153f4 & (uint)fVar49;
          auVar100._8_4_ = _UNK_001153f8 & (uint)fVar55;
          auVar100._12_4_ = _UNK_001153fc & (uint)fVar52;
          auVar116._0_4_ = (float)(_LC3 & (uint)fVar121);
          auVar116._4_4_ = (float)(_UNK_001153c4 & (uint)fVar49);
          auVar116._8_4_ = (float)(_UNK_001153c8 & (uint)fVar55);
          auVar116._12_4_ = (float)(_UNK_001153cc & (uint)fVar52);
          auVar87._0_4_ = fVar85 * fVar127 + fVar108 * fVar122 + fVar104 * fVar117;
          auVar87._4_4_ = fVar88 * fVar129 + fVar111 * fVar123 + fVar105 * fVar118;
          auVar87._8_4_ = fVar89 * fVar131 + fVar112 * fVar124 + fVar106 * fVar119;
          auVar87._12_4_ = fVar90 * fVar133 + fVar113 * fVar125 + fVar107 * fVar120;
          auVar58._0_4_ = fVar53 * fVar122 + fVar64 * fVar127 + fVar91 * fVar117;
          auVar58._4_4_ = fVar59 * fVar123 + fVar71 * fVar129 + fVar92 * fVar118;
          auVar58._8_4_ = fVar61 * fVar124 + fVar73 * fVar131 + fVar93 * fVar119;
          auVar58._12_4_ = fVar62 * fVar125 + fVar74 * fVar133 + fVar94 * fVar120;
          auVar87 = auVar87 ^ auVar100;
          auVar58 = auVar58 ^ auVar100;
          fVar61 = auVar87._0_4_;
          fVar62 = auVar87._4_4_;
          fVar64 = auVar87._8_4_;
          fVar71 = auVar87._12_4_;
          fVar54 = auVar58._0_4_;
          fVar60 = auVar58._4_4_;
          fVar53 = auVar58._8_4_;
          fVar59 = auVar58._12_4_;
          auVar115._0_4_ =
               -(uint)((0.0 <= fVar61 && (fVar121 != 0.0 && 0.0 <= fVar54)) &&
                      fVar61 + fVar54 <= auVar116._0_4_) & _DAT_00116108;
          auVar115._4_4_ =
               -(uint)((0.0 <= fVar62 && (fVar49 != 0.0 && 0.0 <= fVar60)) &&
                      fVar62 + fVar60 <= auVar116._4_4_) & uRam000000000011610c;
          auVar115._8_4_ =
               -(uint)((0.0 <= fVar64 && (fVar55 != 0.0 && 0.0 <= fVar53)) &&
                      fVar64 + fVar53 <= auVar116._8_4_) & uRam0000000000116110;
          auVar115._12_4_ =
               -(uint)((0.0 <= fVar71 && (fVar52 != 0.0 && 0.0 <= fVar59)) &&
                      fVar71 + fVar59 <= auVar116._12_4_) & uRam0000000000116114;
          iVar32 = movmskps((int)lVar24,auVar115);
          if (iVar32 != 0) {
            fVar121 = *(float *)(param_2 + 0x20);
            auVar81._0_4_ = fVar80 * fVar99 + fVar75 * fVar134 + fVar95 * fVar126;
            auVar81._4_4_ = fVar82 * fVar101 + fVar76 * fVar135 + fVar96 * fVar128;
            auVar81._8_4_ = fVar83 * fVar102 + fVar77 * fVar136 + fVar97 * fVar130;
            auVar81._12_4_ = fVar84 * fVar103 + fVar78 * fVar137 + fVar98 * fVar132;
            auVar81 = auVar81 ^ auVar100;
            fVar55 = auVar81._0_4_;
            fVar52 = auVar81._4_4_;
            fVar73 = auVar81._8_4_;
            fVar74 = auVar81._12_4_;
            fVar49 = *(float *)(param_2 + 0xc);
            auVar69._0_4_ =
                 -(uint)(fVar49 * auVar116._0_4_ < fVar55 && fVar55 <= fVar121 * auVar116._0_4_);
            auVar69._4_4_ =
                 -(uint)(fVar49 * auVar116._4_4_ < fVar52 && fVar52 <= fVar121 * auVar116._4_4_);
            auVar69._8_4_ =
                 -(uint)(fVar49 * auVar116._8_4_ < fVar73 && fVar73 <= fVar121 * auVar116._8_4_);
            auVar69._12_4_ =
                 -(uint)(fVar49 * auVar116._12_4_ < fVar74 && fVar74 <= fVar121 * auVar116._12_4_);
            auVar51._0_4_ = auVar115._0_4_ & auVar69._0_4_;
            auVar51._4_4_ = auVar115._4_4_ & auVar69._4_4_;
            auVar51._8_4_ = auVar115._8_4_ & auVar69._8_4_;
            auVar51._12_4_ = auVar115._12_4_ & auVar69._12_4_;
            iVar32 = movmskps(iVar32,auVar51);
            if (iVar32 != 0) {
              auVar50 = rcpps(auVar69,auVar116);
              uVar44 = (ulong)iVar32;
              local_818 = CONCAT44(fVar128,fVar126);
              uStack_810 = CONCAT44(fVar132,fVar130);
              fVar49 = auVar50._0_4_;
              fVar75 = auVar50._4_4_;
              fVar76 = auVar50._8_4_;
              fVar77 = auVar50._12_4_;
              local_808 = local_a88;
              uStack_800 = CONCAT44(fVar103,fVar102);
              local_7f8 = local_a98;
              uStack_7f0 = CONCAT44(fVar137,fVar136);
              fVar49 = (_LC7 - auVar116._0_4_ * fVar49) * fVar49 + fVar49;
              fVar75 = (_LC7 - auVar116._4_4_ * fVar75) * fVar75 + fVar75;
              fVar76 = (_LC7 - auVar116._8_4_ * fVar76) * fVar76 + fVar76;
              fVar77 = (_LC7 - auVar116._12_4_ * fVar77) * fVar77 + fVar77;
              local_828[0] = fVar55 * fVar49;
              local_828[1] = fVar52 * fVar75;
              local_828[2] = fVar73 * fVar76;
              local_828[3] = fVar74 * fVar77;
              local_848[0] = fVar54 * fVar49;
              local_848[1] = fVar60 * fVar75;
              local_848[2] = fVar53 * fVar76;
              local_848[3] = fVar59 * fVar77;
              local_838[0] = fVar49 * fVar61;
              local_838[1] = fVar75 * fVar62;
              local_838[2] = fVar76 * fVar64;
              local_838[3] = fVar77 * fVar71;
              do {
                uVar37 = 0;
                if (uVar44 != 0) {
                  for (; (uVar44 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
                  }
                }
                uVar45 = *(uint *)((long)&local_8d8 + uVar37 * 4);
                lVar40 = *(long *)(lVar40 + (ulong)uVar45 * 8);
                pbVar41 = *(byte **)(param_3 + 0x10);
                pcVar35 = *(code **)(pbVar41 + 0x10);
                if ((pcVar35 == (code *)0x0) && (*(long *)(lVar40 + 0x48) == 0)) {
LAB_0010ed68:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010e668;
                }
                puStack_908 = *(undefined4 **)(param_3 + 8);
                uStack_8b0 = uVar45;
                iStack_91c = -1;
                fStack_8bc = local_848[uVar37];
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar37 * 4);
                uStack_8b4 = *(undefined4 *)((long)&local_8e8 + uVar37 * 4);
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar37 * 4);
                uStack_8ac = *puStack_908;
                piStack_918 = &iStack_91c;
                fStack_8b8 = local_838[uVar37];
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar37 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar37];
                uStack_910 = *(undefined8 *)(lVar40 + 0x18);
                puStack_8f8 = &uStack_8c8;
                uStack_8f0 = 1;
                pRStack_900 = param_2;
                if (*(code **)(lVar40 + 0x48) == (code *)0x0) {
LAB_0010eeb4:
                  if ((pcVar35 == (code *)0x0) ||
                     ((((*pbVar41 & 2) == 0 && ((*(byte *)(lVar40 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar35)(&piStack_918), *piStack_918 != 0)))) goto LAB_0010ed68;
                }
                else {
                  (**(code **)(lVar40 + 0x48))(&piStack_918);
                  if (*piStack_918 != 0) {
                    pbVar41 = *(byte **)(param_3 + 0x10);
                    pcVar35 = *(code **)(pbVar41 + 0x10);
                    goto LAB_0010eeb4;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar121;
                uVar44 = uVar44 ^ 1L << (uVar37 & 0x3f);
                if (uVar44 == 0) break;
                lVar40 = *(long *)(lVar39 + 0x1e0);
              } while( true );
            }
          }
          puVar43 = puVar43 + 0x14;
          if (local_a08 + 1 == uVar42 - 8) break;
          fVar121 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_0010e657:
    } while (puVar33 != &local_7e8);
  }
LAB_0010e668:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  undefined4 uVar24;
  ulong uVar25;
  long lVar26;
  undefined4 *puVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  int iVar37;
  ulong uVar38;
  uint *puVar39;
  long lVar40;
  code *pcVar41;
  RayHitK *pRVar42;
  ulong uVar43;
  int iVar44;
  uint extraout_EDX;
  ulong uVar45;
  float *pfVar46;
  long lVar47;
  byte *pbVar48;
  long lVar49;
  undefined4 uVar50;
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  long in_FS_OFFSET;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar64;
  float fVar65;
  undefined1 auVar59 [16];
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar91;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  float fVar101;
  float fVar102;
  undefined1 auVar99 [16];
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  uint uVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar131;
  float fVar137;
  float fVar138;
  float fVar139;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar140;
  float fVar141;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar149;
  float fVar150;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  undefined1 auVar151 [16];
  long local_1250;
  undefined1 auStack_1248 [8];
  float fStack_1240;
  float fStack_123c;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined1 auStack_1218 [12];
  float fStack_120c;
  ulong uStack_1208;
  float fStack_11d0;
  float fStack_11cc;
  undefined1 auStack_11c8 [8];
  undefined8 uStack_11c0;
  long lStack_11b8;
  float local_118c;
  undefined4 uStack_10cc;
  RayHitK *pRStack_10c8;
  undefined8 uStack_10c0;
  undefined4 *puStack_10b8;
  RayHitK *pRStack_10b0;
  uint *puStack_10a8;
  undefined4 uStack_10a0;
  undefined1 auStack_1098 [16];
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  uint uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  float fStack_105c;
  float fStack_1058;
  undefined4 uStack_1054;
  uint uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048 [6] [16];
  float afStack_fe8 [4];
  float afStack_fd8 [4];
  float afStack_fc8 [4];
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_0010f2f1:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fVar57 = *(float *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if (fVar57 < 0.0) {
    fVar57 = 0.0;
  }
  fVar67 = *(float *)(param_2 + 0xc);
  if (fVar67 < 0.0) {
    fVar67 = 0.0;
  }
  fVar32 = *(float *)param_2;
  fVar33 = *(float *)(param_2 + 4);
  fVar34 = *(float *)(param_2 + 8);
  pauVar51 = (undefined1 (*) [16])local_f78;
  auVar92._4_4_ = fVar57;
  auVar92._0_4_ = fVar57;
  auVar92._8_4_ = fVar57;
  auVar92._12_4_ = fVar57;
  uVar53 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar54 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _LC5);
  uVar55 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _LC5);
  uVar56 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _LC5);
  auVar99._0_4_ = ~uVar53 & *(uint *)(param_2 + 0x10);
  auVar99._4_4_ = ~uVar54 & *(uint *)(param_2 + 0x14);
  auVar99._8_4_ = ~uVar55 & *(uint *)(param_2 + 0x18);
  auVar99._12_4_ = ~uVar56 & *(uint *)(param_2 + 0x1c);
  auVar59._0_4_ = uVar53 & (uint)_LC5;
  auVar59._4_4_ = uVar54 & (uint)_LC5;
  auVar59._8_4_ = uVar55 & (uint)_LC5;
  auVar59._12_4_ = uVar56 & (uint)_LC5;
  auVar59 = auVar59 | auVar99;
  auVar99 = rcpps(auVar99,auVar59);
  fVar57 = auVar99._0_4_;
  fVar64 = auVar99._4_4_;
  fVar65 = auVar99._8_4_;
  fVar57 = (_LC7 - auVar59._0_4_ * fVar57) * fVar57 + fVar57;
  fVar64 = (_LC7 - auVar59._4_4_ * fVar64) * fVar64 + fVar64;
  fVar65 = (_LC7 - auVar59._8_4_ * fVar65) * fVar65 + fVar65;
  uVar38 = (ulong)(fVar57 < 0.0) * 0x10;
LAB_0010f0f0:
  pauVar52 = pauVar51;
  if (pauVar51 != (undefined1 (*) [16])local_f88) {
    do {
      local_118c = *(float *)(param_2 + 0x20);
      pauVar51 = pauVar52 + -1;
      if (*(float *)(pauVar52[-1] + 8) <= local_118c) {
        fVar140 = *(float *)(param_2 + 0x1c);
        uStack_1208 = *(ulong *)pauVar52[-1];
        if ((uStack_1208 & 8) != 0) goto LAB_0010f391;
        auVar35._4_4_ = fVar67;
        auVar35._0_4_ = fVar67;
        auVar35._8_4_ = fVar67;
        auVar35._12_4_ = fVar67;
        while( true ) {
          uVar43 = uStack_1208 & 0xfffffffffffffff0;
          lVar1 = uVar43 + 0x20;
          pfVar2 = (float *)(lVar1 + (ulong)(-(uint)(fVar64 < 0.0) & 0x10) + 0x20);
          pfVar3 = (float *)(lVar1 + (ulong)(-(uint)(fVar65 < 0.0) & 0x10) + 0x40);
          pfVar4 = (float *)(lVar1 + uVar38);
          pfVar5 = (float *)(lVar1 + (uVar38 ^ 0x10));
          pfVar6 = (float *)(lVar1 + (-(ulong)(fVar64 < 0.0) & 0xfffffffffffffff0) + 0x30);
          pfVar46 = (float *)(lVar1 + (-(ulong)(fVar65 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar129._0_4_ = ((pfVar2[0x18] * fVar140 + *pfVar2) - fVar33) * fVar64;
          auVar129._4_4_ = ((pfVar2[0x19] * fVar140 + pfVar2[1]) - fVar33) * fVar64;
          auVar129._8_4_ = ((pfVar2[0x1a] * fVar140 + pfVar2[2]) - fVar33) * fVar64;
          auVar129._12_4_ = ((pfVar2[0x1b] * fVar140 + pfVar2[3]) - fVar33) * fVar64;
          auVar123._0_4_ = ((pfVar3[0x18] * fVar140 + *pfVar3) - fVar34) * fVar65;
          auVar123._4_4_ = ((pfVar3[0x19] * fVar140 + pfVar3[1]) - fVar34) * fVar65;
          auVar123._8_4_ = ((pfVar3[0x1a] * fVar140 + pfVar3[2]) - fVar34) * fVar65;
          auVar123._12_4_ = ((pfVar3[0x1b] * fVar140 + pfVar3[3]) - fVar34) * fVar65;
          auVar59 = maxps(auVar129,auVar123);
          auVar124._0_4_ = ((pfVar4[0x18] * fVar140 + *pfVar4) - fVar32) * fVar57;
          auVar124._4_4_ = ((pfVar4[0x19] * fVar140 + pfVar4[1]) - fVar32) * fVar57;
          auVar124._8_4_ = ((pfVar4[0x1a] * fVar140 + pfVar4[2]) - fVar32) * fVar57;
          auVar124._12_4_ = ((pfVar4[0x1b] * fVar140 + pfVar4[3]) - fVar32) * fVar57;
          auVar99 = maxps(auVar35,auVar124);
          local_1048[0] = maxps(auVar99,auVar59);
          auVar125._0_4_ = ((pfVar46[0x18] * fVar140 + *pfVar46) - fVar34) * fVar65;
          auVar125._4_4_ = ((pfVar46[0x19] * fVar140 + pfVar46[1]) - fVar34) * fVar65;
          auVar125._8_4_ = ((pfVar46[0x1a] * fVar140 + pfVar46[2]) - fVar34) * fVar65;
          auVar125._12_4_ = ((pfVar46[0x1b] * fVar140 + pfVar46[3]) - fVar34) * fVar65;
          auVar144._0_4_ = ((pfVar6[0x18] * fVar140 + *pfVar6) - fVar33) * fVar64;
          auVar144._4_4_ = ((pfVar6[0x19] * fVar140 + pfVar6[1]) - fVar33) * fVar64;
          auVar144._8_4_ = ((pfVar6[0x1a] * fVar140 + pfVar6[2]) - fVar33) * fVar64;
          auVar144._12_4_ = ((pfVar6[0x1b] * fVar140 + pfVar6[3]) - fVar33) * fVar64;
          auVar59 = minps(auVar144,auVar125);
          auVar126._0_4_ = ((pfVar5[0x18] * fVar140 + *pfVar5) - fVar32) * fVar57;
          auVar126._4_4_ = ((pfVar5[0x19] * fVar140 + pfVar5[1]) - fVar32) * fVar57;
          auVar126._8_4_ = ((pfVar5[0x1a] * fVar140 + pfVar5[2]) - fVar32) * fVar57;
          auVar126._12_4_ = ((pfVar5[0x1b] * fVar140 + pfVar5[3]) - fVar32) * fVar57;
          auVar99 = minps(auVar92,auVar126);
          auVar59 = minps(auVar99,auVar59);
          bVar28 = SUB164(local_1048[0],0) <= auVar59._0_4_;
          bVar29 = SUB164(local_1048[0],4) <= auVar59._4_4_;
          bVar30 = SUB164(local_1048[0],8) <= auVar59._8_4_;
          bVar31 = SUB164(local_1048[0],0xc) <= auVar59._12_4_;
          auVar132._4_4_ = -(uint)bVar29;
          auVar132._0_4_ = -(uint)bVar28;
          auVar132._8_4_ = -(uint)bVar30;
          auVar132._12_4_ = -(uint)bVar31;
          if (((uint)uStack_1208 & 0xf) == 6) {
            auVar132._0_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe0) <= fVar140 &&
                         fVar140 < *(float *)(uVar43 + 0xf0)) && bVar28);
            auVar132._4_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe4) <= fVar140 &&
                         fVar140 < *(float *)(uVar43 + 0xf4)) && bVar29);
            auVar132._8_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe8) <= fVar140 &&
                         fVar140 < *(float *)(uVar43 + 0xf8)) && bVar30);
            auVar132._12_4_ =
                 -(uint)((*(float *)(uVar43 + 0xec) <= fVar140 &&
                         fVar140 < *(float *)(uVar43 + 0xfc)) && bVar31);
          }
          uVar50 = movmskps((int)pfVar5,auVar132);
          uVar45 = CONCAT44((int)((ulong)pfVar5 >> 0x20),uVar50);
          if (uVar45 == 0) break;
          lVar1 = 0;
          if (uVar45 != 0) {
            for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar25 = *(ulong *)(uVar43 + lVar1 * 8);
          uVar45 = uVar45 - 1 & uVar45;
          uStack_1208 = uVar25;
          if (uVar45 != 0) {
            lVar47 = 0;
            if (uVar45 != 0) {
              for (; (uVar45 >> lVar47 & 1) == 0; lVar47 = lVar47 + 1) {
              }
            }
            uStack_1208 = *(ulong *)(uVar43 + lVar47 * 8);
            fVar58 = afStack_fe8[lVar1 + -0x18];
            fVar70 = afStack_fe8[lVar47 + -0x18];
            uVar45 = uVar45 & uVar45 - 1;
            if (uVar45 == 0) {
              if ((uint)fVar58 < (uint)fVar70) {
                *(ulong *)*pauVar51 = uStack_1208;
                *(float *)(*pauVar51 + 8) = fVar70;
                uStack_1208 = uVar25;
                pauVar51 = pauVar51 + 1;
              }
              else {
                *(ulong *)*pauVar51 = uVar25;
                *(float *)(*pauVar51 + 8) = fVar58;
                pauVar51 = pauVar51 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar45 != 0) {
                for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uStack_1228 = *(ulong *)(uVar43 + lVar1 * 8);
              auVar151._8_4_ = fVar58;
              auVar151._0_8_ = uVar25;
              auVar151._12_4_ = 0;
              fVar66 = afStack_fe8[lVar1 + -0x18];
              auVar142._8_4_ = fVar70;
              auVar142._0_8_ = uStack_1208;
              auVar142._12_4_ = 0;
              auVar84._8_4_ = fVar66;
              auVar84._0_8_ = uStack_1228;
              auVar84._12_4_ = 0;
              auVar128._8_4_ = -(uint)((int)fVar58 < (int)fVar70);
              uVar45 = uVar45 - 1 & uVar45;
              if (uVar45 == 0) {
                auVar128._4_4_ = auVar128._8_4_;
                auVar128._0_4_ = auVar128._8_4_;
                auVar128._12_4_ = auVar128._8_4_;
                auVar132 = ~auVar128 & auVar142 | auVar151 & auVar128;
                auVar99 = auVar128 & auVar142 | ~auVar128 & auVar151;
                iVar37 = -(uint)(auVar132._8_4_ < (int)fVar66);
                auVar133._0_8_ = CONCAT44(iVar37,iVar37);
                auVar133._8_4_ = iVar37;
                auVar133._12_4_ = iVar37;
                uStack_1228 = ~auVar133._0_8_ & uStack_1228;
                auVar59 = auVar84 & auVar133 | ~auVar133 & auVar132;
                auVar143._8_4_ = -(uint)(auVar99._8_4_ < auVar59._8_4_);
                auVar143._4_4_ = auVar143._8_4_;
                auVar143._0_4_ = auVar143._8_4_;
                auVar143._12_4_ = auVar143._8_4_;
                *pauVar51 = auVar59 & auVar143 | ~auVar143 & auVar99;
                uStack_1238 = auVar132._0_8_;
                pauVar51[1] = auVar99 & auVar143 | ~auVar143 & auVar59;
                uStack_1208 = uStack_1238 & auVar133._0_8_ | uStack_1228;
                pauVar51 = pauVar51 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar45 != 0) {
                  for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                auVar87._8_4_ = afStack_fe8[lVar1 + -0x18];
                auVar87._0_8_ = *(undefined8 *)(uVar43 + lVar1 * 8);
                auVar87._12_4_ = 0;
                auVar134._4_4_ = auVar128._8_4_;
                auVar134._0_4_ = auVar128._8_4_;
                auVar134._8_4_ = auVar128._8_4_;
                auVar134._12_4_ = auVar128._8_4_;
                auVar132 = ~auVar134 & auVar142 | auVar151 & auVar134;
                auVar144 = auVar142 & auVar134 | ~auVar134 & auVar151;
                auVar135._8_4_ = -(uint)((int)fVar66 < (int)afStack_fe8[lVar1 + -0x18]);
                auVar135._4_4_ = auVar135._8_4_;
                auVar135._0_4_ = auVar135._8_4_;
                auVar135._12_4_ = auVar135._8_4_;
                auVar129 = auVar84 & auVar135 | ~auVar135 & auVar87;
                auVar59 = auVar87 & auVar135 | ~auVar135 & auVar84;
                auVar145._8_4_ = -(uint)(auVar144._8_4_ < auVar59._8_4_);
                auVar145._4_4_ = auVar145._8_4_;
                auVar145._0_4_ = auVar145._8_4_;
                auVar145._12_4_ = auVar145._8_4_;
                auVar99 = auVar144 & auVar145 | ~auVar145 & auVar59;
                _auStack_1218 = ~auVar145 & auVar144;
                auVar136._8_4_ = -(uint)(auVar132._8_4_ < auVar129._8_4_);
                auVar136._0_8_ = CONCAT44(auVar136._8_4_,auVar136._8_4_);
                auVar136._12_4_ = auVar136._8_4_;
                uStack_1208 = ~auVar136._0_8_ & auVar129._0_8_;
                auVar129 = ~auVar136 & auVar132 | auVar129 & auVar136;
                auVar130._8_4_ = -(uint)(auVar129._8_4_ < auVar99._8_4_);
                auVar130._4_4_ = auVar130._8_4_;
                auVar130._0_4_ = auVar130._8_4_;
                auVar130._12_4_ = auVar130._8_4_;
                pauVar51[1] = auVar99 & auVar130 | ~auVar130 & auVar129;
                *pauVar51 = auVar145 & auVar59 | _auStack_1218;
                pauVar51[2] = auVar129 & auVar130 | ~auVar130 & auVar99;
                uStack_1208 = uStack_1208 | auVar132._0_8_ & auVar136._0_8_;
                pauVar51 = pauVar51 + 3;
              }
            }
          }
          if ((uStack_1208 & 8) != 0) goto LAB_0010f391;
        }
      }
      pauVar52 = pauVar51;
      if (pauVar51 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_0010f2f1;
LAB_0010f391:
  puVar39 = (uint *)(uStack_1208 & 0xfffffffffffffff0);
  uVar43 = (ulong)((uint)uStack_1208 & 0xf);
  if (uVar43 != 8) {
    local_1250 = 0;
    auVar36._4_8_ = uStack_11c0;
    auVar36._0_4_ = local_118c;
    auStack_11c8 = (undefined1  [8])(auVar36._0_8_ << 0x20);
    uStack_11c0._0_4_ = local_118c;
    uStack_11c0._4_4_ = local_118c;
    do {
      auVar59 = _auStack_11c8;
      auVar92 = _auStack_1218;
      lVar1 = *(long *)param_3;
      lVar47 = *(long *)(lVar1 + 0x1e0);
      lVar49 = *(long *)(lVar47 + (ulong)puVar39[0xc] * 8);
      fVar58 = ((fVar140 - *(float *)(lVar49 + 0x2c)) /
               (*(float *)(lVar49 + 0x30) - *(float *)(lVar49 + 0x2c))) * *(float *)(lVar49 + 0x28);
      fVar70 = *(float *)(lVar49 + 0x28) - _LC7;
      fVar140 = fVar58;
      if ((float)(_LC3 & (uint)fVar58) < _LC19) {
        fVar140 = (float)(~_LC3 & (uint)fVar58 |
                         (uint)((float)(int)fVar58 -
                               (float)(-(uint)(fVar58 < (float)(int)fVar58) & (uint)_LC7)));
      }
      if (fVar70 <= fVar140) {
        fVar140 = fVar70;
      }
      if (0.0 <= fVar140) {
        fVar58 = fVar58 - fVar140;
        lVar40 = (long)(int)fVar140 * 0x30;
        lStack_11b8 = (long)((int)fVar140 + 1) * 0x30;
      }
      else {
        lStack_11b8 = 0x30;
        lVar40 = 0;
      }
      lVar26 = *(long *)(*(long *)(lVar49 + 0xd0) + lVar40);
      pfVar2 = (float *)(lVar26 + (ulong)*puVar39 * 4);
      pfVar3 = (float *)(lVar26 + (ulong)puVar39[2] * 4);
      pfVar4 = (float *)(lVar26 + (ulong)puVar39[1] * 4);
      pfVar5 = (float *)(lVar26 + (ulong)puVar39[8] * 4);
      pfVar6 = (float *)(lVar26 + (ulong)puVar39[3] * 4);
      pfVar46 = (float *)(lVar26 + (ulong)puVar39[4] * 4);
      pfVar7 = (float *)(lVar26 + (ulong)puVar39[5] * 4);
      lVar40 = lVar26 + (ulong)puVar39[6] * 4;
      uVar53 = puVar39[0xb];
      lVar8 = lVar26 + (ulong)puVar39[7] * 4;
      pfVar9 = (float *)(lVar26 + (ulong)puVar39[10] * 4);
      pfVar10 = (float *)(lVar26 + (ulong)puVar39[9] * 4);
      pfVar11 = (float *)(lVar26 + (ulong)uVar53 * 4);
      auStack_1218._4_4_ = *pfVar7;
      auStack_1218._0_4_ = *pfVar46;
      stack0xffffffffffffedf0 = auVar92._8_8_;
      auVar99 = _auStack_1218;
      auStack_11c8._4_4_ = pfVar11[2];
      auStack_11c8._0_4_ = pfVar9[2];
      lVar49 = *(long *)(*(long *)(lVar49 + 0xd0) + lStack_11b8);
      pfVar12 = (float *)(lVar49 + (ulong)*puVar39 * 4);
      pfVar13 = (float *)(lVar49 + (ulong)puVar39[2] * 4);
      pfVar14 = (float *)(lVar49 + (ulong)puVar39[1] * 4);
      pfVar15 = (float *)(lVar49 + (ulong)puVar39[3] * 4);
      pfVar16 = (float *)(lVar49 + (ulong)puVar39[4] * 4);
      pfVar17 = (float *)(lVar49 + (ulong)puVar39[6] * 4);
      pfVar18 = (float *)(lVar49 + (ulong)puVar39[7] * 4);
      pfVar19 = (float *)(lVar49 + (ulong)puVar39[5] * 4);
      pfVar20 = (float *)(lVar49 + (ulong)puVar39[8] * 4);
      pfVar21 = (float *)(lVar49 + (ulong)uVar53 * 4);
      pfVar22 = (float *)(lVar49 + (ulong)puVar39[10] * 4);
      pfVar23 = (float *)(lVar49 + (ulong)puVar39[9] * 4);
      fVar140 = _LC7 - fVar58;
      fVar77 = pfVar12[2] * fVar58 + pfVar2[2] * fVar140;
      fVar78 = pfVar14[2] * fVar58 + pfVar4[2] * fVar140;
      fVar79 = pfVar13[2] * fVar58 + pfVar3[2] * fVar140;
      fVar80 = pfVar15[2] * fVar58 + pfVar6[2] * fVar140;
      fVar98 = pfVar12[1] * fVar58 + pfVar2[1] * fVar140;
      fVar101 = pfVar14[1] * fVar58 + pfVar4[1] * fVar140;
      fVar102 = pfVar13[1] * fVar58 + pfVar3[1] * fVar140;
      fVar103 = pfVar15[1] * fVar58 + pfVar6[1] * fVar140;
      uStack_1088 = *(undefined8 *)(puVar39 + 0x10);
      uStack_1080 = *(undefined8 *)(puVar39 + 0x12);
      fVar91 = fVar77 - (pfVar16[2] * fVar58 + pfVar46[2] * fVar140);
      fVar95 = fVar78 - (pfVar19[2] * fVar58 + pfVar7[2] * fVar140);
      fVar96 = fVar79 - (pfVar17[2] * fVar58 + *(float *)(lVar40 + 8) * fVar140);
      fVar97 = fVar80 - (pfVar18[2] * fVar58 + *(float *)(lVar8 + 8) * fVar140);
      uStack_1078 = *(undefined8 *)(puVar39 + 0xc);
      uStack_1070 = *(undefined8 *)(puVar39 + 0xe);
      fVar108 = *pfVar12 * fVar58 + *pfVar2 * fVar140;
      fVar109 = *pfVar14 * fVar58 + *pfVar4 * fVar140;
      fVar110 = *pfVar13 * fVar58 + *pfVar3 * fVar140;
      fVar111 = *pfVar15 * fVar58 + *pfVar6 * fVar140;
      fVar81 = (pfVar20[2] * fVar58 + pfVar5[2] * fVar140) - fVar77;
      fVar88 = (pfVar23[2] * fVar58 + pfVar10[2] * fVar140) - fVar78;
      fVar89 = (pfVar22[2] * fVar58 + fStack_11d0 * fVar140) - fVar79;
      fVar90 = (pfVar21[2] * fVar58 + fStack_11cc * fVar140) - fVar80;
      auStack_1218._8_4_ = auVar92._8_4_;
      fStack_120c = auVar92._12_4_;
      fVar119 = fVar98 - (pfVar46[1] * fVar140 + pfVar16[1] * fVar58);
      fVar120 = fVar101 - (pfVar7[1] * fVar140 + pfVar19[1] * fVar58);
      fVar121 = fVar102 - (*(float *)(lVar40 + 4) * fVar140 + pfVar17[1] * fVar58);
      fVar122 = fVar103 - (*(float *)(lVar8 + 4) * fVar140 + pfVar18[1] * fVar58);
      fVar115 = fVar108 - (*pfVar46 * fVar140 + *pfVar16 * fVar58);
      fVar116 = fVar109 - (*pfVar7 * fVar140 + *pfVar19 * fVar58);
      fVar117 = fVar110 - ((float)auStack_1218._8_4_ * fVar140 + *pfVar17 * fVar58);
      fVar118 = fVar111 - (fStack_120c * fVar140 + *pfVar18 * fVar58);
      fVar68 = (pfVar20[1] * fVar58 + pfVar5[1] * fVar140) - fVar98;
      fVar73 = (pfVar23[1] * fVar58 + pfVar10[1] * fVar140) - fVar101;
      fVar75 = (pfVar22[1] * fVar58 + pfVar9[1] * fVar140) - fVar102;
      fVar76 = (pfVar21[1] * fVar58 + pfVar11[1] * fVar140) - fVar103;
      fVar104 = (*pfVar20 * fVar58 + fVar140 * *pfVar5) - fVar108;
      fVar105 = (*pfVar23 * fVar58 + fVar140 * *pfVar10) - fVar109;
      fVar106 = (*pfVar22 * fVar58 + fVar140 * *pfVar9) - fVar110;
      fVar107 = (*pfVar21 * fVar58 + fVar140 * *pfVar11) - fVar111;
      auStack_1248._0_4_ = fVar119 * fVar104 - fVar115 * fVar68;
      auStack_1248._4_4_ = fVar120 * fVar105 - fVar116 * fVar73;
      fStack_1240 = fVar121 * fVar106 - fVar117 * fVar75;
      fStack_123c = fVar122 * fVar107 - fVar118 * fVar76;
      fVar112 = fVar115 * fVar81 - fVar91 * fVar104;
      fVar113 = fVar116 * fVar88 - fVar95 * fVar105;
      uStack_1230._0_4_ = fVar117 * fVar89 - fVar96 * fVar106;
      uStack_1230._4_4_ = fVar118 * fVar90 - fVar97 * fVar107;
      uStack_1238 = CONCAT44(fVar113,fVar112);
      fVar149 = fVar91 * fVar68 - fVar119 * fVar81;
      fVar152 = fVar95 * fVar73 - fVar120 * fVar88;
      uStack_1220._0_4_ = fVar96 * fVar75 - fVar121 * fVar89;
      uStack_1220._4_4_ = fVar97 * fVar76 - fVar122 * fVar90;
      uStack_1228 = CONCAT44(fVar152,fVar149);
      fVar140 = *(float *)param_2;
      fVar58 = *(float *)(param_2 + 4);
      fVar70 = *(float *)(param_2 + 8);
      fVar66 = *(float *)(param_2 + 0x10);
      fVar69 = *(float *)(param_2 + 0x14);
      fVar74 = *(float *)(param_2 + 0x18);
      fVar98 = fVar98 - fVar58;
      fVar101 = fVar101 - fVar58;
      fVar102 = fVar102 - fVar58;
      fVar103 = fVar103 - fVar58;
      fVar108 = fVar108 - fVar140;
      fVar109 = fVar109 - fVar140;
      fVar110 = fVar110 - fVar140;
      fVar111 = fVar111 - fVar140;
      fVar77 = fVar77 - fVar70;
      fVar78 = fVar78 - fVar70;
      fVar79 = fVar79 - fVar70;
      fVar80 = fVar80 - fVar70;
      fVar150 = fVar108 * fVar69 - fVar98 * fVar66;
      fVar153 = fVar109 * fVar69 - fVar101 * fVar66;
      fVar154 = fVar110 * fVar69 - fVar102 * fVar66;
      fVar155 = fVar111 * fVar69 - fVar103 * fVar66;
      fVar141 = fVar77 * fVar66 - fVar108 * fVar74;
      fVar146 = fVar78 * fVar66 - fVar109 * fVar74;
      fVar147 = fVar79 * fVar66 - fVar110 * fVar74;
      fVar148 = fVar80 * fVar66 - fVar111 * fVar74;
      fVar131 = fVar98 * fVar74 - fVar77 * fVar69;
      fVar137 = fVar101 * fVar74 - fVar78 * fVar69;
      fVar138 = fVar102 * fVar74 - fVar79 * fVar69;
      fVar139 = fVar103 * fVar74 - fVar80 * fVar69;
      fVar140 = fVar69 * fVar112 + fVar74 * (float)auStack_1248._0_4_ + fVar66 * fVar149;
      fVar58 = fVar69 * fVar113 + fVar74 * (float)auStack_1248._4_4_ + fVar66 * fVar152;
      fVar70 = fVar69 * (float)uStack_1230 + fVar74 * fStack_1240 + fVar66 * (float)uStack_1220;
      fVar66 = fVar69 * uStack_1230._4_4_ + fVar74 * fStack_123c + fVar66 * uStack_1220._4_4_;
      uVar54 = _LC9 & (uint)fVar140;
      uVar55 = _UNK_001153f4 & (uint)fVar58;
      uVar56 = _UNK_001153f8 & (uint)fVar70;
      uVar114 = _UNK_001153fc & (uint)fVar66;
      auVar127._0_4_ = (float)(_LC3 & (uint)fVar140);
      auVar127._4_4_ = (float)(_UNK_001153c4 & (uint)fVar58);
      auVar127._8_4_ = (float)(_UNK_001153c8 & (uint)fVar70);
      auVar127._12_4_ = (float)(_UNK_001153cc & (uint)fVar66);
      fVar91 = (float)((uint)(fVar115 * fVar131 + fVar91 * fVar150 + fVar119 * fVar141) ^ uVar54);
      fVar95 = (float)((uint)(fVar116 * fVar137 + fVar95 * fVar153 + fVar120 * fVar146) ^ uVar55);
      fVar96 = (float)((uint)(fVar117 * fVar138 + fVar96 * fVar154 + fVar121 * fVar147) ^ uVar56);
      fVar97 = (float)((uint)(fVar118 * fVar139 + fVar97 * fVar155 + fVar122 * fVar148) ^ uVar114);
      fVar69 = (float)((uint)(fVar68 * fVar141 + fVar81 * fVar150 + fVar104 * fVar131) ^ uVar54);
      fVar74 = (float)((uint)(fVar73 * fVar146 + fVar88 * fVar153 + fVar105 * fVar137) ^ uVar55);
      fVar68 = (float)((uint)(fVar75 * fVar147 + fVar89 * fVar154 + fVar106 * fVar138) ^ uVar56);
      fVar73 = (float)((uint)(fVar76 * fVar148 + fVar90 * fVar155 + fVar107 * fVar139) ^ uVar114);
      auVar60._0_4_ =
           -(uint)((0.0 <= fVar91 && (0.0 <= fVar69 && fVar140 != 0.0)) &&
                  fVar91 + fVar69 <= auVar127._0_4_) & _DAT_00116108;
      auVar60._4_4_ =
           -(uint)(((0.0 <= fVar74 && fVar58 != 0.0) && 0.0 <= fVar95) &&
                  fVar95 + fVar74 <= auVar127._4_4_) & uRam000000000011610c;
      auVar60._8_4_ =
           -(uint)((0.0 <= fVar96 && (fVar70 != 0.0 && 0.0 <= fVar68)) &&
                  fVar96 + fVar68 <= auVar127._8_4_) & uRam0000000000116110;
      auVar60._12_4_ =
           -(uint)(((0.0 <= fVar73 && fVar66 != 0.0) && 0.0 <= fVar97) &&
                  fVar97 + fVar73 <= auVar127._12_4_) & uRam0000000000116114;
      iVar37 = movmskps((int)lVar49,auVar60);
      if (iVar37 != 0) {
        fVar58 = (float)((uint)(fVar77 * (float)auStack_1248._0_4_ + fVar98 * fVar112 +
                               fVar108 * fVar149) ^ uVar54);
        fVar70 = (float)((uint)(fVar78 * (float)auStack_1248._4_4_ + fVar101 * fVar113 +
                               fVar109 * fVar152) ^ uVar55);
        fVar66 = (float)((uint)(fVar79 * fStack_1240 + fVar102 * (float)uStack_1230 +
                               fVar110 * (float)uStack_1220) ^ uVar56);
        fVar75 = (float)((uint)(fVar80 * fStack_123c + fVar103 * uStack_1230._4_4_ +
                               fVar111 * uStack_1220._4_4_) ^ uVar114);
        fVar140 = *(float *)(param_2 + 0xc);
        auVar61._0_4_ =
             auVar60._0_4_ &
             -(uint)(fVar140 * auVar127._0_4_ < fVar58 && fVar58 <= pfVar9[2] * auVar127._0_4_);
        auVar61._4_4_ =
             auVar60._4_4_ &
             -(uint)(fVar140 * auVar127._4_4_ < fVar70 && fVar70 <= pfVar11[2] * auVar127._4_4_);
        auVar61._8_4_ =
             auVar60._8_4_ &
             -(uint)(fVar140 * auVar127._8_4_ < fVar66 && fVar66 <= auVar59._8_4_ * auVar127._8_4_);
        auVar61._12_4_ =
             auVar60._12_4_ &
             -(uint)(fVar140 * auVar127._12_4_ < fVar75 &&
                    fVar75 <= auVar59._12_4_ * auVar127._12_4_);
        iVar37 = movmskps(iVar37,auVar61);
        if (iVar37 != 0) {
          auStack_1098 = auVar61;
          uStack_fb8 = uStack_1228;
          uStack_fb0 = uStack_1220;
          auVar100._4_4_ = _LC18;
          auVar100._0_4_ = _LC18;
          auVar100._8_4_ = _LC18;
          auVar100._12_4_ = _LC18;
          uStack_fa8 = uStack_1238;
          uStack_fa0 = uStack_1230;
          auStack_f98 = _auStack_1248;
          auVar92 = rcpps(_auStack_1248,auVar127);
          fVar140 = auVar92._0_4_;
          fVar76 = auVar92._4_4_;
          fVar77 = auVar92._8_4_;
          fVar78 = auVar92._12_4_;
          fVar140 = (_LC7 - auVar127._0_4_ * fVar140) * fVar140 + fVar140;
          fVar76 = (_LC7 - auVar127._4_4_ * fVar76) * fVar76 + fVar76;
          fVar77 = (_LC7 - auVar127._8_4_ * fVar77) * fVar77 + fVar77;
          fVar78 = (_LC7 - auVar127._12_4_ * fVar78) * fVar78 + fVar78;
          fVar58 = fVar58 * fVar140;
          fVar70 = fVar70 * fVar76;
          fVar66 = fVar66 * fVar77;
          fVar75 = fVar75 * fVar78;
          afStack_fc8[0] = fVar58;
          afStack_fc8[1] = fVar70;
          afStack_fc8[2] = fVar66;
          afStack_fc8[3] = fVar75;
          afStack_fe8[0] = fVar69 * fVar140;
          afStack_fe8[1] = fVar74 * fVar76;
          afStack_fe8[2] = fVar68 * fVar77;
          afStack_fe8[3] = fVar73 * fVar78;
          afStack_fd8[0] = fVar140 * fVar91;
          afStack_fd8[1] = fVar76 * fVar95;
          afStack_fd8[2] = fVar77 * fVar96;
          afStack_fd8[3] = fVar78 * fVar97;
          auVar71._0_4_ = auVar61._0_4_ & (uint)fVar58;
          auVar71._4_4_ = auVar61._4_4_ & (uint)fVar70;
          auVar71._8_4_ = auVar61._8_4_ & (uint)fVar66;
          auVar71._12_4_ = auVar61._12_4_ & (uint)fVar75;
          auVar82._0_4_ = ~auVar61._0_4_ & _LC18;
          auVar82._4_4_ = ~auVar61._4_4_ & _LC18;
          auVar82._8_4_ = ~auVar61._8_4_ & _LC18;
          auVar82._12_4_ = ~auVar61._12_4_ & _LC18;
          auVar71 = auVar71 | auVar82;
          auVar83._4_4_ = auVar71._0_4_;
          auVar83._0_4_ = auVar71._4_4_;
          auVar83._8_4_ = auVar71._12_4_;
          auVar83._12_4_ = auVar71._8_4_;
          auVar92 = minps(auVar83,auVar71);
          auVar93._0_8_ = auVar92._8_8_;
          auVar93._8_4_ = auVar92._0_4_;
          auVar93._12_4_ = auVar92._4_4_;
          auVar92 = minps(auVar93,auVar92);
          auVar62._0_4_ = auVar61._0_4_ & -(uint)(auVar71._0_4_ == auVar92._0_4_);
          auVar62._4_4_ = auVar61._4_4_ & -(uint)(auVar71._4_4_ == auVar92._4_4_);
          auVar62._8_4_ = auVar61._8_4_ & -(uint)(auVar71._8_4_ == auVar92._8_4_);
          auVar62._12_4_ = auVar61._12_4_ & -(uint)(auVar71._12_4_ == auVar92._12_4_);
          iVar44 = movmskps(uVar53,auVar62);
          if (iVar44 != 0) {
            iVar37 = iVar44;
          }
          lVar49 = 0;
          if ((long)iVar37 != 0) {
            for (; ((ulong)(long)iVar37 >> lVar49 & 1) == 0; lVar49 = lVar49 + 1) {
            }
          }
          uVar53 = *(uint *)((long)&uStack_1078 + lVar49 * 4);
          while( true ) {
            lVar47 = *(long *)(lVar47 + (ulong)uVar53 * 8);
            pbVar48 = *(byte **)(param_3 + 0x10);
            pcVar41 = *(code **)(pbVar48 + 0x10);
            if ((pcVar41 == (code *)0x0) && (*(long *)(lVar47 + 0x40) == 0)) break;
            uStack_1050 = uVar53;
            uStack_10cc = 0xffffffff;
            fStack_105c = afStack_fe8[lVar49];
            uStack_1060 = *(undefined4 *)(auStack_f98 + lVar49 * 4);
            uStack_1054 = *(undefined4 *)((long)&uStack_1088 + lVar49 * 4);
            fStack_1058 = afStack_fd8[lVar49];
            puStack_10b8 = *(undefined4 **)(param_3 + 8);
            uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar49 * 4);
            uStack_1068 = *(uint *)((long)&uStack_fb8 + lVar49 * 4);
            uStack_104c = **(undefined4 **)(param_3 + 8);
            *(float *)(param_2 + 0x20) = afStack_fc8[lVar49];
            pRStack_10c8 = (RayHitK *)&uStack_10cc;
            puStack_10a8 = &uStack_1068;
            uStack_10c0 = *(undefined8 *)(lVar47 + 0x18);
            pRStack_10b0 = param_2;
            uStack_10a0 = 1;
            if (*(code **)(lVar47 + 0x40) == (code *)0x0) {
LAB_0010fe3c:
              if ((pcVar41 != (code *)0x0) &&
                 (((*pbVar48 & 2) != 0 || ((*(byte *)(lVar47 + 0x3e) & 0x40) != 0)))) {
                (*pcVar41)(&pRStack_10c8);
                auVar100._4_12_ = _UNK_00115414;
                auVar100._0_4_ = _LC18;
                pRVar42 = (RayHitK *)(ulong)*(uint *)pRStack_10c8;
                uVar53 = extraout_EDX;
                if (*(uint *)pRStack_10c8 == 0) goto LAB_00110143;
              }
              *(uint *)(pRStack_10b0 + 0x30) = *puStack_10a8;
              *(uint *)(pRStack_10b0 + 0x34) = puStack_10a8[1];
              *(uint *)(pRStack_10b0 + 0x38) = puStack_10a8[2];
              *(uint *)(pRStack_10b0 + 0x3c) = puStack_10a8[3];
              *(uint *)(pRStack_10b0 + 0x40) = puStack_10a8[4];
              *(uint *)(pRStack_10b0 + 0x44) = puStack_10a8[5];
              *(uint *)(pRStack_10b0 + 0x48) = puStack_10a8[6];
              uVar53 = puStack_10a8[7];
              *(uint *)(pRStack_10b0 + 0x4c) = uVar53;
              local_118c = *(float *)(param_2 + 0x20);
              auStack_11c8._4_4_ = local_118c;
              auStack_11c8._0_4_ = local_118c;
              uStack_11c0._0_4_ = local_118c;
              uStack_11c0._4_4_ = local_118c;
              pRVar42 = pRStack_10b0;
            }
            else {
              (**(code **)(lVar47 + 0x40))(&pRStack_10c8);
              auVar100._4_12_ = _UNK_00115414;
              auVar100._0_4_ = _LC18;
              uVar53 = *(uint *)pRStack_10c8;
              pRVar42 = pRStack_10c8;
              if (uVar53 != 0) {
                pbVar48 = *(byte **)(param_3 + 0x10);
                pcVar41 = *(code **)(pbVar48 + 0x10);
                goto LAB_0010fe3c;
              }
LAB_00110143:
              *(float *)(param_2 + 0x20) = local_118c;
            }
            *(undefined4 *)(auStack_1098 + lVar49 * 4) = 0;
            auStack_1098._0_4_ = -(uint)(fVar58 <= SUB164(_auStack_11c8,0)) & auStack_1098._0_4_;
            auStack_1098._4_4_ = -(uint)(fVar70 <= SUB164(_auStack_11c8,4)) & auStack_1098._4_4_;
            auStack_1098._8_4_ = -(uint)(fVar66 <= SUB164(_auStack_11c8,8)) & auStack_1098._8_4_;
            auStack_1098._12_4_ = -(uint)(fVar75 <= SUB164(_auStack_11c8,0xc)) & auStack_1098._12_4_
            ;
            iVar37 = movmskps((int)pRVar42,auStack_1098);
            if (iVar37 == 0) goto LAB_0010f869;
            auVar85._0_4_ = ~auStack_1098._0_4_ & auVar100._0_4_;
            auVar85._4_4_ = ~auStack_1098._4_4_ & auVar100._4_4_;
            auVar85._8_4_ = ~auStack_1098._8_4_ & auVar100._8_4_;
            auVar85._12_4_ = ~auStack_1098._12_4_ & auVar100._12_4_;
            auVar72._0_4_ = auStack_1098._0_4_ & (uint)fVar58;
            auVar72._4_4_ = auStack_1098._4_4_ & (uint)fVar70;
            auVar72._8_4_ = auStack_1098._8_4_ & (uint)fVar66;
            auVar72._12_4_ = auStack_1098._12_4_ & (uint)fVar75;
            auVar72 = auVar72 | auVar85;
            auVar86._4_4_ = auVar72._0_4_;
            auVar86._0_4_ = auVar72._4_4_;
            auVar86._8_4_ = auVar72._12_4_;
            auVar86._12_4_ = auVar72._8_4_;
            auVar92 = minps(auVar86,auVar72);
            auVar94._0_8_ = auVar92._8_8_;
            auVar94._8_4_ = auVar92._0_4_;
            auVar94._12_4_ = auVar92._4_4_;
            auVar92 = minps(auVar94,auVar92);
            auVar63._0_4_ = auStack_1098._0_4_ & -(uint)(auVar72._0_4_ == auVar92._0_4_);
            auVar63._4_4_ = auStack_1098._4_4_ & -(uint)(auVar72._4_4_ == auVar92._4_4_);
            auVar63._8_4_ = auStack_1098._8_4_ & -(uint)(auVar72._8_4_ == auVar92._8_4_);
            auVar63._12_4_ = auStack_1098._12_4_ & -(uint)(auVar72._12_4_ == auVar92._12_4_);
            iVar44 = movmskps(uVar53,auVar63);
            if (iVar44 != 0) {
              iVar37 = iVar44;
            }
            lVar49 = 0;
            if ((long)iVar37 != 0) {
              for (; ((ulong)(long)iVar37 >> lVar49 & 1) == 0; lVar49 = lVar49 + 1) {
              }
            }
            lVar47 = *(long *)(lVar1 + 0x1e0);
            uVar53 = *(uint *)((long)&uStack_1078 + lVar49 * 4);
          }
          uVar24 = *(undefined4 *)((long)&uStack_1088 + lVar49 * 4);
          *(uint *)(param_2 + 0x48) = uVar53;
          uVar50 = *(undefined4 *)((long)&uStack_fb8 + lVar49 * 4);
          local_118c = afStack_fc8[lVar49];
          fVar140 = afStack_fe8[lVar49];
          *(undefined4 *)(param_2 + 0x44) = uVar24;
          *(undefined4 *)(param_2 + 0x30) = uVar50;
          fVar58 = afStack_fd8[lVar49];
          auStack_11c8._4_4_ = local_118c;
          auStack_11c8._0_4_ = local_118c;
          uStack_11c0._0_4_ = local_118c;
          uStack_11c0._4_4_ = local_118c;
          puVar27 = *(undefined4 **)(param_3 + 8);
          *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((long)&uStack_fa8 + lVar49 * 4);
          uVar50 = *(undefined4 *)(auStack_f98 + lVar49 * 4);
          *(float *)(param_2 + 0x20) = local_118c;
          uVar24 = *puVar27;
          *(undefined4 *)(param_2 + 0x38) = uVar50;
          *(float *)(param_2 + 0x3c) = fVar140;
          *(undefined4 *)(param_2 + 0x4c) = uVar24;
          *(float *)(param_2 + 0x40) = fVar58;
        }
      }
LAB_0010f869:
      local_1250 = local_1250 + 1;
      puVar39 = puVar39 + 0x14;
      auVar92 = _auStack_11c8;
      _auStack_1218 = auVar99;
      if (local_1250 == uVar43 - 8) goto LAB_0010f0f0;
      fVar140 = *(float *)(param_2 + 0x1c);
    } while( true );
  }
  auVar92._4_4_ = local_118c;
  auVar92._0_4_ = local_118c;
  auVar92._8_4_ = local_118c;
  auVar92._12_4_ = local_118c;
  goto LAB_0010f0f0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  long lVar38;
  code *pcVar39;
  float *pfVar40;
  ulong *puVar41;
  long lVar42;
  byte *pbVar43;
  ulong uVar44;
  undefined4 uVar45;
  ulong uVar46;
  uint *puVar47;
  long in_FS_OFFSET;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar68;
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar72;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar82 [16];
  float fVar93;
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar99;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar118;
  float fVar120;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar117 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar128 [16];
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar154;
  float fVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  long local_b08;
  float fStack_aa0;
  float fStack_a9c;
  float fStack_a90;
  float fStack_a8c;
  float fStack_a70;
  float fStack_a6c;
  float fStack_a60;
  float fStack_a5c;
  long local_a18;
  int iStack_90c;
  int *piStack_908;
  undefined8 uStack_900;
  undefined4 *puStack_8f8;
  RayK *pRStack_8f0;
  float *pfStack_8e8;
  undefined4 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  float fStack_8b8;
  float fStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  uint uStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  float local_818 [4];
  undefined1 local_808 [16];
  float local_7f8 [4];
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar93 = *(float *)(param_2 + 0x20), 0.0 <= fVar93)) {
    fVar105 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar105 < 0.0) {
      fVar105 = 0.0;
    }
    fVar31 = *(float *)param_2;
    fVar32 = *(float *)(param_2 + 4);
    fVar33 = *(float *)(param_2 + 8);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar49 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _UNK_001153d4);
    uVar53 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _UNK_001153d8);
    uVar57 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _UNK_001153dc);
    puVar41 = local_7e0;
    auVar152._4_4_ = _LC7;
    auVar152._0_4_ = _LC7;
    auVar152._8_4_ = _LC7;
    auVar152._12_4_ = _LC7;
    auVar116._0_4_ = uVar48 & (uint)_LC5;
    auVar116._4_4_ = uVar49 & (uint)_UNK_001153d4;
    auVar116._8_4_ = uVar53 & (uint)_UNK_001153d8;
    auVar116._12_4_ = uVar57 & (uint)_UNK_001153dc;
    auVar151._0_4_ = ~uVar48 & *(uint *)(param_2 + 0x10);
    auVar151._4_4_ = ~uVar49 & *(uint *)(param_2 + 0x14);
    auVar151._8_4_ = ~uVar53 & *(uint *)(param_2 + 0x18);
    auVar151._12_4_ = ~uVar57 & *(uint *)(param_2 + 0x1c);
    auVar116 = divps(auVar152,auVar116 | auVar151);
    fVar61 = _LC12 * auVar116._0_4_;
    fVar68 = _LC12 * auVar116._4_4_;
    fVar69 = _LC12 * auVar116._8_4_;
    fVar114 = auVar116._0_4_ * _LC14;
    fVar118 = auVar116._4_4_ * _LC14;
    fVar120 = auVar116._8_4_ * _LC14;
    auVar100._4_4_ = fVar93;
    auVar100._0_4_ = fVar93;
    auVar100._8_4_ = fVar93;
    auVar100._12_4_ = fVar93;
    do {
      fVar93 = *(float *)(param_2 + 0x1c);
      uVar44 = puVar41[-1];
      puVar41 = puVar41 + -1;
      while( true ) {
        puVar47 = (uint *)(uVar44 & 0xfffffffffffffff0);
        uVar46 = (ulong)((uint)uVar44 & 0xf);
        if ((uVar44 & 8) != 0) break;
        auVar150._4_4_ = fVar105;
        auVar150._0_4_ = fVar105;
        auVar150._8_4_ = fVar105;
        auVar150._12_4_ = fVar105;
        pfVar1 = (float *)((long)puVar47 + (ulong)(-(uint)(fVar69 < 0.0) & 0x10) + 0x60);
        pfVar40 = (float *)((long)puVar47 + (ulong)(-(uint)(fVar68 < 0.0) & 0x10) + 0x40);
        pfVar3 = (float *)(puVar47 + (ulong)(fVar61 < 0.0) * 4 + 8);
        pfVar2 = (float *)((long)puVar47 + (-(ulong)(fVar68 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar64._0_4_ = ((pfVar40[0x18] * fVar93 + *pfVar40) - fVar32) * fVar68;
        auVar64._4_4_ = ((pfVar40[0x19] * fVar93 + pfVar40[1]) - fVar32) * fVar68;
        auVar64._8_4_ = ((pfVar40[0x1a] * fVar93 + pfVar40[2]) - fVar32) * fVar68;
        auVar64._12_4_ = ((pfVar40[0x1b] * fVar93 + pfVar40[3]) - fVar32) * fVar68;
        auVar136._0_4_ = ((pfVar1[0x18] * fVar93 + *pfVar1) - fVar33) * fVar69;
        auVar136._4_4_ = ((pfVar1[0x19] * fVar93 + pfVar1[1]) - fVar33) * fVar69;
        auVar136._8_4_ = ((pfVar1[0x1a] * fVar93 + pfVar1[2]) - fVar33) * fVar69;
        auVar136._12_4_ = ((pfVar1[0x1b] * fVar93 + pfVar1[3]) - fVar33) * fVar69;
        auVar116 = maxps(auVar64,auVar136);
        pfVar1 = (float *)((long)puVar47 + ((ulong)(fVar61 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar40 = (float *)((long)puVar47 + (-(ulong)(fVar69 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar137._0_4_ = ((pfVar3[0x18] * fVar93 + *pfVar3) - fVar31) * fVar61;
        auVar137._4_4_ = ((pfVar3[0x19] * fVar93 + pfVar3[1]) - fVar31) * fVar61;
        auVar137._8_4_ = ((pfVar3[0x1a] * fVar93 + pfVar3[2]) - fVar31) * fVar61;
        auVar137._12_4_ = ((pfVar3[0x1b] * fVar93 + pfVar3[3]) - fVar31) * fVar61;
        auVar151 = maxps(auVar150,auVar137);
        auVar152 = maxps(auVar151,auVar116);
        auVar138._0_4_ = ((pfVar40[0x18] * fVar93 + *pfVar40) - fVar33) * fVar120;
        auVar138._4_4_ = ((pfVar40[0x19] * fVar93 + pfVar40[1]) - fVar33) * fVar120;
        auVar138._8_4_ = ((pfVar40[0x1a] * fVar93 + pfVar40[2]) - fVar33) * fVar120;
        auVar138._12_4_ = ((pfVar40[0x1b] * fVar93 + pfVar40[3]) - fVar33) * fVar120;
        auVar65._0_4_ = ((pfVar2[0x18] * fVar93 + *pfVar2) - fVar32) * fVar118;
        auVar65._4_4_ = ((pfVar2[0x19] * fVar93 + pfVar2[1]) - fVar32) * fVar118;
        auVar65._8_4_ = ((pfVar2[0x1a] * fVar93 + pfVar2[2]) - fVar32) * fVar118;
        auVar65._12_4_ = ((pfVar2[0x1b] * fVar93 + pfVar2[3]) - fVar32) * fVar118;
        auVar116 = minps(auVar65,auVar138);
        auVar139._0_4_ = ((pfVar1[0x18] * fVar93 + *pfVar1) - fVar31) * fVar114;
        auVar139._4_4_ = ((pfVar1[0x19] * fVar93 + pfVar1[1]) - fVar31) * fVar114;
        auVar139._8_4_ = ((pfVar1[0x1a] * fVar93 + pfVar1[2]) - fVar31) * fVar114;
        auVar139._12_4_ = ((pfVar1[0x1b] * fVar93 + pfVar1[3]) - fVar31) * fVar114;
        auVar151 = minps(auVar100,auVar139);
        auVar116 = minps(auVar151,auVar116);
        bVar25 = auVar152._0_4_ <= auVar116._0_4_;
        bVar26 = auVar152._4_4_ <= auVar116._4_4_;
        bVar27 = auVar152._8_4_ <= auVar116._8_4_;
        bVar28 = auVar152._12_4_ <= auVar116._12_4_;
        auVar153._4_4_ = -(uint)bVar26;
        auVar153._0_4_ = -(uint)bVar25;
        auVar153._8_4_ = -(uint)bVar27;
        auVar153._12_4_ = -(uint)bVar28;
        if (uVar46 == 6) {
          auVar153._0_4_ =
               -(uint)(((float)puVar47[0x38] <= fVar93 && fVar93 < (float)puVar47[0x3c]) && bVar25);
          auVar153._4_4_ =
               -(uint)(((float)puVar47[0x39] <= fVar93 && fVar93 < (float)puVar47[0x3d]) && bVar26);
          auVar153._8_4_ =
               -(uint)(((float)puVar47[0x3a] <= fVar93 && fVar93 < (float)puVar47[0x3e]) && bVar27);
          auVar153._12_4_ =
               -(uint)(((float)puVar47[0x3b] <= fVar93 && fVar93 < (float)puVar47[0x3f]) && bVar28);
        }
        uVar45 = movmskps((int)pfVar1,auVar153);
        uVar46 = CONCAT44((int)((ulong)pfVar1 >> 0x20),uVar45);
        if (uVar46 == 0) goto LAB_00110ec0;
        lVar23 = 0;
        if (uVar46 != 0) {
          for (; (uVar46 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
          }
        }
        uVar44 = *(ulong *)(puVar47 + lVar23 * 2);
        uVar46 = uVar46 - 1 & uVar46;
        if (uVar46 != 0) {
          *puVar41 = uVar44;
          lVar23 = 0;
          if (uVar46 != 0) {
            for (; (uVar46 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
            }
          }
          uVar44 = *(ulong *)(puVar47 + lVar23 * 2);
          for (uVar46 = uVar46 - 1 & uVar46; puVar41 = puVar41 + 1, uVar46 != 0;
              uVar46 = uVar46 & uVar46 - 1) {
            *puVar41 = uVar44;
            lVar23 = 0;
            if (uVar46 != 0) {
              for (; (uVar46 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
              }
            }
            uVar44 = *(ulong *)(puVar47 + lVar23 * 2);
          }
        }
      }
      if (uVar46 != 8) {
        local_a18 = 0;
        do {
          lVar23 = *(long *)param_3;
          lVar42 = *(long *)(lVar23 + 0x1e0);
          lVar22 = *(long *)(lVar42 + (ulong)puVar47[0xc] * 8);
          fVar78 = ((fVar93 - *(float *)(lVar22 + 0x2c)) /
                   (*(float *)(lVar22 + 0x30) - *(float *)(lVar22 + 0x2c))) *
                   *(float *)(lVar22 + 0x28);
          fVar62 = *(float *)(lVar22 + 0x28) - _LC7;
          fVar93 = fVar78;
          if ((float)(_LC3 & (uint)fVar78) < _LC19) {
            fVar93 = (float)(~_LC3 & (uint)fVar78 |
                            (uint)((float)(int)fVar78 -
                                  (float)(-(uint)(fVar78 < (float)(int)fVar78) & (uint)_LC7)));
          }
          if (fVar62 <= fVar93) {
            fVar93 = fVar62;
          }
          if (fVar93 < 0.0) {
            local_b08 = 0x30;
            lVar38 = 0;
          }
          else {
            fVar78 = fVar78 - fVar93;
            lVar38 = (long)(int)fVar93 * 0x30;
            local_b08 = (long)((int)fVar93 + 1) * 0x30;
          }
          lVar38 = *(long *)(*(long *)(lVar22 + 0xd0) + lVar38);
          pfVar1 = (float *)(lVar38 + (ulong)*puVar47 * 4);
          uVar48 = puVar47[1];
          pfVar40 = (float *)(lVar38 + (ulong)puVar47[2] * 4);
          pfVar3 = (float *)(lVar38 + (ulong)uVar48 * 4);
          pfVar2 = (float *)(lVar38 + (ulong)puVar47[3] * 4);
          pfVar4 = (float *)(lVar38 + (ulong)puVar47[6] * 4);
          pfVar5 = (float *)(lVar38 + (ulong)puVar47[7] * 4);
          pfVar6 = (float *)(lVar38 + (ulong)puVar47[8] * 4);
          pfVar7 = (float *)(lVar38 + (ulong)puVar47[4] * 4);
          pfVar8 = (float *)(lVar38 + (ulong)puVar47[5] * 4);
          pfVar9 = (float *)(lVar38 + (ulong)puVar47[9] * 4);
          lVar22 = *(long *)(*(long *)(lVar22 + 0xd0) + local_b08);
          pfVar10 = (float *)(lVar22 + (ulong)*puVar47 * 4);
          pfVar11 = (float *)(lVar22 + (ulong)puVar47[2] * 4);
          pfVar12 = (float *)(lVar22 + (ulong)uVar48 * 4);
          pfVar13 = (float *)(lVar22 + (ulong)puVar47[3] * 4);
          pfVar14 = (float *)(lVar22 + (ulong)puVar47[4] * 4);
          pfVar15 = (float *)(lVar22 + (ulong)puVar47[6] * 4);
          pfVar16 = (float *)(lVar22 + (ulong)puVar47[7] * 4);
          pfVar17 = (float *)(lVar22 + (ulong)puVar47[5] * 4);
          pfVar18 = (float *)(lVar22 + (ulong)puVar47[10] * 4);
          pfVar19 = (float *)(lVar22 + (ulong)puVar47[0xb] * 4);
          pfVar20 = (float *)(lVar22 + (ulong)puVar47[8] * 4);
          pfVar21 = (float *)(lVar22 + (ulong)puVar47[9] * 4);
          fVar93 = *(float *)(param_2 + 0x10);
          fVar63 = _LC7 - fVar78;
          fVar77 = *(float *)param_2;
          fVar104 = *(float *)(param_2 + 4);
          fVar98 = *(float *)(param_2 + 8);
          fVar62 = *(float *)(param_2 + 0x14);
          local_8d8 = *(undefined8 *)(puVar47 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar47 + 0x12);
          fVar89 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar47 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar47 + 0xe);
          fVar127 = (pfVar10[2] * fVar78 + pfVar1[2] * fVar63) - fVar98;
          fVar129 = (pfVar12[2] * fVar78 + pfVar3[2] * fVar63) - fVar98;
          fVar130 = (pfVar11[2] * fVar78 + pfVar40[2] * fVar63) - fVar98;
          fVar131 = (pfVar13[2] * fVar78 + pfVar2[2] * fVar63) - fVar98;
          fVar149 = (pfVar10[1] * fVar78 + pfVar1[1] * fVar63) - fVar104;
          fVar154 = (pfVar12[1] * fVar78 + pfVar3[1] * fVar63) - fVar104;
          fVar155 = (pfVar11[1] * fVar78 + pfVar40[1] * fVar63) - fVar104;
          fVar156 = (pfVar13[1] * fVar78 + pfVar2[1] * fVar63) - fVar104;
          fVar132 = (*pfVar10 * fVar78 + *pfVar1 * fVar63) - fVar77;
          fVar133 = (*pfVar12 * fVar78 + *pfVar3 * fVar63) - fVar77;
          fVar134 = (*pfVar11 * fVar78 + *pfVar40 * fVar63) - fVar77;
          fVar135 = (*pfVar13 * fVar78 + *pfVar2 * fVar63) - fVar77;
          fVar106 = (pfVar14[2] * fVar78 + pfVar7[2] * fVar63) - fVar98;
          fVar107 = (pfVar17[2] * fVar78 + pfVar8[2] * fVar63) - fVar98;
          fVar108 = (pfVar15[2] * fVar78 + fStack_aa0 * fVar63) - fVar98;
          fVar109 = (pfVar16[2] * fVar78 + fStack_a9c * fVar63) - fVar98;
          fVar110 = (pfVar14[1] * fVar78 + pfVar7[1] * fVar63) - fVar104;
          fVar111 = (pfVar17[1] * fVar78 + pfVar8[1] * fVar63) - fVar104;
          fVar112 = (pfVar15[1] * fVar78 + pfVar4[1] * fVar63) - fVar104;
          fVar113 = (pfVar16[1] * fVar78 + pfVar5[1] * fVar63) - fVar104;
          fVar115 = (*pfVar14 * fVar78 + *pfVar7 * fVar63) - fVar77;
          fVar119 = (*pfVar17 * fVar78 + *pfVar8 * fVar63) - fVar77;
          fVar121 = (*pfVar15 * fVar78 + *pfVar4 * fVar63) - fVar77;
          fVar122 = (*pfVar16 * fVar78 + *pfVar5 * fVar63) - fVar77;
          auVar128._0_4_ = fVar132 - fVar115;
          auVar128._4_4_ = fVar133 - fVar119;
          auVar128._8_4_ = fVar134 - fVar121;
          auVar128._12_4_ = fVar135 - fVar122;
          fVar94 = (pfVar20[2] * fVar78 + pfVar6[2] * fVar63) - fVar98;
          fVar96 = (pfVar21[2] * fVar78 + pfVar9[2] * fVar63) - fVar98;
          fVar97 = (fStack_a60 * fVar78 + fStack_a70 * fVar63) - fVar98;
          fVar98 = (fStack_a5c * fVar78 + fStack_a6c * fVar63) - fVar98;
          fVar157 = fVar106 - fVar94;
          fVar159 = fVar107 - fVar96;
          fStack_aa0 = fVar108 - fVar97;
          fStack_a9c = fVar109 - fVar98;
          fVar99 = (pfVar20[1] * fVar78 + pfVar6[1] * fVar63) - fVar104;
          fVar102 = (pfVar21[1] * fVar78 + pfVar9[1] * fVar63) - fVar104;
          fVar103 = (pfVar18[1] * fVar78 + *(float *)(lVar38 + (ulong)puVar47[10] * 4 + 4) * fVar63)
                    - fVar104;
          fVar104 = (pfVar19[1] * fVar78 + *(float *)(lVar38 + (ulong)puVar47[0xb] * 4 + 4) * fVar63
                    ) - fVar104;
          fVar72 = (fVar78 * *pfVar20 + fVar63 * *pfVar6) - fVar77;
          fVar75 = (fVar78 * *pfVar21 + fVar63 * *pfVar9) - fVar77;
          fVar76 = (fVar78 * *pfVar18 + fVar63 * fStack_a90) - fVar77;
          fVar77 = (fVar78 * *pfVar19 + fVar63 * fStack_a8c) - fVar77;
          fVar123 = fVar127 - fVar106;
          fVar124 = fVar129 - fVar107;
          fVar125 = fVar130 - fVar108;
          fVar126 = fVar131 - fVar109;
          fVar79 = fVar94 - fVar127;
          fVar83 = fVar96 - fVar129;
          fVar86 = fVar97 - fVar130;
          fVar90 = fVar98 - fVar131;
          fVar158 = fVar110 - fVar99;
          fVar160 = fVar111 - fVar102;
          fStack_a90 = fVar112 - fVar103;
          fStack_a8c = fVar113 - fVar104;
          fVar141 = fVar115 - fVar72;
          fVar143 = fVar119 - fVar75;
          fVar145 = fVar121 - fVar76;
          fVar147 = fVar122 - fVar77;
          fVar78 = fVar72 - fVar132;
          fVar63 = fVar75 - fVar133;
          fVar70 = fVar76 - fVar134;
          fVar71 = fVar77 - fVar135;
          fVar80 = fVar99 - fVar149;
          fVar84 = fVar102 - fVar154;
          fVar87 = fVar103 - fVar155;
          fVar91 = fVar104 - fVar156;
          fVar81 = fVar149 - fVar110;
          fVar85 = fVar154 - fVar111;
          fVar88 = fVar155 - fVar112;
          fVar92 = fVar156 - fVar113;
          fVar142 = ((fVar132 + fVar72) * fVar79 - fVar78 * (fVar127 + fVar94)) * fVar62 +
                    (fVar78 * (fVar149 + fVar99) - fVar80 * (fVar132 + fVar72)) * fVar89 +
                    ((fVar127 + fVar94) * fVar80 - (fVar149 + fVar99) * fVar79) * fVar93;
          fVar144 = ((fVar133 + fVar75) * fVar83 - fVar63 * (fVar129 + fVar96)) * fVar62 +
                    (fVar63 * (fVar154 + fVar102) - fVar84 * (fVar133 + fVar75)) * fVar89 +
                    ((fVar129 + fVar96) * fVar84 - (fVar154 + fVar102) * fVar83) * fVar93;
          fVar146 = ((fVar134 + fVar76) * fVar86 - fVar70 * (fVar130 + fVar97)) * fVar62 +
                    (fVar70 * (fVar155 + fVar103) - fVar87 * (fVar134 + fVar76)) * fVar89 +
                    ((fVar130 + fVar97) * fVar87 - (fVar155 + fVar103) * fVar86) * fVar93;
          fVar148 = ((fVar135 + fVar77) * fVar90 - fVar71 * (fVar131 + fVar98)) * fVar62 +
                    (fVar71 * (fVar156 + fVar104) - fVar91 * (fVar135 + fVar77)) * fVar89 +
                    ((fVar131 + fVar98) * fVar91 - (fVar156 + fVar104) * fVar90) * fVar93;
          auVar36._4_4_ = fVar144;
          auVar36._0_4_ = fVar142;
          auVar36._8_4_ = fVar146;
          auVar36._12_4_ = fVar148;
          auVar140._0_4_ =
               ((fVar127 + fVar106) * fVar81 - (fVar149 + fVar110) * fVar123) * fVar93 +
               ((fVar132 + fVar115) * fVar123 - auVar128._0_4_ * (fVar127 + fVar106)) * fVar62 +
               (auVar128._0_4_ * (fVar149 + fVar110) - fVar81 * (fVar132 + fVar115)) * fVar89;
          auVar140._4_4_ =
               ((fVar129 + fVar107) * fVar85 - (fVar154 + fVar111) * fVar124) * fVar93 +
               ((fVar133 + fVar119) * fVar124 - auVar128._4_4_ * (fVar129 + fVar107)) * fVar62 +
               (auVar128._4_4_ * (fVar154 + fVar111) - fVar85 * (fVar133 + fVar119)) * fVar89;
          auVar140._8_4_ =
               ((fVar130 + fVar108) * fVar88 - (fVar155 + fVar112) * fVar125) * fVar93 +
               ((fVar134 + fVar121) * fVar125 - auVar128._8_4_ * (fVar130 + fVar108)) * fVar62 +
               (auVar128._8_4_ * (fVar155 + fVar112) - fVar88 * (fVar134 + fVar121)) * fVar89;
          auVar140._12_4_ =
               ((fVar131 + fVar109) * fVar92 - (fVar156 + fVar113) * fVar126) * fVar93 +
               ((fVar135 + fVar122) * fVar126 - auVar128._12_4_ * (fVar131 + fVar109)) * fVar62 +
               (auVar128._12_4_ * (fVar156 + fVar113) - fVar92 * (fVar135 + fVar122)) * fVar89;
          auVar151 = maxps(auVar36,auVar140);
          auVar95._0_4_ =
               ((fVar106 + fVar94) * fVar158 - (fVar99 + fVar110) * fVar157) * fVar93 +
               ((fVar72 + fVar115) * fVar157 - fVar141 * (fVar106 + fVar94)) * fVar62 +
               (fVar141 * (fVar99 + fVar110) - fVar158 * (fVar72 + fVar115)) * fVar89;
          auVar95._4_4_ =
               ((fVar107 + fVar96) * fVar160 - (fVar102 + fVar111) * fVar159) * fVar93 +
               ((fVar75 + fVar119) * fVar159 - fVar143 * (fVar107 + fVar96)) * fVar62 +
               (fVar143 * (fVar102 + fVar111) - fVar160 * (fVar75 + fVar119)) * fVar89;
          auVar95._8_4_ =
               ((fVar108 + fVar97) * fStack_a90 - (fVar103 + fVar112) * fStack_aa0) * fVar93 +
               ((fVar76 + fVar121) * fStack_aa0 - fVar145 * (fVar108 + fVar97)) * fVar62 +
               (fVar145 * (fVar103 + fVar112) - fStack_a90 * (fVar76 + fVar121)) * fVar89;
          auVar95._12_4_ =
               ((fVar109 + fVar98) * fStack_a8c - (fVar104 + fVar113) * fStack_a9c) * fVar93 +
               ((fVar77 + fVar122) * fStack_a9c - fVar147 * (fVar109 + fVar98)) * fVar62 +
               (fVar147 * (fVar104 + fVar113) - fStack_a8c * (fVar77 + fVar122)) * fVar89;
          auVar116 = minps(auVar36,auVar140);
          auVar117._0_4_ = fVar142 + auVar140._0_4_ + auVar95._0_4_;
          auVar117._4_4_ = fVar144 + auVar140._4_4_ + auVar95._4_4_;
          auVar117._8_4_ = fVar146 + auVar140._8_4_ + auVar95._8_4_;
          auVar117._12_4_ = fVar148 + auVar140._12_4_ + auVar95._12_4_;
          auVar151 = maxps(auVar151,auVar95);
          auVar116 = minps(auVar116,auVar95);
          fVar77 = __LC15 * (float)(_LC3 & (uint)auVar117._0_4_);
          fVar104 = _UNK_00115404 * (float)(_UNK_001153c4 & (uint)auVar117._4_4_);
          fVar98 = _UNK_00115408 * (float)(_UNK_001153c8 & (uint)auVar117._8_4_);
          fVar72 = _UNK_0011540c * (float)(_UNK_001153cc & (uint)auVar117._12_4_);
          auVar73._0_4_ =
               _DAT_00116108 &
               -(uint)((float)((uint)fVar77 ^ _LC9) <= auVar116._0_4_ || auVar151._0_4_ <= fVar77);
          auVar73._4_4_ =
               uRam000000000011610c &
               -(uint)((float)((uint)fVar104 ^ _UNK_001153f4) <= auVar116._4_4_ ||
                      auVar151._4_4_ <= fVar104);
          auVar73._8_4_ =
               uRam0000000000116110 &
               -(uint)((float)((uint)fVar98 ^ _UNK_001153f8) <= auVar116._8_4_ ||
                      auVar151._8_4_ <= fVar98);
          auVar73._12_4_ =
               uRam0000000000116114 &
               -(uint)((float)((uint)fVar72 ^ _UNK_001153fc) <= auVar116._12_4_ ||
                      auVar151._12_4_ <= fVar72);
          iVar37 = movmskps((int)lVar22,auVar73);
          if (iVar37 != 0) {
            uVar49 = -(uint)((float)(_LC3 & (uint)(fVar79 * fVar81)) <
                            (float)(_LC3 & (uint)(fVar158 * fVar123)));
            uVar50 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar83 * fVar85)) <
                            (float)(_UNK_001153c4 & (uint)(fVar160 * fVar124)));
            uVar54 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar86 * fVar88)) <
                            (float)(_UNK_001153c8 & (uint)(fStack_a90 * fVar125)));
            uVar58 = -(uint)((float)(_UNK_001153cc & (uint)(fVar90 * fVar92)) <
                            (float)(_UNK_001153cc & (uint)(fStack_a8c * fVar126)));
            uVar53 = -(uint)((float)(_LC3 & (uint)(fVar78 * fVar123)) <
                            (float)(_LC3 & (uint)(fVar157 * auVar128._0_4_)));
            uVar51 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar63 * fVar124)) <
                            (float)(_UNK_001153c4 & (uint)(fVar159 * auVar128._4_4_)));
            uVar55 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar70 * fVar125)) <
                            (float)(_UNK_001153c8 & (uint)(fStack_aa0 * auVar128._8_4_)));
            uVar59 = -(uint)((float)(_UNK_001153cc & (uint)(fVar71 * fVar126)) <
                            (float)(_UNK_001153cc & (uint)(fStack_a9c * auVar128._12_4_)));
            uVar57 = -(uint)((float)(_LC3 & (uint)(fVar80 * auVar128._0_4_)) <
                            (float)(_LC3 & (uint)(fVar81 * fVar141)));
            uVar52 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar84 * auVar128._4_4_)) <
                            (float)(_UNK_001153c4 & (uint)(fVar85 * fVar143)));
            uVar56 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar87 * auVar128._8_4_)) <
                            (float)(_UNK_001153c8 & (uint)(fVar88 * fVar145)));
            uVar60 = -(uint)((float)(_UNK_001153cc & (uint)(fVar91 * auVar128._12_4_)) <
                            (float)(_UNK_001153cc & (uint)(fVar92 * fVar147)));
            fVar104 = (float)(uVar57 & (uint)(fVar78 * fVar81 - fVar80 * auVar128._0_4_) |
                             ~uVar57 & (uint)(fVar158 * auVar128._0_4_ - fVar81 * fVar141));
            fVar98 = (float)(uVar52 & (uint)(fVar63 * fVar85 - fVar84 * auVar128._4_4_) |
                            ~uVar52 & (uint)(fVar160 * auVar128._4_4_ - fVar85 * fVar143));
            fVar72 = (float)(uVar56 & (uint)(fVar70 * fVar88 - fVar87 * auVar128._8_4_) |
                            ~uVar56 & (uint)(fStack_a90 * auVar128._8_4_ - fVar88 * fVar145));
            fVar75 = (float)(uVar60 & (uint)(fVar71 * fVar92 - fVar91 * auVar128._12_4_) |
                            ~uVar60 & (uint)(fStack_a8c * auVar128._12_4_ - fVar92 * fVar147));
            auVar66._0_4_ = ~uVar53 & (uint)(fVar141 * fVar123 - fVar157 * auVar128._0_4_);
            auVar66._4_4_ = ~uVar51 & (uint)(fVar143 * fVar124 - fVar159 * auVar128._4_4_);
            auVar66._8_4_ = ~uVar55 & (uint)(fVar145 * fVar125 - fStack_aa0 * auVar128._8_4_);
            auVar66._12_4_ = ~uVar59 & (uint)(fVar147 * fVar126 - fStack_a9c * auVar128._12_4_);
            auVar101._0_4_ = uVar53 & (uint)(fVar79 * auVar128._0_4_ - fVar78 * fVar123);
            auVar101._4_4_ = uVar51 & (uint)(fVar83 * auVar128._4_4_ - fVar63 * fVar124);
            auVar101._8_4_ = uVar55 & (uint)(fVar86 * auVar128._8_4_ - fVar70 * fVar125);
            auVar101._12_4_ = uVar59 & (uint)(fVar90 * auVar128._12_4_ - fVar71 * fVar126);
            auVar101 = auVar101 | auVar66;
            fVar63 = (float)(uVar49 & (uint)(fVar80 * fVar123 - fVar79 * fVar81) |
                            ~uVar49 & (uint)(fVar81 * fVar157 - fVar158 * fVar123));
            fVar70 = (float)(uVar50 & (uint)(fVar84 * fVar124 - fVar83 * fVar85) |
                            ~uVar50 & (uint)(fVar85 * fVar159 - fVar160 * fVar124));
            fVar71 = (float)(uVar54 & (uint)(fVar87 * fVar125 - fVar86 * fVar88) |
                            ~uVar54 & (uint)(fVar88 * fStack_aa0 - fStack_a90 * fVar125));
            fVar76 = (float)(uVar58 & (uint)(fVar91 * fVar126 - fVar90 * fVar92) |
                            ~uVar58 & (uint)(fVar92 * fStack_a9c - fStack_a8c * fVar126));
            fVar79 = fVar62 * auVar101._0_4_ + fVar89 * fVar104 + fVar93 * fVar63;
            fVar80 = fVar62 * auVar101._4_4_ + fVar89 * fVar98 + fVar93 * fVar70;
            fVar81 = fVar62 * auVar101._8_4_ + fVar89 * fVar72 + fVar93 * fVar71;
            fVar83 = fVar62 * auVar101._12_4_ + fVar89 * fVar75 + fVar93 * fVar76;
            fVar79 = fVar79 + fVar79;
            fVar80 = fVar80 + fVar80;
            fVar81 = fVar81 + fVar81;
            fVar83 = fVar83 + fVar83;
            auVar29._4_4_ = fVar80;
            auVar29._0_4_ = fVar79;
            auVar29._8_4_ = fVar81;
            auVar29._12_4_ = fVar83;
            auVar116 = rcpps(auVar128,auVar29);
            fVar62 = fVar149 * auVar101._0_4_ + fVar127 * fVar104 + fVar132 * fVar63;
            fVar78 = fVar154 * auVar101._4_4_ + fVar129 * fVar98 + fVar133 * fVar70;
            fVar89 = fVar155 * auVar101._8_4_ + fVar130 * fVar72 + fVar134 * fVar71;
            fVar77 = fVar156 * auVar101._12_4_ + fVar131 * fVar75 + fVar135 * fVar76;
            fVar84 = auVar116._0_4_;
            fVar85 = auVar116._4_4_;
            fVar86 = auVar116._8_4_;
            fVar87 = auVar116._12_4_;
            fVar93 = *(float *)(param_2 + 0x20);
            auVar82._0_4_ = (fVar62 + fVar62) * ((_LC7 - fVar79 * fVar84) * fVar84 + fVar84);
            auVar82._4_4_ = (fVar78 + fVar78) * ((_LC7 - fVar80 * fVar85) * fVar85 + fVar85);
            auVar82._8_4_ = (fVar89 + fVar89) * ((_LC7 - fVar81 * fVar86) * fVar86 + fVar86);
            auVar82._12_4_ = (fVar77 + fVar77) * ((_LC7 - fVar83 * fVar87) * fVar87 + fVar87);
            fVar62 = *(float *)(param_2 + 0xc);
            auVar30._4_4_ =
                 -(uint)(fVar62 <= auVar82._4_4_ && auVar82._4_4_ <= fVar93) & auVar73._4_4_ &
                 -(uint)(fVar80 != 0.0);
            auVar30._0_4_ =
                 -(uint)(fVar62 <= auVar82._0_4_ && auVar82._0_4_ <= fVar93) & auVar73._0_4_ &
                 -(uint)(fVar79 != 0.0);
            auVar30._8_4_ =
                 -(uint)(fVar62 <= auVar82._8_4_ && auVar82._8_4_ <= fVar93) & auVar73._8_4_ &
                 -(uint)(fVar81 != 0.0);
            auVar30._12_4_ =
                 -(uint)(fVar62 <= auVar82._12_4_ && auVar82._12_4_ <= fVar93) & auVar73._12_4_ &
                 -(uint)(fVar83 != 0.0);
            uVar48 = movmskps(uVar48,auVar30);
            uVar44 = (ulong)uVar48;
            if (uVar48 != 0) {
              local_828 = auVar82;
              auVar116 = rcpps(auVar82,auVar117);
              local_7f8[0] = fVar104;
              local_7f8[1] = fVar98;
              local_7f8[2] = fVar72;
              local_7f8[3] = fVar75;
              local_818[0] = fVar63;
              local_818[1] = fVar70;
              local_818[2] = fVar71;
              local_818[3] = fVar76;
              local_808 = auVar101;
              fVar62 = auVar116._0_4_;
              fVar78 = auVar116._4_4_;
              fVar89 = auVar116._8_4_;
              fVar77 = auVar116._12_4_;
              fVar62 = (float)(~-(uint)((float)(_LC3 & (uint)auVar117._0_4_) < _LC5) &
                              (uint)((_LC7 - auVar117._0_4_ * fVar62) * fVar62 + fVar62));
              fVar78 = (float)(~-(uint)((float)(_UNK_001153c4 & (uint)auVar117._4_4_) <
                                       _UNK_001153d4) &
                              (uint)((_LC7 - auVar117._4_4_ * fVar78) * fVar78 + fVar78));
              fVar89 = (float)(~-(uint)((float)(_UNK_001153c8 & (uint)auVar117._8_4_) <
                                       _UNK_001153d8) &
                              (uint)((_LC7 - auVar117._8_4_ * fVar89) * fVar89 + fVar89));
              fVar77 = (float)(~-(uint)((float)(_UNK_001153cc & (uint)auVar117._12_4_) <
                                       _UNK_001153dc) &
                              (uint)((_LC7 - auVar117._12_4_ * fVar77) * fVar77 + fVar77));
              auVar67._0_4_ = fVar142 * fVar62;
              auVar67._4_4_ = fVar144 * fVar78;
              auVar67._8_4_ = fVar146 * fVar89;
              auVar67._12_4_ = fVar148 * fVar77;
              auVar74._0_4_ = fVar62 * auVar140._0_4_;
              auVar74._4_4_ = fVar78 * auVar140._4_4_;
              auVar74._8_4_ = fVar89 * auVar140._8_4_;
              auVar74._12_4_ = fVar77 * auVar140._12_4_;
              auVar34._4_12_ = _UNK_001153e4;
              auVar34._0_4_ = _LC7;
              local_848 = minps(auVar67,auVar34);
              auVar35._4_12_ = _UNK_001153e4;
              auVar35._0_4_ = _LC7;
              local_838 = minps(auVar74,auVar35);
              do {
                uVar24 = 0;
                if (uVar44 != 0) {
                  for (; (uVar44 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                  }
                }
                uVar48 = *(uint *)((long)&local_8c8 + uVar24 * 4);
                lVar42 = *(long *)(lVar42 + (ulong)uVar48 * 8);
                pbVar43 = *(byte **)(param_3 + 0x10);
                pcVar39 = *(code **)(pbVar43 + 0x10);
                if ((pcVar39 == (code *)0x0) && (*(long *)(lVar42 + 0x48) == 0)) {
LAB_00110df5:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00110dfd;
                }
                puStack_8f8 = *(undefined4 **)(param_3 + 8);
                uStack_8a0 = uVar48;
                iStack_90c = -1;
                uStack_8ac = *(undefined4 *)(local_848 + uVar24 * 4);
                fStack_8b0 = local_7f8[uVar24];
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar24 * 4);
                fStack_8b4 = local_7f8[uVar24 - 4];
                uStack_89c = *puStack_8f8;
                piStack_908 = &iStack_90c;
                uStack_8a8 = *(undefined4 *)(local_838 + uVar24 * 4);
                fStack_8b8 = local_818[uVar24];
                *(float *)(param_2 + 0x20) = local_818[uVar24 - 4];
                uStack_900 = *(undefined8 *)(lVar42 + 0x18);
                pfStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar42 + 0x48) == (code *)0x0) {
LAB_00111044:
                  if ((pcVar39 == (code *)0x0) ||
                     ((((*pbVar43 & 2) == 0 && ((*(byte *)(lVar42 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar39)(&piStack_908), *piStack_908 != 0)))) goto LAB_00110df5;
                }
                else {
                  (**(code **)(lVar42 + 0x48))(&piStack_908);
                  if (*piStack_908 != 0) {
                    pbVar43 = *(byte **)(param_3 + 0x10);
                    pcVar39 = *(code **)(pbVar43 + 0x10);
                    goto LAB_00111044;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar93;
                uVar44 = uVar44 ^ 1L << (uVar24 & 0x3f);
                if (uVar44 == 0) break;
                lVar42 = *(long *)(lVar23 + 0x1e0);
              } while( true );
            }
          }
          local_a18 = local_a18 + 1;
          puVar47 = puVar47 + 0x14;
          fStack_a70 = fVar155;
          fStack_a6c = fVar156;
          fStack_a60 = fVar134;
          fStack_a5c = fVar135;
          if (local_a18 == uVar46 - 8) break;
          fVar93 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_00110ec0:
    } while (puVar41 != &local_7e8);
  }
LAB_00110dfd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, true,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,16777232,true,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiMBIntersector1Pluecker<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined4 *puVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  int iVar39;
  int iVar40;
  ulong uVar41;
  uint *puVar42;
  long lVar43;
  RayHitK *pRVar44;
  ulong uVar45;
  ulong uVar46;
  byte *pbVar47;
  ulong uVar48;
  float *pfVar49;
  code *pcVar50;
  long lVar51;
  undefined1 (*pauVar52) [16];
  long lVar53;
  undefined4 uVar54;
  undefined1 (*pauVar55) [16];
  long in_FS_OFFSET;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar80;
  float fVar82;
  undefined1 auVar72 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar85;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar96;
  float fVar97;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar111;
  float fVar113;
  undefined1 auVar107 [16];
  float fVar112;
  float fVar114;
  float fVar115;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar116;
  float fVar117;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 auVar134 [16];
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  undefined1 auVar151 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar158;
  float fVar169;
  float fVar170;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar171;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  float fVar172;
  float fVar176;
  float fVar177;
  undefined1 auVar173 [16];
  float fVar178;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  int iStack_12b0;
  ulong uStack_12a8;
  int iStack_12a0;
  undefined1 auStack_1298 [8];
  float fStack_1290;
  float fStack_128c;
  ulong uStack_1278;
  ulong uStack_1270;
  undefined1 auStack_1268 [8];
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  ulong uStack_1250;
  float fStack_1248;
  float fStack_1244;
  float fStack_1240;
  float fStack_123c;
  float fStack_1230;
  float fStack_122c;
  float fStack_1210;
  float fStack_120c;
  long lStack_1208;
  undefined1 local_11e8 [8];
  float fStack_11e0;
  float fStack_11dc;
  float local_11bc;
  undefined4 uStack_10bc;
  RayHitK *pRStack_10b8;
  undefined8 uStack_10b0;
  undefined4 *puStack_10a8;
  RayHitK *pRStack_10a0;
  float *pfStack_1098;
  undefined4 uStack_1090;
  undefined1 auStack_1088 [16];
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  float fStack_1058;
  float fStack_1054;
  float fStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  uint uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  undefined1 auStack_fc8 [16];
  float afStack_fb8 [4];
  undefined1 auStack_fa8 [16];
  float afStack_f98 [4];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  uVar38 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_001114f0:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  fVar69 = *(float *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if (fVar69 < 0.0) {
    fVar69 = 0.0;
  }
  fVar96 = *(float *)(param_2 + 0xc);
  if (fVar96 < 0.0) {
    fVar96 = 0.0;
  }
  fVar32 = *(float *)param_2;
  fVar33 = *(float *)(param_2 + 4);
  fVar34 = *(float *)(param_2 + 8);
  local_11e8._4_4_ = fVar69;
  local_11e8._0_4_ = fVar69;
  fStack_11e0 = fVar69;
  fStack_11dc = fVar69;
  pauVar52 = (undefined1 (*) [16])local_f78;
  uVar56 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar57 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001153d4);
  uVar61 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001153d8);
  uVar65 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001153dc);
  auVar107._0_4_ = uVar56 & (uint)_LC5;
  auVar107._4_4_ = uVar57 & (uint)_UNK_001153d4;
  auVar107._8_4_ = uVar61 & (uint)_UNK_001153d8;
  auVar107._12_4_ = uVar65 & (uint)_UNK_001153dc;
  auVar173._0_4_ = ~uVar56 & *(uint *)(param_2 + 0x10);
  auVar173._4_4_ = ~uVar57 & *(uint *)(param_2 + 0x14);
  auVar173._8_4_ = ~uVar61 & *(uint *)(param_2 + 0x18);
  auVar173._12_4_ = ~uVar65 & *(uint *)(param_2 + 0x1c);
  auVar174._4_4_ = _LC7;
  auVar174._0_4_ = _LC7;
  auVar174._8_4_ = _LC7;
  auVar174._12_4_ = _LC7;
  auVar107 = divps(auVar174,auVar107 | auVar173);
  fVar69 = _LC12 * auVar107._0_4_;
  fVar80 = _LC12 * auVar107._4_4_;
  fVar82 = _LC12 * auVar107._8_4_;
  fVar105 = auVar107._0_4_ * _LC14;
  fVar111 = auVar107._4_4_ * _LC14;
  fVar113 = auVar107._8_4_ * _LC14;
  uVar41 = (ulong)(fVar69 < 0.0) * 0x10;
LAB_001112e8:
  pauVar55 = pauVar52;
  if (pauVar52 != (undefined1 (*) [16])local_f88) {
    do {
      fStack_1248 = *(float *)(param_2 + 0x20);
      pauVar52 = pauVar55 + -1;
      if (*(float *)(pauVar55[-1] + 8) <= fStack_1248) {
        fVar141 = *(float *)(param_2 + 0x1c);
        uVar45 = *(ulong *)pauVar55[-1];
        if ((uVar45 & 8) != 0) goto LAB_001115a6;
        auVar37._4_4_ = fVar96;
        auVar37._0_4_ = fVar96;
        auVar37._8_4_ = fVar96;
        auVar37._12_4_ = fVar96;
        while( true ) {
          uVar46 = uVar45 & 0xfffffffffffffff0;
          lVar1 = uVar46 + 0x20;
          pfVar2 = (float *)(lVar1 + (ulong)(-(uint)(fVar82 < 0.0) & 0x10) + 0x40);
          pfVar49 = (float *)(lVar1 + (ulong)(-(uint)(fVar80 < 0.0) & 0x10) + 0x20);
          pfVar3 = (float *)(lVar1 + uVar41);
          pfVar4 = (float *)(lVar1 + (-(ulong)(fVar80 < 0.0) & 0xfffffffffffffff0) + 0x30);
          auVar182._0_4_ = ((pfVar49[0x18] * fVar141 + *pfVar49) - fVar33) * fVar80;
          auVar182._4_4_ = ((pfVar49[0x19] * fVar141 + pfVar49[1]) - fVar33) * fVar80;
          auVar182._8_4_ = ((pfVar49[0x1a] * fVar141 + pfVar49[2]) - fVar33) * fVar80;
          auVar182._12_4_ = ((pfVar49[0x1b] * fVar141 + pfVar49[3]) - fVar33) * fVar80;
          auVar159._0_4_ = ((pfVar2[0x18] * fVar141 + *pfVar2) - fVar34) * fVar82;
          auVar159._4_4_ = ((pfVar2[0x19] * fVar141 + pfVar2[1]) - fVar34) * fVar82;
          auVar159._8_4_ = ((pfVar2[0x1a] * fVar141 + pfVar2[2]) - fVar34) * fVar82;
          auVar159._12_4_ = ((pfVar2[0x1b] * fVar141 + pfVar2[3]) - fVar34) * fVar82;
          auVar107 = maxps(auVar182,auVar159);
          pfVar2 = (float *)(lVar1 + (uVar41 ^ 0x10));
          pfVar49 = (float *)(lVar1 + (-(ulong)(fVar82 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar160._0_4_ = ((pfVar3[0x18] * fVar141 + *pfVar3) - fVar32) * fVar69;
          auVar160._4_4_ = ((pfVar3[0x19] * fVar141 + pfVar3[1]) - fVar32) * fVar69;
          auVar160._8_4_ = ((pfVar3[0x1a] * fVar141 + pfVar3[2]) - fVar32) * fVar69;
          auVar160._12_4_ = ((pfVar3[0x1b] * fVar141 + pfVar3[3]) - fVar32) * fVar69;
          auVar173 = maxps(auVar37,auVar160);
          local_1038[0] = maxps(auVar173,auVar107);
          auVar161._0_4_ = ((pfVar49[0x18] * fVar141 + *pfVar49) - fVar34) * fVar113;
          auVar161._4_4_ = ((pfVar49[0x19] * fVar141 + pfVar49[1]) - fVar34) * fVar113;
          auVar161._8_4_ = ((pfVar49[0x1a] * fVar141 + pfVar49[2]) - fVar34) * fVar113;
          auVar161._12_4_ = ((pfVar49[0x1b] * fVar141 + pfVar49[3]) - fVar34) * fVar113;
          auVar72._0_4_ = ((pfVar4[0x18] * fVar141 + *pfVar4) - fVar33) * fVar111;
          auVar72._4_4_ = ((pfVar4[0x19] * fVar141 + pfVar4[1]) - fVar33) * fVar111;
          auVar72._8_4_ = ((pfVar4[0x1a] * fVar141 + pfVar4[2]) - fVar33) * fVar111;
          auVar72._12_4_ = ((pfVar4[0x1b] * fVar141 + pfVar4[3]) - fVar33) * fVar111;
          auVar107 = minps(auVar72,auVar161);
          auVar162._0_4_ = ((pfVar2[0x18] * fVar141 + *pfVar2) - fVar32) * fVar105;
          auVar162._4_4_ = ((pfVar2[0x19] * fVar141 + pfVar2[1]) - fVar32) * fVar105;
          auVar162._8_4_ = ((pfVar2[0x1a] * fVar141 + pfVar2[2]) - fVar32) * fVar105;
          auVar162._12_4_ = ((pfVar2[0x1b] * fVar141 + pfVar2[3]) - fVar32) * fVar105;
          auVar173 = minps(_local_11e8,auVar162);
          auVar107 = minps(auVar173,auVar107);
          bVar27 = SUB164(local_1038[0],0) <= auVar107._0_4_;
          bVar28 = SUB164(local_1038[0],4) <= auVar107._4_4_;
          bVar29 = SUB164(local_1038[0],8) <= auVar107._8_4_;
          bVar30 = SUB164(local_1038[0],0xc) <= auVar107._12_4_;
          auVar167._4_4_ = -(uint)bVar28;
          auVar167._0_4_ = -(uint)bVar27;
          auVar167._8_4_ = -(uint)bVar29;
          auVar167._12_4_ = -(uint)bVar30;
          if (((uint)uVar45 & 0xf) == 6) {
            auVar167._0_4_ =
                 -(uint)((*(float *)(uVar46 + 0xe0) <= fVar141 &&
                         fVar141 < *(float *)(uVar46 + 0xf0)) && bVar27);
            auVar167._4_4_ =
                 -(uint)((*(float *)(uVar46 + 0xe4) <= fVar141 &&
                         fVar141 < *(float *)(uVar46 + 0xf4)) && bVar28);
            auVar167._8_4_ =
                 -(uint)((*(float *)(uVar46 + 0xe8) <= fVar141 &&
                         fVar141 < *(float *)(uVar46 + 0xf8)) && bVar29);
            auVar167._12_4_ =
                 -(uint)((*(float *)(uVar46 + 0xec) <= fVar141 &&
                         fVar141 < *(float *)(uVar46 + 0xfc)) && bVar30);
          }
          uVar54 = movmskps((int)pfVar2,auVar167);
          uVar48 = CONCAT44((int)((ulong)pfVar2 >> 0x20),uVar54);
          if (uVar48 == 0) break;
          lVar1 = 0;
          if (uVar48 != 0) {
            for (; (uVar48 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar25 = *(ulong *)(uVar46 + lVar1 * 8);
          uVar48 = uVar48 - 1 & uVar48;
          uVar45 = uVar25;
          if (uVar48 != 0) {
            uVar56 = *(uint *)(local_1038[0] + lVar1 * 4);
            lVar1 = 0;
            if (uVar48 != 0) {
              for (; (uVar48 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
              }
            }
            uVar45 = *(ulong *)(uVar46 + lVar1 * 8);
            uVar57 = *(uint *)(local_1038[0] + lVar1 * 4);
            uVar48 = uVar48 & uVar48 - 1;
            if (uVar48 == 0) {
              if (uVar56 < uVar57) {
                *(ulong *)*pauVar52 = uVar45;
                *(uint *)(*pauVar52 + 8) = uVar57;
                uVar45 = uVar25;
                pauVar52 = pauVar52 + 1;
              }
              else {
                *(ulong *)*pauVar52 = uVar25;
                *(uint *)(*pauVar52 + 8) = uVar56;
                pauVar52 = pauVar52 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar48 != 0) {
                for (; (uVar48 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uStack_12a8 = *(ulong *)(uVar46 + lVar1 * 8);
              auVar157._8_4_ = uVar56;
              auVar157._0_8_ = uVar25;
              auVar157._12_4_ = 0;
              iVar39 = *(int *)(local_1038[0] + lVar1 * 4);
              auVar180._8_4_ = uVar57;
              auVar180._0_8_ = uVar45;
              auVar180._12_4_ = 0;
              auVar78._8_4_ = iVar39;
              auVar78._0_8_ = uStack_12a8;
              auVar78._12_4_ = 0;
              auVar164._8_4_ = -(uint)((int)uVar56 < (int)uVar57);
              uVar48 = uVar48 - 1 & uVar48;
              if (uVar48 == 0) {
                auVar164._4_4_ = auVar164._8_4_;
                auVar164._0_4_ = auVar164._8_4_;
                auVar164._12_4_ = auVar164._8_4_;
                auVar174 = ~auVar164 & auVar180 | auVar157 & auVar164;
                auVar173 = auVar164 & auVar180 | ~auVar164 & auVar157;
                auVar175._8_4_ = -(uint)(auVar174._8_4_ < iVar39);
                auVar175._0_8_ = CONCAT44(auVar175._8_4_,auVar175._8_4_);
                auVar175._12_4_ = auVar175._8_4_;
                uStack_12a8 = ~auVar175._0_8_ & uStack_12a8;
                auVar107 = auVar78 & auVar175 | ~auVar175 & auVar174;
                iStack_12b0 = auVar173._8_4_;
                auVar181._8_4_ = -(uint)(iStack_12b0 < auVar107._8_4_);
                auVar181._4_4_ = auVar181._8_4_;
                auVar181._0_4_ = auVar181._8_4_;
                auVar181._12_4_ = auVar181._8_4_;
                _auStack_1298 = ~auVar181 & auVar107;
                *pauVar52 = auVar107 & auVar181 | ~auVar181 & auVar173;
                uVar45 = auVar174._0_8_ & auVar175._0_8_ | uStack_12a8;
                pauVar52[1] = auVar173 & auVar181 | _auStack_1298;
                pauVar52 = pauVar52 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar48 != 0) {
                  for (; (uVar48 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                auVar165._4_4_ = auVar164._8_4_;
                auVar165._0_4_ = auVar164._8_4_;
                auVar165._8_4_ = auVar164._8_4_;
                auVar165._12_4_ = auVar164._8_4_;
                auVar79._8_4_ = *(int *)(local_1038[0] + lVar1 * 4);
                auVar79._0_8_ = *(undefined8 *)(uVar46 + lVar1 * 8);
                auVar79._12_4_ = 0;
                auVar174 = auVar157 & auVar165 | ~auVar165 & auVar180;
                auVar182 = auVar165 & auVar180 | ~auVar165 & auVar157;
                auVar166._8_4_ = -(uint)(iVar39 < *(int *)(local_1038[0] + lVar1 * 4));
                auVar166._4_4_ = auVar166._8_4_;
                auVar166._0_4_ = auVar166._8_4_;
                auVar166._12_4_ = auVar166._8_4_;
                auVar173 = ~auVar166 & auVar79 | auVar78 & auVar166;
                auVar107 = auVar79 & auVar166 | ~auVar166 & auVar78;
                iVar39 = -(uint)(auVar182._8_4_ < auVar107._8_4_);
                auStack_1268 = (undefined1  [8])CONCAT44(iVar39,iVar39);
                uStack_1260._0_4_ = (float)iVar39;
                uStack_1260._4_4_ = (float)iVar39;
                auVar167 = auVar182 & _auStack_1268 | ~_auStack_1268 & auVar107;
                auVar183._8_4_ = -(uint)(auVar174._8_4_ < auVar173._8_4_);
                auVar183._0_8_ = CONCAT44(auVar183._8_4_,auVar183._8_4_);
                auVar183._12_4_ = auVar183._8_4_;
                _auStack_1298 = ~auVar183 & auVar173;
                auVar173 = auVar173 & auVar183 | ~auVar183 & auVar174;
                iStack_12a0 = auVar173._8_4_;
                iVar39 = -(uint)(iStack_12a0 < auVar167._8_4_);
                auVar168._4_4_ = iVar39;
                auVar168._0_4_ = iVar39;
                auVar168._8_4_ = iVar39;
                auVar168._12_4_ = iVar39;
                uStack_1278 = auVar107._0_8_;
                uStack_1270 = auVar107._8_8_;
                uStack_1258 = SUB168(~_auStack_1268 & auVar182,0);
                uStack_1250 = SUB168(~_auStack_1268 & auVar182,8);
                *(ulong *)*pauVar52 = uStack_1278 & (ulong)auStack_1268 | uStack_1258;
                *(ulong *)(*pauVar52 + 8) = uStack_1270 & uStack_1260 | uStack_1250;
                pauVar52[1] = auVar167 & auVar168 | ~auVar168 & auVar173;
                pauVar52[2] = auVar173 & auVar168 | ~auVar168 & auVar167;
                uVar45 = (ulong)auStack_1298 | auVar174._0_8_ & auVar183._0_8_;
                pauVar52 = pauVar52 + 3;
              }
            }
          }
          if ((uVar45 & 8) != 0) goto LAB_001115a6;
        }
      }
      pauVar55 = pauVar52;
      if (pauVar52 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_001114f0;
LAB_001115a6:
  puVar42 = (uint *)(uVar45 & 0xfffffffffffffff0);
  uVar45 = (ulong)((uint)uVar45 & 0xf);
  fStack_1244 = fStack_1248;
  fStack_1240 = fStack_1248;
  fStack_123c = fStack_1248;
  local_11bc = fStack_1248;
  if (uVar45 != 8) {
LAB_00111f63:
    lVar1 = *(long *)param_3;
    lVar53 = *(long *)(lVar1 + 0x1e0);
    lVar51 = *(long *)(lVar53 + (ulong)puVar42[0xc] * 8);
    fVar133 = ((fVar141 - *(float *)(lVar51 + 0x2c)) /
              (*(float *)(lVar51 + 0x30) - *(float *)(lVar51 + 0x2c))) * *(float *)(lVar51 + 0x28);
    fVar71 = *(float *)(lVar51 + 0x28) - _LC7;
    fVar141 = fVar133;
    if ((float)(_LC3 & (uint)fVar133) < _LC19) {
      fVar141 = (float)(~_LC3 & (uint)fVar133 |
                       (uint)((float)(int)fVar133 -
                             (float)(-(uint)(fVar133 < (float)(int)fVar133) & (uint)_LC7)));
    }
    if (fVar71 <= fVar141) {
      fVar141 = fVar71;
    }
    if (0.0 <= fVar141) {
      fVar133 = fVar133 - fVar141;
      lVar43 = (long)(int)fVar141 * 0x30;
      lStack_1208 = (long)((int)fVar141 + 1) * 0x30;
    }
    else {
      lStack_1208 = 0x30;
      lVar43 = 0;
    }
    uVar56 = puVar42[1];
    lVar43 = *(long *)(*(long *)(lVar51 + 0xd0) + lVar43);
    pfVar2 = (float *)(lVar43 + (ulong)*puVar42 * 4);
    pfVar49 = (float *)(lVar43 + (ulong)puVar42[3] * 4);
    pfVar3 = (float *)(lVar43 + (ulong)puVar42[2] * 4);
    pfVar4 = (float *)(lVar43 + (ulong)uVar56 * 4);
    pfVar5 = (float *)(lVar43 + (ulong)puVar42[4] * 4);
    pfVar6 = (float *)(lVar43 + (ulong)puVar42[6] * 4);
    pfVar7 = (float *)(lVar43 + (ulong)puVar42[5] * 4);
    pfVar8 = (float *)(lVar43 + (ulong)puVar42[7] * 4);
    pfVar9 = (float *)(lVar43 + (ulong)puVar42[8] * 4);
    pfVar10 = (float *)(lVar43 + (ulong)puVar42[9] * 4);
    uStack_1258 = CONCAT44(pfVar8[2],pfVar6[2]);
    lVar51 = *(long *)(*(long *)(lVar51 + 0xd0) + lStack_1208);
    pfVar11 = (float *)(lVar51 + (ulong)puVar42[10] * 4);
    pfVar12 = (float *)(lVar51 + (ulong)*puVar42 * 4);
    pfVar13 = (float *)(lVar51 + (ulong)puVar42[2] * 4);
    pfVar14 = (float *)(lVar51 + (ulong)puVar42[3] * 4);
    pfVar15 = (float *)(lVar51 + (ulong)uVar56 * 4);
    pfVar16 = (float *)(lVar51 + (ulong)puVar42[4] * 4);
    pfVar17 = (float *)(lVar51 + (ulong)puVar42[7] * 4);
    pfVar18 = (float *)(lVar51 + (ulong)puVar42[6] * 4);
    pfVar19 = (float *)(lVar51 + (ulong)puVar42[8] * 4);
    pfVar20 = (float *)(lVar51 + (ulong)puVar42[5] * 4);
    pfVar21 = (float *)(lVar51 + (ulong)puVar42[9] * 4);
    pfVar22 = (float *)(lVar51 + (ulong)puVar42[0xb] * 4);
    fVar141 = *(float *)(param_2 + 0x10);
    fVar71 = *(float *)(param_2 + 0x14);
    fVar154 = *(float *)(param_2 + 0x18);
    fVar84 = *(float *)param_2;
    fVar126 = *(float *)(param_2 + 4);
    fVar115 = *(float *)(param_2 + 8);
    fVar85 = _LC7 - fVar133;
    uStack_1078 = *(undefined8 *)(puVar42 + 0x10);
    uStack_1070 = *(undefined8 *)(puVar42 + 0x12);
    uStack_1068 = *(undefined8 *)(puVar42 + 0xc);
    uStack_1060 = *(undefined8 *)(puVar42 + 0xe);
    fVar158 = (pfVar12[1] * fVar133 + pfVar2[1] * fVar85) - fVar126;
    fVar169 = (pfVar15[1] * fVar133 + pfVar4[1] * fVar85) - fVar126;
    fVar170 = (pfVar13[1] * fVar133 + pfVar3[1] * fVar85) - fVar126;
    fVar171 = (pfVar14[1] * fVar133 + pfVar49[1] * fVar85) - fVar126;
    fVar116 = (pfVar12[2] * fVar133 + pfVar2[2] * fVar85) - fVar115;
    fVar121 = (pfVar15[2] * fVar133 + pfVar4[2] * fVar85) - fVar115;
    fVar123 = (pfVar13[2] * fVar133 + fStack_1290 * fVar85) - fVar115;
    fVar125 = (pfVar14[2] * fVar133 + fStack_128c * fVar85) - fVar115;
    fVar172 = (*pfVar12 * fVar133 + *pfVar2 * fVar85) - fVar84;
    fVar176 = (*pfVar15 * fVar133 + *pfVar4 * fVar85) - fVar84;
    fVar177 = (*pfVar13 * fVar133 + *pfVar3 * fVar85) - fVar84;
    fVar178 = (*pfVar14 * fVar133 + *pfVar49 * fVar85) - fVar84;
    fVar184 = (pfVar16[2] * fVar133 + pfVar5[2] * fVar85) - fVar115;
    fVar186 = (pfVar20[2] * fVar133 + pfVar7[2] * fVar85) - fVar115;
    fVar188 = (pfVar18[2] * fVar133 + (float)uStack_1260 * fVar85) - fVar115;
    fVar190 = (pfVar17[2] * fVar133 + uStack_1260._4_4_ * fVar85) - fVar115;
    fVar185 = (pfVar16[1] * fVar133 + pfVar5[1] * fVar85) - fVar126;
    fVar187 = (pfVar20[1] * fVar133 + pfVar7[1] * fVar85) - fVar126;
    fVar189 = (pfVar18[1] * fVar133 + pfVar6[1] * fVar85) - fVar126;
    fVar191 = (pfVar17[1] * fVar133 + pfVar8[1] * fVar85) - fVar126;
    fVar117 = (pfVar19[1] * fVar133 + pfVar9[1] * fVar85) - fVar126;
    fVar122 = (pfVar21[1] * fVar133 + pfVar10[1] * fVar85) - fVar126;
    fVar124 = (pfVar11[1] * fVar133 + *(float *)(lVar43 + (ulong)puVar42[10] * 4 + 4) * fVar85) -
              fVar126;
    fVar126 = (pfVar22[1] * fVar133 + *(float *)(lVar43 + (ulong)puVar42[0xb] * 4 + 4) * fVar85) -
              fVar126;
    fVar192 = fVar116 - fVar184;
    fVar193 = fVar121 - fVar186;
    fVar194 = fVar123 - fVar188;
    fVar195 = fVar125 - fVar190;
    fVar127 = (*pfVar16 * fVar133 + *pfVar5 * fVar85) - fVar84;
    fVar128 = (*pfVar20 * fVar133 + *pfVar7 * fVar85) - fVar84;
    fVar129 = (*pfVar18 * fVar133 + *pfVar6 * fVar85) - fVar84;
    fVar130 = (*pfVar17 * fVar133 + *pfVar8 * fVar85) - fVar84;
    fVar97 = fVar158 - fVar185;
    fVar102 = fVar169 - fVar187;
    fVar103 = fVar170 - fVar189;
    fVar104 = fVar171 - fVar191;
    fVar106 = (pfVar19[2] * fVar133 + pfVar9[2] * fVar85) - fVar115;
    fVar112 = (pfVar21[2] * fVar133 + pfVar10[2] * fVar85) - fVar115;
    fVar114 = (pfVar11[2] * fVar133 + fStack_1210 * fVar85) - fVar115;
    fVar115 = (pfVar22[2] * fVar133 + fStack_120c * fVar85) - fVar115;
    fVar70 = (fVar133 * *pfVar19 + fVar85 * *pfVar9) - fVar84;
    fVar81 = (fVar133 * *pfVar21 + fVar85 * *pfVar10) - fVar84;
    fVar83 = (fVar133 * *pfVar11 + fVar85 * fStack_1230) - fVar84;
    fVar84 = (fVar133 * *pfVar22 + fVar85 * fStack_122c) - fVar84;
    fVar150 = fVar172 - fVar127;
    fVar152 = fVar176 - fVar128;
    fVar153 = fVar177 - fVar129;
    fVar155 = fVar178 - fVar130;
    fVar131 = fVar184 - fVar106;
    fVar135 = fVar186 - fVar112;
    fVar137 = fVar188 - fVar114;
    fVar139 = fVar190 - fVar115;
    fVar142 = fVar106 - fVar116;
    fVar144 = fVar112 - fVar121;
    fVar146 = fVar114 - fVar123;
    fVar148 = fVar115 - fVar125;
    fVar133 = fVar70 - fVar172;
    fVar90 = fVar81 - fVar176;
    fVar92 = fVar83 - fVar177;
    fVar94 = fVar84 - fVar178;
    fVar132 = fVar185 - fVar117;
    fVar136 = fVar187 - fVar122;
    fVar138 = fVar189 - fVar124;
    fVar140 = fVar191 - fVar126;
    auStack_1298._0_4_ = fVar117 - fVar158;
    auStack_1298._4_4_ = fVar122 - fVar169;
    fStack_1290 = fVar124 - fVar170;
    fStack_128c = fVar126 - fVar171;
    auStack_1268._4_4_ = fVar136;
    auStack_1268._0_4_ = fVar132;
    uStack_1260._0_4_ = fVar138;
    uStack_1260._4_4_ = fVar140;
    fVar143 = fVar127 - fVar70;
    fVar145 = fVar128 - fVar81;
    fVar147 = fVar129 - fVar83;
    fVar149 = fVar130 - fVar84;
    fVar85 = ((fVar172 + fVar70) * fVar142 - fVar133 * (fVar116 + fVar106)) * fVar71 +
             (fVar133 * (fVar158 + fVar117) - (float)auStack_1298._0_4_ * (fVar172 + fVar70)) *
             fVar154 + ((fVar116 + fVar106) * (float)auStack_1298._0_4_ -
                       (fVar158 + fVar117) * fVar142) * fVar141;
    fVar91 = ((fVar176 + fVar81) * fVar144 - fVar90 * (fVar121 + fVar112)) * fVar71 +
             (fVar90 * (fVar169 + fVar122) - (float)auStack_1298._4_4_ * (fVar176 + fVar81)) *
             fVar154 + ((fVar121 + fVar112) * (float)auStack_1298._4_4_ -
                       (fVar169 + fVar122) * fVar144) * fVar141;
    fVar93 = ((fVar177 + fVar83) * fVar146 - fVar92 * (fVar123 + fVar114)) * fVar71 +
             (fVar92 * (fVar170 + fVar124) - fStack_1290 * (fVar177 + fVar83)) * fVar154 +
             ((fVar123 + fVar114) * fStack_1290 - (fVar170 + fVar124) * fVar146) * fVar141;
    fVar95 = ((fVar178 + fVar84) * fVar148 - fVar94 * (fVar125 + fVar115)) * fVar71 +
             (fVar94 * (fVar171 + fVar126) - fStack_128c * (fVar178 + fVar84)) * fVar154 +
             ((fVar125 + fVar115) * fStack_128c - (fVar171 + fVar126) * fVar148) * fVar141;
    auVar179._0_4_ =
         ((fVar172 + fVar127) * fVar192 - fVar150 * (fVar116 + fVar184)) * fVar71 +
         (fVar150 * (fVar158 + fVar185) - fVar97 * (fVar172 + fVar127)) * fVar154 +
         ((fVar116 + fVar184) * fVar97 - (fVar158 + fVar185) * fVar192) * fVar141;
    auVar179._4_4_ =
         ((fVar176 + fVar128) * fVar193 - fVar152 * (fVar121 + fVar186)) * fVar71 +
         (fVar152 * (fVar169 + fVar187) - fVar102 * (fVar176 + fVar128)) * fVar154 +
         ((fVar121 + fVar186) * fVar102 - (fVar169 + fVar187) * fVar193) * fVar141;
    auVar179._8_4_ =
         ((fVar177 + fVar129) * fVar194 - fVar153 * (fVar123 + fVar188)) * fVar71 +
         (fVar153 * (fVar170 + fVar189) - fVar103 * (fVar177 + fVar129)) * fVar154 +
         ((fVar123 + fVar188) * fVar103 - (fVar170 + fVar189) * fVar194) * fVar141;
    auVar179._12_4_ =
         ((fVar178 + fVar130) * fVar195 - fVar155 * (fVar125 + fVar190)) * fVar71 +
         (fVar155 * (fVar171 + fVar191) - fVar104 * (fVar178 + fVar130)) * fVar154 +
         ((fVar125 + fVar190) * fVar104 - (fVar171 + fVar191) * fVar195) * fVar141;
    auVar118._8_4_ = fVar93;
    auVar118._0_8_ = CONCAT44(fVar91,fVar85);
    auVar118._12_4_ = fVar95;
    auVar173 = maxps(auVar118,auVar179);
    auVar108._0_4_ =
         ((fVar184 + fVar106) * fVar132 - (fVar117 + fVar185) * fVar131) * fVar141 +
         ((fVar70 + fVar127) * fVar131 - fVar143 * (fVar184 + fVar106)) * fVar71 +
         (fVar143 * (fVar117 + fVar185) - fVar132 * (fVar70 + fVar127)) * fVar154;
    auVar108._4_4_ =
         ((fVar186 + fVar112) * fVar136 - (fVar122 + fVar187) * fVar135) * fVar141 +
         ((fVar81 + fVar128) * fVar135 - fVar145 * (fVar186 + fVar112)) * fVar71 +
         (fVar145 * (fVar122 + fVar187) - fVar136 * (fVar81 + fVar128)) * fVar154;
    auVar108._8_4_ =
         ((fVar188 + fVar114) * fVar138 - (fVar124 + fVar189) * fVar137) * fVar141 +
         ((fVar83 + fVar129) * fVar137 - fVar147 * (fVar188 + fVar114)) * fVar71 +
         (fVar147 * (fVar124 + fVar189) - fVar138 * (fVar83 + fVar129)) * fVar154;
    auVar108._12_4_ =
         ((fVar190 + fVar115) * fVar140 - (fVar126 + fVar191) * fVar139) * fVar141 +
         ((fVar84 + fVar130) * fVar139 - fVar149 * (fVar190 + fVar115)) * fVar71 +
         (fVar149 * (fVar126 + fVar191) - fVar140 * (fVar84 + fVar130)) * fVar154;
    auVar73._8_4_ = fVar93;
    auVar73._0_8_ = CONCAT44(fVar91,fVar85);
    auVar73._12_4_ = fVar95;
    auVar107 = minps(auVar73,auVar179);
    fVar81 = fVar85 + auVar179._0_4_ + auVar108._0_4_;
    fVar83 = fVar91 + auVar179._4_4_ + auVar108._4_4_;
    fVar106 = fVar93 + auVar179._8_4_ + auVar108._8_4_;
    fVar112 = fVar95 + auVar179._12_4_ + auVar108._12_4_;
    auVar173 = maxps(auVar173,auVar108);
    auVar107 = minps(auVar107,auVar108);
    fVar84 = __LC15 * (float)(uVar38 & (uint)fVar81);
    fVar126 = _UNK_00115404 * (float)(uVar38 & (uint)fVar83);
    fVar115 = _UNK_00115408 * (float)(uVar38 & (uint)fVar106);
    fVar70 = _UNK_0011540c * (float)(uVar38 & (uint)fVar112);
    auVar74._0_4_ =
         -(uint)((float)((uint)fVar84 ^ _LC9) <= auVar107._0_4_ || auVar173._0_4_ <= fVar84) &
         _DAT_00116108;
    auVar74._4_4_ =
         -(uint)((float)((uint)fVar126 ^ _UNK_001153f4) <= auVar107._4_4_ ||
                auVar173._4_4_ <= fVar126) & uRam000000000011610c;
    auVar74._8_4_ =
         -(uint)((float)((uint)fVar115 ^ _UNK_001153f8) <= auVar107._8_4_ ||
                auVar173._8_4_ <= fVar115) & uRam0000000000116110;
    auVar74._12_4_ =
         -(uint)((float)((uint)fVar70 ^ _UNK_001153fc) <= auVar107._12_4_ ||
                auVar173._12_4_ <= fVar70) & uRam0000000000116114;
    local_11e8._4_4_ = fStack_1244;
    local_11e8._0_4_ = fStack_1248;
    fStack_11e0 = fStack_1240;
    fStack_11dc = fStack_123c;
    iVar39 = movmskps((int)lVar51,auVar74);
    if (iVar39 != 0) {
      fVar114 = fVar142 * fVar97;
      fVar117 = fVar144 * fVar102;
      auVar163._4_4_ = fVar117;
      auVar163._0_4_ = fVar114;
      fVar122 = fVar146 * fVar103;
      fVar124 = fVar148 * fVar104;
      auVar163._8_4_ = fVar122;
      auVar163._12_4_ = fVar124;
      uVar57 = -(uint)((float)((uint)fVar114 & uVar38) < (float)((uint)(fVar132 * fVar192) & uVar38)
                      );
      uVar58 = -(uint)((float)((uint)fVar117 & uVar38) < (float)((uint)(fVar136 * fVar193) & uVar38)
                      );
      uVar62 = -(uint)((float)((uint)fVar122 & uVar38) < (float)((uint)(fVar138 * fVar194) & uVar38)
                      );
      uVar66 = -(uint)((float)((uint)fVar124 & uVar38) < (float)((uint)(fVar140 * fVar195) & uVar38)
                      );
      uVar61 = -(uint)((float)(uVar38 & (uint)(fVar133 * fVar192)) <
                      (float)((uint)(fVar131 * fVar150) & uVar38));
      uVar59 = -(uint)((float)(uVar38 & (uint)(fVar90 * fVar193)) <
                      (float)((uint)(fVar135 * fVar152) & uVar38));
      uVar63 = -(uint)((float)(uVar38 & (uint)(fVar92 * fVar194)) <
                      (float)((uint)(fVar137 * fVar153) & uVar38));
      uVar67 = -(uint)((float)(uVar38 & (uint)(fVar94 * fVar195)) <
                      (float)((uint)(fVar139 * fVar155) & uVar38));
      uVar65 = -(uint)((float)((uint)((float)auStack_1298._0_4_ * fVar150) & uVar38) <
                      (float)(uVar38 & (uint)(fVar143 * fVar97)));
      uVar60 = -(uint)((float)((uint)((float)auStack_1298._4_4_ * fVar152) & uVar38) <
                      (float)(uVar38 & (uint)(fVar145 * fVar102)));
      uVar64 = -(uint)((float)((uint)(fStack_1290 * fVar153) & uVar38) <
                      (float)(uVar38 & (uint)(fVar147 * fVar103)));
      uVar68 = -(uint)((float)((uint)(fStack_128c * fVar155) & uVar38) <
                      (float)(uVar38 & (uint)(fVar149 * fVar104)));
      auStack_1268._0_4_ = ~uVar65 & (uint)(fVar132 * fVar150 - fVar143 * fVar97);
      auStack_1268._4_4_ = ~uVar60 & (uint)(fVar136 * fVar152 - fVar145 * fVar102);
      uStack_1260._0_4_ = (float)(~uVar64 & (uint)(fVar138 * fVar153 - fVar147 * fVar103));
      uStack_1260._4_4_ = (float)(~uVar68 & (uint)(fVar140 * fVar155 - fVar149 * fVar104));
      fVar84 = (float)(uVar65 & (uint)(fVar133 * fVar97 - (float)auStack_1298._0_4_ * fVar150) |
                      auStack_1268._0_4_);
      fVar126 = (float)(uVar60 & (uint)(fVar90 * fVar102 - (float)auStack_1298._4_4_ * fVar152) |
                       auStack_1268._4_4_);
      fVar115 = (float)(uVar64 & (uint)(fVar92 * fVar103 - fStack_1290 * fVar153) |
                       (uint)(float)uStack_1260);
      fVar70 = (float)(uVar68 & (uint)(fVar94 * fVar104 - fStack_128c * fVar155) |
                      (uint)uStack_1260._4_4_);
      auVar156._0_4_ = ~uVar61 & (uint)(fVar143 * fVar192 - fVar131 * fVar150);
      auVar156._4_4_ = ~uVar59 & (uint)(fVar145 * fVar193 - fVar135 * fVar152);
      auVar156._8_4_ = ~uVar63 & (uint)(fVar147 * fVar194 - fVar137 * fVar153);
      auVar156._12_4_ = ~uVar67 & (uint)(fVar149 * fVar195 - fVar139 * fVar155);
      auVar119._0_4_ = uVar61 & (uint)(fVar142 * fVar150 - fVar133 * fVar192);
      auVar119._4_4_ = uVar59 & (uint)(fVar144 * fVar152 - fVar90 * fVar193);
      auVar119._8_4_ = uVar63 & (uint)(fVar146 * fVar153 - fVar92 * fVar194);
      auVar119._12_4_ = uVar67 & (uint)(fVar148 * fVar155 - fVar94 * fVar195);
      auVar119 = auVar119 | auVar156;
      fVar133 = (float)(uVar57 & (uint)((float)auStack_1298._0_4_ * fVar192 - fVar114) |
                       ~uVar57 & (uint)(fVar97 * fVar131 - fVar132 * fVar192));
      fVar90 = (float)(uVar58 & (uint)((float)auStack_1298._4_4_ * fVar193 - fVar117) |
                      ~uVar58 & (uint)(fVar102 * fVar135 - fVar136 * fVar193));
      fVar92 = (float)(uVar62 & (uint)(fStack_1290 * fVar194 - fVar122) |
                      ~uVar62 & (uint)(fVar103 * fVar137 - fVar138 * fVar194));
      fVar94 = (float)(uVar66 & (uint)(fStack_128c * fVar195 - fVar124) |
                      ~uVar66 & (uint)(fVar104 * fVar139 - fVar140 * fVar195));
      fVar97 = fVar71 * auVar119._0_4_ + fVar154 * fVar84 + fVar141 * fVar133;
      fVar102 = fVar71 * auVar119._4_4_ + fVar154 * fVar126 + fVar141 * fVar90;
      fVar103 = fVar71 * auVar119._8_4_ + fVar154 * fVar115 + fVar141 * fVar92;
      fVar141 = fVar71 * auVar119._12_4_ + fVar154 * fVar70 + fVar141 * fVar94;
      auVar134._0_4_ = fVar97 + fVar97;
      auVar134._4_4_ = fVar102 + fVar102;
      auVar134._8_4_ = fVar103 + fVar103;
      auVar134._12_4_ = fVar141 + fVar141;
      auVar107 = rcpps(auVar163,auVar134);
      fVar141 = fVar116 * fVar84 + fVar158 * auVar119._0_4_ + fVar172 * fVar133;
      fVar71 = fVar121 * fVar126 + fVar169 * auVar119._4_4_ + fVar176 * fVar90;
      fVar154 = fVar123 * fVar115 + fVar170 * auVar119._8_4_ + fVar177 * fVar92;
      fVar97 = fVar125 * fVar70 + fVar171 * auVar119._12_4_ + fVar178 * fVar94;
      fVar102 = auVar107._0_4_;
      fVar103 = auVar107._4_4_;
      fVar104 = auVar107._8_4_;
      fVar114 = auVar107._12_4_;
      auVar151._0_4_ = (fVar141 + fVar141) * ((_LC7 - auVar134._0_4_ * fVar102) * fVar102 + fVar102)
      ;
      auVar151._4_4_ = (fVar71 + fVar71) * ((_LC7 - auVar134._4_4_ * fVar103) * fVar103 + fVar103);
      auVar151._8_4_ = (fVar154 + fVar154) * ((_LC7 - auVar134._8_4_ * fVar104) * fVar104 + fVar104)
      ;
      auVar151._12_4_ = (fVar97 + fVar97) * ((_LC7 - auVar134._12_4_ * fVar114) * fVar114 + fVar114)
      ;
      fVar141 = *(float *)(param_2 + 0xc);
      auVar75._0_4_ =
           auVar74._0_4_ & -(uint)(fVar141 <= auVar151._0_4_ && auVar151._0_4_ <= fStack_1248) &
           -(uint)(auVar134._0_4_ != 0.0);
      auVar75._4_4_ =
           auVar74._4_4_ & -(uint)(fVar141 <= auVar151._4_4_ && auVar151._4_4_ <= fStack_1244) &
           -(uint)(auVar134._4_4_ != 0.0);
      auVar75._8_4_ =
           auVar74._8_4_ & -(uint)(fVar141 <= auVar151._8_4_ && auVar151._8_4_ <= fStack_1240) &
           -(uint)(auVar134._8_4_ != 0.0);
      auVar75._12_4_ =
           auVar74._12_4_ & -(uint)(fVar141 <= auVar151._12_4_ && auVar151._12_4_ <= fStack_123c) &
           -(uint)(auVar134._12_4_ != 0.0);
      uVar56 = movmskps(uVar56,auVar75);
      if (uVar56 != 0) {
        auStack_fa8 = auVar119;
        auVar31._4_4_ = fVar83;
        auVar31._0_4_ = fVar81;
        auVar31._8_4_ = fVar106;
        auVar31._12_4_ = fVar112;
        auVar107 = rcpps(auVar119,auVar31);
        afStack_fb8[0] = fVar133;
        afStack_fb8[1] = fVar90;
        afStack_fb8[2] = fVar92;
        afStack_fb8[3] = fVar94;
        afStack_f98[0] = fVar84;
        afStack_f98[1] = fVar126;
        afStack_f98[2] = fVar115;
        afStack_f98[3] = fVar70;
        auStack_1088 = auVar75;
        auStack_fc8 = auVar151;
        fVar141 = auVar107._0_4_;
        fVar71 = auVar107._4_4_;
        fVar133 = auVar107._8_4_;
        fVar154 = auVar107._12_4_;
        auVar120._4_4_ = _LC18;
        auVar120._0_4_ = _LC18;
        auVar120._8_4_ = _LC18;
        auVar120._12_4_ = _LC18;
        fVar141 = (float)(~-(uint)((float)(uVar38 & (uint)fVar81) < _LC5) &
                         (uint)((_LC7 - fVar81 * fVar141) * fVar141 + fVar141));
        fVar71 = (float)(~-(uint)((float)(uVar38 & (uint)fVar83) < _UNK_001153d4) &
                        (uint)((_LC7 - fVar83 * fVar71) * fVar71 + fVar71));
        fVar133 = (float)(~-(uint)((float)(uVar38 & (uint)fVar106) < _UNK_001153d8) &
                         (uint)((_LC7 - fVar106 * fVar133) * fVar133 + fVar133));
        fVar154 = (float)(~-(uint)((float)(uVar38 & (uint)fVar112) < _UNK_001153dc) &
                         (uint)((_LC7 - fVar112 * fVar154) * fVar154 + fVar154));
        auVar86._0_4_ = fVar85 * fVar141;
        auVar86._4_4_ = fVar91 * fVar71;
        auVar86._8_4_ = fVar93 * fVar133;
        auVar86._12_4_ = fVar95 * fVar154;
        auVar35._4_12_ = _UNK_001153e4;
        auVar35._0_4_ = _LC7;
        auStack_fe8 = minps(auVar86,auVar35);
        auVar87._0_4_ = auVar179._0_4_ * fVar141;
        auVar87._4_4_ = auVar179._4_4_ * fVar71;
        auVar87._8_4_ = auVar179._8_4_ * fVar133;
        auVar87._12_4_ = auVar179._12_4_ * fVar154;
        auVar36._4_12_ = _UNK_001153e4;
        auVar36._0_4_ = _LC7;
        auStack_fd8 = minps(auVar87,auVar36);
        auVar98._0_4_ = ~auVar75._0_4_ & _LC18;
        auVar98._4_4_ = ~auVar75._4_4_ & _LC18;
        auVar98._8_4_ = ~auVar75._8_4_ & _LC18;
        auVar98._12_4_ = ~auVar75._12_4_ & _LC18;
        auVar88._0_4_ = auVar75._0_4_ & (uint)auVar151._0_4_;
        auVar88._4_4_ = auVar75._4_4_ & (uint)auVar151._4_4_;
        auVar88._8_4_ = auVar75._8_4_ & (uint)auVar151._8_4_;
        auVar88._12_4_ = auVar75._12_4_ & (uint)auVar151._12_4_;
        auVar88 = auVar88 | auVar98;
        auVar99._4_4_ = auVar88._0_4_;
        auVar99._0_4_ = auVar88._4_4_;
        auVar99._8_4_ = auVar88._12_4_;
        auVar99._12_4_ = auVar88._8_4_;
        auVar107 = minps(auVar99,auVar88);
        auVar109._0_8_ = auVar107._8_8_;
        auVar109._8_4_ = auVar107._0_4_;
        auVar109._12_4_ = auVar107._4_4_;
        auVar107 = minps(auVar109,auVar107);
        auVar76._0_4_ = auVar75._0_4_ & -(uint)(auVar88._0_4_ == auVar107._0_4_);
        auVar76._4_4_ = auVar75._4_4_ & -(uint)(auVar88._4_4_ == auVar107._4_4_);
        auVar76._8_4_ = auVar75._8_4_ & -(uint)(auVar88._8_4_ == auVar107._8_4_);
        auVar76._12_4_ = auVar75._12_4_ & -(uint)(auVar88._12_4_ == auVar107._12_4_);
        iVar39 = movmskps(iVar39,auVar76);
        uVar46 = (ulong)uVar56;
        if (iVar39 != 0) {
          uVar46 = CONCAT44((int)((ulong)lVar51 >> 0x20),iVar39);
        }
        lVar51 = 0;
        if (uVar46 != 0) {
          for (; (uVar46 >> lVar51 & 1) == 0; lVar51 = lVar51 + 1) {
          }
        }
        uVar56 = *(uint *)((long)&uStack_1068 + lVar51 * 4);
        do {
          pbVar47 = *(byte **)(param_3 + 0x10);
          lVar53 = *(long *)(lVar53 + (ulong)uVar56 * 8);
          pcVar50 = *(code **)(pbVar47 + 0x10);
          if ((pcVar50 == (code *)0x0) && (*(long *)(lVar53 + 0x40) == 0)) {
            fVar141 = afStack_fb8[lVar51];
            *(uint *)(param_2 + 0x48) = uVar56;
            puVar26 = *(undefined4 **)(param_3 + 8);
            uVar23 = *(undefined4 *)((long)&uStack_1078 + lVar51 * 4);
            fStack_1248 = afStack_fb8[lVar51 + -4];
            *(float *)(param_2 + 0x30) = fVar141;
            fVar141 = afStack_f98[lVar51 + -4];
            uVar54 = *(undefined4 *)(auStack_fe8 + lVar51 * 4);
            uVar24 = *puVar26;
            *(undefined4 *)(param_2 + 0x44) = uVar23;
            uVar23 = *(undefined4 *)(auStack_fd8 + lVar51 * 4);
            *(float *)(param_2 + 0x34) = fVar141;
            fVar141 = afStack_f98[lVar51];
            *(undefined4 *)(param_2 + 0x4c) = uVar24;
            *(float *)(param_2 + 0x20) = fStack_1248;
            *(float *)(param_2 + 0x38) = fVar141;
            *(undefined4 *)(param_2 + 0x3c) = uVar54;
            *(undefined4 *)(param_2 + 0x40) = uVar23;
            local_11e8._4_4_ = fStack_1248;
            local_11e8._0_4_ = fStack_1248;
            fStack_11e0 = fStack_1248;
            fStack_11dc = fStack_1248;
            fStack_1244 = fStack_1248;
            fStack_1240 = fStack_1248;
            fStack_123c = fStack_1248;
            local_11bc = fStack_1248;
            break;
          }
          uStack_1040 = uVar56;
          uStack_10bc = 0xffffffff;
          uStack_104c = *(undefined4 *)(auStack_fe8 + lVar51 * 4);
          puStack_10a8 = *(undefined4 **)(param_3 + 8);
          fStack_1050 = afStack_f98[lVar51];
          uStack_1044 = *(undefined4 *)((long)&uStack_1078 + lVar51 * 4);
          fStack_1054 = afStack_f98[lVar51 + -4];
          uStack_103c = **(undefined4 **)(param_3 + 8);
          uStack_1048 = *(undefined4 *)(auStack_fd8 + lVar51 * 4);
          fStack_1058 = afStack_fb8[lVar51];
          pRStack_10b8 = (RayHitK *)&uStack_10bc;
          *(float *)(param_2 + 0x20) = afStack_fb8[lVar51 + -4];
          uStack_10b0 = *(undefined8 *)(lVar53 + 0x18);
          pfStack_1098 = &fStack_1058;
          pRStack_10a0 = param_2;
          uStack_1090 = 1;
          if (*(code **)(lVar53 + 0x40) == (code *)0x0) {
LAB_00112135:
            if ((pcVar50 != (code *)0x0) &&
               (((*pbVar47 & 2) != 0 || ((*(byte *)(lVar53 + 0x3e) & 0x40) != 0)))) {
              (*pcVar50)(&pRStack_10b8);
              auVar120._4_12_ = _UNK_00115414;
              auVar120._0_4_ = _LC18;
              pRVar44 = (RayHitK *)(ulong)*(uint *)pRStack_10b8;
              if (*(uint *)pRStack_10b8 == 0) goto LAB_001122c0;
            }
            *(float *)(pRStack_10a0 + 0x30) = *pfStack_1098;
            *(float *)(pRStack_10a0 + 0x34) = pfStack_1098[1];
            *(float *)(pRStack_10a0 + 0x38) = pfStack_1098[2];
            *(float *)(pRStack_10a0 + 0x3c) = pfStack_1098[3];
            *(float *)(pRStack_10a0 + 0x40) = pfStack_1098[4];
            *(float *)(pRStack_10a0 + 0x44) = pfStack_1098[5];
            *(float *)(pRStack_10a0 + 0x48) = pfStack_1098[6];
            *(float *)(pRStack_10a0 + 0x4c) = pfStack_1098[7];
            fStack_1248 = *(float *)(param_2 + 0x20);
            pRVar44 = pRStack_10a0;
            fStack_1244 = fStack_1248;
            fStack_1240 = fStack_1248;
            fStack_123c = fStack_1248;
            local_11bc = fStack_1248;
          }
          else {
            (**(code **)(lVar53 + 0x40))(&pRStack_10b8);
            auVar120._4_12_ = _UNK_00115414;
            auVar120._0_4_ = _LC18;
            pRVar44 = pRStack_10b8;
            if (*(uint *)pRStack_10b8 != 0) {
              pbVar47 = *(byte **)(param_3 + 0x10);
              pcVar50 = *(code **)(pbVar47 + 0x10);
              goto LAB_00112135;
            }
LAB_001122c0:
            *(float *)(param_2 + 0x20) = local_11bc;
          }
          *(undefined4 *)(auStack_1088 + lVar51 * 4) = 0;
          auStack_1088._0_4_ = -(uint)(auVar151._0_4_ <= fStack_1248) & auStack_1088._0_4_;
          auStack_1088._4_4_ = -(uint)(auVar151._4_4_ <= fStack_1244) & auStack_1088._4_4_;
          auStack_1088._8_4_ = -(uint)(auVar151._8_4_ <= fStack_1240) & auStack_1088._8_4_;
          auStack_1088._12_4_ = -(uint)(auVar151._12_4_ <= fStack_123c) & auStack_1088._12_4_;
          iVar39 = movmskps((int)lVar51,auStack_1088);
          if (iVar39 == 0) goto LAB_00112300;
          auVar100._0_4_ = ~auStack_1088._0_4_ & auVar120._0_4_;
          auVar100._4_4_ = ~auStack_1088._4_4_ & auVar120._4_4_;
          auVar100._8_4_ = ~auStack_1088._8_4_ & auVar120._8_4_;
          auVar100._12_4_ = ~auStack_1088._12_4_ & auVar120._12_4_;
          auVar89._0_4_ = auStack_1088._0_4_ & (uint)auVar151._0_4_;
          auVar89._4_4_ = auStack_1088._4_4_ & (uint)auVar151._4_4_;
          auVar89._8_4_ = auStack_1088._8_4_ & (uint)auVar151._8_4_;
          auVar89._12_4_ = auStack_1088._12_4_ & (uint)auVar151._12_4_;
          auVar89 = auVar89 | auVar100;
          lVar53 = *(long *)(lVar1 + 0x1e0);
          auVar101._4_4_ = auVar89._0_4_;
          auVar101._0_4_ = auVar89._4_4_;
          auVar101._8_4_ = auVar89._12_4_;
          auVar101._12_4_ = auVar89._8_4_;
          auVar107 = minps(auVar101,auVar89);
          auVar110._0_8_ = auVar107._8_8_;
          auVar110._8_4_ = auVar107._0_4_;
          auVar110._12_4_ = auVar107._4_4_;
          auVar107 = minps(auVar110,auVar107);
          auVar77._0_4_ = auStack_1088._0_4_ & -(uint)(auVar89._0_4_ == auVar107._0_4_);
          auVar77._4_4_ = auStack_1088._4_4_ & -(uint)(auVar89._4_4_ == auVar107._4_4_);
          auVar77._8_4_ = auStack_1088._8_4_ & -(uint)(auVar89._8_4_ == auVar107._8_4_);
          auVar77._12_4_ = auStack_1088._12_4_ & -(uint)(auVar89._12_4_ == auVar107._12_4_);
          iVar40 = movmskps((int)pRVar44,auVar77);
          uVar46 = CONCAT44((int)((ulong)lVar51 >> 0x20),iVar39);
          if (iVar40 != 0) {
            uVar46 = CONCAT44((int)((ulong)pRVar44 >> 0x20),iVar40);
          }
          lVar51 = 0;
          if (uVar46 != 0) {
            for (; (uVar46 >> lVar51 & 1) == 0; lVar51 = lVar51 + 1) {
            }
          }
          uVar56 = *(uint *)((long)&uStack_1068 + lVar51 * 4);
        } while( true );
      }
    }
    goto LAB_00111f37;
  }
  local_11e8._4_4_ = fStack_1248;
  local_11e8._0_4_ = fStack_1248;
  fStack_11e0 = fStack_1248;
  fStack_11dc = fStack_1248;
  goto LAB_001112e8;
LAB_00112300:
  local_11e8._4_4_ = fStack_1244;
  local_11e8._0_4_ = fStack_1248;
  fStack_11e0 = fStack_1240;
  fStack_11dc = fStack_123c;
LAB_00111f37:
  puVar42 = puVar42 + 0x14;
  fStack_1230 = fVar123;
  fStack_122c = fVar125;
  fStack_1210 = fVar177;
  fStack_120c = fVar178;
  if (uStack_1258 + 1 == uVar45 - 8) goto LAB_001112e8;
  fVar141 = *(float *)(param_2 + 0x1c);
  goto LAB_00111f63;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1048576, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::pointQuery(embree::Accel::Intersectors const*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

byte embree::sse2::
     BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::pointQuery(Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  PointQueryK *pPVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int *piVar15;
  byte bVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  byte bVar21;
  int *piVar22;
  int *piVar23;
  long lVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [16];
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float local_1028;
  float fStack_1024;
  float fStack_1020;
  float fStack_101c;
  byte local_1001;
  float local_fd4;
  undefined1 local_fb8 [8];
  float fStack_fb0;
  float fStack_fac;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  undefined1 local_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_1001 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    local_fb8._4_4_ = *(undefined4 *)(param_3 + 0x58);
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 4);
    local_f80 = 0;
    fVar3 = *(float *)param_2;
    local_fb8._0_4_ = local_fb8._4_4_;
    fStack_fb0 = (float)local_fb8._4_4_;
    fStack_fac = (float)local_fb8._4_4_;
    local_fa8 = *(float *)(param_3 + 0x54);
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    local_1028 = *(float *)(param_3 + 0x50);
    if (*(int *)(param_3 + 0x18) == 1) {
      local_fd4 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    }
    else {
      local_fd4 = *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58) +
                  *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
                  *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50);
    }
    pauVar14 = (undefined1 (*) [16])local_f78;
    fStack_1024 = local_1028;
    fStack_1020 = local_1028;
    fStack_101c = local_1028;
    fStack_fa4 = local_fa8;
    fStack_fa0 = local_fa8;
    fStack_f9c = local_fa8;
    bVar21 = 0;
LAB_00112790:
    local_1001 = bVar21;
    pauVar13 = pauVar14;
    bVar21 = local_1001;
    if (pauVar14 != (undefined1 (*) [16])local_f88) {
LAB_00112799:
      pauVar14 = pauVar13 + -1;
      if (*(float *)(pauVar13[-1] + 8) <= local_fd4) {
        uVar17 = *(ulong *)pauVar13[-1];
LAB_001127c0:
        piVar15 = (int *)(uVar17 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar17 & 8) != 0) goto LAB_00112a80;
          pbVar12 = (byte *)(piVar15 + 8);
          if (uVar17 < 0x10) {
            pbVar12 = (byte *)0x0;
          }
          fVar25 = *(float *)(pbVar12 + 0x24);
          fVar29 = *(float *)(pbVar12 + 0x18);
          fVar30 = *(float *)(pbVar12 + 0x1c);
          fVar31 = *(float *)(pbVar12 + 0x28);
          fVar32 = *(float *)(pbVar12 + 0x20);
          auVar53._0_4_ = (float)*pbVar12 * fVar25 + fVar29;
          auVar53._4_4_ = (float)pbVar12[1] * fVar25 + fVar29;
          auVar53._8_4_ = (float)pbVar12[2] * fVar25 + fVar29;
          auVar53._12_4_ = (float)pbVar12[3] * fVar25 + fVar29;
          auVar69._0_4_ = fVar25 * (float)pbVar12[4] + fVar29;
          auVar69._4_4_ = fVar25 * (float)pbVar12[5] + fVar29;
          auVar69._8_4_ = fVar25 * (float)pbVar12[6] + fVar29;
          auVar69._12_4_ = fVar25 * (float)pbVar12[7] + fVar29;
          fVar25 = *(float *)(pbVar12 + 0x2c);
          auVar9._4_4_ = fVar3;
          auVar9._0_4_ = fVar3;
          auVar9._8_4_ = fVar3;
          auVar9._12_4_ = fVar3;
          auVar60 = maxps(auVar9,auVar53);
          auVar48._0_4_ = -(uint)(pbVar12[4] < *pbVar12) ^ __LC0;
          auVar48._4_4_ = -(uint)(pbVar12[5] < pbVar12[1]) ^ _UNK_001153b4;
          auVar48._8_4_ = -(uint)(pbVar12[6] < pbVar12[2]) ^ _UNK_001153b8;
          auVar48._12_4_ = -(uint)(pbVar12[7] < pbVar12[3]) ^ _UNK_001153bc;
          auVar44._0_4_ = (float)pbVar12[8] * fVar31 + fVar30;
          auVar44._4_4_ = (float)pbVar12[9] * fVar31 + fVar30;
          auVar44._8_4_ = (float)pbVar12[10] * fVar31 + fVar30;
          auVar44._12_4_ = (float)pbVar12[0xb] * fVar31 + fVar30;
          auVar54._4_4_ = -(uint)(auVar53._4_4_ <= auVar69._4_4_);
          auVar54._0_4_ = -(uint)(auVar53._0_4_ <= auVar69._0_4_);
          auVar54._8_4_ = -(uint)(auVar53._8_4_ <= auVar69._8_4_);
          auVar54._12_4_ = -(uint)(auVar53._12_4_ <= auVar69._12_4_);
          uVar18 = movmskps((uint)pbVar12[0x15],auVar48);
          auVar60 = minps(auVar60,auVar69);
          uVar20 = movmskps((uint)pbVar12[0x13],auVar54);
          auVar77._0_4_ = fVar25 * (float)pbVar12[0x14] + fVar32;
          auVar77._4_4_ = fVar25 * (float)pbVar12[0x15] + fVar32;
          auVar77._8_4_ = fVar25 * (float)pbVar12[0x16] + fVar32;
          auVar77._12_4_ = fVar25 * (float)pbVar12[0x17] + fVar32;
          fVar59 = auVar60._0_4_ - fVar3;
          fVar66 = auVar60._4_4_ - fVar3;
          fVar67 = auVar60._8_4_ - fVar3;
          fVar68 = auVar60._12_4_ - fVar3;
          auVar26._4_4_ = fVar2;
          auVar26._0_4_ = fVar2;
          auVar26._8_4_ = fVar2;
          auVar26._12_4_ = fVar2;
          auVar60 = maxps(auVar26,auVar44);
          auVar33._4_4_ = fVar1;
          auVar33._0_4_ = fVar1;
          auVar33._8_4_ = fVar1;
          auVar33._12_4_ = fVar1;
          auVar45._0_4_ = (float)pbVar12[0x10] * fVar25 + fVar32;
          auVar45._4_4_ = (float)pbVar12[0x11] * fVar25 + fVar32;
          auVar45._8_4_ = (float)pbVar12[0x12] * fVar25 + fVar32;
          auVar45._12_4_ = (float)pbVar12[0x13] * fVar25 + fVar32;
          auVar8._4_4_ = fVar31 * (float)pbVar12[0xd] + fVar30;
          auVar8._0_4_ = fVar31 * (float)pbVar12[0xc] + fVar30;
          auVar8._8_4_ = fVar31 * (float)pbVar12[0xe] + fVar30;
          auVar8._12_4_ = fVar31 * (float)pbVar12[0xf] + fVar30;
          auVar60 = minps(auVar60,auVar8);
          auVar34 = maxps(auVar33,auVar45);
          fVar25 = auVar60._0_4_ - fVar2;
          fVar29 = auVar60._4_4_ - fVar2;
          fVar30 = auVar60._8_4_ - fVar2;
          fVar31 = auVar60._12_4_ - fVar2;
          auVar60 = minps(auVar34,auVar77);
          fVar32 = auVar60._0_4_ - fVar1;
          fVar41 = auVar60._4_4_ - fVar1;
          fVar42 = auVar60._8_4_ - fVar1;
          fVar43 = auVar60._12_4_ - fVar1;
          local_f98._0_4_ = fVar25 * fVar25 + fVar59 * fVar59 + fVar32 * fVar32;
          local_f98._4_4_ = fVar29 * fVar29 + fVar66 * fVar66 + fVar41 * fVar41;
          local_f98._8_4_ = fVar30 * fVar30 + fVar67 * fVar67 + fVar42 * fVar42;
          local_f98._12_4_ = fVar31 * fVar31 + fVar68 * fVar68 + fVar43 * fVar43;
          auVar35._4_4_ = -(uint)(local_f98._4_4_ <= fStack_1024 * fStack_1024);
          auVar35._0_4_ = -(uint)(local_f98._0_4_ <= local_1028 * local_1028);
          auVar35._8_4_ = -(uint)(local_f98._8_4_ <= fStack_1020 * fStack_1020);
          auVar35._12_4_ = -(uint)(local_f98._12_4_ <= fStack_101c * fStack_101c);
          uVar11 = movmskps((uint)pbVar12[0x17],auVar35);
          uVar18 = uVar11 & uVar20 & uVar18;
        }
        else {
          if ((uVar17 & 8) != 0) goto LAB_00112a80;
          pbVar12 = (byte *)(piVar15 + 8);
          if (uVar17 < 0x10) {
            pbVar12 = (byte *)0x0;
          }
          bVar16 = pbVar12[1];
          fVar25 = *(float *)(pbVar12 + 0x28);
          fVar29 = *(float *)(pbVar12 + 0x24);
          auVar34._0_4_ = -(uint)(pbVar12[4] < *pbVar12) ^ __LC0;
          auVar34._4_4_ = -(uint)(pbVar12[5] < bVar16) ^ _UNK_001153b4;
          auVar34._8_4_ = -(uint)(pbVar12[6] < pbVar12[2]) ^ _UNK_001153b8;
          auVar34._12_4_ = -(uint)(pbVar12[7] < pbVar12[3]) ^ _UNK_001153bc;
          uVar11 = movmskps((uint)bVar16,auVar34);
          fVar30 = *(float *)(pbVar12 + 0x18);
          auVar49._0_4_ = (float)*pbVar12 * fVar29 + fVar30;
          auVar49._4_4_ = (float)bVar16 * fVar29 + fVar30;
          auVar49._8_4_ = (float)pbVar12[2] * fVar29 + fVar30;
          auVar49._12_4_ = (float)pbVar12[3] * fVar29 + fVar30;
          auVar57._0_4_ = fVar29 * (float)pbVar12[4] + fVar30;
          auVar57._4_4_ = fVar29 * (float)pbVar12[5] + fVar30;
          auVar57._8_4_ = fVar29 * (float)pbVar12[6] + fVar30;
          auVar57._12_4_ = fVar29 * (float)pbVar12[7] + fVar30;
          fVar29 = *(float *)(pbVar12 + 0x1c);
          fVar30 = *(float *)(pbVar12 + 0x2c);
          auVar61._0_4_ = (float)pbVar12[8] * fVar25 + fVar29;
          auVar61._4_4_ = (float)pbVar12[9] * fVar25 + fVar29;
          auVar61._8_4_ = (float)pbVar12[10] * fVar25 + fVar29;
          auVar61._12_4_ = (float)pbVar12[0xb] * fVar25 + fVar29;
          auVar60._4_4_ = fVar3;
          auVar60._0_4_ = fVar3;
          auVar60._8_4_ = fVar3;
          auVar60._12_4_ = fVar3;
          auVar72._0_4_ = fVar25 * (float)pbVar12[0xc] + fVar29;
          auVar72._4_4_ = fVar25 * (float)pbVar12[0xd] + fVar29;
          auVar72._8_4_ = fVar25 * (float)pbVar12[0xe] + fVar29;
          auVar72._12_4_ = fVar25 * (float)pbVar12[0xf] + fVar29;
          fVar25 = *(float *)(pbVar12 + 0x20);
          auVar75._4_4_ = fVar1;
          auVar75._0_4_ = fVar1;
          auVar75._8_4_ = fVar1;
          auVar75._12_4_ = fVar1;
          auVar55._0_4_ = (float)pbVar12[0x10] * fVar30 + fVar25;
          auVar55._4_4_ = (float)pbVar12[0x11] * fVar30 + fVar25;
          auVar55._8_4_ = (float)pbVar12[0x12] * fVar30 + fVar25;
          auVar55._12_4_ = (float)pbVar12[0x13] * fVar30 + fVar25;
          auVar60 = maxps(auVar60,auVar49);
          auVar76 = maxps(auVar75,auVar55);
          auVar34 = minps(auVar60,auVar57);
          auVar70._0_4_ = fVar30 * (float)pbVar12[0x14] + fVar25;
          auVar70._4_4_ = fVar30 * (float)pbVar12[0x15] + fVar25;
          auVar70._8_4_ = fVar30 * (float)pbVar12[0x16] + fVar25;
          auVar70._12_4_ = fVar30 * (float)pbVar12[0x17] + fVar25;
          auVar56._4_4_ = fVar2;
          auVar56._0_4_ = fVar2;
          auVar56._8_4_ = fVar2;
          auVar56._12_4_ = fVar2;
          auVar60 = maxps(auVar56,auVar61);
          fVar32 = auVar34._0_4_ - fVar3;
          fVar41 = auVar34._4_4_ - fVar3;
          fVar42 = auVar34._8_4_ - fVar3;
          fVar43 = auVar34._12_4_ - fVar3;
          auVar34 = minps(auVar76,auVar70);
          auVar60 = minps(auVar60,auVar72);
          fVar59 = auVar34._0_4_ - fVar1;
          fVar66 = auVar34._4_4_ - fVar1;
          fVar67 = auVar34._8_4_ - fVar1;
          fVar68 = auVar34._12_4_ - fVar1;
          fVar25 = auVar60._0_4_ - fVar2;
          fVar29 = auVar60._4_4_ - fVar2;
          fVar30 = auVar60._8_4_ - fVar2;
          fVar31 = auVar60._12_4_ - fVar2;
          auVar46._4_4_ = -(uint)(auVar49._4_4_ <= auVar57._4_4_);
          auVar46._0_4_ = -(uint)(auVar49._0_4_ <= auVar57._0_4_);
          auVar46._8_4_ = -(uint)(auVar49._8_4_ <= auVar57._8_4_);
          auVar46._12_4_ = -(uint)(auVar49._12_4_ <= auVar57._12_4_);
          local_f98._0_4_ = fVar25 * fVar25 + fVar32 * fVar32 + fVar59 * fVar59;
          local_f98._4_4_ = fVar29 * fVar29 + fVar41 * fVar41 + fVar66 * fVar66;
          local_f98._8_4_ = fVar30 * fVar30 + fVar42 * fVar42 + fVar67 * fVar67;
          local_f98._12_4_ = fVar31 * fVar31 + fVar43 * fVar43 + fVar68 * fVar68;
          uVar18 = movmskps((uint)pbVar12[0x17],auVar46);
          auVar36._4_4_ = -(uint)((float)local_fb8._4_4_ + fVar1 < auVar55._4_4_);
          auVar36._0_4_ = -(uint)((float)local_fb8._0_4_ + fVar1 < auVar55._0_4_);
          auVar36._8_4_ = -(uint)(fStack_fb0 + fVar1 < auVar55._8_4_);
          auVar36._12_4_ = -(uint)(fStack_fac + fVar1 < auVar55._12_4_);
          auVar71._4_4_ = -(uint)(auVar70._4_4_ < fVar1 - (float)local_fb8._4_4_);
          auVar71._0_4_ = -(uint)(auVar70._0_4_ < fVar1 - (float)local_fb8._0_4_);
          auVar71._8_4_ = -(uint)(auVar70._8_4_ < fVar1 - fStack_fb0);
          auVar71._12_4_ = -(uint)(auVar70._12_4_ < fVar1 - fStack_fac);
          auVar62._4_4_ = -(uint)(fStack_fa4 + fVar2 < auVar61._4_4_);
          auVar62._0_4_ = -(uint)(local_fa8 + fVar2 < auVar61._0_4_);
          auVar62._8_4_ = -(uint)(fStack_fa0 + fVar2 < auVar61._8_4_);
          auVar62._12_4_ = -(uint)(fStack_f9c + fVar2 < auVar61._12_4_);
          auVar73._4_4_ = -(uint)(auVar72._4_4_ < fVar2 - fStack_fa4);
          auVar73._0_4_ = -(uint)(auVar72._0_4_ < fVar2 - local_fa8);
          auVar73._8_4_ = -(uint)(auVar72._8_4_ < fVar2 - fStack_fa0);
          auVar73._12_4_ = -(uint)(auVar72._12_4_ < fVar2 - fStack_f9c);
          auVar76._4_4_ = -(uint)(auVar57._4_4_ < fVar3 - fStack_1024);
          auVar76._0_4_ = -(uint)(auVar57._0_4_ < fVar3 - local_1028);
          auVar76._8_4_ = -(uint)(auVar57._8_4_ < fVar3 - fStack_1020);
          auVar76._12_4_ = -(uint)(auVar57._12_4_ < fVar3 - fStack_101c);
          auVar50._4_4_ = -(uint)(fVar3 + fStack_1024 < auVar49._4_4_);
          auVar50._0_4_ = -(uint)(fVar3 + local_1028 < auVar49._0_4_);
          auVar50._8_4_ = -(uint)(fVar3 + fStack_1020 < auVar49._8_4_);
          auVar50._12_4_ = -(uint)(fVar3 + fStack_101c < auVar49._12_4_);
          auVar36 = auVar76 | auVar50 | auVar73 | auVar62 | auVar71 | auVar36;
          auVar37._0_4_ = auVar36._0_4_ ^ __LC0;
          auVar37._4_4_ = auVar36._4_4_ ^ _UNK_001153b4;
          auVar37._8_4_ = auVar36._8_4_ ^ _UNK_001153b8;
          auVar37._12_4_ = auVar36._12_4_ ^ _UNK_001153bc;
          uVar20 = movmskps((uint)pbVar12[0x15],auVar37);
          uVar18 = uVar11 & uVar20 & uVar18;
        }
        uVar19 = (ulong)(int)uVar18;
        if (uVar19 == 0) goto LAB_00112790;
        lVar24 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
          }
        }
        uVar5 = *(ulong *)(piVar15 + lVar24 * 2);
        uVar19 = uVar19 - 1 & uVar19;
        uVar17 = uVar5;
        if (uVar19 != 0) {
          lVar7 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
            }
          }
          uVar17 = *(ulong *)(piVar15 + lVar7 * 2);
          uVar11 = *(uint *)(local_f98 + lVar24 * 4);
          uVar18 = *(uint *)(local_f98 + lVar7 * 4);
          uVar19 = uVar19 - 1 & uVar19;
          if (uVar19 == 0) {
            if (uVar11 < uVar18) {
              *(ulong *)*pauVar14 = uVar17;
              *(uint *)(*pauVar14 + 8) = uVar18;
              pauVar14 = pauVar14 + 1;
              uVar17 = uVar5;
            }
            else {
              *(ulong *)*pauVar14 = uVar5;
              *(uint *)(*pauVar14 + 8) = uVar11;
              pauVar14 = pauVar14 + 1;
            }
          }
          else {
            auVar27._8_4_ = uVar11;
            auVar27._0_8_ = uVar5;
            auVar27._12_4_ = 0;
            lVar24 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
              }
            }
            auVar47._8_4_ = uVar18;
            auVar47._0_8_ = uVar17;
            auVar47._12_4_ = 0;
            iVar4 = *(int *)(local_f98 + lVar24 * 4);
            iVar58 = -(uint)((int)uVar11 < (int)uVar18);
            auVar51._8_4_ = iVar4;
            auVar51._0_8_ = *(ulong *)(piVar15 + lVar24 * 2);
            auVar51._12_4_ = 0;
            uVar19 = uVar19 - 1 & uVar19;
            if (uVar19 == 0) {
              auVar38._4_4_ = iVar58;
              auVar38._0_4_ = iVar58;
              auVar38._8_4_ = iVar58;
              auVar38._12_4_ = iVar58;
              auVar56 = auVar27 & auVar38 | ~auVar38 & auVar47;
              auVar28._8_4_ = -(uint)(auVar56._8_4_ < iVar4);
              auVar60 = auVar38 & auVar47 | ~auVar38 & auVar27;
              auVar28._0_8_ = CONCAT44(auVar28._8_4_,auVar28._8_4_);
              auVar28._12_4_ = auVar28._8_4_;
              auVar34 = auVar51 & auVar28 | ~auVar28 & auVar56;
              uVar17 = auVar28._0_8_ & auVar56._0_8_ |
                       ~auVar28._0_8_ & *(ulong *)(piVar15 + lVar24 * 2);
              auVar63._8_4_ = -(uint)(auVar60._8_4_ < auVar34._8_4_);
              auVar63._4_4_ = auVar63._8_4_;
              auVar63._0_4_ = auVar63._8_4_;
              auVar63._12_4_ = auVar63._8_4_;
              *pauVar14 = auVar34 & auVar63 | ~auVar63 & auVar60;
              pauVar14[1] = auVar60 & auVar63 | ~auVar63 & auVar34;
              pauVar14 = pauVar14 + 2;
            }
            else {
              lVar24 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
                }
              }
              auVar64._8_4_ = *(int *)(local_f98 + lVar24 * 4);
              auVar64._0_8_ = *(undefined8 *)(piVar15 + lVar24 * 2);
              auVar64._12_4_ = 0;
              auVar39._4_4_ = iVar58;
              auVar39._0_4_ = iVar58;
              auVar39._8_4_ = iVar58;
              auVar39._12_4_ = iVar58;
              auVar57 = auVar27 & auVar39 | ~auVar39 & auVar47;
              auVar40._8_4_ = -(uint)(iVar4 < *(int *)(local_f98 + lVar24 * 4));
              auVar60 = auVar47 & auVar39 | ~auVar39 & auVar27;
              auVar40._4_4_ = auVar40._8_4_;
              auVar40._0_4_ = auVar40._8_4_;
              auVar40._12_4_ = auVar40._8_4_;
              auVar76 = auVar51 & auVar40 | ~auVar40 & auVar64;
              auVar34 = auVar40 & auVar64 | ~auVar40 & auVar51;
              auVar74._8_4_ = -(uint)(auVar60._8_4_ < auVar34._8_4_);
              auVar74._4_4_ = auVar74._8_4_;
              auVar74._0_4_ = auVar74._8_4_;
              auVar74._12_4_ = auVar74._8_4_;
              auVar56 = auVar60 & auVar74 | ~auVar74 & auVar34;
              auVar52._8_4_ = -(uint)(auVar57._8_4_ < auVar76._8_4_);
              *pauVar14 = auVar34 & auVar74 | ~auVar74 & auVar60;
              auVar52._0_8_ = CONCAT44(auVar52._8_4_,auVar52._8_4_);
              auVar52._12_4_ = auVar52._8_4_;
              auVar60 = auVar76 & auVar52 | ~auVar52 & auVar57;
              auVar65._8_4_ = -(uint)(auVar60._8_4_ < auVar56._8_4_);
              auVar65._4_4_ = auVar65._8_4_;
              auVar65._0_4_ = auVar65._8_4_;
              auVar65._12_4_ = auVar65._8_4_;
              pauVar14[2] = auVar60 & auVar65 | ~auVar65 & auVar56;
              uVar17 = auVar57._0_8_ & auVar52._0_8_ | ~auVar52._0_8_ & auVar76._0_8_;
              pauVar14[1] = auVar56 & auVar65 | ~auVar65 & auVar60;
              pauVar14 = pauVar14 + 3;
            }
          }
        }
        goto LAB_001127c0;
      }
      goto LAB_00112790;
    }
  }
LAB_00112b94:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1001;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00112a80:
  uVar17 = (ulong)((uint)uVar17 & 0xf);
  if (uVar17 == 8) goto LAB_00112790;
  lVar24 = 0;
  local_1001 = 0;
  do {
    bVar16 = 0;
    piVar22 = piVar15 + 0x10;
    do {
      if (*piVar22 == -1) break;
      piVar23 = piVar22 + 1;
      pPVar6 = *(PointQueryK **)(*(long *)(*(long *)param_3 + 0x1e0) + (ulong)(uint)piVar22[-4] * 8)
      ;
      *(int *)(param_3 + 0x44) = piVar22[-4];
      *(int *)(param_3 + 0x40) = *piVar22;
      bVar10 = embree::Geometry::pointQuery(pPVar6,(PointQueryContext *)param_2);
      bVar16 = bVar16 | bVar10;
      piVar22 = piVar23;
    } while (piVar15 + 0x14 != piVar23);
    local_1001 = local_1001 | bVar16;
    lVar24 = lVar24 + 1;
    piVar15 = piVar15 + 0x14;
  } while (uVar17 - 8 != lVar24);
  if (local_1001 == 0) goto LAB_00112790;
  local_1028 = *(float *)(param_3 + 0x50);
  local_fa8 = *(float *)(param_3 + 0x54);
  fVar25 = *(float *)(param_3 + 0x58);
  local_fb8._4_4_ = fVar25;
  local_fb8._0_4_ = fVar25;
  fStack_fb0 = fVar25;
  fStack_fac = fVar25;
  fStack_1024 = local_1028;
  fStack_1020 = local_1028;
  fStack_101c = local_1028;
  fStack_fa4 = local_fa8;
  fStack_fa0 = local_fa8;
  fStack_f9c = local_fa8;
  if (*(int *)(param_3 + 0x18) == 1) {
    local_fd4 = *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    bVar21 = local_1001;
    goto LAB_00112790;
  }
  local_fd4 = local_1028 * local_1028 + local_fa8 * local_fa8 + fVar25 * fVar25;
  pauVar13 = pauVar14;
  bVar21 = local_1001;
  if (pauVar14 == (undefined1 (*) [16])local_f88) goto LAB_00112b94;
  goto LAB_00112799;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1048576, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::occluded(embree::Accel::Intersectors const*, embree::RayK<1>&, embree::RayQueryContext*) */

void embree::sse2::
     BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::occluded(Intersectors *param_1,RayK *param_2,RayQueryContext *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  ulong *puVar30;
  uint *puVar31;
  byte *pbVar32;
  code *pcVar33;
  ulong uVar34;
  ulong uVar35;
  uint *puVar36;
  ulong uVar37;
  byte *pbVar38;
  long lVar39;
  long in_FS_OFFSET;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar61;
  float fVar64;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar69;
  float fVar72;
  float fVar73;
  undefined1 auVar70 [16];
  float fVar74;
  undefined1 auVar71 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar81;
  float fVar83;
  undefined1 auVar79 [16];
  float fVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar80 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar94;
  float fVar97;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar104;
  float fVar109;
  float fVar110;
  undefined1 in_XMM4 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar111;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar112;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar119 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar126 [16];
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar137 [16];
  float fVar141;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar142 [16];
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar159 [16];
  int iStack_90c;
  int *piStack_908;
  undefined8 uStack_900;
  undefined4 *puStack_8f8;
  RayK *pRStack_8f0;
  undefined4 *puStack_8e8;
  undefined4 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  float fStack_8b8;
  float fStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  uint uStack_8a0;
  undefined4 uStack_89c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  float local_818 [4];
  float local_808 [4];
  undefined1 local_7f8 [16];
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar17 = *(float *)(param_2 + 0x20), 0.0 <= fVar17)) {
    fVar76 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar76 < 0.0) {
      fVar76 = 0.0;
    }
    fVar23 = *(float *)param_2;
    fVar24 = *(float *)(param_2 + 4);
    fVar25 = *(float *)(param_2 + 8);
    uVar40 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar41 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001153c4) < _UNK_001153d4);
    uVar44 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001153c8) < _UNK_001153d8);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001153cc) < _UNK_001153dc);
    auVar55._0_4_ = uVar40 & (uint)_LC5;
    auVar55._4_4_ = uVar41 & (uint)_UNK_001153d4;
    auVar55._8_4_ = uVar44 & (uint)_UNK_001153d8;
    auVar55._12_4_ = uVar48 & (uint)_UNK_001153dc;
    auVar105._0_4_ = ~uVar40 & *(uint *)(param_2 + 0x10);
    auVar105._4_4_ = ~uVar41 & *(uint *)(param_2 + 0x14);
    auVar105._8_4_ = ~uVar44 & *(uint *)(param_2 + 0x18);
    auVar105._12_4_ = ~uVar48 & *(uint *)(param_2 + 0x1c);
    auVar55 = auVar55 | auVar105;
    auVar105 = rcpps(in_XMM4,auVar55);
    fVar52 = auVar105._0_4_;
    fVar61 = auVar105._4_4_;
    fVar64 = auVar105._8_4_;
    fVar52 = (_LC7 - auVar55._0_4_ * fVar52) * fVar52 + fVar52;
    fVar61 = (_LC7 - auVar55._4_4_ * fVar61) * fVar61 + fVar61;
    fVar64 = (_LC7 - auVar55._8_4_ * fVar64) * fVar64 + fVar64;
    puVar30 = local_7e0;
    do {
      uVar37 = puVar30[-1];
      puVar30 = puVar30 + -1;
      while (puVar36 = (uint *)(uVar37 & 0xfffffffffffffff0), (uVar37 & 8) == 0) {
        puVar31 = puVar36 + 8;
        if (uVar37 < 0x10) {
          puVar31 = (uint *)0x0;
        }
        fVar74 = (float)puVar31[6];
        fVar133 = (float)puVar31[7];
        puVar1 = puVar31 + (fVar52 < 0.0);
        fVar146 = (float)puVar31[9];
        fVar103 = (float)puVar31[8];
        auVar56._0_4_ = -(uint)((byte)puVar31[1] < (byte)*puVar31) ^ __LC0;
        auVar56._4_4_ =
             -(uint)(*(byte *)((long)puVar31 + 5) < *(byte *)((long)puVar31 + 1)) ^ _UNK_001153b4;
        auVar56._8_4_ =
             -(uint)(*(byte *)((long)puVar31 + 6) < *(byte *)((long)puVar31 + 2)) ^ _UNK_001153b8;
        auVar56._12_4_ =
             -(uint)(*(byte *)((long)puVar31 + 7) < *(byte *)((long)puVar31 + 3)) ^ _UNK_001153bc;
        uVar41 = movmskps((uint)*(byte *)((long)puVar31 + 1),auVar56);
        pbVar38 = (byte *)((long)puVar31 + ((ulong)(fVar52 < 0.0) * 4 ^ 4));
        fVar75 = (float)puVar31[10];
        pbVar2 = (byte *)((long)puVar31 + (ulong)(-(uint)(fVar61 < 0.0) & 4) + 8);
        pbVar3 = (byte *)((long)puVar31 + (-(ulong)(fVar61 < 0.0) & 0xfffffffffffffffc) + 0xc);
        pbVar4 = (byte *)((long)puVar31 + (ulong)(-(uint)(fVar64 < 0.0) & 4) + 0x10);
        fVar144 = (float)puVar31[0xb];
        pbVar32 = (byte *)((long)puVar31 + (-(ulong)(fVar64 < 0.0) & 0xfffffffffffffffc) + 0x14);
        auVar79._0_4_ = (((float)*pbVar2 * fVar75 + fVar133) - fVar24) * fVar61;
        auVar79._4_4_ = (((float)pbVar2[1] * fVar75 + fVar133) - fVar24) * fVar61;
        auVar79._8_4_ = (((float)pbVar2[2] * fVar75 + fVar133) - fVar24) * fVar61;
        auVar79._12_4_ = (((float)pbVar2[3] * fVar75 + fVar133) - fVar24) * fVar61;
        auVar57._0_4_ = (((float)(byte)*puVar1 * fVar146 + fVar74) - fVar23) * fVar52;
        auVar57._4_4_ = (((float)*(byte *)((long)puVar1 + 1) * fVar146 + fVar74) - fVar23) * fVar52;
        auVar57._8_4_ = (((float)*(byte *)((long)puVar1 + 2) * fVar146 + fVar74) - fVar23) * fVar52;
        auVar57._12_4_ = (((float)*(byte *)((long)puVar1 + 3) * fVar146 + fVar74) - fVar23) * fVar52
        ;
        auVar90._0_4_ = ((fVar146 * (float)*pbVar38 + fVar74) - fVar23) * fVar52;
        auVar90._4_4_ = ((fVar146 * (float)pbVar38[1] + fVar74) - fVar23) * fVar52;
        auVar90._8_4_ = ((fVar146 * (float)pbVar38[2] + fVar74) - fVar23) * fVar52;
        auVar90._12_4_ = ((fVar146 * (float)pbVar38[3] + fVar74) - fVar23) * fVar52;
        auVar126._0_4_ = ((fVar75 * (float)*pbVar3 + fVar133) - fVar24) * fVar61;
        auVar126._4_4_ = ((fVar75 * (float)pbVar3[1] + fVar133) - fVar24) * fVar61;
        auVar126._8_4_ = ((fVar75 * (float)pbVar3[2] + fVar133) - fVar24) * fVar61;
        auVar126._12_4_ = ((fVar75 * (float)pbVar3[3] + fVar133) - fVar24) * fVar61;
        auVar70._0_4_ = (((float)*pbVar4 * fVar144 + fVar103) - fVar25) * fVar64;
        auVar70._4_4_ = (((float)pbVar4[1] * fVar144 + fVar103) - fVar25) * fVar64;
        auVar70._8_4_ = (((float)pbVar4[2] * fVar144 + fVar103) - fVar25) * fVar64;
        auVar70._12_4_ = (((float)pbVar4[3] * fVar144 + fVar103) - fVar25) * fVar64;
        auVar91._4_4_ = fVar76;
        auVar91._0_4_ = fVar76;
        auVar91._8_4_ = fVar76;
        auVar91._12_4_ = fVar76;
        auVar105 = maxps(auVar70,auVar91);
        auVar55 = maxps(auVar57,auVar79);
        auVar91 = minps(auVar90,auVar126);
        auVar55 = maxps(auVar55,auVar105);
        auVar106._0_4_ = ((fVar144 * (float)*pbVar32 + fVar103) - fVar25) * fVar64;
        auVar106._4_4_ = ((fVar144 * (float)pbVar32[1] + fVar103) - fVar25) * fVar64;
        auVar106._8_4_ = ((fVar144 * (float)pbVar32[2] + fVar103) - fVar25) * fVar64;
        auVar106._12_4_ = ((fVar144 * (float)pbVar32[3] + fVar103) - fVar25) * fVar64;
        auVar28._4_4_ = fVar17;
        auVar28._0_4_ = fVar17;
        auVar28._8_4_ = fVar17;
        auVar28._12_4_ = fVar17;
        auVar105 = minps(auVar106,auVar28);
        auVar105 = minps(auVar91,auVar105);
        auVar58._4_4_ = -(uint)(auVar55._4_4_ <= auVar105._4_4_);
        auVar58._0_4_ = -(uint)(auVar55._0_4_ <= auVar105._0_4_);
        auVar58._8_4_ = -(uint)(auVar55._8_4_ <= auVar105._8_4_);
        auVar58._12_4_ = -(uint)(auVar55._12_4_ <= auVar105._12_4_);
        uVar40 = movmskps((uint)pbVar32[3],auVar58);
        uVar34 = (ulong)(int)(uVar41 & uVar40);
        if (uVar34 == 0) goto LAB_00113e98;
        lVar39 = 0;
        if (uVar34 != 0) {
          for (; (uVar34 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
          }
        }
        uVar37 = *(ulong *)(puVar36 + lVar39 * 2);
        uVar34 = uVar34 - 1 & uVar34;
        if (uVar34 != 0) {
          *puVar30 = uVar37;
          uVar35 = uVar34 - 1;
          lVar39 = 0;
          if (uVar34 != 0) {
            for (; (uVar34 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
            }
          }
          while( true ) {
            puVar30 = puVar30 + 1;
            uVar37 = *(ulong *)(puVar36 + lVar39 * 2);
            uVar35 = uVar35 & uVar34;
            if (uVar35 == 0) break;
            *puVar30 = uVar37;
            uVar34 = uVar35 - 1;
            lVar39 = 0;
            if (uVar35 != 0) {
              for (; (uVar35 >> lVar39 & 1) == 0; lVar39 = lVar39 + 1) {
              }
            }
          }
        }
      }
      uVar37 = (ulong)((uint)uVar37 & 0xf);
      if (uVar37 != 8) {
        lVar39 = 0;
        do {
          lVar18 = *(long *)param_3;
          lVar19 = *(long *)(lVar18 + 0x220);
          lVar20 = *(long *)(lVar19 + (ulong)puVar36[0xc] * 8);
          pfVar5 = (float *)(lVar20 + (ulong)*puVar36 * 4);
          pfVar6 = (float *)(lVar20 + (ulong)puVar36[4] * 4);
          pfVar7 = (float *)(lVar20 + (ulong)puVar36[8] * 4);
          lVar20 = *(long *)(lVar19 + (ulong)puVar36[0xd] * 8);
          pfVar8 = (float *)(lVar20 + (ulong)puVar36[1] * 4);
          pfVar9 = (float *)(lVar20 + (ulong)puVar36[5] * 4);
          pfVar10 = (float *)(lVar20 + (ulong)puVar36[9] * 4);
          lVar20 = *(long *)(lVar19 + (ulong)puVar36[0xe] * 8);
          pfVar11 = (float *)(lVar20 + (ulong)puVar36[2] * 4);
          pfVar12 = (float *)(lVar20 + (ulong)puVar36[6] * 4);
          pfVar13 = (float *)(lVar20 + (ulong)puVar36[10] * 4);
          lVar19 = *(long *)(lVar19 + (ulong)puVar36[0xf] * 8);
          pfVar14 = (float *)(lVar19 + (ulong)puVar36[3] * 4);
          pfVar15 = (float *)(lVar19 + (ulong)puVar36[7] * 4);
          pfVar16 = (float *)(lVar19 + (ulong)puVar36[0xb] * 4);
          local_8d8 = *(undefined8 *)(puVar36 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar36 + 0x12);
          fVar74 = *(float *)param_2;
          fVar133 = *(float *)(param_2 + 4);
          fVar146 = *(float *)(param_2 + 8);
          fVar103 = *(float *)(param_2 + 0x10);
          fVar75 = *(float *)(param_2 + 0x14);
          fVar144 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar36 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar36 + 0xe);
          fVar104 = pfVar7[2] - fVar146;
          fVar109 = pfVar10[2] - fVar146;
          fVar110 = pfVar13[2] - fVar146;
          fVar111 = pfVar16[2] - fVar146;
          fVar136 = *pfVar6 - fVar74;
          fVar138 = *pfVar9 - fVar74;
          fVar139 = *pfVar12 - fVar74;
          fVar140 = *pfVar15 - fVar74;
          fVar77 = pfVar5[2] - fVar146;
          fVar81 = pfVar8[2] - fVar146;
          fVar83 = pfVar11[2] - fVar146;
          fVar85 = pfVar14[2] - fVar146;
          fVar147 = *pfVar5 - fVar74;
          fVar149 = *pfVar8 - fVar74;
          fVar151 = *pfVar11 - fVar74;
          fVar153 = *pfVar14 - fVar74;
          fVar69 = *pfVar7 - fVar74;
          fVar72 = *pfVar10 - fVar74;
          fVar73 = *pfVar13 - fVar74;
          fVar74 = *pfVar16 - fVar74;
          fVar112 = pfVar7[1] - fVar133;
          fVar115 = pfVar10[1] - fVar133;
          fVar116 = pfVar13[1] - fVar133;
          fVar117 = pfVar16[1] - fVar133;
          fVar155 = pfVar5[1] - fVar133;
          fVar156 = pfVar8[1] - fVar133;
          fVar157 = pfVar11[1] - fVar133;
          fVar158 = pfVar14[1] - fVar133;
          fVar123 = pfVar6[1] - fVar133;
          fVar127 = pfVar9[1] - fVar133;
          fVar130 = pfVar12[1] - fVar133;
          fVar133 = pfVar15[1] - fVar133;
          fVar87 = fVar104 - fVar77;
          fVar94 = fVar109 - fVar81;
          fVar97 = fVar110 - fVar83;
          fVar100 = fVar111 - fVar85;
          fVar141 = pfVar6[2] - fVar146;
          fVar143 = pfVar9[2] - fVar146;
          fVar145 = pfVar12[2] - fVar146;
          fVar146 = pfVar15[2] - fVar146;
          fVar53 = fVar69 - fVar147;
          fVar62 = fVar72 - fVar149;
          fVar65 = fVar73 - fVar151;
          fVar67 = fVar74 - fVar153;
          fVar78 = fVar77 - fVar141;
          fVar82 = fVar81 - fVar143;
          fVar84 = fVar83 - fVar145;
          fVar86 = fVar85 - fVar146;
          fVar88 = fVar112 - fVar155;
          fVar95 = fVar115 - fVar156;
          fVar98 = fVar116 - fVar157;
          fVar101 = fVar117 - fVar158;
          fVar148 = fVar141 - fVar104;
          fVar150 = fVar143 - fVar109;
          fVar152 = fVar145 - fVar110;
          fVar154 = fVar146 - fVar111;
          auVar142._0_4_ = fVar147 - fVar136;
          auVar142._4_4_ = fVar149 - fVar138;
          auVar142._8_4_ = fVar151 - fVar139;
          auVar142._12_4_ = fVar153 - fVar140;
          fVar89 = fVar155 - fVar123;
          fVar96 = fVar156 - fVar127;
          fVar99 = fVar157 - fVar130;
          fVar102 = fVar158 - fVar133;
          fVar124 = fVar123 - fVar112;
          fVar128 = fVar127 - fVar115;
          fVar131 = fVar130 - fVar116;
          fVar134 = fVar133 - fVar117;
          fVar125 = fVar136 - fVar69;
          fVar129 = fVar138 - fVar72;
          fVar132 = fVar139 - fVar73;
          fVar135 = fVar140 - fVar74;
          fVar54 = ((fVar147 + fVar69) * fVar87 - fVar53 * (fVar77 + fVar104)) * fVar75 +
                   (fVar53 * (fVar155 + fVar112) - fVar88 * (fVar147 + fVar69)) * fVar144 +
                   ((fVar77 + fVar104) * fVar88 - (fVar155 + fVar112) * fVar87) * fVar103;
          fVar63 = ((fVar149 + fVar72) * fVar94 - fVar62 * (fVar81 + fVar109)) * fVar75 +
                   (fVar62 * (fVar156 + fVar115) - fVar95 * (fVar149 + fVar72)) * fVar144 +
                   ((fVar81 + fVar109) * fVar95 - (fVar156 + fVar115) * fVar94) * fVar103;
          fVar66 = ((fVar151 + fVar73) * fVar97 - fVar65 * (fVar83 + fVar110)) * fVar75 +
                   (fVar65 * (fVar157 + fVar116) - fVar98 * (fVar151 + fVar73)) * fVar144 +
                   ((fVar83 + fVar110) * fVar98 - (fVar157 + fVar116) * fVar97) * fVar103;
          fVar68 = ((fVar153 + fVar74) * fVar100 - fVar67 * (fVar85 + fVar111)) * fVar75 +
                   (fVar67 * (fVar158 + fVar117) - fVar101 * (fVar153 + fVar74)) * fVar144 +
                   ((fVar85 + fVar111) * fVar101 - (fVar158 + fVar117) * fVar100) * fVar103;
          fVar118 = ((fVar147 + fVar136) * fVar78 - auVar142._0_4_ * (fVar77 + fVar141)) * fVar75 +
                    (auVar142._0_4_ * (fVar155 + fVar123) - fVar89 * (fVar147 + fVar136)) * fVar144
                    + ((fVar77 + fVar141) * fVar89 - (fVar155 + fVar123) * fVar78) * fVar103;
          fVar120 = ((fVar149 + fVar138) * fVar82 - auVar142._4_4_ * (fVar81 + fVar143)) * fVar75 +
                    (auVar142._4_4_ * (fVar156 + fVar127) - fVar96 * (fVar149 + fVar138)) * fVar144
                    + ((fVar81 + fVar143) * fVar96 - (fVar156 + fVar127) * fVar82) * fVar103;
          fVar121 = ((fVar151 + fVar139) * fVar84 - auVar142._8_4_ * (fVar83 + fVar145)) * fVar75 +
                    (auVar142._8_4_ * (fVar157 + fVar130) - fVar99 * (fVar151 + fVar139)) * fVar144
                    + ((fVar83 + fVar145) * fVar99 - (fVar157 + fVar130) * fVar84) * fVar103;
          fVar122 = ((fVar153 + fVar140) * fVar86 - auVar142._12_4_ * (fVar85 + fVar146)) * fVar75 +
                    (auVar142._12_4_ * (fVar158 + fVar133) - fVar102 * (fVar153 + fVar140)) *
                    fVar144 + ((fVar85 + fVar146) * fVar102 - (fVar158 + fVar133) * fVar86) *
                              fVar103;
          auVar119._8_4_ = fVar66;
          auVar119._0_8_ = CONCAT44(fVar63,fVar54);
          auVar119._12_4_ = fVar68;
          auVar21._8_4_ = fVar121;
          auVar21._0_8_ = CONCAT44(fVar120,fVar118);
          auVar21._12_4_ = fVar122;
          auVar105 = maxps(auVar119,auVar21);
          auVar113._8_4_ = fVar66;
          auVar113._0_8_ = CONCAT44(fVar63,fVar54);
          auVar113._12_4_ = fVar68;
          auVar22._8_4_ = fVar121;
          auVar22._0_8_ = CONCAT44(fVar120,fVar118);
          auVar22._12_4_ = fVar122;
          auVar55 = minps(auVar113,auVar22);
          auVar107._0_4_ =
               ((fVar141 + fVar104) * fVar124 - (fVar112 + fVar123) * fVar148) * fVar103 +
               ((fVar69 + fVar136) * fVar148 - fVar125 * (fVar141 + fVar104)) * fVar75 +
               (fVar125 * (fVar112 + fVar123) - fVar124 * (fVar69 + fVar136)) * fVar144;
          auVar107._4_4_ =
               ((fVar143 + fVar109) * fVar128 - (fVar115 + fVar127) * fVar150) * fVar103 +
               ((fVar72 + fVar138) * fVar150 - fVar129 * (fVar143 + fVar109)) * fVar75 +
               (fVar129 * (fVar115 + fVar127) - fVar128 * (fVar72 + fVar138)) * fVar144;
          auVar107._8_4_ =
               ((fVar145 + fVar110) * fVar131 - (fVar116 + fVar130) * fVar152) * fVar103 +
               ((fVar73 + fVar139) * fVar152 - fVar132 * (fVar145 + fVar110)) * fVar75 +
               (fVar132 * (fVar116 + fVar130) - fVar131 * (fVar73 + fVar139)) * fVar144;
          auVar107._12_4_ =
               ((fVar146 + fVar111) * fVar134 - (fVar117 + fVar133) * fVar154) * fVar103 +
               ((fVar74 + fVar140) * fVar154 - fVar135 * (fVar146 + fVar111)) * fVar75 +
               (fVar135 * (fVar117 + fVar133) - fVar134 * (fVar74 + fVar140)) * fVar144;
          auVar137._0_4_ = fVar54 + fVar118 + auVar107._0_4_;
          auVar137._4_4_ = fVar63 + fVar120 + auVar107._4_4_;
          auVar137._8_4_ = fVar66 + fVar121 + auVar107._8_4_;
          auVar137._12_4_ = fVar68 + fVar122 + auVar107._12_4_;
          auVar105 = maxps(auVar105,auVar107);
          auVar55 = minps(auVar55,auVar107);
          fVar74 = __LC15 * (float)(_LC3 & (uint)auVar137._0_4_);
          fVar133 = _UNK_00115404 * (float)(_UNK_001153c4 & (uint)auVar137._4_4_);
          fVar146 = _UNK_00115408 * (float)(_UNK_001153c8 & (uint)auVar137._8_4_);
          fVar69 = _UNK_0011540c * (float)(_UNK_001153cc & (uint)auVar137._12_4_);
          auVar114._0_4_ =
               -(uint)((float)((uint)fVar74 ^ _LC9) <= auVar55._0_4_ || auVar105._0_4_ <= fVar74) &
               _DAT_00116108;
          auVar114._4_4_ =
               -(uint)((float)((uint)fVar133 ^ _UNK_001153f4) <= auVar55._4_4_ ||
                      auVar105._4_4_ <= fVar133) & uRam000000000011610c;
          auVar114._8_4_ =
               -(uint)((float)((uint)fVar146 ^ _UNK_001153f8) <= auVar55._8_4_ ||
                      auVar105._8_4_ <= fVar146) & uRam0000000000116110;
          auVar114._12_4_ =
               -(uint)((float)((uint)fVar69 ^ _UNK_001153fc) <= auVar55._12_4_ ||
                      auVar105._12_4_ <= fVar69) & uRam0000000000116114;
          iVar29 = movmskps((int)lVar19,auVar114);
          if (iVar29 != 0) {
            uVar40 = -(uint)((float)(_LC3 & (uint)(fVar87 * fVar89)) <
                            (float)(_LC3 & (uint)(fVar124 * fVar78)));
            uVar48 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar94 * fVar96)) <
                            (float)(_UNK_001153c4 & (uint)(fVar128 * fVar82)));
            uVar45 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar97 * fVar99)) <
                            (float)(_UNK_001153c8 & (uint)(fVar131 * fVar84)));
            uVar49 = -(uint)((float)(_UNK_001153cc & (uint)(fVar100 * fVar102)) <
                            (float)(_UNK_001153cc & (uint)(fVar134 * fVar86)));
            uVar41 = -(uint)((float)(_LC3 & (uint)(fVar53 * fVar78)) <
                            (float)(_LC3 & (uint)(fVar148 * auVar142._0_4_)));
            uVar42 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar62 * fVar82)) <
                            (float)(_UNK_001153c4 & (uint)(fVar150 * auVar142._4_4_)));
            uVar46 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar65 * fVar84)) <
                            (float)(_UNK_001153c8 & (uint)(fVar152 * auVar142._8_4_)));
            uVar50 = -(uint)((float)(_UNK_001153cc & (uint)(fVar67 * fVar86)) <
                            (float)(_UNK_001153cc & (uint)(fVar154 * auVar142._12_4_)));
            uVar44 = -(uint)((float)(_LC3 & (uint)(fVar88 * auVar142._0_4_)) <
                            (float)(_LC3 & (uint)(fVar125 * fVar89)));
            uVar43 = -(uint)((float)(_UNK_001153c4 & (uint)(fVar95 * auVar142._4_4_)) <
                            (float)(_UNK_001153c4 & (uint)(fVar129 * fVar96)));
            uVar47 = -(uint)((float)(_UNK_001153c8 & (uint)(fVar98 * auVar142._8_4_)) <
                            (float)(_UNK_001153c8 & (uint)(fVar132 * fVar99)));
            uVar51 = -(uint)((float)(_UNK_001153cc & (uint)(fVar101 * auVar142._12_4_)) <
                            (float)(_UNK_001153cc & (uint)(fVar135 * fVar102)));
            auVar159._0_4_ = ~uVar44 & (uint)(fVar124 * auVar142._0_4_ - fVar125 * fVar89);
            auVar159._4_4_ = ~uVar43 & (uint)(fVar128 * auVar142._4_4_ - fVar129 * fVar96);
            auVar159._8_4_ = ~uVar47 & (uint)(fVar131 * auVar142._8_4_ - fVar132 * fVar99);
            auVar159._12_4_ = ~uVar51 & (uint)(fVar134 * auVar142._12_4_ - fVar135 * fVar102);
            auVar108._0_4_ = uVar44 & (uint)(fVar53 * fVar89 - fVar88 * auVar142._0_4_);
            auVar108._4_4_ = uVar43 & (uint)(fVar62 * fVar96 - fVar95 * auVar142._4_4_);
            auVar108._8_4_ = uVar47 & (uint)(fVar65 * fVar99 - fVar98 * auVar142._8_4_);
            auVar108._12_4_ = uVar51 & (uint)(fVar67 * fVar102 - fVar101 * auVar142._12_4_);
            auVar108 = auVar108 | auVar159;
            fVar53 = (float)(uVar41 & (uint)(fVar87 * auVar142._0_4_ - fVar53 * fVar78) |
                            ~uVar41 & (uint)(fVar125 * fVar78 - fVar148 * auVar142._0_4_));
            fVar62 = (float)(uVar42 & (uint)(fVar94 * auVar142._4_4_ - fVar62 * fVar82) |
                            ~uVar42 & (uint)(fVar129 * fVar82 - fVar150 * auVar142._4_4_));
            fVar65 = (float)(uVar46 & (uint)(fVar97 * auVar142._8_4_ - fVar65 * fVar84) |
                            ~uVar46 & (uint)(fVar132 * fVar84 - fVar152 * auVar142._8_4_));
            fVar67 = (float)(uVar50 & (uint)(fVar100 * auVar142._12_4_ - fVar67 * fVar86) |
                            ~uVar50 & (uint)(fVar135 * fVar86 - fVar154 * auVar142._12_4_));
            fVar69 = (float)(uVar40 & (uint)(fVar88 * fVar78 - fVar87 * fVar89) |
                            ~uVar40 & (uint)(fVar89 * fVar148 - fVar124 * fVar78));
            fVar72 = (float)(uVar48 & (uint)(fVar95 * fVar82 - fVar94 * fVar96) |
                            ~uVar48 & (uint)(fVar96 * fVar150 - fVar128 * fVar82));
            fVar73 = (float)(uVar45 & (uint)(fVar98 * fVar84 - fVar97 * fVar99) |
                            ~uVar45 & (uint)(fVar99 * fVar152 - fVar131 * fVar84));
            fVar78 = (float)(uVar49 & (uint)(fVar101 * fVar86 - fVar100 * fVar102) |
                            ~uVar49 & (uint)(fVar102 * fVar154 - fVar134 * fVar86));
            fVar74 = fVar75 * fVar53 + fVar144 * auVar108._0_4_ + fVar103 * fVar69;
            fVar133 = fVar75 * fVar62 + fVar144 * auVar108._4_4_ + fVar103 * fVar72;
            fVar146 = fVar75 * fVar65 + fVar144 * auVar108._8_4_ + fVar103 * fVar73;
            fVar103 = fVar75 * fVar67 + fVar144 * auVar108._12_4_ + fVar103 * fVar78;
            auVar92._0_4_ = fVar74 + fVar74;
            auVar92._4_4_ = fVar133 + fVar133;
            auVar92._8_4_ = fVar146 + fVar146;
            auVar92._12_4_ = fVar103 + fVar103;
            auVar55 = rcpps(auVar142,auVar92);
            auVar93._4_4_ = -(uint)(auVar92._4_4_ != 0.0);
            auVar93._0_4_ = -(uint)(auVar92._0_4_ != 0.0);
            auVar93._8_4_ = -(uint)(auVar92._8_4_ != 0.0);
            auVar93._12_4_ = -(uint)(auVar92._12_4_ != 0.0);
            fVar75 = auVar55._0_4_;
            fVar144 = auVar55._4_4_;
            fVar82 = auVar55._8_4_;
            fVar84 = auVar55._12_4_;
            fVar74 = fVar77 * auVar108._0_4_ + fVar155 * fVar53 + fVar147 * fVar69;
            fVar133 = fVar81 * auVar108._4_4_ + fVar156 * fVar62 + fVar149 * fVar72;
            fVar146 = fVar83 * auVar108._8_4_ + fVar157 * fVar65 + fVar151 * fVar73;
            fVar103 = fVar85 * auVar108._12_4_ + fVar158 * fVar67 + fVar153 * fVar78;
            auVar80._0_4_ = (fVar74 + fVar74) * ((_LC7 - auVar92._0_4_ * fVar75) * fVar75 + fVar75);
            auVar80._4_4_ =
                 (fVar133 + fVar133) * ((_LC7 - auVar92._4_4_ * fVar144) * fVar144 + fVar144);
            auVar80._8_4_ =
                 (fVar146 + fVar146) * ((_LC7 - auVar92._8_4_ * fVar82) * fVar82 + fVar82);
            auVar80._12_4_ =
                 (fVar103 + fVar103) * ((_LC7 - auVar92._12_4_ * fVar84) * fVar84 + fVar84);
            fVar74 = *(float *)(param_2 + 0x20);
            fVar133 = *(float *)(param_2 + 0xc);
            auVar71._0_4_ =
                 auVar114._0_4_ & -(uint)(fVar133 <= auVar80._0_4_ && auVar80._0_4_ <= fVar74) &
                 -(uint)(auVar92._0_4_ != 0.0);
            auVar71._4_4_ =
                 auVar114._4_4_ & -(uint)(fVar133 <= auVar80._4_4_ && auVar80._4_4_ <= fVar74) &
                 -(uint)(auVar92._4_4_ != 0.0);
            auVar71._8_4_ =
                 auVar114._8_4_ & -(uint)(fVar133 <= auVar80._8_4_ && auVar80._8_4_ <= fVar74) &
                 -(uint)(auVar92._8_4_ != 0.0);
            auVar71._12_4_ =
                 auVar114._12_4_ & -(uint)(fVar133 <= auVar80._12_4_ && auVar80._12_4_ <= fVar74) &
                 -(uint)(auVar92._12_4_ != 0.0);
            uVar40 = movmskps(puVar36[10],auVar71);
            uVar34 = (ulong)uVar40;
            if (uVar40 != 0) {
              auVar55 = rcpps(auVar93,auVar137);
              local_808[0] = fVar53;
              local_808[1] = fVar62;
              local_808[2] = fVar65;
              local_808[3] = fVar67;
              local_828 = auVar80;
              fVar133 = auVar55._0_4_;
              fVar146 = auVar55._4_4_;
              fVar103 = auVar55._8_4_;
              fVar75 = auVar55._12_4_;
              local_818[0] = fVar69;
              local_818[1] = fVar72;
              local_818[2] = fVar73;
              local_818[3] = fVar78;
              local_7f8 = auVar108;
              fVar133 = (float)(~-(uint)((float)(_LC3 & (uint)auVar137._0_4_) < _LC5) &
                               (uint)((_LC7 - auVar137._0_4_ * fVar133) * fVar133 + fVar133));
              fVar146 = (float)(~-(uint)((float)(_UNK_001153c4 & (uint)auVar137._4_4_) <
                                        _UNK_001153d4) &
                               (uint)((_LC7 - auVar137._4_4_ * fVar146) * fVar146 + fVar146));
              fVar103 = (float)(~-(uint)((float)(_UNK_001153c8 & (uint)auVar137._8_4_) <
                                        _UNK_001153d8) &
                               (uint)((_LC7 - auVar137._8_4_ * fVar103) * fVar103 + fVar103));
              fVar75 = (float)(~-(uint)((float)(_UNK_001153cc & (uint)auVar137._12_4_) <
                                       _UNK_001153dc) &
                              (uint)((_LC7 - auVar137._12_4_ * fVar75) * fVar75 + fVar75));
              auVar59._0_4_ = fVar54 * fVar133;
              auVar59._4_4_ = fVar63 * fVar146;
              auVar59._8_4_ = fVar66 * fVar103;
              auVar59._12_4_ = fVar68 * fVar75;
              auVar26._4_12_ = _UNK_001153e4;
              auVar26._0_4_ = _LC7;
              local_848 = minps(auVar59,auVar26);
              auVar60._0_4_ = fVar118 * fVar133;
              auVar60._4_4_ = fVar120 * fVar146;
              auVar60._8_4_ = fVar121 * fVar103;
              auVar60._12_4_ = fVar122 * fVar75;
              auVar27._4_12_ = _UNK_001153e4;
              auVar27._0_4_ = _LC7;
              local_838 = minps(auVar60,auVar27);
              do {
                pbVar38 = *(byte **)(param_3 + 0x10);
                uVar35 = 0;
                if (uVar34 != 0) {
                  for (; (uVar34 >> uVar35 & 1) == 0; uVar35 = uVar35 + 1) {
                  }
                }
                uVar40 = *(uint *)((long)&local_8c8 + uVar35 * 4);
                lVar19 = *(long *)(*(long *)(lVar18 + 0x1e0) + (ulong)uVar40 * 8);
                pcVar33 = *(code **)(pbVar38 + 0x10);
                if ((pcVar33 == (code *)0x0) && (*(long *)(lVar19 + 0x48) == 0)) {
LAB_00113c1f:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00113c28;
                }
                puStack_8f8 = *(undefined4 **)(param_3 + 8);
                uStack_8a0 = uVar40;
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar35 * 4);
                iStack_90c = -1;
                uStack_8ac = *(undefined4 *)(local_848 + uVar35 * 4);
                uStack_8a8 = *(undefined4 *)(local_838 + uVar35 * 4);
                uStack_8b0 = *(undefined4 *)(local_7f8 + uVar35 * 4);
                fStack_8b4 = local_808[uVar35];
                uStack_89c = *puStack_8f8;
                piStack_908 = &iStack_90c;
                fStack_8b8 = local_818[uVar35];
                *(float *)(param_2 + 0x20) = local_818[uVar35 - 4];
                uStack_900 = *(undefined8 *)(lVar19 + 0x18);
                puStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar19 + 0x48) == (code *)0x0) {
LAB_00113db2:
                  if ((pcVar33 == (code *)0x0) ||
                     ((((*pbVar38 & 2) == 0 && ((*(byte *)(lVar19 + 0x3e) & 0x40) == 0)) ||
                      ((*pcVar33)(&piStack_908), *piStack_908 != 0)))) goto LAB_00113c1f;
                }
                else {
                  (**(code **)(lVar19 + 0x48))(&piStack_908);
                  if (*piStack_908 != 0) {
                    pbVar38 = *(byte **)(param_3 + 0x10);
                    pcVar33 = *(code **)(pbVar38 + 0x10);
                    goto LAB_00113db2;
                  }
                }
                *(float *)(param_2 + 0x20) = fVar74;
                uVar34 = uVar34 ^ 1L << (uVar35 & 0x3f);
              } while (uVar34 != 0);
            }
          }
          lVar39 = lVar39 + 1;
          puVar36 = puVar36 + 0x14;
        } while (lVar39 != uVar37 - 8);
      }
LAB_00113e98:
    } while (puVar30 != &local_7e8);
  }
LAB_00113c28:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1048576, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1048576,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMiIntersector1Pluecker<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  ulong uVar31;
  byte *pbVar32;
  RayHitK *pRVar33;
  ulong uVar34;
  code *pcVar35;
  uint *puVar36;
  ulong uVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  int iVar40;
  ulong uVar41;
  int iVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar66;
  float fVar68;
  undefined1 auVar58 [16];
  float fVar67;
  float fVar69;
  float fVar70;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar89;
  float fVar93;
  undefined1 auVar82 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar99;
  float fVar109;
  float fVar110;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar111;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar112;
  float fVar122;
  float fVar123;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar124;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar125;
  float fVar130;
  float fVar131;
  undefined1 in_XMM5 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar132;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar133;
  float fVar134;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  float fVar158;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar159 [16];
  float fVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  float fVar189;
  float fVar190;
  float fVar191;
  undefined1 auStack_1208 [8];
  float fStack_1200;
  float fStack_11fc;
  undefined1 local_11f8 [16];
  float local_115c;
  uint uStack_10bc;
  uint *puStack_10b8;
  undefined8 uStack_10b0;
  undefined4 *puStack_10a8;
  RayHitK *pRStack_10a0;
  undefined4 *puStack_1098;
  undefined4 uStack_1090;
  undefined1 auStack_1088 [16];
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  float fStack_1048;
  undefined4 uStack_1044;
  uint uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  float afStack_fc8 [4];
  undefined1 auStack_fb8 [16];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  uVar30 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar171 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar171 < 0.0) {
      fVar171 = 0.0;
    }
    fVar78 = *(float *)(param_2 + 0xc);
    if (fVar78 < 0.0) {
      fVar78 = 0.0;
    }
    fVar25 = *(float *)param_2;
    fVar26 = *(float *)(param_2 + 4);
    fVar27 = *(float *)(param_2 + 8);
    pauVar39 = (undefined1 (*) [16])local_f78;
    uVar44 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar45 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001153d4);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001153d8);
    uVar52 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001153dc);
    auVar58._0_4_ = uVar44 & (uint)_LC5;
    auVar58._4_4_ = uVar45 & (uint)_UNK_001153d4;
    auVar58._8_4_ = uVar48 & (uint)_UNK_001153d8;
    auVar58._12_4_ = uVar52 & (uint)_UNK_001153dc;
    auVar126._0_4_ = ~uVar44 & *(uint *)(param_2 + 0x10);
    auVar126._4_4_ = ~uVar45 & *(uint *)(param_2 + 0x14);
    auVar126._8_4_ = ~uVar48 & *(uint *)(param_2 + 0x18);
    auVar126._12_4_ = ~uVar52 & *(uint *)(param_2 + 0x1c);
    auVar58 = auVar58 | auVar126;
    auVar126 = rcpps(in_XMM5,auVar58);
    fVar56 = auVar126._0_4_;
    fVar66 = auVar126._4_4_;
    fVar68 = auVar126._8_4_;
    fVar56 = (_LC7 - auVar58._0_4_ * fVar56) * fVar56 + fVar56;
    fVar66 = (_LC7 - auVar58._4_4_ * fVar66) * fVar66 + fVar66;
    fVar68 = (_LC7 - auVar58._8_4_ * fVar68) * fVar68 + fVar68;
    local_11f8._4_4_ = fVar171;
    local_11f8._0_4_ = fVar171;
    local_11f8._8_4_ = fVar171;
    local_11f8._12_4_ = fVar171;
    uVar31 = (ulong)(fVar56 < 0.0) * 4;
LAB_001140b8:
    pauVar38 = pauVar39;
    if (pauVar39 != (undefined1 (*) [16])local_f88) {
      while( true ) {
        local_115c = *(float *)(param_2 + 0x20);
        pauVar39 = pauVar38 + -1;
        if (local_115c < *(float *)(pauVar38[-1] + 8)) break;
        uVar37 = *(ulong *)pauVar38[-1];
        pauVar38 = pauVar39;
        if ((uVar37 & 8) != 0) {
          uVar34 = (ulong)((uint)uVar37 & 0xf) - 8;
          if (uVar34 != 0) {
LAB_0011447c:
            puVar36 = (uint *)(uVar37 & 0xfffffffffffffff0);
            uVar41 = 0;
            auStack_1208._4_4_ = local_115c;
            auStack_1208._0_4_ = local_115c;
            fStack_1200 = local_115c;
            fStack_11fc = local_115c;
            uVar37 = uVar41;
            goto LAB_001144d0;
          }
LAB_00114f90:
          local_11f8._4_4_ = local_115c;
          local_11f8._0_4_ = local_115c;
          local_11f8._8_4_ = local_115c;
          local_11f8._12_4_ = local_115c;
          break;
        }
        while( true ) {
          uVar34 = uVar37 & 0xfffffffffffffff0;
          pbVar32 = (byte *)(uVar34 + 0x20);
          if (uVar37 < 0x10) {
            pbVar32 = (byte *)0x0;
          }
          fVar171 = *(float *)(pbVar32 + 0x18);
          fVar124 = *(float *)(pbVar32 + 0x24);
          fVar132 = *(float *)(pbVar32 + 0x1c);
          fVar143 = *(float *)(pbVar32 + 0x20);
          pbVar1 = pbVar32 + uVar31;
          auVar114._0_4_ = -(uint)(pbVar32[4] < *pbVar32) ^ __LC0;
          auVar114._4_4_ = -(uint)(pbVar32[5] < pbVar32[1]) ^ _UNK_001153b4;
          auVar114._8_4_ = -(uint)(pbVar32[6] < pbVar32[2]) ^ _UNK_001153b8;
          auVar114._12_4_ = -(uint)(pbVar32[7] < pbVar32[3]) ^ _UNK_001153bc;
          uVar45 = movmskps((uint)pbVar32[1],auVar114);
          pbVar2 = pbVar32 + (uVar31 ^ 4);
          pbVar3 = pbVar32 + (ulong)(-(uint)(fVar66 < 0.0) & 4) + 8;
          fVar163 = *(float *)(pbVar32 + 0x28);
          pbVar4 = pbVar32 + (-(ulong)(fVar66 < 0.0) & 0xfffffffffffffffc) + 0xc;
          pbVar5 = pbVar32 + (ulong)(-(uint)(fVar68 < 0.0) & 4) + 0x10;
          fVar92 = *(float *)(pbVar32 + 0x2c);
          pbVar32 = pbVar32 + (-(ulong)(fVar68 < 0.0) & 0xfffffffffffffffc) + 0x14;
          auVar148._0_4_ = (((float)*pbVar1 * fVar124 + fVar171) - fVar25) * fVar56;
          auVar148._4_4_ = (((float)pbVar1[1] * fVar124 + fVar171) - fVar25) * fVar56;
          auVar148._8_4_ = (((float)pbVar1[2] * fVar124 + fVar171) - fVar25) * fVar56;
          auVar148._12_4_ = (((float)pbVar1[3] * fVar124 + fVar171) - fVar25) * fVar56;
          auVar100._0_4_ = ((fVar124 * (float)*pbVar2 + fVar171) - fVar25) * fVar56;
          auVar100._4_4_ = ((fVar124 * (float)pbVar2[1] + fVar171) - fVar25) * fVar56;
          auVar100._8_4_ = ((fVar124 * (float)pbVar2[2] + fVar171) - fVar25) * fVar56;
          auVar100._12_4_ = ((fVar124 * (float)pbVar2[3] + fVar171) - fVar25) * fVar56;
          auVar82._0_4_ = (((float)*pbVar3 * fVar163 + fVar132) - fVar26) * fVar66;
          auVar82._4_4_ = (((float)pbVar3[1] * fVar163 + fVar132) - fVar26) * fVar66;
          auVar82._8_4_ = (((float)pbVar3[2] * fVar163 + fVar132) - fVar26) * fVar66;
          auVar82._12_4_ = (((float)pbVar3[3] * fVar163 + fVar132) - fVar26) * fVar66;
          auVar127._0_4_ = ((fVar163 * (float)*pbVar4 + fVar132) - fVar26) * fVar66;
          auVar127._4_4_ = ((fVar163 * (float)pbVar4[1] + fVar132) - fVar26) * fVar66;
          auVar127._8_4_ = ((fVar163 * (float)pbVar4[2] + fVar132) - fVar26) * fVar66;
          auVar127._12_4_ = ((fVar163 * (float)pbVar4[3] + fVar132) - fVar26) * fVar66;
          auVar71._0_4_ = (((float)*pbVar5 * fVar92 + fVar143) - fVar27) * fVar68;
          auVar71._4_4_ = (((float)pbVar5[1] * fVar92 + fVar143) - fVar27) * fVar68;
          auVar71._8_4_ = (((float)pbVar5[2] * fVar92 + fVar143) - fVar27) * fVar68;
          auVar71._12_4_ = (((float)pbVar5[3] * fVar92 + fVar143) - fVar27) * fVar68;
          auVar101._4_4_ = fVar78;
          auVar101._0_4_ = fVar78;
          auVar101._8_4_ = fVar78;
          auVar101._12_4_ = fVar78;
          auVar126 = maxps(auVar71,auVar101);
          auVar58 = maxps(auVar148,auVar82);
          auVar113._0_4_ = ((fVar92 * (float)*pbVar32 + fVar143) - fVar27) * fVar68;
          auVar113._4_4_ = ((fVar92 * (float)pbVar32[1] + fVar143) - fVar27) * fVar68;
          auVar113._8_4_ = ((fVar92 * (float)pbVar32[2] + fVar143) - fVar27) * fVar68;
          auVar113._12_4_ = ((fVar92 * (float)pbVar32[3] + fVar143) - fVar27) * fVar68;
          auVar114 = minps(auVar113,local_11f8);
          auVar101 = minps(auVar100,auVar127);
          local_1038[0] = maxps(auVar58,auVar126);
          auVar58 = minps(auVar101,auVar114);
          auVar72._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar58._4_4_);
          auVar72._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar58._0_4_);
          auVar72._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar58._8_4_);
          auVar72._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar58._12_4_);
          uVar44 = movmskps((uint)pbVar32[3],auVar72);
          uVar41 = (ulong)(int)(uVar45 & uVar44);
          if (uVar41 == 0) break;
          lVar24 = 0;
          if (uVar41 != 0) {
            for (; (uVar41 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
            }
          }
          uVar43 = *(ulong *)(uVar34 + lVar24 * 8);
          uVar41 = uVar41 - 1 & uVar41;
          uVar37 = uVar43;
          pauVar39 = pauVar38;
          if (uVar41 != 0) {
            uVar44 = *(uint *)(local_1038[0] + lVar24 * 4);
            lVar24 = 0;
            if (uVar41 != 0) {
              for (; (uVar41 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
              }
            }
            uVar37 = *(ulong *)(uVar34 + lVar24 * 8);
            uVar45 = *(uint *)(local_1038[0] + lVar24 * 4);
            uVar41 = uVar41 - 1 & uVar41;
            if (uVar41 == 0) {
              pauVar39 = pauVar38 + 1;
              if (uVar44 < uVar45) {
                *(ulong *)*pauVar38 = uVar37;
                *(uint *)(*pauVar38 + 8) = uVar45;
                uVar37 = uVar43;
              }
              else {
                *(ulong *)*pauVar38 = uVar43;
                *(uint *)(*pauVar38 + 8) = uVar44;
              }
            }
            else {
              lVar24 = 0;
              if (uVar41 != 0) {
                for (; (uVar41 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
                }
              }
              auVar119._8_4_ = uVar44;
              auVar119._0_8_ = uVar43;
              auVar119._12_4_ = 0;
              uVar43 = *(ulong *)(uVar34 + lVar24 * 8);
              auVar106._8_4_ = uVar45;
              auVar106._0_8_ = uVar37;
              auVar106._12_4_ = 0;
              iVar40 = *(int *)(local_1038[0] + lVar24 * 4);
              auVar77._8_4_ = iVar40;
              auVar77._0_8_ = uVar43;
              auVar77._12_4_ = 0;
              auVar65._8_4_ = -(uint)((int)uVar44 < (int)uVar45);
              uVar41 = uVar41 - 1 & uVar41;
              if (uVar41 == 0) {
                auVar65._4_4_ = auVar65._8_4_;
                auVar65._0_4_ = auVar65._8_4_;
                auVar65._12_4_ = auVar65._8_4_;
                pauVar39 = pauVar38 + 2;
                auVar101 = auVar119 & auVar65 | ~auVar65 & auVar106;
                auVar107._8_4_ = -(uint)(auVar101._8_4_ < iVar40);
                auVar58 = auVar65 & auVar106 | ~auVar65 & auVar119;
                auVar107._0_8_ = CONCAT44(auVar107._8_4_,auVar107._8_4_);
                auVar107._12_4_ = auVar107._8_4_;
                auVar126 = auVar77 & auVar107 | ~auVar107 & auVar101;
                uVar37 = auVar101._0_8_ & auVar107._0_8_ | ~auVar107._0_8_ & uVar43;
                auVar120._8_4_ = -(uint)(auVar58._8_4_ < auVar126._8_4_);
                auVar120._4_4_ = auVar120._8_4_;
                auVar120._0_4_ = auVar120._8_4_;
                auVar120._12_4_ = auVar120._8_4_;
                *pauVar38 = auVar126 & auVar120 | ~auVar120 & auVar58;
                pauVar38[1] = auVar58 & auVar120 | ~auVar120 & auVar126;
              }
              else {
                lVar24 = 0;
                if (uVar41 != 0) {
                  for (; (uVar41 >> lVar24 & 1) == 0; lVar24 = lVar24 + 1) {
                  }
                }
                pauVar39 = pauVar38 + 3;
                auVar136._8_4_ = *(int *)(local_1038[0] + lVar24 * 4);
                auVar136._0_8_ = *(undefined8 *)(uVar34 + lVar24 * 8);
                auVar136._12_4_ = 0;
                auVar87._4_4_ = auVar65._8_4_;
                auVar87._0_4_ = auVar65._8_4_;
                auVar87._8_4_ = auVar65._8_4_;
                auVar87._12_4_ = auVar65._8_4_;
                auVar148 = auVar119 & auVar87 | ~auVar87 & auVar106;
                auVar108._8_4_ = -(uint)(iVar40 < *(int *)(local_1038[0] + lVar24 * 4));
                auVar58 = auVar106 & auVar87 | ~auVar87 & auVar119;
                auVar108._4_4_ = auVar108._8_4_;
                auVar108._0_4_ = auVar108._8_4_;
                auVar108._12_4_ = auVar108._8_4_;
                auVar101 = auVar77 & auVar108 | ~auVar108 & auVar136;
                auVar126 = auVar136 & auVar108 | ~auVar108 & auVar77;
                auVar121._8_4_ = -(uint)(auVar58._8_4_ < auVar126._8_4_);
                auVar121._4_4_ = auVar121._8_4_;
                auVar121._0_4_ = auVar121._8_4_;
                auVar121._12_4_ = auVar121._8_4_;
                auVar114 = auVar58 & auVar121 | ~auVar121 & auVar126;
                auVar129._8_4_ = -(uint)(auVar148._8_4_ < auVar101._8_4_);
                *pauVar38 = auVar126 & auVar121 | ~auVar121 & auVar58;
                auVar129._0_8_ = CONCAT44(auVar129._8_4_,auVar129._8_4_);
                auVar129._12_4_ = auVar129._8_4_;
                auVar58 = auVar101 & auVar129 | ~auVar129 & auVar148;
                auVar88._8_4_ = -(uint)(auVar58._8_4_ < auVar114._8_4_);
                auVar88._4_4_ = auVar88._8_4_;
                auVar88._0_4_ = auVar88._8_4_;
                auVar88._12_4_ = auVar88._8_4_;
                pauVar38[2] = auVar58 & auVar88 | ~auVar88 & auVar114;
                uVar37 = auVar148._0_8_ & auVar129._0_8_ | ~auVar129._0_8_ & auVar101._0_8_;
                pauVar38[1] = auVar114 & auVar88 | ~auVar88 & auVar58;
              }
            }
          }
          pauVar38 = pauVar39;
          if ((uVar37 & 8) != 0) {
            uVar34 = (ulong)((uint)uVar37 & 0xf) - 8;
            if (uVar34 == 0) goto LAB_00114f90;
            goto LAB_0011447c;
          }
        }
        if (pauVar38 == (undefined1 (*) [16])local_f88) goto LAB_00114422;
      }
      goto LAB_001140b8;
    }
  }
LAB_00114422:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001144d0:
  lVar24 = *(long *)param_3;
  lVar21 = *(long *)(lVar24 + 0x220);
  lVar22 = *(long *)(lVar21 + (ulong)puVar36[0xc] * 8);
  pfVar6 = (float *)(lVar22 + (ulong)*puVar36 * 4);
  pfVar7 = (float *)(lVar22 + (ulong)puVar36[4] * 4);
  pfVar8 = (float *)(lVar22 + (ulong)puVar36[8] * 4);
  lVar22 = *(long *)(lVar21 + (ulong)puVar36[0xd] * 8);
  pfVar9 = (float *)(lVar22 + (ulong)puVar36[1] * 4);
  pfVar10 = (float *)(lVar22 + (ulong)puVar36[5] * 4);
  pfVar11 = (float *)(lVar22 + (ulong)puVar36[9] * 4);
  lVar22 = *(long *)(lVar21 + (ulong)puVar36[0xe] * 8);
  pfVar12 = (float *)(lVar22 + (ulong)puVar36[2] * 4);
  pfVar13 = (float *)(lVar22 + (ulong)puVar36[6] * 4);
  pfVar14 = (float *)(lVar22 + (ulong)puVar36[10] * 4);
  lVar21 = *(long *)(lVar21 + (ulong)puVar36[0xf] * 8);
  pfVar15 = (float *)(lVar21 + (ulong)puVar36[3] * 4);
  pfVar16 = (float *)(lVar21 + (ulong)puVar36[7] * 4);
  pfVar17 = (float *)(lVar21 + (ulong)puVar36[0xb] * 4);
  uStack_1078 = *(undefined8 *)(puVar36 + 0x10);
  uStack_1070 = *(undefined8 *)(puVar36 + 0x12);
  fVar171 = *(float *)param_2;
  fVar124 = *(float *)(param_2 + 4);
  fVar132 = *(float *)(param_2 + 8);
  fVar143 = *(float *)(param_2 + 0x10);
  fVar163 = *(float *)(param_2 + 0x14);
  fVar92 = *(float *)(param_2 + 0x18);
  uStack_1068 = *(undefined8 *)(puVar36 + 0xc);
  uStack_1060 = *(undefined8 *)(puVar36 + 0xe);
  fVar99 = pfVar8[2] - fVar132;
  fVar109 = pfVar11[2] - fVar132;
  fVar110 = pfVar14[2] - fVar132;
  fVar111 = pfVar17[2] - fVar132;
  fVar57 = *pfVar8 - fVar171;
  fVar67 = *pfVar11 - fVar171;
  fVar69 = *pfVar14 - fVar171;
  fVar70 = *pfVar17 - fVar171;
  fVar79 = pfVar6[2] - fVar132;
  fVar89 = pfVar9[2] - fVar132;
  fVar93 = pfVar12[2] - fVar132;
  fVar96 = pfVar15[2] - fVar132;
  fVar125 = pfVar7[2] - fVar132;
  fVar130 = pfVar10[2] - fVar132;
  fVar131 = pfVar13[2] - fVar132;
  fVar132 = pfVar16[2] - fVar132;
  fVar176 = *pfVar6 - fVar171;
  fVar178 = *pfVar9 - fVar171;
  fVar180 = *pfVar12 - fVar171;
  fVar182 = *pfVar15 - fVar171;
  fVar184 = pfVar6[1] - fVar124;
  fVar186 = pfVar9[1] - fVar124;
  fVar188 = pfVar12[1] - fVar124;
  fVar190 = pfVar15[1] - fVar124;
  fVar172 = pfVar7[1] - fVar124;
  fVar173 = pfVar10[1] - fVar124;
  fVar174 = pfVar13[1] - fVar124;
  fVar175 = pfVar16[1] - fVar124;
  fVar112 = pfVar8[1] - fVar124;
  fVar122 = pfVar11[1] - fVar124;
  fVar123 = pfVar14[1] - fVar124;
  fVar124 = pfVar17[1] - fVar124;
  fVar144 = fVar99 - fVar79;
  fVar149 = fVar109 - fVar89;
  fVar152 = fVar110 - fVar93;
  fVar155 = fVar111 - fVar96;
  fVar168 = *pfVar7 - fVar171;
  fVar169 = *pfVar10 - fVar171;
  fVar170 = *pfVar13 - fVar171;
  fVar171 = *pfVar16 - fVar171;
  fVar80 = fVar57 - fVar176;
  fVar90 = fVar67 - fVar178;
  fVar94 = fVar69 - fVar180;
  fVar97 = fVar70 - fVar182;
  fVar133 = fVar125 - fVar99;
  fVar137 = fVar130 - fVar109;
  fVar139 = fVar131 - fVar110;
  fVar141 = fVar132 - fVar111;
  fVar145 = fVar112 - fVar184;
  fVar150 = fVar122 - fVar186;
  fVar153 = fVar123 - fVar188;
  fVar156 = fVar124 - fVar190;
  fVar177 = fVar184 - fVar172;
  fVar179 = fVar186 - fVar173;
  fVar181 = fVar188 - fVar174;
  fVar183 = fVar190 - fVar175;
  fVar185 = fVar176 - fVar168;
  fVar187 = fVar178 - fVar169;
  fVar189 = fVar180 - fVar170;
  fVar191 = fVar182 - fVar171;
  fVar134 = fVar172 - fVar112;
  fVar138 = fVar173 - fVar122;
  fVar140 = fVar174 - fVar123;
  fVar142 = fVar175 - fVar124;
  fVar146 = fVar168 - fVar57;
  fVar151 = fVar169 - fVar67;
  fVar154 = fVar170 - fVar69;
  fVar157 = fVar171 - fVar70;
  fVar81 = fVar79 - fVar125;
  fVar91 = fVar89 - fVar130;
  fVar95 = fVar93 - fVar131;
  fVar98 = fVar96 - fVar132;
  fVar158 = ((fVar176 + fVar57) * fVar144 - fVar80 * (fVar79 + fVar99)) * fVar163 +
            (fVar80 * (fVar184 + fVar112) - fVar145 * (fVar176 + fVar57)) * fVar92 +
            ((fVar79 + fVar99) * fVar145 - (fVar184 + fVar112) * fVar144) * fVar143;
  fVar160 = ((fVar178 + fVar67) * fVar149 - fVar90 * (fVar89 + fVar109)) * fVar163 +
            (fVar90 * (fVar186 + fVar122) - fVar150 * (fVar178 + fVar67)) * fVar92 +
            ((fVar89 + fVar109) * fVar150 - (fVar186 + fVar122) * fVar149) * fVar143;
  fVar161 = ((fVar180 + fVar69) * fVar152 - fVar94 * (fVar93 + fVar110)) * fVar163 +
            (fVar94 * (fVar188 + fVar123) - fVar153 * (fVar180 + fVar69)) * fVar92 +
            ((fVar93 + fVar110) * fVar153 - (fVar188 + fVar123) * fVar152) * fVar143;
  fVar162 = ((fVar182 + fVar70) * fVar155 - fVar97 * (fVar96 + fVar111)) * fVar163 +
            (fVar97 * (fVar190 + fVar124) - fVar156 * (fVar182 + fVar70)) * fVar92 +
            ((fVar96 + fVar111) * fVar156 - (fVar190 + fVar124) * fVar155) * fVar143;
  auVar159._0_4_ =
       ((fVar176 + fVar168) * fVar81 - fVar185 * (fVar79 + fVar125)) * fVar163 +
       (fVar185 * (fVar184 + fVar172) - fVar177 * (fVar176 + fVar168)) * fVar92 +
       ((fVar79 + fVar125) * fVar177 - (fVar184 + fVar172) * fVar81) * fVar143;
  auVar159._4_4_ =
       ((fVar178 + fVar169) * fVar91 - fVar187 * (fVar89 + fVar130)) * fVar163 +
       (fVar187 * (fVar186 + fVar173) - fVar179 * (fVar178 + fVar169)) * fVar92 +
       ((fVar89 + fVar130) * fVar179 - (fVar186 + fVar173) * fVar91) * fVar143;
  auVar159._8_4_ =
       ((fVar180 + fVar170) * fVar95 - fVar189 * (fVar93 + fVar131)) * fVar163 +
       (fVar189 * (fVar188 + fVar174) - fVar181 * (fVar180 + fVar170)) * fVar92 +
       ((fVar93 + fVar131) * fVar181 - (fVar188 + fVar174) * fVar95) * fVar143;
  auVar159._12_4_ =
       ((fVar182 + fVar171) * fVar98 - fVar191 * (fVar96 + fVar132)) * fVar163 +
       (fVar191 * (fVar190 + fVar175) - fVar183 * (fVar182 + fVar171)) * fVar92 +
       ((fVar96 + fVar132) * fVar183 - (fVar190 + fVar175) * fVar98) * fVar143;
  auVar115._8_4_ = fVar161;
  auVar115._0_8_ = CONCAT44(fVar160,fVar158);
  auVar115._12_4_ = fVar162;
  auVar58 = maxps(auVar115,auVar159);
  auVar102._0_4_ =
       ((fVar125 + fVar99) * fVar134 - (fVar112 + fVar172) * fVar133) * fVar143 +
       ((fVar57 + fVar168) * fVar133 - fVar146 * (fVar125 + fVar99)) * fVar163 +
       (fVar146 * (fVar112 + fVar172) - fVar134 * (fVar57 + fVar168)) * fVar92;
  auVar102._4_4_ =
       ((fVar130 + fVar109) * fVar138 - (fVar122 + fVar173) * fVar137) * fVar143 +
       ((fVar67 + fVar169) * fVar137 - fVar151 * (fVar130 + fVar109)) * fVar163 +
       (fVar151 * (fVar122 + fVar173) - fVar138 * (fVar67 + fVar169)) * fVar92;
  auVar102._8_4_ =
       ((fVar131 + fVar110) * fVar140 - (fVar123 + fVar174) * fVar139) * fVar143 +
       ((fVar69 + fVar170) * fVar139 - fVar154 * (fVar131 + fVar110)) * fVar163 +
       (fVar154 * (fVar123 + fVar174) - fVar140 * (fVar69 + fVar170)) * fVar92;
  auVar102._12_4_ =
       ((fVar132 + fVar111) * fVar142 - (fVar124 + fVar175) * fVar141) * fVar143 +
       ((fVar70 + fVar171) * fVar141 - fVar157 * (fVar132 + fVar111)) * fVar163 +
       (fVar157 * (fVar124 + fVar175) - fVar142 * (fVar70 + fVar171)) * fVar92;
  auVar58 = maxps(auVar58,auVar102);
  auVar147._0_4_ = auVar159._0_4_ + fVar158 + auVar102._0_4_;
  auVar147._4_4_ = auVar159._4_4_ + fVar160 + auVar102._4_4_;
  auVar147._8_4_ = auVar159._8_4_ + fVar161 + auVar102._8_4_;
  auVar147._12_4_ = auVar159._12_4_ + fVar162 + auVar102._12_4_;
  fVar171 = __LC15 * (float)((uint)auVar147._0_4_ & uVar30);
  fVar124 = _UNK_00115404 * (float)((uint)auVar147._4_4_ & uVar30);
  fVar132 = _UNK_00115408 * (float)((uint)auVar147._8_4_ & uVar30);
  fVar57 = _UNK_0011540c * (float)((uint)auVar147._12_4_ & uVar30);
  auVar116._4_4_ = -(uint)(auVar58._4_4_ <= fVar124);
  auVar116._0_4_ = -(uint)(auVar58._0_4_ <= fVar171);
  auVar116._8_4_ = -(uint)(auVar58._8_4_ <= fVar132);
  auVar116._12_4_ = -(uint)(auVar58._12_4_ <= fVar57);
  auVar59._8_4_ = fVar161;
  auVar59._0_8_ = CONCAT44(fVar160,fVar158);
  auVar59._12_4_ = fVar162;
  auVar58 = minps(auVar59,auVar159);
  auVar58 = minps(auVar58,auVar102);
  local_11f8 = _auStack_1208;
  auVar60._4_4_ = -(uint)((float)((uint)fVar124 ^ _UNK_001153f4) <= auVar58._4_4_);
  auVar60._0_4_ = -(uint)((float)((uint)fVar171 ^ _LC9) <= auVar58._0_4_);
  auVar60._8_4_ = -(uint)((float)((uint)fVar132 ^ _UNK_001153f8) <= auVar58._8_4_);
  auVar60._12_4_ = -(uint)((float)((uint)fVar57 ^ _UNK_001153fc) <= auVar58._12_4_);
  auVar60 = auVar60 | auVar116;
  auVar61._0_4_ = auVar60._0_4_ & _DAT_00116108;
  auVar61._4_4_ = auVar60._4_4_ & uRam000000000011610c;
  auVar61._8_4_ = auVar60._8_4_ & uRam0000000000116110;
  auVar61._12_4_ = auVar60._12_4_ & uRam0000000000116114;
  iVar40 = movmskps((int)lVar21,auVar61);
  if (iVar40 != 0) {
    auVar167._0_4_ = fVar134 * fVar81;
    auVar167._4_4_ = fVar138 * fVar91;
    auVar167._8_4_ = fVar140 * fVar95;
    auVar167._12_4_ = fVar142 * fVar98;
    uVar44 = -(uint)((float)((uint)(fVar144 * fVar177) & uVar30) <
                    (float)((uint)auVar167._0_4_ & uVar30));
    uVar52 = -(uint)((float)((uint)(fVar149 * fVar179) & uVar30) <
                    (float)((uint)auVar167._4_4_ & uVar30));
    uVar49 = -(uint)((float)((uint)(fVar152 * fVar181) & uVar30) <
                    (float)((uint)auVar167._8_4_ & uVar30));
    uVar53 = -(uint)((float)((uint)(fVar155 * fVar183) & uVar30) <
                    (float)((uint)auVar167._12_4_ & uVar30));
    uVar45 = -(uint)((float)((uint)(fVar80 * fVar81) & uVar30) <
                    (float)((uint)(fVar133 * fVar185) & uVar30));
    uVar46 = -(uint)((float)((uint)(fVar90 * fVar91) & uVar30) <
                    (float)((uint)(fVar137 * fVar187) & uVar30));
    uVar50 = -(uint)((float)((uint)(fVar94 * fVar95) & uVar30) <
                    (float)((uint)(fVar139 * fVar189) & uVar30));
    uVar54 = -(uint)((float)((uint)(fVar97 * fVar98) & uVar30) <
                    (float)((uint)(fVar141 * fVar191) & uVar30));
    uVar48 = -(uint)((float)((uint)(fVar145 * fVar185) & uVar30) <
                    (float)(uVar30 & (uint)(fVar146 * fVar177)));
    uVar47 = -(uint)((float)((uint)(fVar150 * fVar187) & uVar30) <
                    (float)(uVar30 & (uint)(fVar151 * fVar179)));
    uVar51 = -(uint)((float)((uint)(fVar153 * fVar189) & uVar30) <
                    (float)(uVar30 & (uint)(fVar154 * fVar181)));
    uVar55 = -(uint)((float)((uint)(fVar156 * fVar191) & uVar30) <
                    (float)(uVar30 & (uint)(fVar157 * fVar183)));
    auVar164._0_4_ = ~uVar48 & (uint)(fVar134 * fVar185 - fVar146 * fVar177);
    auVar164._4_4_ = ~uVar47 & (uint)(fVar138 * fVar187 - fVar151 * fVar179);
    auVar164._8_4_ = ~uVar51 & (uint)(fVar140 * fVar189 - fVar154 * fVar181);
    auVar164._12_4_ = ~uVar55 & (uint)(fVar142 * fVar191 - fVar157 * fVar183);
    auVar103._0_4_ = uVar48 & (uint)(fVar80 * fVar177 - fVar145 * fVar185);
    auVar103._4_4_ = uVar47 & (uint)(fVar90 * fVar179 - fVar150 * fVar187);
    auVar103._8_4_ = uVar51 & (uint)(fVar94 * fVar181 - fVar153 * fVar189);
    auVar103._12_4_ = uVar55 & (uint)(fVar97 * fVar183 - fVar156 * fVar191);
    auVar103 = auVar103 | auVar164;
    auVar165._0_4_ = ~uVar45 & (uint)(fVar146 * fVar81 - fVar133 * fVar185);
    auVar165._4_4_ = ~uVar46 & (uint)(fVar151 * fVar91 - fVar137 * fVar187);
    auVar165._8_4_ = ~uVar50 & (uint)(fVar154 * fVar95 - fVar139 * fVar189);
    auVar165._12_4_ = ~uVar54 & (uint)(fVar157 * fVar98 - fVar141 * fVar191);
    auVar117._0_4_ = uVar45 & (uint)(fVar144 * fVar185 - fVar80 * fVar81);
    auVar117._4_4_ = uVar46 & (uint)(fVar149 * fVar187 - fVar90 * fVar91);
    auVar117._8_4_ = uVar50 & (uint)(fVar152 * fVar189 - fVar94 * fVar95);
    auVar117._12_4_ = uVar54 & (uint)(fVar155 * fVar191 - fVar97 * fVar98);
    auVar117 = auVar117 | auVar165;
    auVar166._0_4_ = ~uVar44 & (uint)(fVar133 * fVar177 - auVar167._0_4_);
    auVar166._4_4_ = ~uVar52 & (uint)(fVar137 * fVar179 - auVar167._4_4_);
    auVar166._8_4_ = ~uVar49 & (uint)(fVar139 * fVar181 - auVar167._8_4_);
    auVar166._12_4_ = ~uVar53 & (uint)(fVar141 * fVar183 - auVar167._12_4_);
    auVar128._0_4_ = uVar44 & (uint)(fVar145 * fVar81 - fVar144 * fVar177);
    auVar128._4_4_ = uVar52 & (uint)(fVar150 * fVar91 - fVar149 * fVar179);
    auVar128._8_4_ = uVar49 & (uint)(fVar153 * fVar95 - fVar152 * fVar181);
    auVar128._12_4_ = uVar53 & (uint)(fVar156 * fVar98 - fVar155 * fVar183);
    auVar128 = auVar128 | auVar166;
    fVar171 = fVar163 * auVar117._0_4_ + fVar92 * auVar103._0_4_ + fVar143 * auVar128._0_4_;
    fVar124 = fVar163 * auVar117._4_4_ + fVar92 * auVar103._4_4_ + fVar143 * auVar128._4_4_;
    fVar132 = fVar163 * auVar117._8_4_ + fVar92 * auVar103._8_4_ + fVar143 * auVar128._8_4_;
    fVar143 = fVar163 * auVar117._12_4_ + fVar92 * auVar103._12_4_ + fVar143 * auVar128._12_4_;
    auVar135._0_4_ = fVar171 + fVar171;
    auVar135._4_4_ = fVar124 + fVar124;
    auVar135._8_4_ = fVar132 + fVar132;
    auVar135._12_4_ = fVar143 + fVar143;
    auVar58 = rcpps(auVar167,auVar135);
    fVar171 = fVar79 * auVar103._0_4_ + fVar184 * auVar117._0_4_ + fVar176 * auVar128._0_4_;
    fVar132 = fVar89 * auVar103._4_4_ + fVar186 * auVar117._4_4_ + fVar178 * auVar128._4_4_;
    fVar143 = fVar93 * auVar103._8_4_ + fVar188 * auVar117._8_4_ + fVar180 * auVar128._8_4_;
    fVar163 = fVar96 * auVar103._12_4_ + fVar190 * auVar117._12_4_ + fVar182 * auVar128._12_4_;
    fVar124 = auVar58._0_4_;
    fVar92 = auVar58._4_4_;
    fVar57 = auVar58._8_4_;
    fVar67 = auVar58._12_4_;
    fVar124 = (fVar171 + fVar171) * ((_LC7 - auVar135._0_4_ * fVar124) * fVar124 + fVar124);
    fVar132 = (fVar132 + fVar132) * ((_LC7 - auVar135._4_4_ * fVar92) * fVar92 + fVar92);
    fVar143 = (fVar143 + fVar143) * ((_LC7 - auVar135._8_4_ * fVar57) * fVar57 + fVar57);
    fVar163 = (fVar163 + fVar163) * ((_LC7 - auVar135._12_4_ * fVar67) * fVar67 + fVar67);
    fVar171 = *(float *)(param_2 + 0xc);
    auVar62._0_4_ =
         auVar61._0_4_ & -(uint)(fVar171 <= fVar124 && fVar124 <= (float)auStack_1208._0_4_) &
         -(uint)(auVar135._0_4_ != 0.0);
    auVar62._4_4_ =
         auVar61._4_4_ & -(uint)(fVar171 <= fVar132 && fVar132 <= (float)auStack_1208._4_4_) &
         -(uint)(auVar135._4_4_ != 0.0);
    auVar62._8_4_ =
         auVar61._8_4_ & -(uint)(fVar171 <= fVar143 && fVar143 <= fStack_1200) &
         -(uint)(auVar135._8_4_ != 0.0);
    auVar62._12_4_ =
         auVar61._12_4_ & -(uint)(fVar171 <= fVar163 && fVar163 <= fStack_11fc) &
         -(uint)(auVar135._12_4_ != 0.0);
    iVar42 = movmskps((int)uVar37,auVar62);
    uVar37 = CONCAT44((int)(uVar37 >> 0x20),iVar42);
    if (iVar42 != 0) {
      auStack_fa8 = auVar117;
      auVar58 = rcpps(auVar117,auVar147);
      auStack_f98 = auVar103;
      auStack_1088 = auVar62;
      auStack_fb8 = auVar128;
      afStack_fc8[0] = fVar124;
      afStack_fc8[1] = fVar132;
      afStack_fc8[2] = fVar143;
      afStack_fc8[3] = fVar163;
      fVar171 = auVar58._0_4_;
      fVar92 = auVar58._4_4_;
      fVar57 = auVar58._8_4_;
      fVar67 = auVar58._12_4_;
      auVar118._4_4_ = _LC18;
      auVar118._0_4_ = _LC18;
      auVar118._8_4_ = _LC18;
      auVar118._12_4_ = _LC18;
      fVar171 = (float)(~-(uint)((float)((uint)auVar147._0_4_ & uVar30) < _LC5) &
                       (uint)((_LC7 - auVar147._0_4_ * fVar171) * fVar171 + fVar171));
      fVar92 = (float)(~-(uint)((float)((uint)auVar147._4_4_ & uVar30) < _UNK_001153d4) &
                      (uint)((_LC7 - auVar147._4_4_ * fVar92) * fVar92 + fVar92));
      fVar57 = (float)(~-(uint)((float)((uint)auVar147._8_4_ & uVar30) < _UNK_001153d8) &
                      (uint)((_LC7 - auVar147._8_4_ * fVar57) * fVar57 + fVar57));
      fVar67 = (float)(~-(uint)((float)((uint)auVar147._12_4_ & uVar30) < _UNK_001153dc) &
                      (uint)((_LC7 - auVar147._12_4_ * fVar67) * fVar67 + fVar67));
      auVar73._0_4_ = fVar158 * fVar171;
      auVar73._4_4_ = fVar160 * fVar92;
      auVar73._8_4_ = fVar161 * fVar57;
      auVar73._12_4_ = fVar162 * fVar67;
      auVar28._4_12_ = _UNK_001153e4;
      auVar28._0_4_ = _LC7;
      auStack_fe8 = minps(auVar73,auVar28);
      auVar74._0_4_ = auVar159._0_4_ * fVar171;
      auVar74._4_4_ = auVar159._4_4_ * fVar92;
      auVar74._8_4_ = auVar159._8_4_ * fVar57;
      auVar74._12_4_ = auVar159._12_4_ * fVar67;
      auVar29._4_12_ = _UNK_001153e4;
      auVar29._0_4_ = _LC7;
      auStack_fd8 = minps(auVar74,auVar29);
      auVar83._0_4_ = ~auVar62._0_4_ & _LC18;
      auVar83._4_4_ = ~auVar62._4_4_ & _LC18;
      auVar83._8_4_ = ~auVar62._8_4_ & _LC18;
      auVar83._12_4_ = ~auVar62._12_4_ & _LC18;
      auVar75._0_4_ = auVar62._0_4_ & (uint)fVar124;
      auVar75._4_4_ = auVar62._4_4_ & (uint)fVar132;
      auVar75._8_4_ = auVar62._8_4_ & (uint)fVar143;
      auVar75._12_4_ = auVar62._12_4_ & (uint)fVar163;
      auVar75 = auVar75 | auVar83;
      auVar84._4_4_ = auVar75._0_4_;
      auVar84._0_4_ = auVar75._4_4_;
      auVar84._8_4_ = auVar75._12_4_;
      auVar84._12_4_ = auVar75._8_4_;
      auVar58 = minps(auVar84,auVar75);
      auVar104._0_8_ = auVar58._8_8_;
      auVar104._8_4_ = auVar58._0_4_;
      auVar104._12_4_ = auVar58._4_4_;
      auVar58 = minps(auVar104,auVar58);
      auVar63._0_4_ = auVar62._0_4_ & -(uint)(auVar75._0_4_ == auVar58._0_4_);
      auVar63._4_4_ = auVar62._4_4_ & -(uint)(auVar75._4_4_ == auVar58._4_4_);
      auVar63._8_4_ = auVar62._8_4_ & -(uint)(auVar75._8_4_ == auVar58._8_4_);
      auVar63._12_4_ = auVar62._12_4_ & -(uint)(auVar75._12_4_ == auVar58._12_4_);
      iVar40 = movmskps(iVar40,auVar63);
      uVar43 = uVar37;
      if (iVar40 != 0) {
        uVar43 = CONCAT44((int)((ulong)lVar21 >> 0x20),iVar40);
      }
      uVar37 = 0;
      if (uVar43 != 0) {
        for (; (uVar43 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
        }
      }
      uVar44 = *(uint *)((long)&uStack_1068 + uVar37 * 4);
      do {
        pbVar32 = *(byte **)(param_3 + 0x10);
        pRVar33 = *(RayHitK **)(*(long *)(lVar24 + 0x1e0) + (ulong)uVar44 * 8);
        pcVar35 = *(code **)(pbVar32 + 0x10);
        if ((pcVar35 == (code *)0x0) && (*(long *)(pRVar33 + 0x40) == 0)) {
          uVar20 = *(undefined4 *)((long)&uStack_1078 + uVar37 * 4);
          *(uint *)(param_2 + 0x48) = uVar44;
          uVar18 = *(undefined4 *)(auStack_fb8 + uVar37 * 4);
          local_115c = afStack_fc8[uVar37];
          uVar19 = *(undefined4 *)(auStack_fe8 + uVar37 * 4);
          *(undefined4 *)(param_2 + 0x44) = uVar20;
          puVar23 = *(undefined4 **)(param_3 + 8);
          *(undefined4 *)(param_2 + 0x30) = uVar18;
          fVar171 = afStack_fc8[uVar37 - 4];
          local_11f8._4_4_ = local_115c;
          local_11f8._0_4_ = local_115c;
          local_11f8._8_4_ = local_115c;
          local_11f8._12_4_ = local_115c;
          uVar20 = *puVar23;
          *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(auStack_fa8 + uVar37 * 4);
          uVar18 = *(undefined4 *)(auStack_f98 + uVar37 * 4);
          *(float *)(param_2 + 0x20) = local_115c;
          *(undefined4 *)(param_2 + 0x4c) = uVar20;
          *(undefined4 *)(param_2 + 0x38) = uVar18;
          *(undefined4 *)(param_2 + 0x3c) = uVar19;
          *(float *)(param_2 + 0x40) = fVar171;
          break;
        }
        uStack_1040 = uVar44;
        uStack_104c = *(undefined4 *)(auStack_fe8 + uVar37 * 4);
        uStack_1050 = *(undefined4 *)(auStack_f98 + uVar37 * 4);
        uStack_10bc = 0xffffffff;
        fStack_1048 = afStack_fc8[uVar37 - 4];
        uStack_1044 = *(undefined4 *)((long)&uStack_1078 + uVar37 * 4);
        puStack_10a8 = *(undefined4 **)(param_3 + 8);
        uStack_103c = **(undefined4 **)(param_3 + 8);
        uStack_1054 = *(undefined4 *)(auStack_fa8 + uVar37 * 4);
        *(float *)(param_2 + 0x20) = afStack_fc8[uVar37];
        puStack_10b8 = &uStack_10bc;
        uStack_10b0 = *(undefined8 *)(pRVar33 + 0x18);
        puStack_1098 = &uStack_1058;
        pRStack_10a0 = param_2;
        uStack_1090 = 1;
        uStack_1058 = *(undefined4 *)(auStack_fb8 + uVar37 * 4);
        if (*(code **)(pRVar33 + 0x40) == (code *)0x0) {
LAB_00114da1:
          if ((pcVar35 != (code *)0x0) &&
             (((*pbVar32 & 2) != 0 || (((byte)pRVar33[0x3e] & 0x40) != 0)))) {
            (*pcVar35)(&puStack_10b8);
            auVar118._4_12_ = _UNK_00115414;
            auVar118._0_4_ = _LC18;
            pRVar33 = (RayHitK *)(ulong)*puStack_10b8;
            if (*puStack_10b8 == 0) goto LAB_00114f30;
          }
          *(undefined4 *)(pRStack_10a0 + 0x30) = *puStack_1098;
          *(undefined4 *)(pRStack_10a0 + 0x34) = puStack_1098[1];
          *(undefined4 *)(pRStack_10a0 + 0x38) = puStack_1098[2];
          *(undefined4 *)(pRStack_10a0 + 0x3c) = puStack_1098[3];
          *(undefined4 *)(pRStack_10a0 + 0x40) = puStack_1098[4];
          *(undefined4 *)(pRStack_10a0 + 0x44) = puStack_1098[5];
          *(undefined4 *)(pRStack_10a0 + 0x48) = puStack_1098[6];
          *(undefined4 *)(pRStack_10a0 + 0x4c) = puStack_1098[7];
          local_115c = *(float *)(param_2 + 0x20);
          auStack_1208._4_4_ = local_115c;
          auStack_1208._0_4_ = local_115c;
          fStack_1200 = local_115c;
          fStack_11fc = local_115c;
          pRVar33 = pRStack_10a0;
        }
        else {
          (**(code **)(pRVar33 + 0x40))(&puStack_10b8);
          auVar118._4_12_ = _UNK_00115414;
          auVar118._0_4_ = _LC18;
          if (*puStack_10b8 != 0) {
            pbVar32 = *(byte **)(param_3 + 0x10);
            pcVar35 = *(code **)(pbVar32 + 0x10);
            goto LAB_00114da1;
          }
LAB_00114f30:
          *(float *)(param_2 + 0x20) = local_115c;
        }
        *(undefined4 *)(auStack_1088 + uVar37 * 4) = 0;
        auStack_1088._0_4_ = -(uint)(fVar124 <= SUB164(_auStack_1208,0)) & auStack_1088._0_4_;
        auStack_1088._4_4_ = -(uint)(fVar132 <= SUB164(_auStack_1208,4)) & auStack_1088._4_4_;
        auStack_1088._8_4_ = -(uint)(fVar143 <= SUB164(_auStack_1208,8)) & auStack_1088._8_4_;
        auStack_1088._12_4_ = -(uint)(fVar163 <= SUB164(_auStack_1208,0xc)) & auStack_1088._12_4_;
        iVar40 = movmskps((int)uVar37,auStack_1088);
        uVar37 = CONCAT44((int)(uVar37 >> 0x20),iVar40);
        if (iVar40 == 0) goto LAB_00114fa8;
        auVar85._0_4_ = ~auStack_1088._0_4_ & auVar118._0_4_;
        auVar85._4_4_ = ~auStack_1088._4_4_ & auVar118._4_4_;
        auVar85._8_4_ = ~auStack_1088._8_4_ & auVar118._8_4_;
        auVar85._12_4_ = ~auStack_1088._12_4_ & auVar118._12_4_;
        auVar76._0_4_ = auStack_1088._0_4_ & (uint)fVar124;
        auVar76._4_4_ = auStack_1088._4_4_ & (uint)fVar132;
        auVar76._8_4_ = auStack_1088._8_4_ & (uint)fVar143;
        auVar76._12_4_ = auStack_1088._12_4_ & (uint)fVar163;
        auVar76 = auVar76 | auVar85;
        auVar86._4_4_ = auVar76._0_4_;
        auVar86._0_4_ = auVar76._4_4_;
        auVar86._8_4_ = auVar76._12_4_;
        auVar86._12_4_ = auVar76._8_4_;
        auVar58 = minps(auVar86,auVar76);
        auVar105._0_8_ = auVar58._8_8_;
        auVar105._8_4_ = auVar58._0_4_;
        auVar105._12_4_ = auVar58._4_4_;
        auVar58 = minps(auVar105,auVar58);
        auVar64._0_4_ = auStack_1088._0_4_ & -(uint)(auVar76._0_4_ == auVar58._0_4_);
        auVar64._4_4_ = auStack_1088._4_4_ & -(uint)(auVar76._4_4_ == auVar58._4_4_);
        auVar64._8_4_ = auStack_1088._8_4_ & -(uint)(auVar76._8_4_ == auVar58._8_4_);
        auVar64._12_4_ = auStack_1088._12_4_ & -(uint)(auVar76._12_4_ == auVar58._12_4_);
        iVar40 = movmskps((int)pRVar33,auVar64);
        uVar43 = uVar37;
        if (iVar40 != 0) {
          uVar43 = CONCAT44((int)((ulong)pRVar33 >> 0x20),iVar40);
        }
        uVar37 = 0;
        if (uVar43 != 0) {
          for (; (uVar43 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar44 = *(uint *)((long)&uStack_1068 + uVar37 * 4);
      } while( true );
    }
  }
  goto LAB_00114c19;
LAB_00114fa8:
  local_11f8 = _auStack_1208;
LAB_00114c19:
  uVar41 = uVar41 + 1;
  puVar36 = puVar36 + 0x14;
  _auStack_1208 = local_11f8;
  if (uVar41 == uVar34) goto LAB_001140b8;
  goto LAB_001144d0;
}


