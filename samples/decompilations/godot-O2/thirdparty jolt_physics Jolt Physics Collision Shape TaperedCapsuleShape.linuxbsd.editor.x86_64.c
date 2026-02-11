
/* JPH::TaperedCapsuleShape::GetLocalBounds() const */

void JPH::TaperedCapsuleShape::GetLocalBounds(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_RSI;
  uint *in_RDI;
  float fVar5;
  uint uVar6;
  
  fVar1 = *(float *)(in_RSI + 0x44);
  fVar2 = *(float *)(in_RSI + 0x40);
  fVar5 = fVar1;
  if (fVar1 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar3 = *(float *)(in_RSI + 0x48);
  uVar6 = (uint)fVar5 ^ _LC26;
  fVar4 = *(float *)(in_RSI + 0x4c);
  in_RDI[4] = (uint)fVar5;
  in_RDI[5] = (uint)(fVar2 + fVar3);
  in_RDI[6] = (uint)fVar5;
  in_RDI[7] = (uint)fVar5;
  *in_RDI = uVar6;
  in_RDI[1] = (uint)(fVar4 - fVar1);
  in_RDI[2] = uVar6;
  in_RDI[3] = uVar6;
  return;
}



/* JPH::TaperedCapsuleShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::TaperedCapsuleShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::TaperedCapsuleShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined1 (*) [16]
JPH::TaperedCapsuleShape::GetWorldSpaceBounds
          (undefined8 param_1_00,undefined8 param_2,undefined1 (*param_1) [16],long param_4,
          float *param_5)

{
  undefined1 auVar1 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  fVar8 = *(float *)(param_4 + 0x4c) * fStack_14;
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar14._0_4_ = 0.0 - local_18;
  auVar14._4_4_ = 0.0 - fStack_14;
  auVar14._8_4_ = 0.0 - fStack_10;
  auVar14._12_4_ = 0.0 - fStack_c;
  auVar1._8_4_ = fStack_10;
  auVar1._0_8_ = param_1_00;
  auVar1._12_4_ = fStack_c;
  auVar15 = maxps(auVar14,auVar1);
  fStack_14 = fStack_14 * *(float *)(param_4 + 0x48);
  fVar16 = *(float *)(param_4 + 0x44) * auVar15._0_4_;
  fVar13 = auVar15._0_4_ * *(float *)(param_4 + 0x40);
  fVar9 = fVar8 * param_5[4] + *param_5 * 0.0 + param_5[8] * 0.0 + param_5[0xc];
  fVar10 = fVar8 * param_5[5] + param_5[1] * 0.0 + param_5[9] * 0.0 + param_5[0xd];
  fVar11 = fVar8 * param_5[6] + param_5[2] * 0.0 + param_5[10] * 0.0 + param_5[0xe];
  fVar12 = fVar8 * param_5[7] + param_5[3] * 0.0 + param_5[0xb] * 0.0 + param_5[0xf];
  fVar8 = fStack_14 * param_5[4] + *param_5 * 0.0 + param_5[8] * 0.0 + param_5[0xc];
  fVar3 = fStack_14 * param_5[5] + param_5[1] * 0.0 + param_5[9] * 0.0 + param_5[0xd];
  fVar4 = fStack_14 * param_5[6] + param_5[2] * 0.0 + param_5[10] * 0.0 + param_5[0xe];
  fVar5 = fStack_14 * param_5[7] + param_5[3] * 0.0 + param_5[0xb] * 0.0 + param_5[0xf];
  auVar2._0_4_ = fVar8 + fVar13;
  auVar2._4_4_ = fVar3 + fVar13;
  auVar2._8_4_ = fVar4 + fVar13;
  auVar2._12_4_ = fVar5 + fVar13;
  auVar6._0_4_ = fVar8 - fVar13;
  auVar6._4_4_ = fVar3 - fVar13;
  auVar6._8_4_ = fVar4 - fVar13;
  auVar6._12_4_ = fVar5 - fVar13;
  auVar15._4_4_ = fVar10 + fVar16;
  auVar15._0_4_ = fVar9 + fVar16;
  auVar15._8_4_ = fVar11 + fVar16;
  auVar15._12_4_ = fVar12 + fVar16;
  auVar15 = maxps(auVar2,auVar15);
  auVar7._4_4_ = fVar10 - fVar16;
  auVar7._0_4_ = fVar9 - fVar16;
  auVar7._8_4_ = fVar11 - fVar16;
  auVar7._12_4_ = fVar12 - fVar16;
  auVar7 = minps(auVar6,auVar7);
  param_1[1] = auVar15;
  *param_1 = auVar7;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::TaperedCapsuleShape::MakeScaleValid(undefined8 param_1,undefined8 param_2)

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
  auVar7._4_4_ = _LC2;
  auVar7._0_4_ = _LC2;
  auVar7._8_4_ = _LC2;
  auVar7._12_4_ = _LC2;
  auVar5 = maxps(auVar5,auVar7);
  auVar6._0_4_ = auVar5._0_4_ * (float)((uint)local_18 & _LC4 | _LC6);
  auVar6._4_4_ = auVar5._4_4_ * (float)((uint)uStack_14 & _LC4 | _LC6);
  auVar6._8_4_ = auVar5._8_4_ * (float)((uint)uStack_10 & _LC4 | _LC6);
  auVar6._12_4_ = auVar5._12_4_ * (float)((uint)uStack_c & _LC4 | _LC6);
  auVar3._0_4_ = 0.0 - auVar6._0_4_;
  auVar3._4_4_ = 0.0 - auVar6._4_4_;
  auVar3._8_4_ = 0.0 - auVar6._8_4_;
  auVar3._12_4_ = 0.0 - auVar6._12_4_;
  auVar5 = maxps(auVar3,auVar6);
  fVar2 = (auVar5._8_4_ + auVar5._0_4_ + auVar5._4_4_) / __LC7;
  auVar1._4_4_ = fVar2 * (float)((uint)auVar6._4_4_ & _LC4 | _LC6);
  auVar1._0_4_ = fVar2 * (float)((uint)auVar6._0_4_ & _LC4 | _LC6);
  auVar1._8_4_ = fVar2 * (float)((uint)auVar6._8_4_ & _LC4 | _LC6);
  auVar1._12_4_ = fVar2 * (float)((uint)auVar6._12_4_ & _LC4 | _LC6);
  return auVar1;
}



/* JPH::TaperedCapsuleShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::TaperedCapsuleShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fStack_10;
  float fStack_c;
  
  fVar1 = (float)((ulong)param_1 >> 0x20);
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar3._0_4_ = 0.0 - (float)param_1;
  auVar3._4_4_ = 0.0 - fVar1;
  auVar3._8_4_ = 0.0 - fStack_10;
  auVar3._12_4_ = 0.0 - fStack_c;
  auVar4._8_4_ = fStack_10;
  auVar4._0_8_ = param_1;
  auVar4._12_4_ = fStack_c;
  auVar4 = maxps(auVar3,auVar4);
  fVar2 = auVar4._0_4_;
  fVar5 = fVar2 * (float)*(undefined8 *)(param_3 + 0x40);
  fVar6 = fVar2 * (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  auVar3 = ZEXT416((uint)(*(float *)(param_3 + 0x48) * fVar1)) << 0x20;
  auVar4 = ZEXT416((uint)(fVar1 * *(float *)(param_3 + 0x4c))) << 0x20;
  if (param_4 == 1) {
    *(undefined4 *)(param_5 + 7) = 0;
    *param_5 = &PTR__TaperedCapsule_00102dd0;
    *(undefined1 (*) [16])(param_5 + 2) = auVar3;
    *(undefined1 (*) [16])(param_5 + 4) = auVar4;
    param_5[6] = CONCAT44(fVar6,fVar5);
    return param_5;
  }
  if ((param_4 & 0xfffffffd) != 0) {
    return (undefined8 *)0x0;
  }
  fVar2 = fVar2 * *(float *)(param_3 + 0x50);
  *(undefined1 (*) [16])(param_5 + 4) = auVar4;
  *param_5 = &PTR__TaperedCapsule_00102dd0;
  *(undefined1 (*) [16])(param_5 + 2) = auVar3;
  *(float *)(param_5 + 7) = fVar2;
  param_5[6] = CONCAT44(fVar6 - fVar2,fVar5 - fVar2);
  return param_5;
}



/* JPH::TaperedCapsuleShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::TaperedCapsuleShape::GetSurfaceNormal
          (ulong param_1,undefined8 param_2,TaperedCapsuleShape *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar7;
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 local_18 [16];
  
  fVar7 = (float)((ulong)param_2 >> 0x20);
  fVar5 = (float)param_2;
  fVar8 = (float)(param_1 >> 0x20);
  local_18._0_4_ = (undefined4)param_1;
  if (fVar8 <= *(float *)(this + 0x40) * *(float *)(this + 0x54) + *(float *)(this + 0x48)) {
    if (*(float *)(this + 0x54) * *(float *)(this + 0x44) + *(float *)(this + 0x4c) <= fVar8) {
      fVar8 = fVar5 * fVar5 + (float)local_18._0_4_ * (float)local_18._0_4_ + 0.0;
      if (_LC10 < fVar8) {
        fVar8 = SQRT(fVar8);
        auVar4._12_4_ = fVar5;
        auVar4._8_4_ = fVar5;
        auVar4._0_8_ = param_1 & 0xffffffff;
        auVar2._4_4_ = fVar8;
        auVar2._0_4_ = fVar8;
        auVar2._8_4_ = fVar8;
        auVar2._12_4_ = fVar8;
        auVar2 = divps(auVar4,auVar2);
        fVar5 = auVar2._8_4_ * auVar2._8_4_;
        fVar8 = auVar2._0_4_ * auVar2._0_4_ + 0.0;
      }
      else {
        fVar5 = 0.0;
        auVar2 = ZEXT416((uint)_LC6);
        fVar8 = _LC6;
      }
      local_18._4_4_ = *(undefined4 *)(this + 0x58);
      local_18._0_4_ = auVar2._0_4_;
      local_18._8_8_ = auVar2._8_8_;
      auVar3._0_4_ = SQRT(fVar5 + (float)local_18._4_4_ * (float)local_18._4_4_ + fVar8);
      auVar3._4_4_ = auVar3._0_4_;
      auVar3._8_4_ = auVar3._0_4_;
      auVar3._12_4_ = auVar3._0_4_;
      auVar2 = divps(local_18,auVar3);
      return auVar2;
    }
    auVar1._0_4_ = (float)local_18._0_4_ - 0.0;
    auVar1._4_4_ = fVar8 - *(float *)(this + 0x4c);
    auVar1._8_4_ = fVar5 - 0.0;
    auVar1._12_4_ = fVar7 - 0.0;
  }
  else {
    auVar1._0_4_ = (float)local_18._0_4_ - 0.0;
    auVar1._4_4_ = fVar8 - *(float *)(this + 0x48);
    auVar1._8_4_ = fVar5 - 0.0;
    auVar1._12_4_ = fVar7 - 0.0;
  }
  auVar6._0_4_ = SQRT(auVar1._8_4_ * auVar1._8_4_ +
                      auVar1._4_4_ * auVar1._4_4_ + auVar1._0_4_ * auVar1._0_4_ + 0.0);
  auVar6._4_4_ = auVar6._0_4_;
  auVar6._8_4_ = auVar6._0_4_;
  auVar6._12_4_ = auVar6._0_4_;
  auVar2 = divps(auVar1,auVar6);
  return auVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::TaperedCapsuleShape::GetSupportingFace
               (undefined8 param_1_00,float param_2,undefined8 param_3,undefined8 param_4,
               long param_1,undefined8 param_6,float *param_7,uint *param_8)

{
  float *pfVar1;
  uint uVar2;
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
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar18 = (float)((ulong)param_1_00 >> 0x20);
  fVar17 = (float)param_1_00;
  fStack_10 = (float)param_4;
  fStack_c = (float)((ulong)param_4 >> 0x20);
  local_18 = (float)param_3;
  fStack_14 = (float)((ulong)param_3 >> 0x20);
  fVar23 = SQRT(param_2 * param_2 + fVar18 * fVar18 + fVar17 * fVar17 + 0.0);
  if (fVar23 != 0.0) {
    auVar21._0_4_ = 0.0 - local_18;
    auVar21._4_4_ = 0.0 - fStack_14;
    auVar21._8_4_ = 0.0 - fStack_10;
    auVar21._12_4_ = 0.0 - fStack_c;
    auVar22._8_4_ = fStack_10;
    auVar22._0_8_ = param_3;
    auVar22._12_4_ = fStack_c;
    auVar22 = maxps(auVar21,auVar22);
    fVar27 = (*(float *)(param_1 + 0x40) * auVar22._0_4_) / fVar23;
    fVar20 = (auVar22._0_4_ * *(float *)(param_1 + 0x44)) / fVar23;
    fVar24 = 0.0 - fVar27 * fVar17;
    fVar25 = *(float *)(param_1 + 0x48) * fStack_14 - fVar27 * fVar18;
    fVar26 = 0.0 - fVar27 * param_2;
    fVar27 = 0.0 - fVar20 * fVar17;
    fVar19 = fStack_14 * *(float *)(param_1 + 0x4c) - fVar20 * fVar18;
    fVar20 = 0.0 - fVar20 * param_2;
    if ((float)((uint)((fVar26 * param_2 + fVar25 * fVar18 + fVar24 * fVar17 + 0.0) -
                      (fVar20 * param_2 + fVar19 * fVar18 + fVar27 * fVar17 + 0.0)) & __LC12) <
        fVar23 * __LC11) {
      fVar17 = *param_7;
      fVar18 = param_7[1];
      fVar23 = param_7[2];
      fVar3 = param_7[3];
      fVar4 = param_7[4];
      fVar5 = param_7[5];
      fVar6 = param_7[6];
      fVar7 = param_7[7];
      fVar8 = param_7[8];
      fVar9 = param_7[9];
      fVar10 = param_7[10];
      fVar11 = param_7[0xb];
      fVar12 = param_7[0xc];
      fVar13 = param_7[0xd];
      fVar14 = param_7[0xe];
      fVar15 = param_7[0xf];
      uVar2 = *param_8;
      uVar16 = (ulong)uVar2 + 1;
      pfVar1 = (float *)(param_8 + uVar16 * 4);
      *pfVar1 = fVar25 * fVar4 + fVar24 * fVar17 + fVar26 * fVar8 + fVar12;
      pfVar1[1] = fVar25 * fVar5 + fVar24 * fVar18 + fVar26 * fVar9 + fVar13;
      pfVar1[2] = fVar25 * fVar6 + fVar24 * fVar23 + fVar26 * fVar10 + fVar14;
      pfVar1[3] = fVar25 * fVar7 + fVar24 * fVar3 + fVar26 * fVar11 + fVar15;
      *param_8 = uVar2 + 2;
      pfVar1 = (float *)(param_8 + (uVar16 & 0xffffffff) * 4 + 4);
      *pfVar1 = fVar19 * fVar4 + fVar27 * fVar17 + fVar20 * fVar8 + fVar12;
      pfVar1[1] = fVar19 * fVar5 + fVar27 * fVar18 + fVar20 * fVar9 + fVar13;
      pfVar1[2] = fVar19 * fVar6 + fVar27 * fVar23 + fVar20 * fVar10 + fVar14;
      pfVar1[3] = fVar19 * fVar7 + fVar27 * fVar3 + fVar20 * fVar11 + fVar15;
    }
  }
  return;
}



/* JPH::TaperedCapsuleShape::GetMassProperties() const */

void JPH::TaperedCapsuleShape::GetMassProperties(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_RSI;
  undefined4 *in_RDI;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(in_RSI + 0x40);
  fVar2 = *(float *)(in_RSI + 0x44);
  *in_RDI = 0;
  fVar3 = *(float *)(in_RSI + 0x48);
  fVar5 = (fVar1 + fVar2) * _LC13;
  fVar4 = *(float *)(in_RSI + 0x4c);
  fVar6 = (float)((uint)fVar5 ^ _LC26);
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x10) = (undefined1  [16])0x0;
  JPH::MassProperties::SetMassAndInertiaOfSolidBox
            (CONCAT44((fVar1 + fVar3) - (fVar4 - fVar2),fVar5 - fVar6),
             CONCAT44(fVar5 - fVar6,fVar5 - fVar6),*(undefined4 *)(in_RSI + 0x28));
  return;
}



/* JPH::TaperedCapsuleShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::TaperedCapsuleShape::SaveBinaryState(TaperedCapsuleShape *this,StreamOut *param_1)

{
  JPH::ConvexShape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
                    /* WARNING: Could not recover jumptable at 0x0010077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,4);
  return;
}



/* JPH::TaperedCapsuleShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::TaperedCapsuleShape::RestoreBinaryState(TaperedCapsuleShape *this,StreamIn *param_1)

{
  JPH::ConvexShape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
                    /* WARNING: Could not recover jumptable at 0x0010082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,4);
  return;
}



/* JPH::TaperedCapsuleShape::IsValidScale(JPH::Vec3) const */

char __thiscall JPH::TaperedCapsuleShape::IsValidScale(undefined8 param_1,undefined8 param_2)

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
    cVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2 + 0.0 <= _LC15;
  }
  return cVar1;
}



/* _FUN() */

void JPH::TaperedCapsuleShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x70);
  *(undefined2 *)(puVar1 + 3) = 0x400;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x447a0000;
  *puVar1 = &PTR__TaperedCapsuleShape_00102e00;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x58);
  uVar1 = _LC18;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *puVar2 = &PTR_GetRTTI_00102d98;
  *(undefined1 (*) [16])(puVar2 + 9) = ZEXT416(uVar1);
  return;
}



/* std::_Function_handler<JPH::Vec3 (JPH::Vec3), JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,
   JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const::{lambda(JPH::Vec3)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<JPH::Vec3(JPH::Vec3),JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::{lambda(JPH::Vec3)#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      *param_1 = *param_2;
    }
    return 0;
  }
  *param_1 = &const::{lambda(JPH::Vec3)#1}::typeinfo;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::TaperedCapsuleShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,float *param_4,long *param_5,
               int param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar33;
  float fVar36;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  float fVar38;
  undefined1 auVar29 [16];
  float fVar35;
  float fVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar17 = _UNK_00102fac;
  fVar16 = _UNK_00102fa8;
  fVar15 = __LC21;
  uVar14 = _LC26;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar1 = param_4[6];
  local_88 = (float)param_1_00;
  fStack_84 = (float)((ulong)param_1_00 >> 0x20);
  fVar48 = (float)*(undefined8 *)(param_4 + 4);
  fVar49 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fStack_80 = (float)param_2;
  fStack_7c = (float)((ulong)param_2 >> 0x20);
  fVar24 = (float)*(undefined8 *)(param_4 + 8);
  fVar33 = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar5 = param_4[10];
  fVar6 = param_4[0xc];
  fVar7 = param_4[0xd];
  fVar8 = param_4[0xe];
  auVar27._0_4_ = 0.0 - local_88;
  auVar27._4_4_ = 0.0 - fStack_84;
  auVar27._8_4_ = 0.0 - fStack_80;
  auVar27._12_4_ = 0.0 - fStack_7c;
  auVar28._8_4_ = fStack_80;
  auVar28._0_8_ = param_1_00;
  auVar28._12_4_ = fStack_7c;
  auVar28 = maxps(auVar27,auVar28);
  fVar44 = _LC4;
  if (0.0 <= fStack_84) {
    fVar44 = _LC6;
  }
  lVar9 = param_5[1];
  pfVar20 = (float *)param_5[2];
  lVar10 = param_5[3];
  lVar11 = param_5[5];
  fVar47 = *(float *)(param_1 + 0x48) * auVar28._4_4_;
  pfVar19 = (float *)param_5[6];
  lVar12 = param_5[7];
  fVar39 = auVar28._4_4_ * *(float *)(param_1 + 0x4c);
  lVar13 = param_5[9];
  fVar50 = *(float *)(param_1 + 0x40) * auVar28._0_4_;
  fVar25 = auVar28._0_4_ * *(float *)(param_1 + 0x44);
  pfVar18 = (float *)*param_5;
  pfVar21 = (float *)((long)(param_6 * (int)lVar9) + (long)pfVar18);
  pfVar22 = (float *)param_5[4];
  puVar23 = (undefined4 *)param_5[8];
  if (pfVar21 != pfVar18) {
    do {
      if (0.0 < *pfVar20) {
        fVar38 = *pfVar18;
        fVar35 = pfVar18[1];
        fVar37 = pfVar18[2];
        fVar26 = (fVar37 * fVar4 + fVar38 * fVar2 + fVar35 * fVar3 +
                 (0.0 - (fVar6 * fVar2 + fVar7 * fVar3 + fVar8 * fVar4))) * fVar15;
        fVar34 = (fVar37 * fVar1 + fVar38 * fVar48 + fVar35 * fVar49 +
                 (0.0 - (fVar6 * fVar48 + fVar7 * fVar49 + fVar8 * fVar1))) * fVar44;
        fVar36 = (fVar37 * fVar5 + fVar38 * fVar24 + fVar35 * fVar33 +
                 (0.0 - (fVar6 * fVar24 + fVar7 * fVar33 + fVar8 * fVar5))) * fVar16;
        fVar38 = (fVar37 * 0.0 + fVar38 * 0.0 + fVar35 * 0.0 + 1.0) * fVar17;
        auVar46._0_4_ = fVar26 - 0.0;
        auVar46._4_4_ = fVar34 - fVar47;
        auVar46._8_4_ = fVar36 - 0.0;
        auVar46._12_4_ = fVar38 - 0.0;
        auVar29._0_4_ =
             SQRT(auVar46._0_4_ * auVar46._0_4_ + 0.0 + auVar46._4_4_ * auVar46._4_4_ +
                  auVar46._8_4_ * auVar46._8_4_);
        if (auVar46._4_4_ < *(float *)(param_1 + 0x54) * auVar29._0_4_) {
          auVar30._0_4_ = fVar26 - 0.0;
          auVar30._4_4_ = fVar34 - fVar39;
          auVar30._8_4_ = fVar36 - 0.0;
          auVar30._12_4_ = fVar38 - 0.0;
          auVar41._0_4_ =
               SQRT(auVar30._0_4_ * auVar30._0_4_ + 0.0 + auVar30._4_4_ * auVar30._4_4_ +
                    auVar30._8_4_ * auVar30._8_4_);
          if (*(float *)(param_1 + 0x54) * auVar41._0_4_ < auVar30._4_4_) {
            fVar38 = fVar36 * fVar36 + fVar26 * fVar26 + 0.0;
            if (_LC10 < fVar38) {
              auVar32._0_4_ = SQRT(fVar38);
              auVar45._4_4_ = 0;
              auVar45._0_4_ = fVar26;
              auVar45._8_4_ = fVar36;
              auVar45._12_4_ = fVar36;
              auVar32._4_4_ = auVar32._0_4_;
              auVar32._8_4_ = auVar32._0_4_;
              auVar32._12_4_ = auVar32._0_4_;
              auVar28 = divps(auVar45,auVar32);
              local_98._4_4_ = *(float *)(param_1 + 0x58);
              local_98._0_4_ = auVar28._0_4_;
              uStack_90 = auVar28._8_8_;
              fVar38 = auVar28._8_4_ * auVar28._8_4_ +
                       (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
                       (float)local_98._4_4_ * (float)local_98._4_4_;
              if (fVar38 <= _LC10) {
                register0x00001344 = 0;
                local_98._0_4_ = _LC6;
                goto LAB_00100e15;
              }
            }
            else {
              fVar38 = *(float *)(param_1 + 0x58);
              uStack_90 = 0;
              local_98 = (undefined1  [8])((ulong)(uint)fVar38 << 0x20 | 0x3f800000);
              fVar38 = fVar38 * fVar38 + _LC6 + 0.0;
            }
            auVar31._0_4_ = SQRT(fVar38);
            auVar31._4_4_ = auVar31._0_4_;
            auVar31._8_4_ = auVar31._0_4_;
            auVar31._12_4_ = auVar31._0_4_;
            auVar28 = divps(_local_98,auVar31);
            _local_98 = auVar28._0_12_;
          }
          else if (auVar41._0_4_ == 0.0) {
            uStack_90 = _UNK_00102f98;
            local_98 = (undefined1  [8])__LC20;
          }
          else {
            auVar41._4_4_ = auVar41._0_4_;
            auVar41._8_4_ = auVar41._0_4_;
            auVar41._12_4_ = auVar41._0_4_;
            auVar28 = divps(auVar30,auVar41);
            _local_98 = auVar28._0_12_;
          }
LAB_00100e15:
          fVar38 = fVar25 * (float)local_98._0_4_;
          fVar37 = fVar25 * (float)uStack_90;
          fVar35 = fVar25 * (float)local_98._4_4_ + fVar39;
        }
        else {
          uStack_90 = _UNK_00102f88;
          local_98 = (undefined1  [8])__LC19;
          if (auVar29._0_4_ != 0.0) {
            auVar29._4_4_ = auVar29._0_4_;
            auVar29._8_4_ = auVar29._0_4_;
            auVar29._12_4_ = auVar29._0_4_;
            auVar28 = divps(auVar46,auVar29);
            _local_98 = auVar28._0_12_;
          }
          fVar38 = fVar50 * (float)local_98._0_4_;
          fVar37 = fVar50 * (float)uStack_90;
          fVar35 = fVar50 * (float)local_98._4_4_ + fVar47;
        }
        fVar40 = SUB124(_local_98,0);
        fVar43 = SUB124(_local_98,8);
        fVar42 = SUB124(_local_98,4);
        fVar38 = (fVar37 + 0.0) * fVar43 + fVar35 * fVar42 + (fVar38 + 0.0) * fVar40 + 0.0;
        fVar35 = (float)((uint)((fVar43 * fVar36 + fVar34 * fVar42 + fVar40 * fVar26 + 0.0) - fVar38
                               ) ^ uVar14);
        if (*pfVar19 < fVar35) {
          fVar40 = fVar40 * fVar15;
          fVar42 = fVar42 * fVar44;
          fVar43 = fVar43 * fVar16;
          *pfVar19 = fVar35;
          fVar34 = fVar40 * *param_4 + fVar42 * param_4[4] + fVar43 * param_4[8];
          fVar36 = fVar40 * param_4[1] + fVar42 * param_4[5] + fVar43 * param_4[9];
          fVar43 = fVar40 * param_4[2] + fVar42 * param_4[6] + fVar43 * param_4[10];
          fVar35 = param_4[0xc];
          fVar37 = param_4[0xd];
          fVar26 = param_4[0xe];
          *pfVar22 = fVar34;
          pfVar22[1] = fVar36;
          pfVar22[2] = fVar43;
          pfVar22[3] = (float)((uint)fVar38 ^ uVar14) -
                       (fVar43 * fVar26 + fVar36 * fVar37 + fVar35 * fVar34 + 0.0);
          *puVar23 = param_7;
        }
      }
      pfVar18 = (float *)((long)pfVar18 + (long)(int)lVar9);
      pfVar20 = (float *)((long)pfVar20 + (long)(int)lVar10);
      puVar23 = (undefined4 *)((long)puVar23 + (long)(int)lVar13);
      pfVar22 = (float *)((long)pfVar22 + (long)(int)lVar11);
      pfVar19 = (float *)((long)pfVar19 + (long)(int)lVar12);
    } while (pfVar21 != pfVar18);
  }
  return;
}



/* JPH::TaperedCapsuleShapeSettings::GetRTTI() const */

undefined1 * JPH::TaperedCapsuleShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti,
                      "TaperedCapsuleShapeSettings",0x58,
                      GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti;
}



/* std::_Function_handler<JPH::Vec3 (JPH::Vec3), JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,
   JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const::{lambda(JPH::Vec3)#1}>::_M_invoke(std::_Any_data const&, JPH::Vec3&&) */

undefined1  [16]
std::
_Function_handler<JPH::Vec3(JPH::Vec3),JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::{lambda(JPH::Vec3)#1}>
::_M_invoke(_Any_data *param_1,Vec3 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar18 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  plVar1 = *(long **)param_1;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  local_18 = (float)uVar2;
  fStack_14 = (float)((ulong)uVar2 >> 0x20);
  fStack_10 = (float)uVar3;
  fStack_c = (float)((ulong)uVar3 >> 0x20);
  if (*(code **)(*plVar1 + 0x10) != JPH::TaperedCapsuleShape::TaperedCapsule::GetSupport) {
                    /* WARNING: Could not recover jumptable at 0x0010113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar18 = (**(code **)(*plVar1 + 0x10))(uVar2,uVar3);
    return auVar18;
  }
  fVar10 = SQRT(fStack_10 * fStack_10 + fStack_14 * fStack_14 + local_18 * local_18 + 0.0);
  if (fVar10 == 0.0) {
    fStack_c = *(float *)((long)plVar1 + 0x1c) + 0.0;
    local_18 = *(float *)(plVar1 + 2) + 0.0;
    fStack_14 = *(float *)(plVar1 + 6) + *(float *)((long)plVar1 + 0x14);
    fStack_10 = *(float *)(plVar1 + 3) + 0.0;
  }
  else {
    fVar5 = *(float *)(plVar1 + 6) / fVar10;
    fVar10 = *(float *)((long)plVar1 + 0x34) / fVar10;
    fVar8 = fVar5 * fStack_c;
    fVar6 = fVar5 * local_18 + *(float *)(plVar1 + 2);
    fVar7 = fVar5 * fStack_14 + *(float *)((long)plVar1 + 0x14);
    fVar5 = fVar5 * fStack_10 + *(float *)(plVar1 + 3);
    fVar11 = fVar10 * local_18 + *(float *)(plVar1 + 4);
    fVar14 = fVar10 * fStack_14 + *(float *)((long)plVar1 + 0x24);
    fVar15 = fVar10 * fStack_10 + *(float *)(plVar1 + 5);
    fStack_c = fVar10 * fStack_c + *(float *)((long)plVar1 + 0x2c);
    fVar17 = fVar7 * fStack_14;
    fVar12 = fVar6 * local_18;
    fVar13 = fVar11 * local_18;
    fVar16 = fVar14 * fStack_14;
    fVar10 = fVar5 * fStack_10;
    fVar9 = fVar15 * fStack_10;
    local_18 = fVar11;
    fStack_14 = fVar14;
    fStack_10 = fVar15;
    if (fVar9 + fVar16 + fVar13 + 0.0 < fVar17 + fVar12 + 0.0 + fVar10) {
      auVar18._4_4_ = fVar7;
      auVar18._0_4_ = fVar6;
      auVar18._8_4_ = fVar5;
      auVar18._12_4_ = fVar8 + *(float *)((long)plVar1 + 0x1c);
      return auVar18;
    }
  }
  auVar4._4_4_ = fStack_14;
  auVar4._0_4_ = local_18;
  auVar4._8_4_ = fStack_10;
  auVar4._12_4_ = fStack_c;
  return auVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool, bool) const */

void JPH::TaperedCapsuleShape::Draw
               (ulong param_1_00,undefined8 param_2_00,long param_1,long *param_2,float *param_5,
               ulong param_6,char param_7,undefined1 param_8)

{
  float *pfVar1;
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
  undefined4 uVar14;
  uint uVar15;
  code *pcVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fStack_1130;
  float fStack_112c;
  int *local_10f0;
  float local_10e8;
  float fStack_10e4;
  float fStack_10e0;
  float fStack_10dc;
  float local_10d8;
  float fStack_10d4;
  float fStack_10d0;
  float fStack_10cc;
  undefined8 local_10c8;
  float afStack_10c0 [2];
  code *local_10b8;
  code *pcStack_10b0;
  undefined1 local_1088 [4];
  float fStack_1084;
  undefined8 uStack_1080;
  undefined1 local_1078 [16];
  undefined1 local_1068 [16];
  undefined8 local_1058;
  ulong uStack_1050;
  long local_40;
  
  fVar31 = (float)param_1_00;
  fVar33 = (float)(param_1_00 >> 0x20);
  fStack_1130 = (float)param_2_00;
  fStack_112c = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar16 = (code *)0x0;
  if (*(long *)(param_1 + 0x60) == 0) {
    auVar26._4_4_ = _LC4;
    auVar26._0_4_ = _LC4;
    auVar26._8_4_ = _LC4;
    auVar26._12_4_ = _LC4;
    auVar35._4_4_ = _LC6;
    auVar35._0_4_ = _LC6;
    auVar35._8_4_ = _LC6;
    auVar35._12_4_ = _LC6;
    auVar26 = maxps(auVar26,auVar35);
    uStack_1080 = _local_1088;
    _local_1088 = &PTR__TaperedCapsule_00102dd0;
    afStack_10c0[0] = 0.0;
    afStack_10c0[1] = 0.0;
    uStack_1050 = uStack_1050 & 0xffffffff00000000;
    local_1058 = CONCAT44(auVar26._0_4_ * (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                          auVar26._0_4_ * (float)*(undefined8 *)(param_1 + 0x40));
    local_1068 = ZEXT416(*(uint *)(param_1 + 0x4c)) << 0x20;
    local_1078 = ZEXT416(*(uint *)(param_1 + 0x48)) << 0x20;
    local_10b8 = std::
                 _Function_handler<JPH::Vec3(JPH::Vec3),JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::{lambda(JPH::Vec3)#1}>
                 ::_M_manager;
    pcStack_10b0 = std::
                   _Function_handler<JPH::Vec3(JPH::Vec3),JPH::TaperedCapsuleShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::{lambda(JPH::Vec3)#1}>
                   ::_M_invoke;
    local_10c8 = local_1088;
    JPH::DebugRenderer::CreateTriangleGeometryForConvex(&local_10f0,param_2,&local_10c8);
    piVar19 = *(int **)(param_1 + 0x60);
    fVar31 = (float)param_1_00;
    fVar33 = (float)(param_1_00 >> 0x20);
    param_6 = param_6 & 0xffffffff;
    if (piVar19 == local_10f0) {
      if (local_10f0 != (int *)0x0) {
        LOCK();
        *local_10f0 = *local_10f0 + -1;
        UNLOCK();
        if (*local_10f0 == 0) {
          plVar17 = *(long **)(local_10f0 + 6);
          if (plVar17 != (long *)0x0) {
            if ((*(long *)(local_10f0 + 2) != 0) &&
               (plVar20 = plVar17 + *(long *)(local_10f0 + 2) * 2, plVar17 < plVar20)) {
              do {
                if ((long *)*plVar17 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar17 + 0x18))();
                }
                plVar17 = plVar17 + 2;
              } while (plVar17 < plVar20);
              plVar17 = *(long **)(local_10f0 + 6);
            }
            local_10f0[2] = 0;
            local_10f0[3] = 0;
            (*Free)(plVar17);
          }
          param_1_00 = CONCAT44(fVar33,fVar31);
          (*Free)(local_10f0);
          fVar31 = (float)param_1_00;
          fVar33 = (float)(param_1_00 >> 0x20);
        }
      }
    }
    else {
      if (piVar19 != (int *)0x0) {
        LOCK();
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (*piVar19 == 0) {
          plVar17 = *(long **)(piVar19 + 6);
          if (plVar17 != (long *)0x0) {
            if ((*(long *)(piVar19 + 2) != 0) &&
               (plVar20 = plVar17 + *(long *)(piVar19 + 2) * 2, plVar17 < plVar20)) {
              do {
                if ((long *)*plVar17 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar17 + 0x18))();
                }
                plVar17 = plVar17 + 2;
              } while (plVar17 < plVar20);
              plVar17 = *(long **)(piVar19 + 6);
            }
            piVar19[2] = 0;
            piVar19[3] = 0;
            (*Free)(plVar17);
          }
          param_1_00 = CONCAT44(fVar33,fVar31);
          (*Free)(piVar19);
          fVar31 = (float)param_1_00;
          fVar33 = (float)(param_1_00 >> 0x20);
        }
      }
      *(int **)(param_1 + 0x60) = local_10f0;
    }
    pcVar16 = local_10b8;
    if (local_10b8 != (code *)0x0) {
      param_1_00 = CONCAT44(fVar33,fVar31);
      pcVar16 = (code *)(*local_10b8)(&local_10c8,&local_10c8,3);
      fVar31 = (float)param_1_00;
      fVar33 = (float)(param_1_00 >> 0x20);
    }
  }
  auVar21._4_4_ = -(uint)(fVar33 < 0.0);
  auVar21._0_4_ = -(uint)(fVar31 < 0.0);
  auVar21._8_4_ = -(uint)(fStack_1130 < 0.0);
  auVar21._12_4_ = -(uint)(fStack_112c < 0.0);
  uVar14 = movmskps((int)pcVar16,auVar21);
  fVar22 = fVar31;
  fVar27 = fVar33;
  fVar28 = fStack_1130;
  if ((POPCOUNT((byte)uVar14 & 7) & 1U) != 0) {
    fVar22 = fVar31 * _LC4;
    fVar27 = fVar33 * _UNK_00102fb4;
    fVar28 = fStack_1130 * _UNK_00102fb8;
  }
  fVar23 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar5 = param_5[4];
  fVar6 = param_5[5];
  fVar7 = param_5[6];
  fVar8 = param_5[7];
  lVar18 = 0;
  fVar9 = param_5[8];
  fVar10 = param_5[9];
  fVar11 = param_5[10];
  fVar12 = param_5[0xb];
  local_10d8 = param_5[0xc];
  fStack_10d4 = param_5[0xd];
  fStack_10d0 = param_5[0xe];
  fStack_10cc = param_5[0xf];
  _local_1088 = ZEXT416((uint)fVar22);
  local_1068 = ZEXT416((uint)fVar28) << 0x40;
  local_1078 = ZEXT416((uint)fVar27) << 0x20;
  local_1058 = __LC24;
  uStack_1050 = _UNK_00102fc8;
  do {
    fVar22 = *(float *)(local_1088 + lVar18);
    fVar27 = *(float *)(local_1088 + lVar18 + 4);
    fVar28 = *(float *)(local_1088 + lVar18 + 8);
    fVar13 = *(float *)(local_1088 + lVar18 + 0xc);
    *(float *)((long)&local_10c8 + lVar18) =
         fVar13 * local_10d8 + fVar22 * fVar23 + fVar27 * fVar5 + fVar28 * fVar9;
    *(float *)((long)&local_10c8 + lVar18 + 4) =
         fVar13 * fStack_10d4 + fVar22 * fVar2 + fVar27 * fVar6 + fVar28 * fVar10;
    *(float *)((long)afStack_10c0 + lVar18) =
         fVar13 * fStack_10d0 + fVar22 * fVar3 + fVar27 * fVar7 + fVar28 * fVar11;
    *(float *)((long)afStack_10c0 + lVar18 + 4) =
         fVar13 * fStack_10cc + fVar22 * fVar4 + fVar27 * fVar8 + fVar28 * fVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  fVar22 = *(float *)(param_1 + 0x44);
  fVar27 = *(float *)(param_1 + 0x40);
  lVar18 = 0;
  fVar28 = fVar22;
  if (fVar22 <= fVar27) {
    fVar28 = fVar27;
  }
  fVar23 = (float)((uint)fVar28 ^ _LC26);
  auVar29._0_4_ = fVar28 * fVar31;
  auVar29._4_4_ = (*(float *)(param_1 + 0x48) + fVar27) * fVar33;
  auVar29._8_4_ = fVar28 * fStack_1130;
  auVar29._12_4_ = fVar28 * fStack_112c;
  auVar24._0_8_ = CONCAT44((*(float *)(param_1 + 0x4c) - fVar22) * fVar33,fVar23 * fVar31);
  auVar24._8_4_ = fVar23 * fStack_1130;
  auVar24._12_4_ = fVar23 * fStack_112c;
  auVar32._8_4_ = auVar24._8_4_;
  auVar32._0_8_ = auVar24._0_8_;
  auVar32._12_4_ = auVar24._12_4_;
  _local_1088 = minps(auVar24,auVar29);
  local_1078 = maxps(auVar32,auVar29);
  local_10e8 = local_10d8;
  fStack_10e4 = fStack_10d4;
  fStack_10e0 = fStack_10d0;
  fStack_10dc = fStack_10cc;
  do {
    fVar31 = *(float *)(local_1088 + lVar18);
    fVar33 = *(float *)(local_1078 + lVar18);
    pfVar1 = param_5 + lVar18;
    auVar25._0_8_ = CONCAT44(fVar31 * pfVar1[1],fVar31 * *pfVar1);
    auVar25._8_4_ = fVar31 * pfVar1[2];
    auVar25._12_4_ = fVar31 * pfVar1[3];
    pfVar1 = param_5 + lVar18;
    auVar30._0_4_ = fVar33 * *pfVar1;
    auVar30._4_4_ = fVar33 * pfVar1[1];
    auVar30._8_4_ = fVar33 * pfVar1[2];
    auVar30._12_4_ = fVar33 * pfVar1[3];
    lVar18 = lVar18 + 4;
    auVar34._8_4_ = auVar25._8_4_;
    auVar34._0_8_ = auVar25._0_8_;
    auVar34._12_4_ = auVar25._12_4_;
    auVar35 = minps(auVar34,auVar30);
    auVar26 = maxps(auVar25,auVar30);
    local_10e8 = local_10e8 + auVar35._0_4_;
    fStack_10e4 = fStack_10e4 + auVar35._4_4_;
    fStack_10e0 = fStack_10e0 + auVar35._8_4_;
    fStack_10dc = fStack_10dc + auVar35._12_4_;
    local_10d8 = local_10d8 + auVar26._0_4_;
    fStack_10d4 = fStack_10d4 + auVar26._4_4_;
    fStack_10d0 = fStack_10d0 + auVar26._8_4_;
    fStack_10cc = fStack_10cc + auVar26._12_4_;
  } while (lVar18 != 0xc);
  if (param_7 != '\0') {
    plVar17 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      plVar17 = PhysicsMaterial::sDefault;
    }
    if (*(code **)(*plVar17 + 0x28) == PhysicsMaterial::GetDebugColor) {
      param_6 = (ulong)(uint)Color::sGrey;
    }
    else {
      param_1_00 = (ulong)(uint)(fVar28 * fVar28);
      uVar15 = (**(code **)(*plVar17 + 0x28))();
      param_6 = (ulong)uVar15;
    }
  }
  (**(code **)(*param_2 + 0x30))
            (param_2,&local_10c8,&local_10e8,param_6,param_1 + 0x60,0,0,param_8,param_1_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(code **)param_1 = JPH::DebugRenderer::CreateTriangleGeometryForConvex;
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
    *(code **)param_1 = __stack_chk_fail;
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
                    /* WARNING: Could not recover jumptable at 0x001016d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(TaperedCapsuleShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti,
                      "TaperedCapsuleShapeSettings",0x58,
                      GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::{lambda(void*)#1}::_FUN,
                      TaperedCapsuleShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*)::rtti;
}



/* JPH::TaperedCapsuleShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::TaperedCapsuleShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((TaperedCapsuleShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::TaperedCapsuleShapeSettings::IsSphere() const */

bool __thiscall JPH::TaperedCapsuleShapeSettings::IsSphere(TaperedCapsuleShapeSettings *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(this + 0x50);
  fVar2 = *(float *)(this + 0x54);
  fVar3 = *(float *)(this + 0x4c) + *(float *)(this + 0x4c);
  fVar4 = fVar2;
  fVar5 = fVar1;
  if ((fVar2 <= fVar1) && (fVar4 = fVar1, fVar5 = fVar2, fVar1 <= fVar2)) {
    return fVar3 + fVar1 <= fVar1;
  }
  return fVar3 + fVar5 <= fVar4;
}



/* JPH::TaperedCapsuleShapeSettings::TaperedCapsuleShapeSettings(float, float, float,
   JPH::PhysicsMaterial const*) */

void __thiscall
JPH::TaperedCapsuleShapeSettings::TaperedCapsuleShapeSettings
          (TaperedCapsuleShapeSettings *this,float param_1,float param_2,float param_3,
          PhysicsMaterial *param_4)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x38] = (TaperedCapsuleShapeSettings)0x0;
  *(code **)this = JPH::DebugRenderer::CreateTriangleGeometryForConvex;
  *(PhysicsMaterial **)(this + 0x40) = param_4;
  if (param_4 != (PhysicsMaterial *)0x0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x48) = 0x447a0000;
  *(undefined ***)this = &PTR_GetRTTI_00102d98;
  *(float *)(this + 0x4c) = param_1;
  *(float *)(this + 0x50) = param_2;
  *(float *)(this + 0x54) = param_3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::TaperedCapsuleShape(JPH::TaperedCapsuleShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::TaperedCapsuleShape::TaperedCapsuleShape
          (TaperedCapsuleShape *this,TaperedCapsuleShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  float fVar13;
  uint uVar14;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar15;
  
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(this + 0x18) = 0x400;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar15;
  *(code **)this = JPH::RTTI::RTTI;
  lVar3 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x28) = uVar2;
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  fVar7 = (float)uVar15;
  fVar9 = (float)((ulong)uVar15 >> 0x20);
  *(undefined ***)this = &PTR__TaperedCapsuleShape_00102e00;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x40) = uVar15;
  *(undefined4 *)(this + 0x58) = 0;
  fVar21 = _LC6;
  if (0.0 < fVar7) {
    if (0.0 < fVar9) {
      fVar20 = *(float *)(param_1 + 0x4c);
      if (fVar20 <= 0.0) {
        if (param_2[0x20] == (Result)0x1) {
          plVar4 = *(long **)param_2;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        *(Result **)param_2 = param_2 + 0x10;
        *(undefined8 *)(param_2 + 0x10) = 0x2064696c61766e49;
        *(undefined8 *)(param_2 + 0x16) = 0x7468676965682064;
        *(undefined8 *)(param_2 + 8) = 0xe;
        param_2[0x1e] = (Result)0x0;
      }
      else {
        if (fVar7 < fVar9) {
          if (fVar9 < fVar20 + fVar20 + fVar7) goto LAB_001019b5;
        }
        else {
          in_XMM5._0_4_ = -(uint)(fVar9 < fVar7) & (uint)fVar9;
          in_XMM5._4_4_ = fVar9;
          in_XMM5._8_8_ = 0;
          auVar16 = ZEXT416(~-(uint)(fVar9 < fVar7) & (uint)fVar7) | in_XMM5;
          uVar15 = auVar16._0_8_;
          if (fVar7 < fVar20 + fVar20 + auVar16._0_4_) {
LAB_001019b5:
            auVar22._4_4_ = _LC6;
            auVar22._0_4_ = _LC6;
            auVar22._8_4_ = _LC6;
            auVar22._12_4_ = _LC6;
            fVar17 = _LC13 * (fVar9 - fVar7);
            fVar13 = fVar20 + fVar17;
            fVar17 = fVar17 - fVar20;
            *(undefined1 (*) [16])(this + 0x30) = ZEXT416((uint)(fVar20 - fVar13)) << 0x20;
            fVar20 = _LC13;
            fVar7 = (fVar9 - fVar7) / (fVar13 - fVar17);
            *(float *)(this + 0x48) = fVar13;
            *(float *)(this + 0x4c) = fVar17;
            *(int *)(this + 0x50) = (int)uVar15;
            *(float *)(this + 0x54) = fVar7;
            auVar16._0_4_ = (uint)fVar7 ^ (uint)fVar7 & _LC26;
            auVar16._4_4_ = (uint)fVar7 ^ (uint)fVar7 & _LC26;
            auVar16._8_4_ = (uint)fVar7 ^ (uint)fVar7 & _LC26;
            auVar16._12_4_ = (uint)fVar7 ^ (uint)fVar7 & _LC26;
            auVar16 = minps(auVar16,auVar22);
            fVar9 = auVar16._0_4_;
            auVar23._0_4_ = (fVar21 - fVar9) * fVar20;
            auVar23._4_4_ = (fVar21 - auVar16._4_4_) * fVar20;
            auVar23._8_4_ = (fVar21 - auVar16._8_4_) * fVar20;
            auVar23._12_4_ = (fVar21 - auVar16._12_4_) * fVar20;
            uVar10 = (int)-(uint)(fVar20 < fVar9) >> 0x1f;
            auVar16 = sqrtps(in_XMM5,auVar23);
            fVar13 = (float)((uint)auVar23._0_4_ & uVar10 | ~uVar10 & (uint)(fVar9 * fVar9));
            fVar21 = (float)(auVar16._0_4_ & uVar10 | ~uVar10 & (uint)fVar9);
            fVar21 = ((((_LC29 * fVar13 + _LC31) * fVar13 + _LC33) * fVar13 + _LC35) * fVar13 +
                     _LC37) * fVar13 * fVar21 + fVar21;
            uVar10 = ((uint)(_LC39 - (fVar21 + fVar21)) & uVar10 | ~uVar10 & (uint)fVar21) ^
                     (uint)fVar7 & _LC26;
            fVar21 = (float)(uVar10 ^ _LC26 & uVar10);
            fVar7 = (float)(uVar10 ^ _LC26 & uVar10);
            fVar9 = (float)(uVar10 ^ _LC26 & uVar10);
            fVar13 = (float)(uVar10 ^ _LC26 & uVar10);
            iVar11 = (int)(_LC41 * fVar21 + fVar20);
            fVar17 = (float)iVar11;
            fVar18 = (float)(int)(_LC41 * fVar7 + fVar20);
            fVar19 = (float)(int)(_LC41 * fVar9 + fVar20);
            fVar20 = (float)(int)(_LC41 * fVar13 + fVar20);
            fVar21 = ((fVar21 - _LC43 * fVar17) - _LC45 * fVar17) - fVar17 * _LC47;
            fVar7 = ((fVar7 - _LC43 * fVar18) - _LC45 * fVar18) - fVar18 * _LC47;
            fVar9 = ((fVar9 - _LC43 * fVar19) - _LC45 * fVar19) - fVar19 * _LC47;
            fVar20 = ((fVar13 - _LC43 * fVar20) - _LC45 * fVar20) - fVar20 * _LC47;
            fVar13 = fVar21 * fVar21;
            fVar17 = fVar7 * fVar7;
            fVar18 = fVar9 * fVar9;
            fVar19 = fVar20 * fVar20;
            auVar8._0_4_ = (((((_LC49 * fVar13 + _LC51) * fVar13 + _LC53) * fVar13 + _LC55) * fVar13
                            + _LC57) * fVar13 + _LC59) * fVar13 * fVar21 + fVar21;
            auVar8._4_4_ = (((((_LC49 * fVar17 + _LC51) * fVar17 + _LC53) * fVar17 + _LC55) * fVar17
                            + _LC57) * fVar17 + _LC59) * fVar17 * fVar7 + fVar7;
            auVar8._8_4_ = (((((_LC49 * fVar18 + _LC51) * fVar18 + _LC53) * fVar18 + _LC55) * fVar18
                            + _LC57) * fVar18 + _LC59) * fVar18 * fVar9 + fVar9;
            auVar8._12_4_ =
                 (((((_LC49 * fVar19 + _LC51) * fVar19 + _LC53) * fVar19 + _LC55) * fVar19 + _LC57)
                  * fVar19 + _LC59) * fVar19 * fVar20 + fVar20;
            uVar14 = (iVar11 << 0x1f) >> 0x1f;
            auVar12._4_4_ = _LC4;
            auVar12._0_4_ = _LC4;
            auVar12._8_4_ = _LC4;
            auVar12._12_4_ = _LC4;
            auVar16 = divps(auVar12,auVar8);
            *(uint *)(this + 0x58) =
                 (auVar16._0_4_ & uVar14 | ~uVar14 & (uint)auVar8._0_4_) ^ _LC26 & uVar10;
            LOCK();
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            UNLOCK();
            if (param_2[0x20] == (Result)0x1) {
              plVar4 = *(long **)param_2;
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar4 + 8))();
                }
              }
            }
            else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
              (*Free)();
            }
            *(TaperedCapsuleShape **)param_2 = this;
            param_2[0x20] = (Result)0x1;
            return;
          }
        }
        if (param_2[0x20] == (Result)0x1) {
          plVar4 = *(long **)param_2;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar4 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        param_2[0x20] = (Result)0x0;
        *(Result **)param_2 = param_2 + 0x10;
        puVar6 = (undefined8 *)(*Allocate)(0x45);
        uVar5 = _UNK_00102ff8;
        uVar15 = __LC62;
        *(undefined8 *)(param_2 + 0x10) = 0x44;
        *(undefined8 **)param_2 = puVar6;
        *puVar6 = uVar15;
        puVar6[1] = uVar5;
        uVar5 = _UNK_00103008;
        uVar15 = __LC63;
        *(undefined4 *)(puVar6 + 8) = 0x64616574;
        puVar6[2] = uVar15;
        puVar6[3] = uVar5;
        uVar15 = _UNK_00103018;
        puVar6[4] = __LC64;
        puVar6[5] = uVar15;
        uVar15 = _UNK_00103028;
        puVar6[6] = __LC65;
        puVar6[7] = uVar15;
        *(undefined8 *)(param_2 + 8) = 0x44;
        *(undefined1 *)(*(long *)param_2 + 0x44) = 0;
      }
    }
    else {
      if (param_2[0x20] == (Result)0x1) {
        plVar4 = *(long **)param_2;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
      else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
        (*Free)();
      }
      param_2[0x20] = (Result)0x0;
      *(Result **)param_2 = param_2 + 0x10;
      puVar6 = (undefined8 *)(*Allocate)(0x16);
      uVar5 = _UNK_00102fe8;
      uVar15 = __LC61;
      *(undefined8 *)(param_2 + 0x10) = 0x15;
      *(undefined8 **)param_2 = puVar6;
      *puVar6 = uVar15;
      puVar6[1] = uVar5;
      *(undefined8 *)((long)puVar6 + 0xd) = 0x737569646172206d;
      *(undefined8 *)(param_2 + 8) = 0x15;
      *(undefined1 *)(*(long *)param_2 + 0x15) = 0;
    }
  }
  else {
    if (param_2[0x20] == (Result)0x1) {
      plVar4 = *(long **)param_2;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    param_2[0x20] = (Result)0x0;
    *(Result **)param_2 = param_2 + 0x10;
    puVar6 = (undefined8 *)(*Allocate)(0x13);
    uVar5 = _UNK_00102fd8;
    uVar15 = __LC60;
    *(undefined8 *)(param_2 + 0x10) = 0x12;
    *(undefined8 **)param_2 = puVar6;
    *(undefined2 *)(puVar6 + 2) = 0x7375;
    *puVar6 = uVar15;
    puVar6[1] = uVar5;
    *(undefined8 *)(param_2 + 8) = 0x12;
    *(undefined1 *)(*(long *)param_2 + 0x12) = 0;
  }
  param_2[0x20] = (Result)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShapeSettings::Create() const */

long * JPH::TaperedCapsuleShapeSettings::Create(void)

{
  TaperedCapsuleShape *pTVar1;
  long *plVar2;
  float fVar3;
  undefined1 *__src;
  TaperedCapsuleShapeSettings TVar4;
  TaperedCapsuleShape *this;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  TaperedCapsuleShapeSettings *in_RSI;
  TaperedCapsuleShapeSettings *pTVar9;
  long *in_RDI;
  char *pcVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  TaperedCapsuleShapeSettings *local_d8;
  TaperedCapsuleShapeSettings *local_d0;
  undefined8 local_c8 [2];
  TaperedCapsuleShapeSettings local_b8;
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long *local_90;
  long local_80 [2];
  char local_70;
  long *local_68;
  TaperedCapsuleShape *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TVar4 = in_RSI[0x38];
  pTVar9 = in_RSI;
  if (TVar4 == (TaperedCapsuleShapeSettings)0x0) {
    fVar3 = *(float *)(in_RSI + 0x50);
    if (((fVar3 <= 0.0) || (fVar14 = *(float *)(in_RSI + 0x54), fVar14 <= 0.0)) ||
       (fVar15 = *(float *)(in_RSI + 0x4c), fVar15 < 0.0)) {
LAB_001021e0:
      this = (TaperedCapsuleShape *)(*Allocate)(0x70);
      TaperedCapsuleShape::TaperedCapsuleShape(this,in_RSI,(Result *)(in_RSI + 0x18));
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      fVar11 = fVar15 + fVar15;
      if (fVar14 <= fVar3) {
        if (fVar3 <= fVar14) {
          if (fVar11 + fVar3 <= fVar3) goto LAB_001022fd;
        }
        else {
          fVar11 = fVar14 + fVar11;
          fVar14 = fVar3;
          if (fVar11 <= fVar3) goto LAB_00101fea;
        }
        goto LAB_001021e0;
      }
      if (fVar14 < fVar3 + fVar11) goto LAB_001021e0;
LAB_001022fd:
      fVar15 = (float)((uint)fVar15 ^ _LC26);
LAB_00101fea:
      this = (TaperedCapsuleShape *)(*Allocate)(0x30);
      lVar7 = *(long *)(in_RSI + 0x40);
      *(undefined4 *)(this + 8) = 0;
      *(long *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x18) = 0;
      *(code **)this = JPH::RTTI::RTTI;
      *(long *)(this + 0x20) = lVar7;
      if (lVar7 == 0) {
        *(undefined4 *)(this + 0x28) = 0x447a0000;
        *(undefined **)this = &RotatedTranslatedShapeSettings::vtable;
        *(float *)(this + 0x2c) = fVar14;
      }
      else {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        *(undefined4 *)(this + 0x28) = 0x447a0000;
        *(undefined **)this = &RotatedTranslatedShapeSettings::vtable;
        *(float *)(this + 0x2c) = fVar14;
      }
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      if ((float)((uint)fVar15 & __LC12) <= _LC2) {
        if (in_RSI[0x38] == (TaperedCapsuleShapeSettings)0x1) {
          plVar5 = *(long **)(in_RSI + 0x18);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        else if ((in_RSI[0x38] == (TaperedCapsuleShapeSettings)0x2) &&
                (*(TaperedCapsuleShapeSettings **)(in_RSI + 0x18) != in_RSI + 0x28)) {
          (*Free)();
        }
        in_RSI[0x38] = (TaperedCapsuleShapeSettings)0x0;
        *(TaperedCapsuleShape **)(in_RSI + 0x18) = this;
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        in_RSI[0x38] = (TaperedCapsuleShapeSettings)0x1;
      }
      else {
        local_a0 = 0;
        local_98 = 0;
        local_70 = '\0';
        local_68 = (long *)0x0;
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        local_a8 = memcpy;
        pTVar9 = (TaperedCapsuleShapeSettings *)&local_a8;
        local_48 = __LC24;
        uStack_40 = _UNK_00102fc8;
        local_58 = ZEXT416((uint)fVar15) << 0x20;
        local_60 = this;
        JPH::RotatedTranslatedShapeSettings::Create();
        if (in_RSI[0x38] == (TaperedCapsuleShapeSettings)0x1) {
          plVar5 = *(long **)(in_RSI + 0x18);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
        }
        else if ((in_RSI[0x38] == (TaperedCapsuleShapeSettings)0x2) &&
                (*(TaperedCapsuleShapeSettings **)(in_RSI + 0x18) != in_RSI + 0x28)) {
          (*Free)();
        }
        in_RSI[0x38] = local_b8;
        if (local_b8 == (TaperedCapsuleShapeSettings)0x1) {
          *(TaperedCapsuleShapeSettings **)(in_RSI + 0x18) = local_d8;
        }
        else if (local_b8 == (TaperedCapsuleShapeSettings)0x2) {
          *(TaperedCapsuleShapeSettings **)(in_RSI + 0x18) = in_RSI + 0x28;
          if (local_d8 == (TaperedCapsuleShapeSettings *)local_c8) {
            pTVar9 = local_d0 + 1;
            uVar13 = (uint)pTVar9;
            if (uVar13 < 8) {
              if (((ulong)pTVar9 & 4) == 0) {
                if ((uVar13 != 0) && (in_RSI[0x28] = *local_d8, ((ulong)pTVar9 & 2) != 0)) {
                  *(undefined2 *)(in_RSI + ((ulong)pTVar9 & 0xffffffff) + 0x26) =
                       *(undefined2 *)(local_d8 + (((ulong)pTVar9 & 0xffffffff) - 2));
                }
              }
              else {
                *(undefined4 *)(in_RSI + 0x28) = *(undefined4 *)local_d8;
                *(undefined4 *)(in_RSI + ((ulong)pTVar9 & 0xffffffff) + 0x24) =
                     *(undefined4 *)(local_d8 + (((ulong)pTVar9 & 0xffffffff) - 4));
              }
            }
            else {
              *(undefined8 *)(in_RSI + 0x28) = *(undefined8 *)local_d8;
              *(undefined8 *)(in_RSI + ((ulong)pTVar9 & 0xffffffff) + 0x20) =
                   *(undefined8 *)(local_d8 + (((ulong)pTVar9 & 0xffffffff) - 8));
              lVar7 = (long)(in_RSI + 0x28) - ((ulong)(in_RSI + 0x30) & 0xfffffffffffffff8);
              uVar13 = uVar13 + (int)lVar7 & 0xfffffff8;
              if (7 < uVar13) {
                uVar8 = 0;
                do {
                  uVar6 = (int)uVar8 + 8;
                  *(undefined8 *)(((ulong)(in_RSI + 0x30) & 0xfffffffffffffff8) + uVar8) =
                       *(undefined8 *)(local_d8 + (uVar8 - lVar7));
                  uVar8 = (ulong)uVar6;
                } while (uVar6 < uVar13);
              }
            }
          }
          else {
            *(TaperedCapsuleShapeSettings **)(in_RSI + 0x18) = local_d8;
            *(undefined8 *)(in_RSI + 0x28) = local_c8[0];
          }
          *(TaperedCapsuleShapeSettings **)(in_RSI + 0x20) = local_d0;
          pTVar9 = local_d0;
        }
        local_a8 = JPH::RotatedTranslatedShapeSettings::Create;
        if (local_60 != (TaperedCapsuleShape *)0x0) {
          LOCK();
          pTVar1 = local_60 + 8;
          *(int *)pTVar1 = *(int *)pTVar1 + -1;
          UNLOCK();
          if (*(int *)pTVar1 == 0) {
            (**(code **)(*(long *)local_60 + 8))();
          }
        }
        if (local_68 != (long *)0x0) {
          LOCK();
          plVar5 = local_68 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*local_68 + 0x18))();
          }
        }
        local_a8 = __stack_chk_fail;
        if (local_70 == '\x01') {
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar5 = local_90 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*local_90 + 8))();
            }
          }
        }
        else if ((local_70 == '\x02') && (local_90 != local_80)) {
          (*Free)();
        }
      }
    }
    LOCK();
    pTVar1 = this + 8;
    *(int *)pTVar1 = *(int *)pTVar1 + -1;
    UNLOCK();
    if (*(int *)pTVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    TVar4 = in_RSI[0x38];
  }
  *(TaperedCapsuleShapeSettings *)(in_RDI + 4) = TVar4;
  if (TVar4 == (TaperedCapsuleShapeSettings)0x1) {
    lVar7 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    goto LAB_0010221e;
  }
  if (TVar4 != (TaperedCapsuleShapeSettings)0x2) goto LAB_0010221e;
  plVar5 = in_RDI + 2;
  *in_RDI = (long)plVar5;
  __src = *(undefined1 **)(in_RSI + 0x18);
  uVar8 = *(ulong *)(in_RSI + 0x20);
  if (uVar8 < 0x10) {
    if (uVar8 == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
    }
    else if (uVar8 != 0) goto LAB_001022df;
  }
  else {
    if ((long)uVar8 < 0) {
      pcVar10 = "basic_string::_M_create";
      std::__throw_length_error("basic_string::_M_create");
      fVar3 = *(float *)(pTVar9 + 0x40);
      fVar14 = *(float *)(pTVar9 + 0x44);
      fVar15 = *(float *)(pTVar9 + 0x48);
      fVar12 = (fVar3 + fVar14) * _LC13;
      uVar13 = (uint)fVar12 ^ _LC26;
      fVar11 = *(float *)(pTVar9 + 0x4c);
      *(float *)((long)pcVar10 + 0x10) = fVar12;
      *(float *)((long)pcVar10 + 0x14) = fVar3 + fVar15;
      *(float *)((long)pcVar10 + 0x18) = fVar12;
      *(float *)((long)pcVar10 + 0x1c) = fVar12;
      *(long *)pcVar10 = CONCAT44(fVar11 - fVar14,uVar13);
      *(long *)((long)pcVar10 + 8) = CONCAT44(uVar13,uVar13);
      return (long *)pcVar10;
    }
    plVar5 = (long *)(*Allocate)(uVar8 + 1);
    in_RDI[2] = uVar8;
    *in_RDI = (long)plVar5;
LAB_001022df:
    memcpy(plVar5,__src,uVar8);
    plVar5 = (long *)*in_RDI;
  }
  in_RDI[1] = uVar8;
  *(undefined1 *)((long)plVar5 + uVar8) = 0;
LAB_0010221e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* JPH::TaperedCapsuleShape::GetInertiaApproximation() const */

void JPH::TaperedCapsuleShape::GetInertiaApproximation(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_RSI;
  uint *in_RDI;
  float fVar5;
  uint uVar6;
  
  fVar1 = *(float *)(in_RSI + 0x40);
  fVar2 = *(float *)(in_RSI + 0x44);
  fVar3 = *(float *)(in_RSI + 0x48);
  fVar5 = (fVar1 + fVar2) * _LC13;
  uVar6 = (uint)fVar5 ^ _LC26;
  fVar4 = *(float *)(in_RSI + 0x4c);
  in_RDI[4] = (uint)fVar5;
  in_RDI[5] = (uint)(fVar1 + fVar3);
  in_RDI[6] = (uint)fVar5;
  in_RDI[7] = (uint)fVar5;
  *in_RDI = uVar6;
  in_RDI[1] = (uint)(fVar4 - fVar2);
  in_RDI[2] = uVar6;
  in_RDI[3] = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCapsuleShape::sRegister() */

void JPH::TaperedCapsuleShape::sRegister(void)

{
  _GetSubmergedVolume = sRegister()::{lambda()#1}::_FUN;
  _DrawGetSupportFunction = (undefined4)Color::sGreen;
  return;
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
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



/* JPH::TaperedCapsuleShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::TaperedCapsuleShape::GetCenterOfMass(TaperedCapsuleShape *this)

{
  return *(undefined1 (*) [16])(this + 0x30);
}



/* JPH::TaperedCapsuleShape::GetInnerRadius() const */

float __thiscall JPH::TaperedCapsuleShape::GetInnerRadius(TaperedCapsuleShape *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x44);
  if (*(float *)(this + 0x40) <= *(float *)(this + 0x44)) {
    fVar1 = *(float *)(this + 0x40);
  }
  return fVar1;
}



/* JPH::TaperedCapsuleShape::GetStats() const */

undefined1  [16] JPH::TaperedCapsuleShape::GetStats(void)

{
  return ZEXT816(0x70);
}



/* JPH::TaperedCapsuleShape::GetVolume() const */

undefined8 __thiscall JPH::TaperedCapsuleShape::GetVolume(TaperedCapsuleShape *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x44);
  fVar1 = *(float *)(this + 0x40);
  fVar2 = fVar3;
  if (fVar3 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar3 = (fVar1 + *(float *)(this + 0x48)) - (*(float *)(this + 0x4c) - fVar3);
  return CONCAT44(fVar3,(fVar2 - (float)((uint)fVar2 ^ _LC26)) * fVar3 *
                        (fVar2 - (float)((uint)fVar2 ^ _LC26)));
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::TaperedCapsuleShape::TaperedCapsule::GetConvexRadius() const */

undefined4 __thiscall
JPH::TaperedCapsuleShape::TaperedCapsule::GetConvexRadius(TaperedCapsule *this)

{
  return *(undefined4 *)(this + 0x38);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001026f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule() */

void __thiscall JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule(TaperedCapsule *this)

{
  return;
}



/* JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule() */

void __thiscall JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule(TaperedCapsule *this)

{
  operator_delete(this,0x40);
  return;
}



/* JPH::TaperedCapsuleShape::TaperedCapsule::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::TaperedCapsuleShape::TaperedCapsule::GetSupport
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  uStack_10 = (float)param_2;
  uStack_c = (float)((ulong)param_2 >> 0x20);
  fVar8 = SQRT(uStack_10 * uStack_10 + fVar5 * fVar5 + fVar3 * fVar3 + 0.0);
  if (fVar8 == 0.0) {
    local_18 = *(float *)(param_3 + 0x10) + 0.0;
    uStack_14 = *(float *)(param_3 + 0x30) + *(float *)(param_3 + 0x14);
    uStack_10 = *(float *)(param_3 + 0x18) + 0.0;
    uStack_c = *(float *)(param_3 + 0x1c) + 0.0;
  }
  else {
    fVar4 = *(float *)(param_3 + 0x30) / fVar8;
    fVar8 = *(float *)(param_3 + 0x34) / fVar8;
    local_18 = fVar4 * fVar3 + *(float *)(param_3 + 0x10);
    uStack_14 = fVar4 * fVar5 + *(float *)(param_3 + 0x14);
    fVar6 = fVar4 * uStack_10 + *(float *)(param_3 + 0x18);
    fVar12 = fVar8 * uStack_c;
    fVar9 = fVar8 * fVar3 + *(float *)(param_3 + 0x20);
    fVar10 = fVar8 * fVar5 + *(float *)(param_3 + 0x24);
    fVar11 = fVar8 * uStack_10 + *(float *)(param_3 + 0x28);
    fVar8 = fVar11 * uStack_10;
    fVar7 = uStack_10 * fVar6;
    uStack_10 = fVar6;
    uStack_c = fVar4 * uStack_c + *(float *)(param_3 + 0x1c);
    if (fVar7 + uStack_14 * fVar5 + local_18 * fVar3 + 0.0 <=
        fVar8 + fVar10 * fVar5 + fVar9 * fVar3 + 0.0) {
      auVar2._4_4_ = fVar10;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar12 + *(float *)(param_3 + 0x2c);
      return auVar2;
    }
  }
  auVar1._4_4_ = uStack_14;
  auVar1._0_4_ = local_18;
  auVar1._8_4_ = uStack_10;
  auVar1._12_4_ = uStack_c;
  return auVar1;
}



/* JPH::TaperedCapsuleShape::~TaperedCapsuleShape() */

void __thiscall JPH::TaperedCapsuleShape::~TaperedCapsuleShape(TaperedCapsuleShape *this)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  
  piVar1 = *(int **)(this + 0x60);
  *(undefined ***)this = &PTR__TaperedCapsuleShape_00102e00;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar2 = *(long **)(piVar1 + 6);
      if (plVar2 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar3 = plVar2 + *(long *)(piVar1 + 2) * 2, plVar2 < plVar3)) {
          do {
            if ((long *)*plVar2 != (long *)0x0) {
              (**(code **)(*(long *)*plVar2 + 0x18))();
            }
            plVar2 = plVar2 + 2;
          } while (plVar2 < plVar3);
          plVar2 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar2);
      }
      (*Free)(piVar1);
    }
  }
  plVar2 = *(long **)(this + 0x20);
  *(code **)this = JPH::RTTI::RTTI;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      if (*(code **)(*plVar2 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x0010293a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001028bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)();
      return;
    }
  }
  return;
}



/* JPH::TaperedCapsuleShape::~TaperedCapsuleShape() */

void __thiscall JPH::TaperedCapsuleShape::~TaperedCapsuleShape(TaperedCapsuleShape *this)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  
  piVar1 = *(int **)(this + 0x60);
  *(undefined ***)this = &PTR__TaperedCapsuleShape_00102e00;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar2 = *(long **)(piVar1 + 6);
      if (plVar2 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar3 = plVar2 + *(long *)(piVar1 + 2) * 2, plVar2 < plVar3)) {
          do {
            if ((long *)*plVar2 != (long *)0x0) {
              (**(code **)(*(long *)*plVar2 + 0x18))();
            }
            plVar2 = plVar2 + 2;
          } while (plVar2 < plVar3);
          plVar2 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar2);
      }
      (*Free)(piVar1);
    }
  }
  plVar2 = *(long **)(this + 0x20);
  *(code **)this = JPH::RTTI::RTTI;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00102992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings() */

void __thiscall
JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings(TaperedCapsuleShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::DebugRenderer::CreateTriangleGeometryForConvex;
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
  *(code **)this = __stack_chk_fail;
  if (this[0x38] == (TaperedCapsuleShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00102acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (TaperedCapsuleShapeSettings)0x2) &&
          (*(TaperedCapsuleShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings() */

void __thiscall
JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings(TaperedCapsuleShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::DebugRenderer::CreateTriangleGeometryForConvex;
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
  *(code **)this = __stack_chk_fail;
  if (this[0x38] == (TaperedCapsuleShapeSettings)0x1) {
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
  else if ((this[0x38] == (TaperedCapsuleShapeSettings)0x2) &&
          (*(TaperedCapsuleShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::TaperedCapsuleShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC67;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings() */

void __thiscall
JPH::TaperedCapsuleShapeSettings::~TaperedCapsuleShapeSettings(TaperedCapsuleShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCapsuleShape::~TaperedCapsuleShape() */

void __thiscall JPH::TaperedCapsuleShape::~TaperedCapsuleShape(TaperedCapsuleShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule() */

void __thiscall JPH::TaperedCapsuleShape::TaperedCapsule::~TaperedCapsule(TaperedCapsule *this)

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


