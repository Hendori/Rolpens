
/* embree::sse2::getISA() */

void embree::sse2::getISA(void)

{
  VerifyMultiTargetLinking::getISA(5);
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
LAB_00100320:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00100348:
        uVar8 = (uint)uVar9 & 8;
        uVar13 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00100460;
LAB_00100359:
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
            if (uVar9 == 0) goto LAB_00100320;
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
            if (param_1 == (Intersectors *)0x0) goto LAB_00100348;
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
              goto LAB_00100348;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar13 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar18;
            if (iVar4 == 1) goto LAB_00100359;
LAB_00100460:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00100550;
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
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001151b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001151b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001151bc;
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
          goto LAB_00100348;
        }
LAB_00100550:
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
          } while (puVar17 != puVar15);
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
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_001006a1;
      }
      goto LAB_00100320;
    }
  }
LAB_001006a1:
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
LAB_00100a70:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00100a98:
        uVar8 = (uint)uVar9 & 8;
        uVar15 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00100bb0;
LAB_00100aa9:
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
            if (uVar9 == 0) goto LAB_00100a70;
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
            if (param_1 == (Intersectors *)0x0) goto LAB_00100a98;
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
              goto LAB_00100a98;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar15 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar17;
            if (iVar4 == 1) goto LAB_00100aa9;
LAB_00100bb0:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00100ca0;
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
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001151b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001151b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001151bc;
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
          goto LAB_00100a98;
        }
LAB_00100ca0:
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
          } while (piVar14 != piVar16 + 0x14);
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
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00100de4;
      }
      goto LAB_00100a70;
    }
  }
LAB_00100de4:
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
LAB_001011b0:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_001011d8:
        uVar8 = (uint)uVar9 & 8;
        uVar15 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_001012f0;
LAB_001011e9:
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
            if (uVar9 == 0) goto LAB_001011b0;
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
            if (param_1 == (Intersectors *)0x0) goto LAB_001011d8;
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
              goto LAB_001011d8;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar15 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar17;
            if (iVar4 == 1) goto LAB_001011e9;
LAB_001012f0:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_001013e0;
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
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001151b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001151b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001151bc;
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
          goto LAB_001011d8;
        }
LAB_001013e0:
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
          } while (piVar14 != piVar16 + 0x14);
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
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00101524;
      }
      goto LAB_001011b0;
    }
  }
LAB_00101524:
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
LAB_001018f0:
    bVar21 = bVar20;
    pPVar11 = pPVar10;
    bVar20 = bVar21;
    if (pPVar10 != (PointQueryK *)&local_f88) {
      while (pPVar10 = pPVar11 + -0x10, *(float *)(pPVar11 + -8) <= fVar27) {
        pPVar12 = pPVar10;
        uVar9 = *(ulong *)(pPVar11 + -0x10);
LAB_00101918:
        uVar8 = (uint)uVar9 & 8;
        uVar13 = uVar9;
        if (*(int *)(param_3 + 0x18) != 1) goto LAB_00101a30;
LAB_00101929:
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
            if (uVar9 == 0) goto LAB_001018f0;
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
            if (param_1 == (Intersectors *)0x0) goto LAB_00101918;
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
              goto LAB_00101918;
            }
            *(ulong *)pPVar10 = uVar9;
            uVar8 = (uint)uVar13 & 8;
            iVar4 = *(int *)(param_3 + 0x18);
            *(uint *)(pPVar10 + 8) = uVar18;
            if (iVar4 == 1) goto LAB_00101929;
LAB_00101a30:
            pPVar10 = pPVar12;
            if (uVar8 != 0) goto LAB_00101b20;
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
            auVar48._4_4_ = auVar47._4_4_ ^ _UNK_001151b4;
            auVar48._8_4_ = auVar47._8_4_ ^ _UNK_001151b8;
            auVar48._12_4_ = auVar47._12_4_ ^ _UNK_001151bc;
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
          goto LAB_00101918;
        }
LAB_00101b20:
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
          } while (puVar17 != puVar15);
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
        if (pPVar10 == (PointQueryK *)&local_f88) goto LAB_00101c71;
      }
      goto LAB_001018f0;
    }
  }
LAB_00101c71:
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
LAB_00102050:
    bVar21 = bVar20;
    pauVar16 = pauVar17;
    bVar20 = bVar21;
    if (pauVar17 != (undefined1 (*) [16])local_f88) {
LAB_00102059:
      pauVar17 = pauVar16 + -1;
      if (*(float *)(pauVar16[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar16[-1];
LAB_00102088:
        uVar12 = (uint)uVar11 & 0xf;
        uVar13 = (ulong)uVar12;
        uVar10 = (uint)uVar11 & 8;
        piVar9 = (int *)(uVar11 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00102200;
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
          if ((uVar11 & 8) != 0) goto LAB_00102200;
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
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001151b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001151b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001151bc;
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
        if (uVar11 == 0) goto LAB_00102050;
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
        goto LAB_00102088;
      }
      goto LAB_00102050;
    }
  }
LAB_00102334:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
LAB_00102200:
  if (uVar13 == 8) goto LAB_00102050;
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
    } while (piVar15 != piVar9 + 0x14);
    bVar21 = local_1038[0] | bVar21;
    local_1038[0] = bVar21;
    lVar22 = lVar22 + 1;
    piVar9 = piVar9 + 0x14;
  } while (uVar13 - 8 != lVar22);
  if (bVar21 == 0) goto LAB_00102050;
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
    goto LAB_00102050;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar16 = pauVar17;
  bVar20 = bVar21;
  if (pauVar17 == (undefined1 (*) [16])local_f88) goto LAB_00102334;
  goto LAB_00102059;
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
LAB_001028d0:
    bVar21 = bVar20;
    pauVar16 = pauVar17;
    bVar20 = bVar21;
    if (pauVar17 != (undefined1 (*) [16])local_f88) {
LAB_001028d9:
      pauVar17 = pauVar16 + -1;
      if (*(float *)(pauVar16[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar16[-1];
LAB_00102908:
        uVar12 = (uint)uVar11 & 0xf;
        uVar13 = (ulong)uVar12;
        uVar10 = (uint)uVar11 & 8;
        piVar9 = (int *)(uVar11 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00102a80;
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
          if ((uVar11 & 8) != 0) goto LAB_00102a80;
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
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001151b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001151b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001151bc;
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
        if (uVar11 == 0) goto LAB_001028d0;
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
        goto LAB_00102908;
      }
      goto LAB_001028d0;
    }
  }
LAB_00102bb4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar21;
LAB_00102a80:
  if (uVar13 == 8) goto LAB_001028d0;
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
    } while (piVar15 != piVar9 + 0x14);
    bVar21 = local_1038[0] | bVar21;
    local_1038[0] = bVar21;
    lVar22 = lVar22 + 1;
    piVar9 = piVar9 + 0x14;
  } while (uVar13 - 8 != lVar22);
  if (bVar21 == 0) goto LAB_001028d0;
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
    goto LAB_001028d0;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar16 = pauVar17;
  bVar20 = bVar21;
  if (pauVar17 == (undefined1 (*) [16])local_f88) goto LAB_00102bb4;
  goto LAB_001028d9;
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
LAB_00103150:
    bVar22 = bVar21;
    pauVar15 = pauVar16;
    bVar21 = bVar22;
    if (pauVar16 != (undefined1 (*) [16])local_f88) {
LAB_00103159:
      pauVar16 = pauVar15 + -1;
      if (*(float *)(pauVar15[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar15[-1];
LAB_00103188:
        uVar19 = (ulong)((uint)uVar11 & 0xf);
        uVar10 = (uint)uVar11 & 8;
        uVar9 = uVar11 & 0xfffffffffffffff0;
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00103308;
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
          if ((uVar11 & 8) != 0) goto LAB_00103308;
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
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001151b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001151b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001151bc;
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
        if (uVar11 == 0) goto LAB_00103150;
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
        goto LAB_00103188;
      }
      goto LAB_00103150;
    }
  }
LAB_00103448:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar22;
LAB_00103308:
  if (uVar19 == 8) goto LAB_00103150;
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
    } while (puVar13 != puVar14);
    bVar22 = local_1038[0] | bVar22;
    local_1038[0] = bVar22;
    lVar20 = lVar20 + 1;
    puVar14 = puVar14 + 0x50;
  } while (uVar19 - 8 != lVar20);
  if (bVar22 == 0) goto LAB_00103150;
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
    goto LAB_00103150;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar15 = pauVar16;
  bVar21 = bVar22;
  if (pauVar16 == (undefined1 (*) [16])local_f88) goto LAB_00103448;
  goto LAB_00103159;
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
LAB_001039f0:
    bVar22 = bVar21;
    pauVar15 = pauVar16;
    bVar21 = bVar22;
    if (pauVar16 != (undefined1 (*) [16])local_f88) {
LAB_001039f9:
      pauVar16 = pauVar15 + -1;
      if (*(float *)(pauVar15[-1] + 8) <= fVar23) {
        fVar4 = *(float *)(param_2 + 0xc);
        uVar11 = *(ulong *)pauVar15[-1];
LAB_00103a28:
        uVar19 = (ulong)((uint)uVar11 & 0xf);
        uVar10 = (uint)uVar11 & 8;
        uVar9 = uVar11 & 0xfffffffffffffff0;
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar11 & 8) != 0) goto LAB_00103ba8;
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
          if ((uVar11 & 8) != 0) goto LAB_00103ba8;
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
          auVar74._4_4_ = auVar73._4_4_ ^ _UNK_001151b4;
          auVar74._8_4_ = auVar73._8_4_ ^ _UNK_001151b8;
          auVar74._12_4_ = auVar73._12_4_ ^ _UNK_001151bc;
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
        if (uVar11 == 0) goto LAB_001039f0;
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
        goto LAB_00103a28;
      }
      goto LAB_001039f0;
    }
  }
LAB_00103ce8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar22;
LAB_00103ba8:
  if (uVar19 == 8) goto LAB_001039f0;
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
    } while (puVar13 != puVar14);
    bVar22 = local_1038[0] | bVar22;
    local_1038[0] = bVar22;
    lVar20 = lVar20 + 1;
    puVar14 = puVar14 + 0x50;
  } while (uVar19 - 8 != lVar20);
  if (bVar22 == 0) goto LAB_001039f0;
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
    goto LAB_001039f0;
  }
  fVar23 = fVar24 * fVar24 + local_fa8 * local_fa8 + fVar23 * fVar23;
  pauVar15 = pauVar16;
  bVar21 = bVar22;
  if (pauVar16 == (undefined1 (*) [16])local_f88) goto LAB_00103ce8;
  goto LAB_001039f9;
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
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  code *pcVar12;
  undefined4 uVar13;
  RayQueryContext *pRVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  RayQueryContext *pRVar19;
  byte *pbVar20;
  RayQueryContext *pRVar21;
  long in_FS_OFFSET;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar47;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar84;
  float fVar85;
  undefined1 auVar81 [16];
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
  ulong local_960;
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
     (fVar33 = *(float *)(param_2 + 0x20), 0.0 <= fVar33)) {
    fVar54 = *(float *)(param_2 + 0xc);
    local_7e8 = *(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar54 < 0.0) {
      fVar54 = 0.0;
    }
    fVar8 = *(float *)param_2;
    fVar9 = *(float *)(param_2 + 4);
    fVar10 = *(float *)(param_2 + 8);
    pRVar21 = local_7e0;
    uVar22 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar23 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar24 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar25 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar57._0_4_ = ~uVar22 & *(uint *)(param_2 + 0x10);
    auVar57._4_4_ = ~uVar23 & *(uint *)(param_2 + 0x14);
    auVar57._8_4_ = ~uVar24 & *(uint *)(param_2 + 0x18);
    auVar57._12_4_ = ~uVar25 & *(uint *)(param_2 + 0x1c);
    auVar27._0_4_ = uVar22 & (uint)_LC5;
    auVar27._4_4_ = uVar23 & (uint)_LC5;
    auVar27._8_4_ = uVar24 & (uint)_LC5;
    auVar27._12_4_ = uVar25 & (uint)_LC5;
    auVar27 = auVar27 | auVar57;
    auVar63 = rcpps(auVar57,auVar27);
    fVar38 = auVar63._0_4_;
    fVar42 = auVar63._4_4_;
    fVar44 = auVar63._8_4_;
    fVar38 = (_LC7 - auVar27._0_4_ * fVar38) * fVar38 + fVar38;
    fVar42 = (_LC7 - auVar27._4_4_ * fVar42) * fVar42 + fVar42;
    fVar44 = (_LC7 - auVar27._8_4_ * fVar44) * fVar44 + fVar44;
    uVar11 = (ulong)(fVar38 < 0.0) * 0x10;
    auVar63._4_4_ = fVar33;
    auVar63._0_4_ = fVar33;
    auVar63._8_4_ = fVar33;
    auVar63._12_4_ = fVar33;
    pRVar14 = param_3;
    do {
      uVar22 = _LC9;
      uVar15 = *(ulong *)(pRVar21 + -8);
      pRVar21 = pRVar21 + -8;
      while ((uVar15 & 8) == 0) {
        pfVar17 = (float *)(uVar15 + (ulong)(-(uint)(fVar44 < 0.0) & 0x10) + 0x60);
        pfVar1 = (float *)(uVar15 + 0x20 + uVar11);
        pfVar2 = (float *)(uVar15 + (ulong)(-(uint)(fVar42 < 0.0) & 0x10) + 0x40);
        pfVar3 = (float *)(uVar15 + (-(ulong)(fVar42 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar56._0_4_ = (*pfVar17 - fVar10) * fVar44;
        auVar56._4_4_ = (pfVar17[1] - fVar10) * fVar44;
        auVar56._8_4_ = (pfVar17[2] - fVar10) * fVar44;
        auVar56._12_4_ = (pfVar17[3] - fVar10) * fVar44;
        auVar81._0_4_ = (*pfVar2 - fVar9) * fVar42;
        auVar81._4_4_ = (pfVar2[1] - fVar9) * fVar42;
        auVar81._8_4_ = (pfVar2[2] - fVar9) * fVar42;
        auVar81._12_4_ = (pfVar2[3] - fVar9) * fVar42;
        auVar48._0_4_ = (*pfVar1 - fVar8) * fVar38;
        auVar48._4_4_ = (pfVar1[1] - fVar8) * fVar38;
        auVar48._8_4_ = (pfVar1[2] - fVar8) * fVar38;
        auVar48._12_4_ = (pfVar1[3] - fVar8) * fVar38;
        auVar83._4_4_ = fVar54;
        auVar83._0_4_ = fVar54;
        auVar83._8_4_ = fVar54;
        auVar83._12_4_ = fVar54;
        auVar57 = maxps(auVar56,auVar83);
        auVar27 = maxps(auVar48,auVar81);
        pfVar17 = (float *)(uVar15 + (-(ulong)(fVar44 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar27 = maxps(auVar27,auVar57);
        pfVar1 = (float *)(uVar15 + 0x20 + (uVar11 ^ 0x10));
        auVar82._0_4_ = (*pfVar17 - fVar10) * fVar44;
        auVar82._4_4_ = (pfVar17[1] - fVar10) * fVar44;
        auVar82._8_4_ = (pfVar17[2] - fVar10) * fVar44;
        auVar82._12_4_ = (pfVar17[3] - fVar10) * fVar44;
        auVar58._0_4_ = (*pfVar1 - fVar8) * fVar38;
        auVar58._4_4_ = (pfVar1[1] - fVar8) * fVar38;
        auVar58._8_4_ = (pfVar1[2] - fVar8) * fVar38;
        auVar58._12_4_ = (pfVar1[3] - fVar8) * fVar38;
        auVar83 = minps(auVar82,auVar63);
        auVar7._4_4_ = (pfVar3[1] - fVar9) * fVar42;
        auVar7._0_4_ = (*pfVar3 - fVar9) * fVar42;
        auVar7._8_4_ = (pfVar3[2] - fVar9) * fVar42;
        auVar7._12_4_ = (pfVar3[3] - fVar9) * fVar42;
        auVar57 = minps(auVar58,auVar7);
        auVar57 = minps(auVar57,auVar83);
        auVar49._4_4_ = -(uint)(auVar27._4_4_ <= auVar57._4_4_);
        auVar49._0_4_ = -(uint)(auVar27._0_4_ <= auVar57._0_4_);
        auVar49._8_4_ = -(uint)(auVar27._8_4_ <= auVar57._8_4_);
        auVar49._12_4_ = -(uint)(auVar27._12_4_ <= auVar57._12_4_);
        uVar13 = movmskps((int)pRVar14,auVar49);
        pRVar14 = (RayQueryContext *)CONCAT44((int)((ulong)pRVar14 >> 0x20),uVar13);
        if (pRVar14 == (RayQueryContext *)0x0) goto LAB_00104425;
        uVar16 = uVar15 & 0xfffffffffffffff0;
        lVar18 = 0;
        if (pRVar14 != (RayQueryContext *)0x0) {
          for (; ((ulong)pRVar14 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
          }
        }
        uVar15 = *(ulong *)(uVar16 + lVar18 * 8);
        pRVar19 = (RayQueryContext *)((ulong)(pRVar14 + -1) & (ulong)pRVar14);
        if (pRVar19 != (RayQueryContext *)0x0) {
          *(ulong *)pRVar21 = uVar15;
          pRVar14 = pRVar19 + -1;
          lVar18 = 0;
          if (pRVar19 != (RayQueryContext *)0x0) {
            for (; ((ulong)pRVar19 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
            }
          }
          while( true ) {
            pRVar21 = pRVar21 + 8;
            uVar15 = *(ulong *)(uVar16 + lVar18 * 8);
            pRVar14 = (RayQueryContext *)((ulong)pRVar14 & (ulong)pRVar19);
            if (pRVar14 == (RayQueryContext *)0x0) break;
            *(ulong *)pRVar21 = uVar15;
            pRVar19 = pRVar14 + -1;
            lVar18 = 0;
            if (pRVar14 != (RayQueryContext *)0x0) {
              for (; ((ulong)pRVar14 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
              }
            }
          }
        }
      }
      lVar18 = 0;
      pfVar17 = (float *)(uVar15 & 0xfffffffffffffff0);
      uVar15 = (ulong)((uint)uVar15 & 0xf);
      if (uVar15 != 8) {
        do {
          fVar33 = pfVar17[0x18];
          fVar35 = pfVar17[0x19];
          fVar36 = pfVar17[0x1a];
          fVar37 = pfVar17[0x1b];
          fVar55 = pfVar17[0x20];
          fVar60 = pfVar17[0x21];
          fVar61 = pfVar17[0x22];
          fVar62 = pfVar17[0x23];
          fVar71 = *(float *)param_2;
          fVar53 = *(float *)(param_2 + 4);
          fVar75 = *(float *)(param_2 + 8);
          fVar39 = pfVar17[0x10] * fVar33 - pfVar17[0xc] * pfVar17[0x1c];
          fVar43 = pfVar17[0x11] * fVar35 - pfVar17[0xd] * pfVar17[0x1d];
          fVar45 = pfVar17[0x12] * fVar36 - pfVar17[0xe] * pfVar17[0x1e];
          fVar46 = pfVar17[0x13] * fVar37 - pfVar17[0xf] * pfVar17[0x1f];
          fVar72 = pfVar17[8] - fVar75;
          fVar73 = pfVar17[9] - fVar75;
          fVar74 = pfVar17[10] - fVar75;
          fVar75 = pfVar17[0xb] - fVar75;
          fVar47 = pfVar17[4] - fVar53;
          fVar51 = pfVar17[5] - fVar53;
          fVar52 = pfVar17[6] - fVar53;
          fVar53 = pfVar17[7] - fVar53;
          fVar32 = *(float *)(param_2 + 0x10);
          fVar64 = *(float *)(param_2 + 0x14);
          fVar65 = *(float *)(param_2 + 0x18);
          fVar68 = *pfVar17 - fVar71;
          fVar69 = pfVar17[1] - fVar71;
          fVar70 = pfVar17[2] - fVar71;
          fVar71 = pfVar17[3] - fVar71;
          fVar91 = pfVar17[0xc] * fVar55 - pfVar17[0x14] * fVar33;
          fVar92 = pfVar17[0xd] * fVar60 - pfVar17[0x15] * fVar35;
          fVar93 = pfVar17[0xe] * fVar61 - pfVar17[0x16] * fVar36;
          fVar94 = pfVar17[0xf] * fVar62 - pfVar17[0x17] * fVar37;
          fVar95 = pfVar17[0x1c] * pfVar17[0x14] - pfVar17[0x10] * fVar55;
          fVar96 = pfVar17[0x1d] * pfVar17[0x15] - pfVar17[0x11] * fVar60;
          fVar97 = pfVar17[0x1e] * pfVar17[0x16] - pfVar17[0x12] * fVar61;
          fVar98 = pfVar17[0x1f] * pfVar17[0x17] - pfVar17[0x13] * fVar62;
          fVar87 = fVar68 * fVar64 - fVar47 * fVar32;
          fVar88 = fVar69 * fVar64 - fVar51 * fVar32;
          fVar89 = fVar70 * fVar64 - fVar52 * fVar32;
          fVar90 = fVar71 * fVar64 - fVar53 * fVar32;
          fVar80 = fVar72 * fVar32 - fVar68 * fVar65;
          fVar84 = fVar73 * fVar32 - fVar69 * fVar65;
          fVar85 = fVar74 * fVar32 - fVar70 * fVar65;
          fVar86 = fVar75 * fVar32 - fVar71 * fVar65;
          fVar76 = fVar47 * fVar65 - fVar72 * fVar64;
          fVar77 = fVar51 * fVar65 - fVar73 * fVar64;
          fVar78 = fVar52 * fVar65 - fVar74 * fVar64;
          fVar79 = fVar53 * fVar65 - fVar75 * fVar64;
          fVar26 = fVar64 * fVar91 + fVar65 * fVar39 + fVar32 * fVar95;
          fVar30 = fVar64 * fVar92 + fVar65 * fVar43 + fVar32 * fVar96;
          fVar31 = fVar64 * fVar93 + fVar65 * fVar45 + fVar32 * fVar97;
          fVar32 = fVar64 * fVar94 + fVar65 * fVar46 + fVar32 * fVar98;
          auVar40._0_4_ = uVar22 & (uint)fVar26;
          auVar40._4_4_ = uVar22 & (uint)fVar30;
          auVar40._8_4_ = uVar22 & (uint)fVar31;
          auVar40._12_4_ = uVar22 & (uint)fVar32;
          fVar64 = (float)(_LC3 & (uint)fVar26);
          fVar65 = (float)(_UNK_001151c4 & (uint)fVar30);
          fVar66 = (float)(_UNK_001151c8 & (uint)fVar31);
          fVar67 = (float)(_UNK_001151cc & (uint)fVar32);
          auVar34._0_4_ = pfVar17[0x1c] * fVar80 + fVar55 * fVar87 + fVar33 * fVar76;
          auVar34._4_4_ = pfVar17[0x1d] * fVar84 + fVar60 * fVar88 + fVar35 * fVar77;
          auVar34._8_4_ = pfVar17[0x1e] * fVar85 + fVar61 * fVar89 + fVar36 * fVar78;
          auVar34._12_4_ = pfVar17[0x1f] * fVar86 + fVar62 * fVar90 + fVar37 * fVar79;
          auVar34 = auVar34 ^ auVar40;
          fVar33 = auVar34._0_4_;
          fVar35 = auVar34._4_4_;
          fVar36 = auVar34._8_4_;
          fVar37 = auVar34._12_4_;
          auVar59._0_4_ = pfVar17[0x14] * fVar87 + pfVar17[0x10] * fVar80 + pfVar17[0xc] * fVar76;
          auVar59._4_4_ = pfVar17[0x15] * fVar88 + pfVar17[0x11] * fVar84 + pfVar17[0xd] * fVar77;
          auVar59._8_4_ = pfVar17[0x16] * fVar89 + pfVar17[0x12] * fVar85 + pfVar17[0xe] * fVar78;
          auVar59._12_4_ = pfVar17[0x17] * fVar90 + pfVar17[0x13] * fVar86 + pfVar17[0xf] * fVar79;
          auVar59 = auVar59 ^ auVar40;
          fVar55 = auVar59._0_4_;
          fVar60 = auVar59._4_4_;
          fVar61 = auVar59._8_4_;
          fVar62 = auVar59._12_4_;
          auVar28._0_4_ =
               -(uint)(((fVar26 != 0.0 && 0.0 <= fVar33) && 0.0 <= fVar55) &&
                      fVar55 + fVar33 <= fVar64) & _DAT_00116108;
          auVar28._4_4_ =
               -(uint)(((fVar30 != 0.0 && 0.0 <= fVar35) && 0.0 <= fVar60) &&
                      fVar60 + fVar35 <= fVar65) & uRam000000000011610c;
          auVar28._8_4_ =
               -(uint)(((fVar31 != 0.0 && 0.0 <= fVar36) && 0.0 <= fVar61) &&
                      fVar61 + fVar36 <= fVar66) & uRam0000000000116110;
          auVar28._12_4_ =
               -(uint)(((fVar32 != 0.0 && 0.0 <= fVar37) && 0.0 <= fVar62) &&
                      fVar62 + fVar37 <= fVar67) & uRam0000000000116114;
          uVar23 = movmskps((int)pRVar14,auVar28);
          pRVar14 = (RayQueryContext *)(ulong)uVar23;
          if (uVar23 != 0) {
            auVar50._0_4_ = fVar47 * fVar91 + fVar72 * fVar39 + fVar68 * fVar95;
            auVar50._4_4_ = fVar51 * fVar92 + fVar73 * fVar43 + fVar69 * fVar96;
            auVar50._8_4_ = fVar52 * fVar93 + fVar74 * fVar45 + fVar70 * fVar97;
            auVar50._12_4_ = fVar53 * fVar94 + fVar75 * fVar46 + fVar71 * fVar98;
            auVar50 = auVar50 ^ auVar40;
            fVar71 = *(float *)(param_2 + 0x20);
            fVar75 = auVar50._0_4_;
            fVar32 = auVar50._4_4_;
            fVar26 = auVar50._8_4_;
            fVar30 = auVar50._12_4_;
            fVar53 = *(float *)(param_2 + 0xc);
            auVar41._0_4_ = -(uint)(fVar53 * fVar64 < fVar75 && fVar75 <= fVar71 * fVar64);
            auVar41._4_4_ = -(uint)(fVar53 * fVar65 < fVar32 && fVar32 <= fVar71 * fVar65);
            auVar41._8_4_ = -(uint)(fVar53 * fVar66 < fVar26 && fVar26 <= fVar71 * fVar66);
            auVar41._12_4_ = -(uint)(fVar53 * fVar67 < fVar30 && fVar30 <= fVar71 * fVar67);
            auVar29._0_4_ = auVar28._0_4_ & auVar41._0_4_;
            auVar29._4_4_ = auVar28._4_4_ & auVar41._4_4_;
            auVar29._8_4_ = auVar28._8_4_ & auVar41._8_4_;
            auVar29._12_4_ = auVar28._12_4_ & auVar41._12_4_;
            uVar23 = movmskps(uVar23,auVar29);
            pRVar14 = (RayQueryContext *)(ulong)uVar23;
            if (uVar23 != 0) {
              auVar6._4_4_ = fVar65;
              auVar6._0_4_ = fVar64;
              auVar6._8_4_ = fVar66;
              auVar6._12_4_ = fVar67;
              auVar27 = rcpps(auVar41,auVar6);
              local_960 = (ulong)(int)uVar23;
              lVar4 = *(long *)param_3;
              fVar71 = auVar27._0_4_;
              fVar53 = auVar27._4_4_;
              fVar31 = auVar27._8_4_;
              fVar47 = auVar27._12_4_;
              local_818[0] = fVar95;
              local_818[1] = fVar96;
              local_818[2] = fVar97;
              local_818[3] = fVar98;
              local_808[0] = fVar91;
              local_808[1] = fVar92;
              local_808[2] = fVar93;
              local_808[3] = fVar94;
              local_7f8[0] = fVar39;
              local_7f8[1] = fVar43;
              local_7f8[2] = fVar45;
              local_7f8[3] = fVar46;
              fVar71 = (_LC7 - fVar64 * fVar71) * fVar71 + fVar71;
              fVar53 = (_LC7 - fVar65 * fVar53) * fVar53 + fVar53;
              fVar31 = (_LC7 - fVar66 * fVar31) * fVar31 + fVar31;
              fVar47 = (_LC7 - fVar67 * fVar47) * fVar47 + fVar47;
              local_828[0] = fVar75 * fVar71;
              local_828[1] = fVar32 * fVar53;
              local_828[2] = fVar26 * fVar31;
              local_828[3] = fVar30 * fVar47;
              local_848[0] = fVar33 * fVar71;
              local_848[1] = fVar35 * fVar53;
              local_848[2] = fVar36 * fVar31;
              local_848[3] = fVar37 * fVar47;
              local_838[0] = fVar71 * fVar55;
              local_838[1] = fVar53 * fVar60;
              local_838[2] = fVar31 * fVar61;
              local_838[3] = fVar47 * fVar62;
              do {
                pbVar20 = *(byte **)(param_3 + 0x10);
                uVar16 = 0;
                if (local_960 != 0) {
                  for (; (local_960 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                  }
                }
                fVar33 = pfVar17[uVar16 + 0x24];
                lVar5 = *(long *)(*(long *)(lVar4 + 0x1e0) + (ulong)(uint)fVar33 * 8);
                pcVar12 = *(code **)(pbVar20 + 0x10);
                if ((pcVar12 == (code *)0x0) && (*(long *)(lVar5 + 0x48) == 0)) {
LAB_0010474e:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00104436;
                }
                fStack_8b8 = local_838[uVar16];
                uVar13 = *(undefined4 *)(param_2 + 0x20);
                iStack_8fc = -1;
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                fStack_8b4 = pfVar17[uVar16 + 0x28];
                fStack_8bc = local_848[uVar16];
                piStack_8f8 = &iStack_8fc;
                fStack_8c0 = local_7f8[uVar16];
                fStack_8c4 = local_808[uVar16];
                *(float *)(param_2 + 0x20) = local_828[uVar16];
                fStack_8c8 = local_818[uVar16];
                uStack_8f0 = *(undefined8 *)(lVar5 + 0x18);
                uStack_8e8 = *(undefined8 *)(param_3 + 8);
                puStack_8d8 = &fStack_8c8;
                uStack_8d0 = 1;
                pRStack_8e0 = param_2;
                fStack_8b0 = fVar33;
                if (*(code **)(lVar5 + 0x48) == (code *)0x0) {
LAB_001048ee:
                  if (pcVar12 != (code *)0x0) {
                    if (((*pbVar20 & 2) != 0) || ((*(byte *)(lVar5 + 0x3e) & 0x40) != 0)) {
                      (*pcVar12)(&piStack_8f8);
                    }
                    if (*piStack_8f8 == 0) goto LAB_00104973;
                  }
                  goto LAB_0010474e;
                }
                (**(code **)(lVar5 + 0x48))(&piStack_8f8);
                if (*piStack_8f8 != 0) {
                  pbVar20 = *(byte **)(param_3 + 0x10);
                  pcVar12 = *(code **)(pbVar20 + 0x10);
                  goto LAB_001048ee;
                }
LAB_00104973:
                *(undefined4 *)(param_2 + 0x20) = uVar13;
                local_960 = local_960 ^ 1L << (uVar16 & 0x3f);
              } while (local_960 != 0);
              pRVar14 = (RayQueryContext *)0x0;
            }
          }
          lVar18 = lVar18 + 1;
          pfVar17 = pfVar17 + 0x2c;
        } while (lVar18 != uVar15 - 8);
      }
LAB_00104425:
      pRVar14 = (RayQueryContext *)&local_7e8;
    } while (pRVar21 != pRVar14);
  }
LAB_00104436:
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
  float fVar5;
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
  int iVar16;
  float *pfVar17;
  code *pcVar19;
  float *pfVar20;
  ulong *puVar21;
  undefined4 uVar22;
  float *pfVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  long lVar27;
  long in_FS_OFFSET;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar38;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  float fVar41;
  float fVar42;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  undefined1 auVar45 [16];
  float fVar50;
  float fVar51;
  float fVar57;
  float fVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar56 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  float fVar65;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar68 [16];
  float fVar72;
  float fVar73;
  float fVar78;
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar77 [16];
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
  undefined8 local_a18;
  undefined8 local_a08;
  undefined8 local_9f8;
  int iStack_8fc;
  int *piStack_8f8;
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
  ulong uVar18;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar5 = *(float *)(param_2 + 0x20), 0.0 <= fVar5)) {
    fVar50 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar50 < 0.0) {
      fVar50 = 0.0;
    }
    fVar13 = *(float *)param_2;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_2 + 8);
    uVar28 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar29 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar30 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar74._0_4_ = ~uVar28 & *(uint *)(param_2 + 0x10);
    auVar74._4_4_ = ~uVar29 & *(uint *)(param_2 + 0x14);
    auVar74._8_4_ = ~uVar30 & *(uint *)(param_2 + 0x18);
    auVar74._12_4_ = ~uVar31 & *(uint *)(param_2 + 0x1c);
    auVar34._0_4_ = uVar28 & (uint)_LC5;
    auVar34._4_4_ = uVar29 & (uint)_LC5;
    auVar34._8_4_ = uVar30 & (uint)_LC5;
    auVar34._12_4_ = uVar31 & (uint)_LC5;
    auVar34 = auVar34 | auVar74;
    auVar74 = rcpps(auVar74,auVar34);
    fVar32 = auVar74._0_4_;
    fVar36 = auVar74._4_4_;
    fVar38 = auVar74._8_4_;
    fVar32 = (_LC7 - auVar34._0_4_ * fVar32) * fVar32 + fVar32;
    fVar36 = (_LC7 - auVar34._4_4_ * fVar36) * fVar36 + fVar36;
    fVar38 = (_LC7 - auVar34._8_4_ * fVar38) * fVar38 + fVar38;
    puVar21 = local_7e0;
    do {
      uVar28 = _LC9;
      fVar40 = *(float *)(param_2 + 0x1c);
      uVar18 = puVar21[-1];
      puVar21 = puVar21 + -1;
      while( true ) {
        pfVar20 = (float *)(uVar18 & 0xfffffffffffffff0);
        uVar26 = (ulong)((uint)uVar18 & 0xf);
        if ((uVar18 & 8) != 0) break;
        auVar66._4_4_ = fVar50;
        auVar66._0_4_ = fVar50;
        auVar66._8_4_ = fVar50;
        auVar66._12_4_ = fVar50;
        auVar75._4_4_ = fVar5;
        auVar75._0_4_ = fVar5;
        auVar75._8_4_ = fVar5;
        auVar75._12_4_ = fVar5;
        pfVar1 = (float *)((long)pfVar20 + (ulong)(-(uint)(fVar36 < 0.0) & 0x10) + 0x40);
        pfVar2 = (float *)((long)pfVar20 + (ulong)(-(uint)(fVar38 < 0.0) & 0x10) + 0x60);
        pfVar3 = pfVar20 + (ulong)(fVar32 < 0.0) * 4 + 8;
        pfVar4 = (float *)((long)pfVar20 + (-(ulong)(fVar36 < 0.0) & 0xfffffffffffffff0) + 0x50);
        pfVar23 = (float *)((long)pfVar20 + ((ulong)(fVar32 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar17 = (float *)((long)pfVar20 + (-(ulong)(fVar38 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar43._0_4_ = ((pfVar1[0x18] * fVar40 + *pfVar1) - fVar14) * fVar36;
        auVar43._4_4_ = ((pfVar1[0x19] * fVar40 + pfVar1[1]) - fVar14) * fVar36;
        auVar43._8_4_ = ((pfVar1[0x1a] * fVar40 + pfVar1[2]) - fVar14) * fVar36;
        auVar43._12_4_ = ((pfVar1[0x1b] * fVar40 + pfVar1[3]) - fVar14) * fVar36;
        auVar52._0_4_ = ((pfVar2[0x18] * fVar40 + *pfVar2) - fVar15) * fVar38;
        auVar52._4_4_ = ((pfVar2[0x19] * fVar40 + pfVar2[1]) - fVar15) * fVar38;
        auVar52._8_4_ = ((pfVar2[0x1a] * fVar40 + pfVar2[2]) - fVar15) * fVar38;
        auVar52._12_4_ = ((pfVar2[0x1b] * fVar40 + pfVar2[3]) - fVar15) * fVar38;
        auVar34 = maxps(auVar43,auVar52);
        auVar53._0_4_ = ((pfVar3[0x18] * fVar40 + *pfVar3) - fVar13) * fVar32;
        auVar53._4_4_ = ((pfVar3[0x19] * fVar40 + pfVar3[1]) - fVar13) * fVar32;
        auVar53._8_4_ = ((pfVar3[0x1a] * fVar40 + pfVar3[2]) - fVar13) * fVar32;
        auVar53._12_4_ = ((pfVar3[0x1b] * fVar40 + pfVar3[3]) - fVar13) * fVar32;
        auVar74 = maxps(auVar66,auVar53);
        auVar74 = maxps(auVar74,auVar34);
        auVar54._0_4_ = ((pfVar17[0x18] * fVar40 + *pfVar17) - fVar15) * fVar38;
        auVar54._4_4_ = ((pfVar17[0x19] * fVar40 + pfVar17[1]) - fVar15) * fVar38;
        auVar54._8_4_ = ((pfVar17[0x1a] * fVar40 + pfVar17[2]) - fVar15) * fVar38;
        auVar54._12_4_ = ((pfVar17[0x1b] * fVar40 + pfVar17[3]) - fVar15) * fVar38;
        auVar44._0_4_ = ((pfVar4[0x18] * fVar40 + *pfVar4) - fVar14) * fVar36;
        auVar44._4_4_ = ((pfVar4[0x19] * fVar40 + pfVar4[1]) - fVar14) * fVar36;
        auVar44._8_4_ = ((pfVar4[0x1a] * fVar40 + pfVar4[2]) - fVar14) * fVar36;
        auVar44._12_4_ = ((pfVar4[0x1b] * fVar40 + pfVar4[3]) - fVar14) * fVar36;
        auVar34 = minps(auVar44,auVar54);
        auVar55._0_4_ = ((pfVar23[0x18] * fVar40 + *pfVar23) - fVar13) * fVar32;
        auVar55._4_4_ = ((pfVar23[0x19] * fVar40 + pfVar23[1]) - fVar13) * fVar32;
        auVar55._8_4_ = ((pfVar23[0x1a] * fVar40 + pfVar23[2]) - fVar13) * fVar32;
        auVar55._12_4_ = ((pfVar23[0x1b] * fVar40 + pfVar23[3]) - fVar13) * fVar32;
        auVar76 = minps(auVar75,auVar55);
        auVar34 = minps(auVar76,auVar34);
        bVar8 = auVar74._0_4_ <= auVar34._0_4_;
        bVar9 = auVar74._4_4_ <= auVar34._4_4_;
        bVar10 = auVar74._8_4_ <= auVar34._8_4_;
        bVar11 = auVar74._12_4_ <= auVar34._12_4_;
        auVar67._4_4_ = -(uint)bVar9;
        auVar67._0_4_ = -(uint)bVar8;
        auVar67._8_4_ = -(uint)bVar10;
        auVar67._12_4_ = -(uint)bVar11;
        if (uVar26 == 6) {
          auVar67._0_4_ = -(uint)((pfVar20[0x38] <= fVar40 && fVar40 < pfVar20[0x3c]) && bVar8);
          auVar67._4_4_ = -(uint)((pfVar20[0x39] <= fVar40 && fVar40 < pfVar20[0x3d]) && bVar9);
          auVar67._8_4_ = -(uint)((pfVar20[0x3a] <= fVar40 && fVar40 < pfVar20[0x3e]) && bVar10);
          auVar67._12_4_ = -(uint)((pfVar20[0x3b] <= fVar40 && fVar40 < pfVar20[0x3f]) && bVar11);
        }
        uVar22 = movmskps((int)pfVar23,auVar67);
        uVar26 = CONCAT44((int)((ulong)pfVar23 >> 0x20),uVar22);
        if (uVar26 == 0) goto LAB_00104cf8;
        lVar27 = 0;
        if (uVar26 != 0) {
          for (; (uVar26 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
          }
        }
        uVar18 = *(ulong *)(pfVar20 + lVar27 * 2);
        uVar26 = uVar26 - 1 & uVar26;
        if (uVar26 != 0) {
          *puVar21 = uVar18;
          uVar24 = uVar26 - 1;
          lVar27 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
            }
          }
          while( true ) {
            puVar21 = puVar21 + 1;
            uVar18 = *(ulong *)(pfVar20 + lVar27 * 2);
            uVar24 = uVar24 & uVar26;
            if (uVar24 == 0) break;
            *puVar21 = uVar18;
            uVar26 = uVar24 - 1;
            lVar27 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
              }
            }
          }
        }
      }
      lVar27 = 0;
      if (uVar26 != 8) {
        do {
          fVar88 = pfVar20[0x2c] * fVar40 + pfVar20[8];
          fVar89 = pfVar20[0x2d] * fVar40 + pfVar20[9];
          fVar90 = pfVar20[0x2e] * fVar40 + pfVar20[10];
          fVar91 = pfVar20[0x2f] * fVar40 + pfVar20[0xb];
          fVar42 = *(float *)param_2;
          fVar33 = *(float *)(param_2 + 4);
          fVar37 = *(float *)(param_2 + 8);
          fVar60 = pfVar20[0x28] * fVar40 + pfVar20[4];
          fVar62 = pfVar20[0x29] * fVar40 + pfVar20[5];
          fVar63 = pfVar20[0x2a] * fVar40 + pfVar20[6];
          fVar64 = pfVar20[0x2b] * fVar40 + pfVar20[7];
          fVar84 = pfVar20[0x24] * fVar40 + *pfVar20;
          fVar85 = pfVar20[0x25] * fVar40 + pfVar20[1];
          fVar86 = pfVar20[0x26] * fVar40 + pfVar20[2];
          fVar87 = pfVar20[0x27] * fVar40 + pfVar20[3];
          fVar120 = fVar88 - (pfVar20[0x38] * fVar40 + pfVar20[0x14]);
          fVar121 = fVar89 - (pfVar20[0x39] * fVar40 + pfVar20[0x15]);
          fVar122 = fVar90 - (pfVar20[0x3a] * fVar40 + pfVar20[0x16]);
          fVar123 = fVar91 - (pfVar20[0x3b] * fVar40 + pfVar20[0x17]);
          fVar65 = (pfVar20[0x44] * fVar40 + pfVar20[0x20]) - fVar88;
          fVar69 = (pfVar20[0x45] * fVar40 + pfVar20[0x21]) - fVar89;
          fVar70 = (pfVar20[0x46] * fVar40 + pfVar20[0x22]) - fVar90;
          fVar71 = (pfVar20[0x47] * fVar40 + pfVar20[0x23]) - fVar91;
          fVar51 = (pfVar20[0x40] * fVar40 + pfVar20[0x1c]) - fVar60;
          fVar57 = (pfVar20[0x41] * fVar40 + pfVar20[0x1d]) - fVar62;
          fVar58 = (pfVar20[0x42] * fVar40 + pfVar20[0x1e]) - fVar63;
          fVar59 = (pfVar20[0x43] * fVar40 + pfVar20[0x1f]) - fVar64;
          fVar96 = fVar60 - (pfVar20[0x34] * fVar40 + pfVar20[0x10]);
          fVar97 = fVar62 - (pfVar20[0x35] * fVar40 + pfVar20[0x11]);
          fVar98 = fVar63 - (pfVar20[0x36] * fVar40 + pfVar20[0x12]);
          fVar99 = fVar64 - (pfVar20[0x37] * fVar40 + pfVar20[0x13]);
          fVar92 = fVar84 - (pfVar20[0x30] * fVar40 + pfVar20[0xc]);
          fVar93 = fVar85 - (pfVar20[0x31] * fVar40 + pfVar20[0xd]);
          fVar94 = fVar86 - (pfVar20[0x32] * fVar40 + pfVar20[0xe]);
          fVar95 = fVar87 - (pfVar20[0x33] * fVar40 + pfVar20[0xf]);
          fVar41 = (fVar40 * pfVar20[0x3c] + pfVar20[0x18]) - fVar84;
          fVar46 = (fVar40 * pfVar20[0x3d] + pfVar20[0x19]) - fVar85;
          fVar48 = (fVar40 * pfVar20[0x3e] + pfVar20[0x1a]) - fVar86;
          fVar49 = (fVar40 * pfVar20[0x3f] + pfVar20[0x1b]) - fVar87;
          fVar84 = fVar84 - fVar42;
          fVar85 = fVar85 - fVar42;
          fVar86 = fVar86 - fVar42;
          fVar87 = fVar87 - fVar42;
          fVar72 = fVar96 * fVar41 - fVar92 * fVar51;
          fVar78 = fVar97 * fVar46 - fVar93 * fVar57;
          fVar80 = fVar98 * fVar48 - fVar94 * fVar58;
          fVar82 = fVar99 * fVar49 - fVar95 * fVar59;
          local_a18 = CONCAT44(fVar78,fVar72);
          fVar73 = fVar92 * fVar65 - fVar120 * fVar41;
          fVar79 = fVar93 * fVar69 - fVar121 * fVar46;
          fVar81 = fVar94 * fVar70 - fVar122 * fVar48;
          fVar83 = fVar95 * fVar71 - fVar123 * fVar49;
          local_a08 = CONCAT44(fVar79,fVar73);
          fVar40 = *(float *)(param_2 + 0x10);
          fVar42 = *(float *)(param_2 + 0x14);
          fVar47 = *(float *)(param_2 + 0x18);
          fVar108 = fVar120 * fVar51 - fVar96 * fVar65;
          fVar110 = fVar121 * fVar57 - fVar97 * fVar69;
          fVar112 = fVar122 * fVar58 - fVar98 * fVar70;
          fVar114 = fVar123 * fVar59 - fVar99 * fVar71;
          local_9f8 = CONCAT44(fVar110,fVar108);
          fVar60 = fVar60 - fVar33;
          fVar62 = fVar62 - fVar33;
          fVar63 = fVar63 - fVar33;
          fVar64 = fVar64 - fVar33;
          fVar88 = fVar88 - fVar37;
          fVar89 = fVar89 - fVar37;
          fVar90 = fVar90 - fVar37;
          fVar91 = fVar91 - fVar37;
          fVar116 = fVar84 * fVar42 - fVar60 * fVar40;
          fVar117 = fVar85 * fVar42 - fVar62 * fVar40;
          fVar118 = fVar86 * fVar42 - fVar63 * fVar40;
          fVar119 = fVar87 * fVar42 - fVar64 * fVar40;
          fVar109 = fVar88 * fVar40 - fVar84 * fVar47;
          fVar111 = fVar89 * fVar40 - fVar85 * fVar47;
          fVar113 = fVar90 * fVar40 - fVar86 * fVar47;
          fVar115 = fVar91 * fVar40 - fVar87 * fVar47;
          fVar104 = fVar60 * fVar47 - fVar88 * fVar42;
          fVar105 = fVar62 * fVar47 - fVar89 * fVar42;
          fVar106 = fVar63 * fVar47 - fVar90 * fVar42;
          fVar107 = fVar64 * fVar47 - fVar91 * fVar42;
          fVar33 = fVar42 * fVar73 + fVar47 * fVar72 + fVar40 * fVar108;
          fVar37 = fVar42 * fVar79 + fVar47 * fVar78 + fVar40 * fVar110;
          fVar39 = fVar42 * fVar81 + fVar47 * fVar80 + fVar40 * fVar112;
          fVar40 = fVar42 * fVar83 + fVar47 * fVar82 + fVar40 * fVar114;
          auVar77._0_4_ = uVar28 & (uint)fVar33;
          auVar77._4_4_ = uVar28 & (uint)fVar37;
          auVar77._8_4_ = uVar28 & (uint)fVar39;
          auVar77._12_4_ = uVar28 & (uint)fVar40;
          fVar100 = (float)(_LC3 & (uint)fVar33);
          fVar101 = (float)(_UNK_001151c4 & (uint)fVar37);
          fVar102 = (float)(_UNK_001151c8 & (uint)fVar39);
          fVar103 = (float)(_UNK_001151cc & (uint)fVar40);
          auVar56._0_4_ = fVar51 * fVar109 + fVar65 * fVar116 + fVar41 * fVar104;
          auVar56._4_4_ = fVar57 * fVar111 + fVar69 * fVar117 + fVar46 * fVar105;
          auVar56._8_4_ = fVar58 * fVar113 + fVar70 * fVar118 + fVar48 * fVar106;
          auVar56._12_4_ = fVar59 * fVar115 + fVar71 * fVar119 + fVar49 * fVar107;
          auVar56 = auVar56 ^ auVar77;
          fVar48 = auVar56._0_4_;
          fVar49 = auVar56._4_4_;
          fVar51 = auVar56._8_4_;
          fVar57 = auVar56._12_4_;
          auVar45._0_4_ = fVar120 * fVar116 + fVar96 * fVar109 + fVar92 * fVar104;
          auVar45._4_4_ = fVar121 * fVar117 + fVar97 * fVar111 + fVar93 * fVar105;
          auVar45._8_4_ = fVar122 * fVar118 + fVar98 * fVar113 + fVar94 * fVar106;
          auVar45._12_4_ = fVar123 * fVar119 + fVar99 * fVar115 + fVar95 * fVar107;
          auVar45 = auVar45 ^ auVar77;
          fVar42 = auVar45._0_4_;
          fVar47 = auVar45._4_4_;
          fVar41 = auVar45._8_4_;
          fVar46 = auVar45._12_4_;
          auVar76._0_4_ =
               -(uint)((0.0 <= fVar42 && (0.0 <= fVar48 && fVar33 != 0.0)) &&
                      fVar42 + fVar48 <= fVar100) & _DAT_00116108;
          auVar76._4_4_ =
               -(uint)(((0.0 <= fVar49 && fVar37 != 0.0) && 0.0 <= fVar47) &&
                      fVar47 + fVar49 <= fVar101) & uRam000000000011610c;
          auVar76._8_4_ =
               -(uint)(((fVar39 != 0.0 && 0.0 <= fVar51) && 0.0 <= fVar41) &&
                      fVar41 + fVar51 <= fVar102) & uRam0000000000116110;
          auVar76._12_4_ =
               -(uint)(((0.0 <= fVar57 && fVar40 != 0.0) && 0.0 <= fVar46) &&
                      fVar46 + fVar57 <= fVar103) & uRam0000000000116114;
          uVar22 = (undefined4)(uVar18 >> 0x20);
          iVar16 = movmskps((int)uVar18,auVar76);
          uVar18 = CONCAT44(uVar22,iVar16);
          if (iVar16 != 0) {
            fVar40 = *(float *)(param_2 + 0x20);
            auVar61._0_4_ = fVar60 * fVar73 + fVar88 * fVar72 + fVar84 * fVar108;
            auVar61._4_4_ = fVar62 * fVar79 + fVar89 * fVar78 + fVar85 * fVar110;
            auVar61._8_4_ = fVar63 * fVar81 + fVar90 * fVar80 + fVar86 * fVar112;
            auVar61._12_4_ = fVar64 * fVar83 + fVar91 * fVar82 + fVar87 * fVar114;
            auVar61 = auVar61 ^ auVar77;
            fVar37 = auVar61._0_4_;
            fVar39 = auVar61._4_4_;
            fVar58 = auVar61._8_4_;
            fVar59 = auVar61._12_4_;
            fVar33 = *(float *)(param_2 + 0xc);
            auVar68._0_4_ = -(uint)(fVar33 * fVar100 < fVar37 && fVar37 <= fVar40 * fVar100);
            auVar68._4_4_ = -(uint)(fVar33 * fVar101 < fVar39 && fVar39 <= fVar40 * fVar101);
            auVar68._8_4_ = -(uint)(fVar33 * fVar102 < fVar58 && fVar58 <= fVar40 * fVar102);
            auVar68._12_4_ = -(uint)(fVar33 * fVar103 < fVar59 && fVar59 <= fVar40 * fVar103);
            auVar35._0_4_ = auVar76._0_4_ & auVar68._0_4_;
            auVar35._4_4_ = auVar76._4_4_ & auVar68._4_4_;
            auVar35._8_4_ = auVar76._8_4_ & auVar68._8_4_;
            auVar35._12_4_ = auVar76._12_4_ & auVar68._12_4_;
            iVar16 = movmskps(iVar16,auVar35);
            uVar18 = CONCAT44(uVar22,iVar16);
            if (iVar16 != 0) {
              auVar12._4_4_ = fVar101;
              auVar12._0_4_ = fVar100;
              auVar12._8_4_ = fVar102;
              auVar12._12_4_ = fVar103;
              auVar34 = rcpps(auVar68,auVar12);
              lVar6 = *(long *)param_3;
              local_818 = local_9f8;
              uStack_810 = CONCAT44(fVar114,fVar112);
              fVar40 = auVar34._0_4_;
              fVar33 = auVar34._4_4_;
              fVar60 = auVar34._8_4_;
              fVar62 = auVar34._12_4_;
              local_808 = local_a08;
              uStack_800 = CONCAT44(fVar83,fVar81);
              local_7f8 = local_a18;
              uStack_7f0 = CONCAT44(fVar82,fVar80);
              fVar40 = (_LC7 - fVar100 * fVar40) * fVar40 + fVar40;
              fVar33 = (_LC7 - fVar101 * fVar33) * fVar33 + fVar33;
              fVar60 = (_LC7 - fVar102 * fVar60) * fVar60 + fVar60;
              fVar62 = (_LC7 - fVar103 * fVar62) * fVar62 + fVar62;
              local_828[0] = fVar37 * fVar40;
              local_828[1] = fVar39 * fVar33;
              local_828[2] = fVar58 * fVar60;
              local_828[3] = fVar59 * fVar62;
              local_848[0] = fVar48 * fVar40;
              local_848[1] = fVar49 * fVar33;
              local_848[2] = fVar51 * fVar60;
              local_848[3] = fVar57 * fVar62;
              local_838[0] = fVar40 * fVar42;
              local_838[1] = fVar33 * fVar47;
              local_838[2] = fVar60 * fVar41;
              local_838[3] = fVar62 * fVar46;
              local_a18 = uVar18;
              do {
                pbVar25 = *(byte **)(param_3 + 0x10);
                uVar18 = 0;
                if (local_a18 != 0) {
                  for (; (local_a18 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                  }
                }
                fVar40 = pfVar20[uVar18 + 0x48];
                lVar7 = *(long *)(*(long *)(lVar6 + 0x1e0) + (ulong)(uint)fVar40 * 8);
                pcVar19 = *(code **)(pbVar25 + 0x10);
                if ((pcVar19 == (code *)0x0) && (*(long *)(lVar7 + 0x48) == 0)) {
LAB_001050c3:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00104d09;
                }
                fStack_8b8 = local_838[uVar18];
                uVar22 = *(undefined4 *)(param_2 + 0x20);
                iStack_8fc = -1;
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                fStack_8b4 = pfVar20[uVar18 + 0x4c];
                fStack_8bc = local_848[uVar18];
                piStack_8f8 = &iStack_8fc;
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar18 * 4);
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar18 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar18];
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar18 * 4);
                uStack_8f0 = *(undefined8 *)(lVar7 + 0x18);
                uStack_8e8 = *(undefined8 *)(param_3 + 8);
                puStack_8d8 = &uStack_8c8;
                uStack_8d0 = 1;
                pRStack_8e0 = param_2;
                fStack_8b0 = fVar40;
                if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
LAB_00105279:
                  if (pcVar19 != (code *)0x0) {
                    if (((*pbVar25 & 2) != 0) || ((*(byte *)(lVar7 + 0x3e) & 0x40) != 0)) {
                      (*pcVar19)(&piStack_8f8);
                    }
                    if (*piStack_8f8 == 0) goto LAB_001052f8;
                  }
                  goto LAB_001050c3;
                }
                (**(code **)(lVar7 + 0x48))(&piStack_8f8);
                if (*piStack_8f8 != 0) {
                  pbVar25 = *(byte **)(param_3 + 0x10);
                  pcVar19 = *(code **)(pbVar25 + 0x10);
                  goto LAB_00105279;
                }
LAB_001052f8:
                *(undefined4 *)(param_2 + 0x20) = uVar22;
                local_a18 = local_a18 ^ 1L << (uVar18 & 0x3f);
              } while (local_a18 != 0);
              uVar18 = 0;
            }
          }
          lVar27 = lVar27 + 1;
          pfVar20 = pfVar20 + 0x50;
          if (lVar27 == uVar26 - 8) break;
          fVar40 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_00104cf8:
    } while (puVar21 != &local_7e8);
  }
LAB_00104d09:
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
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  code *pcVar22;
  float *pfVar23;
  ulong uVar24;
  long lVar25;
  long in_FS_OFFSET;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  float fVar48;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar47 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
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
  undefined1 auVar57 [16];
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar70 [16];
  float fVar78;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar79 [16];
  float fVar83;
  float fVar88;
  float fVar89;
  undefined1 auVar84 [16];
  float fVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar91;
  float fVar98;
  float fVar99;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar104 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar128;
  float fVar130;
  undefined1 auVar126 [16];
  float fVar129;
  float fVar131;
  float fVar132;
  undefined1 auVar127 [16];
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar137 [16];
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
  int iStack_8ec;
  int *piStack_8e8;
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
    fVar77 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar77 < 0.0) {
      fVar77 = 0.0;
    }
    fVar11 = *(float *)param_2;
    fVar12 = *(float *)(param_2 + 4);
    fVar13 = *(float *)(param_2 + 8);
    auVar84._4_4_ = fVar77;
    auVar84._0_4_ = fVar77;
    uVar26 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar27 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _UNK_001151d4);
    uVar30 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _UNK_001151d8);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _UNK_001151dc);
    auVar139._4_4_ = _LC7;
    auVar139._0_4_ = _LC7;
    auVar139._8_4_ = _LC7;
    auVar139._12_4_ = _LC7;
    auVar126._0_4_ = uVar26 & (uint)_LC5;
    auVar126._4_4_ = uVar27 & (uint)_UNK_001151d4;
    auVar126._8_4_ = uVar30 & (uint)_UNK_001151d8;
    auVar126._12_4_ = uVar34 & (uint)_UNK_001151dc;
    auVar93._0_4_ = ~uVar26 & *(uint *)(param_2 + 0x10);
    auVar93._4_4_ = ~uVar27 & *(uint *)(param_2 + 0x14);
    auVar93._8_4_ = ~uVar30 & *(uint *)(param_2 + 0x18);
    auVar93._12_4_ = ~uVar34 & *(uint *)(param_2 + 0x1c);
    auVar126 = divps(auVar139,auVar126 | auVar93);
    fVar43 = _LC12 * auVar126._0_4_;
    fVar48 = _LC12 * auVar126._4_4_;
    fVar50 = _LC12 * auVar126._8_4_;
    fVar124 = auVar126._0_4_ * _LC14;
    fVar128 = auVar126._4_4_ * _LC14;
    fVar130 = auVar126._8_4_ * _LC14;
    uVar17 = (ulong)(fVar43 < 0.0) * 0x10;
    uVar24 = (ulong)(-(uint)(fVar48 < 0.0) & 0x10) + 0x20;
    auVar84._8_4_ = fVar77;
    auVar84._12_4_ = fVar77;
    puVar18 = local_7e0;
    do {
      uVar19 = puVar18[-1];
      puVar21 = puVar18 + -1;
      while ((uVar19 & 8) == 0) {
        pfVar23 = (float *)(uVar19 + (ulong)(-(uint)(fVar50 < 0.0) & 0x10) + 0x60);
        pfVar1 = (float *)(uVar19 + 0x20 + uVar17);
        pfVar2 = (float *)(uVar19 + 0x20 + uVar24);
        pfVar3 = (float *)(uVar19 + (-(ulong)(fVar48 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar92._0_4_ = (*pfVar23 - fVar13) * fVar50;
        auVar92._4_4_ = (pfVar23[1] - fVar13) * fVar50;
        auVar92._8_4_ = (pfVar23[2] - fVar13) * fVar50;
        auVar92._12_4_ = (pfVar23[3] - fVar13) * fVar50;
        auVar137._0_4_ = (*pfVar2 - fVar12) * fVar48;
        auVar137._4_4_ = (pfVar2[1] - fVar12) * fVar48;
        auVar137._8_4_ = (pfVar2[2] - fVar12) * fVar48;
        auVar137._12_4_ = (pfVar2[3] - fVar12) * fVar48;
        auVar45._0_4_ = (*pfVar1 - fVar11) * fVar43;
        auVar45._4_4_ = (pfVar1[1] - fVar11) * fVar43;
        auVar45._8_4_ = (pfVar1[2] - fVar11) * fVar43;
        auVar45._12_4_ = (pfVar1[3] - fVar11) * fVar43;
        auVar93 = maxps(auVar92,auVar84);
        auVar126 = maxps(auVar45,auVar137);
        pfVar23 = (float *)(uVar19 + (-(ulong)(fVar50 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar126 = maxps(auVar126,auVar93);
        pfVar1 = (float *)(uVar19 + 0x20 + (uVar17 ^ 0x10));
        auVar138._0_4_ = (*pfVar23 - fVar13) * fVar130;
        auVar138._4_4_ = (pfVar23[1] - fVar13) * fVar130;
        auVar138._8_4_ = (pfVar23[2] - fVar13) * fVar130;
        auVar138._12_4_ = (pfVar23[3] - fVar13) * fVar130;
        auVar94._0_4_ = (*pfVar1 - fVar11) * fVar124;
        auVar94._4_4_ = (pfVar1[1] - fVar11) * fVar124;
        auVar94._8_4_ = (pfVar1[2] - fVar11) * fVar124;
        auVar94._12_4_ = (pfVar1[3] - fVar11) * fVar124;
        auVar9._4_4_ = fVar4;
        auVar9._0_4_ = fVar4;
        auVar9._8_4_ = fVar4;
        auVar9._12_4_ = fVar4;
        auVar139 = minps(auVar138,auVar9);
        auVar10._4_4_ = (pfVar3[1] - fVar12) * fVar128;
        auVar10._0_4_ = (*pfVar3 - fVar12) * fVar128;
        auVar10._8_4_ = (pfVar3[2] - fVar12) * fVar128;
        auVar10._12_4_ = (pfVar3[3] - fVar12) * fVar128;
        auVar93 = minps(auVar94,auVar10);
        auVar93 = minps(auVar93,auVar139);
        auVar46._4_4_ = -(uint)(auVar126._4_4_ <= auVar93._4_4_);
        auVar46._0_4_ = -(uint)(auVar126._0_4_ <= auVar93._0_4_);
        auVar46._8_4_ = -(uint)(auVar126._8_4_ <= auVar93._8_4_);
        auVar46._12_4_ = -(uint)(auVar126._12_4_ <= auVar93._12_4_);
        uVar16 = movmskps((int)puVar18,auVar46);
        puVar18 = (ulong *)CONCAT44((int)((ulong)puVar18 >> 0x20),uVar16);
        if (puVar18 == (ulong *)0x0) goto LAB_00105e18;
        param_1 = (Intersectors *)(uVar19 & 0xfffffffffffffff0);
        lVar25 = 0;
        if (puVar18 != (ulong *)0x0) {
          for (; ((ulong)puVar18 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
          }
        }
        uVar19 = *(ulong *)(param_1 + lVar25 * 8);
        uVar20 = (long)puVar18 - 1U & (ulong)puVar18;
        if (uVar20 != 0) {
          *puVar21 = uVar19;
          puVar18 = (ulong *)(uVar20 - 1);
          lVar25 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
            }
          }
          while( true ) {
            puVar21 = puVar21 + 1;
            uVar19 = *(ulong *)(param_1 + lVar25 * 8);
            puVar18 = (ulong *)((ulong)puVar18 & uVar20);
            if (puVar18 == (ulong *)0x0) break;
            *puVar21 = uVar19;
            uVar20 = (long)puVar18 - 1;
            lVar25 = 0;
            if (puVar18 != (ulong *)0x0) {
              for (; ((ulong)puVar18 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
              }
            }
          }
        }
      }
      pfVar23 = (float *)(uVar19 & 0xfffffffffffffff0);
      uVar19 = (ulong)((uint)uVar19 & 0xf);
      if (uVar19 != 8) {
        lVar25 = 0;
        uVar20 = uVar24;
        do {
          fVar77 = *(float *)(param_2 + 0x10);
          fVar56 = *(float *)(param_2 + 0x14);
          fVar61 = *(float *)(param_2 + 0x18);
          fVar52 = *(float *)param_2;
          fVar90 = *(float *)(param_2 + 4);
          fVar65 = *(float *)(param_2 + 8);
          fVar114 = pfVar23[0x10] - fVar90;
          fVar115 = pfVar23[0x11] - fVar90;
          fVar116 = pfVar23[0x12] - fVar90;
          fVar117 = pfVar23[0x13] - fVar90;
          fVar101 = pfVar23[4] - fVar90;
          fVar105 = pfVar23[5] - fVar90;
          fVar108 = pfVar23[6] - fVar90;
          fVar111 = pfVar23[7] - fVar90;
          fVar120 = pfVar23[0x14] - fVar65;
          fVar121 = pfVar23[0x15] - fVar65;
          fVar122 = pfVar23[0x16] - fVar65;
          fVar123 = pfVar23[0x17] - fVar65;
          fVar78 = pfVar23[0x20] - fVar65;
          fVar80 = pfVar23[0x21] - fVar65;
          fVar81 = pfVar23[0x22] - fVar65;
          fVar82 = pfVar23[0x23] - fVar65;
          fVar144 = *pfVar23 - fVar52;
          fVar145 = pfVar23[1] - fVar52;
          fVar146 = pfVar23[2] - fVar52;
          fVar147 = pfVar23[3] - fVar52;
          fVar53 = pfVar23[8] - fVar65;
          fVar58 = pfVar23[9] - fVar65;
          fVar62 = pfVar23[10] - fVar65;
          fVar65 = pfVar23[0xb] - fVar65;
          fVar140 = pfVar23[0xc] - fVar52;
          fVar141 = pfVar23[0xd] - fVar52;
          fVar142 = pfVar23[0xe] - fVar52;
          fVar143 = pfVar23[0xf] - fVar52;
          fVar83 = pfVar23[0x1c] - fVar90;
          fVar88 = pfVar23[0x1d] - fVar90;
          fVar89 = pfVar23[0x1e] - fVar90;
          fVar90 = pfVar23[0x1f] - fVar90;
          fVar44 = pfVar23[0x18] - fVar52;
          fVar49 = pfVar23[0x19] - fVar52;
          fVar51 = pfVar23[0x1a] - fVar52;
          fVar52 = pfVar23[0x1b] - fVar52;
          fVar68 = fVar78 - fVar53;
          fVar71 = fVar80 - fVar58;
          fVar73 = fVar81 - fVar62;
          fVar75 = fVar82 - fVar65;
          fVar133 = fVar114 - fVar83;
          fVar134 = fVar115 - fVar88;
          fVar135 = fVar116 - fVar89;
          fVar136 = fVar117 - fVar90;
          fVar54 = fVar83 - fVar101;
          fVar59 = fVar88 - fVar105;
          fVar63 = fVar89 - fVar108;
          fVar66 = fVar90 - fVar111;
          fVar125 = fVar44 - fVar144;
          fVar129 = fVar49 - fVar145;
          fVar131 = fVar51 - fVar146;
          fVar132 = fVar52 - fVar147;
          fVar102 = fVar120 - fVar78;
          fVar106 = fVar121 - fVar80;
          fVar109 = fVar122 - fVar81;
          fVar112 = fVar123 - fVar82;
          fVar69 = fVar101 - fVar114;
          fVar72 = fVar105 - fVar115;
          fVar74 = fVar108 - fVar116;
          fVar76 = fVar111 - fVar117;
          fVar55 = fVar53 - fVar120;
          fVar60 = fVar58 - fVar121;
          fVar64 = fVar62 - fVar122;
          fVar67 = fVar65 - fVar123;
          fVar103 = fVar140 - fVar44;
          fVar107 = fVar141 - fVar49;
          fVar110 = fVar142 - fVar51;
          fVar113 = fVar143 - fVar52;
          auVar118._0_4_ = fVar144 - fVar140;
          auVar118._4_4_ = fVar145 - fVar141;
          auVar118._8_4_ = fVar146 - fVar142;
          auVar118._12_4_ = fVar147 - fVar143;
          fVar38 = ((fVar144 + fVar44) * fVar68 - fVar125 * (fVar53 + fVar78)) * fVar56 +
                   (fVar125 * (fVar101 + fVar83) - fVar54 * (fVar144 + fVar44)) * fVar61 +
                   ((fVar53 + fVar78) * fVar54 - (fVar101 + fVar83) * fVar68) * fVar77;
          fVar40 = ((fVar145 + fVar49) * fVar71 - fVar129 * (fVar58 + fVar80)) * fVar56 +
                   (fVar129 * (fVar105 + fVar88) - fVar59 * (fVar145 + fVar49)) * fVar61 +
                   ((fVar58 + fVar80) * fVar59 - (fVar105 + fVar88) * fVar71) * fVar77;
          fVar41 = ((fVar146 + fVar51) * fVar73 - fVar131 * (fVar62 + fVar81)) * fVar56 +
                   (fVar131 * (fVar108 + fVar89) - fVar63 * (fVar146 + fVar51)) * fVar61 +
                   ((fVar62 + fVar81) * fVar63 - (fVar108 + fVar89) * fVar73) * fVar77;
          fVar42 = ((fVar147 + fVar52) * fVar75 - fVar132 * (fVar65 + fVar82)) * fVar56 +
                   (fVar132 * (fVar111 + fVar90) - fVar66 * (fVar147 + fVar52)) * fVar61 +
                   ((fVar65 + fVar82) * fVar66 - (fVar111 + fVar90) * fVar75) * fVar77;
          fVar91 = ((fVar144 + fVar140) * fVar55 - auVar118._0_4_ * (fVar53 + fVar120)) * fVar56 +
                   (auVar118._0_4_ * (fVar101 + fVar114) - fVar69 * (fVar144 + fVar140)) * fVar61 +
                   ((fVar53 + fVar120) * fVar69 - (fVar101 + fVar114) * fVar55) * fVar77;
          fVar98 = ((fVar145 + fVar141) * fVar60 - auVar118._4_4_ * (fVar58 + fVar121)) * fVar56 +
                   (auVar118._4_4_ * (fVar105 + fVar115) - fVar72 * (fVar145 + fVar141)) * fVar61 +
                   ((fVar58 + fVar121) * fVar72 - (fVar105 + fVar115) * fVar60) * fVar77;
          auVar127._4_4_ = fVar98;
          auVar127._0_4_ = fVar91;
          fVar99 = ((fVar146 + fVar142) * fVar64 - auVar118._8_4_ * (fVar62 + fVar122)) * fVar56 +
                   (auVar118._8_4_ * (fVar108 + fVar116) - fVar74 * (fVar146 + fVar142)) * fVar61 +
                   ((fVar62 + fVar122) * fVar74 - (fVar108 + fVar116) * fVar64) * fVar77;
          fVar100 = ((fVar147 + fVar143) * fVar67 - auVar118._12_4_ * (fVar65 + fVar123)) * fVar56 +
                    (auVar118._12_4_ * (fVar111 + fVar117) - fVar76 * (fVar147 + fVar143)) * fVar61
                    + ((fVar65 + fVar123) * fVar76 - (fVar111 + fVar117) * fVar67) * fVar77;
          auVar127._8_4_ = fVar99;
          auVar127._12_4_ = fVar100;
          auVar95._8_4_ = fVar41;
          auVar95._0_8_ = CONCAT44(fVar40,fVar38);
          auVar95._12_4_ = fVar42;
          auVar93 = maxps(auVar95,auVar127);
          auVar85._8_4_ = fVar41;
          auVar85._0_8_ = CONCAT44(fVar40,fVar38);
          auVar85._12_4_ = fVar42;
          auVar126 = minps(auVar85,auVar127);
          auVar79._0_4_ =
               ((fVar120 + fVar78) * fVar133 - (fVar83 + fVar114) * fVar102) * fVar77 +
               ((fVar44 + fVar140) * fVar102 - fVar103 * (fVar120 + fVar78)) * fVar56 +
               (fVar103 * (fVar83 + fVar114) - fVar133 * (fVar44 + fVar140)) * fVar61;
          auVar79._4_4_ =
               ((fVar121 + fVar80) * fVar134 - (fVar88 + fVar115) * fVar106) * fVar77 +
               ((fVar49 + fVar141) * fVar106 - fVar107 * (fVar121 + fVar80)) * fVar56 +
               (fVar107 * (fVar88 + fVar115) - fVar134 * (fVar49 + fVar141)) * fVar61;
          auVar79._8_4_ =
               ((fVar122 + fVar81) * fVar135 - (fVar89 + fVar116) * fVar109) * fVar77 +
               ((fVar51 + fVar142) * fVar109 - fVar110 * (fVar122 + fVar81)) * fVar56 +
               (fVar110 * (fVar89 + fVar116) - fVar135 * (fVar51 + fVar142)) * fVar61;
          auVar79._12_4_ =
               ((fVar123 + fVar82) * fVar136 - (fVar90 + fVar117) * fVar112) * fVar77 +
               ((fVar52 + fVar143) * fVar112 - fVar113 * (fVar123 + fVar82)) * fVar56 +
               (fVar113 * (fVar90 + fVar117) - fVar136 * (fVar52 + fVar143)) * fVar61;
          fVar51 = fVar38 + fVar91 + auVar79._0_4_;
          fVar78 = fVar40 + fVar98 + auVar79._4_4_;
          fVar80 = fVar41 + fVar99 + auVar79._8_4_;
          fVar81 = fVar42 + fVar100 + auVar79._12_4_;
          auVar93 = maxps(auVar93,auVar79);
          auVar126 = minps(auVar126,auVar79);
          fVar52 = __LC15 * (float)(_LC3 & (uint)fVar51);
          fVar90 = _UNK_00115204 * (float)(_UNK_001151c4 & (uint)fVar78);
          fVar44 = _UNK_00115208 * (float)(_UNK_001151c8 & (uint)fVar80);
          fVar49 = _UNK_0011520c * (float)(_UNK_001151cc & (uint)fVar81);
          auVar96._4_4_ = -(uint)(auVar93._4_4_ <= fVar90);
          auVar96._0_4_ = -(uint)(auVar93._0_4_ <= fVar52);
          auVar96._8_4_ = -(uint)(auVar93._8_4_ <= fVar44);
          auVar96._12_4_ = -(uint)(auVar93._12_4_ <= fVar49);
          auVar86._4_4_ = -(uint)((float)((uint)fVar90 ^ _UNK_001151f4) <= auVar126._4_4_);
          auVar86._0_4_ = -(uint)((float)((uint)fVar52 ^ _LC9) <= auVar126._0_4_);
          auVar86._8_4_ = -(uint)((float)((uint)fVar44 ^ _UNK_001151f8) <= auVar126._8_4_);
          auVar86._12_4_ = -(uint)((float)((uint)fVar49 ^ _UNK_001151fc) <= auVar126._12_4_);
          auVar86 = auVar86 | auVar96;
          auVar87._0_4_ = auVar86._0_4_ & _DAT_00116108;
          auVar87._4_4_ = auVar86._4_4_ & uRam000000000011610c;
          auVar87._8_4_ = auVar86._8_4_ & uRam0000000000116110;
          auVar87._12_4_ = auVar86._12_4_ & uRam0000000000116114;
          uVar26 = movmskps((int)param_1,auVar87);
          param_1 = (Intersectors *)(ulong)uVar26;
          if (uVar26 != 0) {
            uVar26 = -(uint)((float)(_LC3 & (uint)(fVar68 * fVar69)) <
                            (float)(_LC3 & (uint)(fVar133 * fVar55)));
            uVar34 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar71 * fVar72)) <
                            (float)(_UNK_001151c4 & (uint)(fVar134 * fVar60)));
            uVar31 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar73 * fVar74)) <
                            (float)(_UNK_001151c8 & (uint)(fVar135 * fVar64)));
            uVar35 = -(uint)((float)(_UNK_001151cc & (uint)(fVar75 * fVar76)) <
                            (float)(_UNK_001151cc & (uint)(fVar136 * fVar67)));
            uVar27 = -(uint)((float)(_LC3 & (uint)(fVar125 * fVar55)) <
                            (float)(_LC3 & (uint)(fVar102 * auVar118._0_4_)));
            uVar28 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar129 * fVar60)) <
                            (float)(_UNK_001151c4 & (uint)(fVar106 * auVar118._4_4_)));
            uVar32 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar131 * fVar64)) <
                            (float)(_UNK_001151c8 & (uint)(fVar109 * auVar118._8_4_)));
            uVar36 = -(uint)((float)(_UNK_001151cc & (uint)(fVar132 * fVar67)) <
                            (float)(_UNK_001151cc & (uint)(fVar112 * auVar118._12_4_)));
            uVar30 = -(uint)((float)(_LC3 & (uint)(fVar54 * auVar118._0_4_)) <
                            (float)(_LC3 & (uint)(fVar103 * fVar69)));
            uVar29 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar59 * auVar118._4_4_)) <
                            (float)(_UNK_001151c4 & (uint)(fVar107 * fVar72)));
            uVar33 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar63 * auVar118._8_4_)) <
                            (float)(_UNK_001151c8 & (uint)(fVar110 * fVar74)));
            uVar37 = -(uint)((float)(_UNK_001151cc & (uint)(fVar66 * auVar118._12_4_)) <
                            (float)(_UNK_001151cc & (uint)(fVar113 * fVar76)));
            fVar49 = (float)(uVar30 & (uint)(fVar125 * fVar69 - fVar54 * auVar118._0_4_) |
                            ~uVar30 & (uint)(fVar133 * auVar118._0_4_ - fVar103 * fVar69));
            fVar82 = (float)(uVar29 & (uint)(fVar129 * fVar72 - fVar59 * auVar118._4_4_) |
                            ~uVar29 & (uint)(fVar134 * auVar118._4_4_ - fVar107 * fVar72));
            fVar83 = (float)(uVar33 & (uint)(fVar131 * fVar74 - fVar63 * auVar118._8_4_) |
                            ~uVar33 & (uint)(fVar135 * auVar118._8_4_ - fVar110 * fVar74));
            fVar88 = (float)(uVar37 & (uint)(fVar132 * fVar76 - fVar66 * auVar118._12_4_) |
                            ~uVar37 & (uint)(fVar136 * auVar118._12_4_ - fVar113 * fVar76));
            auVar104._0_4_ = ~uVar26 & (uint)(fVar69 * fVar102 - fVar133 * fVar55);
            auVar104._4_4_ = ~uVar34 & (uint)(fVar72 * fVar106 - fVar134 * fVar60);
            auVar104._8_4_ = ~uVar31 & (uint)(fVar74 * fVar109 - fVar135 * fVar64);
            auVar104._12_4_ = ~uVar35 & (uint)(fVar76 * fVar112 - fVar136 * fVar67);
            fVar89 = (float)(uVar27 & (uint)(fVar68 * auVar118._0_4_ - fVar125 * fVar55) |
                            ~uVar27 & (uint)(fVar103 * fVar55 - fVar102 * auVar118._0_4_));
            fVar102 = (float)(uVar28 & (uint)(fVar71 * auVar118._4_4_ - fVar129 * fVar60) |
                             ~uVar28 & (uint)(fVar107 * fVar60 - fVar106 * auVar118._4_4_));
            fVar103 = (float)(uVar32 & (uint)(fVar73 * auVar118._8_4_ - fVar131 * fVar64) |
                             ~uVar32 & (uint)(fVar110 * fVar64 - fVar109 * auVar118._8_4_));
            fVar106 = (float)(uVar36 & (uint)(fVar75 * auVar118._12_4_ - fVar132 * fVar67) |
                             ~uVar36 & (uint)(fVar113 * fVar67 - fVar112 * auVar118._12_4_));
            auVar97._0_4_ = uVar26 & (uint)(fVar54 * fVar55 - fVar68 * fVar69);
            auVar97._4_4_ = uVar34 & (uint)(fVar59 * fVar60 - fVar71 * fVar72);
            auVar97._8_4_ = uVar31 & (uint)(fVar63 * fVar64 - fVar73 * fVar74);
            auVar97._12_4_ = uVar35 & (uint)(fVar66 * fVar67 - fVar75 * fVar76);
            auVar97 = auVar97 | auVar104;
            fVar52 = fVar56 * fVar89 + fVar61 * fVar49 + fVar77 * auVar97._0_4_;
            fVar90 = fVar56 * fVar102 + fVar61 * fVar82 + fVar77 * auVar97._4_4_;
            fVar44 = fVar56 * fVar103 + fVar61 * fVar83 + fVar77 * auVar97._8_4_;
            fVar77 = fVar56 * fVar106 + fVar61 * fVar88 + fVar77 * auVar97._12_4_;
            auVar70._0_4_ = fVar52 + fVar52;
            auVar70._4_4_ = fVar90 + fVar90;
            auVar70._8_4_ = fVar44 + fVar44;
            auVar70._12_4_ = fVar77 + fVar77;
            auVar126 = rcpps(auVar118,auVar70);
            fVar44 = auVar126._0_4_;
            fVar54 = auVar126._4_4_;
            fVar55 = auVar126._8_4_;
            fVar59 = auVar126._12_4_;
            fVar56 = fVar101 * fVar89 + fVar53 * fVar49 + fVar144 * auVar97._0_4_;
            fVar61 = fVar105 * fVar102 + fVar58 * fVar82 + fVar145 * auVar97._4_4_;
            fVar52 = fVar108 * fVar103 + fVar62 * fVar83 + fVar146 * auVar97._8_4_;
            fVar90 = fVar111 * fVar106 + fVar65 * fVar88 + fVar147 * auVar97._12_4_;
            fVar77 = *(float *)(param_2 + 0x20);
            auVar57._0_4_ = (fVar56 + fVar56) * ((_LC7 - auVar70._0_4_ * fVar44) * fVar44 + fVar44);
            auVar57._4_4_ = (fVar61 + fVar61) * ((_LC7 - auVar70._4_4_ * fVar54) * fVar54 + fVar54);
            auVar57._8_4_ = (fVar52 + fVar52) * ((_LC7 - auVar70._8_4_ * fVar55) * fVar55 + fVar55);
            auVar57._12_4_ =
                 (fVar90 + fVar90) * ((_LC7 - auVar70._12_4_ * fVar59) * fVar59 + fVar59);
            fVar56 = *(float *)(param_2 + 0xc);
            auVar119._0_4_ =
                 -(uint)(auVar57._0_4_ <= fVar77 && fVar56 <= auVar57._0_4_) & auVar87._0_4_ &
                 -(uint)(auVar70._0_4_ != 0.0);
            auVar119._4_4_ =
                 -(uint)(auVar57._4_4_ <= fVar77 && fVar56 <= auVar57._4_4_) & auVar87._4_4_ &
                 -(uint)(auVar70._4_4_ != 0.0);
            auVar119._8_4_ =
                 -(uint)(auVar57._8_4_ <= fVar77 && fVar56 <= auVar57._8_4_) & auVar87._8_4_ &
                 -(uint)(auVar70._8_4_ != 0.0);
            auVar119._12_4_ =
                 -(uint)(auVar57._12_4_ <= fVar77 && fVar56 <= auVar57._12_4_) & auVar87._12_4_ &
                 -(uint)(auVar70._12_4_ != 0.0);
            uVar26 = movmskps((int)uVar20,auVar119);
            uVar20 = (ulong)uVar26;
            if (uVar26 != 0) {
              lVar5 = *(long *)param_3;
              local_828 = auVar57;
              auVar8._4_4_ = fVar78;
              auVar8._0_4_ = fVar51;
              auVar8._8_4_ = fVar80;
              auVar8._12_4_ = fVar81;
              auVar126 = rcpps(auVar57,auVar8);
              local_808[0] = fVar89;
              local_808[1] = fVar102;
              local_808[2] = fVar103;
              local_808[3] = fVar106;
              local_818 = auVar97;
              fVar77 = auVar126._0_4_;
              fVar56 = auVar126._4_4_;
              fVar61 = auVar126._8_4_;
              fVar52 = auVar126._12_4_;
              local_7f8[0] = fVar49;
              local_7f8[1] = fVar82;
              local_7f8[2] = fVar83;
              local_7f8[3] = fVar88;
              fVar77 = (float)(~-(uint)((float)(_LC3 & (uint)fVar51) < _LC5) &
                              (uint)((_LC7 - fVar51 * fVar77) * fVar77 + fVar77));
              fVar56 = (float)(~-(uint)((float)(_UNK_001151c4 & (uint)fVar78) < _UNK_001151d4) &
                              (uint)((_LC7 - fVar78 * fVar56) * fVar56 + fVar56));
              fVar61 = (float)(~-(uint)((float)(_UNK_001151c8 & (uint)fVar80) < _UNK_001151d8) &
                              (uint)((_LC7 - fVar80 * fVar61) * fVar61 + fVar61));
              fVar52 = (float)(~-(uint)((float)(_UNK_001151cc & (uint)fVar81) < _UNK_001151dc) &
                              (uint)((_LC7 - fVar81 * fVar52) * fVar52 + fVar52));
              auVar39._0_4_ = fVar38 * fVar77;
              auVar39._4_4_ = fVar40 * fVar56;
              auVar39._8_4_ = fVar41 * fVar61;
              auVar39._12_4_ = fVar42 * fVar52;
              auVar47._0_4_ = fVar77 * fVar91;
              auVar47._4_4_ = fVar56 * fVar98;
              auVar47._8_4_ = fVar61 * fVar99;
              auVar47._12_4_ = fVar52 * fVar100;
              auVar14._4_12_ = _UNK_001151e4;
              auVar14._0_4_ = _LC7;
              local_848 = minps(auVar39,auVar14);
              auVar15._4_12_ = _UNK_001151e4;
              auVar15._0_4_ = _LC7;
              local_838 = minps(auVar47,auVar15);
              do {
                param_1 = *(Intersectors **)(param_3 + 0x10);
                uVar7 = 0;
                if (uVar20 != 0) {
                  for (; (uVar20 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                  }
                }
                fVar77 = pfVar23[uVar7 + 0x24];
                lVar6 = *(long *)(*(long *)(lVar5 + 0x1e0) + (ulong)(uint)fVar77 * 8);
                pcVar22 = *(code **)(param_1 + 0x10);
                if ((pcVar22 == (code *)0x0) && (*(long *)(lVar6 + 0x48) == 0)) {
LAB_00105b76:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00105b7e;
                }
                uStack_8a8 = *(undefined4 *)(local_838 + uVar7 * 4);
                fStack_8b0 = local_7f8[uVar7];
                iStack_8ec = -1;
                uStack_89c = **(undefined4 **)(param_3 + 8);
                fStack_8a4 = pfVar23[uVar7 + 0x28];
                uStack_8ac = *(undefined4 *)(local_848 + uVar7 * 4);
                fStack_8b4 = local_808[uVar7];
                piStack_8e8 = &iStack_8ec;
                fStack_8b8 = local_808[uVar7 - 4];
                uVar16 = *(undefined4 *)(param_2 + 0x20);
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_828 + uVar7 * 4);
                uStack_8e0 = *(undefined8 *)(lVar6 + 0x18);
                uStack_8d8 = *(undefined8 *)(param_3 + 8);
                puStack_8c8 = &fStack_8b8;
                uStack_8c0 = 1;
                pRStack_8d0 = param_2;
                fStack_8a0 = fVar77;
                if (*(code **)(lVar6 + 0x48) == (code *)0x0) {
LAB_00105d03:
                  if (pcVar22 != (code *)0x0) {
                    if ((((byte)*param_1 & 2) != 0) || ((*(byte *)(lVar6 + 0x3e) & 0x40) != 0)) {
                      param_1 = (Intersectors *)&piStack_8e8;
                      (*pcVar22)();
                    }
                    if (*piStack_8e8 == 0) goto LAB_00105d63;
                  }
                  goto LAB_00105b76;
                }
                param_1 = (Intersectors *)&piStack_8e8;
                (**(code **)(lVar6 + 0x48))();
                if (*piStack_8e8 != 0) {
                  param_1 = *(Intersectors **)(param_3 + 0x10);
                  pcVar22 = *(code **)(param_1 + 0x10);
                  goto LAB_00105d03;
                }
LAB_00105d63:
                *(undefined4 *)(param_2 + 0x20) = uVar16;
                uVar20 = uVar20 ^ 1L << (uVar7 & 0x3f);
              } while (uVar20 != 0);
              uVar20 = 0;
            }
          }
          lVar25 = lVar25 + 1;
          pfVar23 = pfVar23 + 0x2c;
        } while (lVar25 != uVar19 - 8);
      }
LAB_00105e18:
      puVar18 = puVar21;
    } while (puVar21 != &local_7e8);
  }
LAB_00105b7e:
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
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong *puVar21;
  float *pfVar22;
  code *pcVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
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
  float fVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar57 [16];
  float fVar67;
  float fVar68;
  float fVar72;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar75;
  float fVar76;
  undefined1 auVar71 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar85;
  float fVar91;
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
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
  undefined1 auVar84 [16];
  float fVar102;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar109;
  float fVar117;
  float fVar118;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar119;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
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
  float fVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  int iStack_8ec;
  int *piStack_8e8;
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
  ulong local_7e8;
  ulong local_7e0 [244];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(*(long *)param_1 + 0x70) != 8) &&
     (fVar4 = *(float *)(param_2 + 0x20), 0.0 <= fVar4)) {
    fVar54 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar54 < 0.0) {
      fVar54 = 0.0;
    }
    fVar16 = *(float *)param_2;
    fVar17 = *(float *)(param_2 + 4);
    fVar18 = *(float *)(param_2 + 8);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _UNK_001151d4);
    uVar38 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _UNK_001151d8);
    uVar42 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _UNK_001151dc);
    auVar83._0_4_ = uVar34 & (uint)_LC5;
    auVar83._4_4_ = uVar35 & (uint)_UNK_001151d4;
    auVar83._8_4_ = uVar38 & (uint)_UNK_001151d8;
    auVar83._12_4_ = uVar42 & (uint)_UNK_001151dc;
    auVar143._0_4_ = ~uVar34 & *(uint *)(param_2 + 0x10);
    auVar143._4_4_ = ~uVar35 & *(uint *)(param_2 + 0x14);
    auVar143._8_4_ = ~uVar38 & *(uint *)(param_2 + 0x18);
    auVar143._12_4_ = ~uVar42 & *(uint *)(param_2 + 0x1c);
    auVar150._4_4_ = _LC7;
    auVar150._0_4_ = _LC7;
    auVar150._8_4_ = _LC7;
    auVar150._12_4_ = _LC7;
    auVar83 = divps(auVar150,auVar83 | auVar143);
    fVar46 = _LC12 * auVar83._0_4_;
    fVar49 = _LC12 * auVar83._4_4_;
    fVar51 = _LC12 * auVar83._8_4_;
    fVar77 = auVar83._0_4_ * _LC14;
    fVar85 = auVar83._4_4_ * _LC14;
    fVar91 = auVar83._8_4_ * _LC14;
    puVar21 = local_7e0;
    uVar32 = (ulong)(-(uint)(fVar49 < 0.0) & 0x10);
    auVar128._4_4_ = fVar54;
    auVar128._0_4_ = fVar54;
    auVar128._8_4_ = fVar54;
    auVar128._12_4_ = fVar54;
    uVar25 = (ulong)(-(uint)(fVar51 < 0.0) & 0x10);
    do {
      fVar54 = *(float *)(param_2 + 0x1c);
      uVar33 = puVar21[-1];
      puVar21 = puVar21 + -1;
      while( true ) {
        pfVar24 = (float *)(uVar33 & 0xfffffffffffffff0);
        uVar30 = (ulong)((uint)uVar33 & 0xf);
        if ((uVar33 & 8) != 0) break;
        auVar149._4_4_ = fVar4;
        auVar149._0_4_ = fVar4;
        auVar149._8_4_ = fVar4;
        auVar149._12_4_ = fVar4;
        pfVar1 = (float *)((long)pfVar24 + uVar32 + 0x40);
        pfVar22 = (float *)((long)pfVar24 + uVar25 + 0x60);
        pfVar2 = pfVar24 + (ulong)(fVar46 < 0.0) * 4 + 8;
        pfVar3 = (float *)((long)pfVar24 + (-(ulong)(fVar49 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar110._0_4_ = ((pfVar22[0x18] * fVar54 + *pfVar22) - fVar18) * fVar51;
        auVar110._4_4_ = ((pfVar22[0x19] * fVar54 + pfVar22[1]) - fVar18) * fVar51;
        auVar110._8_4_ = ((pfVar22[0x1a] * fVar54 + pfVar22[2]) - fVar18) * fVar51;
        auVar110._12_4_ = ((pfVar22[0x1b] * fVar54 + pfVar22[3]) - fVar18) * fVar51;
        auVar69._0_4_ = ((pfVar1[0x18] * fVar54 + *pfVar1) - fVar17) * fVar49;
        auVar69._4_4_ = ((pfVar1[0x19] * fVar54 + pfVar1[1]) - fVar17) * fVar49;
        auVar69._8_4_ = ((pfVar1[0x1a] * fVar54 + pfVar1[2]) - fVar17) * fVar49;
        auVar69._12_4_ = ((pfVar1[0x1b] * fVar54 + pfVar1[3]) - fVar17) * fVar49;
        auVar83 = maxps(auVar69,auVar110);
        pfVar1 = (float *)((long)pfVar24 + ((ulong)(fVar46 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar22 = (float *)((long)pfVar24 + (-(ulong)(fVar51 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar111._0_4_ = ((pfVar2[0x18] * fVar54 + *pfVar2) - fVar16) * fVar46;
        auVar111._4_4_ = ((pfVar2[0x19] * fVar54 + pfVar2[1]) - fVar16) * fVar46;
        auVar111._8_4_ = ((pfVar2[0x1a] * fVar54 + pfVar2[2]) - fVar16) * fVar46;
        auVar111._12_4_ = ((pfVar2[0x1b] * fVar54 + pfVar2[3]) - fVar16) * fVar46;
        auVar143 = maxps(auVar128,auVar111);
        auVar143 = maxps(auVar143,auVar83);
        auVar112._0_4_ = ((pfVar22[0x18] * fVar54 + *pfVar22) - fVar18) * fVar91;
        auVar112._4_4_ = ((pfVar22[0x19] * fVar54 + pfVar22[1]) - fVar18) * fVar91;
        auVar112._8_4_ = ((pfVar22[0x1a] * fVar54 + pfVar22[2]) - fVar18) * fVar91;
        auVar112._12_4_ = ((pfVar22[0x1b] * fVar54 + pfVar22[3]) - fVar18) * fVar91;
        auVar70._0_4_ = ((pfVar3[0x18] * fVar54 + *pfVar3) - fVar17) * fVar85;
        auVar70._4_4_ = ((pfVar3[0x19] * fVar54 + pfVar3[1]) - fVar17) * fVar85;
        auVar70._8_4_ = ((pfVar3[0x1a] * fVar54 + pfVar3[2]) - fVar17) * fVar85;
        auVar70._12_4_ = ((pfVar3[0x1b] * fVar54 + pfVar3[3]) - fVar17) * fVar85;
        auVar83 = minps(auVar70,auVar112);
        auVar113._0_4_ = ((pfVar1[0x18] * fVar54 + *pfVar1) - fVar16) * fVar77;
        auVar113._4_4_ = ((pfVar1[0x19] * fVar54 + pfVar1[1]) - fVar16) * fVar77;
        auVar113._8_4_ = ((pfVar1[0x1a] * fVar54 + pfVar1[2]) - fVar16) * fVar77;
        auVar113._12_4_ = ((pfVar1[0x1b] * fVar54 + pfVar1[3]) - fVar16) * fVar77;
        auVar150 = minps(auVar149,auVar113);
        auVar83 = minps(auVar150,auVar83);
        bVar7 = auVar143._0_4_ <= auVar83._0_4_;
        bVar8 = auVar143._4_4_ <= auVar83._4_4_;
        bVar9 = auVar143._8_4_ <= auVar83._8_4_;
        bVar10 = auVar143._12_4_ <= auVar83._12_4_;
        auVar144._4_4_ = -(uint)bVar8;
        auVar144._0_4_ = -(uint)bVar7;
        auVar144._8_4_ = -(uint)bVar9;
        auVar144._12_4_ = -(uint)bVar10;
        if (uVar30 == 6) {
          auVar144._0_4_ = -(uint)((pfVar24[0x38] <= fVar54 && fVar54 < pfVar24[0x3c]) && bVar7);
          auVar144._4_4_ = -(uint)((pfVar24[0x39] <= fVar54 && fVar54 < pfVar24[0x3d]) && bVar8);
          auVar144._8_4_ = -(uint)((pfVar24[0x3a] <= fVar54 && fVar54 < pfVar24[0x3e]) && bVar9);
          auVar144._12_4_ = -(uint)((pfVar24[0x3b] <= fVar54 && fVar54 < pfVar24[0x3f]) && bVar10);
        }
        uVar27 = movmskps((int)pfVar1,auVar144);
        uVar30 = CONCAT44((int)((ulong)pfVar1 >> 0x20),uVar27);
        if (uVar30 == 0) goto LAB_00106840;
        lVar31 = 0;
        if (uVar30 != 0) {
          for (; (uVar30 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
          }
        }
        uVar33 = *(ulong *)(pfVar24 + lVar31 * 2);
        uVar30 = uVar30 - 1 & uVar30;
        if (uVar30 != 0) {
          *puVar21 = uVar33;
          uVar28 = uVar30 - 1;
          lVar31 = 0;
          if (uVar30 != 0) {
            for (; (uVar30 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
            }
          }
          while( true ) {
            puVar21 = puVar21 + 1;
            uVar33 = *(ulong *)(pfVar24 + lVar31 * 2);
            uVar28 = uVar28 & uVar30;
            if (uVar28 == 0) break;
            *puVar21 = uVar33;
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
        uVar28 = uVar25 + 0x40;
        uVar33 = uVar32 + 0x20;
        do {
          fVar68 = *(float *)(param_2 + 0x10);
          fVar73 = *(float *)(param_2 + 0x14);
          fVar75 = *(float *)(param_2 + 0x18);
          fVar53 = *(float *)param_2;
          fVar108 = *(float *)(param_2 + 4);
          fVar101 = *(float *)(param_2 + 8);
          fVar78 = (pfVar24[0x2c] * fVar54 + pfVar24[8]) - fVar101;
          fVar86 = (pfVar24[0x2d] * fVar54 + pfVar24[9]) - fVar101;
          fVar92 = (pfVar24[0x2e] * fVar54 + pfVar24[10]) - fVar101;
          fVar97 = (pfVar24[0x2f] * fVar54 + pfVar24[0xb]) - fVar101;
          fVar124 = (pfVar24[0x34] * fVar54 + pfVar24[0x10]) - fVar108;
          fVar125 = (pfVar24[0x35] * fVar54 + pfVar24[0x11]) - fVar108;
          fVar126 = (pfVar24[0x36] * fVar54 + pfVar24[0x12]) - fVar108;
          fVar127 = (pfVar24[0x37] * fVar54 + pfVar24[0x13]) - fVar108;
          fVar120 = (pfVar24[0x30] * fVar54 + pfVar24[0xc]) - fVar53;
          fVar121 = (pfVar24[0x31] * fVar54 + pfVar24[0xd]) - fVar53;
          fVar122 = (pfVar24[0x32] * fVar54 + pfVar24[0xe]) - fVar53;
          fVar123 = (pfVar24[0x33] * fVar54 + pfVar24[0xf]) - fVar53;
          fVar79 = (pfVar24[0x28] * fVar54 + pfVar24[4]) - fVar108;
          fVar87 = (pfVar24[0x29] * fVar54 + pfVar24[5]) - fVar108;
          fVar93 = (pfVar24[0x2a] * fVar54 + pfVar24[6]) - fVar108;
          fVar98 = (pfVar24[0x2b] * fVar54 + pfVar24[7]) - fVar108;
          fVar80 = (pfVar24[0x24] * fVar54 + *pfVar24) - fVar53;
          fVar88 = (pfVar24[0x25] * fVar54 + pfVar24[1]) - fVar53;
          fVar94 = (pfVar24[0x26] * fVar54 + pfVar24[2]) - fVar53;
          fVar99 = (pfVar24[0x27] * fVar54 + pfVar24[3]) - fVar53;
          fVar81 = (pfVar24[0x38] * fVar54 + pfVar24[0x14]) - fVar101;
          fVar89 = (pfVar24[0x39] * fVar54 + pfVar24[0x15]) - fVar101;
          fVar95 = (pfVar24[0x3a] * fVar54 + pfVar24[0x16]) - fVar101;
          fVar100 = (pfVar24[0x3b] * fVar54 + pfVar24[0x17]) - fVar101;
          fVar82 = (pfVar24[0x44] * fVar54 + pfVar24[0x20]) - fVar101;
          fVar90 = (pfVar24[0x45] * fVar54 + pfVar24[0x21]) - fVar101;
          fVar96 = (pfVar24[0x46] * fVar54 + pfVar24[0x22]) - fVar101;
          fVar101 = (pfVar24[0x47] * fVar54 + pfVar24[0x23]) - fVar101;
          fVar131 = fVar81 - fVar82;
          fVar133 = fVar89 - fVar90;
          fVar135 = fVar95 - fVar96;
          fVar137 = fVar100 - fVar101;
          fVar102 = (pfVar24[0x40] * fVar54 + pfVar24[0x1c]) - fVar108;
          fVar106 = (pfVar24[0x41] * fVar54 + pfVar24[0x1d]) - fVar108;
          fVar107 = (pfVar24[0x42] * fVar54 + pfVar24[0x1e]) - fVar108;
          fVar108 = (pfVar24[0x43] * fVar54 + pfVar24[0x1f]) - fVar108;
          fVar47 = (fVar54 * pfVar24[0x3c] + pfVar24[0x18]) - fVar53;
          fVar50 = (fVar54 * pfVar24[0x3d] + pfVar24[0x19]) - fVar53;
          fVar52 = (fVar54 * pfVar24[0x3e] + pfVar24[0x1a]) - fVar53;
          fVar53 = (fVar54 * pfVar24[0x3f] + pfVar24[0x1b]) - fVar53;
          fVar67 = fVar79 - fVar124;
          fVar72 = fVar87 - fVar125;
          fVar74 = fVar93 - fVar126;
          fVar76 = fVar98 - fVar127;
          fVar54 = fVar82 - fVar78;
          fVar58 = fVar90 - fVar86;
          fVar61 = fVar96 - fVar92;
          fVar64 = fVar101 - fVar97;
          fVar145 = fVar124 - fVar102;
          fVar146 = fVar125 - fVar106;
          fVar147 = fVar126 - fVar107;
          fVar148 = fVar127 - fVar108;
          fVar132 = fVar120 - fVar47;
          fVar134 = fVar121 - fVar50;
          fVar136 = fVar122 - fVar52;
          fVar138 = fVar123 - fVar53;
          fVar139 = fVar47 - fVar80;
          fVar140 = fVar50 - fVar88;
          fVar141 = fVar52 - fVar94;
          fVar142 = fVar53 - fVar99;
          fVar55 = fVar102 - fVar79;
          fVar59 = fVar106 - fVar87;
          fVar62 = fVar107 - fVar93;
          fVar65 = fVar108 - fVar98;
          auVar129._0_4_ = fVar80 - fVar120;
          auVar129._4_4_ = fVar88 - fVar121;
          auVar129._8_4_ = fVar94 - fVar122;
          auVar129._12_4_ = fVar99 - fVar123;
          fVar151 = fVar78 - fVar81;
          fVar152 = fVar86 - fVar89;
          fVar153 = fVar92 - fVar95;
          fVar154 = fVar97 - fVar100;
          fVar56 = ((fVar80 + fVar47) * fVar54 - fVar139 * (fVar78 + fVar82)) * fVar73 +
                   (fVar139 * (fVar79 + fVar102) - fVar55 * (fVar80 + fVar47)) * fVar75 +
                   ((fVar78 + fVar82) * fVar55 - (fVar79 + fVar102) * fVar54) * fVar68;
          fVar60 = ((fVar88 + fVar50) * fVar58 - fVar140 * (fVar86 + fVar90)) * fVar73 +
                   (fVar140 * (fVar87 + fVar106) - fVar59 * (fVar88 + fVar50)) * fVar75 +
                   ((fVar86 + fVar90) * fVar59 - (fVar87 + fVar106) * fVar58) * fVar68;
          fVar63 = ((fVar94 + fVar52) * fVar61 - fVar141 * (fVar92 + fVar96)) * fVar73 +
                   (fVar141 * (fVar93 + fVar107) - fVar62 * (fVar94 + fVar52)) * fVar75 +
                   ((fVar92 + fVar96) * fVar62 - (fVar93 + fVar107) * fVar61) * fVar68;
          fVar66 = ((fVar99 + fVar53) * fVar64 - fVar142 * (fVar97 + fVar101)) * fVar73 +
                   (fVar142 * (fVar98 + fVar108) - fVar65 * (fVar99 + fVar53)) * fVar75 +
                   ((fVar97 + fVar101) * fVar65 - (fVar98 + fVar108) * fVar64) * fVar68;
          fVar109 = ((fVar80 + fVar120) * fVar151 - auVar129._0_4_ * (fVar78 + fVar81)) * fVar73 +
                    (auVar129._0_4_ * (fVar79 + fVar124) - fVar67 * (fVar80 + fVar120)) * fVar75 +
                    ((fVar78 + fVar81) * fVar67 - (fVar79 + fVar124) * fVar151) * fVar68;
          fVar117 = ((fVar88 + fVar121) * fVar152 - auVar129._4_4_ * (fVar86 + fVar89)) * fVar73 +
                    (auVar129._4_4_ * (fVar87 + fVar125) - fVar72 * (fVar88 + fVar121)) * fVar75 +
                    ((fVar86 + fVar89) * fVar72 - (fVar87 + fVar125) * fVar152) * fVar68;
          fVar118 = ((fVar94 + fVar122) * fVar153 - auVar129._8_4_ * (fVar92 + fVar95)) * fVar73 +
                    (auVar129._8_4_ * (fVar93 + fVar126) - fVar74 * (fVar94 + fVar122)) * fVar75 +
                    ((fVar92 + fVar95) * fVar74 - (fVar93 + fVar126) * fVar153) * fVar68;
          fVar119 = ((fVar99 + fVar123) * fVar154 - auVar129._12_4_ * (fVar97 + fVar100)) * fVar73 +
                    (auVar129._12_4_ * (fVar98 + fVar127) - fVar76 * (fVar99 + fVar123)) * fVar75 +
                    ((fVar97 + fVar100) * fVar76 - (fVar98 + fVar127) * fVar154) * fVar68;
          auVar114._8_4_ = fVar63;
          auVar114._0_8_ = CONCAT44(fVar60,fVar56);
          auVar114._12_4_ = fVar66;
          auVar14._8_4_ = fVar118;
          auVar14._0_8_ = CONCAT44(fVar117,fVar109);
          auVar14._12_4_ = fVar119;
          auVar143 = maxps(auVar114,auVar14);
          auVar103._8_4_ = fVar63;
          auVar103._0_8_ = CONCAT44(fVar60,fVar56);
          auVar103._12_4_ = fVar66;
          auVar15._8_4_ = fVar118;
          auVar15._0_8_ = CONCAT44(fVar117,fVar109);
          auVar15._12_4_ = fVar119;
          auVar83 = minps(auVar103,auVar15);
          auVar84._0_4_ =
               ((fVar81 + fVar82) * fVar145 - (fVar102 + fVar124) * fVar131) * fVar68 +
               ((fVar47 + fVar120) * fVar131 - fVar132 * (fVar81 + fVar82)) * fVar73 +
               (fVar132 * (fVar102 + fVar124) - fVar145 * (fVar47 + fVar120)) * fVar75;
          auVar84._4_4_ =
               ((fVar89 + fVar90) * fVar146 - (fVar106 + fVar125) * fVar133) * fVar68 +
               ((fVar50 + fVar121) * fVar133 - fVar134 * (fVar89 + fVar90)) * fVar73 +
               (fVar134 * (fVar106 + fVar125) - fVar146 * (fVar50 + fVar121)) * fVar75;
          auVar84._8_4_ =
               ((fVar95 + fVar96) * fVar147 - (fVar107 + fVar126) * fVar135) * fVar68 +
               ((fVar52 + fVar122) * fVar135 - fVar136 * (fVar95 + fVar96)) * fVar73 +
               (fVar136 * (fVar107 + fVar126) - fVar147 * (fVar52 + fVar122)) * fVar75;
          auVar84._12_4_ =
               ((fVar100 + fVar101) * fVar148 - (fVar108 + fVar127) * fVar137) * fVar68 +
               ((fVar53 + fVar123) * fVar137 - fVar138 * (fVar100 + fVar101)) * fVar73 +
               (fVar138 * (fVar108 + fVar127) - fVar148 * (fVar53 + fVar123)) * fVar75;
          fVar50 = fVar56 + fVar109 + auVar84._0_4_;
          fVar52 = fVar60 + fVar117 + auVar84._4_4_;
          fVar81 = fVar63 + fVar118 + auVar84._8_4_;
          fVar82 = fVar66 + fVar119 + auVar84._12_4_;
          auVar143 = maxps(auVar143,auVar84);
          auVar83 = minps(auVar83,auVar84);
          fVar53 = __LC15 * (float)(_LC3 & (uint)fVar50);
          fVar108 = _UNK_00115204 * (float)(_UNK_001151c4 & (uint)fVar52);
          fVar101 = _UNK_00115208 * (float)(_UNK_001151c8 & (uint)fVar81);
          fVar47 = _UNK_0011520c * (float)(_UNK_001151cc & (uint)fVar82);
          auVar115._4_4_ = -(uint)(auVar143._4_4_ <= fVar108);
          auVar115._0_4_ = -(uint)(auVar143._0_4_ <= fVar53);
          auVar115._8_4_ = -(uint)(auVar143._8_4_ <= fVar101);
          auVar115._12_4_ = -(uint)(auVar143._12_4_ <= fVar47);
          auVar104._4_4_ = -(uint)((float)((uint)fVar108 ^ _UNK_001151f4) <= auVar83._4_4_);
          auVar104._0_4_ = -(uint)((float)((uint)fVar53 ^ _LC9) <= auVar83._0_4_);
          auVar104._8_4_ = -(uint)((float)((uint)fVar101 ^ _UNK_001151f8) <= auVar83._8_4_);
          auVar104._12_4_ = -(uint)((float)((uint)fVar47 ^ _UNK_001151fc) <= auVar83._12_4_);
          auVar104 = auVar104 | auVar115;
          auVar105._0_4_ = auVar104._0_4_ & _DAT_00116108;
          auVar105._4_4_ = auVar104._4_4_ & uRam000000000011610c;
          auVar105._8_4_ = auVar104._8_4_ & uRam0000000000116110;
          auVar105._12_4_ = auVar104._12_4_ & uRam0000000000116114;
          uVar34 = movmskps((int)uVar28,auVar105);
          uVar28 = (ulong)uVar34;
          if (uVar34 != 0) {
            uVar34 = -(uint)((float)(_LC3 & (uint)(fVar54 * fVar67)) <
                            (float)(_LC3 & (uint)(fVar145 * fVar151)));
            uVar42 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar58 * fVar72)) <
                            (float)(_UNK_001151c4 & (uint)(fVar146 * fVar152)));
            uVar39 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar61 * fVar74)) <
                            (float)(_UNK_001151c8 & (uint)(fVar147 * fVar153)));
            uVar43 = -(uint)((float)(_UNK_001151cc & (uint)(fVar64 * fVar76)) <
                            (float)(_UNK_001151cc & (uint)(fVar148 * fVar154)));
            uVar35 = -(uint)((float)(_LC3 & (uint)(fVar139 * fVar151)) <
                            (float)(_LC3 & (uint)(fVar131 * auVar129._0_4_)));
            uVar36 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar140 * fVar152)) <
                            (float)(_UNK_001151c4 & (uint)(fVar133 * auVar129._4_4_)));
            uVar40 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar141 * fVar153)) <
                            (float)(_UNK_001151c8 & (uint)(fVar135 * auVar129._8_4_)));
            uVar44 = -(uint)((float)(_UNK_001151cc & (uint)(fVar142 * fVar154)) <
                            (float)(_UNK_001151cc & (uint)(fVar137 * auVar129._12_4_)));
            uVar38 = -(uint)((float)(_LC3 & (uint)(fVar55 * auVar129._0_4_)) <
                            (float)(_LC3 & (uint)(fVar132 * fVar67)));
            uVar37 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar59 * auVar129._4_4_)) <
                            (float)(_UNK_001151c4 & (uint)(fVar134 * fVar72)));
            uVar41 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar62 * auVar129._8_4_)) <
                            (float)(_UNK_001151c8 & (uint)(fVar136 * fVar74)));
            uVar45 = -(uint)((float)(_UNK_001151cc & (uint)(fVar65 * auVar129._12_4_)) <
                            (float)(_UNK_001151cc & (uint)(fVar138 * fVar76)));
            fVar108 = (float)(uVar38 & (uint)(fVar139 * fVar67 - fVar55 * auVar129._0_4_) |
                             ~uVar38 & (uint)(fVar145 * auVar129._0_4_ - fVar132 * fVar67));
            fVar101 = (float)(uVar37 & (uint)(fVar140 * fVar72 - fVar59 * auVar129._4_4_) |
                             ~uVar37 & (uint)(fVar146 * auVar129._4_4_ - fVar134 * fVar72));
            fVar47 = (float)(uVar41 & (uint)(fVar141 * fVar74 - fVar62 * auVar129._8_4_) |
                            ~uVar41 & (uint)(fVar147 * auVar129._8_4_ - fVar136 * fVar74));
            fVar89 = (float)(uVar45 & (uint)(fVar142 * fVar76 - fVar65 * auVar129._12_4_) |
                            ~uVar45 & (uint)(fVar148 * auVar129._12_4_ - fVar138 * fVar76));
            fVar90 = (float)(uVar35 & (uint)(fVar54 * auVar129._0_4_ - fVar139 * fVar151) |
                            ~uVar35 & (uint)(fVar132 * fVar151 - fVar131 * auVar129._0_4_));
            fVar95 = (float)(uVar36 & (uint)(fVar58 * auVar129._4_4_ - fVar140 * fVar152) |
                            ~uVar36 & (uint)(fVar134 * fVar152 - fVar133 * auVar129._4_4_));
            fVar96 = (float)(uVar40 & (uint)(fVar61 * auVar129._8_4_ - fVar141 * fVar153) |
                            ~uVar40 & (uint)(fVar136 * fVar153 - fVar135 * auVar129._8_4_));
            fVar100 = (float)(uVar44 & (uint)(fVar64 * auVar129._12_4_ - fVar142 * fVar154) |
                             ~uVar44 & (uint)(fVar138 * fVar154 - fVar137 * auVar129._12_4_));
            auVar116._0_4_ = uVar34 & (uint)(fVar55 * fVar151 - fVar54 * fVar67);
            auVar116._4_4_ = uVar42 & (uint)(fVar59 * fVar152 - fVar58 * fVar72);
            auVar116._8_4_ = uVar39 & (uint)(fVar62 * fVar153 - fVar61 * fVar74);
            auVar116._12_4_ = uVar43 & (uint)(fVar65 * fVar154 - fVar64 * fVar76);
            auVar11._4_4_ = ~uVar42 & (uint)(fVar72 * fVar133 - fVar146 * fVar152);
            auVar11._0_4_ = ~uVar34 & (uint)(fVar67 * fVar131 - fVar145 * fVar151);
            auVar11._8_4_ = ~uVar39 & (uint)(fVar74 * fVar135 - fVar147 * fVar153);
            auVar11._12_4_ = ~uVar43 & (uint)(fVar76 * fVar137 - fVar148 * fVar154);
            auVar116 = auVar116 | auVar11;
            fVar55 = fVar73 * fVar90 + fVar75 * fVar108 + fVar68 * auVar116._0_4_;
            fVar58 = fVar73 * fVar95 + fVar75 * fVar101 + fVar68 * auVar116._4_4_;
            fVar59 = fVar73 * fVar96 + fVar75 * fVar47 + fVar68 * auVar116._8_4_;
            fVar61 = fVar73 * fVar100 + fVar75 * fVar89 + fVar68 * auVar116._12_4_;
            fVar55 = fVar55 + fVar55;
            fVar58 = fVar58 + fVar58;
            fVar59 = fVar59 + fVar59;
            fVar61 = fVar61 + fVar61;
            auVar12._4_4_ = fVar58;
            auVar12._0_4_ = fVar55;
            auVar12._8_4_ = fVar59;
            auVar12._12_4_ = fVar61;
            auVar83 = rcpps(auVar129,auVar12);
            fVar62 = auVar83._0_4_;
            fVar64 = auVar83._4_4_;
            fVar65 = auVar83._8_4_;
            fVar67 = auVar83._12_4_;
            fVar68 = fVar79 * fVar90 + fVar78 * fVar108 + fVar80 * auVar116._0_4_;
            fVar73 = fVar87 * fVar95 + fVar86 * fVar101 + fVar88 * auVar116._4_4_;
            fVar75 = fVar93 * fVar96 + fVar92 * fVar47 + fVar94 * auVar116._8_4_;
            fVar53 = fVar98 * fVar100 + fVar97 * fVar89 + fVar99 * auVar116._12_4_;
            fVar54 = *(float *)(param_2 + 0x20);
            auVar71._0_4_ = (fVar68 + fVar68) * ((_LC7 - fVar55 * fVar62) * fVar62 + fVar62);
            auVar71._4_4_ = (fVar73 + fVar73) * ((_LC7 - fVar58 * fVar64) * fVar64 + fVar64);
            auVar71._8_4_ = (fVar75 + fVar75) * ((_LC7 - fVar59 * fVar65) * fVar65 + fVar65);
            auVar71._12_4_ = (fVar53 + fVar53) * ((_LC7 - fVar61 * fVar67) * fVar67 + fVar67);
            fVar68 = *(float *)(param_2 + 0xc);
            auVar130._0_4_ =
                 -(uint)(fVar68 <= auVar71._0_4_ && auVar71._0_4_ <= fVar54) & auVar105._0_4_ &
                 -(uint)(fVar55 != 0.0);
            auVar130._4_4_ =
                 -(uint)(fVar68 <= auVar71._4_4_ && auVar71._4_4_ <= fVar54) & auVar105._4_4_ &
                 -(uint)(fVar58 != 0.0);
            auVar130._8_4_ =
                 -(uint)(fVar68 <= auVar71._8_4_ && auVar71._8_4_ <= fVar54) & auVar105._8_4_ &
                 -(uint)(fVar59 != 0.0);
            auVar130._12_4_ =
                 -(uint)(fVar68 <= auVar71._12_4_ && auVar71._12_4_ <= fVar54) & auVar105._12_4_ &
                 -(uint)(fVar61 != 0.0);
            uVar34 = movmskps((int)uVar33,auVar130);
            uVar33 = (ulong)uVar34;
            if (uVar34 != 0) {
              lVar5 = *(long *)param_3;
              local_828 = auVar71;
              auVar13._4_4_ = fVar52;
              auVar13._0_4_ = fVar50;
              auVar13._8_4_ = fVar81;
              auVar13._12_4_ = fVar82;
              auVar83 = rcpps(auVar71,auVar13);
              local_7f8[0] = fVar108;
              local_7f8[1] = fVar101;
              local_7f8[2] = fVar47;
              local_7f8[3] = fVar89;
              local_818 = auVar116;
              local_808[0] = fVar90;
              local_808[1] = fVar95;
              local_808[2] = fVar96;
              local_808[3] = fVar100;
              fVar54 = auVar83._0_4_;
              fVar68 = auVar83._4_4_;
              fVar73 = auVar83._8_4_;
              fVar75 = auVar83._12_4_;
              fVar54 = (float)(~-(uint)((float)(_LC3 & (uint)fVar50) < _LC5) &
                              (uint)((_LC7 - fVar50 * fVar54) * fVar54 + fVar54));
              fVar68 = (float)(~-(uint)((float)(_UNK_001151c4 & (uint)fVar52) < _UNK_001151d4) &
                              (uint)((_LC7 - fVar52 * fVar68) * fVar68 + fVar68));
              fVar73 = (float)(~-(uint)((float)(_UNK_001151c8 & (uint)fVar81) < _UNK_001151d8) &
                              (uint)((_LC7 - fVar81 * fVar73) * fVar73 + fVar73));
              fVar75 = (float)(~-(uint)((float)(_UNK_001151cc & (uint)fVar82) < _UNK_001151dc) &
                              (uint)((_LC7 - fVar82 * fVar75) * fVar75 + fVar75));
              auVar57._0_4_ = fVar56 * fVar54;
              auVar57._4_4_ = fVar60 * fVar68;
              auVar57._8_4_ = fVar63 * fVar73;
              auVar57._12_4_ = fVar66 * fVar75;
              auVar48._0_4_ = fVar54 * fVar109;
              auVar48._4_4_ = fVar68 * fVar117;
              auVar48._8_4_ = fVar73 * fVar118;
              auVar48._12_4_ = fVar75 * fVar119;
              auVar19._4_12_ = _UNK_001151e4;
              auVar19._0_4_ = _LC7;
              local_848 = minps(auVar57,auVar19);
              auVar20._4_12_ = _UNK_001151e4;
              auVar20._0_4_ = _LC7;
              local_838 = minps(auVar48,auVar20);
              do {
                pbVar29 = *(byte **)(param_3 + 0x10);
                uVar6 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                fVar54 = pfVar24[uVar6 + 0x48];
                uVar26 = *(ulong *)(*(long *)(lVar5 + 0x1e0) + (ulong)(uint)fVar54 * 8);
                pcVar23 = *(code **)(pbVar29 + 0x10);
                if ((pcVar23 == (code *)0x0) && (*(long *)(uVar26 + 0x48) == 0)) {
LAB_0010679c:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_001067a5;
                }
                fStack_8a4 = pfVar24[uVar6 + 0x4c];
                uStack_8a8 = *(undefined4 *)(local_838 + uVar6 * 4);
                uVar27 = *(undefined4 *)(param_2 + 0x20);
                iStack_8ec = -1;
                puStack_8d8 = *(undefined4 **)(param_3 + 8);
                uStack_8ac = *(undefined4 *)(local_848 + uVar6 * 4);
                fStack_8b0 = local_7f8[uVar6];
                uStack_89c = *puStack_8d8;
                fStack_8b4 = local_808[uVar6];
                fStack_8b8 = local_808[uVar6 - 4];
                piStack_8e8 = &iStack_8ec;
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(local_828 + uVar6 * 4);
                uStack_8e0 = *(undefined8 *)(uVar26 + 0x18);
                puStack_8c8 = &fStack_8b8;
                uStack_8c0 = 1;
                pRStack_8d0 = param_2;
                fStack_8a0 = fVar54;
                if (*(code **)(uVar26 + 0x48) == (code *)0x0) {
LAB_001069ec:
                  if (pcVar23 != (code *)0x0) {
                    if (((*pbVar29 & 2) != 0) || ((*(byte *)(uVar26 + 0x3e) & 0x40) != 0)) {
                      (*pcVar23)(&piStack_8e8);
                    }
                    uVar28 = uVar26;
                    if (*piStack_8e8 == 0) goto LAB_00106a4c;
                  }
                  goto LAB_0010679c;
                }
                uVar28 = uVar26;
                (**(code **)(uVar26 + 0x48))(&piStack_8e8);
                if (*piStack_8e8 != 0) {
                  pbVar29 = *(byte **)(param_3 + 0x10);
                  pcVar23 = *(code **)(pbVar29 + 0x10);
                  goto LAB_001069ec;
                }
LAB_00106a4c:
                uVar33 = uVar33 ^ 1L << (uVar6 & 0x3f);
                *(undefined4 *)(param_2 + 0x20) = uVar27;
              } while (uVar33 != 0);
              uVar33 = 0;
            }
          }
          lVar31 = lVar31 + 1;
          pfVar24 = pfVar24 + 0x50;
          if (lVar31 == uVar30 - 8) break;
          fVar54 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_00106840:
    } while (puVar21 != &local_7e8);
  }
LAB_001067a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 1, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,1,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 (*pauVar14) [16];
  code *pcVar15;
  float *pfVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  ulong uVar19;
  int iVar20;
  byte *pbVar21;
  RayHitK *pRVar22;
  undefined4 uVar23;
  int iVar25;
  long lVar26;
  long in_FS_OFFSET;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar37;
  float fVar39;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar40;
  float fVar41;
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  float fVar76;
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
  float fStack_11a8;
  float fStack_11a4;
  float fStack_11a0;
  float fStack_119c;
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
  undefined1 (*pauVar24) [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar94 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar94 < 0.0) {
      fVar94 = 0.0;
    }
    fVar51 = *(float *)(param_2 + 0xc);
    if (fVar51 < 0.0) {
      fVar51 = 0.0;
    }
    fVar11 = *(float *)param_2;
    fVar12 = *(float *)(param_2 + 4);
    fVar13 = *(float *)(param_2 + 8);
    uVar27 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar28 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar29 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar30 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar67._0_4_ = ~uVar27 & *(uint *)(param_2 + 0x10);
    auVar67._4_4_ = ~uVar28 & *(uint *)(param_2 + 0x14);
    auVar67._8_4_ = ~uVar29 & *(uint *)(param_2 + 0x18);
    auVar67._12_4_ = ~uVar30 & *(uint *)(param_2 + 0x1c);
    auVar33._0_4_ = uVar27 & (uint)_LC5;
    auVar33._4_4_ = uVar28 & (uint)_LC5;
    auVar33._8_4_ = uVar29 & (uint)_LC5;
    auVar33._12_4_ = uVar30 & (uint)_LC5;
    auVar33 = auVar33 | auVar67;
    auVar65 = rcpps(auVar67,auVar33);
    fVar31 = auVar65._0_4_;
    fVar37 = auVar65._4_4_;
    fVar39 = auVar65._8_4_;
    fVar31 = (_LC7 - auVar33._0_4_ * fVar31) * fVar31 + fVar31;
    fVar37 = (_LC7 - auVar33._4_4_ * fVar37) * fVar37 + fVar37;
    fVar39 = (_LC7 - auVar33._8_4_ * fVar39) * fVar39 + fVar39;
    auVar65._4_4_ = fVar51;
    auVar65._0_4_ = fVar51;
    auVar65._8_4_ = fVar51;
    auVar65._12_4_ = fVar51;
    pauVar14 = (undefined1 (*) [16])local_f78;
    fVar55 = fVar94;
    fVar53 = fVar94;
    fVar51 = fVar94;
joined_r0x00106c43:
    pauVar24 = pauVar14;
    if (pauVar24 != (undefined1 (*) [16])local_f88) {
      fStack_11a4 = *(float *)(param_2 + 0x20);
      pauVar14 = pauVar24 + -1;
      if (*(float *)(pauVar24[-1] + 8) <= fStack_11a4) {
        pauVar17 = *(undefined1 (**) [16])pauVar24[-1];
        while (((ulong)pauVar17 & 8) == 0) {
          pfVar16 = (float *)(pauVar17[6] + (-(uint)(fVar39 < 0.0) & 0x10));
          pauVar1 = pauVar17 + (ulong)(fVar31 < 0.0) + 2;
          pfVar2 = (float *)(pauVar17[4] + (-(uint)(fVar37 < 0.0) & 0x10));
          pfVar3 = (float *)(pauVar17[5] + (-(ulong)(fVar37 < 0.0) & 0xfffffffffffffff0));
          auVar66._0_4_ = (*pfVar16 - fVar13) * fVar39;
          auVar66._4_4_ = (pfVar16[1] - fVar13) * fVar39;
          auVar66._8_4_ = (pfVar16[2] - fVar13) * fVar39;
          auVar66._12_4_ = (pfVar16[3] - fVar13) * fVar39;
          auVar80._0_4_ = (*pfVar2 - fVar12) * fVar37;
          auVar80._4_4_ = (pfVar2[1] - fVar12) * fVar37;
          auVar80._8_4_ = (pfVar2[2] - fVar12) * fVar37;
          auVar80._12_4_ = (pfVar2[3] - fVar12) * fVar37;
          auVar57._0_4_ = (*(float *)*pauVar1 - fVar11) * fVar31;
          auVar57._4_4_ = (*(float *)(*pauVar1 + 4) - fVar11) * fVar31;
          auVar57._8_4_ = (*(float *)(*pauVar1 + 8) - fVar11) * fVar31;
          auVar57._12_4_ = (*(float *)(*pauVar1 + 0xc) - fVar11) * fVar31;
          auVar107._0_4_ = (*pfVar3 - fVar12) * fVar37;
          auVar107._4_4_ = (pfVar3[1] - fVar12) * fVar37;
          auVar107._8_4_ = (pfVar3[2] - fVar12) * fVar37;
          auVar107._12_4_ = (pfVar3[3] - fVar12) * fVar37;
          auVar67 = maxps(auVar66,auVar65);
          auVar33 = maxps(auVar57,auVar80);
          pfVar16 = (float *)(pauVar17[7] + (-(ulong)(fVar39 < 0.0) & 0xfffffffffffffff0));
          local_1048[0] = maxps(auVar33,auVar67);
          pfVar2 = (float *)(pauVar17[2] + ((ulong)(fVar31 < 0.0) * 0x10 ^ 0x10));
          auVar81._0_4_ = (*pfVar16 - fVar13) * fVar39;
          auVar81._4_4_ = (pfVar16[1] - fVar13) * fVar39;
          auVar81._8_4_ = (pfVar16[2] - fVar13) * fVar39;
          auVar81._12_4_ = (pfVar16[3] - fVar13) * fVar39;
          auVar68._0_4_ = (*pfVar2 - fVar11) * fVar31;
          auVar68._4_4_ = (pfVar2[1] - fVar11) * fVar31;
          auVar68._8_4_ = (pfVar2[2] - fVar11) * fVar31;
          auVar68._12_4_ = (pfVar2[3] - fVar11) * fVar31;
          auVar10._4_4_ = fVar53;
          auVar10._0_4_ = fVar51;
          auVar10._8_4_ = fVar55;
          auVar10._12_4_ = fVar94;
          auVar67 = minps(auVar81,auVar10);
          auVar33 = minps(auVar68,auVar107);
          auVar33 = minps(auVar33,auVar67);
          auVar82._4_4_ = -(uint)(SUB164(local_1048[0],4) <= auVar33._4_4_);
          auVar82._0_4_ = -(uint)(SUB164(local_1048[0],0) <= auVar33._0_4_);
          auVar82._8_4_ = -(uint)(SUB164(local_1048[0],8) <= auVar33._8_4_);
          auVar82._12_4_ = -(uint)(SUB164(local_1048[0],0xc) <= auVar33._12_4_);
          uVar23 = movmskps((int)pauVar24,auVar82);
          pauVar24 = (undefined1 (*) [16])CONCAT44((int)((ulong)pauVar24 >> 0x20),uVar23);
          if (pauVar24 == (undefined1 (*) [16])0x0) goto joined_r0x00106c43;
          param_1 = (Intersectors *)((ulong)pauVar17 & 0xfffffffffffffff0);
          lVar18 = 0;
          if (pauVar24 != (undefined1 (*) [16])0x0) {
            for (; ((ulong)pauVar24 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
            }
          }
          pauVar17 = *(undefined1 (**) [16])(param_1 + lVar18 * 8);
          uVar19 = (ulong)(pauVar24[-1] + 0xf) & (ulong)pauVar24;
          if (uVar19 != 0) {
            fVar42 = afStack_fe8[lVar18 + -0x18];
            lVar18 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
              }
            }
            pauVar24 = *(undefined1 (**) [16])(param_1 + lVar18 * 8);
            fVar46 = afStack_fe8[lVar18 + -0x18];
            uVar19 = uVar19 & uVar19 - 1;
            if (uVar19 == 0) {
              if ((uint)fVar42 < (uint)fVar46) {
                *(undefined1 (**) [16])*pauVar14 = pauVar24;
                *(float *)(*pauVar14 + 8) = fVar46;
                pauVar14 = pauVar14 + 1;
              }
              else {
                *(undefined1 (**) [16])*pauVar14 = pauVar17;
                *(float *)(*pauVar14 + 8) = fVar42;
                pauVar14 = pauVar14 + 1;
                pauVar17 = pauVar24;
              }
            }
            else {
              lVar18 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> lVar18 & 1) == 0; lVar18 = lVar18 + 1) {
                }
              }
              fVar47 = afStack_fe8[lVar18 + -0x18];
              auVar112._8_4_ = fVar42;
              auVar112._0_8_ = pauVar17;
              auVar112._12_4_ = 0;
              auVar116._8_4_ = fVar46;
              auVar116._0_8_ = pauVar24;
              auVar116._12_4_ = 0;
              auVar60._8_4_ = fVar47;
              auVar60._0_8_ = *(ulong *)(param_1 + lVar18 * 8);
              auVar60._12_4_ = 0;
              auVar72._8_4_ = -(uint)((int)fVar42 < (int)fVar46);
              uVar19 = uVar19 - 1 & uVar19;
              if (uVar19 == 0) {
                auVar72._4_4_ = auVar72._8_4_;
                auVar72._0_4_ = auVar72._8_4_;
                auVar72._12_4_ = auVar72._8_4_;
                auVar84 = auVar112 & auVar72 | ~auVar72 & auVar116;
                auVar67 = auVar72 & auVar116 | ~auVar72 & auVar112;
                auVar109._8_4_ = -(uint)(auVar84._8_4_ < (int)fVar47);
                auVar109._0_8_ = CONCAT44(auVar109._8_4_,auVar109._8_4_);
                auVar109._12_4_ = auVar109._8_4_;
                auVar33 = auVar60 & auVar109 | ~auVar109 & auVar84;
                pauVar17 = (undefined1 (*) [16])
                           (auVar84._0_8_ & auVar109._0_8_ |
                           ~auVar109._0_8_ & *(ulong *)(param_1 + lVar18 * 8));
                auVar113._8_4_ = -(uint)(auVar67._8_4_ < auVar33._8_4_);
                auVar113._4_4_ = auVar113._8_4_;
                auVar113._0_4_ = auVar113._8_4_;
                auVar113._12_4_ = auVar113._8_4_;
                *pauVar14 = auVar33 & auVar113 | ~auVar113 & auVar67;
                pauVar14[1] = auVar67 & auVar113 | ~auVar113 & auVar33;
                pauVar24 = (undefined1 (*) [16])0x0;
                pauVar14 = pauVar14 + 2;
              }
              else {
                pauVar24 = (undefined1 (*) [16])0x0;
                if (uVar19 != 0) {
                  for (; (uVar19 >> (long)pauVar24 & 1) == 0;
                      pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1)) {
                  }
                }
                auVar75._4_4_ = auVar72._8_4_;
                auVar75._0_4_ = auVar72._8_4_;
                auVar75._8_4_ = auVar72._8_4_;
                auVar75._12_4_ = auVar72._8_4_;
                auVar118._8_4_ = afStack_fe8[(long)(pauVar24[-2] + 8)];
                auVar118._0_8_ = *(undefined8 *)(param_1 + (long)pauVar24 * 8);
                auVar118._12_4_ = 0;
                auVar110 = auVar112 & auVar75 | ~auVar75 & auVar116;
                auVar114._8_4_ = -(uint)((int)fVar47 < (int)afStack_fe8[(long)(pauVar24[-2] + 8)]);
                auVar67 = auVar75 & auVar116 | ~auVar75 & auVar112;
                auVar114._4_4_ = auVar114._8_4_;
                auVar114._0_4_ = auVar114._8_4_;
                auVar114._12_4_ = auVar114._8_4_;
                auVar43 = auVar60 & auVar114 | ~auVar114 & auVar118;
                auVar33 = auVar118 & auVar114 | ~auVar114 & auVar60;
                auVar117._8_4_ = -(uint)(auVar67._8_4_ < auVar33._8_4_);
                auVar117._4_4_ = auVar117._8_4_;
                auVar117._0_4_ = auVar117._8_4_;
                auVar117._12_4_ = auVar117._8_4_;
                auVar69 = auVar67 & auVar117 | ~auVar117 & auVar33;
                iVar20 = -(uint)(auVar110._8_4_ < auVar43._8_4_);
                auVar119._0_8_ = CONCAT44(iVar20,iVar20);
                auVar119._8_4_ = iVar20;
                auVar119._12_4_ = iVar20;
                auVar84 = ~auVar119 & auVar110 | auVar43 & auVar119;
                auVar85._8_4_ = -(uint)(auVar84._8_4_ < auVar69._8_4_);
                auVar85._4_4_ = auVar85._8_4_;
                auVar85._0_4_ = auVar85._8_4_;
                auVar85._12_4_ = auVar85._8_4_;
                pauVar14[1] = auVar69 & auVar85 | ~auVar85 & auVar84;
                *pauVar14 = auVar33 & auVar117 | ~auVar117 & auVar67;
                pauVar14[2] = auVar84 & auVar85 | ~auVar85 & auVar69;
                pauVar17 = (undefined1 (*) [16])
                           (auVar110._0_8_ & auVar119._0_8_ | ~auVar119._0_8_ & auVar43._0_8_);
                pauVar14 = pauVar14 + 3;
              }
            }
          }
        }
        pfVar16 = (float *)((ulong)pauVar17 & 0xfffffffffffffff0);
        uVar19 = (ulong)((uint)pauVar17 & 0xf);
        fVar94 = fStack_11a4;
        fVar55 = fStack_11a4;
        fVar53 = fStack_11a4;
        fVar51 = fStack_11a4;
        if (uVar19 != 8) {
          lVar18 = 0;
          fStack_11a8 = fStack_11a4;
          fStack_11a0 = fStack_11a4;
          fStack_119c = fStack_11a4;
LAB_00106db0:
          fVar94 = pfVar16[0x18];
          fVar51 = pfVar16[0x19];
          fVar53 = pfVar16[0x1a];
          fVar55 = pfVar16[0x1b];
          fVar42 = pfVar16[0x20];
          fVar46 = pfVar16[0x21];
          fVar47 = pfVar16[0x22];
          fVar48 = pfVar16[0x23];
          fVar89 = *(float *)param_2;
          fVar63 = *(float *)(param_2 + 4);
          fVar93 = *(float *)(param_2 + 8);
          fVar49 = pfVar16[0x10] * fVar94 - pfVar16[0xc] * pfVar16[0x1c];
          fVar50 = pfVar16[0x11] * fVar51 - pfVar16[0xd] * pfVar16[0x1d];
          auVar115._4_4_ = fVar50;
          auVar115._0_4_ = fVar49;
          fVar52 = pfVar16[0x12] * fVar53 - pfVar16[0xe] * pfVar16[0x1e];
          fVar54 = pfVar16[0x13] * fVar55 - pfVar16[0xf] * pfVar16[0x1f];
          fVar90 = pfVar16[8] - fVar93;
          fVar91 = pfVar16[9] - fVar93;
          fVar92 = pfVar16[10] - fVar93;
          fVar93 = pfVar16[0xb] - fVar93;
          fVar56 = pfVar16[4] - fVar63;
          fVar61 = pfVar16[5] - fVar63;
          fVar62 = pfVar16[6] - fVar63;
          fVar63 = pfVar16[7] - fVar63;
          auVar115._8_4_ = fVar52;
          auVar115._12_4_ = fVar54;
          fVar41 = *(float *)(param_2 + 0x10);
          fVar64 = *(float *)(param_2 + 0x14);
          fVar76 = *(float *)(param_2 + 0x18);
          fVar86 = *pfVar16 - fVar89;
          fVar87 = pfVar16[1] - fVar89;
          fVar88 = pfVar16[2] - fVar89;
          fVar89 = pfVar16[3] - fVar89;
          auVar108._0_4_ = pfVar16[0xc] * fVar42 - pfVar16[0x14] * fVar94;
          auVar108._4_4_ = pfVar16[0xd] * fVar46 - pfVar16[0x15] * fVar51;
          auVar108._8_4_ = pfVar16[0xe] * fVar47 - pfVar16[0x16] * fVar53;
          auVar108._12_4_ = pfVar16[0xf] * fVar48 - pfVar16[0x17] * fVar55;
          auVar111._0_4_ = pfVar16[0x1c] * pfVar16[0x14] - pfVar16[0x10] * fVar42;
          auVar111._4_4_ = pfVar16[0x1d] * pfVar16[0x15] - pfVar16[0x11] * fVar46;
          auVar111._8_4_ = pfVar16[0x1e] * pfVar16[0x16] - pfVar16[0x12] * fVar47;
          auVar111._12_4_ = pfVar16[0x1f] * pfVar16[0x17] - pfVar16[0x13] * fVar48;
          fVar103 = fVar86 * fVar64 - fVar56 * fVar41;
          fVar104 = fVar87 * fVar64 - fVar61 * fVar41;
          fVar105 = fVar88 * fVar64 - fVar62 * fVar41;
          fVar106 = fVar89 * fVar64 - fVar63 * fVar41;
          fVar99 = fVar90 * fVar41 - fVar86 * fVar76;
          fVar100 = fVar91 * fVar41 - fVar87 * fVar76;
          fVar101 = fVar92 * fVar41 - fVar88 * fVar76;
          fVar102 = fVar93 * fVar41 - fVar89 * fVar76;
          fVar95 = fVar56 * fVar76 - fVar90 * fVar64;
          fVar96 = fVar61 * fVar76 - fVar91 * fVar64;
          fVar97 = fVar62 * fVar76 - fVar92 * fVar64;
          fVar98 = fVar63 * fVar76 - fVar93 * fVar64;
          fVar32 = fVar64 * auVar108._0_4_ + fVar76 * fVar49 + fVar41 * auVar111._0_4_;
          fVar38 = fVar64 * auVar108._4_4_ + fVar76 * fVar50 + fVar41 * auVar111._4_4_;
          fVar40 = fVar64 * auVar108._8_4_ + fVar76 * fVar52 + fVar41 * auVar111._8_4_;
          fVar41 = fVar64 * auVar108._12_4_ + fVar76 * fVar54 + fVar41 * auVar111._12_4_;
          auVar110._0_4_ = _LC9 & (uint)fVar32;
          auVar110._4_4_ = _UNK_001151f4 & (uint)fVar38;
          auVar110._8_4_ = _UNK_001151f8 & (uint)fVar40;
          auVar110._12_4_ = _UNK_001151fc & (uint)fVar41;
          auVar83._0_4_ = (float)(_LC3 & (uint)fVar32);
          auVar83._4_4_ = (float)(_UNK_001151c4 & (uint)fVar38);
          auVar83._8_4_ = (float)(_UNK_001151c8 & (uint)fVar40);
          auVar83._12_4_ = (float)(_UNK_001151cc & (uint)fVar41);
          auVar43._0_4_ = pfVar16[0x1c] * fVar99 + fVar42 * fVar103 + fVar94 * fVar95;
          auVar43._4_4_ = pfVar16[0x1d] * fVar100 + fVar46 * fVar104 + fVar51 * fVar96;
          auVar43._8_4_ = pfVar16[0x1e] * fVar101 + fVar47 * fVar105 + fVar53 * fVar97;
          auVar43._12_4_ = pfVar16[0x1f] * fVar102 + fVar48 * fVar106 + fVar55 * fVar98;
          auVar43 = auVar43 ^ auVar110;
          fVar42 = auVar43._0_4_;
          fVar46 = auVar43._4_4_;
          fVar47 = auVar43._8_4_;
          fVar48 = auVar43._12_4_;
          auVar69._0_4_ = pfVar16[0x14] * fVar103 + pfVar16[0x10] * fVar99 + pfVar16[0xc] * fVar95;
          auVar69._4_4_ = pfVar16[0x15] * fVar104 + pfVar16[0x11] * fVar100 + pfVar16[0xd] * fVar96;
          auVar69._8_4_ = pfVar16[0x16] * fVar105 + pfVar16[0x12] * fVar101 + pfVar16[0xe] * fVar97;
          auVar69._12_4_ = pfVar16[0x17] * fVar106 + pfVar16[0x13] * fVar102 + pfVar16[0xf] * fVar98
          ;
          auVar69 = auVar69 ^ auVar110;
          fVar64 = auVar69._0_4_;
          fVar76 = auVar69._4_4_;
          fVar95 = auVar69._8_4_;
          fVar96 = auVar69._12_4_;
          auVar84._0_4_ =
               -(uint)((0.0 <= fVar64 && (0.0 <= fVar42 && fVar32 != 0.0)) &&
                      fVar64 + fVar42 <= auVar83._0_4_) & _DAT_00116108;
          auVar84._4_4_ =
               -(uint)(((0.0 <= fVar46 && fVar38 != 0.0) && 0.0 <= fVar76) &&
                      fVar76 + fVar46 <= auVar83._4_4_) & uRam000000000011610c;
          auVar84._8_4_ =
               -(uint)(((fVar40 != 0.0 && 0.0 <= fVar47) && 0.0 <= fVar95) &&
                      fVar95 + fVar47 <= auVar83._8_4_) & uRam0000000000116110;
          auVar84._12_4_ =
               -(uint)(((0.0 <= fVar48 && fVar41 != 0.0) && 0.0 <= fVar96) &&
                      fVar96 + fVar48 <= auVar83._12_4_) & uRam0000000000116114;
          uVar23 = (undefined4)((ulong)param_1 >> 0x20);
          iVar20 = movmskps((int)param_1,auVar84);
          param_1 = (Intersectors *)CONCAT44(uVar23,iVar20);
          fVar51 = fStack_11a8;
          fVar53 = fStack_11a4;
          fVar55 = fStack_11a0;
          fVar94 = fStack_119c;
          if (iVar20 != 0) {
            auVar58._0_4_ = fVar56 * auVar108._0_4_ + fVar90 * fVar49 + fVar86 * auVar111._0_4_;
            auVar58._4_4_ = fVar61 * auVar108._4_4_ + fVar91 * fVar50 + fVar87 * auVar111._4_4_;
            auVar58._8_4_ = fVar62 * auVar108._8_4_ + fVar92 * fVar52 + fVar88 * auVar111._8_4_;
            auVar58._12_4_ = fVar63 * auVar108._12_4_ + fVar93 * fVar54 + fVar89 * auVar111._12_4_;
            auVar58 = auVar58 ^ auVar110;
            fVar63 = auVar58._0_4_;
            fVar93 = auVar58._4_4_;
            fVar41 = auVar58._8_4_;
            fVar32 = auVar58._12_4_;
            bVar6 = fVar63 <= fStack_11a8 * auVar83._0_4_;
            bVar7 = fVar93 <= fStack_11a4 * auVar83._4_4_;
            bVar8 = fVar41 <= fStack_11a0 * auVar83._8_4_;
            bVar9 = fVar32 <= fStack_119c * auVar83._12_4_;
            auVar77._4_4_ = -(uint)bVar7;
            auVar77._0_4_ = -(uint)bVar6;
            auVar77._8_4_ = -(uint)bVar8;
            auVar77._12_4_ = -(uint)bVar9;
            fVar89 = *(float *)(param_2 + 0xc);
            auVar34._0_4_ = auVar84._0_4_ & -(uint)(fVar89 * auVar83._0_4_ < fVar63 && bVar6);
            auVar34._4_4_ = auVar84._4_4_ & -(uint)(fVar89 * auVar83._4_4_ < fVar93 && bVar7);
            auVar34._8_4_ = auVar84._8_4_ & -(uint)(fVar89 * auVar83._8_4_ < fVar41 && bVar8);
            auVar34._12_4_ = auVar84._12_4_ & -(uint)(fVar89 * auVar83._12_4_ < fVar32 && bVar9);
            iVar20 = movmskps(iVar20,auVar34);
            param_1 = (Intersectors *)CONCAT44(uVar23,iVar20);
            if (iVar20 != 0) {
              auVar33 = rcpps(auVar77,auVar83);
              auStack_1078 = auVar34;
              lVar4 = *(long *)param_3;
              fVar94 = auVar33._0_4_;
              fVar51 = auVar33._4_4_;
              fVar53 = auVar33._8_4_;
              fVar55 = auVar33._12_4_;
              auStack_fb8 = auVar111;
              auStack_fa8 = auVar108;
              auStack_f98 = auVar115;
              fVar94 = (_LC7 - auVar83._0_4_ * fVar94) * fVar94 + fVar94;
              fVar51 = (_LC7 - auVar83._4_4_ * fVar51) * fVar51 + fVar51;
              fVar53 = (_LC7 - auVar83._8_4_ * fVar53) * fVar53 + fVar53;
              fVar55 = (_LC7 - auVar83._12_4_ * fVar55) * fVar55 + fVar55;
              auVar59._0_4_ = fVar63 * fVar94;
              auVar59._4_4_ = fVar93 * fVar51;
              auVar59._8_4_ = fVar41 * fVar53;
              auVar59._12_4_ = fVar32 * fVar55;
              auStack_fc8 = auVar59;
              afStack_fe8[0] = fVar42 * fVar94;
              afStack_fe8[1] = fVar46 * fVar51;
              afStack_fe8[2] = fVar47 * fVar53;
              afStack_fe8[3] = fVar48 * fVar55;
              afStack_fd8[0] = fVar94 * fVar64;
              afStack_fd8[1] = fVar51 * fVar76;
              afStack_fd8[2] = fVar53 * fVar95;
              afStack_fd8[3] = fVar55 * fVar96;
              auVar44._0_4_ = auVar34._0_4_ & (uint)auVar59._0_4_;
              auVar44._4_4_ = auVar34._4_4_ & (uint)auVar59._4_4_;
              auVar44._8_4_ = auVar34._8_4_ & (uint)auVar59._8_4_;
              auVar44._12_4_ = auVar34._12_4_ & (uint)auVar59._12_4_;
              auVar70._0_4_ = ~auVar34._0_4_ & _LC18;
              auVar70._4_4_ = ~auVar34._4_4_ & _LC18;
              auVar70._8_4_ = ~auVar34._8_4_ & _LC18;
              auVar70._12_4_ = ~auVar34._12_4_ & _LC18;
              auVar44 = auVar44 | auVar70;
              auVar71._4_4_ = auVar44._0_4_;
              auVar71._0_4_ = auVar44._4_4_;
              auVar71._8_4_ = auVar44._12_4_;
              auVar71._12_4_ = auVar44._8_4_;
              auVar33 = minps(auVar71,auVar44);
              auVar78._0_8_ = auVar33._8_8_;
              auVar78._8_4_ = auVar33._0_4_;
              auVar78._12_4_ = auVar33._4_4_;
              auVar33 = minps(auVar78,auVar33);
              auVar35._0_4_ = auVar34._0_4_ & -(uint)(auVar44._0_4_ == auVar33._0_4_);
              auVar35._4_4_ = auVar34._4_4_ & -(uint)(auVar44._4_4_ == auVar33._4_4_);
              auVar35._8_4_ = auVar34._8_4_ & -(uint)(auVar44._8_4_ == auVar33._8_4_);
              auVar35._12_4_ = auVar34._12_4_ & -(uint)(auVar44._12_4_ == auVar33._12_4_);
              iVar20 = movmskps((int)lVar4,auVar35);
              if (iVar20 != 0) {
                param_1 = (Intersectors *)CONCAT44((int)((ulong)lVar4 >> 0x20),iVar20);
              }
              lVar26 = 0;
              if (param_1 != (Intersectors *)0x0) {
                for (; ((ulong)param_1 >> lVar26 & 1) == 0; lVar26 = lVar26 + 1) {
                }
              }
              fVar94 = pfVar16[lVar26 + 0x24];
              uVar27 = _LC18;
              uVar28 = _LC18;
              uVar29 = _LC18;
              uVar30 = _LC18;
              do {
                lVar5 = *(long *)(*(long *)(lVar4 + 0x1e0) + (ulong)(uint)fVar94 * 8);
                pbVar21 = *(byte **)(param_3 + 0x10);
                pcVar15 = *(code **)(pbVar21 + 0x10);
                if ((pcVar15 == (code *)0x0) && (*(long *)(lVar5 + 0x40) == 0)) {
                  fVar51 = *(float *)(auStack_fc8 + lVar26 * 4);
                  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(auStack_fb8 + lVar26 * 4);
                  uVar23 = *(undefined4 *)(auStack_fa8 + lVar26 * 4);
                  fVar53 = afStack_fe8[lVar26];
                  fVar55 = afStack_fd8[lVar26];
                  *(float *)(param_2 + 0x20) = fVar51;
                  *(undefined4 *)(param_2 + 0x34) = uVar23;
                  uVar23 = *(undefined4 *)(auStack_f98 + lVar26 * 4);
                  *(float *)(param_2 + 0x3c) = fVar53;
                  *(undefined4 *)(param_2 + 0x38) = uVar23;
                  *(float *)(param_2 + 0x40) = fVar55;
                  fStack_11a4 = fVar51;
                  fStack_11a8 = fVar51;
                  fStack_11a0 = fVar51;
                  fStack_119c = fVar51;
                  *(float *)(param_2 + 0x44) = pfVar16[lVar26 + 0x28];
                  *(float *)(param_2 + 0x48) = fVar94;
                  param_1 = (Intersectors *)(ulong)**(uint **)(param_3 + 8);
                  *(uint *)(param_2 + 0x4c) = **(uint **)(param_3 + 8);
                  fVar53 = fVar51;
                  fVar55 = fVar51;
                  fVar94 = fVar51;
                  break;
                }
                fStack_1050 = fVar94;
                uStack_1060 = *(undefined4 *)(auStack_f98 + lVar26 * 4);
                uStack_10ac = 0xffffffff;
                fStack_1058 = afStack_fd8[lVar26];
                puStack_1098 = *(undefined4 **)(param_3 + 8);
                fStack_105c = afStack_fe8[lVar26];
                fVar51 = *(float *)(param_2 + 0x20);
                uStack_1064 = *(undefined4 *)(auStack_fa8 + lVar26 * 4);
                fStack_1054 = pfVar16[lVar26 + 0x28];
                iStack_1068 = *(int *)(auStack_fb8 + lVar26 * 4);
                uStack_104c = *puStack_1098;
                *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar26 * 4);
                pRStack_10a8 = (RayHitK *)&uStack_10ac;
                uStack_10a0 = *(undefined8 *)(lVar5 + 0x18);
                piStack_1088 = &iStack_1068;
                pRStack_1090 = param_2;
                uStack_1080 = 1;
                if (*(code **)(lVar5 + 0x40) == (code *)0x0) {
LAB_001074d8:
                  if (pcVar15 != (code *)0x0) {
                    if (((*pbVar21 & 2) != 0) || ((*(byte *)(lVar5 + 0x3e) & 0x40) != 0)) {
                      (*pcVar15)(&pRStack_10a8);
                      uVar27 = _LC18;
                      uVar28 = _UNK_00115214;
                      uVar29 = _UNK_00115218;
                      uVar30 = _UNK_0011521c;
                    }
                    if (*(int *)pRStack_10a8 == 0) goto LAB_001077e8;
                  }
                  *(int *)(pRStack_1090 + 0x30) = *piStack_1088;
                  *(int *)(pRStack_1090 + 0x34) = piStack_1088[1];
                  *(int *)(pRStack_1090 + 0x38) = piStack_1088[2];
                  *(int *)(pRStack_1090 + 0x3c) = piStack_1088[3];
                  *(int *)(pRStack_1090 + 0x40) = piStack_1088[4];
                  *(int *)(pRStack_1090 + 0x44) = piStack_1088[5];
                  *(int *)(pRStack_1090 + 0x48) = piStack_1088[6];
                  *(int *)(pRStack_1090 + 0x4c) = piStack_1088[7];
                  fVar51 = *(float *)(param_2 + 0x20);
                  pRVar22 = pRStack_1090;
                }
                else {
                  (**(code **)(lVar5 + 0x40))(&pRStack_10a8);
                  uVar27 = _LC18;
                  uVar28 = _UNK_00115214;
                  uVar29 = _UNK_00115218;
                  uVar30 = _UNK_0011521c;
                  if (*(int *)pRStack_10a8 != 0) {
                    pbVar21 = *(byte **)(param_3 + 0x10);
                    pcVar15 = *(code **)(pbVar21 + 0x10);
                    goto LAB_001074d8;
                  }
LAB_001077e8:
                  *(float *)(param_2 + 0x20) = fVar51;
                  pRVar22 = pRStack_10a8;
                }
                *(undefined4 *)(auStack_1078 + lVar26 * 4) = 0;
                auStack_1078._0_4_ = -(uint)(auVar59._0_4_ <= fVar51) & auStack_1078._0_4_;
                auStack_1078._4_4_ = -(uint)(auVar59._4_4_ <= fVar51) & auStack_1078._4_4_;
                auStack_1078._8_4_ = -(uint)(auVar59._8_4_ <= fVar51) & auStack_1078._8_4_;
                auStack_1078._12_4_ = -(uint)(auVar59._12_4_ <= fVar51) & auStack_1078._12_4_;
                iVar20 = movmskps((int)pRVar22,auStack_1078);
                param_1 = (Intersectors *)CONCAT44((int)((ulong)pRVar22 >> 0x20),iVar20);
                if (iVar20 == 0) goto LAB_001077f4;
                auVar73._0_4_ = ~auStack_1078._0_4_ & uVar27;
                auVar73._4_4_ = ~auStack_1078._4_4_ & uVar28;
                auVar73._8_4_ = ~auStack_1078._8_4_ & uVar29;
                auVar73._12_4_ = ~auStack_1078._12_4_ & uVar30;
                auVar45._0_4_ = auStack_1078._0_4_ & (uint)auVar59._0_4_;
                auVar45._4_4_ = auStack_1078._4_4_ & (uint)auVar59._4_4_;
                auVar45._8_4_ = auStack_1078._8_4_ & (uint)auVar59._8_4_;
                auVar45._12_4_ = auStack_1078._12_4_ & (uint)auVar59._12_4_;
                auVar45 = auVar45 | auVar73;
                auVar74._4_4_ = auVar45._0_4_;
                auVar74._0_4_ = auVar45._4_4_;
                auVar74._8_4_ = auVar45._12_4_;
                auVar74._12_4_ = auVar45._8_4_;
                auVar33 = minps(auVar74,auVar45);
                auVar79._0_8_ = auVar33._8_8_;
                auVar79._8_4_ = auVar33._0_4_;
                auVar79._12_4_ = auVar33._4_4_;
                auVar33 = minps(auVar79,auVar33);
                auVar36._0_4_ = auStack_1078._0_4_ & -(uint)(auVar45._0_4_ == auVar33._0_4_);
                auVar36._4_4_ = auStack_1078._4_4_ & -(uint)(auVar45._4_4_ == auVar33._4_4_);
                auVar36._8_4_ = auStack_1078._8_4_ & -(uint)(auVar45._8_4_ == auVar33._8_4_);
                auVar36._12_4_ = auStack_1078._12_4_ & -(uint)(auVar45._12_4_ == auVar33._12_4_);
                iVar25 = movmskps((int)lVar26,auVar36);
                if (iVar25 != 0) {
                  iVar20 = iVar25;
                }
                lVar26 = 0;
                if ((long)iVar20 != 0) {
                  for (; ((ulong)(long)iVar20 >> lVar26 & 1) == 0; lVar26 = lVar26 + 1) {
                  }
                }
                fVar94 = pfVar16[lVar26 + 0x24];
              } while( true );
            }
          }
          goto LAB_00106f1d;
        }
      }
      goto joined_r0x00106c43;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001077f4:
  fStack_11a4 = fVar51;
  fStack_11a8 = fVar51;
  fStack_11a0 = fVar51;
  fStack_119c = fVar51;
  fVar53 = fVar51;
  fVar55 = fVar51;
  fVar94 = fVar51;
LAB_00106f1d:
  lVar18 = lVar18 + 1;
  pfVar16 = pfVar16 + 0x2c;
  if (lVar18 == uVar19 - 8) goto joined_r0x00106c43;
  goto LAB_00106db0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNIntersector1<4, 16777232, false,
   embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4, true> >
   >::intersect(embree::Accel::Intersectors const*, embree::RayHitK<1>&, embree::RayQueryContext*)
    */

void embree::sse2::
     BVHNIntersector1<4,16777232,false,embree::sse2::ArrayIntersector1<embree::sse2::TriangleMvMBIntersector1Moeller<4,true>>>
     ::intersect(Intersectors *param_1,RayHitK *param_2,RayQueryContext *param_3)

{
  RayQueryContext *pRVar1;
  RayQueryContext *pRVar2;
  RayQueryContext *pRVar3;
  RayQueryContext *pRVar4;
  RayQueryContext *pRVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  ulong uVar19;
  RayQueryContext *pRVar20;
  long lVar21;
  RayHitK *pRVar22;
  undefined4 uVar23;
  int iVar24;
  RayQueryContext *pRVar25;
  RayHitK *pRVar26;
  float *pfVar27;
  ulong uVar28;
  int iVar29;
  RayHitK *pRVar30;
  long lVar31;
  long in_FS_OFFSET;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar43;
  float fVar45;
  undefined1 auVar39 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  float fVar79;
  float fVar80;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar81;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar82;
  float fVar83;
  float fVar94;
  float fVar96;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar100;
  float fVar107;
  float fVar108;
  undefined1 auVar101 [16];
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
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
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined8 local_11c8;
  undefined8 local_11b8;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined1 auStack_1188 [8];
  float fStack_1180;
  float fStack_117c;
  undefined4 uStack_10ac;
  RayHitK *pRStack_10a8;
  RayHitK *pRStack_10a0;
  undefined4 *puStack_1098;
  RayHitK *pRStack_1090;
  undefined4 *puStack_1088;
  undefined4 uStack_1080;
  undefined1 auStack_1078 [16];
  undefined4 uStack_1068;
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
    fVar54 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar54 < 0.0) {
      fVar54 = 0.0;
    }
    fVar48 = *(float *)(param_2 + 0xc);
    if (fVar48 < 0.0) {
      fVar48 = 0.0;
    }
    fVar13 = *(float *)param_2;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_2 + 8);
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar101._0_4_ = ~uVar32 & *(uint *)(param_2 + 0x10);
    auVar101._4_4_ = ~uVar33 & *(uint *)(param_2 + 0x14);
    auVar101._8_4_ = ~uVar34 & *(uint *)(param_2 + 0x18);
    auVar101._12_4_ = ~uVar35 & *(uint *)(param_2 + 0x1c);
    auVar39._0_4_ = uVar32 & (uint)_LC5;
    auVar39._4_4_ = uVar33 & (uint)_LC5;
    auVar39._8_4_ = uVar34 & (uint)_LC5;
    auVar39._12_4_ = uVar35 & (uint)_LC5;
    auVar39 = auVar39 | auVar101;
    auVar84 = rcpps(auVar101,auVar39);
    fVar36 = auVar84._0_4_;
    fVar43 = auVar84._4_4_;
    fVar45 = auVar84._8_4_;
    fVar36 = (_LC7 - auVar39._0_4_ * fVar36) * fVar36 + fVar36;
    fVar43 = (_LC7 - auVar39._4_4_ * fVar43) * fVar43 + fVar43;
    fVar45 = (_LC7 - auVar39._8_4_ * fVar45) * fVar45 + fVar45;
    uVar18 = (ulong)(fVar36 < 0.0) * 0x10;
    auVar84._4_4_ = fVar48;
    auVar84._0_4_ = fVar48;
    auVar84._8_4_ = fVar48;
    auVar84._12_4_ = fVar48;
    pauVar16 = (undefined1 (*) [16])local_f78;
    pRVar25 = param_3;
    fVar55 = fVar54;
    fVar52 = fVar54;
    fVar48 = fVar54;
joined_r0x001079bb:
    pauVar17 = pauVar16;
    if (pauVar17 != (undefined1 (*) [16])local_f88) {
      auStack_1188._4_4_ = *(undefined4 *)(param_2 + 0x20);
      pauVar16 = pauVar17 + -1;
      if (*(float *)(pauVar17[-1] + 8) <= (float)auStack_1188._4_4_) {
        fVar38 = *(float *)(param_2 + 0x1c);
        uVar28 = *(ulong *)pauVar17[-1];
        while ((uVar28 & 8) == 0) {
          auVar136._4_4_ = fVar52;
          auVar136._0_4_ = fVar48;
          auVar136._8_4_ = fVar55;
          auVar136._12_4_ = fVar54;
          pRVar25 = (RayQueryContext *)(uVar28 & 0xfffffffffffffff0);
          pRVar1 = pRVar25 + (ulong)(-(uint)(fVar43 < 0.0) & 0x10) + 0x40;
          pRVar2 = pRVar25 + (ulong)(-(uint)(fVar45 < 0.0) & 0x10) + 0x60;
          pRVar3 = pRVar25 + uVar18 + 0x20;
          pRVar4 = pRVar25 + (uVar18 ^ 0x10) + 0x20;
          pRVar5 = pRVar25 + (-(ulong)(fVar43 < 0.0) & 0xfffffffffffffff0) + 0x50;
          pRVar20 = pRVar25 + (-(ulong)(fVar45 < 0.0) & 0xfffffffffffffff0) + 0x70;
          auVar69._0_4_ =
               ((*(float *)(pRVar1 + 0x60) * fVar38 + *(float *)pRVar1) - fVar14) * fVar43;
          auVar69._4_4_ =
               ((*(float *)(pRVar1 + 100) * fVar38 + *(float *)(pRVar1 + 4)) - fVar14) * fVar43;
          auVar69._8_4_ =
               ((*(float *)(pRVar1 + 0x68) * fVar38 + *(float *)(pRVar1 + 8)) - fVar14) * fVar43;
          auVar69._12_4_ =
               ((*(float *)(pRVar1 + 0x6c) * fVar38 + *(float *)(pRVar1 + 0xc)) - fVar14) * fVar43;
          auVar85._0_4_ =
               ((*(float *)(pRVar2 + 0x60) * fVar38 + *(float *)pRVar2) - fVar15) * fVar45;
          auVar85._4_4_ =
               ((*(float *)(pRVar2 + 100) * fVar38 + *(float *)(pRVar2 + 4)) - fVar15) * fVar45;
          auVar85._8_4_ =
               ((*(float *)(pRVar2 + 0x68) * fVar38 + *(float *)(pRVar2 + 8)) - fVar15) * fVar45;
          auVar85._12_4_ =
               ((*(float *)(pRVar2 + 0x6c) * fVar38 + *(float *)(pRVar2 + 0xc)) - fVar15) * fVar45;
          auVar39 = maxps(auVar69,auVar85);
          auVar86._0_4_ =
               ((*(float *)(pRVar3 + 0x60) * fVar38 + *(float *)pRVar3) - fVar13) * fVar36;
          auVar86._4_4_ =
               ((*(float *)(pRVar3 + 100) * fVar38 + *(float *)(pRVar3 + 4)) - fVar13) * fVar36;
          auVar86._8_4_ =
               ((*(float *)(pRVar3 + 0x68) * fVar38 + *(float *)(pRVar3 + 8)) - fVar13) * fVar36;
          auVar86._12_4_ =
               ((*(float *)(pRVar3 + 0x6c) * fVar38 + *(float *)(pRVar3 + 0xc)) - fVar13) * fVar36;
          auVar101 = maxps(auVar84,auVar86);
          local_1048[0] = maxps(auVar101,auVar39);
          auVar87._0_4_ =
               ((*(float *)(pRVar20 + 0x60) * fVar38 + *(float *)pRVar20) - fVar15) * fVar45;
          auVar87._4_4_ =
               ((*(float *)(pRVar20 + 100) * fVar38 + *(float *)(pRVar20 + 4)) - fVar15) * fVar45;
          auVar87._8_4_ =
               ((*(float *)(pRVar20 + 0x68) * fVar38 + *(float *)(pRVar20 + 8)) - fVar15) * fVar45;
          auVar87._12_4_ =
               ((*(float *)(pRVar20 + 0x6c) * fVar38 + *(float *)(pRVar20 + 0xc)) - fVar15) * fVar45
          ;
          auVar70._0_4_ =
               ((*(float *)(pRVar5 + 0x60) * fVar38 + *(float *)pRVar5) - fVar14) * fVar43;
          auVar70._4_4_ =
               ((*(float *)(pRVar5 + 100) * fVar38 + *(float *)(pRVar5 + 4)) - fVar14) * fVar43;
          auVar70._8_4_ =
               ((*(float *)(pRVar5 + 0x68) * fVar38 + *(float *)(pRVar5 + 8)) - fVar14) * fVar43;
          auVar70._12_4_ =
               ((*(float *)(pRVar5 + 0x6c) * fVar38 + *(float *)(pRVar5 + 0xc)) - fVar14) * fVar43;
          auVar39 = minps(auVar70,auVar87);
          auVar88._0_4_ =
               ((*(float *)(pRVar4 + 0x60) * fVar38 + *(float *)pRVar4) - fVar13) * fVar36;
          auVar88._4_4_ =
               ((*(float *)(pRVar4 + 100) * fVar38 + *(float *)(pRVar4 + 4)) - fVar13) * fVar36;
          auVar88._8_4_ =
               ((*(float *)(pRVar4 + 0x68) * fVar38 + *(float *)(pRVar4 + 8)) - fVar13) * fVar36;
          auVar88._12_4_ =
               ((*(float *)(pRVar4 + 0x6c) * fVar38 + *(float *)(pRVar4 + 0xc)) - fVar13) * fVar36;
          auVar101 = minps(auVar136,auVar88);
          auVar39 = minps(auVar101,auVar39);
          bVar8 = SUB164(local_1048[0],0) <= auVar39._0_4_;
          bVar9 = SUB164(local_1048[0],4) <= auVar39._4_4_;
          bVar10 = SUB164(local_1048[0],8) <= auVar39._8_4_;
          bVar11 = SUB164(local_1048[0],0xc) <= auVar39._12_4_;
          auVar71._4_4_ = -(uint)bVar9;
          auVar71._0_4_ = -(uint)bVar8;
          auVar71._8_4_ = -(uint)bVar10;
          auVar71._12_4_ = -(uint)bVar11;
          if (((uint)uVar28 & 0xf) == 6) {
            auVar72._0_4_ =
                 -(uint)((*(float *)(pRVar25 + 0xe0) <= fVar38 &&
                         fVar38 < *(float *)(pRVar25 + 0xf0)) && bVar8);
            auVar72._4_4_ =
                 -(uint)((*(float *)(pRVar25 + 0xe4) <= fVar38 &&
                         fVar38 < *(float *)(pRVar25 + 0xf4)) && bVar9);
            auVar72._8_4_ =
                 -(uint)((*(float *)(pRVar25 + 0xe8) <= fVar38 &&
                         fVar38 < *(float *)(pRVar25 + 0xf8)) && bVar10);
            auVar72._12_4_ =
                 -(uint)((*(float *)(pRVar25 + 0xec) <= fVar38 &&
                         fVar38 < *(float *)(pRVar25 + 0xfc)) && bVar11);
            uVar23 = movmskps((int)pRVar4,auVar72);
          }
          else {
            uVar23 = movmskps((int)pRVar4,auVar71);
          }
          uVar19 = CONCAT44((int)((ulong)pRVar4 >> 0x20),uVar23);
          if (uVar19 == 0) goto joined_r0x001079bb;
          lVar21 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
            }
          }
          uVar6 = *(ulong *)(pRVar25 + lVar21 * 8);
          uVar19 = uVar19 - 1 & uVar19;
          uVar28 = uVar6;
          if (uVar19 != 0) {
            lVar7 = 0;
            if (uVar19 != 0) {
              for (; (uVar19 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
              }
            }
            uVar28 = *(ulong *)(pRVar25 + lVar7 * 8);
            fVar37 = afStack_fe8[lVar21 + -0x18];
            fVar44 = afStack_fe8[lVar7 + -0x18];
            uVar19 = uVar19 & uVar19 - 1;
            if (uVar19 == 0) {
              if ((uint)fVar37 < (uint)fVar44) {
                *(ulong *)*pauVar16 = uVar28;
                *(float *)(*pauVar16 + 8) = fVar44;
                pauVar16 = pauVar16 + 1;
                uVar28 = uVar6;
              }
              else {
                *(ulong *)*pauVar16 = uVar6;
                *(float *)(*pauVar16 + 8) = fVar37;
                pauVar16 = pauVar16 + 1;
              }
            }
            else {
              auVar102._8_4_ = fVar37;
              auVar102._0_8_ = uVar6;
              auVar102._12_4_ = 0;
              lVar21 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
                }
              }
              uVar6 = *(ulong *)(pRVar25 + lVar21 * 8);
              fVar46 = afStack_fe8[lVar21 + -0x18];
              auVar145._8_4_ = fVar44;
              auVar145._0_8_ = uVar28;
              auVar145._12_4_ = 0;
              auVar75._8_4_ = fVar46;
              auVar75._0_8_ = uVar6;
              auVar75._12_4_ = 0;
              auVar91._8_4_ = -(uint)((int)fVar37 < (int)fVar44);
              uVar19 = uVar19 - 1 & uVar19;
              if (uVar19 == 0) {
                auVar91._4_4_ = auVar91._8_4_;
                auVar91._0_4_ = auVar91._8_4_;
                auVar91._12_4_ = auVar91._8_4_;
                auVar40 = ~auVar91 & auVar145 | auVar102 & auVar91;
                auVar101 = auVar91 & auVar145 | ~auVar91 & auVar102;
                auVar103._8_4_ = -(uint)(auVar40._8_4_ < (int)fVar46);
                auVar103._0_8_ = CONCAT44(auVar103._8_4_,auVar103._8_4_);
                auVar103._12_4_ = auVar103._8_4_;
                auVar39 = auVar75 & auVar103 | ~auVar103 & auVar40;
                auVar137._8_4_ = -(uint)(auVar101._8_4_ < auVar39._8_4_);
                auVar137._4_4_ = auVar137._8_4_;
                auVar137._0_4_ = auVar137._8_4_;
                auVar137._12_4_ = auVar137._8_4_;
                *pauVar16 = auVar39 & auVar137 | ~auVar137 & auVar101;
                pauVar16[1] = auVar101 & auVar137 | ~auVar137 & auVar39;
                uVar28 = auVar40._0_8_ & auVar103._0_8_ | ~auVar103._0_8_ & uVar6;
                pauVar16 = pauVar16 + 2;
              }
              else {
                lVar21 = 0;
                if (uVar19 != 0) {
                  for (; (uVar19 >> lVar21 & 1) == 0; lVar21 = lVar21 + 1) {
                  }
                }
                auVar78._8_4_ = afStack_fe8[lVar21 + -0x18];
                auVar78._0_8_ = *(undefined8 *)(pRVar25 + lVar21 * 8);
                auVar78._12_4_ = 0;
                auVar138._4_4_ = auVar91._8_4_;
                auVar138._0_4_ = auVar91._8_4_;
                auVar138._8_4_ = auVar91._8_4_;
                auVar138._12_4_ = auVar91._8_4_;
                auVar57 = auVar138 & auVar102 | ~auVar138 & auVar145;
                auVar104 = auVar138 & auVar145 | ~auVar138 & auVar102;
                auVar105._8_4_ = -(uint)((int)fVar46 < (int)afStack_fe8[lVar21 + -0x18]);
                auVar105._4_4_ = auVar105._8_4_;
                auVar105._0_4_ = auVar105._8_4_;
                auVar105._12_4_ = auVar105._8_4_;
                auVar40 = auVar75 & auVar105 | ~auVar105 & auVar78;
                auVar39 = auVar78 & auVar105 | ~auVar105 & auVar75;
                iVar24 = -(uint)(auVar104._8_4_ < auVar39._8_4_);
                auVar139._4_4_ = iVar24;
                auVar139._0_4_ = iVar24;
                auVar139._8_4_ = iVar24;
                auVar139._12_4_ = iVar24;
                auVar101 = auVar104 & auVar139 | ~auVar139 & auVar39;
                auVar106._8_4_ = -(uint)(auVar57._8_4_ < auVar40._8_4_);
                auVar106._0_8_ = CONCAT44(auVar106._8_4_,auVar106._8_4_);
                auVar106._12_4_ = auVar106._8_4_;
                auVar146 = ~auVar106 & auVar57 | auVar40 & auVar106;
                auVar93._8_4_ = -(uint)(auVar146._8_4_ < auVar101._8_4_);
                auVar93._4_4_ = auVar93._8_4_;
                auVar93._0_4_ = auVar93._8_4_;
                auVar93._12_4_ = auVar93._8_4_;
                pauVar16[1] = auVar101 & auVar93 | ~auVar93 & auVar146;
                *pauVar16 = auVar139 & auVar39 | ~auVar139 & auVar104;
                pauVar16[2] = auVar146 & auVar93 | ~auVar93 & auVar101;
                uVar28 = ~auVar106._0_8_ & auVar40._0_8_ | auVar57._0_8_ & auVar106._0_8_;
                pauVar16 = pauVar16 + 3;
              }
            }
          }
        }
        pfVar27 = (float *)(uVar28 & 0xfffffffffffffff0);
        uVar28 = (ulong)((uint)uVar28 & 0xf);
        fVar54 = (float)auStack_1188._4_4_;
        fVar55 = (float)auStack_1188._4_4_;
        fVar52 = (float)auStack_1188._4_4_;
        fVar48 = (float)auStack_1188._4_4_;
        if (uVar28 != 8) {
          lVar21 = 0;
          auStack_1188._0_4_ = auStack_1188._4_4_;
          fStack_1180 = (float)auStack_1188._4_4_;
          fStack_117c = (float)auStack_1188._4_4_;
          do {
            fVar54 = *(float *)param_2;
            fVar48 = *(float *)(param_2 + 4);
            fVar52 = *(float *)(param_2 + 8);
            fVar114 = pfVar27[0x2c] * fVar38 + pfVar27[8];
            fVar115 = pfVar27[0x2d] * fVar38 + pfVar27[9];
            fVar116 = pfVar27[0x2e] * fVar38 + pfVar27[10];
            fVar117 = pfVar27[0x2f] * fVar38 + pfVar27[0xb];
            fVar62 = pfVar27[0x28] * fVar38 + pfVar27[4];
            fVar65 = pfVar27[0x29] * fVar38 + pfVar27[5];
            fVar66 = pfVar27[0x2a] * fVar38 + pfVar27[6];
            fVar67 = pfVar27[0x2b] * fVar38 + pfVar27[7];
            fVar100 = pfVar27[0x24] * fVar38 + *pfVar27;
            fVar107 = pfVar27[0x25] * fVar38 + pfVar27[1];
            fVar108 = pfVar27[0x26] * fVar38 + pfVar27[2];
            fVar109 = pfVar27[0x27] * fVar38 + pfVar27[3];
            fVar144 = fVar114 - (pfVar27[0x38] * fVar38 + pfVar27[0x14]);
            fVar147 = fVar115 - (pfVar27[0x39] * fVar38 + pfVar27[0x15]);
            fVar148 = fVar116 - (pfVar27[0x3a] * fVar38 + pfVar27[0x16]);
            fVar149 = fVar117 - (pfVar27[0x3b] * fVar38 + pfVar27[0x17]);
            fVar68 = (pfVar27[0x44] * fVar38 + pfVar27[0x20]) - fVar114;
            fVar79 = (pfVar27[0x45] * fVar38 + pfVar27[0x21]) - fVar115;
            fVar80 = (pfVar27[0x46] * fVar38 + pfVar27[0x22]) - fVar116;
            fVar81 = (pfVar27[0x47] * fVar38 + pfVar27[0x23]) - fVar117;
            fVar56 = (pfVar27[0x40] * fVar38 + pfVar27[0x1c]) - fVar62;
            fVar59 = (pfVar27[0x41] * fVar38 + pfVar27[0x1d]) - fVar65;
            fVar60 = (pfVar27[0x42] * fVar38 + pfVar27[0x1e]) - fVar66;
            fVar61 = (pfVar27[0x43] * fVar38 + pfVar27[0x1f]) - fVar67;
            fVar118 = fVar62 - (pfVar27[0x34] * fVar38 + pfVar27[0x10]);
            fVar119 = fVar65 - (pfVar27[0x35] * fVar38 + pfVar27[0x11]);
            fVar120 = fVar66 - (pfVar27[0x36] * fVar38 + pfVar27[0x12]);
            fVar121 = fVar67 - (pfVar27[0x37] * fVar38 + pfVar27[0x13]);
            fVar110 = fVar100 - (pfVar27[0x30] * fVar38 + pfVar27[0xc]);
            fVar111 = fVar107 - (pfVar27[0x31] * fVar38 + pfVar27[0xd]);
            fVar112 = fVar108 - (pfVar27[0x32] * fVar38 + pfVar27[0xe]);
            fVar113 = fVar109 - (pfVar27[0x33] * fVar38 + pfVar27[0xf]);
            fVar37 = (fVar38 * pfVar27[0x3c] + pfVar27[0x18]) - fVar100;
            fVar44 = (fVar38 * pfVar27[0x3d] + pfVar27[0x19]) - fVar107;
            fVar46 = (fVar38 * pfVar27[0x3e] + pfVar27[0x1a]) - fVar108;
            fVar47 = (fVar38 * pfVar27[0x3f] + pfVar27[0x1b]) - fVar109;
            fVar100 = fVar100 - fVar54;
            fVar107 = fVar107 - fVar54;
            fVar108 = fVar108 - fVar54;
            fVar109 = fVar109 - fVar54;
            fVar82 = fVar118 * fVar37 - fVar110 * fVar56;
            fVar94 = fVar119 * fVar44 - fVar111 * fVar59;
            fVar96 = fVar120 * fVar46 - fVar112 * fVar60;
            fVar98 = fVar121 * fVar47 - fVar113 * fVar61;
            local_11c8 = CONCAT44(fVar94,fVar82);
            fVar83 = fVar110 * fVar68 - fVar144 * fVar37;
            fVar95 = fVar111 * fVar79 - fVar147 * fVar44;
            fVar97 = fVar112 * fVar80 - fVar148 * fVar46;
            fVar99 = fVar113 * fVar81 - fVar149 * fVar47;
            local_11b8 = CONCAT44(fVar95,fVar83);
            fVar54 = *(float *)(param_2 + 0x10);
            fVar55 = *(float *)(param_2 + 0x14);
            fVar38 = *(float *)(param_2 + 0x18);
            fVar130 = fVar144 * fVar56 - fVar118 * fVar68;
            fVar132 = fVar147 * fVar59 - fVar119 * fVar79;
            uStack_11a0._0_4_ = fVar148 * fVar60 - fVar120 * fVar80;
            uStack_11a0._4_4_ = fVar149 * fVar61 - fVar121 * fVar81;
            uStack_11a8 = CONCAT44(fVar132,fVar130);
            fVar62 = fVar62 - fVar48;
            fVar65 = fVar65 - fVar48;
            fVar66 = fVar66 - fVar48;
            fVar67 = fVar67 - fVar48;
            fVar114 = fVar114 - fVar52;
            fVar115 = fVar115 - fVar52;
            fVar116 = fVar116 - fVar52;
            fVar117 = fVar117 - fVar52;
            fVar140 = fVar100 * fVar55 - fVar62 * fVar54;
            fVar141 = fVar107 * fVar55 - fVar65 * fVar54;
            fVar142 = fVar108 * fVar55 - fVar66 * fVar54;
            fVar143 = fVar109 * fVar55 - fVar67 * fVar54;
            fVar131 = fVar114 * fVar54 - fVar100 * fVar38;
            fVar133 = fVar115 * fVar54 - fVar107 * fVar38;
            fVar134 = fVar116 * fVar54 - fVar108 * fVar38;
            fVar135 = fVar117 * fVar54 - fVar109 * fVar38;
            fVar126 = fVar62 * fVar38 - fVar114 * fVar55;
            fVar127 = fVar65 * fVar38 - fVar115 * fVar55;
            fVar128 = fVar66 * fVar38 - fVar116 * fVar55;
            fVar129 = fVar67 * fVar38 - fVar117 * fVar55;
            fVar48 = fVar55 * fVar83 + fVar38 * fVar82 + fVar54 * fVar130;
            fVar52 = fVar55 * fVar95 + fVar38 * fVar94 + fVar54 * fVar132;
            fVar53 = fVar55 * fVar97 + fVar38 * fVar96 + fVar54 * (float)uStack_11a0;
            fVar54 = fVar55 * fVar99 + fVar38 * fVar98 + fVar54 * uStack_11a0._4_4_;
            auVar146._0_4_ = _LC9 & (uint)fVar48;
            auVar146._4_4_ = _UNK_001151f4 & (uint)fVar52;
            auVar146._8_4_ = _UNK_001151f8 & (uint)fVar53;
            auVar146._12_4_ = _UNK_001151fc & (uint)fVar54;
            fVar122 = (float)(_LC3 & (uint)fVar48);
            fVar123 = (float)(_UNK_001151c4 & (uint)fVar52);
            fVar124 = (float)(_UNK_001151c8 & (uint)fVar53);
            fVar125 = (float)(_UNK_001151cc & (uint)fVar54);
            auVar57._0_4_ = fVar56 * fVar131 + fVar68 * fVar140 + fVar37 * fVar126;
            auVar57._4_4_ = fVar59 * fVar133 + fVar79 * fVar141 + fVar44 * fVar127;
            auVar57._8_4_ = fVar60 * fVar134 + fVar80 * fVar142 + fVar46 * fVar128;
            auVar57._12_4_ = fVar61 * fVar135 + fVar81 * fVar143 + fVar47 * fVar129;
            auVar57 = auVar57 ^ auVar146;
            fVar47 = auVar57._0_4_;
            fVar56 = auVar57._4_4_;
            fVar59 = auVar57._8_4_;
            fVar60 = auVar57._12_4_;
            auVar40._0_4_ = fVar144 * fVar140 + fVar118 * fVar131 + fVar110 * fVar126;
            auVar40._4_4_ = fVar147 * fVar141 + fVar119 * fVar133 + fVar111 * fVar127;
            auVar40._8_4_ = fVar148 * fVar142 + fVar120 * fVar134 + fVar112 * fVar128;
            auVar40._12_4_ = fVar149 * fVar143 + fVar121 * fVar135 + fVar113 * fVar129;
            auVar40 = auVar40 ^ auVar146;
            fVar38 = auVar40._0_4_;
            fVar37 = auVar40._4_4_;
            fVar44 = auVar40._8_4_;
            fVar46 = auVar40._12_4_;
            auVar104._0_4_ =
                 -(uint)((0.0 <= fVar38 && (0.0 <= fVar47 && fVar48 != 0.0)) &&
                        fVar38 + fVar47 <= fVar122) & _DAT_00116108;
            auVar104._4_4_ =
                 -(uint)(((0.0 <= fVar56 && fVar52 != 0.0) && 0.0 <= fVar37) &&
                        fVar37 + fVar56 <= fVar123) & uRam000000000011610c;
            auVar104._8_4_ =
                 -(uint)(((fVar53 != 0.0 && 0.0 <= fVar59) && 0.0 <= fVar44) &&
                        fVar44 + fVar59 <= fVar124) & uRam0000000000116110;
            auVar104._12_4_ =
                 -(uint)(((0.0 <= fVar60 && fVar54 != 0.0) && 0.0 <= fVar46) &&
                        fVar46 + fVar60 <= fVar125) & uRam0000000000116114;
            uVar23 = (undefined4)((ulong)pRVar25 >> 0x20);
            iVar24 = movmskps((int)pRVar25,auVar104);
            pRVar25 = (RayQueryContext *)CONCAT44(uVar23,iVar24);
            fVar48 = (float)auStack_1188._0_4_;
            fVar52 = (float)auStack_1188._4_4_;
            fVar55 = fStack_1180;
            fVar54 = fStack_117c;
            if (iVar24 != 0) {
              auVar63._0_4_ = fVar62 * fVar83 + fVar114 * fVar82 + fVar100 * fVar130;
              auVar63._4_4_ = fVar65 * fVar95 + fVar115 * fVar94 + fVar107 * fVar132;
              auVar63._8_4_ = fVar66 * fVar97 + fVar116 * fVar96 + fVar108 * (float)uStack_11a0;
              auVar63._12_4_ = fVar67 * fVar99 + fVar117 * fVar98 + fVar109 * uStack_11a0._4_4_;
              auVar63 = auVar63 ^ auVar146;
              fVar61 = auVar63._0_4_;
              fVar62 = auVar63._4_4_;
              fVar65 = auVar63._8_4_;
              fVar66 = auVar63._12_4_;
              bVar8 = fVar61 <= (float)auStack_1188._0_4_ * fVar122;
              bVar9 = fVar62 <= (float)auStack_1188._4_4_ * fVar123;
              bVar10 = fVar65 <= fStack_1180 * fVar124;
              bVar11 = fVar66 <= fStack_117c * fVar125;
              auVar89._4_4_ = -(uint)bVar9;
              auVar89._0_4_ = -(uint)bVar8;
              auVar89._8_4_ = -(uint)bVar10;
              auVar89._12_4_ = -(uint)bVar11;
              fVar53 = *(float *)(param_2 + 0xc);
              auVar73._0_4_ = -(uint)(fVar53 * fVar122 < fVar61 && bVar8) & auVar104._0_4_;
              auVar73._4_4_ = -(uint)(fVar53 * fVar123 < fVar62 && bVar9) & auVar104._4_4_;
              auVar73._8_4_ = -(uint)(fVar53 * fVar124 < fVar65 && bVar10) & auVar104._8_4_;
              auVar73._12_4_ = -(uint)(fVar53 * fVar125 < fVar66 && bVar11) & auVar104._12_4_;
              iVar24 = movmskps(iVar24,auVar73);
              pRVar25 = (RayQueryContext *)CONCAT44(uVar23,iVar24);
              if (iVar24 != 0) {
                auVar12._4_4_ = fVar123;
                auVar12._0_4_ = fVar122;
                auVar12._8_4_ = fVar124;
                auVar12._12_4_ = fVar125;
                auVar39 = rcpps(auVar89,auVar12);
                auStack_1078 = auVar73;
                uStack_fb8 = uStack_11a8;
                uStack_fb0 = uStack_11a0;
                lVar7 = *(long *)param_3;
                fVar54 = auVar39._0_4_;
                fVar48 = auVar39._4_4_;
                fVar52 = auVar39._8_4_;
                fVar55 = auVar39._12_4_;
                uStack_fa8 = local_11b8;
                uStack_fa0 = CONCAT44(fVar99,fVar97);
                uStack_f98 = local_11c8;
                uStack_f90 = CONCAT44(fVar98,fVar96);
                fVar54 = (_LC7 - fVar122 * fVar54) * fVar54 + fVar54;
                fVar48 = (_LC7 - fVar123 * fVar48) * fVar48 + fVar48;
                fVar52 = (_LC7 - fVar124 * fVar52) * fVar52 + fVar52;
                fVar55 = (_LC7 - fVar125 * fVar55) * fVar55 + fVar55;
                auVar64._0_4_ = fVar61 * fVar54;
                auVar64._4_4_ = fVar62 * fVar48;
                auVar64._8_4_ = fVar65 * fVar52;
                auVar64._12_4_ = fVar66 * fVar55;
                afStack_fe8[0] = fVar47 * fVar54;
                afStack_fe8[1] = fVar56 * fVar48;
                afStack_fe8[2] = fVar59 * fVar52;
                afStack_fe8[3] = fVar60 * fVar55;
                auVar41._0_4_ = auVar73._0_4_ & (uint)auVar64._0_4_;
                auVar41._4_4_ = auVar73._4_4_ & (uint)auVar64._4_4_;
                auVar41._8_4_ = auVar73._8_4_ & (uint)auVar64._8_4_;
                auVar41._12_4_ = auVar73._12_4_ & (uint)auVar64._12_4_;
                auStack_fc8 = auVar64;
                afStack_fd8[0] = fVar54 * fVar38;
                afStack_fd8[1] = fVar48 * fVar37;
                afStack_fd8[2] = fVar52 * fVar44;
                afStack_fd8[3] = fVar55 * fVar46;
                auVar58._4_4_ = _LC18;
                auVar58._0_4_ = _LC18;
                auVar58._8_4_ = _LC18;
                auVar58._12_4_ = _LC18;
                auVar49._0_4_ = ~auVar73._0_4_ & _LC18;
                auVar49._4_4_ = ~auVar73._4_4_ & _LC18;
                auVar49._8_4_ = ~auVar73._8_4_ & _LC18;
                auVar49._12_4_ = ~auVar73._12_4_ & _LC18;
                auVar41 = auVar41 | auVar49;
                auVar50._4_4_ = auVar41._0_4_;
                auVar50._0_4_ = auVar41._4_4_;
                auVar50._8_4_ = auVar41._12_4_;
                auVar50._12_4_ = auVar41._8_4_;
                auVar39 = minps(auVar50,auVar41);
                auVar90._0_8_ = auVar39._8_8_;
                auVar90._8_4_ = auVar39._0_4_;
                auVar90._12_4_ = auVar39._4_4_;
                auVar39 = minps(auVar90,auVar39);
                auVar74._0_4_ = auVar73._0_4_ & -(uint)(auVar41._0_4_ == auVar39._0_4_);
                auVar74._4_4_ = auVar73._4_4_ & -(uint)(auVar41._4_4_ == auVar39._4_4_);
                auVar74._8_4_ = auVar73._8_4_ & -(uint)(auVar41._8_4_ == auVar39._8_4_);
                auVar74._12_4_ = auVar73._12_4_ & -(uint)(auVar41._12_4_ == auVar39._12_4_);
                iVar24 = movmskps((int)lVar7,auVar74);
                if (iVar24 != 0) {
                  pRVar25 = (RayQueryContext *)CONCAT44((int)((ulong)lVar7 >> 0x20),iVar24);
                }
                lVar31 = 0;
                if (pRVar25 != (RayQueryContext *)0x0) {
                  for (; ((ulong)pRVar25 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                  }
                }
                fVar54 = pfVar27[lVar31 + 0x48];
                while( true ) {
                  pRVar26 = *(RayHitK **)(*(long *)(lVar7 + 0x1e0) + (ulong)(uint)fVar54 * 8);
                  pRVar30 = *(RayHitK **)(param_3 + 0x10);
                  pRVar22 = *(RayHitK **)(pRVar30 + 0x10);
                  if ((pRVar22 == (RayHitK *)0x0) &&
                     (*(RayHitK **)(pRVar26 + 0x40) == (RayHitK *)0x0)) break;
                  fStack_1050 = fVar54;
                  uStack_10ac = 0xffffffff;
                  fStack_1058 = afStack_fd8[lVar31];
                  puStack_1098 = *(undefined4 **)(param_3 + 8);
                  fStack_105c = afStack_fe8[lVar31];
                  fVar48 = *(float *)(param_2 + 0x20);
                  uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                  uStack_1068 = *(undefined4 *)((long)&uStack_fb8 + lVar31 * 4);
                  fStack_1054 = pfVar27[lVar31 + 0x4c];
                  uStack_1060 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                  uStack_104c = *puStack_1098;
                  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar31 * 4);
                  pRStack_10a8 = (RayHitK *)&uStack_10ac;
                  pRStack_1090 = param_2;
                  pRStack_10a0 = *(RayHitK **)(pRVar26 + 0x18);
                  puStack_1088 = &uStack_1068;
                  uStack_1080 = 1;
                  if (*(RayHitK **)(pRVar26 + 0x40) == (RayHitK *)0x0) {
LAB_001083dd:
                    if (pRVar22 != (RayHitK *)0x0) {
                      if ((((byte)*pRVar30 & 2) != 0) || (((byte)pRVar26[0x3e] & 0x40) != 0)) {
                        pRVar30 = (RayHitK *)&pRStack_10a8;
                        (*(code *)pRVar22)();
                        auVar58._4_12_ = _UNK_00115214;
                        auVar58._0_4_ = _LC18;
                      }
                      pRVar26 = pRStack_10a8;
                      if (*(int *)pRStack_10a8 == 0) goto LAB_0010872b;
                    }
                    *(undefined4 *)(pRStack_1090 + 0x30) = *puStack_1088;
                    *(undefined4 *)(pRStack_1090 + 0x34) = puStack_1088[1];
                    *(undefined4 *)(pRStack_1090 + 0x38) = puStack_1088[2];
                    *(undefined4 *)(pRStack_1090 + 0x3c) = puStack_1088[3];
                    *(undefined4 *)(pRStack_1090 + 0x40) = puStack_1088[4];
                    *(undefined4 *)(pRStack_1090 + 0x44) = puStack_1088[5];
                    *(undefined4 *)(pRStack_1090 + 0x48) = puStack_1088[6];
                    uVar23 = puStack_1088[7];
                    *(undefined4 *)(pRStack_1090 + 0x4c) = uVar23;
                    fVar48 = *(float *)(param_2 + 0x20);
                    pRVar26 = pRStack_1090;
                  }
                  else {
                    (*(code *)*(RayHitK **)(pRVar26 + 0x40))(&pRStack_10a8);
                    auVar58._4_12_ = _UNK_00115214;
                    auVar58._0_4_ = _LC18;
                    pRVar30 = pRStack_10a8;
                    if (*(int *)pRStack_10a8 != 0) {
                      pRVar30 = *(RayHitK **)(param_3 + 0x10);
                      pRVar22 = *(RayHitK **)(pRVar30 + 0x10);
                      goto LAB_001083dd;
                    }
LAB_0010872b:
                    uVar23 = SUB84(pRVar30,0);
                    *(float *)(param_2 + 0x20) = fVar48;
                  }
                  auStack_1188._4_4_ = fVar48;
                  auStack_1188._0_4_ = fVar48;
                  fStack_1180 = fVar48;
                  fStack_117c = fVar48;
                  *(undefined4 *)(auStack_1078 + lVar31 * 4) = 0;
                  auStack_1078._0_4_ = -(uint)(auVar64._0_4_ <= fVar48) & auStack_1078._0_4_;
                  auStack_1078._4_4_ = -(uint)(auVar64._4_4_ <= fVar48) & auStack_1078._4_4_;
                  auStack_1078._8_4_ = -(uint)(auVar64._8_4_ <= fVar48) & auStack_1078._8_4_;
                  auStack_1078._12_4_ = -(uint)(auVar64._12_4_ <= fVar48) & auStack_1078._12_4_;
                  iVar24 = movmskps((int)pRVar26,auStack_1078);
                  pRVar25 = (RayQueryContext *)CONCAT44((int)((ulong)pRVar26 >> 0x20),iVar24);
                  fVar52 = fVar48;
                  fVar55 = fVar48;
                  fVar54 = fVar48;
                  if (iVar24 == 0) goto LAB_00107e68;
                  auVar76._0_4_ = ~auStack_1078._0_4_ & auVar58._0_4_;
                  auVar76._4_4_ = ~auStack_1078._4_4_ & auVar58._4_4_;
                  auVar76._8_4_ = ~auStack_1078._8_4_ & auVar58._8_4_;
                  auVar76._12_4_ = ~auStack_1078._12_4_ & auVar58._12_4_;
                  auVar51._0_4_ = auStack_1078._0_4_ & (uint)auVar64._0_4_;
                  auVar51._4_4_ = auStack_1078._4_4_ & (uint)auVar64._4_4_;
                  auVar51._8_4_ = auStack_1078._8_4_ & (uint)auVar64._8_4_;
                  auVar51._12_4_ = auStack_1078._12_4_ & (uint)auVar64._12_4_;
                  auVar51 = auVar51 | auVar76;
                  auVar77._4_4_ = auVar51._0_4_;
                  auVar77._0_4_ = auVar51._4_4_;
                  auVar77._8_4_ = auVar51._12_4_;
                  auVar77._12_4_ = auVar51._8_4_;
                  auVar39 = minps(auVar77,auVar51);
                  auVar92._0_8_ = auVar39._8_8_;
                  auVar92._8_4_ = auVar39._0_4_;
                  auVar92._12_4_ = auVar39._4_4_;
                  auVar39 = minps(auVar92,auVar39);
                  auVar42._0_4_ = auStack_1078._0_4_ & -(uint)(auVar51._0_4_ == auVar39._0_4_);
                  auVar42._4_4_ = auStack_1078._4_4_ & -(uint)(auVar51._4_4_ == auVar39._4_4_);
                  auVar42._8_4_ = auStack_1078._8_4_ & -(uint)(auVar51._8_4_ == auVar39._8_4_);
                  auVar42._12_4_ = auStack_1078._12_4_ & -(uint)(auVar51._12_4_ == auVar39._12_4_);
                  iVar29 = movmskps(uVar23,auVar42);
                  if (iVar29 != 0) {
                    iVar24 = iVar29;
                  }
                  lVar31 = 0;
                  if ((long)iVar24 != 0) {
                    for (; ((ulong)(long)iVar24 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                    }
                  }
                  fVar54 = pfVar27[lVar31 + 0x48];
                }
                fVar48 = *(float *)(auStack_fc8 + lVar31 * 4);
                *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)((long)&uStack_fb8 + lVar31 * 4);
                uVar23 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                fVar52 = afStack_fe8[lVar31];
                *(float *)(param_2 + 0x20) = fVar48;
                fVar55 = afStack_fd8[lVar31];
                *(undefined4 *)(param_2 + 0x34) = uVar23;
                uVar23 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                *(float *)(param_2 + 0x3c) = fVar52;
                *(undefined4 *)(param_2 + 0x38) = uVar23;
                *(float *)(param_2 + 0x40) = fVar55;
                fVar52 = pfVar27[lVar31 + 0x4c];
                auStack_1188._4_4_ = fVar48;
                auStack_1188._0_4_ = fVar48;
                fStack_1180 = fVar48;
                fStack_117c = fVar48;
                *(float *)(param_2 + 0x48) = fVar54;
                *(float *)(param_2 + 0x44) = fVar52;
                pRVar25 = (RayQueryContext *)(ulong)**(uint **)(param_3 + 8);
                *(uint *)(param_2 + 0x4c) = **(uint **)(param_3 + 8);
                fVar52 = fVar48;
                fVar55 = fVar48;
                fVar54 = fVar48;
              }
            }
LAB_00107e68:
            lVar21 = lVar21 + 1;
            pfVar27 = pfVar27 + 0x50;
            if (lVar21 == uVar28 - 8) break;
            fVar38 = *(float *)(param_2 + 0x1c);
          } while( true );
        }
      }
      goto joined_r0x001079bb;
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
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  RayHitK *pRVar18;
  code *pcVar19;
  int iVar20;
  RayQueryContext *pRVar21;
  RayQueryContext *extraout_RDX;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  byte *pbVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined4 uVar28;
  ulong in_R11;
  ulong uVar29;
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar96;
  float fVar97;
  float fVar103;
  float fVar105;
  undefined1 auVar98 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
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
  float fVar133;
  float fVar137;
  undefined1 auVar128 [16];
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar146;
  float fVar153;
  float fVar154;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float fVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar156;
  float fVar162;
  float fVar163;
  undefined1 auVar157 [16];
  float fVar164;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar165 [16];
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
  float fVar181;
  undefined1 auStack_12a8 [16];
  int iStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined1 auStack_1278 [16];
  float fStack_1208;
  float fStack_1204;
  float fStack_1200;
  float fStack_11fc;
  undefined1 local_11d8 [8];
  float fStack_11d0;
  float fStack_11cc;
  uint uStack_109c;
  uint *puStack_1098;
  undefined8 uStack_1090;
  undefined4 *puStack_1088;
  RayHitK *pRStack_1080;
  float *pfStack_1078;
  undefined4 uStack_1070;
  undefined1 auStack_1068 [16];
  float fStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  float fStack_1044;
  float fStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  undefined1 auStack_fc8 [16];
  float afStack_fb8 [4];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_00108ac7:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_11d8._4_4_ = *(undefined4 *)(param_2 + 0x20);
  local_f80 = 0;
  local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
  if ((float)local_11d8._4_4_ < 0.0) {
    local_11d8._4_4_ = 0.0;
  }
  fVar77 = *(float *)(param_2 + 0xc);
  if (fVar77 < 0.0) {
    fVar77 = 0.0;
  }
  fVar9 = *(float *)param_2;
  fVar10 = *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_2 + 8);
  pauVar26 = (undefined1 (*) [16])local_f78;
  local_11d8._0_4_ = local_11d8._4_4_;
  fStack_11d0 = (float)local_11d8._4_4_;
  fStack_11cc = (float)local_11d8._4_4_;
  uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001151d4);
  uVar39 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001151d8);
  uVar43 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001151dc);
  auVar111._4_4_ = _LC7;
  auVar111._0_4_ = _LC7;
  auVar98._0_4_ = uVar31 & (uint)_LC5;
  auVar98._4_4_ = uVar35 & (uint)_UNK_001151d4;
  auVar98._8_4_ = uVar39 & (uint)_UNK_001151d8;
  auVar98._12_4_ = uVar43 & (uint)_UNK_001151dc;
  auVar110._0_4_ = ~uVar31 & *(uint *)(param_2 + 0x10);
  auVar110._4_4_ = ~uVar35 & *(uint *)(param_2 + 0x14);
  auVar110._8_4_ = ~uVar39 & *(uint *)(param_2 + 0x18);
  auVar110._12_4_ = ~uVar43 & *(uint *)(param_2 + 0x1c);
  auVar111._8_4_ = _LC7;
  auVar111._12_4_ = _LC7;
  auVar98 = divps(auVar111,auVar98 | auVar110);
  fVar47 = _LC12 * auVar98._0_4_;
  fVar56 = _LC12 * auVar98._4_4_;
  fVar58 = _LC12 * auVar98._8_4_;
  fVar96 = auVar98._0_4_ * _LC14;
  fVar103 = auVar98._4_4_ * _LC14;
  fVar105 = auVar98._8_4_ * _LC14;
  uVar16 = (ulong)(fVar47 < 0.0) * 0x10;
  pRVar21 = param_3;
  uVar31 = _LC3;
  uVar35 = _LC3;
  uVar39 = _LC3;
  uVar43 = _LC3;
LAB_00108960:
  uVar15 = _LC9;
  if (pauVar26 != (undefined1 (*) [16])local_f88) {
    do {
      fStack_1208 = *(float *)(param_2 + 0x20);
      pauVar27 = pauVar26 + -1;
      if (*(float *)(pauVar26[-1] + 8) <= fStack_1208) {
        uVar29 = *(ulong *)pauVar26[-1];
        pauVar26 = pauVar27;
        if ((uVar29 & 8) != 0) goto LAB_00108af8;
        auVar14._4_4_ = fVar77;
        auVar14._0_4_ = fVar77;
        auVar14._8_4_ = fVar77;
        auVar14._12_4_ = fVar77;
        while( true ) {
          pfVar23 = (float *)((ulong)(-(uint)(fVar58 < 0.0) & 0x10) + 0x60 + uVar29);
          pfVar30 = (float *)((ulong)(-(uint)(fVar56 < 0.0) & 0x10) + 0x40 + uVar29);
          pfVar24 = (float *)(uVar29 + (-(ulong)(fVar56 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar108._0_4_ = (*pfVar23 - fVar11) * fVar58;
          auVar108._4_4_ = (pfVar23[1] - fVar11) * fVar58;
          auVar108._8_4_ = (pfVar23[2] - fVar11) * fVar58;
          auVar108._12_4_ = (pfVar23[3] - fVar11) * fVar58;
          auVar147._0_4_ = (*pfVar30 - fVar10) * fVar56;
          auVar147._4_4_ = (pfVar30[1] - fVar10) * fVar56;
          auVar147._8_4_ = (pfVar30[2] - fVar10) * fVar56;
          auVar147._12_4_ = (pfVar30[3] - fVar10) * fVar56;
          auVar157._0_4_ = (*pfVar24 - fVar10) * fVar103;
          auVar157._4_4_ = (pfVar24[1] - fVar10) * fVar103;
          auVar157._8_4_ = (pfVar24[2] - fVar10) * fVar103;
          auVar157._12_4_ = (pfVar24[3] - fVar10) * fVar103;
          auVar98 = maxps(auVar108,auVar14);
          pfVar23 = (float *)(uVar29 + 0x20 + uVar16);
          auVar109._0_4_ = (*pfVar23 - fVar9) * fVar47;
          auVar109._4_4_ = (pfVar23[1] - fVar9) * fVar47;
          auVar109._8_4_ = (pfVar23[2] - fVar9) * fVar47;
          auVar109._12_4_ = (pfVar23[3] - fVar9) * fVar47;
          auVar110 = maxps(auVar109,auVar147);
          pfVar23 = (float *)(uVar29 + (-(ulong)(fVar58 < 0.0) & 0xfffffffffffffff0) + 0x70);
          local_1038[0] = maxps(auVar110,auVar98);
          pfVar30 = (float *)((uVar16 ^ 0x10) + 0x20 + uVar29);
          auVar148._0_4_ = (*pfVar23 - fVar11) * fVar105;
          auVar148._4_4_ = (pfVar23[1] - fVar11) * fVar105;
          auVar148._8_4_ = (pfVar23[2] - fVar11) * fVar105;
          auVar148._12_4_ = (pfVar23[3] - fVar11) * fVar105;
          auVar128._0_4_ = (*pfVar30 - fVar9) * fVar96;
          auVar128._4_4_ = (pfVar30[1] - fVar9) * fVar96;
          auVar128._8_4_ = (pfVar30[2] - fVar9) * fVar96;
          auVar128._12_4_ = (pfVar30[3] - fVar9) * fVar96;
          auVar110 = minps(auVar148,_local_11d8);
          auVar98 = minps(auVar128,auVar157);
          auVar98 = minps(auVar98,auVar110);
          auVar149._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar98._4_4_);
          auVar149._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar98._0_4_);
          auVar149._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar98._8_4_);
          auVar149._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar98._12_4_);
          uVar28 = movmskps((int)in_R11,auVar149);
          in_R11 = CONCAT44((int)(in_R11 >> 0x20),uVar28);
          if (in_R11 == 0) break;
          pRVar21 = (RayQueryContext *)(uVar29 & 0xfffffffffffffff0);
          lVar4 = 0;
          if (in_R11 != 0) {
            for (; (in_R11 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
            }
          }
          uVar29 = *(ulong *)(pRVar21 + lVar4 * 8);
          uVar17 = in_R11 - 1 & in_R11;
          pauVar26 = pauVar27;
          if (uVar17 != 0) {
            uVar32 = *(uint *)(local_1038[0] + lVar4 * 4);
            lVar4 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
              }
            }
            in_R11 = *(ulong *)(pRVar21 + lVar4 * 8);
            uVar33 = *(uint *)(local_1038[0] + lVar4 * 4);
            uVar17 = uVar17 & uVar17 - 1;
            if (uVar17 == 0) {
              pauVar26 = pauVar27 + 1;
              if (uVar32 < uVar33) {
                *(ulong *)*pauVar27 = in_R11;
                *(uint *)(*pauVar27 + 8) = uVar33;
              }
              else {
                pRVar21 = (RayQueryContext *)(ulong)uVar32;
                *(ulong *)*pauVar27 = uVar29;
                *(uint *)(*pauVar27 + 8) = uVar32;
                uVar29 = in_R11;
              }
            }
            else {
              auVar151._8_4_ = uVar32;
              auVar151._0_8_ = uVar29;
              auVar151._12_4_ = 0;
              lVar4 = 0;
              if (uVar17 != 0) {
                for (; (uVar17 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
                }
              }
              uVar29 = *(ulong *)(pRVar21 + lVar4 * 8);
              auVar159._8_4_ = uVar33;
              auVar159._0_8_ = in_R11;
              auVar159._12_4_ = 0;
              uVar34 = *(uint *)(local_1038[0] + lVar4 * 4);
              auVar115._8_4_ = uVar34;
              auVar115._0_8_ = uVar29;
              auVar115._12_4_ = 0;
              auVar130._8_4_ = -(uint)((int)uVar32 < (int)uVar33);
              uVar17 = uVar17 - 1 & uVar17;
              if (uVar17 == 0) {
                auVar130._4_4_ = auVar130._8_4_;
                auVar130._0_4_ = auVar130._8_4_;
                auVar130._12_4_ = auVar130._8_4_;
                pauVar26 = pauVar27 + 2;
                auVar111 = auVar151 & auVar130 | ~auVar130 & auVar159;
                auVar110 = auVar130 & auVar159 | ~auVar130 & auVar151;
                iStack_1290 = auVar111._8_4_;
                auVar160._8_4_ = -(uint)(iStack_1290 < (int)uVar34);
                auVar160._0_8_ = CONCAT44(auVar160._8_4_,auVar160._8_4_);
                auVar160._12_4_ = auVar160._8_4_;
                auVar98 = auVar115 & auVar160 | ~auVar160 & auVar111;
                auStack_12a8._8_4_ = auVar110._8_4_;
                auVar131._8_4_ = -(uint)((int)auStack_12a8._8_4_ < auVar98._8_4_);
                auVar131._4_4_ = auVar131._8_4_;
                auVar131._0_4_ = auVar131._8_4_;
                auVar131._12_4_ = auVar131._8_4_;
                *pauVar27 = auVar98 & auVar131 | ~auVar131 & auVar110;
                uVar29 = auVar111._0_8_ & auVar160._0_8_ | ~auVar160._0_8_ & uVar29;
                pauVar27[1] = auVar131 & auVar110 | ~auVar131 & auVar98;
                in_R11 = 0;
              }
              else {
                in_R11 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> in_R11 & 1) == 0; in_R11 = in_R11 + 1) {
                  }
                }
                pauVar26 = pauVar27 + 3;
                uVar32 = *(uint *)(local_1038[0] + in_R11 * 4);
                auVar152._4_4_ = auVar130._8_4_;
                auVar152._0_4_ = auVar130._8_4_;
                auVar152._8_4_ = auVar130._8_4_;
                auVar152._12_4_ = auVar130._8_4_;
                auVar98 = ~auVar152 & auVar159 | auVar151 & auVar152;
                auStack_1278._0_4_ = (undefined4)*(undefined8 *)(pRVar21 + in_R11 * 8);
                auStack_1278._4_4_ =
                     (undefined4)((ulong)*(undefined8 *)(pRVar21 + in_R11 * 8) >> 0x20);
                auVar110 = auVar159 & auVar152 | ~auVar152 & auVar151;
                auStack_12a8._0_4_ = (undefined4)uVar29;
                auStack_12a8._4_4_ = (undefined4)(uVar29 >> 0x20);
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
                uStack_1280._0_4_ = auVar110._8_4_;
                uVar34 = -(uint)((int)(uint)uStack_1280 < (int)uVar32);
                uStack_1288._0_4_ = auVar110._0_4_;
                uStack_1288._4_4_ = auVar110._4_4_;
                uStack_1280._4_4_ = auVar110._12_4_;
                auStack_12a8._8_4_ = (uint)uStack_1280 & uVar34 | ~uVar34 & uVar32;
                auStack_12a8._4_4_ = uStack_1288._4_4_ & uVar34 | ~uVar34 & uVar36;
                auStack_12a8._0_4_ = (uint)uStack_1288 & uVar34 | ~uVar34 & uVar33;
                auStack_12a8._12_4_ = uStack_1280._4_4_ & uVar34;
                uStack_1288 = CONCAT44(~uVar34 & uStack_1288._4_4_,~uVar34 & (uint)uStack_1288);
                uStack_1280._0_4_ = ~uVar34 & (uint)uStack_1280;
                uStack_1280._4_4_ = ~uVar34 & uStack_1280._4_4_;
                auVar161._8_4_ = -(uint)(auVar98._8_4_ < (int)auStack_1278._8_4_);
                auVar161._0_8_ = CONCAT44(auVar161._8_4_,auVar161._8_4_);
                auVar161._12_4_ = auVar161._8_4_;
                auVar110 = ~auVar161 & auVar98 | auStack_1278 & auVar161;
                auVar132._8_4_ = -(uint)(auVar110._8_4_ < (int)auStack_12a8._8_4_);
                auVar132._4_4_ = auVar132._8_4_;
                auVar132._0_4_ = auVar132._8_4_;
                auVar132._12_4_ = auVar132._8_4_;
                *(ulong *)*pauVar27 =
                     CONCAT44(uVar34,uVar34) & CONCAT44(uVar36,uVar33) | uStack_1288;
                *(ulong *)(*pauVar27 + 8) = uVar34 & uVar32 | uStack_1280;
                pauVar27[2] = auVar110 & auVar132 | ~auVar132 & auStack_12a8;
                pauVar27[1] = auStack_12a8 & auVar132 | ~auVar132 & auVar110;
                uVar29 = auVar98._0_8_ & auVar161._0_8_ | ~auVar161._0_8_ & auStack_1278._0_8_;
              }
            }
          }
          pauVar27 = pauVar26;
          if ((uVar29 & 8) != 0) goto LAB_00108af8;
        }
      }
      pauVar26 = pauVar27;
      if (pauVar27 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_00108ac7;
LAB_00108af8:
  uVar17 = 0;
  pfVar23 = (float *)(uVar29 & 0xfffffffffffffff0);
  uVar29 = (ulong)((uint)uVar29 & 0xf) - 8;
  in_R11 = uVar29;
  pfVar30 = pfVar23;
  fStack_1204 = fStack_1208;
  fStack_1200 = fStack_1208;
  fStack_11fc = fStack_1208;
  if (uVar29 != 0) {
LAB_00108b70:
    fVar145 = *(float *)(param_2 + 0x10);
    fVar88 = *(float *)(param_2 + 0x14);
    fVar92 = *(float *)(param_2 + 0x18);
    fVar60 = *(float *)param_2;
    fVar93 = *(float *)(param_2 + 4);
    fVar177 = *(float *)(param_2 + 8);
    fVar97 = pfVar30[0x20] - fVar177;
    fVar104 = pfVar30[0x21] - fVar177;
    fVar106 = pfVar30[0x22] - fVar177;
    fVar107 = pfVar30[0x23] - fVar177;
    fVar156 = pfVar30[8] - fVar177;
    fVar162 = pfVar30[9] - fVar177;
    fVar163 = pfVar30[10] - fVar177;
    fVar164 = pfVar30[0xb] - fVar177;
    fVar174 = pfVar30[0x14] - fVar177;
    fVar175 = pfVar30[0x15] - fVar177;
    fVar176 = pfVar30[0x16] - fVar177;
    fVar177 = pfVar30[0x17] - fVar177;
    fVar124 = pfVar30[4] - fVar93;
    fVar133 = pfVar30[5] - fVar93;
    fVar137 = pfVar30[6] - fVar93;
    fVar141 = pfVar30[7] - fVar93;
    fVar170 = pfVar30[0x10] - fVar93;
    fVar171 = pfVar30[0x11] - fVar93;
    fVar172 = pfVar30[0x12] - fVar93;
    fVar173 = pfVar30[0x13] - fVar93;
    fVar78 = pfVar30[0x1c] - fVar93;
    fVar85 = pfVar30[0x1d] - fVar93;
    fVar89 = pfVar30[0x1e] - fVar93;
    fVar93 = pfVar30[0x1f] - fVar93;
    fVar166 = pfVar30[0xc] - fVar60;
    fVar167 = pfVar30[0xd] - fVar60;
    fVar168 = pfVar30[0xe] - fVar60;
    fVar169 = pfVar30[0xf] - fVar60;
    fVar116 = *pfVar30 - fVar60;
    fVar118 = pfVar30[1] - fVar60;
    fVar120 = pfVar30[2] - fVar60;
    fVar122 = pfVar30[3] - fVar60;
    fVar48 = pfVar30[0x18] - fVar60;
    fVar57 = pfVar30[0x19] - fVar60;
    fVar59 = pfVar30[0x1a] - fVar60;
    fVar60 = pfVar30[0x1b] - fVar60;
    fVar79 = fVar156 - fVar174;
    fVar86 = fVar162 - fVar175;
    fVar90 = fVar163 - fVar176;
    fVar94 = fVar164 - fVar177;
    fVar178 = fVar78 - fVar124;
    fVar179 = fVar85 - fVar133;
    fVar180 = fVar89 - fVar137;
    fVar181 = fVar93 - fVar141;
    fVar61 = fVar97 - fVar156;
    fVar68 = fVar104 - fVar162;
    fVar71 = fVar106 - fVar163;
    fVar74 = fVar107 - fVar164;
    fVar146 = fVar48 - fVar116;
    fVar153 = fVar57 - fVar118;
    fVar154 = fVar59 - fVar120;
    fVar155 = fVar60 - fVar122;
    fVar125 = fVar174 - fVar97;
    fVar134 = fVar175 - fVar104;
    fVar138 = fVar176 - fVar106;
    fVar142 = fVar177 - fVar107;
    fVar80 = fVar124 - fVar170;
    fVar87 = fVar133 - fVar171;
    fVar91 = fVar137 - fVar172;
    fVar95 = fVar141 - fVar173;
    fVar62 = fVar116 - fVar166;
    fVar69 = fVar118 - fVar167;
    fVar72 = fVar120 - fVar168;
    fVar75 = fVar122 - fVar169;
    fVar126 = fVar170 - fVar78;
    fVar135 = fVar171 - fVar85;
    fVar139 = fVar172 - fVar89;
    fVar143 = fVar173 - fVar93;
    fVar127 = fVar166 - fVar48;
    fVar136 = fVar167 - fVar57;
    fVar140 = fVar168 - fVar59;
    fVar144 = fVar169 - fVar60;
    fVar63 = ((fVar116 + fVar48) * fVar61 - fVar146 * (fVar156 + fVar97)) * fVar88 +
             (fVar146 * (fVar124 + fVar78) - fVar178 * (fVar116 + fVar48)) * fVar92 +
             ((fVar156 + fVar97) * fVar178 - (fVar124 + fVar78) * fVar61) * fVar145;
    fVar70 = ((fVar118 + fVar57) * fVar68 - fVar153 * (fVar162 + fVar104)) * fVar88 +
             (fVar153 * (fVar133 + fVar85) - fVar179 * (fVar118 + fVar57)) * fVar92 +
             ((fVar162 + fVar104) * fVar179 - (fVar133 + fVar85) * fVar68) * fVar145;
    fVar73 = ((fVar120 + fVar59) * fVar71 - fVar154 * (fVar163 + fVar106)) * fVar88 +
             (fVar154 * (fVar137 + fVar89) - fVar180 * (fVar120 + fVar59)) * fVar92 +
             ((fVar163 + fVar106) * fVar180 - (fVar137 + fVar89) * fVar71) * fVar145;
    fVar76 = ((fVar122 + fVar60) * fVar74 - fVar155 * (fVar164 + fVar107)) * fVar88 +
             (fVar155 * (fVar141 + fVar93) - fVar181 * (fVar122 + fVar60)) * fVar92 +
             ((fVar164 + fVar107) * fVar181 - (fVar141 + fVar93) * fVar74) * fVar145;
    fVar117 = ((fVar116 + fVar166) * fVar79 - fVar62 * (fVar156 + fVar174)) * fVar88 +
              (fVar62 * (fVar124 + fVar170) - fVar80 * (fVar116 + fVar166)) * fVar92 +
              ((fVar156 + fVar174) * fVar80 - (fVar124 + fVar170) * fVar79) * fVar145;
    fVar119 = ((fVar118 + fVar167) * fVar86 - fVar69 * (fVar162 + fVar175)) * fVar88 +
              (fVar69 * (fVar133 + fVar171) - fVar87 * (fVar118 + fVar167)) * fVar92 +
              ((fVar162 + fVar175) * fVar87 - (fVar133 + fVar171) * fVar86) * fVar145;
    fVar121 = ((fVar120 + fVar168) * fVar90 - fVar72 * (fVar163 + fVar176)) * fVar88 +
              (fVar72 * (fVar137 + fVar172) - fVar91 * (fVar120 + fVar168)) * fVar92 +
              ((fVar163 + fVar176) * fVar91 - (fVar137 + fVar172) * fVar90) * fVar145;
    fVar123 = ((fVar122 + fVar169) * fVar94 - fVar75 * (fVar164 + fVar177)) * fVar88 +
              (fVar75 * (fVar141 + fVar173) - fVar95 * (fVar122 + fVar169)) * fVar92 +
              ((fVar164 + fVar177) * fVar95 - (fVar141 + fVar173) * fVar94) * fVar145;
    auVar99._0_4_ =
         ((fVar174 + fVar97) * fVar126 - (fVar78 + fVar170) * fVar125) * fVar145 +
         ((fVar48 + fVar166) * fVar125 - fVar127 * (fVar174 + fVar97)) * fVar88 +
         (fVar127 * (fVar78 + fVar170) - fVar126 * (fVar48 + fVar166)) * fVar92;
    auVar99._4_4_ =
         ((fVar175 + fVar104) * fVar135 - (fVar85 + fVar171) * fVar134) * fVar145 +
         ((fVar57 + fVar167) * fVar134 - fVar136 * (fVar175 + fVar104)) * fVar88 +
         (fVar136 * (fVar85 + fVar171) - fVar135 * (fVar57 + fVar167)) * fVar92;
    auVar99._8_4_ =
         ((fVar176 + fVar106) * fVar139 - (fVar89 + fVar172) * fVar138) * fVar145 +
         ((fVar59 + fVar168) * fVar138 - fVar140 * (fVar176 + fVar106)) * fVar88 +
         (fVar140 * (fVar89 + fVar172) - fVar139 * (fVar59 + fVar168)) * fVar92;
    auVar99._12_4_ =
         ((fVar177 + fVar107) * fVar143 - (fVar93 + fVar173) * fVar142) * fVar145 +
         ((fVar60 + fVar169) * fVar142 - fVar144 * (fVar177 + fVar107)) * fVar88 +
         (fVar144 * (fVar93 + fVar173) - fVar143 * (fVar60 + fVar169)) * fVar92;
    auVar150._0_4_ = fVar63 + fVar117 + auVar99._0_4_;
    auVar150._4_4_ = fVar70 + fVar119 + auVar99._4_4_;
    auVar150._8_4_ = fVar73 + fVar121 + auVar99._8_4_;
    auVar150._12_4_ = fVar76 + fVar123 + auVar99._12_4_;
    fVar60 = (float)((uint)auVar150._0_4_ & uVar31) * __LC15;
    fVar93 = (float)((uint)auVar150._4_4_ & uVar35) * _UNK_00115204;
    fVar177 = (float)((uint)auVar150._8_4_ & uVar39) * _UNK_00115208;
    fVar48 = (float)((uint)auVar150._12_4_ & uVar43) * _UNK_0011520c;
    auVar49._8_4_ = fVar73;
    auVar49._0_8_ = CONCAT44(fVar70,fVar63);
    auVar49._12_4_ = fVar76;
    auVar5._8_4_ = fVar121;
    auVar5._0_8_ = CONCAT44(fVar119,fVar117);
    auVar5._12_4_ = fVar123;
    auVar98 = maxps(auVar49,auVar5);
    auVar50._8_4_ = fVar73;
    auVar50._0_8_ = CONCAT44(fVar70,fVar63);
    auVar50._12_4_ = fVar76;
    auVar6._8_4_ = fVar121;
    auVar6._0_8_ = CONCAT44(fVar119,fVar117);
    auVar6._12_4_ = fVar123;
    auVar110 = minps(auVar50,auVar6);
    auVar111 = maxps(auVar98,auVar99);
    auVar98 = minps(auVar110,auVar99);
    auVar112._4_4_ = -(uint)(auVar111._4_4_ <= fVar93);
    auVar112._0_4_ = -(uint)(auVar111._0_4_ <= fVar60);
    auVar112._8_4_ = -(uint)(auVar111._8_4_ <= fVar177);
    auVar112._12_4_ = -(uint)(auVar111._12_4_ <= fVar48);
    local_11d8._4_4_ = fStack_1204;
    local_11d8._0_4_ = fStack_1208;
    fStack_11d0 = fStack_1200;
    fStack_11cc = fStack_11fc;
    auVar51._4_4_ = -(uint)((float)((uint)fVar93 ^ uVar15) <= auVar98._4_4_);
    auVar51._0_4_ = -(uint)((float)((uint)fVar60 ^ uVar15) <= auVar98._0_4_);
    auVar51._8_4_ = -(uint)((float)((uint)fVar177 ^ uVar15) <= auVar98._8_4_);
    auVar51._12_4_ = -(uint)((float)((uint)fVar48 ^ uVar15) <= auVar98._12_4_);
    auVar51 = auVar51 | auVar112;
    auVar52._0_4_ = auVar51._0_4_ & _DAT_00116108;
    auVar52._4_4_ = auVar51._4_4_ & uRam000000000011610c;
    auVar52._8_4_ = auVar51._8_4_ & uRam0000000000116110;
    auVar52._12_4_ = auVar51._12_4_ & uRam0000000000116114;
    uVar28 = (undefined4)((ulong)pRVar21 >> 0x20);
    iVar20 = movmskps((int)pRVar21,auVar52);
    pRVar21 = (RayQueryContext *)CONCAT44(uVar28,iVar20);
    if (iVar20 != 0) {
      uVar32 = -(uint)((float)((uint)(fVar61 * fVar80) & uVar31) <
                      (float)((uint)(fVar126 * fVar79) & uVar31));
      uVar36 = -(uint)((float)((uint)(fVar68 * fVar87) & uVar35) <
                      (float)((uint)(fVar135 * fVar86) & uVar35));
      uVar40 = -(uint)((float)((uint)(fVar71 * fVar91) & uVar39) <
                      (float)((uint)(fVar139 * fVar90) & uVar39));
      uVar44 = -(uint)((float)((uint)(fVar74 * fVar95) & uVar43) <
                      (float)((uint)(fVar143 * fVar94) & uVar43));
      uVar33 = -(uint)((float)((uint)(fVar146 * fVar79) & uVar31) <
                      (float)((uint)(fVar125 * fVar62) & uVar31));
      uVar37 = -(uint)((float)((uint)(fVar153 * fVar86) & uVar35) <
                      (float)((uint)(fVar134 * fVar69) & uVar35));
      uVar41 = -(uint)((float)((uint)(fVar154 * fVar90) & uVar39) <
                      (float)((uint)(fVar138 * fVar72) & uVar39));
      uVar45 = -(uint)((float)((uint)(fVar155 * fVar94) & uVar43) <
                      (float)((uint)(fVar142 * fVar75) & uVar43));
      uVar34 = -(uint)((float)((uint)(fVar178 * fVar62) & uVar31) <
                      (float)((uint)(fVar127 * fVar80) & uVar31));
      uVar38 = -(uint)((float)((uint)(fVar179 * fVar69) & uVar35) <
                      (float)((uint)(fVar136 * fVar87) & uVar35));
      uVar42 = -(uint)((float)((uint)(fVar180 * fVar72) & uVar39) <
                      (float)((uint)(fVar140 * fVar91) & uVar39));
      uVar46 = -(uint)((float)((uint)(fVar181 * fVar75) & uVar43) <
                      (float)((uint)(fVar144 * fVar95) & uVar43));
      auVar100._0_4_ = uVar34 & (uint)(fVar146 * fVar80 - fVar178 * fVar62);
      auVar100._4_4_ = uVar38 & (uint)(fVar153 * fVar87 - fVar179 * fVar69);
      auVar100._8_4_ = uVar42 & (uint)(fVar154 * fVar91 - fVar180 * fVar72);
      auVar100._12_4_ = uVar46 & (uint)(fVar155 * fVar95 - fVar181 * fVar75);
      auVar8._4_4_ = ~uVar38 & (uint)(fVar135 * fVar69 - fVar136 * fVar87);
      auVar8._0_4_ = ~uVar34 & (uint)(fVar126 * fVar62 - fVar127 * fVar80);
      auVar8._8_4_ = ~uVar42 & (uint)(fVar139 * fVar72 - fVar140 * fVar91);
      auVar8._12_4_ = ~uVar46 & (uint)(fVar143 * fVar75 - fVar144 * fVar95);
      auVar100 = auVar100 | auVar8;
      auVar113._0_4_ = uVar33 & (uint)(fVar61 * fVar62 - fVar146 * fVar79);
      auVar113._4_4_ = uVar37 & (uint)(fVar68 * fVar69 - fVar153 * fVar86);
      auVar113._8_4_ = uVar41 & (uint)(fVar71 * fVar72 - fVar154 * fVar90);
      auVar113._12_4_ = uVar45 & (uint)(fVar74 * fVar75 - fVar155 * fVar94);
      auVar7._4_4_ = ~uVar37 & (uint)(fVar136 * fVar86 - fVar134 * fVar69);
      auVar7._0_4_ = ~uVar33 & (uint)(fVar127 * fVar79 - fVar125 * fVar62);
      auVar7._8_4_ = ~uVar41 & (uint)(fVar140 * fVar90 - fVar138 * fVar72);
      auVar7._12_4_ = ~uVar45 & (uint)(fVar144 * fVar94 - fVar142 * fVar75);
      auVar113 = auVar113 | auVar7;
      auVar165._0_4_ = fVar124 * auVar113._0_4_;
      auVar165._4_4_ = fVar133 * auVar113._4_4_;
      auVar165._8_4_ = fVar137 * auVar113._8_4_;
      auVar165._12_4_ = fVar141 * auVar113._12_4_;
      fVar60 = (float)(uVar32 & (uint)(fVar178 * fVar79 - fVar61 * fVar80) |
                      ~uVar32 & (uint)(fVar80 * fVar125 - fVar126 * fVar79));
      fVar93 = (float)(uVar36 & (uint)(fVar179 * fVar86 - fVar68 * fVar87) |
                      ~uVar36 & (uint)(fVar87 * fVar134 - fVar135 * fVar86));
      fVar177 = (float)(uVar40 & (uint)(fVar180 * fVar90 - fVar71 * fVar91) |
                       ~uVar40 & (uint)(fVar91 * fVar138 - fVar139 * fVar90));
      fVar48 = (float)(uVar44 & (uint)(fVar181 * fVar94 - fVar74 * fVar95) |
                      ~uVar44 & (uint)(fVar95 * fVar142 - fVar143 * fVar94));
      fVar62 = fVar156 * auVar100._0_4_ + auVar165._0_4_ + fVar116 * fVar60;
      fVar68 = fVar162 * auVar100._4_4_ + auVar165._4_4_ + fVar118 * fVar93;
      fVar69 = fVar163 * auVar100._8_4_ + auVar165._8_4_ + fVar120 * fVar177;
      fVar71 = fVar164 * auVar100._12_4_ + auVar165._12_4_ + fVar122 * fVar48;
      fVar57 = fVar88 * auVar113._0_4_ + fVar92 * auVar100._0_4_ + fVar145 * fVar60;
      fVar59 = fVar88 * auVar113._4_4_ + fVar92 * auVar100._4_4_ + fVar145 * fVar93;
      fVar61 = fVar88 * auVar113._8_4_ + fVar92 * auVar100._8_4_ + fVar145 * fVar177;
      fVar145 = fVar88 * auVar113._12_4_ + fVar92 * auVar100._12_4_ + fVar145 * fVar48;
      auVar129._0_4_ = fVar57 + fVar57;
      auVar129._4_4_ = fVar59 + fVar59;
      auVar129._8_4_ = fVar61 + fVar61;
      auVar129._12_4_ = fVar145 + fVar145;
      auVar98 = rcpps(auVar165,auVar129);
      fVar145 = auVar98._0_4_;
      fVar88 = auVar98._4_4_;
      fVar92 = auVar98._8_4_;
      fVar57 = auVar98._12_4_;
      auVar158._0_4_ = (fVar62 + fVar62) * ((_LC7 - auVar129._0_4_ * fVar145) * fVar145 + fVar145);
      auVar158._4_4_ = (fVar68 + fVar68) * ((_LC7 - auVar129._4_4_ * fVar88) * fVar88 + fVar88);
      auVar158._8_4_ = (fVar69 + fVar69) * ((_LC7 - auVar129._8_4_ * fVar92) * fVar92 + fVar92);
      auVar158._12_4_ = (fVar71 + fVar71) * ((_LC7 - auVar129._12_4_ * fVar57) * fVar57 + fVar57);
      fVar145 = *(float *)(param_2 + 0xc);
      auVar53._0_4_ =
           auVar52._0_4_ & -(uint)(fVar145 <= auVar158._0_4_ && auVar158._0_4_ <= fStack_1208) &
           -(uint)(auVar129._0_4_ != 0.0);
      auVar53._4_4_ =
           auVar52._4_4_ & -(uint)(fVar145 <= auVar158._4_4_ && auVar158._4_4_ <= fStack_1204) &
           -(uint)(auVar129._4_4_ != 0.0);
      auVar53._8_4_ =
           auVar52._8_4_ & -(uint)(fVar145 <= auVar158._8_4_ && auVar158._8_4_ <= fStack_1200) &
           -(uint)(auVar129._8_4_ != 0.0);
      auVar53._12_4_ =
           auVar52._12_4_ & -(uint)(fVar145 <= auVar158._12_4_ && auVar158._12_4_ <= fStack_11fc) &
           -(uint)(auVar129._12_4_ != 0.0);
      iVar22 = movmskps((int)pfVar23,auVar53);
      pfVar23 = (float *)CONCAT44((int)((ulong)pfVar23 >> 0x20),iVar22);
      if (iVar22 != 0) {
        auStack_fa8 = auVar113;
        auVar98 = rcpps(auVar113,auVar150);
        lVar4 = *(long *)param_3;
        afStack_fb8[0] = fVar60;
        afStack_fb8[1] = fVar93;
        afStack_fb8[2] = fVar177;
        afStack_fb8[3] = fVar48;
        auStack_f98 = auVar100;
        auStack_1068 = auVar53;
        auStack_fc8 = auVar158;
        fVar145 = auVar98._0_4_;
        fVar88 = auVar98._4_4_;
        fVar92 = auVar98._8_4_;
        fVar60 = auVar98._12_4_;
        auVar114._4_4_ = _LC18;
        auVar114._0_4_ = _LC18;
        auVar114._8_4_ = _LC18;
        auVar114._12_4_ = _LC18;
        fVar145 = (float)(~-(uint)((float)((uint)auVar150._0_4_ & uVar31) < _LC5) &
                         (uint)((_LC7 - auVar150._0_4_ * fVar145) * fVar145 + fVar145));
        fVar88 = (float)(~-(uint)((float)((uint)auVar150._4_4_ & uVar35) < _UNK_001151d4) &
                        (uint)((_LC7 - auVar150._4_4_ * fVar88) * fVar88 + fVar88));
        fVar92 = (float)(~-(uint)((float)((uint)auVar150._8_4_ & uVar39) < _UNK_001151d8) &
                        (uint)((_LC7 - auVar150._8_4_ * fVar92) * fVar92 + fVar92));
        fVar60 = (float)(~-(uint)((float)((uint)auVar150._12_4_ & uVar43) < _UNK_001151dc) &
                        (uint)((_LC7 - auVar150._12_4_ * fVar60) * fVar60 + fVar60));
        auVar64._0_4_ = fVar63 * fVar145;
        auVar64._4_4_ = fVar70 * fVar88;
        auVar64._8_4_ = fVar73 * fVar92;
        auVar64._12_4_ = fVar76 * fVar60;
        auVar12._4_12_ = _UNK_001151e4;
        auVar12._0_4_ = _LC7;
        auStack_fe8 = minps(auVar64,auVar12);
        auVar65._0_4_ = fVar117 * fVar145;
        auVar65._4_4_ = fVar119 * fVar88;
        auVar65._8_4_ = fVar121 * fVar92;
        auVar65._12_4_ = fVar123 * fVar60;
        auVar13._4_12_ = _UNK_001151e4;
        auVar13._0_4_ = _LC7;
        auStack_fd8 = minps(auVar65,auVar13);
        auVar81._0_4_ = ~auVar53._0_4_ & _LC18;
        auVar81._4_4_ = ~auVar53._4_4_ & _LC18;
        auVar81._8_4_ = ~auVar53._8_4_ & _LC18;
        auVar81._12_4_ = ~auVar53._12_4_ & _LC18;
        auVar66._0_4_ = auVar53._0_4_ & (uint)auVar158._0_4_;
        auVar66._4_4_ = auVar53._4_4_ & (uint)auVar158._4_4_;
        auVar66._8_4_ = auVar53._8_4_ & (uint)auVar158._8_4_;
        auVar66._12_4_ = auVar53._12_4_ & (uint)auVar158._12_4_;
        auVar66 = auVar66 | auVar81;
        auVar82._4_4_ = auVar66._0_4_;
        auVar82._0_4_ = auVar66._4_4_;
        auVar82._8_4_ = auVar66._12_4_;
        auVar82._12_4_ = auVar66._8_4_;
        auVar98 = minps(auVar82,auVar66);
        auVar101._0_8_ = auVar98._8_8_;
        auVar101._8_4_ = auVar98._0_4_;
        auVar101._12_4_ = auVar98._4_4_;
        auVar98 = minps(auVar101,auVar98);
        auVar54._0_4_ = auVar53._0_4_ & -(uint)(auVar66._0_4_ == auVar98._0_4_);
        auVar54._4_4_ = auVar53._4_4_ & -(uint)(auVar66._4_4_ == auVar98._4_4_);
        auVar54._8_4_ = auVar53._8_4_ & -(uint)(auVar66._8_4_ == auVar98._8_4_);
        auVar54._12_4_ = auVar53._12_4_ & -(uint)(auVar66._12_4_ == auVar98._12_4_);
        iVar20 = movmskps(iVar20,auVar54);
        pfVar24 = pfVar23;
        if (iVar20 != 0) {
          pfVar24 = (float *)CONCAT44(uVar28,iVar20);
        }
        pfVar23 = (float *)0x0;
        if (pfVar24 != (float *)0x0) {
          for (; ((ulong)pfVar24 >> (long)pfVar23 & 1) == 0; pfVar23 = (float *)((long)pfVar23 + 1))
          {
          }
        }
        fVar145 = pfVar30[(long)(pfVar23 + 9)];
        do {
          pbVar25 = *(byte **)(param_3 + 0x10);
          pRVar18 = *(RayHitK **)(*(long *)(lVar4 + 0x1e0) + (ulong)(uint)fVar145 * 8);
          pcVar19 = *(code **)(pbVar25 + 0x10);
          if ((pcVar19 == (code *)0x0) && (*(long *)(pRVar18 + 0x40) == 0)) {
            uVar28 = *(undefined4 *)(auStack_fd8 + (long)pfVar23 * 4);
            fStack_1208 = afStack_fb8[(long)(pfVar23 + -1)];
            uVar1 = *(undefined4 *)(auStack_fe8 + (long)pfVar23 * 4);
            *(float *)(param_2 + 0x30) = afStack_fb8[(long)pfVar23];
            uVar2 = *(undefined4 *)(auStack_fa8 + (long)pfVar23 * 4);
            *(undefined4 *)(param_2 + 0x40) = uVar28;
            *(undefined4 *)(param_2 + 0x34) = uVar2;
            uVar28 = *(undefined4 *)(auStack_f98 + (long)pfVar23 * 4);
            *(float *)(param_2 + 0x20) = fStack_1208;
            *(undefined4 *)(param_2 + 0x38) = uVar28;
            *(undefined4 *)(param_2 + 0x3c) = uVar1;
            fVar88 = pfVar30[(long)(pfVar23 + 10)];
            *(float *)(param_2 + 0x48) = fVar145;
            puVar3 = *(uint **)(param_3 + 8);
            *(float *)(param_2 + 0x44) = fVar88;
            pRVar21 = (RayQueryContext *)(ulong)*puVar3;
            local_11d8._4_4_ = fStack_1208;
            local_11d8._0_4_ = fStack_1208;
            fStack_11d0 = fStack_1208;
            fStack_11cc = fStack_1208;
            *(uint *)(param_2 + 0x4c) = *puVar3;
            fStack_1204 = fStack_1208;
            fStack_1200 = fStack_1208;
            fStack_11fc = fStack_1208;
            break;
          }
          fStack_1040 = fVar145;
          uStack_109c = 0xffffffff;
          fStack_1044 = pfVar30[(long)(pfVar23 + 10)];
          puStack_1088 = *(undefined4 **)(param_3 + 8);
          uStack_1048 = *(undefined4 *)(auStack_fd8 + (long)pfVar23 * 4);
          uStack_1050 = *(undefined4 *)(auStack_f98 + (long)pfVar23 * 4);
          uStack_1054 = *(undefined4 *)(auStack_fa8 + (long)pfVar23 * 4);
          uStack_103c = **(undefined4 **)(param_3 + 8);
          puStack_1098 = &uStack_109c;
          fStack_1058 = afStack_fb8[(long)pfVar23];
          uStack_104c = *(undefined4 *)(auStack_fe8 + (long)pfVar23 * 4);
          fStack_1208 = *(float *)(param_2 + 0x20);
          *(float *)(param_2 + 0x20) = afStack_fb8[(long)(pfVar23 + -1)];
          uStack_1090 = *(undefined8 *)(pRVar18 + 0x18);
          pfStack_1078 = &fStack_1058;
          pRVar21 = *(RayQueryContext **)(pRVar18 + 0x40);
          pRStack_1080 = param_2;
          uStack_1070 = 1;
          if (pRVar21 == (RayQueryContext *)0x0) {
LAB_0010934c:
            if (pcVar19 != (code *)0x0) {
              if (((*pbVar25 & 2) != 0) || (((byte)pRVar18[0x3e] & 0x40) != 0)) {
                (*pcVar19)(&puStack_1098);
                auVar114._4_12_ = _UNK_00115214;
                auVar114._0_4_ = _LC18;
                pRVar21 = extraout_RDX;
                uVar31 = _LC3;
                uVar35 = _UNK_001151c4;
                uVar39 = _UNK_001151c8;
                uVar43 = _UNK_001151cc;
              }
              pRVar18 = (RayHitK *)(ulong)*puStack_1098;
              if (*puStack_1098 == 0) goto LAB_001094d0;
            }
            *(float *)(pRStack_1080 + 0x30) = *pfStack_1078;
            *(float *)(pRStack_1080 + 0x34) = pfStack_1078[1];
            *(float *)(pRStack_1080 + 0x38) = pfStack_1078[2];
            *(float *)(pRStack_1080 + 0x3c) = pfStack_1078[3];
            *(float *)(pRStack_1080 + 0x40) = pfStack_1078[4];
            *(float *)(pRStack_1080 + 0x44) = pfStack_1078[5];
            *(float *)(pRStack_1080 + 0x48) = pfStack_1078[6];
            pRVar21 = (RayQueryContext *)(ulong)(uint)pfStack_1078[7];
            *(float *)(pRStack_1080 + 0x4c) = pfStack_1078[7];
            fStack_1208 = *(float *)(param_2 + 0x20);
            pRVar18 = pRStack_1080;
          }
          else {
            (*(code *)pRVar21)(&puStack_1098);
            auVar114._4_12_ = _UNK_00115214;
            auVar114._0_4_ = _LC18;
            pRVar21 = (RayQueryContext *)(ulong)*puStack_1098;
            uVar31 = _LC3;
            uVar35 = _UNK_001151c4;
            uVar39 = _UNK_001151c8;
            uVar43 = _UNK_001151cc;
            if (*puStack_1098 != 0) {
              pbVar25 = *(byte **)(param_3 + 0x10);
              pcVar19 = *(code **)(pbVar25 + 0x10);
              goto LAB_0010934c;
            }
LAB_001094d0:
            *(float *)(param_2 + 0x20) = fStack_1208;
          }
          *(undefined4 *)(auStack_1068 + (long)pfVar23 * 4) = 0;
          auStack_1068._0_4_ = -(uint)(auVar158._0_4_ <= fStack_1208) & auStack_1068._0_4_;
          auStack_1068._4_4_ = -(uint)(auVar158._4_4_ <= fStack_1208) & auStack_1068._4_4_;
          auStack_1068._8_4_ = -(uint)(auVar158._8_4_ <= fStack_1208) & auStack_1068._8_4_;
          auStack_1068._12_4_ = -(uint)(auVar158._12_4_ <= fStack_1208) & auStack_1068._12_4_;
          iVar20 = movmskps((int)pfVar23,auStack_1068);
          pfVar23 = (float *)CONCAT44((int)((ulong)pfVar23 >> 0x20),iVar20);
          if (iVar20 == 0) goto LAB_00109510;
          auVar83._0_4_ = ~auStack_1068._0_4_ & auVar114._0_4_;
          auVar83._4_4_ = ~auStack_1068._4_4_ & auVar114._4_4_;
          auVar83._8_4_ = ~auStack_1068._8_4_ & auVar114._8_4_;
          auVar83._12_4_ = ~auStack_1068._12_4_ & auVar114._12_4_;
          auVar67._0_4_ = auStack_1068._0_4_ & (uint)auVar158._0_4_;
          auVar67._4_4_ = auStack_1068._4_4_ & (uint)auVar158._4_4_;
          auVar67._8_4_ = auStack_1068._8_4_ & (uint)auVar158._8_4_;
          auVar67._12_4_ = auStack_1068._12_4_ & (uint)auVar158._12_4_;
          auVar67 = auVar67 | auVar83;
          auVar84._4_4_ = auVar67._0_4_;
          auVar84._0_4_ = auVar67._4_4_;
          auVar84._8_4_ = auVar67._12_4_;
          auVar84._12_4_ = auVar67._8_4_;
          auVar98 = minps(auVar84,auVar67);
          auVar102._0_8_ = auVar98._8_8_;
          auVar102._8_4_ = auVar98._0_4_;
          auVar102._12_4_ = auVar98._4_4_;
          auVar98 = minps(auVar102,auVar98);
          auVar55._0_4_ = auStack_1068._0_4_ & -(uint)(auVar67._0_4_ == auVar98._0_4_);
          auVar55._4_4_ = auStack_1068._4_4_ & -(uint)(auVar67._4_4_ == auVar98._4_4_);
          auVar55._8_4_ = auStack_1068._8_4_ & -(uint)(auVar67._8_4_ == auVar98._8_4_);
          auVar55._12_4_ = auStack_1068._12_4_ & -(uint)(auVar67._12_4_ == auVar98._12_4_);
          iVar20 = movmskps((int)pRVar18,auVar55);
          pfVar24 = pfVar23;
          if (iVar20 != 0) {
            pfVar24 = (float *)CONCAT44((int)((ulong)pRVar18 >> 0x20),iVar20);
          }
          pfVar23 = (float *)0x0;
          if (pfVar24 != (float *)0x0) {
            for (; ((ulong)pfVar24 >> (long)pfVar23 & 1) == 0;
                pfVar23 = (float *)((long)pfVar23 + 1)) {
            }
          }
          fVar145 = pfVar30[(long)(pfVar23 + 9)];
        } while( true );
      }
    }
    goto LAB_001091b1;
  }
  local_11d8._4_4_ = fStack_1208;
  local_11d8._0_4_ = fStack_1208;
  fStack_11d0 = fStack_1208;
  fStack_11cc = fStack_1208;
  goto LAB_00108960;
LAB_00109510:
  local_11d8._4_4_ = fStack_1208;
  local_11d8._0_4_ = fStack_1208;
  fStack_11d0 = fStack_1208;
  fStack_11cc = fStack_1208;
  fStack_1204 = fStack_1208;
  fStack_1200 = fStack_1208;
  fStack_11fc = fStack_1208;
LAB_001091b1:
  uVar17 = uVar17 + 1;
  pfVar30 = pfVar30 + 0x2c;
  if (uVar17 == uVar29) goto LAB_00108960;
  goto LAB_00108b70;
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
  undefined4 uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float *pfVar25;
  RayHitK *pRVar26;
  int iVar27;
  code *pcVar28;
  ulong uVar30;
  code *pcVar31;
  float *pfVar32;
  ulong uVar33;
  undefined4 uVar34;
  byte *pbVar35;
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
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar68;
  float fVar69;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar80;
  float fVar81;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar103;
  float fVar109;
  undefined1 auVar98 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
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
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar120;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar131 [16];
  float fVar138;
  float fVar139;
  float fVar140;
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
  float fVar157;
  float fVar159;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar158;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar163;
  float fVar164;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  float fVar173;
  float fVar179;
  float fVar180;
  undefined1 auVar174 [16];
  float fVar181;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  uint uStack_1288;
  uint uStack_1284;
  uint uStack_1280;
  uint uStack_127c;
  undefined1 auStack_1278 [16];
  undefined1 auStack_1268 [16];
  undefined1 auStack_1208 [8];
  float fStack_1200;
  float fStack_11fc;
  undefined1 local_11d8 [16];
  uint uStack_109c;
  uint *puStack_1098;
  undefined8 uStack_1090;
  undefined4 *puStack_1088;
  RayHitK *pRStack_1080;
  float *pfStack_1078;
  undefined4 uStack_1070;
  undefined1 auStack_1068 [16];
  float fStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  float fStack_1048;
  float fStack_1044;
  float fStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  float afStack_fc8 [4];
  float afStack_fb8 [4];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  code *pcVar29;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar54 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar54 < 0.0) {
      fVar54 = 0.0;
    }
    fVar56 = *(float *)(param_2 + 0xc);
    if (fVar56 < 0.0) {
      fVar56 = 0.0;
    }
    fVar15 = *(float *)param_2;
    fVar16 = *(float *)(param_2 + 4);
    fVar17 = *(float *)(param_2 + 8);
    local_11d8._4_4_ = fVar54;
    local_11d8._0_4_ = fVar54;
    local_11d8._8_4_ = fVar54;
    local_11d8._12_4_ = fVar54;
    auVar177._4_4_ = _LC7;
    auVar177._0_4_ = _LC7;
    uVar38 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar42 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001151d4);
    uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001151d8);
    uVar50 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001151dc);
    auVar98._0_4_ = uVar38 & (uint)_LC5;
    auVar98._4_4_ = uVar42 & (uint)_UNK_001151d4;
    auVar98._8_4_ = uVar46 & (uint)_UNK_001151d8;
    auVar98._12_4_ = uVar50 & (uint)_UNK_001151dc;
    auVar174._0_4_ = ~uVar38 & *(uint *)(param_2 + 0x10);
    auVar174._4_4_ = ~uVar42 & *(uint *)(param_2 + 0x14);
    auVar174._8_4_ = ~uVar46 & *(uint *)(param_2 + 0x18);
    auVar174._12_4_ = ~uVar50 & *(uint *)(param_2 + 0x1c);
    auVar177._8_4_ = _LC7;
    auVar177._12_4_ = _LC7;
    auVar98 = divps(auVar177,auVar98 | auVar174);
    fVar54 = _LC12 * auVar98._0_4_;
    fVar63 = _LC12 * auVar98._4_4_;
    fVar65 = _LC12 * auVar98._8_4_;
    fVar92 = auVar98._0_4_ * _LC14;
    fVar103 = auVar98._4_4_ * _LC14;
    fVar109 = auVar98._8_4_ * _LC14;
    uVar23 = (ulong)(fVar54 < 0.0) * 0x10;
    pcVar28 = (code *)((-(ulong)(fVar63 < 0.0) & 0xfffffffffffffff0) + 0x30);
    auVar131._4_4_ = fVar56;
    auVar131._0_4_ = fVar56;
    auVar131._8_4_ = fVar56;
    auVar131._12_4_ = fVar56;
    pauVar20 = (undefined1 (*) [16])local_f78;
    uVar50 = _LC3;
    uVar46 = _LC3;
    uVar42 = _LC3;
    uVar38 = _LC3;
joined_r0x00109a8b:
    pauVar21 = pauVar20;
    uVar22 = _LC9;
    if (pauVar21 != (undefined1 (*) [16])local_f88) {
      auStack_1208._4_4_ = *(undefined4 *)(param_2 + 0x20);
      pauVar20 = pauVar21 + -1;
      if (*(float *)(pauVar21[-1] + 8) <= (float)auStack_1208._4_4_) {
        fVar56 = *(float *)(param_2 + 0x1c);
        uVar33 = *(ulong *)pauVar21[-1];
        while ((uVar33 & 8) == 0) {
          uVar30 = uVar33 & 0xfffffffffffffff0;
          lVar1 = uVar30 + 0x20;
          pfVar32 = (float *)(lVar1 + (ulong)(-(uint)(fVar65 < 0.0) & 0x10) + 0x40);
          pfVar25 = (float *)(lVar1 + (ulong)(-(uint)(fVar63 < 0.0) & 0x10) + 0x20);
          pfVar2 = (float *)(lVar1 + uVar23);
          pfVar3 = (float *)(pcVar28 + lVar1);
          auVar152._0_4_ = ((pfVar25[0x18] * fVar56 + *pfVar25) - fVar16) * fVar63;
          auVar152._4_4_ = ((pfVar25[0x19] * fVar56 + pfVar25[1]) - fVar16) * fVar63;
          auVar152._8_4_ = ((pfVar25[0x1a] * fVar56 + pfVar25[2]) - fVar16) * fVar63;
          auVar152._12_4_ = ((pfVar25[0x1b] * fVar56 + pfVar25[3]) - fVar16) * fVar63;
          auVar165._0_4_ = ((pfVar32[0x18] * fVar56 + *pfVar32) - fVar17) * fVar65;
          auVar165._4_4_ = ((pfVar32[0x19] * fVar56 + pfVar32[1]) - fVar17) * fVar65;
          auVar165._8_4_ = ((pfVar32[0x1a] * fVar56 + pfVar32[2]) - fVar17) * fVar65;
          auVar165._12_4_ = ((pfVar32[0x1b] * fVar56 + pfVar32[3]) - fVar17) * fVar65;
          auVar98 = maxps(auVar152,auVar165);
          pfVar32 = (float *)(lVar1 + (uVar23 ^ 0x10));
          pfVar25 = (float *)(lVar1 + (-(ulong)(fVar65 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar166._0_4_ = ((pfVar2[0x18] * fVar56 + *pfVar2) - fVar15) * fVar54;
          auVar166._4_4_ = ((pfVar2[0x19] * fVar56 + pfVar2[1]) - fVar15) * fVar54;
          auVar166._8_4_ = ((pfVar2[0x1a] * fVar56 + pfVar2[2]) - fVar15) * fVar54;
          auVar166._12_4_ = ((pfVar2[0x1b] * fVar56 + pfVar2[3]) - fVar15) * fVar54;
          auVar174 = maxps(auVar131,auVar166);
          local_1038[0] = maxps(auVar174,auVar98);
          auVar167._0_4_ = ((pfVar25[0x18] * fVar56 + *pfVar25) - fVar17) * fVar109;
          auVar167._4_4_ = ((pfVar25[0x19] * fVar56 + pfVar25[1]) - fVar17) * fVar109;
          auVar167._8_4_ = ((pfVar25[0x1a] * fVar56 + pfVar25[2]) - fVar17) * fVar109;
          auVar167._12_4_ = ((pfVar25[0x1b] * fVar56 + pfVar25[3]) - fVar17) * fVar109;
          auVar153._0_4_ = ((pfVar3[0x18] * fVar56 + *pfVar3) - fVar16) * fVar103;
          auVar153._4_4_ = ((pfVar3[0x19] * fVar56 + pfVar3[1]) - fVar16) * fVar103;
          auVar153._8_4_ = ((pfVar3[0x1a] * fVar56 + pfVar3[2]) - fVar16) * fVar103;
          auVar153._12_4_ = ((pfVar3[0x1b] * fVar56 + pfVar3[3]) - fVar16) * fVar103;
          auVar98 = minps(auVar153,auVar167);
          auVar168._0_4_ = ((pfVar32[0x18] * fVar56 + *pfVar32) - fVar15) * fVar92;
          auVar168._4_4_ = ((pfVar32[0x19] * fVar56 + pfVar32[1]) - fVar15) * fVar92;
          auVar168._8_4_ = ((pfVar32[0x1a] * fVar56 + pfVar32[2]) - fVar15) * fVar92;
          auVar168._12_4_ = ((pfVar32[0x1b] * fVar56 + pfVar32[3]) - fVar15) * fVar92;
          auVar174 = minps(local_11d8,auVar168);
          auVar98 = minps(auVar174,auVar98);
          bVar8 = SUB164(local_1038[0],0) <= auVar98._0_4_;
          bVar9 = SUB164(local_1038[0],4) <= auVar98._4_4_;
          bVar10 = SUB164(local_1038[0],8) <= auVar98._8_4_;
          bVar11 = SUB164(local_1038[0],0xc) <= auVar98._12_4_;
          auVar154._4_4_ = -(uint)bVar9;
          auVar154._0_4_ = -(uint)bVar8;
          auVar154._8_4_ = -(uint)bVar10;
          auVar154._12_4_ = -(uint)bVar11;
          if (((uint)uVar33 & 0xf) == 6) {
            auVar154._0_4_ =
                 -(uint)((*(float *)(uVar30 + 0xe0) <= fVar56 && fVar56 < *(float *)(uVar30 + 0xf0))
                        && bVar8);
            auVar154._4_4_ =
                 -(uint)((*(float *)(uVar30 + 0xe4) <= fVar56 && fVar56 < *(float *)(uVar30 + 0xf4))
                        && bVar9);
            auVar154._8_4_ =
                 -(uint)((*(float *)(uVar30 + 0xe8) <= fVar56 && fVar56 < *(float *)(uVar30 + 0xf8))
                        && bVar10);
            auVar154._12_4_ =
                 -(uint)((*(float *)(uVar30 + 0xec) <= fVar56 && fVar56 < *(float *)(uVar30 + 0xfc))
                        && bVar11);
          }
          uVar34 = movmskps((int)pfVar32,auVar154);
          uVar24 = CONCAT44((int)((ulong)pfVar32 >> 0x20),uVar34);
          if (uVar24 == 0) goto joined_r0x00109a8b;
          lVar1 = 0;
          if (uVar24 != 0) {
            for (; (uVar24 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar37 = *(ulong *)(uVar30 + lVar1 * 8);
          uVar24 = uVar24 - 1 & uVar24;
          uVar33 = uVar37;
          if (uVar24 != 0) {
            uVar39 = *(uint *)(local_1038[0] + lVar1 * 4);
            lVar1 = 0;
            if (uVar24 != 0) {
              for (; (uVar24 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
              }
            }
            uVar33 = *(ulong *)(uVar30 + lVar1 * 8);
            uVar40 = *(uint *)(local_1038[0] + lVar1 * 4);
            uVar24 = uVar24 - 1 & uVar24;
            if (uVar24 == 0) {
              if (uVar39 < uVar40) {
                *(ulong *)*pauVar20 = uVar33;
                *(uint *)(*pauVar20 + 8) = uVar40;
                pauVar20 = pauVar20 + 1;
                uVar33 = uVar37;
              }
              else {
                *(ulong *)*pauVar20 = uVar37;
                *(uint *)(*pauVar20 + 8) = uVar39;
                pauVar20 = pauVar20 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar24 != 0) {
                for (; (uVar24 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uVar6 = *(ulong *)(uVar30 + lVar1 * 8);
              auVar176._8_4_ = uVar39;
              auVar176._0_8_ = uVar37;
              auVar176._12_4_ = 0;
              uVar41 = *(uint *)(local_1038[0] + lVar1 * 4);
              auVar182._8_4_ = uVar40;
              auVar182._0_8_ = uVar33;
              auVar182._12_4_ = 0;
              auVar156._8_4_ = uVar41;
              auVar156._0_8_ = uVar6;
              auVar156._12_4_ = 0;
              auVar170._8_4_ = -(uint)((int)uVar39 < (int)uVar40);
              uVar24 = uVar24 - 1 & uVar24;
              if (uVar24 == 0) {
                auVar170._4_4_ = auVar170._8_4_;
                auVar170._0_4_ = auVar170._8_4_;
                auVar170._12_4_ = auVar170._8_4_;
                auVar177 = ~auVar170 & auVar182 | auVar176 & auVar170;
                auVar98 = auVar170 & auVar182 | ~auVar170 & auVar176;
                iVar27 = -(uint)(auVar177._8_4_ < (int)uVar41);
                auVar178._0_8_ = CONCAT44(iVar27,iVar27);
                auVar178._8_4_ = iVar27;
                auVar178._12_4_ = iVar27;
                auVar174 = auVar156 & auVar178 | ~auVar178 & auVar177;
                uStack_1280 = auVar98._8_4_;
                auVar183._8_4_ = -(uint)((int)uStack_1280 < auVar174._8_4_);
                auVar183._4_4_ = auVar183._8_4_;
                auVar183._0_4_ = auVar183._8_4_;
                auVar183._12_4_ = auVar183._8_4_;
                *pauVar20 = auVar174 & auVar183 | ~auVar183 & auVar98;
                uVar33 = auVar177._0_8_ & auVar178._0_8_ | ~auVar178._0_8_ & uVar6;
                pauVar20[1] = auVar98 & auVar183 | ~auVar183 & auVar174;
                pauVar20 = pauVar20 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar24 != 0) {
                  for (; (uVar24 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                uVar7 = *(undefined8 *)(uVar30 + lVar1 * 8);
                auVar171._4_4_ = auVar170._8_4_;
                auVar171._0_4_ = auVar170._8_4_;
                auVar171._8_4_ = auVar170._8_4_;
                auVar171._12_4_ = auVar170._8_4_;
                uVar39 = *(uint *)(local_1038[0] + lVar1 * 4);
                auVar174 = ~auVar171 & auVar182 | auVar176 & auVar171;
                auStack_1268._0_4_ = (undefined4)uVar7;
                auStack_1268._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
                auVar98 = auVar171 & auVar182 | ~auVar171 & auVar176;
                auStack_1278._0_4_ = (undefined4)uVar6;
                auStack_1278._4_4_ = (undefined4)(uVar6 >> 0x20);
                uVar44 = -(uint)((int)uVar41 < (int)uVar39);
                uVar40 = auStack_1268._0_4_ & uVar44;
                uVar43 = auStack_1268._4_4_ & uVar44;
                auStack_1268._8_4_ = ~uVar44 & uVar39 | uVar41 & uVar44;
                auStack_1268._4_4_ = ~uVar44 & auStack_1268._4_4_ | auStack_1278._4_4_ & uVar44;
                auStack_1268._0_4_ = ~uVar44 & auStack_1268._0_4_ | auStack_1278._0_4_ & uVar44;
                auStack_1268._12_4_ = 0;
                uVar40 = uVar40 | ~uVar44 & auStack_1278._0_4_;
                uVar43 = uVar43 | ~uVar44 & auStack_1278._4_4_;
                uVar39 = uVar39 & uVar44 | ~uVar44 & uVar41;
                uStack_1280 = auVar98._8_4_;
                uVar41 = -(uint)((int)uStack_1280 < (int)uVar39);
                uStack_1288 = auVar98._0_4_;
                uStack_1284 = auVar98._4_4_;
                uStack_127c = auVar98._12_4_;
                uVar44 = ~uVar41 & uStack_1280;
                auStack_1278._8_4_ = uStack_1280 & uVar41 | ~uVar41 & uVar39;
                auStack_1278._4_4_ = uStack_1284 & uVar41 | ~uVar41 & uVar43;
                auStack_1278._0_4_ = uStack_1288 & uVar41 | ~uVar41 & uVar40;
                auStack_1278._12_4_ = uStack_127c & uVar41;
                auVar184._8_4_ = -(uint)(auVar174._8_4_ < (int)auStack_1268._8_4_);
                auVar184._0_8_ = CONCAT44(auVar184._8_4_,auVar184._8_4_);
                auVar184._12_4_ = auVar184._8_4_;
                auVar98 = auStack_1268 & auVar184 | ~auVar184 & auVar174;
                uStack_1280 = auVar98._8_4_;
                iVar27 = -(uint)((int)uStack_1280 < (int)auStack_1278._8_4_);
                auVar172._4_4_ = iVar27;
                auVar172._0_4_ = iVar27;
                auVar172._8_4_ = iVar27;
                auVar172._12_4_ = iVar27;
                *(ulong *)*pauVar20 =
                     CONCAT44(uVar43,uVar40) & CONCAT44(uVar41,uVar41) |
                     CONCAT44(~uVar41 & uStack_1284,~uVar41 & uStack_1288);
                *(ulong *)(*pauVar20 + 8) =
                     (ulong)(uVar39 & uVar41) | CONCAT44(~uVar41 & uStack_127c,uVar44);
                pauVar20[1] = auStack_1278 & auVar172 | ~auVar172 & auVar98;
                pauVar20[2] = auVar98 & auVar172 | ~auVar172 & auStack_1278;
                uVar33 = auVar174._0_8_ & auVar184._0_8_ | ~auVar184._0_8_ & auStack_1268._0_8_;
                pauVar20 = pauVar20 + 3;
              }
            }
          }
        }
        uVar24 = 0;
        pfVar32 = (float *)(uVar33 & 0xfffffffffffffff0);
        uVar30 = (ulong)((uint)uVar33 & 0xf);
        auStack_1208._0_4_ = auStack_1208._4_4_;
        fStack_1200 = (float)auStack_1208._4_4_;
        fStack_11fc = (float)auStack_1208._4_4_;
        pcVar29 = pcVar28;
        uVar33 = uVar24;
        if (uVar30 != 8) {
          do {
            fVar149 = *(float *)(param_2 + 0x10);
            fVar163 = *(float *)(param_2 + 0x14);
            fVar164 = *(float *)(param_2 + 0x18);
            fVar67 = *(float *)param_2;
            fVar127 = *(float *)(param_2 + 4);
            fVar119 = *(float *)(param_2 + 8);
            fVar93 = (pfVar32[0x2c] * fVar56 + pfVar32[8]) - fVar119;
            fVar104 = (pfVar32[0x2d] * fVar56 + pfVar32[9]) - fVar119;
            fVar110 = (pfVar32[0x2e] * fVar56 + pfVar32[10]) - fVar119;
            fVar115 = (pfVar32[0x2f] * fVar56 + pfVar32[0xb]) - fVar119;
            fVar150 = (pfVar32[0x28] * fVar56 + pfVar32[4]) - fVar127;
            fVar157 = (pfVar32[0x29] * fVar56 + pfVar32[5]) - fVar127;
            fVar159 = (pfVar32[0x2a] * fVar56 + pfVar32[6]) - fVar127;
            fVar161 = (pfVar32[0x2b] * fVar56 + pfVar32[7]) - fVar127;
            fVar128 = (pfVar32[0x24] * fVar56 + *pfVar32) - fVar67;
            fVar132 = (pfVar32[0x25] * fVar56 + pfVar32[1]) - fVar67;
            fVar135 = (pfVar32[0x26] * fVar56 + pfVar32[2]) - fVar67;
            fVar138 = (pfVar32[0x27] * fVar56 + pfVar32[3]) - fVar67;
            fVar94 = (pfVar32[0x38] * fVar56 + pfVar32[0x14]) - fVar119;
            fVar105 = (pfVar32[0x39] * fVar56 + pfVar32[0x15]) - fVar119;
            fVar111 = (pfVar32[0x3a] * fVar56 + pfVar32[0x16]) - fVar119;
            fVar116 = (pfVar32[0x3b] * fVar56 + pfVar32[0x17]) - fVar119;
            fVar95 = (pfVar32[0x34] * fVar56 + pfVar32[0x10]) - fVar127;
            fVar106 = (pfVar32[0x35] * fVar56 + pfVar32[0x11]) - fVar127;
            fVar112 = (pfVar32[0x36] * fVar56 + pfVar32[0x12]) - fVar127;
            fVar117 = (pfVar32[0x37] * fVar56 + pfVar32[0x13]) - fVar127;
            fVar96 = (pfVar32[0x30] * fVar56 + pfVar32[0xc]) - fVar67;
            fVar107 = (pfVar32[0x31] * fVar56 + pfVar32[0xd]) - fVar67;
            fVar113 = (pfVar32[0x32] * fVar56 + pfVar32[0xe]) - fVar67;
            fVar118 = (pfVar32[0x33] * fVar56 + pfVar32[0xf]) - fVar67;
            fVar97 = (pfVar32[0x44] * fVar56 + pfVar32[0x20]) - fVar119;
            fVar108 = (pfVar32[0x45] * fVar56 + pfVar32[0x21]) - fVar119;
            fVar114 = (pfVar32[0x46] * fVar56 + pfVar32[0x22]) - fVar119;
            fVar119 = (pfVar32[0x47] * fVar56 + pfVar32[0x23]) - fVar119;
            fVar141 = fVar94 - fVar97;
            fVar143 = fVar105 - fVar108;
            fVar145 = fVar111 - fVar114;
            fVar147 = fVar116 - fVar119;
            fVar120 = (pfVar32[0x40] * fVar56 + pfVar32[0x1c]) - fVar127;
            fVar125 = (pfVar32[0x41] * fVar56 + pfVar32[0x1d]) - fVar127;
            fVar126 = (pfVar32[0x42] * fVar56 + pfVar32[0x1e]) - fVar127;
            fVar127 = (pfVar32[0x43] * fVar56 + pfVar32[0x1f]) - fVar127;
            fVar80 = fVar93 - fVar94;
            fVar86 = fVar104 - fVar105;
            fVar88 = fVar110 - fVar111;
            fVar90 = fVar115 - fVar116;
            fVar55 = (fVar56 * pfVar32[0x3c] + pfVar32[0x18]) - fVar67;
            fVar64 = (fVar56 * pfVar32[0x3d] + pfVar32[0x19]) - fVar67;
            fVar66 = (fVar56 * pfVar32[0x3e] + pfVar32[0x1a]) - fVar67;
            fVar67 = (fVar56 * pfVar32[0x3f] + pfVar32[0x1b]) - fVar67;
            fVar68 = fVar97 - fVar93;
            fVar74 = fVar108 - fVar104;
            fVar76 = fVar114 - fVar110;
            fVar78 = fVar119 - fVar115;
            fVar142 = fVar95 - fVar120;
            fVar144 = fVar106 - fVar125;
            fVar146 = fVar112 - fVar126;
            fVar148 = fVar117 - fVar127;
            fVar185 = fVar120 - fVar150;
            fVar186 = fVar125 - fVar157;
            fVar187 = fVar126 - fVar159;
            fVar188 = fVar127 - fVar161;
            fVar151 = fVar96 - fVar55;
            fVar158 = fVar107 - fVar64;
            fVar160 = fVar113 - fVar66;
            fVar162 = fVar118 - fVar67;
            fVar173 = fVar55 - fVar128;
            fVar179 = fVar64 - fVar132;
            fVar180 = fVar66 - fVar135;
            fVar181 = fVar67 - fVar138;
            fVar69 = fVar128 - fVar96;
            fVar75 = fVar132 - fVar107;
            fVar77 = fVar135 - fVar113;
            fVar79 = fVar138 - fVar118;
            fVar81 = fVar150 - fVar95;
            fVar87 = fVar157 - fVar106;
            fVar89 = fVar159 - fVar112;
            fVar91 = fVar161 - fVar117;
            fVar129 = ((fVar128 + fVar55) * fVar68 - fVar173 * (fVar93 + fVar97)) * fVar163 +
                      (fVar173 * (fVar150 + fVar120) - fVar185 * (fVar128 + fVar55)) * fVar164 +
                      ((fVar93 + fVar97) * fVar185 - (fVar150 + fVar120) * fVar68) * fVar149;
            fVar133 = ((fVar132 + fVar64) * fVar74 - fVar179 * (fVar104 + fVar108)) * fVar163 +
                      (fVar179 * (fVar157 + fVar125) - fVar186 * (fVar132 + fVar64)) * fVar164 +
                      ((fVar104 + fVar108) * fVar186 - (fVar157 + fVar125) * fVar74) * fVar149;
            fVar136 = ((fVar135 + fVar66) * fVar76 - fVar180 * (fVar110 + fVar114)) * fVar163 +
                      (fVar180 * (fVar159 + fVar126) - fVar187 * (fVar135 + fVar66)) * fVar164 +
                      ((fVar110 + fVar114) * fVar187 - (fVar159 + fVar126) * fVar76) * fVar149;
            fVar139 = ((fVar138 + fVar67) * fVar78 - fVar181 * (fVar115 + fVar119)) * fVar163 +
                      (fVar181 * (fVar161 + fVar127) - fVar188 * (fVar138 + fVar67)) * fVar164 +
                      ((fVar115 + fVar119) * fVar188 - (fVar161 + fVar127) * fVar78) * fVar149;
            fVar130 = ((fVar128 + fVar96) * fVar80 - fVar69 * (fVar93 + fVar94)) * fVar163 +
                      (fVar69 * (fVar150 + fVar95) - fVar81 * (fVar128 + fVar96)) * fVar164 +
                      ((fVar93 + fVar94) * fVar81 - (fVar150 + fVar95) * fVar80) * fVar149;
            fVar134 = ((fVar132 + fVar107) * fVar86 - fVar75 * (fVar104 + fVar105)) * fVar163 +
                      (fVar75 * (fVar157 + fVar106) - fVar87 * (fVar132 + fVar107)) * fVar164 +
                      ((fVar104 + fVar105) * fVar87 - (fVar157 + fVar106) * fVar86) * fVar149;
            auVar175._4_4_ = fVar134;
            auVar175._0_4_ = fVar130;
            fVar137 = ((fVar135 + fVar113) * fVar88 - fVar77 * (fVar110 + fVar111)) * fVar163 +
                      (fVar77 * (fVar159 + fVar112) - fVar89 * (fVar135 + fVar113)) * fVar164 +
                      ((fVar110 + fVar111) * fVar89 - (fVar159 + fVar112) * fVar88) * fVar149;
            fVar140 = ((fVar138 + fVar118) * fVar90 - fVar79 * (fVar115 + fVar116)) * fVar163 +
                      (fVar79 * (fVar161 + fVar117) - fVar91 * (fVar138 + fVar118)) * fVar164 +
                      ((fVar115 + fVar116) * fVar91 - (fVar161 + fVar117) * fVar90) * fVar149;
            auVar175._8_4_ = fVar137;
            auVar175._12_4_ = fVar140;
            local_11d8 = _auStack_1208;
            auVar121._8_4_ = fVar136;
            auVar121._0_8_ = CONCAT44(fVar133,fVar129);
            auVar121._12_4_ = fVar139;
            auVar98 = maxps(auVar121,auVar175);
            auVar99._0_4_ =
                 ((fVar94 + fVar97) * fVar142 - (fVar120 + fVar95) * fVar141) * fVar149 +
                 ((fVar55 + fVar96) * fVar141 - fVar151 * (fVar94 + fVar97)) * fVar163 +
                 (fVar151 * (fVar120 + fVar95) - fVar142 * (fVar55 + fVar96)) * fVar164;
            auVar99._4_4_ =
                 ((fVar105 + fVar108) * fVar144 - (fVar125 + fVar106) * fVar143) * fVar149 +
                 ((fVar64 + fVar107) * fVar143 - fVar158 * (fVar105 + fVar108)) * fVar163 +
                 (fVar158 * (fVar125 + fVar106) - fVar144 * (fVar64 + fVar107)) * fVar164;
            auVar99._8_4_ =
                 ((fVar111 + fVar114) * fVar146 - (fVar126 + fVar112) * fVar145) * fVar149 +
                 ((fVar66 + fVar113) * fVar145 - fVar160 * (fVar111 + fVar114)) * fVar163 +
                 (fVar160 * (fVar126 + fVar112) - fVar146 * (fVar66 + fVar113)) * fVar164;
            auVar99._12_4_ =
                 ((fVar116 + fVar119) * fVar148 - (fVar127 + fVar117) * fVar147) * fVar149 +
                 ((fVar67 + fVar118) * fVar147 - fVar162 * (fVar116 + fVar119)) * fVar163 +
                 (fVar162 * (fVar127 + fVar117) - fVar148 * (fVar67 + fVar118)) * fVar164;
            auVar98 = maxps(auVar98,auVar99);
            auVar155._0_4_ = fVar129 + fVar130 + auVar99._0_4_;
            auVar155._4_4_ = fVar133 + fVar134 + auVar99._4_4_;
            auVar155._8_4_ = fVar136 + fVar137 + auVar99._8_4_;
            auVar155._12_4_ = fVar139 + fVar140 + auVar99._12_4_;
            fVar56 = (float)((uint)auVar155._0_4_ & uVar38) * __LC15;
            fVar67 = (float)((uint)auVar155._4_4_ & uVar42) * _UNK_00115204;
            fVar127 = (float)((uint)auVar155._8_4_ & uVar46) * _UNK_00115208;
            fVar119 = (float)((uint)auVar155._12_4_ & uVar50) * _UNK_0011520c;
            auVar122._4_4_ = -(uint)(auVar98._4_4_ <= fVar67);
            auVar122._0_4_ = -(uint)(auVar98._0_4_ <= fVar56);
            auVar122._8_4_ = -(uint)(auVar98._8_4_ <= fVar127);
            auVar122._12_4_ = -(uint)(auVar98._12_4_ <= fVar119);
            auVar57._8_4_ = fVar136;
            auVar57._0_8_ = CONCAT44(fVar133,fVar129);
            auVar57._12_4_ = fVar139;
            auVar98 = minps(auVar57,auVar175);
            auVar98 = minps(auVar98,auVar99);
            auVar58._4_4_ = -(uint)((float)((uint)fVar67 ^ uVar22) <= auVar98._4_4_);
            auVar58._0_4_ = -(uint)((float)((uint)fVar56 ^ uVar22) <= auVar98._0_4_);
            auVar58._8_4_ = -(uint)((float)((uint)fVar127 ^ uVar22) <= auVar98._8_4_);
            auVar58._12_4_ = -(uint)((float)((uint)fVar119 ^ uVar22) <= auVar98._12_4_);
            auVar58 = auVar58 | auVar122;
            auVar59._0_4_ = auVar58._0_4_ & _DAT_00116108;
            auVar59._4_4_ = auVar58._4_4_ & uRam000000000011610c;
            auVar59._8_4_ = auVar58._8_4_ & uRam0000000000116110;
            auVar59._12_4_ = auVar58._12_4_ & uRam0000000000116114;
            uVar34 = (undefined4)((ulong)pcVar29 >> 0x20);
            iVar27 = movmskps((int)pcVar29,auVar59);
            pcVar29 = (code *)CONCAT44(uVar34,iVar27);
            if (iVar27 != 0) {
              uVar39 = -(uint)((float)((uint)(fVar68 * fVar81) & uVar38) <
                              (float)((uint)(fVar142 * fVar80) & uVar38));
              uVar43 = -(uint)((float)((uint)(fVar74 * fVar87) & uVar42) <
                              (float)((uint)(fVar144 * fVar86) & uVar42));
              uVar47 = -(uint)((float)((uint)(fVar76 * fVar89) & uVar46) <
                              (float)((uint)(fVar146 * fVar88) & uVar46));
              uVar51 = -(uint)((float)((uint)(fVar78 * fVar91) & uVar50) <
                              (float)((uint)(fVar148 * fVar90) & uVar50));
              uVar40 = -(uint)((float)((uint)(fVar173 * fVar80) & uVar38) <
                              (float)((uint)(fVar141 * fVar69) & uVar38));
              uVar44 = -(uint)((float)((uint)(fVar179 * fVar86) & uVar42) <
                              (float)((uint)(fVar143 * fVar75) & uVar42));
              uVar48 = -(uint)((float)((uint)(fVar180 * fVar88) & uVar46) <
                              (float)((uint)(fVar145 * fVar77) & uVar46));
              uVar52 = -(uint)((float)((uint)(fVar181 * fVar90) & uVar50) <
                              (float)((uint)(fVar147 * fVar79) & uVar50));
              uVar41 = -(uint)((float)((uint)(fVar185 * fVar69) & uVar38) <
                              (float)((uint)(fVar151 * fVar81) & uVar38));
              uVar45 = -(uint)((float)((uint)(fVar186 * fVar75) & uVar42) <
                              (float)((uint)(fVar158 * fVar87) & uVar42));
              uVar49 = -(uint)((float)((uint)(fVar187 * fVar77) & uVar46) <
                              (float)((uint)(fVar160 * fVar89) & uVar46));
              uVar53 = -(uint)((float)((uint)(fVar188 * fVar79) & uVar50) <
                              (float)((uint)(fVar162 * fVar91) & uVar50));
              auVar100._0_4_ = uVar41 & (uint)(fVar173 * fVar81 - fVar185 * fVar69);
              auVar100._4_4_ = uVar45 & (uint)(fVar179 * fVar87 - fVar186 * fVar75);
              auVar100._8_4_ = uVar49 & (uint)(fVar180 * fVar89 - fVar187 * fVar77);
              auVar100._12_4_ = uVar53 & (uint)(fVar181 * fVar91 - fVar188 * fVar79);
              auVar14._4_4_ = ~uVar45 & (uint)(fVar144 * fVar75 - fVar158 * fVar87);
              auVar14._0_4_ = ~uVar41 & (uint)(fVar142 * fVar69 - fVar151 * fVar81);
              auVar14._8_4_ = ~uVar49 & (uint)(fVar146 * fVar77 - fVar160 * fVar89);
              auVar14._12_4_ = ~uVar53 & (uint)(fVar148 * fVar79 - fVar162 * fVar91);
              auVar100 = auVar100 | auVar14;
              auVar123._0_4_ = uVar40 & (uint)(fVar68 * fVar69 - fVar173 * fVar80);
              auVar123._4_4_ = uVar44 & (uint)(fVar74 * fVar75 - fVar179 * fVar86);
              auVar123._8_4_ = uVar48 & (uint)(fVar76 * fVar77 - fVar180 * fVar88);
              auVar123._12_4_ = uVar52 & (uint)(fVar78 * fVar79 - fVar181 * fVar90);
              auVar13._4_4_ = ~uVar44 & (uint)(fVar158 * fVar86 - fVar143 * fVar75);
              auVar13._0_4_ = ~uVar40 & (uint)(fVar151 * fVar80 - fVar141 * fVar69);
              auVar13._8_4_ = ~uVar48 & (uint)(fVar160 * fVar88 - fVar145 * fVar77);
              auVar13._12_4_ = ~uVar52 & (uint)(fVar162 * fVar90 - fVar147 * fVar79);
              auVar123 = auVar123 | auVar13;
              auVar169._0_4_ = fVar150 * auVar123._0_4_;
              auVar169._4_4_ = fVar157 * auVar123._4_4_;
              auVar169._8_4_ = fVar159 * auVar123._8_4_;
              auVar169._12_4_ = fVar161 * auVar123._12_4_;
              fVar67 = (float)(uVar39 & (uint)(fVar185 * fVar80 - fVar68 * fVar81) |
                              ~uVar39 & (uint)(fVar81 * fVar141 - fVar142 * fVar80));
              fVar127 = (float)(uVar43 & (uint)(fVar186 * fVar86 - fVar74 * fVar87) |
                               ~uVar43 & (uint)(fVar87 * fVar143 - fVar144 * fVar86));
              fVar119 = (float)(uVar47 & (uint)(fVar187 * fVar88 - fVar76 * fVar89) |
                               ~uVar47 & (uint)(fVar89 * fVar145 - fVar146 * fVar88));
              fVar55 = (float)(uVar51 & (uint)(fVar188 * fVar90 - fVar78 * fVar91) |
                              ~uVar51 & (uint)(fVar91 * fVar147 - fVar148 * fVar90));
              fVar64 = fVar163 * auVar123._0_4_ + fVar164 * auVar100._0_4_ + fVar149 * fVar67;
              fVar66 = fVar163 * auVar123._4_4_ + fVar164 * auVar100._4_4_ + fVar149 * fVar127;
              fVar68 = fVar163 * auVar123._8_4_ + fVar164 * auVar100._8_4_ + fVar149 * fVar119;
              fVar149 = fVar163 * auVar123._12_4_ + fVar164 * auVar100._12_4_ + fVar149 * fVar55;
              fVar64 = fVar64 + fVar64;
              fVar66 = fVar66 + fVar66;
              fVar68 = fVar68 + fVar68;
              fVar149 = fVar149 + fVar149;
              auVar12._4_4_ = fVar66;
              auVar12._0_4_ = fVar64;
              auVar12._8_4_ = fVar68;
              auVar12._12_4_ = fVar149;
              auVar98 = rcpps(auVar169,auVar12);
              fVar56 = fVar93 * auVar100._0_4_ + auVar169._0_4_ + fVar128 * fVar67;
              fVar164 = fVar104 * auVar100._4_4_ + auVar169._4_4_ + fVar132 * fVar127;
              fVar69 = fVar110 * auVar100._8_4_ + auVar169._8_4_ + fVar135 * fVar119;
              fVar74 = fVar115 * auVar100._12_4_ + auVar169._12_4_ + fVar138 * fVar55;
              fVar163 = auVar98._0_4_;
              fVar75 = auVar98._4_4_;
              fVar76 = auVar98._8_4_;
              fVar77 = auVar98._12_4_;
              fVar163 = (fVar56 + fVar56) * ((_LC7 - fVar64 * fVar163) * fVar163 + fVar163);
              fVar164 = (fVar164 + fVar164) * ((_LC7 - fVar66 * fVar75) * fVar75 + fVar75);
              fVar69 = (fVar69 + fVar69) * ((_LC7 - fVar68 * fVar76) * fVar76 + fVar76);
              fVar74 = (fVar74 + fVar74) * ((_LC7 - fVar149 * fVar77) * fVar77 + fVar77);
              fVar56 = *(float *)(param_2 + 0xc);
              auVar60._0_4_ =
                   auVar59._0_4_ &
                   -(uint)(fVar56 <= fVar163 && fVar163 <= (float)auStack_1208._0_4_) &
                   -(uint)(fVar64 != 0.0);
              auVar60._4_4_ =
                   auVar59._4_4_ &
                   -(uint)(fVar56 <= fVar164 && fVar164 <= (float)auStack_1208._4_4_) &
                   -(uint)(fVar66 != 0.0);
              auVar60._8_4_ =
                   auVar59._8_4_ & -(uint)(fVar56 <= fVar69 && fVar69 <= fStack_1200) &
                   -(uint)(fVar68 != 0.0);
              auVar60._12_4_ =
                   auVar59._12_4_ & -(uint)(fVar56 <= fVar74 && fVar74 <= fStack_11fc) &
                   -(uint)(fVar149 != 0.0);
              iVar36 = movmskps((int)uVar33,auVar60);
              uVar33 = CONCAT44((int)(uVar33 >> 0x20),iVar36);
              if (iVar36 != 0) {
                auStack_fa8 = auVar123;
                auVar98 = rcpps(auVar123,auVar155);
                lVar1 = *(long *)param_3;
                afStack_fb8[0] = fVar67;
                afStack_fb8[1] = fVar127;
                afStack_fb8[2] = fVar119;
                afStack_fb8[3] = fVar55;
                auStack_f98 = auVar100;
                auStack_1068 = auVar60;
                afStack_fc8[0] = fVar163;
                afStack_fc8[1] = fVar164;
                afStack_fc8[2] = fVar69;
                afStack_fc8[3] = fVar74;
                fVar56 = auVar98._0_4_;
                fVar149 = auVar98._4_4_;
                fVar67 = auVar98._8_4_;
                fVar127 = auVar98._12_4_;
                auVar124._4_4_ = _LC18;
                auVar124._0_4_ = _LC18;
                auVar124._8_4_ = _LC18;
                auVar124._12_4_ = _LC18;
                fVar56 = (float)(~-(uint)((float)((uint)auVar155._0_4_ & uVar38) < _LC5) &
                                (uint)((_LC7 - auVar155._0_4_ * fVar56) * fVar56 + fVar56));
                fVar149 = (float)(~-(uint)((float)((uint)auVar155._4_4_ & uVar42) < _UNK_001151d4) &
                                 (uint)((_LC7 - auVar155._4_4_ * fVar149) * fVar149 + fVar149));
                fVar67 = (float)(~-(uint)((float)((uint)auVar155._8_4_ & uVar46) < _UNK_001151d8) &
                                (uint)((_LC7 - auVar155._8_4_ * fVar67) * fVar67 + fVar67));
                fVar127 = (float)(~-(uint)((float)((uint)auVar155._12_4_ & uVar50) < _UNK_001151dc)
                                 & (uint)((_LC7 - auVar155._12_4_ * fVar127) * fVar127 + fVar127));
                auVar70._0_4_ = fVar129 * fVar56;
                auVar70._4_4_ = fVar133 * fVar149;
                auVar70._8_4_ = fVar136 * fVar67;
                auVar70._12_4_ = fVar139 * fVar127;
                auVar18._4_12_ = _UNK_001151e4;
                auVar18._0_4_ = _LC7;
                auStack_fe8 = minps(auVar70,auVar18);
                auVar71._0_4_ = fVar130 * fVar56;
                auVar71._4_4_ = fVar134 * fVar149;
                auVar71._8_4_ = fVar137 * fVar67;
                auVar71._12_4_ = fVar140 * fVar127;
                auVar19._4_12_ = _UNK_001151e4;
                auVar19._0_4_ = _LC7;
                auStack_fd8 = minps(auVar71,auVar19);
                auVar82._0_4_ = ~auVar60._0_4_ & _LC18;
                auVar82._4_4_ = ~auVar60._4_4_ & _LC18;
                auVar82._8_4_ = ~auVar60._8_4_ & _LC18;
                auVar82._12_4_ = ~auVar60._12_4_ & _LC18;
                auVar72._0_4_ = auVar60._0_4_ & (uint)fVar163;
                auVar72._4_4_ = auVar60._4_4_ & (uint)fVar164;
                auVar72._8_4_ = auVar60._8_4_ & (uint)fVar69;
                auVar72._12_4_ = auVar60._12_4_ & (uint)fVar74;
                auVar72 = auVar72 | auVar82;
                auVar83._4_4_ = auVar72._0_4_;
                auVar83._0_4_ = auVar72._4_4_;
                auVar83._8_4_ = auVar72._12_4_;
                auVar83._12_4_ = auVar72._8_4_;
                auVar98 = minps(auVar83,auVar72);
                auVar101._0_8_ = auVar98._8_8_;
                auVar101._8_4_ = auVar98._0_4_;
                auVar101._12_4_ = auVar98._4_4_;
                auVar98 = minps(auVar101,auVar98);
                auVar61._0_4_ = auVar60._0_4_ & -(uint)(auVar72._0_4_ == auVar98._0_4_);
                auVar61._4_4_ = auVar60._4_4_ & -(uint)(auVar72._4_4_ == auVar98._4_4_);
                auVar61._8_4_ = auVar60._8_4_ & -(uint)(auVar72._8_4_ == auVar98._8_4_);
                auVar61._12_4_ = auVar60._12_4_ & -(uint)(auVar72._12_4_ == auVar98._12_4_);
                iVar27 = movmskps(iVar27,auVar61);
                uVar37 = uVar33;
                if (iVar27 != 0) {
                  uVar37 = CONCAT44(uVar34,iVar27);
                }
                uVar33 = 0;
                if (uVar37 != 0) {
                  for (; (uVar37 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                  }
                }
                fVar56 = pfVar32[uVar33 + 0x48];
                while( true ) {
                  pbVar35 = *(byte **)(param_3 + 0x10);
                  pRVar26 = *(RayHitK **)(*(long *)(lVar1 + 0x1e0) + (ulong)(uint)fVar56 * 8);
                  pcVar31 = *(code **)(pbVar35 + 0x10);
                  if ((pcVar31 == (code *)0x0) && (*(long *)(pRVar26 + 0x40) == 0)) break;
                  puStack_1088 = *(undefined4 **)(param_3 + 8);
                  fStack_1040 = fVar56;
                  fStack_1044 = pfVar32[uVar33 + 0x4c];
                  uStack_109c = 0xffffffff;
                  fStack_1048 = afStack_fc8[uVar33 - 4];
                  uStack_104c = *(undefined4 *)(auStack_fe8 + uVar33 * 4);
                  fVar56 = *(float *)(param_2 + 0x20);
                  uStack_1050 = *(undefined4 *)(auStack_f98 + uVar33 * 4);
                  uStack_103c = *puStack_1088;
                  uStack_1054 = *(undefined4 *)(auStack_fa8 + uVar33 * 4);
                  *(float *)(param_2 + 0x20) = afStack_fc8[uVar33];
                  puStack_1098 = &uStack_109c;
                  uStack_1090 = *(undefined8 *)(pRVar26 + 0x18);
                  pfStack_1078 = &fStack_1058;
                  pcVar29 = *(code **)(pRVar26 + 0x40);
                  pRStack_1080 = param_2;
                  uStack_1070 = 1;
                  fStack_1058 = afStack_fb8[uVar33];
                  if (pcVar29 == (code *)0x0) {
LAB_0010a57b:
                    if (pcVar31 != (code *)0x0) {
                      if (((*pbVar35 & 2) != 0) || (((byte)pRVar26[0x3e] & 0x40) != 0)) {
                        (*pcVar31)(&puStack_1098);
                        auVar124._4_12_ = _UNK_00115214;
                        auVar124._0_4_ = _LC18;
                        uVar38 = _LC3;
                        uVar42 = _UNK_001151c4;
                        uVar46 = _UNK_001151c8;
                        uVar50 = _UNK_001151cc;
                      }
                      pRVar26 = (RayHitK *)(ulong)*puStack_1098;
                      if (*puStack_1098 == 0) goto LAB_0010a710;
                    }
                    *(float *)(pRStack_1080 + 0x30) = *pfStack_1078;
                    *(float *)(pRStack_1080 + 0x34) = pfStack_1078[1];
                    *(float *)(pRStack_1080 + 0x38) = pfStack_1078[2];
                    *(float *)(pRStack_1080 + 0x3c) = pfStack_1078[3];
                    *(float *)(pRStack_1080 + 0x40) = pfStack_1078[4];
                    *(float *)(pRStack_1080 + 0x44) = pfStack_1078[5];
                    pcVar29 = (code *)(ulong)(uint)pfStack_1078[6];
                    *(float *)(pRStack_1080 + 0x48) = pfStack_1078[6];
                    *(float *)(pRStack_1080 + 0x4c) = pfStack_1078[7];
                    fVar56 = *(float *)(param_2 + 0x20);
                    pRVar26 = pRStack_1080;
                  }
                  else {
                    (*pcVar29)(&puStack_1098);
                    auVar124._4_12_ = _UNK_00115214;
                    auVar124._0_4_ = _LC18;
                    uVar38 = _LC3;
                    uVar42 = _UNK_001151c4;
                    uVar46 = _UNK_001151c8;
                    uVar50 = _UNK_001151cc;
                    if (*puStack_1098 != 0) {
                      pbVar35 = *(byte **)(param_3 + 0x10);
                      pcVar31 = *(code **)(pbVar35 + 0x10);
                      goto LAB_0010a57b;
                    }
LAB_0010a710:
                    *(float *)(param_2 + 0x20) = fVar56;
                  }
                  local_11d8._4_4_ = fVar56;
                  local_11d8._0_4_ = fVar56;
                  local_11d8._8_4_ = fVar56;
                  local_11d8._12_4_ = fVar56;
                  *(undefined4 *)(auStack_1068 + uVar33 * 4) = 0;
                  auStack_1068._0_4_ = -(uint)(fVar163 <= fVar56) & auStack_1068._0_4_;
                  auStack_1068._4_4_ = -(uint)(fVar164 <= fVar56) & auStack_1068._4_4_;
                  auStack_1068._8_4_ = -(uint)(fVar69 <= fVar56) & auStack_1068._8_4_;
                  auStack_1068._12_4_ = -(uint)(fVar74 <= fVar56) & auStack_1068._12_4_;
                  iVar27 = movmskps((int)uVar33,auStack_1068);
                  uVar33 = CONCAT44((int)(uVar33 >> 0x20),iVar27);
                  if (iVar27 == 0) goto LAB_0010a3cd;
                  auVar84._0_4_ = ~auStack_1068._0_4_ & auVar124._0_4_;
                  auVar84._4_4_ = ~auStack_1068._4_4_ & auVar124._4_4_;
                  auVar84._8_4_ = ~auStack_1068._8_4_ & auVar124._8_4_;
                  auVar84._12_4_ = ~auStack_1068._12_4_ & auVar124._12_4_;
                  auVar73._0_4_ = auStack_1068._0_4_ & (uint)fVar163;
                  auVar73._4_4_ = auStack_1068._4_4_ & (uint)fVar164;
                  auVar73._8_4_ = auStack_1068._8_4_ & (uint)fVar69;
                  auVar73._12_4_ = auStack_1068._12_4_ & (uint)fVar74;
                  auVar73 = auVar73 | auVar84;
                  auVar85._4_4_ = auVar73._0_4_;
                  auVar85._0_4_ = auVar73._4_4_;
                  auVar85._8_4_ = auVar73._12_4_;
                  auVar85._12_4_ = auVar73._8_4_;
                  auVar98 = minps(auVar85,auVar73);
                  auVar102._0_8_ = auVar98._8_8_;
                  auVar102._8_4_ = auVar98._0_4_;
                  auVar102._12_4_ = auVar98._4_4_;
                  auVar98 = minps(auVar102,auVar98);
                  auVar62._0_4_ = auStack_1068._0_4_ & -(uint)(auVar73._0_4_ == auVar98._0_4_);
                  auVar62._4_4_ = auStack_1068._4_4_ & -(uint)(auVar73._4_4_ == auVar98._4_4_);
                  auVar62._8_4_ = auStack_1068._8_4_ & -(uint)(auVar73._8_4_ == auVar98._8_4_);
                  auVar62._12_4_ = auStack_1068._12_4_ & -(uint)(auVar73._12_4_ == auVar98._12_4_);
                  iVar27 = movmskps((int)pRVar26,auVar62);
                  uVar37 = uVar33;
                  if (iVar27 != 0) {
                    uVar37 = CONCAT44((int)((ulong)pRVar26 >> 0x20),iVar27);
                  }
                  uVar33 = 0;
                  if (uVar37 != 0) {
                    for (; (uVar37 >> uVar33 & 1) == 0; uVar33 = uVar33 + 1) {
                    }
                  }
                  fVar56 = pfVar32[uVar33 + 0x48];
                }
                fVar149 = afStack_fc8[uVar33 - 4];
                fVar163 = afStack_fc8[uVar33];
                uVar34 = *(undefined4 *)(auStack_fe8 + uVar33 * 4);
                *(float *)(param_2 + 0x30) = afStack_fb8[uVar33];
                uVar4 = *(undefined4 *)(auStack_fa8 + uVar33 * 4);
                *(float *)(param_2 + 0x40) = fVar149;
                *(undefined4 *)(param_2 + 0x34) = uVar4;
                local_11d8._4_4_ = fVar163;
                local_11d8._0_4_ = fVar163;
                local_11d8._8_4_ = fVar163;
                local_11d8._12_4_ = fVar163;
                uVar4 = *(undefined4 *)(auStack_f98 + uVar33 * 4);
                *(float *)(param_2 + 0x20) = fVar163;
                *(undefined4 *)(param_2 + 0x38) = uVar4;
                *(undefined4 *)(param_2 + 0x3c) = uVar34;
                fVar149 = pfVar32[uVar33 + 0x4c];
                *(float *)(param_2 + 0x48) = fVar56;
                puVar5 = *(uint **)(param_3 + 8);
                *(float *)(param_2 + 0x44) = fVar149;
                pcVar29 = (code *)(ulong)*puVar5;
                *(uint *)(param_2 + 0x4c) = *puVar5;
              }
            }
LAB_0010a3cd:
            uVar24 = uVar24 + 1;
            pfVar32 = pfVar32 + 0x50;
            if (uVar24 == uVar30 - 8) goto joined_r0x00109a8b;
            fVar56 = *(float *)(param_2 + 0x1c);
            _auStack_1208 = local_11d8;
          } while( true );
        }
        local_11d8._4_4_ = auStack_1208._4_4_;
        local_11d8._0_4_ = auStack_1208._4_4_;
        local_11d8._8_4_ = auStack_1208._4_4_;
        local_11d8._12_4_ = auStack_1208._4_4_;
      }
      goto joined_r0x00109a8b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  float fVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  byte *pbVar28;
  code *pcVar29;
  ulong *puVar30;
  long in_FS_OFFSET;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
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
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  float fVar65;
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  float fVar68;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar78 [16];
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
  float fVar124;
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
     (fVar9 = *(float *)(param_2 + 0x20), 0.0 <= fVar9)) {
    fVar89 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar89 < 0.0) {
      fVar89 = 0.0;
    }
    fVar15 = *(float *)param_2;
    fVar16 = *(float *)(param_2 + 4);
    fVar17 = *(float *)(param_2 + 8);
    puVar30 = local_7e0;
    uVar31 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar62._0_4_ = ~uVar31 & *(uint *)(param_2 + 0x10);
    auVar62._4_4_ = ~uVar32 & *(uint *)(param_2 + 0x14);
    auVar62._8_4_ = ~uVar33 & *(uint *)(param_2 + 0x18);
    auVar62._12_4_ = ~uVar34 & *(uint *)(param_2 + 0x1c);
    auVar36._0_4_ = uVar31 & (uint)_LC5;
    auVar36._4_4_ = uVar32 & (uint)_LC5;
    auVar36._8_4_ = uVar33 & (uint)_LC5;
    auVar36._12_4_ = uVar34 & (uint)_LC5;
    auVar36 = auVar36 | auVar62;
    auVar60 = rcpps(auVar62,auVar36);
    fVar42 = auVar60._0_4_;
    fVar48 = auVar60._4_4_;
    fVar51 = auVar60._8_4_;
    fVar42 = (_LC7 - auVar36._0_4_ * fVar42) * fVar42 + fVar42;
    fVar48 = (_LC7 - auVar36._4_4_ * fVar48) * fVar48 + fVar48;
    fVar51 = (_LC7 - auVar36._8_4_ * fVar51) * fVar51 + fVar51;
    uVar19 = (ulong)(fVar42 < 0.0) * 0x10;
    puVar20 = (ulong *)((ulong)(-(uint)(fVar48 < 0.0) & 0x10) + 0x20);
    auVar60._4_4_ = fVar89;
    auVar60._0_4_ = fVar89;
    auVar60._8_4_ = fVar89;
    auVar60._12_4_ = fVar89;
    puVar21 = puVar20;
    do {
      uVar31 = _LC9;
      uVar22 = puVar30[-1];
      puVar30 = puVar30 + -1;
      while ((uVar22 & 8) == 0) {
        pfVar5 = (float *)(uVar22 + (ulong)(-(uint)(fVar51 < 0.0) & 0x10) + 0x60);
        pfVar6 = (float *)(uVar22 + 0x20 + uVar19);
        pfVar7 = (float *)(uVar22 + 0x20 + (long)puVar20);
        pfVar8 = (float *)(uVar22 + (-(ulong)(fVar48 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar61._0_4_ = (*pfVar5 - fVar17) * fVar51;
        auVar61._4_4_ = (pfVar5[1] - fVar17) * fVar51;
        auVar61._8_4_ = (pfVar5[2] - fVar17) * fVar51;
        auVar61._12_4_ = (pfVar5[3] - fVar17) * fVar51;
        auVar69._0_4_ = (*pfVar7 - fVar16) * fVar48;
        auVar69._4_4_ = (pfVar7[1] - fVar16) * fVar48;
        auVar69._8_4_ = (pfVar7[2] - fVar16) * fVar48;
        auVar69._12_4_ = (pfVar7[3] - fVar16) * fVar48;
        auVar45._0_4_ = (*pfVar6 - fVar15) * fVar42;
        auVar45._4_4_ = (pfVar6[1] - fVar15) * fVar42;
        auVar45._8_4_ = (pfVar6[2] - fVar15) * fVar42;
        auVar45._12_4_ = (pfVar6[3] - fVar15) * fVar42;
        auVar62 = maxps(auVar61,auVar60);
        auVar36 = maxps(auVar45,auVar69);
        pfVar5 = (float *)(uVar22 + (-(ulong)(fVar51 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar36 = maxps(auVar36,auVar62);
        pfVar6 = (float *)(uVar22 + 0x20 + (uVar19 ^ 0x10));
        auVar70._0_4_ = (*pfVar5 - fVar17) * fVar51;
        auVar70._4_4_ = (pfVar5[1] - fVar17) * fVar51;
        auVar70._8_4_ = (pfVar5[2] - fVar17) * fVar51;
        auVar70._12_4_ = (pfVar5[3] - fVar17) * fVar51;
        auVar63._0_4_ = (*pfVar6 - fVar15) * fVar42;
        auVar63._4_4_ = (pfVar6[1] - fVar15) * fVar42;
        auVar63._8_4_ = (pfVar6[2] - fVar15) * fVar42;
        auVar63._12_4_ = (pfVar6[3] - fVar15) * fVar42;
        auVar71._4_4_ = fVar9;
        auVar71._0_4_ = fVar9;
        auVar71._8_4_ = fVar9;
        auVar71._12_4_ = fVar9;
        auVar71 = minps(auVar70,auVar71);
        auVar13._4_4_ = (pfVar8[1] - fVar16) * fVar48;
        auVar13._0_4_ = (*pfVar8 - fVar16) * fVar48;
        auVar13._8_4_ = (pfVar8[2] - fVar16) * fVar48;
        auVar13._12_4_ = (pfVar8[3] - fVar16) * fVar48;
        auVar62 = minps(auVar63,auVar13);
        auVar62 = minps(auVar62,auVar71);
        auVar46._4_4_ = -(uint)(auVar36._4_4_ <= auVar62._4_4_);
        auVar46._0_4_ = -(uint)(auVar36._0_4_ <= auVar62._0_4_);
        auVar46._8_4_ = -(uint)(auVar36._8_4_ <= auVar62._8_4_);
        auVar46._12_4_ = -(uint)(auVar36._12_4_ <= auVar62._12_4_);
        uVar18 = movmskps((int)puVar21,auVar46);
        puVar21 = (ulong *)CONCAT44((int)((ulong)puVar21 >> 0x20),uVar18);
        if (puVar21 == (ulong *)0x0) goto LAB_0010adaa;
        uVar27 = uVar22 & 0xfffffffffffffff0;
        lVar25 = 0;
        if (puVar21 != (ulong *)0x0) {
          for (; ((ulong)puVar21 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
          }
        }
        uVar22 = *(ulong *)(uVar27 + lVar25 * 8);
        uVar23 = (long)puVar21 - 1U & (ulong)puVar21;
        if (uVar23 != 0) {
          *puVar30 = uVar22;
          puVar21 = (ulong *)(uVar23 - 1);
          lVar25 = 0;
          if (uVar23 != 0) {
            for (; (uVar23 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
            }
          }
          while( true ) {
            puVar30 = puVar30 + 1;
            uVar22 = *(ulong *)(uVar27 + lVar25 * 8);
            puVar21 = (ulong *)((ulong)puVar21 & uVar23);
            if (puVar21 == (ulong *)0x0) break;
            *puVar30 = uVar22;
            uVar23 = (long)puVar21 - 1;
            lVar25 = 0;
            if (puVar21 != (ulong *)0x0) {
              for (; ((ulong)puVar21 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
              }
            }
          }
        }
      }
      lVar25 = 0;
      puVar24 = (uint *)(uVar22 & 0xfffffffffffffff0);
      uVar22 = (ulong)((uint)uVar22 & 0xf);
      if (uVar22 != 8) {
        do {
          lVar10 = *(long *)param_3;
          lVar11 = *(long *)(lVar10 + 0x220);
          lVar12 = *(long *)(lVar11 + (ulong)puVar24[0xc] * 8);
          pfVar5 = (float *)(lVar12 + (ulong)*puVar24 * 4);
          fVar89 = *pfVar5;
          fVar68 = pfVar5[1];
          fVar121 = pfVar5[2];
          pfVar5 = (float *)(lVar12 + (ulong)puVar24[4] * 4);
          pfVar6 = (float *)(lVar12 + (ulong)puVar24[8] * 4);
          lVar12 = *(long *)(lVar11 + (ulong)puVar24[0xd] * 8);
          pfVar7 = (float *)(lVar12 + (ulong)puVar24[1] * 4);
          fVar90 = *pfVar7;
          fVar73 = pfVar7[1];
          fVar122 = pfVar7[2];
          pfVar7 = (float *)(lVar12 + (ulong)puVar24[5] * 4);
          pfVar8 = (float *)(lVar12 + (ulong)puVar24[9] * 4);
          lVar12 = *(long *)(lVar11 + (ulong)puVar24[0xe] * 8);
          pfVar1 = (float *)(lVar12 + (ulong)puVar24[2] * 4);
          fVar91 = *pfVar1;
          fVar74 = pfVar1[1];
          fVar123 = pfVar1[2];
          pfVar1 = (float *)(lVar12 + (ulong)puVar24[6] * 4);
          pfVar2 = (float *)(lVar12 + (ulong)puVar24[10] * 4);
          lVar11 = *(long *)(lVar11 + (ulong)puVar24[0xf] * 8);
          pfVar3 = (float *)(lVar11 + (ulong)puVar24[3] * 4);
          fVar92 = *pfVar3;
          fVar75 = pfVar3[1];
          fVar124 = pfVar3[2];
          pfVar3 = (float *)(lVar11 + (ulong)puVar24[7] * 4);
          fVar41 = *(float *)param_2;
          fVar35 = *(float *)(param_2 + 4);
          fVar39 = *(float *)(param_2 + 8);
          pfVar4 = (float *)(lVar11 + (ulong)puVar24[0xb] * 4);
          local_8e8 = *(undefined8 *)(puVar24 + 0x10);
          uStack_8e0 = *(undefined8 *)(puVar24 + 0x12);
          fVar93 = fVar89 - *pfVar5;
          fVar94 = fVar90 - *pfVar7;
          fVar95 = fVar91 - *pfVar1;
          fVar96 = fVar92 - *pfVar3;
          fVar97 = fVar68 - pfVar5[1];
          fVar98 = fVar73 - pfVar7[1];
          fVar99 = fVar74 - pfVar1[1];
          fVar100 = fVar75 - pfVar3[1];
          fVar43 = pfVar6[1] - fVar68;
          fVar49 = pfVar8[1] - fVar73;
          fVar52 = pfVar2[1] - fVar74;
          fVar53 = pfVar4[1] - fVar75;
          fVar85 = *pfVar6 - fVar89;
          fVar86 = *pfVar8 - fVar90;
          fVar87 = *pfVar2 - fVar91;
          fVar88 = *pfVar4 - fVar92;
          local_8d8 = *(undefined8 *)(puVar24 + 0xc);
          uStack_8d0 = *(undefined8 *)(puVar24 + 0xe);
          fVar54 = fVar121 - pfVar5[2];
          fVar56 = fVar122 - pfVar7[2];
          fVar57 = fVar123 - pfVar1[2];
          fVar58 = fVar124 - pfVar3[2];
          fVar59 = pfVar6[2] - fVar121;
          fVar65 = pfVar8[2] - fVar122;
          fVar66 = pfVar2[2] - fVar123;
          fVar67 = pfVar4[2] - fVar124;
          fVar89 = fVar89 - fVar41;
          fVar90 = fVar90 - fVar41;
          fVar91 = fVar91 - fVar41;
          fVar92 = fVar92 - fVar41;
          fVar76 = fVar97 * fVar85 - fVar93 * fVar43;
          fVar79 = fVar98 * fVar86 - fVar94 * fVar49;
          fVar81 = fVar99 * fVar87 - fVar95 * fVar52;
          fVar83 = fVar100 * fVar88 - fVar96 * fVar53;
          local_a38 = CONCAT44(fVar79,fVar76);
          fVar77 = fVar93 * fVar59 - fVar54 * fVar85;
          fVar80 = fVar94 * fVar65 - fVar56 * fVar86;
          fVar82 = fVar95 * fVar66 - fVar57 * fVar87;
          fVar84 = fVar96 * fVar67 - fVar58 * fVar88;
          local_a28 = CONCAT44(fVar80,fVar77);
          fVar41 = *(float *)(param_2 + 0x10);
          fVar44 = *(float *)(param_2 + 0x14);
          fVar50 = *(float *)(param_2 + 0x18);
          fVar109 = fVar54 * fVar43 - fVar97 * fVar59;
          fVar111 = fVar56 * fVar49 - fVar98 * fVar65;
          fVar113 = fVar57 * fVar52 - fVar99 * fVar66;
          fVar115 = fVar58 * fVar53 - fVar100 * fVar67;
          local_a18 = CONCAT44(fVar111,fVar109);
          fVar68 = fVar68 - fVar35;
          fVar73 = fVar73 - fVar35;
          fVar74 = fVar74 - fVar35;
          fVar75 = fVar75 - fVar35;
          fVar121 = fVar121 - fVar39;
          fVar122 = fVar122 - fVar39;
          fVar123 = fVar123 - fVar39;
          fVar124 = fVar124 - fVar39;
          fVar117 = fVar89 * fVar44 - fVar68 * fVar41;
          fVar118 = fVar90 * fVar44 - fVar73 * fVar41;
          fVar119 = fVar91 * fVar44 - fVar74 * fVar41;
          fVar120 = fVar92 * fVar44 - fVar75 * fVar41;
          fVar110 = fVar121 * fVar41 - fVar89 * fVar50;
          fVar112 = fVar122 * fVar41 - fVar90 * fVar50;
          fVar114 = fVar123 * fVar41 - fVar91 * fVar50;
          fVar116 = fVar124 * fVar41 - fVar92 * fVar50;
          fVar105 = fVar68 * fVar50 - fVar121 * fVar44;
          fVar106 = fVar73 * fVar50 - fVar122 * fVar44;
          fVar107 = fVar74 * fVar50 - fVar123 * fVar44;
          fVar108 = fVar75 * fVar50 - fVar124 * fVar44;
          fVar35 = fVar44 * fVar77 + fVar50 * fVar76 + fVar41 * fVar109;
          fVar39 = fVar44 * fVar80 + fVar50 * fVar79 + fVar41 * fVar111;
          fVar40 = fVar44 * fVar82 + fVar50 * fVar81 + fVar41 * fVar113;
          fVar41 = fVar44 * fVar84 + fVar50 * fVar83 + fVar41 * fVar115;
          auVar78._0_4_ = uVar31 & (uint)fVar35;
          auVar78._4_4_ = uVar31 & (uint)fVar39;
          auVar78._8_4_ = uVar31 & (uint)fVar40;
          auVar78._12_4_ = uVar31 & (uint)fVar41;
          fVar101 = (float)(_LC3 & (uint)fVar35);
          fVar102 = (float)(_UNK_001151c4 & (uint)fVar39);
          fVar103 = (float)(_UNK_001151c8 & (uint)fVar40);
          fVar104 = (float)(_UNK_001151cc & (uint)fVar41);
          auVar55._0_4_ = fVar54 * fVar117 + fVar97 * fVar110 + fVar93 * fVar105;
          auVar55._4_4_ = fVar56 * fVar118 + fVar98 * fVar112 + fVar94 * fVar106;
          auVar55._8_4_ = fVar57 * fVar119 + fVar99 * fVar114 + fVar95 * fVar107;
          auVar55._12_4_ = fVar58 * fVar120 + fVar100 * fVar116 + fVar96 * fVar108;
          auVar47._0_4_ = fVar43 * fVar110 + fVar59 * fVar117 + fVar85 * fVar105;
          auVar47._4_4_ = fVar49 * fVar112 + fVar65 * fVar118 + fVar86 * fVar106;
          auVar47._8_4_ = fVar52 * fVar114 + fVar66 * fVar119 + fVar87 * fVar107;
          auVar47._12_4_ = fVar53 * fVar116 + fVar67 * fVar120 + fVar88 * fVar108;
          auVar55 = auVar55 ^ auVar78;
          auVar47 = auVar47 ^ auVar78;
          fVar52 = auVar55._0_4_;
          fVar53 = auVar55._4_4_;
          fVar54 = auVar55._8_4_;
          fVar56 = auVar55._12_4_;
          fVar44 = auVar47._0_4_;
          fVar50 = auVar47._4_4_;
          fVar43 = auVar47._8_4_;
          fVar49 = auVar47._12_4_;
          auVar37._0_4_ =
               -(uint)((0.0 <= fVar52 && (0.0 <= fVar44 && fVar35 != 0.0)) &&
                      fVar52 + fVar44 <= fVar101) & _DAT_00116108;
          auVar37._4_4_ =
               -(uint)(((0.0 <= fVar50 && fVar39 != 0.0) && 0.0 <= fVar53) &&
                      fVar53 + fVar50 <= fVar102) & uRam000000000011610c;
          auVar37._8_4_ =
               -(uint)((0.0 <= fVar54 && (fVar40 != 0.0 && 0.0 <= fVar43)) &&
                      fVar54 + fVar43 <= fVar103) & uRam0000000000116110;
          auVar37._12_4_ =
               -(uint)(((0.0 <= fVar49 && fVar41 != 0.0) && 0.0 <= fVar56) &&
                      fVar56 + fVar49 <= fVar104) & uRam0000000000116114;
          iVar26 = movmskps((int)lVar11,auVar37);
          if (iVar26 != 0) {
            fVar41 = *(float *)(param_2 + 0x20);
            auVar72._0_4_ = fVar68 * fVar77 + fVar76 * fVar121 + fVar89 * fVar109;
            auVar72._4_4_ = fVar73 * fVar80 + fVar79 * fVar122 + fVar90 * fVar111;
            auVar72._8_4_ = fVar74 * fVar82 + fVar81 * fVar123 + fVar91 * fVar113;
            auVar72._12_4_ = fVar75 * fVar84 + fVar83 * fVar124 + fVar92 * fVar115;
            auVar72 = auVar72 ^ auVar78;
            fVar68 = auVar72._0_4_;
            fVar121 = auVar72._4_4_;
            fVar90 = auVar72._8_4_;
            fVar73 = auVar72._12_4_;
            fVar89 = *(float *)(param_2 + 0xc);
            auVar64._0_4_ = -(uint)(fVar89 * fVar101 < fVar68 && fVar68 <= fVar41 * fVar101);
            auVar64._4_4_ = -(uint)(fVar89 * fVar102 < fVar121 && fVar121 <= fVar41 * fVar102);
            auVar64._8_4_ = -(uint)(fVar89 * fVar103 < fVar90 && fVar90 <= fVar41 * fVar103);
            auVar64._12_4_ = -(uint)(fVar89 * fVar104 < fVar73 && fVar73 <= fVar41 * fVar104);
            auVar38._0_4_ = auVar37._0_4_ & auVar64._0_4_;
            auVar38._4_4_ = auVar37._4_4_ & auVar64._4_4_;
            auVar38._8_4_ = auVar37._8_4_ & auVar64._8_4_;
            auVar38._12_4_ = auVar37._12_4_ & auVar64._12_4_;
            iVar26 = movmskps(iVar26,auVar38);
            if (iVar26 != 0) {
              auVar14._4_4_ = fVar102;
              auVar14._0_4_ = fVar101;
              auVar14._8_4_ = fVar103;
              auVar14._12_4_ = fVar104;
              auVar36 = rcpps(auVar64,auVar14);
              local_818 = local_a18;
              uStack_810 = CONCAT44(fVar115,fVar113);
              fVar89 = auVar36._0_4_;
              fVar122 = auVar36._4_4_;
              fVar91 = auVar36._8_4_;
              fVar74 = auVar36._12_4_;
              local_808 = local_a28;
              uStack_800 = CONCAT44(fVar84,fVar82);
              local_7f8 = local_a38;
              uStack_7f0 = CONCAT44(fVar83,fVar81);
              fVar89 = (_LC7 - fVar101 * fVar89) * fVar89 + fVar89;
              fVar122 = (_LC7 - fVar102 * fVar122) * fVar122 + fVar122;
              fVar91 = (_LC7 - fVar103 * fVar91) * fVar91 + fVar91;
              fVar74 = (_LC7 - fVar104 * fVar74) * fVar74 + fVar74;
              local_828[0] = fVar68 * fVar89;
              local_828[1] = fVar121 * fVar122;
              local_828[2] = fVar90 * fVar91;
              local_828[3] = fVar73 * fVar74;
              local_848[0] = fVar44 * fVar89;
              local_848[1] = fVar50 * fVar122;
              local_848[2] = fVar43 * fVar91;
              local_848[3] = fVar49 * fVar74;
              local_838[0] = fVar89 * fVar52;
              local_838[1] = fVar122 * fVar53;
              local_838[2] = fVar91 * fVar54;
              local_838[3] = fVar74 * fVar56;
              local_a38 = CONCAT44((int)((ulong)lVar11 >> 0x20),iVar26);
              do {
                uVar27 = 0;
                if (local_a38 != 0) {
                  for (; (local_a38 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                  }
                }
                uVar32 = *(uint *)((long)&local_8d8 + uVar27 * 4);
                lVar11 = *(long *)(*(long *)(lVar10 + 0x1e0) + (ulong)uVar32 * 8);
                pbVar28 = *(byte **)(param_3 + 0x10);
                pcVar29 = *(code **)(pbVar28 + 0x10);
                if ((pcVar29 == (code *)0x0) && (*(long *)(lVar11 + 0x48) == 0)) {
LAB_0010b214:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010adbb;
                }
                uStack_8b0 = uVar32;
                uVar18 = *(undefined4 *)(param_2 + 0x20);
                iStack_91c = -1;
                uStack_8ac = **(undefined4 **)(param_3 + 8);
                fStack_8b8 = local_838[uVar27];
                fStack_8bc = local_848[uVar27];
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar27 * 4);
                uStack_8b4 = *(undefined4 *)((long)&local_8e8 + uVar27 * 4);
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar27 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar27];
                piStack_918 = &iStack_91c;
                uStack_910 = *(undefined8 *)(lVar11 + 0x18);
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar27 * 4);
                uStack_908 = *(undefined8 *)(param_3 + 8);
                puStack_8f8 = &uStack_8c8;
                uStack_8f0 = 1;
                pRStack_900 = param_2;
                if (*(code **)(lVar11 + 0x48) == (code *)0x0) {
LAB_0010b3b1:
                  if (pcVar29 != (code *)0x0) {
                    if (((*pbVar28 & 2) != 0) || ((*(byte *)(lVar11 + 0x3e) & 0x40) != 0)) {
                      (*pcVar29)(&piStack_918);
                    }
                    if (*piStack_918 == 0) goto LAB_0010b437;
                  }
                  goto LAB_0010b214;
                }
                (**(code **)(lVar11 + 0x48))(&piStack_918);
                if (*piStack_918 != 0) {
                  pbVar28 = *(byte **)(param_3 + 0x10);
                  pcVar29 = *(code **)(pbVar28 + 0x10);
                  goto LAB_0010b3b1;
                }
LAB_0010b437:
                *(undefined4 *)(param_2 + 0x20) = uVar18;
                local_a38 = local_a38 ^ 1L << (uVar27 & 0x3f);
              } while (local_a38 != 0);
            }
          }
          lVar25 = lVar25 + 1;
          puVar24 = puVar24 + 0x14;
        } while (lVar25 != uVar22 - 8);
      }
LAB_0010adaa:
      puVar21 = &local_7e8;
    } while (puVar30 != puVar21);
  }
LAB_0010adbb:
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
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  byte *pbVar26;
  RayHitK *pRVar27;
  code *pcVar28;
  undefined4 uVar29;
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
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar66;
  float fVar67;
  undefined1 auVar63 [16];
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  float fVar73;
  float fVar74;
  undefined1 auVar70 [16];
  float fVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar88;
  float fVar89;
  undefined1 auVar86 [16];
  float fVar90;
  undefined1 auVar87 [16];
  float fVar91;
  float fVar96;
  float fVar97;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
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
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined1 auStack_11b8 [8];
  float fStack_11b0;
  float fStack_11ac;
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
  undefined1 (*pauVar30) [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar36 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar36 < 0.0) {
      fVar36 = 0.0;
    }
    fVar85 = *(float *)(param_2 + 0xc);
    if (fVar85 < 0.0) {
      fVar85 = 0.0;
    }
    fVar15 = *(float *)param_2;
    fVar16 = *(float *)(param_2 + 4);
    fVar17 = *(float *)(param_2 + 8);
    auVar78._4_4_ = fVar36;
    auVar78._0_4_ = fVar36;
    auVar78._8_4_ = fVar36;
    auVar78._12_4_ = fVar36;
    uVar32 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar33 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar34 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar35 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar63._0_4_ = ~uVar32 & *(uint *)(param_2 + 0x10);
    auVar63._4_4_ = ~uVar33 & *(uint *)(param_2 + 0x14);
    auVar63._8_4_ = ~uVar34 & *(uint *)(param_2 + 0x18);
    auVar63._12_4_ = ~uVar35 & *(uint *)(param_2 + 0x1c);
    auVar38._0_4_ = uVar32 & (uint)_LC5;
    auVar38._4_4_ = uVar33 & (uint)_LC5;
    auVar38._8_4_ = uVar34 & (uint)_LC5;
    auVar38._12_4_ = uVar35 & (uint)_LC5;
    auVar38 = auVar38 | auVar63;
    auVar63 = rcpps(auVar63,auVar38);
    fVar36 = auVar63._0_4_;
    fVar41 = auVar63._4_4_;
    fVar43 = auVar63._8_4_;
    fVar36 = (_LC7 - auVar38._0_4_ * fVar36) * fVar36 + fVar36;
    fVar41 = (_LC7 - auVar38._4_4_ * fVar41) * fVar41 + fVar41;
    fVar43 = (_LC7 - auVar38._8_4_ * fVar43) * fVar43 + fVar43;
    auVar70._4_4_ = fVar85;
    auVar70._0_4_ = fVar85;
    auVar70._8_4_ = fVar85;
    auVar70._12_4_ = fVar85;
    pauVar18 = (undefined1 (*) [16])local_f78;
joined_r0x0010b603:
    pauVar30 = pauVar18;
    if (pauVar30 != (undefined1 (*) [16])local_f88) {
      auStack_11b8._4_4_ = *(undefined4 *)(param_2 + 0x20);
      pauVar18 = pauVar30 + -1;
      if (*(float *)(pauVar30[-1] + 8) <= (float)auStack_11b8._4_4_) {
        pauVar21 = *(undefined1 (**) [16])pauVar30[-1];
        while (((ulong)pauVar21 & 8) == 0) {
          pfVar1 = (float *)(pauVar21[6] + (-(uint)(fVar43 < 0.0) & 0x10));
          pauVar9 = pauVar21 + (ulong)(fVar36 < 0.0) + 2;
          pfVar2 = (float *)(pauVar21[4] + (-(uint)(fVar41 < 0.0) & 0x10));
          pfVar3 = (float *)(pauVar21[5] + (-(ulong)(fVar41 < 0.0) & 0xfffffffffffffff0));
          auVar92._0_4_ = (*pfVar1 - fVar17) * fVar43;
          auVar92._4_4_ = (pfVar1[1] - fVar17) * fVar43;
          auVar92._8_4_ = (pfVar1[2] - fVar17) * fVar43;
          auVar92._12_4_ = (pfVar1[3] - fVar17) * fVar43;
          auVar104._0_4_ = (*pfVar2 - fVar16) * fVar41;
          auVar104._4_4_ = (pfVar2[1] - fVar16) * fVar41;
          auVar104._8_4_ = (pfVar2[2] - fVar16) * fVar41;
          auVar104._12_4_ = (pfVar2[3] - fVar16) * fVar41;
          auVar86._0_4_ = (*(float *)*pauVar9 - fVar15) * fVar36;
          auVar86._4_4_ = (*(float *)(*pauVar9 + 4) - fVar15) * fVar36;
          auVar86._8_4_ = (*(float *)(*pauVar9 + 8) - fVar15) * fVar36;
          auVar86._12_4_ = (*(float *)(*pauVar9 + 0xc) - fVar15) * fVar36;
          auVar114._0_4_ = (*pfVar3 - fVar16) * fVar41;
          auVar114._4_4_ = (pfVar3[1] - fVar16) * fVar41;
          auVar114._8_4_ = (pfVar3[2] - fVar16) * fVar41;
          auVar114._12_4_ = (pfVar3[3] - fVar16) * fVar41;
          auVar63 = maxps(auVar92,auVar70);
          auVar38 = maxps(auVar86,auVar104);
          pfVar1 = (float *)(pauVar21[7] + (-(ulong)(fVar43 < 0.0) & 0xfffffffffffffff0));
          local_1048[0] = maxps(auVar38,auVar63);
          pfVar2 = (float *)(pauVar21[2] + ((ulong)(fVar36 < 0.0) * 0x10 ^ 0x10));
          auVar105._0_4_ = (*pfVar1 - fVar17) * fVar43;
          auVar105._4_4_ = (pfVar1[1] - fVar17) * fVar43;
          auVar105._8_4_ = (pfVar1[2] - fVar17) * fVar43;
          auVar105._12_4_ = (pfVar1[3] - fVar17) * fVar43;
          auVar93._0_4_ = (*pfVar2 - fVar15) * fVar36;
          auVar93._4_4_ = (pfVar2[1] - fVar15) * fVar36;
          auVar93._8_4_ = (pfVar2[2] - fVar15) * fVar36;
          auVar93._12_4_ = (pfVar2[3] - fVar15) * fVar36;
          auVar63 = minps(auVar105,auVar78);
          auVar38 = minps(auVar93,auVar114);
          auVar38 = minps(auVar38,auVar63);
          auVar106._4_4_ = -(uint)(SUB164(local_1048[0],4) <= auVar38._4_4_);
          auVar106._0_4_ = -(uint)(SUB164(local_1048[0],0) <= auVar38._0_4_);
          auVar106._8_4_ = -(uint)(SUB164(local_1048[0],8) <= auVar38._8_4_);
          auVar106._12_4_ = -(uint)(SUB164(local_1048[0],0xc) <= auVar38._12_4_);
          uVar29 = movmskps((int)pauVar30,auVar106);
          pauVar30 = (undefined1 (*) [16])CONCAT44((int)((ulong)pauVar30 >> 0x20),uVar29);
          if (pauVar30 == (undefined1 (*) [16])0x0) goto joined_r0x0010b603;
          uVar19 = (ulong)pauVar21 & 0xfffffffffffffff0;
          lVar22 = 0;
          if (pauVar30 != (undefined1 (*) [16])0x0) {
            for (; ((ulong)pauVar30 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
            }
          }
          pauVar21 = *(undefined1 (**) [16])(uVar19 + lVar22 * 8);
          uVar25 = (ulong)(pauVar30[-1] + 0xf) & (ulong)pauVar30;
          if (uVar25 != 0) {
            fVar85 = afStack_fe8[lVar22 + -0x18];
            lVar22 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
              }
            }
            pauVar30 = *(undefined1 (**) [16])(uVar19 + lVar22 * 8);
            fVar69 = afStack_fe8[lVar22 + -0x18];
            uVar25 = uVar25 & uVar25 - 1;
            if (uVar25 == 0) {
              if ((uint)fVar85 < (uint)fVar69) {
                *(undefined1 (**) [16])*pauVar18 = pauVar30;
                *(float *)(*pauVar18 + 8) = fVar69;
                pauVar18 = pauVar18 + 1;
              }
              else {
                *(undefined1 (**) [16])*pauVar18 = pauVar21;
                *(float *)(*pauVar18 + 8) = fVar85;
                pauVar18 = pauVar18 + 1;
                pauVar21 = pauVar30;
              }
            }
            else {
              auVar122._8_4_ = fVar85;
              auVar122._0_8_ = pauVar21;
              auVar122._12_4_ = 0;
              lVar22 = 0;
              if (uVar25 != 0) {
                for (; (uVar25 >> lVar22 & 1) == 0; lVar22 = lVar22 + 1) {
                }
              }
              uVar14 = *(ulong *)(uVar19 + lVar22 * 8);
              auVar131._8_4_ = fVar69;
              auVar131._0_8_ = pauVar30;
              auVar131._12_4_ = 0;
              fVar130 = afStack_fe8[lVar22 + -0x18];
              auVar87._8_4_ = fVar130;
              auVar87._0_8_ = uVar14;
              auVar87._12_4_ = 0;
              auVar94._8_4_ = -(uint)((int)fVar85 < (int)fVar69);
              uVar25 = uVar25 - 1 & uVar25;
              if (uVar25 == 0) {
                auVar94._4_4_ = auVar94._8_4_;
                auVar94._0_4_ = auVar94._8_4_;
                auVar94._12_4_ = auVar94._8_4_;
                auVar107 = auVar122 & auVar94 | ~auVar94 & auVar131;
                auVar63 = auVar94 & auVar131 | ~auVar94 & auVar122;
                auVar115._8_4_ = -(uint)(auVar107._8_4_ < (int)fVar130);
                auVar115._0_8_ = CONCAT44(auVar115._8_4_,auVar115._8_4_);
                auVar115._12_4_ = auVar115._8_4_;
                auVar38 = auVar87 & auVar115 | ~auVar115 & auVar107;
                pauVar21 = (undefined1 (*) [16])
                           (auVar107._0_8_ & auVar115._0_8_ | ~auVar115._0_8_ & uVar14);
                auVar123._8_4_ = -(uint)(auVar63._8_4_ < auVar38._8_4_);
                auVar123._4_4_ = auVar123._8_4_;
                auVar123._0_4_ = auVar123._8_4_;
                auVar123._12_4_ = auVar123._8_4_;
                *pauVar18 = auVar38 & auVar123 | ~auVar123 & auVar63;
                pauVar18[1] = auVar63 & auVar123 | ~auVar123 & auVar38;
                pauVar30 = (undefined1 (*) [16])0x0;
                pauVar18 = pauVar18 + 2;
              }
              else {
                pauVar30 = (undefined1 (*) [16])0x0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> (long)pauVar30 & 1) == 0;
                      pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1)) {
                  }
                }
                auVar95._4_4_ = auVar94._8_4_;
                auVar95._0_4_ = auVar94._8_4_;
                auVar95._8_4_ = auVar94._8_4_;
                auVar95._12_4_ = auVar94._8_4_;
                auVar136._8_4_ = afStack_fe8[(long)(pauVar30[-2] + 8)];
                auVar136._0_8_ = *(undefined8 *)(uVar19 + (long)pauVar30 * 8);
                auVar136._12_4_ = 0;
                auVar116 = auVar122 & auVar95 | ~auVar95 & auVar131;
                auVar124._8_4_ = -(uint)((int)fVar130 < (int)afStack_fe8[(long)(pauVar30[-2] + 8)]);
                auVar63 = auVar95 & auVar131 | ~auVar95 & auVar122;
                auVar124._4_4_ = auVar124._8_4_;
                auVar124._0_4_ = auVar124._8_4_;
                auVar124._12_4_ = auVar124._8_4_;
                auVar108 = auVar87 & auVar124 | ~auVar124 & auVar136;
                auVar38 = auVar136 & auVar124 | ~auVar124 & auVar87;
                auVar132._8_4_ = -(uint)(auVar63._8_4_ < auVar38._8_4_);
                auVar132._4_4_ = auVar132._8_4_;
                auVar132._0_4_ = auVar132._8_4_;
                auVar132._12_4_ = auVar132._8_4_;
                auVar125 = auVar63 & auVar132 | ~auVar132 & auVar38;
                auVar137._8_4_ = -(uint)(auVar116._8_4_ < auVar108._8_4_);
                auVar137._0_8_ = CONCAT44(auVar137._8_4_,auVar137._8_4_);
                auVar137._12_4_ = auVar137._8_4_;
                auVar107 = ~auVar137 & auVar116 | auVar108 & auVar137;
                auVar109._8_4_ = -(uint)(auVar107._8_4_ < auVar125._8_4_);
                auVar109._4_4_ = auVar109._8_4_;
                auVar109._0_4_ = auVar109._8_4_;
                auVar109._12_4_ = auVar109._8_4_;
                pauVar18[1] = auVar125 & auVar109 | ~auVar109 & auVar107;
                *pauVar18 = auVar38 & auVar132 | ~auVar132 & auVar63;
                pauVar18[2] = auVar107 & auVar109 | ~auVar109 & auVar125;
                pauVar21 = (undefined1 (*) [16])
                           (auVar116._0_8_ & auVar137._0_8_ | ~auVar137._0_8_ & auVar108._0_8_);
                pauVar18 = pauVar18 + 3;
              }
            }
          }
        }
        puVar20 = (uint *)((ulong)pauVar21 & 0xfffffffffffffff0);
        uVar19 = (ulong)((uint)pauVar21 & 0xf);
        if (uVar19 == 8) {
          auVar78._4_4_ = auStack_11b8._4_4_;
          auVar78._0_4_ = auStack_11b8._4_4_;
          auVar78._8_4_ = auStack_11b8._4_4_;
          auVar78._12_4_ = auStack_11b8._4_4_;
        }
        else {
          lVar22 = 0;
          auStack_11b8._0_4_ = auStack_11b8._4_4_;
          fStack_11b0 = (float)auStack_11b8._4_4_;
          fStack_11ac = (float)auStack_11b8._4_4_;
          do {
            lVar11 = *(long *)param_3;
            lVar31 = *(long *)(lVar11 + 0x220);
            lVar12 = *(long *)(lVar31 + (ulong)puVar20[0xc] * 8);
            pfVar1 = (float *)(lVar12 + (ulong)*puVar20 * 4);
            fVar85 = *pfVar1;
            fVar69 = pfVar1[1];
            fVar130 = pfVar1[2];
            pfVar1 = (float *)(lVar12 + (ulong)puVar20[4] * 4);
            pfVar2 = (float *)(lVar12 + (ulong)puVar20[8] * 4);
            lVar12 = *(long *)(lVar31 + (ulong)puVar20[0xd] * 8);
            pfVar3 = (float *)(lVar12 + (ulong)puVar20[1] * 4);
            fVar88 = *pfVar3;
            fVar73 = pfVar3[1];
            fVar133 = pfVar3[2];
            pfVar3 = (float *)(lVar12 + (ulong)puVar20[5] * 4);
            pfVar4 = (float *)(lVar12 + (ulong)puVar20[9] * 4);
            lVar12 = *(long *)(lVar31 + (ulong)puVar20[0xe] * 8);
            pfVar5 = (float *)(lVar12 + (ulong)puVar20[2] * 4);
            fVar89 = *pfVar5;
            fVar74 = pfVar5[1];
            fVar134 = pfVar5[2];
            pfVar5 = (float *)(lVar12 + (ulong)puVar20[6] * 4);
            pfVar6 = (float *)(lVar12 + (ulong)puVar20[10] * 4);
            lVar31 = *(long *)(lVar31 + (ulong)puVar20[0xf] * 8);
            pfVar7 = (float *)(lVar31 + (ulong)puVar20[3] * 4);
            fVar90 = *pfVar7;
            fVar75 = pfVar7[1];
            fVar135 = pfVar7[2];
            pfVar7 = (float *)(lVar31 + (ulong)puVar20[7] * 4);
            pfVar8 = (float *)(lVar31 + (ulong)puVar20[0xb] * 4);
            uStack_1088 = *(undefined8 *)(puVar20 + 0x10);
            uStack_1080 = *(undefined8 *)(puVar20 + 0x12);
            fVar91 = fVar85 - *pfVar1;
            fVar96 = fVar88 - *pfVar3;
            fVar97 = fVar89 - *pfVar5;
            fVar98 = fVar90 - *pfVar7;
            fVar99 = fVar69 - pfVar1[1];
            fVar100 = fVar73 - pfVar3[1];
            fVar101 = fVar74 - pfVar5[1];
            fVar102 = fVar75 - pfVar7[1];
            fVar46 = pfVar2[1] - fVar69;
            fVar50 = pfVar4[1] - fVar73;
            fVar52 = pfVar6[1] - fVar74;
            fVar53 = pfVar8[1] - fVar75;
            fVar81 = *pfVar2 - fVar85;
            fVar82 = *pfVar4 - fVar88;
            fVar83 = *pfVar6 - fVar89;
            fVar84 = *pfVar8 - fVar90;
            uStack_1078 = *(undefined8 *)(puVar20 + 0xc);
            uStack_1070 = *(undefined8 *)(puVar20 + 0xe);
            fVar54 = fVar130 - pfVar1[2];
            fVar59 = fVar133 - pfVar3[2];
            fVar60 = fVar134 - pfVar5[2];
            fVar61 = fVar135 - pfVar7[2];
            fVar62 = pfVar2[2] - fVar130;
            fVar66 = pfVar4[2] - fVar133;
            fVar67 = pfVar6[2] - fVar134;
            fVar68 = pfVar8[2] - fVar135;
            fVar76 = fVar99 * fVar81 - fVar91 * fVar46;
            fVar79 = fVar100 * fVar82 - fVar96 * fVar50;
            uStack_11e0._0_4_ = fVar101 * fVar83 - fVar97 * fVar52;
            uStack_11e0._4_4_ = fVar102 * fVar84 - fVar98 * fVar53;
            uStack_11e8 = CONCAT44(fVar79,fVar76);
            fVar77 = fVar91 * fVar62 - fVar54 * fVar81;
            fVar80 = fVar96 * fVar66 - fVar59 * fVar82;
            uStack_11d0._0_4_ = fVar97 * fVar67 - fVar60 * fVar83;
            uStack_11d0._4_4_ = fVar98 * fVar68 - fVar61 * fVar84;
            uStack_11d8 = CONCAT44(fVar80,fVar77);
            fVar45 = *(float *)(param_2 + 0x10);
            fVar47 = *(float *)(param_2 + 0x14);
            fVar51 = *(float *)(param_2 + 0x18);
            fVar120 = fVar54 * fVar46 - fVar99 * fVar62;
            fVar126 = fVar59 * fVar50 - fVar100 * fVar66;
            uStack_11c0._0_4_ = fVar60 * fVar52 - fVar101 * fVar67;
            uStack_11c0._4_4_ = fVar61 * fVar53 - fVar102 * fVar68;
            uStack_11c8 = CONCAT44(fVar126,fVar120);
            fVar37 = *(float *)param_2;
            fVar42 = *(float *)(param_2 + 4);
            fVar44 = *(float *)(param_2 + 8);
            fVar69 = fVar69 - fVar42;
            fVar73 = fVar73 - fVar42;
            fVar74 = fVar74 - fVar42;
            fVar75 = fVar75 - fVar42;
            fVar85 = fVar85 - fVar37;
            fVar88 = fVar88 - fVar37;
            fVar89 = fVar89 - fVar37;
            fVar90 = fVar90 - fVar37;
            fVar130 = fVar130 - fVar44;
            fVar133 = fVar133 - fVar44;
            fVar134 = fVar134 - fVar44;
            fVar135 = fVar135 - fVar44;
            fVar121 = fVar85 * fVar47 - fVar69 * fVar45;
            fVar127 = fVar88 * fVar47 - fVar73 * fVar45;
            fVar128 = fVar89 * fVar47 - fVar74 * fVar45;
            fVar129 = fVar90 * fVar47 - fVar75 * fVar45;
            fVar113 = fVar130 * fVar45 - fVar85 * fVar51;
            fVar117 = fVar133 * fVar45 - fVar88 * fVar51;
            fVar118 = fVar134 * fVar45 - fVar89 * fVar51;
            fVar119 = fVar135 * fVar45 - fVar90 * fVar51;
            fVar103 = fVar69 * fVar51 - fVar130 * fVar47;
            fVar110 = fVar73 * fVar51 - fVar133 * fVar47;
            fVar111 = fVar74 * fVar51 - fVar134 * fVar47;
            fVar112 = fVar75 * fVar51 - fVar135 * fVar47;
            fVar37 = fVar47 * fVar77 + fVar51 * fVar76 + fVar45 * fVar120;
            fVar42 = fVar47 * fVar80 + fVar51 * fVar79 + fVar45 * fVar126;
            fVar44 = fVar47 * (float)uStack_11d0 + fVar51 * (float)uStack_11e0 +
                     fVar45 * (float)uStack_11c0;
            fVar45 = fVar47 * uStack_11d0._4_4_ + fVar51 * uStack_11e0._4_4_ +
                     fVar45 * uStack_11c0._4_4_;
            uVar32 = _LC9 & (uint)fVar37;
            uVar33 = _UNK_001151f4 & (uint)fVar42;
            uVar34 = _UNK_001151f8 & (uint)fVar44;
            uVar35 = _UNK_001151fc & (uint)fVar45;
            auVar108._0_4_ = (float)(_LC3 & (uint)fVar37);
            auVar108._4_4_ = (float)(_UNK_001151c4 & (uint)fVar42);
            auVar108._8_4_ = (float)(_UNK_001151c8 & (uint)fVar44);
            auVar108._12_4_ = (float)(_UNK_001151cc & (uint)fVar45);
            fVar54 = (float)((uint)(fVar54 * fVar121 + fVar99 * fVar113 + fVar91 * fVar103) ^ uVar32
                            );
            fVar59 = (float)((uint)(fVar59 * fVar127 + fVar100 * fVar117 + fVar96 * fVar110) ^
                            uVar33);
            fVar60 = (float)((uint)(fVar60 * fVar128 + fVar101 * fVar118 + fVar97 * fVar111) ^
                            uVar34);
            fVar61 = (float)((uint)(fVar61 * fVar129 + fVar102 * fVar119 + fVar98 * fVar112) ^
                            uVar35);
            fVar47 = (float)((uint)(fVar46 * fVar113 + fVar62 * fVar121 + fVar81 * fVar103) ^ uVar32
                            );
            fVar51 = (float)((uint)(fVar50 * fVar117 + fVar66 * fVar127 + fVar82 * fVar110) ^ uVar33
                            );
            fVar46 = (float)((uint)(fVar52 * fVar118 + fVar67 * fVar128 + fVar83 * fVar111) ^ uVar34
                            );
            fVar50 = (float)((uint)(fVar53 * fVar119 + fVar68 * fVar129 + fVar84 * fVar112) ^ uVar35
                            );
            auVar107._0_4_ =
                 -(uint)(((0.0 <= fVar47 && fVar37 != 0.0) && 0.0 <= fVar54) &&
                        fVar54 + fVar47 <= auVar108._0_4_) & _DAT_00116108;
            auVar107._4_4_ =
                 -(uint)(((0.0 <= fVar51 && fVar42 != 0.0) && 0.0 <= fVar59) &&
                        fVar59 + fVar51 <= auVar108._4_4_) & uRam000000000011610c;
            auVar107._8_4_ =
                 -(uint)((0.0 <= fVar60 && (fVar44 != 0.0 && 0.0 <= fVar46)) &&
                        fVar60 + fVar46 <= auVar108._8_4_) & uRam0000000000116110;
            auVar107._12_4_ =
                 -(uint)((0.0 <= fVar61 && (0.0 <= fVar50 && fVar45 != 0.0)) &&
                        fVar61 + fVar50 <= auVar108._12_4_) & uRam0000000000116114;
            iVar23 = movmskps((int)lVar31,auVar107);
            auVar78 = _auStack_11b8;
            if (iVar23 != 0) {
              auVar71._0_4_ = fVar69 * fVar77 + fVar130 * fVar76 + fVar85 * fVar120;
              auVar71._4_4_ = fVar73 * fVar80 + fVar133 * fVar79 + fVar88 * fVar126;
              auVar71._8_4_ =
                   fVar74 * (float)uStack_11d0 + fVar134 * (float)uStack_11e0 +
                   fVar89 * (float)uStack_11c0;
              auVar71._12_4_ =
                   fVar75 * uStack_11d0._4_4_ + fVar135 * uStack_11e0._4_4_ +
                   fVar90 * uStack_11c0._4_4_;
              auVar116._4_4_ = uVar33;
              auVar116._0_4_ = uVar32;
              auVar116._8_4_ = uVar34;
              auVar116._12_4_ = uVar35;
              auVar71 = auVar71 ^ auVar116;
              fVar69 = auVar71._0_4_;
              fVar130 = auVar71._4_4_;
              fVar88 = auVar71._8_4_;
              fVar73 = auVar71._12_4_;
              fVar85 = *(float *)(param_2 + 0xc);
              auVar125._0_4_ =
                   auVar107._0_4_ &
                   -(uint)(fVar69 <= SUB164(_auStack_11b8,0) * auVar108._0_4_ &&
                          fVar85 * auVar108._0_4_ < fVar69);
              auVar125._4_4_ =
                   auVar107._4_4_ &
                   -(uint)(fVar130 <= SUB164(_auStack_11b8,4) * auVar108._4_4_ &&
                          fVar85 * auVar108._4_4_ < fVar130);
              auVar125._8_4_ =
                   auVar107._8_4_ &
                   -(uint)(fVar88 <= SUB164(_auStack_11b8,8) * auVar108._8_4_ &&
                          fVar85 * auVar108._8_4_ < fVar88);
              auVar125._12_4_ =
                   auVar107._12_4_ &
                   -(uint)(fVar73 <= SUB164(_auStack_11b8,0xc) * auVar108._12_4_ &&
                          fVar85 * auVar108._12_4_ < fVar73);
              iVar23 = movmskps(iVar23,auVar125);
              if (iVar23 != 0) {
                auVar78 = rcpps(_auStack_11b8,auVar108);
                auStack_1098 = auVar125;
                uStack_fb8 = uStack_11c8;
                uStack_fb0 = uStack_11c0;
                fVar85 = auVar78._0_4_;
                fVar133 = auVar78._4_4_;
                fVar89 = auVar78._8_4_;
                fVar74 = auVar78._12_4_;
                uStack_fa8 = uStack_11d8;
                uStack_fa0 = uStack_11d0;
                uStack_f98 = uStack_11e8;
                uStack_f90 = uStack_11e0;
                fVar85 = (_LC7 - auVar108._0_4_ * fVar85) * fVar85 + fVar85;
                fVar133 = (_LC7 - auVar108._4_4_ * fVar133) * fVar133 + fVar133;
                fVar89 = (_LC7 - auVar108._8_4_ * fVar89) * fVar89 + fVar89;
                fVar74 = (_LC7 - auVar108._12_4_ * fVar74) * fVar74 + fVar74;
                auVar72._0_4_ = fVar69 * fVar85;
                auVar72._4_4_ = fVar130 * fVar133;
                auVar72._8_4_ = fVar88 * fVar89;
                auVar72._12_4_ = fVar73 * fVar74;
                auVar55._0_4_ = ~auVar125._0_4_ & _LC18;
                auVar55._4_4_ = ~auVar125._4_4_ & _LC18;
                auVar55._8_4_ = ~auVar125._8_4_ & _LC18;
                auVar55._12_4_ = ~auVar125._12_4_ & _LC18;
                afStack_fe8[0] = fVar47 * fVar85;
                afStack_fe8[1] = fVar51 * fVar133;
                afStack_fe8[2] = fVar46 * fVar89;
                afStack_fe8[3] = fVar50 * fVar74;
                auVar48._0_4_ = auVar125._0_4_ & (uint)auVar72._0_4_;
                auVar48._4_4_ = auVar125._4_4_ & (uint)auVar72._4_4_;
                auVar48._8_4_ = auVar125._8_4_ & (uint)auVar72._8_4_;
                auVar48._12_4_ = auVar125._12_4_ & (uint)auVar72._12_4_;
                auStack_fc8 = auVar72;
                auVar48 = auVar48 | auVar55;
                afStack_fd8[0] = fVar85 * fVar54;
                afStack_fd8[1] = fVar133 * fVar59;
                afStack_fd8[2] = fVar89 * fVar60;
                afStack_fd8[3] = fVar74 * fVar61;
                auVar56._4_4_ = auVar48._0_4_;
                auVar56._0_4_ = auVar48._4_4_;
                auVar56._8_4_ = auVar48._12_4_;
                auVar56._12_4_ = auVar48._8_4_;
                auVar78 = minps(auVar56,auVar48);
                auVar64._0_8_ = auVar78._8_8_;
                auVar64._8_4_ = auVar78._0_4_;
                auVar64._12_4_ = auVar78._4_4_;
                auVar78 = minps(auVar64,auVar78);
                auVar39._0_4_ = auVar125._0_4_ & -(uint)(auVar48._0_4_ == auVar78._0_4_);
                auVar39._4_4_ = auVar125._4_4_ & -(uint)(auVar48._4_4_ == auVar78._4_4_);
                auVar39._8_4_ = auVar125._8_4_ & -(uint)(auVar48._8_4_ == auVar78._8_4_);
                auVar39._12_4_ = auVar125._12_4_ & -(uint)(auVar48._12_4_ == auVar78._12_4_);
                uVar32 = movmskps(puVar20[0xb],auVar39);
                uVar25 = CONCAT44((int)((ulong)lVar31 >> 0x20),iVar23);
                if (uVar32 != 0) {
                  uVar25 = (ulong)uVar32;
                }
                lVar31 = 0;
                if (uVar25 != 0) {
                  for (; (uVar25 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                  }
                }
                uStack_11e8._0_4_ = *(undefined4 *)((long)&uStack_1078 + lVar31 * 4);
                uVar32 = _LC18;
                uVar33 = _LC18;
                uVar34 = _LC18;
                uVar35 = _LC18;
                while( true ) {
                  lVar12 = *(long *)(*(long *)(lVar11 + 0x1e0) + (ulong)(uint)uStack_11e8 * 8);
                  pbVar26 = *(byte **)(param_3 + 0x10);
                  pcVar28 = *(code **)(pbVar26 + 0x10);
                  if ((pcVar28 == (code *)0x0) && (*(long *)(lVar12 + 0x40) == 0)) break;
                  uStack_10cc = 0xffffffff;
                  uStack_1060 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                  uStack_1054 = *(undefined4 *)((long)&uStack_1088 + lVar31 * 4);
                  fStack_1058 = afStack_fd8[lVar31];
                  uStack_1050 = (uint)uStack_11e8;
                  fStack_105c = afStack_fe8[lVar31];
                  fVar85 = *(float *)(param_2 + 0x20);
                  iStack_1068 = *(int *)((long)&uStack_fb8 + lVar31 * 4);
                  uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                  uStack_104c = **(undefined4 **)(param_3 + 8);
                  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + lVar31 * 4);
                  pRStack_10c8 = (RayHitK *)&uStack_10cc;
                  uStack_10c0 = *(undefined8 *)(lVar12 + 0x18);
                  pRStack_10b0 = param_2;
                  uStack_10b8 = *(undefined8 *)(param_3 + 8);
                  piStack_10a8 = &iStack_1068;
                  uStack_10a0 = 1;
                  if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0010bfc2:
                    if (pcVar28 != (code *)0x0) {
                      if (((*pbVar26 & 2) != 0) || ((*(byte *)(lVar12 + 0x3e) & 0x40) != 0)) {
                        uStack_11e8 = lVar11;
                        (*pcVar28)(&pRStack_10c8);
                        uVar32 = _LC18;
                        uVar33 = _UNK_00115214;
                        uVar34 = _UNK_00115218;
                        uVar35 = _UNK_0011521c;
                      }
                      iVar23 = (int)pcVar28;
                      if (*(int *)pRStack_10c8 == 0) goto LAB_0010c2e1;
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
                    fVar85 = *(float *)(param_2 + 0x20);
                    pRVar27 = pRStack_10b0;
                  }
                  else {
                    uStack_11e8 = lVar12;
                    (**(code **)(lVar12 + 0x40))(&pRStack_10c8);
                    iVar23 = (int)pcVar28;
                    uVar32 = _LC18;
                    uVar33 = _UNK_00115214;
                    uVar34 = _UNK_00115218;
                    uVar35 = _UNK_0011521c;
                    if (*(int *)pRStack_10c8 != 0) {
                      pbVar26 = *(byte **)(param_3 + 0x10);
                      pcVar28 = *(code **)(pbVar26 + 0x10);
                      goto LAB_0010bfc2;
                    }
LAB_0010c2e1:
                    *(float *)(param_2 + 0x20) = fVar85;
                    pRVar27 = pRStack_10c8;
                  }
                  auStack_11b8 = (undefined1  [8])CONCAT44(fVar85,fVar85);
                  fStack_11b0 = fVar85;
                  fStack_11ac = fVar85;
                  auVar78._8_4_ = fVar85;
                  auVar78._0_8_ = auStack_11b8;
                  auVar78._12_4_ = fVar85;
                  *(undefined4 *)(auStack_1098 + lVar31 * 4) = 0;
                  auStack_1098._0_4_ = -(uint)(auVar72._0_4_ <= fVar85) & auStack_1098._0_4_;
                  auStack_1098._4_4_ = -(uint)(auVar72._4_4_ <= fVar85) & auStack_1098._4_4_;
                  auStack_1098._8_4_ = -(uint)(auVar72._8_4_ <= fVar85) & auStack_1098._8_4_;
                  auStack_1098._12_4_ = -(uint)(auVar72._12_4_ <= fVar85) & auStack_1098._12_4_;
                  iVar24 = movmskps((int)pRVar27,auStack_1098);
                  if (iVar24 == 0) goto LAB_0010ba42;
                  auVar57._0_4_ = ~auStack_1098._0_4_ & uVar32;
                  auVar57._4_4_ = ~auStack_1098._4_4_ & uVar33;
                  auVar57._8_4_ = ~auStack_1098._8_4_ & uVar34;
                  auVar57._12_4_ = ~auStack_1098._12_4_ & uVar35;
                  auVar49._0_4_ = auStack_1098._0_4_ & (uint)auVar72._0_4_;
                  auVar49._4_4_ = auStack_1098._4_4_ & (uint)auVar72._4_4_;
                  auVar49._8_4_ = auStack_1098._8_4_ & (uint)auVar72._8_4_;
                  auVar49._12_4_ = auStack_1098._12_4_ & (uint)auVar72._12_4_;
                  auVar49 = auVar49 | auVar57;
                  auVar58._4_4_ = auVar49._0_4_;
                  auVar58._0_4_ = auVar49._4_4_;
                  auVar58._8_4_ = auVar49._12_4_;
                  auVar58._12_4_ = auVar49._8_4_;
                  auVar78 = minps(auVar58,auVar49);
                  auVar65._0_8_ = auVar78._8_8_;
                  auVar65._8_4_ = auVar78._0_4_;
                  auVar65._12_4_ = auVar78._4_4_;
                  auVar78 = minps(auVar65,auVar78);
                  auVar40._0_4_ = auStack_1098._0_4_ & -(uint)(auVar49._0_4_ == auVar78._0_4_);
                  auVar40._4_4_ = auStack_1098._4_4_ & -(uint)(auVar49._4_4_ == auVar78._4_4_);
                  auVar40._8_4_ = auStack_1098._8_4_ & -(uint)(auVar49._8_4_ == auVar78._8_4_);
                  auVar40._12_4_ = auStack_1098._12_4_ & -(uint)(auVar49._12_4_ == auVar78._12_4_);
                  iVar23 = movmskps(iVar23,auVar40);
                  if (iVar23 != 0) {
                    iVar24 = iVar23;
                  }
                  lVar31 = 0;
                  if ((long)iVar24 != 0) {
                    for (; ((ulong)(long)iVar24 >> lVar31 & 1) == 0; lVar31 = lVar31 + 1) {
                    }
                  }
                  uStack_11e8._0_4_ = *(undefined4 *)((long)&uStack_1078 + lVar31 * 4);
                }
                uVar29 = *(undefined4 *)((long)&uStack_fb8 + lVar31 * 4);
                uVar10 = *(undefined4 *)(auStack_fc8 + lVar31 * 4);
                *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)((long)&uStack_1088 + lVar31 * 4);
                *(undefined4 *)(param_2 + 0x30) = uVar29;
                uVar29 = *(undefined4 *)((long)&uStack_fa8 + lVar31 * 4);
                fVar85 = afStack_fe8[lVar31];
                fVar69 = afStack_fd8[lVar31];
                *(undefined4 *)(param_2 + 0x20) = uVar10;
                *(uint *)(param_2 + 0x48) = (uint)uStack_11e8;
                puVar13 = *(undefined4 **)(param_3 + 8);
                auStack_11b8 = (undefined1  [8])CONCAT44(uVar10,uVar10);
                fStack_11b0 = (float)uVar10;
                fStack_11ac = (float)uVar10;
                auVar78._8_4_ = uVar10;
                auVar78._0_8_ = auStack_11b8;
                auVar78._12_4_ = uVar10;
                *(undefined4 *)(param_2 + 0x34) = uVar29;
                uVar29 = *(undefined4 *)((long)&uStack_f98 + lVar31 * 4);
                uVar10 = *puVar13;
                *(float *)(param_2 + 0x3c) = fVar85;
                *(undefined4 *)(param_2 + 0x38) = uVar29;
                *(undefined4 *)(param_2 + 0x4c) = uVar10;
                *(float *)(param_2 + 0x40) = fVar69;
              }
            }
LAB_0010ba42:
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 0x14;
          } while (lVar22 != uVar19 - 8);
        }
      }
      goto joined_r0x0010b603;
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
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  code *pcVar30;
  uint *puVar31;
  int iVar32;
  ulong uVar33;
  byte *pbVar34;
  long lVar35;
  long in_FS_OFFSET;
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
  uint uVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar66;
  float fVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar65 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar81;
  float fVar84;
  undefined1 auVar79 [16];
  float fVar82;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar80 [16];
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar92 [16];
  float fVar96;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar105 [16];
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
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar133;
  float fVar134;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar147;
  float fVar148;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
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
     (fVar142 = *(float *)(param_2 + 0x20), 0.0 <= fVar142)) {
    fVar49 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar49 < 0.0) {
      fVar49 = 0.0;
    }
    fVar19 = *(float *)param_2;
    fVar20 = *(float *)(param_2 + 4);
    fVar21 = *(float *)(param_2 + 8);
    uVar36 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar37 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _UNK_001151d4);
    uVar40 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _UNK_001151d8);
    uVar44 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _UNK_001151dc);
    auVar155._4_4_ = _LC7;
    auVar155._0_4_ = _LC7;
    auVar155._8_4_ = _LC7;
    auVar155._12_4_ = _LC7;
    auVar145._0_4_ = uVar36 & (uint)_LC5;
    auVar145._4_4_ = uVar37 & (uint)_UNK_001151d4;
    auVar145._8_4_ = uVar40 & (uint)_UNK_001151d8;
    auVar145._12_4_ = uVar44 & (uint)_UNK_001151dc;
    auVar136._0_4_ = ~uVar36 & *(uint *)(param_2 + 0x10);
    auVar136._4_4_ = ~uVar37 & *(uint *)(param_2 + 0x14);
    auVar136._8_4_ = ~uVar40 & *(uint *)(param_2 + 0x18);
    auVar136._12_4_ = ~uVar44 & *(uint *)(param_2 + 0x1c);
    auVar145 = divps(auVar155,auVar145 | auVar136);
    fVar60 = _LC12 * auVar145._0_4_;
    fVar66 = _LC12 * auVar145._4_4_;
    fVar70 = _LC12 * auVar145._8_4_;
    fVar144 = auVar145._0_4_ * _LC14;
    fVar147 = auVar145._4_4_ * _LC14;
    fVar148 = auVar145._8_4_ * _LC14;
    uVar25 = (ulong)(fVar60 < 0.0) * 0x10;
    auVar79._4_4_ = fVar142;
    auVar79._0_4_ = fVar142;
    auVar79._8_4_ = fVar142;
    auVar79._12_4_ = fVar142;
    puVar26 = local_7e0;
    do {
      uVar27 = puVar26[-1];
      puVar29 = puVar26 + -1;
      while ((uVar27 & 8) == 0) {
        pfVar9 = (float *)(uVar27 + (ulong)(-(uint)(fVar70 < 0.0) & 0x10) + 0x60);
        pfVar10 = (float *)(uVar27 + 0x20 + uVar25);
        pfVar11 = (float *)(uVar27 + (ulong)(-(uint)(fVar66 < 0.0) & 0x10) + 0x40);
        pfVar12 = (float *)(uVar27 + (-(ulong)(fVar66 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar135._0_4_ = (*pfVar9 - fVar21) * fVar70;
        auVar135._4_4_ = (pfVar9[1] - fVar21) * fVar70;
        auVar135._8_4_ = (pfVar9[2] - fVar21) * fVar70;
        auVar135._12_4_ = (pfVar9[3] - fVar21) * fVar70;
        auVar153._0_4_ = (*pfVar11 - fVar20) * fVar66;
        auVar153._4_4_ = (pfVar11[1] - fVar20) * fVar66;
        auVar153._8_4_ = (pfVar11[2] - fVar20) * fVar66;
        auVar153._12_4_ = (pfVar11[3] - fVar20) * fVar66;
        auVar63._0_4_ = (*pfVar10 - fVar19) * fVar60;
        auVar63._4_4_ = (pfVar10[1] - fVar19) * fVar60;
        auVar63._8_4_ = (pfVar10[2] - fVar19) * fVar60;
        auVar63._12_4_ = (pfVar10[3] - fVar19) * fVar60;
        auVar16._4_4_ = fVar49;
        auVar16._0_4_ = fVar49;
        auVar16._8_4_ = fVar49;
        auVar16._12_4_ = fVar49;
        auVar136 = maxps(auVar135,auVar16);
        auVar145 = maxps(auVar63,auVar153);
        pfVar9 = (float *)(uVar27 + (-(ulong)(fVar70 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar145 = maxps(auVar145,auVar136);
        pfVar10 = (float *)(uVar27 + 0x20 + (uVar25 ^ 0x10));
        auVar154._0_4_ = (*pfVar9 - fVar21) * fVar148;
        auVar154._4_4_ = (pfVar9[1] - fVar21) * fVar148;
        auVar154._8_4_ = (pfVar9[2] - fVar21) * fVar148;
        auVar154._12_4_ = (pfVar9[3] - fVar21) * fVar148;
        auVar137._0_4_ = (*pfVar10 - fVar19) * fVar144;
        auVar137._4_4_ = (pfVar10[1] - fVar19) * fVar144;
        auVar137._8_4_ = (pfVar10[2] - fVar19) * fVar144;
        auVar137._12_4_ = (pfVar10[3] - fVar19) * fVar144;
        auVar155 = minps(auVar154,auVar79);
        auVar18._4_4_ = (pfVar12[1] - fVar20) * fVar147;
        auVar18._0_4_ = (*pfVar12 - fVar20) * fVar147;
        auVar18._8_4_ = (pfVar12[2] - fVar20) * fVar147;
        auVar18._12_4_ = (pfVar12[3] - fVar20) * fVar147;
        auVar136 = minps(auVar137,auVar18);
        auVar136 = minps(auVar136,auVar155);
        auVar64._4_4_ = -(uint)(auVar145._4_4_ <= auVar136._4_4_);
        auVar64._0_4_ = -(uint)(auVar145._0_4_ <= auVar136._0_4_);
        auVar64._8_4_ = -(uint)(auVar145._8_4_ <= auVar136._8_4_);
        auVar64._12_4_ = -(uint)(auVar145._12_4_ <= auVar136._12_4_);
        uVar24 = movmskps((int)puVar26,auVar64);
        puVar26 = (ulong *)CONCAT44((int)((ulong)puVar26 >> 0x20),uVar24);
        if (puVar26 == (ulong *)0x0) goto LAB_0010cef0;
        uVar33 = uVar27 & 0xfffffffffffffff0;
        lVar35 = 0;
        if (puVar26 != (ulong *)0x0) {
          for (; ((ulong)puVar26 >> lVar35 & 1) == 0; lVar35 = lVar35 + 1) {
          }
        }
        uVar27 = *(ulong *)(uVar33 + lVar35 * 8);
        uVar28 = (long)puVar26 - 1U & (ulong)puVar26;
        if (uVar28 != 0) {
          *puVar29 = uVar27;
          puVar26 = (ulong *)(uVar28 - 1);
          lVar35 = 0;
          if (uVar28 != 0) {
            for (; (uVar28 >> lVar35 & 1) == 0; lVar35 = lVar35 + 1) {
            }
          }
          while( true ) {
            puVar29 = puVar29 + 1;
            uVar27 = *(ulong *)(uVar33 + lVar35 * 8);
            puVar26 = (ulong *)((ulong)puVar26 & uVar28);
            if (puVar26 == (ulong *)0x0) break;
            *puVar29 = uVar27;
            uVar28 = (long)puVar26 - 1;
            lVar35 = 0;
            if (puVar26 != (ulong *)0x0) {
              for (; ((ulong)puVar26 >> lVar35 & 1) == 0; lVar35 = lVar35 + 1) {
              }
            }
          }
        }
      }
      puVar31 = (uint *)(uVar27 & 0xfffffffffffffff0);
      uVar27 = (ulong)((uint)uVar27 & 0xf);
      if (uVar27 != 8) {
        lVar35 = 0;
        do {
          lVar13 = *(long *)param_3;
          lVar14 = *(long *)(lVar13 + 0x220);
          lVar15 = *(long *)(lVar14 + (ulong)puVar31[0xc] * 8);
          pfVar9 = (float *)(lVar15 + (ulong)*puVar31 * 4);
          pfVar10 = (float *)(lVar15 + (ulong)puVar31[4] * 4);
          pfVar11 = (float *)(lVar15 + (ulong)puVar31[8] * 4);
          lVar15 = *(long *)(lVar14 + (ulong)puVar31[0xd] * 8);
          pfVar12 = (float *)(lVar15 + (ulong)puVar31[1] * 4);
          pfVar1 = (float *)(lVar15 + (ulong)puVar31[5] * 4);
          pfVar2 = (float *)(lVar15 + (ulong)puVar31[9] * 4);
          lVar15 = *(long *)(lVar14 + (ulong)puVar31[0xe] * 8);
          pfVar3 = (float *)(lVar15 + (ulong)puVar31[2] * 4);
          pfVar4 = (float *)(lVar15 + (ulong)puVar31[6] * 4);
          pfVar5 = (float *)(lVar15 + (ulong)puVar31[10] * 4);
          lVar14 = *(long *)(lVar14 + (ulong)puVar31[0xf] * 8);
          pfVar6 = (float *)(lVar14 + (ulong)puVar31[3] * 4);
          pfVar7 = (float *)(lVar14 + (ulong)puVar31[7] * 4);
          pfVar8 = (float *)(lVar14 + (ulong)puVar31[0xb] * 4);
          fVar142 = *(float *)param_2;
          fVar152 = *(float *)(param_2 + 4);
          fVar74 = *(float *)(param_2 + 8);
          local_8d8 = *(undefined8 *)(puVar31 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar31 + 0x12);
          fVar90 = *(float *)(param_2 + 0x10);
          fVar69 = *(float *)(param_2 + 0x14);
          fVar73 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar31 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar31 + 0xe);
          fVar115 = pfVar10[1] - fVar152;
          fVar116 = pfVar1[1] - fVar152;
          fVar117 = pfVar4[1] - fVar152;
          fVar118 = pfVar7[1] - fVar152;
          fVar123 = pfVar10[2] - fVar74;
          fVar127 = pfVar1[2] - fVar74;
          fVar129 = pfVar4[2] - fVar74;
          fVar131 = pfVar7[2] - fVar74;
          fVar91 = pfVar11[2] - fVar74;
          fVar93 = pfVar2[2] - fVar74;
          fVar94 = pfVar5[2] - fVar74;
          fVar95 = pfVar8[2] - fVar74;
          fVar96 = pfVar11[1] - fVar152;
          fVar99 = pfVar2[1] - fVar152;
          fVar100 = pfVar5[1] - fVar152;
          fVar101 = pfVar8[1] - fVar152;
          fVar119 = *pfVar10 - fVar142;
          fVar120 = *pfVar1 - fVar142;
          fVar121 = *pfVar4 - fVar142;
          fVar122 = *pfVar7 - fVar142;
          fVar54 = *pfVar11 - fVar142;
          fVar57 = *pfVar2 - fVar142;
          fVar58 = *pfVar5 - fVar142;
          fVar59 = *pfVar8 - fVar142;
          fVar133 = *pfVar9 - fVar142;
          fVar138 = *pfVar12 - fVar142;
          fVar140 = *pfVar3 - fVar142;
          fVar142 = *pfVar6 - fVar142;
          fVar61 = pfVar9[2] - fVar74;
          fVar67 = pfVar12[2] - fVar74;
          fVar71 = pfVar3[2] - fVar74;
          fVar74 = pfVar6[2] - fVar74;
          fVar149 = pfVar9[1] - fVar152;
          fVar150 = pfVar12[1] - fVar152;
          fVar151 = pfVar3[1] - fVar152;
          fVar152 = pfVar6[1] - fVar152;
          fVar102 = fVar123 - fVar91;
          fVar106 = fVar127 - fVar93;
          fVar109 = fVar129 - fVar94;
          fVar112 = fVar131 - fVar95;
          fVar76 = fVar91 - fVar61;
          fVar81 = fVar93 - fVar67;
          fVar84 = fVar94 - fVar71;
          fVar87 = fVar95 - fVar74;
          fVar134 = fVar54 - fVar133;
          fVar139 = fVar57 - fVar138;
          fVar141 = fVar58 - fVar140;
          fVar143 = fVar59 - fVar142;
          fVar62 = fVar61 - fVar123;
          fVar68 = fVar67 - fVar127;
          fVar72 = fVar71 - fVar129;
          fVar75 = fVar74 - fVar131;
          fVar124 = fVar133 - fVar119;
          fVar128 = fVar138 - fVar120;
          fVar130 = fVar140 - fVar121;
          fVar132 = fVar142 - fVar122;
          fVar103 = fVar115 - fVar96;
          fVar107 = fVar116 - fVar99;
          fVar110 = fVar117 - fVar100;
          fVar113 = fVar118 - fVar101;
          fVar77 = fVar96 - fVar149;
          fVar82 = fVar99 - fVar150;
          fVar85 = fVar100 - fVar151;
          fVar88 = fVar101 - fVar152;
          fVar104 = fVar119 - fVar54;
          fVar108 = fVar120 - fVar57;
          fVar111 = fVar121 - fVar58;
          fVar114 = fVar122 - fVar59;
          fVar78 = fVar149 - fVar115;
          fVar83 = fVar150 - fVar116;
          fVar86 = fVar151 - fVar117;
          fVar89 = fVar152 - fVar118;
          fVar48 = ((fVar133 + fVar54) * fVar76 - fVar134 * (fVar61 + fVar91)) * fVar69 +
                   (fVar134 * (fVar149 + fVar96) - fVar77 * (fVar133 + fVar54)) * fVar73 +
                   ((fVar61 + fVar91) * fVar77 - (fVar149 + fVar96) * fVar76) * fVar90;
          fVar51 = ((fVar138 + fVar57) * fVar81 - fVar139 * (fVar67 + fVar93)) * fVar69 +
                   (fVar139 * (fVar150 + fVar99) - fVar82 * (fVar138 + fVar57)) * fVar73 +
                   ((fVar67 + fVar93) * fVar82 - (fVar150 + fVar99) * fVar81) * fVar90;
          fVar52 = ((fVar140 + fVar58) * fVar84 - fVar141 * (fVar71 + fVar94)) * fVar69 +
                   (fVar141 * (fVar151 + fVar100) - fVar85 * (fVar140 + fVar58)) * fVar73 +
                   ((fVar71 + fVar94) * fVar85 - (fVar151 + fVar100) * fVar84) * fVar90;
          fVar53 = ((fVar142 + fVar59) * fVar87 - fVar143 * (fVar74 + fVar95)) * fVar69 +
                   (fVar143 * (fVar152 + fVar101) - fVar88 * (fVar142 + fVar59)) * fVar73 +
                   ((fVar74 + fVar95) * fVar88 - (fVar152 + fVar101) * fVar87) * fVar90;
          auVar146._0_4_ =
               ((fVar133 + fVar119) * fVar62 - fVar124 * (fVar61 + fVar123)) * fVar69 +
               (fVar124 * (fVar149 + fVar115) - fVar78 * (fVar133 + fVar119)) * fVar73 +
               ((fVar61 + fVar123) * fVar78 - (fVar149 + fVar115) * fVar62) * fVar90;
          auVar146._4_4_ =
               ((fVar138 + fVar120) * fVar68 - fVar128 * (fVar67 + fVar127)) * fVar69 +
               (fVar128 * (fVar150 + fVar116) - fVar83 * (fVar138 + fVar120)) * fVar73 +
               ((fVar67 + fVar127) * fVar83 - (fVar150 + fVar116) * fVar68) * fVar90;
          auVar146._8_4_ =
               ((fVar140 + fVar121) * fVar72 - fVar130 * (fVar71 + fVar129)) * fVar69 +
               (fVar130 * (fVar151 + fVar117) - fVar86 * (fVar140 + fVar121)) * fVar73 +
               ((fVar71 + fVar129) * fVar86 - (fVar151 + fVar117) * fVar72) * fVar90;
          auVar146._12_4_ =
               ((fVar142 + fVar122) * fVar75 - fVar132 * (fVar74 + fVar131)) * fVar69 +
               (fVar132 * (fVar152 + fVar118) - fVar89 * (fVar142 + fVar122)) * fVar73 +
               ((fVar74 + fVar131) * fVar89 - (fVar152 + fVar118) * fVar75) * fVar90;
          auVar105._8_4_ = fVar52;
          auVar105._0_8_ = CONCAT44(fVar51,fVar48);
          auVar105._12_4_ = fVar53;
          auVar136 = maxps(auVar105,auVar146);
          auVar97._8_4_ = fVar52;
          auVar97._0_8_ = CONCAT44(fVar51,fVar48);
          auVar97._12_4_ = fVar53;
          auVar145 = minps(auVar97,auVar146);
          auVar92._0_4_ =
               ((fVar123 + fVar91) * fVar103 - (fVar96 + fVar115) * fVar102) * fVar90 +
               ((fVar54 + fVar119) * fVar102 - fVar104 * (fVar123 + fVar91)) * fVar69 +
               (fVar104 * (fVar96 + fVar115) - fVar103 * (fVar54 + fVar119)) * fVar73;
          auVar92._4_4_ =
               ((fVar127 + fVar93) * fVar107 - (fVar99 + fVar116) * fVar106) * fVar90 +
               ((fVar57 + fVar120) * fVar106 - fVar108 * (fVar127 + fVar93)) * fVar69 +
               (fVar108 * (fVar99 + fVar116) - fVar107 * (fVar57 + fVar120)) * fVar73;
          auVar92._8_4_ =
               ((fVar129 + fVar94) * fVar110 - (fVar100 + fVar117) * fVar109) * fVar90 +
               ((fVar58 + fVar121) * fVar109 - fVar111 * (fVar129 + fVar94)) * fVar69 +
               (fVar111 * (fVar100 + fVar117) - fVar110 * (fVar58 + fVar121)) * fVar73;
          auVar92._12_4_ =
               ((fVar131 + fVar95) * fVar113 - (fVar101 + fVar118) * fVar112) * fVar90 +
               ((fVar59 + fVar122) * fVar112 - fVar114 * (fVar131 + fVar95)) * fVar69 +
               (fVar114 * (fVar101 + fVar118) - fVar113 * (fVar59 + fVar122)) * fVar73;
          fVar91 = fVar48 + auVar146._0_4_ + auVar92._0_4_;
          fVar93 = fVar51 + auVar146._4_4_ + auVar92._4_4_;
          fVar94 = fVar52 + auVar146._8_4_ + auVar92._8_4_;
          fVar95 = fVar53 + auVar146._12_4_ + auVar92._12_4_;
          auVar136 = maxps(auVar136,auVar92);
          auVar145 = minps(auVar145,auVar92);
          fVar54 = __LC15 * (float)(_LC3 & (uint)fVar91);
          fVar57 = _UNK_00115204 * (float)(_UNK_001151c4 & (uint)fVar93);
          fVar58 = _UNK_00115208 * (float)(_UNK_001151c8 & (uint)fVar94);
          fVar59 = _UNK_0011520c * (float)(_UNK_001151cc & (uint)fVar95);
          auVar55._0_4_ =
               _DAT_00116108 &
               -(uint)((float)((uint)fVar54 ^ _LC9) <= auVar145._0_4_ || auVar136._0_4_ <= fVar54);
          auVar55._4_4_ =
               uRam000000000011610c &
               -(uint)((float)((uint)fVar57 ^ _UNK_001151f4) <= auVar145._4_4_ ||
                      auVar136._4_4_ <= fVar57);
          auVar55._8_4_ =
               uRam0000000000116110 &
               -(uint)((float)((uint)fVar58 ^ _UNK_001151f8) <= auVar145._8_4_ ||
                      auVar136._8_4_ <= fVar58);
          auVar55._12_4_ =
               uRam0000000000116114 &
               -(uint)((float)((uint)fVar59 ^ _UNK_001151fc) <= auVar145._12_4_ ||
                      auVar136._12_4_ <= fVar59);
          iVar32 = movmskps((int)lVar14,auVar55);
          if (iVar32 != 0) {
            uVar36 = -(uint)((float)(_LC3 & (uint)(fVar76 * fVar78)) <
                            (float)(_LC3 & (uint)(fVar103 * fVar62)));
            uVar44 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar81 * fVar83)) <
                            (float)(_UNK_001151c4 & (uint)(fVar107 * fVar68)));
            uVar41 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar84 * fVar86)) <
                            (float)(_UNK_001151c8 & (uint)(fVar110 * fVar72)));
            uVar45 = -(uint)((float)(_UNK_001151cc & (uint)(fVar87 * fVar89)) <
                            (float)(_UNK_001151cc & (uint)(fVar113 * fVar75)));
            uVar37 = -(uint)((float)(_LC3 & (uint)(fVar134 * fVar62)) <
                            (float)(_LC3 & (uint)(fVar102 * fVar124)));
            uVar38 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar139 * fVar68)) <
                            (float)(_UNK_001151c4 & (uint)(fVar106 * fVar128)));
            uVar42 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar141 * fVar72)) <
                            (float)(_UNK_001151c8 & (uint)(fVar109 * fVar130)));
            uVar46 = -(uint)((float)(_UNK_001151cc & (uint)(fVar143 * fVar75)) <
                            (float)(_UNK_001151cc & (uint)(fVar112 * fVar132)));
            uVar40 = -(uint)((float)(_LC3 & (uint)(fVar77 * fVar124)) <
                            (float)(_LC3 & (uint)(fVar104 * fVar78)));
            uVar39 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar82 * fVar128)) <
                            (float)(_UNK_001151c4 & (uint)(fVar108 * fVar83)));
            uVar43 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar85 * fVar130)) <
                            (float)(_UNK_001151c8 & (uint)(fVar111 * fVar86)));
            uVar47 = -(uint)((float)(_UNK_001151cc & (uint)(fVar88 * fVar132)) <
                            (float)(_UNK_001151cc & (uint)(fVar114 * fVar89)));
            fVar59 = (float)(uVar40 & (uint)(fVar134 * fVar78 - fVar77 * fVar124) |
                            ~uVar40 & (uint)(fVar103 * fVar124 - fVar104 * fVar78));
            fVar96 = (float)(uVar39 & (uint)(fVar139 * fVar83 - fVar82 * fVar128) |
                            ~uVar39 & (uint)(fVar107 * fVar128 - fVar108 * fVar83));
            fVar99 = (float)(uVar43 & (uint)(fVar141 * fVar86 - fVar85 * fVar130) |
                            ~uVar43 & (uint)(fVar110 * fVar130 - fVar111 * fVar86));
            fVar100 = (float)(uVar47 & (uint)(fVar143 * fVar89 - fVar88 * fVar132) |
                             ~uVar47 & (uint)(fVar113 * fVar132 - fVar114 * fVar89));
            auVar125._0_4_ = ~uVar37 & (uint)(fVar104 * fVar62 - fVar102 * fVar124);
            auVar125._4_4_ = ~uVar38 & (uint)(fVar108 * fVar68 - fVar106 * fVar128);
            auVar125._8_4_ = ~uVar42 & (uint)(fVar111 * fVar72 - fVar109 * fVar130);
            auVar125._12_4_ = ~uVar46 & (uint)(fVar114 * fVar75 - fVar112 * fVar132);
            auVar98._0_4_ = uVar37 & (uint)(fVar76 * fVar124 - fVar134 * fVar62);
            auVar98._4_4_ = uVar38 & (uint)(fVar81 * fVar128 - fVar139 * fVar68);
            auVar98._8_4_ = uVar42 & (uint)(fVar84 * fVar130 - fVar141 * fVar72);
            auVar98._12_4_ = uVar46 & (uint)(fVar87 * fVar132 - fVar143 * fVar75);
            auVar98 = auVar98 | auVar125;
            fVar62 = (float)(uVar36 & (uint)(fVar77 * fVar62 - fVar76 * fVar78) |
                            ~uVar36 & (uint)(fVar78 * fVar102 - fVar103 * fVar62));
            fVar68 = (float)(uVar44 & (uint)(fVar82 * fVar68 - fVar81 * fVar83) |
                            ~uVar44 & (uint)(fVar83 * fVar106 - fVar107 * fVar68));
            fVar72 = (float)(uVar41 & (uint)(fVar85 * fVar72 - fVar84 * fVar86) |
                            ~uVar41 & (uint)(fVar86 * fVar109 - fVar110 * fVar72));
            fVar75 = (float)(uVar45 & (uint)(fVar88 * fVar75 - fVar87 * fVar89) |
                            ~uVar45 & (uint)(fVar89 * fVar112 - fVar113 * fVar75));
            fVar54 = fVar69 * auVar98._0_4_ + fVar73 * fVar59 + fVar90 * fVar62;
            fVar57 = fVar69 * auVar98._4_4_ + fVar73 * fVar96 + fVar90 * fVar68;
            fVar58 = fVar69 * auVar98._8_4_ + fVar73 * fVar99 + fVar90 * fVar72;
            fVar90 = fVar69 * auVar98._12_4_ + fVar73 * fVar100 + fVar90 * fVar75;
            auVar80._0_4_ = fVar54 + fVar54;
            auVar80._4_4_ = fVar57 + fVar57;
            auVar80._8_4_ = fVar58 + fVar58;
            auVar80._12_4_ = fVar90 + fVar90;
            auVar145 = rcpps(auVar125,auVar80);
            fVar54 = auVar145._0_4_;
            fVar57 = auVar145._4_4_;
            fVar58 = auVar145._8_4_;
            fVar76 = auVar145._12_4_;
            fVar90 = fVar149 * auVar98._0_4_ + fVar61 * fVar59 + fVar133 * fVar62;
            fVar69 = fVar150 * auVar98._4_4_ + fVar67 * fVar96 + fVar138 * fVar68;
            fVar73 = fVar151 * auVar98._8_4_ + fVar71 * fVar99 + fVar140 * fVar72;
            fVar152 = fVar152 * auVar98._12_4_ + fVar74 * fVar100 + fVar142 * fVar75;
            fVar142 = *(float *)(param_2 + 0x20);
            auVar65._0_4_ = (fVar90 + fVar90) * ((_LC7 - auVar80._0_4_ * fVar54) * fVar54 + fVar54);
            auVar65._4_4_ = (fVar69 + fVar69) * ((_LC7 - auVar80._4_4_ * fVar57) * fVar57 + fVar57);
            auVar65._8_4_ = (fVar73 + fVar73) * ((_LC7 - auVar80._8_4_ * fVar58) * fVar58 + fVar58);
            auVar65._12_4_ =
                 (fVar152 + fVar152) * ((_LC7 - auVar80._12_4_ * fVar76) * fVar76 + fVar76);
            fVar152 = *(float *)(param_2 + 0xc);
            auVar126._0_4_ =
                 -(uint)(auVar65._0_4_ <= fVar142 && fVar152 <= auVar65._0_4_) & auVar55._0_4_ &
                 -(uint)(auVar80._0_4_ != 0.0);
            auVar126._4_4_ =
                 -(uint)(auVar65._4_4_ <= fVar142 && fVar152 <= auVar65._4_4_) & auVar55._4_4_ &
                 -(uint)(auVar80._4_4_ != 0.0);
            auVar126._8_4_ =
                 -(uint)(auVar65._8_4_ <= fVar142 && fVar152 <= auVar65._8_4_) & auVar55._8_4_ &
                 -(uint)(auVar80._8_4_ != 0.0);
            auVar126._12_4_ =
                 -(uint)(auVar65._12_4_ <= fVar142 && fVar152 <= auVar65._12_4_) & auVar55._12_4_ &
                 -(uint)(auVar80._12_4_ != 0.0);
            uVar36 = movmskps(puVar31[10],auVar126);
            uVar33 = (ulong)uVar36;
            if (uVar36 != 0) {
              local_828 = auVar65;
              auVar17._4_4_ = fVar93;
              auVar17._0_4_ = fVar91;
              auVar17._8_4_ = fVar94;
              auVar17._12_4_ = fVar95;
              auVar145 = rcpps(auVar65,auVar17);
              local_818[0] = fVar62;
              local_818[1] = fVar68;
              local_818[2] = fVar72;
              local_818[3] = fVar75;
              local_808 = auVar98;
              fVar142 = auVar145._0_4_;
              fVar152 = auVar145._4_4_;
              fVar74 = auVar145._8_4_;
              fVar90 = auVar145._12_4_;
              local_7f8[0] = fVar59;
              local_7f8[1] = fVar96;
              local_7f8[2] = fVar99;
              local_7f8[3] = fVar100;
              fVar142 = (float)(~-(uint)((float)(_LC3 & (uint)fVar91) < _LC5) &
                               (uint)((_LC7 - fVar91 * fVar142) * fVar142 + fVar142));
              fVar152 = (float)(~-(uint)((float)(_UNK_001151c4 & (uint)fVar93) < _UNK_001151d4) &
                               (uint)((_LC7 - fVar93 * fVar152) * fVar152 + fVar152));
              fVar74 = (float)(~-(uint)((float)(_UNK_001151c8 & (uint)fVar94) < _UNK_001151d8) &
                              (uint)((_LC7 - fVar94 * fVar74) * fVar74 + fVar74));
              fVar90 = (float)(~-(uint)((float)(_UNK_001151cc & (uint)fVar95) < _UNK_001151dc) &
                              (uint)((_LC7 - fVar95 * fVar90) * fVar90 + fVar90));
              auVar50._0_4_ = fVar48 * fVar142;
              auVar50._4_4_ = fVar51 * fVar152;
              auVar50._8_4_ = fVar52 * fVar74;
              auVar50._12_4_ = fVar53 * fVar90;
              auVar56._0_4_ = fVar142 * auVar146._0_4_;
              auVar56._4_4_ = fVar152 * auVar146._4_4_;
              auVar56._8_4_ = fVar74 * auVar146._8_4_;
              auVar56._12_4_ = fVar90 * auVar146._12_4_;
              auVar22._4_12_ = _UNK_001151e4;
              auVar22._0_4_ = _LC7;
              local_848 = minps(auVar50,auVar22);
              auVar23._4_12_ = _UNK_001151e4;
              auVar23._0_4_ = _LC7;
              local_838 = minps(auVar56,auVar23);
              do {
                pbVar34 = *(byte **)(param_3 + 0x10);
                uVar28 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
                  }
                }
                uVar36 = *(uint *)((long)&local_8c8 + uVar28 * 4);
                lVar14 = *(long *)(*(long *)(lVar13 + 0x1e0) + (ulong)uVar36 * 8);
                pcVar30 = *(code **)(pbVar34 + 0x10);
                if ((pcVar30 == (code *)0x0) && (*(long *)(lVar14 + 0x48) == 0)) {
LAB_0010cc5a:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010cc62;
                }
                uStack_8a0 = uVar36;
                iStack_90c = -1;
                fStack_8b0 = local_7f8[uVar28];
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar28 * 4);
                fStack_8b4 = local_7f8[uVar28 - 4];
                uStack_89c = **(undefined4 **)(param_3 + 8);
                piStack_908 = &iStack_90c;
                uStack_8a8 = *(undefined4 *)(local_838 + uVar28 * 4);
                fStack_8b8 = local_818[uVar28];
                uStack_8ac = *(undefined4 *)(local_848 + uVar28 * 4);
                uVar24 = *(undefined4 *)(param_2 + 0x20);
                *(float *)(param_2 + 0x20) = local_818[uVar28 - 4];
                uStack_900 = *(undefined8 *)(lVar14 + 0x18);
                uStack_8f8 = *(undefined8 *)(param_3 + 8);
                puStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar14 + 0x48) == (code *)0x0) {
LAB_0010cde0:
                  if (pcVar30 != (code *)0x0) {
                    if (((*pbVar34 & 2) != 0) || ((*(byte *)(lVar14 + 0x3e) & 0x40) != 0)) {
                      (*pcVar30)(&piStack_908);
                    }
                    if (*piStack_908 == 0) goto LAB_0010ce40;
                  }
                  goto LAB_0010cc5a;
                }
                (**(code **)(lVar14 + 0x48))(&piStack_908);
                if (*piStack_908 != 0) {
                  pbVar34 = *(byte **)(param_3 + 0x10);
                  pcVar30 = *(code **)(pbVar34 + 0x10);
                  goto LAB_0010cde0;
                }
LAB_0010ce40:
                *(undefined4 *)(param_2 + 0x20) = uVar24;
                uVar33 = uVar33 ^ 1L << (uVar28 & 0x3f);
              } while (uVar33 != 0);
            }
          }
          lVar35 = lVar35 + 1;
          puVar31 = puVar31 + 0x14;
        } while (lVar35 != uVar27 - 8);
      }
LAB_0010cef0:
      puVar26 = puVar29;
    } while (puVar29 != &local_7e8);
  }
LAB_0010cc62:
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
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  RayHitK *pRVar34;
  code *pcVar35;
  uint *puVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  byte *pbVar40;
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined4 uVar43;
  ulong in_R11;
  int iVar44;
  ulong uVar45;
  long in_FS_OFFSET;
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
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar102;
  float fVar103;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
  float fVar118;
  float fVar120;
  undefined1 auVar113 [16];
  float fVar112;
  float fVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar130;
  float fVar133;
  undefined1 auVar126 [16];
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
  float fVar144;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar145 [16];
  float fVar146;
  float fVar157;
  float fVar158;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float fVar159;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar160;
  float fVar161;
  float fVar167;
  float fVar169;
  undefined1 auVar162 [16];
  float fVar168;
  float fVar170;
  float fVar171;
  float fVar172;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  float fVar173;
  float fVar175;
  float fVar176;
  float fVar177;
  undefined1 auVar174 [16];
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
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  int iStack_12b0;
  int iStack_12a0;
  ulong uStack_1288;
  ulong uStack_1280;
  ulong uStack_1270;
  ulong uStack_1268;
  ulong uStack_1260;
  undefined1 local_11f8 [8];
  float fStack_11f0;
  float fStack_11ec;
  undefined1 auStack_11e8 [8];
  float fStack_11e0;
  float fStack_11dc;
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
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  uint uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  undefined1 auStack_fc8 [16];
  undefined1 auStack_fb8 [16];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  uVar31 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) == 8) {
LAB_0010d2af:
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
  fVar102 = *(float *)(param_2 + 0xc);
  if (fVar102 < 0.0) {
    fVar102 = 0.0;
  }
  fVar25 = *(float *)param_2;
  fVar26 = *(float *)(param_2 + 4);
  fVar27 = *(float *)(param_2 + 8);
  pauVar41 = (undefined1 (*) [16])local_f78;
  local_11f8._0_4_ = local_11f8._4_4_;
  fStack_11f0 = (float)local_11f8._4_4_;
  fStack_11ec = (float)local_11f8._4_4_;
  uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
  uVar47 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001151d4);
  uVar51 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001151d8);
  uVar55 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001151dc);
  auVar113._0_4_ = uVar46 & (uint)_LC5;
  auVar113._4_4_ = uVar47 & (uint)_UNK_001151d4;
  auVar113._8_4_ = uVar51 & (uint)_UNK_001151d8;
  auVar113._12_4_ = uVar55 & (uint)_UNK_001151dc;
  auVar126._0_4_ = ~uVar46 & *(uint *)(param_2 + 0x10);
  auVar126._4_4_ = ~uVar47 & *(uint *)(param_2 + 0x14);
  auVar126._8_4_ = ~uVar51 & *(uint *)(param_2 + 0x18);
  auVar126._12_4_ = ~uVar55 & *(uint *)(param_2 + 0x1c);
  auVar152._4_4_ = _LC7;
  auVar152._0_4_ = _LC7;
  auVar152._8_4_ = _LC7;
  auVar152._12_4_ = _LC7;
  auVar113 = divps(auVar152,auVar113 | auVar126);
  fVar59 = _LC12 * auVar113._0_4_;
  fVar67 = _LC12 * auVar113._4_4_;
  fVar69 = _LC12 * auVar113._8_4_;
  fVar111 = auVar113._0_4_ * _LC14;
  fVar118 = auVar113._4_4_ * _LC14;
  fVar120 = auVar113._8_4_ * _LC14;
  uVar32 = (ulong)(fVar59 < 0.0) * 0x10;
LAB_0010d148:
  uVar46 = _LC9;
  if (pauVar41 != (undefined1 (*) [16])local_f88) {
    do {
      auStack_11e8._4_4_ = *(undefined4 *)(param_2 + 0x20);
      pauVar42 = pauVar41 + -1;
      if (*(float *)(pauVar41[-1] + 8) <= (float)auStack_11e8._4_4_) {
        uVar37 = *(ulong *)pauVar41[-1];
        pauVar41 = pauVar42;
        if ((uVar37 & 8) != 0) goto LAB_0010d2e8;
        auVar30._4_4_ = fVar102;
        auVar30._0_4_ = fVar102;
        auVar30._8_4_ = fVar102;
        auVar30._12_4_ = fVar102;
        while( true ) {
          pfVar10 = (float *)((ulong)(-(uint)(fVar69 < 0.0) & 0x10) + 0x60 + uVar37);
          pfVar11 = (float *)((ulong)(-(uint)(fVar67 < 0.0) & 0x10) + 0x40 + uVar37);
          pfVar12 = (float *)(uVar37 + (-(ulong)(fVar67 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar154._0_4_ = (*pfVar10 - fVar27) * fVar69;
          auVar154._4_4_ = (pfVar10[1] - fVar27) * fVar69;
          auVar154._8_4_ = (pfVar10[2] - fVar27) * fVar69;
          auVar154._12_4_ = (pfVar10[3] - fVar27) * fVar69;
          auVar147._0_4_ = (*pfVar11 - fVar26) * fVar67;
          auVar147._4_4_ = (pfVar11[1] - fVar26) * fVar67;
          auVar147._8_4_ = (pfVar11[2] - fVar26) * fVar67;
          auVar147._12_4_ = (pfVar11[3] - fVar26) * fVar67;
          auVar162._0_4_ = (*pfVar12 - fVar26) * fVar118;
          auVar162._4_4_ = (pfVar12[1] - fVar26) * fVar118;
          auVar162._8_4_ = (pfVar12[2] - fVar26) * fVar118;
          auVar162._12_4_ = (pfVar12[3] - fVar26) * fVar118;
          auVar113 = maxps(auVar154,auVar30);
          pfVar10 = (float *)(uVar37 + 0x20 + uVar32);
          auVar155._0_4_ = (*pfVar10 - fVar25) * fVar59;
          auVar155._4_4_ = (pfVar10[1] - fVar25) * fVar59;
          auVar155._8_4_ = (pfVar10[2] - fVar25) * fVar59;
          auVar155._12_4_ = (pfVar10[3] - fVar25) * fVar59;
          auVar126 = maxps(auVar155,auVar147);
          pfVar10 = (float *)(uVar37 + (-(ulong)(fVar69 < 0.0) & 0xfffffffffffffff0) + 0x70);
          local_1038[0] = maxps(auVar126,auVar113);
          pfVar11 = (float *)((uVar32 ^ 0x10) + 0x20 + uVar37);
          auVar148._0_4_ = (*pfVar10 - fVar27) * fVar120;
          auVar148._4_4_ = (pfVar10[1] - fVar27) * fVar120;
          auVar148._8_4_ = (pfVar10[2] - fVar27) * fVar120;
          auVar148._12_4_ = (pfVar10[3] - fVar27) * fVar120;
          auVar156._0_4_ = (*pfVar11 - fVar25) * fVar111;
          auVar156._4_4_ = (pfVar11[1] - fVar25) * fVar111;
          auVar156._8_4_ = (pfVar11[2] - fVar25) * fVar111;
          auVar156._12_4_ = (pfVar11[3] - fVar25) * fVar111;
          auVar126 = minps(auVar148,_local_11f8);
          auVar113 = minps(auVar156,auVar162);
          auVar113 = minps(auVar113,auVar126);
          auVar149._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar113._4_4_);
          auVar149._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar113._0_4_);
          auVar149._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar113._8_4_);
          auVar149._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar113._12_4_);
          uVar43 = movmskps((int)in_R11,auVar149);
          in_R11 = CONCAT44((int)(in_R11 >> 0x20),uVar43);
          if (in_R11 == 0) break;
          uVar39 = uVar37 & 0xfffffffffffffff0;
          lVar19 = 0;
          if (in_R11 != 0) {
            for (; (in_R11 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
            }
          }
          uVar37 = *(ulong *)(uVar39 + lVar19 * 8);
          uVar33 = in_R11 - 1 & in_R11;
          pauVar41 = pauVar42;
          if (uVar33 != 0) {
            uVar47 = *(uint *)(local_1038[0] + lVar19 * 4);
            lVar19 = 0;
            if (uVar33 != 0) {
              for (; (uVar33 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
              }
            }
            in_R11 = *(ulong *)(uVar39 + lVar19 * 8);
            uVar51 = *(uint *)(local_1038[0] + lVar19 * 4);
            uVar33 = uVar33 & uVar33 - 1;
            if (uVar33 == 0) {
              pauVar41 = pauVar42 + 1;
              if (uVar47 < uVar51) {
                *(ulong *)*pauVar42 = in_R11;
                *(uint *)(*pauVar42 + 8) = uVar51;
              }
              else {
                *(ulong *)*pauVar42 = uVar37;
                *(uint *)(*pauVar42 + 8) = uVar47;
                uVar37 = in_R11;
              }
            }
            else {
              auVar151._8_4_ = uVar47;
              auVar151._0_8_ = uVar37;
              auVar151._12_4_ = 0;
              lVar19 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> lVar19 & 1) == 0; lVar19 = lVar19 + 1) {
                }
              }
              uVar37 = *(ulong *)(uVar39 + lVar19 * 8);
              auVar164._8_4_ = uVar51;
              auVar164._0_8_ = in_R11;
              auVar164._12_4_ = 0;
              iVar38 = *(int *)(local_1038[0] + lVar19 * 4);
              auVar128._8_4_ = iVar38;
              auVar128._0_8_ = uVar37;
              auVar128._12_4_ = 0;
              auVar140._8_4_ = -(uint)((int)uVar47 < (int)uVar51);
              uVar33 = uVar33 - 1 & uVar33;
              if (uVar33 == 0) {
                auVar140._4_4_ = auVar140._8_4_;
                auVar140._0_4_ = auVar140._8_4_;
                auVar140._12_4_ = auVar140._8_4_;
                pauVar41 = pauVar42 + 2;
                auVar152 = auVar151 & auVar140 | ~auVar140 & auVar164;
                iStack_12b0 = auVar152._8_4_;
                auVar165._8_4_ = -(uint)(iStack_12b0 < iVar38);
                auVar126 = auVar140 & auVar164 | ~auVar140 & auVar151;
                auVar165._0_8_ = CONCAT44(auVar165._8_4_,auVar165._8_4_);
                auVar165._12_4_ = auVar165._8_4_;
                auVar113 = auVar128 & auVar165 | ~auVar165 & auVar152;
                iStack_12a0 = auVar126._8_4_;
                auVar141._8_4_ = -(uint)(iStack_12a0 < auVar113._8_4_);
                auVar141._4_4_ = auVar141._8_4_;
                auVar141._0_4_ = auVar141._8_4_;
                auVar141._12_4_ = auVar141._8_4_;
                *pauVar42 = auVar113 & auVar141 | ~auVar141 & auVar126;
                pauVar42[1] = auVar141 & auVar126 | ~auVar141 & auVar113;
                uVar37 = auVar152._0_8_ & auVar165._0_8_ | ~auVar165._0_8_ & uVar37;
                in_R11 = 0;
              }
              else {
                in_R11 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> in_R11 & 1) == 0; in_R11 = in_R11 + 1) {
                  }
                }
                pauVar41 = pauVar42 + 3;
                auVar145._8_4_ = *(int *)(local_1038[0] + in_R11 * 4);
                auVar145._0_8_ = *(undefined8 *)(uVar39 + in_R11 * 8);
                auVar145._12_4_ = 0;
                auVar153._4_4_ = auVar140._8_4_;
                auVar153._0_4_ = auVar140._8_4_;
                auVar153._8_4_ = auVar140._8_4_;
                auVar153._12_4_ = auVar140._8_4_;
                auVar126 = ~auVar153 & auVar164 | auVar151 & auVar153;
                auVar152 = auVar164 & auVar153 | ~auVar153 & auVar151;
                auVar142._8_4_ = -(uint)(iVar38 < *(int *)(local_1038[0] + in_R11 * 4));
                auVar142._4_4_ = auVar142._8_4_;
                auVar142._0_4_ = auVar142._8_4_;
                auVar142._12_4_ = auVar142._8_4_;
                auVar154 = ~auVar142 & auVar145 | auVar128 & auVar142;
                auVar113 = auVar145 & auVar142 | ~auVar142 & auVar128;
                auVar129._8_4_ = -(uint)(auVar152._8_4_ < auVar113._8_4_);
                auVar129._0_8_ = CONCAT44(auVar129._8_4_,auVar129._8_4_);
                auVar129._12_4_ = auVar129._8_4_;
                auVar155 = auVar152 & auVar129 | ~auVar129 & auVar113;
                iVar38 = -(uint)(auVar126._8_4_ < auVar154._8_4_);
                auVar166._0_8_ = CONCAT44(iVar38,iVar38);
                auVar166._8_4_ = iVar38;
                auVar166._12_4_ = iVar38;
                auVar156 = ~auVar166 & auVar126 | auVar154 & auVar166;
                iStack_12b0 = auVar155._8_4_;
                auVar143._8_4_ = -(uint)(auVar156._8_4_ < iStack_12b0);
                auVar143._4_4_ = auVar143._8_4_;
                auVar143._0_4_ = auVar143._8_4_;
                auVar143._12_4_ = auVar143._8_4_;
                uStack_1270 = auVar129._8_8_;
                uStack_1288 = auVar113._0_8_;
                uStack_1280 = auVar113._8_8_;
                uStack_1268 = SUB168(~auVar129 & auVar152,0);
                uStack_1260 = SUB168(~auVar129 & auVar152,8);
                pauVar42[2] = auVar156 & auVar143 | ~auVar143 & auVar155;
                *(ulong *)*pauVar42 = auVar129._0_8_ & uStack_1288 | uStack_1268;
                *(ulong *)(*pauVar42 + 8) = uStack_1270 & uStack_1280 | uStack_1260;
                pauVar42[1] = auVar155 & auVar143 | ~auVar143 & auVar156;
                uVar37 = ~auVar166._0_8_ & auVar154._0_8_ | auVar126._0_8_ & auVar166._0_8_;
              }
            }
          }
          pauVar42 = pauVar41;
          if ((uVar37 & 8) != 0) goto LAB_0010d2e8;
        }
      }
      pauVar41 = pauVar42;
      if (pauVar42 == (undefined1 (*) [16])local_f88) break;
    } while( true );
  }
  goto LAB_0010d2af;
LAB_0010d2e8:
  uVar39 = 0;
  puVar36 = (uint *)(uVar37 & 0xfffffffffffffff0);
  auStack_11e8._0_4_ = auStack_11e8._4_4_;
  fStack_11e0 = (float)auStack_11e8._4_4_;
  fStack_11dc = (float)auStack_11e8._4_4_;
  uVar33 = (ulong)((uint)uVar37 & 0xf) - 8;
  in_R11 = uVar33;
  uVar37 = uVar39;
  if (uVar33 != 0) {
LAB_0010d360:
    lVar19 = *(long *)param_3;
    lVar16 = *(long *)(lVar19 + 0x220);
    lVar17 = *(long *)(lVar16 + (ulong)puVar36[0xc] * 8);
    pfVar10 = (float *)(lVar17 + (ulong)*puVar36 * 4);
    pfVar11 = (float *)(lVar17 + (ulong)puVar36[4] * 4);
    pfVar12 = (float *)(lVar17 + (ulong)puVar36[8] * 4);
    lVar17 = *(long *)(lVar16 + (ulong)puVar36[0xd] * 8);
    pfVar1 = (float *)(lVar17 + (ulong)puVar36[1] * 4);
    pfVar2 = (float *)(lVar17 + (ulong)puVar36[5] * 4);
    pfVar3 = (float *)(lVar17 + (ulong)puVar36[9] * 4);
    lVar17 = *(long *)(lVar16 + (ulong)puVar36[0xe] * 8);
    pfVar4 = (float *)(lVar17 + (ulong)puVar36[2] * 4);
    pfVar5 = (float *)(lVar17 + (ulong)puVar36[6] * 4);
    pfVar6 = (float *)(lVar17 + (ulong)puVar36[10] * 4);
    lVar16 = *(long *)(lVar16 + (ulong)puVar36[0xf] * 8);
    pfVar7 = (float *)(lVar16 + (ulong)puVar36[3] * 4);
    pfVar8 = (float *)(lVar16 + (ulong)puVar36[7] * 4);
    pfVar9 = (float *)(lVar16 + (ulong)puVar36[0xb] * 4);
    fVar144 = *(float *)(param_2 + 0x10);
    fVar96 = *(float *)(param_2 + 0x14);
    fVar99 = *(float *)(param_2 + 0x18);
    uStack_1078 = *(undefined8 *)(puVar36 + 0x10);
    uStack_1070 = *(undefined8 *)(puVar36 + 0x12);
    uStack_1068 = *(undefined8 *)(puVar36 + 0xc);
    uStack_1060 = *(undefined8 *)(puVar36 + 0xe);
    fVar181 = *(float *)param_2;
    fVar196 = *(float *)(param_2 + 4);
    fVar100 = *(float *)(param_2 + 8);
    fVar186 = pfVar11[2] - fVar100;
    fVar187 = pfVar2[2] - fVar100;
    fVar188 = pfVar5[2] - fVar100;
    fVar189 = pfVar8[2] - fVar100;
    fVar103 = pfVar12[2] - fVar100;
    fVar108 = pfVar3[2] - fVar100;
    fVar109 = pfVar6[2] - fVar100;
    fVar110 = pfVar9[2] - fVar100;
    fVar146 = *pfVar11 - fVar181;
    fVar157 = *pfVar2 - fVar181;
    fVar158 = *pfVar5 - fVar181;
    fVar159 = *pfVar8 - fVar181;
    fVar60 = *pfVar12 - fVar181;
    fVar68 = *pfVar3 - fVar181;
    fVar70 = *pfVar6 - fVar181;
    fVar71 = *pfVar9 - fVar181;
    fVar178 = *pfVar10 - fVar181;
    fVar179 = *pfVar1 - fVar181;
    fVar180 = *pfVar4 - fVar181;
    fVar181 = *pfVar7 - fVar181;
    fVar160 = pfVar11[1] - fVar196;
    fVar167 = pfVar2[1] - fVar196;
    fVar169 = pfVar5[1] - fVar196;
    fVar171 = pfVar8[1] - fVar196;
    fVar88 = pfVar10[2] - fVar100;
    fVar94 = pfVar1[2] - fVar100;
    fVar97 = pfVar4[2] - fVar100;
    fVar100 = pfVar7[2] - fVar100;
    fVar112 = pfVar12[1] - fVar196;
    fVar119 = pfVar3[1] - fVar196;
    fVar121 = pfVar6[1] - fVar196;
    fVar122 = pfVar9[1] - fVar196;
    fVar123 = fVar186 - fVar103;
    fVar130 = fVar187 - fVar108;
    fVar133 = fVar188 - fVar109;
    fVar136 = fVar189 - fVar110;
    fVar190 = pfVar10[1] - fVar196;
    fVar192 = pfVar1[1] - fVar196;
    fVar194 = pfVar4[1] - fVar196;
    fVar196 = pfVar7[1] - fVar196;
    fVar72 = fVar103 - fVar88;
    fVar79 = fVar108 - fVar94;
    fVar82 = fVar109 - fVar97;
    fVar85 = fVar110 - fVar100;
    fVar89 = fVar88 - fVar186;
    fVar95 = fVar94 - fVar187;
    fVar98 = fVar97 - fVar188;
    fVar101 = fVar100 - fVar189;
    fVar124 = fVar160 - fVar112;
    fVar131 = fVar167 - fVar119;
    fVar134 = fVar169 - fVar121;
    fVar137 = fVar171 - fVar122;
    fVar73 = fVar112 - fVar190;
    fVar80 = fVar119 - fVar192;
    fVar83 = fVar121 - fVar194;
    fVar86 = fVar122 - fVar196;
    fVar125 = fVar146 - fVar60;
    fVar132 = fVar157 - fVar68;
    fVar135 = fVar158 - fVar70;
    fVar138 = fVar159 - fVar71;
    fVar74 = fVar60 - fVar178;
    fVar81 = fVar68 - fVar179;
    fVar84 = fVar70 - fVar180;
    fVar87 = fVar71 - fVar181;
    fVar191 = fVar190 - fVar160;
    fVar193 = fVar192 - fVar167;
    fVar195 = fVar194 - fVar169;
    fVar197 = fVar196 - fVar171;
    fVar161 = fVar178 - fVar146;
    fVar168 = fVar179 - fVar157;
    fVar170 = fVar180 - fVar158;
    fVar172 = fVar181 - fVar159;
    fVar173 = ((fVar178 + fVar60) * fVar72 - fVar74 * (fVar88 + fVar103)) * fVar96 +
              (fVar74 * (fVar190 + fVar112) - fVar73 * (fVar178 + fVar60)) * fVar99 +
              ((fVar88 + fVar103) * fVar73 - (fVar190 + fVar112) * fVar72) * fVar144;
    fVar175 = ((fVar179 + fVar68) * fVar79 - fVar81 * (fVar94 + fVar108)) * fVar96 +
              (fVar81 * (fVar192 + fVar119) - fVar80 * (fVar179 + fVar68)) * fVar99 +
              ((fVar94 + fVar108) * fVar80 - (fVar192 + fVar119) * fVar79) * fVar144;
    fVar176 = ((fVar180 + fVar70) * fVar82 - fVar84 * (fVar97 + fVar109)) * fVar96 +
              (fVar84 * (fVar194 + fVar121) - fVar83 * (fVar180 + fVar70)) * fVar99 +
              ((fVar97 + fVar109) * fVar83 - (fVar194 + fVar121) * fVar82) * fVar144;
    fVar177 = ((fVar181 + fVar71) * fVar85 - fVar87 * (fVar100 + fVar110)) * fVar96 +
              (fVar87 * (fVar196 + fVar122) - fVar86 * (fVar181 + fVar71)) * fVar99 +
              ((fVar100 + fVar110) * fVar86 - (fVar196 + fVar122) * fVar85) * fVar144;
    fVar182 = ((fVar178 + fVar146) * fVar89 - fVar161 * (fVar88 + fVar186)) * fVar96 +
              (fVar161 * (fVar190 + fVar160) - fVar191 * (fVar178 + fVar146)) * fVar99 +
              ((fVar88 + fVar186) * fVar191 - (fVar190 + fVar160) * fVar89) * fVar144;
    fVar183 = ((fVar179 + fVar157) * fVar95 - fVar168 * (fVar94 + fVar187)) * fVar96 +
              (fVar168 * (fVar192 + fVar167) - fVar193 * (fVar179 + fVar157)) * fVar99 +
              ((fVar94 + fVar187) * fVar193 - (fVar192 + fVar167) * fVar95) * fVar144;
    fVar184 = ((fVar180 + fVar158) * fVar98 - fVar170 * (fVar97 + fVar188)) * fVar96 +
              (fVar170 * (fVar194 + fVar169) - fVar195 * (fVar180 + fVar158)) * fVar99 +
              ((fVar97 + fVar188) * fVar195 - (fVar194 + fVar169) * fVar98) * fVar144;
    fVar185 = ((fVar181 + fVar159) * fVar101 - fVar172 * (fVar100 + fVar189)) * fVar96 +
              (fVar172 * (fVar196 + fVar171) - fVar197 * (fVar181 + fVar159)) * fVar99 +
              ((fVar100 + fVar189) * fVar197 - (fVar196 + fVar171) * fVar101) * fVar144;
    _local_11f8 = _auStack_11e8;
    auVar114._8_4_ = fVar176;
    auVar114._0_8_ = CONCAT44(fVar175,fVar173);
    auVar114._12_4_ = fVar177;
    auVar20._4_4_ = fVar183;
    auVar20._0_4_ = fVar182;
    auVar20._8_4_ = fVar184;
    auVar20._12_4_ = fVar185;
    auVar113 = maxps(auVar114,auVar20);
    auVar104._0_4_ =
         ((fVar186 + fVar103) * fVar124 - (fVar112 + fVar160) * fVar123) * fVar144 +
         ((fVar60 + fVar146) * fVar123 - fVar125 * (fVar186 + fVar103)) * fVar96 +
         (fVar125 * (fVar112 + fVar160) - fVar124 * (fVar60 + fVar146)) * fVar99;
    auVar104._4_4_ =
         ((fVar187 + fVar108) * fVar131 - (fVar119 + fVar167) * fVar130) * fVar144 +
         ((fVar68 + fVar157) * fVar130 - fVar132 * (fVar187 + fVar108)) * fVar96 +
         (fVar132 * (fVar119 + fVar167) - fVar131 * (fVar68 + fVar157)) * fVar99;
    auVar104._8_4_ =
         ((fVar188 + fVar109) * fVar134 - (fVar121 + fVar169) * fVar133) * fVar144 +
         ((fVar70 + fVar158) * fVar133 - fVar135 * (fVar188 + fVar109)) * fVar96 +
         (fVar135 * (fVar121 + fVar169) - fVar134 * (fVar70 + fVar158)) * fVar99;
    auVar104._12_4_ =
         ((fVar189 + fVar110) * fVar137 - (fVar122 + fVar171) * fVar136) * fVar144 +
         ((fVar71 + fVar159) * fVar136 - fVar138 * (fVar189 + fVar110)) * fVar96 +
         (fVar138 * (fVar122 + fVar171) - fVar137 * (fVar71 + fVar159)) * fVar99;
    auVar126 = maxps(auVar113,auVar104);
    auVar150._0_4_ = fVar173 + fVar182 + auVar104._0_4_;
    auVar150._4_4_ = fVar175 + fVar183 + auVar104._4_4_;
    auVar150._8_4_ = fVar176 + fVar184 + auVar104._8_4_;
    auVar150._12_4_ = fVar177 + fVar185 + auVar104._12_4_;
    fVar60 = __LC15 * (float)(uVar31 & (uint)auVar150._0_4_);
    fVar68 = _UNK_00115204 * (float)(uVar31 & (uint)auVar150._4_4_);
    fVar70 = _UNK_00115208 * (float)(uVar31 & (uint)auVar150._8_4_);
    fVar71 = _UNK_0011520c * (float)(uVar31 & (uint)auVar150._12_4_);
    auVar61._8_4_ = fVar176;
    auVar61._0_8_ = CONCAT44(fVar175,fVar173);
    auVar61._12_4_ = fVar177;
    auVar21._4_4_ = fVar183;
    auVar21._0_4_ = fVar182;
    auVar21._8_4_ = fVar184;
    auVar21._12_4_ = fVar185;
    auVar113 = minps(auVar61,auVar21);
    auVar113 = minps(auVar113,auVar104);
    auVar115._4_4_ = -(uint)(auVar126._4_4_ <= fVar68);
    auVar115._0_4_ = -(uint)(auVar126._0_4_ <= fVar60);
    auVar115._8_4_ = -(uint)(auVar126._8_4_ <= fVar70);
    auVar115._12_4_ = -(uint)(auVar126._12_4_ <= fVar71);
    auVar62._4_4_ = -(uint)((float)((uint)fVar68 ^ uVar46) <= auVar113._4_4_);
    auVar62._0_4_ = -(uint)((float)((uint)fVar60 ^ uVar46) <= auVar113._0_4_);
    auVar62._8_4_ = -(uint)((float)((uint)fVar70 ^ uVar46) <= auVar113._8_4_);
    auVar62._12_4_ = -(uint)((float)((uint)fVar71 ^ uVar46) <= auVar113._12_4_);
    auVar62 = auVar62 | auVar115;
    auVar63._0_4_ = auVar62._0_4_ & _DAT_00116108;
    auVar63._4_4_ = auVar62._4_4_ & uRam000000000011610c;
    auVar63._8_4_ = auVar62._8_4_ & uRam0000000000116110;
    auVar63._12_4_ = auVar62._12_4_ & uRam0000000000116114;
    iVar38 = movmskps((int)lVar16,auVar63);
    if (iVar38 != 0) {
      fVar60 = fVar72 * fVar191;
      fVar68 = fVar79 * fVar193;
      auVar174._4_4_ = fVar68;
      auVar174._0_4_ = fVar60;
      fVar70 = fVar82 * fVar195;
      fVar71 = fVar85 * fVar197;
      auVar174._8_4_ = fVar70;
      auVar174._12_4_ = fVar71;
      uVar47 = -(uint)((float)((uint)fVar60 & uVar31) < (float)((uint)(fVar124 * fVar89) & uVar31));
      uVar48 = -(uint)((float)((uint)fVar68 & uVar31) < (float)((uint)(fVar131 * fVar95) & uVar31));
      uVar52 = -(uint)((float)((uint)fVar70 & uVar31) < (float)((uint)(fVar134 * fVar98) & uVar31));
      uVar56 = -(uint)((float)((uint)fVar71 & uVar31) < (float)((uint)(fVar137 * fVar101) & uVar31))
      ;
      uVar51 = -(uint)((float)(uVar31 & (uint)(fVar74 * fVar89)) <
                      (float)((uint)(fVar123 * fVar161) & uVar31));
      uVar49 = -(uint)((float)(uVar31 & (uint)(fVar81 * fVar95)) <
                      (float)((uint)(fVar130 * fVar168) & uVar31));
      uVar53 = -(uint)((float)(uVar31 & (uint)(fVar84 * fVar98)) <
                      (float)((uint)(fVar133 * fVar170) & uVar31));
      uVar57 = -(uint)((float)(uVar31 & (uint)(fVar87 * fVar101)) <
                      (float)((uint)(fVar136 * fVar172) & uVar31));
      uVar55 = -(uint)((float)((uint)(fVar73 * fVar161) & uVar31) <
                      (float)(uVar31 & (uint)(fVar125 * fVar191)));
      uVar50 = -(uint)((float)((uint)(fVar80 * fVar168) & uVar31) <
                      (float)(uVar31 & (uint)(fVar132 * fVar193)));
      uVar54 = -(uint)((float)((uint)(fVar83 * fVar170) & uVar31) <
                      (float)(uVar31 & (uint)(fVar135 * fVar195)));
      uVar58 = -(uint)((float)((uint)(fVar86 * fVar172) & uVar31) <
                      (float)(uVar31 & (uint)(fVar138 * fVar197)));
      auVar105._0_4_ = uVar55 & (uint)(fVar74 * fVar191 - fVar73 * fVar161);
      auVar105._4_4_ = uVar50 & (uint)(fVar81 * fVar193 - fVar80 * fVar168);
      auVar105._8_4_ = uVar54 & (uint)(fVar84 * fVar195 - fVar83 * fVar170);
      auVar105._12_4_ = uVar58 & (uint)(fVar87 * fVar197 - fVar86 * fVar172);
      auVar22._4_4_ = ~uVar50 & (uint)(fVar131 * fVar168 - fVar132 * fVar193);
      auVar22._0_4_ = ~uVar55 & (uint)(fVar124 * fVar161 - fVar125 * fVar191);
      auVar22._8_4_ = ~uVar54 & (uint)(fVar134 * fVar170 - fVar135 * fVar195);
      auVar22._12_4_ = ~uVar58 & (uint)(fVar137 * fVar172 - fVar138 * fVar197);
      auVar105 = auVar105 | auVar22;
      auVar116._0_4_ = uVar51 & (uint)(fVar72 * fVar161 - fVar74 * fVar89);
      auVar116._4_4_ = uVar49 & (uint)(fVar79 * fVar168 - fVar81 * fVar95);
      auVar116._8_4_ = uVar53 & (uint)(fVar82 * fVar170 - fVar84 * fVar98);
      auVar116._12_4_ = uVar57 & (uint)(fVar85 * fVar172 - fVar87 * fVar101);
      auVar23._4_4_ = ~uVar49 & (uint)(fVar132 * fVar95 - fVar130 * fVar168);
      auVar23._0_4_ = ~uVar51 & (uint)(fVar125 * fVar89 - fVar123 * fVar161);
      auVar23._8_4_ = ~uVar53 & (uint)(fVar135 * fVar98 - fVar133 * fVar170);
      auVar23._12_4_ = ~uVar57 & (uint)(fVar138 * fVar101 - fVar136 * fVar172);
      auVar116 = auVar116 | auVar23;
      auVar127._0_4_ = uVar47 & (uint)(fVar73 * fVar89 - fVar60);
      auVar127._4_4_ = uVar48 & (uint)(fVar80 * fVar95 - fVar68);
      auVar127._8_4_ = uVar52 & (uint)(fVar83 * fVar98 - fVar70);
      auVar127._12_4_ = uVar56 & (uint)(fVar86 * fVar101 - fVar71);
      auVar24._4_4_ = ~uVar48 & (uint)(fVar130 * fVar193 - fVar131 * fVar95);
      auVar24._0_4_ = ~uVar47 & (uint)(fVar123 * fVar191 - fVar124 * fVar89);
      auVar24._8_4_ = ~uVar52 & (uint)(fVar133 * fVar195 - fVar134 * fVar98);
      auVar24._12_4_ = ~uVar56 & (uint)(fVar136 * fVar197 - fVar137 * fVar101);
      auVar127 = auVar127 | auVar24;
      fVar60 = fVar88 * auVar105._0_4_ + fVar190 * auVar116._0_4_ + fVar178 * auVar127._0_4_;
      fVar68 = fVar94 * auVar105._4_4_ + fVar192 * auVar116._4_4_ + fVar179 * auVar127._4_4_;
      fVar70 = fVar97 * auVar105._8_4_ + fVar194 * auVar116._8_4_ + fVar180 * auVar127._8_4_;
      fVar71 = fVar100 * auVar105._12_4_ + fVar196 * auVar116._12_4_ + fVar181 * auVar127._12_4_;
      fVar181 = fVar96 * auVar116._0_4_ + fVar99 * auVar105._0_4_ + fVar144 * auVar127._0_4_;
      fVar196 = fVar96 * auVar116._4_4_ + fVar99 * auVar105._4_4_ + fVar144 * auVar127._4_4_;
      fVar100 = fVar96 * auVar116._8_4_ + fVar99 * auVar105._8_4_ + fVar144 * auVar127._8_4_;
      fVar144 = fVar96 * auVar116._12_4_ + fVar99 * auVar105._12_4_ + fVar144 * auVar127._12_4_;
      auVar139._0_4_ = fVar181 + fVar181;
      auVar139._4_4_ = fVar196 + fVar196;
      auVar139._8_4_ = fVar100 + fVar100;
      auVar139._12_4_ = fVar144 + fVar144;
      auVar113 = rcpps(auVar174,auVar139);
      fVar144 = auVar113._0_4_;
      fVar96 = auVar113._4_4_;
      fVar99 = auVar113._8_4_;
      fVar181 = auVar113._12_4_;
      auVar163._0_4_ = (fVar60 + fVar60) * ((_LC7 - auVar139._0_4_ * fVar144) * fVar144 + fVar144);
      auVar163._4_4_ = (fVar68 + fVar68) * ((_LC7 - auVar139._4_4_ * fVar96) * fVar96 + fVar96);
      auVar163._8_4_ = (fVar70 + fVar70) * ((_LC7 - auVar139._8_4_ * fVar99) * fVar99 + fVar99);
      auVar163._12_4_ = (fVar71 + fVar71) * ((_LC7 - auVar139._12_4_ * fVar181) * fVar181 + fVar181)
      ;
      fVar144 = *(float *)(param_2 + 0xc);
      auVar64._0_4_ =
           auVar63._0_4_ &
           -(uint)(fVar144 <= auVar163._0_4_ && auVar163._0_4_ <= SUB164(_auStack_11e8,0)) &
           -(uint)(auVar139._0_4_ != 0.0);
      auVar64._4_4_ =
           auVar63._4_4_ &
           -(uint)(fVar144 <= auVar163._4_4_ && auVar163._4_4_ <= SUB164(_auStack_11e8,4)) &
           -(uint)(auVar139._4_4_ != 0.0);
      auVar64._8_4_ =
           auVar63._8_4_ &
           -(uint)(fVar144 <= auVar163._8_4_ && auVar163._8_4_ <= SUB164(_auStack_11e8,8)) &
           -(uint)(auVar139._8_4_ != 0.0);
      auVar64._12_4_ =
           auVar63._12_4_ &
           -(uint)(fVar144 <= auVar163._12_4_ && auVar163._12_4_ <= SUB164(_auStack_11e8,0xc)) &
           -(uint)(auVar139._12_4_ != 0.0);
      iVar44 = movmskps((int)uVar37,auVar64);
      uVar37 = CONCAT44((int)(uVar37 >> 0x20),iVar44);
      if (iVar44 != 0) {
        auStack_fa8 = auVar116;
        auVar113 = rcpps(auVar116,auVar150);
        auStack_f98 = auVar105;
        auStack_1088 = auVar64;
        auStack_fb8 = auVar127;
        auStack_fc8 = auVar163;
        fVar144 = auVar113._0_4_;
        fVar96 = auVar113._4_4_;
        fVar99 = auVar113._8_4_;
        fVar181 = auVar113._12_4_;
        auVar117._4_4_ = _LC18;
        auVar117._0_4_ = _LC18;
        auVar117._8_4_ = _LC18;
        auVar117._12_4_ = _LC18;
        fVar144 = (float)(~-(uint)((float)(uVar31 & (uint)auVar150._0_4_) < _LC5) &
                         (uint)((_LC7 - auVar150._0_4_ * fVar144) * fVar144 + fVar144));
        fVar96 = (float)(~-(uint)((float)(uVar31 & (uint)auVar150._4_4_) < _UNK_001151d4) &
                        (uint)((_LC7 - auVar150._4_4_ * fVar96) * fVar96 + fVar96));
        fVar99 = (float)(~-(uint)((float)(uVar31 & (uint)auVar150._8_4_) < _UNK_001151d8) &
                        (uint)((_LC7 - auVar150._8_4_ * fVar99) * fVar99 + fVar99));
        fVar181 = (float)(~-(uint)((float)(uVar31 & (uint)auVar150._12_4_) < _UNK_001151dc) &
                         (uint)((_LC7 - auVar150._12_4_ * fVar181) * fVar181 + fVar181));
        auVar75._0_4_ = fVar173 * fVar144;
        auVar75._4_4_ = fVar175 * fVar96;
        auVar75._8_4_ = fVar176 * fVar99;
        auVar75._12_4_ = fVar177 * fVar181;
        auVar28._4_12_ = _UNK_001151e4;
        auVar28._0_4_ = _LC7;
        auStack_fe8 = minps(auVar75,auVar28);
        auVar76._0_4_ = fVar182 * fVar144;
        auVar76._4_4_ = fVar183 * fVar96;
        auVar76._8_4_ = fVar184 * fVar99;
        auVar76._12_4_ = fVar185 * fVar181;
        auVar29._4_12_ = _UNK_001151e4;
        auVar29._0_4_ = _LC7;
        auStack_fd8 = minps(auVar76,auVar29);
        auVar90._0_4_ = ~auVar64._0_4_ & _LC18;
        auVar90._4_4_ = ~auVar64._4_4_ & _LC18;
        auVar90._8_4_ = ~auVar64._8_4_ & _LC18;
        auVar90._12_4_ = ~auVar64._12_4_ & _LC18;
        auVar77._0_4_ = auVar64._0_4_ & (uint)auVar163._0_4_;
        auVar77._4_4_ = auVar64._4_4_ & (uint)auVar163._4_4_;
        auVar77._8_4_ = auVar64._8_4_ & (uint)auVar163._8_4_;
        auVar77._12_4_ = auVar64._12_4_ & (uint)auVar163._12_4_;
        auVar77 = auVar77 | auVar90;
        auVar91._4_4_ = auVar77._0_4_;
        auVar91._0_4_ = auVar77._4_4_;
        auVar91._8_4_ = auVar77._12_4_;
        auVar91._12_4_ = auVar77._8_4_;
        auVar113 = minps(auVar91,auVar77);
        auVar106._0_8_ = auVar113._8_8_;
        auVar106._8_4_ = auVar113._0_4_;
        auVar106._12_4_ = auVar113._4_4_;
        auVar113 = minps(auVar106,auVar113);
        auVar65._0_4_ = auVar64._0_4_ & -(uint)(auVar77._0_4_ == auVar113._0_4_);
        auVar65._4_4_ = auVar64._4_4_ & -(uint)(auVar77._4_4_ == auVar113._4_4_);
        auVar65._8_4_ = auVar64._8_4_ & -(uint)(auVar77._8_4_ == auVar113._8_4_);
        auVar65._12_4_ = auVar64._12_4_ & -(uint)(auVar77._12_4_ == auVar113._12_4_);
        iVar38 = movmskps(iVar38,auVar65);
        uVar45 = uVar37;
        if (iVar38 != 0) {
          uVar45 = CONCAT44((int)((ulong)lVar16 >> 0x20),iVar38);
        }
        uVar37 = 0;
        if (uVar45 != 0) {
          for (; (uVar45 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
          }
        }
        uVar47 = *(uint *)((long)&uStack_1068 + uVar37 * 4);
        do {
          pbVar40 = *(byte **)(param_3 + 0x10);
          pRVar34 = *(RayHitK **)(*(long *)(lVar19 + 0x1e0) + (ulong)uVar47 * 8);
          pcVar35 = *(code **)(pbVar40 + 0x10);
          if ((pcVar35 == (code *)0x0) && (*(long *)(pRVar34 + 0x40) == 0)) {
            uVar15 = *(undefined4 *)((long)&uStack_1078 + uVar37 * 4);
            *(uint *)(param_2 + 0x48) = uVar47;
            uVar43 = *(undefined4 *)(auStack_fb8 + uVar37 * 4);
            uVar13 = *(undefined4 *)(auStack_fc8 + uVar37 * 4);
            uVar14 = *(undefined4 *)(auStack_fe8 + uVar37 * 4);
            *(undefined4 *)(param_2 + 0x44) = uVar15;
            puVar18 = *(undefined4 **)(param_3 + 8);
            *(undefined4 *)(param_2 + 0x30) = uVar43;
            uVar43 = *(undefined4 *)(auStack_fa8 + uVar37 * 4);
            uVar15 = *(undefined4 *)(auStack_fd8 + uVar37 * 4);
            local_11f8._4_4_ = uVar13;
            local_11f8._0_4_ = uVar13;
            fStack_11f0 = (float)uVar13;
            fStack_11ec = (float)uVar13;
            *(undefined4 *)(param_2 + 0x20) = uVar13;
            uVar13 = *puVar18;
            *(undefined4 *)(param_2 + 0x34) = uVar43;
            uVar43 = *(undefined4 *)(auStack_f98 + uVar37 * 4);
            *(undefined4 *)(param_2 + 0x3c) = uVar14;
            *(undefined4 *)(param_2 + 0x4c) = uVar13;
            *(undefined4 *)(param_2 + 0x38) = uVar43;
            *(undefined4 *)(param_2 + 0x40) = uVar15;
            _auStack_11e8 = _local_11f8;
            break;
          }
          uStack_1040 = uVar47;
          uStack_1050 = *(undefined4 *)(auStack_f98 + uVar37 * 4);
          uStack_10bc = 0xffffffff;
          uStack_1048 = *(undefined4 *)(auStack_fd8 + uVar37 * 4);
          uStack_1044 = *(undefined4 *)((long)&uStack_1078 + uVar37 * 4);
          puStack_10a8 = *(undefined4 **)(param_3 + 8);
          uStack_103c = **(undefined4 **)(param_3 + 8);
          uStack_1054 = *(undefined4 *)(auStack_fa8 + uVar37 * 4);
          puStack_10b8 = &uStack_10bc;
          uStack_1058 = *(undefined4 *)(auStack_fb8 + uVar37 * 4);
          uStack_104c = *(undefined4 *)(auStack_fe8 + uVar37 * 4);
          local_11f8._4_4_ = *(undefined4 *)(param_2 + 0x20);
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + uVar37 * 4);
          uStack_10b0 = *(undefined8 *)(pRVar34 + 0x18);
          puStack_1098 = &uStack_1058;
          pRStack_10a0 = param_2;
          uStack_1090 = 1;
          if (*(code **)(pRVar34 + 0x40) == (code *)0x0) {
LAB_0010dc34:
            if (pcVar35 != (code *)0x0) {
              if (((*pbVar40 & 2) != 0) || (((byte)pRVar34[0x3e] & 0x40) != 0)) {
                (*pcVar35)(&puStack_10b8);
                auVar117._4_12_ = _UNK_00115214;
                auVar117._0_4_ = _LC18;
              }
              pRVar34 = (RayHitK *)(ulong)*puStack_10b8;
              if (*puStack_10b8 == 0) goto LAB_0010ddb8;
            }
            *(undefined4 *)(pRStack_10a0 + 0x30) = *puStack_1098;
            *(undefined4 *)(pRStack_10a0 + 0x34) = puStack_1098[1];
            *(undefined4 *)(pRStack_10a0 + 0x38) = puStack_1098[2];
            *(undefined4 *)(pRStack_10a0 + 0x3c) = puStack_1098[3];
            *(undefined4 *)(pRStack_10a0 + 0x40) = puStack_1098[4];
            *(undefined4 *)(pRStack_10a0 + 0x44) = puStack_1098[5];
            *(undefined4 *)(pRStack_10a0 + 0x48) = puStack_1098[6];
            *(undefined4 *)(pRStack_10a0 + 0x4c) = puStack_1098[7];
            local_11f8._4_4_ = *(undefined4 *)(param_2 + 0x20);
            pRVar34 = pRStack_10a0;
          }
          else {
            (**(code **)(pRVar34 + 0x40))(&puStack_10b8);
            auVar117._4_12_ = _UNK_00115214;
            auVar117._0_4_ = _LC18;
            if (*puStack_10b8 != 0) {
              pbVar40 = *(byte **)(param_3 + 0x10);
              pcVar35 = *(code **)(pbVar40 + 0x10);
              goto LAB_0010dc34;
            }
LAB_0010ddb8:
            *(undefined4 *)(param_2 + 0x20) = local_11f8._4_4_;
          }
          *(undefined4 *)(auStack_1088 + uVar37 * 4) = 0;
          auStack_1088._0_4_ =
               -(uint)(auVar163._0_4_ <= (float)local_11f8._4_4_) & auStack_1088._0_4_;
          auStack_1088._4_4_ =
               -(uint)(auVar163._4_4_ <= (float)local_11f8._4_4_) & auStack_1088._4_4_;
          auStack_1088._8_4_ =
               -(uint)(auVar163._8_4_ <= (float)local_11f8._4_4_) & auStack_1088._8_4_;
          auStack_1088._12_4_ =
               -(uint)(auVar163._12_4_ <= (float)local_11f8._4_4_) & auStack_1088._12_4_;
          iVar38 = movmskps((int)uVar37,auStack_1088);
          uVar37 = CONCAT44((int)(uVar37 >> 0x20),iVar38);
          if (iVar38 == 0) goto LAB_0010ddf0;
          auVar92._0_4_ = ~auStack_1088._0_4_ & auVar117._0_4_;
          auVar92._4_4_ = ~auStack_1088._4_4_ & auVar117._4_4_;
          auVar92._8_4_ = ~auStack_1088._8_4_ & auVar117._8_4_;
          auVar92._12_4_ = ~auStack_1088._12_4_ & auVar117._12_4_;
          auVar78._0_4_ = auStack_1088._0_4_ & (uint)auVar163._0_4_;
          auVar78._4_4_ = auStack_1088._4_4_ & (uint)auVar163._4_4_;
          auVar78._8_4_ = auStack_1088._8_4_ & (uint)auVar163._8_4_;
          auVar78._12_4_ = auStack_1088._12_4_ & (uint)auVar163._12_4_;
          auVar78 = auVar78 | auVar92;
          auVar93._4_4_ = auVar78._0_4_;
          auVar93._0_4_ = auVar78._4_4_;
          auVar93._8_4_ = auVar78._12_4_;
          auVar93._12_4_ = auVar78._8_4_;
          auVar113 = minps(auVar93,auVar78);
          auVar107._0_8_ = auVar113._8_8_;
          auVar107._8_4_ = auVar113._0_4_;
          auVar107._12_4_ = auVar113._4_4_;
          auVar113 = minps(auVar107,auVar113);
          auVar66._0_4_ = auStack_1088._0_4_ & -(uint)(auVar78._0_4_ == auVar113._0_4_);
          auVar66._4_4_ = auStack_1088._4_4_ & -(uint)(auVar78._4_4_ == auVar113._4_4_);
          auVar66._8_4_ = auStack_1088._8_4_ & -(uint)(auVar78._8_4_ == auVar113._8_4_);
          auVar66._12_4_ = auStack_1088._12_4_ & -(uint)(auVar78._12_4_ == auVar113._12_4_);
          iVar38 = movmskps((int)pRVar34,auVar66);
          uVar45 = uVar37;
          if (iVar38 != 0) {
            uVar45 = CONCAT44((int)((ulong)pRVar34 >> 0x20),iVar38);
          }
          uVar37 = 0;
          if (uVar45 != 0) {
            for (; (uVar45 >> uVar37 & 1) == 0; uVar37 = uVar37 + 1) {
            }
          }
          uVar47 = *(uint *)((long)&uStack_1068 + uVar37 * 4);
        } while( true );
      }
    }
    goto LAB_0010da9b;
  }
  local_11f8._4_4_ = auStack_11e8._4_4_;
  local_11f8._0_4_ = auStack_11e8._4_4_;
  fStack_11f0 = (float)auStack_11e8._4_4_;
  fStack_11ec = (float)auStack_11e8._4_4_;
  goto LAB_0010d148;
LAB_0010ddf0:
  local_11f8._0_4_ = local_11f8._4_4_;
  fStack_11f0 = (float)local_11f8._4_4_;
  fStack_11ec = (float)local_11f8._4_4_;
  auStack_11e8._4_4_ = local_11f8._4_4_;
  auStack_11e8._0_4_ = local_11f8._4_4_;
  fStack_11e0 = (float)local_11f8._4_4_;
  fStack_11dc = (float)local_11f8._4_4_;
LAB_0010da9b:
  uVar39 = uVar39 + 1;
  puVar36 = puVar36 + 0x14;
  if (uVar39 == uVar33) goto LAB_0010d148;
  goto LAB_0010d360;
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
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  long lVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  ulong *puVar34;
  long lVar35;
  code *pcVar36;
  undefined4 uVar37;
  ulong uVar38;
  float *pfVar39;
  long lVar40;
  long lVar41;
  byte *pbVar42;
  uint *puVar43;
  ulong uVar44;
  ulong uVar45;
  long in_FS_OFFSET;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar53;
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar61;
  float fVar63;
  float fVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar62;
  float fVar65;
  float fVar66;
  undefined1 auVar60 [16];
  float fVar67;
  float fVar73;
  float fVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar84;
  float fVar85;
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar83 [16];
  float fVar87;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  undefined1 auVar90 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar103 [16];
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
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
  float fVar138;
  undefined8 local_a98;
  undefined8 local_a88;
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
     (fVar24 = *(float *)(param_2 + 0x20), 0.0 <= fVar24)) {
    fVar76 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar76 < 0.0) {
      fVar76 = 0.0;
    }
    fVar30 = *(float *)param_2;
    fVar31 = *(float *)(param_2 + 4);
    fVar32 = *(float *)(param_2 + 8);
    uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar47 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar49 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar82._0_4_ = ~uVar46 & *(uint *)(param_2 + 0x10);
    auVar82._4_4_ = ~uVar47 & *(uint *)(param_2 + 0x14);
    auVar82._8_4_ = ~uVar48 & *(uint *)(param_2 + 0x18);
    auVar82._12_4_ = ~uVar49 & *(uint *)(param_2 + 0x1c);
    auVar51._0_4_ = uVar46 & (uint)_LC5;
    auVar51._4_4_ = uVar47 & (uint)_LC5;
    auVar51._8_4_ = uVar48 & (uint)_LC5;
    auVar51._12_4_ = uVar49 & (uint)_LC5;
    auVar51 = auVar51 | auVar82;
    auVar82 = rcpps(auVar82,auVar51);
    fVar54 = auVar82._0_4_;
    fVar61 = auVar82._4_4_;
    fVar64 = auVar82._8_4_;
    fVar54 = (_LC7 - auVar51._0_4_ * fVar54) * fVar54 + fVar54;
    fVar61 = (_LC7 - auVar51._4_4_ * fVar61) * fVar61 + fVar61;
    fVar64 = (_LC7 - auVar51._8_4_ * fVar64) * fVar64 + fVar64;
    puVar34 = local_7e0;
    do {
      fVar122 = *(float *)(param_2 + 0x1c);
      uVar45 = puVar34[-1];
      puVar34 = puVar34 + -1;
      while( true ) {
        puVar43 = (uint *)(uVar45 & 0xfffffffffffffff0);
        uVar44 = (ulong)((uint)uVar45 & 0xf);
        if ((uVar45 & 8) != 0) break;
        auVar88._4_4_ = fVar76;
        auVar88._0_4_ = fVar76;
        auVar88._8_4_ = fVar76;
        auVar88._12_4_ = fVar76;
        auVar115._4_4_ = fVar24;
        auVar115._0_4_ = fVar24;
        auVar115._8_4_ = fVar24;
        auVar115._12_4_ = fVar24;
        pfVar1 = (float *)((long)puVar43 + (ulong)(-(uint)(fVar61 < 0.0) & 0x10) + 0x40);
        pfVar2 = (float *)((long)puVar43 + (ulong)(-(uint)(fVar64 < 0.0) & 0x10) + 0x60);
        pfVar5 = (float *)(puVar43 + (ulong)(fVar54 < 0.0) * 4 + 8);
        pfVar3 = (float *)((long)puVar43 + ((ulong)(fVar54 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar4 = (float *)((long)puVar43 + (-(ulong)(fVar61 < 0.0) & 0xfffffffffffffff0) + 0x50);
        pfVar39 = (float *)((long)puVar43 + (-(ulong)(fVar64 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar58._0_4_ = ((pfVar1[0x18] * fVar122 + *pfVar1) - fVar31) * fVar61;
        auVar58._4_4_ = ((pfVar1[0x19] * fVar122 + pfVar1[1]) - fVar31) * fVar61;
        auVar58._8_4_ = ((pfVar1[0x1a] * fVar122 + pfVar1[2]) - fVar31) * fVar61;
        auVar58._12_4_ = ((pfVar1[0x1b] * fVar122 + pfVar1[3]) - fVar31) * fVar61;
        auVar68._0_4_ = ((pfVar2[0x18] * fVar122 + *pfVar2) - fVar32) * fVar64;
        auVar68._4_4_ = ((pfVar2[0x19] * fVar122 + pfVar2[1]) - fVar32) * fVar64;
        auVar68._8_4_ = ((pfVar2[0x1a] * fVar122 + pfVar2[2]) - fVar32) * fVar64;
        auVar68._12_4_ = ((pfVar2[0x1b] * fVar122 + pfVar2[3]) - fVar32) * fVar64;
        auVar51 = maxps(auVar58,auVar68);
        auVar69._0_4_ = ((pfVar5[0x18] * fVar122 + *pfVar5) - fVar30) * fVar54;
        auVar69._4_4_ = ((pfVar5[0x19] * fVar122 + pfVar5[1]) - fVar30) * fVar54;
        auVar69._8_4_ = ((pfVar5[0x1a] * fVar122 + pfVar5[2]) - fVar30) * fVar54;
        auVar69._12_4_ = ((pfVar5[0x1b] * fVar122 + pfVar5[3]) - fVar30) * fVar54;
        auVar82 = maxps(auVar88,auVar69);
        auVar82 = maxps(auVar82,auVar51);
        auVar70._0_4_ = ((pfVar39[0x18] * fVar122 + *pfVar39) - fVar32) * fVar64;
        auVar70._4_4_ = ((pfVar39[0x19] * fVar122 + pfVar39[1]) - fVar32) * fVar64;
        auVar70._8_4_ = ((pfVar39[0x1a] * fVar122 + pfVar39[2]) - fVar32) * fVar64;
        auVar70._12_4_ = ((pfVar39[0x1b] * fVar122 + pfVar39[3]) - fVar32) * fVar64;
        auVar59._0_4_ = ((pfVar4[0x18] * fVar122 + *pfVar4) - fVar31) * fVar61;
        auVar59._4_4_ = ((pfVar4[0x19] * fVar122 + pfVar4[1]) - fVar31) * fVar61;
        auVar59._8_4_ = ((pfVar4[0x1a] * fVar122 + pfVar4[2]) - fVar31) * fVar61;
        auVar59._12_4_ = ((pfVar4[0x1b] * fVar122 + pfVar4[3]) - fVar31) * fVar61;
        auVar51 = minps(auVar59,auVar70);
        auVar71._0_4_ = ((pfVar3[0x18] * fVar122 + *pfVar3) - fVar30) * fVar54;
        auVar71._4_4_ = ((pfVar3[0x19] * fVar122 + pfVar3[1]) - fVar30) * fVar54;
        auVar71._8_4_ = ((pfVar3[0x1a] * fVar122 + pfVar3[2]) - fVar30) * fVar54;
        auVar71._12_4_ = ((pfVar3[0x1b] * fVar122 + pfVar3[3]) - fVar30) * fVar54;
        auVar116 = minps(auVar115,auVar71);
        auVar51 = minps(auVar116,auVar51);
        bVar26 = auVar82._0_4_ <= auVar51._0_4_;
        bVar27 = auVar82._4_4_ <= auVar51._4_4_;
        bVar28 = auVar82._8_4_ <= auVar51._8_4_;
        bVar29 = auVar82._12_4_ <= auVar51._12_4_;
        auVar89._4_4_ = -(uint)bVar27;
        auVar89._0_4_ = -(uint)bVar26;
        auVar89._8_4_ = -(uint)bVar28;
        auVar89._12_4_ = -(uint)bVar29;
        if (uVar44 == 6) {
          auVar89._0_4_ =
               -(uint)(((float)puVar43[0x38] <= fVar122 && fVar122 < (float)puVar43[0x3c]) && bVar26
                      );
          auVar89._4_4_ =
               -(uint)(((float)puVar43[0x39] <= fVar122 && fVar122 < (float)puVar43[0x3d]) && bVar27
                      );
          auVar89._8_4_ =
               -(uint)(((float)puVar43[0x3a] <= fVar122 && fVar122 < (float)puVar43[0x3e]) && bVar28
                      );
          auVar89._12_4_ =
               -(uint)(((float)puVar43[0x3b] <= fVar122 && fVar122 < (float)puVar43[0x3f]) && bVar29
                      );
        }
        uVar37 = movmskps((int)pfVar3,auVar89);
        uVar44 = CONCAT44((int)((ulong)pfVar3 >> 0x20),uVar37);
        if (uVar44 == 0) goto LAB_0010e498;
        lVar40 = 0;
        if (uVar44 != 0) {
          for (; (uVar44 >> lVar40 & 1) == 0; lVar40 = lVar40 + 1) {
          }
        }
        uVar45 = *(ulong *)(puVar43 + lVar40 * 2);
        uVar44 = uVar44 - 1 & uVar44;
        if (uVar44 != 0) {
          *puVar34 = uVar45;
          uVar38 = uVar44 - 1;
          lVar40 = 0;
          if (uVar44 != 0) {
            for (; (uVar44 >> lVar40 & 1) == 0; lVar40 = lVar40 + 1) {
            }
          }
          while( true ) {
            puVar34 = puVar34 + 1;
            uVar45 = *(ulong *)(puVar43 + lVar40 * 2);
            uVar38 = uVar38 & uVar44;
            if (uVar38 == 0) break;
            *puVar34 = uVar45;
            uVar44 = uVar38 - 1;
            lVar40 = 0;
            if (uVar38 != 0) {
              for (; (uVar38 >> lVar40 & 1) == 0; lVar40 = lVar40 + 1) {
              }
            }
          }
        }
      }
      if (uVar44 != 8) {
        do {
          lVar40 = *(long *)param_3;
          lVar41 = *(long *)(lVar40 + 0x1e0);
          lVar25 = *(long *)(lVar41 + (ulong)puVar43[0xc] * 8);
          fVar50 = ((fVar122 - *(float *)(lVar25 + 0x2c)) /
                   (*(float *)(lVar25 + 0x30) - *(float *)(lVar25 + 0x2c))) *
                   *(float *)(lVar25 + 0x28);
          fVar57 = *(float *)(lVar25 + 0x28) - _LC7;
          fVar122 = fVar50;
          if ((float)(_LC3 & (uint)fVar50) < _LC19) {
            fVar122 = (float)(~_LC3 & (uint)fVar50 |
                             (uint)((float)(int)fVar50 -
                                   (float)(-(uint)(fVar50 < (float)(int)fVar50) & (uint)_LC7)));
          }
          if (fVar57 <= fVar122) {
            fVar122 = fVar57;
          }
          if (0.0 <= fVar122) {
            fVar50 = fVar50 - fVar122;
            lVar35 = (long)(int)fVar122 * 0x30;
            local_a98 = (long)((int)fVar122 + 1) * 0x30;
          }
          else {
            local_a98 = 0x30;
            lVar35 = 0;
          }
          lVar35 = *(long *)(*(long *)(lVar25 + 0xd0) + lVar35);
          pfVar1 = (float *)(lVar35 + (ulong)*puVar43 * 4);
          pfVar2 = (float *)(lVar35 + (ulong)puVar43[2] * 4);
          pfVar5 = (float *)(lVar35 + (ulong)puVar43[1] * 4);
          pfVar3 = (float *)(lVar35 + (ulong)puVar43[3] * 4);
          pfVar4 = (float *)(lVar35 + (ulong)puVar43[4] * 4);
          pfVar39 = (float *)(lVar35 + (ulong)puVar43[6] * 4);
          pfVar6 = (float *)(lVar35 + (ulong)puVar43[5] * 4);
          pfVar7 = (float *)(lVar35 + (ulong)puVar43[7] * 4);
          pfVar8 = (float *)(lVar35 + (ulong)puVar43[10] * 4);
          pfVar9 = (float *)(lVar35 + (ulong)puVar43[0xb] * 4);
          pfVar10 = (float *)(lVar35 + (ulong)puVar43[8] * 4);
          pfVar11 = (float *)(lVar35 + (ulong)puVar43[9] * 4);
          local_a08 = CONCAT44(pfVar9[2],pfVar8[2]);
          lVar25 = *(long *)(*(long *)(lVar25 + 0xd0) + local_a98);
          pfVar12 = (float *)(lVar25 + (ulong)*puVar43 * 4);
          pfVar13 = (float *)(lVar25 + (ulong)puVar43[2] * 4);
          pfVar14 = (float *)(lVar25 + (ulong)puVar43[1] * 4);
          pfVar15 = (float *)(lVar25 + (ulong)puVar43[3] * 4);
          pfVar16 = (float *)(lVar25 + (ulong)puVar43[4] * 4);
          pfVar17 = (float *)(lVar25 + (ulong)puVar43[6] * 4);
          pfVar18 = (float *)(lVar25 + (ulong)puVar43[7] * 4);
          pfVar19 = (float *)(lVar25 + (ulong)puVar43[5] * 4);
          pfVar20 = (float *)(lVar25 + (ulong)puVar43[8] * 4);
          pfVar21 = (float *)(lVar25 + (ulong)puVar43[0xb] * 4);
          pfVar22 = (float *)(lVar25 + (ulong)puVar43[10] * 4);
          pfVar23 = (float *)(lVar25 + (ulong)puVar43[9] * 4);
          fVar122 = _LC7 - fVar50;
          fVar77 = pfVar12[2] * fVar50 + pfVar1[2] * fVar122;
          fVar78 = pfVar14[2] * fVar50 + pfVar5[2] * fVar122;
          fVar79 = pfVar13[2] * fVar50 + pfVar2[2] * fVar122;
          fVar80 = pfVar15[2] * fVar50 + pfVar3[2] * fVar122;
          fVar81 = pfVar12[1] * fVar50 + pfVar1[1] * fVar122;
          fVar84 = pfVar14[1] * fVar50 + pfVar5[1] * fVar122;
          fVar85 = pfVar13[1] * fVar50 + pfVar2[1] * fVar122;
          fVar86 = pfVar15[1] * fVar50 + pfVar3[1] * fVar122;
          local_8e8 = *(undefined8 *)(puVar43 + 0x10);
          uStack_8e0 = *(undefined8 *)(puVar43 + 0x12);
          fVar87 = fVar77 - (pfVar16[2] * fVar50 + pfVar4[2] * fVar122);
          fVar91 = fVar78 - (pfVar19[2] * fVar50 + pfVar6[2] * fVar122);
          fVar92 = fVar79 - (pfVar17[2] * fVar50 + pfVar39[2] * fVar122);
          fVar93 = fVar80 - (pfVar18[2] * fVar50 + pfVar7[2] * fVar122);
          local_8d8 = *(undefined8 *)(puVar43 + 0xc);
          uStack_8d0 = *(undefined8 *)(puVar43 + 0xe);
          fVar98 = *pfVar12 * fVar50 + *pfVar1 * fVar122;
          fVar99 = *pfVar14 * fVar50 + *pfVar5 * fVar122;
          fVar100 = *pfVar13 * fVar50 + *pfVar2 * fVar122;
          fVar101 = *pfVar15 * fVar50 + *pfVar3 * fVar122;
          fVar67 = (pfVar20[2] * fVar50 + pfVar10[2] * fVar122) - fVar77;
          fVar73 = (pfVar23[2] * fVar50 + pfVar11[2] * fVar122) - fVar78;
          fVar74 = (pfVar22[2] * fVar50 + fStack_a10 * fVar122) - fVar79;
          fVar75 = (pfVar21[2] * fVar50 + fStack_a0c * fVar122) - fVar80;
          fVar111 = fVar81 - (pfVar4[1] * fVar122 + pfVar16[1] * fVar50);
          fVar112 = fVar84 - (pfVar6[1] * fVar122 + pfVar19[1] * fVar50);
          fVar113 = fVar85 - (pfVar39[1] * fVar122 + pfVar17[1] * fVar50);
          fVar114 = fVar86 - (pfVar7[1] * fVar122 + pfVar18[1] * fVar50);
          fVar107 = fVar98 - (*pfVar4 * fVar122 + *pfVar16 * fVar50);
          fVar108 = fVar99 - (*pfVar6 * fVar122 + *pfVar19 * fVar50);
          fVar109 = fVar100 - (*pfVar39 * fVar122 + *pfVar17 * fVar50);
          fVar110 = fVar101 - (*pfVar7 * fVar122 + *pfVar18 * fVar50);
          fVar55 = (pfVar20[1] * fVar50 + pfVar10[1] * fVar122) - fVar81;
          fVar62 = (pfVar23[1] * fVar50 + pfVar11[1] * fVar122) - fVar84;
          fVar65 = (pfVar22[1] * fVar50 + pfVar8[1] * fVar122) - fVar85;
          fVar66 = (pfVar21[1] * fVar50 + pfVar9[1] * fVar122) - fVar86;
          fVar94 = (*pfVar20 * fVar50 + fVar122 * *pfVar10) - fVar98;
          fVar95 = (*pfVar23 * fVar50 + fVar122 * *pfVar11) - fVar99;
          fVar96 = (*pfVar22 * fVar50 + fVar122 * *pfVar8) - fVar100;
          fVar97 = (*pfVar21 * fVar50 + fVar122 * *pfVar9) - fVar101;
          fVar135 = fVar111 * fVar94 - fVar107 * fVar55;
          fVar136 = fVar112 * fVar95 - fVar108 * fVar62;
          fVar137 = fVar113 * fVar96 - fVar109 * fVar65;
          fVar138 = fVar114 * fVar97 - fVar110 * fVar66;
          local_a98 = CONCAT44(fVar136,fVar135);
          fVar102 = fVar107 * fVar67 - fVar87 * fVar94;
          fVar104 = fVar108 * fVar73 - fVar91 * fVar95;
          fVar105 = fVar109 * fVar74 - fVar92 * fVar96;
          fVar106 = fVar110 * fVar75 - fVar93 * fVar97;
          local_a88 = CONCAT44(fVar104,fVar102);
          fVar127 = fVar87 * fVar55 - fVar111 * fVar67;
          fVar129 = fVar91 * fVar62 - fVar112 * fVar73;
          fVar131 = fVar92 * fVar65 - fVar113 * fVar74;
          fVar133 = fVar93 * fVar66 - fVar114 * fVar75;
          fVar122 = *(float *)param_2;
          fVar50 = *(float *)(param_2 + 4);
          fVar57 = *(float *)(param_2 + 8);
          fVar53 = *(float *)(param_2 + 0x10);
          fVar56 = *(float *)(param_2 + 0x14);
          fVar63 = *(float *)(param_2 + 0x18);
          fVar81 = fVar81 - fVar50;
          fVar84 = fVar84 - fVar50;
          fVar85 = fVar85 - fVar50;
          fVar86 = fVar86 - fVar50;
          fVar98 = fVar98 - fVar122;
          fVar99 = fVar99 - fVar122;
          fVar100 = fVar100 - fVar122;
          fVar101 = fVar101 - fVar122;
          fVar77 = fVar77 - fVar57;
          fVar78 = fVar78 - fVar57;
          fVar79 = fVar79 - fVar57;
          fVar80 = fVar80 - fVar57;
          fVar128 = fVar98 * fVar56 - fVar81 * fVar53;
          fVar130 = fVar99 * fVar56 - fVar84 * fVar53;
          fVar132 = fVar100 * fVar56 - fVar85 * fVar53;
          fVar134 = fVar101 * fVar56 - fVar86 * fVar53;
          fVar123 = fVar77 * fVar53 - fVar98 * fVar63;
          fVar124 = fVar78 * fVar53 - fVar99 * fVar63;
          fVar125 = fVar79 * fVar53 - fVar100 * fVar63;
          fVar126 = fVar80 * fVar53 - fVar101 * fVar63;
          fVar118 = fVar81 * fVar63 - fVar77 * fVar56;
          fVar119 = fVar84 * fVar63 - fVar78 * fVar56;
          fVar120 = fVar85 * fVar63 - fVar79 * fVar56;
          fVar121 = fVar86 * fVar63 - fVar80 * fVar56;
          fVar122 = fVar56 * fVar102 + fVar63 * fVar135 + fVar53 * fVar127;
          fVar50 = fVar56 * fVar104 + fVar63 * fVar136 + fVar53 * fVar129;
          fVar57 = fVar56 * fVar105 + fVar63 * fVar137 + fVar53 * fVar131;
          fVar53 = fVar56 * fVar106 + fVar63 * fVar138 + fVar53 * fVar133;
          auVar103._0_4_ = _LC9 & (uint)fVar122;
          auVar103._4_4_ = _UNK_001151f4 & (uint)fVar50;
          auVar103._8_4_ = _UNK_001151f8 & (uint)fVar57;
          auVar103._12_4_ = _UNK_001151fc & (uint)fVar53;
          auVar117._0_4_ = (float)(_LC3 & (uint)fVar122);
          auVar117._4_4_ = (float)(_UNK_001151c4 & (uint)fVar50);
          auVar117._8_4_ = (float)(_UNK_001151c8 & (uint)fVar57);
          auVar117._12_4_ = (float)(_UNK_001151cc & (uint)fVar53);
          auVar90._0_4_ = fVar87 * fVar128 + fVar111 * fVar123 + fVar107 * fVar118;
          auVar90._4_4_ = fVar91 * fVar130 + fVar112 * fVar124 + fVar108 * fVar119;
          auVar90._8_4_ = fVar92 * fVar132 + fVar113 * fVar125 + fVar109 * fVar120;
          auVar90._12_4_ = fVar93 * fVar134 + fVar114 * fVar126 + fVar110 * fVar121;
          auVar60._0_4_ = fVar55 * fVar123 + fVar67 * fVar128 + fVar94 * fVar118;
          auVar60._4_4_ = fVar62 * fVar124 + fVar73 * fVar130 + fVar95 * fVar119;
          auVar60._8_4_ = fVar65 * fVar125 + fVar74 * fVar132 + fVar96 * fVar120;
          auVar60._12_4_ = fVar66 * fVar126 + fVar75 * fVar134 + fVar97 * fVar121;
          auVar90 = auVar90 ^ auVar103;
          auVar60 = auVar60 ^ auVar103;
          fVar65 = auVar90._0_4_;
          fVar66 = auVar90._4_4_;
          fVar67 = auVar90._8_4_;
          fVar73 = auVar90._12_4_;
          fVar56 = auVar60._0_4_;
          fVar63 = auVar60._4_4_;
          fVar55 = auVar60._8_4_;
          fVar62 = auVar60._12_4_;
          auVar116._0_4_ =
               -(uint)((0.0 <= fVar65 && (0.0 <= fVar56 && fVar122 != 0.0)) &&
                      fVar65 + fVar56 <= auVar117._0_4_) & _DAT_00116108;
          auVar116._4_4_ =
               -(uint)(((0.0 <= fVar63 && fVar50 != 0.0) && 0.0 <= fVar66) &&
                      fVar66 + fVar63 <= auVar117._4_4_) & uRam000000000011610c;
          auVar116._8_4_ =
               -(uint)((0.0 <= fVar67 && (fVar57 != 0.0 && 0.0 <= fVar55)) &&
                      fVar67 + fVar55 <= auVar117._8_4_) & uRam0000000000116110;
          auVar116._12_4_ =
               -(uint)(((0.0 <= fVar62 && fVar53 != 0.0) && 0.0 <= fVar73) &&
                      fVar73 + fVar62 <= auVar117._12_4_) & uRam0000000000116114;
          iVar33 = movmskps((int)lVar25,auVar116);
          if (iVar33 != 0) {
            fVar122 = *(float *)(param_2 + 0x20);
            auVar83._0_4_ = fVar81 * fVar102 + fVar77 * fVar135 + fVar98 * fVar127;
            auVar83._4_4_ = fVar84 * fVar104 + fVar78 * fVar136 + fVar99 * fVar129;
            auVar83._8_4_ = fVar85 * fVar105 + fVar79 * fVar137 + fVar100 * fVar131;
            auVar83._12_4_ = fVar86 * fVar106 + fVar80 * fVar138 + fVar101 * fVar133;
            auVar83 = auVar83 ^ auVar103;
            fVar57 = auVar83._0_4_;
            fVar53 = auVar83._4_4_;
            fVar74 = auVar83._8_4_;
            fVar75 = auVar83._12_4_;
            fVar50 = *(float *)(param_2 + 0xc);
            auVar72._0_4_ =
                 -(uint)(fVar50 * auVar117._0_4_ < fVar57 && fVar57 <= fVar122 * auVar117._0_4_);
            auVar72._4_4_ =
                 -(uint)(fVar50 * auVar117._4_4_ < fVar53 && fVar53 <= fVar122 * auVar117._4_4_);
            auVar72._8_4_ =
                 -(uint)(fVar50 * auVar117._8_4_ < fVar74 && fVar74 <= fVar122 * auVar117._8_4_);
            auVar72._12_4_ =
                 -(uint)(fVar50 * auVar117._12_4_ < fVar75 && fVar75 <= fVar122 * auVar117._12_4_);
            auVar52._0_4_ = auVar116._0_4_ & auVar72._0_4_;
            auVar52._4_4_ = auVar116._4_4_ & auVar72._4_4_;
            auVar52._8_4_ = auVar116._8_4_ & auVar72._8_4_;
            auVar52._12_4_ = auVar116._12_4_ & auVar72._12_4_;
            iVar33 = movmskps(iVar33,auVar52);
            if (iVar33 != 0) {
              auVar51 = rcpps(auVar72,auVar117);
              uVar45 = (ulong)iVar33;
              local_818 = CONCAT44(fVar129,fVar127);
              uStack_810 = CONCAT44(fVar133,fVar131);
              fVar122 = auVar51._0_4_;
              fVar50 = auVar51._4_4_;
              fVar77 = auVar51._8_4_;
              fVar78 = auVar51._12_4_;
              local_808 = local_a88;
              uStack_800 = CONCAT44(fVar106,fVar105);
              local_7f8 = local_a98;
              uStack_7f0 = CONCAT44(fVar138,fVar137);
              fVar122 = (_LC7 - auVar117._0_4_ * fVar122) * fVar122 + fVar122;
              fVar50 = (_LC7 - auVar117._4_4_ * fVar50) * fVar50 + fVar50;
              fVar77 = (_LC7 - auVar117._8_4_ * fVar77) * fVar77 + fVar77;
              fVar78 = (_LC7 - auVar117._12_4_ * fVar78) * fVar78 + fVar78;
              local_828[0] = fVar57 * fVar122;
              local_828[1] = fVar53 * fVar50;
              local_828[2] = fVar74 * fVar77;
              local_828[3] = fVar75 * fVar78;
              local_848[0] = fVar56 * fVar122;
              local_848[1] = fVar63 * fVar50;
              local_848[2] = fVar55 * fVar77;
              local_848[3] = fVar62 * fVar78;
              local_838[0] = fVar122 * fVar65;
              local_838[1] = fVar50 * fVar66;
              local_838[2] = fVar77 * fVar67;
              local_838[3] = fVar78 * fVar73;
              do {
                uVar38 = 0;
                if (uVar45 != 0) {
                  for (; (uVar45 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                  }
                }
                uVar46 = *(uint *)((long)&local_8d8 + uVar38 * 4);
                lVar41 = *(long *)(lVar41 + (ulong)uVar46 * 8);
                pbVar42 = *(byte **)(param_3 + 0x10);
                pcVar36 = *(code **)(pbVar42 + 0x10);
                if ((pcVar36 == (code *)0x0) && (*(long *)(lVar41 + 0x48) == 0)) {
LAB_0010eba6:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_0010e4a9;
                }
                puStack_908 = *(undefined4 **)(param_3 + 8);
                uStack_8b0 = uVar46;
                uVar37 = *(undefined4 *)(param_2 + 0x20);
                iStack_91c = -1;
                fStack_8bc = local_848[uVar38];
                uStack_8c0 = *(undefined4 *)((long)&local_7f8 + uVar38 * 4);
                uStack_8c4 = *(undefined4 *)((long)&local_808 + uVar38 * 4);
                uStack_8ac = *puStack_908;
                piStack_918 = &iStack_91c;
                uStack_8c8 = *(undefined4 *)((long)&local_818 + uVar38 * 4);
                fStack_8b8 = local_838[uVar38];
                uStack_8b4 = *(undefined4 *)((long)&local_8e8 + uVar38 * 4);
                *(float *)(param_2 + 0x20) = local_828[uVar38];
                uStack_910 = *(undefined8 *)(lVar41 + 0x18);
                puStack_8f8 = &uStack_8c8;
                uStack_8f0 = 1;
                pRStack_900 = param_2;
                if (*(code **)(lVar41 + 0x48) == (code *)0x0) {
LAB_0010ecf4:
                  if (pcVar36 != (code *)0x0) {
                    if (((*pbVar42 & 2) != 0) || ((*(byte *)(lVar41 + 0x3e) & 0x40) != 0)) {
                      (*pcVar36)(&piStack_918);
                    }
                    if (*piStack_918 == 0) goto LAB_0010ed26;
                  }
                  goto LAB_0010eba6;
                }
                (**(code **)(lVar41 + 0x48))(&piStack_918);
                if (*piStack_918 != 0) {
                  pbVar42 = *(byte **)(param_3 + 0x10);
                  pcVar36 = *(code **)(pbVar42 + 0x10);
                  goto LAB_0010ecf4;
                }
LAB_0010ed26:
                uVar45 = uVar45 ^ 1L << (uVar38 & 0x3f);
                *(undefined4 *)(param_2 + 0x20) = uVar37;
                if (uVar45 == 0) break;
                lVar41 = *(long *)(lVar40 + 0x1e0);
              } while( true );
            }
          }
          puVar43 = puVar43 + 0x14;
          if (local_a08 + 1 == uVar44 - 8) break;
          fVar122 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_0010e498:
    } while (puVar34 != &local_7e8);
  }
LAB_0010e4a9:
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
  float *pfVar8;
  long lVar9;
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
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong uVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  int iVar36;
  ulong uVar37;
  uint *puVar38;
  long lVar39;
  ulong uVar40;
  code *pcVar41;
  RayHitK *pRVar42;
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  float *pfVar46;
  long lVar47;
  byte *extraout_RDX;
  byte *pbVar48;
  long lVar49;
  undefined4 uVar50;
  long in_FS_OFFSET;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar90;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
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
  uint uVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar118;
  float fVar119;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar120;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar134;
  float fVar135;
  undefined1 auVar128 [16];
  float fVar136;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar137;
  float fVar138;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar145;
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  float fVar151;
  float fVar152;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined1 auStack_1228 [8];
  undefined8 uStack_1220;
  undefined1 auStack_1208 [12];
  float fStack_11fc;
  undefined1 auStack_11f8 [12];
  float fStack_11ec;
  float fStack_11d0;
  float fStack_11cc;
  undefined8 local_11c8;
  long lStack_11c0;
  undefined1 auStack_11b8 [8];
  float fStack_11b0;
  float fStack_11ac;
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
    fVar137 = *(float *)(param_2 + 0xc);
    if (fVar137 < 0.0) {
      fVar137 = 0.0;
    }
    fVar31 = *(float *)param_2;
    fVar32 = *(float *)(param_2 + 4);
    fVar33 = *(float *)(param_2 + 8);
    auVar84._4_4_ = fVar59;
    auVar84._0_4_ = fVar59;
    auVar84._8_4_ = fVar59;
    auVar84._12_4_ = fVar59;
    uVar51 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar52 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _LC5);
    uVar53 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _LC5);
    uVar54 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _LC5);
    auVar91._0_4_ = ~uVar51 & *(uint *)(param_2 + 0x10);
    auVar91._4_4_ = ~uVar52 & *(uint *)(param_2 + 0x14);
    auVar91._8_4_ = ~uVar53 & *(uint *)(param_2 + 0x18);
    auVar91._12_4_ = ~uVar54 & *(uint *)(param_2 + 0x1c);
    auVar56._0_4_ = uVar51 & (uint)_LC5;
    auVar56._4_4_ = uVar52 & (uint)_LC5;
    auVar56._8_4_ = uVar53 & (uint)_LC5;
    auVar56._12_4_ = uVar54 & (uint)_LC5;
    auVar56 = auVar56 | auVar91;
    auVar91 = rcpps(auVar91,auVar56);
    fVar59 = auVar91._0_4_;
    fVar65 = auVar91._4_4_;
    fVar68 = auVar91._8_4_;
    fVar59 = (_LC7 - auVar56._0_4_ * fVar59) * fVar59 + fVar59;
    fVar65 = (_LC7 - auVar56._4_4_ * fVar65) * fVar65 + fVar65;
    fVar68 = (_LC7 - auVar56._8_4_ * fVar68) * fVar68 + fVar68;
    uVar37 = (ulong)(fVar59 < 0.0) * 0x10;
    auVar92._4_4_ = fVar137;
    auVar92._0_4_ = fVar137;
    auVar92._8_4_ = fVar137;
    auVar92._12_4_ = fVar137;
    pauVar34 = (undefined1 (*) [16])local_f78;
    auVar56 = _auStack_1208;
    auVar91 = _auStack_11f8;
joined_r0x0010ef23:
    pauVar35 = pauVar34;
    if (pauVar35 != (undefined1 (*) [16])local_f88) {
      auStack_11b8._4_4_ = *(undefined4 *)(param_2 + 0x20);
      pauVar34 = pauVar35 + -1;
      if (*(float *)(pauVar35[-1] + 8) <= (float)auStack_11b8._4_4_) {
        fVar137 = *(float *)(param_2 + 0x1c);
        uVar40 = *(ulong *)pauVar35[-1];
        while ((uVar40 & 8) == 0) {
          uVar43 = uVar40 & 0xfffffffffffffff0;
          lVar1 = uVar43 + 0x20;
          pfVar2 = (float *)(lVar1 + (ulong)(-(uint)(fVar65 < 0.0) & 0x10) + 0x20);
          pfVar3 = (float *)(lVar1 + (ulong)(-(uint)(fVar68 < 0.0) & 0x10) + 0x40);
          pfVar4 = (float *)(lVar1 + uVar37);
          pfVar5 = (float *)(lVar1 + (uVar37 ^ 0x10));
          pfVar6 = (float *)(lVar1 + (-(ulong)(fVar65 < 0.0) & 0xfffffffffffffff0) + 0x30);
          pfVar46 = (float *)(lVar1 + (-(ulong)(fVar68 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar112._0_4_ = ((pfVar2[0x18] * fVar137 + *pfVar2) - fVar32) * fVar65;
          auVar112._4_4_ = ((pfVar2[0x19] * fVar137 + pfVar2[1]) - fVar32) * fVar65;
          auVar112._8_4_ = ((pfVar2[0x1a] * fVar137 + pfVar2[2]) - fVar32) * fVar65;
          auVar112._12_4_ = ((pfVar2[0x1b] * fVar137 + pfVar2[3]) - fVar32) * fVar65;
          auVar121._0_4_ = ((pfVar3[0x18] * fVar137 + *pfVar3) - fVar33) * fVar68;
          auVar121._4_4_ = ((pfVar3[0x19] * fVar137 + pfVar3[1]) - fVar33) * fVar68;
          auVar121._8_4_ = ((pfVar3[0x1a] * fVar137 + pfVar3[2]) - fVar33) * fVar68;
          auVar121._12_4_ = ((pfVar3[0x1b] * fVar137 + pfVar3[3]) - fVar33) * fVar68;
          auVar113 = maxps(auVar112,auVar121);
          auVar122._0_4_ = ((pfVar4[0x18] * fVar137 + *pfVar4) - fVar31) * fVar59;
          auVar122._4_4_ = ((pfVar4[0x19] * fVar137 + pfVar4[1]) - fVar31) * fVar59;
          auVar122._8_4_ = ((pfVar4[0x1a] * fVar137 + pfVar4[2]) - fVar31) * fVar59;
          auVar122._12_4_ = ((pfVar4[0x1b] * fVar137 + pfVar4[3]) - fVar31) * fVar59;
          auVar128 = maxps(auVar92,auVar122);
          local_1048[0] = maxps(auVar128,auVar113);
          auVar123._0_4_ = ((pfVar46[0x18] * fVar137 + *pfVar46) - fVar33) * fVar68;
          auVar123._4_4_ = ((pfVar46[0x19] * fVar137 + pfVar46[1]) - fVar33) * fVar68;
          auVar123._8_4_ = ((pfVar46[0x1a] * fVar137 + pfVar46[2]) - fVar33) * fVar68;
          auVar123._12_4_ = ((pfVar46[0x1b] * fVar137 + pfVar46[3]) - fVar33) * fVar68;
          auVar114._0_4_ = ((pfVar6[0x18] * fVar137 + *pfVar6) - fVar32) * fVar65;
          auVar114._4_4_ = ((pfVar6[0x19] * fVar137 + pfVar6[1]) - fVar32) * fVar65;
          auVar114._8_4_ = ((pfVar6[0x1a] * fVar137 + pfVar6[2]) - fVar32) * fVar65;
          auVar114._12_4_ = ((pfVar6[0x1b] * fVar137 + pfVar6[3]) - fVar32) * fVar65;
          auVar113 = minps(auVar114,auVar123);
          auVar124._0_4_ = ((pfVar5[0x18] * fVar137 + *pfVar5) - fVar31) * fVar59;
          auVar124._4_4_ = ((pfVar5[0x19] * fVar137 + pfVar5[1]) - fVar31) * fVar59;
          auVar124._8_4_ = ((pfVar5[0x1a] * fVar137 + pfVar5[2]) - fVar31) * fVar59;
          auVar124._12_4_ = ((pfVar5[0x1b] * fVar137 + pfVar5[3]) - fVar31) * fVar59;
          auVar128 = minps(auVar84,auVar124);
          auVar113 = minps(auVar128,auVar113);
          bVar27 = SUB164(local_1048[0],0) <= auVar113._0_4_;
          bVar28 = SUB164(local_1048[0],4) <= auVar113._4_4_;
          bVar29 = SUB164(local_1048[0],8) <= auVar113._8_4_;
          bVar30 = SUB164(local_1048[0],0xc) <= auVar113._12_4_;
          auVar115._4_4_ = -(uint)bVar28;
          auVar115._0_4_ = -(uint)bVar27;
          auVar115._8_4_ = -(uint)bVar29;
          auVar115._12_4_ = -(uint)bVar30;
          if (((uint)uVar40 & 0xf) == 6) {
            auVar115._0_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe0) <= fVar137 &&
                         fVar137 < *(float *)(uVar43 + 0xf0)) && bVar27);
            auVar115._4_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe4) <= fVar137 &&
                         fVar137 < *(float *)(uVar43 + 0xf4)) && bVar28);
            auVar115._8_4_ =
                 -(uint)((*(float *)(uVar43 + 0xe8) <= fVar137 &&
                         fVar137 < *(float *)(uVar43 + 0xf8)) && bVar29);
            auVar115._12_4_ =
                 -(uint)((*(float *)(uVar43 + 0xec) <= fVar137 &&
                         fVar137 < *(float *)(uVar43 + 0xfc)) && bVar30);
          }
          uVar50 = movmskps((int)pfVar5,auVar115);
          uVar45 = CONCAT44((int)((ulong)pfVar5 >> 0x20),uVar50);
          if (uVar45 == 0) goto joined_r0x0010ef23;
          lVar1 = 0;
          if (uVar45 != 0) {
            for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar23 = *(ulong *)(uVar43 + lVar1 * 8);
          uVar45 = uVar45 - 1 & uVar45;
          uVar40 = uVar23;
          if (uVar45 != 0) {
            lVar47 = 0;
            if (uVar45 != 0) {
              for (; (uVar45 >> lVar47 & 1) == 0; lVar47 = lVar47 + 1) {
              }
            }
            uVar40 = *(ulong *)(uVar43 + lVar47 * 8);
            fVar55 = afStack_fe8[lVar1 + -0x18];
            fVar62 = afStack_fe8[lVar47 + -0x18];
            uVar45 = uVar45 & uVar45 - 1;
            if (uVar45 == 0) {
              if ((uint)fVar55 < (uint)fVar62) {
                *(ulong *)*pauVar34 = uVar40;
                *(float *)(*pauVar34 + 8) = fVar62;
                pauVar34 = pauVar34 + 1;
                uVar40 = uVar23;
              }
              else {
                *(ulong *)*pauVar34 = uVar23;
                *(float *)(*pauVar34 + 8) = fVar55;
                pauVar34 = pauVar34 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar45 != 0) {
                for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uVar26 = *(ulong *)(uVar43 + lVar1 * 8);
              auVar146._8_4_ = fVar55;
              auVar146._0_8_ = uVar23;
              auVar146._12_4_ = 0;
              fVar58 = afStack_fe8[lVar1 + -0x18];
              auVar139._8_4_ = fVar62;
              auVar139._0_8_ = uVar40;
              auVar139._12_4_ = 0;
              auVar116._8_4_ = fVar58;
              auVar116._0_8_ = uVar26;
              auVar116._12_4_ = 0;
              auVar125._8_4_ = -(uint)((int)fVar55 < (int)fVar62);
              uVar45 = uVar45 - 1 & uVar45;
              if (uVar45 == 0) {
                auVar125._4_4_ = auVar125._8_4_;
                auVar125._0_4_ = auVar125._8_4_;
                auVar125._12_4_ = auVar125._8_4_;
                auVar129 = ~auVar125 & auVar139 | auVar146 & auVar125;
                auVar128 = auVar125 & auVar139 | ~auVar125 & auVar146;
                auVar130._8_4_ = -(uint)(auVar129._8_4_ < (int)fVar58);
                auVar130._0_8_ = CONCAT44(auVar130._8_4_,auVar130._8_4_);
                auVar130._12_4_ = auVar130._8_4_;
                auVar113 = auVar116 & auVar130 | ~auVar130 & auVar129;
                auVar140._8_4_ = -(uint)(auVar128._8_4_ < auVar113._8_4_);
                auVar140._4_4_ = auVar140._8_4_;
                auVar140._0_4_ = auVar140._8_4_;
                auVar140._12_4_ = auVar140._8_4_;
                _auStack_1228 = ~auVar140 & auVar113;
                *pauVar34 = auVar113 & auVar140 | ~auVar140 & auVar128;
                pauVar34[1] = auVar128 & auVar140 | _auStack_1228;
                uVar40 = auVar129._0_8_ & auVar130._0_8_ | ~auVar130._0_8_ & uVar26;
                pauVar34 = pauVar34 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar45 != 0) {
                  for (; (uVar45 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                auVar117._8_4_ = afStack_fe8[lVar1 + -0x18];
                auVar117._0_8_ = *(undefined8 *)(uVar43 + lVar1 * 8);
                auVar117._12_4_ = 0;
                auVar131._4_4_ = auVar125._8_4_;
                auVar131._0_4_ = auVar125._8_4_;
                auVar131._8_4_ = auVar125._8_4_;
                auVar131._12_4_ = auVar125._8_4_;
                auVar129 = ~auVar131 & auVar139 | auVar146 & auVar131;
                auVar141 = auVar139 & auVar131 | ~auVar131 & auVar146;
                auVar132._8_4_ = -(uint)((int)fVar58 < (int)afStack_fe8[lVar1 + -0x18]);
                auVar132._4_4_ = auVar132._8_4_;
                auVar132._0_4_ = auVar132._8_4_;
                auVar132._12_4_ = auVar132._8_4_;
                auVar91 = auVar116 & auVar132 | ~auVar132 & auVar117;
                auVar113 = auVar117 & auVar132 | ~auVar132 & auVar116;
                uStack_1220._0_4_ = (float)-(uint)(auVar141._8_4_ < auVar113._8_4_);
                auStack_1228._4_4_ = (float)uStack_1220;
                auStack_1228._0_4_ = (float)uStack_1220;
                uStack_1220._4_4_ = (float)uStack_1220;
                auVar128 = auVar141 & _auStack_1228 | ~_auStack_1228 & auVar113;
                auVar133._8_4_ = -(uint)(auVar129._8_4_ < auVar91._8_4_);
                auVar133._0_8_ = CONCAT44(auVar133._8_4_,auVar133._8_4_);
                auVar133._12_4_ = auVar133._8_4_;
                auVar56 = ~auVar133 & auVar91;
                auVar147 = ~auVar133 & auVar129 | auVar91 & auVar133;
                auVar126._8_4_ = -(uint)(auVar147._8_4_ < auVar128._8_4_);
                auVar126._4_4_ = auVar126._8_4_;
                auVar126._0_4_ = auVar126._8_4_;
                auVar126._12_4_ = auVar126._8_4_;
                auVar91 = ~auVar126 & auVar128;
                pauVar34[1] = auVar128 & auVar126 | ~auVar126 & auVar147;
                *pauVar34 = _auStack_1228 & auVar113 | ~_auStack_1228 & auVar141;
                pauVar34[2] = auVar147 & auVar126 | auVar91;
                uVar40 = auVar56._0_8_ | auVar129._0_8_ & auVar133._0_8_;
                pauVar34 = pauVar34 + 3;
              }
            }
          }
        }
        puVar38 = (uint *)(uVar40 & 0xfffffffffffffff0);
        uVar40 = (ulong)((uint)uVar40 & 0xf);
        if (uVar40 != 8) {
          auStack_11b8._0_4_ = auStack_11b8._4_4_;
          fStack_11b0 = (float)auStack_11b8._4_4_;
          fStack_11ac = (float)auStack_11b8._4_4_;
          _auStack_1208 = auVar56;
          _auStack_11f8 = auVar91;
          do {
            auVar113 = _auStack_11f8;
            auVar84 = _auStack_1208;
            lVar1 = *(long *)param_3;
            lVar47 = *(long *)(lVar1 + 0x1e0);
            lVar49 = *(long *)(lVar47 + (ulong)puVar38[0xc] * 8);
            fVar55 = ((fVar137 - *(float *)(lVar49 + 0x2c)) /
                     (*(float *)(lVar49 + 0x30) - *(float *)(lVar49 + 0x2c))) *
                     *(float *)(lVar49 + 0x28);
            fVar62 = *(float *)(lVar49 + 0x28) - _LC7;
            fVar137 = fVar55;
            if ((float)(_LC3 & (uint)fVar55) < _LC19) {
              fVar137 = (float)(~_LC3 & (uint)fVar55 |
                               (uint)((float)(int)fVar55 -
                                     (float)(-(uint)(fVar55 < (float)(int)fVar55) & (uint)_LC7)));
            }
            if (fVar62 <= fVar137) {
              fVar137 = fVar62;
            }
            if (0.0 <= fVar137) {
              fVar55 = fVar55 - fVar137;
              lVar39 = (long)(int)fVar137 * 0x30;
              lStack_11c0 = (long)((int)fVar137 + 1) * 0x30;
            }
            else {
              lStack_11c0 = 0x30;
              lVar39 = 0;
            }
            lVar24 = *(long *)(*(long *)(lVar49 + 0xd0) + lVar39);
            pfVar2 = (float *)(lVar24 + (ulong)puVar38[4] * 4);
            pfVar3 = (float *)(lVar24 + (ulong)*puVar38 * 4);
            pfVar4 = (float *)(lVar24 + (ulong)puVar38[2] * 4);
            pfVar5 = (float *)(lVar24 + (ulong)puVar38[1] * 4);
            pfVar6 = (float *)(lVar24 + (ulong)puVar38[3] * 4);
            pfVar46 = (float *)(lVar24 + (ulong)puVar38[8] * 4);
            uVar51 = puVar38[0xb];
            lVar39 = lVar24 + (ulong)puVar38[10] * 4;
            pfVar7 = (float *)(lVar24 + (ulong)puVar38[5] * 4);
            pfVar8 = (float *)(lVar24 + (ulong)puVar38[9] * 4);
            lVar9 = lVar24 + (ulong)uVar51 * 4;
            auStack_1208._4_4_ = pfVar7[2];
            auStack_1208._0_4_ = pfVar2[2];
            stack0xffffffffffffee00 = auVar84._8_8_;
            auVar56 = _auStack_1208;
            auStack_11f8._4_4_ = *pfVar8;
            auStack_11f8._0_4_ = *pfVar46;
            auVar91 = _auStack_11f8;
            local_11c8 = CONCAT44(*(undefined4 *)(lVar9 + 8),*(undefined4 *)(lVar39 + 8));
            lVar49 = *(long *)(*(long *)(lVar49 + 0xd0) + lStack_11c0);
            pfVar10 = (float *)(lVar49 + (ulong)*puVar38 * 4);
            pfVar11 = (float *)(lVar49 + (ulong)puVar38[2] * 4);
            pfVar12 = (float *)(lVar49 + (ulong)puVar38[3] * 4);
            pfVar13 = (float *)(lVar49 + (ulong)puVar38[1] * 4);
            pfVar14 = (float *)(lVar49 + (ulong)puVar38[4] * 4);
            pfVar15 = (float *)(lVar49 + (ulong)puVar38[6] * 4);
            pfVar16 = (float *)(lVar49 + (ulong)puVar38[7] * 4);
            pfVar17 = (float *)(lVar49 + (ulong)puVar38[5] * 4);
            pfVar18 = (float *)(lVar49 + (ulong)puVar38[8] * 4);
            pfVar19 = (float *)(lVar49 + (ulong)puVar38[10] * 4);
            pfVar20 = (float *)(lVar49 + (ulong)puVar38[9] * 4);
            pfVar21 = (float *)(lVar49 + (ulong)uVar51 * 4);
            fVar137 = _LC7 - fVar55;
            uStack_1088 = *(undefined8 *)(puVar38 + 0x10);
            uStack_1080 = *(undefined8 *)(puVar38 + 0x12);
            uStack_1078 = *(undefined8 *)(puVar38 + 0xc);
            uStack_1070 = *(undefined8 *)(puVar38 + 0xe);
            fVar71 = pfVar10[2] * fVar55 + pfVar3[2] * fVar137;
            fVar72 = pfVar13[2] * fVar55 + pfVar5[2] * fVar137;
            fVar73 = pfVar11[2] * fVar55 + pfVar4[2] * fVar137;
            fVar74 = pfVar12[2] * fVar55 + pfVar6[2] * fVar137;
            fVar90 = pfVar10[1] * fVar55 + pfVar3[1] * fVar137;
            fVar93 = pfVar13[1] * fVar55 + pfVar5[1] * fVar137;
            fVar94 = pfVar11[1] * fVar55 + pfVar4[1] * fVar137;
            fVar95 = pfVar12[1] * fVar55 + pfVar6[1] * fVar137;
            fVar75 = (pfVar18[2] * fVar55 + pfVar46[2] * fVar137) - fVar71;
            fVar80 = (pfVar20[2] * fVar55 + pfVar8[2] * fVar137) - fVar72;
            fVar81 = (pfVar19[2] * fVar55 + fStack_11d0 * fVar137) - fVar73;
            fVar82 = (pfVar21[2] * fVar55 + fStack_11cc * fVar137) - fVar74;
            fVar100 = *pfVar10 * fVar55 + *pfVar3 * fVar137;
            fVar101 = *pfVar13 * fVar55 + *pfVar5 * fVar137;
            fVar102 = *pfVar11 * fVar55 + *pfVar4 * fVar137;
            fVar103 = *pfVar12 * fVar55 + *pfVar6 * fVar137;
            auStack_1208._8_4_ = auVar84._8_4_;
            fStack_11fc = auVar84._12_4_;
            fVar111 = fVar90 - (pfVar2[1] * fVar137 + pfVar14[1] * fVar55);
            fVar118 = fVar93 - (pfVar7[1] * fVar137 + pfVar17[1] * fVar55);
            fVar119 = fVar94 - (*(float *)(lVar24 + (ulong)puVar38[6] * 4 + 4) * fVar137 +
                               pfVar15[1] * fVar55);
            fVar120 = fVar95 - (*(float *)(lVar24 + (ulong)puVar38[7] * 4 + 4) * fVar137 +
                               pfVar16[1] * fVar55);
            fVar107 = fVar100 - (*pfVar2 * fVar137 + *pfVar14 * fVar55);
            fVar108 = fVar101 - (*pfVar7 * fVar137 + *pfVar17 * fVar55);
            fVar109 = fVar102 - ((float)uStack_1220 * fVar137 + *pfVar15 * fVar55);
            fVar110 = fVar103 - (uStack_1220._4_4_ * fVar137 + *pfVar16 * fVar55);
            fVar83 = fVar71 - (pfVar2[2] * fVar137 + pfVar14[2] * fVar55);
            fVar87 = fVar72 - (pfVar7[2] * fVar137 + pfVar17[2] * fVar55);
            fVar88 = fVar73 - ((float)auStack_1208._8_4_ * fVar137 + pfVar15[2] * fVar55);
            fVar89 = fVar74 - (fStack_11fc * fVar137 + pfVar16[2] * fVar55);
            auStack_11f8._8_4_ = auVar113._8_4_;
            fStack_11ec = auVar113._12_4_;
            fVar60 = (pfVar18[1] * fVar55 + pfVar46[1] * fVar137) - fVar90;
            fVar66 = (pfVar20[1] * fVar55 + pfVar8[1] * fVar137) - fVar93;
            fVar69 = (pfVar19[1] * fVar55 + *(float *)(lVar39 + 4) * fVar137) - fVar94;
            fVar70 = (pfVar21[1] * fVar55 + *(float *)(lVar9 + 4) * fVar137) - fVar95;
            fVar96 = (fVar55 * *pfVar18 + fVar137 * *pfVar46) - fVar100;
            fVar97 = (fVar55 * *pfVar20 + fVar137 * *pfVar8) - fVar101;
            fVar98 = (fVar55 * *pfVar19 + fVar137 * (float)auStack_11f8._8_4_) - fVar102;
            fVar99 = (fVar55 * *pfVar21 + fVar137 * fStack_11ec) - fVar103;
            fVar151 = fVar111 * fVar96 - fVar107 * fVar60;
            fVar152 = fVar118 * fVar97 - fVar108 * fVar66;
            uStack_1240._0_4_ = fVar119 * fVar98 - fVar109 * fVar69;
            uStack_1240._4_4_ = fVar120 * fVar99 - fVar110 * fVar70;
            uStack_1248 = CONCAT44(fVar152,fVar151);
            fVar104 = fVar107 * fVar75 - fVar83 * fVar96;
            fVar105 = fVar108 * fVar80 - fVar87 * fVar97;
            uStack_1230._0_4_ = fVar109 * fVar81 - fVar88 * fVar98;
            uStack_1230._4_4_ = fVar110 * fVar82 - fVar89 * fVar99;
            uStack_1238 = CONCAT44(fVar105,fVar104);
            auStack_1228._0_4_ = fVar83 * fVar60 - fVar111 * fVar75;
            auStack_1228._4_4_ = fVar87 * fVar66 - fVar118 * fVar80;
            uStack_1220._0_4_ = fVar88 * fVar69 - fVar119 * fVar81;
            uStack_1220._4_4_ = fVar89 * fVar70 - fVar120 * fVar82;
            fVar137 = *(float *)param_2;
            fVar55 = *(float *)(param_2 + 4);
            fVar62 = *(float *)(param_2 + 8);
            fVar58 = *(float *)(param_2 + 0x10);
            fVar61 = *(float *)(param_2 + 0x14);
            fVar67 = *(float *)(param_2 + 0x18);
            fVar90 = fVar90 - fVar55;
            fVar93 = fVar93 - fVar55;
            fVar94 = fVar94 - fVar55;
            fVar95 = fVar95 - fVar55;
            fVar100 = fVar100 - fVar137;
            fVar101 = fVar101 - fVar137;
            fVar102 = fVar102 - fVar137;
            fVar103 = fVar103 - fVar137;
            fVar71 = fVar71 - fVar62;
            fVar72 = fVar72 - fVar62;
            fVar73 = fVar73 - fVar62;
            fVar74 = fVar74 - fVar62;
            fVar145 = fVar100 * fVar61 - fVar90 * fVar58;
            fVar148 = fVar101 * fVar61 - fVar93 * fVar58;
            fVar149 = fVar102 * fVar61 - fVar94 * fVar58;
            fVar150 = fVar103 * fVar61 - fVar95 * fVar58;
            fVar138 = fVar71 * fVar58 - fVar100 * fVar67;
            fVar142 = fVar72 * fVar58 - fVar101 * fVar67;
            fVar143 = fVar73 * fVar58 - fVar102 * fVar67;
            fVar144 = fVar74 * fVar58 - fVar103 * fVar67;
            fVar127 = fVar90 * fVar67 - fVar71 * fVar61;
            fVar134 = fVar93 * fVar67 - fVar72 * fVar61;
            fVar135 = fVar94 * fVar67 - fVar73 * fVar61;
            fVar136 = fVar95 * fVar67 - fVar74 * fVar61;
            fVar137 = fVar61 * fVar104 + fVar67 * fVar151 + fVar58 * (float)auStack_1228._0_4_;
            fVar55 = fVar61 * fVar105 + fVar67 * fVar152 + fVar58 * (float)auStack_1228._4_4_;
            fVar62 = fVar61 * (float)uStack_1230 + fVar67 * (float)uStack_1240 +
                     fVar58 * (float)uStack_1220;
            fVar58 = fVar61 * uStack_1230._4_4_ + fVar67 * uStack_1240._4_4_ +
                     fVar58 * uStack_1220._4_4_;
            uVar52 = _LC9 & (uint)fVar137;
            uVar53 = _UNK_001151f4 & (uint)fVar55;
            uVar54 = _UNK_001151f8 & (uint)fVar62;
            uVar106 = _UNK_001151fc & (uint)fVar58;
            auVar128._0_4_ = (float)(_LC3 & (uint)fVar137);
            auVar128._4_4_ = (float)(_UNK_001151c4 & (uint)fVar55);
            auVar128._8_4_ = (float)(_UNK_001151c8 & (uint)fVar62);
            auVar128._12_4_ = (float)(_UNK_001151cc & (uint)fVar58);
            fVar83 = (float)((uint)(fVar107 * fVar127 + fVar83 * fVar145 + fVar111 * fVar138) ^
                            uVar52);
            fVar87 = (float)((uint)(fVar108 * fVar134 + fVar87 * fVar148 + fVar118 * fVar142) ^
                            uVar53);
            fVar88 = (float)((uint)(fVar109 * fVar135 + fVar88 * fVar149 + fVar119 * fVar143) ^
                            uVar54);
            fVar89 = (float)((uint)(fVar110 * fVar136 + fVar89 * fVar150 + fVar120 * fVar144) ^
                            uVar106);
            fVar61 = (float)((uint)(fVar60 * fVar138 + fVar75 * fVar145 + fVar96 * fVar127) ^ uVar52
                            );
            fVar67 = (float)((uint)(fVar66 * fVar142 + fVar80 * fVar148 + fVar97 * fVar134) ^ uVar53
                            );
            fVar60 = (float)((uint)(fVar69 * fVar143 + fVar81 * fVar149 + fVar98 * fVar135) ^ uVar54
                            );
            fVar66 = (float)((uint)(fVar70 * fVar144 + fVar82 * fVar150 + fVar99 * fVar136) ^
                            uVar106);
            auVar113._0_4_ =
                 -(uint)((0.0 <= fVar83 && (fVar137 != 0.0 && 0.0 <= fVar61)) &&
                        fVar83 + fVar61 <= auVar128._0_4_) & _DAT_00116108;
            auVar113._4_4_ =
                 -(uint)((0.0 <= fVar87 && (fVar55 != 0.0 && 0.0 <= fVar67)) &&
                        fVar87 + fVar67 <= auVar128._4_4_) & uRam000000000011610c;
            auVar113._8_4_ =
                 -(uint)((0.0 <= fVar88 && (fVar62 != 0.0 && 0.0 <= fVar60)) &&
                        fVar88 + fVar60 <= auVar128._8_4_) & uRam0000000000116110;
            auVar113._12_4_ =
                 -(uint)((0.0 <= fVar89 && (fVar58 != 0.0 && 0.0 <= fVar66)) &&
                        fVar89 + fVar66 <= auVar128._12_4_) & uRam0000000000116114;
            iVar36 = movmskps((int)lVar49,auVar113);
            auVar84 = _auStack_11b8;
            if (iVar36 != 0) {
              fVar55 = (float)((uint)(fVar71 * fVar151 + fVar90 * fVar104 +
                                     fVar100 * (float)auStack_1228._0_4_) ^ uVar52);
              fVar62 = (float)((uint)(fVar72 * fVar152 + fVar93 * fVar105 +
                                     fVar101 * (float)auStack_1228._4_4_) ^ uVar53);
              fVar58 = (float)((uint)(fVar73 * (float)uStack_1240 + fVar94 * (float)uStack_1230 +
                                     fVar102 * (float)uStack_1220) ^ uVar54);
              fVar69 = (float)((uint)(fVar74 * uStack_1240._4_4_ + fVar95 * uStack_1230._4_4_ +
                                     fVar103 * uStack_1220._4_4_) ^ uVar106);
              fVar137 = *(float *)(param_2 + 0xc);
              auVar129._0_4_ =
                   auVar113._0_4_ &
                   -(uint)(fVar137 * auVar128._0_4_ < fVar55 &&
                          fVar55 <= SUB164(_auStack_11b8,0) * auVar128._0_4_);
              auVar129._4_4_ =
                   auVar113._4_4_ &
                   -(uint)(fVar137 * auVar128._4_4_ < fVar62 &&
                          fVar62 <= SUB164(_auStack_11b8,4) * auVar128._4_4_);
              auVar129._8_4_ =
                   auVar113._8_4_ &
                   -(uint)(fVar137 * auVar128._8_4_ < fVar58 &&
                          fVar58 <= SUB164(_auStack_11b8,8) * auVar128._8_4_);
              auVar129._12_4_ =
                   auVar113._12_4_ &
                   -(uint)(fVar137 * auVar128._12_4_ < fVar69 &&
                          fVar69 <= SUB164(_auStack_11b8,0xc) * auVar128._12_4_);
              iVar36 = movmskps(iVar36,auVar129);
              if (iVar36 != 0) {
                auVar84 = rcpps(_auStack_11b8,auVar128);
                auStack_1098 = auVar129;
                uStack_fb8 = auStack_1228;
                uStack_fb0 = uStack_1220;
                fVar137 = auVar84._0_4_;
                fVar70 = auVar84._4_4_;
                fVar71 = auVar84._8_4_;
                fVar72 = auVar84._12_4_;
                uStack_fa8 = uStack_1238;
                uStack_fa0 = uStack_1230;
                uStack_f98 = uStack_1248;
                uStack_f90 = uStack_1240;
                auVar141._4_4_ = _LC18;
                auVar141._0_4_ = _LC18;
                auVar141._8_4_ = _LC18;
                auVar141._12_4_ = _LC18;
                fVar137 = (_LC7 - auVar128._0_4_ * fVar137) * fVar137 + fVar137;
                fVar70 = (_LC7 - auVar128._4_4_ * fVar70) * fVar70 + fVar70;
                fVar71 = (_LC7 - auVar128._8_4_ * fVar71) * fVar71 + fVar71;
                fVar72 = (_LC7 - auVar128._12_4_ * fVar72) * fVar72 + fVar72;
                fVar55 = fVar55 * fVar137;
                fVar62 = fVar62 * fVar70;
                fVar58 = fVar58 * fVar71;
                fVar69 = fVar69 * fVar72;
                afStack_fc8[0] = fVar55;
                afStack_fc8[1] = fVar62;
                afStack_fc8[2] = fVar58;
                afStack_fc8[3] = fVar69;
                afStack_fe8[0] = fVar61 * fVar137;
                afStack_fe8[1] = fVar67 * fVar70;
                afStack_fe8[2] = fVar60 * fVar71;
                afStack_fe8[3] = fVar66 * fVar72;
                afStack_fd8[0] = fVar137 * fVar83;
                afStack_fd8[1] = fVar70 * fVar87;
                afStack_fd8[2] = fVar71 * fVar88;
                afStack_fd8[3] = fVar72 * fVar89;
                auVar63._0_4_ = auVar129._0_4_ & (uint)fVar55;
                auVar63._4_4_ = auVar129._4_4_ & (uint)fVar62;
                auVar63._8_4_ = auVar129._8_4_ & (uint)fVar58;
                auVar63._12_4_ = auVar129._12_4_ & (uint)fVar69;
                auVar76._0_4_ = ~auVar129._0_4_ & _LC18;
                auVar76._4_4_ = ~auVar129._4_4_ & _LC18;
                auVar76._8_4_ = ~auVar129._8_4_ & _LC18;
                auVar76._12_4_ = ~auVar129._12_4_ & _LC18;
                auVar63 = auVar63 | auVar76;
                auVar77._4_4_ = auVar63._0_4_;
                auVar77._0_4_ = auVar63._4_4_;
                auVar77._8_4_ = auVar63._12_4_;
                auVar77._12_4_ = auVar63._8_4_;
                auVar84 = minps(auVar77,auVar63);
                auVar85._0_8_ = auVar84._8_8_;
                auVar85._8_4_ = auVar84._0_4_;
                auVar85._12_4_ = auVar84._4_4_;
                auVar84 = minps(auVar85,auVar84);
                auVar147._0_4_ = auVar129._0_4_ & -(uint)(auVar63._0_4_ == auVar84._0_4_);
                auVar147._4_4_ = auVar129._4_4_ & -(uint)(auVar63._4_4_ == auVar84._4_4_);
                auVar147._8_4_ = auVar129._8_4_ & -(uint)(auVar63._8_4_ == auVar84._8_4_);
                auVar147._12_4_ = auVar129._12_4_ & -(uint)(auVar63._12_4_ == auVar84._12_4_);
                uVar51 = movmskps(uVar51,auVar147);
                uVar43 = CONCAT44((int)((ulong)lVar49 >> 0x20),iVar36);
                if (uVar51 != 0) {
                  uVar43 = (ulong)uVar51;
                }
                lVar49 = 0;
                if (uVar43 != 0) {
                  for (; (uVar43 >> lVar49 & 1) == 0; lVar49 = lVar49 + 1) {
                  }
                }
                uVar51 = *(uint *)((long)&uStack_1078 + lVar49 * 4);
                while( true ) {
                  lVar47 = *(long *)(lVar47 + (ulong)uVar51 * 8);
                  pbVar48 = *(byte **)(param_3 + 0x10);
                  pcVar41 = *(code **)(pbVar48 + 0x10);
                  if ((pcVar41 == (code *)0x0) && (*(long *)(lVar47 + 0x40) == 0)) break;
                  uStack_1050 = uVar51;
                  uStack_10cc = 0xffffffff;
                  uStack_1060 = *(undefined4 *)((long)&uStack_f98 + lVar49 * 4);
                  uStack_1054 = *(undefined4 *)((long)&uStack_1088 + lVar49 * 4);
                  fStack_1058 = afStack_fd8[lVar49];
                  puStack_10b8 = *(undefined4 **)(param_3 + 8);
                  uStack_1064 = *(undefined4 *)((long)&uStack_fa8 + lVar49 * 4);
                  uStack_1068 = *(uint *)((long)&uStack_fb8 + lVar49 * 4);
                  uStack_104c = **(undefined4 **)(param_3 + 8);
                  pRStack_10c8 = (RayHitK *)&uStack_10cc;
                  fStack_105c = afStack_fe8[lVar49];
                  fVar137 = *(float *)(param_2 + 0x20);
                  *(float *)(param_2 + 0x20) = afStack_fc8[lVar49];
                  puStack_10a8 = &uStack_1068;
                  uStack_10c0 = *(undefined8 *)(lVar47 + 0x18);
                  pRStack_10b0 = param_2;
                  uStack_10a0 = 1;
                  if (*(code **)(lVar47 + 0x40) == (code *)0x0) {
LAB_0010fc4b:
                    if (pcVar41 != (code *)0x0) {
                      if (((*pbVar48 & 2) != 0) || ((*(byte *)(lVar47 + 0x3e) & 0x40) != 0)) {
                        (*pcVar41)(&pRStack_10c8);
                        auVar141._4_12_ = _UNK_00115214;
                        auVar141._0_4_ = _LC18;
                        pbVar48 = extraout_RDX;
                      }
                      uVar51 = (uint)pbVar48;
                      pRVar42 = (RayHitK *)(ulong)*(uint *)pRStack_10c8;
                      if (*(uint *)pRStack_10c8 == 0) goto LAB_0010ff45;
                    }
                    *(uint *)(pRStack_10b0 + 0x30) = *puStack_10a8;
                    *(uint *)(pRStack_10b0 + 0x34) = puStack_10a8[1];
                    *(uint *)(pRStack_10b0 + 0x38) = puStack_10a8[2];
                    *(uint *)(pRStack_10b0 + 0x3c) = puStack_10a8[3];
                    *(uint *)(pRStack_10b0 + 0x40) = puStack_10a8[4];
                    *(uint *)(pRStack_10b0 + 0x44) = puStack_10a8[5];
                    *(uint *)(pRStack_10b0 + 0x48) = puStack_10a8[6];
                    uVar51 = puStack_10a8[7];
                    *(uint *)(pRStack_10b0 + 0x4c) = uVar51;
                    fVar137 = *(float *)(param_2 + 0x20);
                    pRVar42 = pRStack_10b0;
                  }
                  else {
                    (**(code **)(lVar47 + 0x40))(&pRStack_10c8);
                    auVar141._4_12_ = _UNK_00115214;
                    auVar141._0_4_ = _LC18;
                    uVar51 = *(uint *)pRStack_10c8;
                    pRVar42 = pRStack_10c8;
                    if (uVar51 != 0) {
                      pbVar48 = *(byte **)(param_3 + 0x10);
                      pcVar41 = *(code **)(pbVar48 + 0x10);
                      goto LAB_0010fc4b;
                    }
LAB_0010ff45:
                    *(float *)(param_2 + 0x20) = fVar137;
                  }
                  auStack_11b8 = (undefined1  [8])CONCAT44(fVar137,fVar137);
                  fStack_11b0 = fVar137;
                  fStack_11ac = fVar137;
                  auVar84._8_4_ = fVar137;
                  auVar84._0_8_ = auStack_11b8;
                  auVar84._12_4_ = fVar137;
                  *(undefined4 *)(auStack_1098 + lVar49 * 4) = 0;
                  auStack_1098._0_4_ = -(uint)(fVar55 <= fVar137) & auStack_1098._0_4_;
                  auStack_1098._4_4_ = -(uint)(fVar62 <= fVar137) & auStack_1098._4_4_;
                  auStack_1098._8_4_ = -(uint)(fVar58 <= fVar137) & auStack_1098._8_4_;
                  auStack_1098._12_4_ = -(uint)(fVar69 <= fVar137) & auStack_1098._12_4_;
                  iVar36 = movmskps((int)pRVar42,auStack_1098);
                  if (iVar36 == 0) goto LAB_0010f672;
                  auVar78._0_4_ = ~auStack_1098._0_4_ & auVar141._0_4_;
                  auVar78._4_4_ = ~auStack_1098._4_4_ & auVar141._4_4_;
                  auVar78._8_4_ = ~auStack_1098._8_4_ & auVar141._8_4_;
                  auVar78._12_4_ = ~auStack_1098._12_4_ & auVar141._12_4_;
                  auVar64._0_4_ = auStack_1098._0_4_ & (uint)fVar55;
                  auVar64._4_4_ = auStack_1098._4_4_ & (uint)fVar62;
                  auVar64._8_4_ = auStack_1098._8_4_ & (uint)fVar58;
                  auVar64._12_4_ = auStack_1098._12_4_ & (uint)fVar69;
                  auVar64 = auVar64 | auVar78;
                  auVar79._4_4_ = auVar64._0_4_;
                  auVar79._0_4_ = auVar64._4_4_;
                  auVar79._8_4_ = auVar64._12_4_;
                  auVar79._12_4_ = auVar64._8_4_;
                  auVar84 = minps(auVar79,auVar64);
                  auVar86._0_8_ = auVar84._8_8_;
                  auVar86._8_4_ = auVar84._0_4_;
                  auVar86._12_4_ = auVar84._4_4_;
                  auVar84 = minps(auVar86,auVar84);
                  auVar57._0_4_ = auStack_1098._0_4_ & -(uint)(auVar64._0_4_ == auVar84._0_4_);
                  auVar57._4_4_ = auStack_1098._4_4_ & -(uint)(auVar64._4_4_ == auVar84._4_4_);
                  auVar57._8_4_ = auStack_1098._8_4_ & -(uint)(auVar64._8_4_ == auVar84._8_4_);
                  auVar57._12_4_ = auStack_1098._12_4_ & -(uint)(auVar64._12_4_ == auVar84._12_4_);
                  iVar44 = movmskps(uVar51,auVar57);
                  if (iVar44 != 0) {
                    iVar36 = iVar44;
                  }
                  lVar49 = 0;
                  if ((long)iVar36 != 0) {
                    for (; ((ulong)(long)iVar36 >> lVar49 & 1) == 0; lVar49 = lVar49 + 1) {
                    }
                  }
                  lVar47 = *(long *)(lVar1 + 0x1e0);
                  uVar51 = *(uint *)((long)&uStack_1078 + lVar49 * 4);
                }
                uVar22 = *(undefined4 *)((long)&uStack_1088 + lVar49 * 4);
                *(uint *)(param_2 + 0x48) = uVar51;
                uVar50 = *(undefined4 *)((long)&uStack_fb8 + lVar49 * 4);
                fVar137 = afStack_fc8[lVar49];
                fVar55 = afStack_fe8[lVar49];
                *(undefined4 *)(param_2 + 0x44) = uVar22;
                *(undefined4 *)(param_2 + 0x30) = uVar50;
                uVar50 = *(undefined4 *)((long)&uStack_fa8 + lVar49 * 4);
                fVar62 = afStack_fd8[lVar49];
                auStack_11b8 = (undefined1  [8])CONCAT44(fVar137,fVar137);
                fStack_11b0 = fVar137;
                fStack_11ac = fVar137;
                *(float *)(param_2 + 0x20) = fVar137;
                auVar84._8_4_ = fVar137;
                auVar84._0_8_ = auStack_11b8;
                auVar84._12_4_ = fVar137;
                puVar25 = *(undefined4 **)(param_3 + 8);
                *(undefined4 *)(param_2 + 0x34) = uVar50;
                uVar50 = *(undefined4 *)((long)&uStack_f98 + lVar49 * 4);
                *(float *)(param_2 + 0x3c) = fVar55;
                uVar22 = *puVar25;
                *(undefined4 *)(param_2 + 0x38) = uVar50;
                *(float *)(param_2 + 0x40) = fVar62;
                *(undefined4 *)(param_2 + 0x4c) = uVar22;
              }
            }
LAB_0010f672:
            puVar38 = puVar38 + 0x14;
            if (local_11c8 + 1 == uVar40 - 8) goto joined_r0x0010ef23;
            fVar137 = *(float *)(param_2 + 0x1c);
            _auStack_1208 = auVar56;
            _auStack_11f8 = auVar91;
          } while( true );
        }
        auVar84._4_4_ = auStack_11b8._4_4_;
        auVar84._0_4_ = auStack_11b8._4_4_;
        auVar84._8_4_ = auStack_11b8._4_4_;
        auVar84._12_4_ = auStack_11b8._4_4_;
      }
      goto joined_r0x0010ef23;
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int iVar36;
  long lVar37;
  code *pcVar38;
  float *pfVar39;
  ulong *puVar40;
  long lVar41;
  byte *pbVar42;
  ulong uVar43;
  undefined4 uVar44;
  ulong uVar45;
  uint *puVar46;
  long in_FS_OFFSET;
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
  uint uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar84;
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  float fVar91;
  float fVar96;
  float fVar97;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar101;
  float fVar102;
  undefined1 auVar100 [16];
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
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar127;
  float fVar128;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
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
     (fVar76 = *(float *)(param_2 + 0x20), 0.0 <= fVar76)) {
    fVar60 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar60 < 0.0) {
      fVar60 = 0.0;
    }
    fVar30 = *(float *)param_2;
    fVar31 = *(float *)(param_2 + 4);
    fVar32 = *(float *)(param_2 + 8);
    puVar40 = local_7e0;
    uVar47 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar48 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _UNK_001151d4);
    uVar52 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _UNK_001151d8);
    uVar56 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _UNK_001151dc);
    auVar151._4_4_ = _LC7;
    auVar151._0_4_ = _LC7;
    auVar151._8_4_ = _LC7;
    auVar151._12_4_ = _LC7;
    auVar129._0_4_ = uVar47 & (uint)_LC5;
    auVar129._4_4_ = uVar48 & (uint)_UNK_001151d4;
    auVar129._8_4_ = uVar52 & (uint)_UNK_001151d8;
    auVar129._12_4_ = uVar56 & (uint)_UNK_001151dc;
    auVar150._0_4_ = ~uVar47 & *(uint *)(param_2 + 0x10);
    auVar150._4_4_ = ~uVar48 & *(uint *)(param_2 + 0x14);
    auVar150._8_4_ = ~uVar52 & *(uint *)(param_2 + 0x18);
    auVar150._12_4_ = ~uVar56 & *(uint *)(param_2 + 0x1c);
    auVar129 = divps(auVar151,auVar129 | auVar150);
    fVar74 = _LC12 * auVar129._0_4_;
    fVar79 = _LC12 * auVar129._4_4_;
    fVar81 = _LC12 * auVar129._8_4_;
    fVar127 = auVar129._0_4_ * _LC14;
    fVar131 = auVar129._4_4_ * _LC14;
    fVar133 = auVar129._8_4_ * _LC14;
    auVar130._4_4_ = fVar60;
    auVar130._0_4_ = fVar60;
    auVar100._4_4_ = fVar76;
    auVar100._0_4_ = fVar76;
    auVar130._8_4_ = fVar60;
    auVar130._12_4_ = fVar60;
    auVar100._8_4_ = fVar76;
    auVar100._12_4_ = fVar76;
    do {
      fVar76 = *(float *)(param_2 + 0x1c);
      uVar43 = puVar40[-1];
      puVar40 = puVar40 + -1;
      while( true ) {
        puVar46 = (uint *)(uVar43 & 0xfffffffffffffff0);
        uVar45 = (ulong)((uint)uVar43 & 0xf);
        if ((uVar43 & 8) != 0) break;
        pfVar1 = (float *)((long)puVar46 + (ulong)(-(uint)(fVar81 < 0.0) & 0x10) + 0x60);
        pfVar39 = (float *)((long)puVar46 + (ulong)(-(uint)(fVar79 < 0.0) & 0x10) + 0x40);
        pfVar3 = (float *)(puVar46 + (ulong)(fVar74 < 0.0) * 4 + 8);
        pfVar2 = (float *)((long)puVar46 + (-(ulong)(fVar79 < 0.0) & 0xfffffffffffffff0) + 0x50);
        auVar92._0_4_ = ((pfVar39[0x18] * fVar76 + *pfVar39) - fVar31) * fVar79;
        auVar92._4_4_ = ((pfVar39[0x19] * fVar76 + pfVar39[1]) - fVar31) * fVar79;
        auVar92._8_4_ = ((pfVar39[0x1a] * fVar76 + pfVar39[2]) - fVar31) * fVar79;
        auVar92._12_4_ = ((pfVar39[0x1b] * fVar76 + pfVar39[3]) - fVar31) * fVar79;
        auVar136._0_4_ = ((pfVar1[0x18] * fVar76 + *pfVar1) - fVar32) * fVar81;
        auVar136._4_4_ = ((pfVar1[0x19] * fVar76 + pfVar1[1]) - fVar32) * fVar81;
        auVar136._8_4_ = ((pfVar1[0x1a] * fVar76 + pfVar1[2]) - fVar32) * fVar81;
        auVar136._12_4_ = ((pfVar1[0x1b] * fVar76 + pfVar1[3]) - fVar32) * fVar81;
        auVar129 = maxps(auVar92,auVar136);
        pfVar1 = (float *)((long)puVar46 + ((ulong)(fVar74 < 0.0) * 0x10 ^ 0x10) + 0x20);
        pfVar39 = (float *)((long)puVar46 + (-(ulong)(fVar81 < 0.0) & 0xfffffffffffffff0) + 0x70);
        auVar137._0_4_ = ((pfVar3[0x18] * fVar76 + *pfVar3) - fVar30) * fVar74;
        auVar137._4_4_ = ((pfVar3[0x19] * fVar76 + pfVar3[1]) - fVar30) * fVar74;
        auVar137._8_4_ = ((pfVar3[0x1a] * fVar76 + pfVar3[2]) - fVar30) * fVar74;
        auVar137._12_4_ = ((pfVar3[0x1b] * fVar76 + pfVar3[3]) - fVar30) * fVar74;
        auVar150 = maxps(auVar130,auVar137);
        auVar151 = maxps(auVar150,auVar129);
        auVar138._0_4_ = ((pfVar39[0x18] * fVar76 + *pfVar39) - fVar32) * fVar133;
        auVar138._4_4_ = ((pfVar39[0x19] * fVar76 + pfVar39[1]) - fVar32) * fVar133;
        auVar138._8_4_ = ((pfVar39[0x1a] * fVar76 + pfVar39[2]) - fVar32) * fVar133;
        auVar138._12_4_ = ((pfVar39[0x1b] * fVar76 + pfVar39[3]) - fVar32) * fVar133;
        auVar93._0_4_ = ((pfVar2[0x18] * fVar76 + *pfVar2) - fVar31) * fVar131;
        auVar93._4_4_ = ((pfVar2[0x19] * fVar76 + pfVar2[1]) - fVar31) * fVar131;
        auVar93._8_4_ = ((pfVar2[0x1a] * fVar76 + pfVar2[2]) - fVar31) * fVar131;
        auVar93._12_4_ = ((pfVar2[0x1b] * fVar76 + pfVar2[3]) - fVar31) * fVar131;
        auVar150 = minps(auVar93,auVar138);
        auVar139._0_4_ = ((pfVar1[0x18] * fVar76 + *pfVar1) - fVar30) * fVar127;
        auVar139._4_4_ = ((pfVar1[0x19] * fVar76 + pfVar1[1]) - fVar30) * fVar127;
        auVar139._8_4_ = ((pfVar1[0x1a] * fVar76 + pfVar1[2]) - fVar30) * fVar127;
        auVar139._12_4_ = ((pfVar1[0x1b] * fVar76 + pfVar1[3]) - fVar30) * fVar127;
        auVar129 = minps(auVar100,auVar139);
        auVar129 = minps(auVar129,auVar150);
        bVar25 = auVar151._0_4_ <= auVar129._0_4_;
        bVar26 = auVar151._4_4_ <= auVar129._4_4_;
        bVar27 = auVar151._8_4_ <= auVar129._8_4_;
        bVar28 = auVar151._12_4_ <= auVar129._12_4_;
        auVar152._4_4_ = -(uint)bVar26;
        auVar152._0_4_ = -(uint)bVar25;
        auVar152._8_4_ = -(uint)bVar27;
        auVar152._12_4_ = -(uint)bVar28;
        if (uVar45 == 6) {
          auVar152._0_4_ =
               -(uint)(((float)puVar46[0x38] <= fVar76 && fVar76 < (float)puVar46[0x3c]) && bVar25);
          auVar152._4_4_ =
               -(uint)(((float)puVar46[0x39] <= fVar76 && fVar76 < (float)puVar46[0x3d]) && bVar26);
          auVar152._8_4_ =
               -(uint)(((float)puVar46[0x3a] <= fVar76 && fVar76 < (float)puVar46[0x3e]) && bVar27);
          auVar152._12_4_ =
               -(uint)(((float)puVar46[0x3b] <= fVar76 && fVar76 < (float)puVar46[0x3f]) && bVar28);
        }
        uVar44 = movmskps((int)pfVar1,auVar152);
        uVar45 = CONCAT44((int)((ulong)pfVar1 >> 0x20),uVar44);
        if (uVar45 == 0) goto LAB_00110cc8;
        lVar23 = 0;
        if (uVar45 != 0) {
          for (; (uVar45 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
          }
        }
        uVar43 = *(ulong *)(puVar46 + lVar23 * 2);
        uVar45 = uVar45 - 1 & uVar45;
        if (uVar45 != 0) {
          *puVar40 = uVar43;
          lVar23 = 0;
          if (uVar45 != 0) {
            for (; (uVar45 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
            }
          }
          uVar43 = *(ulong *)(puVar46 + lVar23 * 2);
          for (uVar45 = uVar45 - 1 & uVar45; puVar40 = puVar40 + 1, uVar45 != 0;
              uVar45 = uVar45 & uVar45 - 1) {
            *puVar40 = uVar43;
            lVar23 = 0;
            if (uVar45 != 0) {
              for (; (uVar45 >> lVar23 & 1) == 0; lVar23 = lVar23 + 1) {
              }
            }
            uVar43 = *(ulong *)(puVar46 + lVar23 * 2);
          }
        }
      }
      if (uVar45 != 8) {
        local_a18 = 0;
        do {
          lVar23 = *(long *)param_3;
          lVar41 = *(long *)(lVar23 + 0x1e0);
          lVar22 = *(long *)(lVar41 + (ulong)puVar46[0xc] * 8);
          fVar84 = ((fVar76 - *(float *)(lVar22 + 0x2c)) /
                   (*(float *)(lVar22 + 0x30) - *(float *)(lVar22 + 0x2c))) *
                   *(float *)(lVar22 + 0x28);
          fVar60 = *(float *)(lVar22 + 0x28) - _LC7;
          fVar76 = fVar84;
          if ((float)(_LC3 & (uint)fVar84) < _LC19) {
            fVar76 = (float)(~_LC3 & (uint)fVar84 |
                            (uint)((float)(int)fVar84 -
                                  (float)(-(uint)(fVar84 < (float)(int)fVar84) & (uint)_LC7)));
          }
          if (fVar60 <= fVar76) {
            fVar76 = fVar60;
          }
          if (fVar76 < 0.0) {
            local_b08 = 0x30;
            lVar37 = 0;
          }
          else {
            fVar84 = fVar84 - fVar76;
            lVar37 = (long)(int)fVar76 * 0x30;
            local_b08 = (long)((int)fVar76 + 1) * 0x30;
          }
          lVar37 = *(long *)(*(long *)(lVar22 + 0xd0) + lVar37);
          pfVar1 = (float *)(lVar37 + (ulong)*puVar46 * 4);
          uVar47 = puVar46[1];
          pfVar39 = (float *)(lVar37 + (ulong)puVar46[2] * 4);
          pfVar3 = (float *)(lVar37 + (ulong)puVar46[3] * 4);
          pfVar2 = (float *)(lVar37 + (ulong)uVar47 * 4);
          pfVar4 = (float *)(lVar37 + (ulong)puVar46[4] * 4);
          pfVar5 = (float *)(lVar37 + (ulong)puVar46[8] * 4);
          pfVar6 = (float *)(lVar37 + (ulong)puVar46[6] * 4);
          pfVar7 = (float *)(lVar37 + (ulong)puVar46[5] * 4);
          pfVar8 = (float *)(lVar37 + (ulong)puVar46[7] * 4);
          pfVar9 = (float *)(lVar37 + (ulong)puVar46[9] * 4);
          lVar22 = *(long *)(*(long *)(lVar22 + 0xd0) + local_b08);
          pfVar10 = (float *)(lVar22 + (ulong)*puVar46 * 4);
          pfVar11 = (float *)(lVar22 + (ulong)puVar46[2] * 4);
          pfVar12 = (float *)(lVar22 + (ulong)uVar47 * 4);
          pfVar13 = (float *)(lVar22 + (ulong)puVar46[3] * 4);
          pfVar14 = (float *)(lVar22 + (ulong)puVar46[4] * 4);
          pfVar15 = (float *)(lVar22 + (ulong)puVar46[6] * 4);
          pfVar16 = (float *)(lVar22 + (ulong)puVar46[7] * 4);
          pfVar17 = (float *)(lVar22 + (ulong)puVar46[5] * 4);
          pfVar18 = (float *)(lVar22 + (ulong)puVar46[10] * 4);
          pfVar19 = (float *)(lVar22 + (ulong)puVar46[0xb] * 4);
          pfVar20 = (float *)(lVar22 + (ulong)puVar46[8] * 4);
          pfVar21 = (float *)(lVar22 + (ulong)puVar46[9] * 4);
          fVar76 = *(float *)(param_2 + 0x10);
          fVar61 = _LC7 - fVar84;
          fVar83 = *(float *)param_2;
          fVar103 = *(float *)(param_2 + 4);
          fVar98 = *(float *)(param_2 + 8);
          fVar60 = *(float *)(param_2 + 0x14);
          local_8d8 = *(undefined8 *)(puVar46 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar46 + 0x12);
          fVar89 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar46 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar46 + 0xe);
          fVar121 = (pfVar10[2] * fVar84 + pfVar1[2] * fVar61) - fVar98;
          fVar124 = (pfVar12[2] * fVar84 + pfVar2[2] * fVar61) - fVar98;
          fVar125 = (pfVar11[2] * fVar84 + pfVar39[2] * fVar61) - fVar98;
          fVar126 = (pfVar13[2] * fVar84 + pfVar3[2] * fVar61) - fVar98;
          fVar149 = (pfVar10[1] * fVar84 + pfVar1[1] * fVar61) - fVar103;
          fVar153 = (pfVar12[1] * fVar84 + pfVar2[1] * fVar61) - fVar103;
          fVar154 = (pfVar11[1] * fVar84 + pfVar39[1] * fVar61) - fVar103;
          fVar155 = (pfVar13[1] * fVar84 + pfVar3[1] * fVar61) - fVar103;
          fVar128 = (*pfVar10 * fVar84 + *pfVar1 * fVar61) - fVar83;
          fVar132 = (*pfVar12 * fVar84 + *pfVar2 * fVar61) - fVar83;
          fVar134 = (*pfVar11 * fVar84 + *pfVar39 * fVar61) - fVar83;
          fVar135 = (*pfVar13 * fVar84 + *pfVar3 * fVar61) - fVar83;
          fVar104 = (pfVar14[2] * fVar84 + pfVar4[2] * fVar61) - fVar98;
          fVar105 = (pfVar17[2] * fVar84 + pfVar7[2] * fVar61) - fVar98;
          fVar106 = (pfVar15[2] * fVar84 + fStack_aa0 * fVar61) - fVar98;
          fVar107 = (pfVar16[2] * fVar84 + fStack_a9c * fVar61) - fVar98;
          fVar108 = (pfVar14[1] * fVar84 + pfVar4[1] * fVar61) - fVar103;
          fVar109 = (pfVar17[1] * fVar84 + pfVar7[1] * fVar61) - fVar103;
          fVar110 = (pfVar15[1] * fVar84 + pfVar6[1] * fVar61) - fVar103;
          fVar111 = (pfVar16[1] * fVar84 + pfVar8[1] * fVar61) - fVar103;
          fVar112 = (*pfVar14 * fVar84 + *pfVar4 * fVar61) - fVar83;
          fVar114 = (*pfVar17 * fVar84 + *pfVar7 * fVar61) - fVar83;
          fVar115 = (*pfVar15 * fVar84 + *pfVar6 * fVar61) - fVar83;
          fVar116 = (*pfVar16 * fVar84 + *pfVar8 * fVar61) - fVar83;
          auVar122._0_4_ = fVar128 - fVar112;
          auVar122._4_4_ = fVar132 - fVar114;
          auVar122._8_4_ = fVar134 - fVar115;
          auVar122._12_4_ = fVar135 - fVar116;
          fVar91 = (pfVar20[2] * fVar84 + pfVar5[2] * fVar61) - fVar98;
          fVar96 = (pfVar21[2] * fVar84 + pfVar9[2] * fVar61) - fVar98;
          fVar97 = (fStack_a60 * fVar84 + fStack_a70 * fVar61) - fVar98;
          fVar98 = (fStack_a5c * fVar84 + fStack_a6c * fVar61) - fVar98;
          fVar62 = fVar91 - fVar121;
          fVar65 = fVar96 - fVar124;
          fVar68 = fVar97 - fVar125;
          fVar71 = fVar98 - fVar126;
          fVar99 = (pfVar20[1] * fVar84 + pfVar5[1] * fVar61) - fVar103;
          fVar101 = (pfVar21[1] * fVar84 + pfVar9[1] * fVar61) - fVar103;
          fVar102 = (pfVar18[1] * fVar84 + *(float *)(lVar37 + (ulong)puVar46[10] * 4 + 4) * fVar61)
                    - fVar103;
          fVar103 = (pfVar19[1] * fVar84 + *(float *)(lVar37 + (ulong)puVar46[0xb] * 4 + 4) * fVar61
                    ) - fVar103;
          fVar156 = fVar104 - fVar91;
          fVar158 = fVar105 - fVar96;
          fStack_aa0 = fVar106 - fVar97;
          fStack_a9c = fVar107 - fVar98;
          fVar75 = (fVar84 * *pfVar20 + fVar61 * *pfVar5) - fVar83;
          fVar80 = (fVar84 * *pfVar21 + fVar61 * *pfVar9) - fVar83;
          fVar82 = (fVar84 * *pfVar18 + fVar61 * fStack_a90) - fVar83;
          fVar83 = (fVar84 * *pfVar19 + fVar61 * fStack_a8c) - fVar83;
          fVar117 = fVar121 - fVar104;
          fVar118 = fVar124 - fVar105;
          fVar119 = fVar125 - fVar106;
          fVar120 = fVar126 - fVar107;
          fVar85 = fVar149 - fVar108;
          fVar87 = fVar153 - fVar109;
          fVar88 = fVar154 - fVar110;
          fVar90 = fVar155 - fVar111;
          fVar84 = fVar99 - fVar149;
          fVar66 = fVar101 - fVar153;
          fVar69 = fVar102 - fVar154;
          fVar72 = fVar103 - fVar155;
          fVar157 = fVar108 - fVar99;
          fVar159 = fVar109 - fVar101;
          fStack_a90 = fVar110 - fVar102;
          fStack_a8c = fVar111 - fVar103;
          fVar141 = fVar112 - fVar75;
          fVar143 = fVar114 - fVar80;
          fVar145 = fVar115 - fVar82;
          fVar147 = fVar116 - fVar83;
          fVar61 = fVar75 - fVar128;
          fVar67 = fVar80 - fVar132;
          fVar70 = fVar82 - fVar134;
          fVar73 = fVar83 - fVar135;
          fVar142 = ((fVar128 + fVar75) * fVar62 - fVar61 * (fVar121 + fVar91)) * fVar60 +
                    (fVar61 * (fVar149 + fVar99) - fVar84 * (fVar128 + fVar75)) * fVar89 +
                    ((fVar121 + fVar91) * fVar84 - (fVar149 + fVar99) * fVar62) * fVar76;
          fVar144 = ((fVar132 + fVar80) * fVar65 - fVar67 * (fVar124 + fVar96)) * fVar60 +
                    (fVar67 * (fVar153 + fVar101) - fVar66 * (fVar132 + fVar80)) * fVar89 +
                    ((fVar124 + fVar96) * fVar66 - (fVar153 + fVar101) * fVar65) * fVar76;
          fVar146 = ((fVar134 + fVar82) * fVar68 - fVar70 * (fVar125 + fVar97)) * fVar60 +
                    (fVar70 * (fVar154 + fVar102) - fVar69 * (fVar134 + fVar82)) * fVar89 +
                    ((fVar125 + fVar97) * fVar69 - (fVar154 + fVar102) * fVar68) * fVar76;
          fVar148 = ((fVar135 + fVar83) * fVar71 - fVar73 * (fVar126 + fVar98)) * fVar60 +
                    (fVar73 * (fVar155 + fVar103) - fVar72 * (fVar135 + fVar83)) * fVar89 +
                    ((fVar126 + fVar98) * fVar72 - (fVar155 + fVar103) * fVar71) * fVar76;
          auVar35._4_4_ = fVar144;
          auVar35._0_4_ = fVar142;
          auVar35._8_4_ = fVar146;
          auVar35._12_4_ = fVar148;
          auVar140._0_4_ =
               ((fVar121 + fVar104) * fVar85 - (fVar149 + fVar108) * fVar117) * fVar76 +
               ((fVar128 + fVar112) * fVar117 - auVar122._0_4_ * (fVar121 + fVar104)) * fVar60 +
               (auVar122._0_4_ * (fVar149 + fVar108) - fVar85 * (fVar128 + fVar112)) * fVar89;
          auVar140._4_4_ =
               ((fVar124 + fVar105) * fVar87 - (fVar153 + fVar109) * fVar118) * fVar76 +
               ((fVar132 + fVar114) * fVar118 - auVar122._4_4_ * (fVar124 + fVar105)) * fVar60 +
               (auVar122._4_4_ * (fVar153 + fVar109) - fVar87 * (fVar132 + fVar114)) * fVar89;
          auVar140._8_4_ =
               ((fVar125 + fVar106) * fVar88 - (fVar154 + fVar110) * fVar119) * fVar76 +
               ((fVar134 + fVar115) * fVar119 - auVar122._8_4_ * (fVar125 + fVar106)) * fVar60 +
               (auVar122._8_4_ * (fVar154 + fVar110) - fVar88 * (fVar134 + fVar115)) * fVar89;
          auVar140._12_4_ =
               ((fVar126 + fVar107) * fVar90 - (fVar155 + fVar111) * fVar120) * fVar76 +
               ((fVar135 + fVar116) * fVar120 - auVar122._12_4_ * (fVar126 + fVar107)) * fVar60 +
               (auVar122._12_4_ * (fVar155 + fVar111) - fVar90 * (fVar135 + fVar116)) * fVar89;
          auVar150 = maxps(auVar35,auVar140);
          auVar94._0_4_ =
               ((fVar104 + fVar91) * fVar157 - (fVar99 + fVar108) * fVar156) * fVar76 +
               ((fVar75 + fVar112) * fVar156 - fVar141 * (fVar104 + fVar91)) * fVar60 +
               (fVar141 * (fVar99 + fVar108) - fVar157 * (fVar75 + fVar112)) * fVar89;
          auVar94._4_4_ =
               ((fVar105 + fVar96) * fVar159 - (fVar101 + fVar109) * fVar158) * fVar76 +
               ((fVar80 + fVar114) * fVar158 - fVar143 * (fVar105 + fVar96)) * fVar60 +
               (fVar143 * (fVar101 + fVar109) - fVar159 * (fVar80 + fVar114)) * fVar89;
          auVar94._8_4_ =
               ((fVar106 + fVar97) * fStack_a90 - (fVar102 + fVar110) * fStack_aa0) * fVar76 +
               ((fVar82 + fVar115) * fStack_aa0 - fVar145 * (fVar106 + fVar97)) * fVar60 +
               (fVar145 * (fVar102 + fVar110) - fStack_a90 * (fVar82 + fVar115)) * fVar89;
          auVar94._12_4_ =
               ((fVar107 + fVar98) * fStack_a8c - (fVar103 + fVar111) * fStack_a9c) * fVar76 +
               ((fVar83 + fVar116) * fStack_a9c - fVar147 * (fVar107 + fVar98)) * fVar60 +
               (fVar147 * (fVar103 + fVar111) - fStack_a8c * (fVar83 + fVar116)) * fVar89;
          auVar129 = minps(auVar35,auVar140);
          auVar113._0_4_ = fVar142 + auVar140._0_4_ + auVar94._0_4_;
          auVar113._4_4_ = fVar144 + auVar140._4_4_ + auVar94._4_4_;
          auVar113._8_4_ = fVar146 + auVar140._8_4_ + auVar94._8_4_;
          auVar113._12_4_ = fVar148 + auVar140._12_4_ + auVar94._12_4_;
          auVar150 = maxps(auVar150,auVar94);
          auVar129 = minps(auVar129,auVar94);
          fVar83 = __LC15 * (float)(_LC3 & (uint)auVar113._0_4_);
          fVar103 = _UNK_00115204 * (float)(_UNK_001151c4 & (uint)auVar113._4_4_);
          fVar98 = _UNK_00115208 * (float)(_UNK_001151c8 & (uint)auVar113._8_4_);
          fVar75 = _UNK_0011520c * (float)(_UNK_001151cc & (uint)auVar113._12_4_);
          auVar77._0_4_ =
               _DAT_00116108 &
               -(uint)((float)((uint)fVar83 ^ _LC9) <= auVar129._0_4_ || auVar150._0_4_ <= fVar83);
          auVar77._4_4_ =
               uRam000000000011610c &
               -(uint)((float)((uint)fVar103 ^ _UNK_001151f4) <= auVar129._4_4_ ||
                      auVar150._4_4_ <= fVar103);
          auVar77._8_4_ =
               uRam0000000000116110 &
               -(uint)((float)((uint)fVar98 ^ _UNK_001151f8) <= auVar129._8_4_ ||
                      auVar150._8_4_ <= fVar98);
          auVar77._12_4_ =
               uRam0000000000116114 &
               -(uint)((float)((uint)fVar75 ^ _UNK_001151fc) <= auVar129._12_4_ ||
                      auVar150._12_4_ <= fVar75);
          iVar36 = movmskps((int)lVar22,auVar77);
          if (iVar36 != 0) {
            uVar48 = -(uint)((float)(_LC3 & (uint)(fVar62 * fVar85)) <
                            (float)(_LC3 & (uint)(fVar157 * fVar117)));
            uVar49 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar65 * fVar87)) <
                            (float)(_UNK_001151c4 & (uint)(fVar159 * fVar118)));
            uVar53 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar68 * fVar88)) <
                            (float)(_UNK_001151c8 & (uint)(fStack_a90 * fVar119)));
            uVar57 = -(uint)((float)(_UNK_001151cc & (uint)(fVar71 * fVar90)) <
                            (float)(_UNK_001151cc & (uint)(fStack_a8c * fVar120)));
            uVar52 = -(uint)((float)(_LC3 & (uint)(fVar61 * fVar117)) <
                            (float)(_LC3 & (uint)(fVar156 * auVar122._0_4_)));
            uVar50 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar67 * fVar118)) <
                            (float)(_UNK_001151c4 & (uint)(fVar158 * auVar122._4_4_)));
            uVar54 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar70 * fVar119)) <
                            (float)(_UNK_001151c8 & (uint)(fStack_aa0 * auVar122._8_4_)));
            uVar58 = -(uint)((float)(_UNK_001151cc & (uint)(fVar73 * fVar120)) <
                            (float)(_UNK_001151cc & (uint)(fStack_a9c * auVar122._12_4_)));
            uVar56 = -(uint)((float)(_LC3 & (uint)(fVar84 * auVar122._0_4_)) <
                            (float)(_LC3 & (uint)(fVar85 * fVar141)));
            uVar51 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar66 * auVar122._4_4_)) <
                            (float)(_UNK_001151c4 & (uint)(fVar87 * fVar143)));
            uVar55 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar69 * auVar122._8_4_)) <
                            (float)(_UNK_001151c8 & (uint)(fVar88 * fVar145)));
            uVar59 = -(uint)((float)(_UNK_001151cc & (uint)(fVar72 * auVar122._12_4_)) <
                            (float)(_UNK_001151cc & (uint)(fVar90 * fVar147)));
            auVar63._0_4_ = ~uVar56 & (uint)(fVar157 * auVar122._0_4_ - fVar85 * fVar141);
            auVar63._4_4_ = ~uVar51 & (uint)(fVar159 * auVar122._4_4_ - fVar87 * fVar143);
            auVar63._8_4_ = ~uVar55 & (uint)(fStack_a90 * auVar122._8_4_ - fVar88 * fVar145);
            auVar63._12_4_ = ~uVar59 & (uint)(fStack_a8c * auVar122._12_4_ - fVar90 * fVar147);
            auVar95._0_4_ = uVar56 & (uint)(fVar61 * fVar85 - fVar84 * auVar122._0_4_);
            auVar95._4_4_ = uVar51 & (uint)(fVar67 * fVar87 - fVar66 * auVar122._4_4_);
            auVar95._8_4_ = uVar55 & (uint)(fVar70 * fVar88 - fVar69 * auVar122._8_4_);
            auVar95._12_4_ = uVar59 & (uint)(fVar73 * fVar90 - fVar72 * auVar122._12_4_);
            auVar95 = auVar95 | auVar63;
            fVar103 = (float)(uVar52 & (uint)(fVar62 * auVar122._0_4_ - fVar61 * fVar117) |
                             ~uVar52 & (uint)(fVar141 * fVar117 - fVar156 * auVar122._0_4_));
            fVar98 = (float)(uVar50 & (uint)(fVar65 * auVar122._4_4_ - fVar67 * fVar118) |
                            ~uVar50 & (uint)(fVar143 * fVar118 - fVar158 * auVar122._4_4_));
            fVar61 = (float)(uVar54 & (uint)(fVar68 * auVar122._8_4_ - fVar70 * fVar119) |
                            ~uVar54 & (uint)(fVar145 * fVar119 - fStack_aa0 * auVar122._8_4_));
            fVar67 = (float)(uVar58 & (uint)(fVar71 * auVar122._12_4_ - fVar73 * fVar120) |
                            ~uVar58 & (uint)(fVar147 * fVar120 - fStack_a9c * auVar122._12_4_));
            fVar62 = (float)(uVar48 & (uint)(fVar84 * fVar117 - fVar62 * fVar85) |
                            ~uVar48 & (uint)(fVar85 * fVar156 - fVar157 * fVar117));
            fVar65 = (float)(uVar49 & (uint)(fVar66 * fVar118 - fVar65 * fVar87) |
                            ~uVar49 & (uint)(fVar87 * fVar158 - fVar159 * fVar118));
            fVar66 = (float)(uVar53 & (uint)(fVar69 * fVar119 - fVar68 * fVar88) |
                            ~uVar53 & (uint)(fVar88 * fStack_aa0 - fStack_a90 * fVar119));
            fVar68 = (float)(uVar57 & (uint)(fVar72 * fVar120 - fVar71 * fVar90) |
                            ~uVar57 & (uint)(fVar90 * fStack_a9c - fStack_a8c * fVar120));
            fVar69 = fVar60 * fVar103 + fVar89 * auVar95._0_4_ + fVar76 * fVar62;
            fVar70 = fVar60 * fVar98 + fVar89 * auVar95._4_4_ + fVar76 * fVar65;
            fVar71 = fVar60 * fVar61 + fVar89 * auVar95._8_4_ + fVar76 * fVar66;
            fVar72 = fVar60 * fVar67 + fVar89 * auVar95._12_4_ + fVar76 * fVar68;
            fVar69 = fVar69 + fVar69;
            fVar70 = fVar70 + fVar70;
            fVar71 = fVar71 + fVar71;
            fVar72 = fVar72 + fVar72;
            auVar29._4_4_ = fVar70;
            auVar29._0_4_ = fVar69;
            auVar29._8_4_ = fVar71;
            auVar29._12_4_ = fVar72;
            auVar129 = rcpps(auVar122,auVar29);
            fVar60 = fVar149 * fVar103 + fVar121 * auVar95._0_4_ + fVar128 * fVar62;
            fVar84 = fVar153 * fVar98 + fVar124 * auVar95._4_4_ + fVar132 * fVar65;
            fVar89 = fVar154 * fVar61 + fVar125 * auVar95._8_4_ + fVar134 * fVar66;
            fVar83 = fVar155 * fVar67 + fVar126 * auVar95._12_4_ + fVar135 * fVar68;
            fVar73 = auVar129._0_4_;
            fVar75 = auVar129._4_4_;
            fVar80 = auVar129._8_4_;
            fVar82 = auVar129._12_4_;
            fVar76 = *(float *)(param_2 + 0x20);
            auVar86._0_4_ = (fVar60 + fVar60) * ((_LC7 - fVar69 * fVar73) * fVar73 + fVar73);
            auVar86._4_4_ = (fVar84 + fVar84) * ((_LC7 - fVar70 * fVar75) * fVar75 + fVar75);
            auVar86._8_4_ = (fVar89 + fVar89) * ((_LC7 - fVar71 * fVar80) * fVar80 + fVar80);
            auVar86._12_4_ = (fVar83 + fVar83) * ((_LC7 - fVar72 * fVar82) * fVar82 + fVar82);
            fVar60 = *(float *)(param_2 + 0xc);
            auVar123._0_4_ =
                 -(uint)(auVar86._0_4_ <= fVar76 && fVar60 <= auVar86._0_4_) & auVar77._0_4_ &
                 -(uint)(fVar69 != 0.0);
            auVar123._4_4_ =
                 -(uint)(auVar86._4_4_ <= fVar76 && fVar60 <= auVar86._4_4_) & auVar77._4_4_ &
                 -(uint)(fVar70 != 0.0);
            auVar123._8_4_ =
                 -(uint)(auVar86._8_4_ <= fVar76 && fVar60 <= auVar86._8_4_) & auVar77._8_4_ &
                 -(uint)(fVar71 != 0.0);
            auVar123._12_4_ =
                 -(uint)(auVar86._12_4_ <= fVar76 && fVar60 <= auVar86._12_4_) & auVar77._12_4_ &
                 -(uint)(fVar72 != 0.0);
            uVar47 = movmskps(uVar47,auVar123);
            uVar43 = (ulong)uVar47;
            if (uVar47 != 0) {
              local_828 = auVar86;
              auVar129 = rcpps(auVar86,auVar113);
              local_7f8 = auVar95;
              local_818[0] = fVar62;
              local_818[1] = fVar65;
              local_818[2] = fVar66;
              local_818[3] = fVar68;
              local_808[0] = fVar103;
              local_808[1] = fVar98;
              local_808[2] = fVar61;
              local_808[3] = fVar67;
              fVar76 = auVar129._0_4_;
              fVar60 = auVar129._4_4_;
              fVar84 = auVar129._8_4_;
              fVar89 = auVar129._12_4_;
              fVar76 = (float)(~-(uint)((float)(_LC3 & (uint)auVar113._0_4_) < _LC5) &
                              (uint)((_LC7 - auVar113._0_4_ * fVar76) * fVar76 + fVar76));
              fVar60 = (float)(~-(uint)((float)(_UNK_001151c4 & (uint)auVar113._4_4_) <
                                       _UNK_001151d4) &
                              (uint)((_LC7 - auVar113._4_4_ * fVar60) * fVar60 + fVar60));
              fVar84 = (float)(~-(uint)((float)(_UNK_001151c8 & (uint)auVar113._8_4_) <
                                       _UNK_001151d8) &
                              (uint)((_LC7 - auVar113._8_4_ * fVar84) * fVar84 + fVar84));
              fVar89 = (float)(~-(uint)((float)(_UNK_001151cc & (uint)auVar113._12_4_) <
                                       _UNK_001151dc) &
                              (uint)((_LC7 - auVar113._12_4_ * fVar89) * fVar89 + fVar89));
              auVar64._0_4_ = fVar142 * fVar76;
              auVar64._4_4_ = fVar144 * fVar60;
              auVar64._8_4_ = fVar146 * fVar84;
              auVar64._12_4_ = fVar148 * fVar89;
              auVar78._0_4_ = fVar76 * auVar140._0_4_;
              auVar78._4_4_ = fVar60 * auVar140._4_4_;
              auVar78._8_4_ = fVar84 * auVar140._8_4_;
              auVar78._12_4_ = fVar89 * auVar140._12_4_;
              auVar33._4_12_ = _UNK_001151e4;
              auVar33._0_4_ = _LC7;
              local_848 = minps(auVar64,auVar33);
              auVar34._4_12_ = _UNK_001151e4;
              auVar34._0_4_ = _LC7;
              local_838 = minps(auVar78,auVar34);
              do {
                uVar24 = 0;
                if (uVar43 != 0) {
                  for (; (uVar43 >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                  }
                }
                uVar47 = *(uint *)((long)&local_8c8 + uVar24 * 4);
                lVar41 = *(long *)(lVar41 + (ulong)uVar47 * 8);
                pbVar42 = *(byte **)(param_3 + 0x10);
                pcVar38 = *(code **)(pbVar42 + 0x10);
                if ((pcVar38 == (code *)0x0) && (*(long *)(lVar41 + 0x48) == 0)) {
LAB_00110bfc:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00110c04;
                }
                puStack_8f8 = *(undefined4 **)(param_3 + 8);
                uStack_8a0 = uVar47;
                uVar44 = *(undefined4 *)(param_2 + 0x20);
                iStack_90c = -1;
                uStack_8ac = *(undefined4 *)(local_848 + uVar24 * 4);
                uStack_8b0 = *(undefined4 *)(local_7f8 + uVar24 * 4);
                fStack_8b4 = local_808[uVar24];
                uStack_89c = *puStack_8f8;
                piStack_908 = &iStack_90c;
                fStack_8b8 = local_818[uVar24];
                uStack_8a8 = *(undefined4 *)(local_838 + uVar24 * 4);
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar24 * 4);
                *(float *)(param_2 + 0x20) = local_818[uVar24 - 4];
                uStack_900 = *(undefined8 *)(lVar41 + 0x18);
                pfStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar41 + 0x48) == (code *)0x0) {
LAB_00110e43:
                  if (pcVar38 != (code *)0x0) {
                    if (((*pbVar42 & 2) != 0) || ((*(byte *)(lVar41 + 0x3e) & 0x40) != 0)) {
                      (*pcVar38)(&piStack_908);
                    }
                    if (*piStack_908 == 0) goto LAB_00110e6d;
                  }
                  goto LAB_00110bfc;
                }
                (**(code **)(lVar41 + 0x48))(&piStack_908);
                if (*piStack_908 != 0) {
                  pbVar42 = *(byte **)(param_3 + 0x10);
                  pcVar38 = *(code **)(pbVar42 + 0x10);
                  goto LAB_00110e43;
                }
LAB_00110e6d:
                uVar43 = uVar43 ^ 1L << (uVar24 & 0x3f);
                *(undefined4 *)(param_2 + 0x20) = uVar44;
                if (uVar43 == 0) break;
                lVar41 = *(long *)(lVar23 + 0x1e0);
              } while( true );
            }
          }
          local_a18 = local_a18 + 1;
          puVar46 = puVar46 + 0x14;
          fStack_a70 = fVar154;
          fStack_a6c = fVar155;
          fStack_a60 = fVar134;
          fStack_a5c = fVar135;
          if (local_a18 == uVar45 - 8) break;
          fVar76 = *(float *)(param_2 + 0x1c);
        } while( true );
      }
LAB_00110cc8:
    } while (puVar40 != &local_7e8);
  }
LAB_00110c04:
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
  float *pfVar23;
  float *pfVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  uint uVar44;
  int iVar45;
  int iVar46;
  ulong uVar47;
  uint *puVar48;
  long lVar49;
  RayHitK *pRVar50;
  ulong uVar51;
  ulong uVar52;
  byte *pbVar53;
  ulong uVar54;
  float *pfVar55;
  code *pcVar56;
  long lVar57;
  undefined4 uVar58;
  long lVar59;
  long in_FS_OFFSET;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar84;
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
  float fVar116;
  float fVar121;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar130;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar139;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar145;
  float fVar146;
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
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar166;
  float fVar167;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar168;
  undefined1 auVar165 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  float fVar200;
  float fVar201;
  float fVar202;
  int iStack_12b0;
  int iStack_12a0;
  undefined1 auStack_1288 [8];
  float fStack_1280;
  float fStack_127c;
  ulong uStack_1278;
  ulong uStack_1270;
  ulong uStack_1260;
  undefined1 auStack_1258 [8];
  undefined8 uStack_1250;
  float fStack_1220;
  float fStack_121c;
  undefined1 auStack_1218 [8];
  undefined8 uStack_1210;
  long lStack_1208;
  undefined1 local_11e8 [8];
  float fStack_11e0;
  float fStack_11dc;
  long lStack_11c8;
  undefined4 uStack_10bc;
  RayHitK *pRStack_10b8;
  undefined8 uStack_10b0;
  undefined4 *puStack_10a8;
  RayHitK *pRStack_10a0;
  uint *puStack_1098;
  undefined4 uStack_1090;
  undefined1 auStack_1088 [16];
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  uint uStack_1058;
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
  
  uVar44 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar84 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar84 < 0.0) {
      fVar84 = 0.0;
    }
    fVar97 = *(float *)(param_2 + 0xc);
    if (fVar97 < 0.0) {
      fVar97 = 0.0;
    }
    local_11e8._4_4_ = fVar84;
    local_11e8._0_4_ = fVar84;
    fStack_11e0 = fVar84;
    fStack_11dc = fVar84;
    auVar131._4_4_ = _LC7;
    auVar131._0_4_ = _LC7;
    fVar84 = *(float *)param_2;
    fVar37 = *(float *)(param_2 + 4);
    fVar38 = *(float *)(param_2 + 8);
    uVar60 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar61 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001151d4);
    uVar65 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001151d8);
    uVar69 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001151dc);
    auVar108._0_4_ = uVar60 & (uint)_LC5;
    auVar108._4_4_ = uVar61 & (uint)_UNK_001151d4;
    auVar108._8_4_ = uVar65 & (uint)_UNK_001151d8;
    auVar108._12_4_ = uVar69 & (uint)_UNK_001151dc;
    auVar183._0_4_ = ~uVar60 & *(uint *)(param_2 + 0x10);
    auVar183._4_4_ = ~uVar61 & *(uint *)(param_2 + 0x14);
    auVar183._8_4_ = ~uVar65 & *(uint *)(param_2 + 0x18);
    auVar183._12_4_ = ~uVar69 & *(uint *)(param_2 + 0x1c);
    auVar131._8_4_ = _LC7;
    auVar131._12_4_ = _LC7;
    auVar108 = divps(auVar131,auVar108 | auVar183);
    fVar73 = _LC12 * auVar108._0_4_;
    fVar79 = _LC12 * auVar108._4_4_;
    fVar81 = _LC12 * auVar108._8_4_;
    fVar103 = auVar108._0_4_ * _LC14;
    fVar116 = auVar108._4_4_ * _LC14;
    fVar121 = auVar108._8_4_ * _LC14;
    uVar47 = (ulong)(fVar73 < 0.0) * 0x10;
    auVar109._4_4_ = fVar97;
    auVar109._0_4_ = fVar97;
    auVar109._8_4_ = fVar97;
    auVar109._12_4_ = fVar97;
    pauVar42 = (undefined1 (*) [16])local_f78;
joined_r0x001110fb:
    pauVar43 = pauVar42;
    if (pauVar43 != (undefined1 (*) [16])local_f88) {
      fVar97 = *(float *)(param_2 + 0x20);
      pauVar42 = pauVar43 + -1;
      if (*(float *)(pauVar43[-1] + 8) <= fVar97) {
        fVar75 = *(float *)(param_2 + 0x1c);
        uVar51 = *(ulong *)pauVar43[-1];
        while ((uVar51 & 8) == 0) {
          uVar52 = uVar51 & 0xfffffffffffffff0;
          lVar1 = uVar52 + 0x20;
          pfVar2 = (float *)(lVar1 + (ulong)(-(uint)(fVar81 < 0.0) & 0x10) + 0x40);
          pfVar55 = (float *)(lVar1 + (ulong)(-(uint)(fVar79 < 0.0) & 0x10) + 0x20);
          pfVar3 = (float *)(lVar1 + uVar47);
          pfVar4 = (float *)(lVar1 + (-(ulong)(fVar79 < 0.0) & 0xfffffffffffffff0) + 0x30);
          auVar162._0_4_ = ((pfVar55[0x18] * fVar75 + *pfVar55) - fVar37) * fVar79;
          auVar162._4_4_ = ((pfVar55[0x19] * fVar75 + pfVar55[1]) - fVar37) * fVar79;
          auVar162._8_4_ = ((pfVar55[0x1a] * fVar75 + pfVar55[2]) - fVar37) * fVar79;
          auVar162._12_4_ = ((pfVar55[0x1b] * fVar75 + pfVar55[3]) - fVar37) * fVar79;
          auVar173._0_4_ = ((pfVar2[0x18] * fVar75 + *pfVar2) - fVar38) * fVar81;
          auVar173._4_4_ = ((pfVar2[0x19] * fVar75 + pfVar2[1]) - fVar38) * fVar81;
          auVar173._8_4_ = ((pfVar2[0x1a] * fVar75 + pfVar2[2]) - fVar38) * fVar81;
          auVar173._12_4_ = ((pfVar2[0x1b] * fVar75 + pfVar2[3]) - fVar38) * fVar81;
          auVar108 = maxps(auVar162,auVar173);
          pfVar2 = (float *)(lVar1 + (uVar47 ^ 0x10));
          pfVar55 = (float *)(lVar1 + (-(ulong)(fVar81 < 0.0) & 0xfffffffffffffff0) + 0x50);
          auVar174._0_4_ = ((pfVar3[0x18] * fVar75 + *pfVar3) - fVar84) * fVar73;
          auVar174._4_4_ = ((pfVar3[0x19] * fVar75 + pfVar3[1]) - fVar84) * fVar73;
          auVar174._8_4_ = ((pfVar3[0x1a] * fVar75 + pfVar3[2]) - fVar84) * fVar73;
          auVar174._12_4_ = ((pfVar3[0x1b] * fVar75 + pfVar3[3]) - fVar84) * fVar73;
          auVar183 = maxps(auVar109,auVar174);
          local_1038[0] = maxps(auVar183,auVar108);
          auVar175._0_4_ = ((pfVar55[0x18] * fVar75 + *pfVar55) - fVar38) * fVar121;
          auVar175._4_4_ = ((pfVar55[0x19] * fVar75 + pfVar55[1]) - fVar38) * fVar121;
          auVar175._8_4_ = ((pfVar55[0x1a] * fVar75 + pfVar55[2]) - fVar38) * fVar121;
          auVar175._12_4_ = ((pfVar55[0x1b] * fVar75 + pfVar55[3]) - fVar38) * fVar121;
          auVar163._0_4_ = ((pfVar4[0x18] * fVar75 + *pfVar4) - fVar37) * fVar116;
          auVar163._4_4_ = ((pfVar4[0x19] * fVar75 + pfVar4[1]) - fVar37) * fVar116;
          auVar163._8_4_ = ((pfVar4[0x1a] * fVar75 + pfVar4[2]) - fVar37) * fVar116;
          auVar163._12_4_ = ((pfVar4[0x1b] * fVar75 + pfVar4[3]) - fVar37) * fVar116;
          auVar108 = minps(auVar163,auVar175);
          auVar176._0_4_ = ((pfVar2[0x18] * fVar75 + *pfVar2) - fVar84) * fVar103;
          auVar176._4_4_ = ((pfVar2[0x19] * fVar75 + pfVar2[1]) - fVar84) * fVar103;
          auVar176._8_4_ = ((pfVar2[0x1a] * fVar75 + pfVar2[2]) - fVar84) * fVar103;
          auVar176._12_4_ = ((pfVar2[0x1b] * fVar75 + pfVar2[3]) - fVar84) * fVar103;
          auVar183 = minps(_local_11e8,auVar176);
          auVar108 = minps(auVar183,auVar108);
          bVar31 = SUB164(local_1038[0],0) <= auVar108._0_4_;
          bVar32 = SUB164(local_1038[0],4) <= auVar108._4_4_;
          bVar33 = SUB164(local_1038[0],8) <= auVar108._8_4_;
          bVar34 = SUB164(local_1038[0],0xc) <= auVar108._12_4_;
          auVar164._4_4_ = -(uint)bVar32;
          auVar164._0_4_ = -(uint)bVar31;
          auVar164._8_4_ = -(uint)bVar33;
          auVar164._12_4_ = -(uint)bVar34;
          if (((uint)uVar51 & 0xf) == 6) {
            auVar164._0_4_ =
                 -(uint)((*(float *)(uVar52 + 0xe0) <= fVar75 && fVar75 < *(float *)(uVar52 + 0xf0))
                        && bVar31);
            auVar164._4_4_ =
                 -(uint)((*(float *)(uVar52 + 0xe4) <= fVar75 && fVar75 < *(float *)(uVar52 + 0xf4))
                        && bVar32);
            auVar164._8_4_ =
                 -(uint)((*(float *)(uVar52 + 0xe8) <= fVar75 && fVar75 < *(float *)(uVar52 + 0xf8))
                        && bVar33);
            auVar164._12_4_ =
                 -(uint)((*(float *)(uVar52 + 0xec) <= fVar75 && fVar75 < *(float *)(uVar52 + 0xfc))
                        && bVar34);
          }
          uVar58 = movmskps((int)pfVar2,auVar164);
          uVar54 = CONCAT44((int)((ulong)pfVar2 >> 0x20),uVar58);
          if (uVar54 == 0) goto joined_r0x001110fb;
          lVar1 = 0;
          if (uVar54 != 0) {
            for (; (uVar54 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
            }
          }
          uVar28 = *(ulong *)(uVar52 + lVar1 * 8);
          uVar54 = uVar54 - 1 & uVar54;
          uVar51 = uVar28;
          if (uVar54 != 0) {
            uVar60 = *(uint *)(local_1038[0] + lVar1 * 4);
            lVar1 = 0;
            if (uVar54 != 0) {
              for (; (uVar54 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
              }
            }
            uVar51 = *(ulong *)(uVar52 + lVar1 * 8);
            uVar61 = *(uint *)(local_1038[0] + lVar1 * 4);
            uVar54 = uVar54 & uVar54 - 1;
            if (uVar54 == 0) {
              if (uVar60 < uVar61) {
                *(ulong *)*pauVar42 = uVar51;
                *(uint *)(*pauVar42 + 8) = uVar61;
                pauVar42 = pauVar42 + 1;
                uVar51 = uVar28;
              }
              else {
                *(ulong *)*pauVar42 = uVar28;
                *(uint *)(*pauVar42 + 8) = uVar60;
                pauVar42 = pauVar42 + 1;
              }
            }
            else {
              lVar1 = 0;
              if (uVar54 != 0) {
                for (; (uVar54 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                }
              }
              uVar30 = *(ulong *)(uVar52 + lVar1 * 8);
              auVar171._8_4_ = uVar60;
              auVar171._0_8_ = uVar28;
              auVar171._12_4_ = 0;
              iVar45 = *(int *)(local_1038[0] + lVar1 * 4);
              auVar188._8_4_ = uVar61;
              auVar188._0_8_ = uVar51;
              auVar188._12_4_ = 0;
              auVar165._8_4_ = iVar45;
              auVar165._0_8_ = uVar30;
              auVar165._12_4_ = 0;
              auVar178._8_4_ = -(uint)((int)uVar60 < (int)uVar61);
              uVar54 = uVar54 - 1 & uVar54;
              if (uVar54 == 0) {
                auVar178._4_4_ = auVar178._8_4_;
                auVar178._0_4_ = auVar178._8_4_;
                auVar178._12_4_ = auVar178._8_4_;
                auVar131 = ~auVar178 & auVar188 | auVar171 & auVar178;
                auVar183 = auVar178 & auVar188 | ~auVar178 & auVar171;
                auVar184._8_4_ = -(uint)(auVar131._8_4_ < iVar45);
                auVar184._0_8_ = CONCAT44(auVar184._8_4_,auVar184._8_4_);
                auVar184._12_4_ = auVar184._8_4_;
                auVar108 = auVar165 & auVar184 | ~auVar184 & auVar131;
                iStack_12b0 = auVar183._8_4_;
                auVar189._8_4_ = -(uint)(iStack_12b0 < auVar108._8_4_);
                auVar189._4_4_ = auVar189._8_4_;
                auVar189._0_4_ = auVar189._8_4_;
                auVar189._12_4_ = auVar189._8_4_;
                *pauVar42 = auVar108 & auVar189 | ~auVar189 & auVar183;
                uVar51 = ~auVar184._0_8_ & uVar30 | auVar131._0_8_ & auVar184._0_8_;
                pauVar42[1] = auVar183 & auVar189 | ~auVar189 & auVar108;
                pauVar42 = pauVar42 + 2;
              }
              else {
                lVar1 = 0;
                if (uVar54 != 0) {
                  for (; (uVar54 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                  }
                }
                auVar179._4_4_ = auVar178._8_4_;
                auVar179._0_4_ = auVar178._8_4_;
                auVar179._8_4_ = auVar178._8_4_;
                auVar179._12_4_ = auVar178._8_4_;
                auVar172._8_4_ = *(int *)(local_1038[0] + lVar1 * 4);
                auVar172._0_8_ = *(undefined8 *)(uVar52 + lVar1 * 8);
                auVar172._12_4_ = 0;
                auVar185 = ~auVar179 & auVar188 | auVar171 & auVar179;
                auVar183 = auVar179 & auVar188 | ~auVar179 & auVar171;
                auVar180._8_4_ = -(uint)(iVar45 < *(int *)(local_1038[0] + lVar1 * 4));
                auVar180._4_4_ = auVar180._8_4_;
                auVar180._0_4_ = auVar180._8_4_;
                auVar180._12_4_ = auVar180._8_4_;
                auVar108 = auVar165 & auVar180 | ~auVar180 & auVar172;
                auVar181 = auVar172 & auVar180 | ~auVar180 & auVar165;
                auVar186._8_4_ = -(uint)(auVar183._8_4_ < auVar181._8_4_);
                auVar186._0_8_ = CONCAT44(auVar186._8_4_,auVar186._8_4_);
                auVar186._12_4_ = auVar186._8_4_;
                auVar131 = auVar183 & auVar186 | ~auVar186 & auVar181;
                _auStack_1258 = ~auVar186 & auVar183;
                auVar190._8_4_ = -(uint)(auVar185._8_4_ < auVar108._8_4_);
                auVar190._0_8_ = CONCAT44(auVar190._8_4_,auVar190._8_4_);
                auVar190._12_4_ = auVar190._8_4_;
                auVar183 = auVar108 & auVar190 | ~auVar190 & auVar185;
                iStack_12a0 = auVar183._8_4_;
                iVar45 = -(uint)(iStack_12a0 < auVar131._8_4_);
                auVar182._4_4_ = iVar45;
                auVar182._0_4_ = iVar45;
                auVar182._8_4_ = iVar45;
                auVar182._12_4_ = iVar45;
                _auStack_1288 = ~auVar182 & auVar131;
                uStack_1278 = auVar181._0_8_;
                uStack_1270 = auVar181._8_8_;
                uStack_1260 = auVar186._8_8_;
                *(ulong *)*pauVar42 = uStack_1278 & auVar186._0_8_ | (ulong)auStack_1258;
                *(ulong *)(*pauVar42 + 8) = uStack_1270 & uStack_1260 | uStack_1250;
                pauVar42[1] = auVar131 & auVar182 | ~auVar182 & auVar183;
                pauVar42[2] = auVar183 & auVar182 | _auStack_1288;
                uVar51 = ~auVar190._0_8_ & auVar108._0_8_ | auVar185._0_8_ & auVar190._0_8_;
                pauVar42 = pauVar42 + 3;
              }
            }
          }
        }
        puVar48 = (uint *)(uVar51 & 0xfffffffffffffff0);
        uVar51 = (ulong)((uint)uVar51 & 0xf);
        if (uVar51 != 8) {
          lStack_11c8 = 0;
          auVar41._4_8_ = uStack_1210;
          auVar41._0_4_ = fVar97;
          auStack_1218 = (undefined1  [8])(auVar41._0_8_ << 0x20);
          uStack_1210._0_4_ = fVar97;
          uStack_1210._4_4_ = fVar97;
          do {
            auVar108 = _auStack_1218;
            lVar1 = *(long *)param_3;
            lVar57 = *(long *)(lVar1 + 0x1e0);
            lVar59 = *(long *)(lVar57 + (ulong)puVar48[0xc] * 8);
            fVar98 = ((fVar75 - *(float *)(lVar59 + 0x2c)) /
                     (*(float *)(lVar59 + 0x30) - *(float *)(lVar59 + 0x2c))) *
                     *(float *)(lVar59 + 0x28);
            fVar75 = *(float *)(lVar59 + 0x28) - _LC7;
            fVar97 = fVar98;
            if ((float)(_LC3 & (uint)fVar98) < _LC19) {
              fVar97 = (float)(~_LC3 & (uint)fVar98 |
                              (uint)((float)(int)fVar98 -
                                    (float)(-(uint)(fVar98 < (float)(int)fVar98) & (uint)_LC7)));
            }
            if (fVar75 <= fVar97) {
              fVar97 = fVar75;
            }
            if (0.0 <= fVar97) {
              fVar98 = fVar98 - fVar97;
              lVar49 = (long)(int)fVar97 * 0x30;
              lStack_1208 = (long)((int)fVar97 + 1) * 0x30;
            }
            else {
              lStack_1208 = 0x30;
              lVar49 = 0;
            }
            lVar49 = *(long *)(*(long *)(lVar59 + 0xd0) + lVar49);
            uVar60 = puVar48[1];
            pfVar2 = (float *)(lVar49 + (ulong)*puVar48 * 4);
            pfVar55 = (float *)(lVar49 + (ulong)puVar48[3] * 4);
            pfVar3 = (float *)(lVar49 + (ulong)puVar48[4] * 4);
            pfVar4 = (float *)(lVar49 + (ulong)puVar48[2] * 4);
            pfVar5 = (float *)(lVar49 + (ulong)uVar60 * 4);
            pfVar6 = (float *)(lVar49 + (ulong)puVar48[10] * 4);
            pfVar7 = (float *)(lVar49 + (ulong)puVar48[6] * 4);
            pfVar8 = (float *)(lVar49 + (ulong)puVar48[5] * 4);
            pfVar9 = (float *)(lVar49 + (ulong)puVar48[7] * 4);
            pfVar10 = (float *)(lVar49 + (ulong)puVar48[8] * 4);
            pfVar11 = (float *)(lVar49 + (ulong)puVar48[9] * 4);
            pfVar12 = (float *)(lVar49 + (ulong)puVar48[0xb] * 4);
            lVar59 = *(long *)(*(long *)(lVar59 + 0xd0) + lStack_1208);
            auStack_1218._4_4_ = pfVar12[2];
            auStack_1218._0_4_ = pfVar6[2];
            auVar183 = _auStack_1218;
            pfVar13 = (float *)(lVar59 + (ulong)*puVar48 * 4);
            uStack_1078 = *(undefined8 *)(puVar48 + 0x10);
            uStack_1070 = *(undefined8 *)(puVar48 + 0x12);
            pfVar14 = (float *)(lVar59 + (ulong)uVar60 * 4);
            pfVar15 = (float *)(lVar59 + (ulong)puVar48[6] * 4);
            pfVar16 = (float *)(lVar59 + (ulong)puVar48[2] * 4);
            pfVar17 = (float *)(lVar59 + (ulong)puVar48[0xb] * 4);
            pfVar18 = (float *)(lVar59 + (ulong)puVar48[10] * 4);
            pfVar19 = (float *)(lVar59 + (ulong)puVar48[4] * 4);
            pfVar20 = (float *)(lVar59 + (ulong)puVar48[7] * 4);
            pfVar21 = (float *)(lVar59 + (ulong)puVar48[3] * 4);
            pfVar22 = (float *)(lVar59 + (ulong)puVar48[8] * 4);
            pfVar23 = (float *)(lVar59 + (ulong)puVar48[5] * 4);
            pfVar24 = (float *)(lVar59 + (ulong)puVar48[9] * 4);
            uStack_1068 = *(undefined8 *)(puVar48 + 0xc);
            uStack_1060 = *(undefined8 *)(puVar48 + 0xe);
            fVar97 = *(float *)(param_2 + 0x10);
            fVar75 = *(float *)(param_2 + 0x14);
            fVar101 = *(float *)(param_2 + 0x18);
            fVar85 = _LC7 - fVar98;
            fVar83 = *(float *)param_2;
            fVar138 = *(float *)(param_2 + 4);
            fVar129 = *(float *)(param_2 + 8);
            fVar104 = (pfVar13[2] * fVar98 + pfVar2[2] * fVar85) - fVar129;
            fVar117 = (pfVar14[2] * fVar98 + pfVar5[2] * fVar85) - fVar129;
            fVar122 = (pfVar16[2] * fVar98 + fStack_1280 * fVar85) - fVar129;
            fVar126 = (pfVar21[2] * fVar98 + fStack_127c * fVar85) - fVar129;
            fVar105 = (pfVar13[1] * fVar98 + pfVar2[1] * fVar85) - fVar138;
            fVar118 = (pfVar14[1] * fVar98 + pfVar5[1] * fVar85) - fVar138;
            fVar123 = (pfVar16[1] * fVar98 + pfVar4[1] * fVar85) - fVar138;
            fVar127 = (pfVar21[1] * fVar98 + pfVar55[1] * fVar85) - fVar138;
            fVar106 = (*pfVar13 * fVar98 + *pfVar2 * fVar85) - fVar83;
            fVar119 = (*pfVar14 * fVar98 + *pfVar5 * fVar85) - fVar83;
            fVar124 = (*pfVar16 * fVar98 + *pfVar4 * fVar85) - fVar83;
            fVar128 = (*pfVar21 * fVar98 + *pfVar55 * fVar85) - fVar83;
            fVar191 = (pfVar19[2] * fVar98 + pfVar3[2] * fVar85) - fVar129;
            fVar193 = (pfVar23[2] * fVar98 + pfVar8[2] * fVar85) - fVar129;
            fVar195 = (pfVar15[2] * fVar98 + (float)uStack_1250 * fVar85) - fVar129;
            fVar197 = (pfVar20[2] * fVar98 + uStack_1250._4_4_ * fVar85) - fVar129;
            fVar199 = fVar104 - fVar191;
            fVar200 = fVar117 - fVar193;
            fVar201 = fVar122 - fVar195;
            fVar202 = fVar126 - fVar197;
            fVar192 = (pfVar19[1] * fVar98 + pfVar3[1] * fVar85) - fVar138;
            fVar194 = (pfVar23[1] * fVar98 + pfVar8[1] * fVar85) - fVar138;
            fVar196 = (pfVar15[1] * fVar98 + pfVar7[1] * fVar85) - fVar138;
            fVar198 = (pfVar20[1] * fVar98 + pfVar9[1] * fVar85) - fVar138;
            fVar139 = (*pfVar19 * fVar98 + *pfVar3 * fVar85) - fVar83;
            fVar142 = (*pfVar23 * fVar98 + *pfVar8 * fVar85) - fVar83;
            fVar143 = (*pfVar15 * fVar98 + *pfVar7 * fVar85) - fVar83;
            fVar144 = (*pfVar20 * fVar98 + *pfVar9 * fVar85) - fVar83;
            fVar161 = fVar106 - fVar139;
            fVar166 = fVar119 - fVar142;
            fVar167 = fVar124 - fVar143;
            fVar168 = fVar128 - fVar144;
            fVar107 = (pfVar22[2] * fVar98 + pfVar10[2] * fVar85) - fVar129;
            fVar120 = (pfVar24[2] * fVar98 + pfVar11[2] * fVar85) - fVar129;
            fVar125 = (pfVar18[2] * fVar98 + fStack_1220 * fVar85) - fVar129;
            fVar129 = (pfVar17[2] * fVar98 + fStack_121c * fVar85) - fVar129;
            fVar96 = fVar105 - fVar192;
            fVar99 = fVar118 - fVar194;
            fVar100 = fVar123 - fVar196;
            fVar102 = fVar127 - fVar198;
            fVar130 = (pfVar22[1] * fVar98 + pfVar10[1] * fVar85) - fVar138;
            fVar136 = (pfVar24[1] * fVar98 + pfVar11[1] * fVar85) - fVar138;
            fVar137 = (pfVar18[1] * fVar98 + pfVar6[1] * fVar85) - fVar138;
            fVar138 = (pfVar17[1] * fVar98 + pfVar12[1] * fVar85) - fVar138;
            fVar74 = (fVar98 * *pfVar22 + fVar85 * *pfVar10) - fVar83;
            fVar80 = (fVar98 * *pfVar24 + fVar85 * *pfVar11) - fVar83;
            fVar82 = (fVar98 * *pfVar18 + fVar85 * *pfVar6) - fVar83;
            fVar83 = (fVar98 * *pfVar17 + fVar85 * *pfVar12) - fVar83;
            fVar153 = fVar107 - fVar104;
            fVar155 = fVar120 - fVar117;
            fVar157 = fVar125 - fVar122;
            fVar159 = fVar129 - fVar126;
            fVar145 = fVar191 - fVar107;
            fVar147 = fVar193 - fVar120;
            fVar149 = fVar195 - fVar125;
            fVar151 = fVar197 - fVar129;
            fVar154 = fVar130 - fVar105;
            fVar156 = fVar136 - fVar118;
            fVar158 = fVar137 - fVar123;
            fVar160 = fVar138 - fVar127;
            fVar98 = fVar74 - fVar106;
            fVar90 = fVar80 - fVar119;
            fVar92 = fVar82 - fVar124;
            fVar94 = fVar83 - fVar128;
            fVar146 = fVar192 - fVar130;
            fVar148 = fVar194 - fVar136;
            fVar150 = fVar196 - fVar137;
            fVar152 = fVar198 - fVar138;
            auStack_1258._4_4_ = fVar148;
            auStack_1258._0_4_ = fVar146;
            uStack_1250._0_4_ = fVar150;
            uStack_1250._4_4_ = fVar152;
            auStack_1288._0_4_ = fVar139 - fVar74;
            auStack_1288._4_4_ = fVar142 - fVar80;
            fStack_1280 = fVar143 - fVar82;
            fStack_127c = fVar144 - fVar83;
            fVar85 = ((fVar106 + fVar74) * fVar153 - fVar98 * (fVar104 + fVar107)) * fVar75 +
                     (fVar98 * (fVar105 + fVar130) - fVar154 * (fVar106 + fVar74)) * fVar101 +
                     ((fVar104 + fVar107) * fVar154 - (fVar105 + fVar130) * fVar153) * fVar97;
            fVar91 = ((fVar119 + fVar80) * fVar155 - fVar90 * (fVar117 + fVar120)) * fVar75 +
                     (fVar90 * (fVar118 + fVar136) - fVar156 * (fVar119 + fVar80)) * fVar101 +
                     ((fVar117 + fVar120) * fVar156 - (fVar118 + fVar136) * fVar155) * fVar97;
            fVar93 = ((fVar124 + fVar82) * fVar157 - fVar92 * (fVar122 + fVar125)) * fVar75 +
                     (fVar92 * (fVar123 + fVar137) - fVar158 * (fVar124 + fVar82)) * fVar101 +
                     ((fVar122 + fVar125) * fVar158 - (fVar123 + fVar137) * fVar157) * fVar97;
            fVar95 = ((fVar128 + fVar83) * fVar159 - fVar94 * (fVar126 + fVar129)) * fVar75 +
                     (fVar94 * (fVar127 + fVar138) - fVar160 * (fVar128 + fVar83)) * fVar101 +
                     ((fVar126 + fVar129) * fVar160 - (fVar127 + fVar138) * fVar159) * fVar97;
            auVar187._0_4_ =
                 ((fVar106 + fVar139) * fVar199 - fVar161 * (fVar104 + fVar191)) * fVar75 +
                 (fVar161 * (fVar105 + fVar192) - fVar96 * (fVar106 + fVar139)) * fVar101 +
                 ((fVar104 + fVar191) * fVar96 - (fVar105 + fVar192) * fVar199) * fVar97;
            auVar187._4_4_ =
                 ((fVar119 + fVar142) * fVar200 - fVar166 * (fVar117 + fVar193)) * fVar75 +
                 (fVar166 * (fVar118 + fVar194) - fVar99 * (fVar119 + fVar142)) * fVar101 +
                 ((fVar117 + fVar193) * fVar99 - (fVar118 + fVar194) * fVar200) * fVar97;
            auVar187._8_4_ =
                 ((fVar124 + fVar143) * fVar201 - fVar167 * (fVar122 + fVar195)) * fVar75 +
                 (fVar167 * (fVar123 + fVar196) - fVar100 * (fVar124 + fVar143)) * fVar101 +
                 ((fVar122 + fVar195) * fVar100 - (fVar123 + fVar196) * fVar201) * fVar97;
            auVar187._12_4_ =
                 ((fVar128 + fVar144) * fVar202 - fVar168 * (fVar126 + fVar197)) * fVar75 +
                 (fVar168 * (fVar127 + fVar198) - fVar102 * (fVar128 + fVar144)) * fVar101 +
                 ((fVar126 + fVar197) * fVar102 - (fVar127 + fVar198) * fVar202) * fVar97;
            auVar132._8_4_ = fVar93;
            auVar132._0_8_ = CONCAT44(fVar91,fVar85);
            auVar132._12_4_ = fVar95;
            auVar131 = maxps(auVar132,auVar187);
            auVar110._0_4_ =
                 ((fVar191 + fVar107) * fVar146 - (fVar130 + fVar192) * fVar145) * fVar97 +
                 ((fVar74 + fVar139) * fVar145 - (float)auStack_1288._0_4_ * (fVar191 + fVar107)) *
                 fVar75 + ((float)auStack_1288._0_4_ * (fVar130 + fVar192) -
                          fVar146 * (fVar74 + fVar139)) * fVar101;
            auVar110._4_4_ =
                 ((fVar193 + fVar120) * fVar148 - (fVar136 + fVar194) * fVar147) * fVar97 +
                 ((fVar80 + fVar142) * fVar147 - (float)auStack_1288._4_4_ * (fVar193 + fVar120)) *
                 fVar75 + ((float)auStack_1288._4_4_ * (fVar136 + fVar194) -
                          fVar148 * (fVar80 + fVar142)) * fVar101;
            auVar110._8_4_ =
                 ((fVar195 + fVar125) * fVar150 - (fVar137 + fVar196) * fVar149) * fVar97 +
                 ((fVar82 + fVar143) * fVar149 - fStack_1280 * (fVar195 + fVar125)) * fVar75 +
                 (fStack_1280 * (fVar137 + fVar196) - fVar150 * (fVar82 + fVar143)) * fVar101;
            auVar110._12_4_ =
                 ((fVar197 + fVar129) * fVar152 - (fVar138 + fVar198) * fVar151) * fVar97 +
                 ((fVar83 + fVar144) * fVar151 - fStack_127c * (fVar197 + fVar129)) * fVar75 +
                 (fStack_127c * (fVar138 + fVar198) - fVar152 * (fVar83 + fVar144)) * fVar101;
            auVar132 = maxps(auVar131,auVar110);
            auVar181._8_4_ = fVar93;
            auVar181._0_8_ = CONCAT44(fVar91,fVar85);
            auVar181._12_4_ = fVar95;
            fVar80 = fVar85 + auVar187._0_4_ + auVar110._0_4_;
            fVar82 = fVar91 + auVar187._4_4_ + auVar110._4_4_;
            fVar107 = fVar93 + auVar187._8_4_ + auVar110._8_4_;
            fVar120 = fVar95 + auVar187._12_4_ + auVar110._12_4_;
            auVar131 = minps(auVar181,auVar187);
            auVar131 = minps(auVar131,auVar110);
            fVar83 = __LC15 * (float)(uVar44 & (uint)fVar80);
            fVar138 = _UNK_00115204 * (float)(uVar44 & (uint)fVar82);
            fVar129 = _UNK_00115208 * (float)(uVar44 & (uint)fVar107);
            fVar74 = _UNK_0011520c * (float)(uVar44 & (uint)fVar120);
            auVar185._0_4_ =
                 -(uint)((float)((uint)fVar83 ^ _LC9) <= auVar131._0_4_ || auVar132._0_4_ <= fVar83)
                 & _DAT_00116108;
            auVar185._4_4_ =
                 -(uint)((float)((uint)fVar138 ^ _UNK_001151f4) <= auVar131._4_4_ ||
                        auVar132._4_4_ <= fVar138) & uRam000000000011610c;
            auVar185._8_4_ =
                 -(uint)((float)((uint)fVar129 ^ _UNK_001151f8) <= auVar131._8_4_ ||
                        auVar132._8_4_ <= fVar129) & uRam0000000000116110;
            auVar185._12_4_ =
                 -(uint)((float)((uint)fVar74 ^ _UNK_001151fc) <= auVar131._12_4_ ||
                        auVar132._12_4_ <= fVar74) & uRam0000000000116114;
            iVar45 = movmskps((int)lVar59,auVar185);
            _local_11e8 = _auStack_1218;
            _auStack_1218 = auVar183;
            if (iVar45 != 0) {
              auVar177._0_4_ = fVar153 * fVar96;
              auVar177._4_4_ = fVar155 * fVar99;
              auVar177._8_4_ = fVar157 * fVar100;
              auVar177._12_4_ = fVar159 * fVar102;
              uVar61 = -(uint)((float)((uint)auVar177._0_4_ & uVar44) <
                              (float)((uint)(fVar146 * fVar199) & uVar44));
              uVar62 = -(uint)((float)((uint)auVar177._4_4_ & uVar44) <
                              (float)((uint)(fVar148 * fVar200) & uVar44));
              uVar66 = -(uint)((float)((uint)auVar177._8_4_ & uVar44) <
                              (float)((uint)(fVar150 * fVar201) & uVar44));
              uVar70 = -(uint)((float)((uint)auVar177._12_4_ & uVar44) <
                              (float)((uint)(fVar152 * fVar202) & uVar44));
              uVar65 = -(uint)((float)(uVar44 & (uint)(fVar98 * fVar199)) <
                              (float)((uint)(fVar145 * fVar161) & uVar44));
              uVar63 = -(uint)((float)(uVar44 & (uint)(fVar90 * fVar200)) <
                              (float)((uint)(fVar147 * fVar166) & uVar44));
              uVar67 = -(uint)((float)(uVar44 & (uint)(fVar92 * fVar201)) <
                              (float)((uint)(fVar149 * fVar167) & uVar44));
              uVar71 = -(uint)((float)(uVar44 & (uint)(fVar94 * fVar202)) <
                              (float)((uint)(fVar151 * fVar168) & uVar44));
              uVar69 = -(uint)((float)((uint)(fVar154 * fVar161) & uVar44) <
                              (float)(uVar44 & (uint)((float)auStack_1288._0_4_ * fVar96)));
              uVar64 = -(uint)((float)((uint)(fVar156 * fVar166) & uVar44) <
                              (float)(uVar44 & (uint)((float)auStack_1288._4_4_ * fVar99)));
              uVar68 = -(uint)((float)((uint)(fVar158 * fVar167) & uVar44) <
                              (float)(uVar44 & (uint)(fStack_1280 * fVar100)));
              uVar72 = -(uint)((float)((uint)(fVar160 * fVar168) & uVar44) <
                              (float)(uVar44 & (uint)(fStack_127c * fVar102)));
              auStack_1258._0_4_ =
                   ~uVar69 & (uint)(fVar146 * fVar161 - (float)auStack_1288._0_4_ * fVar96);
              auStack_1258._4_4_ =
                   ~uVar64 & (uint)(fVar148 * fVar166 - (float)auStack_1288._4_4_ * fVar99);
              uStack_1250._0_4_ =
                   (float)(~uVar68 & (uint)(fVar150 * fVar167 - fStack_1280 * fVar100));
              uStack_1250._4_4_ =
                   (float)(~uVar72 & (uint)(fVar152 * fVar168 - fStack_127c * fVar102));
              auVar111._0_4_ = uVar69 & (uint)(fVar98 * fVar96 - fVar154 * fVar161);
              auVar111._4_4_ = uVar64 & (uint)(fVar90 * fVar99 - fVar156 * fVar166);
              auVar111._8_4_ = uVar68 & (uint)(fVar92 * fVar100 - fVar158 * fVar167);
              auVar111._12_4_ = uVar72 & (uint)(fVar94 * fVar102 - fVar160 * fVar168);
              auVar111 = auVar111 | _auStack_1258;
              auVar169._0_4_ =
                   ~uVar65 & (uint)((float)auStack_1288._0_4_ * fVar199 - fVar145 * fVar161);
              auVar169._4_4_ =
                   ~uVar63 & (uint)((float)auStack_1288._4_4_ * fVar200 - fVar147 * fVar166);
              auVar169._8_4_ = ~uVar67 & (uint)(fStack_1280 * fVar201 - fVar149 * fVar167);
              auVar169._12_4_ = ~uVar71 & (uint)(fStack_127c * fVar202 - fVar151 * fVar168);
              auVar133._0_4_ = uVar65 & (uint)(fVar153 * fVar161 - fVar98 * fVar199);
              auVar133._4_4_ = uVar63 & (uint)(fVar155 * fVar166 - fVar90 * fVar200);
              auVar133._8_4_ = uVar67 & (uint)(fVar157 * fVar167 - fVar92 * fVar201);
              auVar133._12_4_ = uVar71 & (uint)(fVar159 * fVar168 - fVar94 * fVar202);
              auVar133 = auVar133 | auVar169;
              auVar170._0_4_ = ~uVar61 & (uint)(fVar96 * fVar145 - fVar146 * fVar199);
              auVar170._4_4_ = ~uVar62 & (uint)(fVar99 * fVar147 - fVar148 * fVar200);
              auVar170._8_4_ = ~uVar66 & (uint)(fVar100 * fVar149 - fVar150 * fVar201);
              auVar170._12_4_ = ~uVar70 & (uint)(fVar102 * fVar151 - fVar152 * fVar202);
              auVar140._0_4_ = uVar61 & (uint)(fVar154 * fVar199 - auVar177._0_4_);
              auVar140._4_4_ = uVar62 & (uint)(fVar156 * fVar200 - auVar177._4_4_);
              auVar140._8_4_ = uVar66 & (uint)(fVar158 * fVar201 - auVar177._8_4_);
              auVar140._12_4_ = uVar70 & (uint)(fVar160 * fVar202 - auVar177._12_4_);
              auVar140 = auVar140 | auVar170;
              fVar138 = fVar75 * auVar133._0_4_ + fVar101 * auVar111._0_4_ + fVar97 * auVar140._0_4_
              ;
              fVar129 = fVar75 * auVar133._4_4_ + fVar101 * auVar111._4_4_ + fVar97 * auVar140._4_4_
              ;
              fVar74 = fVar75 * auVar133._8_4_ + fVar101 * auVar111._8_4_ + fVar97 * auVar140._8_4_;
              fVar90 = fVar75 * auVar133._12_4_ + fVar101 * auVar111._12_4_ +
                       fVar97 * auVar140._12_4_;
              fVar138 = fVar138 + fVar138;
              fVar129 = fVar129 + fVar129;
              fVar74 = fVar74 + fVar74;
              fVar90 = fVar90 + fVar90;
              auVar35._4_4_ = fVar129;
              auVar35._0_4_ = fVar138;
              auVar35._8_4_ = fVar74;
              auVar35._12_4_ = fVar90;
              auVar183 = rcpps(auVar177,auVar35);
              fVar75 = auVar183._0_4_;
              fVar92 = auVar183._4_4_;
              fVar94 = auVar183._8_4_;
              fVar96 = auVar183._12_4_;
              fVar97 = fVar104 * auVar111._0_4_ + fVar105 * auVar133._0_4_ +
                       fVar106 * auVar140._0_4_;
              fVar98 = fVar117 * auVar111._4_4_ + fVar118 * auVar133._4_4_ +
                       fVar119 * auVar140._4_4_;
              fVar101 = fVar122 * auVar111._8_4_ + fVar123 * auVar133._8_4_ +
                        fVar124 * auVar140._8_4_;
              fVar83 = fVar126 * auVar111._12_4_ + fVar127 * auVar133._12_4_ +
                       fVar128 * auVar140._12_4_;
              fVar75 = (fVar97 + fVar97) * ((_LC7 - fVar138 * fVar75) * fVar75 + fVar75);
              fVar98 = (fVar98 + fVar98) * ((_LC7 - fVar129 * fVar92) * fVar92 + fVar92);
              fVar101 = (fVar101 + fVar101) * ((_LC7 - fVar74 * fVar94) * fVar94 + fVar94);
              fVar83 = (fVar83 + fVar83) * ((_LC7 - fVar90 * fVar96) * fVar96 + fVar96);
              fVar97 = *(float *)(param_2 + 0xc);
              uStack_1210._0_4_ = auVar108._8_4_;
              uStack_1210._4_4_ = auVar108._12_4_;
              auVar76._0_4_ =
                   auVar185._0_4_ & -(uint)(fVar97 <= fVar75 && fVar75 <= pfVar6[2]) &
                   -(uint)(fVar138 != 0.0);
              auVar76._4_4_ =
                   auVar185._4_4_ & -(uint)(fVar97 <= fVar98 && fVar98 <= pfVar12[2]) &
                   -(uint)(fVar129 != 0.0);
              auVar76._8_4_ =
                   auVar185._8_4_ & -(uint)(fVar97 <= fVar101 && fVar101 <= (float)uStack_1210) &
                   -(uint)(fVar74 != 0.0);
              auVar76._12_4_ =
                   auVar185._12_4_ & -(uint)(fVar97 <= fVar83 && fVar83 <= uStack_1210._4_4_) &
                   -(uint)(fVar90 != 0.0);
              uVar60 = movmskps(uVar60,auVar76);
              if (uVar60 != 0) {
                auStack_fb8 = auVar140;
                auVar36._4_4_ = fVar82;
                auVar36._0_4_ = fVar80;
                auVar36._8_4_ = fVar107;
                auVar36._12_4_ = fVar120;
                auVar108 = rcpps(auVar140,auVar36);
                auStack_fa8 = auVar133;
                auStack_f98 = auVar111;
                auStack_1088 = auVar76;
                fVar97 = auVar108._0_4_;
                fVar138 = auVar108._4_4_;
                fVar129 = auVar108._8_4_;
                fVar74 = auVar108._12_4_;
                afStack_fc8[0] = fVar75;
                afStack_fc8[1] = fVar98;
                afStack_fc8[2] = fVar101;
                afStack_fc8[3] = fVar83;
                auVar141._4_4_ = _LC18;
                auVar141._0_4_ = _LC18;
                auVar141._8_4_ = _LC18;
                auVar141._12_4_ = _LC18;
                fVar97 = (float)(~-(uint)((float)(uVar44 & (uint)fVar80) < _LC5) &
                                (uint)((_LC7 - fVar80 * fVar97) * fVar97 + fVar97));
                fVar138 = (float)(~-(uint)((float)(uVar44 & (uint)fVar82) < _UNK_001151d4) &
                                 (uint)((_LC7 - fVar82 * fVar138) * fVar138 + fVar138));
                fVar129 = (float)(~-(uint)((float)(uVar44 & (uint)fVar107) < _UNK_001151d8) &
                                 (uint)((_LC7 - fVar107 * fVar129) * fVar129 + fVar129));
                fVar74 = (float)(~-(uint)((float)(uVar44 & (uint)fVar120) < _UNK_001151dc) &
                                (uint)((_LC7 - fVar120 * fVar74) * fVar74 + fVar74));
                auVar86._0_4_ = fVar85 * fVar97;
                auVar86._4_4_ = fVar91 * fVar138;
                auVar86._8_4_ = fVar93 * fVar129;
                auVar86._12_4_ = fVar95 * fVar74;
                auVar39._4_12_ = _UNK_001151e4;
                auVar39._0_4_ = _LC7;
                auStack_fe8 = minps(auVar86,auVar39);
                auVar87._0_4_ = auVar187._0_4_ * fVar97;
                auVar87._4_4_ = auVar187._4_4_ * fVar138;
                auVar87._8_4_ = auVar187._8_4_ * fVar129;
                auVar87._12_4_ = auVar187._12_4_ * fVar74;
                auVar40._4_12_ = _UNK_001151e4;
                auVar40._0_4_ = _LC7;
                auStack_fd8 = minps(auVar87,auVar40);
                auVar112._0_4_ = ~auVar76._0_4_ & _LC18;
                auVar112._4_4_ = ~auVar76._4_4_ & _LC18;
                auVar112._8_4_ = ~auVar76._8_4_ & _LC18;
                auVar112._12_4_ = ~auVar76._12_4_ & _LC18;
                auVar88._0_4_ = auVar76._0_4_ & (uint)fVar75;
                auVar88._4_4_ = auVar76._4_4_ & (uint)fVar98;
                auVar88._8_4_ = auVar76._8_4_ & (uint)fVar101;
                auVar88._12_4_ = auVar76._12_4_ & (uint)fVar83;
                auVar88 = auVar88 | auVar112;
                auVar113._4_4_ = auVar88._0_4_;
                auVar113._0_4_ = auVar88._4_4_;
                auVar113._8_4_ = auVar88._12_4_;
                auVar113._12_4_ = auVar88._8_4_;
                auVar108 = minps(auVar113,auVar88);
                auVar134._0_8_ = auVar108._8_8_;
                auVar134._8_4_ = auVar108._0_4_;
                auVar134._12_4_ = auVar108._4_4_;
                auVar108 = minps(auVar134,auVar108);
                auVar77._0_4_ = auVar76._0_4_ & -(uint)(auVar88._0_4_ == auVar108._0_4_);
                auVar77._4_4_ = auVar76._4_4_ & -(uint)(auVar88._4_4_ == auVar108._4_4_);
                auVar77._8_4_ = auVar76._8_4_ & -(uint)(auVar88._8_4_ == auVar108._8_4_);
                auVar77._12_4_ = auVar76._12_4_ & -(uint)(auVar88._12_4_ == auVar108._12_4_);
                iVar45 = movmskps(iVar45,auVar77);
                uVar52 = (ulong)uVar60;
                if (iVar45 != 0) {
                  uVar52 = CONCAT44((int)((ulong)lVar59 >> 0x20),iVar45);
                }
                lVar59 = 0;
                if (uVar52 != 0) {
                  for (; (uVar52 >> lVar59 & 1) == 0; lVar59 = lVar59 + 1) {
                  }
                }
                uVar60 = *(uint *)((long)&uStack_1068 + lVar59 * 4);
                while( true ) {
                  pbVar53 = *(byte **)(param_3 + 0x10);
                  lVar57 = *(long *)(lVar57 + (ulong)uVar60 * 8);
                  pcVar56 = *(code **)(pbVar53 + 0x10);
                  if ((pcVar56 == (code *)0x0) && (*(long *)(lVar57 + 0x40) == 0)) break;
                  uStack_1040 = uVar60;
                  uStack_1050 = *(undefined4 *)(auStack_f98 + lVar59 * 4);
                  uStack_10bc = 0xffffffff;
                  fStack_1048 = afStack_fc8[lVar59 + -4];
                  uStack_1044 = *(undefined4 *)((long)&uStack_1078 + lVar59 * 4);
                  puStack_10a8 = *(undefined4 **)(param_3 + 8);
                  uStack_103c = **(undefined4 **)(param_3 + 8);
                  uStack_1054 = *(undefined4 *)(auStack_fa8 + lVar59 * 4);
                  pRStack_10b8 = (RayHitK *)&uStack_10bc;
                  uStack_1058 = *(uint *)(auStack_fb8 + lVar59 * 4);
                  uStack_104c = *(undefined4 *)(auStack_fe8 + lVar59 * 4);
                  fVar97 = *(float *)(param_2 + 0x20);
                  *(float *)(param_2 + 0x20) = afStack_fc8[lVar59];
                  uStack_10b0 = *(undefined8 *)(lVar57 + 0x18);
                  puStack_1098 = &uStack_1058;
                  pRStack_10a0 = param_2;
                  uStack_1090 = 1;
                  if (*(code **)(lVar57 + 0x40) == (code *)0x0) {
LAB_00111ed8:
                    if (pcVar56 != (code *)0x0) {
                      if (((*pbVar53 & 2) != 0) || ((*(byte *)(lVar57 + 0x3e) & 0x40) != 0)) {
                        (*pcVar56)(&pRStack_10b8);
                        auVar141._4_12_ = _UNK_00115214;
                        auVar141._0_4_ = _LC18;
                      }
                      pRVar50 = (RayHitK *)(ulong)*(uint *)pRStack_10b8;
                      if (*(uint *)pRStack_10b8 == 0) goto LAB_001120b0;
                    }
                    *(uint *)(pRStack_10a0 + 0x30) = *puStack_1098;
                    *(uint *)(pRStack_10a0 + 0x34) = puStack_1098[1];
                    *(uint *)(pRStack_10a0 + 0x38) = puStack_1098[2];
                    *(uint *)(pRStack_10a0 + 0x3c) = puStack_1098[3];
                    *(uint *)(pRStack_10a0 + 0x40) = puStack_1098[4];
                    *(uint *)(pRStack_10a0 + 0x44) = puStack_1098[5];
                    *(uint *)(pRStack_10a0 + 0x48) = puStack_1098[6];
                    *(uint *)(pRStack_10a0 + 0x4c) = puStack_1098[7];
                    fVar97 = *(float *)(param_2 + 0x20);
                    pRVar50 = pRStack_10a0;
                  }
                  else {
                    (**(code **)(lVar57 + 0x40))(&pRStack_10b8);
                    auVar141._4_12_ = _UNK_00115214;
                    auVar141._0_4_ = _LC18;
                    pRVar50 = pRStack_10b8;
                    if (*(uint *)pRStack_10b8 != 0) {
                      pbVar53 = *(byte **)(param_3 + 0x10);
                      pcVar56 = *(code **)(pbVar53 + 0x10);
                      goto LAB_00111ed8;
                    }
LAB_001120b0:
                    *(float *)(param_2 + 0x20) = fVar97;
                  }
                  auStack_1218._4_4_ = fVar97;
                  auStack_1218._0_4_ = fVar97;
                  uStack_1210._0_4_ = fVar97;
                  uStack_1210._4_4_ = fVar97;
                  *(undefined4 *)(auStack_1088 + lVar59 * 4) = 0;
                  auStack_1088._0_4_ = -(uint)(fVar75 <= fVar97) & auStack_1088._0_4_;
                  auStack_1088._4_4_ = -(uint)(fVar98 <= fVar97) & auStack_1088._4_4_;
                  auStack_1088._8_4_ = -(uint)(fVar101 <= fVar97) & auStack_1088._8_4_;
                  auStack_1088._12_4_ = -(uint)(fVar83 <= fVar97) & auStack_1088._12_4_;
                  iVar45 = movmskps((int)lVar59,auStack_1088);
                  _local_11e8 = _auStack_1218;
                  if (iVar45 == 0) goto LAB_00111cc7;
                  auVar114._0_4_ = ~auStack_1088._0_4_ & auVar141._0_4_;
                  auVar114._4_4_ = ~auStack_1088._4_4_ & auVar141._4_4_;
                  auVar114._8_4_ = ~auStack_1088._8_4_ & auVar141._8_4_;
                  auVar114._12_4_ = ~auStack_1088._12_4_ & auVar141._12_4_;
                  auVar89._0_4_ = auStack_1088._0_4_ & (uint)fVar75;
                  auVar89._4_4_ = auStack_1088._4_4_ & (uint)fVar98;
                  auVar89._8_4_ = auStack_1088._8_4_ & (uint)fVar101;
                  auVar89._12_4_ = auStack_1088._12_4_ & (uint)fVar83;
                  auVar89 = auVar89 | auVar114;
                  lVar57 = *(long *)(lVar1 + 0x1e0);
                  auVar115._4_4_ = auVar89._0_4_;
                  auVar115._0_4_ = auVar89._4_4_;
                  auVar115._8_4_ = auVar89._12_4_;
                  auVar115._12_4_ = auVar89._8_4_;
                  auVar108 = minps(auVar115,auVar89);
                  auVar135._0_8_ = auVar108._8_8_;
                  auVar135._8_4_ = auVar108._0_4_;
                  auVar135._12_4_ = auVar108._4_4_;
                  auVar108 = minps(auVar135,auVar108);
                  auVar78._0_4_ = auStack_1088._0_4_ & -(uint)(auVar89._0_4_ == auVar108._0_4_);
                  auVar78._4_4_ = auStack_1088._4_4_ & -(uint)(auVar89._4_4_ == auVar108._4_4_);
                  auVar78._8_4_ = auStack_1088._8_4_ & -(uint)(auVar89._8_4_ == auVar108._8_4_);
                  auVar78._12_4_ = auStack_1088._12_4_ & -(uint)(auVar89._12_4_ == auVar108._12_4_);
                  iVar46 = movmskps((int)pRVar50,auVar78);
                  uVar52 = CONCAT44((int)((ulong)lVar59 >> 0x20),iVar45);
                  if (iVar46 != 0) {
                    uVar52 = CONCAT44((int)((ulong)pRVar50 >> 0x20),iVar46);
                  }
                  lVar59 = 0;
                  if (uVar52 != 0) {
                    for (; (uVar52 >> lVar59 & 1) == 0; lVar59 = lVar59 + 1) {
                    }
                  }
                  uVar60 = *(uint *)((long)&uStack_1068 + lVar59 * 4);
                }
                uVar58 = *(undefined4 *)(auStack_fb8 + lVar59 * 4);
                *(uint *)(param_2 + 0x48) = uVar60;
                puVar29 = *(undefined4 **)(param_3 + 8);
                uVar26 = *(undefined4 *)((long)&uStack_1078 + lVar59 * 4);
                auStack_1218._4_4_ = afStack_fc8[lVar59];
                *(undefined4 *)(param_2 + 0x30) = uVar58;
                uVar58 = *(undefined4 *)(auStack_fa8 + lVar59 * 4);
                uVar25 = *(undefined4 *)(auStack_fe8 + lVar59 * 4);
                uVar27 = *puVar29;
                *(undefined4 *)(param_2 + 0x44) = uVar26;
                fVar97 = afStack_fc8[lVar59 + -4];
                *(undefined4 *)(param_2 + 0x34) = uVar58;
                uVar58 = *(undefined4 *)(auStack_f98 + lVar59 * 4);
                *(undefined4 *)(param_2 + 0x4c) = uVar27;
                *(undefined4 *)(param_2 + 0x20) = auStack_1218._4_4_;
                *(undefined4 *)(param_2 + 0x38) = uVar58;
                *(undefined4 *)(param_2 + 0x3c) = uVar25;
                *(float *)(param_2 + 0x40) = fVar97;
                auStack_1218._0_4_ = auStack_1218._4_4_;
                uStack_1210._0_4_ = (float)auStack_1218._4_4_;
                uStack_1210._4_4_ = (float)auStack_1218._4_4_;
                local_11e8._4_4_ = auStack_1218._4_4_;
                local_11e8._0_4_ = auStack_1218._4_4_;
                fStack_11e0 = (float)auStack_1218._4_4_;
                fStack_11dc = (float)auStack_1218._4_4_;
              }
            }
LAB_00111cc7:
            lStack_11c8 = lStack_11c8 + 1;
            puVar48 = puVar48 + 0x14;
            fStack_121c = fVar128;
            fStack_1220 = fVar124;
            if (lStack_11c8 == uVar51 - 8) goto joined_r0x001110fb;
            fVar75 = *(float *)(param_2 + 0x1c);
          } while( true );
        }
        local_11e8._4_4_ = fVar97;
        local_11e8._0_4_ = fVar97;
        fStack_11e0 = fVar97;
        fStack_11dc = fVar97;
      }
      goto joined_r0x001110fb;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00112590:
    local_1001 = bVar21;
    pauVar13 = pauVar14;
    bVar21 = local_1001;
    if (pauVar14 != (undefined1 (*) [16])local_f88) {
LAB_00112599:
      pauVar14 = pauVar13 + -1;
      if (*(float *)(pauVar13[-1] + 8) <= local_fd4) {
        uVar17 = *(ulong *)pauVar13[-1];
LAB_001125c0:
        piVar15 = (int *)(uVar17 & 0xfffffffffffffff0);
        if (*(int *)(param_3 + 0x18) == 1) {
          if ((uVar17 & 8) != 0) goto LAB_00112880;
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
          auVar48._4_4_ = -(uint)(pbVar12[5] < pbVar12[1]) ^ _UNK_001151b4;
          auVar48._8_4_ = -(uint)(pbVar12[6] < pbVar12[2]) ^ _UNK_001151b8;
          auVar48._12_4_ = -(uint)(pbVar12[7] < pbVar12[3]) ^ _UNK_001151bc;
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
          if ((uVar17 & 8) != 0) goto LAB_00112880;
          pbVar12 = (byte *)(piVar15 + 8);
          if (uVar17 < 0x10) {
            pbVar12 = (byte *)0x0;
          }
          bVar16 = pbVar12[1];
          fVar25 = *(float *)(pbVar12 + 0x28);
          fVar29 = *(float *)(pbVar12 + 0x24);
          auVar34._0_4_ = -(uint)(pbVar12[4] < *pbVar12) ^ __LC0;
          auVar34._4_4_ = -(uint)(pbVar12[5] < bVar16) ^ _UNK_001151b4;
          auVar34._8_4_ = -(uint)(pbVar12[6] < pbVar12[2]) ^ _UNK_001151b8;
          auVar34._12_4_ = -(uint)(pbVar12[7] < pbVar12[3]) ^ _UNK_001151bc;
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
          auVar37._4_4_ = auVar36._4_4_ ^ _UNK_001151b4;
          auVar37._8_4_ = auVar36._8_4_ ^ _UNK_001151b8;
          auVar37._12_4_ = auVar36._12_4_ ^ _UNK_001151bc;
          uVar20 = movmskps((uint)pbVar12[0x15],auVar37);
          uVar18 = uVar11 & uVar20 & uVar18;
        }
        uVar19 = (ulong)(int)uVar18;
        if (uVar19 == 0) goto LAB_00112590;
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
        goto LAB_001125c0;
      }
      goto LAB_00112590;
    }
  }
LAB_00112994:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1001;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00112880:
  uVar17 = (ulong)((uint)uVar17 & 0xf);
  if (uVar17 == 8) goto LAB_00112590;
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
  if (local_1001 == 0) goto LAB_00112590;
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
    goto LAB_00112590;
  }
  local_fd4 = local_1028 * local_1028 + local_fa8 * local_fa8 + fVar25 * fVar25;
  pauVar13 = pauVar14;
  bVar21 = local_1001;
  if (pauVar14 == (undefined1 (*) [16])local_f88) goto LAB_00112994;
  goto LAB_00112599;
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
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong *puVar30;
  uint *puVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  code *pcVar35;
  uint *puVar36;
  ulong uVar37;
  long lVar38;
  int iVar39;
  byte *pbVar40;
  long in_FS_OFFSET;
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
  float fVar53;
  float fVar54;
  float fVar61;
  float fVar63;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar67;
  float fVar68;
  float fVar71;
  float fVar73;
  undefined1 auVar69 [16];
  float fVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar70 [16];
  float fVar76;
  float fVar77;
  float fVar80;
  float fVar82;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar79 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar93;
  float fVar96;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar103;
  float fVar108;
  float fVar109;
  undefined1 in_XMM4 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar110;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
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
  float fVar142;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar143 [16];
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
  float fVar159;
  undefined1 auVar160 [16];
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
    fVar111 = *(float *)(param_2 + 0xc);
    local_7e8 = *(ulong *)(*(long *)param_1 + 0x70);
    if (fVar111 < 0.0) {
      fVar111 = 0.0;
    }
    fVar24 = *(float *)param_2;
    fVar25 = *(float *)(param_2 + 4);
    fVar26 = *(float *)(param_2 + 8);
    uVar41 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar42 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _UNK_001151c4) < _UNK_001151d4);
    uVar45 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _UNK_001151c8) < _UNK_001151d8);
    uVar49 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _UNK_001151cc) < _UNK_001151dc);
    auVar55._0_4_ = uVar41 & (uint)_LC5;
    auVar55._4_4_ = uVar42 & (uint)_UNK_001151d4;
    auVar55._8_4_ = uVar45 & (uint)_UNK_001151d8;
    auVar55._12_4_ = uVar49 & (uint)_UNK_001151dc;
    auVar104._0_4_ = ~uVar41 & *(uint *)(param_2 + 0x10);
    auVar104._4_4_ = ~uVar42 & *(uint *)(param_2 + 0x14);
    auVar104._8_4_ = ~uVar45 & *(uint *)(param_2 + 0x18);
    auVar104._12_4_ = ~uVar49 & *(uint *)(param_2 + 0x1c);
    auVar55 = auVar55 | auVar104;
    auVar104 = rcpps(in_XMM4,auVar55);
    fVar67 = auVar104._0_4_;
    fVar71 = auVar104._4_4_;
    fVar73 = auVar104._8_4_;
    fVar67 = (_LC7 - auVar55._0_4_ * fVar67) * fVar67 + fVar67;
    fVar71 = (_LC7 - auVar55._4_4_ * fVar71) * fVar71 + fVar71;
    fVar73 = (_LC7 - auVar55._8_4_ * fVar73) * fVar73 + fVar73;
    puVar30 = local_7e0;
    do {
      uVar37 = puVar30[-1];
      puVar30 = puVar30 + -1;
      while (puVar36 = (uint *)(uVar37 & 0xfffffffffffffff0), (uVar37 & 8) == 0) {
        puVar31 = puVar36 + 8;
        if (uVar37 < 0x10) {
          puVar31 = (uint *)0x0;
        }
        fVar75 = (float)puVar31[6];
        fVar133 = (float)puVar31[7];
        puVar1 = puVar31 + (fVar67 < 0.0);
        fVar147 = (float)puVar31[8];
        fVar102 = (float)puVar31[9];
        auVar56._0_4_ = -(uint)((byte)puVar31[1] < (byte)*puVar31) ^ __LC0;
        auVar56._4_4_ =
             -(uint)(*(byte *)((long)puVar31 + 5) < *(byte *)((long)puVar31 + 1)) ^ _UNK_001151b4;
        auVar56._8_4_ =
             -(uint)(*(byte *)((long)puVar31 + 6) < *(byte *)((long)puVar31 + 2)) ^ _UNK_001151b8;
        auVar56._12_4_ =
             -(uint)(*(byte *)((long)puVar31 + 7) < *(byte *)((long)puVar31 + 3)) ^ _UNK_001151bc;
        uVar42 = movmskps((uint)*(byte *)((long)puVar31 + 1),auVar56);
        pbVar40 = (byte *)((long)puVar31 + ((ulong)(fVar67 < 0.0) * 4 ^ 4));
        fVar142 = (float)puVar31[10];
        pbVar2 = (byte *)((long)puVar31 + (ulong)(-(uint)(fVar71 < 0.0) & 4) + 8);
        pbVar3 = (byte *)((long)puVar31 + (-(ulong)(fVar71 < 0.0) & 0xfffffffffffffffc) + 0xc);
        pbVar4 = (byte *)((long)puVar31 + (ulong)(-(uint)(fVar73 < 0.0) & 4) + 0x10);
        fVar145 = (float)puVar31[0xb];
        pbVar32 = (byte *)((long)puVar31 + (-(ulong)(fVar73 < 0.0) & 0xfffffffffffffffc) + 0x14);
        auVar78._0_4_ = (((float)*pbVar2 * fVar142 + fVar133) - fVar25) * fVar71;
        auVar78._4_4_ = (((float)pbVar2[1] * fVar142 + fVar133) - fVar25) * fVar71;
        auVar78._8_4_ = (((float)pbVar2[2] * fVar142 + fVar133) - fVar25) * fVar71;
        auVar78._12_4_ = (((float)pbVar2[3] * fVar142 + fVar133) - fVar25) * fVar71;
        auVar57._0_4_ = (((float)(byte)*puVar1 * fVar102 + fVar75) - fVar24) * fVar67;
        auVar57._4_4_ = (((float)*(byte *)((long)puVar1 + 1) * fVar102 + fVar75) - fVar24) * fVar67;
        auVar57._8_4_ = (((float)*(byte *)((long)puVar1 + 2) * fVar102 + fVar75) - fVar24) * fVar67;
        auVar57._12_4_ = (((float)*(byte *)((long)puVar1 + 3) * fVar102 + fVar75) - fVar24) * fVar67
        ;
        auVar89._0_4_ = ((fVar102 * (float)*pbVar40 + fVar75) - fVar24) * fVar67;
        auVar89._4_4_ = ((fVar102 * (float)pbVar40[1] + fVar75) - fVar24) * fVar67;
        auVar89._8_4_ = ((fVar102 * (float)pbVar40[2] + fVar75) - fVar24) * fVar67;
        auVar89._12_4_ = ((fVar102 * (float)pbVar40[3] + fVar75) - fVar24) * fVar67;
        auVar126._0_4_ = ((fVar142 * (float)*pbVar3 + fVar133) - fVar25) * fVar71;
        auVar126._4_4_ = ((fVar142 * (float)pbVar3[1] + fVar133) - fVar25) * fVar71;
        auVar126._8_4_ = ((fVar142 * (float)pbVar3[2] + fVar133) - fVar25) * fVar71;
        auVar126._12_4_ = ((fVar142 * (float)pbVar3[3] + fVar133) - fVar25) * fVar71;
        auVar69._0_4_ = (((float)*pbVar4 * fVar145 + fVar147) - fVar26) * fVar73;
        auVar69._4_4_ = (((float)pbVar4[1] * fVar145 + fVar147) - fVar26) * fVar73;
        auVar69._8_4_ = (((float)pbVar4[2] * fVar145 + fVar147) - fVar26) * fVar73;
        auVar69._12_4_ = (((float)pbVar4[3] * fVar145 + fVar147) - fVar26) * fVar73;
        auVar90._4_4_ = fVar111;
        auVar90._0_4_ = fVar111;
        auVar90._8_4_ = fVar111;
        auVar90._12_4_ = fVar111;
        auVar104 = maxps(auVar69,auVar90);
        auVar55 = maxps(auVar57,auVar78);
        auVar90 = minps(auVar89,auVar126);
        auVar55 = maxps(auVar55,auVar104);
        auVar105._0_4_ = ((fVar145 * (float)*pbVar32 + fVar147) - fVar26) * fVar73;
        auVar105._4_4_ = ((fVar145 * (float)pbVar32[1] + fVar147) - fVar26) * fVar73;
        auVar105._8_4_ = ((fVar145 * (float)pbVar32[2] + fVar147) - fVar26) * fVar73;
        auVar105._12_4_ = ((fVar145 * (float)pbVar32[3] + fVar147) - fVar26) * fVar73;
        auVar29._4_4_ = fVar17;
        auVar29._0_4_ = fVar17;
        auVar29._8_4_ = fVar17;
        auVar29._12_4_ = fVar17;
        auVar104 = minps(auVar105,auVar29);
        auVar104 = minps(auVar90,auVar104);
        auVar58._4_4_ = -(uint)(auVar55._4_4_ <= auVar104._4_4_);
        auVar58._0_4_ = -(uint)(auVar55._0_4_ <= auVar104._0_4_);
        auVar58._8_4_ = -(uint)(auVar55._8_4_ <= auVar104._8_4_);
        auVar58._12_4_ = -(uint)(auVar55._12_4_ <= auVar104._12_4_);
        uVar41 = movmskps((uint)pbVar32[3],auVar58);
        uVar33 = (ulong)(int)(uVar42 & uVar41);
        if (uVar33 == 0) goto LAB_00113cb0;
        lVar38 = 0;
        if (uVar33 != 0) {
          for (; (uVar33 >> lVar38 & 1) == 0; lVar38 = lVar38 + 1) {
          }
        }
        uVar37 = *(ulong *)(puVar36 + lVar38 * 2);
        uVar33 = uVar33 - 1 & uVar33;
        if (uVar33 != 0) {
          *puVar30 = uVar37;
          uVar34 = uVar33 - 1;
          lVar38 = 0;
          if (uVar33 != 0) {
            for (; (uVar33 >> lVar38 & 1) == 0; lVar38 = lVar38 + 1) {
            }
          }
          while( true ) {
            puVar30 = puVar30 + 1;
            uVar37 = *(ulong *)(puVar36 + lVar38 * 2);
            uVar34 = uVar34 & uVar33;
            if (uVar34 == 0) break;
            *puVar30 = uVar37;
            uVar33 = uVar34 - 1;
            lVar38 = 0;
            if (uVar34 != 0) {
              for (; (uVar34 >> lVar38 & 1) == 0; lVar38 = lVar38 + 1) {
              }
            }
          }
        }
      }
      uVar37 = (ulong)((uint)uVar37 & 0xf);
      if (uVar37 != 8) {
        lVar38 = 0;
        do {
          lVar19 = *(long *)param_3;
          lVar20 = *(long *)(lVar19 + 0x220);
          lVar21 = *(long *)(lVar20 + (ulong)puVar36[0xc] * 8);
          pfVar5 = (float *)(lVar21 + (ulong)*puVar36 * 4);
          pfVar6 = (float *)(lVar21 + (ulong)puVar36[4] * 4);
          pfVar7 = (float *)(lVar21 + (ulong)puVar36[8] * 4);
          lVar21 = *(long *)(lVar20 + (ulong)puVar36[0xd] * 8);
          pfVar8 = (float *)(lVar21 + (ulong)puVar36[1] * 4);
          pfVar9 = (float *)(lVar21 + (ulong)puVar36[5] * 4);
          pfVar10 = (float *)(lVar21 + (ulong)puVar36[9] * 4);
          lVar21 = *(long *)(lVar20 + (ulong)puVar36[0xe] * 8);
          pfVar11 = (float *)(lVar21 + (ulong)puVar36[2] * 4);
          pfVar12 = (float *)(lVar21 + (ulong)puVar36[6] * 4);
          pfVar13 = (float *)(lVar21 + (ulong)puVar36[10] * 4);
          lVar20 = *(long *)(lVar20 + (ulong)puVar36[0xf] * 8);
          pfVar14 = (float *)(lVar20 + (ulong)puVar36[3] * 4);
          pfVar15 = (float *)(lVar20 + (ulong)puVar36[7] * 4);
          pfVar16 = (float *)(lVar20 + (ulong)puVar36[0xb] * 4);
          local_8d8 = *(undefined8 *)(puVar36 + 0x10);
          uStack_8d0 = *(undefined8 *)(puVar36 + 0x12);
          fVar75 = *(float *)param_2;
          fVar133 = *(float *)(param_2 + 4);
          fVar147 = *(float *)(param_2 + 8);
          fVar102 = *(float *)(param_2 + 0x10);
          fVar142 = *(float *)(param_2 + 0x14);
          fVar145 = *(float *)(param_2 + 0x18);
          local_8c8 = *(undefined8 *)(puVar36 + 0xc);
          uStack_8c0 = *(undefined8 *)(puVar36 + 0xe);
          fVar103 = pfVar7[2] - fVar147;
          fVar108 = pfVar10[2] - fVar147;
          fVar109 = pfVar13[2] - fVar147;
          fVar110 = pfVar16[2] - fVar147;
          fVar136 = *pfVar6 - fVar75;
          fVar138 = *pfVar9 - fVar75;
          fVar139 = *pfVar12 - fVar75;
          fVar140 = *pfVar15 - fVar75;
          fVar76 = pfVar5[2] - fVar147;
          fVar80 = pfVar8[2] - fVar147;
          fVar82 = pfVar11[2] - fVar147;
          fVar84 = pfVar14[2] - fVar147;
          fVar148 = *pfVar5 - fVar75;
          fVar150 = *pfVar8 - fVar75;
          fVar152 = *pfVar11 - fVar75;
          fVar154 = *pfVar14 - fVar75;
          fVar68 = *pfVar7 - fVar75;
          fVar72 = *pfVar10 - fVar75;
          fVar74 = *pfVar13 - fVar75;
          fVar75 = *pfVar16 - fVar75;
          fVar112 = pfVar7[1] - fVar133;
          fVar115 = pfVar10[1] - fVar133;
          fVar116 = pfVar13[1] - fVar133;
          fVar117 = pfVar16[1] - fVar133;
          fVar156 = pfVar5[1] - fVar133;
          fVar157 = pfVar8[1] - fVar133;
          fVar158 = pfVar11[1] - fVar133;
          fVar159 = pfVar14[1] - fVar133;
          fVar123 = pfVar6[1] - fVar133;
          fVar127 = pfVar9[1] - fVar133;
          fVar130 = pfVar12[1] - fVar133;
          fVar133 = pfVar15[1] - fVar133;
          fVar86 = fVar103 - fVar76;
          fVar93 = fVar108 - fVar80;
          fVar96 = fVar109 - fVar82;
          fVar99 = fVar110 - fVar84;
          fVar141 = pfVar6[2] - fVar147;
          fVar144 = pfVar9[2] - fVar147;
          fVar146 = pfVar12[2] - fVar147;
          fVar147 = pfVar15[2] - fVar147;
          fVar53 = fVar68 - fVar148;
          fVar61 = fVar72 - fVar150;
          fVar63 = fVar74 - fVar152;
          fVar65 = fVar75 - fVar154;
          fVar77 = fVar76 - fVar141;
          fVar81 = fVar80 - fVar144;
          fVar83 = fVar82 - fVar146;
          fVar85 = fVar84 - fVar147;
          fVar87 = fVar112 - fVar156;
          fVar94 = fVar115 - fVar157;
          fVar97 = fVar116 - fVar158;
          fVar100 = fVar117 - fVar159;
          fVar149 = fVar141 - fVar103;
          fVar151 = fVar144 - fVar108;
          fVar153 = fVar146 - fVar109;
          fVar155 = fVar147 - fVar110;
          auVar143._0_4_ = fVar148 - fVar136;
          auVar143._4_4_ = fVar150 - fVar138;
          auVar143._8_4_ = fVar152 - fVar139;
          auVar143._12_4_ = fVar154 - fVar140;
          fVar88 = fVar156 - fVar123;
          fVar95 = fVar157 - fVar127;
          fVar98 = fVar158 - fVar130;
          fVar101 = fVar159 - fVar133;
          fVar124 = fVar123 - fVar112;
          fVar128 = fVar127 - fVar115;
          fVar131 = fVar130 - fVar116;
          fVar134 = fVar133 - fVar117;
          fVar125 = fVar136 - fVar68;
          fVar129 = fVar138 - fVar72;
          fVar132 = fVar139 - fVar74;
          fVar135 = fVar140 - fVar75;
          fVar54 = ((fVar148 + fVar68) * fVar86 - fVar53 * (fVar76 + fVar103)) * fVar142 +
                   (fVar53 * (fVar156 + fVar112) - fVar87 * (fVar148 + fVar68)) * fVar145 +
                   ((fVar76 + fVar103) * fVar87 - (fVar156 + fVar112) * fVar86) * fVar102;
          fVar62 = ((fVar150 + fVar72) * fVar93 - fVar61 * (fVar80 + fVar108)) * fVar142 +
                   (fVar61 * (fVar157 + fVar115) - fVar94 * (fVar150 + fVar72)) * fVar145 +
                   ((fVar80 + fVar108) * fVar94 - (fVar157 + fVar115) * fVar93) * fVar102;
          fVar64 = ((fVar152 + fVar74) * fVar96 - fVar63 * (fVar82 + fVar109)) * fVar142 +
                   (fVar63 * (fVar158 + fVar116) - fVar97 * (fVar152 + fVar74)) * fVar145 +
                   ((fVar82 + fVar109) * fVar97 - (fVar158 + fVar116) * fVar96) * fVar102;
          fVar66 = ((fVar154 + fVar75) * fVar99 - fVar65 * (fVar84 + fVar110)) * fVar142 +
                   (fVar65 * (fVar159 + fVar117) - fVar100 * (fVar154 + fVar75)) * fVar145 +
                   ((fVar84 + fVar110) * fVar100 - (fVar159 + fVar117) * fVar99) * fVar102;
          fVar118 = ((fVar148 + fVar136) * fVar77 - auVar143._0_4_ * (fVar76 + fVar141)) * fVar142 +
                    (auVar143._0_4_ * (fVar156 + fVar123) - fVar88 * (fVar148 + fVar136)) * fVar145
                    + ((fVar76 + fVar141) * fVar88 - (fVar156 + fVar123) * fVar77) * fVar102;
          fVar120 = ((fVar150 + fVar138) * fVar81 - auVar143._4_4_ * (fVar80 + fVar144)) * fVar142 +
                    (auVar143._4_4_ * (fVar157 + fVar127) - fVar95 * (fVar150 + fVar138)) * fVar145
                    + ((fVar80 + fVar144) * fVar95 - (fVar157 + fVar127) * fVar81) * fVar102;
          fVar121 = ((fVar152 + fVar139) * fVar83 - auVar143._8_4_ * (fVar82 + fVar146)) * fVar142 +
                    (auVar143._8_4_ * (fVar158 + fVar130) - fVar98 * (fVar152 + fVar139)) * fVar145
                    + ((fVar82 + fVar146) * fVar98 - (fVar158 + fVar130) * fVar83) * fVar102;
          fVar122 = ((fVar154 + fVar140) * fVar85 - auVar143._12_4_ * (fVar84 + fVar147)) * fVar142
                    + (auVar143._12_4_ * (fVar159 + fVar133) - fVar101 * (fVar154 + fVar140)) *
                      fVar145 +
                    ((fVar84 + fVar147) * fVar101 - (fVar159 + fVar133) * fVar85) * fVar102;
          auVar119._8_4_ = fVar64;
          auVar119._0_8_ = CONCAT44(fVar62,fVar54);
          auVar119._12_4_ = fVar66;
          auVar22._8_4_ = fVar121;
          auVar22._0_8_ = CONCAT44(fVar120,fVar118);
          auVar22._12_4_ = fVar122;
          auVar104 = maxps(auVar119,auVar22);
          auVar113._8_4_ = fVar64;
          auVar113._0_8_ = CONCAT44(fVar62,fVar54);
          auVar113._12_4_ = fVar66;
          auVar23._8_4_ = fVar121;
          auVar23._0_8_ = CONCAT44(fVar120,fVar118);
          auVar23._12_4_ = fVar122;
          auVar55 = minps(auVar113,auVar23);
          auVar106._0_4_ =
               ((fVar141 + fVar103) * fVar124 - (fVar112 + fVar123) * fVar149) * fVar102 +
               ((fVar68 + fVar136) * fVar149 - fVar125 * (fVar141 + fVar103)) * fVar142 +
               (fVar125 * (fVar112 + fVar123) - fVar124 * (fVar68 + fVar136)) * fVar145;
          auVar106._4_4_ =
               ((fVar144 + fVar108) * fVar128 - (fVar115 + fVar127) * fVar151) * fVar102 +
               ((fVar72 + fVar138) * fVar151 - fVar129 * (fVar144 + fVar108)) * fVar142 +
               (fVar129 * (fVar115 + fVar127) - fVar128 * (fVar72 + fVar138)) * fVar145;
          auVar106._8_4_ =
               ((fVar146 + fVar109) * fVar131 - (fVar116 + fVar130) * fVar153) * fVar102 +
               ((fVar74 + fVar139) * fVar153 - fVar132 * (fVar146 + fVar109)) * fVar142 +
               (fVar132 * (fVar116 + fVar130) - fVar131 * (fVar74 + fVar139)) * fVar145;
          auVar106._12_4_ =
               ((fVar147 + fVar110) * fVar134 - (fVar117 + fVar133) * fVar155) * fVar102 +
               ((fVar75 + fVar140) * fVar155 - fVar135 * (fVar147 + fVar110)) * fVar142 +
               (fVar135 * (fVar117 + fVar133) - fVar134 * (fVar75 + fVar140)) * fVar145;
          auVar137._0_4_ = fVar54 + fVar118 + auVar106._0_4_;
          auVar137._4_4_ = fVar62 + fVar120 + auVar106._4_4_;
          auVar137._8_4_ = fVar64 + fVar121 + auVar106._8_4_;
          auVar137._12_4_ = fVar66 + fVar122 + auVar106._12_4_;
          auVar104 = maxps(auVar104,auVar106);
          auVar55 = minps(auVar55,auVar106);
          fVar75 = __LC15 * (float)(_LC3 & (uint)auVar137._0_4_);
          fVar133 = _UNK_00115204 * (float)(_UNK_001151c4 & (uint)auVar137._4_4_);
          fVar147 = _UNK_00115208 * (float)(_UNK_001151c8 & (uint)auVar137._8_4_);
          fVar68 = _UNK_0011520c * (float)(_UNK_001151cc & (uint)auVar137._12_4_);
          auVar114._0_4_ =
               -(uint)((float)((uint)fVar75 ^ _LC9) <= auVar55._0_4_ || auVar104._0_4_ <= fVar75) &
               _DAT_00116108;
          auVar114._4_4_ =
               -(uint)((float)((uint)fVar133 ^ _UNK_001151f4) <= auVar55._4_4_ ||
                      auVar104._4_4_ <= fVar133) & uRam000000000011610c;
          auVar114._8_4_ =
               -(uint)((float)((uint)fVar147 ^ _UNK_001151f8) <= auVar55._8_4_ ||
                      auVar104._8_4_ <= fVar147) & uRam0000000000116110;
          auVar114._12_4_ =
               -(uint)((float)((uint)fVar68 ^ _UNK_001151fc) <= auVar55._12_4_ ||
                      auVar104._12_4_ <= fVar68) & uRam0000000000116114;
          iVar39 = movmskps((int)lVar20,auVar114);
          if (iVar39 != 0) {
            uVar41 = -(uint)((float)(_LC3 & (uint)(fVar86 * fVar88)) <
                            (float)(_LC3 & (uint)(fVar124 * fVar77)));
            uVar49 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar93 * fVar95)) <
                            (float)(_UNK_001151c4 & (uint)(fVar128 * fVar81)));
            uVar46 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar96 * fVar98)) <
                            (float)(_UNK_001151c8 & (uint)(fVar131 * fVar83)));
            uVar50 = -(uint)((float)(_UNK_001151cc & (uint)(fVar99 * fVar101)) <
                            (float)(_UNK_001151cc & (uint)(fVar134 * fVar85)));
            uVar42 = -(uint)((float)(_LC3 & (uint)(fVar53 * fVar77)) <
                            (float)(_LC3 & (uint)(fVar149 * auVar143._0_4_)));
            uVar43 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar61 * fVar81)) <
                            (float)(_UNK_001151c4 & (uint)(fVar151 * auVar143._4_4_)));
            uVar47 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar63 * fVar83)) <
                            (float)(_UNK_001151c8 & (uint)(fVar153 * auVar143._8_4_)));
            uVar51 = -(uint)((float)(_UNK_001151cc & (uint)(fVar65 * fVar85)) <
                            (float)(_UNK_001151cc & (uint)(fVar155 * auVar143._12_4_)));
            uVar45 = -(uint)((float)(_LC3 & (uint)(fVar87 * auVar143._0_4_)) <
                            (float)(_LC3 & (uint)(fVar125 * fVar88)));
            uVar44 = -(uint)((float)(_UNK_001151c4 & (uint)(fVar94 * auVar143._4_4_)) <
                            (float)(_UNK_001151c4 & (uint)(fVar129 * fVar95)));
            uVar48 = -(uint)((float)(_UNK_001151c8 & (uint)(fVar97 * auVar143._8_4_)) <
                            (float)(_UNK_001151c8 & (uint)(fVar132 * fVar98)));
            uVar52 = -(uint)((float)(_UNK_001151cc & (uint)(fVar100 * auVar143._12_4_)) <
                            (float)(_UNK_001151cc & (uint)(fVar135 * fVar101)));
            auVar160._0_4_ = ~uVar45 & (uint)(fVar124 * auVar143._0_4_ - fVar125 * fVar88);
            auVar160._4_4_ = ~uVar44 & (uint)(fVar128 * auVar143._4_4_ - fVar129 * fVar95);
            auVar160._8_4_ = ~uVar48 & (uint)(fVar131 * auVar143._8_4_ - fVar132 * fVar98);
            auVar160._12_4_ = ~uVar52 & (uint)(fVar134 * auVar143._12_4_ - fVar135 * fVar101);
            auVar107._0_4_ = uVar45 & (uint)(fVar53 * fVar88 - fVar87 * auVar143._0_4_);
            auVar107._4_4_ = uVar44 & (uint)(fVar61 * fVar95 - fVar94 * auVar143._4_4_);
            auVar107._8_4_ = uVar48 & (uint)(fVar63 * fVar98 - fVar97 * auVar143._8_4_);
            auVar107._12_4_ = uVar52 & (uint)(fVar65 * fVar101 - fVar100 * auVar143._12_4_);
            auVar107 = auVar107 | auVar160;
            fVar53 = (float)(uVar42 & (uint)(fVar86 * auVar143._0_4_ - fVar53 * fVar77) |
                            ~uVar42 & (uint)(fVar125 * fVar77 - fVar149 * auVar143._0_4_));
            fVar61 = (float)(uVar43 & (uint)(fVar93 * auVar143._4_4_ - fVar61 * fVar81) |
                            ~uVar43 & (uint)(fVar129 * fVar81 - fVar151 * auVar143._4_4_));
            fVar63 = (float)(uVar47 & (uint)(fVar96 * auVar143._8_4_ - fVar63 * fVar83) |
                            ~uVar47 & (uint)(fVar132 * fVar83 - fVar153 * auVar143._8_4_));
            fVar65 = (float)(uVar51 & (uint)(fVar99 * auVar143._12_4_ - fVar65 * fVar85) |
                            ~uVar51 & (uint)(fVar135 * fVar85 - fVar155 * auVar143._12_4_));
            fVar68 = (float)(uVar41 & (uint)(fVar87 * fVar77 - fVar86 * fVar88) |
                            ~uVar41 & (uint)(fVar88 * fVar149 - fVar124 * fVar77));
            fVar72 = (float)(uVar49 & (uint)(fVar94 * fVar81 - fVar93 * fVar95) |
                            ~uVar49 & (uint)(fVar95 * fVar151 - fVar128 * fVar81));
            fVar74 = (float)(uVar46 & (uint)(fVar97 * fVar83 - fVar96 * fVar98) |
                            ~uVar46 & (uint)(fVar98 * fVar153 - fVar131 * fVar83));
            fVar77 = (float)(uVar50 & (uint)(fVar100 * fVar85 - fVar99 * fVar101) |
                            ~uVar50 & (uint)(fVar101 * fVar155 - fVar134 * fVar85));
            fVar75 = fVar142 * fVar53 + fVar145 * auVar107._0_4_ + fVar102 * fVar68;
            fVar133 = fVar142 * fVar61 + fVar145 * auVar107._4_4_ + fVar102 * fVar72;
            fVar147 = fVar142 * fVar63 + fVar145 * auVar107._8_4_ + fVar102 * fVar74;
            fVar102 = fVar142 * fVar65 + fVar145 * auVar107._12_4_ + fVar102 * fVar77;
            auVar91._0_4_ = fVar75 + fVar75;
            auVar91._4_4_ = fVar133 + fVar133;
            auVar91._8_4_ = fVar147 + fVar147;
            auVar91._12_4_ = fVar102 + fVar102;
            auVar55 = rcpps(auVar143,auVar91);
            fVar142 = auVar55._0_4_;
            fVar145 = auVar55._4_4_;
            fVar81 = auVar55._8_4_;
            fVar83 = auVar55._12_4_;
            fVar75 = fVar76 * auVar107._0_4_ + fVar156 * fVar53 + fVar148 * fVar68;
            fVar133 = fVar80 * auVar107._4_4_ + fVar157 * fVar61 + fVar150 * fVar72;
            fVar147 = fVar82 * auVar107._8_4_ + fVar158 * fVar63 + fVar152 * fVar74;
            fVar102 = fVar84 * auVar107._12_4_ + fVar159 * fVar65 + fVar154 * fVar77;
            auVar79._0_4_ =
                 (fVar75 + fVar75) * ((_LC7 - auVar91._0_4_ * fVar142) * fVar142 + fVar142);
            auVar79._4_4_ =
                 (fVar133 + fVar133) * ((_LC7 - auVar91._4_4_ * fVar145) * fVar145 + fVar145);
            auVar79._8_4_ =
                 (fVar147 + fVar147) * ((_LC7 - auVar91._8_4_ * fVar81) * fVar81 + fVar81);
            auVar79._12_4_ =
                 (fVar102 + fVar102) * ((_LC7 - auVar91._12_4_ * fVar83) * fVar83 + fVar83);
            fVar75 = *(float *)(param_2 + 0x20);
            fVar133 = *(float *)(param_2 + 0xc);
            auVar92._4_4_ = -(uint)(auVar91._4_4_ != 0.0);
            auVar92._0_4_ = -(uint)(auVar91._0_4_ != 0.0);
            auVar92._8_4_ = -(uint)(auVar91._8_4_ != 0.0);
            auVar92._12_4_ = -(uint)(auVar91._12_4_ != 0.0);
            auVar70._0_4_ =
                 auVar114._0_4_ & -(uint)(fVar133 <= auVar79._0_4_ && auVar79._0_4_ <= fVar75) &
                 -(uint)(auVar91._0_4_ != 0.0);
            auVar70._4_4_ =
                 auVar114._4_4_ & -(uint)(fVar133 <= auVar79._4_4_ && auVar79._4_4_ <= fVar75) &
                 -(uint)(auVar91._4_4_ != 0.0);
            auVar70._8_4_ =
                 auVar114._8_4_ & -(uint)(fVar133 <= auVar79._8_4_ && auVar79._8_4_ <= fVar75) &
                 -(uint)(auVar91._8_4_ != 0.0);
            auVar70._12_4_ =
                 auVar114._12_4_ & -(uint)(fVar133 <= auVar79._12_4_ && auVar79._12_4_ <= fVar75) &
                 -(uint)(auVar91._12_4_ != 0.0);
            uVar41 = movmskps(puVar36[10],auVar70);
            uVar33 = (ulong)uVar41;
            if (uVar41 != 0) {
              auVar55 = rcpps(auVar92,auVar137);
              local_808[0] = fVar53;
              local_808[1] = fVar61;
              local_808[2] = fVar63;
              local_808[3] = fVar65;
              local_828 = auVar79;
              fVar75 = auVar55._0_4_;
              fVar133 = auVar55._4_4_;
              fVar147 = auVar55._8_4_;
              fVar102 = auVar55._12_4_;
              local_818[0] = fVar68;
              local_818[1] = fVar72;
              local_818[2] = fVar74;
              local_818[3] = fVar77;
              local_7f8 = auVar107;
              fVar75 = (float)(~-(uint)((float)(_LC3 & (uint)auVar137._0_4_) < _LC5) &
                              (uint)((_LC7 - auVar137._0_4_ * fVar75) * fVar75 + fVar75));
              fVar133 = (float)(~-(uint)((float)(_UNK_001151c4 & (uint)auVar137._4_4_) <
                                        _UNK_001151d4) &
                               (uint)((_LC7 - auVar137._4_4_ * fVar133) * fVar133 + fVar133));
              fVar147 = (float)(~-(uint)((float)(_UNK_001151c8 & (uint)auVar137._8_4_) <
                                        _UNK_001151d8) &
                               (uint)((_LC7 - auVar137._8_4_ * fVar147) * fVar147 + fVar147));
              fVar102 = (float)(~-(uint)((float)(_UNK_001151cc & (uint)auVar137._12_4_) <
                                        _UNK_001151dc) &
                               (uint)((_LC7 - auVar137._12_4_ * fVar102) * fVar102 + fVar102));
              auVar59._0_4_ = fVar54 * fVar75;
              auVar59._4_4_ = fVar62 * fVar133;
              auVar59._8_4_ = fVar64 * fVar147;
              auVar59._12_4_ = fVar66 * fVar102;
              auVar27._4_12_ = _UNK_001151e4;
              auVar27._0_4_ = _LC7;
              local_848 = minps(auVar59,auVar27);
              auVar60._0_4_ = fVar118 * fVar75;
              auVar60._4_4_ = fVar120 * fVar133;
              auVar60._8_4_ = fVar121 * fVar147;
              auVar60._12_4_ = fVar122 * fVar102;
              auVar28._4_12_ = _UNK_001151e4;
              auVar28._0_4_ = _LC7;
              local_838 = minps(auVar60,auVar28);
              do {
                pbVar40 = *(byte **)(param_3 + 0x10);
                uVar34 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
                  }
                }
                uVar41 = *(uint *)((long)&local_8c8 + uVar34 * 4);
                lVar20 = *(long *)(*(long *)(lVar19 + 0x1e0) + (ulong)uVar41 * 8);
                pcVar35 = *(code **)(pbVar40 + 0x10);
                if ((pcVar35 == (code *)0x0) && (*(long *)(lVar20 + 0x48) == 0)) {
LAB_00113a19:
                  *(undefined4 *)(param_2 + 0x20) = 0xff800000;
                  goto LAB_00113a22;
                }
                uStack_8a0 = uVar41;
                uVar18 = *(undefined4 *)(param_2 + 0x20);
                iStack_90c = -1;
                uStack_89c = **(undefined4 **)(param_3 + 8);
                uStack_8a8 = *(undefined4 *)(local_838 + uVar34 * 4);
                uStack_8ac = *(undefined4 *)(local_848 + uVar34 * 4);
                uStack_8b0 = *(undefined4 *)(local_7f8 + uVar34 * 4);
                uStack_8a4 = *(undefined4 *)((long)&local_8d8 + uVar34 * 4);
                fStack_8b4 = local_808[uVar34];
                *(float *)(param_2 + 0x20) = local_818[uVar34 - 4];
                piStack_908 = &iStack_90c;
                uStack_900 = *(undefined8 *)(lVar20 + 0x18);
                fStack_8b8 = local_818[uVar34];
                uStack_8f8 = *(undefined8 *)(param_3 + 8);
                puStack_8e8 = &fStack_8b8;
                uStack_8e0 = 1;
                pRStack_8f0 = param_2;
                if (*(code **)(lVar20 + 0x48) == (code *)0x0) {
LAB_00113bc1:
                  if (pcVar35 != (code *)0x0) {
                    if (((*pbVar40 & 2) != 0) || ((*(byte *)(lVar20 + 0x3e) & 0x40) != 0)) {
                      (*pcVar35)(&piStack_908);
                    }
                    if (*piStack_908 == 0) goto LAB_00113c32;
                  }
                  goto LAB_00113a19;
                }
                (**(code **)(lVar20 + 0x48))(&piStack_908);
                if (*piStack_908 != 0) {
                  pbVar40 = *(byte **)(param_3 + 0x10);
                  pcVar35 = *(code **)(pbVar40 + 0x10);
                  goto LAB_00113bc1;
                }
LAB_00113c32:
                *(undefined4 *)(param_2 + 0x20) = uVar18;
                uVar33 = uVar33 ^ 1L << (uVar34 & 0x3f);
              } while (uVar33 != 0);
            }
          }
          lVar38 = lVar38 + 1;
          puVar36 = puVar36 + 0x14;
        } while (lVar38 != uVar37 - 8);
      }
LAB_00113cb0:
    } while (puVar30 != &local_7e8);
  }
LAB_00113a22:
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
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  byte *pbVar33;
  RayHitK *pRVar34;
  ulong uVar35;
  code *pcVar36;
  uint *puVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  int iVar41;
  ulong uVar42;
  int iVar43;
  ulong uVar44;
  long in_FS_OFFSET;
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
  float fVar57;
  float fVar58;
  float fVar67;
  float fVar69;
  undefined1 auVar59 [16];
  float fVar68;
  float fVar70;
  float fVar71;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar72;
  float fVar73;
  float fVar81;
  float fVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar94;
  float fVar96;
  undefined1 auVar90 [16];
  float fVar95;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar101;
  float fVar113;
  float fVar114;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar115;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar116;
  float fVar127;
  float fVar128;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar129;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar130;
  float fVar139;
  float fVar143;
  undefined1 in_XMM5 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  float fVar153;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar154;
  float fVar157;
  float fVar158;
  float fVar159;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  float fVar171;
  float fVar172;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  undefined1 auVar173 [16];
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  undefined1 auVar185 [16];
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
  float fVar196;
  float fVar197;
  undefined1 local_11f8 [16];
  undefined1 auStack_11b8 [8];
  float fStack_11b0;
  float fStack_11ac;
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
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  uint uStack_1040;
  undefined4 uStack_103c;
  undefined1 local_1038 [5] [16];
  undefined1 auStack_fe8 [16];
  undefined1 auStack_fd8 [16];
  undefined1 auStack_fc8 [16];
  undefined1 auStack_fb8 [16];
  undefined1 auStack_fa8 [16];
  undefined1 auStack_f98 [16];
  undefined1 local_f88 [8];
  undefined4 local_f80;
  undefined1 local_f78 [3896];
  long local_40;
  
  uVar31 = _LC3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)param_1 + 0x70) != 8) {
    fVar184 = *(float *)(param_2 + 0x20);
    local_f80 = 0;
    local_f88 = (undefined1  [8])*(undefined8 *)(*(long *)param_1 + 0x70);
    if (fVar184 < 0.0) {
      fVar184 = 0.0;
    }
    fVar87 = *(float *)(param_2 + 0xc);
    if (fVar87 < 0.0) {
      fVar87 = 0.0;
    }
    fVar26 = *(float *)param_2;
    fVar27 = *(float *)(param_2 + 4);
    fVar28 = *(float *)(param_2 + 8);
    pauVar40 = (undefined1 (*) [16])local_f78;
    uVar45 = -(uint)((float)(*(uint *)(param_2 + 0x10) & _LC3) < _LC5);
    uVar46 = -(uint)((float)(*(uint *)(param_2 + 0x14) & _LC3) < _UNK_001151d4);
    uVar49 = -(uint)((float)(*(uint *)(param_2 + 0x18) & _LC3) < _UNK_001151d8);
    uVar53 = -(uint)((float)(*(uint *)(param_2 + 0x1c) & _LC3) < _UNK_001151dc);
    auVar59._0_4_ = uVar45 & (uint)_LC5;
    auVar59._4_4_ = uVar46 & (uint)_UNK_001151d4;
    auVar59._8_4_ = uVar49 & (uint)_UNK_001151d8;
    auVar59._12_4_ = uVar53 & (uint)_UNK_001151dc;
    auVar134._0_4_ = ~uVar45 & *(uint *)(param_2 + 0x10);
    auVar134._4_4_ = ~uVar46 & *(uint *)(param_2 + 0x14);
    auVar134._8_4_ = ~uVar49 & *(uint *)(param_2 + 0x18);
    auVar134._12_4_ = ~uVar53 & *(uint *)(param_2 + 0x1c);
    auVar59 = auVar59 | auVar134;
    auVar134 = rcpps(in_XMM5,auVar59);
    fVar57 = auVar134._0_4_;
    fVar67 = auVar134._4_4_;
    fVar69 = auVar134._8_4_;
    fVar57 = (_LC7 - auVar59._0_4_ * fVar57) * fVar57 + fVar57;
    fVar67 = (_LC7 - auVar59._4_4_ * fVar67) * fVar67 + fVar67;
    fVar69 = (_LC7 - auVar59._8_4_ * fVar69) * fVar69 + fVar69;
    local_11f8._4_4_ = fVar184;
    local_11f8._0_4_ = fVar184;
    local_11f8._8_4_ = fVar184;
    local_11f8._12_4_ = fVar184;
    uVar32 = (ulong)(fVar57 < 0.0) * 4;
LAB_00113ec0:
    pauVar39 = pauVar40;
    if (pauVar40 != (undefined1 (*) [16])local_f88) {
      while( true ) {
        auStack_11b8._4_4_ = *(undefined4 *)(param_2 + 0x20);
        pauVar40 = pauVar39 + -1;
        if ((float)auStack_11b8._4_4_ < *(float *)(pauVar39[-1] + 8)) break;
        uVar38 = *(ulong *)pauVar39[-1];
        pauVar39 = pauVar40;
        if ((uVar38 & 8) != 0) {
          uVar35 = (ulong)((uint)uVar38 & 0xf) - 8;
          if (uVar35 == 0) {
LAB_00114d80:
            local_11f8._4_4_ = auStack_11b8._4_4_;
            local_11f8._0_4_ = auStack_11b8._4_4_;
            local_11f8._8_4_ = auStack_11b8._4_4_;
            local_11f8._12_4_ = auStack_11b8._4_4_;
          }
          else {
LAB_0011426a:
            puVar37 = (uint *)(uVar38 & 0xfffffffffffffff0);
            uVar42 = 0;
            auStack_11b8._0_4_ = auStack_11b8._4_4_;
            fStack_11b0 = (float)auStack_11b8._4_4_;
            fStack_11ac = (float)auStack_11b8._4_4_;
            uVar38 = uVar42;
            do {
              lVar25 = *(long *)param_3;
              lVar22 = *(long *)(lVar25 + 0x220);
              lVar23 = *(long *)(lVar22 + (ulong)puVar37[0xc] * 8);
              pfVar6 = (float *)(lVar23 + (ulong)*puVar37 * 4);
              pfVar7 = (float *)(lVar23 + (ulong)puVar37[4] * 4);
              pfVar8 = (float *)(lVar23 + (ulong)puVar37[8] * 4);
              lVar23 = *(long *)(lVar22 + (ulong)puVar37[0xd] * 8);
              pfVar9 = (float *)(lVar23 + (ulong)puVar37[1] * 4);
              pfVar10 = (float *)(lVar23 + (ulong)puVar37[5] * 4);
              pfVar11 = (float *)(lVar23 + (ulong)puVar37[9] * 4);
              lVar23 = *(long *)(lVar22 + (ulong)puVar37[0xe] * 8);
              pfVar12 = (float *)(lVar23 + (ulong)puVar37[2] * 4);
              pfVar13 = (float *)(lVar23 + (ulong)puVar37[6] * 4);
              pfVar14 = (float *)(lVar23 + (ulong)puVar37[10] * 4);
              lVar22 = *(long *)(lVar22 + (ulong)puVar37[0xf] * 8);
              pfVar15 = (float *)(lVar22 + (ulong)puVar37[3] * 4);
              pfVar16 = (float *)(lVar22 + (ulong)puVar37[7] * 4);
              pfVar17 = (float *)(lVar22 + (ulong)puVar37[0xb] * 4);
              fVar184 = *(float *)param_2;
              fVar166 = *(float *)(param_2 + 4);
              fVar99 = *(float *)(param_2 + 8);
              uStack_1078 = *(undefined8 *)(puVar37 + 0x10);
              uStack_1070 = *(undefined8 *)(puVar37 + 0x12);
              uStack_1068 = *(undefined8 *)(puVar37 + 0xc);
              uStack_1060 = *(undefined8 *)(puVar37 + 0xe);
              fVar153 = *(float *)(param_2 + 0x10);
              fVar98 = *(float *)(param_2 + 0x14);
              fVar176 = *(float *)(param_2 + 0x18);
              fVar116 = pfVar8[1] - fVar166;
              fVar127 = pfVar11[1] - fVar166;
              fVar128 = pfVar14[1] - fVar166;
              fVar129 = pfVar17[1] - fVar166;
              fVar154 = *pfVar7 - fVar184;
              fVar157 = *pfVar10 - fVar184;
              fVar158 = *pfVar13 - fVar184;
              fVar159 = *pfVar16 - fVar184;
              fVar101 = pfVar8[2] - fVar99;
              fVar113 = pfVar11[2] - fVar99;
              fVar114 = pfVar14[2] - fVar99;
              fVar115 = pfVar17[2] - fVar99;
              fVar58 = *pfVar8 - fVar184;
              fVar68 = *pfVar11 - fVar184;
              fVar70 = *pfVar14 - fVar184;
              fVar71 = *pfVar17 - fVar184;
              fVar181 = *pfVar6 - fVar184;
              fVar182 = *pfVar9 - fVar184;
              fVar183 = *pfVar12 - fVar184;
              fVar184 = *pfVar15 - fVar184;
              fVar190 = pfVar6[1] - fVar166;
              fVar192 = pfVar9[1] - fVar166;
              fVar194 = pfVar12[1] - fVar166;
              fVar196 = pfVar15[1] - fVar166;
              fVar186 = pfVar7[2] - fVar99;
              fVar187 = pfVar10[2] - fVar99;
              fVar188 = pfVar13[2] - fVar99;
              fVar189 = pfVar16[2] - fVar99;
              fVar88 = pfVar6[2] - fVar99;
              fVar94 = pfVar9[2] - fVar99;
              fVar96 = pfVar12[2] - fVar99;
              fVar99 = pfVar15[2] - fVar99;
              fVar160 = pfVar7[1] - fVar166;
              fVar162 = pfVar10[1] - fVar166;
              fVar164 = pfVar13[1] - fVar166;
              fVar166 = pfVar16[1] - fVar166;
              fVar130 = fVar116 - fVar190;
              fVar139 = fVar127 - fVar192;
              fVar143 = fVar128 - fVar194;
              fVar147 = fVar129 - fVar196;
              fVar72 = fVar101 - fVar88;
              fVar81 = fVar113 - fVar94;
              fVar83 = fVar114 - fVar96;
              fVar85 = fVar115 - fVar99;
              fVar171 = fVar186 - fVar101;
              fVar174 = fVar187 - fVar113;
              fVar177 = fVar188 - fVar114;
              fVar179 = fVar189 - fVar115;
              fVar89 = fVar88 - fVar186;
              fVar95 = fVar94 - fVar187;
              fVar97 = fVar96 - fVar188;
              fVar100 = fVar99 - fVar189;
              fVar131 = fVar154 - fVar58;
              fVar140 = fVar157 - fVar68;
              fVar144 = fVar158 - fVar70;
              fVar148 = fVar159 - fVar71;
              fVar73 = fVar58 - fVar181;
              fVar82 = fVar68 - fVar182;
              fVar84 = fVar70 - fVar183;
              fVar86 = fVar71 - fVar184;
              fVar172 = fVar160 - fVar116;
              fVar175 = fVar162 - fVar127;
              fVar178 = fVar164 - fVar128;
              fVar180 = fVar166 - fVar129;
              fVar191 = fVar190 - fVar160;
              fVar193 = fVar192 - fVar162;
              fVar195 = fVar194 - fVar164;
              fVar197 = fVar196 - fVar166;
              fVar161 = fVar181 - fVar154;
              fVar163 = fVar182 - fVar157;
              fVar165 = fVar183 - fVar158;
              fVar167 = fVar184 - fVar159;
              fVar132 = ((fVar181 + fVar58) * fVar72 - fVar73 * (fVar88 + fVar101)) * fVar98 +
                        (fVar73 * (fVar190 + fVar116) - fVar130 * (fVar181 + fVar58)) * fVar176 +
                        ((fVar88 + fVar101) * fVar130 - (fVar190 + fVar116) * fVar72) * fVar153;
              fVar141 = ((fVar182 + fVar68) * fVar81 - fVar82 * (fVar94 + fVar113)) * fVar98 +
                        (fVar82 * (fVar192 + fVar127) - fVar139 * (fVar182 + fVar68)) * fVar176 +
                        ((fVar94 + fVar113) * fVar139 - (fVar192 + fVar127) * fVar81) * fVar153;
              fVar145 = ((fVar183 + fVar70) * fVar83 - fVar84 * (fVar96 + fVar114)) * fVar98 +
                        (fVar84 * (fVar194 + fVar128) - fVar143 * (fVar183 + fVar70)) * fVar176 +
                        ((fVar96 + fVar114) * fVar143 - (fVar194 + fVar128) * fVar83) * fVar153;
              fVar149 = ((fVar184 + fVar71) * fVar85 - fVar86 * (fVar99 + fVar115)) * fVar98 +
                        (fVar86 * (fVar196 + fVar129) - fVar147 * (fVar184 + fVar71)) * fVar176 +
                        ((fVar99 + fVar115) * fVar147 - (fVar196 + fVar129) * fVar85) * fVar153;
              fVar133 = ((fVar181 + fVar154) * fVar89 - fVar161 * (fVar88 + fVar186)) * fVar98 +
                        (fVar161 * (fVar190 + fVar160) - fVar191 * (fVar181 + fVar154)) * fVar176 +
                        ((fVar88 + fVar186) * fVar191 - (fVar190 + fVar160) * fVar89) * fVar153;
              fVar142 = ((fVar182 + fVar157) * fVar95 - fVar163 * (fVar94 + fVar187)) * fVar98 +
                        (fVar163 * (fVar192 + fVar162) - fVar193 * (fVar182 + fVar157)) * fVar176 +
                        ((fVar94 + fVar187) * fVar193 - (fVar192 + fVar162) * fVar95) * fVar153;
              auVar185._4_4_ = fVar142;
              auVar185._0_4_ = fVar133;
              fVar146 = ((fVar183 + fVar158) * fVar97 - fVar165 * (fVar96 + fVar188)) * fVar98 +
                        (fVar165 * (fVar194 + fVar164) - fVar195 * (fVar183 + fVar158)) * fVar176 +
                        ((fVar96 + fVar188) * fVar195 - (fVar194 + fVar164) * fVar97) * fVar153;
              fVar150 = ((fVar184 + fVar159) * fVar100 - fVar167 * (fVar99 + fVar189)) * fVar98 +
                        (fVar167 * (fVar196 + fVar166) - fVar197 * (fVar184 + fVar159)) * fVar176 +
                        ((fVar99 + fVar189) * fVar197 - (fVar196 + fVar166) * fVar100) * fVar153;
              auVar185._8_4_ = fVar146;
              auVar185._12_4_ = fVar150;
              auVar119._8_4_ = fVar145;
              auVar119._0_8_ = CONCAT44(fVar141,fVar132);
              auVar119._12_4_ = fVar149;
              auVar59 = maxps(auVar119,auVar185);
              auVar104._0_4_ =
                   ((fVar186 + fVar101) * fVar172 - (fVar116 + fVar160) * fVar171) * fVar153 +
                   ((fVar58 + fVar154) * fVar171 - fVar131 * (fVar186 + fVar101)) * fVar98 +
                   (fVar131 * (fVar116 + fVar160) - fVar172 * (fVar58 + fVar154)) * fVar176;
              auVar104._4_4_ =
                   ((fVar187 + fVar113) * fVar175 - (fVar127 + fVar162) * fVar174) * fVar153 +
                   ((fVar68 + fVar157) * fVar174 - fVar140 * (fVar187 + fVar113)) * fVar98 +
                   (fVar140 * (fVar127 + fVar162) - fVar175 * (fVar68 + fVar157)) * fVar176;
              auVar104._8_4_ =
                   ((fVar188 + fVar114) * fVar178 - (fVar128 + fVar164) * fVar177) * fVar153 +
                   ((fVar70 + fVar158) * fVar177 - fVar144 * (fVar188 + fVar114)) * fVar98 +
                   (fVar144 * (fVar128 + fVar164) - fVar178 * (fVar70 + fVar158)) * fVar176;
              auVar104._12_4_ =
                   ((fVar189 + fVar115) * fVar180 - (fVar129 + fVar166) * fVar179) * fVar153 +
                   ((fVar71 + fVar159) * fVar179 - fVar148 * (fVar189 + fVar115)) * fVar98 +
                   (fVar148 * (fVar129 + fVar166) - fVar180 * (fVar71 + fVar159)) * fVar176;
              auVar134 = maxps(auVar59,auVar104);
              auVar60._8_4_ = fVar145;
              auVar60._0_8_ = CONCAT44(fVar141,fVar132);
              auVar60._12_4_ = fVar149;
              auVar155._0_4_ = fVar132 + fVar133 + auVar104._0_4_;
              auVar155._4_4_ = fVar141 + fVar142 + auVar104._4_4_;
              auVar155._8_4_ = fVar145 + fVar146 + auVar104._8_4_;
              auVar155._12_4_ = fVar149 + fVar150 + auVar104._12_4_;
              auVar59 = minps(auVar60,auVar185);
              auVar59 = minps(auVar59,auVar104);
              fVar166 = __LC15 * (float)(uVar31 & (uint)auVar155._0_4_);
              fVar58 = _UNK_00115204 * (float)(uVar31 & (uint)auVar155._4_4_);
              fVar68 = _UNK_00115208 * (float)(uVar31 & (uint)auVar155._8_4_);
              fVar70 = _UNK_0011520c * (float)(uVar31 & (uint)auVar155._12_4_);
              auVar120._4_4_ = -(uint)(auVar134._4_4_ <= fVar58);
              auVar120._0_4_ = -(uint)(auVar134._0_4_ <= fVar166);
              auVar120._8_4_ = -(uint)(auVar134._8_4_ <= fVar68);
              auVar120._12_4_ = -(uint)(auVar134._12_4_ <= fVar70);
              auVar61._4_4_ = -(uint)((float)((uint)fVar58 ^ _UNK_001151f4) <= auVar59._4_4_);
              auVar61._0_4_ = -(uint)((float)((uint)fVar166 ^ _LC9) <= auVar59._0_4_);
              auVar61._8_4_ = -(uint)((float)((uint)fVar68 ^ _UNK_001151f8) <= auVar59._8_4_);
              auVar61._12_4_ = -(uint)((float)((uint)fVar70 ^ _UNK_001151fc) <= auVar59._12_4_);
              auVar61 = auVar61 | auVar120;
              auVar62._0_4_ = auVar61._0_4_ & _DAT_00116108;
              auVar62._4_4_ = auVar61._4_4_ & uRam000000000011610c;
              auVar62._8_4_ = auVar61._8_4_ & uRam0000000000116110;
              auVar62._12_4_ = auVar61._12_4_ & uRam0000000000116114;
              iVar41 = movmskps((int)lVar22,auVar62);
              if (iVar41 != 0) {
                fVar166 = fVar72 * fVar191;
                fVar58 = fVar81 * fVar193;
                auVar173._4_4_ = fVar58;
                auVar173._0_4_ = fVar166;
                fVar68 = fVar83 * fVar195;
                fVar70 = fVar85 * fVar197;
                auVar173._8_4_ = fVar68;
                auVar173._12_4_ = fVar70;
                uVar45 = -(uint)((float)((uint)fVar166 & uVar31) <
                                (float)((uint)(fVar172 * fVar89) & uVar31));
                uVar53 = -(uint)((float)((uint)fVar58 & uVar31) <
                                (float)((uint)(fVar175 * fVar95) & uVar31));
                uVar50 = -(uint)((float)((uint)fVar68 & uVar31) <
                                (float)((uint)(fVar178 * fVar97) & uVar31));
                uVar54 = -(uint)((float)((uint)fVar70 & uVar31) <
                                (float)((uint)(fVar180 * fVar100) & uVar31));
                uVar46 = -(uint)((float)(uVar31 & (uint)(fVar73 * fVar89)) <
                                (float)((uint)(fVar171 * fVar161) & uVar31));
                uVar47 = -(uint)((float)(uVar31 & (uint)(fVar82 * fVar95)) <
                                (float)((uint)(fVar174 * fVar163) & uVar31));
                uVar51 = -(uint)((float)(uVar31 & (uint)(fVar84 * fVar97)) <
                                (float)((uint)(fVar177 * fVar165) & uVar31));
                uVar55 = -(uint)((float)(uVar31 & (uint)(fVar86 * fVar100)) <
                                (float)((uint)(fVar179 * fVar167) & uVar31));
                uVar49 = -(uint)((float)((uint)(fVar130 * fVar161) & uVar31) <
                                (float)(uVar31 & (uint)(fVar131 * fVar191)));
                uVar48 = -(uint)((float)((uint)(fVar139 * fVar163) & uVar31) <
                                (float)(uVar31 & (uint)(fVar140 * fVar193)));
                uVar52 = -(uint)((float)((uint)(fVar143 * fVar165) & uVar31) <
                                (float)(uVar31 & (uint)(fVar144 * fVar195)));
                uVar56 = -(uint)((float)((uint)(fVar147 * fVar167) & uVar31) <
                                (float)(uVar31 & (uint)(fVar148 * fVar197)));
                auVar168._0_4_ = ~uVar49 & (uint)(fVar172 * fVar161 - fVar131 * fVar191);
                auVar168._4_4_ = ~uVar48 & (uint)(fVar175 * fVar163 - fVar140 * fVar193);
                auVar168._8_4_ = ~uVar52 & (uint)(fVar178 * fVar165 - fVar144 * fVar195);
                auVar168._12_4_ = ~uVar56 & (uint)(fVar180 * fVar167 - fVar148 * fVar197);
                auVar105._0_4_ = uVar49 & (uint)(fVar73 * fVar191 - fVar130 * fVar161);
                auVar105._4_4_ = uVar48 & (uint)(fVar82 * fVar193 - fVar139 * fVar163);
                auVar105._8_4_ = uVar52 & (uint)(fVar84 * fVar195 - fVar143 * fVar165);
                auVar105._12_4_ = uVar56 & (uint)(fVar86 * fVar197 - fVar147 * fVar167);
                auVar105 = auVar105 | auVar168;
                auVar169._0_4_ = ~uVar46 & (uint)(fVar131 * fVar89 - fVar171 * fVar161);
                auVar169._4_4_ = ~uVar47 & (uint)(fVar140 * fVar95 - fVar174 * fVar163);
                auVar169._8_4_ = ~uVar51 & (uint)(fVar144 * fVar97 - fVar177 * fVar165);
                auVar169._12_4_ = ~uVar55 & (uint)(fVar148 * fVar100 - fVar179 * fVar167);
                auVar121._0_4_ = uVar46 & (uint)(fVar72 * fVar161 - fVar73 * fVar89);
                auVar121._4_4_ = uVar47 & (uint)(fVar81 * fVar163 - fVar82 * fVar95);
                auVar121._8_4_ = uVar51 & (uint)(fVar83 * fVar165 - fVar84 * fVar97);
                auVar121._12_4_ = uVar55 & (uint)(fVar85 * fVar167 - fVar86 * fVar100);
                auVar121 = auVar121 | auVar169;
                auVar170._0_4_ = ~uVar45 & (uint)(fVar171 * fVar191 - fVar172 * fVar89);
                auVar170._4_4_ = ~uVar53 & (uint)(fVar174 * fVar193 - fVar175 * fVar95);
                auVar170._8_4_ = ~uVar50 & (uint)(fVar177 * fVar195 - fVar178 * fVar97);
                auVar170._12_4_ = ~uVar54 & (uint)(fVar179 * fVar197 - fVar180 * fVar100);
                auVar136._0_4_ = uVar45 & (uint)(fVar130 * fVar89 - fVar166);
                auVar136._4_4_ = uVar53 & (uint)(fVar139 * fVar95 - fVar58);
                auVar136._8_4_ = uVar50 & (uint)(fVar143 * fVar97 - fVar68);
                auVar136._12_4_ = uVar54 & (uint)(fVar147 * fVar100 - fVar70);
                auVar136 = auVar136 | auVar170;
                fVar166 = fVar98 * auVar121._0_4_ + fVar176 * auVar105._0_4_ +
                          fVar153 * auVar136._0_4_;
                fVar58 = fVar98 * auVar121._4_4_ + fVar176 * auVar105._4_4_ +
                         fVar153 * auVar136._4_4_;
                fVar68 = fVar98 * auVar121._8_4_ + fVar176 * auVar105._8_4_ +
                         fVar153 * auVar136._8_4_;
                fVar153 = fVar98 * auVar121._12_4_ + fVar176 * auVar105._12_4_ +
                          fVar153 * auVar136._12_4_;
                auVar151._0_4_ = fVar166 + fVar166;
                auVar151._4_4_ = fVar58 + fVar58;
                auVar151._8_4_ = fVar68 + fVar68;
                auVar151._12_4_ = fVar153 + fVar153;
                fVar166 = fVar88 * auVar105._0_4_ + fVar190 * auVar121._0_4_ +
                          fVar181 * auVar136._0_4_;
                fVar153 = fVar94 * auVar105._4_4_ + fVar192 * auVar121._4_4_ +
                          fVar182 * auVar136._4_4_;
                fVar98 = fVar96 * auVar105._8_4_ + fVar194 * auVar121._8_4_ +
                         fVar183 * auVar136._8_4_;
                fVar184 = fVar99 * auVar105._12_4_ + fVar196 * auVar121._12_4_ +
                          fVar184 * auVar136._12_4_;
                auVar59 = rcpps(auVar173,auVar151);
                fVar99 = auVar59._0_4_;
                fVar176 = auVar59._4_4_;
                fVar58 = auVar59._8_4_;
                fVar68 = auVar59._12_4_;
                auVar91._0_4_ =
                     (fVar166 + fVar166) * ((_LC7 - auVar151._0_4_ * fVar99) * fVar99 + fVar99);
                auVar91._4_4_ =
                     (fVar153 + fVar153) * ((_LC7 - auVar151._4_4_ * fVar176) * fVar176 + fVar176);
                auVar91._8_4_ =
                     (fVar98 + fVar98) * ((_LC7 - auVar151._8_4_ * fVar58) * fVar58 + fVar58);
                auVar91._12_4_ =
                     (fVar184 + fVar184) * ((_LC7 - auVar151._12_4_ * fVar68) * fVar68 + fVar68);
                fVar184 = *(float *)(param_2 + 0xc);
                auVar63._0_4_ =
                     auVar62._0_4_ &
                     -(uint)(fVar184 <= auVar91._0_4_ && auVar91._0_4_ <= (float)auStack_11b8._0_4_)
                     & -(uint)(auVar151._0_4_ != 0.0);
                auVar63._4_4_ =
                     auVar62._4_4_ &
                     -(uint)(fVar184 <= auVar91._4_4_ && auVar91._4_4_ <= (float)auStack_11b8._4_4_)
                     & -(uint)(auVar151._4_4_ != 0.0);
                auVar63._8_4_ =
                     auVar62._8_4_ &
                     -(uint)(fVar184 <= auVar91._8_4_ && auVar91._8_4_ <= fStack_11b0) &
                     -(uint)(auVar151._8_4_ != 0.0);
                auVar63._12_4_ =
                     auVar62._12_4_ &
                     -(uint)(fVar184 <= auVar91._12_4_ && auVar91._12_4_ <= fStack_11ac) &
                     -(uint)(auVar151._12_4_ != 0.0);
                iVar43 = movmskps((int)uVar38,auVar63);
                uVar38 = CONCAT44((int)(uVar38 >> 0x20),iVar43);
                if (iVar43 != 0) {
                  auStack_fb8 = auVar136;
                  auVar59 = rcpps(auVar136,auVar155);
                  auStack_fa8 = auVar121;
                  auStack_f98 = auVar105;
                  auStack_1088 = auVar63;
                  fVar184 = auVar59._0_4_;
                  fVar166 = auVar59._4_4_;
                  fVar99 = auVar59._8_4_;
                  fVar153 = auVar59._12_4_;
                  auStack_fc8 = auVar91;
                  auVar137._4_4_ = _LC18;
                  auVar137._0_4_ = _LC18;
                  auVar137._8_4_ = _LC18;
                  auVar137._12_4_ = _LC18;
                  fVar184 = (float)(~-(uint)((float)(uVar31 & (uint)auVar155._0_4_) < _LC5) &
                                   (uint)((_LC7 - auVar155._0_4_ * fVar184) * fVar184 + fVar184));
                  fVar166 = (float)(~-(uint)((float)(uVar31 & (uint)auVar155._4_4_) < _UNK_001151d4)
                                   & (uint)((_LC7 - auVar155._4_4_ * fVar166) * fVar166 + fVar166));
                  fVar99 = (float)(~-(uint)((float)(uVar31 & (uint)auVar155._8_4_) < _UNK_001151d8)
                                  & (uint)((_LC7 - auVar155._8_4_ * fVar99) * fVar99 + fVar99));
                  fVar153 = (float)(~-(uint)((float)(uVar31 & (uint)auVar155._12_4_) < _UNK_001151dc
                                            ) &
                                   (uint)((_LC7 - auVar155._12_4_ * fVar153) * fVar153 + fVar153));
                  auVar76._0_4_ = fVar132 * fVar184;
                  auVar76._4_4_ = fVar141 * fVar166;
                  auVar76._8_4_ = fVar145 * fVar99;
                  auVar76._12_4_ = fVar149 * fVar153;
                  auVar29._4_12_ = _UNK_001151e4;
                  auVar29._0_4_ = _LC7;
                  auStack_fe8 = minps(auVar76,auVar29);
                  auVar77._0_4_ = fVar133 * fVar184;
                  auVar77._4_4_ = fVar142 * fVar166;
                  auVar77._8_4_ = fVar146 * fVar99;
                  auVar77._12_4_ = fVar150 * fVar153;
                  auVar30._4_12_ = _UNK_001151e4;
                  auVar30._0_4_ = _LC7;
                  auStack_fd8 = minps(auVar77,auVar30);
                  auVar106._0_4_ = ~auVar63._0_4_ & _LC18;
                  auVar106._4_4_ = ~auVar63._4_4_ & _LC18;
                  auVar106._8_4_ = ~auVar63._8_4_ & _LC18;
                  auVar106._12_4_ = ~auVar63._12_4_ & _LC18;
                  auVar78._0_4_ = auVar63._0_4_ & (uint)auVar91._0_4_;
                  auVar78._4_4_ = auVar63._4_4_ & (uint)auVar91._4_4_;
                  auVar78._8_4_ = auVar63._8_4_ & (uint)auVar91._8_4_;
                  auVar78._12_4_ = auVar63._12_4_ & (uint)auVar91._12_4_;
                  auVar78 = auVar78 | auVar106;
                  auVar107._4_4_ = auVar78._0_4_;
                  auVar107._0_4_ = auVar78._4_4_;
                  auVar107._8_4_ = auVar78._12_4_;
                  auVar107._12_4_ = auVar78._8_4_;
                  auVar59 = minps(auVar107,auVar78);
                  auVar122._0_8_ = auVar59._8_8_;
                  auVar122._8_4_ = auVar59._0_4_;
                  auVar122._12_4_ = auVar59._4_4_;
                  auVar59 = minps(auVar122,auVar59);
                  auVar64._0_4_ = auVar63._0_4_ & -(uint)(auVar78._0_4_ == auVar59._0_4_);
                  auVar64._4_4_ = auVar63._4_4_ & -(uint)(auVar78._4_4_ == auVar59._4_4_);
                  auVar64._8_4_ = auVar63._8_4_ & -(uint)(auVar78._8_4_ == auVar59._8_4_);
                  auVar64._12_4_ = auVar63._12_4_ & -(uint)(auVar78._12_4_ == auVar59._12_4_);
                  iVar41 = movmskps(iVar41,auVar64);
                  uVar44 = uVar38;
                  if (iVar41 != 0) {
                    uVar44 = CONCAT44((int)((ulong)lVar22 >> 0x20),iVar41);
                  }
                  uVar38 = 0;
                  if (uVar44 != 0) {
                    for (; (uVar44 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                    }
                  }
                  uVar45 = *(uint *)((long)&uStack_1068 + uVar38 * 4);
                  while( true ) {
                    pbVar33 = *(byte **)(param_3 + 0x10);
                    pRVar34 = *(RayHitK **)(*(long *)(lVar25 + 0x1e0) + (ulong)uVar45 * 8);
                    pcVar36 = *(code **)(pbVar33 + 0x10);
                    if ((pcVar36 == (code *)0x0) && (*(long *)(pRVar34 + 0x40) == 0)) break;
                    uStack_1040 = uVar45;
                    uStack_1050 = *(undefined4 *)(auStack_f98 + uVar38 * 4);
                    uStack_10bc = 0xffffffff;
                    uStack_1048 = *(undefined4 *)(auStack_fd8 + uVar38 * 4);
                    puStack_10a8 = *(undefined4 **)(param_3 + 8);
                    uStack_1054 = *(undefined4 *)(auStack_fa8 + uVar38 * 4);
                    uStack_103c = **(undefined4 **)(param_3 + 8);
                    uStack_1058 = *(undefined4 *)(auStack_fb8 + uVar38 * 4);
                    puStack_10b8 = &uStack_10bc;
                    uStack_1044 = *(undefined4 *)((long)&uStack_1078 + uVar38 * 4);
                    uStack_104c = *(undefined4 *)(auStack_fe8 + uVar38 * 4);
                    fVar184 = *(float *)(param_2 + 0x20);
                    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(auStack_fc8 + uVar38 * 4);
                    uStack_10b0 = *(undefined8 *)(pRVar34 + 0x18);
                    pRStack_10a0 = param_2;
                    puStack_1098 = &uStack_1058;
                    uStack_1090 = 1;
                    if (*(code **)(pRVar34 + 0x40) == (code *)0x0) {
LAB_00114ba3:
                      if (pcVar36 != (code *)0x0) {
                        if (((*pbVar33 & 2) != 0) || (((byte)pRVar34[0x3e] & 0x40) != 0)) {
                          (*pcVar36)(&puStack_10b8);
                          auVar137._4_12_ = _UNK_00115214;
                          auVar137._0_4_ = _LC18;
                        }
                        pRVar34 = (RayHitK *)(ulong)*puStack_10b8;
                        if (*puStack_10b8 == 0) goto LAB_00114d20;
                      }
                      *(undefined4 *)(pRStack_10a0 + 0x30) = *puStack_1098;
                      *(undefined4 *)(pRStack_10a0 + 0x34) = puStack_1098[1];
                      *(undefined4 *)(pRStack_10a0 + 0x38) = puStack_1098[2];
                      *(undefined4 *)(pRStack_10a0 + 0x3c) = puStack_1098[3];
                      *(undefined4 *)(pRStack_10a0 + 0x40) = puStack_1098[4];
                      *(undefined4 *)(pRStack_10a0 + 0x44) = puStack_1098[5];
                      *(undefined4 *)(pRStack_10a0 + 0x48) = puStack_1098[6];
                      *(undefined4 *)(pRStack_10a0 + 0x4c) = puStack_1098[7];
                      fVar184 = *(float *)(param_2 + 0x20);
                      pRVar34 = pRStack_10a0;
                    }
                    else {
                      (**(code **)(pRVar34 + 0x40))(&puStack_10b8);
                      auVar137._4_12_ = _UNK_00115214;
                      auVar137._0_4_ = _LC18;
                      if (*puStack_10b8 != 0) {
                        pbVar33 = *(byte **)(param_3 + 0x10);
                        pcVar36 = *(code **)(pbVar33 + 0x10);
                        goto LAB_00114ba3;
                      }
LAB_00114d20:
                      *(float *)(param_2 + 0x20) = fVar184;
                    }
                    auStack_11b8._4_4_ = fVar184;
                    auStack_11b8._0_4_ = fVar184;
                    fStack_11b0 = fVar184;
                    fStack_11ac = fVar184;
                    *(undefined4 *)(auStack_1088 + uVar38 * 4) = 0;
                    auStack_1088._0_4_ = -(uint)(auVar91._0_4_ <= fVar184) & auStack_1088._0_4_;
                    auStack_1088._4_4_ = -(uint)(auVar91._4_4_ <= fVar184) & auStack_1088._4_4_;
                    auStack_1088._8_4_ = -(uint)(auVar91._8_4_ <= fVar184) & auStack_1088._8_4_;
                    auStack_1088._12_4_ = -(uint)(auVar91._12_4_ <= fVar184) & auStack_1088._12_4_;
                    iVar41 = movmskps((int)uVar38,auStack_1088);
                    uVar38 = CONCAT44((int)(uVar38 >> 0x20),iVar41);
                    if (iVar41 == 0) goto LAB_001149ff;
                    auVar108._0_4_ = ~auStack_1088._0_4_ & auVar137._0_4_;
                    auVar108._4_4_ = ~auStack_1088._4_4_ & auVar137._4_4_;
                    auVar108._8_4_ = ~auStack_1088._8_4_ & auVar137._8_4_;
                    auVar108._12_4_ = ~auStack_1088._12_4_ & auVar137._12_4_;
                    auVar79._0_4_ = auStack_1088._0_4_ & (uint)auVar91._0_4_;
                    auVar79._4_4_ = auStack_1088._4_4_ & (uint)auVar91._4_4_;
                    auVar79._8_4_ = auStack_1088._8_4_ & (uint)auVar91._8_4_;
                    auVar79._12_4_ = auStack_1088._12_4_ & (uint)auVar91._12_4_;
                    auVar79 = auVar79 | auVar108;
                    auVar109._4_4_ = auVar79._0_4_;
                    auVar109._0_4_ = auVar79._4_4_;
                    auVar109._8_4_ = auVar79._12_4_;
                    auVar109._12_4_ = auVar79._8_4_;
                    auVar59 = minps(auVar109,auVar79);
                    auVar123._0_8_ = auVar59._8_8_;
                    auVar123._8_4_ = auVar59._0_4_;
                    auVar123._12_4_ = auVar59._4_4_;
                    auVar59 = minps(auVar123,auVar59);
                    auVar65._0_4_ = auStack_1088._0_4_ & -(uint)(auVar79._0_4_ == auVar59._0_4_);
                    auVar65._4_4_ = auStack_1088._4_4_ & -(uint)(auVar79._4_4_ == auVar59._4_4_);
                    auVar65._8_4_ = auStack_1088._8_4_ & -(uint)(auVar79._8_4_ == auVar59._8_4_);
                    auVar65._12_4_ = auStack_1088._12_4_ & -(uint)(auVar79._12_4_ == auVar59._12_4_)
                    ;
                    iVar41 = movmskps((int)pRVar34,auVar65);
                    uVar44 = uVar38;
                    if (iVar41 != 0) {
                      uVar44 = CONCAT44((int)((ulong)pRVar34 >> 0x20),iVar41);
                    }
                    uVar38 = 0;
                    if (uVar44 != 0) {
                      for (; (uVar44 >> uVar38 & 1) == 0; uVar38 = uVar38 + 1) {
                      }
                    }
                    uVar45 = *(uint *)((long)&uStack_1068 + uVar38 * 4);
                  }
                  uVar21 = *(undefined4 *)((long)&uStack_1078 + uVar38 * 4);
                  *(uint *)(param_2 + 0x48) = uVar45;
                  uVar18 = *(undefined4 *)(auStack_fb8 + uVar38 * 4);
                  uVar19 = *(undefined4 *)(auStack_fc8 + uVar38 * 4);
                  uVar20 = *(undefined4 *)(auStack_fe8 + uVar38 * 4);
                  *(undefined4 *)(param_2 + 0x44) = uVar21;
                  puVar24 = *(undefined4 **)(param_3 + 8);
                  *(undefined4 *)(param_2 + 0x30) = uVar18;
                  uVar18 = *(undefined4 *)(auStack_fa8 + uVar38 * 4);
                  uVar21 = *(undefined4 *)(auStack_fd8 + uVar38 * 4);
                  auStack_11b8._4_4_ = uVar19;
                  auStack_11b8._0_4_ = uVar19;
                  fStack_11b0 = (float)uVar19;
                  fStack_11ac = (float)uVar19;
                  *(undefined4 *)(param_2 + 0x20) = uVar19;
                  uVar19 = *puVar24;
                  *(undefined4 *)(param_2 + 0x34) = uVar18;
                  uVar18 = *(undefined4 *)(auStack_f98 + uVar38 * 4);
                  *(undefined4 *)(param_2 + 0x3c) = uVar20;
                  *(undefined4 *)(param_2 + 0x4c) = uVar19;
                  *(undefined4 *)(param_2 + 0x38) = uVar18;
                  *(undefined4 *)(param_2 + 0x40) = uVar21;
                }
              }
LAB_001149ff:
              uVar42 = uVar42 + 1;
              puVar37 = puVar37 + 0x14;
              local_11f8 = _auStack_11b8;
            } while (uVar42 != uVar35);
          }
          break;
        }
        while( true ) {
          uVar35 = uVar38 & 0xfffffffffffffff0;
          pbVar33 = (byte *)(uVar35 + 0x20);
          if (uVar38 < 0x10) {
            pbVar33 = (byte *)0x0;
          }
          fVar184 = *(float *)(pbVar33 + 0x18);
          fVar166 = *(float *)(pbVar33 + 0x24);
          fVar99 = *(float *)(pbVar33 + 0x1c);
          fVar153 = *(float *)(pbVar33 + 0x28);
          fVar98 = *(float *)(pbVar33 + 0x20);
          pbVar1 = pbVar33 + uVar32;
          auVar103._0_4_ = -(uint)(pbVar33[4] < *pbVar33) ^ __LC0;
          auVar103._4_4_ = -(uint)(pbVar33[5] < pbVar33[1]) ^ _UNK_001151b4;
          auVar103._8_4_ = -(uint)(pbVar33[6] < pbVar33[2]) ^ _UNK_001151b8;
          auVar103._12_4_ = -(uint)(pbVar33[7] < pbVar33[3]) ^ _UNK_001151bc;
          uVar46 = movmskps((uint)pbVar33[1],auVar103);
          pbVar2 = pbVar33 + (uVar32 ^ 4);
          pbVar3 = pbVar33 + (ulong)(-(uint)(fVar67 < 0.0) & 4) + 8;
          pbVar4 = pbVar33 + (-(ulong)(fVar67 < 0.0) & 0xfffffffffffffffc) + 0xc;
          pbVar5 = pbVar33 + (ulong)(-(uint)(fVar69 < 0.0) & 4) + 0x10;
          fVar176 = *(float *)(pbVar33 + 0x2c);
          pbVar33 = pbVar33 + (-(ulong)(fVar69 < 0.0) & 0xfffffffffffffffc) + 0x14;
          auVar156._0_4_ = (((float)*pbVar1 * fVar166 + fVar184) - fVar26) * fVar57;
          auVar156._4_4_ = (((float)pbVar1[1] * fVar166 + fVar184) - fVar26) * fVar57;
          auVar156._8_4_ = (((float)pbVar1[2] * fVar166 + fVar184) - fVar26) * fVar57;
          auVar156._12_4_ = (((float)pbVar1[3] * fVar166 + fVar184) - fVar26) * fVar57;
          auVar102._0_4_ = ((fVar166 * (float)*pbVar2 + fVar184) - fVar26) * fVar57;
          auVar102._4_4_ = ((fVar166 * (float)pbVar2[1] + fVar184) - fVar26) * fVar57;
          auVar102._8_4_ = ((fVar166 * (float)pbVar2[2] + fVar184) - fVar26) * fVar57;
          auVar102._12_4_ = ((fVar166 * (float)pbVar2[3] + fVar184) - fVar26) * fVar57;
          auVar90._0_4_ = (((float)*pbVar3 * fVar153 + fVar99) - fVar27) * fVar67;
          auVar90._4_4_ = (((float)pbVar3[1] * fVar153 + fVar99) - fVar27) * fVar67;
          auVar90._8_4_ = (((float)pbVar3[2] * fVar153 + fVar99) - fVar27) * fVar67;
          auVar90._12_4_ = (((float)pbVar3[3] * fVar153 + fVar99) - fVar27) * fVar67;
          auVar135._0_4_ = ((fVar153 * (float)*pbVar4 + fVar99) - fVar27) * fVar67;
          auVar135._4_4_ = ((fVar153 * (float)pbVar4[1] + fVar99) - fVar27) * fVar67;
          auVar135._8_4_ = ((fVar153 * (float)pbVar4[2] + fVar99) - fVar27) * fVar67;
          auVar135._12_4_ = ((fVar153 * (float)pbVar4[3] + fVar99) - fVar27) * fVar67;
          auVar59 = maxps(auVar156,auVar90);
          auVar74._0_4_ = (((float)*pbVar5 * fVar176 + fVar98) - fVar28) * fVar69;
          auVar74._4_4_ = (((float)pbVar5[1] * fVar176 + fVar98) - fVar28) * fVar69;
          auVar74._8_4_ = (((float)pbVar5[2] * fVar176 + fVar98) - fVar28) * fVar69;
          auVar74._12_4_ = (((float)pbVar5[3] * fVar176 + fVar98) - fVar28) * fVar69;
          auVar103 = minps(auVar102,auVar135);
          auVar118._4_4_ = fVar87;
          auVar118._0_4_ = fVar87;
          auVar118._8_4_ = fVar87;
          auVar118._12_4_ = fVar87;
          auVar134 = maxps(auVar74,auVar118);
          auVar117._0_4_ = ((fVar176 * (float)*pbVar33 + fVar98) - fVar28) * fVar69;
          auVar117._4_4_ = ((fVar176 * (float)pbVar33[1] + fVar98) - fVar28) * fVar69;
          auVar117._8_4_ = ((fVar176 * (float)pbVar33[2] + fVar98) - fVar28) * fVar69;
          auVar117._12_4_ = ((fVar176 * (float)pbVar33[3] + fVar98) - fVar28) * fVar69;
          auVar118 = minps(auVar117,local_11f8);
          local_1038[0] = maxps(auVar59,auVar134);
          auVar59 = minps(auVar103,auVar118);
          auVar75._4_4_ = -(uint)(SUB164(local_1038[0],4) <= auVar59._4_4_);
          auVar75._0_4_ = -(uint)(SUB164(local_1038[0],0) <= auVar59._0_4_);
          auVar75._8_4_ = -(uint)(SUB164(local_1038[0],8) <= auVar59._8_4_);
          auVar75._12_4_ = -(uint)(SUB164(local_1038[0],0xc) <= auVar59._12_4_);
          uVar45 = movmskps((uint)pbVar33[3],auVar75);
          uVar42 = (ulong)(int)(uVar46 & uVar45);
          if (uVar42 == 0) break;
          lVar25 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
            }
          }
          uVar44 = *(ulong *)(uVar35 + lVar25 * 8);
          uVar42 = uVar42 - 1 & uVar42;
          uVar38 = uVar44;
          pauVar40 = pauVar39;
          if (uVar42 != 0) {
            uVar45 = *(uint *)(local_1038[0] + lVar25 * 4);
            lVar25 = 0;
            if (uVar42 != 0) {
              for (; (uVar42 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
              }
            }
            uVar38 = *(ulong *)(uVar35 + lVar25 * 8);
            uVar46 = *(uint *)(local_1038[0] + lVar25 * 4);
            uVar42 = uVar42 - 1 & uVar42;
            if (uVar42 == 0) {
              pauVar40 = pauVar39 + 1;
              if (uVar45 < uVar46) {
                *(ulong *)*pauVar39 = uVar38;
                *(uint *)(*pauVar39 + 8) = uVar46;
                uVar38 = uVar44;
              }
              else {
                *(ulong *)*pauVar39 = uVar44;
                *(uint *)(*pauVar39 + 8) = uVar45;
              }
            }
            else {
              lVar25 = 0;
              if (uVar42 != 0) {
                for (; (uVar42 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
                }
              }
              auVar124._8_4_ = uVar45;
              auVar124._0_8_ = uVar44;
              auVar124._12_4_ = 0;
              uVar44 = *(ulong *)(uVar35 + lVar25 * 8);
              auVar110._8_4_ = uVar46;
              auVar110._0_8_ = uVar38;
              auVar110._12_4_ = 0;
              iVar41 = *(int *)(local_1038[0] + lVar25 * 4);
              auVar80._8_4_ = iVar41;
              auVar80._0_8_ = uVar44;
              auVar80._12_4_ = 0;
              auVar66._8_4_ = -(uint)((int)uVar45 < (int)uVar46);
              uVar42 = uVar42 - 1 & uVar42;
              if (uVar42 == 0) {
                auVar66._4_4_ = auVar66._8_4_;
                auVar66._0_4_ = auVar66._8_4_;
                auVar66._12_4_ = auVar66._8_4_;
                pauVar40 = pauVar39 + 2;
                auVar118 = auVar124 & auVar66 | ~auVar66 & auVar110;
                auVar111._8_4_ = -(uint)(auVar118._8_4_ < iVar41);
                auVar59 = auVar66 & auVar110 | ~auVar66 & auVar124;
                auVar111._0_8_ = CONCAT44(auVar111._8_4_,auVar111._8_4_);
                auVar111._12_4_ = auVar111._8_4_;
                auVar134 = auVar80 & auVar111 | ~auVar111 & auVar118;
                uVar38 = auVar118._0_8_ & auVar111._0_8_ | ~auVar111._0_8_ & uVar44;
                auVar125._8_4_ = -(uint)(auVar59._8_4_ < auVar134._8_4_);
                auVar125._4_4_ = auVar125._8_4_;
                auVar125._0_4_ = auVar125._8_4_;
                auVar125._12_4_ = auVar125._8_4_;
                *pauVar39 = auVar134 & auVar125 | ~auVar125 & auVar59;
                pauVar39[1] = auVar59 & auVar125 | ~auVar125 & auVar134;
              }
              else {
                lVar25 = 0;
                if (uVar42 != 0) {
                  for (; (uVar42 >> lVar25 & 1) == 0; lVar25 = lVar25 + 1) {
                  }
                }
                pauVar40 = pauVar39 + 3;
                auVar152._8_4_ = *(int *)(local_1038[0] + lVar25 * 4);
                auVar152._0_8_ = *(undefined8 *)(uVar35 + lVar25 * 8);
                auVar152._12_4_ = 0;
                auVar92._4_4_ = auVar66._8_4_;
                auVar92._0_4_ = auVar66._8_4_;
                auVar92._8_4_ = auVar66._8_4_;
                auVar92._12_4_ = auVar66._8_4_;
                auVar156 = auVar124 & auVar92 | ~auVar92 & auVar110;
                auVar112._8_4_ = -(uint)(iVar41 < *(int *)(local_1038[0] + lVar25 * 4));
                auVar59 = auVar110 & auVar92 | ~auVar92 & auVar124;
                auVar112._4_4_ = auVar112._8_4_;
                auVar112._0_4_ = auVar112._8_4_;
                auVar112._12_4_ = auVar112._8_4_;
                auVar118 = auVar80 & auVar112 | ~auVar112 & auVar152;
                auVar134 = auVar152 & auVar112 | ~auVar112 & auVar80;
                auVar126._8_4_ = -(uint)(auVar59._8_4_ < auVar134._8_4_);
                auVar126._4_4_ = auVar126._8_4_;
                auVar126._0_4_ = auVar126._8_4_;
                auVar126._12_4_ = auVar126._8_4_;
                auVar103 = auVar59 & auVar126 | ~auVar126 & auVar134;
                auVar138._8_4_ = -(uint)(auVar156._8_4_ < auVar118._8_4_);
                *pauVar39 = auVar134 & auVar126 | ~auVar126 & auVar59;
                auVar138._0_8_ = CONCAT44(auVar138._8_4_,auVar138._8_4_);
                auVar138._12_4_ = auVar138._8_4_;
                auVar59 = auVar118 & auVar138 | ~auVar138 & auVar156;
                auVar93._8_4_ = -(uint)(auVar59._8_4_ < auVar103._8_4_);
                auVar93._4_4_ = auVar93._8_4_;
                auVar93._0_4_ = auVar93._8_4_;
                auVar93._12_4_ = auVar93._8_4_;
                pauVar39[2] = auVar59 & auVar93 | ~auVar93 & auVar103;
                uVar38 = auVar156._0_8_ & auVar138._0_8_ | ~auVar138._0_8_ & auVar118._0_8_;
                pauVar39[1] = auVar103 & auVar93 | ~auVar93 & auVar59;
              }
            }
          }
          pauVar39 = pauVar40;
          if ((uVar38 & 8) != 0) {
            uVar35 = (ulong)((uint)uVar38 & 0xf) - 8;
            if (uVar35 == 0) goto LAB_00114d80;
            goto LAB_0011426a;
          }
        }
        if (pauVar39 == (undefined1 (*) [16])local_f88) goto LAB_0011421a;
      }
      goto LAB_00113ec0;
    }
  }
LAB_0011421a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::VerifyMultiTargetLinking::getISA(int) */

undefined8 embree::VerifyMultiTargetLinking::getISA(int param_1)

{
  return 0x2000003;
}


