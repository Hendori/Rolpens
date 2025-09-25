/* JPH::ScaledShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined8
JPH::ScaledShape::GetWorldSpaceBounds
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_1,long param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28._0_4_ = (float)param_1_00;
  local_28._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_20._0_4_ = (float)param_2;
  uStack_20._4_4_ = (float)((ulong)param_2 >> 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = CONCAT44(local_28._4_4_ * *(float *)(param_4 + 0x34),
                      (float)local_28 * *(float *)(param_4 + 0x30));
  uStack_20 = CONCAT44(uStack_20._4_4_ * *(float *)(param_4 + 0x3c),
                       (float)uStack_20 * *(float *)(param_4 + 0x38));
  (**(code **)(**(long **)(param_4 + 0x20) + 0x30))
            (local_28,uStack_20,param_1,*(long **)(param_4 + 0x20));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::ScaledShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (float)param_3;
  local_18._4_4_ = (float)((ulong)param_3 >> 0x20);
  uStack_10._0_4_ = (float)param_4;
  uStack_10._4_4_ = (float)((ulong)param_4 >> 0x20);
  local_18 = CONCAT44(local_18._4_4_ * *(float *)(param_1 + 0x34),
                      (float)local_18 * *(float *)(param_1 + 0x30));
  uStack_10 = CONCAT44(uStack_10._4_4_ * *(float *)(param_1 + 0x3c),
                       (float)uStack_10 * *(float *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x001000a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))(param_1_00,param_2,local_18,uStack_10);
  return;
}



/* JPH::ScaledShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const */

void JPH::ScaledShape::DrawGetSupportFunction(undefined8 param_1_00,undefined8 param_2,long param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (float)param_1_00;
  local_18._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_18 = CONCAT44(local_18._4_4_ * *(float *)(param_1 + 0x34),
                      (float)local_18 * *(float *)(param_1 + 0x30));
  uStack_10 = CONCAT44(uStack_10._4_4_ * *(float *)(param_1 + 0x3c),
                       (float)uStack_10 * *(float *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x001000ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x88))(local_18,uStack_10);
  return;
}



/* JPH::ScaledShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const
    */

void JPH::ScaledShape::DrawGetSupportingFace
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (float)param_1_00;
  local_18._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_10._0_4_ = (float)param_2_00;
  uStack_10._4_4_ = (float)((ulong)param_2_00 >> 0x20);
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x20) + 0x90);
  local_18 = CONCAT44(local_18._4_4_ * *(float *)(param_1 + 0x34),
                      (float)local_18 * *(float *)(param_1 + 0x30));
  uStack_10 = CONCAT44(uStack_10._4_4_ * *(float *)(param_1 + 0x3c),
                       (float)uStack_10 * *(float *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0010013b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (local_18,uStack_10,*(long **)(param_1 + 0x20),param_2,param_5,UNRECOVERED_JUMPTABLE);
  return;
}



/* JPH::ScaledShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

void JPH::ScaledShape::CastRay(RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar1._4_4_ = _LC1;
  auVar1._0_4_ = _LC1;
  auVar1._8_4_ = _LC1;
  auVar1._12_4_ = _LC1;
  auVar1 = divps(auVar1,*(undefined1 (*) [16])(param_1 + 0x30));
  local_38 = *(float *)param_2 * auVar1._0_4_;
  fStack_34 = *(float *)(param_2 + 4) * auVar1._4_4_;
  fStack_30 = *(float *)(param_2 + 8) * auVar1._8_4_;
  fStack_2c = *(float *)(param_2 + 0xc) * auVar1._12_4_;
  local_28 = auVar1._0_4_ * *(float *)(param_2 + 0x10);
  fStack_24 = auVar1._4_4_ * *(float *)(param_2 + 0x14);
  fStack_20 = auVar1._8_4_ * *(float *)(param_2 + 0x18);
  fStack_1c = auVar1._12_4_ * *(float *)(param_2 + 0x1c);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x98))(*(long **)(param_1 + 0x20),&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::ScaledShape::CollidePoint
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    auVar2._4_4_ = _LC1;
    auVar2._0_4_ = _LC1;
    auVar2._8_4_ = _LC1;
    auVar2._12_4_ = _LC1;
    auVar2 = divps(auVar2,*(undefined1 (*) [16])(param_3 + 0x30));
    local_38._0_4_ = (float)param_1;
    local_38._4_4_ = (float)((ulong)param_1 >> 0x20);
    uStack_30._0_4_ = (float)param_2;
    uStack_30._4_4_ = (float)((ulong)param_2 >> 0x20);
    local_38 = CONCAT44(auVar2._4_4_ * local_38._4_4_,auVar2._0_4_ * (float)local_38);
    uStack_30 = CONCAT44(auVar2._12_4_ * uStack_30._4_4_,auVar2._8_4_ * (float)uStack_30);
                    /* WARNING: Could not recover jumptable at 0x0010022c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa8))
              (local_38,uStack_30,*(long **)(param_3 + 0x20),param_4,param_5,param_6);
    return;
  }
  return;
}



/* JPH::ScaledShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat, JPH::Vec3,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::ScaledShape::CollectTransformedShapes
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,long *param_11)

{
  char cVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  
  cVar1 = (**(code **)(*param_11 + 0x10))(param_11,param_1);
  if (cVar1 != '\0') {
    local_58._0_4_ = (float)param_5;
    local_58._4_4_ = (float)((ulong)param_5 >> 0x20);
    uStack_50._0_4_ = (float)param_6;
    uStack_50._4_4_ = (float)((ulong)param_6 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_ * *(float *)(param_1 + 0x34),
                        (float)local_58 * *(float *)(param_1 + 0x30));
    uStack_50 = CONCAT44(uStack_50._4_4_ * *(float *)(param_1 + 0x3c),
                         (float)uStack_50 * *(float *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x001002e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))
              (param_1_00,param_2,param_3,param_4,local_58,uStack_50,*(long **)(param_1 + 0x20),
               param_8,param_9,param_10,param_11);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaledShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void JPH::ScaledShape::TransformShape(Mat44 *param_1,CollisionCollector *param_2)

{
  long *plVar1;
  code *pcVar2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lVar23;
  long in_FS_OFFSET;
  float local_a8;
  float local_98 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0xc);
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_2 + 0x14);
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  local_a8 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar11 = *(float *)(param_2 + 0x20);
  fVar12 = *(float *)(param_2 + 0x24);
  fVar13 = *(float *)(param_2 + 0x28);
  fVar14 = *(float *)(param_2 + 0x2c);
  fVar15 = *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_2 + 0x34);
  fVar17 = *(float *)(param_2 + 0x38);
  fVar18 = *(float *)(param_2 + 0x3c);
  pcVar2 = *(code **)(*plVar1 + 0xc0);
  local_98[0] = local_a8;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  local_78 = ZEXT416((uint)*(undefined8 *)(param_1 + 0x38)) << 0x40;
  local_68 = __LC2;
  uStack_60 = _UNK_001024b8;
  lVar23 = 0;
  local_88 = ZEXT416((uint)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20)) << 0x20;
  do {
    fVar19 = *(float *)((long)local_98 + lVar23);
    fVar20 = *(float *)((long)local_98 + lVar23 + 4);
    fVar21 = *(float *)((long)local_98 + lVar23 + 8);
    fVar22 = *(float *)(local_88 + lVar23 + -4);
    *(float *)((long)local_58 + lVar23) =
         fVar22 * fVar15 + fVar19 * fVar3 + fVar20 * fVar7 + fVar21 * fVar11;
    *(float *)((long)local_58 + lVar23 + 4) =
         fVar22 * fVar16 + fVar19 * fVar4 + fVar20 * fVar8 + fVar21 * fVar12;
    *(float *)((long)local_58 + lVar23 + 8) =
         fVar22 * fVar17 + fVar19 * fVar5 + fVar20 * fVar9 + fVar21 * fVar13;
    *(float *)((long)local_58 + lVar23 + 0xc) =
         fVar22 * fVar18 + fVar19 * fVar6 + fVar20 * fVar10 + fVar21 * fVar14;
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0x40);
  (*pcVar2)(plVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShape::IsValidScale(JPH::Vec3) const */

void JPH::ScaledShape::IsValidScale
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (float)param_1;
  local_18._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_3 + 0x20) + 0x118);
  local_18 = CONCAT44(local_18._4_4_ * *(float *)(param_3 + 0x34),
                      (float)local_18 * *(float *)(param_3 + 0x30));
  uStack_10 = CONCAT44(uStack_10._4_4_ * *(float *)(param_3 + 0x3c),
                       (float)uStack_10 * *(float *)(param_3 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0010043b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (local_18,uStack_10,*(long **)(param_3 + 0x20),param_4,UNRECOVERED_JUMPTABLE);
  return;
}



/* JPH::ScaledShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16]
JPH::ScaledShape::MakeScaleValid(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 local_18 [16];
  
  local_18._0_4_ = (undefined4)param_1;
  local_18._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
  local_18._8_4_ = (undefined4)param_2;
  local_18._12_4_ = (undefined4)((ulong)param_2 >> 0x20);
  local_18._4_4_ = (float)local_18._4_4_ * *(float *)(param_3 + 0x34);
  local_18._0_4_ = (float)local_18._0_4_ * *(float *)(param_3 + 0x30);
  local_18._8_4_ = (float)local_18._8_4_ * *(float *)(param_3 + 0x38);
  local_18._12_4_ = (float)local_18._12_4_ * *(float *)(param_3 + 0x3c);
  local_18 = (**(code **)(**(long **)(param_3 + 0x20) + 0x120))(local_18._0_8_,local_18._8_8_);
  auVar1 = divps(local_18,*(undefined1 (*) [16])(param_3 + 0x30));
  return auVar1;
}



/* JPH::ScaledShape::sCollideShapeVsScaled(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::ScaledShape::sCollideShapeVsScaled
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  char cVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar1 = *(long *)(param_2 + 0x20);
  local_78._0_4_ = (float)param_3;
  local_78._4_4_ = (float)((ulong)param_3 >> 0x20);
  uStack_70._0_4_ = (float)param_4;
  uStack_70._4_4_ = (float)((ulong)param_4 >> 0x20);
  local_78 = CONCAT44(local_78._4_4_ * *(float *)(param_2 + 0x34),
                      (float)local_78 * *(float *)(param_2 + 0x30));
  uStack_70 = CONCAT44(uStack_70._4_4_ * *(float *)(param_2 + 0x3c),
                       (float)uStack_70 * *(float *)(param_2 + 0x38));
  cVar2 = (**(code **)(*param_13 + 0x18))(param_13,param_1,param_9,lVar1,param_10);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001005aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(param_1 + 0x19) * 0x22])
              (param_1_00,param_2_00,local_78,uStack_70,param_1,lVar1,param_7,param_8,param_9,
               param_10);
    return;
  }
  return;
}



/* JPH::ScaledShape::sCastScaledVsShape(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::ScaledShape::sCastScaledVsShape
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar3 = param_1[0xc];
  lVar4 = param_1[0xd];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *param_1;
  fVar6 = *(float *)(param_1 + 2) * *(float *)(lVar1 + 0x30);
  fVar7 = *(float *)((long)param_1 + 0x14) * *(float *)(lVar1 + 0x34);
  fVar8 = *(float *)(param_1 + 3) * *(float *)(lVar1 + 0x38);
  fVar9 = *(float *)((long)param_1 + 0x1c) * *(float *)(lVar1 + 0x3c);
  plVar2 = *(long **)(lVar1 + 0x20);
  (**(code **)(*plVar2 + 0x30))
            (CONCAT44(fVar7,fVar6),CONCAT44(fVar9,fVar8),&local_f8,plVar2,param_1 + 4);
  local_c8 = CONCAT44(fVar7,fVar6);
  uStack_c0 = CONCAT44(fVar9,fVar8);
  local_b8 = param_1[4];
  lStack_b0 = param_1[5];
  local_a8 = param_1[6];
  lStack_a0 = param_1[7];
  local_98 = param_1[8];
  lStack_90 = param_1[9];
  local_88 = param_1[10];
  lStack_80 = param_1[0xb];
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_d8[0] = plVar2;
  local_78 = lVar3;
  lStack_70 = lVar4;
  cVar5 = (**(code **)(*param_6 + 0x18))(param_6,plVar2,param_8,param_3,param_9);
  if (cVar5 != '\0') {
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(param_3 + 0x19) + (ulong)*(byte *)((long)local_d8[0] + 0x19) * 0x22]
    )(param_1_00,param_2_00,local_d8,param_2,param_3,param_6,param_7,param_8,param_9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::ScaledShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((DecoratedShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::ScaledShape::GetLocalBounds() const */

void JPH::ScaledShape::GetLocalBounds(void)

{
  long in_RSI;
  undefined1 (*in_RDI) [16];
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 0x20) + 0x20))(&local_48);
  local_38 = local_38 * *(float *)(in_RSI + 0x30);
  fStack_34 = fStack_34 * *(float *)(in_RSI + 0x34);
  fStack_30 = fStack_30 * *(float *)(in_RSI + 0x38);
  fStack_2c = fStack_2c * *(float *)(in_RSI + 0x3c);
  auVar1._0_8_ = CONCAT44(*(float *)(in_RSI + 0x34) * fStack_44,*(float *)(in_RSI + 0x30) * local_48
                         );
  auVar1._8_4_ = *(float *)(in_RSI + 0x38) * fStack_40;
  auVar1._12_4_ = *(float *)(in_RSI + 0x3c) * fStack_3c;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._0_8_ = auVar1._0_8_;
  auVar3._12_4_ = auVar1._12_4_;
  auVar2._4_4_ = fStack_34;
  auVar2._0_4_ = local_38;
  auVar2._8_4_ = fStack_30;
  auVar2._12_4_ = fStack_2c;
  auVar2 = minps(auVar1,auVar2);
  auVar4._4_4_ = fStack_34;
  auVar4._0_4_ = local_38;
  auVar4._8_4_ = fStack_30;
  auVar4._12_4_ = fStack_2c;
  auVar4 = maxps(auVar3,auVar4);
  *in_RDI = auVar2;
  in_RDI[1] = auVar4;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::ScaledShape::GetSurfaceNormal(undefined8 param_1,undefined8 param_2,ScaledShape *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 local_18 [16];
  
  local_18._8_8_ = param_2;
  local_18._0_8_ = param_1;
  auVar2 = divps(local_18,*(undefined1 (*) [16])(this + 0x30));
  local_18._0_8_ = auVar2._0_8_;
  local_18._8_8_ = auVar2._8_8_;
  local_18 = (**(code **)(**(long **)(this + 0x20) + 0x58))(local_18._0_8_,local_18._8_8_);
  auVar1 = divps(local_18,*(undefined1 (*) [16])(this + 0x30));
  auVar2._0_4_ = SQRT(auVar1._8_4_ * auVar1._8_4_ +
                      auVar1._4_4_ * auVar1._4_4_ + auVar1._0_4_ * auVar1._0_4_ + 0.0);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = auVar2._0_4_;
  auVar2._12_4_ = auVar2._0_4_;
  auVar2 = divps(auVar1,auVar2);
  return auVar2;
}



/* JPH::ScaledShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::ScaledShape::SaveBinaryState(ScaledShape *this,StreamOut *param_1)

{
  JPH::Shape::SaveBinaryState((StreamOut *)this);
                    /* WARNING: Could not recover jumptable at 0x001008cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  return;
}



/* JPH::ScaledShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::ScaledShape::RestoreBinaryState(ScaledShape *this,StreamIn *param_1)

{
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  return;
}



/* JPH::ScaledShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::ScaledShape::CastRay
          (ScaledShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 != '\0') {
    auVar2._4_4_ = _LC1;
    auVar2._0_4_ = _LC1;
    auVar2._8_4_ = _LC1;
    auVar2._12_4_ = _LC1;
    auVar2 = divps(auVar2,*(undefined1 (*) [16])(this + 0x30));
    local_68 = *(float *)param_1 * auVar2._0_4_;
    fStack_64 = *(float *)(param_1 + 4) * auVar2._4_4_;
    fStack_60 = *(float *)(param_1 + 8) * auVar2._8_4_;
    fStack_5c = *(float *)(param_1 + 0xc) * auVar2._12_4_;
    local_58 = auVar2._0_4_ * *(float *)(param_1 + 0x10);
    fStack_54 = auVar2._4_4_ * *(float *)(param_1 + 0x14);
    fStack_50 = auVar2._8_4_ * *(float *)(param_1 + 0x18);
    fStack_4c = auVar2._12_4_ * *(float *)(param_1 + 0x1c);
    (**(code **)(**(long **)(this + 0x20) + 0xa0))
              (*(long **)(this + 0x20),&local_68,param_2,param_3,param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::ScaledShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x40);
  uVar1 = _LC1;
  *(undefined2 *)(puVar2 + 3) = 0xa02;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR__ScaledShape_00102338;
  *(undefined4 *)(puVar2 + 6) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
  *(undefined4 *)(puVar2 + 7) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x3c) = uVar1;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x60);
  *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
  uVar1 = _LC1;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_GetRTTI_00102300;
  *(undefined4 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x54) = uVar1;
  *(undefined4 *)(puVar2 + 0xb) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x5c) = uVar1;
  return;
}



/* JPH::ScaledShape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeID&) const */

void JPH::ScaledShape::GetSubShapeTransformedShape
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,float param_6,undefined8 *param_1,long param_8,undefined4 *param_9
               ,undefined4 *param_10)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float fStack_14;
  
  *param_10 = *param_9;
  lVar1 = *(long *)(param_8 + 0x20);
  *param_1 = param_1_00;
  param_1[4] = lVar1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffffffffffff;
  local_18 = (float)param_5;
  fStack_14 = (float)((ulong)param_5 >> 0x20);
  fVar2 = *(float *)(param_8 + 0x30);
  fVar3 = *(float *)(param_8 + 0x34);
  fVar4 = *(float *)(param_8 + 0x38);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = CONCAT44(fStack_14 * fVar3,local_18 * fVar2);
  *(float *)(param_1 + 6) = param_6 * fVar4;
  return;
}



/* JPH::ScaledShape::sCollideScaledVsShape(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::ScaledShape::sCollideScaledVsShape
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  char cVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_78._0_4_ = (float)param_1_00;
  local_78._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_70._0_4_ = (float)param_2_00;
  uStack_70._4_4_ = (float)((ulong)param_2_00 >> 0x20);
  local_78 = CONCAT44(local_78._4_4_ * *(float *)(param_1 + 0x34),
                      (float)local_78 * *(float *)(param_1 + 0x30));
  uStack_70 = CONCAT44(uStack_70._4_4_ * *(float *)(param_1 + 0x3c),
                       (float)uStack_70 * *(float *)(param_1 + 0x38));
  cVar2 = (**(code **)(*param_13 + 0x18))(param_13,lVar1,param_9,param_2,param_10);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(param_2 + 0x19) + (ulong)*(byte *)(lVar1 + 0x19) * 0x22])
              (local_78,uStack_70,param_3,param_4,lVar1,param_2,param_7,param_8,param_9,param_10);
    return;
  }
  return;
}



/* JPH::ScaledShape::sCastShapeVsScaled(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::ScaledShape::sCastShapeVsScaled
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  char cVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar1 = *(long *)(param_3 + 0x20);
  local_58._0_4_ = (float)param_1_00;
  local_58._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_50._0_4_ = (float)param_2_00;
  uStack_50._4_4_ = (float)((ulong)param_2_00 >> 0x20);
  local_58 = CONCAT44(local_58._4_4_ * *(float *)(param_3 + 0x34),
                      (float)local_58 * *(float *)(param_3 + 0x30));
  uStack_50 = CONCAT44(uStack_50._4_4_ * *(float *)(param_3 + 0x3c),
                       (float)uStack_50 * *(float *)(param_3 + 0x38));
  cVar2 = (**(code **)(*param_6 + 0x18))(param_6,*param_1,param_8,lVar1,param_9);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(*param_1 + 0x19) * 0x22])
              (local_58,uStack_50,param_1,param_2,lVar1,param_6,param_7,param_8);
    return;
  }
  return;
}



/* JPH::ScaledShapeSettings::GetRTTI() const */

undefined1 * JPH::ScaledShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti,"ScaledShapeSettings",
                      0x60,GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI)
      ;
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(code **)param_1 = JPH::MassProperties::Scale;
    plVar2 = *(long **)((long)param_1 + 0x48);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    *(code **)param_1 = JPH::RTTI::CastTo;
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
                    /* WARNING: Could not recover jumptable at 0x00100dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::ScaledShape::GetVolume() const */

float __thiscall JPH::ScaledShape::GetVolume(ScaledShape *this)

{
  long *plVar1;
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
  
  plVar1 = *(long **)(this + 0x20);
  fVar4 = (float)((uint)(*(float *)(this + 0x38) * *(float *)(this + 0x30) * *(float *)(this + 0x34)
                        ) & _LC8);
  if (*(code **)(*plVar1 + 0x110) == GetVolume) {
    plVar2 = (long *)plVar1[4];
    fVar5 = (float)((uint)(*(float *)(plVar1 + 6) * *(float *)((long)plVar1 + 0x34) *
                          *(float *)(plVar1 + 7)) & _LC8);
    if (*(code **)(*plVar2 + 0x110) == GetVolume) {
      plVar1 = (long *)plVar2[4];
      fVar6 = (float)((uint)(*(float *)(plVar2 + 6) * *(float *)((long)plVar2 + 0x34) *
                            *(float *)(plVar2 + 7)) & _LC8);
      if (*(code **)(*plVar1 + 0x110) == GetVolume) {
        plVar2 = (long *)plVar1[4];
        fVar7 = (float)((uint)(*(float *)(plVar1 + 6) * *(float *)((long)plVar1 + 0x34) *
                              *(float *)(plVar1 + 7)) & _LC8);
        if (*(code **)(*plVar2 + 0x110) == GetVolume) {
          plVar1 = (long *)plVar2[4];
          fVar8 = (float)((uint)(*(float *)(plVar2 + 6) * *(float *)((long)plVar2 + 0x34) *
                                *(float *)(plVar2 + 7)) & _LC8);
          if (*(code **)(*plVar1 + 0x110) == GetVolume) {
            plVar2 = (long *)plVar1[4];
            fVar9 = (float)((uint)(*(float *)(plVar1 + 6) * *(float *)((long)plVar1 + 0x34) *
                                  *(float *)(plVar1 + 7)) & _LC8);
            if (*(code **)(*plVar2 + 0x110) == GetVolume) {
              plVar1 = (long *)plVar2[4];
              fVar10 = (float)((uint)(*(float *)(plVar2 + 6) * *(float *)((long)plVar2 + 0x34) *
                                     *(float *)(plVar2 + 7)) & _LC8);
              if (*(code **)(*plVar1 + 0x110) == GetVolume) {
                plVar2 = (long *)plVar1[4];
                fVar11 = (float)((uint)(*(float *)(plVar1 + 6) * *(float *)((long)plVar1 + 0x34) *
                                       *(float *)(plVar1 + 7)) & _LC8);
                if (*(code **)(*plVar2 + 0x110) == GetVolume) {
                  fVar12 = (float)((uint)(*(float *)(plVar2 + 6) * *(float *)((long)plVar2 + 0x34) *
                                         *(float *)(plVar2 + 7)) & _LC8);
                  fVar3 = (float)(**(code **)(*(long *)plVar2[4] + 0x110))();
                  fVar3 = fVar3 * fVar12;
                }
                else {
                  fVar3 = (float)(**(code **)(*plVar2 + 0x110))();
                }
                fVar3 = fVar3 * fVar11;
              }
              else {
                fVar3 = (float)(**(code **)(*plVar1 + 0x110))();
              }
              fVar3 = fVar3 * fVar10;
            }
            else {
              fVar3 = (float)(**(code **)(*plVar2 + 0x110))();
            }
            fVar3 = fVar3 * fVar9;
          }
          else {
            fVar3 = (float)(**(code **)(*plVar1 + 0x110))();
          }
          fVar3 = fVar3 * fVar8;
        }
        else {
          fVar3 = (float)(**(code **)(*plVar2 + 0x110))();
        }
        fVar3 = fVar3 * fVar7;
      }
      else {
        fVar3 = (float)(**(code **)(*plVar1 + 0x110))();
      }
      fVar3 = fVar3 * fVar6;
    }
    else {
      fVar3 = (float)(**(code **)(*plVar2 + 0x110))();
    }
    return fVar3 * fVar5 * fVar4;
  }
  fVar5 = (float)(**(code **)(*plVar1 + 0x110))();
  return fVar5 * fVar4;
}



/* JPH::ScaledShape::GetMassProperties() const */

void JPH::ScaledShape::GetMassProperties(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long in_RSI;
  undefined8 in_RDI;
  long in_FS_OFFSET;
  
  plVar1 = *(long **)(in_RSI + 0x20);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*plVar1 + 0x40) == GetMassProperties) {
    plVar3 = (long *)plVar1[4];
    if (*(code **)(*plVar3 + 0x40) == GetMassProperties) {
      plVar4 = (long *)plVar3[4];
      if (*(code **)(*plVar4 + 0x40) == GetMassProperties) {
        plVar5 = (long *)plVar4[4];
        if (*(code **)(*plVar5 + 0x40) == GetMassProperties) {
          plVar6 = (long *)plVar5[4];
          if (*(code **)(*plVar6 + 0x40) == GetMassProperties) {
            plVar7 = (long *)plVar6[4];
            if (*(code **)(*plVar7 + 0x40) == GetMassProperties) {
              plVar8 = (long *)plVar7[4];
              if (*(code **)(*plVar8 + 0x40) == GetMassProperties) {
                plVar9 = (long *)plVar8[4];
                if (*(code **)(*plVar9 + 0x40) == GetMassProperties) {
                  (**(code **)(*(long *)plVar9[4] + 0x40))();
                  JPH::MassProperties::Scale(plVar9[6],plVar9[7]);
                }
                else {
                  (**(code **)(*plVar9 + 0x40))(in_RDI,plVar9);
                }
                JPH::MassProperties::Scale(plVar8[6],plVar8[7]);
              }
              else {
                (**(code **)(*plVar8 + 0x40))(in_RDI,plVar8);
              }
              JPH::MassProperties::Scale(plVar7[6],plVar7[7]);
            }
            else {
              (**(code **)(*plVar7 + 0x40))(in_RDI,plVar7);
            }
            JPH::MassProperties::Scale(plVar6[6],plVar6[7]);
          }
          else {
            (**(code **)(*plVar6 + 0x40))(in_RDI,plVar6);
          }
          JPH::MassProperties::Scale(plVar5[6],plVar5[7]);
        }
        else {
          (**(code **)(*plVar5 + 0x40))(in_RDI,plVar5);
        }
        JPH::MassProperties::Scale(plVar4[6],plVar4[7]);
      }
      else {
        (**(code **)(*plVar4 + 0x40))(in_RDI,plVar4);
      }
      JPH::MassProperties::Scale(plVar3[6],plVar3[7]);
    }
    else {
      (**(code **)(*plVar3 + 0x40))(in_RDI,plVar3);
    }
    JPH::MassProperties::Scale(plVar1[6],plVar1[7]);
  }
  else {
    (**(code **)(*plVar1 + 0x40))(in_RDI,plVar1);
  }
  JPH::MassProperties::Scale(*(undefined8 *)(in_RSI + 0x30),*(undefined8 *)(in_RSI + 0x38));
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ScaledShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::ScaledShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar2 = *(long **)(param_1 + 0x20);
  local_18._0_4_ = (float)param_1_00;
  local_18._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_18._0_4_ = (float)local_18 * *(float *)(param_1 + 0x30);
  local_18._4_4_ = local_18._4_4_ * *(float *)(param_1 + 0x34);
  uStack_10._0_4_ = (float)uStack_10 * *(float *)(param_1 + 0x38);
  uStack_10._4_4_ = uStack_10._4_4_ * *(float *)(param_1 + 0x3c);
  if (*(code **)(*plVar2 + 0xb0) != CollideSoftBodyVertices) {
                    /* WARNING: Could not recover jumptable at 0x001014d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xb0))(local_18,uStack_10,plVar2);
    return;
  }
  plVar1 = (long *)plVar2[4];
  local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
  local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
  uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
  uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
  if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
    plVar2 = (long *)plVar1[4];
    local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
    local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
    uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
    uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) {
LAB_001014b0:
                    /* WARNING: Could not recover jumptable at 0x001014bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10,plVar2);
      return;
    }
    plVar1 = (long *)plVar2[4];
    local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
    local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
    uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
    uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
      plVar2 = (long *)plVar1[4];
      local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
      local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
      uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
      uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0xb0);
      if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_001014b0;
      plVar1 = (long *)plVar2[4];
      local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
      local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
      uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
      uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
      if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
        plVar2 = (long *)plVar1[4];
        local_18._0_4_ = (float)local_18 * *(float *)(plVar1 + 6);
        local_18._4_4_ = local_18._4_4_ * *(float *)((long)plVar1 + 0x34);
        uStack_10._0_4_ = (float)uStack_10 * *(float *)(plVar1 + 7);
        uStack_10._4_4_ = uStack_10._4_4_ * *(float *)((long)plVar1 + 0x3c);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_001014b0;
        plVar1 = (long *)plVar2[4];
        local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
        local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
        uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
        uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
          local_18 = CONCAT44(*(float *)((long)plVar1 + 0x34) * local_18._4_4_,
                              *(float *)(plVar1 + 6) * (float)local_18);
          uStack_10 = CONCAT44(*(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_,
                               *(float *)(plVar1 + 7) * (float)uStack_10);
                    /* WARNING: Could not recover jumptable at 0x0010148f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)plVar1[4] + 0xb0))(local_18,uStack_10,(long *)plVar1[4]);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001014a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10);
  return;
}



/* JPH::ScaledShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const */

void JPH::ScaledShape::Draw(undefined8 param_1_00,undefined8 param_2,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_18._0_4_ = (float)param_1_00;
  local_18._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_18._0_4_ = (float)local_18 * *(float *)(param_1 + 0x30);
  local_18._4_4_ = local_18._4_4_ * *(float *)(param_1 + 0x34);
  uStack_10._0_4_ = (float)uStack_10 * *(float *)(param_1 + 0x38);
  uStack_10._4_4_ = uStack_10._4_4_ * *(float *)(param_1 + 0x3c);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
  if (UNRECOVERED_JUMPTABLE_00 == Draw) {
    plVar2 = (long *)plVar1[4];
    local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
    local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
    uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
    uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
    if (*(code **)(*plVar2 + 0x80) != Draw) {
                    /* WARNING: Could not recover jumptable at 0x0010167f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x80))(local_18,uStack_10,plVar2);
      return;
    }
    plVar1 = (long *)plVar2[4];
    local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
    local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
    uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
    uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
    if (UNRECOVERED_JUMPTABLE_00 == Draw) {
      plVar2 = (long *)plVar1[4];
      local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
      local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
      uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
      uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x80);
      if (UNRECOVERED_JUMPTABLE_00 == Draw) {
        plVar1 = (long *)plVar2[4];
        local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
        local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
        uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
        uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101658;
        plVar2 = (long *)plVar1[4];
        local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
        local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
        uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
        uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 == Draw) {
          plVar1 = (long *)plVar2[4];
          local_18._0_4_ = (float)local_18 * *(float *)(plVar2 + 6);
          local_18._4_4_ = local_18._4_4_ * *(float *)((long)plVar2 + 0x34);
          uStack_10._0_4_ = (float)uStack_10 * *(float *)(plVar2 + 7);
          uStack_10._4_4_ = uStack_10._4_4_ * *(float *)((long)plVar2 + 0x3c);
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101658;
          plVar2 = (long *)plVar1[4];
          local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
          local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
          uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
          uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 == Draw) {
            local_18 = CONCAT44(*(float *)((long)plVar2 + 0x34) * local_18._4_4_,
                                *(float *)(plVar2 + 6) * (float)local_18);
            uStack_10 = CONCAT44(*(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_,
                                 *(float *)(plVar2 + 7) * (float)uStack_10);
                    /* WARNING: Could not recover jumptable at 0x00101634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar2[4] + 0x80))(local_18,uStack_10);
            return;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0010164f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10,plVar2);
      return;
    }
  }
LAB_00101658:
                    /* WARNING: Could not recover jumptable at 0x00101664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10);
  return;
}



/* JPH::ScaledShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::ScaledShape::GetSubmergedVolume(undefined8 param_1_00,undefined8 param_2,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_18._0_4_ = (float)param_1_00;
  local_18._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_18._0_4_ = (float)local_18 * *(float *)(param_1 + 0x30);
  local_18._4_4_ = local_18._4_4_ * *(float *)(param_1 + 0x34);
  uStack_10._0_4_ = (float)uStack_10 * *(float *)(param_1 + 0x38);
  uStack_10._4_4_ = uStack_10._4_4_ * *(float *)(param_1 + 0x3c);
  if (*(code **)(*plVar1 + 0x78) != GetSubmergedVolume) {
                    /* WARNING: Could not recover jumptable at 0x001017fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(local_18,uStack_10);
    return;
  }
  plVar2 = (long *)plVar1[4];
  local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
  local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
  uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
  uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
  if (*(code **)(*plVar2 + 0x78) != GetSubmergedVolume) {
                    /* WARNING: Could not recover jumptable at 0x00101810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x78))(local_18,uStack_10,plVar2);
    return;
  }
  plVar1 = (long *)plVar2[4];
  local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
  local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
  uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
  uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
  if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
    plVar2 = (long *)plVar1[4];
    local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
    local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
    uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
    uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x78);
    if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
      plVar1 = (long *)plVar2[4];
      local_18._0_4_ = (float)local_18 * *(float *)(plVar2 + 6);
      local_18._4_4_ = local_18._4_4_ * *(float *)((long)plVar2 + 0x34);
      uStack_10._0_4_ = (float)uStack_10 * *(float *)(plVar2 + 7);
      uStack_10._4_4_ = uStack_10._4_4_ * *(float *)((long)plVar2 + 0x3c);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001017e0;
      plVar2 = (long *)plVar1[4];
      local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
      local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
      uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
      uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
        plVar1 = (long *)plVar2[4];
        local_18._0_4_ = *(float *)(plVar2 + 6) * (float)local_18;
        local_18._4_4_ = *(float *)((long)plVar2 + 0x34) * local_18._4_4_;
        uStack_10._0_4_ = *(float *)(plVar2 + 7) * (float)uStack_10;
        uStack_10._4_4_ = *(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001017e0;
        plVar2 = (long *)plVar1[4];
        local_18._0_4_ = *(float *)(plVar1 + 6) * (float)local_18;
        local_18._4_4_ = *(float *)((long)plVar1 + 0x34) * local_18._4_4_;
        uStack_10._0_4_ = *(float *)(plVar1 + 7) * (float)uStack_10;
        uStack_10._4_4_ = *(float *)((long)plVar1 + 0x3c) * uStack_10._4_4_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar2 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
          local_18 = CONCAT44(*(float *)((long)plVar2 + 0x34) * local_18._4_4_,
                              *(float *)(plVar2 + 6) * (float)local_18);
          uStack_10 = CONCAT44(*(float *)((long)plVar2 + 0x3c) * uStack_10._4_4_,
                               *(float *)(plVar2 + 7) * (float)uStack_10);
                    /* WARNING: Could not recover jumptable at 0x001017c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)plVar2[4] + 0x78))(local_18,uStack_10);
          return;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001017d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10,plVar2);
    return;
  }
LAB_001017e0:
                    /* WARNING: Could not recover jumptable at 0x001017ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(local_18,uStack_10);
  return;
}



/* JPH::GetRTTIOfType(JPH::ScaledShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(ScaledShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti,"ScaledShapeSettings",
                      0x60,GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ScaledShapeSettings*)::{lambda(void*)#1}::_FUN,
                      ScaledShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ScaledShapeSettings*)::rtti;
}



/* JPH::ScaledShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::ScaledShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ScaledShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaledShape::ScaledShape(JPH::ScaledShapeSettings const&, JPH::Result<JPH::Ref<JPH::Shape>
   >&) */

void __thiscall
JPH::ScaledShape::ScaledShape(ScaledShape *this,ScaledShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  Result RVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  JPH::DecoratedShape::DecoratedShape((DecoratedShape *)this,10,param_1,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined ***)this = &PTR__ScaledShape_00102338;
  RVar2 = param_2[0x20];
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar5;
  if (RVar2 != (Result)0x2) {
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x50);
    auVar8._0_4_ = 0.0 - auVar9._0_4_;
    auVar8._4_4_ = 0.0 - auVar9._4_4_;
    auVar8._8_4_ = 0.0 - auVar9._8_4_;
    auVar8._12_4_ = 0.0 - auVar9._12_4_;
    auVar9 = maxps(auVar8,auVar9);
    auVar10._4_4_ = -(uint)(auVar9._4_4_ < _LC10);
    auVar10._0_4_ = -(uint)(auVar9._0_4_ < _LC10);
    auVar10._8_4_ = -(uint)(auVar9._8_4_ < _LC10);
    auVar10._12_4_ = -(uint)(auVar9._12_4_ < _LC10);
    uVar7 = movmskps(extraout_EDX,auVar10);
    if ((uVar7 & 7) != 0) {
      if ((RVar2 == (Result)0x1) && (plVar3 = *(long **)param_2, plVar3 != (long *)0x0)) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      param_2[0x20] = (Result)0x0;
      *(Result **)param_2 = param_2 + 0x10;
      puVar6 = (undefined8 *)(*Allocate)(0x16);
      uVar5 = _UNK_001024d8;
      uVar4 = __LC11;
      *(undefined8 *)(param_2 + 0x10) = 0x15;
      *(undefined8 **)param_2 = puVar6;
      *puVar6 = uVar4;
      puVar6[1] = uVar5;
      *(undefined8 *)((long)puVar6 + 0xd) = 0x21656c616373206f;
      *(undefined8 *)(param_2 + 8) = 0x15;
      *(undefined1 *)(*(long *)param_2 + 0x15) = 0;
      param_2[0x20] = (Result)0x2;
      return;
    }
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    if (param_2[0x20] == (Result)0x1) {
      plVar3 = *(long **)param_2;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(ScaledShape **)param_2 = this;
    param_2[0x20] = (Result)0x1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaledShapeSettings::Create() const */

void JPH::ScaledShapeSettings::Create(void)

{
  ScaledShape *pSVar1;
  byte bVar2;
  undefined1 *__src;
  ulong __n;
  ScaledShapeSettings SVar3;
  ScaledShape *this;
  long *__dest;
  long lVar4;
  byte *pbVar5;
  ScaledShapeSettings *in_RSI;
  long *in_RDI;
  
  SVar3 = in_RSI[0x38];
  if (SVar3 == (ScaledShapeSettings)0x0) {
    this = (ScaledShape *)(*Allocate)(0x40);
    ScaledShape::ScaledShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pSVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    SVar3 = in_RSI[0x38];
  }
  *(ScaledShapeSettings *)(in_RDI + 4) = SVar3;
  if (SVar3 == (ScaledShapeSettings)0x1) {
    lVar4 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar4;
    if (lVar4 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    return;
  }
  if (SVar3 != (ScaledShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00101ab7;
    }
    if (__n == 0) goto LAB_00101ab7;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      pbVar5 = &sAllSubShapeTypes;
      _DAT_00103150 = ScaledShape::sRegister()::{lambda()#1}::_FUN;
      _DAT_00103158 = (undefined4)Color::sYellow;
      do {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        lVar4 = (ulong)bVar2 + 0x154;
        (&CollisionDispatch::sCollideShape)[lVar4] = ScaledShape::sCollideScaledVsShape;
        (&CollisionDispatch::sCastShape)[lVar4] = ScaledShape::sCastScaledVsShape;
        lVar4 = (ulong)bVar2 * 0x110;
        *(code **)(JPH::RTTI::RTTI + lVar4) = ScaledShape::sCollideShapeVsScaled;
        *(code **)(&__dso_handle + lVar4) = ScaledShape::sCastShapeVsScaled;
      } while (pbVar5 != (byte *)0x1024a2);
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00101ab7:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaledShape::sRegister() */

void JPH::ScaledShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &sAllSubShapeTypes;
  _DAT_00103150 = sRegister()::{lambda()#1}::_FUN;
  _DAT_00103158 = (undefined4)Color::sYellow;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x154;
    (&CollisionDispatch::sCollideShape)[lVar2] = sCollideScaledVsShape;
    (&CollisionDispatch::sCastShape)[lVar2] = sCastScaledVsShape;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(JPH::RTTI::RTTI + lVar2) = sCollideShapeVsScaled;
    *(code **)(&__dso_handle + lVar2) = sCastShapeVsScaled;
  } while (pbVar3 != (byte *)0x1024a2);
  return;
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::DecoratedShape::MustBeStatic() const */

void __thiscall JPH::DecoratedShape::MustBeStatic(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x00101c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x10))();
  return;
}



/* JPH::DecoratedShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

void JPH::DecoratedShape::GetLeafShape(SubShapeID *param_1,SubShapeID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00101cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* JPH::ScaledShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::ScaledShape::GetCenterOfMass(ScaledShape *this)

{
  undefined1 auVar1 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  auVar1 = (**(code **)(**(long **)(this + 0x20) + 0x18))();
  local_18 = auVar1._0_4_;
  fStack_14 = auVar1._4_4_;
  fStack_10 = auVar1._8_4_;
  fStack_c = auVar1._12_4_;
  auVar1._4_4_ = fStack_14 * *(float *)(this + 0x34);
  auVar1._0_4_ = local_18 * *(float *)(this + 0x30);
  auVar1._8_4_ = fStack_10 * *(float *)(this + 0x38);
  auVar1._12_4_ = fStack_c * *(float *)(this + 0x3c);
  return auVar1;
}



/* JPH::ScaledShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::ScaledShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::ScaledShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::ScaledShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::ScaledShape::GetStats() const */

undefined1  [16] JPH::ScaledShape::GetStats(void)

{
  return ZEXT816(0x40);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::ScaledShape::~ScaledShape() */

void __thiscall JPH::ScaledShape::~ScaledShape(ScaledShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JPH::ScaledShape::~ScaledShape() */

void __thiscall JPH::ScaledShape::~ScaledShape(ScaledShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00101d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DecoratedShape::GetSubShapeIDBitsRecursive() const */

void __thiscall JPH::DecoratedShape::GetSubShapeIDBitsRecursive(DecoratedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x28);
  if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
    if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00101e48;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00101e48;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00101e48;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
                    /* WARNING: Could not recover jumptable at 0x00101e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x28))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00101e48:
                    /* WARNING: Could not recover jumptable at 0x00101e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::ScaledShape::GetInnerRadius() const */

undefined8 __thiscall JPH::ScaledShape::GetInnerRadius(ScaledShape *this)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 uVar31;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  float local_18;
  
  auVar16 = *(undefined1 (*) [16])(this + 0x30);
  plVar1 = *(long **)(this + 0x20);
  auVar15._8_4_ = auVar16._8_4_;
  auVar15._0_8_ = auVar16._4_8_;
  auVar15._12_4_ = auVar16._8_4_;
  auVar15 = minps(auVar16,auVar15);
  uVar31 = auVar15._8_4_;
  auVar16._4_4_ = uVar31;
  auVar16._0_4_ = uVar31;
  auVar16._8_4_ = uVar31;
  auVar16._12_4_ = uVar31;
  auVar16 = minps(auVar15,auVar16);
  if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
    auVar15 = *(undefined1 (*) [16])(plVar1 + 6);
    plVar1 = (long *)plVar1[4];
    auVar19._8_4_ = auVar15._8_4_;
    auVar19._0_8_ = auVar15._4_8_;
    auVar19._12_4_ = auVar15._8_4_;
    auVar15 = minps(auVar15,auVar19);
    uVar31 = auVar15._8_4_;
    auVar20._4_4_ = uVar31;
    auVar20._0_4_ = uVar31;
    auVar20._8_4_ = uVar31;
    auVar20._12_4_ = uVar31;
    auVar15 = minps(auVar15,auVar20);
    if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
      auVar17 = *(undefined1 (*) [16])(plVar1 + 6);
      plVar1 = (long *)plVar1[4];
      auVar22._8_4_ = auVar17._8_4_;
      auVar22._0_8_ = auVar17._4_8_;
      auVar22._12_4_ = auVar17._8_4_;
      auVar17 = minps(auVar17,auVar22);
      uVar31 = auVar17._8_4_;
      auVar23._4_4_ = uVar31;
      auVar23._0_4_ = uVar31;
      auVar23._8_4_ = uVar31;
      auVar23._12_4_ = uVar31;
      auVar17 = minps(auVar17,auVar23);
      if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
        auVar18 = *(undefined1 (*) [16])(plVar1 + 6);
        plVar1 = (long *)plVar1[4];
        auVar2._8_4_ = auVar18._8_4_;
        auVar2._0_8_ = auVar18._4_8_;
        auVar2._12_4_ = auVar18._8_4_;
        auVar18 = minps(auVar18,auVar2);
        uVar31 = auVar18._8_4_;
        auVar3._4_4_ = uVar31;
        auVar3._0_4_ = uVar31;
        auVar3._8_4_ = uVar31;
        auVar3._12_4_ = uVar31;
        auVar18 = minps(auVar18,auVar3);
        if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
          auVar19 = *(undefined1 (*) [16])(plVar1 + 6);
          plVar1 = (long *)plVar1[4];
          auVar4._8_4_ = auVar19._8_4_;
          auVar4._0_8_ = auVar19._4_8_;
          auVar4._12_4_ = auVar19._8_4_;
          auVar19 = minps(auVar19,auVar4);
          uVar31 = auVar19._8_4_;
          auVar5._4_4_ = uVar31;
          auVar5._0_4_ = uVar31;
          auVar5._8_4_ = uVar31;
          auVar5._12_4_ = uVar31;
          auVar19 = minps(auVar19,auVar5);
          if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
            auVar20 = *(undefined1 (*) [16])(plVar1 + 6);
            plVar1 = (long *)plVar1[4];
            auVar6._8_4_ = auVar20._8_4_;
            auVar6._0_8_ = auVar20._4_8_;
            auVar6._12_4_ = auVar20._8_4_;
            auVar20 = minps(auVar20,auVar6);
            uVar31 = auVar20._8_4_;
            auVar7._4_4_ = uVar31;
            auVar7._0_4_ = uVar31;
            auVar7._8_4_ = uVar31;
            auVar7._12_4_ = uVar31;
            auVar20 = minps(auVar20,auVar7);
            if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
              auVar21 = *(undefined1 (*) [16])(plVar1 + 6);
              plVar1 = (long *)plVar1[4];
              auVar8._8_4_ = auVar21._8_4_;
              auVar8._0_8_ = auVar21._4_8_;
              auVar8._12_4_ = auVar21._8_4_;
              auVar21 = minps(auVar21,auVar8);
              uVar31 = auVar21._8_4_;
              auVar9._4_4_ = uVar31;
              auVar9._0_4_ = uVar31;
              auVar9._8_4_ = uVar31;
              auVar9._12_4_ = uVar31;
              auVar21 = minps(auVar21,auVar9);
              if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
                auVar22 = *(undefined1 (*) [16])(plVar1 + 6);
                plVar1 = (long *)plVar1[4];
                auVar10._8_4_ = auVar22._8_4_;
                auVar10._0_8_ = auVar22._4_8_;
                auVar10._12_4_ = auVar22._8_4_;
                auVar22 = minps(auVar22,auVar10);
                uVar31 = auVar22._8_4_;
                auVar11._4_4_ = uVar31;
                auVar11._0_4_ = uVar31;
                auVar11._8_4_ = uVar31;
                auVar11._12_4_ = uVar31;
                auVar22 = minps(auVar22,auVar11);
                if (*(code **)(*plVar1 + 0x38) == GetInnerRadius) {
                  auVar23 = *(undefined1 (*) [16])(plVar1 + 6);
                  auVar12._8_4_ = auVar23._8_4_;
                  auVar12._0_8_ = auVar23._4_8_;
                  auVar12._12_4_ = auVar23._8_4_;
                  auVar23 = minps(auVar23,auVar12);
                  uVar31 = auVar23._8_4_;
                  auVar13._4_4_ = uVar31;
                  auVar13._0_4_ = uVar31;
                  auVar13._8_4_ = uVar31;
                  auVar13._12_4_ = uVar31;
                  auVar23 = minps(auVar23,auVar13);
                  fVar14 = (float)(**(code **)(*(long *)plVar1[4] + 0x38))();
                  local_18 = auVar23._0_4_;
                  auVar24 = ZEXT416((uint)(local_18 * fVar14));
                }
                else {
                  auVar24._0_8_ = (**(code **)(*plVar1 + 0x38))();
                  auVar24._8_8_ = extraout_XMM0_Qb_06;
                }
                auVar25._4_12_ = auVar24._4_12_;
                auVar25._0_4_ = auVar24._0_4_ * auVar22._0_4_;
              }
              else {
                auVar25._0_8_ = (**(code **)(*plVar1 + 0x38))();
                auVar25._8_8_ = extraout_XMM0_Qb_05;
              }
              auVar26._4_12_ = auVar25._4_12_;
              auVar26._0_4_ = auVar25._0_4_ * auVar21._0_4_;
            }
            else {
              auVar26._0_8_ = (**(code **)(*plVar1 + 0x38))();
              auVar26._8_8_ = extraout_XMM0_Qb_04;
            }
            auVar27._4_12_ = auVar26._4_12_;
            auVar27._0_4_ = auVar26._0_4_ * auVar20._0_4_;
          }
          else {
            auVar27._0_8_ = (**(code **)(*plVar1 + 0x38))();
            auVar27._8_8_ = extraout_XMM0_Qb_03;
          }
          auVar28._4_12_ = auVar27._4_12_;
          auVar28._0_4_ = auVar27._0_4_ * auVar19._0_4_;
        }
        else {
          auVar28._0_8_ = (**(code **)(*plVar1 + 0x38))();
          auVar28._8_8_ = extraout_XMM0_Qb_00;
        }
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = auVar28._0_4_ * auVar18._0_4_;
      }
      else {
        auVar29._0_8_ = (**(code **)(*plVar1 + 0x38))();
        auVar29._8_8_ = extraout_XMM0_Qb_02;
      }
      auVar21._4_12_ = auVar29._4_12_;
      auVar21._0_4_ = auVar29._0_4_ * auVar17._0_4_;
    }
    else {
      auVar21._0_8_ = (**(code **)(*plVar1 + 0x38))();
      auVar21._8_8_ = extraout_XMM0_Qb_01;
    }
    auVar30._4_12_ = auVar21._4_12_;
    auVar30._0_4_ = auVar21._0_4_ * auVar15._0_4_ * auVar16._0_4_;
    return auVar30._0_8_;
  }
  auVar17._0_8_ = (**(code **)(*plVar1 + 0x38))();
  auVar17._8_8_ = extraout_XMM0_Qb;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = (float)auVar17._0_8_ * auVar16._0_4_;
  return auVar18._0_8_;
}



/* JPH::ScaledShapeSettings::~ScaledShapeSettings() */

void __thiscall JPH::ScaledShapeSettings::~ScaledShapeSettings(ScaledShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::MassProperties::Scale;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(code **)this = JPH::RTTI::CastTo;
  if (this[0x38] == (ScaledShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010215f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (ScaledShapeSettings)0x2) &&
          (*(ScaledShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::ScaledShapeSettings::~ScaledShapeSettings() */

void __thiscall JPH::ScaledShapeSettings::~ScaledShapeSettings(ScaledShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::MassProperties::Scale;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(code **)this = JPH::RTTI::CastTo;
  if (this[0x38] == (ScaledShapeSettings)0x1) {
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
  else if ((this[0x38] == (ScaledShapeSettings)0x2) &&
          (*(ScaledShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001021d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::GetRTTIOfType(JPH::ScaledShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC13;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ScaledShape::~ScaledShape() */

void __thiscall JPH::ScaledShape::~ScaledShape(ScaledShape *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ScaledShapeSettings::~ScaledShapeSettings() */

void __thiscall JPH::ScaledShapeSettings::~ScaledShapeSettings(ScaledShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




