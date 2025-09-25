/* JPH::TriangleShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::TriangleShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5)

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
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar18 = (float)((ulong)param_2 >> 0x20);
  fVar17 = (float)param_2;
  fVar16 = (float)((ulong)param_1 >> 0x20);
  fVar15 = (float)param_1;
  if (param_4 != 0) {
    puVar14 = (undefined8 *)0x0;
    if (param_4 - 1U < 2) {
      fVar1 = *(float *)(param_3 + 0x60);
      if (fVar1 <= 0.0) goto LAB_00100068;
      fVar2 = *(float *)(param_3 + 0x40);
      fVar3 = *(float *)(param_3 + 0x44);
      fVar4 = *(float *)(param_3 + 0x48);
      fVar5 = *(float *)(param_3 + 0x4c);
      fVar6 = *(float *)(param_3 + 0x30);
      fVar7 = *(float *)(param_3 + 0x34);
      fVar8 = *(float *)(param_3 + 0x38);
      fVar9 = *(float *)(param_3 + 0x3c);
      fVar10 = *(float *)(param_3 + 0x50);
      fVar11 = *(float *)(param_3 + 0x54);
      fVar12 = *(float *)(param_3 + 0x58);
      fVar13 = *(float *)(param_3 + 0x5c);
      *param_5 = &PTR__TriangleWithConvex_001035a8;
      *(float *)(param_5 + 1) = fVar1;
      *(float *)(param_5 + 2) = fVar6 * fVar15;
      *(float *)((long)param_5 + 0x14) = fVar7 * fVar16;
      *(float *)(param_5 + 3) = fVar8 * fVar17;
      *(float *)((long)param_5 + 0x1c) = fVar9 * fVar18;
      *(float *)(param_5 + 4) = fVar2 * fVar15;
      *(float *)((long)param_5 + 0x24) = fVar3 * fVar16;
      *(float *)(param_5 + 5) = fVar4 * fVar17;
      *(float *)((long)param_5 + 0x2c) = fVar5 * fVar18;
      *(float *)(param_5 + 6) = fVar15 * fVar10;
      *(float *)((long)param_5 + 0x34) = fVar16 * fVar11;
      *(float *)(param_5 + 7) = fVar17 * fVar12;
      *(float *)((long)param_5 + 0x3c) = fVar18 * fVar13;
      puVar14 = param_5;
    }
    return puVar14;
  }
LAB_00100068:
  fVar1 = *(float *)(param_3 + 0x50);
  fVar2 = *(float *)(param_3 + 0x54);
  fVar3 = *(float *)(param_3 + 0x58);
  fVar4 = *(float *)(param_3 + 0x5c);
  fVar5 = *(float *)(param_3 + 0x40);
  fVar6 = *(float *)(param_3 + 0x44);
  fVar7 = *(float *)(param_3 + 0x48);
  fVar8 = *(float *)(param_3 + 0x4c);
  fVar9 = *(float *)(param_3 + 0x30);
  fVar10 = *(float *)(param_3 + 0x34);
  fVar11 = *(float *)(param_3 + 0x38);
  fVar12 = *(float *)(param_3 + 0x3c);
  *param_5 = &PTR__TriangleNoConvex_00103578;
  *(float *)(param_5 + 6) = fVar1 * fVar15;
  *(float *)((long)param_5 + 0x34) = fVar2 * fVar16;
  *(float *)(param_5 + 7) = fVar3 * fVar17;
  *(float *)((long)param_5 + 0x3c) = fVar4 * fVar18;
  *(float *)(param_5 + 4) = fVar5 * fVar15;
  *(float *)((long)param_5 + 0x24) = fVar6 * fVar16;
  *(float *)(param_5 + 5) = fVar7 * fVar17;
  *(float *)((long)param_5 + 0x2c) = fVar8 * fVar18;
  *(float *)(param_5 + 2) = fVar15 * fVar9;
  *(float *)((long)param_5 + 0x14) = fVar16 * fVar10;
  *(float *)(param_5 + 3) = fVar17 * fVar11;
  *(float *)((long)param_5 + 0x1c) = fVar18 * fVar12;
  return param_5;
}



/* JPH::TriangleShape::GetMassProperties() const */

TriangleShape * __thiscall JPH::TriangleShape::GetMassProperties(TriangleShape *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  return this;
}



/* JPH::TriangleShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::TriangleShape::GetSubmergedVolume(void)

{
  undefined4 *in_RCX;
  undefined4 *in_R8;
  undefined1 (*in_R9) [16];
  
  *in_R8 = 0;
  *in_RCX = 0;
  *in_R9 = (undefined1  [16])0x0;
  return;
}



/* JPH::TriangleShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::TriangleShape::CollidePoint(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::TriangleShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6,long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  float fStack_a4;
  float local_98 [20];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar10 = (float)((ulong)param_4 >> 0x20);
  fVar9 = (float)param_4;
  fVar5 = (float)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = ZEXT416(param_6) << 0x40;
  local_48 = ZEXT416((uint)((ulong)param_5 >> 0x20)) << 0x20;
  fVar6 = (float)((ulong)param_3 >> 0x20);
  fVar12 = fVar6 + fVar6;
  local_28 = __LC2;
  uStack_20 = CONCAT44(_LC3,_UNK_001035f8);
  fVar8 = fVar5 + fVar5;
  local_98[0x10] = (float)(int)param_5;
  local_98[0x11] = 0.0;
  local_98[0x12] = 0.0;
  local_98[0x13] = 0.0;
  fVar13 = fVar9 * (fVar9 + fVar9);
  fVar11 = fVar10 * (fVar9 + fVar9);
  local_a8 = (float)param_1_00;
  fStack_a4 = (float)((ulong)param_1_00 >> 0x20);
  lVar7 = 0;
  do {
    fVar1 = *(float *)((long)local_98 + lVar7 + 0x40);
    fVar2 = *(float *)((long)local_98 + lVar7 + 0x44);
    fVar3 = *(float *)((long)local_98 + lVar7 + 0x48);
    fVar4 = *(float *)(local_48 + lVar7 + -4);
    *(float *)((long)local_98 + lVar7) =
         fVar4 * local_a8 +
         fVar1 * ((_LC3 - fVar6 * fVar12) - fVar13) + fVar2 * (fVar6 * fVar8 - fVar11) +
         fVar3 * (fVar9 * fVar8 + fVar12 * fVar10);
    *(float *)((long)local_98 + lVar7 + 4) =
         fVar4 * fStack_a4 +
         fVar1 * (fVar6 * fVar8 + fVar11) + fVar2 * ((_LC3 - fVar13) - fVar5 * fVar8) +
         fVar3 * (fVar9 * fVar12 - fVar8 * fVar10);
    *(float *)((long)local_98 + lVar7 + 8) =
         fVar4 * param_2_00 +
         fVar1 * (fVar9 * fVar8 - fVar12 * fVar10) + fVar2 * (fVar8 * fVar10 + fVar9 * fVar12) +
         fVar3 * ((_LC3 - fVar5 * fVar8) - fVar6 * fVar12);
    *(float *)((long)local_98 + lVar7 + 0xc) = fVar4 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0
    ;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  fVar5 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x40);
  fVar10 = *(float *)(param_1 + 0x44);
  fVar11 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x50);
  fVar13 = *(float *)(param_1 + 0x54);
  fVar1 = *(float *)(param_1 + 0x58);
  *(undefined1 *)(param_2 + 0xc) = 0;
  *param_2 = fVar8 * local_98[8] + fVar5 * local_98[0] + fVar6 * local_98[4] + local_98[0xc];
  param_2[1] = fVar8 * local_98[9] + fVar5 * local_98[1] + fVar6 * local_98[5] + local_98[0xd];
  param_2[2] = fVar8 * local_98[10] + fVar5 * local_98[2] + fVar6 * local_98[6] + local_98[0xe];
  param_2[3] = fVar8 * local_98[0xb] + fVar5 * local_98[3] + fVar6 * local_98[7] + local_98[0xf];
  param_2[4] = fVar11 * local_98[8] + fVar9 * local_98[0] + fVar10 * local_98[4] + local_98[0xc];
  param_2[5] = fVar11 * local_98[9] + fVar9 * local_98[1] + fVar10 * local_98[5] + local_98[0xd];
  param_2[6] = fVar11 * local_98[10] + fVar9 * local_98[2] + fVar10 * local_98[6] + local_98[0xe];
  param_2[7] = fVar11 * local_98[0xb] + fVar9 * local_98[3] + fVar10 * local_98[7] + local_98[0xf];
  param_2[8] = fVar1 * local_98[8] + fVar12 * local_98[0] + fVar13 * local_98[4] + local_98[0xc];
  param_2[9] = fVar1 * local_98[9] + fVar12 * local_98[1] + fVar13 * local_98[5] + local_98[0xd];
  param_2[10] = fVar1 * local_98[10] + fVar12 * local_98[2] + fVar13 * local_98[6] + local_98[0xe];
  param_2[0xb] = fVar1 * local_98[0xb] + fVar12 * local_98[3] + fVar13 * local_98[7] + local_98[0xf]
  ;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::TriangleShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::TriangleShape::GetLocalBounds() const */

void JPH::TriangleShape::GetLocalBounds(void)

{
  float fVar1;
  long in_RSI;
  float *in_RDI;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  fVar1 = *(float *)(in_RSI + 0x60);
  auVar2 = maxps(*(undefined1 (*) [16])(in_RSI + 0x30),*(undefined1 (*) [16])(in_RSI + 0x40));
  auVar3 = minps(*(undefined1 (*) [16])(in_RSI + 0x30),*(undefined1 (*) [16])(in_RSI + 0x40));
  auVar3 = minps(auVar3,*(undefined1 (*) [16])(in_RSI + 0x50));
  auVar2 = maxps(auVar2,*(undefined1 (*) [16])(in_RSI + 0x50));
  *in_RDI = auVar3._0_4_ - fVar1;
  in_RDI[1] = auVar3._4_4_ - fVar1;
  in_RDI[2] = auVar3._8_4_ - fVar1;
  in_RDI[3] = auVar3._12_4_ - fVar1;
  in_RDI[4] = fVar1 + auVar2._0_4_;
  in_RDI[5] = fVar1 + auVar2._4_4_;
  in_RDI[6] = fVar1 + auVar2._8_4_;
  in_RDI[7] = fVar1 + auVar2._12_4_;
  return;
}



/* JPH::TriangleShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::TriangleShape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long param_4,
                  float *param_5)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float local_18;
  float fStack_14;
  
  fVar14 = (float)param_2;
  fVar1 = *param_5;
  fVar25 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_5[4];
  fVar5 = param_5[5];
  fVar6 = param_5[6];
  fVar7 = param_5[7];
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  fVar15 = local_18 * *(float *)(param_4 + 0x30);
  fVar18 = fStack_14 * *(float *)(param_4 + 0x34);
  fVar21 = fVar14 * *(float *)(param_4 + 0x38);
  fVar8 = param_5[8];
  fVar9 = param_5[9];
  fVar10 = param_5[10];
  fVar11 = param_5[0xb];
  fVar17 = param_5[0xc];
  fVar20 = param_5[0xd];
  fVar23 = param_5[0xe];
  fVar24 = param_5[0xf];
  fVar16 = local_18 * *(float *)(param_4 + 0x40);
  fVar19 = fStack_14 * *(float *)(param_4 + 0x44);
  fVar22 = fVar14 * *(float *)(param_4 + 0x48);
  auVar28._0_8_ =
       CONCAT44(fVar15 * fVar25 + fVar18 * fVar5 + fVar21 * fVar9 + fVar20,
                fVar15 * fVar1 + fVar18 * fVar4 + fVar21 * fVar8 + fVar17);
  auVar28._8_4_ = fVar15 * fVar2 + fVar18 * fVar6 + fVar21 * fVar10 + fVar23;
  auVar28._12_4_ = fVar15 * fVar3 + fVar18 * fVar7 + fVar21 * fVar11 + fVar24;
  fVar15 = local_18 * *(float *)(param_4 + 0x50);
  fVar18 = fStack_14 * *(float *)(param_4 + 0x54);
  fVar21 = fVar14 * *(float *)(param_4 + 0x58);
  auVar26._0_4_ = fVar16 * fVar1 + fVar19 * fVar4 + fVar22 * fVar8 + fVar17;
  auVar26._4_4_ = fVar16 * fVar25 + fVar19 * fVar5 + fVar22 * fVar9 + fVar20;
  auVar26._8_4_ = fVar16 * fVar2 + fVar19 * fVar6 + fVar22 * fVar10 + fVar23;
  auVar26._12_4_ = fVar16 * fVar3 + fVar19 * fVar7 + fVar22 * fVar11 + fVar24;
  auVar27._8_4_ = auVar28._8_4_;
  auVar27._0_8_ = auVar28._0_8_;
  auVar27._12_4_ = auVar28._12_4_;
  auVar12 = maxps(auVar28,auVar26);
  auVar28 = minps(auVar27,auVar26);
  fVar17 = fVar15 * fVar1 + fVar4 * fVar18 + fVar21 * fVar8 + fVar17;
  fVar20 = fVar15 * fVar25 + fVar5 * fVar18 + fVar21 * fVar9 + fVar20;
  fVar23 = fVar15 * fVar2 + fVar6 * fVar18 + fVar21 * fVar10 + fVar23;
  fVar24 = fVar15 * fVar3 + fVar7 * fVar18 + fVar21 * fVar11 + fVar24;
  auVar13._4_4_ = fVar20;
  auVar13._0_4_ = fVar17;
  auVar13._8_4_ = fVar23;
  auVar13._12_4_ = fVar24;
  auVar13 = maxps(auVar12,auVar13);
  auVar12._4_4_ = fVar20;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar23;
  auVar12._12_4_ = fVar24;
  auVar12 = minps(auVar28,auVar12);
  fVar1 = *(float *)(param_4 + 0x60);
  fVar25 = fVar1 * (float)((ulong)param_2 >> 0x20);
  *param_1 = auVar12._0_4_ - fVar1 * local_18;
  param_1[1] = auVar12._4_4_ - fVar1 * fStack_14;
  param_1[2] = auVar12._8_4_ - fVar1 * fVar14;
  param_1[3] = auVar12._12_4_ - fVar25;
  param_1[4] = fVar1 * local_18 + auVar13._0_4_;
  param_1[5] = fVar1 * fStack_14 + auVar13._4_4_;
  param_1[6] = fVar1 * fVar14 + auVar13._8_4_;
  param_1[7] = fVar25 + auVar13._12_4_;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::TriangleShape::GetSurfaceNormal(long param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_18 [16];
  
  fVar7 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x30);
  fVar8 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x34);
  fVar9 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34);
  fVar6 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38);
  fVar1 = fVar8 * fVar4 - fVar5 * fVar7;
  fVar5 = fVar9 * fVar5 - fVar6 * fVar8;
  fVar4 = fVar7 * fVar6 - fVar4 * fVar9;
  auVar3._0_4_ = SQRT(fVar1 * fVar1 + fVar5 * fVar5 + 0.0 + fVar4 * fVar4);
  if (auVar3._0_4_ != 0.0) {
    auVar3._4_4_ = auVar3._0_4_;
    auVar3._8_4_ = auVar3._0_4_;
    auVar3._12_4_ = auVar3._0_4_;
    auVar2._4_4_ = fVar4;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar1;
    auVar2._12_4_ = fVar1;
    auVar3 = divps(auVar2,auVar3);
    return auVar3;
  }
  local_18._8_8_ = _UNK_00103608;
  local_18._0_8_ = __LC4;
  return local_18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16]
JPH::TriangleShape::MakeScaleValid(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = (float)param_1;
  uStack_14 = (float)((ulong)param_1 >> 0x20);
  uStack_10 = (float)param_2;
  uStack_c = (float)((ulong)param_2 >> 0x20);
  auVar8._0_4_ = 0.0 - local_18;
  auVar8._4_4_ = 0.0 - uStack_14;
  auVar8._8_4_ = 0.0 - uStack_10;
  auVar8._12_4_ = 0.0 - uStack_c;
  auVar9._8_4_ = uStack_10;
  auVar9._0_8_ = param_1;
  auVar9._12_4_ = uStack_c;
  auVar9 = maxps(auVar8,auVar9);
  auVar5._4_4_ = _LC6;
  auVar5._0_4_ = _LC6;
  auVar5._8_4_ = _LC6;
  auVar5._12_4_ = _LC6;
  auVar9 = maxps(auVar9,auVar5);
  fVar7 = auVar9._0_4_ * (float)((uint)local_18 & _LC8 | _LC3);
  fVar10 = auVar9._4_4_ * (float)((uint)uStack_14 & _LC8 | _LC3);
  fVar11 = auVar9._8_4_ * (float)((uint)uStack_10 & _LC8 | _LC3);
  fVar12 = auVar9._12_4_ * (float)((uint)uStack_c & _LC8 | _LC3);
  if (*(float *)(param_3 + 0x60) != 0.0) {
    auVar6._0_4_ = 0.0 - fVar7;
    auVar6._4_4_ = 0.0 - fVar10;
    auVar6._8_4_ = 0.0 - fVar11;
    auVar6._12_4_ = 0.0 - fVar12;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar7;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar12;
    auVar9 = maxps(auVar6,auVar2);
    fVar4 = (auVar9._8_4_ + auVar9._0_4_ + auVar9._4_4_) / __LC10;
    auVar3._4_4_ = fVar4 * (float)(_LC8 & (uint)fVar10 | _LC3);
    auVar3._0_4_ = fVar4 * (float)(_LC8 & (uint)fVar7 | _LC3);
    auVar3._8_4_ = fVar4 * (float)(_LC8 & (uint)fVar11 | _LC3);
    auVar3._12_4_ = fVar4 * (float)(_LC8 & (uint)fVar12 | _LC3);
    return auVar3;
  }
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = fVar12;
  return auVar1;
}



/* JPH::TriangleShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::TriangleShape::CastRay
          (TriangleShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  fVar7 = *(float *)(this + 0x30);
  fVar8 = *(float *)(this + 0x34);
  fVar9 = *(float *)(this + 0x38);
  fVar3 = *(float *)(this + 0x50) - fVar7;
  fVar5 = *(float *)(this + 0x54) - fVar8;
  fVar6 = *(float *)(this + 0x58) - fVar9;
  local_18 = (float)*(undefined8 *)(param_1 + 0x10);
  fStack_14 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fStack_10 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar24 = *(float *)(this + 0x40) - fVar7;
  fVar25 = *(float *)(this + 0x44) - fVar8;
  fVar26 = *(float *)(this + 0x48) - fVar9;
  fVar7 = *(float *)param_1 - fVar7;
  fVar8 = *(float *)(param_1 + 4) - fVar8;
  fVar9 = *(float *)(param_1 + 8) - fVar9;
  fVar10 = fVar5 * local_18 - fStack_14 * fVar3;
  fVar14 = fVar6 * fStack_14 - fStack_10 * fVar5;
  fVar15 = fVar3 * fStack_10 - local_18 * fVar6;
  fVar11 = fVar26 * fVar10 + fVar25 * fVar15 + fVar24 * fVar14 + 0.0;
  auVar18._0_4_ = 0.0 - fVar11;
  auVar18._4_4_ = auVar18._0_4_;
  auVar18._8_4_ = auVar18._0_4_;
  auVar18._12_4_ = auVar18._0_4_;
  auVar16._4_4_ = fVar11;
  auVar16._0_4_ = fVar11;
  auVar16._8_4_ = fVar11;
  auVar16._12_4_ = fVar11;
  auVar16 = maxps(auVar18,auVar16);
  bVar2 = auVar16._0_4_ < _LC12;
  uVar19 = (int)-(uint)bVar2 >> 0x1f;
  uVar21 = (int)-(uint)(auVar16._4_4_ < _LC12) >> 0x1f;
  uVar22 = (int)-(uint)(auVar16._8_4_ < _LC12) >> 0x1f;
  uVar23 = (int)-(uint)(auVar16._12_4_ < _LC12) >> 0x1f;
  auVar13._0_4_ = ~uVar19 & (uint)fVar11;
  auVar13._4_4_ = ~uVar21 & (uint)fVar11;
  auVar13._8_4_ = ~uVar22 & (uint)fVar11;
  auVar13._12_4_ = ~uVar23 & (uint)fVar11;
  auVar20._0_4_ = uVar19 & (uint)_LC3;
  auVar20._4_4_ = uVar21 & (uint)_LC3;
  auVar20._8_4_ = uVar22 & (uint)_LC3;
  auVar20._12_4_ = uVar23 & (uint)_LC3;
  auVar20 = auVar20 | auVar13;
  auVar17._0_4_ = fVar10 * fVar9 + fVar8 * fVar15 + fVar7 * fVar14 + 0.0;
  fVar10 = fVar25 * fVar7 - fVar8 * fVar24;
  fVar8 = fVar26 * fVar8 - fVar9 * fVar25;
  fVar7 = fVar24 * fVar9 - fVar7 * fVar26;
  auVar17._4_4_ = auVar17._0_4_;
  auVar17._8_4_ = auVar17._0_4_;
  auVar17._12_4_ = auVar17._0_4_;
  auVar18 = divps(auVar17,auVar20);
  auVar12._0_4_ = fStack_10 * fVar10 + fStack_14 * fVar7 + local_18 * fVar8 + 0.0;
  auVar12._4_4_ = auVar12._0_4_;
  auVar12._8_4_ = auVar12._0_4_;
  auVar12._12_4_ = auVar12._0_4_;
  auVar13 = divps(auVar12,auVar20);
  auVar4._0_4_ = fVar6 * fVar10 + fVar5 * fVar7 + fVar3 * fVar8 + 0.0;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  auVar16 = divps(auVar4,auVar20);
  uVar19 = (int)-(uint)(auVar16._0_4_ < 0.0 ||
                       ((auVar13._0_4_ < 0.0 || _LC3 < auVar18._0_4_ + auVar13._0_4_) ||
                       (auVar18._0_4_ < 0.0 || bVar2))) >> 0x1f;
  fVar7 = (float)(_LC14 & uVar19 | ~uVar19 & (uint)auVar16._0_4_);
  if (*(float *)(param_3 + 4) <= fVar7) {
    return 0;
  }
  uVar1 = *(undefined4 *)param_2;
  *(float *)(param_3 + 4) = fVar7;
  *(undefined4 *)(param_3 + 8) = uVar1;
  return 1;
}



/* JPH::TriangleShape::sCollideConvexVsTriangle(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::TriangleShape::sCollideConvexVsTriangle(undefined8 param_1,long param_2)

{
  undefined8 in_R9;
  long in_FS_OFFSET;
  CollideConvexVsTriangles aCStack_21c8 [8616];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideConvexVsTriangles::CollideConvexVsTriangles(aCStack_21c8,param_1);
  JPH::CollideConvexVsTriangles::Collide
            (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),
             *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),aCStack_21c8,7,in_R9);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShape::sCollideSphereVsTriangle(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::TriangleShape::sCollideSphereVsTriangle(undefined8 param_1,long param_2)

{
  undefined8 in_R9;
  long in_FS_OFFSET;
  CollideSphereVsTriangles aCStack_b8 [152];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideSphereVsTriangles::CollideSphereVsTriangles(aCStack_b8,param_1);
  JPH::CollideSphereVsTriangles::Collide
            (*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),
             *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),aCStack_b8,7,in_R9);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShape::sCastConvexVsTriangle(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::TriangleShape::sCastConvexVsTriangle
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long in_FS_OFFSET;
  CastConvexVsTriangles aCStack_10b8 [4248];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastConvexVsTriangles::CastConvexVsTriangles
            (aCStack_10b8,param_1,param_2,param_5,param_6,param_8);
  JPH::CastConvexVsTriangles::Cast
            (*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
             *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),aCStack_10b8,7,param_7)
  ;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShape::sCastSphereVsTriangle(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::TriangleShape::sCastSphereVsTriangle
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long in_FS_OFFSET;
  CastSphereVsTriangles aCStack_98 [120];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastSphereVsTriangles::CastSphereVsTriangles
            (aCStack_98,param_1,param_2,param_5,param_6,param_8);
  JPH::CastSphereVsTriangles::Cast
            (*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x38),
             *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
             *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),aCStack_98,7,param_7);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::TriangleShape::SaveBinaryState(TriangleShape *this,StreamOut *param_1)

{
  JPH::ConvexShape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,4);
  return;
}



/* JPH::TriangleShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::TriangleShape::RestoreBinaryState(TriangleShape *this,StreamIn *param_1)

{
  JPH::ConvexShape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,4);
  return;
}



/* JPH::TriangleShape::IsValidScale(JPH::Vec3) const */

char JPH::TriangleShape::IsValidScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  local_18 = (float)param_1;
  uStack_14 = (float)((ulong)param_1 >> 0x20);
  cVar1 = JPH::Shape::IsValidScale();
  if ((cVar1 != '\0') && (*(float *)(param_3 + 0x60) != 0.0)) {
    auVar3._0_4_ = 0.0 - local_18;
    auVar3._4_4_ = 0.0 - uStack_14;
    auVar3._8_4_ = 0.0 - (float)param_2;
    auVar3._12_4_ = 0.0 - fVar2;
    auVar4._8_4_ = (float)param_2;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = fVar2;
    auVar4 = maxps(auVar3,auVar4);
    fVar2 = auVar4._0_4_ - auVar4._4_4_;
    fVar5 = auVar4._4_4_ - auVar4._8_4_;
    fVar6 = auVar4._8_4_ - auVar4._0_4_;
    cVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2 + 0.0 <= _LC15;
  }
  return cVar1;
}



/* JPH::TriangleShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::TriangleShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1,undefined8 param_6,float *param_7,uint *param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar18 = (float)param_4;
  fVar17 = (float)((ulong)param_3 >> 0x20);
  fVar16 = (float)param_3;
  fVar3 = param_7[0xc];
  fVar4 = param_7[0xd];
  fVar5 = param_7[0xe];
  fVar6 = param_7[0xf];
  fVar19 = fVar17 * param_7[4];
  fVar20 = fVar17 * param_7[5];
  fVar21 = fVar17 * param_7[6];
  fVar22 = fVar17 * param_7[7];
  fVar23 = fVar16 * *param_7;
  fVar24 = fVar16 * param_7[1];
  fVar25 = fVar16 * param_7[2];
  fVar26 = fVar16 * param_7[3];
  fVar12 = fVar18 * param_7[8];
  fVar13 = fVar18 * param_7[9];
  fVar14 = fVar18 * param_7[10];
  fVar15 = fVar18 * param_7[0xb];
  auVar2._4_4_ = -(uint)(fVar17 < 0.0);
  auVar2._0_4_ = -(uint)(fVar16 < 0.0);
  auVar2._8_4_ = -(uint)(fVar18 < 0.0);
  auVar2._12_4_ = -(uint)((float)((ulong)param_4 >> 0x20) < 0.0);
  uVar7 = movmskps(in_EAX,auVar2);
  fVar16 = *(float *)(param_1 + 0x30);
  fVar17 = *(float *)(param_1 + 0x34);
  fVar18 = *(float *)(param_1 + 0x38);
  uVar1 = *param_8;
  uVar11 = uVar1 + 2;
  *param_8 = uVar1 + 1;
  pfVar9 = (float *)(param_8 + ((ulong)uVar11 + 1) * 4);
  pfVar10 = (float *)(param_8 + ((ulong)uVar1 + 1) * 4);
  pfVar8 = (float *)(param_8 + (((ulong)uVar1 + 1 & 0xffffffff) + 1) * 4);
  *pfVar10 = fVar18 * fVar12 + fVar16 * fVar23 + fVar17 * fVar19 + fVar3;
  pfVar10[1] = fVar18 * fVar13 + fVar16 * fVar24 + fVar17 * fVar20 + fVar4;
  pfVar10[2] = fVar18 * fVar14 + fVar16 * fVar25 + fVar17 * fVar21 + fVar5;
  pfVar10[3] = fVar18 * fVar15 + fVar16 * fVar26 + fVar17 * fVar22 + fVar6;
  if ((POPCOUNT((byte)uVar7 & 7) & 1U) == 0) {
    fVar16 = *(float *)(param_1 + 0x40);
    fVar17 = *(float *)(param_1 + 0x44);
    fVar18 = *(float *)(param_1 + 0x48);
    *param_8 = uVar11;
    *pfVar8 = fVar18 * fVar12 + fVar16 * fVar23 + fVar17 * fVar19 + fVar3;
    pfVar8[1] = fVar18 * fVar13 + fVar16 * fVar24 + fVar17 * fVar20 + fVar4;
    pfVar8[2] = fVar18 * fVar14 + fVar16 * fVar25 + fVar17 * fVar21 + fVar5;
    pfVar8[3] = fVar18 * fVar15 + fVar16 * fVar26 + fVar17 * fVar22 + fVar6;
    fVar16 = *(float *)(param_1 + 0x50);
    fVar17 = *(float *)(param_1 + 0x54);
    fVar18 = *(float *)(param_1 + 0x58);
  }
  else {
    fVar16 = *(float *)(param_1 + 0x50);
    fVar17 = *(float *)(param_1 + 0x54);
    fVar18 = *(float *)(param_1 + 0x58);
    *param_8 = uVar11;
    *pfVar8 = fVar18 * fVar12 + fVar16 * fVar23 + fVar17 * fVar19 + fVar3;
    pfVar8[1] = fVar18 * fVar13 + fVar16 * fVar24 + fVar17 * fVar20 + fVar4;
    pfVar8[2] = fVar18 * fVar14 + fVar16 * fVar25 + fVar17 * fVar21 + fVar5;
    pfVar8[3] = fVar18 * fVar15 + fVar16 * fVar26 + fVar17 * fVar22 + fVar6;
    fVar16 = *(float *)(param_1 + 0x40);
    fVar17 = *(float *)(param_1 + 0x44);
    fVar18 = *(float *)(param_1 + 0x48);
  }
  *param_8 = uVar1 + 3;
  *pfVar9 = fVar19 * fVar17 + fVar16 * fVar23 + fVar18 * fVar12 + fVar3;
  pfVar9[1] = fVar20 * fVar17 + fVar16 * fVar24 + fVar18 * fVar13 + fVar4;
  pfVar9[2] = fVar21 * fVar17 + fVar16 * fVar25 + fVar18 * fVar14 + fVar5;
  pfVar9[3] = fVar22 * fVar17 + fVar16 * fVar26 + fVar18 * fVar15 + fVar6;
  return;
}



/* JPH::TriangleShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8 __thiscall
JPH::TriangleShape::GetTrianglesNext
          (TriangleShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  PhysicsMaterial *pPVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1[0x30] == (GetTrianglesContext)0x0) {
    param_1[0x30] = (GetTrianglesContext)0x1;
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(param_1 + 0x24);
    if (param_4 != (PhysicsMaterial **)0x0) {
      pPVar1 = *(PhysicsMaterial **)(this + 0x20);
      if (*(PhysicsMaterial **)(this + 0x20) == (PhysicsMaterial *)0x0) {
        pPVar1 = PhysicsMaterial::sDefault;
      }
      *param_4 = pPVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* _FUN() */

void JPH::TriangleShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x70);
  *(undefined2 *)(puVar1 + 3) = 0x200;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x447a0000;
  *puVar1 = &PTR__TriangleShape_00103430;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x90);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0x447a0000;
  *puVar1 = &PTR_GetRTTI_001033f8;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



/* JPH::TriangleShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::TriangleShape::CastRay
          (TriangleShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  bool bVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar2 != '\0') {
    fVar7 = *(float *)(this + 0x30);
    fVar8 = *(float *)(this + 0x34);
    fVar9 = *(float *)(this + 0x38);
    fVar26 = *(float *)(this + 0x40) - fVar7;
    fVar27 = *(float *)(this + 0x44) - fVar8;
    fVar28 = *(float *)(this + 0x48) - fVar9;
    fVar3 = *(float *)(this + 0x50) - fVar7;
    fVar5 = *(float *)(this + 0x54) - fVar8;
    fVar6 = *(float *)(this + 0x58) - fVar9;
    if ((*param_2 != (RayCastSettings)0x0) ||
       ((fVar26 * fVar5 - fVar3 * fVar27) * *(float *)(param_1 + 0x18) +
        (fVar28 * fVar3 - fVar6 * fVar26) * *(float *)(param_1 + 0x14) +
        (fVar27 * fVar6 - fVar5 * fVar28) * *(float *)(param_1 + 0x10) + 0.0 <= 0.0)) {
      local_58 = (float)*(undefined8 *)(param_1 + 0x10);
      fStack_54 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
      fStack_50 = (float)*(undefined8 *)(param_1 + 0x18);
      fVar7 = *(float *)param_1 - fVar7;
      fVar8 = *(float *)(param_1 + 4) - fVar8;
      fVar9 = *(float *)(param_1 + 8) - fVar9;
      fVar10 = fVar5 * local_58 - fStack_54 * fVar3;
      fVar12 = fVar6 * fStack_54 - fStack_50 * fVar5;
      fVar13 = fVar3 * fStack_50 - local_58 * fVar6;
      fVar15 = fVar27 * fVar7 - fVar8 * fVar26;
      fVar16 = fVar28 * fVar8 - fVar9 * fVar27;
      fVar17 = fVar26 * fVar9 - fVar7 * fVar28;
      fVar26 = fVar28 * fVar10 + fVar27 * fVar13 + fVar26 * fVar12 + 0.0;
      auVar18._0_4_ = fVar9 * fVar10 + fVar8 * fVar13 + fVar7 * fVar12 + 0.0;
      auVar19._0_4_ = 0.0 - fVar26;
      auVar25._4_4_ = fVar26;
      auVar25._0_4_ = fVar26;
      auVar25._8_4_ = fVar26;
      auVar25._12_4_ = fVar26;
      auVar18._4_4_ = auVar18._0_4_;
      auVar18._8_4_ = auVar18._0_4_;
      auVar18._12_4_ = auVar18._0_4_;
      auVar19._4_4_ = auVar19._0_4_;
      auVar19._8_4_ = auVar19._0_4_;
      auVar19._12_4_ = auVar19._0_4_;
      auVar14 = maxps(auVar19,auVar25);
      bVar1 = auVar14._0_4_ < _LC12;
      auVar11._0_4_ = fStack_50 * fVar15 + fStack_54 * fVar17 + local_58 * fVar16 + 0.0;
      uVar20 = (int)-(uint)bVar1 >> 0x1f;
      uVar22 = (int)-(uint)(auVar14._4_4_ < _LC12) >> 0x1f;
      uVar23 = (int)-(uint)(auVar14._8_4_ < _LC12) >> 0x1f;
      uVar24 = (int)-(uint)(auVar14._12_4_ < _LC12) >> 0x1f;
      auVar11._4_4_ = auVar11._0_4_;
      auVar11._8_4_ = auVar11._0_4_;
      auVar11._12_4_ = auVar11._0_4_;
      auVar21._0_4_ = uVar20 & (uint)_LC3;
      auVar21._4_4_ = uVar22 & (uint)_LC3;
      auVar21._8_4_ = uVar23 & (uint)_LC3;
      auVar21._12_4_ = uVar24 & (uint)_LC3;
      auVar14._4_4_ = ~uVar22 & (uint)fVar26;
      auVar14._0_4_ = ~uVar20 & (uint)fVar26;
      auVar14._8_4_ = ~uVar23 & (uint)fVar26;
      auVar14._12_4_ = ~uVar24 & (uint)fVar26;
      auVar21 = auVar21 | auVar14;
      auVar19 = divps(auVar18,auVar21);
      auVar4._0_4_ = fVar6 * fVar15 + fVar5 * fVar17 + fVar3 * fVar16 + 0.0;
      auVar4._4_4_ = auVar4._0_4_;
      auVar4._8_4_ = auVar4._0_4_;
      auVar4._12_4_ = auVar4._0_4_;
      auVar11 = divps(auVar11,auVar21);
      auVar14 = divps(auVar4,auVar21);
      uVar20 = (int)-(uint)(auVar14._0_4_ < 0.0 ||
                           ((auVar19._0_4_ < 0.0 || bVar1) ||
                           (auVar11._0_4_ < 0.0 || _LC3 < auVar19._0_4_ + auVar11._0_4_))) >> 0x1f;
      fVar7 = (float)(_LC14 & uVar20 | ~uVar20 & (uint)auVar14._0_4_);
      if (fVar7 < *(float *)(param_4 + 8)) {
        local_3c = 0xffffffff;
        if (*(long *)(param_4 + 0x10) != 0) {
          local_3c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
        }
        local_34 = *(undefined4 *)param_3;
        local_38 = fVar7;
        (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TriangleShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JPH::TriangleShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,long *param_2,
               float *param_5,undefined4 param_6,char param_7,char param_8)

{
  code *UNRECOVERED_JUMPTABLE;
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
  undefined4 uVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar18 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar5 = param_5[4];
  fVar6 = param_5[5];
  fVar7 = param_5[6];
  fVar8 = param_5[7];
  fVar9 = param_5[8];
  fVar10 = param_5[9];
  fVar11 = param_5[10];
  fVar12 = param_5[0xb];
  fVar17 = param_5[0xc];
  fVar21 = param_5[0xd];
  fVar24 = param_5[0xe];
  fVar26 = param_5[0xf];
  local_48 = (float)param_1_00;
  fStack_44 = (float)((ulong)param_1_00 >> 0x20);
  fStack_40 = (float)param_2_00;
  fVar15 = local_48 * *(float *)(param_1 + 0x30);
  fVar19 = fStack_44 * *(float *)(param_1 + 0x34);
  fVar22 = fStack_40 * *(float *)(param_1 + 0x38);
  fVar16 = fVar22 * fVar9 + fVar15 * fVar1 + fVar19 * fVar5 + fVar17;
  fVar20 = fVar22 * fVar10 + fVar15 * fVar2 + fVar19 * fVar6 + fVar21;
  fVar23 = fVar22 * fVar11 + fVar15 * fVar3 + fVar19 * fVar7 + fVar24;
  fVar25 = fVar22 * fVar12 + fVar15 * fVar4 + fVar19 * fVar8 + fVar26;
  local_38 = CONCAT44(fVar20,fVar16);
  uStack_30 = CONCAT44(fVar25,fVar23);
  fVar15 = local_48 * *(float *)(param_1 + 0x40);
  fVar19 = fStack_44 * *(float *)(param_1 + 0x44);
  fVar22 = fStack_40 * *(float *)(param_1 + 0x48);
  local_28 = fVar22 * fVar9 + fVar15 * fVar1 + fVar19 * fVar5 + fVar17;
  fStack_24 = fVar22 * fVar10 + fVar15 * fVar2 + fVar19 * fVar6 + fVar21;
  fStack_20 = fVar22 * fVar11 + fVar15 * fVar3 + fVar19 * fVar7 + fVar24;
  fStack_1c = fVar22 * fVar12 + fVar15 * fVar4 + fVar19 * fVar8 + fVar26;
  fVar15 = local_48 * *(float *)(param_1 + 0x50);
  fVar19 = fStack_44 * *(float *)(param_1 + 0x54);
  fVar22 = fStack_40 * *(float *)(param_1 + 0x58);
  fVar17 = fVar22 * fVar9 + fVar15 * fVar1 + fVar5 * fVar19 + fVar17;
  fVar21 = fVar22 * fVar10 + fVar15 * fVar2 + fVar6 * fVar19 + fVar21;
  fVar24 = fVar22 * fVar11 + fVar15 * fVar3 + fVar7 * fVar19 + fVar24;
  fVar26 = fVar22 * fVar12 + fVar15 * fVar4 + fVar8 * fVar19 + fVar26;
  fStack_3c = (float)((ulong)param_2_00 >> 0x20);
  auVar18._4_4_ = -(uint)(fStack_44 < 0.0);
  auVar18._0_4_ = -(uint)(local_48 < 0.0);
  auVar18._8_4_ = -(uint)(fStack_40 < 0.0);
  auVar18._12_4_ = -(uint)(fStack_3c < 0.0);
  uVar13 = movmskps((int)param_5,auVar18);
  if ((POPCOUNT((byte)uVar13 & 7) & 1U) == 0) {
    local_38 = CONCAT44(fStack_24,local_28);
    uStack_30 = CONCAT44(fStack_1c,fStack_20);
    local_28 = fVar16;
    fStack_24 = fVar20;
    fStack_20 = fVar23;
    fStack_1c = fVar25;
  }
  if (param_8 == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x18);
    uVar13 = param_6;
    if (param_7 != '\0') {
      plVar14 = *(long **)(param_1 + 0x20);
      if (*(long **)(param_1 + 0x20) == (long *)0x0) {
        plVar14 = PhysicsMaterial::sDefault;
      }
      uVar13 = (undefined4)Color::sGrey;
      if (*(code **)(*plVar14 + 0x28) != PhysicsMaterial::GetDebugColor) {
        uVar13 = (**(code **)(*plVar14 + 0x28))(plVar14,param_6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001013b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (CONCAT44(fStack_24,local_28),CONCAT44(fStack_1c,fStack_20),local_38,uStack_30,
               CONCAT44(fVar21,fVar17),CONCAT44(fVar26,fVar24),param_2,uVar13,1,
               UNRECOVERED_JUMPTABLE);
    return;
  }
  if (param_7 != '\0') {
    plVar14 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      plVar14 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar14 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar14 + 0x28))();
    }
  }
  JPH::DebugRenderer::DrawWireTriangle
            (CONCAT44(fStack_24,local_28),CONCAT44(fStack_1c,fStack_20),local_38,uStack_30,
             CONCAT44(fVar21,fVar17),CONCAT44(fVar26,fVar24),param_2,param_6);
  return;
}



/* JPH::TriangleShapeSettings::GetRTTI() const */

undefined1 * JPH::TriangleShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti,
                      "TriangleShapeSettings",0x90,
                      GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(code **)param_1 = __cxa_guard_acquire;
    plVar2 = *(long **)((long)param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
        }
        else {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
    }
    *(code **)param_1 = JPH::RTTI::RTTI;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar2 = *(long **)((long)param_1 + 0x18);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x001014c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::TriangleShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(TriangleShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti,
                      "TriangleShapeSettings",0x90,
                      GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TriangleShapeSettings*)::{lambda(void*)#1}::_FUN,
                      TriangleShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TriangleShapeSettings*)::rtti;
}



/* JPH::TriangleShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::TriangleShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((TriangleShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::TriangleShape::TriangleShape(JPH::TriangleShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::TriangleShape::TriangleShape
          (TriangleShape *this,TriangleShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined2 *)(this + 0x18) = 0x200;
  *(undefined **)this = &ShapeSettings::vtable;
  lVar5 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)this = &PTR__TriangleShape_00103430;
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  fVar3 = *(float *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar7;
  *(undefined8 *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar9;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(float *)(this + 0x60) = fVar3;
  if (fVar3 < 0.0) {
    if (param_2[0x20] == (Result)0x1) {
      plVar6 = *(long **)param_2;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(Result **)param_2 = param_2 + 0x10;
    param_2[0x20] = (Result)0x0;
    pcVar11 = (char *)(*Allocate)(0x16);
    uVar7 = _LC20._8_8_;
    uVar4 = _LC20._0_8_;
    *(undefined8 *)(param_2 + 0x10) = 0x15;
    *(char **)param_2 = pcVar11;
    *(undefined8 *)pcVar11 = uVar4;
    *(undefined8 *)(pcVar11 + 8) = uVar7;
    pcVar11[0xd] = 'x';
    pcVar11[0xe] = ' ';
    pcVar11[0xf] = 'r';
    pcVar11[0x10] = 'a';
    pcVar11[0x11] = 'd';
    pcVar11[0x12] = 'i';
    pcVar11[0x13] = 'u';
    pcVar11[0x14] = 's';
    *(undefined8 *)(param_2 + 8) = 0x15;
    *(undefined1 *)(*(long *)param_2 + 0x15) = 0;
    param_2[0x20] = (Result)0x2;
    return;
  }
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  if (param_2[0x20] == (Result)0x1) {
    plVar6 = *(long **)param_2;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
    (*Free)();
  }
  *(TriangleShape **)param_2 = this;
  param_2[0x20] = (Result)0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShapeSettings::Create() const */

void JPH::TriangleShapeSettings::Create(void)

{
  TriangleShape *pTVar1;
  byte bVar2;
  undefined1 *__src;
  ulong __n;
  long lVar3;
  TriangleShapeSettings TVar4;
  TriangleShape *this;
  long *__dest;
  byte *pbVar5;
  TriangleShapeSettings *in_RSI;
  long *in_RDI;
  
  TVar4 = in_RSI[0x38];
  if (TVar4 == (TriangleShapeSettings)0x0) {
    this = (TriangleShape *)(*Allocate)(0x70);
    TriangleShape::TriangleShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pTVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pTVar1 = *(int *)pTVar1 + -1;
    UNLOCK();
    if (*(int *)pTVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    TVar4 = in_RSI[0x38];
  }
  *(TriangleShapeSettings *)(in_RDI + 4) = TVar4;
  if (TVar4 == (TriangleShapeSettings)0x1) {
    lVar3 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar3;
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    return;
  }
  if (TVar4 != (TriangleShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00101827;
    }
    if (__n == 0) goto LAB_00101827;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      pbVar5 = &sConvexSubShapeTypes;
      do {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        *(code **)(&__cxxabiv1::__class_type_info::vtable + (ulong)bVar2 * 0x110) =
             TriangleShape::sCollideConvexVsTriangle;
        *(code **)(&__cxxabiv1::__si_class_type_info::vtable + (ulong)bVar2 * 0x110) =
             TriangleShape::sCastConvexVsTriangle;
      } while (pbVar5 != (byte *)&DVec3::cTrue);
      _vtable = TriangleShape::sCollideSphereVsTriangle;
      _vtable = TriangleShape::sCastSphereVsTriangle;
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00101827:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShape::sRegister() */

void JPH::TriangleShape::sRegister(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &sConvexSubShapeTypes;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(code **)(&__cxxabiv1::__class_type_info::vtable + (ulong)bVar1 * 0x110) =
         sCollideConvexVsTriangle;
    *(code **)(&__cxxabiv1::__si_class_type_info::vtable + (ulong)bVar1 * 0x110) =
         sCastConvexVsTriangle;
  } while (pbVar2 != (byte *)&DVec3::cTrue);
  _vtable = sCollideSphereVsTriangle;
  _vtable = sCastSphereVsTriangle;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TriangleShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::TriangleShape::CollideSoftBodyVertices
               (long param_1,undefined8 param_2,long *param_3,int param_4,undefined4 param_5)

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
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined1 (*pauVar20) [16];
  undefined4 *puVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
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
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [12];
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  int local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  float local_58;
  float local_54;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles
            ((CollideSoftBodyVerticesVsTriangles *)&local_128);
  lVar11 = param_3[1];
  pfVar17 = (float *)*param_3;
  pfVar18 = (float *)param_3[2];
  lVar12 = param_3[3];
  pauVar20 = (undefined1 (*) [16])param_3[4];
  lVar13 = param_3[5];
  pfVar19 = (float *)param_3[6];
  lVar14 = param_3[7];
  puVar21 = (undefined4 *)param_3[8];
  lVar15 = param_3[9];
  pfVar16 = (float *)((long)(param_4 * (int)lVar11) + (long)pfVar17);
  if (pfVar17 != pfVar16) {
    do {
      if (0.0 < *pfVar18) {
        fVar23 = *pfVar17;
        fVar26 = pfVar17[1];
        uVar10 = *(undefined8 *)pfVar17;
        fVar1 = pfVar17[2];
        fVar2 = pfVar17[3];
        fVar28 = *(float *)(param_1 + 0x30);
        fVar3 = *(float *)(param_1 + 0x34);
        fVar4 = *(float *)(param_1 + 0x38);
        fVar5 = *(float *)(param_1 + 0x3c);
        fVar6 = *(float *)(param_1 + 0x40);
        fVar7 = *(float *)(param_1 + 0x44);
        fVar8 = *(float *)(param_1 + 0x48);
        fVar9 = *(float *)(param_1 + 0x4c);
        auVar52 = *(undefined1 (*) [16])(param_1 + 0x50);
        fVar47 = auVar52._4_4_;
        fVar50 = auVar52._12_4_;
        local_54 = 3.4028235e+38;
        fVar38 = fVar23 * local_e8 + fVar26 * local_d8 + fVar1 * local_c8 + local_b8;
        fVar39 = fVar23 * fStack_e4 + fVar26 * fStack_d4 + fVar1 * fStack_c4 + fStack_b4;
        fVar40 = fVar23 * fStack_e0 + fVar26 * fStack_d0 + fVar1 * fStack_c0 + fStack_b0;
        fStack_9c = fVar23 * fStack_dc + fVar26 * fStack_cc + fVar1 * fStack_bc + fStack_ac;
        fVar32 = auVar52._0_4_;
        fVar34 = auVar52._8_4_;
        local_1f8 = CONCAT44(fVar47 - fVar39,fVar32 - fVar38);
        uStack_1f0._0_4_ = fVar34 - fVar40;
        uStack_1f0._4_4_ = fVar50 - fStack_9c;
        local_a8 = fVar38;
        fStack_a4 = fVar39;
        fStack_a0 = fVar40;
        auVar52 = ClosestPoint::GetClosestPointOnTriangle<false>
                            (CONCAT44(fVar3 - fVar39,fVar28 - fVar38),
                             CONCAT44(fVar5 - fStack_9c,fVar4 - fVar40),
                             CONCAT44(fVar7 - fVar39,fVar6 - fVar38),
                             CONCAT44(fVar9 - fStack_9c,fVar8 - fVar40),local_1f8,uStack_1f0,
                             &local_12c);
        uVar24 = ram0x00103630;
        fVar26 = auVar52._0_4_;
        fVar33 = auVar52._4_4_;
        fVar23 = auVar52._8_4_;
        fVar29 = fVar23 * fVar23 + fVar33 * fVar33 + fVar26 * fVar26 + 0.0;
        if (fVar29 < _LC14) {
          local_50 = local_12c;
          fVar41 = (float)uVar10;
          fVar42 = (float)((ulong)uVar10 >> 0x20);
          fVar35 = fVar28 * local_128 + fVar3 * local_118 + fVar4 * local_108 + local_f8;
          fVar36 = fVar28 * fStack_124 + fVar3 * fStack_114 + fVar4 * fStack_104 + fStack_f4;
          fVar37 = fVar28 * fStack_120 + fVar3 * fStack_110 + fVar4 * fStack_100 + fStack_f0;
          fVar22 = (fVar6 * local_128 + fVar7 * local_118 + fVar8 * local_108 + local_f8) - fVar35;
          fVar25 = (fVar6 * fStack_124 + fVar7 * fStack_114 + fVar8 * fStack_104 + fStack_f4) -
                   fVar36;
          fVar27 = (fVar6 * fStack_120 + fVar7 * fStack_110 + fVar8 * fStack_100 + fStack_f0) -
                   fVar37;
          fVar43 = (fVar34 * local_108 + fVar32 * local_128 + fVar47 * local_118 + local_f8) -
                   fVar35;
          fVar48 = (fVar34 * fStack_104 + fVar32 * fStack_124 + fVar47 * fStack_114 + fStack_f4) -
                   fVar36;
          fVar49 = (fVar34 * fStack_100 + fVar32 * fStack_120 + fVar47 * fStack_110 + fStack_f0) -
                   fVar37;
          fVar51 = fVar48 * fVar22 - fVar25 * fVar43;
          fVar25 = fVar49 * fVar25 - fVar27 * fVar48;
          fVar27 = fVar43 * fVar27 - fVar22 * fVar49;
          fVar22 = fVar51 * fVar51 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
          auVar44 = __LC4;
          if (_LC26 < fVar22) {
            auVar46._0_4_ = SQRT(fVar22);
            auVar45._4_4_ = fVar27;
            auVar45._0_4_ = fVar25;
            auVar45._8_4_ = fVar51;
            auVar45._12_4_ = fVar51;
            auVar46._4_4_ = auVar46._0_4_;
            auVar46._8_4_ = auVar46._0_4_;
            auVar46._12_4_ = auVar46._0_4_;
            auVar46 = divps(auVar45,auVar46);
            auVar44 = auVar46._0_12_;
          }
          fVar25 = local_58 * auVar44._0_4_;
          fVar27 = local_58 * auVar44._4_4_;
          fVar22 = local_58 * auVar44._8_4_;
          local_1f8 = CONCAT44(fVar27,fVar25);
          local_98 = fVar28;
          fStack_94 = fVar3;
          fStack_90 = fVar4;
          fStack_8c = fVar5;
          local_88 = fVar6;
          fStack_84 = fVar7;
          fStack_80 = fVar8;
          fStack_7c = fVar9;
          local_78 = fVar32;
          fStack_74 = fVar47;
          fStack_70 = fVar34;
          fStack_6c = fVar50;
          local_54 = fVar29;
          local_68 = auVar52;
          if (local_12c == 7) {
            fVar23 = (fVar37 - fVar1) * fVar22 +
                     (fVar36 - fVar42) * fVar27 + (fVar35 - fVar41) * fVar25 + 0.0;
            if (_LC25 < fVar23) {
              fVar23 = _LC25;
            }
            if (*pfVar19 < fVar23) {
              *pfVar19 = fVar23;
              uVar24 = (uint)(fVar36 * fVar27 + fVar35 * fVar25 + 0.0 + fVar37 * fVar22) ^
                       ram0x00103630;
              *(float *)*pauVar20 = fVar25;
              *(float *)(*pauVar20 + 4) = fVar27;
              *(float *)(*pauVar20 + 8) = fVar22;
              *(uint *)(*pauVar20 + 0xc) = uVar24;
              *puVar21 = param_5;
            }
          }
          else {
            fVar38 = fVar38 + fVar26;
            fVar39 = fVar39 + fVar33;
            fVar40 = fVar40 + fVar23;
            fVar23 = fVar38 * local_128 + local_118 * fVar39 + fVar40 * local_108 + local_f8;
            fVar26 = fVar38 * fStack_124 + fStack_114 * fVar39 + fVar40 * fStack_104 + fStack_f4;
            fVar28 = fVar38 * fStack_120 + fStack_110 * fVar39 + fVar40 * fStack_100 + fStack_f0;
            auVar52._0_4_ = fVar41 - fVar23;
            auVar52._4_4_ = fVar42 - fVar26;
            auVar52._8_4_ = fVar1 - fVar28;
            auVar52._12_4_ =
                 fVar2 - (fVar38 * fStack_11c + fStack_10c * fVar39 + fVar40 * fStack_fc + fStack_ec
                         );
            if (0.0 < fVar22 * auVar52._8_4_ + fVar27 * auVar52._4_4_ + fVar25 * auVar52._0_4_ + 0.0
               ) {
              auVar30._0_4_ =
                   SQRT(auVar52._8_4_ * auVar52._8_4_ +
                        auVar52._4_4_ * auVar52._4_4_ + auVar52._0_4_ * auVar52._0_4_ + 0.0);
              if (*pfVar19 < (float)((uint)auVar30._0_4_ ^ ram0x00103630)) {
                *pfVar19 = (float)((uint)auVar30._0_4_ ^ ram0x00103630);
                if (0.0 < auVar30._0_4_) {
                  auVar30._4_4_ = auVar30._0_4_;
                  auVar30._8_4_ = auVar30._0_4_;
                  auVar30._12_4_ = auVar30._0_4_;
                  auVar52 = divps(auVar52,auVar30);
                  local_1f8 = auVar52._0_8_;
                  fVar22 = auVar52._8_4_;
                }
                auVar31._12_4_ =
                     (uint)(fVar28 * fVar22 +
                           fVar26 * (float)((ulong)local_1f8 >> 0x20) +
                           fVar23 * (float)local_1f8 + 0.0) ^ uVar24;
                auVar31._8_4_ = fVar22;
                auVar31._0_8_ = local_1f8;
                *pauVar20 = auVar31;
                *puVar21 = param_5;
              }
            }
          }
        }
      }
      pfVar17 = (float *)((long)pfVar17 + (long)(int)lVar11);
      pfVar18 = (float *)((long)pfVar18 + (long)(int)lVar12);
      puVar21 = (undefined4 *)((long)puVar21 + (long)(int)lVar15);
      pauVar20 = (undefined1 (*) [16])(*pauVar20 + (int)lVar13);
      pfVar19 = (float *)((long)pfVar19 + (long)(int)lVar14);
    } while (pfVar16 != pfVar17);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::ConvexShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::ConvexShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::ConvexShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* JPH::TriangleShape::GetInnerRadius() const */

undefined4 __thiscall JPH::TriangleShape::GetInnerRadius(TriangleShape *this)

{
  return *(undefined4 *)(this + 0x60);
}



/* JPH::TriangleShape::GetStats() const */

undefined1  [16] JPH::TriangleShape::GetStats(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1;
  auVar1._0_8_ = 0x70;
  return auVar1;
}



/* JPH::TriangleShape::GetVolume() const */

undefined8 JPH::TriangleShape::GetVolume(void)

{
  return 0;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::TriangleShape::TriangleNoConvex::GetConvexRadius() const */

undefined8 JPH::TriangleShape::TriangleNoConvex::GetConvexRadius(void)

{
  return 0;
}



/* JPH::TriangleShape::TriangleWithConvex::GetConvexRadius() const */

undefined4 __thiscall
JPH::TriangleShape::TriangleWithConvex::GetConvexRadius(TriangleWithConvex *this)

{
  return *(undefined4 *)(this + 8);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex() */

void __thiscall
JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex(TriangleWithConvex *this)

{
  return;
}



/* JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex() */

void __thiscall JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex(TriangleNoConvex *this)

{
  return;
}



/* JPH::TriangleShape::TriangleWithConvex::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::TriangleShape::TriangleWithConvex::GetSupport
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar4 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  fVar2 = (float)param_2;
  fVar6 = *(float *)(param_3 + 0x18) * fVar2 +
          *(float *)(param_3 + 0x14) * fVar4 + *(float *)(param_3 + 0x10) * fVar3 + 0.0;
  fVar5 = *(float *)(param_3 + 0x28) * fVar2 +
          *(float *)(param_3 + 0x24) * fVar4 + *(float *)(param_3 + 0x20) * fVar3 + 0.0;
  fVar7 = *(float *)(param_3 + 0x38) * fVar2 +
          *(float *)(param_3 + 0x34) * fVar4 + *(float *)(param_3 + 0x30) * fVar3 + 0.0;
  if (fVar6 <= fVar5) {
    if (fVar7 < fVar5) {
      local_18 = *(float *)(param_3 + 0x20);
      uStack_14 = *(float *)(param_3 + 0x24);
      uStack_10 = *(float *)(param_3 + 0x28);
      uStack_c = *(float *)(param_3 + 0x2c);
      goto LAB_001021e2;
    }
  }
  else if (fVar7 < fVar6) {
    local_18 = *(float *)(param_3 + 0x10);
    uStack_14 = *(float *)(param_3 + 0x14);
    uStack_10 = *(float *)(param_3 + 0x18);
    uStack_c = *(float *)(param_3 + 0x1c);
    goto LAB_001021e2;
  }
  local_18 = *(float *)(param_3 + 0x30);
  uStack_14 = *(float *)(param_3 + 0x34);
  uStack_10 = *(float *)(param_3 + 0x38);
  uStack_c = *(float *)(param_3 + 0x3c);
LAB_001021e2:
  fVar5 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
  if (0.0 < fVar5) {
    fVar5 = *(float *)(param_3 + 8) / fVar5;
    uStack_1c = (float)((ulong)param_2 >> 0x20);
    local_18 = fVar5 * fVar3 + local_18;
    uStack_14 = fVar5 * fVar4 + uStack_14;
    uStack_10 = fVar5 * fVar2 + uStack_10;
    uStack_c = fVar5 * uStack_1c + uStack_c;
  }
  auVar1._4_4_ = uStack_14;
  auVar1._0_4_ = local_18;
  auVar1._8_4_ = uStack_10;
  auVar1._12_4_ = uStack_c;
  return auVar1;
}



/* JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex() */

void __thiscall
JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex(TriangleWithConvex *this)

{
  operator_delete(this,0x40);
  return;
}



/* JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex() */

void __thiscall JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex(TriangleNoConvex *this)

{
  operator_delete(this,0x40);
  return;
}



/* JPH::TriangleShape::~TriangleShape() */

void __thiscall JPH::TriangleShape::~TriangleShape(TriangleShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x001022b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001022c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::TriangleShape::~TriangleShape() */

void __thiscall JPH::TriangleShape::~TriangleShape(TriangleShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
                    /* WARNING: Could not recover jumptable at 0x0010231d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001022f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::TriangleShape::TriangleNoConvex::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::TriangleShape::TriangleNoConvex::GetSupport(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar4 = *(float *)(param_3 + 0x18) * param_2 +
          *(float *)(param_3 + 0x14) * fVar1 + *(float *)(param_3 + 0x10) * fVar2 + 0.0;
  fVar3 = *(float *)(param_3 + 0x28) * param_2 +
          *(float *)(param_3 + 0x24) * fVar1 + *(float *)(param_3 + 0x20) * fVar2 + 0.0;
  fVar2 = param_2 * *(float *)(param_3 + 0x38) +
          fVar1 * *(float *)(param_3 + 0x34) + fVar2 * *(float *)(param_3 + 0x30) + 0.0;
  if (fVar4 <= fVar3) {
    if (fVar2 < fVar3) {
      return *(undefined1 (*) [16])(param_3 + 0x20);
    }
  }
  else if (fVar2 < fVar4) {
    return *(undefined1 (*) [16])(param_3 + 0x10);
  }
  return *(undefined1 (*) [16])(param_3 + 0x30);
}



/* JPH::TriangleShapeSettings::~TriangleShapeSettings() */

void __thiscall JPH::TriangleShapeSettings::~TriangleShapeSettings(TriangleShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (TriangleShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010247f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (TriangleShapeSettings)0x2) &&
          (*(TriangleShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TriangleShapeSettings::~TriangleShapeSettings() */

void __thiscall JPH::TriangleShapeSettings::~TriangleShapeSettings(TriangleShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (TriangleShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x38] == (TriangleShapeSettings)0x2) &&
          (*(TriangleShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001024f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall
JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles
          (undefined8 param_1_00,undefined8 param_2,CollideSoftBodyVerticesVsTriangles *this,
          float *param_1)

{
  CollideSoftBodyVerticesVsTriangles *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  float local_68;
  float fStack_64;
  float fStack_5c;
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar10 = param_1[7];
  fVar11 = param_1[8];
  fVar12 = param_1[9];
  fVar13 = param_1[10];
  fVar14 = param_1[0xb];
  fVar18 = param_1[0xc];
  fVar19 = param_1[0xd];
  fVar20 = param_1[0xe];
  fVar21 = param_1[0xf];
  local_68 = (float)param_1_00;
  fStack_64 = (float)((ulong)param_1_00 >> 0x20);
  fStack_5c = (float)((ulong)param_2 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = ZEXT416((uint)(float)param_2) << 0x40;
  lVar17 = 0;
  local_58[0] = local_68;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_48 = ZEXT416((uint)fStack_64) << 0x20;
  local_28 = __LC2;
  uStack_20 = CONCAT44(_LC3,_UNK_001035f8);
  do {
    fVar22 = *(float *)((long)local_58 + lVar17);
    fVar23 = *(float *)((long)local_58 + lVar17 + 4);
    fVar24 = *(float *)((long)local_58 + lVar17 + 8);
    fVar25 = *(float *)(local_48 + lVar17 + -4);
    pCVar1 = this + lVar17;
    *(float *)pCVar1 = fVar25 * fVar18 + fVar22 * fVar2 + fVar23 * fVar7 + fVar24 * fVar11;
    *(float *)(pCVar1 + 4) = fVar25 * fVar19 + fVar22 * fVar3 + fVar23 * fVar8 + fVar24 * fVar12;
    *(float *)(pCVar1 + 8) = fVar25 * fVar20 + fVar22 * fVar4 + fVar23 * fVar9 + fVar24 * fVar13;
    *(float *)(pCVar1 + 0xc) = fVar25 * fVar21 + fVar22 * fVar5 + fVar23 * fVar10 + fVar24 * fVar14;
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x40);
  fVar7 = *(float *)(this + 8);
  fVar8 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x28);
  fVar10 = *(float *)(this + 0x2c);
  fVar3 = *(float *)(this + 0x34);
  fVar5 = *(float *)(this + 0x38);
  fVar11 = *(float *)this;
  fVar12 = *(float *)(this + 4);
  fVar13 = *(float *)(this + 0x20);
  fVar14 = *(float *)(this + 0x24);
  fVar24 = fVar7 * fVar10;
  fVar26 = fVar4 * fVar3;
  fVar28 = fVar9 * fVar8;
  fVar30 = fVar5 * fVar2;
  fVar20 = (float)*(undefined8 *)(this + 0x10);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar32 = (float)*(undefined8 *)(this + 0x30);
  fVar33 = (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20);
  fVar35 = fVar7 * fVar14;
  fVar37 = fVar4 * fVar33;
  fVar39 = fVar9 * fVar12;
  fVar41 = fVar5 * fVar22;
  fVar18 = fVar12 * fVar10;
  fVar19 = fVar22 * fVar3;
  fVar21 = fVar14 * fVar8;
  fVar23 = fVar33 * fVar2;
  fVar47 = fVar11 * fVar10;
  fVar48 = fVar20 * fVar3;
  fVar49 = fVar13 * fVar8;
  fVar50 = fVar32 * fVar2;
  fVar43 = fVar11 * fVar14;
  fVar44 = fVar20 * fVar33;
  fVar45 = fVar13 * fVar12;
  fVar46 = fVar32 * fVar22;
  fVar25 = ((((fVar30 * fVar14 - fVar26 * fVar14) + fVar37 * fVar10) - fVar41 * fVar10) +
           fVar19 * fVar9) - fVar9 * fVar23;
  fVar27 = ((((fVar28 * fVar33 - fVar24 * fVar33) + fVar35 * fVar3) - fVar39 * fVar3) +
           fVar18 * fVar5) - fVar5 * fVar21;
  fVar29 = ((((fVar26 * fVar12 - fVar30 * fVar12) + fVar41 * fVar8) - fVar37 * fVar8) +
           fVar23 * fVar7) - fVar7 * fVar19;
  fVar31 = ((((fVar24 * fVar22 - fVar28 * fVar22) + fVar39 * fVar2) - fVar35 * fVar2) +
           fVar21 * fVar4) - fVar4 * fVar18;
  fVar36 = fVar11 * fVar9;
  fVar38 = fVar20 * fVar5;
  fVar40 = fVar13 * fVar7;
  fVar42 = fVar32 * fVar4;
  fVar34 = _LC19 / (fVar13 * fVar29 + fVar32 * fVar31 + fVar11 * fVar25 + fVar20 * fVar27);
  *(float *)(this + 0x40) = fVar25 * fVar34;
  *(float *)(this + 0x44) = fVar27 * fVar34;
  *(float *)(this + 0x48) = fVar29 * fVar34;
  *(float *)(this + 0x4c) = fVar31 * fVar34;
  *(float *)(this + 0x50) =
       ((((fVar13 * fVar26 - fVar13 * fVar30) - fVar9 * fVar48) + fVar9 * fVar50 + fVar10 * fVar38)
       - fVar10 * fVar42) * fVar34;
  *(float *)(this + 0x54) =
       ((((fVar32 * fVar24 - fVar32 * fVar28) - fVar5 * fVar47) + fVar5 * fVar49 + fVar3 * fVar36) -
       fVar3 * fVar40) * fVar34;
  *(float *)(this + 0x58) =
       ((((fVar11 * fVar30 - fVar11 * fVar26) - fVar7 * fVar50) + fVar7 * fVar48 + fVar8 * fVar42) -
       fVar8 * fVar38) * fVar34;
  *(float *)(this + 0x5c) =
       ((((fVar20 * fVar28 - fVar20 * fVar24) - fVar4 * fVar49) + fVar4 * fVar47 + fVar2 * fVar40) -
       fVar2 * fVar36) * fVar34;
  *(float *)(this + 0x60) =
       ((fVar48 * fVar14 +
        (fVar10 * fVar46 - ((fVar19 * fVar13 - fVar23 * fVar13) + fVar10 * fVar44))) -
       fVar50 * fVar14) * fVar34;
  *(float *)(this + 100) =
       ((fVar47 * fVar33 + (fVar3 * fVar45 - ((fVar18 * fVar32 - fVar21 * fVar32) + fVar3 * fVar43))
        ) - fVar49 * fVar33) * fVar34;
  *(float *)(this + 0x68) =
       ((fVar50 * fVar12 + (fVar8 * fVar44 - ((fVar23 * fVar11 - fVar19 * fVar11) + fVar8 * fVar46))
        ) - fVar48 * fVar12) * fVar34;
  *(float *)(this + 0x6c) =
       ((fVar49 * fVar22 + (fVar2 * fVar43 - ((fVar21 * fVar20 - fVar18 * fVar20) + fVar2 * fVar45))
        ) - fVar47 * fVar22) * fVar34;
  *(float *)(this + 0x70) =
       ((((fVar44 * fVar9 - (fVar13 * fVar37 - fVar13 * fVar41)) - fVar9 * fVar46) - fVar38 * fVar14
        ) + fVar14 * fVar42) * fVar34;
  *(float *)(this + 0x74) =
       ((((fVar43 * fVar5 - (fVar32 * fVar35 - fVar32 * fVar39)) - fVar5 * fVar45) - fVar36 * fVar33
        ) + fVar33 * fVar40) * fVar34;
  *(float *)(this + 0x78) =
       ((((fVar46 * fVar7 - (fVar11 * fVar41 - fVar11 * fVar37)) - fVar7 * fVar44) - fVar42 * fVar12
        ) + fVar12 * fVar38) * fVar34;
  *(float *)(this + 0x7c) =
       ((((fVar45 * fVar4 - (fVar20 * fVar39 - fVar20 * fVar35)) - fVar4 * fVar43) - fVar40 * fVar22
        ) + fVar22 * fVar36) * fVar34;
  auVar6._4_4_ = -(uint)(fStack_64 < 0.0);
  auVar6._0_4_ = -(uint)(local_68 < 0.0);
  auVar6._8_4_ = -(uint)((float)param_2 < 0.0);
  auVar6._12_4_ = -(uint)(fStack_5c < 0.0);
  uVar15 = movmskps(0x40,auVar6);
  uVar16 = _LC3;
  if ((POPCOUNT((byte)uVar15 & 7) & 1U) != 0) {
    uVar16 = _LC8;
  }
  *(undefined4 *)(this + 0xd0) = uVar16;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  if (fVar34 < _LC22) {
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
    if (__LC23 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^
                      ram0x00103630) / fVar22;
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
    if (__LC23 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^
                      ram0x00103630) / fVar18;
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
    if (__LC23 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     ram0x00103630) / fVar2;
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
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_0010307c;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_0010307c:
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
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_0010323a;
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
LAB_0010323a:
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
    fVar34 = fVar34 * __LC10;
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::TriangleShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC27;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleShapeSettings::~TriangleShapeSettings() */

void __thiscall JPH::TriangleShapeSettings::~TriangleShapeSettings(TriangleShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleShape::~TriangleShape() */

void __thiscall JPH::TriangleShape::~TriangleShape(TriangleShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex() */

void __thiscall JPH::TriangleShape::TriangleNoConvex::~TriangleNoConvex(TriangleNoConvex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex() */

void __thiscall
JPH::TriangleShape::TriangleWithConvex::~TriangleWithConvex(TriangleWithConvex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



