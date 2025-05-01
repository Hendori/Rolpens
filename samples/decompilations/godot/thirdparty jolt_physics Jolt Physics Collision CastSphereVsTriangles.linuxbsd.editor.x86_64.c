
/* JPH::CastSphereVsTriangles::CastSphereVsTriangles(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Vec3, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::CastSphereVsTriangles::CastSphereVsTriangles
          (undefined8 param_1_00,undefined8 param_2_00,CastSphereVsTriangles *this,long *param_1,
          undefined8 param_2,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fStack_10;
  float fStack_c;
  
  fVar11 = (float)(*(uint *)(param_1 + 2) & _LC6);
  lVar5 = param_1[10];
  lVar6 = param_1[0xb];
  lVar7 = param_1[0xc];
  lVar8 = param_1[0xd];
  *(undefined8 *)(this + 0x28) = param_2;
  uVar2 = *param_7;
  *(undefined8 *)(this + 0x30) = param_6;
  *(undefined8 *)(this + 0x50) = uVar2;
  lVar3 = *param_1;
  *(undefined8 *)(this + 0x58) = param_8;
  fVar1 = *(float *)(lVar3 + 0x2c);
  *(long *)this = lVar5;
  *(long *)(this + 8) = lVar6;
  *(long *)(this + 0x10) = lVar7;
  *(long *)(this + 0x18) = lVar8;
  *(undefined8 *)(this + 0x40) = param_1_00;
  *(undefined8 *)(this + 0x48) = param_2_00;
  *(float *)(this + 0x20) = fVar11 * fVar1;
  fStack_10 = (float)param_2_00;
  fStack_c = (float)((ulong)param_2_00 >> 0x20);
  auVar4._4_4_ = -(uint)((float)((ulong)param_1_00 >> 0x20) < 0.0);
  auVar4._0_4_ = -(uint)((float)param_1_00 < 0.0);
  auVar4._8_4_ = -(uint)(fStack_10 < 0.0);
  auVar4._12_4_ = -(uint)(fStack_c < 0.0);
  uVar9 = movmskps((int)lVar3,auVar4);
  uVar10 = _LC3;
  if ((POPCOUNT((byte)uVar9 & 7) & 1U) != 0) {
    uVar10 = _LC5;
  }
  *(undefined4 *)(this + 0x60) = uVar10;
  return;
}



/* JPH::CastSphereVsTriangles::AddHit(bool, JPH::SubShapeID const&, float, JPH::Vec3, JPH::Vec3,
   JPH::Vec3) */

void JPH::CastSphereVsTriangles::AddHit
               (undefined4 param_3,undefined8 param_2,float param_3_00,undefined8 param_4,
               float param_5,undefined8 param_6,float param_7,float *param_8,undefined1 param_9,
               undefined4 *param_10)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_238;
  undefined4 local_28;
  undefined1 local_24;
  long local_10;
  
  fVar20 = (float)((ulong)param_6 >> 0x20);
  fVar19 = (float)param_6;
  fVar15 = (float)param_2 + *param_8;
  fVar17 = (float)((ulong)param_2 >> 0x20) + param_8[1];
  param_3_00 = param_3_00 + param_8[2];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar1 = *(float **)(param_8 + 0xc);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  fVar7 = pfVar1[4];
  fVar8 = pfVar1[5];
  fVar9 = pfVar1[6];
  fVar10 = pfVar1[7];
  fVar11 = pfVar1[8];
  fVar12 = pfVar1[9];
  fVar13 = pfVar1[10];
  fVar14 = pfVar1[0xb];
  local_44c = 0xffffffff;
  fVar16 = (float)param_4 + *param_8;
  fVar18 = (float)((ulong)param_4 >> 0x20) + param_8[1];
  param_5 = param_5 + param_8[2];
  plVar2 = *(long **)(param_8 + 0x16);
  local_488 = fVar15 * fVar3 + fVar17 * fVar7 + param_3_00 * fVar11 + pfVar1[0xc];
  fStack_484 = fVar15 * fVar4 + fVar17 * fVar8 + param_3_00 * fVar12 + pfVar1[0xd];
  fStack_480 = fVar15 * fVar5 + fVar17 * fVar9 + param_3_00 * fVar13 + pfVar1[0xe];
  fStack_47c = fVar15 * fVar6 + fVar17 * fVar10 + param_3_00 * fVar14 + pfVar1[0xf];
  local_478 = fVar16 * fVar3 + fVar18 * fVar7 + param_5 * fVar11 + pfVar1[0xc];
  fStack_474 = fVar16 * fVar4 + fVar18 * fVar8 + param_5 * fVar12 + pfVar1[0xd];
  fStack_470 = fVar16 * fVar5 + fVar18 * fVar9 + param_5 * fVar13 + pfVar1[0xe];
  fStack_46c = fVar16 * fVar6 + fVar18 * fVar10 + param_5 * fVar14 + pfVar1[0xf];
  local_468 = fVar19 * fVar3 + fVar20 * fVar7 + param_7 * fVar11;
  fStack_464 = fVar19 * fVar4 + fVar20 * fVar8 + param_7 * fVar12;
  fStack_460 = fVar19 * fVar5 + fVar20 * fVar9 + param_7 * fVar13;
  fStack_45c = fVar19 * fVar6 + fVar20 * fVar10 + param_7 * fVar14;
  if (plVar2[2] != 0) {
    local_44c = *(undefined4 *)(plVar2[2] + 0x34);
  }
  local_454 = param_8[0x14];
  local_448 = 0;
  local_450 = *param_10;
  local_238 = 0;
  local_458 = SQRT((fStack_470 - fStack_480) * (fStack_470 - fStack_480) +
                   (local_478 - local_488) * (local_478 - local_488) + 0.0 +
                   (fStack_474 - fStack_484) * (fStack_474 - fStack_484));
  local_28 = param_3;
  local_24 = param_9;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_488);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CastSphereVsTriangles::AddHitWithActiveEdgeDetection(JPH::Vec3, JPH::Vec3, JPH::Vec3, bool,
   JPH::Vec3, unsigned char, JPH::SubShapeID const&, float, JPH::Vec3, JPH::Vec3, JPH::Vec3) */

void __thiscall
JPH::CastSphereVsTriangles::AddHitWithActiveEdgeDetection
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,float param_8,
          CastSphereVsTriangles *this,char param_10,char param_11,undefined8 param_12)

{
  char *pcVar1;
  float *pfVar2;
  float fVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  float in_stack_00000040;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(char **)(this + 0x28);
  if ((*pcVar1 == '\0') && (param_11 != '\a')) {
    pfVar2 = *(float **)(this + 0x30);
    fVar6 = *(float *)(pcVar1 + 0x10);
    fVar3 = *(float *)(pcVar1 + 0x14);
    fVar7 = *(float *)(pcVar1 + 0x18);
    local_d8._0_4_ = (float)param_7;
    local_d8._4_4_ = (float)((ulong)param_7 >> 0x20);
    local_88 = (float)local_d8;
    fStack_84 = local_d8._4_4_;
    fVar4 = *pfVar2 * fVar6 + pfVar2[1] * fVar3 + pfVar2[2] * fVar7;
    fVar5 = pfVar2[4] * fVar6 + pfVar2[5] * fVar3 + pfVar2[6] * fVar7;
    fVar6 = pfVar2[8] * fVar6 + pfVar2[9] * fVar3 + pfVar2[10] * fVar7;
    fStack_80 = param_8;
    if (param_10 == '\0') {
      local_88 = 0.0 - (float)local_d8;
      fStack_84 = 0.0 - local_d8._4_4_;
      fStack_80 = 0.0 - param_8;
    }
    fVar3 = (float)in_stack_00000038;
    fVar8 = (float)((ulong)in_stack_00000038 >> 0x20);
    fVar7 = SQRT(in_stack_00000040 * in_stack_00000040 + fVar8 * fVar8 + fVar3 * fVar3 + 0.0);
    fVar9 = SQRT(fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0);
    if ((((fVar6 * fStack_80 + fVar5 * fStack_84 + fVar4 * local_88 + 0.0) * fVar7 <=
          (fVar6 * in_stack_00000040 + fVar5 * fVar8 + fVar4 * fVar3 + 0.0) * fVar9) &&
        (param_11 != '\0')) &&
       (in_stack_00000040 * fStack_80 + fVar8 * fStack_84 + fVar3 * local_88 + 0.0 <=
        fVar7 * __LC7 * fVar9)) {
      local_98 = (float)param_5;
      fStack_94 = (float)((ulong)param_5 >> 0x20);
      fStack_90 = (float)param_6;
      fStack_8c = (float)((ulong)param_6 >> 0x20);
      local_c8 = (float)in_stack_00000028;
      fStack_c4 = (float)((ulong)in_stack_00000028 >> 0x20);
      fStack_c0 = (float)in_stack_00000030;
      fStack_bc = (float)((ulong)in_stack_00000030 >> 0x20);
      local_d8 = CONCAT44(fStack_94 - fStack_c4,local_98 - local_c8);
      uStack_d0 = CONCAT44(fStack_8c - fStack_bc,fStack_90 - fStack_c0);
      local_a8._0_4_ = (float)param_3;
      local_a8._4_4_ = (float)((ulong)param_3 >> 0x20);
      uStack_a0._0_4_ = (float)param_4;
      uStack_a0._4_4_ = (float)((ulong)param_4 >> 0x20);
      local_a8 = CONCAT44(local_a8._4_4_ - fStack_c4,(float)local_a8 - local_c8);
      uStack_a0 = CONCAT44(uStack_a0._4_4_ - fStack_bc,(float)uStack_a0 - fStack_c0);
      local_b8._0_4_ = (float)param_1;
      local_b8._4_4_ = (float)((ulong)param_1 >> 0x20);
      uStack_b0._0_4_ = (float)param_2;
      uStack_b0._4_4_ = (float)((ulong)param_2 >> 0x20);
      local_b8 = CONCAT44(local_b8._4_4_ - fStack_c4,(float)local_b8 - local_c8);
      uStack_b0 = CONCAT44(uStack_b0._4_4_ - fStack_bc,(float)uStack_b0 - fStack_c0);
      ClosestPoint::GetBaryCentricCoordinates
                (local_b8,uStack_b0,local_a8,uStack_a0,local_d8,uStack_d0,&local_4c,&local_48,
                 &local_44);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  AddHit(this,param_10,param_12);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CastSphereVsTriangles::RayCylinder(JPH::Vec3, JPH::Vec3, JPH::Vec3, float) const */

ulong JPH::CastSphereVsTriangles::RayCylinder
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                undefined8 param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_28;
  float fStack_24;
  
  fVar2 = (float)param_2;
  fVar7 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  local_28 = (float)param_3;
  fStack_24 = (float)((ulong)param_3 >> 0x20);
  fVar4 = 0.0 - local_28;
  fVar5 = 0.0 - fStack_24;
  fVar6 = 0.0 - param_4;
  local_28 = (float)param_5 - local_28;
  fStack_24 = (float)((ulong)param_5 >> 0x20) - fStack_24;
  param_6 = param_6 - param_4;
  fVar8 = param_6 * fVar6 + fVar5 * fStack_24 + local_28 * fVar4 + 0.0;
  fVar10 = fVar2 * param_6 + fVar7 * fStack_24 + fVar3 * local_28 + 0.0;
  if (fVar8 < 0.0) {
    if (fVar10 + fVar8 < 0.0) goto LAB_00100850;
    fVar1 = param_6 * param_6 + fStack_24 * fStack_24 + local_28 * local_28 + 0.0;
  }
  else {
    fVar1 = param_6 * param_6 + fStack_24 * fStack_24 + local_28 * local_28 + 0.0;
    if ((fVar1 < fVar8) && (fVar1 < fVar10 + fVar8)) goto LAB_00100850;
  }
  fVar9 = (fVar2 * fVar2 + fVar7 * fVar7 + fVar3 * fVar3 + 0.0) * fVar1 - fVar10 * fVar10;
  if (_LC11 <= (float)((uint)fVar9 & _LC6)) {
    fVar3 = (fVar2 * fVar6 + fVar7 * fVar5 + fVar3 * fVar4 + 0.0) * fVar1 - fVar10 * fVar8;
    fVar7 = fVar3 * fVar3 -
            (((fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 + 0.0) - param_7 * param_7) * fVar1 -
            fVar8 * fVar8) * fVar9;
    if (fVar7 < 0.0) {
      return (ulong)_LC10;
    }
    fVar9 = (float)((uint)(fVar3 + SQRT(fVar7)) ^ _LC4) / fVar9;
    if ((((0.0 <= fVar9) && (fVar9 <= _LC3)) && (fVar8 = fVar10 * fVar9 + fVar8, 0.0 <= fVar8)) &&
       (fVar8 <= fVar1)) {
      return CONCAT44((uint)((ulong)param_2 >> 0x20) ^ _UNK_00102554,fVar9);
    }
  }
LAB_00100850:
  return (ulong)_LC10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CastSphereVsTriangles::Cast(JPH::Vec3, JPH::Vec3, JPH::Vec3, unsigned char, JPH::SubShapeID
   const&) */

void JPH::CastSphereVsTriangles::Cast
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,float *param_7,undefined1 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar13;
  float fVar15;
  float fVar17;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined8 uVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar34;
  undefined8 uVar33;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_3c;
  float local_38;
  float local_34;
  long local_30;
  
  uVar34 = (undefined4)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  fVar30 = param_7[0x10];
  fVar5 = param_7[0x11];
  fVar7 = param_7[0x12];
  fVar31 = param_7[0x13];
  local_d8._0_4_ = (float)param_1;
  local_d8._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_d0._0_4_ = (float)param_2;
  uStack_d0._4_4_ = (float)((ulong)param_2 >> 0x20);
  fVar4 = *param_7;
  fVar13 = param_7[1];
  fVar15 = param_7[2];
  fVar17 = param_7[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar18 = (float)local_d8 * fVar30 - fVar4;
  fVar22 = local_d8._4_4_ * fVar5 - fVar13;
  fVar24 = (float)uStack_d0 * fVar7 - fVar15;
  fVar26 = uStack_d0._4_4_ * fVar31 - fVar17;
  local_d8 = (CastSphereVsTriangles *)CONCAT44(fVar22,fVar18);
  uStack_d0 = CONCAT44(fVar26,fVar24);
  local_c8 = (float)param_3;
  fStack_c4 = (float)((ulong)param_3 >> 0x20);
  uStack_c0._0_4_ = (float)param_4;
  uStack_c0._4_4_ = (float)((ulong)param_4 >> 0x20);
  local_b8._0_4_ = (float)param_5;
  local_b8._4_4_ = (float)((ulong)param_5 >> 0x20);
  uStack_b0._0_4_ = (float)param_6;
  uStack_b0._4_4_ = (float)((ulong)param_6 >> 0x20);
  fVar19 = local_c8 * fVar30 - fVar4;
  fVar23 = fStack_c4 * fVar5 - fVar13;
  fVar25 = (float)uStack_c0 * fVar7 - fVar15;
  fVar27 = uStack_c0._4_4_ * fVar31 - fVar17;
  fVar4 = fVar30 * (float)local_b8 - fVar4;
  fVar13 = fVar5 * local_b8._4_4_ - fVar13;
  fVar15 = fVar7 * (float)uStack_b0 - fVar15;
  fVar17 = fVar31 * uStack_b0._4_4_ - fVar17;
  local_b8 = CONCAT44(fVar13,fVar4);
  uStack_b0 = CONCAT44(fVar17,fVar15);
  fVar5 = (fVar13 - fVar22) * (fVar19 - fVar18) - (fVar23 - fVar22) * (fVar4 - fVar18);
  fVar30 = param_7[0x18];
  auVar10._0_4_ =
       ((fVar15 - fVar24) * (fVar23 - fVar22) - (fVar25 - fVar24) * (fVar13 - fVar22)) * fVar30;
  auVar10._4_4_ =
       ((fVar4 - fVar18) * (fVar25 - fVar24) - (fVar19 - fVar18) * (fVar15 - fVar24)) * fVar30;
  auVar10._8_4_ = fVar5 * fVar30;
  auVar10._12_4_ = fVar5 * fVar30;
  auVar32._0_4_ =
       SQRT(auVar10._8_4_ * auVar10._8_4_ +
            auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_ + 0.0);
  if (auVar32._0_4_ != 0.0) {
    auVar32._4_4_ = auVar32._0_4_;
    auVar32._8_4_ = auVar32._0_4_;
    auVar32._12_4_ = auVar32._0_4_;
    auVar10 = divps(auVar10,auVar32);
    uVar33 = *(undefined8 *)(param_7 + 4);
    fVar5 = auVar10._0_4_;
    fVar7 = auVar10._4_4_;
    uStack_c0._0_4_ = auVar10._8_4_;
    fVar30 = (float)uStack_c0;
    uVar21 = *(undefined8 *)(param_7 + 6);
    fVar31 = param_7[6] * (float)uStack_c0 + param_7[5] * fVar7 + param_7[4] * fVar5 + 0.0;
    if ((*(char *)(*(long *)(param_7 + 10) + 0x20) != '\0') || (fVar31 <= 0.0)) {
      fVar9 = param_7[8];
      fVar6 = fVar24 * (float)uStack_c0;
      uStack_c0 = auVar10._8_8_;
      uVar1 = uStack_c0;
      if ((float)((uint)(fVar6 + fVar22 * fVar7 + fVar18 * fVar5 + 0.0) & _LC6) <= fVar9) {
        auVar32 = ClosestPoint::GetClosestPointOnTriangle<false>
                            (local_d8,uStack_d0,CONCAT44(fVar23,fVar19),CONCAT44(fVar27,fVar25),
                             local_b8,uStack_b0,&local_34);
        fStack_90 = auVar32._8_4_;
        fVar30 = fStack_90 * fStack_90 +
                 auVar32._0_4_ * auVar32._0_4_ + 0.0 + auVar32._4_4_ * auVar32._4_4_;
        if (fVar9 * fVar9 < fVar30) {
          uVar33 = *(undefined8 *)(param_7 + 4);
          uVar21 = *(undefined8 *)(param_7 + 6);
          fVar30 = *(float *)(*(long *)(param_7 + 0x16) + 8);
          goto LAB_00100a65;
        }
        auVar12._0_4_ = SQRT(fVar30);
        if (*(float *)(*(long *)(param_7 + 0x16) + 8) <=
            (float)((uint)(fVar9 - auVar12._0_4_) ^ _LC4)) goto LAB_00100f20;
        if (0.0 < auVar12._0_4_) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_4_ = auVar12._0_4_;
          auVar12._12_4_ = auVar12._0_4_;
          divps(auVar32,auVar12);
        }
        uVar33 = 0;
      }
      else {
        if (_LC11 < (float)(_LC6 & (uint)fVar31)) {
          fVar6 = fVar9;
          if (fVar31 < 0.0) {
            fVar6 = (float)((uint)fVar9 ^ _LC4);
          }
          uStack_c0._4_4_ = auVar10._12_4_;
          fVar28 = fVar6 * fVar30;
          fVar8 = ((fVar24 - fVar28) * fVar30 +
                  fVar7 * (fVar22 - fVar6 * fVar7) + (fVar18 - fVar6 * fVar5) * fVar5 + 0.0) /
                  fVar31;
          if (((float)(_LC6 & (uint)fVar31) * fVar8 < (float)(_LC4 ^ (uint)fVar9)) ||
             (fVar30 = *(float *)(*(long *)(param_7 + 0x16) + 8), fVar30 <= fVar8))
          goto LAB_00100f20;
          if (0.0 <= fVar8) {
            fVar5 = fVar8 * param_7[4] + fVar6 * fVar5;
            fVar7 = fVar8 * param_7[5] + fVar6 * fVar7;
            fVar28 = fVar8 * param_7[6] + fVar28;
            fVar6 = fVar8 * param_7[7] + fVar6 * uStack_c0._4_4_;
            local_88 = CONCAT44(fVar13 - fVar7,fVar4 - fVar5);
            uStack_80._0_4_ = fVar15 - fVar28;
            uStack_80._4_4_ = fVar17 - fVar6;
            cVar2 = ClosestPoint::GetBaryCentricCoordinates
                              (CONCAT44(fVar22 - fVar7,fVar18 - fVar5),
                               CONCAT44(fVar26 - fVar6,fVar24 - fVar28),
                               CONCAT44(fVar23 - fVar7,fVar19 - fVar5),
                               CONCAT44(fVar27 - fVar6,fVar25 - fVar28),local_88,uStack_80,&local_3c
                               ,&local_38,&local_34);
            if ((((cVar2 != '\0') && (0.0 <= local_3c)) && (0.0 <= local_38)) && (0.0 <= local_34))
            {
              if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                AddHit(param_7,0.0 < fVar31,param_9);
                return;
              }
              goto LAB_001014ea;
            }
            uVar33 = *(undefined8 *)(param_7 + 4);
            uVar21 = *(undefined8 *)(param_7 + 6);
          }
        }
        else {
          fVar30 = *(float *)(*(long *)(param_7 + 0x16) + 8);
        }
LAB_00100a65:
        fVar9 = fVar9 * fVar9;
        uVar3 = CONCAT44(fVar27,fVar25);
        fVar7 = (float)RayCylinder(uVar33,uVar21,local_d8,uStack_d0,CONCAT44(fVar23,fVar19),uVar3,
                                   param_7);
        fVar5 = (float)RayCylinder(uVar33,uVar21,CONCAT44(fVar23,fVar19),uVar3,local_b8,uStack_b0);
        if (fVar7 <= fVar5) {
          fVar5 = fVar7;
        }
        fVar7 = (float)RayCylinder(uVar33,uVar21,local_b8,extraout_RDX,local_d8);
        fVar6 = (float)uVar33;
        fVar28 = (float)((ulong)uVar33 >> 0x20);
        if (fVar5 <= fVar7) {
          fVar7 = fVar5;
        }
        fVar20 = (float)uVar21;
        fVar8 = 0.0 - fVar18;
        fVar14 = 0.0 - fVar22;
        fVar16 = 0.0 - fVar24;
        fVar29 = fVar20 * fVar20 + fVar28 * fVar28 + fVar6 * fVar6 + 0.0;
        fVar5 = fVar20 * fVar16 + fVar28 * fVar14 + fVar6 * fVar8 + 0.0;
        fVar5 = fVar5 + fVar5;
        fVar8 = (fVar16 * fVar16 + fVar14 * fVar14 + fVar8 * fVar8 + 0.0) - fVar9;
        if (fVar29 == 0.0) {
          if (fVar5 == 0.0) goto LAB_00101200;
          fVar5 = (float)((uint)fVar8 ^ _LC4) / fVar5;
          fVar14 = fVar5;
LAB_00100bf9:
          if ((fVar14 < 0.0) && (fVar14 = 0.0, fVar5 < 0.0)) goto LAB_00100c0a;
        }
        else {
          fVar14 = fVar5 * fVar5 - _LC15 * fVar29 * fVar8;
          if (0.0 <= fVar14) {
            fVar16 = _LC5;
            if (0.0 <= fVar5) {
              fVar16 = _LC3;
            }
            fVar16 = (SQRT(fVar14) * fVar16 + fVar5) * __LC16;
            fVar29 = fVar16 / fVar29;
            fVar5 = fVar29;
            fVar14 = fVar29;
            if ((fVar16 != 0.0) && (fVar14 = fVar8 / fVar16, fVar29 <= fVar14)) {
              fVar5 = fVar14;
              fVar14 = fVar29;
            }
            goto LAB_00100bf9;
          }
LAB_00101200:
          fVar14 = 0.0;
          if (0.0 < fVar8) {
LAB_00100c0a:
            fVar14 = _LC10;
          }
        }
        fVar5 = 0.0 - fVar19;
        fVar8 = 0.0 - fVar23;
        fVar16 = 0.0 - fVar25;
        if (fVar7 <= fVar14) {
          fVar14 = fVar7;
        }
        fVar29 = fVar20 * fVar20 + fVar28 * fVar28 + fVar6 * fVar6 + 0.0;
        fVar7 = fVar20 * fVar16 + fVar28 * fVar8 + fVar6 * fVar5 + 0.0;
        fVar7 = fVar7 + fVar7;
        fVar5 = (fVar16 * fVar16 + fVar8 * fVar8 + fVar5 * fVar5 + 0.0) - fVar9;
        if (fVar29 == 0.0) {
          if (fVar7 == 0.0) goto LAB_00101218;
          fVar7 = (float)((uint)fVar5 ^ _LC4) / fVar7;
          fVar8 = fVar7;
LAB_00100cd8:
          if ((fVar8 < 0.0) && (fVar8 = 0.0, fVar7 < 0.0)) goto LAB_00100ce9;
        }
        else {
          fVar8 = fVar7 * fVar7 - _LC15 * fVar29 * fVar5;
          if (0.0 <= fVar8) {
            fVar16 = _LC5;
            if (0.0 <= fVar7) {
              fVar16 = _LC3;
            }
            fVar16 = (fVar7 + fVar16 * SQRT(fVar8)) * __LC16;
            fVar29 = fVar16 / fVar29;
            fVar7 = fVar29;
            fVar8 = fVar29;
            if ((fVar16 != 0.0) && (fVar8 = fVar5 / fVar16, fVar29 <= fVar8)) {
              fVar7 = fVar8;
              fVar8 = fVar29;
            }
            goto LAB_00100cd8;
          }
LAB_00101218:
          fVar8 = 0.0;
          if (0.0 < fVar5) {
LAB_00100ce9:
            fVar8 = _LC10;
          }
        }
        if (fVar14 <= fVar8) {
          fVar8 = fVar14;
        }
        fVar7 = 0.0 - fVar4;
        fVar14 = 0.0 - fVar13;
        fVar16 = 0.0 - fVar15;
        fVar29 = fVar20 * fVar20 + fVar28 * fVar28 + fVar6 * fVar6 + 0.0;
        fVar5 = fVar20 * fVar16 + fVar28 * fVar14 + fVar6 * fVar7 + 0.0;
        fVar5 = fVar5 + fVar5;
        fVar9 = (fVar16 * fVar16 + fVar14 * fVar14 + fVar7 * fVar7 + 0.0) - fVar9;
        if (fVar29 == 0.0) {
          if (fVar5 == 0.0) goto LAB_00101230;
          fVar5 = (float)((uint)fVar9 ^ _LC4) / fVar5;
          fVar7 = fVar5;
LAB_00100daa:
          if ((fVar7 < 0.0) && (fVar7 = 0.0, fVar5 < 0.0)) goto LAB_00100dbb;
        }
        else {
          fVar7 = fVar5 * fVar5 - _LC15 * fVar29 * fVar9;
          if (0.0 <= fVar7) {
            fVar6 = _LC5;
            if (0.0 <= fVar5) {
              fVar6 = _LC3;
            }
            fVar6 = (SQRT(fVar7) * fVar6 + fVar5) * __LC16;
            fVar29 = fVar6 / fVar29;
            fVar5 = fVar29;
            fVar7 = fVar29;
            if ((fVar6 != 0.0) && (fVar7 = fVar9 / fVar6, fVar29 <= fVar7)) {
              fVar5 = fVar7;
              fVar7 = fVar29;
            }
            goto LAB_00100daa;
          }
LAB_00101230:
          fVar7 = 0.0;
          if (0.0 < fVar9) {
LAB_00100dbb:
            fVar7 = _LC10;
          }
        }
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        if (fVar30 <= fVar7) goto LAB_00100f20;
        fVar30 = fVar7 * param_7[4];
        fVar5 = fVar7 * param_7[5];
        fVar9 = fVar7 * param_7[6];
        fVar6 = fVar7 * param_7[7];
        local_88 = CONCAT44(fVar23 - fVar5,fVar19 - fVar30);
        uStack_80._0_4_ = fVar25 - fVar9;
        uStack_80._4_4_ = fVar27 - fVar6;
        auVar32 = ClosestPoint::GetClosestPointOnTriangle<false>
                            (CONCAT44(fVar22 - fVar5,fVar18 - fVar30),
                             CONCAT44(fVar26 - fVar6,fVar24 - fVar9),local_88,uStack_80,
                             CONCAT44(fVar13 - fVar5,fVar4 - fVar30),
                             CONCAT44(fVar17 - fVar6,fVar15 - fVar9),&local_34);
        local_98 = auVar32._0_4_;
        fStack_94 = auVar32._4_4_;
        fStack_90 = auVar32._8_4_;
        auVar11._0_4_ =
             SQRT(fStack_90 * fStack_90 + local_98 * local_98 + 0.0 + fStack_94 * fStack_94);
        auVar11._4_4_ = auVar11._0_4_;
        auVar11._8_4_ = auVar11._0_4_;
        auVar11._12_4_ = auVar11._0_4_;
        divps(auVar32,auVar11);
        uVar33 = CONCAT44(uVar34,fVar7);
      }
      AddHitWithActiveEdgeDetection
                (local_d8,uStack_d0,CONCAT44(fVar23,fVar19),CONCAT44(fVar27,fVar25),local_b8,
                 uStack_b0,auVar10._0_8_,uVar1,param_7,0.0 < fVar31,param_8,param_9,param_11,
                 param_12,uVar33);
    }
  }
LAB_00100f20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001014ea:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ClosestPoint::GetBaryCentricCoordinates(JPH::Vec3, JPH::Vec3, JPH::Vec3, float&, float&,
   float&) */

undefined8
JPH::ClosestPoint::GetBaryCentricCoordinates
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fVar15;
  float local_38;
  float fStack_34;
  float local_18;
  float fStack_14;
  
  fVar2 = _LC3;
  fVar12 = (float)((ulong)param_5 >> 0x20);
  fVar11 = (float)param_5;
  local_18 = (float)param_3;
  fStack_14 = (float)((ulong)param_3 >> 0x20);
  local_38 = (float)param_1;
  fStack_34 = (float)((ulong)param_1 >> 0x20);
  fVar8 = local_18 - local_38;
  fVar9 = fStack_14 - fStack_34;
  fVar10 = param_4 - param_2;
  fVar5 = fVar11 - local_38;
  fVar6 = fVar12 - fStack_34;
  fVar7 = param_6 - param_2;
  fVar1 = fVar11 - local_18;
  fVar3 = fVar12 - fStack_14;
  fVar4 = param_6 - param_4;
  fVar15 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
  fVar14 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 + 0.0;
  fVar13 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + 0.0;
  if (fVar13 < fVar15) {
    fVar15 = fVar4 * fVar7 + fVar6 * fVar3 + fVar5 * fVar1 + 0.0;
    fVar8 = fVar13 * fVar14 - fVar15 * fVar15;
    if (_LC1 <= fVar8) {
      fVar5 = fVar7 * param_6 + fVar6 * fVar12 + fVar5 * fVar11 + 0.0;
      fVar1 = fVar4 * param_6 + fVar12 * fVar3 + fVar11 * fVar1 + 0.0;
      fVar14 = (fVar1 * fVar14 - fVar15 * fVar5) / fVar8;
      *param_7 = (fVar13 * fVar5 - fVar15 * fVar1) / fVar8;
      *param_8 = fVar14;
      *param_9 = (fVar2 - *param_7) - fVar14;
      return 1;
    }
    if (fVar14 <= fVar13) {
      if (fVar13 < _LC2) {
        if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <=
            param_4 * param_4 + fStack_14 * fStack_14 + local_18 * local_18 + 0.0) {
          *param_8 = 0.0;
          *param_9 = 1.0;
        }
        else {
          *param_8 = 1.0;
          *param_9 = 0.0;
        }
      }
      else {
        fVar13 = (float)((uint)(fVar4 * param_4 + fStack_14 * fVar3 + local_18 * fVar1 + 0.0) ^ _LC4
                        ) / fVar13;
        fVar2 = _LC3 - fVar13;
        *param_9 = fVar13;
        *param_8 = fVar2;
      }
      *param_7 = 0.0;
      return 0;
    }
    if (_LC2 <= fVar14) {
      fVar2 = fStack_34 * fVar6 + local_38 * fVar5 + 0.0;
      goto LAB_00101805;
    }
    fVar2 = fStack_34 * fStack_34 + local_38 * local_38 + 0.0;
  }
  else {
    fVar2 = fVar7 * fVar10 + fVar6 * fVar9 + fVar5 * fVar8 + 0.0;
    fVar1 = fVar14 * fVar15 - fVar2 * fVar2;
    if (_LC1 <= fVar1) {
      fVar13 = fVar10 * param_2 + fVar9 * fStack_34 + fVar8 * local_38 + 0.0;
      fVar3 = fStack_34 * fVar6 + local_38 * fVar5 + 0.0 + param_2 * fVar7;
      fVar15 = (fVar2 * fVar13 - fVar3 * fVar15) / fVar1;
      *param_8 = (fVar2 * fVar3 - fVar14 * fVar13) / fVar1;
      fVar2 = _LC3;
      *param_9 = fVar15;
      *param_7 = (fVar2 - *param_8) - fVar15;
      return 1;
    }
    if (fVar14 < fVar15) {
      if (fVar15 < _LC2) {
        if (param_4 * param_4 + fStack_14 * fStack_14 + local_18 * local_18 + 0.0 <=
            param_2 * param_2 + fStack_34 * fStack_34 + local_38 * local_38 + 0.0) {
          *param_7 = 0.0;
          *param_8 = 1.0;
        }
        else {
          *param_7 = 1.0;
          *param_8 = 0.0;
        }
      }
      else {
        fVar15 = (float)((uint)(fStack_34 * fVar9 + local_38 * fVar8 + 0.0 + param_2 * fVar10) ^
                        _LC4) / fVar15;
        fVar2 = _LC3 - fVar15;
        *param_8 = fVar15;
        *param_7 = fVar2;
      }
      *param_9 = 0.0;
      return 0;
    }
    if (_LC2 <= fVar14) {
      fVar2 = fStack_34 * fVar6 + local_38 * fVar5 + 0.0;
LAB_00101805:
      fVar14 = (float)((uint)(fVar2 + fVar7 * param_2) ^ _LC4) / fVar14;
      fVar2 = _LC3 - fVar14;
      *param_9 = fVar14;
      *param_7 = fVar2;
      goto LAB_00101832;
    }
    fVar2 = fStack_34 * fStack_34 + local_38 * local_38 + 0.0;
  }
  if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <= param_2 * param_2 + fVar2) {
    *param_7 = 0.0;
    *param_9 = 1.0;
  }
  else {
    *param_7 = 1.0;
    *param_9 = 0.0;
  }
LAB_00101832:
  *param_8 = 0.0;
  return 0;
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
  if (fVar34 < _LC12) {
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
    if (_LC2 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ _LC4) /
               fVar22;
      if (fVar22 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = _LC3;
        if (fVar22 <= _LC3) {
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
    if (_LC2 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^ _LC4
                      ) / fVar18;
      if (fVar18 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = _LC3;
        if (fVar18 <= _LC3) {
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
    if (_LC2 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     _LC4) / fVar2;
      if (fVar2 < 0.0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = _LC3;
        if (fVar2 <= _LC3) {
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
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_001022ec;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_001022ec:
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
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_001024aa;
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
LAB_001024aa:
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
    fVar34 = fVar34 * __LC13;
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



/* JPH::CastSphereVsTriangles::CastSphereVsTriangles(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Vec3, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::CastSphereVsTriangles::_GLOBAL__sub_I_CastSphereVsTriangles(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC17;
  }
  return;
}


