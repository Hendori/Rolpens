
/* JPH::SphereShape::GetLocalBounds() const */

void JPH::SphereShape::GetLocalBounds(void)

{
  float fVar1;
  long in_RSI;
  float *in_RDI;
  float fVar2;
  
  fVar1 = *(float *)(in_RSI + 0x2c);
  fVar2 = 0.0 - fVar1;
  in_RDI[4] = fVar1;
  in_RDI[5] = fVar1;
  in_RDI[6] = fVar1;
  in_RDI[7] = fVar1;
  *in_RDI = fVar2;
  in_RDI[1] = fVar2;
  in_RDI[2] = fVar2;
  in_RDI[3] = fVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::GetMassProperties() const */

void JPH::SphereShape::GetMassProperties(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  float *in_RDI;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(in_RSI + 0x2c);
  fVar4 = fVar3 * __LC0 * fVar3 * fVar3 * *(float *)(in_RSI + 0x28);
  *in_RDI = fVar4;
  fVar3 = fVar3 * fVar3 * fVar4 * __LC2;
  *(undefined1 (*) [16])(in_RDI + 4) = ZEXT416((uint)fVar3);
  *(undefined1 (*) [16])(in_RDI + 0xc) = ZEXT416((uint)fVar3) << 0x40;
  uVar2 = _UNK_001021c8;
  uVar1 = __LC3;
  *(undefined1 (*) [16])(in_RDI + 8) = ZEXT416((uint)fVar3) << 0x20;
  *(undefined8 *)(in_RDI + 0x10) = uVar1;
  *(undefined8 *)(in_RDI + 0x12) = uVar2;
  return;
}



/* JPH::SphereShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::SphereShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined4 *param_4,long *param_5,
               long *param_6)

{
  char cVar1;
  float fVar2;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    fVar2 = (float)((ulong)param_1 >> 0x20);
    if (param_2 * param_2 + fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 <=
        *(float *)(param_3 + 0x2c) * *(float *)(param_3 + 0x2c)) {
      local_38 = 0xffffffff;
      if (param_5[2] != 0) {
        local_38 = *(undefined4 *)(param_5[2] + 0x34);
      }
      local_34 = *param_4;
      (**(code **)(*param_5 + 0x28))(param_5,&local_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SphereShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::SphereShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::SphereShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::SphereShape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long param_4,long param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  fVar1 = *(float *)(param_5 + 0x30);
  fVar2 = *(float *)(param_5 + 0x34);
  fVar3 = *(float *)(param_5 + 0x38);
  fVar4 = *(float *)(param_5 + 0x3c);
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar6._0_4_ = 0.0 - local_18;
  auVar6._4_4_ = 0.0 - fStack_14;
  auVar6._8_4_ = 0.0 - fStack_10;
  auVar6._12_4_ = 0.0 - fStack_c;
  auVar7._8_4_ = fStack_10;
  auVar7._0_8_ = param_1_00;
  auVar7._12_4_ = fStack_c;
  auVar7 = maxps(auVar6,auVar7);
  fVar5 = auVar7._0_4_ * *(float *)(param_4 + 0x2c);
  fVar8 = 0.0 - fVar5;
  param_1[4] = fVar5 + fVar1;
  param_1[5] = fVar5 + fVar2;
  param_1[6] = fVar5 + fVar3;
  param_1[7] = fVar5 + fVar4;
  *param_1 = fVar8 + fVar1;
  param_1[1] = fVar8 + fVar2;
  param_1[2] = fVar8 + fVar3;
  param_1[3] = fVar8 + fVar4;
  return param_1;
}



/* JPH::SphereShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::SphereShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar2._0_4_ = 0.0 - local_18;
  auVar2._4_4_ = 0.0 - fStack_14;
  auVar2._8_4_ = 0.0 - fStack_10;
  auVar2._12_4_ = 0.0 - fStack_c;
  auVar3._8_4_ = fStack_10;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = fStack_c;
  auVar3 = maxps(auVar2,auVar3);
  fVar1 = auVar3._0_4_ * *(float *)(param_3 + 0x2c);
  if (param_4 == 1) {
    *(float *)(param_5 + 1) = fVar1;
    *param_5 = &PTR__SphereWithConvex_00102160;
    return param_5;
  }
  if ((param_4 & 0xfffffffd) != 0) {
    return (undefined8 *)0x0;
  }
  *(float *)(param_5 + 1) = fVar1;
  *param_5 = &PTR__SphereNoConvex_00102130;
  return param_5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::SphereShape::GetSurfaceNormal(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10._0_4_ = (float)param_2;
  fVar1 = (float)((ulong)param_1 >> 0x20);
  local_18 = (undefined1  [8])param_1;
  uStack_10._4_4_ = (int)((ulong)param_2 >> 0x20);
  auVar2._0_4_ = SQRT((float)uStack_10 * (float)uStack_10 +
                      (float)param_1 * (float)param_1 + 0.0 + fVar1 * fVar1);
  if (auVar2._0_4_ != 0.0) {
    auVar2._4_4_ = auVar2._0_4_;
    auVar2._8_4_ = auVar2._0_4_;
    auVar2._12_4_ = auVar2._0_4_;
    auVar2 = divps(_local_18,auVar2);
    return auVar2;
  }
  uStack_10 = _UNK_001021d8;
  local_18 = (undefined1  [8])__LC4;
  return _local_18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::SphereShape::GetSubmergedVolume
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1,long param_6,float *param_7,float *param_8,float *param_9,
               undefined1 (*param_10) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  fVar19 = (float)((ulong)param_3 >> 0x20);
  local_58 = (float)param_1_00;
  fStack_54 = (float)((ulong)param_1_00 >> 0x20);
  fStack_50 = (float)param_2;
  fStack_4c = (float)((ulong)param_2 >> 0x20);
  auVar16._0_4_ = 0.0 - local_58;
  auVar16._4_4_ = 0.0 - fStack_54;
  auVar16._8_4_ = 0.0 - fStack_50;
  auVar16._12_4_ = 0.0 - fStack_4c;
  auVar17._8_4_ = fStack_50;
  auVar17._0_8_ = param_1_00;
  auVar17._12_4_ = fStack_4c;
  auVar17 = maxps(auVar16,auVar17);
  fVar14 = auVar17._0_4_ * *(float *)(param_1 + 0x2c);
  uStack_40._0_4_ = (float)param_4;
  fVar10 = (float)uStack_40;
  uStack_40._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar11 = uStack_40._4_4_;
  fVar24 = fVar14 * fVar14 * fVar14 * __LC0;
  *param_8 = fVar24;
  cVar9 = (char)Shape::sDrawSubmergedVolumes;
  uVar21 = _LC5;
  fVar20 = *(float *)(param_6 + 0x38) * param_7[2] +
           param_7[1] * *(float *)(param_6 + 0x34) + *param_7 * *(float *)(param_6 + 0x30) + 0.0 +
           param_7[3];
  if (fVar20 < fVar14) {
    if ((float)((uint)fVar14 ^ _LC5) < fVar20) {
      fVar23 = fVar14 - fVar20;
      fVar24 = (fVar14 + fVar14) - fVar23;
      fVar22 = _LC6 * fVar14 - fVar23;
      fVar15 = (fVar24 * fVar24 * __LC8) / fVar22;
      *param_9 = fVar23 * fVar23 * __LC7 * fVar22;
      fVar24 = *param_7;
      fVar22 = param_7[1];
      uVar8 = *(undefined8 *)param_7;
      fVar23 = param_7[2];
      fVar2 = param_7[3];
      uVar7 = *(undefined8 *)(param_7 + 2);
      fVar3 = *(float *)(param_6 + 0x30);
      fVar4 = *(float *)(param_6 + 0x34);
      fVar5 = *(float *)(param_6 + 0x38);
      fVar6 = *(float *)(param_6 + 0x3c);
      *(float *)*param_10 = fVar3 - fVar15 * fVar24;
      *(float *)(*param_10 + 4) = fVar4 - fVar15 * fVar22;
      *(float *)(*param_10 + 8) = fVar5 - fVar15 * fVar23;
      *(float *)(*param_10 + 0xc) = fVar6 - fVar15 * fVar2;
      if (cVar9 == '\0') {
        return;
      }
      fVar14 = fVar14 * fVar14 - fVar20 * fVar20;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
        uVar21 = _LC5;
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      if ((float)((uint)fVar22 & _LC9) < (float)(_LC9 & (uint)fVar24)) {
        auVar18._4_4_ = 0;
        auVar18._0_4_ = fVar23;
        auVar18._12_4_ = (uint)fVar24 ^ uVar21;
        auVar18._8_4_ = (uint)fVar24 ^ uVar21;
        auVar13._0_4_ = SQRT(fVar24 * fVar24 + fVar23 * fVar23);
        auVar13._4_4_ = auVar13._0_4_;
        auVar13._8_4_ = auVar13._0_4_;
        auVar13._12_4_ = auVar13._0_4_;
        _local_48 = divps(auVar18,auVar13);
      }
      else {
        auVar1._8_4_ = (uint)fVar22 ^ uVar21;
        auVar1._4_4_ = (uint)fVar22 ^ uVar21;
        auVar1._0_4_ = fVar23;
        auVar1._12_4_ = 0;
        fVar15 = SQRT(fVar22 * fVar22 + fVar23 * fVar23);
        auVar12._4_4_ = fVar15;
        auVar12._0_4_ = fVar15;
        auVar12._8_4_ = fVar15;
        auVar12._12_4_ = fVar15;
        _local_48 = divps(auVar1 << 0x20,auVar12);
      }
      JPH::DebugRenderer::DrawPie
                (CONCAT44((fVar4 - fVar20 * fVar22) + fVar19,
                          (fVar3 - fVar20 * fVar24) + (float)param_3),
                 CONCAT44((fVar6 - fVar20 * fVar2) + fVar11,(fVar5 - fVar20 * fVar23) + fVar10),
                 fVar14,uVar8,uVar7,local_48,uStack_40,DebugRenderer::sInstance,
                 (undefined4)Color::sGreen,1,0);
      cVar9 = (char)Shape::sDrawSubmergedVolumes;
    }
    else {
      *param_9 = fVar24;
      cVar9 = (char)Shape::sDrawSubmergedVolumes;
      uVar7 = *(undefined8 *)(param_6 + 0x38);
      *(undefined8 *)*param_10 = *(undefined8 *)(param_6 + 0x30);
      *(undefined8 *)(*param_10 + 8) = uVar7;
    }
  }
  else {
    *param_9 = 0.0;
    *param_10 = (undefined1  [16])0x0;
    cVar9 = (char)Shape::sDrawSubmergedVolumes;
  }
  if (cVar9 == '\0') {
    return;
  }
  JPH::DebugRenderer::DrawWireSphere
            (CONCAT44(fVar19 + *(float *)(*param_10 + 4),(float)param_3 + *(float *)*param_10),
             CONCAT44(fVar11 + *(float *)(*param_10 + 0xc),fVar10 + *(float *)(*param_10 + 8)),_LC12
             ,DebugRenderer::sInstance,(undefined4)Color::sRed,1);
  return;
}



/* JPH::SphereShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::SphereShape::SaveBinaryState(SphereShape *this,StreamOut *param_1)

{
  JPH::ConvexShape::SaveBinaryState((StreamOut *)this);
                    /* WARNING: Could not recover jumptable at 0x001005df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  return;
}



/* JPH::SphereShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::SphereShape::RestoreBinaryState(SphereShape *this,StreamIn *param_1)

{
  JPH::ConvexShape::RestoreBinaryState((StreamIn *)this);
                    /* WARNING: Could not recover jumptable at 0x0010061f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  return;
}



/* JPH::SphereShape::IsValidScale(JPH::Vec3) const */

char __thiscall JPH::SphereShape::IsValidScale(undefined8 param_1,undefined8 param_2)

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
  if (cVar1 != '\0') {
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
    cVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2 + 0.0 <= _LC14;
  }
  return cVar1;
}



/* JPH::SphereShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16] __thiscall JPH::SphereShape::MakeScaleValid(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = (float)param_1;
  uStack_14 = (float)((ulong)param_1 >> 0x20);
  uStack_10 = (float)param_2;
  uStack_c = (float)((ulong)param_2 >> 0x20);
  auVar4._0_4_ = 0.0 - local_18;
  auVar4._4_4_ = 0.0 - uStack_14;
  auVar4._8_4_ = 0.0 - uStack_10;
  auVar4._12_4_ = 0.0 - uStack_c;
  auVar5._8_4_ = uStack_10;
  auVar5._0_8_ = param_1;
  auVar5._12_4_ = uStack_c;
  auVar5 = maxps(auVar4,auVar5);
  auVar7._4_4_ = _LC16;
  auVar7._0_4_ = _LC16;
  auVar7._8_4_ = _LC16;
  auVar7._12_4_ = _LC16;
  auVar5 = maxps(auVar5,auVar7);
  auVar6._0_4_ = auVar5._0_4_ * (float)((uint)local_18 & _LC18 | _LC20);
  auVar6._4_4_ = auVar5._4_4_ * (float)((uint)uStack_14 & _LC18 | _LC20);
  auVar6._8_4_ = auVar5._8_4_ * (float)((uint)uStack_10 & _LC18 | _LC20);
  auVar6._12_4_ = auVar5._12_4_ * (float)((uint)uStack_c & _LC18 | _LC20);
  auVar3._0_4_ = 0.0 - auVar6._0_4_;
  auVar3._4_4_ = 0.0 - auVar6._4_4_;
  auVar3._8_4_ = 0.0 - auVar6._8_4_;
  auVar3._12_4_ = 0.0 - auVar6._12_4_;
  auVar5 = maxps(auVar3,auVar6);
  fVar2 = (auVar5._8_4_ + auVar5._0_4_ + auVar5._4_4_) / _LC6;
  auVar1._4_4_ = fVar2 * (float)((uint)auVar6._4_4_ & _LC18 | _LC20);
  auVar1._0_4_ = fVar2 * (float)((uint)auVar6._0_4_ & _LC18 | _LC20);
  auVar1._8_4_ = fVar2 * (float)((uint)auVar6._8_4_ & _LC18 | _LC20);
  auVar1._12_4_ = fVar2 * (float)((uint)auVar6._12_4_ & _LC18 | _LC20);
  return auVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::SphereShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_e8;
  float fStack_e4;
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  fVar10 = (float)((ulong)param_6 >> 0x20);
  fVar18 = (float)((ulong)param_4 >> 0x20);
  fVar16 = (float)param_4;
  fVar15 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)param_3;
  auVar11._0_4_ = 0.0 - (float)param_5;
  auVar11._4_4_ = 0.0 - (float)((ulong)param_5 >> 0x20);
  auVar11._8_4_ = 0.0 - (float)param_6;
  auVar11._12_4_ = 0.0 - fVar10;
  auVar12._8_4_ = (float)param_6;
  auVar12._0_8_ = param_5;
  auVar12._12_4_ = fVar10;
  auVar12 = maxps(auVar11,auVar12);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar10 = auVar12._0_4_ * *(float *)(param_1 + 0x2c);
  local_e8 = (float)param_1_00;
  fStack_e4 = (float)((ulong)param_1_00 >> 0x20);
  lVar8 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = PhysicsMaterial::sDefault;
  }
  uVar9 = (ulong)(uint)ConvexShape::sUnitSphereTriangles;
  fVar20 = fVar16 * (fVar16 + fVar16);
  _local_d8 = ZEXT416((uint)fVar10);
  local_c8 = ZEXT416((uint)fVar10) << 0x20;
  _local_98 = ZEXT416(_LC21);
  local_b8 = ZEXT416((uint)fVar10) << 0x40;
  local_88 = __LC4;
  uStack_80 = _UNK_001021d8;
  local_a8 = __LC3;
  uStack_a0 = CONCAT44(_LC20,_UNK_001021c8);
  local_78 = __LC22;
  uStack_70 = _UNK_00102218;
  local_68 = __LC3;
  uStack_60 = CONCAT44(_LC20,_UNK_001021c8);
  fVar10 = fVar14 + fVar14;
  fVar19 = fVar15 + fVar15;
  lVar7 = 0;
  fVar17 = fVar18 * (fVar16 + fVar16);
  do {
    fVar2 = *(float *)(local_98 + lVar7);
    fVar3 = *(float *)(local_98 + lVar7 + 4);
    fVar4 = *(float *)(local_98 + lVar7 + 8);
    fVar5 = *(float *)(local_98 + lVar7 + 0xc);
    *(float *)((long)local_58 + lVar7) =
         fVar5 * local_e8 +
         fVar2 * ((_LC20 - fVar15 * fVar19) - fVar20) + fVar3 * (fVar15 * fVar10 - fVar17) +
         fVar4 * (fVar16 * fVar10 + fVar19 * fVar18);
    *(float *)((long)local_58 + lVar7 + 4) =
         fVar5 * fStack_e4 +
         fVar2 * (fVar15 * fVar10 + fVar17) + fVar3 * ((_LC20 - fVar20) - fVar14 * fVar10) +
         fVar4 * (fVar16 * fVar19 - fVar10 * fVar18);
    *(float *)((long)local_58 + lVar7 + 8) =
         fVar5 * param_2_00 +
         fVar2 * (fVar16 * fVar10 - fVar19 * fVar18) + fVar3 * (fVar10 * fVar18 + fVar16 * fVar19) +
         fVar4 * ((_LC20 - fVar14 * fVar10) - fVar15 * fVar19);
    *(float *)((long)local_58 + lVar7 + 0xc) = fVar5 * 1.0 + fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0
    ;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  lVar7 = 0;
  do {
    fVar10 = *(float *)(local_d8 + lVar7);
    fVar14 = *(float *)(local_d8 + lVar7 + 4);
    fVar15 = *(float *)(local_d8 + lVar7 + 8);
    fVar16 = *(float *)(local_d8 + lVar7 + 0xc);
    pfVar1 = (float *)(param_2 + lVar7);
    *pfVar1 = fVar16 * local_58[0xc] +
              fVar10 * local_58[0] + fVar14 * local_58[4] + fVar15 * local_58[8];
    pfVar1[1] = fVar16 * local_58[0xd] +
                fVar10 * local_58[1] + fVar14 * local_58[5] + fVar15 * local_58[9];
    pfVar1[2] = fVar16 * local_58[0xe] +
                fVar10 * local_58[2] + fVar14 * local_58[6] + fVar15 * local_58[10];
    pfVar1[3] = fVar16 * local_58[0xf] +
                fVar10 * local_58[3] + fVar14 * local_58[7] + fVar15 * local_58[0xb];
    fVar10 = _LC20;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  *(ulong *)(param_2 + 0x48) = uVar9;
  *(code **)(param_2 + 0x40) = JPH::DebugRenderer::DrawUnitSphere;
  auVar13._4_4_ = -(uint)(fVar10 < 0.0);
  auVar13._0_4_ = -(uint)(fVar10 < 0.0);
  auVar13._8_4_ = -(uint)(fVar10 < 0.0);
  auVar13._12_4_ = -(uint)(fVar10 < 0.0);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(long *)(param_2 + 0x58) = lVar8;
  uVar6 = movmskps(0x103098,auVar13);
  *(bool *)(param_2 + 0x60) = (POPCOUNT((byte)uVar6 & 7) & 1U) != 0;
  *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) & 1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::SphereShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x30);
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__SphereShape_00101fe8;
  puVar1[5] = 0x447a0000;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x50);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_GetRTTI_00101fb0;
  puVar1[9] = 0x447a0000;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::SphereShape::CastRay
          (SphereShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 == '\0') goto LAB_00100be0;
  fVar6 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar9 = fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0;
  fVar7 = fVar7 * fVar5 + fVar3 * fVar8 + fVar2 * fVar6 + 0.0;
  fVar7 = fVar7 + fVar7;
  fVar6 = (fVar5 * fVar5 + fVar8 * fVar8 + fVar6 * fVar6 + 0.0) -
          *(float *)(this + 0x2c) * *(float *)(this + 0x2c);
  if (fVar9 == 0.0) {
    if (fVar7 != 0.0) {
      fVar8 = (float)((uint)fVar6 ^ _LC5) / fVar7;
LAB_00100c96:
      iVar4 = 1;
      fVar9 = fVar8;
      goto LAB_00100c9f;
    }
LAB_00100bd3:
    if (0.0 < fVar6) goto LAB_00100be0;
    fVar8 = 0.0;
    iVar4 = 1;
    fVar9 = fVar8;
  }
  else {
    fVar8 = fVar7 * fVar7 - _LC24 * fVar9 * fVar6;
    if (fVar8 < 0.0) goto LAB_00100bd3;
    fVar5 = _LC18;
    if (0.0 <= fVar7) {
      fVar5 = _LC20;
    }
    fVar5 = (SQRT(fVar8) * fVar5 + fVar7) * __LC25;
    fVar9 = fVar5 / fVar9;
    fVar8 = fVar9;
    if (fVar5 == 0.0) goto LAB_00100c96;
    fVar6 = fVar6 / fVar5;
    fVar8 = fVar6;
    if (fVar9 <= fVar6) {
      fVar8 = fVar9;
      fVar9 = fVar6;
    }
    iVar4 = 2;
LAB_00100c9f:
    if (fVar9 < 0.0) goto LAB_00100be0;
  }
  if (*(float *)(param_4 + 8) <= fVar8) goto LAB_00100be0;
  local_3c = 0xffffffff;
  if (*(long *)(param_4 + 0x10) != 0) {
    local_3c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
  }
  local_34 = *(undefined4 *)param_3;
  if (param_2[2] == (RayCastSettings)0x0) {
    if (0.0 < fVar8) goto LAB_00100ce6;
  }
  else {
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
LAB_00100ce6:
    local_38 = fVar8;
    (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
  }
  if (((param_2[1] == (RayCastSettings)0x1) && (iVar4 == 2)) && (fVar9 < *(float *)(param_4 + 8))) {
    local_38 = fVar9;
    (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
  }
LAB_00100be0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::SphereShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,long param_4,long *param_5,
               int param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  float *pfVar17;
  float fVar18;
  undefined1 auVar19 [12];
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_38;
  float fStack_34;
  
  uVar11 = _LC5;
  fVar24 = (float)((ulong)param_2 >> 0x20);
  fVar2 = *(float *)(param_4 + 0x30);
  fVar3 = *(float *)(param_4 + 0x34);
  fVar4 = *(float *)(param_4 + 0x38);
  fVar5 = *(float *)(param_4 + 0x3c);
  lVar6 = param_5[3];
  pfVar15 = (float *)param_5[4];
  lVar7 = param_5[5];
  pfVar13 = (float *)param_5[6];
  local_38 = (float)param_1_00;
  fStack_34 = (float)((ulong)param_1_00 >> 0x20);
  lVar8 = param_5[7];
  lVar9 = param_5[9];
  auVar25._0_4_ = 0.0 - local_38;
  auVar25._4_4_ = 0.0 - fStack_34;
  auVar25._8_4_ = 0.0 - (float)param_2;
  auVar25._12_4_ = 0.0 - fVar24;
  pfVar12 = (float *)*param_5;
  auVar26._8_4_ = (float)param_2;
  auVar26._0_8_ = param_1_00;
  auVar26._12_4_ = fVar24;
  auVar26 = maxps(auVar25,auVar26);
  fVar24 = auVar26._0_4_ * *(float *)(param_1 + 0x2c);
  puVar16 = (undefined4 *)param_5[8];
  lVar10 = param_5[1];
  pfVar14 = (float *)param_5[2];
  pfVar17 = (float *)((long)(param_6 * (int)lVar10) + (long)pfVar12);
  for (; pfVar12 != pfVar17; pfVar12 = (float *)((long)pfVar12 + (long)(int)lVar10)) {
    if (0.0 < *pfVar14) {
      auVar20._0_4_ = *pfVar12 - fVar2;
      auVar20._4_4_ = pfVar12[1] - fVar3;
      auVar20._8_4_ = pfVar12[2] - fVar4;
      auVar20._12_4_ = pfVar12[3] - fVar5;
      fVar23 = SQRT(auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + 0.0 +
                    auVar20._8_4_ * auVar20._8_4_);
      if (*pfVar13 < fVar24 - fVar23) {
        *pfVar13 = fVar24 - fVar23;
        if (fVar23 <= 0.0) {
          auVar19 = SUB1612(__LC4,0);
          fVar21 = SUB164(__LC4,4);
          fVar22 = 0.0;
          fVar18 = 0.0;
          fVar23 = _LC20;
        }
        else {
          auVar1._4_4_ = fVar23;
          auVar1._0_4_ = fVar23;
          auVar1._8_4_ = fVar23;
          auVar1._12_4_ = fVar23;
          auVar26 = divps(auVar20,auVar1);
          auVar19 = auVar26._0_12_;
          fVar21 = auVar26._4_4_;
          fVar22 = auVar26._8_4_;
          fVar18 = auVar26._0_4_;
          fVar23 = fVar21;
        }
        *pfVar15 = fVar18;
        pfVar15[1] = fVar23;
        pfVar15[2] = fVar22;
        pfVar15[3] = (float)((uint)((auVar19._8_4_ * fVar24 + fVar4) * fVar22 +
                                   fVar21 * (auVar19._4_4_ * fVar24 + fVar3) +
                                   (auVar19._0_4_ * fVar24 + fVar2) * fVar18 + 0.0) ^ uVar11);
        *puVar16 = param_7;
      }
    }
    puVar16 = (undefined4 *)((long)puVar16 + (long)(int)lVar9);
    pfVar14 = (float *)((long)pfVar14 + (long)(int)lVar6);
    pfVar15 = (float *)((long)pfVar15 + (long)(int)lVar7);
    pfVar13 = (float *)((long)pfVar13 + (long)(int)lVar8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const */

void JPH::SphereShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,char param_7,undefined1 param_8)

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
  float fVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  long *plVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float local_c8;
  float fStack_c4;
  undefined1 local_b8 [4];
  float afStack_b4 [3];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78 [18];
  long local_30;
  
  fVar24 = (float)((ulong)param_2_00 >> 0x20);
  local_c8 = (float)param_1_00;
  fStack_c4 = (float)((ulong)param_1_00 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 != '\0') {
    plVar20 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      plVar20 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar20 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar20 + 0x28))();
    }
  }
  auVar22._0_4_ = 0.0 - local_c8;
  auVar22._4_4_ = 0.0 - fStack_c4;
  auVar22._8_4_ = 0.0 - (float)param_2_00;
  auVar22._12_4_ = 0.0 - fVar24;
  auVar23._8_4_ = (float)param_2_00;
  auVar23._0_8_ = param_1_00;
  auVar23._12_4_ = fVar24;
  auVar23 = maxps(auVar22,auVar23);
  lVar19 = 0;
  fVar21 = auVar23._0_4_ * *(float *)(param_1 + 0x2c);
  fVar24 = *param_5;
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_5[4];
  fVar5 = param_5[5];
  fVar6 = param_5[6];
  fVar7 = param_5[7];
  fVar8 = param_5[8];
  fVar9 = param_5[9];
  fVar10 = param_5[10];
  fVar11 = param_5[0xb];
  fVar12 = param_5[0xc];
  fVar13 = param_5[0xd];
  fVar14 = param_5[0xe];
  fVar15 = param_5[0xf];
  _local_b8 = ZEXT416((uint)fVar21);
  local_98 = ZEXT416((uint)fVar21) << 0x40;
  local_a8 = ZEXT416((uint)fVar21) << 0x20;
  local_88 = __LC3;
  uStack_80 = _UNK_001021c8;
  do {
    fVar21 = *(float *)(local_b8 + lVar19);
    fVar16 = *(float *)(local_b8 + lVar19 + 4);
    fVar17 = *(float *)(local_b8 + lVar19 + 8);
    fVar18 = *(float *)(local_b8 + lVar19 + 0xc);
    *(float *)((long)local_78 + lVar19) =
         fVar18 * fVar12 + fVar21 * fVar24 + fVar16 * fVar4 + fVar17 * fVar8;
    *(float *)((long)local_78 + lVar19 + 4) =
         fVar18 * fVar13 + fVar21 * fVar1 + fVar16 * fVar5 + fVar17 * fVar9;
    *(float *)((long)local_78 + lVar19 + 8) =
         fVar18 * fVar14 + fVar21 * fVar2 + fVar16 * fVar6 + fVar17 * fVar10;
    *(float *)((long)local_78 + lVar19 + 0xc) =
         fVar18 * fVar15 + fVar21 * fVar3 + fVar16 * fVar7 + fVar17 * fVar11;
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0x40);
  JPH::DebugRenderer::DrawUnitSphere(param_2,local_78,param_6,0,param_8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::SphereShape::CastRay
          (SphereShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 8);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar8 = fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2 + 0.0;
  fVar5 = fVar5 * fVar6 + fVar3 * fVar7 + fVar2 * fVar4 + 0.0;
  fVar5 = fVar5 + fVar5;
  fVar4 = (fVar6 * fVar6 + fVar7 * fVar7 + fVar4 * fVar4 + 0.0) -
          *(float *)(this + 0x2c) * *(float *)(this + 0x2c);
  if (fVar8 == 0.0) {
    if (fVar5 == 0.0) goto LAB_001011f0;
    fVar5 = (float)((uint)fVar4 ^ _LC5) / fVar5;
    fVar7 = fVar5;
LAB_00101146:
    if ((fVar7 < 0.0) && (fVar7 = 0.0, fVar5 < 0.0)) goto LAB_00101157;
  }
  else {
    fVar7 = fVar5 * fVar5 - _LC24 * fVar8 * fVar4;
    if (0.0 <= fVar7) {
      fVar6 = _LC18;
      if (0.0 <= fVar5) {
        fVar6 = _LC20;
      }
      fVar6 = (fVar5 + fVar6 * SQRT(fVar7)) * __LC25;
      fVar8 = fVar6 / fVar8;
      fVar5 = fVar8;
      fVar7 = fVar8;
      if ((fVar6 != 0.0) && (fVar7 = fVar4 / fVar6, fVar8 <= fVar7)) {
        fVar5 = fVar7;
        fVar7 = fVar8;
      }
      goto LAB_00101146;
    }
LAB_001011f0:
    fVar7 = 0.0;
    if (fVar4 <= 0.0) {
      if (*(float *)(param_3 + 4) <= 0.0) {
        return 0;
      }
      goto LAB_0010120b;
    }
LAB_00101157:
    fVar7 = _LC26;
  }
  if (*(float *)(param_3 + 4) <= fVar7) {
    return 0;
  }
LAB_0010120b:
  uVar1 = *(undefined4 *)param_2;
  *(float *)(param_3 + 4) = fVar7;
  *(undefined4 *)(param_3 + 8) = uVar1;
  return 1;
}



/* JPH::SphereShapeSettings::GetRTTI() const */

undefined1 * JPH::SphereShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SphereShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SphereShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SphereShapeSettings*)::rtti,"SphereShapeSettings",
                      0x50,GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI)
      ;
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SphereShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SphereShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::SphereShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SphereShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00101318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::SphereShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

void __thiscall
JPH::SphereShape::GetTrianglesNext
          (SphereShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  GetTrianglesContextVertexList::GetTrianglesNext
            ((GetTrianglesContextVertexList *)param_1,param_2,param_3,param_4);
  return;
}



/* JPH::GetRTTIOfType(JPH::SphereShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(SphereShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SphereShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SphereShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SphereShapeSettings*)::rtti,"SphereShapeSettings",
                      0x50,GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SphereShapeSettings*)::{lambda(void*)#1}::_FUN,
                      SphereShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SphereShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SphereShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::SphereShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SphereShapeSettings*)::rtti;
}



/* JPH::SphereShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::SphereShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((SphereShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::SphereShape::SphereShape(JPH::SphereShapeSettings const&, JPH::Result<JPH::Ref<JPH::Shape>
   >&) */

void __thiscall
JPH::SphereShape::SphereShape(SphereShape *this,SphereShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined **)this = &ShapeSettings::vtable;
  lVar5 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)this = &PTR__SphereShape_00101fe8;
  *(undefined4 *)(this + 0x28) = uVar2;
  fVar3 = *(float *)(param_1 + 0x4c);
  *(float *)(this + 0x2c) = fVar3;
  if (fVar3 <= 0.0) {
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
    *(undefined8 *)(param_2 + 0x10) = 0x2064696c61766e49;
    *(undefined8 *)(param_2 + 0x16) = 0x7375696461722064;
    *(undefined8 *)(param_2 + 8) = 0xe;
    param_2[0x1e] = (Result)0x0;
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
  *(SphereShape **)param_2 = this;
  param_2[0x20] = (Result)0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShapeSettings::Create() const */

void JPH::SphereShapeSettings::Create(void)

{
  SphereShape *pSVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  SphereShapeSettings SVar3;
  SphereShape *this;
  long *__dest;
  SphereShapeSettings *in_RSI;
  long *in_RDI;
  
  SVar3 = in_RSI[0x38];
  if (SVar3 == (SphereShapeSettings)0x0) {
    this = (SphereShape *)(*Allocate)(0x30);
    SphereShape::SphereShape(this,in_RSI,(Result *)(in_RSI + 0x18));
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
  *(SphereShapeSettings *)(in_RDI + 4) = SVar3;
  if (SVar3 == (SphereShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    return;
  }
  if (SVar3 != (SphereShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00101657;
    }
    if (__n == 0) goto LAB_00101657;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      ShapeFunctions::sRegistry = SphereShape::sRegister()::{lambda()#1}::_FUN;
      _vtable = (undefined4)Color::sGreen;
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00101657:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::sRegister() */

void JPH::SphereShape::sRegister(void)

{
  ShapeFunctions::sRegistry = sRegister()::{lambda()#1}::_FUN;
  _vtable = (undefined4)Color::sGreen;
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



/* JPH::SphereShape::GetInnerRadius() const */

undefined4 __thiscall JPH::SphereShape::GetInnerRadius(SphereShape *this)

{
  return *(undefined4 *)(this + 0x2c);
}



/* JPH::SphereShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::SphereShape::GetSupportingFace(void)

{
  return;
}



/* JPH::SphereShape::GetStats() const */

undefined1  [16] JPH::SphereShape::GetStats(void)

{
  return ZEXT816(0x30);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SphereShape::GetVolume() const */

float __thiscall JPH::SphereShape::GetVolume(SphereShape *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x2c);
  return fVar1 * fVar1 * fVar1 * __LC0;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::SphereShape::SphereNoConvex::GetSupport(JPH::Vec3) const */

undefined1  [16] JPH::SphereShape::SphereNoConvex::GetSupport(void)

{
  return ZEXT816(0);
}



/* JPH::SphereShape::SphereNoConvex::GetConvexRadius() const */

undefined4 __thiscall JPH::SphereShape::SphereNoConvex::GetConvexRadius(SphereNoConvex *this)

{
  return *(undefined4 *)(this + 8);
}



/* JPH::SphereShape::SphereWithConvex::GetConvexRadius() const */

undefined8 JPH::SphereShape::SphereWithConvex::GetConvexRadius(void)

{
  return 0;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001018d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::SphereShape::SphereWithConvex::~SphereWithConvex() */

void __thiscall JPH::SphereShape::SphereWithConvex::~SphereWithConvex(SphereWithConvex *this)

{
  return;
}



/* JPH::SphereShape::SphereNoConvex::~SphereNoConvex() */

void __thiscall JPH::SphereShape::SphereNoConvex::~SphereNoConvex(SphereNoConvex *this)

{
  return;
}



/* JPH::SphereShape::SphereWithConvex::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::SphereShape::SphereWithConvex::GetSupport(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  fVar4 = (float)param_2;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + 0.0 + fVar3 * fVar3);
  if (0.0 < fVar2) {
    fVar2 = *(float *)(param_3 + 8) / fVar2;
    local_18._4_4_ = fVar2 * fVar3;
    local_18._0_4_ = fVar2 * fVar1;
    local_18._8_4_ = fVar2 * fVar4;
    local_18._12_4_ = fVar2 * (float)((ulong)param_2 >> 0x20);
    return local_18;
  }
  return (undefined1  [16])0x0;
}



/* JPH::SphereShape::SphereWithConvex::~SphereWithConvex() */

void __thiscall JPH::SphereShape::SphereWithConvex::~SphereWithConvex(SphereWithConvex *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::SphereShape::SphereNoConvex::~SphereNoConvex() */

void __thiscall JPH::SphereShape::SphereNoConvex::~SphereNoConvex(SphereNoConvex *this)

{
  operator_delete(this,0x10);
  return;
}



/* JPH::SphereShape::~SphereShape() */

void __thiscall JPH::SphereShape::~SphereShape(SphereShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x001019e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001019f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::SphereShape::~SphereShape() */

void __thiscall JPH::SphereShape::~SphereShape(SphereShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x00101a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::SphereShapeSettings::~SphereShapeSettings() */

void __thiscall JPH::SphereShapeSettings::~SphereShapeSettings(SphereShapeSettings *this)

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
  if (this[0x38] == (SphereShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (SphereShapeSettings)0x2) &&
          (*(SphereShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SphereShapeSettings::~SphereShapeSettings() */

void __thiscall JPH::SphereShapeSettings::~SphereShapeSettings(SphereShapeSettings *this)

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
  if (this[0x38] == (SphereShapeSettings)0x1) {
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
  else if ((this[0x38] == (SphereShapeSettings)0x2) &&
          (*(SphereShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00101b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::GetTrianglesContextVertexList::GetTrianglesNext(int, JPH::Float3*, JPH::PhysicsMaterial
   const**) */

void __thiscall
JPH::GetTrianglesContextVertexList::GetTrianglesNext
          (GetTrianglesContextVertexList *this,int param_1,Float3 *param_2,PhysicsMaterial **param_3
          )

{
  long lVar1;
  int iVar2;
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
  PhysicsMaterial **ppPVar14;
  PhysicsMaterial **ppPVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  
  lVar1 = *(long *)(this + 0x50);
  iVar2 = param_1 * 3;
  iVar18 = *(int *)(this + 0x48) - (int)lVar1;
  if (iVar18 != iVar2 && SBORROW4(iVar18,iVar2) == iVar18 + param_1 * -3 < 0) {
    iVar18 = iVar2;
  }
  pfVar16 = (float *)(lVar1 * 0x10 + *(long *)(this + 0x40));
  pfVar17 = pfVar16 + (long)iVar18 * 4;
  if (this[0x60] == (GetTrianglesContextVertexList)0x0) {
    for (; pfVar16 < pfVar17; pfVar16 = pfVar16 + 0xc) {
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      fVar5 = pfVar16[2];
      fVar6 = *(float *)(this + 8);
      fVar7 = *(float *)(this + 0x18);
      fVar8 = *(float *)(this + 0x28);
      fVar9 = *(float *)(this + 0x38);
      *(ulong *)param_2 =
           CONCAT44(fVar3 * *(float *)(this + 4) + fVar4 * *(float *)(this + 0x14) +
                    fVar5 * *(float *)(this + 0x24) + *(float *)(this + 0x34),
                    fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
                    fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30));
      *(float *)(param_2 + 8) = fVar3 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8 + fVar9;
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      fVar5 = pfVar16[6];
      fVar6 = *(float *)(this + 8);
      fVar7 = *(float *)(this + 0x18);
      fVar8 = *(float *)(this + 0x28);
      fVar9 = *(float *)(this + 0x38);
      *(ulong *)(param_2 + 0xc) =
           CONCAT44(fVar3 * *(float *)(this + 4) + fVar4 * *(float *)(this + 0x14) +
                    fVar5 * *(float *)(this + 0x24) + *(float *)(this + 0x34),
                    fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
                    fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30));
      *(float *)(param_2 + 0x14) = fVar3 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8 + fVar9;
      fVar3 = pfVar16[8];
      fVar4 = pfVar16[9];
      fVar5 = pfVar16[10];
      fVar6 = *(float *)(this + 4);
      fVar7 = *(float *)(this + 8);
      fVar8 = *(float *)(this + 0x14);
      fVar9 = *(float *)(this + 0x18);
      fVar10 = *(float *)(this + 0x24);
      fVar11 = *(float *)(this + 0x28);
      fVar12 = *(float *)(this + 0x34);
      fVar13 = *(float *)(this + 0x38);
      *(float *)(param_2 + 0x18) =
           fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
           fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30);
      *(float *)(param_2 + 0x1c) = fVar3 * fVar6 + fVar4 * fVar8 + fVar5 * fVar10 + fVar12;
      *(float *)(param_2 + 0x20) = fVar3 * fVar7 + fVar4 * fVar9 + fVar5 * fVar11 + fVar13;
      param_2 = param_2 + 0x24;
    }
  }
  else {
    for (; pfVar16 < pfVar17; pfVar16 = pfVar16 + 0xc) {
      fVar3 = *pfVar16;
      fVar4 = pfVar16[1];
      fVar5 = pfVar16[2];
      fVar6 = *(float *)(this + 8);
      fVar7 = *(float *)(this + 0x18);
      fVar8 = *(float *)(this + 0x28);
      fVar9 = *(float *)(this + 0x38);
      *(ulong *)param_2 =
           CONCAT44(fVar3 * *(float *)(this + 4) + fVar4 * *(float *)(this + 0x14) +
                    fVar5 * *(float *)(this + 0x24) + *(float *)(this + 0x34),
                    fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
                    fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30));
      *(float *)(param_2 + 8) = fVar3 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8 + fVar9;
      fVar3 = pfVar16[8];
      fVar4 = pfVar16[9];
      fVar5 = pfVar16[10];
      fVar6 = *(float *)(this + 8);
      fVar7 = *(float *)(this + 0x18);
      fVar8 = *(float *)(this + 0x28);
      fVar9 = *(float *)(this + 0x38);
      *(ulong *)(param_2 + 0xc) =
           CONCAT44(fVar3 * *(float *)(this + 4) + fVar4 * *(float *)(this + 0x14) +
                    fVar5 * *(float *)(this + 0x24) + *(float *)(this + 0x34),
                    fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
                    fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30));
      *(float *)(param_2 + 0x14) = fVar3 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8 + fVar9;
      fVar3 = pfVar16[4];
      fVar4 = pfVar16[5];
      fVar5 = pfVar16[6];
      fVar6 = *(float *)(this + 4);
      fVar7 = *(float *)(this + 8);
      fVar8 = *(float *)(this + 0x14);
      fVar9 = *(float *)(this + 0x18);
      fVar10 = *(float *)(this + 0x24);
      fVar11 = *(float *)(this + 0x28);
      fVar12 = *(float *)(this + 0x34);
      fVar13 = *(float *)(this + 0x38);
      *(float *)(param_2 + 0x18) =
           fVar3 * *(float *)this + fVar4 * *(float *)(this + 0x10) +
           fVar5 * *(float *)(this + 0x20) + *(float *)(this + 0x30);
      *(float *)(param_2 + 0x1c) = fVar3 * fVar6 + fVar4 * fVar8 + fVar5 * fVar10 + fVar12;
      *(float *)(param_2 + 0x20) = fVar3 * fVar7 + fVar4 * fVar9 + fVar5 * fVar11 + fVar13;
      param_2 = param_2 + 0x24;
    }
  }
  *(long *)(this + 0x50) = lVar1 + iVar18;
  if (param_3 == (PhysicsMaterial **)0x0) {
    return;
  }
  ppPVar14 = param_3;
  if (param_3 < param_3 + iVar18 / 3) {
    do {
      ppPVar15 = ppPVar14 + 1;
      *ppPVar14 = *(PhysicsMaterial **)(this + 0x58);
      ppPVar14 = ppPVar15;
    } while (ppPVar15 < param_3 + iVar18 / 3);
  }
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::SphereShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC29;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SphereShapeSettings::~SphereShapeSettings() */

void __thiscall JPH::SphereShapeSettings::~SphereShapeSettings(SphereShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SphereShape::~SphereShape() */

void __thiscall JPH::SphereShape::~SphereShape(SphereShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SphereShape::SphereNoConvex::~SphereNoConvex() */

void __thiscall JPH::SphereShape::SphereNoConvex::~SphereNoConvex(SphereNoConvex *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SphereShape::SphereWithConvex::~SphereWithConvex() */

void __thiscall JPH::SphereShape::SphereWithConvex::~SphereWithConvex(SphereWithConvex *this)

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


