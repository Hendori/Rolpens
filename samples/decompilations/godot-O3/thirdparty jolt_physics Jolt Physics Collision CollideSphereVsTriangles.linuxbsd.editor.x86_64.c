
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideSphereVsTriangles::CollideSphereVsTriangles(JPH::SphereShape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeID const&,
   JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&) */

void __thiscall
JPH::CollideSphereVsTriangles::CollideSphereVsTriangles
          (uint param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          CollideSphereVsTriangles *this,long param_1,long param_7,float *param_8,
          undefined4 *param_9,long param_10,undefined8 param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  
  uVar8 = *(undefined8 *)param_8;
  uVar9 = *(undefined8 *)(param_8 + 2);
  fVar15 = *param_8;
  fVar16 = param_8[1];
  fVar1 = param_8[2];
  *(long *)this = param_10;
  fVar14 = *(float *)(param_7 + 0x30) - param_8[0xc];
  fVar18 = *(float *)(param_7 + 0x34) - param_8[0xd];
  fVar19 = *(float *)(param_7 + 0x38) - param_8[0xe];
  uVar10 = *(undefined8 *)(param_8 + 8);
  uVar11 = *(undefined8 *)(param_8 + 10);
  uVar13 = *param_9;
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined8 *)(this + 0x38) = uVar9;
  uVar8 = *(undefined8 *)(param_8 + 0xc);
  uVar9 = *(undefined8 *)(param_8 + 0xe);
  *(undefined8 *)(this + 0x50) = uVar10;
  *(undefined8 *)(this + 0x58) = uVar11;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = param_4;
  uVar10 = *(undefined8 *)(param_8 + 4);
  uVar11 = *(undefined8 *)(param_8 + 6);
  *(undefined8 *)(this + 0x60) = uVar8;
  *(undefined8 *)(this + 0x68) = uVar9;
  fVar2 = param_8[8];
  fVar3 = param_8[9];
  fVar4 = param_8[10];
  *(undefined8 *)(this + 0x40) = uVar10;
  *(undefined8 *)(this + 0x48) = uVar11;
  fVar5 = param_8[4];
  fVar6 = param_8[5];
  fVar7 = param_8[6];
  *(undefined8 *)(this + 8) = param_11;
  *(long *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x80) = uVar13;
  uVar13 = _LC1;
  auVar17._4_4_ = -(uint)((float)((ulong)param_3 >> 0x20) < 0.0);
  auVar17._0_4_ = -(uint)((float)param_3 < 0.0);
  auVar17._8_4_ = -(uint)((float)param_4 < 0.0);
  auVar17._12_4_ = -(uint)((float)((ulong)param_4 >> 0x20) < 0.0);
  *(float *)(this + 0x70) = fVar15 * fVar14 + fVar16 * fVar18 + fVar1 * fVar19;
  *(float *)(this + 0x74) = fVar5 * fVar14 + fVar6 * fVar18 + fVar7 * fVar19;
  *(float *)(this + 0x78) = fVar2 * fVar14 + fVar3 * fVar18 + fVar4 * fVar19;
  *(float *)(this + 0x7c) = fVar14 * 0.0 + fVar18 * 0.0 + fVar19 * 0.0;
  uVar12 = movmskps((int)param_7,auVar17);
  fVar15 = (float)(param_1_00 & __LC2) * *(float *)(param_1 + 0x2c);
  if ((POPCOUNT((byte)uVar12 & 7) & 1U) != 0) {
    uVar13 = _LC0;
  }
  fVar16 = fVar15 + *(float *)(param_10 + 0x20);
  *(ulong *)(this + 0x84) = CONCAT44(fVar15,uVar13);
  *(float *)(this + 0x8c) = fVar16 * fVar16;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideSphereVsTriangles::Collide(JPH::Vec3, JPH::Vec3, JPH::Vec3, unsigned char,
   JPH::SubShapeID const&) */

void JPH::CollideSphereVsTriangles::Collide
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7,byte param_8,
               undefined4 *param_9)

{
  float fVar1;
  char *pcVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [12];
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
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint local_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_248;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  long local_30;
  
  fVar36 = *(float *)(param_7 + 0xe);
  fVar37 = *(float *)((long)param_7 + 0x74);
  fVar38 = *(float *)(param_7 + 0xf);
  fVar34 = *(float *)((long)param_7 + 0x7c);
  fVar15 = *(float *)(param_7 + 4);
  fVar19 = *(float *)((long)param_7 + 0x24);
  fVar21 = *(float *)(param_7 + 5);
  fVar32 = *(float *)((long)param_7 + 0x2c);
  local_518._0_4_ = (float)param_1;
  local_518._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_510._0_4_ = (float)param_2;
  uStack_510._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_508 = (float)param_3;
  fStack_504 = (float)((ulong)param_3 >> 0x20);
  fStack_500 = (float)param_4;
  fStack_4fc = (float)((ulong)param_4 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar23 = (float)local_518 * fVar15 - fVar36;
  fVar26 = local_518._4_4_ * fVar19 - fVar37;
  fVar29 = (float)uStack_510 * fVar21 - fVar38;
  local_518 = CONCAT44(fVar26,fVar23);
  uStack_510 = CONCAT44(uStack_510._4_4_ * fVar32 - fVar34,fVar29);
  local_4f8._0_4_ = (float)param_5;
  local_4f8._4_4_ = (float)((ulong)param_5 >> 0x20);
  uStack_4f0._0_4_ = (float)param_6;
  uStack_4f0._4_4_ = (float)((ulong)param_6 >> 0x20);
  fVar24 = local_508 * fVar15 - fVar36;
  fVar27 = fStack_504 * fVar19 - fVar37;
  fVar30 = fStack_500 * fVar21 - fVar38;
  fVar15 = fVar15 * (float)local_4f8 - fVar36;
  fVar19 = fVar19 * local_4f8._4_4_ - fVar37;
  fVar21 = fVar21 * (float)uStack_4f0 - fVar38;
  local_4f8 = CONCAT44(fVar19,fVar15);
  uStack_4f0 = CONCAT44(fVar32 * uStack_4f0._4_4_ - fVar34,fVar21);
  fStack_500 = *(float *)((long)param_7 + 0x84);
  local_508 = ((fVar21 - fVar29) * (fVar27 - fVar26) - (fVar30 - fVar29) * (fVar19 - fVar26)) *
              fStack_500;
  fStack_504 = ((fVar15 - fVar23) * (fVar30 - fVar29) - (fVar24 - fVar23) * (fVar21 - fVar29)) *
               fStack_500;
  fStack_500 = ((fVar19 - fVar26) * (fVar24 - fVar23) - (fVar27 - fVar26) * (fVar15 - fVar23)) *
               fStack_500;
  pcVar2 = (char *)*param_7;
  fVar40 = fVar29 * fStack_500 + fStack_504 * fVar26 + local_508 * fVar23 + 0.0;
  if ((pcVar2[0x24] != '\0') || (fVar40 <= 0.0)) {
    auVar43 = ClosestPoint::GetClosestPointOnTriangle<false>
                        (local_518,uStack_510,CONCAT44(fVar27,fVar24),
                         CONCAT44(fStack_4fc * fVar32 - fVar34,fVar30),local_4f8,uStack_4f0,
                         &local_49c);
    fVar32 = auVar43._0_4_;
    fVar33 = auVar43._4_4_;
    fVar34 = auVar43._8_4_;
    fVar16 = fVar34 * fVar34 + fVar32 * fVar32 + 0.0 + fVar33 * fVar33;
    if (fVar16 < *(float *)((long)param_7 + 0x8c) || fVar16 == *(float *)((long)param_7 + 0x8c)) {
      fVar1 = *(float *)(param_7 + 0x11);
      plVar3 = (long *)param_7[1];
      auVar35._0_4_ = SQRT(fVar16);
      if ((float)((uint)(fVar1 - auVar35._0_4_) ^ __LC6) < *(float *)(plVar3 + 1)) {
        if (_LC9 < fVar16) {
          auVar35._4_4_ = auVar35._0_4_;
          auVar35._8_4_ = auVar35._0_4_;
          auVar35._12_4_ = auVar35._0_4_;
          auVar43 = divps(auVar43,auVar35);
          auVar18 = auVar43._0_12_;
        }
        else {
          auVar18 = SUB1612(__LC8,0);
        }
        fVar17 = auVar18._0_4_;
        fVar20 = auVar18._4_4_;
        fVar22 = auVar18._8_4_;
        fVar16 = *(float *)(param_7 + 8);
        fVar4 = *(float *)((long)param_7 + 0x44);
        fVar5 = *(float *)(param_7 + 9);
        fVar6 = *(float *)((long)param_7 + 0x4c);
        fVar7 = *(float *)(param_7 + 6);
        fVar8 = *(float *)((long)param_7 + 0x34);
        fVar9 = *(float *)(param_7 + 7);
        fVar10 = *(float *)((long)param_7 + 0x3c);
        fVar11 = *(float *)(param_7 + 10);
        fVar12 = *(float *)((long)param_7 + 0x54);
        fVar13 = *(float *)(param_7 + 0xb);
        fVar14 = *(float *)((long)param_7 + 0x5c);
        fVar39 = fVar20;
        if (((*pcVar2 == '\0') && (local_49c != 7)) &&
           ((*(byte *)((long)&sClosestFeatureToActiveEdgesMask + (ulong)local_49c) & param_8) == 0))
        {
          fVar25 = *(float *)(pcVar2 + 0x10);
          fVar28 = *(float *)(pcVar2 + 0x14);
          fVar31 = *(float *)(pcVar2 + 0x18);
          fVar41 = fVar7 * fVar25 + fVar8 * fVar28 + fVar31 * fVar9;
          fVar42 = fVar16 * fVar25 + fVar4 * fVar28 + fVar31 * fVar5;
          fVar25 = fVar11 * fVar25 + fVar12 * fVar28 + fVar31 * fVar13;
          if (fVar40 <= 0.0) {
            local_508 = 0.0 - local_508;
            fStack_504 = 0.0 - fStack_504;
            fStack_500 = 0.0 - fStack_500;
          }
          if (fStack_500 * fVar25 + fVar42 * fStack_504 + local_508 * fVar41 + 0.0 <=
              SQRT(fStack_500 * fStack_500 + fStack_504 * fStack_504 + local_508 * local_508 + 0.0)
              * (fVar22 * fVar25 + fVar20 * fVar42 + fVar17 * fVar41 + 0.0)) {
            auVar18._4_4_ = fStack_504;
            auVar18._0_4_ = local_508;
            auVar18._8_4_ = fStack_500;
            fVar39 = fStack_504;
          }
        }
        fVar25 = fVar1 * fVar17 + fVar36;
        fVar28 = fVar1 * fVar20 + fVar37;
        fVar31 = fVar1 * fVar22 + fVar38;
        fVar32 = fVar32 + fVar36;
        fVar33 = fVar33 + fVar37;
        fVar34 = fVar34 + fVar38;
        fVar40 = *(float *)(param_7 + 0xc);
        fVar17 = *(float *)((long)param_7 + 100);
        fVar20 = *(float *)(param_7 + 0xd);
        fVar22 = *(float *)((long)param_7 + 0x6c);
        local_45c = 0xffffffff;
        local_498 = fVar25 * fVar7 + fVar28 * fVar16 + fVar31 * fVar11 + fVar40;
        fStack_494 = fVar25 * fVar8 + fVar28 * fVar4 + fVar31 * fVar12 + fVar17;
        fStack_490 = fVar25 * fVar9 + fVar28 * fVar5 + fVar31 * fVar13 + fVar20;
        fStack_48c = fVar25 * fVar10 + fVar28 * fVar6 + fVar31 * fVar14 + fVar22;
        fVar25 = auVar18._0_4_;
        fVar28 = auVar18._8_4_;
        local_488 = fVar32 * fVar7 + fVar33 * fVar16 + fVar34 * fVar11 + fVar40;
        fStack_484 = fVar32 * fVar8 + fVar33 * fVar4 + fVar34 * fVar12 + fVar17;
        fStack_480 = fVar32 * fVar9 + fVar33 * fVar5 + fVar34 * fVar13 + fVar20;
        fStack_47c = fVar32 * fVar10 + fVar33 * fVar6 + fVar34 * fVar14 + fVar22;
        local_478 = fVar39 * fVar16 + fVar25 * fVar7 + fVar28 * fVar11;
        fStack_474 = fVar39 * fVar4 + fVar25 * fVar8 + fVar28 * fVar12;
        fStack_470 = fVar39 * fVar5 + fVar25 * fVar9 + fVar28 * fVar13;
        fStack_46c = fVar39 * fVar6 + fVar25 * fVar10 + fVar28 * fVar14;
        if (plVar3[2] != 0) {
          local_45c = *(undefined4 *)(plVar3[2] + 0x34);
        }
        local_464 = *(undefined4 *)(param_7 + 0x10);
        local_458 = 0;
        local_460 = *param_9;
        local_248 = 0;
        if (pcVar2[1] == '\0') {
          local_248 = 3;
          fVar23 = fVar23 + fVar36;
          fVar26 = fVar26 + fVar37;
          fVar29 = fVar29 + fVar38;
          local_238 = fVar29 * fVar11 + fVar23 * fVar7 + fVar26 * fVar16 + fVar40;
          fStack_234 = fVar29 * fVar12 + fVar23 * fVar8 + fVar26 * fVar4 + fVar17;
          fStack_230 = fVar29 * fVar13 + fVar23 * fVar9 + fVar26 * fVar5 + fVar20;
          fStack_22c = fVar29 * fVar14 + fVar23 * fVar10 + fVar26 * fVar6 + fVar22;
          fVar24 = fVar24 + fVar36;
          fVar27 = fVar27 + fVar37;
          fVar30 = fVar30 + fVar38;
          fVar36 = fVar36 + fVar15;
          fVar37 = fVar37 + fVar19;
          fVar38 = fVar38 + fVar21;
          local_228 = fVar30 * fVar11 + fVar24 * fVar7 + fVar27 * fVar16 + fVar40;
          fStack_224 = fVar30 * fVar12 + fVar24 * fVar8 + fVar27 * fVar4 + fVar17;
          fStack_220 = fVar30 * fVar13 + fVar24 * fVar9 + fVar27 * fVar5 + fVar20;
          fStack_21c = fVar30 * fVar14 + fVar24 * fVar10 + fVar27 * fVar6 + fVar22;
          local_218 = fVar36 * fVar7 + fVar37 * fVar16 + fVar38 * fVar11 + fVar40;
          fStack_214 = fVar36 * fVar8 + fVar37 * fVar4 + fVar38 * fVar12 + fVar17;
          fStack_210 = fVar36 * fVar9 + fVar37 * fVar5 + fVar38 * fVar13 + fVar20;
          fStack_20c = fVar36 * fVar10 + fVar37 * fVar6 + fVar38 * fVar14 + fVar22;
        }
        local_468 = fVar1 - auVar35._0_4_;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_498);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar19 = (float)((ulong)param_6 >> 0x20);
  uStack_90._0_4_ = (float)param_6;
  fVar15 = (float)((ulong)param_4 >> 0x20);
  fVar11 = (float)param_4;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  local_98._0_4_ = (undefined4)param_5;
  local_98._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulong)param_1 >> 0x20);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)local_98._0_4_ - local_78;
  fVar16 = (float)local_98._4_4_ - fStack_74;
  fVar17 = (float)uStack_90 - fVar11;
  fVar2 = ((float)uStack_90 - fVar4) * ((float)uStack_90 - fVar4) +
          ((float)local_98._0_4_ - local_88) * ((float)local_98._0_4_ - local_88) + 0.0 +
          ((float)local_98._4_4_ - fStack_84) * ((float)local_98._4_4_ - fStack_84);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  iVar1 = -(uint)(fVar18 < fVar2);
  uVar7 = iVar1 >> 0x1f;
  uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  fVar2 = (float)(local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88);
  fVar32 = (float)(local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84);
  fVar33 = (float)((uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4);
  fVar5 = (float)((uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6);
  fVar28 = local_78 - fVar2;
  fVar30 = fStack_74 - fVar32;
  fVar31 = fVar11 - fVar33;
  fVar29 = (float)(uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_);
  fVar22 = (float)(uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_);
  fVar10 = (float)(uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90);
  fVar13 = (float)(uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19);
  fVar20 = fVar29 - fVar2;
  fVar24 = fVar22 - fVar32;
  fVar26 = fVar10 - fVar33;
  fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
  fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
  fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
  fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
  if (fVar34 < _LC4) {
    fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ +
             (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
             (float)uStack_90 * (float)uStack_90;
    fVar29 = fVar4 * fVar4 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0;
    if (fVar29 < fVar22) {
      iVar1 = 1;
      local_98._0_4_ = local_88;
      local_98._4_4_ = fStack_84;
      uStack_90._0_4_ = fVar4;
      uStack_90._4_4_ = fVar6;
    }
    else {
      iVar1 = 4;
      uStack_90._4_4_ = fVar19;
      fVar29 = fVar22;
    }
    fVar22 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (fVar22 < fVar29) {
      iVar1 = 2;
      local_98._0_4_ = local_78;
      local_98._4_4_ = fStack_74;
      uStack_90._0_4_ = fVar11;
      uStack_90._4_4_ = fVar15;
      fVar29 = fVar22;
    }
    fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
    if (__LC5 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ __LC6) /
               fVar22;
      if (fVar22 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = _LC1;
        if (fVar22 <= _LC1) {
          fVar10 = fVar22;
        }
      }
      fVar2 = fVar10 * fVar20 + fVar2;
      fVar32 = fVar10 * fVar24 + fVar32;
      fVar33 = fVar10 * fVar26 + fVar33;
      fVar22 = fVar33 * fVar33 + fVar32 * fVar32 + fVar2 * fVar2 + 0.0;
      if (fVar22 < fVar29) {
        iVar1 = 5;
        local_98._0_4_ = fVar2;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar10 * (fVar13 - fVar5) + fVar5;
        fVar29 = fVar22;
      }
    }
    if (__LC5 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^
                      __LC6) / fVar18;
      if (fVar18 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = _LC1;
        if (fVar18 <= _LC1) {
          fVar2 = fVar18;
        }
      }
      fVar18 = fVar2 * fVar14 + local_78;
      fVar32 = fVar2 * fVar16 + fStack_74;
      fVar33 = fVar2 * fVar17 + fVar11;
      fVar5 = fVar33 * fVar33 + fVar18 * fVar18 + 0.0 + fVar32 * fVar32;
      if (fVar5 < fVar29) {
        iVar1 = 6;
        local_98._0_4_ = fVar18;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar2 * (fVar19 - fVar15) + fVar15;
        fVar29 = fVar5;
      }
    }
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar11 = fVar11 - fVar4;
    fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (__LC5 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     __LC6) / fVar2;
      if (fVar2 < 0.0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = _LC1;
        if (fVar2 <= _LC1) {
          fVar18 = fVar2;
        }
      }
      local_88 = fVar18 * local_78 + local_88;
      fStack_84 = fVar18 * fStack_74 + fStack_84;
      fVar4 = fVar18 * fVar11 + fVar4;
      if (fVar4 * fVar4 + local_88 * local_88 + 0.0 + fStack_84 * fStack_84 < fVar29) {
        iVar1 = 3;
        local_98._0_4_ = local_88;
        local_98._4_4_ = fStack_84;
        uStack_90._0_4_ = fVar4;
        uStack_90._4_4_ = fVar18 * (fVar15 - fVar6) + fVar6;
      }
    }
    *param_7 = iVar1;
    return _local_98;
  }
  fVar4 = (0.0 - fVar33) * fVar31 + fVar30 * (0.0 - fVar32) + (0.0 - fVar2) * fVar28 + 0.0;
  fVar18 = (0.0 - fVar33) * fVar26 + (0.0 - fVar32) * fVar24 + (0.0 - fVar2) * fVar20 + 0.0;
  if ((fVar4 <= 0.0) && (fVar18 <= 0.0)) {
    local_98._4_4_ = fVar32;
    local_98._0_4_ = fVar2;
    uStack_90._0_4_ = fVar33;
    uStack_90._4_4_ = fVar5;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_98;
  }
  fVar14 = (0.0 - fVar11) * fVar31 + fVar30 * (0.0 - fStack_74) + (0.0 - local_78) * fVar28 + 0.0;
  fVar6 = (0.0 - fVar11) * fVar26 + (0.0 - fStack_74) * fVar24 + (0.0 - local_78) * fVar20 + 0.0;
  if (fVar14 < 0.0) {
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_00100e9c;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_00100e9c:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar4 = fVar4 / (fVar4 - fVar14);
      local_98._4_4_ = fVar4 * fVar30 + fVar32;
      local_98._0_4_ = fVar4 * fVar28 + fVar2;
      uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
      uStack_90._4_4_ = fVar4 * (fVar15 - fVar5) + fVar5;
      return _local_98;
    }
  }
  fVar17 = fVar31 * (0.0 - fVar10) + fVar30 * (0.0 - fVar22) + fVar28 * (0.0 - fVar29) + 0.0;
  fVar16 = (0.0 - fVar10) * fVar26 + (0.0 - fVar22) * fVar24 + fVar20 * (0.0 - fVar29) + 0.0;
  if (fVar16 < 0.0) {
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_0010105a;
  }
  else {
    if (fVar17 <= fVar16) {
      local_98._4_4_ = fVar22;
      local_98._0_4_ = fVar29;
      uStack_90._4_4_ = fVar13;
      uStack_90._0_4_ = fVar10;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_98;
    }
    if (((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) && (fVar16 == 0.0)) {
LAB_0010105a:
      *param_7 = 5;
      fVar18 = fVar18 / (fVar18 - fVar16);
      local_98._4_4_ = fVar18 * fVar24 + fVar32;
      local_98._0_4_ = fVar18 * fVar20 + fVar2;
      uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
      uStack_90._4_4_ = fVar18 * (fVar13 - fVar5) + fVar5;
      return _local_98;
    }
  }
  if (((fVar6 * fVar17 < fVar14 * fVar16) || (fVar6 = fVar6 - fVar14, fVar6 < 0.0)) ||
     (fVar17 - fVar16 < 0.0)) {
    *param_7 = 7;
    fVar34 = fVar34 * __LC7;
    fVar2 = (fVar33 + fVar11 + fVar10) * fVar21 +
            fVar27 * (fVar32 + fStack_74 + fVar22) + fVar25 * (fVar2 + local_78 + fVar29) + 0.0;
    auVar23._0_4_ = fVar25 * fVar2;
    auVar23._4_4_ = fVar27 * fVar2;
    auVar23._8_4_ = fVar21 * fVar2;
    auVar23._12_4_ = fVar21 * fVar2;
    auVar3._4_4_ = fVar34;
    auVar3._0_4_ = fVar34;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar34;
    _local_98 = divps(auVar23,auVar3);
  }
  else {
    fVar6 = fVar6 / ((fVar17 - fVar16) + fVar6);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_98._4_4_ = (fVar22 - fStack_74) * fVar6 + fStack_74;
    local_98._0_4_ = (fVar29 - local_78) * fVar6 + local_78;
    uStack_90._0_4_ = (fVar10 - fVar11) * fVar6 + fVar11;
    uStack_90._4_4_ = (fVar13 - fVar15) * fVar6 + fVar15;
  }
  return _local_98;
}



/* JPH::CollideSphereVsTriangles::CollideSphereVsTriangles(JPH::SphereShape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeID const&,
   JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&) */

void JPH::CollideSphereVsTriangles::_GLOBAL__sub_I_CollideSphereVsTriangles(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC10;
  }
  return;
}


