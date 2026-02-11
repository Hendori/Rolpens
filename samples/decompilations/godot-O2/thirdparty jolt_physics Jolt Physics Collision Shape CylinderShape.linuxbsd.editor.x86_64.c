
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::GetMassProperties() const */

void JPH::CylinderShape::GetMassProperties(void)

{
  undefined8 uVar1;
  long in_RSI;
  float *in_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = _LC2;
  fVar2 = *(float *)(in_RSI + 0x2c) + *(float *)(in_RSI + 0x2c);
  fVar5 = *(float *)(in_RSI + 0x30) * *(float *)(in_RSI + 0x30);
  fVar3 = _LC1 * fVar5 * fVar2 * *(float *)(in_RSI + 0x28);
  *in_RDI = fVar3;
  fVar5 = fVar5 * fVar3 * fVar4;
  fVar4 = (fVar3 * fVar2 * fVar2) / __LC3 + fVar4 * fVar5;
  *(undefined1 (*) [16])(in_RDI + 8) = ZEXT416((uint)fVar5) << 0x20;
  *(undefined1 (*) [16])(in_RDI + 4) = ZEXT416((uint)fVar4);
  *(undefined1 (*) [16])(in_RDI + 0xc) = ZEXT416((uint)fVar4) << 0x40;
  uVar1 = _UNK_00102cb8;
  *(undefined8 *)(in_RDI + 0x10) = __LC4;
  *(undefined8 *)(in_RDI + 0x12) = uVar1;
  return;
}



/* JPH::CylinderShape::GetLocalBounds() const */

void JPH::CylinderShape::GetLocalBounds(void)

{
  long in_RSI;
  float *in_RDI;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(in_RSI + 0x2c);
  fVar2 = (float)((ulong)*(undefined8 *)(in_RSI + 0x2c) >> 0x20);
  in_RDI[4] = fVar2;
  in_RDI[5] = fVar1;
  in_RDI[6] = fVar2;
  in_RDI[7] = fVar2;
  *in_RDI = 0.0 - fVar2;
  in_RDI[1] = 0.0 - fVar1;
  in_RDI[2] = 0.0 - fVar2;
  in_RDI[3] = 0.0 - fVar2;
  return;
}



/* JPH::CylinderShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::CylinderShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined4 *param_4,long *param_5,
               long *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if ((cVar1 != '\0') &&
     ((float)((uint)((ulong)param_1 >> 0x20) & _LC5) <= *(float *)(param_3 + 0x2c))) {
    if ((float)param_1 * (float)param_1 + param_2 * param_2 <=
        *(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30)) {
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



/* JPH::CylinderShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::CylinderShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::CylinderShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::CylinderShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar5;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_18;
  float fStack_14;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  auVar3._0_4_ = 0.0 - local_18;
  auVar3._4_4_ = 0.0 - fStack_14;
  auVar3._8_4_ = 0.0 - (float)param_2;
  auVar3._12_4_ = 0.0 - fVar2;
  auVar4._8_4_ = (float)param_2;
  auVar4._0_8_ = param_1;
  auVar4._12_4_ = fVar2;
  auVar4 = maxps(auVar3,auVar4);
  fVar6 = auVar4._4_4_ * (float)*(undefined8 *)(param_3 + 0x2c);
  fVar7 = auVar4._0_4_ * (float)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
  auVar8._0_8_ = auVar4._4_8_;
  auVar8._8_4_ = auVar4._8_4_;
  auVar8._12_4_ = auVar4._8_4_;
  auVar4 = minps(auVar4,auVar8);
  uVar5 = auVar4._8_4_;
  auVar9._4_4_ = uVar5;
  auVar9._0_4_ = uVar5;
  auVar9._8_4_ = uVar5;
  auVar9._12_4_ = uVar5;
  auVar4 = minps(auVar4,auVar9);
  fVar2 = auVar4._0_4_ * *(float *)(param_3 + 0x34);
  if (_LC6 < fVar2) {
    fVar2 = _LC6;
  }
  if (param_4 == 0) {
    *(float *)(param_5 + 2) = fVar2;
    *param_5 = &PTR__Cylinder_00102b10;
    param_5[1] = CONCAT44(fVar7 - fVar2,fVar6 - fVar2);
    puVar1 = param_5;
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_4 - 1U < 2) {
      *(undefined4 *)(param_5 + 2) = 0;
      *param_5 = &PTR__Cylinder_00102b10;
      param_5[1] = CONCAT44(fVar7,fVar6);
      puVar1 = param_5;
    }
  }
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::CylinderShape::GetSurfaceNormal(ulong param_1,float param_2,CylinderShape *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 local_18 [16];
  
  fVar1 = (float)(param_1 >> 0x20);
  auVar3._0_4_ = SQRT(param_2 * param_2 + (float)param_1 * (float)param_1 + 0.0);
  if ((float)((uint)(auVar3._0_4_ - *(float *)(this + 0x30)) & _LC5) <
      (float)((uint)((float)((uint)fVar1 & _LC5) - *(float *)(this + 0x2c)) & _LC5)) {
    auVar2._12_4_ = param_2;
    auVar2._8_4_ = param_2;
    auVar3._4_4_ = auVar3._0_4_;
    auVar3._8_4_ = auVar3._0_4_;
    auVar3._12_4_ = auVar3._0_4_;
    auVar2._0_8_ = param_1 & 0xffffffff;
    auVar3 = divps(auVar2,auVar3);
    return auVar3;
  }
  if (0.0 < fVar1) {
    local_18._8_8_ = _UNK_00102cd8;
    local_18._0_8_ = __LC8;
    return local_18;
  }
  local_18._8_8_ = _UNK_00102ce8;
  local_18._0_8_ = __LC9;
  return local_18;
}



/* JPH::CylinderShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::CylinderShape::GetSupportingFace
               (undefined8 param_1_00,float param_2,undefined8 param_3,undefined8 param_4,
               long param_1,undefined8 param_6,float *param_7,uint *param_8)

{
  uint uVar1;
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
  ulong uVar17;
  float *pfVar18;
  uint uVar19;
  undefined1 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined1 auVar25 [12];
  
  fVar29 = (float)((ulong)param_1_00 >> 0x20);
  fVar33 = (float)param_1_00;
  local_18 = (float)param_3;
  fStack_14 = (float)((ulong)param_3 >> 0x20);
  fStack_10 = (float)param_4;
  fStack_c = (float)((ulong)param_4 >> 0x20);
  auVar26._0_4_ = 0.0 - local_18;
  auVar26._4_4_ = 0.0 - fStack_14;
  auVar26._8_4_ = 0.0 - fStack_10;
  auVar26._12_4_ = 0.0 - fStack_c;
  uVar1 = *param_8;
  auVar27._8_4_ = fStack_10;
  auVar27._0_8_ = param_3;
  auVar27._12_4_ = fStack_c;
  auVar27 = maxps(auVar26,auVar27);
  auVar24._0_4_ = auVar27._0_4_ * *(float *)(param_1 + 0x30);
  auVar24._4_4_ = auVar27._4_4_ * *(float *)(param_1 + 0x2c);
  auVar24._8_4_ = auVar27._0_4_ * *(float *)(param_1 + 0x30);
  fVar34 = SQRT(fVar33 * fVar33 + param_2 * param_2);
  if ((float)((uint)fVar29 & _LC5) * auVar24._0_4_ < fVar34 * auVar24._4_4_) {
    fVar29 = param_7[0xc];
    fVar2 = param_7[0xd];
    fVar3 = param_7[0xe];
    fVar4 = param_7[0xf];
    fVar21 = (float)(_LC12 ^ (uint)auVar24._4_4_);
    fVar34 = (float)((uint)auVar24._0_4_ ^ _LC12) / fVar34;
    fVar5 = param_7[4];
    fVar6 = param_7[5];
    fVar7 = param_7[6];
    fVar8 = param_7[7];
    fVar33 = fVar33 * fVar34;
    param_2 = param_2 * fVar34;
    fVar34 = *param_7;
    fVar9 = param_7[1];
    fVar10 = param_7[2];
    fVar11 = param_7[3];
    fVar12 = param_7[8];
    fVar13 = param_7[9];
    fVar14 = param_7[10];
    fVar22 = param_7[0xb];
    pfVar18 = (float *)(param_8 + ((ulong)uVar1 + 1) * 4);
    *pfVar18 = auVar24._4_4_ * fVar5 + fVar33 * fVar34 + param_2 * fVar12 + fVar29;
    pfVar18[1] = auVar24._4_4_ * fVar6 + fVar33 * fVar9 + param_2 * fVar13 + fVar2;
    pfVar18[2] = auVar24._4_4_ * fVar7 + fVar33 * fVar10 + param_2 * fVar14 + fVar3;
    pfVar18[3] = auVar24._4_4_ * fVar8 + fVar33 * fVar11 + param_2 * fVar22 + fVar4;
    *param_8 = uVar1 + 2;
    pfVar18 = (float *)(param_8 + ((ulong)uVar1 + 1 & 0xffffffff) * 4 + 4);
    *pfVar18 = fVar21 * fVar5 + fVar33 * fVar34 + param_2 * fVar12 + fVar29;
    pfVar18[1] = fVar21 * fVar6 + fVar33 * fVar9 + param_2 * fVar13 + fVar2;
    pfVar18[2] = fVar21 * fVar7 + fVar33 * fVar10 + param_2 * fVar14 + fVar3;
    pfVar18[3] = fVar21 * fVar8 + fVar33 * fVar11 + param_2 * fVar22 + fVar4;
    return;
  }
  auVar25 = auVar24;
  if (0.0 <= fVar29) {
    auVar28._0_4_ = (uint)auVar24._0_4_ ^ _LC12;
    auVar24._4_4_ = (float)((uint)auVar24._4_4_ ^ _LC12);
    auVar28._4_4_ = auVar24._4_4_;
    auVar28._12_4_ = auVar24._0_4_;
    auVar28._8_4_ = auVar24._0_4_;
    auVar25 = auVar28._0_12_;
  }
  fVar33 = *param_7;
  fVar29 = param_7[1];
  fVar34 = param_7[2];
  fVar2 = param_7[3];
  fVar22 = auVar25._0_4_;
  fVar21 = auVar25._8_4_;
  fVar3 = param_7[0xc];
  fVar4 = param_7[0xd];
  fVar5 = param_7[0xe];
  fVar6 = param_7[0xf];
  fVar7 = param_7[8];
  fVar8 = param_7[9];
  fVar9 = param_7[10];
  fVar10 = param_7[0xb];
  fVar11 = param_7[4];
  fVar12 = param_7[5];
  fVar13 = param_7[6];
  fVar14 = param_7[7];
  puVar20 = cCylinderTopFace;
  uVar19 = uVar1;
  do {
    fVar32 = *(float *)puVar20;
    fVar15 = *(float *)((long)puVar20 + 4);
    fVar16 = *(float *)((long)puVar20 + 8);
    uVar17 = (ulong)uVar19;
    puVar20 = (undefined1 *)((long)puVar20 + 0x10);
    uVar19 = uVar19 + 1;
    pfVar18 = (float *)(param_8 + (uVar17 + 1) * 4);
    fVar23 = fVar16 * fVar21 * fVar7 + fVar32 * fVar33 * fVar22 + fVar15 * auVar24._4_4_ * fVar11 +
             fVar3;
    fVar30 = fVar16 * fVar21 * fVar8 + fVar32 * fVar29 * fVar22 + fVar15 * auVar24._4_4_ * fVar12 +
             fVar4;
    fVar31 = fVar16 * fVar21 * fVar9 + fVar32 * fVar34 * fVar22 + fVar15 * auVar24._4_4_ * fVar13 +
             fVar5;
    fVar32 = fVar16 * fVar21 * fVar10 + fVar32 * fVar2 * fVar22 + fVar15 * auVar24._4_4_ * fVar14 +
             fVar6;
    *pfVar18 = fVar23;
    pfVar18[1] = fVar30;
    pfVar18[2] = fVar31;
    pfVar18[3] = fVar32;
  } while (puVar20 != &GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti);
  *param_8 = uVar1 + 8;
  *pfVar18 = fVar23;
  pfVar18[1] = fVar30;
  pfVar18[2] = fVar31;
  pfVar18[3] = fVar32;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::CylinderShape::CastRay
          (CylinderShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  undefined4 uVar1;
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
  
  fVar6 = *(float *)(param_1 + 4);
  fVar10 = *(float *)(this + 0x2c);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(this + 0x30) * *(float *)(this + 0x30);
  fVar7 = (float)(~__LC14 & (uint)*(float *)param_1);
  fVar8 = (float)(~_UNK_00102d04 & (uint)fVar6);
  fVar9 = (float)(~_UNK_00102d08 & (uint)*(float *)(param_1 + 8));
  fVar13 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7 + 0.0;
  if (fVar13 <= fVar11) {
    fVar7 = 0.0;
LAB_0010068b:
    if ((float)((uint)(fVar2 * fVar7 + fVar6) & _LC5) <= fVar10) goto LAB_001005e1;
    if (NAN(fVar2)) {
LAB_00100758:
      fVar10 = (float)((uint)(fVar10 + fVar6) ^ _LC12);
    }
    else {
      if (fVar2 == 0.0) goto LAB_001005d9;
      if (0.0 <= fVar2 && fVar2 != 0.0) goto LAB_00100758;
      fVar10 = fVar10 - fVar6;
    }
    fVar7 = fVar10 / fVar2;
    if ((0.0 <= fVar7) &&
       (fVar10 = fVar7 * *(float *)(param_1 + 0x10) + *(float *)param_1,
       fVar6 = fVar7 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 8),
       fVar10 * fVar10 + fVar6 * fVar6 <= fVar11)) goto LAB_001005e1;
  }
  else {
    fVar3 = (float)(~__LC14 & (uint)*(float *)(param_1 + 0x10));
    fVar4 = (float)(~_UNK_00102d04 & (uint)fVar2);
    fVar5 = (float)(~_UNK_00102d08 & (uint)*(float *)(param_1 + 0x18));
    fVar13 = fVar13 - fVar11;
    fVar12 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0;
    fVar7 = fVar5 * fVar9 + fVar8 * fVar4 + fVar7 * fVar3 + 0.0;
    fVar7 = fVar7 + fVar7;
    if (fVar12 == 0.0) {
      if (fVar7 != 0.0) {
        fVar7 = (float)((uint)fVar13 ^ _LC12) / fVar7;
joined_r0x0010066f:
        if ((0.0 <= fVar7) && (fVar7 != _LC13)) goto LAB_0010068b;
      }
    }
    else {
      fVar8 = fVar7 * fVar7 - _LC15 * fVar12 * fVar13;
      if (0.0 <= fVar8) {
        fVar9 = _LC10;
        if (0.0 <= fVar7) {
          fVar9 = _LC11;
        }
        fVar8 = (fVar7 + fVar9 * SQRT(fVar8)) * __LC16;
        fVar12 = fVar8 / fVar12;
        fVar7 = fVar12;
        if ((fVar8 != 0.0) && (fVar7 = fVar13 / fVar8, fVar12 <= fVar13 / fVar8)) {
          fVar7 = fVar12;
        }
        goto joined_r0x0010066f;
      }
    }
  }
LAB_001005d9:
  fVar7 = _LC13;
LAB_001005e1:
  if (*(float *)(param_3 + 4) <= fVar7) {
    return 0;
  }
  uVar1 = *(undefined4 *)param_2;
  *(float *)(param_3 + 4) = fVar7;
  *(undefined4 *)(param_3 + 8) = uVar1;
  return 1;
}



/* JPH::CylinderShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::CylinderShape::MakeScaleValid(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
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
  auVar2._0_4_ = 0.0 - local_18;
  auVar2._4_4_ = 0.0 - uStack_14;
  auVar2._8_4_ = 0.0 - uStack_10;
  auVar2._12_4_ = 0.0 - uStack_c;
  auVar3._8_4_ = uStack_10;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = uStack_c;
  auVar3 = maxps(auVar2,auVar3);
  auVar6._4_4_ = _LC18;
  auVar6._0_4_ = _LC18;
  auVar6._8_4_ = _LC18;
  auVar6._12_4_ = _LC18;
  auVar3 = maxps(auVar3,auVar6);
  auVar4._0_4_ = auVar3._0_4_ * (float)((uint)local_18 & _LC10 | _LC11);
  auVar4._4_4_ = auVar3._4_4_ * (float)((uint)uStack_14 & _LC10 | _LC11);
  auVar4._8_4_ = auVar3._8_4_ * (float)((uint)uStack_10 & _LC10 | _LC11);
  auVar4._12_4_ = auVar3._12_4_ * (float)((uint)uStack_c & _LC10 | _LC11);
  auVar7._4_4_ = 0.0 - auVar4._4_4_;
  auVar7._0_4_ = 0.0 - auVar4._0_4_;
  auVar7._8_4_ = 0.0 - auVar4._8_4_;
  auVar7._12_4_ = 0.0 - auVar4._12_4_;
  auVar3 = maxps(auVar7,auVar4);
  fVar5 = auVar3._0_4_;
  auVar1._4_4_ = (auVar3._4_4_ + auVar3._4_4_) * _LC2 * (float)((uint)auVar4._4_4_ & _LC10 | _LC11);
  auVar1._0_4_ = (fVar5 + auVar3._8_4_) * _LC2 * (float)((uint)auVar4._0_4_ & _LC10 | _LC11);
  auVar1._8_4_ = (auVar3._8_4_ + fVar5) * _LC2 * (float)((uint)auVar4._8_4_ & _LC10 | _LC11);
  auVar1._12_4_ = (auVar3._12_4_ + fVar5) * _LC2 * (float)((uint)auVar4._12_4_ & _LC10 | _LC11);
  return auVar1;
}



/* JPH::CylinderShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::CylinderShape::SaveBinaryState(CylinderShape *this,StreamOut *param_1)

{
  JPH::ConvexShape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
                    /* WARNING: Could not recover jumptable at 0x00100862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34,4);
  return;
}



/* JPH::CylinderShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::CylinderShape::RestoreBinaryState(CylinderShape *this,StreamIn *param_1)

{
  JPH::ConvexShape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
                    /* WARNING: Could not recover jumptable at 0x001008c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34,4);
  return;
}



/* JPH::CylinderShape::IsValidScale(JPH::Vec3) const */

char __thiscall JPH::CylinderShape::IsValidScale(undefined8 param_1,undefined8 param_2)

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
    fVar2 = auVar4._0_4_ - auVar4._8_4_;
    fVar5 = auVar4._4_4_ - auVar4._4_4_;
    fVar6 = auVar4._8_4_ - auVar4._0_4_;
    cVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2 + 0.0 <= _LC22;
  }
  return cVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::CylinderShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,long param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  long in_FS_OFFSET;
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
  float local_98 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  fVar17 = (float)((ulong)param_3 >> 0x20);
  fVar16 = (float)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _local_d8 = ZEXT416(*(uint *)(param_1 + 0x30));
  uVar12 = (ulong)sUnitCylinderTriangles;
  local_b8 = ZEXT416(*(uint *)(param_1 + 0x30)) << 0x40;
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar11 = PhysicsMaterial::sDefault;
  }
  local_a8 = __LC4;
  uStack_a0 = CONCAT44(_LC11,_UNK_00102cb8);
  fVar8 = (float)((ulong)param_5 >> 0x20);
  local_78 = ZEXT416((uint)(float)param_6) << 0x40;
  local_88 = ZEXT416((uint)fVar8) << 0x20;
  fVar15 = fVar16 + fVar16;
  local_c8 = ZEXT416(*(uint *)(param_1 + 0x2c)) << 0x20;
  local_e8 = (float)param_5;
  fVar7 = local_e8;
  fVar19 = fVar17 + fVar17;
  local_68 = __LC4;
  uStack_60 = CONCAT44(_LC11,_UNK_00102cb8);
  fVar13 = (float)param_4;
  local_98[0] = local_e8;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  fVar14 = (float)((ulong)param_4 >> 0x20);
  fVar18 = fVar14 * (fVar13 + fVar13);
  lVar10 = 0;
  fVar20 = fVar13 * (fVar13 + fVar13);
  local_e8 = (float)param_1_00;
  fStack_e4 = (float)((ulong)param_1_00 >> 0x20);
  do {
    fVar3 = *(float *)((long)local_98 + lVar10);
    fVar4 = *(float *)((long)local_98 + lVar10 + 4);
    fVar5 = *(float *)((long)local_98 + lVar10 + 8);
    fVar6 = *(float *)(local_88 + lVar10 + -4);
    *(float *)((long)local_58 + lVar10) =
         fVar6 * local_e8 +
         fVar3 * ((_LC11 - fVar17 * fVar19) - fVar20) + fVar4 * (fVar17 * fVar15 - fVar18) +
         fVar5 * (fVar13 * fVar15 + fVar19 * fVar14);
    *(float *)((long)local_58 + lVar10 + 4) =
         fVar6 * fStack_e4 +
         fVar3 * (fVar17 * fVar15 + fVar18) + fVar4 * ((_LC11 - fVar20) - fVar16 * fVar15) +
         fVar5 * (fVar13 * fVar19 - fVar15 * fVar14);
    *(float *)((long)local_58 + lVar10 + 8) =
         fVar6 * param_2_00 +
         fVar3 * (fVar13 * fVar15 - fVar19 * fVar14) + fVar4 * (fVar15 * fVar14 + fVar13 * fVar19) +
         fVar5 * ((_LC11 - fVar16 * fVar15) - fVar17 * fVar19);
    *(float *)((long)local_58 + lVar10 + 0xc) =
         fVar6 * 1.0 + fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  lVar10 = 0;
  do {
    fVar16 = *(float *)(local_d8 + lVar10);
    fVar17 = *(float *)(local_d8 + lVar10 + 4);
    fVar13 = *(float *)(local_d8 + lVar10 + 8);
    fVar14 = *(float *)(local_d8 + lVar10 + 0xc);
    pfVar1 = (float *)(param_2 + lVar10);
    *pfVar1 = fVar14 * local_58[0xc] +
              fVar16 * local_58[0] + fVar17 * local_58[4] + fVar13 * local_58[8];
    pfVar1[1] = fVar14 * local_58[0xd] +
                fVar16 * local_58[1] + fVar17 * local_58[5] + fVar13 * local_58[9];
    pfVar1[2] = fVar14 * local_58[0xe] +
                fVar16 * local_58[2] + fVar17 * local_58[6] + fVar13 * local_58[10];
    pfVar1[3] = fVar14 * local_58[0xf] +
                fVar16 * local_58[3] + fVar17 * local_58[7] + fVar13 * local_58[0xb];
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  *(ulong *)(param_2 + 0x48) = uVar12;
  *(undefined **)(param_2 + 0x40) = &DAT_001019f0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(long *)(param_2 + 0x58) = lVar11;
  auVar2._4_4_ = -(uint)(fVar8 < 0.0);
  auVar2._0_4_ = -(uint)(fVar7 < 0.0);
  auVar2._8_4_ = -(uint)((float)param_6 < 0.0);
  auVar2._12_4_ = -(uint)((float)((ulong)param_6 >> 0x20) < 0.0);
  uVar9 = movmskps(0x1019f0,auVar2);
  *(bool *)(param_2 + 0x60) = (POPCOUNT((byte)uVar9 & 7) & 1U) != 0;
  *(byte *)(param_2 + 0x60) = *(byte *)(param_2 + 0x60) & 1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::CylinderShape::sRegister()::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x38);
  uVar1 = _LC24;
  *(undefined2 *)(puVar2 + 3) = 0x500;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR__CylinderShape_00102b40;
  *(undefined1 (*) [16])(puVar2 + 5) = ZEXT416(uVar1);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x58);
  uVar1 = _LC24;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *puVar2 = &PTR_GetRTTI_00102ad8;
  *(undefined1 (*) [16])(puVar2 + 9) = ZEXT416(uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::CylinderShape::CollideSoftBodyVertices
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
  undefined1 auVar9 [16];
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  float *pfVar21;
  float fVar22;
  undefined1 auVar23 [12];
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float local_78;
  float fStack_74;
  
  fVar39 = (float)((ulong)param_2 >> 0x20);
  fVar2 = param_4[2];
  fVar1 = param_4[6];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  fVar26 = (float)*(undefined8 *)(param_4 + 4);
  fVar27 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_4 + 8);
  fVar25 = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar5 = param_4[10];
  fVar6 = param_4[0xc];
  fVar7 = param_4[0xd];
  fVar8 = param_4[0xe];
  auVar40._0_4_ = 0.0 - local_78;
  auVar40._4_4_ = 0.0 - fStack_74;
  auVar40._8_4_ = 0.0 - (float)param_2;
  auVar40._12_4_ = 0.0 - fVar39;
  auVar41._8_4_ = (float)param_2;
  auVar41._0_8_ = param_1_00;
  auVar41._12_4_ = fVar39;
  auVar41 = maxps(auVar40,auVar41);
  fVar39 = auVar41._0_4_ * *(float *)(param_1 + 0x30);
  fVar43 = auVar41._4_4_ * *(float *)(param_1 + 0x2c);
  pfVar16 = (float *)*param_5;
  pfVar18 = (float *)param_5[2];
  lVar11 = param_5[3];
  pfVar19 = (float *)param_5[4];
  lVar12 = param_5[5];
  pfVar17 = (float *)param_5[6];
  lVar13 = param_5[7];
  puVar20 = (undefined4 *)param_5[8];
  lVar14 = param_5[9];
  lVar15 = param_5[1];
  pfVar21 = (float *)((long)(param_6 * (int)lVar15) + (long)pfVar16);
  uVar10 = _LC12;
  for (; pfVar21 != pfVar16; pfVar16 = (float *)((long)pfVar16 + (long)(int)lVar15)) {
    _LC12 = uVar10;
    if (0.0 < *pfVar18) {
      fVar33 = *pfVar16;
      fVar32 = pfVar16[1];
      fVar37 = pfVar16[2];
      fVar28 = fVar33 * fVar3 + fVar32 * fVar4 + fVar37 * fVar2 +
               (0.0 - (fVar6 * fVar3 + fVar7 * fVar4 + fVar8 * fVar2));
      fVar29 = fVar33 * fVar26 + fVar32 * fVar27 + fVar37 * fVar1 +
               (0.0 - (fVar6 * fVar26 + fVar7 * fVar27 + fVar8 * fVar1));
      fVar30 = fVar33 * fVar22 + fVar32 * fVar25 + fVar37 * fVar5 +
               (0.0 - (fVar6 * fVar22 + fVar7 * fVar25 + fVar8 * fVar5));
      fVar32 = fVar33 * 0.0 + fVar32 * 0.0 + fVar37 * 0.0 + 1.0;
      fVar37 = fVar43 - (float)((uint)fVar29 & _LC5);
      fVar33 = SQRT(fVar30 * fVar30 + fVar28 * fVar28 + 0.0);
      if ((0.0 <= fVar39 - fVar33) || (0.0 <= fVar37)) {
        if (fVar37 <= fVar39 - fVar33) {
          fVar33 = _LC10;
          if (0.0 <= fVar29) {
            fVar33 = _LC11;
          }
          fVar32 = 0.0;
          auVar23._0_4_ = fVar43 * 0.0;
          auVar23._4_4_ = fVar43 * fVar33;
          auVar23._8_4_ = fVar43 * 0.0;
          fVar42 = 0.0;
          fVar37 = fVar33;
        }
        else {
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
            auVar35._4_8_ = 0;
            auVar35._0_4_ = _LC25;
            fVar42 = 0.0;
            fVar32 = _LC11;
          }
          else {
            auVar9._4_4_ = 0;
            auVar9._0_4_ = fVar28;
            auVar9._8_4_ = fVar30;
            auVar9._12_4_ = fVar32;
            auVar24._4_4_ = fVar33;
            auVar24._0_4_ = fVar33;
            auVar24._8_4_ = fVar33;
            auVar24._12_4_ = fVar33;
            auVar41 = divps(auVar9,auVar24);
            auVar35 = auVar41._0_12_;
            fVar33 = auVar41._4_4_;
            fVar42 = auVar41._8_4_;
            fVar32 = auVar41._0_4_;
          }
          auVar23._4_4_ = auVar35._4_4_ * fVar39;
          auVar23._0_4_ = auVar35._0_4_ * fVar39;
          auVar23._8_4_ = auVar35._8_4_ * fVar39;
          fVar37 = fVar33;
        }
      }
      else {
        fVar37 = fVar43;
        if (fVar29 < 0.0) {
          fVar37 = (float)((uint)fVar43 ^ uVar10);
        }
        fVar33 = fVar39 / fVar33;
        auVar23._0_4_ = fVar33 * fVar28 + 0.0;
        auVar23._4_4_ = fVar33 * 0.0 + fVar37;
        auVar23._8_4_ = fVar33 * fVar30 + 0.0;
        fVar37 = fVar28 - auVar23._0_4_;
        fVar42 = fVar29 - auVar23._4_4_;
        fVar31 = fVar30 - auVar23._8_4_;
        fVar34 = fVar31 * fVar31 + fVar42 * fVar42 + fVar37 * fVar37 + 0.0;
        if (_LC26 < fVar34) {
          fVar34 = SQRT(fVar34);
          auVar36._4_4_ = fVar42;
          auVar36._0_4_ = fVar37;
          auVar36._8_4_ = fVar31;
          auVar36._12_4_ = fVar32 - (fVar33 * fVar32 + 0.0);
          auVar38._4_4_ = fVar34;
          auVar38._0_4_ = fVar34;
          auVar38._8_4_ = fVar34;
          auVar38._12_4_ = fVar34;
          auVar41 = divps(auVar36,auVar38);
          fVar32 = auVar41._0_4_;
          fVar33 = auVar41._4_4_;
          fVar42 = auVar41._8_4_;
          fVar37 = fVar33;
        }
        else {
          fVar42 = 0.0;
          fVar32 = 0.0;
          fVar33 = _LC11;
          fVar37 = __LC20;
        }
      }
      fVar37 = auVar23._8_4_ * fVar42 + fVar37 * auVar23._4_4_ + fVar32 * auVar23._0_4_ + 0.0;
      fVar28 = (float)((uint)((fVar30 * fVar42 + fVar29 * fVar33 + fVar28 * fVar32 + 0.0) - fVar37)
                      ^ uVar10);
      if (*pfVar17 < fVar28) {
        *pfVar17 = fVar28;
        fVar28 = param_4[0xc];
        fVar29 = fVar42 * param_4[8] + fVar32 * *param_4 + fVar33 * param_4[4];
        fVar30 = fVar42 * param_4[9] + fVar32 * param_4[1] + fVar33 * param_4[5];
        fVar42 = fVar42 * param_4[10] + fVar32 * param_4[2] + fVar33 * param_4[6];
        fVar33 = param_4[0xd];
        fVar32 = param_4[0xe];
        *pfVar19 = fVar29;
        pfVar19[1] = fVar30;
        pfVar19[2] = fVar42;
        pfVar19[3] = (float)((uint)fVar37 ^ uVar10) -
                     (fVar42 * fVar32 + fVar30 * fVar33 + fVar28 * fVar29 + 0.0);
        *puVar20 = param_7;
      }
    }
    pfVar18 = (float *)((long)pfVar18 + (long)(int)lVar11);
    puVar20 = (undefined4 *)((long)puVar20 + (long)(int)lVar14);
    pfVar19 = (float *)((long)pfVar19 + (long)(int)lVar12);
    pfVar17 = (float *)((long)pfVar17 + (long)(int)lVar13);
    uVar10 = _LC12;
  }
  _LC12 = uVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JPH::CylinderShape::Draw
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
  float fVar19;
  long lVar20;
  long *plVar21;
  long in_FS_OFFSET;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  
  fVar22 = (float)((ulong)param_2_00 >> 0x20);
  local_c8 = (float)param_1_00;
  fStack_c4 = (float)((ulong)param_1_00 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 != '\0') {
    plVar21 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      plVar21 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar21 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar21 + 0x28))();
    }
  }
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  lVar20 = 0;
  auVar23._0_4_ = 0.0 - local_c8;
  auVar23._4_4_ = 0.0 - fStack_c4;
  auVar23._8_4_ = 0.0 - (float)param_2_00;
  auVar23._12_4_ = 0.0 - fVar22;
  auVar24._8_4_ = (float)param_2_00;
  auVar24._0_8_ = param_1_00;
  auVar24._12_4_ = fVar22;
  auVar24 = maxps(auVar23,auVar24);
  fVar22 = param_5[4];
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
  _local_b8 = ZEXT416(auVar24._0_4_);
  local_98 = ZEXT416(auVar24._8_4_) << 0x40;
  local_a8 = ZEXT416(auVar24._4_4_) << 0x20;
  local_88 = __LC4;
  uStack_80 = _UNK_00102cb8;
  do {
    fVar16 = *(float *)(local_b8 + lVar20);
    fVar17 = *(float *)(local_b8 + lVar20 + 4);
    fVar18 = *(float *)(local_b8 + lVar20 + 8);
    fVar19 = *(float *)(local_b8 + lVar20 + 0xc);
    *(float *)((long)local_78 + lVar20) =
         fVar19 * fVar12 + fVar16 * fVar1 + fVar17 * fVar22 + fVar18 * fVar8;
    *(float *)((long)local_78 + lVar20 + 4) =
         fVar19 * fVar13 + fVar16 * fVar2 + fVar17 * fVar5 + fVar18 * fVar9;
    *(float *)((long)local_78 + lVar20 + 8) =
         fVar19 * fVar14 + fVar16 * fVar3 + fVar17 * fVar6 + fVar18 * fVar10;
    *(float *)((long)local_78 + lVar20 + 0xc) =
         fVar19 * fVar15 + fVar16 * fVar4 + fVar17 * fVar7 + fVar18 * fVar11;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x40);
  JPH::DebugRenderer::DrawCylinder(param_2,local_78,param_6,0,param_8);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::CylinderShapeSettings::GetRTTI() const */

undefined1 * JPH::CylinderShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti,
                      "CylinderShapeSettings",0x58,
                      GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x001013e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::CylinderShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

void __thiscall
JPH::CylinderShape::GetTrianglesNext
          (CylinderShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  GetTrianglesContextVertexList::GetTrianglesNext
            ((GetTrianglesContextVertexList *)param_1,param_2,param_3,param_4);
  return;
}



/* JPH::GetRTTIOfType(JPH::CylinderShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(CylinderShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti,
                      "CylinderShapeSettings",0x58,
                      GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::CylinderShapeSettings*)::{lambda(void*)#1}::_FUN,
                      CylinderShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CylinderShapeSettings*)::rtti;
}



/* JPH::CylinderShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::CylinderShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((CylinderShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::CylinderShape(JPH::CylinderShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::CylinderShape::CylinderShape
          (CylinderShape *this,CylinderShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined2 *)(this + 0x18) = 0x500;
  *(undefined **)this = &ShapeSettings::vtable;
  lVar7 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)this = &PTR__CylinderShape_00102b40;
  *(undefined4 *)(this + 0x28) = uVar2;
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_1 + 0x54);
  fVar5 = *(float *)(param_1 + 0x50);
  *(float *)(this + 0x2c) = fVar3;
  *(float *)(this + 0x30) = fVar5;
  *(float *)(this + 0x34) = fVar4;
  if (fVar4 <= fVar3) {
    if (fVar5 < fVar4) {
      if (param_2[0x20] == (Result)0x1) {
        plVar8 = *(long **)param_2;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
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
    }
    else {
      if (0.0 <= fVar4) {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        if (param_2[0x20] == (Result)0x1) {
          plVar8 = *(long **)param_2;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        *(CylinderShape **)param_2 = this;
        param_2[0x20] = (Result)0x1;
        return;
      }
      if (param_2[0x20] == (Result)0x1) {
        plVar8 = *(long **)param_2;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
        (*Free)();
      }
      param_2[0x20] = (Result)0x0;
      *(Result **)param_2 = param_2 + 0x10;
      puVar10 = (undefined8 *)(*Allocate)(0x16);
      uVar9 = _UNK_00102d48;
      uVar6 = __LC28;
      *(undefined8 *)(param_2 + 0x10) = 0x15;
      *(undefined8 **)param_2 = puVar10;
      *puVar10 = uVar6;
      puVar10[1] = uVar9;
      *(undefined8 *)((long)puVar10 + 0xd) = 0x7375696461722078;
      *(undefined8 *)(param_2 + 8) = 0x15;
      *(undefined1 *)(*(long *)param_2 + 0x15) = 0;
    }
  }
  else {
    if (param_2[0x20] == (Result)0x1) {
      plVar8 = *(long **)param_2;
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar8 + 8))();
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
  param_2[0x20] = (Result)0x2;
  return;
}



/* JPH::CylinderShapeSettings::Create() const */

void JPH::CylinderShapeSettings::Create(void)

{
  CylinderShape *pCVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  CylinderShapeSettings CVar3;
  CylinderShape *this;
  long *__dest;
  CylinderShapeSettings *in_RSI;
  CylinderShapeSettings *pCVar4;
  long *in_RDI;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  
  CVar3 = in_RSI[0x38];
  pCVar4 = in_RSI;
  if (CVar3 == (CylinderShapeSettings)0x0) {
    this = (CylinderShape *)(*Allocate)(0x38);
    CylinderShape::CylinderShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pCVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (*(int *)pCVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    CVar3 = in_RSI[0x38];
  }
  *(CylinderShapeSettings *)(in_RDI + 4) = CVar3;
  if (CVar3 == (CylinderShapeSettings)0x1) {
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
  if (CVar3 != (CylinderShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_001018b7;
    }
    if (__n == 0) goto LAB_001018b7;
  }
  else {
    if ((long)__n < 0) {
      pcVar5 = "basic_string::_M_create";
      uVar6 = std::__throw_length_error("basic_string::_M_create");
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar5[0x18] = '\0';
      pcVar5[0x19] = '\x05';
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)pcVar5 = &ShapeSettings::vtable;
      *(CylinderShapeSettings **)(pcVar5 + 0x20) = pCVar4;
      if (pCVar4 != (CylinderShapeSettings *)0x0) {
        LOCK();
        *(int *)(pCVar4 + 8) = *(int *)(pCVar4 + 8) + 1;
        UNLOCK();
      }
      pcVar5[0x28] = '\0';
      pcVar5[0x29] = '\0';
      pcVar5[0x2a] = 'z';
      pcVar5[0x2b] = 'D';
      *(undefined ***)pcVar5 = &PTR__CylinderShape_00102b40;
      *(undefined4 *)(pcVar5 + 0x2c) = uVar6;
      *(undefined4 *)(pcVar5 + 0x30) = in_XMM1_Da;
      *(undefined4 *)(pcVar5 + 0x34) = in_XMM2_Da;
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_001018b7:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* JPH::CylinderShape::CylinderShape(float, float, float, JPH::PhysicsMaterial const*) */

void __thiscall
JPH::CylinderShape::CylinderShape
          (CylinderShape *this,float param_1,float param_2,float param_3,PhysicsMaterial *param_4)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x18) = 0x500;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = &ShapeSettings::vtable;
  *(PhysicsMaterial **)(this + 0x20) = param_4;
  if (param_4 != (PhysicsMaterial *)0x0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x28) = 0x447a0000;
  *(undefined ***)this = &PTR__CylinderShape_00102b40;
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_2;
  *(float *)(this + 0x34) = param_3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CylinderShape::sRegister() */

void JPH::CylinderShape::sRegister(void)

{
  _DrawGetSupportingFace = sRegister()::{lambda()#1}::_FUN;
  _CastRay = (undefined4)Color::sGreen;
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



/* JPH::CylinderShape::GetInnerRadius() const */

float __thiscall JPH::CylinderShape::GetInnerRadius(CylinderShape *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x30);
  if (*(float *)(this + 0x2c) <= *(float *)(this + 0x30)) {
    fVar1 = *(float *)(this + 0x2c);
  }
  return fVar1;
}



/* JPH::CylinderShape::GetStats() const */

undefined1  [16] JPH::CylinderShape::GetStats(void)

{
  return ZEXT816(0x38);
}



/* JPH::CylinderShape::GetVolume() const */

float __thiscall JPH::CylinderShape::GetVolume(CylinderShape *this)

{
  return _LC0 * *(float *)(this + 0x2c) * *(float *)(this + 0x30) * *(float *)(this + 0x30);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::CylinderShape::Cylinder::GetConvexRadius() const */

undefined4 __thiscall JPH::CylinderShape::Cylinder::GetConvexRadius(Cylinder *this)

{
  return *(undefined4 *)(this + 0x10);
}



/* JPH::StaticArray<JPH::Vec3, 96u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,96u>::~StaticArray(StaticArray<JPH::Vec3,96u> *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CylinderShape::Cylinder::~Cylinder() */

void __thiscall JPH::CylinderShape::Cylinder::~Cylinder(Cylinder *this)

{
  return;
}



/* JPH::CylinderShape::Cylinder::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::CylinderShape::Cylinder::GetSupport(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  fVar1 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  fVar3 = SQRT(param_2 * param_2 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    local_18._8_4_ = (param_2 * *(float *)(param_3 + 0xc)) / fVar3;
    fVar4 = _LC10;
    if (0.0 <= fVar1) {
      fVar4 = _LC11;
    }
    local_18._4_4_ = fVar4 * *(float *)(param_3 + 8);
    local_18._0_4_ = (*(float *)(param_3 + 0xc) * fVar2) / fVar3;
    local_18._12_4_ = local_18._8_4_;
    return local_18;
  }
  fVar2 = _LC10;
  if (0.0 <= fVar1) {
    fVar2 = _LC11;
  }
  return ZEXT416((uint)(fVar2 * *(float *)(param_3 + 8))) << 0x20;
}



/* JPH::CylinderShape::Cylinder::~Cylinder() */

void __thiscall JPH::CylinderShape::Cylinder::~Cylinder(Cylinder *this)

{
  operator_delete(this,0x18);
  return;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar15 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == CylinderShape::GetLocalBounds) {
    fStack_54 = (float)*(undefined8 *)((long)param_4 + 0x2c);
    local_58 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x2c) >> 0x20);
    local_68 = 0.0 - local_58;
    fStack_64 = 0.0 - fStack_54;
    fStack_60 = 0.0 - local_58;
    fStack_5c = 0.0 - local_58;
    fStack_50 = local_58;
    fStack_4c = local_58;
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_64 * fStack_74,local_68 * local_78);
  auVar7._8_4_ = fStack_60 * (float)param_2;
  auVar7._12_4_ = fStack_5c * fVar15;
  lVar6 = 0;
  fStack_50 = fStack_50 * (float)param_2;
  fStack_4c = fStack_4c * fVar15;
  auVar11._8_4_ = auVar7._8_4_;
  auVar11._0_8_ = auVar7._0_8_;
  auVar11._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_54 * fStack_74;
  auVar9._0_4_ = local_58 * local_78;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fStack_4c;
  local_38 = maxps(auVar11,auVar9);
  auVar20._4_4_ = fStack_54 * fStack_74;
  auVar20._0_4_ = local_58 * local_78;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fStack_4c;
  local_48 = minps(auVar7,auVar20);
  fVar15 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar10 = fVar15;
  fVar12 = fVar16;
  fVar13 = fVar17;
  fVar14 = fVar18;
  do {
    fVar2 = *(float *)(local_48 + lVar6);
    fVar3 = *(float *)(local_38 + lVar6);
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar8._8_4_ = fVar2 * pfVar1[2];
    auVar8._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar10 = fVar10 + auVar20._0_4_;
    fVar12 = fVar12 + auVar20._4_4_;
    fVar13 = fVar13 + auVar20._8_4_;
    fVar14 = fVar14 + auVar20._12_4_;
    fVar15 = fVar15 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar10;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CylinderShape::~CylinderShape() */

void __thiscall JPH::CylinderShape::~CylinderShape(CylinderShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x00102433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00102440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::CylinderShape::~CylinderShape() */

void __thiscall JPH::CylinderShape::~CylinderShape(CylinderShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x0010249d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00102476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::CylinderShapeSettings::~CylinderShapeSettings() */

void __thiscall JPH::CylinderShapeSettings::~CylinderShapeSettings(CylinderShapeSettings *this)

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
  if (this[0x38] == (CylinderShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010251f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (CylinderShapeSettings)0x2) &&
          (*(CylinderShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001024f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::CylinderShapeSettings::~CylinderShapeSettings() */

void __thiscall JPH::CylinderShapeSettings::~CylinderShapeSettings(CylinderShapeSettings *this)

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
  if (this[0x38] == (CylinderShapeSettings)0x1) {
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
  else if ((this[0x38] == (CylinderShapeSettings)0x2) &&
          (*(CylinderShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102593. Too many branches */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::GetRTTIOfType(JPH::CylinderShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar16 = _UNK_00102ddc;
  fVar15 = _UNK_00102dd8;
  fVar14 = _UNK_00102dd4;
  fVar13 = __LC40;
  uVar12 = _UNK_00102cec;
  uVar11 = _UNK_00102ce8;
  uVar10 = _LC10;
  uVar9 = __LC9;
  uVar8 = _UNK_00102cdc;
  uVar7 = _UNK_00102cd8;
  uVar6 = _UNK_00102cd4;
  uVar5 = __LC8;
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC32;
  }
  iVar22 = 0;
  puVar18 = cCylinderTopFace;
  lVar19 = 1;
  cCylinderTopFace._32_8_ = __LC34;
  cCylinderTopFace._40_8_ = _UNK_00102d78;
  cCylinderTopFace._0_8_ = __LC33;
  cCylinderTopFace._8_8_ = _UNK_00102d68;
  cCylinderTopFace._48_8_ = __LC35;
  cCylinderTopFace._56_8_ = _UNK_00102d88;
  cCylinderTopFace._16_4_ = __LC31;
  cCylinderTopFace._20_4_ = _UNK_00102d54;
  cCylinderTopFace._24_4_ = _UNK_00102d58;
  cCylinderTopFace._28_4_ = _UNK_00102d5c;
  cCylinderTopFace._64_8_ = __LC36;
  cCylinderTopFace._72_8_ = _UNK_00102d98;
  cCylinderTopFace._80_8_ = __LC37;
  cCylinderTopFace._88_8_ = _UNK_00102da8;
  cCylinderTopFace._96_8_ = __LC38;
  cCylinderTopFace._104_8_ = _UNK_00102db8;
  cCylinderTopFace._112_8_ = __LC39;
  cCylinderTopFace._120_8_ = _UNK_00102dc8;
  puVar17 = (undefined4 *)&DAT_001019f0;
  fVar23 = __LC31;
  fVar24 = _UNK_00102d54;
  fVar25 = _UNK_00102d58;
  fVar26 = _UNK_00102d5c;
  while( true ) {
    fVar27 = *(float *)puVar18;
    fVar28 = *(float *)((long)puVar18 + 4);
    fVar29 = *(float *)((long)puVar18 + 8);
    fVar30 = *(float *)((long)puVar18 + 0xc);
    fVar23 = fVar23 + fVar13;
    fVar24 = fVar24 + fVar14;
    fVar25 = fVar25 + fVar15;
    fVar26 = fVar26 + fVar16;
    uVar1 = *(undefined8 *)puVar18;
    uVar2 = *(undefined8 *)((long)puVar18 + 8);
    uVar20 = (uint)lVar19;
    iVar22 = iVar22 + 0xc;
    lVar19 = lVar19 + 1;
    *puVar17 = uVar5;
    puVar17[1] = uVar6;
    puVar17[2] = uVar7;
    puVar17[3] = uVar8;
    fVar27 = fVar27 + fVar13;
    fVar28 = fVar28 + fVar14;
    fVar29 = fVar29 + fVar15;
    fVar30 = fVar30 + fVar16;
    lVar21 = (ulong)(uVar20 & 7) * 0x10;
    *(undefined8 *)(puVar17 + 4) = uVar1;
    *(undefined8 *)(puVar17 + 6) = uVar2;
    puVar18 = (undefined1 *)((long)puVar18 + 0x10);
    uVar3 = *(undefined8 *)(cCylinderTopFace + lVar21);
    uVar4 = *(undefined8 *)(cCylinderTopFace + lVar21 + 8);
    puVar17[0xc] = uVar9;
    puVar17[0xd] = uVar10;
    puVar17[0xe] = uVar11;
    puVar17[0xf] = uVar12;
    puVar17[0x10] = fVar23;
    puVar17[0x11] = fVar24;
    puVar17[0x12] = fVar25;
    puVar17[0x13] = fVar26;
    *(undefined8 *)(puVar17 + 8) = uVar3;
    *(undefined8 *)(puVar17 + 10) = uVar4;
    puVar17[0x14] = fVar27;
    puVar17[0x15] = fVar28;
    puVar17[0x16] = fVar29;
    puVar17[0x17] = fVar30;
    *(undefined8 *)(puVar17 + 0x18) = uVar1;
    *(undefined8 *)(puVar17 + 0x1a) = uVar2;
    puVar17[0x1c] = fVar27;
    puVar17[0x1d] = fVar28;
    puVar17[0x1e] = fVar29;
    puVar17[0x1f] = fVar30;
    *(undefined8 *)(puVar17 + 0x20) = uVar3;
    *(undefined8 *)(puVar17 + 0x22) = uVar4;
    *(undefined8 *)(puVar17 + 0x24) = uVar3;
    *(undefined8 *)(puVar17 + 0x26) = uVar4;
    puVar17[0x28] = fVar27;
    puVar17[0x29] = fVar28;
    puVar17[0x2a] = fVar29;
    puVar17[0x2b] = fVar30;
    sUnitCylinderTriangles = iVar22;
    puVar17[0x2c] = fVar23;
    puVar17[0x2d] = fVar24;
    puVar17[0x2e] = fVar25;
    puVar17[0x2f] = fVar26;
    if (lVar19 == 9) break;
    lVar21 = (ulong)((uint)lVar19 & 7) * 0x10;
    fVar23 = *(float *)(cCylinderTopFace + lVar21);
    fVar24 = *(float *)(cCylinderTopFace + lVar21 + 4);
    fVar25 = *(float *)(cCylinderTopFace + lVar21 + 8);
    fVar26 = *(float *)(cCylinderTopFace + lVar21 + 0xc);
    puVar17 = puVar17 + 0x30;
  }
  __cxa_atexit(StaticArray<JPH::Vec3,96u>::~StaticArray,&sUnitCylinderTriangles,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CylinderShapeSettings::~CylinderShapeSettings() */

void __thiscall JPH::CylinderShapeSettings::~CylinderShapeSettings(CylinderShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CylinderShape::~CylinderShape() */

void __thiscall JPH::CylinderShape::~CylinderShape(CylinderShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CylinderShape::Cylinder::~Cylinder() */

void __thiscall JPH::CylinderShape::Cylinder::~Cylinder(Cylinder *this)

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
/* JPH::StaticArray<JPH::Vec3, 96u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,96u>::~StaticArray(StaticArray<JPH::Vec3,96u> *this)

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


