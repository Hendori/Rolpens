/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::HingeConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::HingeConstraint::NotifyShapeChanged
               (undefined8 param_1_00,undefined8 param_2,long param_1,int *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  fVar1 = (float)((ulong)param_1_00 >> 0x20);
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x70) == *param_4) {
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - (float)param_1_00;
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - fVar1;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - (float)param_2;
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - fVar2;
    return;
  }
  if (*param_4 != *(int *)(*(long *)(param_1 + 0x30) + 0x70)) {
    return;
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - (float)param_1_00;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - (float)param_2;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - fVar2;
  return;
}



/* JPH::HingeConstraint::GetConstraintToBody1Matrix() const */

void JPH::HingeConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long in_RSI;
  undefined8 *in_RDI;
  
  fVar6 = *(float *)(in_RSI + 0x80);
  fVar7 = *(float *)(in_RSI + 0x84);
  fVar8 = *(float *)(in_RSI + 0x88);
  fVar9 = *(float *)(in_RSI + 0x60);
  fVar10 = *(float *)(in_RSI + 100);
  fVar11 = *(float *)(in_RSI + 0x68);
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  uVar3 = *(undefined8 *)(in_RSI + 0x40);
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  uVar4 = *(undefined8 *)(in_RSI + 0x80);
  uVar5 = *(undefined8 *)(in_RSI + 0x60);
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  uVar2 = *(undefined4 *)(in_RSI + 0x68);
  *in_RDI = uVar5;
  in_RDI[2] = uVar4;
  in_RDI[6] = uVar3;
  *(undefined4 *)((long)in_RDI + 0x3c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 1) = uVar2;
  uVar2 = *(undefined4 *)(in_RSI + 0x88);
  *(undefined4 *)(in_RDI + 7) = uVar1;
  *(undefined4 *)(in_RDI + 3) = uVar2;
  *(float *)(in_RDI + 5) = fVar7 * fVar9 - fVar10 * fVar6;
  *(float *)(in_RDI + 4) = fVar8 * fVar10 - fVar11 * fVar7;
  *(float *)((long)in_RDI + 0x24) = fVar6 * fVar11 - fVar9 * fVar8;
  return;
}



/* JPH::HingeConstraint::GetConstraintToBody2Matrix() const */

void JPH::HingeConstraint::GetConstraintToBody2Matrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long in_RSI;
  undefined8 *in_RDI;
  
  fVar6 = *(float *)(in_RSI + 0x90);
  fVar7 = *(float *)(in_RSI + 0x94);
  fVar8 = *(float *)(in_RSI + 0x98);
  fVar9 = *(float *)(in_RSI + 0x70);
  fVar10 = *(float *)(in_RSI + 0x74);
  fVar11 = *(float *)(in_RSI + 0x78);
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  uVar3 = *(undefined8 *)(in_RSI + 0x50);
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  uVar4 = *(undefined8 *)(in_RSI + 0x90);
  uVar5 = *(undefined8 *)(in_RSI + 0x70);
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  uVar2 = *(undefined4 *)(in_RSI + 0x78);
  *in_RDI = uVar5;
  in_RDI[2] = uVar4;
  in_RDI[6] = uVar3;
  *(undefined4 *)((long)in_RDI + 0x3c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 1) = uVar2;
  uVar2 = *(undefined4 *)(in_RSI + 0x98);
  *(undefined4 *)(in_RDI + 7) = uVar1;
  *(undefined4 *)(in_RDI + 3) = uVar2;
  *(float *)(in_RDI + 5) = fVar7 * fVar9 - fVar10 * fVar6;
  *(float *)(in_RDI + 4) = fVar8 * fVar10 - fVar11 * fVar7;
  *(float *)((long)in_RDI + 0x24) = fVar6 * fVar11 - fVar9 * fVar8;
  return;
}



/* JPH::HingeConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::HingeConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::HingeConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::HingeConstraintSettings::SaveBinaryState(HingeConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa4,4);
  JPH::SpringSettings::SaveBinaryState((StreamOut *)(this + 0x98));
  JPH::MotorSettings::SaveBinaryState((StreamOut *)(this + 0xa8));
  return;
}



/* JPH::HingeConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::HingeConstraintSettings::RestoreBinaryState(HingeConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa4,4);
  JPH::SpringSettings::RestoreBinaryState((StreamIn *)(this + 0x98));
  JPH::MotorSettings::RestoreBinaryState((StreamIn *)(this + 0xa8));
  return;
}



/* JPH::HingeConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::HingeConstraint::SaveState(HingeConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x34c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x2e0,8);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1f0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x31c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe8,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xec,4);
                    /* WARNING: Could not recover jumptable at 0x00100486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xf0,4);
  return;
}



/* JPH::HingeConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::HingeConstraint::RestoreState(HingeConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2e0,8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1f0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x31c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xec,4);
                    /* WARNING: Could not recover jumptable at 0x0010053f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xf0,4);
  return;
}



/* JPH::HingeConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::HingeConstraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  undefined8 *puVar1;
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
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_1[0xb0] != (DebugRenderer)0x0) {
    if (*(float *)(param_1 + 0xb4) < *(float *)(param_1 + 0xb8)) {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      fVar7 = (float)puVar1[2];
      fVar5 = (float)puVar1[3];
      fVar8 = (float)((ulong)puVar1[2] >> 0x20);
      fVar9 = fVar7 + fVar7;
      fVar11 = fVar8 + fVar8;
      fVar6 = (float)((ulong)puVar1[3] >> 0x20);
      fVar12 = fVar5 * (fVar5 + fVar5);
      fVar10 = (fVar5 + fVar5) * fVar6;
      fVar2 = *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(param_1 + 0x44);
      fVar4 = *(float *)(param_1 + 0x48);
      local_38._0_4_ = (float)*puVar1;
      local_38._4_4_ = (float)((ulong)*puVar1 >> 0x20);
      local_38 = CONCAT44(fVar4 * (fVar5 * fVar11 - fVar9 * fVar6) +
                          fVar2 * (fVar8 * fVar9 + fVar10) +
                          fVar3 * ((_LC1 - fVar12) - fVar7 * fVar9) + local_38._4_4_,
                          fVar4 * (fVar5 * fVar9 + fVar11 * fVar6) +
                          fVar2 * ((_LC1 - fVar8 * fVar11) - fVar12) +
                          fVar3 * (fVar8 * fVar9 - fVar10) + (float)local_38);
      uStack_30 = CONCAT44(fVar4 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0 + 1.0,
                           fVar4 * ((_LC1 - fVar7 * fVar9) - fVar8 * fVar11) +
                           fVar2 * (fVar5 * fVar9 - fVar11 * fVar6) +
                           fVar3 * (fVar9 * fVar6 + fVar5 * fVar11) + *(float *)(puVar1 + 1));
      JPH::DebugRenderer::DrawPie(local_38,uStack_30);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::GetConstraintSettings() const */

void JPH::HingeConstraint::GetConstraintSettings(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  
  puVar14 = (undefined8 *)(*Allocate)(0xd0);
  uVar13 = _LC3;
  *(undefined4 *)(puVar14 + 1) = 0;
  uVar4 = _UNK_00107268;
  uVar3 = __LC2;
  *(undefined1 *)((long)puVar14 + 0xc) = 1;
  *puVar14 = &PTR_GetRTTI_00107160;
  puVar14[3] = 0x3f80000000000000;
  uVar5 = __LC53;
  *(undefined1 (*) [16])(puVar14 + 10) = ZEXT416(uVar13);
  puVar14[0x12] = uVar5;
  uVar6 = _LC6;
  *(undefined1 (*) [16])(puVar14 + 0x10) = ZEXT416(uVar13);
  uVar7 = _LC6;
  uVar5 = __LC5;
  *(undefined8 *)((long)puVar14 + 0xbc) = uVar6;
  puVar14[2] = 0;
  puVar14[4] = 0;
  *(undefined4 *)(puVar14 + 5) = 1;
  *(undefined1 *)(puVar14 + 0x13) = 0;
  *(undefined8 *)((long)puVar14 + 0x9c) = 0;
  *(undefined4 *)((long)puVar14 + 0xa4) = 0;
  *(undefined1 *)(puVar14 + 0x15) = 0;
  *(undefined8 *)((long)puVar14 + 0xac) = uVar5;
  *(undefined8 *)((long)puVar14 + 0xb4) = uVar7;
  *(undefined1 (*) [16])(puVar14 + 6) = (undefined1  [16])0x0;
  puVar14[8] = uVar3;
  puVar14[9] = uVar4;
  *(undefined1 (*) [16])(puVar14 + 0xc) = (undefined1  [16])0x0;
  puVar14[0xe] = uVar3;
  puVar14[0xf] = uVar4;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar3 = *(undefined8 *)(in_RSI + 0x40);
  uVar4 = *(undefined8 *)(in_RSI + 0x48);
  uVar5 = *(undefined8 *)(in_RSI + 0x60);
  uVar6 = *(undefined8 *)(in_RSI + 0x68);
  *(undefined4 *)(puVar14 + 5) = 0;
  uVar7 = *(undefined8 *)(in_RSI + 0x80);
  uVar8 = *(undefined8 *)(in_RSI + 0x88);
  uVar9 = *(undefined8 *)(in_RSI + 0x50);
  uVar10 = *(undefined8 *)(in_RSI + 0x58);
  uVar11 = *(undefined8 *)(in_RSI + 0x70);
  uVar12 = *(undefined8 *)(in_RSI + 0x78);
  puVar14[6] = uVar3;
  puVar14[7] = uVar4;
  uVar3 = *(undefined8 *)(in_RSI + 0x90);
  uVar4 = *(undefined8 *)(in_RSI + 0x98);
  puVar14[8] = uVar5;
  puVar14[9] = uVar6;
  puVar14[10] = uVar7;
  puVar14[0xb] = uVar8;
  puVar14[0xc] = uVar9;
  puVar14[0xd] = uVar10;
  puVar14[0xe] = uVar11;
  puVar14[0xf] = uVar12;
  puVar14[0x10] = uVar3;
  puVar14[0x11] = uVar4;
  puVar14[0x12] = *(undefined8 *)(in_RSI + 0xb4);
  uVar1 = *(undefined4 *)(in_RSI + 200);
  uVar3 = *(undefined8 *)(in_RSI + 0xcc);
  uVar4 = *(undefined8 *)(in_RSI + 0xd4);
  puVar14[0x13] = *(undefined8 *)(in_RSI + 0xbc);
  uVar5 = *(undefined8 *)(in_RSI + 0xd8);
  uVar6 = *(undefined8 *)(in_RSI + 0xe0);
  uVar2 = *(undefined4 *)(in_RSI + 0xc4);
  puVar14[0x15] = uVar3;
  puVar14[0x16] = uVar4;
  *(undefined4 *)((long)puVar14 + 0xa4) = uVar1;
  *(undefined4 *)(puVar14 + 0x14) = uVar2;
  *(undefined8 *)((long)puVar14 + 0xb4) = uVar5;
  *(undefined8 *)((long)puVar14 + 0xbc) = uVar6;
  *in_RDI = puVar14;
  LOCK();
  *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
  UNLOCK();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AngleConstraintPart::CalculateConstraintPropertiesWithSettings(float, JPH::Body const&,
   JPH::Body const&, JPH::Vec3, float, float, JPH::SpringSettings const&) [clone .isra.0] */

void JPH::AngleConstraintPart::CalculateConstraintPropertiesWithSettings
               (float param_1,undefined8 param_2_00,float param_3_00,float param_4,float param_5,
               float param_6,float param_7,float *param_2,long param_3,long param_10,char param_11)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_38;
  float fStack_34;
  
  fVar6 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar7 = 0.0;
  local_38 = (float)param_2_00;
  fStack_34 = (float)((ulong)param_2_00 >> 0x20);
  if (*(char *)(param_3 + 0x78) == '\x02') {
    lVar3 = *(long *)(param_3 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar10 = (float)*(undefined8 *)(param_3 + 0x10);
    fVar6 = (float)*(undefined8 *)(param_3 + 0x18);
    auVar24._1_3_ = 0;
    auVar24[0] = bVar2;
    fVar14 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    fVar29 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar12 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    auVar24[4] = bVar2;
    auVar24._5_3_ = 0;
    auVar24[8] = bVar2;
    auVar24._9_3_ = 0;
    auVar24[0xc] = bVar2;
    auVar24._13_3_ = 0;
    fVar20 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    auVar5._4_4_ = _UNK_00107294;
    auVar5._0_4_ = __LC9;
    auVar5._8_4_ = _UNK_00107298;
    auVar5._12_4_ = _UNK_0010729c;
    auVar24 = auVar24 & auVar5;
    uVar16 = -(uint)(auVar24._0_4_ == __LC9);
    uVar17 = -(uint)(auVar24._4_4_ == _UNK_00107294);
    uVar18 = -(uint)(auVar24._8_4_ == _UNK_00107298);
    fVar13 = (float)((uint)local_38 & uVar16);
    fVar15 = (float)((uint)fStack_34 & uVar17);
    fVar19 = (float)((uint)param_3_00 & uVar18);
    fVar23 = (fVar10 * fVar12 + fVar9 * fVar29 + fVar7 * fVar14) - fVar6 * fVar20;
    fVar11 = fVar7 * fVar12 + (fVar9 * fVar20 - fVar10 * fVar14) + fVar6 * fVar29;
    fVar26 = fVar11 + fVar11;
    fVar21 = ((fVar9 * fVar14 + fVar10 * fVar20) - fVar7 * fVar29) + fVar6 * fVar12;
    fVar22 = fVar23 + fVar23;
    fVar6 = ((fVar12 * fVar9 - fVar29 * fVar10) - fVar7 * fVar20) - fVar6 * fVar14;
    fVar14 = fVar21 * (fVar21 + fVar21);
    fVar9 = fVar6 * (fVar21 + fVar21);
    fVar27 = fVar21 * fVar26 - fVar22 * fVar6;
    fVar7 = fVar22 * fVar6 + fVar21 * fVar26;
    fVar25 = fVar21 * fVar22 + fVar26 * fVar6;
    fVar20 = fVar21 * fVar22 - fVar26 * fVar6;
    fVar6 = (_LC1 - fVar11 * fVar26) - fVar14;
    fVar10 = fVar11 * fVar22 - fVar9;
    fVar9 = fVar9 + fVar11 * fVar22;
    fVar28 = (_LC1 - fVar14) - fVar23 * fVar22;
    fVar21 = (_LC1 - fVar23 * fVar22) - fVar11 * fVar26;
    fVar14 = *(float *)(lVar3 + 0x20) * (fVar9 * fVar15 + fVar13 * fVar6 + fVar20 * fVar19);
    fVar12 = *(float *)(lVar3 + 0x24) * (fVar28 * fVar15 + fVar13 * fVar10 + fVar7 * fVar19);
    fVar29 = *(float *)(lVar3 + 0x28) * (fVar27 * fVar15 + fVar13 * fVar25 + fVar21 * fVar19);
    fVar6 = (float)((uint)(fVar14 * fVar6 + fVar12 * fVar10 + fVar29 * fVar25) & uVar16);
    fVar9 = (float)((uint)(fVar14 * fVar9 + fVar12 * fVar28 + fVar29 * fVar27) & uVar17);
    fVar10 = (float)((uint)(fVar14 * fVar20 + fVar12 * fVar7 + fVar29 * fVar21) & uVar18);
    fVar7 = (float)((uint)(fVar14 * 0.0 + fVar12 * 0.0 + fVar29 * 0.0) &
                   -(uint)(auVar24._12_4_ == _UNK_0010729c));
  }
  cVar1 = *(char *)(param_10 + 0x78);
  *param_2 = fVar6;
  param_2[1] = fVar9;
  param_2[2] = fVar10;
  param_2[3] = fVar7;
  fVar7 = 0.0;
  fVar14 = 0.0;
  fVar12 = 0.0;
  fVar29 = 0.0;
  if (cVar1 == '\x02') {
    lVar3 = *(long *)(param_10 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar12 = (float)*(undefined8 *)(param_10 + 0x10);
    fVar29 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
    auVar8._1_3_ = 0;
    auVar8[0] = bVar2;
    fVar7 = (float)*(undefined8 *)(param_10 + 0x18);
    fVar20 = (float)*(undefined8 *)(lVar3 + 0x38);
    auVar8[4] = bVar2;
    auVar8._5_3_ = 0;
    auVar8[8] = bVar2;
    auVar8._9_3_ = 0;
    auVar8[0xc] = bVar2;
    auVar8._13_3_ = 0;
    fVar22 = (float)*(undefined8 *)(lVar3 + 0x30);
    auVar4._4_4_ = _UNK_00107294;
    auVar4._0_4_ = __LC9;
    auVar4._8_4_ = _UNK_00107298;
    auVar4._12_4_ = _UNK_0010729c;
    auVar8 = auVar8 & auVar4;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar14 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
    fVar23 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    uVar16 = -(uint)(auVar8._0_4_ == __LC9);
    uVar17 = -(uint)(auVar8._4_4_ == _UNK_00107294);
    uVar18 = -(uint)(auVar8._8_4_ == _UNK_00107298);
    fVar26 = (float)((uint)local_38 & uVar16);
    fVar27 = (float)((uint)fStack_34 & uVar17);
    fVar28 = (float)((uint)param_3_00 & uVar18);
    fVar19 = (fVar12 * fVar21 + fVar14 * fVar22 + fVar29 * fVar20) - fVar7 * fVar23;
    fVar13 = fVar29 * fVar21 + (fVar14 * fVar23 - fVar12 * fVar20) + fVar7 * fVar22;
    fVar25 = fVar13 + fVar13;
    fVar11 = fVar19 + fVar19;
    fVar15 = ((fVar14 * fVar20 + fVar12 * fVar23) - fVar29 * fVar22) + fVar7 * fVar21;
    fVar7 = ((fVar14 * fVar21 - fVar22 * fVar12) - fVar29 * fVar23) - fVar7 * fVar20;
    fVar29 = fVar15 * (fVar15 + fVar15);
    fVar14 = fVar7 * (fVar15 + fVar15);
    fVar31 = fVar15 * fVar25 - fVar11 * fVar7;
    fVar12 = fVar11 * fVar7 + fVar15 * fVar25;
    fVar30 = (_LC1 - fVar19 * fVar11) - fVar13 * fVar25;
    fVar32 = (_LC1 - fVar29) - fVar19 * fVar11;
    fVar20 = fVar13 * fVar11 - fVar14;
    fVar14 = fVar14 + fVar13 * fVar11;
    fVar19 = fVar15 * fVar11 - fVar25 * fVar7;
    fVar7 = fVar15 * fVar11 + fVar25 * fVar7;
    fVar29 = (_LC1 - fVar13 * fVar25) - fVar29;
    fVar21 = *(float *)(lVar3 + 0x20) * (fVar19 * fVar28 + fVar14 * fVar27 + fVar26 * fVar29);
    fVar22 = *(float *)(lVar3 + 0x24) * (fVar12 * fVar28 + fVar32 * fVar27 + fVar26 * fVar20);
    fVar23 = *(float *)(lVar3 + 0x28) * (fVar30 * fVar28 + fVar31 * fVar27 + fVar26 * fVar7);
    fVar7 = (float)((uint)(fVar29 * fVar21 + fVar22 * fVar20 + fVar7 * fVar23) & uVar16);
    fVar14 = (float)((uint)(fVar14 * fVar21 + fVar22 * fVar32 + fVar31 * fVar23) & uVar17);
    fVar12 = (float)((uint)(fVar19 * fVar21 + fVar22 * fVar12 + fVar30 * fVar23) & uVar18);
    fVar29 = (float)((uint)(fVar21 * 0.0 + fVar22 * 0.0 + fVar23 * 0.0) &
                    -(uint)(auVar8._12_4_ == _UNK_0010729c));
  }
  param_2[4] = fVar7;
  param_2[5] = fVar14;
  param_2[6] = fVar12;
  param_2[7] = fVar29;
  fVar29 = _LC1;
  fVar6 = (fVar12 + fVar10) * param_3_00 +
          (fVar14 + fVar9) * fStack_34 + (fVar7 + fVar6) * local_38 + 0.0;
  if (fVar6 == 0.0) {
    param_2[8] = 0.0;
    param_2[0xb] = 0.0;
    return;
  }
  if (param_11 != '\0') {
    if (param_6 <= 0.0) {
      param_2[10] = 0.0;
      *(ulong *)(param_2 + 8) = CONCAT44(param_4,fVar29 / fVar6);
      return;
    }
    fVar9 = _LC1 / ((param_7 + param_6 * param_1) * param_1);
    param_2[10] = fVar9;
    *(ulong *)(param_2 + 8) =
         CONCAT44(param_6 * param_1 * fVar9 * param_5 + param_4,fVar29 / (fVar6 + fVar9));
    return;
  }
  fVar9 = _LC1 / fVar6;
  param_2[8] = fVar9;
  if (param_6 <= 0.0) {
    param_2[10] = 0.0;
    param_2[9] = param_4;
    return;
  }
  param_6 = param_6 * _LC10;
  fVar10 = param_6 * param_6 * fVar9 * param_1;
  fVar9 = fVar29 / (((fVar9 + fVar9) * param_7 * param_6 + fVar10) * param_1);
  param_2[10] = fVar9;
  *(ulong *)(param_2 + 8) = CONCAT44(fVar10 * fVar9 * param_5 + param_4,fVar29 / (fVar6 + fVar9));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*Allocate)(0xd0);
  uVar4 = __LC53;
  uVar3 = _LC3;
  uVar2 = _UNK_00107268;
  uVar1 = __LC2;
  *(undefined1 (*) [16])(puVar7 + 10) = ZEXT416(_LC3);
  puVar7[0x12] = uVar4;
  uVar5 = _LC6;
  *(undefined1 (*) [16])(puVar7 + 0x10) = ZEXT416(uVar3);
  uVar6 = _LC6;
  uVar4 = __LC5;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined1 *)((long)puVar7 + 0xc) = 1;
  *puVar7 = &PTR_GetRTTI_00107160;
  puVar7[2] = 0;
  puVar7[3] = 0x3f80000000000000;
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 5) = 1;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined8 *)((long)puVar7 + 0x9c) = 0;
  *(undefined4 *)((long)puVar7 + 0xa4) = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  *(undefined8 *)((long)puVar7 + 0xbc) = uVar5;
  *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
  puVar7[8] = uVar1;
  puVar7[9] = uVar2;
  *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
  puVar7[0xe] = uVar1;
  puVar7[0xf] = uVar2;
  *(undefined8 *)((long)puVar7 + 0xac) = uVar4;
  *(undefined8 *)((long)puVar7 + 0xb4) = uVar6;
  return;
}



/* JPH::HingeConstraint::ResetWarmStart() */

void __thiscall JPH::HingeConstraint::ResetWarmStart(HingeConstraint *this)

{
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::WarmStartVelocityConstraint(float) */

void JPH::HingeConstraint::WarmStartVelocityConstraint(float param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  long in_RDX;
  long in_RDI;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  lVar4 = *(long *)(in_RDI + 0x30);
  lVar5 = *(long *)(in_RDI + 0x28);
  fVar25 = *(float *)(in_RDI + 0x34c) * param_1;
  *(float *)(in_RDI + 0x34c) = fVar25;
  if (fVar25 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      in_RDX = *(long *)(lVar5 + 0x48);
      fVar26 = *(float *)(in_RDI + 0x324);
      fVar27 = *(float *)(in_RDI + 0x328);
      fVar28 = *(float *)(in_RDI + 0x32c);
      *(float *)(in_RDX + 0x10) = *(float *)(in_RDX + 0x10) - fVar25 * *(float *)(in_RDI + 800);
      *(float *)(in_RDX + 0x14) = *(float *)(in_RDX + 0x14) - fVar25 * fVar26;
      *(float *)(in_RDX + 0x18) = *(float *)(in_RDX + 0x18) - fVar25 * fVar27;
      *(float *)(in_RDX + 0x1c) = *(float *)(in_RDX + 0x1c) - fVar25 * fVar28;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      in_RDX = *(long *)(lVar4 + 0x48);
      fVar26 = *(float *)(in_RDI + 0x334);
      fVar27 = *(float *)(in_RDI + 0x338);
      fVar28 = *(float *)(in_RDI + 0x33c);
      *(float *)(in_RDX + 0x10) = fVar25 * *(float *)(in_RDI + 0x330) + *(float *)(in_RDX + 0x10);
      *(float *)(in_RDX + 0x14) = fVar25 * fVar26 + *(float *)(in_RDX + 0x14);
      *(float *)(in_RDX + 0x18) = fVar25 * fVar27 + *(float *)(in_RDX + 0x18);
      *(float *)(in_RDX + 0x1c) = fVar25 * fVar28 + *(float *)(in_RDX + 0x1c);
    }
  }
  fVar25 = param_1 * *(float *)(in_RDI + 0x1f0);
  fVar26 = param_1 * *(float *)(in_RDI + 500);
  fVar27 = param_1 * *(float *)(in_RDI + 0x1f8);
  fVar28 = param_1 * *(float *)(in_RDI + 0x1fc);
  auVar29._4_4_ = -(uint)(fVar26 == 0.0);
  auVar29._0_4_ = -(uint)(fVar25 == 0.0);
  auVar29._8_4_ = -(uint)(fVar27 == 0.0);
  auVar29._12_4_ = -(uint)(fVar28 == 0.0);
  *(float *)(in_RDI + 0x1f0) = fVar25;
  *(float *)(in_RDI + 500) = fVar26;
  *(float *)(in_RDI + 0x1f8) = fVar27;
  *(float *)(in_RDI + 0x1fc) = fVar28;
  uVar24 = movmskps((int)in_RDX,auVar29);
  if ((~uVar24 & 7) != 0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pfVar7 = *(float **)(lVar5 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar1 = pfVar7[0x16];
      bVar3 = *(byte *)((long)pfVar7 + 0x7a);
      auVar30._1_3_ = 0;
      auVar30[0] = bVar3;
      auVar30[4] = bVar3;
      auVar30._5_3_ = 0;
      auVar30[8] = bVar3;
      auVar30._9_3_ = 0;
      auVar30[0xc] = bVar3;
      auVar30._13_3_ = 0;
      auVar23._4_4_ = _UNK_001072a4;
      auVar23._0_4_ = __LC12;
      auVar23._8_4_ = _UNK_001072a8;
      auVar23._12_4_ = _UNK_001072ac;
      auVar30 = auVar30 & auVar23;
      bVar8 = auVar30._4_4_ == _UNK_001072a4;
      bVar9 = auVar30._8_4_ == _UNK_001072a8;
      bVar10 = auVar30._12_4_ == _UNK_001072ac;
      *pfVar7 = (float)(-(uint)(auVar30._0_4_ == __LC12) & (uint)(*pfVar7 - fVar1 * fVar25));
      pfVar7[1] = (float)(-(uint)bVar8 & (uint)(pfVar7[1] - fVar1 * fVar26));
      pfVar7[2] = (float)(-(uint)bVar9 & (uint)(pfVar7[2] - fVar1 * fVar27));
      pfVar7[3] = (float)(-(uint)bVar10 & (uint)(pfVar7[3] - fVar1 * fVar28));
      fVar1 = *(float *)(in_RDI + 0x144);
      fVar11 = *(float *)(in_RDI + 0x148);
      fVar12 = *(float *)(in_RDI + 0x14c);
      fVar13 = *(float *)(in_RDI + 0x134);
      fVar14 = *(float *)(in_RDI + 0x138);
      fVar15 = *(float *)(in_RDI + 0x13c);
      fVar16 = *(float *)(in_RDI + 0x154);
      fVar17 = *(float *)(in_RDI + 0x158);
      fVar18 = *(float *)(in_RDI + 0x15c);
      fVar19 = *(float *)(in_RDI + 0x164);
      fVar20 = *(float *)(in_RDI + 0x168);
      fVar21 = *(float *)(in_RDI + 0x16c);
      pfVar7[4] = pfVar7[4] -
                  (fVar25 * *(float *)(in_RDI + 0x130) + fVar26 * *(float *)(in_RDI + 0x140) +
                   fVar27 * *(float *)(in_RDI + 0x150) + *(float *)(in_RDI + 0x160));
      pfVar7[5] = pfVar7[5] - (fVar25 * fVar13 + fVar26 * fVar1 + fVar27 * fVar16 + fVar19);
      pfVar7[6] = pfVar7[6] - (fVar25 * fVar14 + fVar26 * fVar11 + fVar27 * fVar17 + fVar20);
      pfVar7[7] = pfVar7[7] - (fVar25 * fVar15 + fVar26 * fVar12 + fVar27 * fVar18 + fVar21);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      pfVar7 = *(float **)(lVar4 + 0x48);
      bVar3 = *(byte *)((long)pfVar7 + 0x7a);
      fVar1 = pfVar7[0x16];
      auVar31._1_3_ = 0;
      auVar31[0] = bVar3;
      auVar31[4] = bVar3;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar3;
      auVar31._9_3_ = 0;
      auVar31[0xc] = bVar3;
      auVar31._13_3_ = 0;
      auVar22._4_4_ = _UNK_001072a4;
      auVar22._0_4_ = __LC12;
      auVar22._8_4_ = _UNK_001072a8;
      auVar22._12_4_ = _UNK_001072ac;
      auVar31 = auVar31 & auVar22;
      bVar8 = auVar31._4_4_ == _UNK_001072a4;
      bVar9 = auVar31._8_4_ == _UNK_001072a8;
      bVar10 = auVar31._12_4_ == _UNK_001072ac;
      *pfVar7 = (float)((uint)(fVar1 * fVar25 + *pfVar7) & -(uint)(auVar31._0_4_ == __LC12));
      pfVar7[1] = (float)((uint)(fVar1 * fVar26 + pfVar7[1]) & -(uint)bVar8);
      pfVar7[2] = (float)((uint)(fVar1 * fVar27 + pfVar7[2]) & -(uint)bVar9);
      pfVar7[3] = (float)((uint)(fVar1 * fVar28 + pfVar7[3]) & -(uint)bVar10);
      fVar28 = *(float *)(in_RDI + 0x184);
      fVar1 = *(float *)(in_RDI + 0x188);
      fVar11 = *(float *)(in_RDI + 0x18c);
      fVar12 = *(float *)(in_RDI + 0x174);
      fVar13 = *(float *)(in_RDI + 0x178);
      fVar14 = *(float *)(in_RDI + 0x17c);
      fVar15 = *(float *)(in_RDI + 0x194);
      fVar16 = *(float *)(in_RDI + 0x198);
      fVar17 = *(float *)(in_RDI + 0x19c);
      fVar18 = *(float *)(in_RDI + 0x1a4);
      fVar19 = *(float *)(in_RDI + 0x1a8);
      fVar20 = *(float *)(in_RDI + 0x1ac);
      pfVar7[4] = fVar27 * *(float *)(in_RDI + 400) +
                  fVar25 * *(float *)(in_RDI + 0x170) + fVar26 * *(float *)(in_RDI + 0x180) +
                  *(float *)(in_RDI + 0x1a0) + pfVar7[4];
      pfVar7[5] = fVar27 * fVar15 + fVar25 * fVar12 + fVar26 * fVar28 + fVar18 + pfVar7[5];
      pfVar7[6] = fVar27 * fVar16 + fVar25 * fVar13 + fVar26 * fVar1 + fVar19 + pfVar7[6];
      pfVar7[7] = fVar27 * fVar17 + fVar25 * fVar14 + fVar26 * fVar11 + fVar20 + pfVar7[7];
    }
  }
  fVar25 = *(float *)(in_RDI + 0x2e0);
  fVar26 = (float)*(undefined8 *)(in_RDI + 0x2e0) * param_1;
  fVar27 = (float)((ulong)*(undefined8 *)(in_RDI + 0x2e0) >> 0x20) * param_1;
  *(ulong *)(in_RDI + 0x2e0) = CONCAT44(fVar27,fVar26);
  if ((*(float *)(in_RDI + 0x2e4) * param_1 != 0.0) || (fVar25 * param_1 != 0.0)) {
    fVar25 = fVar26 * *(float *)(in_RDI + 0x2b0) + fVar27 * *(float *)(in_RDI + 0x2c0);
    fVar28 = fVar26 * *(float *)(in_RDI + 0x2b4) + fVar27 * *(float *)(in_RDI + 0x2c4);
    fVar26 = fVar26 * *(float *)(in_RDI + 0x2b8) + fVar27 * *(float *)(in_RDI + 0x2c8);
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      lVar6 = *(long *)(lVar5 + 0x48);
      fVar27 = *(float *)(in_RDI + 0x234);
      fVar1 = *(float *)(in_RDI + 0x238);
      fVar11 = *(float *)(in_RDI + 0x23c);
      fVar12 = *(float *)(in_RDI + 0x244);
      fVar13 = *(float *)(in_RDI + 0x248);
      fVar14 = *(float *)(in_RDI + 0x24c);
      fVar15 = *(float *)(in_RDI + 0x254);
      fVar16 = *(float *)(in_RDI + 600);
      fVar17 = *(float *)(in_RDI + 0x25c);
      *(float *)(lVar6 + 0x10) =
           *(float *)(lVar6 + 0x10) -
           (fVar25 * *(float *)(in_RDI + 0x230) + fVar28 * *(float *)(in_RDI + 0x240) +
           fVar26 * *(float *)(in_RDI + 0x250));
      *(float *)(lVar6 + 0x14) =
           *(float *)(lVar6 + 0x14) - (fVar25 * fVar27 + fVar28 * fVar12 + fVar26 * fVar15);
      *(float *)(lVar6 + 0x18) =
           *(float *)(lVar6 + 0x18) - (fVar25 * fVar1 + fVar28 * fVar13 + fVar26 * fVar16);
      *(float *)(lVar6 + 0x1c) =
           *(float *)(lVar6 + 0x1c) - (fVar25 * fVar11 + fVar28 * fVar14 + fVar26 * fVar17);
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      lVar6 = *(long *)(lVar4 + 0x48);
      fVar27 = *(float *)(in_RDI + 0x274);
      fVar1 = *(float *)(in_RDI + 0x278);
      fVar11 = *(float *)(in_RDI + 0x27c);
      fVar12 = *(float *)(in_RDI + 0x284);
      fVar13 = *(float *)(in_RDI + 0x288);
      fVar14 = *(float *)(in_RDI + 0x28c);
      fVar15 = *(float *)(in_RDI + 0x294);
      fVar16 = *(float *)(in_RDI + 0x298);
      fVar17 = *(float *)(in_RDI + 0x29c);
      *(float *)(lVar6 + 0x10) =
           fVar26 * *(float *)(in_RDI + 0x290) +
           fVar25 * *(float *)(in_RDI + 0x270) + fVar28 * *(float *)(in_RDI + 0x280) +
           *(float *)(lVar6 + 0x10);
      *(float *)(lVar6 + 0x14) =
           fVar26 * fVar15 + fVar25 * fVar27 + fVar28 * fVar12 + *(float *)(lVar6 + 0x14);
      *(float *)(lVar6 + 0x18) =
           fVar26 * fVar16 + fVar25 * fVar1 + fVar28 * fVar13 + *(float *)(lVar6 + 0x18);
      *(float *)(lVar6 + 0x1c) =
           fVar26 * fVar17 + fVar25 * fVar11 + fVar28 * fVar14 + *(float *)(lVar6 + 0x1c);
    }
  }
  fVar25 = param_1 * *(float *)(in_RDI + 0x31c);
  *(float *)(in_RDI + 0x31c) = fVar25;
  if (fVar25 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      lVar5 = *(long *)(lVar5 + 0x48);
      fVar26 = *(float *)(in_RDI + 0x2f4);
      fVar27 = *(float *)(in_RDI + 0x2f8);
      fVar28 = *(float *)(in_RDI + 0x2fc);
      *(float *)(lVar5 + 0x10) = *(float *)(lVar5 + 0x10) - fVar25 * *(float *)(in_RDI + 0x2f0);
      *(float *)(lVar5 + 0x14) = *(float *)(lVar5 + 0x14) - fVar25 * fVar26;
      *(float *)(lVar5 + 0x18) = *(float *)(lVar5 + 0x18) - fVar25 * fVar27;
      *(float *)(lVar5 + 0x1c) = *(float *)(lVar5 + 0x1c) - fVar25 * fVar28;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      lVar4 = *(long *)(lVar4 + 0x48);
      fVar26 = *(float *)(in_RDI + 0x304);
      fVar27 = *(float *)(in_RDI + 0x308);
      fVar28 = *(float *)(in_RDI + 0x30c);
      *(float *)(lVar4 + 0x10) = fVar25 * *(float *)(in_RDI + 0x300) + *(float *)(lVar4 + 0x10);
      *(float *)(lVar4 + 0x14) = fVar25 * fVar26 + *(float *)(lVar4 + 0x14);
      *(float *)(lVar4 + 0x18) = fVar25 * fVar27 + *(float *)(lVar4 + 0x18);
      *(float *)(lVar4 + 0x1c) = fVar25 * fVar28 + *(float *)(lVar4 + 0x1c);
      return;
    }
  }
  return;
}



/* JPH::HingeConstraintSettings::GetRTTI() const */

undefined1 * JPH::HingeConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti,
                      "HingeConstraintSettings",0xd0,
                      GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti;
}



/* JPH::HingeConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::HingeConstraint::DrawConstraint(HingeConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_58;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  fVar10 = (float)puVar1[2];
  fVar9 = (float)puVar1[3];
  fVar5 = (float)((ulong)puVar1[2] >> 0x20);
  fVar13 = fVar10 + fVar10;
  fVar19 = fVar5 + fVar5;
  fVar6 = (float)((ulong)puVar1[3] >> 0x20);
  fVar8 = *(float *)(puVar1 + 1);
  fVar11 = fVar6 * (fVar9 + fVar9);
  fVar21 = fVar9 * (fVar9 + fVar9);
  fVar15 = fVar9 * fVar13 + fVar19 * fVar6;
  fVar18 = fVar9 * fVar13 - fVar19 * fVar6;
  fVar24 = fVar9 * fVar19 - fVar13 * fVar6;
  fVar14 = fVar13 * fVar6 + fVar9 * fVar19;
  fVar16 = (_LC1 - fVar10 * fVar13) - fVar5 * fVar19;
  fVar25 = (_LC1 - fVar21) - fVar10 * fVar13;
  fVar17 = fVar5 * fVar13 - fVar11;
  fVar11 = fVar11 + fVar5 * fVar13;
  fVar10 = (float)puVar2[2];
  fVar9 = (float)((ulong)puVar2[2] >> 0x20);
  fVar22 = fVar9 + fVar9;
  fVar21 = (_LC1 - fVar5 * fVar19) - fVar21;
  fVar19 = fVar10 + fVar10;
  fVar6 = (float)puVar2[3];
  fVar13 = (float)((ulong)puVar2[3] >> 0x20);
  fVar23 = fVar6 * (fVar6 + fVar6);
  fVar20 = fVar13 * (fVar6 + fVar6);
  fVar28 = fVar6 * fVar19 + fVar22 * fVar13;
  fVar26 = (_LC1 - fVar10 * fVar19) - fVar9 * fVar22;
  fVar30 = fVar6 * fVar22 - fVar19 * fVar13;
  fVar7 = fVar19 * fVar13 + fVar6 * fVar22;
  uVar3 = *puVar2;
  fVar5 = *(float *)(puVar2 + 1);
  fVar27 = fVar9 * fVar19 - fVar20;
  fVar20 = fVar9 * fVar19 + fVar20;
  fVar29 = (_LC1 - fVar23) - fVar10 * fVar19;
  fVar23 = (_LC1 - fVar9 * fVar22) - fVar23;
  fVar12 = fVar6 * fVar19 - fVar22 * fVar13;
  fVar9 = *(float *)(this + 0x40);
  fVar6 = *(float *)(this + 0x44);
  fVar13 = *(float *)(this + 0x48);
  local_98._0_4_ = (float)*puVar1;
  local_98._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_58 = CONCAT44(fVar13 * fVar24 + fVar9 * fVar11 + fVar6 * fVar25 + local_98._4_4_,
                      fVar13 * fVar15 + fVar9 * fVar21 + fVar6 * fVar17 + (float)local_98);
  JPH::DebugRenderer::DrawMarker(local_58,param_1,(undefined4)Color::sRed);
  fVar10 = *(float *)(this + 0xc);
  fVar19 = fVar10 * *(float *)(this + 0x60) + *(float *)(this + 0x40);
  fVar22 = fVar10 * *(float *)(this + 100) + *(float *)(this + 0x44);
  fVar10 = fVar10 * *(float *)(this + 0x68) + *(float *)(this + 0x48);
  local_98 = CONCAT44(fVar10 * fVar24 + fVar19 * fVar11 + fVar22 * fVar25 + local_98._4_4_,
                      fVar10 * fVar15 + fVar19 * fVar21 + fVar22 * fVar17 + (float)local_98);
  uStack_90 = CONCAT44(fVar10 * 0.0 + fVar19 * 0.0 + fVar22 * 0.0 + 1.0,
                       fVar10 * fVar16 + fVar19 * fVar18 + fVar22 * fVar14 + fVar8);
  (**(code **)(*(long *)param_1 + 0x10))
            (local_58,CONCAT44(fVar13 * 0.0 + fVar9 * 0.0 + fVar6 * 0.0 + 1.0,
                               fVar13 * fVar16 + fVar9 * fVar18 + fVar6 * fVar14 + fVar8),local_98,
             uStack_90,param_1,(undefined4)Color::sRed);
  fVar10 = *(float *)(this + 0x50);
  fVar8 = *(float *)(this + 0x54);
  fVar9 = *(float *)(this + 0x58);
  local_a8._0_4_ = (float)uVar3;
  local_a8._4_4_ = (float)((ulong)uVar3 >> 0x20);
  local_98 = CONCAT44(fVar9 * fVar30 + fVar10 * fVar20 + fVar8 * fVar29 + local_a8._4_4_,
                      fVar9 * fVar28 + fVar10 * fVar23 + fVar8 * fVar27 + (float)local_a8);
  uVar3 = local_98;
  uStack_90 = CONCAT44(fVar9 * 0.0 + fVar10 * 0.0 + fVar8 * 0.0 + 1.0,
                       fVar9 * fVar26 + fVar10 * fVar12 + fVar8 * fVar7 + fVar5);
  uVar4 = uStack_90;
  JPH::DebugRenderer::DrawMarker(local_98,param_1,(undefined4)Color::sGreen);
  fVar10 = *(float *)(this + 0xc);
  fVar8 = fVar10 * *(float *)(this + 0x70) + *(float *)(this + 0x50);
  fVar9 = fVar10 * *(float *)(this + 0x74) + *(float *)(this + 0x54);
  fVar10 = fVar10 * *(float *)(this + 0x78) + *(float *)(this + 0x58);
  local_98 = CONCAT44(fVar10 * fVar30 + fVar8 * fVar20 + fVar9 * fVar29 + local_a8._4_4_,
                      fVar10 * fVar28 + fVar8 * fVar23 + fVar9 * fVar27 + (float)local_a8);
  uStack_90 = CONCAT44(fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0 + 1.0,
                       fVar10 * fVar26 + fVar8 * fVar12 + fVar9 * fVar7 + fVar5);
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar3,uVar4,local_98,uStack_90,param_1,(undefined4)Color::sGreen);
  fVar10 = *(float *)(this + 0xc);
  fVar8 = fVar10 * *(float *)(this + 0x90) + *(float *)(this + 0x50);
  fVar9 = fVar10 * *(float *)(this + 0x94) + *(float *)(this + 0x54);
  fVar10 = fVar10 * *(float *)(this + 0x98) + *(float *)(this + 0x58);
  local_a8 = CONCAT44(fVar10 * fVar30 + fVar8 * fVar20 + fVar9 * fVar29 + local_a8._4_4_,
                      fVar10 * fVar28 + fVar8 * fVar23 + fVar9 * fVar27 + (float)local_a8);
  uStack_a0 = CONCAT44(fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0 + 1.0,
                       fVar10 * fVar26 + fVar8 * fVar12 + fVar9 * fVar7 + fVar5);
                    /* WARNING: Could not recover jumptable at 0x00101a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar3,uVar4,local_a8,uStack_a0,param_1,(undefined4)Color::sWhite);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::SolveVelocityConstraint(float) */

uint __thiscall JPH::HingeConstraint::SolveVelocityConstraint(HingeConstraint *this,float param_1)

{
  Body BVar1;
  Body BVar2;
  Body *pBVar3;
  Body *pBVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  float fVar16;
  undefined1 auVar17 [12];
  float fVar18;
  
  fVar18 = *(float *)(this + 0x340);
  pBVar3 = *(Body **)(this + 0x30);
  pBVar4 = *(Body **)(this + 0x28);
  bVar11 = 0;
  if (fVar18 != 0.0) {
    if (*(int *)(this + 0xe8) == 0) {
      fVar12 = param_1 * *(float *)(this + 200);
      BVar1 = pBVar3[0x78];
      auVar17 = SUB1612((undefined1  [16])0x0,0);
      lVar5 = *(long *)(pBVar3 + 0x48);
      if (BVar1 != (Body)0x0) {
        auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
      }
      BVar2 = pBVar4[0x78];
      lVar6 = *(long *)(pBVar4 + 0x48);
      auVar15 = SUB1612((undefined1  [16])0x0,0);
      if (BVar2 != (Body)0x0) {
        auVar15 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
      }
      fVar14 = *(float *)(this + 0x34c);
      fVar13 = (((auVar15._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x108) +
                (auVar15._4_4_ - auVar17._4_4_) *
                (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20) +
                (auVar15._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x100) + 0.0) -
               (*(float *)(this + 0x348) * fVar14 + *(float *)(this + 0x344))) * fVar18 + fVar14;
      fVar18 = (float)((uint)fVar12 ^ _LC42);
      if ((float)((uint)fVar12 ^ _LC42) <= fVar13) {
        fVar18 = fVar13;
      }
      if (fVar18 <= fVar12) {
        fVar12 = fVar18;
      }
      *(float *)(this + 0x34c) = fVar12;
      fVar12 = fVar12 - fVar14;
    }
    else {
      bVar11 = 0;
      if (1 < *(int *)(this + 0xe8) - 1U) goto LAB_00101a82;
      BVar1 = pBVar3[0x78];
      lVar5 = *(long *)(pBVar3 + 0x48);
      auVar17 = SUB1612((undefined1  [16])0x0,0);
      if (BVar1 != (Body)0x0) {
        auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
      }
      BVar2 = pBVar4[0x78];
      lVar6 = *(long *)(pBVar4 + 0x48);
      auVar15 = SUB1612((undefined1  [16])0x0,0);
      if (BVar2 != (Body)0x0) {
        auVar15 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
      }
      fVar14 = *(float *)(this + 0x34c);
      fVar12 = (((auVar15._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x108) +
                (auVar15._4_4_ - auVar17._4_4_) *
                (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20) +
                (auVar15._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x100) + 0.0) -
               (*(float *)(this + 0x348) * fVar14 + *(float *)(this + 0x344))) * fVar18 + fVar14;
      fVar18 = *(float *)(this + 0xe0) * param_1;
      if (*(float *)(this + 0xe0) * param_1 <= fVar12) {
        fVar18 = fVar12;
      }
      fVar12 = param_1 * *(float *)(this + 0xe4);
      if (fVar18 <= param_1 * *(float *)(this + 0xe4)) {
        fVar12 = fVar18;
      }
      *(float *)(this + 0x34c) = fVar12;
      fVar12 = fVar12 - fVar14;
    }
    bVar11 = 0;
    if (fVar12 != 0.0) {
      if (BVar2 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x324);
        fVar14 = *(float *)(this + 0x328);
        fVar13 = *(float *)(this + 0x32c);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar12 * *(float *)(this + 800);
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar12 * fVar18;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar12 * fVar14;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar12 * fVar13;
      }
      if (BVar1 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x334);
        fVar14 = *(float *)(this + 0x338);
        fVar13 = *(float *)(this + 0x33c);
        *(float *)(lVar5 + 0x10) = fVar12 * *(float *)(this + 0x330) + *(float *)(lVar5 + 0x10);
        *(float *)(lVar5 + 0x14) = fVar12 * fVar18 + *(float *)(lVar5 + 0x14);
        *(float *)(lVar5 + 0x18) = fVar12 * fVar14 + *(float *)(lVar5 + 0x18);
        *(float *)(lVar5 + 0x1c) = fVar12 * fVar13 + *(float *)(lVar5 + 0x1c);
      }
      bVar11 = 1;
    }
  }
LAB_00101a82:
  bVar7 = PointConstraintPart::SolveVelocityConstraint
                    ((PointConstraintPart *)(this + 0x110),pBVar4,pBVar3);
  uVar8 = HingeRotationConstraintPart::SolveVelocityConstraint
                    ((HingeRotationConstraintPart *)(this + 0x200),pBVar4,pBVar3);
  uVar9 = 0;
  if (*(float *)(this + 0x310) == 0.0) goto LAB_00101acb;
  fVar18 = *(float *)(this + 0xb8);
  fVar12 = _LC6._4_4_;
  fVar14 = (float)_LC6;
  if (*(float *)(this + 0xb4) != fVar18) {
    fVar13 = *(float *)(this + 0xf4);
    fVar16 = fVar13 - *(float *)(this + 0xb4);
    if (fVar16 < _LC53) {
      do {
        fVar16 = fVar16 + _LC10;
      } while (fVar16 < _LC53);
      if (fVar13 - fVar18 < _LC53) goto LAB_00101c52;
LAB_00101ec6:
      for (fVar13 = fVar13 - fVar18; __LC54 < fVar13; fVar13 = fVar13 - _LC10) {
      }
    }
    else {
      for (; __LC54 < fVar16; fVar16 = fVar16 - _LC10) {
      }
      if (_LC53 <= fVar13 - fVar18) goto LAB_00101ec6;
LAB_00101c52:
      fVar13 = fVar13 - fVar18;
      do {
        fVar13 = fVar13 + _LC10;
      } while (fVar13 < _LC53);
    }
    if ((float)((uint)fVar13 & _LC46) <= (float)((uint)fVar16 & _LC46)) {
      fVar12 = 0.0;
    }
    else {
      fVar14 = 0.0;
    }
  }
  BVar1 = pBVar3[0x78];
  auVar17 = SUB1612((undefined1  [16])0x0,0);
  lVar5 = *(long *)(pBVar3 + 0x48);
  if (BVar1 != (Body)0x0) {
    auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
  }
  BVar2 = pBVar4[0x78];
  lVar6 = *(long *)(pBVar4 + 0x48);
  auVar15 = SUB1612((undefined1  [16])0x0,0);
  if (BVar2 != (Body)0x0) {
    auVar15 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
  }
  fVar18 = *(float *)(this + 0x31c);
  fVar13 = (((auVar15._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x108) +
            (auVar15._4_4_ - auVar17._4_4_) * (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20)
            + (auVar15._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x100) + 0.0) -
           (*(float *)(this + 0x318) * fVar18 + *(float *)(this + 0x314))) *
           *(float *)(this + 0x310) + fVar18;
  if ((fVar14 <= fVar13) && (fVar14 = fVar12, fVar13 <= fVar12)) {
    fVar14 = fVar13;
  }
  *(float *)(this + 0x31c) = fVar14;
  fVar14 = fVar14 - fVar18;
  uVar9 = 0;
  if (fVar14 != 0.0) {
    if (BVar2 == (Body)0x2) {
      fVar18 = *(float *)(this + 0x2f4);
      fVar12 = *(float *)(this + 0x2f8);
      fVar13 = *(float *)(this + 0x2fc);
      *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar14 * *(float *)(this + 0x2f0);
      *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar14 * fVar18;
      *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar14 * fVar12;
      *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar14 * fVar13;
    }
    if (BVar1 == (Body)0x2) {
      fVar18 = *(float *)(this + 0x304);
      fVar12 = *(float *)(this + 0x308);
      fVar13 = *(float *)(this + 0x30c);
      *(float *)(lVar5 + 0x10) = fVar14 * *(float *)(this + 0x300) + *(float *)(lVar5 + 0x10);
      *(float *)(lVar5 + 0x14) = fVar14 * fVar18 + *(float *)(lVar5 + 0x14);
      *(float *)(lVar5 + 0x18) = fVar14 * fVar12 + *(float *)(lVar5 + 0x18);
      *(float *)(lVar5 + 0x1c) = fVar14 * fVar13 + *(float *)(lVar5 + 0x1c);
    }
    uVar9 = 1;
  }
LAB_00101acb:
  uVar10 = (uint)(bVar11 | bVar7);
  if ((bVar11 | bVar7) == 0) {
    uVar10 = uVar8 | uVar9;
  }
  return uVar10;
}



/* JPH::GetRTTIOfType(JPH::HingeConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(HingeConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti,
                      "HingeConstraintSettings",0xd0,
                      GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::HingeConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      HingeConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::HingeConstraintSettings*)::rtti;
}



/* JPH::HingeConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::HingeConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((HingeConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::HingeConstraint(JPH::Body&, JPH::Body&, JPH::HingeConstraintSettings
   const&) */

void __thiscall
JPH::HingeConstraint::HingeConstraint
          (HingeConstraint *this,Body *param_1,Body *param_2,HingeConstraintSettings *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar2,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  *(HingeConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0xc0) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0xa4);
  this[0xbc] = (HingeConstraint)0x0;
  uVar7 = *(undefined8 *)(param_3 + 0xa8);
  uVar8 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 200) = uVar1;
  *(undefined ***)this = &PTR__HingeConstraint_001071a8;
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0xcc) = uVar7;
  *(undefined8 *)(this + 0xd4) = uVar8;
  uVar7 = *(undefined8 *)(param_3 + 0xb4);
  uVar8 = *(undefined8 *)(param_3 + 0xbc);
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
  fVar3 = _LC53;
  uVar5 = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xd8) = uVar7;
  *(undefined8 *)(this + 0xe0) = uVar8;
  *(undefined8 *)(this + 0xb4) = uVar5;
  this[0xb0] = (HingeConstraint)(fVar3 < (float)uVar5 && (float)((ulong)uVar5 >> 0x20) < __LC54);
  auVar38 = RotationEulerConstraintPart::sGetInvInitialOrientationXZ
                      (*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),
                       *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                       *(undefined8 *)(param_3 + 0x80),*(undefined8 *)(param_3 + 0x88),
                       *(undefined8 *)(param_3 + 0x70),*(undefined8 *)(param_3 + 0x78));
  iVar4 = *(int *)(param_3 + 0x28);
  *(undefined1 (*) [16])(this + 0xa0) = auVar38;
  fVar3 = _LC1;
  if (iVar4 == 1) {
    fVar6 = *(float *)(param_1 + 0x10);
    fVar16 = *(float *)param_1;
    fVar9 = *(float *)(param_1 + 4);
    fVar10 = *(float *)(param_1 + 8);
    fVar17 = (float)((uint)fVar6 ^ __LC55);
    fVar19 = (float)(*(uint *)(param_1 + 0x14) ^ _UNK_00107304);
    fVar20 = (float)(*(uint *)(param_1 + 0x18) ^ _UNK_00107308);
    fVar21 = (float)(*(uint *)(param_1 + 0x1c) ^ _UNK_0010730c);
    fVar11 = (float)(__LC55 ^ *(uint *)(param_2 + 0x10));
    fVar12 = (float)(_UNK_00107304 ^ *(uint *)(param_2 + 0x14));
    fVar13 = (float)(_UNK_00107308 ^ *(uint *)(param_2 + 0x18));
    fVar14 = (float)(_UNK_0010730c ^ *(uint *)(param_2 + 0x1c));
    fVar26 = fVar17 + fVar17;
    fVar36 = fVar19 + fVar19;
    fVar15 = fVar21 * (fVar20 + fVar20);
    fVar37 = fVar20 * (fVar20 + fVar20);
    fVar29 = fVar20 * fVar26 + fVar36 * fVar21;
    fVar18 = fVar20 * fVar36 - fVar26 * fVar21;
    fVar27 = fVar26 * fVar21 + fVar20 * fVar36;
    fVar31 = (_LC1 - fVar17 * fVar26) - fVar19 * fVar36;
    fVar32 = fVar19 * fVar26 - fVar15;
    fVar15 = fVar19 * fVar26 + fVar15;
    fVar23 = fVar20 * fVar26 - fVar36 * fVar21;
    fVar21 = (_LC1 - fVar37) - fVar17 * fVar26;
    fVar37 = (_LC1 - fVar19 * fVar36) - fVar37;
    fVar17 = *(float *)(param_3 + 0x30);
    fVar19 = *(float *)(param_3 + 0x34);
    fVar20 = *(float *)(param_3 + 0x38);
    *(float *)(this + 0x40) =
         fVar20 * fVar29 + fVar17 * fVar37 + fVar19 * fVar32 +
         (0.0 - (fVar16 * fVar37 + fVar9 * fVar32 + fVar10 * fVar29));
    *(float *)(this + 0x44) =
         fVar20 * fVar18 + fVar17 * fVar15 + fVar19 * fVar21 +
         (0.0 - (fVar16 * fVar15 + fVar9 * fVar21 + fVar10 * fVar18));
    *(float *)(this + 0x48) =
         fVar20 * fVar31 + fVar17 * fVar23 + fVar19 * fVar27 +
         (0.0 - (fVar16 * fVar23 + fVar9 * fVar27 + fVar10 * fVar31));
    *(float *)(this + 0x4c) = fVar20 * 0.0 + fVar17 * 0.0 + fVar19 * 0.0 + 1.0;
    fVar16 = *(float *)(param_3 + 0x40);
    fVar9 = *(float *)(param_3 + 0x44);
    fVar10 = *(float *)(param_3 + 0x48);
    auVar33._0_4_ = fVar16 * fVar37 + fVar9 * fVar32 + fVar10 * fVar29;
    auVar33._4_4_ = fVar16 * fVar15 + fVar9 * fVar21 + fVar10 * fVar18;
    auVar33._8_4_ = fVar16 * fVar23 + fVar9 * fVar27 + fVar10 * fVar31;
    auVar33._12_4_ = fVar16 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0;
    auVar24._0_4_ =
         SQRT(auVar33._8_4_ * auVar33._8_4_ +
              auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_ + 0.0);
    auVar24._4_4_ = auVar24._0_4_;
    auVar24._8_4_ = auVar24._0_4_;
    auVar24._12_4_ = auVar24._0_4_;
    auVar34 = divps(auVar33,auVar24);
    fVar16 = *(float *)(param_3 + 0x50);
    fVar9 = *(float *)(param_3 + 0x54);
    fVar10 = *(float *)(param_3 + 0x58);
    auVar30._0_4_ = fVar16 * fVar37 + fVar9 * fVar32 + fVar10 * fVar29;
    auVar30._4_4_ = fVar16 * fVar15 + fVar9 * fVar21 + fVar10 * fVar18;
    auVar30._8_4_ = fVar16 * fVar23 + fVar9 * fVar27 + fVar10 * fVar31;
    auVar30._12_4_ = fVar16 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0;
    *(undefined1 (*) [16])(this + 0x60) = auVar34;
    fVar19 = fVar12 + fVar12;
    fVar16 = *(float *)param_2;
    fVar9 = *(float *)(param_2 + 4);
    fVar10 = *(float *)(param_2 + 8);
    auVar25._0_4_ =
         SQRT(auVar30._8_4_ * auVar30._8_4_ +
              auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_ + 0.0);
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar34 = divps(auVar30,auVar25);
    fVar20 = fVar13 * (fVar13 + fVar13);
    fVar21 = (fVar13 + fVar13) * fVar14;
    *(undefined1 (*) [16])(this + 0x80) = auVar34;
    fVar17 = fVar11 + fVar11;
    fVar27 = fVar13 * fVar17 - fVar19 * fVar14;
    fVar15 = fVar13 * fVar17 + fVar19 * fVar14;
    fVar29 = fVar13 * fVar19 + fVar17 * fVar14;
    fVar18 = fVar13 * fVar19 - fVar17 * fVar14;
    fVar26 = (fVar3 - fVar11 * fVar17) - fVar12 * fVar19;
    fVar37 = fVar12 * fVar17 + fVar21;
    fVar21 = fVar12 * fVar17 - fVar21;
    fVar23 = (fVar3 - fVar20) - fVar11 * fVar17;
    fVar20 = (fVar3 - fVar12 * fVar19) - fVar20;
    fVar3 = *(float *)(param_3 + 0x60);
    fVar17 = *(float *)(param_3 + 100);
    fVar19 = *(float *)(param_3 + 0x68);
    *(float *)(this + 0x50) =
         fVar19 * fVar15 + fVar3 * fVar20 + fVar17 * fVar21 +
         (0.0 - (fVar10 * fVar15 + fVar16 * fVar20 + fVar9 * fVar21));
    *(float *)(this + 0x54) =
         fVar19 * fVar18 + fVar3 * fVar37 + fVar17 * fVar23 +
         (0.0 - (fVar10 * fVar18 + fVar16 * fVar37 + fVar9 * fVar23));
    *(float *)(this + 0x58) =
         fVar19 * fVar26 + fVar3 * fVar27 + fVar17 * fVar29 +
         (0.0 - (fVar10 * fVar26 + fVar16 * fVar27 + fVar9 * fVar29));
    *(float *)(this + 0x5c) = fVar19 * 0.0 + fVar3 * 0.0 + fVar17 * 0.0 + 1.0;
    fVar3 = *(float *)(param_3 + 0x70);
    fVar16 = *(float *)(param_3 + 0x74);
    fVar9 = *(float *)(param_3 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    auVar35._0_4_ = fVar3 * fVar20 + fVar16 * fVar21 + fVar9 * fVar15;
    auVar35._4_4_ = fVar3 * fVar37 + fVar16 * fVar23 + fVar9 * fVar18;
    auVar35._8_4_ = fVar3 * fVar27 + fVar16 * fVar29 + fVar9 * fVar26;
    auVar35._12_4_ = fVar3 * 0.0 + fVar16 * 0.0 + fVar9 * 0.0;
    fVar10 = (float)uVar5;
    auVar22._0_4_ =
         SQRT(auVar35._8_4_ * auVar35._8_4_ +
              auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_ + 0.0);
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = auVar22._0_4_;
    auVar22._12_4_ = auVar22._0_4_;
    auVar34 = divps(auVar35,auVar22);
    fVar3 = *(float *)(param_3 + 0x80);
    fVar16 = *(float *)(param_3 + 0x84);
    fVar9 = *(float *)(param_3 + 0x88);
    auVar28._0_4_ = fVar3 * fVar20 + fVar16 * fVar21 + fVar9 * fVar15;
    auVar28._4_4_ = fVar3 * fVar37 + fVar16 * fVar23 + fVar9 * fVar18;
    auVar28._8_4_ = fVar3 * fVar27 + fVar16 * fVar29 + fVar9 * fVar26;
    auVar28._12_4_ = fVar3 * 0.0 + fVar16 * 0.0 + fVar9 * 0.0;
    *(undefined1 (*) [16])(this + 0x70) = auVar34;
    fVar16 = auVar38._8_4_;
    fVar3 = *(float *)(param_1 + 0x14);
    fVar15 = (float)((ulong)uVar5 >> 0x20);
    auVar34._0_4_ =
         SQRT(auVar28._8_4_ * auVar28._8_4_ +
              auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_ + 0.0);
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar34 = divps(auVar28,auVar34);
    fVar9 = auVar38._12_4_;
    *(undefined1 (*) [16])(this + 0x90) = auVar34;
    fVar17 = auVar38._0_4_;
    fVar19 = auVar38._4_4_;
    fVar18 = (fVar16 * fVar12 + fVar17 * fVar14 + fVar9 * fVar11) - fVar19 * fVar13;
    fVar21 = fVar17 * fVar13 + (fVar19 * fVar14 - fVar16 * fVar11) + fVar9 * fVar12;
    fVar20 = ((fVar16 * fVar14 + fVar19 * fVar11) - fVar17 * fVar12) + fVar9 * fVar13;
    fVar16 = ((fVar9 * fVar14 - fVar17 * fVar11) - fVar12 * fVar19) - fVar16 * fVar13;
    *(float *)(this + 0xa0) = (fVar6 * fVar16 + fVar18 * fVar15 + fVar10 * fVar21) - fVar20 * fVar3;
    *(float *)(this + 0xa4) = (fVar3 * fVar16 - fVar18 * fVar10) + fVar15 * fVar21 + fVar20 * fVar6;
    *(float *)(this + 0xa8) =
         ((fVar10 * fVar16 + fVar18 * fVar3) - fVar6 * fVar21) + fVar20 * fVar15;
    *(float *)(this + 0xac) =
         ((fVar15 * fVar16 - fVar18 * fVar6) - fVar3 * fVar21) - fVar20 * fVar10;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(this + 0x68) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(this + 0x88) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_3 + 0x70);
    *(undefined8 *)(this + 0x78) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x88);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_3 + 0x80);
    *(undefined8 *)(this + 0x98) = uVar5;
  }
  *(undefined8 *)(this + 0xbc) = *(undefined8 *)(param_3 + 0x98);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_3 + 0xa0);
  return;
}



/* JPH::HingeConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

HingeConstraint * __thiscall
JPH::HingeConstraintSettings::Create(HingeConstraintSettings *this,Body *param_1,Body *param_2)

{
  HingeConstraint *this_00;
  
  this_00 = (HingeConstraint *)(*Allocate)(0x350);
  HingeConstraint::HingeConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::GetCurrentAngle() const */

ulong __thiscall JPH::HingeConstraint::GetCurrentAngle(HingeConstraint *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar12 = *(float *)(this + 0x68);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
  uVar4 = *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
  fVar6 = (float)*(undefined8 *)(this + 0xa8);
  uVar1 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  fVar22 = (float)*(undefined8 *)(this + 0xa0);
  local_28 = (float)uVar3;
  fStack_24 = (float)((ulong)uVar3 >> 0x20);
  fStack_20 = (float)uVar4;
  fStack_1c = (float)((ulong)uVar4 >> 0x20);
  fVar17 = (float)((uint)local_28 ^ __LC55);
  fVar18 = (float)((uint)fStack_24 ^ _UNK_00107304);
  fVar19 = (float)((uint)fStack_20 ^ _UNK_00107308);
  fVar20 = (float)((uint)fStack_1c ^ _UNK_0010730c);
  fVar5 = (float)uVar1;
  fVar9 = (float)uVar2;
  fVar32 = (float)((ulong)uVar1 >> 0x20);
  fVar33 = (float)((ulong)uVar2 >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20);
  fVar25 = (fVar33 * fVar22 + fVar5 * fVar7 + fVar32 * fVar6) - fVar9 * fVar34;
  fVar30 = (fVar33 * fVar34 - fVar5 * fVar6) + fVar32 * fVar7 + fVar9 * fVar22;
  fVar21 = ((fVar33 * fVar6 + fVar5 * fVar34) - fVar32 * fVar22) + fVar9 * fVar7;
  fVar9 = ((fVar33 * fVar7 - fVar5 * fVar22) - fVar32 * fVar34) - fVar9 * fVar6;
  fVar5 = ((fVar9 * fVar20 - fVar17 * fVar25) - fVar30 * fVar18) - fVar21 * fVar19;
  if (fVar5 != 0.0) {
    fVar22 = (float)*(undefined8 *)(this + 0x60);
    fVar32 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
    fVar6 = (local_28 * 0.0 + fStack_1c * fVar22 + fStack_24 * fVar12) - fVar32 * fStack_20;
    fVar34 = fStack_24 * 0.0 + (fVar32 * fStack_1c - local_28 * fVar12) + fStack_20 * fVar22;
    fVar7 = ((fStack_1c * fVar12 + local_28 * fVar32) - fStack_24 * fVar22) + fStack_20 * 0.0;
    fVar12 = ((fStack_1c * 0.0 - local_28 * fVar22) - fStack_24 * fVar32) - fStack_20 * fVar12;
    auVar10._4_4_ = _LC63;
    auVar10._0_4_ = _LC63;
    auVar10._8_4_ = _LC63;
    auVar10._12_4_ = _LC63;
    fVar5 = ((fVar7 * fVar20 + ((fVar12 * fVar19 + fVar6 * fVar18) - fVar34 * fVar17)) *
             (fVar21 * fVar20 + ((fVar9 * fVar19 + fVar25 * fVar18) - fVar17 * fVar30)) +
            ((fVar12 * fVar18 - fVar6 * fVar19) + fVar34 * fVar20 + fVar7 * fVar17) *
            (fVar30 * fVar20 + (fVar9 * fVar18 - fVar25 * fVar19) + fVar17 * fVar21) +
            ((fVar12 * fVar17 + fVar6 * fVar20 + fVar34 * fVar19) - fVar7 * fVar18) *
            ((fVar25 * fVar20 + fVar17 * fVar9 + fVar30 * fVar19) - fVar21 * fVar18) + 0.0) / fVar5;
    auVar8._0_4_ = (float)((uint)fVar5 ^ _LC57 & (uint)fVar5);
    auVar8._4_4_ = (float)((uint)fVar5 ^ _LC57 & (uint)fVar5);
    auVar8._8_4_ = (float)((uint)fVar5 ^ _LC57 & (uint)fVar5);
    auVar8._12_4_ = (float)((uint)fVar5 ^ _LC57 & (uint)fVar5);
    auVar31._0_4_ = _LC1 + auVar8._0_4_;
    auVar31._4_4_ = _LC1 + auVar8._4_4_;
    auVar31._8_4_ = _LC1 + auVar8._8_4_;
    auVar31._12_4_ = _LC1 + auVar8._12_4_;
    auVar23._0_4_ = auVar8._0_4_ + _LC63;
    auVar23._4_4_ = auVar8._4_4_ + _LC63;
    auVar23._8_4_ = auVar8._8_4_ + _LC63;
    auVar23._12_4_ = auVar8._12_4_ + _LC63;
    auVar11 = divps(auVar10,auVar8);
    uVar26 = (int)-(uint)(_LC59 < auVar8._0_4_) >> 0x1f;
    uVar27 = (int)-(uint)(_LC59 < auVar8._4_4_) >> 0x1f;
    uVar28 = (int)-(uint)(_LC59 < auVar8._8_4_) >> 0x1f;
    uVar29 = (int)-(uint)(_LC59 < auVar8._12_4_) >> 0x1f;
    uVar13 = (int)-(uint)(_LC61 < auVar8._0_4_) >> 0x1f;
    uVar14 = (int)-(uint)(_LC61 < auVar8._4_4_) >> 0x1f;
    uVar15 = (int)-(uint)(_LC61 < auVar8._8_4_) >> 0x1f;
    uVar16 = (int)-(uint)(_LC61 < auVar8._12_4_) >> 0x1f;
    auVar24 = divps(auVar23,auVar31);
    fVar12 = (float)(auVar11._0_4_ & uVar13 |
                    ~uVar13 & (auVar24._0_4_ & uVar26 | ~uVar26 & (uint)auVar8._0_4_));
    fVar9 = (float)(auVar11._4_4_ & uVar14 |
                   ~uVar14 & (auVar24._4_4_ & uVar27 | ~uVar27 & (uint)auVar8._4_4_));
    fVar6 = (float)(auVar11._8_4_ & uVar15 |
                   ~uVar15 & (auVar24._8_4_ & uVar28 | ~uVar28 & (uint)auVar8._8_4_));
    fVar7 = (float)(auVar11._12_4_ & uVar16 |
                   ~uVar16 & (auVar24._12_4_ & uVar29 | ~uVar29 & (uint)auVar8._12_4_));
    fVar22 = fVar12 * fVar12;
    fVar34 = fVar9 * fVar9;
    fVar17 = fVar6 * fVar6;
    fVar18 = fVar7 * fVar7;
    auVar11._0_4_ =
         (float)((uint)((((_LC69 * fVar22 + _LC71) * fVar22 + _LC73) * fVar22 + _LC75) * fVar22 *
                        fVar12 + fVar12 + (float)(uVar13 & _LC67 | ~uVar13 & uVar26 & _LC65)) ^
                _LC57 & (uint)fVar5);
    auVar11._4_4_ =
         (uint)((((_LC69 * fVar34 + _LC71) * fVar34 + _LC73) * fVar34 + _LC75) * fVar34 * fVar9 +
                fVar9 + (float)(uVar14 & _LC67 | ~uVar14 & uVar27 & _LC65)) ^ _LC57 & (uint)fVar5;
    auVar11._8_4_ =
         (uint)((((_LC69 * fVar17 + _LC71) * fVar17 + _LC73) * fVar17 + _LC75) * fVar17 * fVar6 +
                fVar6 + (float)(uVar15 & _LC67 | ~uVar15 & uVar28 & _LC65)) ^ _LC57 & (uint)fVar5;
    auVar11._12_4_ =
         (uint)((((_LC69 * fVar18 + _LC71) * fVar18 + _LC73) * fVar18 + _LC75) * fVar18 * fVar7 +
                fVar7 + (float)(uVar16 & _LC67 | ~uVar16 & uVar29 & _LC65)) ^ _LC57 & (uint)fVar5;
    auVar24._4_12_ = auVar11._4_12_;
    auVar24._0_4_ = auVar11._0_4_ + auVar11._0_4_;
    return auVar24._0_8_;
  }
  return (ulong)__LC54;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::SetLimits(float, float) */

void __thiscall JPH::HingeConstraint::SetLimits(HingeConstraint *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _LC53;
  *(ulong *)(this + 0xb4) = CONCAT44(param_2,param_1);
  this[0xb0] = (HingeConstraint)(fVar1 < param_1 && param_2 < __LC54);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::CalculateA1AndTheta() */

void __thiscall JPH::HingeConstraint::CalculateA1AndTheta(HingeConstraint *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (((this[0xb0] == (HingeConstraint)0x0) && (*(int *)(this + 0xe8) == 0)) &&
     (*(float *)(this + 200) <= 0.0)) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
  fVar13 = (float)*(undefined8 *)(this + 0xa8);
  fVar18 = (float)*(undefined8 *)(this + 0xa0);
  fVar15 = (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
  uVar1 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  local_38 = (float)uVar2;
  fStack_34 = (float)((ulong)uVar2 >> 0x20);
  fStack_30 = (float)uVar3;
  fStack_2c = (float)((ulong)uVar3 >> 0x20);
  fVar19 = (float)((ulong)*(undefined8 *)(this + 0xa0) >> 0x20);
  fVar6 = (float)((uint)local_38 ^ __LC55);
  fVar8 = (float)((uint)fStack_34 ^ _UNK_00107304);
  fVar9 = (float)((uint)fStack_30 ^ _UNK_00107308);
  fVar10 = (float)((uint)fStack_2c ^ _UNK_0010730c);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar12 = (float)uVar1;
  fVar11 = (float)((ulong)uVar1 >> 0x20);
  fVar21 = (float)uVar2;
  fVar24 = (float)((ulong)uVar2 >> 0x20);
  fVar25 = (fVar24 * fVar18 + fVar12 * fVar15 + fVar11 * fVar13) - fVar21 * fVar19;
  fVar23 = (fVar24 * fVar19 - fVar12 * fVar13) + fVar11 * fVar15 + fVar21 * fVar18;
  fVar17 = (float)*(undefined8 *)(this + 0x60);
  fVar4 = ((fVar24 * fVar15 - fVar12 * fVar18) - fVar11 * fVar19) - fVar21 * fVar13;
  fVar24 = ((fVar24 * fVar13 + fVar12 * fVar19) - fVar11 * fVar18) + fVar21 * fVar15;
  fVar12 = *(float *)(this + 100);
  fVar11 = ((fVar10 * fVar4 - fVar6 * fVar25) - fVar23 * fVar8) - fVar24 * fVar9;
  fVar15 = (local_38 * 0.0 + fStack_2c * fVar17 + *(float *)(this + 0x68) * fStack_34) -
           fStack_30 * fVar12;
  fVar18 = fStack_34 * 0.0 + (fStack_2c * fVar12 - *(float *)(this + 0x68) * local_38) +
           fStack_30 * fVar17;
  fVar13 = ((*(float *)(this + 0x68) * fStack_2c + local_38 * fVar12) - fStack_34 * fVar17) +
           fStack_30 * 0.0;
  fVar12 = ((fStack_2c * 0.0 - fVar17 * local_38) - fStack_34 * fVar12) -
           fStack_30 * *(float *)(this + 0x68);
  fVar19 = fVar13 * fVar6 + fVar18 * fVar10 + (fVar8 * fVar12 - fVar15 * fVar9);
  fVar21 = fVar13 * fVar10 + ((fVar9 * fVar12 + fVar15 * fVar8) - fVar18 * fVar6);
  fVar17 = (fVar18 * fVar9 + fVar6 * fVar12 + fVar15 * fVar10) - fVar13 * fVar8;
  *(float *)(this + 0x100) = fVar17;
  *(float *)(this + 0x104) = fVar19;
  *(float *)(this + 0x108) = fVar21;
  *(float *)(this + 0x10c) = ((fVar10 * fVar12 - fVar15 * fVar6) - fVar18 * fVar8) - fVar13 * fVar9;
  if (fVar11 != 0.0) {
    auVar20._4_4_ = _LC63;
    auVar20._0_4_ = _LC63;
    auVar20._8_4_ = _LC63;
    auVar20._12_4_ = _LC63;
    fVar11 = ((fVar24 * fVar10 + ((fVar25 * fVar8 + fVar4 * fVar9) - fVar23 * fVar6)) * fVar21 +
             ((fVar8 * fVar4 - fVar25 * fVar9) + fVar23 * fVar10 + fVar6 * fVar24) * fVar19 +
             ((fVar6 * fVar4 + fVar10 * fVar25 + fVar23 * fVar9) - fVar8 * fVar24) * fVar17 + 0.0) /
             fVar11;
    auVar5._0_4_ = (float)((uint)fVar11 ^ _LC57 & (uint)fVar11);
    auVar5._4_4_ = (float)((uint)fVar11 ^ _LC57 & (uint)fVar11);
    auVar5._8_4_ = (float)((uint)fVar11 ^ _LC57 & (uint)fVar11);
    auVar5._12_4_ = (float)((uint)fVar11 ^ _LC57 & (uint)fVar11);
    auVar22._0_4_ = _LC1 + auVar5._0_4_;
    auVar22._4_4_ = _LC1 + auVar5._4_4_;
    auVar22._8_4_ = _LC1 + auVar5._8_4_;
    auVar22._12_4_ = _LC1 + auVar5._12_4_;
    auVar14._0_4_ = auVar5._0_4_ + _LC63;
    auVar14._4_4_ = auVar5._4_4_ + _LC63;
    auVar14._8_4_ = auVar5._8_4_ + _LC63;
    auVar14._12_4_ = auVar5._12_4_ + _LC63;
    auVar20 = divps(auVar20,auVar5);
    uVar16 = (int)-(uint)(_LC59 < auVar5._0_4_) >> 0x1f;
    uVar7 = (int)-(uint)(_LC61 < auVar5._0_4_) >> 0x1f;
    auVar14 = divps(auVar14,auVar22);
    fVar12 = (float)(auVar20._0_4_ & uVar7 |
                    ~uVar7 & (auVar14._0_4_ & uVar16 | ~uVar16 & (uint)auVar5._0_4_));
    fVar17 = fVar12 * fVar12;
    fVar12 = (float)((uint)((((_LC69 * fVar17 + _LC71) * fVar17 + _LC73) * fVar17 + _LC75) * fVar17
                            * fVar12 + fVar12 + (float)(_LC67 & uVar7 | ~uVar7 & uVar16 & _LC65)) ^
                    _LC57 & (uint)fVar11);
    *(float *)(this + 0xf4) = fVar12 + fVar12;
    return;
  }
  *(undefined4 *)(this + 0xf4) = __LC54;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::CalculateRotationLimitsConstraintProperties(float) */

void __thiscall
JPH::HingeConstraint::CalculateRotationLimitsConstraintProperties
          (HingeConstraint *this,float param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if (this[0xb0] != (HingeConstraint)0x0) {
    fVar3 = *(float *)(this + 0xf4);
    if ((fVar3 <= *(float *)(this + 0xb4)) || (*(float *)(this + 0xb8) <= fVar3)) {
      fVar1 = *(float *)(this + 0xb8);
      fVar4 = fVar3 - *(float *)(this + 0xb4);
      if (fVar4 < _LC53) {
        do {
          fVar4 = fVar4 + _LC10;
        } while (fVar4 < _LC53);
      }
      else {
        for (; __LC54 < fVar4; fVar4 = fVar4 - _LC10) {
        }
      }
      if (_LC53 <= fVar3 - fVar1) {
        for (fVar3 = fVar3 - fVar1; __LC54 < fVar3; fVar3 = fVar3 - _LC10) {
        }
      }
      else {
        fVar3 = fVar3 - fVar1;
        do {
          fVar3 = fVar3 + _LC10;
        } while (fVar3 < _LC53);
      }
      uVar2 = -(uint)((float)(_LC46 & (uint)fVar3) <= (float)((uint)fVar4 & _LC46));
      AngleConstraintPart::CalculateConstraintPropertiesWithSettings
                (param_1,*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),0,
                 ~uVar2 & (uint)fVar4 | (uint)fVar3 & uVar2,*(undefined4 *)(this + 0xc0),
                 *(undefined4 *)(this + 0xc4),this + 0x2f0,*(undefined8 *)(this + 0x28),
                 *(undefined8 *)(this + 0x30),this[0xbc]);
      return;
    }
  }
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::SolvePositionConstraint(float, float) */

ulong __thiscall
JPH::HingeConstraint::SolvePositionConstraint(HingeConstraint *this,float param_1,float param_2)

{
  Body *pBVar1;
  Body *pBVar2;
  byte bVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pBVar1 = *(Body **)(this + 0x30);
  pBVar2 = *(Body **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar11 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar10 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar16 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar14 = fVar11 + fVar11;
  fVar19 = fVar16 + fVar16;
  fVar22 = fVar4 * (fVar4 + fVar4);
  fVar9 = fVar10 * (fVar4 + fVar4);
  local_88._4_4_ = fVar16 * fVar14 + fVar9;
  local_88._0_4_ = (_LC1 - fVar16 * fVar19) - fVar22;
  local_88._8_4_ = fVar4 * fVar14 - fVar19 * fVar10;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC1 - fVar22) - fVar11 * fVar14;
  local_78._0_4_ = fVar16 * fVar14 - fVar9;
  local_68 = CONCAT44(fVar4 * fVar19 - fVar14 * fVar10,fVar4 * fVar14 + fVar19 * fVar10);
  fVar9 = (float)*(undefined8 *)(pBVar2 + 0x18);
  local_78._8_4_ = fVar14 * fVar10 + fVar4 * fVar19;
  local_78._12_4_ = 0;
  fVar4 = (float)*(undefined8 *)(pBVar2 + 0x10);
  fVar22 = fVar4 + fVar4;
  fVar25 = fVar9 * (fVar9 + fVar9);
  local_58 = __LC44;
  uStack_50 = _UNK_001072b8;
  uStack_60 = (ulong)(uint)((_LC1 - fVar11 * fVar14) - fVar16 * fVar19);
  fVar16 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x18) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x10) >> 0x20);
  fVar14 = fVar11 + fVar11;
  fVar10 = fVar16 * (fVar9 + fVar9);
  local_c8._0_4_ = (_LC1 - fVar11 * fVar14) - fVar25;
  local_c8._4_4_ = fVar11 * fVar22 + fVar10;
  local_c8._8_4_ = fVar9 * fVar22 - fVar14 * fVar16;
  local_c8._12_4_ = 0;
  local_98 = __LC44;
  uStack_90 = _UNK_001072b8;
  local_b8._4_4_ = (_LC1 - fVar25) - fVar4 * fVar22;
  local_b8._0_4_ = fVar11 * fVar22 - fVar10;
  local_a8._4_4_ = fVar9 * fVar14 - fVar22 * fVar16;
  local_a8._0_4_ = fVar9 * fVar22 + fVar14 * fVar16;
  local_b8._8_4_ = fVar22 * fVar16 + fVar9 * fVar14;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC1 - fVar4 * fVar22) - fVar11 * fVar14;
  local_a8._12_4_ = 0;
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),(PointConstraintPart *)(this + 0x110),pBVar2,local_c8,
             pBVar1,local_88);
  bVar3 = PointConstraintPart::SolvePositionConstraint
                    ((PointConstraintPart *)(this + 0x110),pBVar2,pBVar1,param_2);
  fVar10 = (float)*(undefined8 *)(pBVar2 + 0x18);
  fVar11 = (float)*(undefined8 *)(pBVar2 + 0x10);
  fVar16 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x10) >> 0x20);
  fVar19 = fVar11 + fVar11;
  fVar17 = fVar16 + fVar16;
  fVar9 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x18) >> 0x20);
  fVar23 = fVar10 * (fVar10 + fVar10);
  fVar4 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar14 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar25 = (fVar10 + fVar10) * fVar9;
  local_a8._0_4_ = fVar10 * fVar19 + fVar17 * fVar9;
  fVar15 = fVar10 * fVar19 - fVar17 * fVar9;
  fVar27 = fVar10 * fVar17 - fVar19 * fVar9;
  fVar12 = (_LC1 - fVar11 * fVar19) - fVar16 * fVar17;
  fVar13 = fVar19 * fVar9 + fVar10 * fVar17;
  fVar26 = fVar14 * (fVar14 + fVar14);
  local_a8._4_4_ = fVar27;
  fVar22 = fVar16 * fVar19 + fVar25;
  local_b8._0_4_ = fVar16 * fVar19 - fVar25;
  local_a8._8_4_ = fVar12;
  local_a8._12_4_ = 0;
  fVar28 = (_LC1 - fVar23) - fVar11 * fVar19;
  fVar10 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  local_b8._4_4_ = fVar28;
  local_b8._8_4_ = fVar13;
  local_b8._12_4_ = 0;
  local_98 = __LC44;
  uStack_90 = _UNK_001072b8;
  local_58 = __LC44;
  uStack_50 = _UNK_001072b8;
  local_c8._0_4_ = (_LC1 - fVar16 * fVar17) - fVar23;
  local_c8._4_4_ = fVar22;
  fVar11 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  local_c8._8_4_ = fVar15;
  local_c8._12_4_ = 0;
  fVar25 = fVar11 + fVar11;
  fVar16 = fVar4 + fVar4;
  fVar9 = fVar10 * (fVar14 + fVar14);
  fVar20 = fVar14 * fVar25 - fVar16 * fVar10;
  fVar23 = fVar16 * fVar10 + fVar14 * fVar25;
  fVar18 = fVar14 * fVar16 + fVar25 * fVar10;
  fVar24 = fVar14 * fVar16 - fVar25 * fVar10;
  fVar21 = (_LC1 - fVar4 * fVar16) - fVar11 * fVar25;
  uStack_60 = (ulong)(uint)fVar21;
  local_68 = CONCAT44(fVar20,fVar18);
  fVar19 = fVar11 * fVar16 + fVar9;
  local_78._0_4_ = fVar11 * fVar16 - fVar9;
  fVar17 = (_LC1 - fVar11 * fVar25) - fVar26;
  fVar25 = (_LC1 - fVar26) - fVar4 * fVar16;
  fVar11 = *(float *)(this + 0x70);
  fVar16 = *(float *)(this + 0x74);
  fVar4 = *(float *)(this + 0x78);
  local_88._4_4_ = fVar19;
  local_88._0_4_ = fVar17;
  local_88._8_4_ = fVar24;
  local_88._12_4_ = 0;
  local_78._4_4_ = fVar25;
  local_78._8_4_ = fVar23;
  local_78._12_4_ = 0;
  fVar10 = *(float *)(this + 0x60);
  fVar9 = *(float *)(this + 100);
  fVar14 = *(float *)(this + 0x68);
  local_f8 = CONCAT44(fVar19 * fVar11 + fVar16 * fVar25 + fVar4 * fVar20,
                      fVar17 * fVar11 + fVar16 * local_78._0_4_ + fVar4 * fVar18);
  local_e8 = CONCAT44(fVar28 * fVar9 + fVar22 * fVar10 + fVar14 * fVar27,
                      local_b8._0_4_ * fVar9 + local_c8._0_4_ * fVar10 +
                      fVar14 * (float)local_a8._0_4_);
  uStack_e0._0_4_ = fVar13 * fVar9 + fVar15 * fVar10 + fVar14 * fVar12;
  uStack_e0._4_4_ = fVar9 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
  HingeRotationConstraintPart::CalculateConstraintProperties
            (local_e8,uStack_e0,local_f8,
             CONCAT44(fVar11 * 0.0 + fVar16 * 0.0 + fVar4 * 0.0,
                      fVar24 * fVar11 + fVar16 * fVar23 + fVar4 * fVar21),
             (HingeRotationConstraintPart *)(this + 0x200),pBVar2,local_c8,pBVar1,local_88);
  uVar5 = HingeRotationConstraintPart::SolvePositionConstraint
                    ((HingeRotationConstraintPart *)(this + 0x200),pBVar2,pBVar1,param_2);
  uVar7 = (ulong)(byte)this[0xb0];
  uVar6 = uVar5;
  if ((this[0xb0] != (HingeConstraint)0x0) && (*(float *)(this + 0xc0) <= 0.0)) {
    CalculateA1AndTheta(this);
    CalculateRotationLimitsConstraintProperties(this,param_1);
    uVar6 = uVar5 & 0xff;
    if (*(float *)(this + 0x310) != 0.0) {
      fVar11 = *(float *)(this + 0xf4) - *(float *)(this + 0xb4);
      if (_LC53 <= fVar11) {
        for (; __LC54 < fVar11; fVar11 = fVar11 - _LC10) {
        }
      }
      else {
        do {
          fVar11 = fVar11 + _LC10;
        } while (fVar11 < _LC53);
      }
      fVar16 = *(float *)(this + 0xf4) - *(float *)(this + 0xb8);
      if (_LC53 <= fVar16) {
        for (; __LC54 < fVar16; fVar16 = fVar16 - _LC10) {
        }
      }
      else {
        do {
          fVar16 = fVar16 + _LC10;
        } while (fVar16 < _LC53);
      }
      uVar8 = -(uint)((float)(_LC46 & (uint)fVar16) <= (float)((uint)fVar11 & _LC46));
      fVar11 = (float)((uint)fVar16 & uVar8 | ~uVar8 & (uint)fVar11);
      if ((fVar11 != 0.0) && (*(float *)(this + 0x318) == 0.0)) {
        fVar11 = (float)((uint)*(float *)(this + 0x310) ^ _LC42) * param_2 * fVar11;
        if (pBVar2[0x78] == (Body)0x2) {
          Body::SubRotationStep
                    (CONCAT44(fVar11 * *(float *)(this + 0x2f4),fVar11 * *(float *)(this + 0x2f0)),
                     CONCAT44(fVar11 * *(float *)(this + 0x2fc),fVar11 * *(float *)(this + 0x2f8)),
                     pBVar2);
        }
        uVar6 = uVar5 & 0xff;
        if (pBVar1[0x78] == (Body)0x2) {
          Body::AddRotationStep
                    (CONCAT44(fVar11 * *(float *)(this + 0x304),fVar11 * *(float *)(this + 0x300)),
                     CONCAT44(fVar11 * *(float *)(this + 0x30c),fVar11 * *(float *)(this + 0x308)),
                     pBVar1);
        }
        goto LAB_00103add;
      }
    }
  }
  uVar7 = 0;
LAB_00103add:
  bVar3 = (byte)uVar6 | bVar3;
  uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar3) & 0xffffffff;
  if (bVar3 == 0) {
    uVar6 = uVar7;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::CalculateMotorConstraintProperties(float) */

void JPH::HingeConstraint::CalculateMotorConstraintProperties(float param_1)

{
  int iVar1;
  long in_RDI;
  undefined1 in_register_00001204 [12];
  undefined1 auVar2 [16];
  float fVar3;
  
  auVar2._4_12_ = in_register_00001204;
  auVar2._0_4_ = param_1;
  iVar1 = *(int *)(in_RDI + 0xe8);
  if (iVar1 == 1) {
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),in_RDI + 800,
               *(undefined8 *)(in_RDI + 0x28),*(undefined8 *)(in_RDI + 0x30));
    return;
  }
  if (iVar1 == 2) {
    if (0.0 < *(float *)(in_RDI + 0xd0)) {
      fVar3 = *(float *)(in_RDI + 0xf4) - *(float *)(in_RDI + 0xf0);
      if (_LC53 <= fVar3) {
        for (; __LC54 < fVar3; fVar3 = fVar3 - _LC10) {
        }
      }
      else {
        do {
          fVar3 = fVar3 + _LC10;
        } while (fVar3 < _LC53);
      }
      AngleConstraintPart::CalculateConstraintPropertiesWithSettings
                (auVar2._0_8_,*(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),0,
                 fVar3,*(float *)(in_RDI + 0xd0),*(undefined4 *)(in_RDI + 0xd4),in_RDI + 800,
                 *(undefined8 *)(in_RDI + 0x28),*(undefined8 *)(in_RDI + 0x30),
                 *(undefined1 *)(in_RDI + 0xcc));
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    if (0.0 < *(float *)(in_RDI + 200)) {
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),in_RDI + 800,
                 *(undefined8 *)(in_RDI + 0x28),*(undefined8 *)(in_RDI + 0x30));
      return;
    }
  }
  *(undefined4 *)(in_RDI + 0x340) = 0;
  *(undefined4 *)(in_RDI + 0x34c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HingeConstraint::SetupVelocityConstraint(float) */

void __thiscall JPH::HingeConstraint::SetupVelocityConstraint(HingeConstraint *this,float param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x10);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x18);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
  fVar10 = fVar3 + fVar3;
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
  fVar19 = fVar4 + fVar4;
  fVar6 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar21 = fVar5 * (fVar5 + fVar5);
  fVar7 = fVar8 * (fVar5 + fVar5);
  fVar16 = (_LC1 - fVar3 * fVar10) - fVar4 * fVar19;
  fVar15 = fVar5 * fVar10 + fVar19 * fVar8;
  fVar13 = fVar5 * fVar10 - fVar19 * fVar8;
  fVar24 = fVar5 * fVar19 - fVar10 * fVar8;
  fVar11 = fVar10 * fVar8 + fVar5 * fVar19;
  uStack_b0 = (ulong)(uint)fVar11;
  auVar18._0_4_ = (_LC1 - fVar4 * fVar19) - fVar21;
  fVar19 = fVar4 * fVar10 + fVar7;
  fVar7 = fVar4 * fVar10 - fVar7;
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x10);
  fVar25 = (_LC1 - fVar21) - fVar3 * fVar10;
  auVar18._4_4_ = fVar19;
  fVar3 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  local_a8._4_4_ = fVar24;
  local_a8._0_4_ = fVar15;
  local_a8._8_4_ = fVar16;
  local_a8._12_4_ = 0;
  auVar18._8_4_ = fVar13;
  auVar18._12_4_ = 0;
  fVar8 = fVar4 + fVar4;
  fVar10 = fVar3 + fVar3;
  local_b8 = CONCAT44(fVar25,fVar7);
  fVar26 = fVar6 * (fVar6 + fVar6);
  fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  local_98 = __LC44;
  uStack_90 = _UNK_001072b8;
  fVar12 = fVar5 * (fVar6 + fVar6);
  fVar22 = (_LC1 - fVar4 * fVar8) - fVar3 * fVar10;
  fVar20 = fVar6 * fVar8 + fVar10 * fVar5;
  fVar23 = fVar6 * fVar8 - fVar10 * fVar5;
  fVar17 = fVar6 * fVar10 - fVar8 * fVar5;
  fVar9 = fVar8 * fVar5 + fVar6 * fVar10;
  auVar14._0_4_ = (_LC1 - fVar3 * fVar10) - fVar26;
  fVar21 = fVar3 * fVar8 + fVar12;
  fVar26 = (_LC1 - fVar26) - fVar4 * fVar8;
  fVar12 = fVar3 * fVar8 - fVar12;
  auVar14._4_4_ = fVar21;
  auVar14._8_4_ = fVar23;
  auVar14._12_4_ = 0;
  local_58 = __LC44;
  uStack_50 = _UNK_001072b8;
  local_78._4_4_ = fVar26;
  local_78._0_4_ = fVar12;
  local_78._8_4_ = fVar9;
  local_78._12_4_ = 0;
  local_68._4_4_ = fVar17;
  local_68._0_4_ = fVar20;
  local_68._8_4_ = fVar22;
  local_68._12_4_ = 0;
  local_c8 = auVar18;
  local_88 = auVar14;
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),this + 0x110,lVar1,local_c8,lVar2,local_88);
  fVar3 = *(float *)(this + 0x70);
  fVar4 = *(float *)(this + 0x74);
  fVar5 = *(float *)(this + 0x78);
  fVar8 = *(float *)(this + 0x60);
  fVar6 = *(float *)(this + 100);
  fVar10 = *(float *)(this + 0x68);
  local_128 = CONCAT44(fVar3 * fVar21 + fVar4 * fVar26 + fVar5 * fVar17,
                       fVar3 * auVar14._0_4_ + fVar4 * fVar12 + fVar5 * fVar20);
  uStack_120._0_4_ = fVar3 * fVar23 + fVar4 * fVar9 + fVar5 * fVar22;
  uStack_120._4_4_ = fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0;
  local_118 = CONCAT44(fVar8 * fVar19 + fVar6 * fVar25 + fVar10 * fVar24,
                       fVar8 * auVar18._0_4_ + fVar6 * fVar7 + fVar10 * fVar15);
  uStack_110._0_4_ = fVar8 * fVar13 + fVar6 * fVar11 + fVar10 * fVar16;
  uStack_110._4_4_ = fVar8 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  HingeRotationConstraintPart::CalculateConstraintProperties
            (local_118,uStack_110,local_128,uStack_120,this + 0x200,lVar1,local_c8,lVar2,local_88);
  CalculateA1AndTheta(this);
  CalculateRotationLimitsConstraintProperties(this,param_1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CalculateMotorConstraintProperties(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::HingeConstraint::GetSubType() const */

undefined8 JPH::HingeConstraint::GetSubType(void)

{
  return 2;
}



/* JPH::HingeConstraintSettings::~HingeConstraintSettings() */

void __thiscall
JPH::HingeConstraintSettings::~HingeConstraintSettings(HingeConstraintSettings *this)

{
  return;
}



/* JPH::HingeConstraintSettings::~HingeConstraintSettings() */

void __thiscall
JPH::HingeConstraintSettings::~HingeConstraintSettings(HingeConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x001042e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::HingeConstraint::~HingeConstraint() */

void __thiscall JPH::HingeConstraint::~HingeConstraint(HingeConstraint *this)

{
  return;
}



/* JPH::HingeConstraint::~HingeConstraint() */

void __thiscall JPH::HingeConstraint::~HingeConstraint(HingeConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00104314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TwoBodyConstraint::IsActive() const */

TwoBodyConstraint __thiscall JPH::TwoBodyConstraint::IsActive(TwoBodyConstraint *this)

{
  long lVar1;
  
  if (this[0x1a] != (TwoBodyConstraint)0x0) {
    lVar1 = *(long *)(*(long *)(this + 0x28) + 0x48);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x70) == -1)) {
      lVar1 = *(long *)(*(long *)(this + 0x30) + 0x48);
      if (lVar1 == 0) {
        return (TwoBodyConstraint)0x0;
      }
      if (*(int *)(lVar1 + 0x70) == -1) {
        return (TwoBodyConstraint)0x0;
      }
    }
    if (*(char *)(*(long *)(this + 0x30) + 0x78) != '\x02') {
      return (TwoBodyConstraint)(*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02');
    }
  }
  return this[0x1a];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_10;
  
  uVar6 = _UNK_001072b8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar10 = (float)*(undefined8 *)(in_RSI + 0x38);
  fVar11 = (float)((ulong)*(undefined8 *)(in_RSI + 0x38) >> 0x20);
  fVar27 = fVar10 * (fVar10 + fVar10);
  fVar7 = (float)*(undefined8 *)(in_RSI + 0x30);
  fVar21 = (fVar10 + fVar10) * fVar11;
  fVar8 = (float)((ulong)*(undefined8 *)(in_RSI + 0x30) >> 0x20);
  lVar9 = 0;
  fVar25 = fVar7 + fVar7;
  fVar26 = fVar8 + fVar8;
  local_58 = (_LC1 - fVar8 * fVar26) - fVar27;
  register0x00001284 = fVar8 * fVar25 + fVar21;
  register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
  register0x0000128c = 0;
  local_48._4_4_ = (_LC1 - fVar27) - fVar7 * fVar25;
  local_48._0_4_ = fVar8 * fVar25 - fVar21;
  fVar21 = in_RDX[8];
  fVar27 = in_RDX[9];
  fVar24 = in_RDX[10];
  fVar12 = in_RDX[0xb];
  local_48._8_4_ = fVar25 * fVar11 + fVar10 * fVar26;
  local_48._12_4_ = 0;
  fVar13 = *in_RDX;
  fVar14 = in_RDX[1];
  fVar15 = in_RDX[2];
  fVar22 = in_RDX[3];
  fVar23 = in_RDX[4];
  fVar2 = in_RDX[5];
  fVar3 = in_RDX[6];
  fVar4 = in_RDX[7];
  local_38._4_4_ = fVar10 * fVar26 - fVar25 * fVar11;
  local_38._0_4_ = fVar10 * fVar25 + fVar26 * fVar11;
  local_38._8_4_ = (_LC1 - fVar7 * fVar25) - fVar8 * fVar26;
  local_38._12_4_ = 0;
  do {
    fVar7 = *(float *)(local_58 + lVar9);
    fVar8 = *(float *)(local_58 + lVar9 + 4);
    fVar10 = *(float *)(local_58 + lVar9 + 8);
    *(float *)((long)local_98 + lVar9) = fVar10 * fVar21 + fVar7 * fVar13 + fVar8 * fVar23;
    *(float *)((long)local_98 + lVar9 + 4) = fVar10 * fVar27 + fVar7 * fVar14 + fVar8 * fVar2;
    *(float *)((long)local_98 + lVar9 + 8) = fVar10 * fVar24 + fVar7 * fVar15 + fVar8 * fVar3;
    *(float *)((long)local_98 + lVar9 + 0xc) = fVar10 * fVar12 + fVar7 * fVar22 + fVar8 * fVar4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  fVar21 = *(float *)(in_RSI + 0x20);
  fVar27 = *(float *)(in_RSI + 0x24);
  fVar24 = *(float *)(in_RSI + 0x28);
  bVar1 = *(byte *)(in_RSI + 0x7a);
  fVar14 = fVar27 * local_98[4];
  fVar15 = fVar27 * local_98[5];
  fVar27 = fVar27 * local_98[6];
  fVar12 = fVar21 * local_98[0];
  fVar13 = fVar21 * local_98[1];
  fVar21 = fVar21 * local_98[2];
  fVar22 = fVar24 * local_98[8];
  fVar23 = fVar24 * local_98[9];
  fVar24 = fVar24 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC44;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_00107294;
  auVar5._0_4_ = __LC9;
  auVar5._8_4_ = _UNK_00107298;
  auVar5._12_4_ = _UNK_0010729c;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC9);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00107294);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00107298);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_0010729c);
  *(uint *)param_1 =
       (uint)(fVar14 * local_98[4] + fVar12 * local_98[0] + fVar22 * local_98[8]) & uVar16;
  *(uint *)(param_1 + 4) =
       (uint)(fVar14 * local_98[5] + fVar12 * local_98[1] + fVar22 * local_98[9]) & uVar16 & uVar18;
  *(uint *)(param_1 + 8) =
       (uint)(fVar14 * local_98[6] + fVar12 * local_98[2] + fVar22 * local_98[10]) & uVar16 & uVar19
  ;
  *(uint *)(param_1 + 0xc) =
       (uint)(fVar14 * local_98[7] + fVar12 * local_98[3] + fVar22 * local_98[0xb]) &
       uVar16 & uVar20;
  *(uint *)(param_1 + 0x10) =
       (uint)(fVar15 * local_98[4] + fVar13 * local_98[0] + fVar23 * local_98[8]) & uVar18 & uVar16;
  *(uint *)(param_1 + 0x14) =
       (uint)(fVar15 * local_98[5] + fVar13 * local_98[1] + fVar23 * local_98[9]) & uVar18;
  *(uint *)(param_1 + 0x18) =
       (uint)(fVar15 * local_98[6] + fVar13 * local_98[2] + fVar23 * local_98[10]) & uVar18 & uVar19
  ;
  *(uint *)(param_1 + 0x1c) =
       (uint)(fVar15 * local_98[7] + fVar13 * local_98[3] + fVar23 * local_98[0xb]) &
       uVar18 & uVar20;
  *(uint *)(param_1 + 0x20) =
       (uint)(fVar27 * local_98[4] + fVar21 * local_98[0] + fVar24 * local_98[8]) & uVar19 & uVar16;
  *(uint *)(param_1 + 0x24) =
       (uint)(fVar27 * local_98[5] + fVar21 * local_98[1] + fVar24 * local_98[9]) & uVar19 & uVar18;
  *(uint *)(param_1 + 0x28) =
       (uint)(fVar27 * local_98[6] + fVar21 * local_98[2] + fVar24 * local_98[10]) & uVar19;
  *(uint *)(param_1 + 0x2c) =
       (uint)(fVar27 * local_98[7] + fVar21 * local_98[3] + fVar24 * local_98[0xb]) &
       uVar19 & uVar20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddRotationStep(JPH::Vec3) */

void JPH::Body::AddRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= _LC16) {
    return;
  }
  fVar11 = _LC17 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC57 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001072c4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001072c8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001072cc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC20 * fVar17 + _LC17);
  iVar14 = (int)(_LC20 * fVar18 + _LC17);
  iVar15 = (int)(_LC20 * fVar19 + _LC17);
  iVar16 = (int)(_LC20 * fVar20 + _LC17);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC23 * fVar4) - _LC25 * fVar4) - fVar4 * _LC27;
  fVar18 = ((fVar18 - _LC23 * fVar6) - _LC25 * fVar6) - fVar6 * _LC27;
  fVar7 = ((fVar19 - _LC23 * fVar7) - _LC25 * fVar7) - fVar7 * _LC27;
  fVar9 = ((fVar20 - _LC23 * fVar9) - _LC25 * fVar9) - fVar9 * _LC27;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC29 * fVar4 + _LC31) * fVar4 + _LC33) * fVar4 * fVar4 - _LC17 * fVar4) + _LC1;
  fVar20 = (((_LC29 * fVar22 + _LC31) * fVar22 + _LC33) * fVar22 * fVar22 - _LC17 * fVar22) + _LC1;
  fVar8 = (((_LC29 * fVar24 + _LC31) * fVar24 + _LC33) * fVar24 * fVar24 - _LC17 * fVar24) + _LC1;
  fVar10 = (((_LC29 * fVar26 + _LC31) * fVar26 + _LC33) * fVar26 * fVar26 - _LC17 * fVar26) + _LC1;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC36 * fVar4 + _LC38) * fVar4 + _LC40) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC36 * fVar22 + _LC38) * fVar22 + _LC40) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC36 * fVar24 + _LC38) * fVar24 + _LC40) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC36 * fVar26 + _LC38) * fVar26 + _LC40) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC41 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC57 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC41 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC57 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001072d4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001072c4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001072d4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001072c4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001072d8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001072c8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001072d8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001072c8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001072dc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001072cc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001072dc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001072cc ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::SubRotationStep(JPH::Vec3) */

void JPH::Body::SubRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= _LC16) {
    return;
  }
  fVar11 = _LC43 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC57 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001072c4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001072c8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001072cc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC20 * fVar17 + _LC17);
  iVar14 = (int)(_LC20 * fVar18 + _LC17);
  iVar15 = (int)(_LC20 * fVar19 + _LC17);
  iVar16 = (int)(_LC20 * fVar20 + _LC17);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC23 * fVar4) - _LC25 * fVar4) - fVar4 * _LC27;
  fVar18 = ((fVar18 - _LC23 * fVar6) - _LC25 * fVar6) - fVar6 * _LC27;
  fVar7 = ((fVar19 - _LC23 * fVar7) - _LC25 * fVar7) - fVar7 * _LC27;
  fVar9 = ((fVar20 - _LC23 * fVar9) - _LC25 * fVar9) - fVar9 * _LC27;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC29 * fVar4 + _LC31) * fVar4 + _LC33) * fVar4 * fVar4 - _LC17 * fVar4) + _LC1;
  fVar20 = (((_LC29 * fVar22 + _LC31) * fVar22 + _LC33) * fVar22 * fVar22 - _LC17 * fVar22) + _LC1;
  fVar8 = (((_LC29 * fVar24 + _LC31) * fVar24 + _LC33) * fVar24 * fVar24 - _LC17 * fVar24) + _LC1;
  fVar10 = (((_LC29 * fVar26 + _LC31) * fVar26 + _LC33) * fVar26 * fVar26 - _LC17 * fVar26) + _LC1;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC36 * fVar4 + _LC38) * fVar4 + _LC40) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC36 * fVar22 + _LC38) * fVar22 + _LC40) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC36 * fVar24 + _LC38) * fVar24 + _LC40) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC36 * fVar26 + _LC38) * fVar26 + _LC40) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC41 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC57 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC41 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC57 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001072d4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001072c4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001072d4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001072c4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001072d8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001072c8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001072d8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001072c8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001072dc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001072cc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001072dc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001072cc ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44 const&,
   JPH::Vec3, JPH::Body const&, JPH::Mat44 const&, JPH::Vec3) */

void JPH::PointConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,float param_4,
               float *param_1,long param_2,float *param_7,long param_8,float *param_9)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar20;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1a8;
  float fStack_1a4;
  float local_198;
  float fStack_194;
  undefined1 local_178 [4];
  float afStack_174 [3];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138 [16];
  undefined1 local_f8 [4];
  float afStack_f4 [3];
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b8 [4];
  float afStack_b4 [3];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_78 [4];
  float fStack_74;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38 [2];
  long local_30;
  
  local_1a8 = (float)param_1_00;
  fStack_1a4 = (float)((ulong)param_1_00 >> 0x20);
  fVar21 = param_7[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar24 = param_7[7];
  fStack_194 = (float)((ulong)param_3 >> 0x20);
  fVar25 = param_9[4];
  fVar26 = param_9[5];
  fVar27 = param_9[6];
  fVar28 = param_9[7];
  fVar2 = param_7[0xb];
  fVar13 = local_1a8 * *param_7 + fStack_1a4 * param_7[4] + param_2_00 * param_7[8];
  fVar14 = local_1a8 * param_7[1] + fStack_1a4 * param_7[5] + param_2_00 * param_7[9];
  fVar15 = local_1a8 * param_7[2] + fStack_1a4 * param_7[6] + param_2_00 * param_7[10];
  local_198 = (float)param_3;
  fVar3 = *param_9;
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = fVar13;
  param_1[1] = fVar14;
  param_1[2] = fVar15;
  param_1[3] = local_1a8 * fVar21 + fStack_1a4 * fVar24 + param_2_00 * fVar2;
  fVar21 = param_9[9];
  fVar24 = param_9[10];
  fVar2 = param_9[0xb];
  cVar1 = *(char *)(param_2 + 0x78);
  param_1[4] = param_4 * param_9[8] + fStack_194 * fVar25 + local_198 * fVar3;
  param_1[5] = param_4 * fVar21 + fStack_194 * fVar26 + local_198 * fVar4;
  param_1[6] = param_4 * fVar24 + fStack_194 * fVar27 + local_198 * fVar5;
  param_1[7] = param_4 * fVar2 + fStack_194 * fVar28 + local_198 * fVar6;
  if (cVar1 == '\x02') {
    lVar10 = *(long *)(param_2 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_f8);
    uVar20 = _UNK_001072b8;
    uVar18 = __LC44;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC42);
    fVar24 = (float)((uint)fVar15 ^ _LC42);
    fVar26 = (float)((uint)fVar13 ^ _LC42);
    local_98 = CONCAT44(fVar26,fVar14);
    uStack_90 = 0;
    local_a8._4_4_ = 0;
    local_a8._0_4_ = fVar24;
    fStack_a0 = fVar13;
    fStack_9c = 0.0;
    auVar17._4_4_ = fVar25;
    auVar17._0_4_ = fVar15;
    auVar17._8_8_ = 0;
    _local_b8 = auVar17 << 0x20;
    lVar10 = 0;
    do {
      fVar27 = *(float *)(local_b8 + lVar10);
      fVar28 = *(float *)(local_b8 + lVar10 + 4);
      fVar2 = *(float *)(local_b8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(local_78 + lVar10) =
           fVar2 * (float)local_d8 + fVar27 * (float)local_f8 + fVar28 * (float)local_e8._0_4_;
      *(float *)(local_78 + lVar10 + 4) =
           fVar2 * local_d8._4_4_ + fVar27 * afStack_f4[0] + fVar28 * (float)local_e8._4_4_;
      *(float *)(local_78 + lVar10 + 8) =
           fVar2 * (float)uStack_d0 + fVar27 * afStack_f4[1] + fVar28 * fStack_e0;
      *(float *)(local_78 + lVar10 + 0xc) =
           fVar2 * uStack_d0._4_4_ + fVar27 * afStack_f4[2] + fVar28 * fStack_dc;
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    *(undefined8 *)(param_1 + 8) = _local_78;
    *(undefined8 *)(param_1 + 10) = uStack_70;
    local_48 = uVar18;
    uStack_40 = uVar20;
    *(undefined1 (*) [8])(param_1 + 0xc) = local_68;
    *(undefined8 *)(param_1 + 0xe) = uStack_60;
    *(undefined1 (*) [8])(param_1 + 0x10) = local_58;
    *(undefined8 *)(param_1 + 0x12) = uStack_50;
    uVar7 = _UNK_001072b8;
    *(undefined8 *)(param_1 + 0x14) = __LC44;
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    lVar10 = 0;
    do {
      fVar27 = *(float *)((Mat44 *)local_f8 + lVar10);
      fVar28 = *(float *)(local_f8 + lVar10 + 4);
      fVar2 = *(float *)(local_f8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(local_78 + lVar10) = fVar2 * fVar14 + fVar27 * 0.0 + fVar28 * fVar24;
      *(float *)(local_78 + lVar10 + 4) = fVar2 * fVar26 + fVar27 * fVar15 + fVar28 * 0.0;
      *(float *)(local_78 + lVar10 + 8) = fVar2 * 0.0 + fVar27 * fVar25 + fVar28 * fVar13;
      *(float *)(local_78 + lVar10 + 0xc) = fVar2 * 0.0 + fVar27 * 0.0 + fVar28 * 0.0;
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    local_148._8_8_ = uVar20;
    local_148._0_8_ = uVar18;
    afStack_174[0] =
         fVar14 * (float)local_58._4_4_ + fVar24 * (float)local_68._4_4_ + fStack_74 * 0.0;
    local_178 = (undefined1  [4])
                (fVar14 * (float)local_58._0_4_ +
                fVar24 * (float)local_68._0_4_ + (float)local_78 * 0.0);
    afStack_174[1] = fVar14 * (float)uStack_50 + fVar24 * (float)uStack_60 + (float)uStack_70 * 0.0;
    afStack_174[2] = fVar14 * uStack_50._4_4_ + fVar24 * uStack_60._4_4_ + uStack_70._4_4_ * 0.0;
    local_158._4_4_ =
         fVar13 * (float)local_68._4_4_ + fVar25 * fStack_74 + (float)local_58._4_4_ * 0.0;
    local_158._0_4_ =
         fVar13 * (float)local_68._0_4_ + fVar25 * (float)local_78 + (float)local_58._0_4_ * 0.0;
    fStack_150 = fVar13 * (float)uStack_60 + fVar25 * (float)uStack_70 + (float)uStack_50 * 0.0;
    fStack_14c = fVar13 * uStack_60._4_4_ + fVar25 * uStack_70._4_4_ + uStack_50._4_4_ * 0.0;
    local_168._4_4_ =
         fVar15 * fStack_74 + (float)local_68._4_4_ * 0.0 + fVar26 * (float)local_58._4_4_;
    local_168._0_4_ =
         fVar15 * (float)local_78 + (float)local_68._0_4_ * 0.0 + fVar26 * (float)local_58._0_4_;
    fStack_160 = fVar15 * (float)uStack_70 + (float)uStack_60 * 0.0 + fVar26 * (float)uStack_50;
    fStack_15c = fVar15 * uStack_70._4_4_ + uStack_60._4_4_ * 0.0 + fVar26 * uStack_50._4_4_;
  }
  else {
    fVar21 = 0.0;
    _local_178 = (undefined1  [16])0x0;
    _local_168 = (undefined1  [16])0x0;
    _local_158 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    uVar18 = __LC44;
    uVar20 = _UNK_001072b8;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC42);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC42);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC42);
    fVar21 = fVar21 + *(float *)(lVar10 + 0x58);
    local_d8 = CONCAT44(fVar28,fVar27);
    uStack_d0 = 0;
    local_e8._4_4_ = 0;
    local_e8._0_4_ = fVar25;
    fStack_e0 = local_1a8;
    fStack_dc = 0.0;
    afStack_f4[1] = fVar26;
    afStack_f4[2] = 0.0;
    lVar10 = 0;
    do {
      fVar2 = *(float *)(local_f8 + lVar10);
      fVar3 = *(float *)(local_f8 + lVar10 + 4);
      fVar4 = *(float *)(local_f8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(lVar10 + (long)pfVar8) =
           fVar4 * local_138[8] + fVar3 * local_138[4] + fVar2 * local_138[0];
      *(float *)(local_78 + lVar10 + 4) =
           fVar4 * local_138[9] + fVar3 * local_138[5] + fVar2 * local_138[1];
      *(float *)(local_78 + lVar10 + 8) =
           fVar4 * local_138[10] + fVar3 * local_138[6] + fVar2 * local_138[2];
      *(float *)(local_78 + lVar10 + 0xc) =
           fVar4 * local_138[0xb] + fVar3 * local_138[7] + fVar2 * local_138[3];
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    local_48 = uVar18;
    uStack_40 = uVar20;
    lVar10 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar18;
    *(undefined8 *)(param_1 + 0x26) = uVar20;
    *(undefined8 *)(param_1 + 0x18) = _local_78;
    *(undefined8 *)(param_1 + 0x1a) = uStack_70;
    *(undefined1 (*) [8])(param_1 + 0x1c) = local_68;
    *(undefined8 *)(param_1 + 0x1e) = uStack_60;
    *(undefined1 (*) [8])(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x22) = uStack_50;
    do {
      fVar2 = *(float *)((Mat44 *)local_138 + lVar10);
      fVar3 = *(float *)((long)local_138 + lVar10 + 4);
      fVar4 = *(float *)((long)local_138 + lVar10 + 8);
      *(float *)(local_b8 + lVar10) = fVar4 * fVar27 + fVar2 * 0.0 + fVar3 * fVar25;
      *(float *)(local_b8 + lVar10 + 4) = fVar4 * fVar28 + fVar2 * fVar24 + fVar3 * 0.0;
      *(float *)(local_b8 + lVar10 + 8) = fVar4 * 0.0 + fVar2 * fVar26 + fVar3 * local_1a8;
      *(float *)(local_b8 + lVar10 + 0xc) = fVar4 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x30);
    fStack_74 = fVar25 * (float)local_a8._4_4_ + afStack_b4[0] * 0.0 + fVar27 * local_98._4_4_;
    local_78 = (undefined1  [4])
               (fVar25 * (float)local_a8._0_4_ + (float)local_b8 * 0.0 + fVar27 * (float)local_98);
    uStack_70._0_4_ = fVar25 * fStack_a0 + afStack_b4[1] * 0.0 + fVar27 * (float)uStack_90;
    uStack_70._4_4_ = fVar25 * fStack_9c + afStack_b4[2] * 0.0 + fVar27 * uStack_90._4_4_;
    local_68._4_4_ = (float)local_a8._4_4_ * 0.0 + fVar24 * afStack_b4[0] + fVar28 * local_98._4_4_;
    local_68._0_4_ =
         (float)local_a8._0_4_ * 0.0 + fVar24 * (float)local_b8 + fVar28 * (float)local_98;
    uStack_60._0_4_ = fStack_a0 * 0.0 + fVar24 * afStack_b4[1] + fVar28 * (float)uStack_90;
    uStack_60._4_4_ = fStack_9c * 0.0 + fVar24 * afStack_b4[2] + fVar28 * uStack_90._4_4_;
    local_58._4_4_ =
         fVar26 * afStack_b4[0] + local_1a8 * (float)local_a8._4_4_ + local_98._4_4_ * 0.0;
    local_58._0_4_ =
         fVar26 * (float)local_b8 + local_1a8 * (float)local_a8._0_4_ + (float)local_98 * 0.0;
    uStack_50._0_4_ = fVar26 * afStack_b4[1] + local_1a8 * fStack_a0 + (float)uStack_90 * 0.0;
    uStack_50._4_4_ = fVar26 * afStack_b4[2] + local_1a8 * fStack_9c + uStack_90._4_4_ * 0.0;
    pfVar11 = (float *)local_178;
    pfVar12 = pfVar8;
    do {
      fVar24 = *pfVar12;
      fVar25 = pfVar12[1];
      fVar26 = pfVar12[2];
      fVar27 = pfVar12[3];
      pfVar12 = pfVar12 + 4;
      *pfVar11 = *pfVar11 + fVar24;
      pfVar11[1] = pfVar11[1] + fVar25;
      pfVar11[2] = pfVar11[2] + fVar26;
      pfVar11[3] = pfVar11[3] + fVar27;
      pfVar11 = pfVar11 + 4;
    } while (local_38 != pfVar12);
  }
  local_48 = uVar18;
  uStack_40 = uVar20;
  _local_78 = ZEXT416((uint)fVar21);
  _local_68 = ZEXT416((uint)fVar21) << 0x20;
  _local_58 = ZEXT416((uint)fVar21) << 0x40;
  pfVar11 = (float *)local_178;
  do {
    fVar21 = *pfVar8;
    fVar24 = pfVar8[1];
    fVar25 = pfVar8[2];
    fVar26 = pfVar8[3];
    pfVar8 = pfVar8 + 4;
    *pfVar11 = *pfVar11 + fVar21;
    pfVar11[1] = pfVar11[1] + fVar24;
    pfVar11[2] = pfVar11[2] + fVar25;
    pfVar11[3] = pfVar11[3] + fVar26;
    pfVar11 = pfVar11 + 4;
  } while (local_38 != pfVar8);
  auVar23._0_4_ =
       ((float)local_158._4_4_ * (float)local_168._0_4_ -
       (float)local_168._4_4_ * (float)local_158._0_4_) * afStack_174[1] +
       ((float)local_158._0_4_ * fStack_160 - (float)local_168._0_4_ * fStack_150) * afStack_174[0]
       + (fStack_150 * (float)local_168._4_4_ - fStack_160 * (float)local_158._4_4_) *
         (float)local_178 + 0.0;
  if (auVar23._0_4_ == 0.0) {
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x2c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  }
  else {
    auVar23._4_4_ = auVar23._0_4_;
    auVar23._8_4_ = auVar23._0_4_;
    auVar23._12_4_ = auVar23._0_4_;
    *(undefined8 *)(param_1 + 0x34) = uVar18;
    *(undefined8 *)(param_1 + 0x36) = uVar20;
    auVar19._0_4_ = (float)local_168._4_4_ * fStack_150 - (float)local_158._4_4_ * fStack_160;
    auVar19._4_4_ = (float)local_158._4_4_ * afStack_174[1] - afStack_174[0] * fStack_150;
    auVar19._8_4_ = afStack_174[0] * fStack_160 - (float)local_168._4_4_ * afStack_174[1];
    auVar19._12_4_ = 0;
    auVar16._0_4_ =
         (float)local_158._4_4_ * (float)local_168._0_4_ -
         (float)local_168._4_4_ * (float)local_158._0_4_;
    auVar16._4_4_ =
         afStack_174[0] * (float)local_158._0_4_ - (float)local_158._4_4_ * (float)local_178;
    auVar16._8_4_ =
         (float)local_168._4_4_ * (float)local_178 - afStack_174[0] * (float)local_168._0_4_;
    auVar16._12_4_ = 0;
    auVar19 = divps(auVar19,auVar23);
    auVar17 = divps(auVar16,auVar23);
    *(undefined1 (*) [16])(param_1 + 0x28) = auVar19;
    auVar22._0_4_ = fStack_160 * (float)local_158._0_4_ - fStack_150 * (float)local_168._0_4_;
    auVar22._4_4_ = fStack_150 * (float)local_178 - afStack_174[1] * (float)local_158._0_4_;
    auVar22._8_4_ = afStack_174[1] * (float)local_168._0_4_ - fStack_160 * (float)local_178;
    auVar22._12_4_ = 0;
    auVar23 = divps(auVar22,auVar23);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar17;
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar23;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&) */

undefined8 __thiscall
JPH::PointConstraintPart::SolveVelocityConstraint
          (PointConstraintPart *this,Body *param_1,Body *param_2)

{
  Body BVar1;
  Body BVar2;
  byte bVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar31 [16];
  
  BVar1 = param_2[0x78];
  pfVar4 = *(float **)(param_2 + 0x48);
  fVar25 = *(float *)(this + 0x10);
  fVar22 = *(float *)(this + 0x14);
  fVar21 = *(float *)(this + 0x18);
  if (BVar1 == (Body)0x0) {
    fVar24 = 0.0;
    fVar27 = 0.0;
    fVar32 = 0.0;
    fVar19 = fVar25 * 0.0 - fVar22 * 0.0;
    fVar22 = fVar22 * 0.0 - fVar21 * 0.0;
    fVar25 = fVar21 * 0.0 - fVar25 * 0.0;
  }
  else {
    fVar24 = *pfVar4;
    fVar27 = pfVar4[1];
    fVar32 = pfVar4[2];
    fVar19 = fVar25 * pfVar4[5] - fVar22 * pfVar4[4];
    fVar22 = fVar22 * pfVar4[6] - fVar21 * pfVar4[5];
    fVar25 = fVar21 * pfVar4[4] - fVar25 * pfVar4[6];
  }
  fVar21 = *(float *)this;
  fVar9 = *(float *)(this + 4);
  fVar10 = *(float *)(this + 8);
  BVar2 = param_1[0x78];
  pfVar5 = *(float **)(param_1 + 0x48);
  if (BVar2 == (Body)0x0) {
    fVar23 = 0.0;
    fVar26 = 0.0;
    fVar20 = 0.0;
    auVar28._4_4_ = fVar10 * 0.0 - fVar21 * 0.0;
    auVar28._0_4_ = fVar9 * 0.0 - fVar10 * 0.0;
    auVar28._8_4_ = fVar21 * 0.0 - fVar9 * 0.0;
  }
  else {
    fVar20 = *pfVar5;
    fVar23 = pfVar5[1];
    fVar26 = pfVar5[2];
    auVar28._4_4_ = pfVar5[4] * fVar10 - fVar21 * pfVar5[6];
    auVar28._0_4_ = pfVar5[6] * fVar9 - fVar10 * pfVar5[5];
    auVar28._8_4_ = pfVar5[5] * fVar21 - fVar9 * pfVar5[4];
  }
  uVar18 = 0;
  fVar22 = ((fVar20 - auVar28._0_4_) - fVar24) + fVar22;
  fVar25 = ((fVar23 - auVar28._4_4_) - fVar27) + fVar25;
  fVar19 = ((fVar26 - auVar28._8_4_) - fVar32) + fVar19;
  fVar21 = fVar19 * *(float *)(this + 0xc0) +
           fVar22 * *(float *)(this + 0xa0) + fVar25 * *(float *)(this + 0xb0) +
           *(float *)(this + 0xd0);
  fVar24 = fVar19 * *(float *)(this + 0xc4) +
           fVar22 * *(float *)(this + 0xa4) + fVar25 * *(float *)(this + 0xb4) +
           *(float *)(this + 0xd4);
  fVar27 = fVar19 * *(float *)(this + 200) +
           fVar22 * *(float *)(this + 0xa8) + fVar25 * *(float *)(this + 0xb8) +
           *(float *)(this + 0xd8);
  fVar25 = fVar19 * *(float *)(this + 0xcc) +
           fVar22 * *(float *)(this + 0xac) + fVar25 * *(float *)(this + 0xbc) +
           *(float *)(this + 0xdc);
  *(float *)(this + 0xe0) = *(float *)(this + 0xe0) + fVar21;
  *(float *)(this + 0xe4) = *(float *)(this + 0xe4) + fVar24;
  *(float *)(this + 0xe8) = *(float *)(this + 0xe8) + fVar27;
  *(float *)(this + 0xec) = *(float *)(this + 0xec) + fVar25;
  auVar29._4_4_ = -(uint)(fVar24 == 0.0);
  auVar29._0_4_ = -(uint)(fVar21 == 0.0);
  auVar29._8_4_ = -(uint)(fVar27 == 0.0);
  auVar29._12_4_ = -(uint)(fVar25 == 0.0);
  uVar17 = movmskps((int)param_2,auVar29);
  if ((~uVar17 & 7) != 0) {
    if (BVar2 == (Body)0x2) {
      fVar22 = pfVar5[0x16];
      bVar3 = *(byte *)((long)pfVar5 + 0x7a);
      auVar30._1_3_ = 0;
      auVar30[0] = bVar3;
      auVar30[4] = bVar3;
      auVar30._5_3_ = 0;
      auVar30[8] = bVar3;
      auVar30._9_3_ = 0;
      auVar30[0xc] = bVar3;
      auVar30._13_3_ = 0;
      auVar16._4_4_ = _UNK_001072a4;
      auVar16._0_4_ = __LC12;
      auVar16._8_4_ = _UNK_001072a8;
      auVar16._12_4_ = _UNK_001072ac;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_001072a4;
      bVar7 = auVar30._8_4_ == _UNK_001072a8;
      bVar8 = auVar30._12_4_ == _UNK_001072ac;
      *pfVar5 = (float)(-(uint)(auVar30._0_4_ == __LC12) & (uint)(*pfVar5 - fVar22 * fVar21));
      pfVar5[1] = (float)(-(uint)bVar6 & (uint)(pfVar5[1] - fVar22 * fVar24));
      pfVar5[2] = (float)(-(uint)bVar7 & (uint)(pfVar5[2] - fVar22 * fVar27));
      pfVar5[3] = (float)(-(uint)bVar8 & (uint)(pfVar5[3] - fVar22 * fVar25));
      fVar22 = *(float *)(this + 0x34);
      fVar32 = *(float *)(this + 0x38);
      fVar19 = *(float *)(this + 0x3c);
      fVar9 = *(float *)(this + 0x24);
      fVar10 = *(float *)(this + 0x28);
      fVar20 = *(float *)(this + 0x2c);
      fVar23 = *(float *)(this + 0x44);
      fVar26 = *(float *)(this + 0x48);
      fVar11 = *(float *)(this + 0x4c);
      fVar12 = *(float *)(this + 0x54);
      fVar13 = *(float *)(this + 0x58);
      fVar14 = *(float *)(this + 0x5c);
      pfVar5[4] = pfVar5[4] -
                  (fVar21 * *(float *)(this + 0x20) + fVar24 * *(float *)(this + 0x30) +
                   fVar27 * *(float *)(this + 0x40) + *(float *)(this + 0x50));
      pfVar5[5] = pfVar5[5] - (fVar21 * fVar9 + fVar24 * fVar22 + fVar27 * fVar23 + fVar12);
      pfVar5[6] = pfVar5[6] - (fVar21 * fVar10 + fVar24 * fVar32 + fVar27 * fVar26 + fVar13);
      pfVar5[7] = pfVar5[7] - (fVar21 * fVar20 + fVar24 * fVar19 + fVar27 * fVar11 + fVar14);
    }
    if (BVar1 == (Body)0x2) {
      bVar3 = *(byte *)((long)pfVar4 + 0x7a);
      fVar22 = pfVar4[0x16];
      uVar18 = 1;
      auVar31._1_3_ = 0;
      auVar31[0] = bVar3;
      auVar31[4] = bVar3;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar3;
      auVar31._9_3_ = 0;
      auVar31[0xc] = bVar3;
      auVar31._13_3_ = 0;
      auVar15._4_4_ = _UNK_001072a4;
      auVar15._0_4_ = __LC12;
      auVar15._8_4_ = _UNK_001072a8;
      auVar15._12_4_ = _UNK_001072ac;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_001072a4;
      bVar7 = auVar31._8_4_ == _UNK_001072a8;
      bVar8 = auVar31._12_4_ == _UNK_001072ac;
      *pfVar4 = (float)((uint)(fVar22 * fVar21 + *pfVar4) & -(uint)(auVar31._0_4_ == __LC12));
      pfVar4[1] = (float)((uint)(fVar22 * fVar24 + pfVar4[1]) & -(uint)bVar6);
      pfVar4[2] = (float)((uint)(fVar22 * fVar27 + pfVar4[2]) & -(uint)bVar7);
      pfVar4[3] = (float)((uint)(fVar22 * fVar25 + pfVar4[3]) & -(uint)bVar8);
      fVar25 = *(float *)(this + 0x74);
      fVar22 = *(float *)(this + 0x78);
      fVar32 = *(float *)(this + 0x7c);
      fVar19 = *(float *)(this + 100);
      fVar9 = *(float *)(this + 0x68);
      fVar10 = *(float *)(this + 0x6c);
      fVar20 = *(float *)(this + 0x84);
      fVar23 = *(float *)(this + 0x88);
      fVar26 = *(float *)(this + 0x8c);
      fVar11 = *(float *)(this + 0x94);
      fVar12 = *(float *)(this + 0x98);
      fVar13 = *(float *)(this + 0x9c);
      pfVar4[4] = fVar27 * *(float *)(this + 0x80) +
                  fVar21 * *(float *)(this + 0x60) + fVar24 * *(float *)(this + 0x70) +
                  *(float *)(this + 0x90) + pfVar4[4];
      pfVar4[5] = fVar27 * fVar20 + fVar21 * fVar19 + fVar24 * fVar25 + fVar11 + pfVar4[5];
      pfVar4[6] = fVar27 * fVar23 + fVar21 * fVar9 + fVar24 * fVar22 + fVar12 + pfVar4[6];
      pfVar4[7] = fVar27 * fVar26 + fVar21 * fVar10 + fVar24 * fVar32 + fVar13 + pfVar4[7];
    }
    else {
      uVar18 = 1;
    }
  }
  return uVar18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, float) const */

undefined8 __thiscall
JPH::PointConstraintPart::SolvePositionConstraint
          (PointConstraintPart *this,Body *param_1,Body *param_2,float param_3)

{
  PointConstraintPart *pPVar1;
  float fVar2;
  Body BVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
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
  undefined1 auVar19 [16];
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long in_FS_OFFSET;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float local_68 [18];
  long local_20;
  
  fVar2 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0xc);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar25 = ((*(float *)param_2 - fVar2) + *(float *)(this + 0x10)) - *(float *)this;
  fVar27 = ((*(float *)(param_2 + 4) - fVar8) + *(float *)(this + 0x14)) - *(float *)(this + 4);
  fVar28 = ((*(float *)(param_2 + 8) - fVar9) + *(float *)(this + 0x18)) - *(float *)(this + 8);
  auVar29._4_4_ = -(uint)(fVar27 == 0.0);
  auVar29._0_4_ = -(uint)(fVar25 == 0.0);
  auVar29._8_4_ = -(uint)(fVar28 == 0.0);
  auVar29._12_4_ =
       -(uint)(((*(float *)(param_2 + 0xc) - fVar10) + *(float *)(this + 0x1c)) -
               *(float *)(this + 0xc) == 0.0);
  uVar20 = movmskps(0,auVar29);
  if ((~uVar20 & 7) == 0) {
    uVar22 = 0;
  }
  else {
    fVar23 = (float)((uint)param_3 ^ _LC42);
    lVar21 = 0;
    do {
      pPVar1 = this + lVar21 + 0xa0;
      fVar30 = *(float *)(pPVar1 + 4);
      fVar31 = *(float *)(pPVar1 + 8);
      fVar11 = *(float *)(pPVar1 + 0xc);
      *(float *)((long)local_68 + lVar21) = *(float *)pPVar1 * fVar23;
      *(float *)((long)local_68 + lVar21 + 4) = fVar30 * fVar23;
      *(float *)((long)local_68 + lVar21 + 8) = fVar31 * fVar23;
      *(float *)((long)local_68 + lVar21 + 0xc) = fVar11 * fVar23;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x40);
    fVar23 = fVar25 * local_68[0] + fVar27 * local_68[4] + fVar28 * local_68[8] + local_68[0xc];
    fVar30 = fVar25 * local_68[1] + fVar27 * local_68[5] + fVar28 * local_68[9] + local_68[0xd];
    fVar31 = fVar25 * local_68[2] + fVar27 * local_68[6] + fVar28 * local_68[10] + local_68[0xe];
    fVar25 = fVar25 * local_68[3] + fVar27 * local_68[7] + fVar28 * local_68[0xb] + local_68[0xf];
    if (param_1[0x78] == (Body)0x2) {
      bVar4 = *(byte *)(*(long *)(param_1 + 0x48) + 0x7a);
      fVar27 = *(float *)(*(long *)(param_1 + 0x48) + 0x58);
      auVar24._1_3_ = 0;
      auVar24[0] = bVar4;
      auVar24[4] = bVar4;
      auVar24._5_3_ = 0;
      auVar24[8] = bVar4;
      auVar24._9_3_ = 0;
      auVar24[0xc] = bVar4;
      auVar24._13_3_ = 0;
      auVar19._4_4_ = _UNK_001072a4;
      auVar19._0_4_ = __LC12;
      auVar19._8_4_ = _UNK_001072a8;
      auVar19._12_4_ = _UNK_001072ac;
      auVar24 = auVar24 & auVar19;
      bVar5 = auVar24._4_4_ == _UNK_001072a4;
      bVar6 = auVar24._8_4_ == _UNK_001072a8;
      bVar7 = auVar24._12_4_ == _UNK_001072ac;
      fVar28 = *(float *)(this + 0x30);
      fVar11 = *(float *)(this + 0x34);
      fVar12 = *(float *)(this + 0x38);
      fVar13 = *(float *)(this + 0x3c);
      fVar14 = *(float *)(this + 0x20);
      fVar15 = *(float *)(this + 0x24);
      fVar16 = *(float *)(this + 0x28);
      fVar17 = *(float *)(this + 0x2c);
      *(float *)param_1 =
           fVar2 - (float)(-(uint)(auVar24._0_4_ == __LC12) & (uint)(fVar27 * fVar23));
      *(float *)(param_1 + 4) = fVar8 - (float)(-(uint)bVar5 & (uint)(fVar27 * fVar30));
      *(float *)(param_1 + 8) = fVar9 - (float)(-(uint)bVar6 & (uint)(fVar27 * fVar31));
      *(float *)(param_1 + 0xc) = fVar10 - (float)(-(uint)bVar7 & (uint)(fVar27 * fVar25));
      Body::SubRotationStep
                (CONCAT44(fVar23 * fVar15 + fVar30 * fVar11 + fVar31 * *(float *)(this + 0x44) +
                          *(float *)(this + 0x54),
                          fVar23 * fVar14 + fVar30 * fVar28 + fVar31 * *(float *)(this + 0x40) +
                          *(float *)(this + 0x50)),
                 CONCAT44(fVar23 * fVar17 + fVar30 * fVar13 + fVar31 * *(float *)(this + 0x4c) +
                          *(float *)(this + 0x5c),
                          fVar23 * fVar16 + fVar30 * fVar12 + fVar31 * *(float *)(this + 0x48) +
                          *(float *)(this + 0x58)),param_1);
      BVar3 = param_2[0x78];
    }
    else {
      BVar3 = param_2[0x78];
    }
    if (BVar3 == (Body)0x2) {
      bVar4 = *(byte *)(*(long *)(param_2 + 0x48) + 0x7a);
      fVar2 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
      auVar26._1_3_ = 0;
      auVar26[0] = bVar4;
      auVar26[4] = bVar4;
      auVar26._5_3_ = 0;
      auVar26[8] = bVar4;
      auVar26._9_3_ = 0;
      auVar26[0xc] = bVar4;
      auVar26._13_3_ = 0;
      auVar18._4_4_ = _UNK_001072a4;
      auVar18._0_4_ = __LC12;
      auVar18._8_4_ = _UNK_001072a8;
      auVar18._12_4_ = _UNK_001072ac;
      auVar26 = auVar26 & auVar18;
      bVar5 = auVar26._4_4_ == _UNK_001072a4;
      bVar6 = auVar26._8_4_ == _UNK_001072a8;
      bVar7 = auVar26._12_4_ == _UNK_001072ac;
      fVar8 = *(float *)(this + 0x70);
      fVar9 = *(float *)(this + 0x74);
      fVar10 = *(float *)(this + 0x78);
      fVar27 = *(float *)(this + 0x7c);
      *(float *)param_2 =
           (float)((uint)(fVar2 * fVar23) & -(uint)(auVar26._0_4_ == __LC12)) + *(float *)param_2;
      *(float *)(param_2 + 4) =
           (float)((uint)(fVar2 * fVar30) & -(uint)bVar5) + *(float *)(param_2 + 4);
      *(float *)(param_2 + 8) =
           (float)((uint)(fVar2 * fVar31) & -(uint)bVar6) + *(float *)(param_2 + 8);
      *(float *)(param_2 + 0xc) =
           (float)((uint)(fVar2 * fVar25) & -(uint)bVar7) + *(float *)(param_2 + 0xc);
      Body::AddRotationStep
                (CONCAT44(fVar23 * *(float *)(this + 100) + fVar30 * fVar9 +
                          fVar31 * *(float *)(this + 0x84) + *(float *)(this + 0x94),
                          fVar23 * *(float *)(this + 0x60) + fVar30 * fVar8 +
                          fVar31 * *(float *)(this + 0x80) + *(float *)(this + 0x90)),
                 CONCAT44(fVar23 * *(float *)(this + 0x6c) + fVar30 * fVar27 +
                          fVar31 * *(float *)(this + 0x8c) + *(float *)(this + 0x9c),
                          fVar23 * *(float *)(this + 0x68) + fVar30 * fVar10 +
                          fVar31 * *(float *)(this + 0x88) + *(float *)(this + 0x98)),param_2);
      uVar22 = 1;
    }
    else {
      uVar22 = 1;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



/* JPH::HingeRotationConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44
   const&, JPH::Vec3, JPH::Body const&, JPH::Mat44 const&, JPH::Vec3) */

void JPH::HingeRotationConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               float *param_1,long param_2,undefined8 param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar25;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 local_148 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  
  fVar30 = (float)param_4;
  fVar22 = (float)((ulong)param_3 >> 0x20);
  fVar25 = (float)param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = param_1_00;
  fVar28 = *param_1;
  fVar16 = param_1[1];
  *(undefined8 *)(param_1 + 2) = param_2_00;
  uVar6 = _LC42;
  fVar17 = param_1[2];
  local_148._8_8_ = param_4;
  local_148._0_8_ = param_3;
  fVar18 = *param_1;
  fVar23 = param_1[1];
  fVar24 = param_1[2];
  fVar8 = fVar30 * fVar17 + fVar22 * fVar16 + fVar25 * fVar28 + 0.0;
  if (fVar8 <= _LC45) {
    auVar10._0_4_ = fVar25 - fVar8 * fVar18;
    auVar10._4_4_ = fVar22 - fVar8 * fVar23;
    auVar10._8_4_ = fVar30 - fVar8 * fVar24;
    auVar10._12_4_ = (float)((ulong)param_4 >> 0x20) - fVar8 * param_1[3];
    fVar8 = auVar10._8_4_ * auVar10._8_4_ +
            auVar10._0_4_ * auVar10._0_4_ + 0.0 + auVar10._4_4_ * auVar10._4_4_;
    if (fVar8 < _LC16) {
      if ((float)((uint)fVar16 & _LC46) < (float)((uint)fVar28 & _LC46)) {
        auVar31._4_4_ = 0;
        auVar31._0_4_ = fVar17;
        auVar31._12_4_ = (uint)fVar28 ^ _LC42;
        auVar31._8_4_ = (uint)fVar28 ^ _LC42;
        auVar15._0_4_ = SQRT(fVar28 * fVar28 + fVar17 * fVar17);
        auVar15._4_4_ = auVar15._0_4_;
        auVar15._8_4_ = auVar15._0_4_;
        auVar15._12_4_ = auVar15._0_4_;
        auVar10 = divps(auVar31,auVar15);
      }
      else {
        auVar5._8_4_ = (uint)fVar16 ^ _LC42;
        auVar5._4_4_ = (uint)fVar16 ^ _LC42;
        auVar5._0_4_ = fVar17;
        auVar5._12_4_ = 0;
        auVar14._0_4_ = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
        auVar14._4_4_ = auVar14._0_4_;
        auVar14._8_4_ = auVar14._0_4_;
        auVar14._12_4_ = auVar14._0_4_;
        auVar10 = divps(auVar5 << 0x20,auVar14);
      }
      fVar8 = auVar10._0_4_ * auVar10._0_4_ + 0.0 + auVar10._4_4_ * auVar10._4_4_ +
              auVar10._8_4_ * auVar10._8_4_;
    }
    auVar12._0_4_ = SQRT(fVar8);
    auVar12._4_4_ = auVar12._0_4_;
    auVar12._8_4_ = auVar12._0_4_;
    auVar12._12_4_ = auVar12._0_4_;
    auVar10 = divps(auVar10,auVar12);
    auVar29._0_4_ = auVar10._0_4_ * _LC50 + _LC48 * fVar18;
    auVar29._4_4_ = auVar10._4_4_ * _LC50 + _LC48 * fVar23;
    auVar29._8_4_ = auVar10._8_4_ * _LC50 + _LC48 * fVar24;
    auVar29._12_4_ = auVar10._12_4_ * _LC50 + _LC48 * param_1[3];
    auVar13._0_4_ =
         SQRT(auVar29._8_4_ * auVar29._8_4_ +
              auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ + 0.0);
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    local_148 = divps(auVar29,auVar13);
    fVar25 = local_148._0_4_;
    fVar22 = local_148._4_4_;
    fVar30 = local_148._8_4_;
  }
  fVar28 = local_148._0_4_;
  fVar16 = local_148._4_4_;
  fVar17 = local_148._8_4_;
  if ((float)(_LC46 & (uint)fVar28) <= (float)((uint)fVar16 & _LC46)) {
    auVar11._0_8_ = local_148._8_8_ << 0x20;
    auVar11._12_4_ = (uint)fVar16 ^ _LC42;
    auVar11._8_4_ = (uint)fVar16 ^ _LC42;
    auVar21._0_4_ = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar10 = divps(auVar11,auVar21);
  }
  else {
    auVar9._12_4_ = (uint)fVar28 ^ _LC42;
    auVar9._8_4_ = (uint)fVar28 ^ _LC42;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fVar17;
    fVar28 = SQRT(fVar28 * fVar28 + fVar17 * fVar17);
    auVar19._4_4_ = fVar28;
    auVar19._0_4_ = fVar28;
    auVar19._8_4_ = fVar28;
    auVar19._12_4_ = fVar28;
    auVar10 = divps(auVar9,auVar19);
  }
  fVar28 = auVar10._0_4_;
  fVar16 = auVar10._4_4_;
  fVar17 = auVar10._8_4_;
  cVar3 = *(char *)(param_2 + 0x78);
  *(undefined1 (*) [16])(param_1 + 4) = auVar10;
  fVar8 = fVar16 * fVar25 - fVar22 * fVar28;
  fVar22 = fVar17 * fVar22 - fVar30 * fVar16;
  fVar25 = fVar28 * fVar30 - fVar25 * fVar17;
  param_1[8] = fVar22;
  param_1[9] = fVar25;
  param_1[10] = fVar8;
  param_1[0xb] = fVar8;
  if (cVar3 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_e8);
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    local_c8._0_12_ = ZEXT812(0);
    fStack_cc = 0.0;
    local_c8._12_4_ = 0;
    local_e8 = 0.0;
    fStack_e4 = fStack_d4;
    fStack_e0 = fStack_d0;
    fStack_dc = fStack_cc;
  }
  cVar3 = *(char *)(param_8 + 0x78);
  param_1[0xc] = local_e8;
  param_1[0xd] = fStack_e4;
  param_1[0xe] = fStack_e0;
  param_1[0xf] = fStack_dc;
  param_1[0x10] = local_d8;
  param_1[0x11] = fStack_d4;
  param_1[0x12] = fStack_d0;
  param_1[0x13] = fStack_cc;
  *(undefined1 (*) [16])(param_1 + 0x14) = local_c8;
  *(undefined8 *)(param_1 + 0x18) = local_b8;
  *(undefined8 *)(param_1 + 0x1a) = uStack_b0;
  if (cVar3 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_a8);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0.0;
    fStack_94 = 0.0;
    fStack_90 = 0.0;
    local_88._0_12_ = ZEXT812(0);
    fStack_8c = 0.0;
    local_88._12_4_ = 0;
    local_a8 = 0.0;
    fStack_a4 = fStack_94;
    fStack_a0 = fStack_90;
    fStack_9c = fStack_8c;
  }
  *(undefined8 *)(param_1 + 0x28) = local_78;
  *(undefined8 *)(param_1 + 0x2a) = uStack_70;
  lVar7 = 0;
  param_1[0x1c] = local_a8;
  param_1[0x1d] = fStack_a4;
  param_1[0x1e] = fStack_a0;
  param_1[0x1f] = fStack_9c;
  param_1[0x20] = local_98;
  param_1[0x21] = fStack_94;
  param_1[0x22] = fStack_90;
  param_1[0x23] = fStack_8c;
  *(undefined1 (*) [16])(param_1 + 0x24) = local_88;
  fVar30 = fVar22 * fVar23 - fVar25 * fVar18;
  fVar25 = fVar25 * fVar24 - fVar8 * fVar23;
  fVar22 = fVar8 * fVar18 - fVar22 * fVar24;
  fVar8 = fVar28 * fVar23 - fVar16 * fVar18;
  fVar16 = fVar16 * fVar24 - fVar17 * fVar23;
  fVar28 = fVar17 * fVar18 - fVar28 * fVar24;
  param_1[0x30] = fVar25;
  param_1[0x31] = fVar22;
  param_1[0x32] = fVar30;
  param_1[0x33] = fVar30;
  param_1[0x2c] = fVar16;
  param_1[0x2d] = fVar28;
  param_1[0x2e] = fVar8;
  param_1[0x2f] = fVar8;
  do {
    pfVar1 = (float *)((long)param_1 + lVar7 + 0x70);
    fVar17 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar23 = pfVar1[3];
    pfVar2 = (float *)((long)param_1 + lVar7 + 0x30);
    fVar24 = pfVar2[1];
    fVar26 = pfVar2[2];
    fVar27 = pfVar2[3];
    *(float *)((long)local_68 + lVar7) = *pfVar1 + *pfVar2;
    *(float *)((long)local_68 + lVar7 + 4) = fVar17 + fVar24;
    *(float *)((long)local_68 + lVar7 + 8) = fVar18 + fVar26;
    *(float *)((long)local_68 + lVar7 + 0xc) = fVar23 + fVar27;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  fVar17 = local_68[0] * fVar16 + fVar28 * local_68[4] + fVar8 * local_68[8];
  fVar23 = local_68[1] * fVar16 + fVar28 * local_68[5] + fVar8 * local_68[9];
  fVar26 = local_68[2] * fVar16 + fVar28 * local_68[6] + fVar8 * local_68[10];
  fVar32 = fVar8 * fVar26 + fVar23 * fVar28 + fVar16 * fVar17 + 0.0;
  fVar18 = local_68[0] * fVar25 + fVar22 * local_68[4] + fVar30 * local_68[8];
  fVar24 = local_68[1] * fVar25 + fVar22 * local_68[5] + fVar30 * local_68[9];
  fVar27 = local_68[2] * fVar25 + fVar22 * local_68[6] + fVar30 * local_68[10];
  fVar28 = fVar8 * fVar27 + fVar28 * fVar24 + fVar16 * fVar18 + 0.0;
  fVar16 = fVar26 * fVar30 + fVar23 * fVar22 + fVar17 * fVar25 + 0.0;
  auVar20._0_4_ = fVar27 * fVar30 + fVar22 * fVar24 + fVar25 * fVar18 + 0.0;
  fVar17 = auVar20._0_4_ * fVar32 - fVar16 * fVar28;
  if (fVar17 == 0.0) {
    param_1[0x38] = 0.0;
    param_1[0x39] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  }
  else {
    auVar20._12_4_ = fVar32;
    auVar20._8_4_ = (uint)fVar28 ^ uVar6;
    auVar20._4_4_ = (uint)fVar16 ^ uVar6;
    auVar4._4_4_ = fVar17;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar17;
    auVar4._12_4_ = fVar17;
    auVar10 = divps(auVar20,auVar4);
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar10;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HingeRotationConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&) */

void __thiscall
JPH::HingeRotationConstraintPart::SolveVelocityConstraint
          (HingeRotationConstraintPart *this,Body *param_1,Body *param_2)

{
  Body BVar1;
  Body BVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  
  BVar1 = param_2[0x78];
  lVar3 = *(long *)(param_2 + 0x48);
  auVar18 = SUB1612((undefined1  [16])0x0,0);
  if (BVar1 != (Body)0x0) {
    auVar18 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x10),0);
  }
  BVar2 = param_1[0x78];
  auVar14 = SUB1612((undefined1  [16])0x0,0);
  lVar4 = *(long *)(param_1 + 0x48);
  if (BVar2 != (Body)0x0) {
    auVar14 = SUB1612(*(undefined1 (*) [16])(lVar4 + 0x10),0);
  }
  fVar13 = auVar14._0_4_ - auVar18._0_4_;
  fVar15 = auVar14._4_4_ - auVar18._4_4_;
  fVar16 = auVar14._8_4_ - auVar18._8_4_;
  fVar17 = *(float *)(this + 0xb8) * fVar16 +
           *(float *)(this + 0xb4) * fVar15 + *(float *)(this + 0xb0) * fVar13 + 0.0;
  fVar13 = fVar16 * *(float *)(this + 200) +
           fVar15 * *(float *)(this + 0xc4) + fVar13 * *(float *)(this + 0xc0) + 0.0;
  fVar15 = fVar17 * (float)*(undefined8 *)(this + 0xd0) + 0.0 +
           fVar13 * (float)*(undefined8 *)(this + 0xd8);
  fVar16 = fVar17 * (float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20) + 0.0 +
           fVar13 * (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20);
  *(ulong *)(this + 0xe0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20) + fVar16,
                (float)*(undefined8 *)(this + 0xe0) + fVar15);
  if (*(float *)(this + 0xd8) * fVar13 + *(float *)(this + 0xd0) * fVar17 + 0.0 != 0.0 ||
      fVar13 * *(float *)(this + 0xdc) + fVar17 * *(float *)(this + 0xd4) + 0.0 != 0.0) {
    fVar13 = fVar16 * *(float *)(this + 0xc0) + fVar15 * *(float *)(this + 0xb0);
    fVar17 = fVar16 * *(float *)(this + 0xc4) + fVar15 * *(float *)(this + 0xb4);
    fVar15 = fVar16 * *(float *)(this + 200) + fVar15 * *(float *)(this + 0xb8);
    if (BVar2 == (Body)0x2) {
      fVar16 = *(float *)(this + 0x34);
      fVar5 = *(float *)(this + 0x38);
      fVar6 = *(float *)(this + 0x3c);
      fVar7 = *(float *)(this + 0x44);
      fVar8 = *(float *)(this + 0x48);
      fVar9 = *(float *)(this + 0x4c);
      fVar10 = *(float *)(this + 0x54);
      fVar11 = *(float *)(this + 0x58);
      fVar12 = *(float *)(this + 0x5c);
      *(float *)(lVar4 + 0x10) =
           *(float *)(lVar4 + 0x10) -
           (fVar13 * *(float *)(this + 0x30) + fVar17 * *(float *)(this + 0x40) +
           fVar15 * *(float *)(this + 0x50));
      *(float *)(lVar4 + 0x14) =
           *(float *)(lVar4 + 0x14) - (fVar13 * fVar16 + fVar17 * fVar7 + fVar15 * fVar10);
      *(float *)(lVar4 + 0x18) =
           *(float *)(lVar4 + 0x18) - (fVar13 * fVar5 + fVar17 * fVar8 + fVar15 * fVar11);
      *(float *)(lVar4 + 0x1c) =
           *(float *)(lVar4 + 0x1c) - (fVar13 * fVar6 + fVar17 * fVar9 + fVar15 * fVar12);
    }
    if (BVar1 == (Body)0x2) {
      fVar16 = *(float *)(this + 0x74);
      fVar5 = *(float *)(this + 0x78);
      fVar6 = *(float *)(this + 0x7c);
      fVar7 = *(float *)(this + 0x84);
      fVar8 = *(float *)(this + 0x88);
      fVar9 = *(float *)(this + 0x8c);
      fVar10 = *(float *)(this + 0x94);
      fVar11 = *(float *)(this + 0x98);
      fVar12 = *(float *)(this + 0x9c);
      *(float *)(lVar3 + 0x10) =
           fVar15 * *(float *)(this + 0x90) +
           fVar13 * *(float *)(this + 0x70) + fVar17 * *(float *)(this + 0x80) +
           *(float *)(lVar3 + 0x10);
      *(float *)(lVar3 + 0x14) =
           fVar15 * fVar10 + fVar13 * fVar16 + fVar17 * fVar7 + *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x18) =
           fVar15 * fVar11 + fVar13 * fVar5 + fVar17 * fVar8 + *(float *)(lVar3 + 0x18);
      *(float *)(lVar3 + 0x1c) =
           fVar15 * fVar12 + fVar13 * fVar6 + fVar17 * fVar9 + *(float *)(lVar3 + 0x1c);
      return;
    }
  }
  return;
}



/* JPH::HingeRotationConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, float) const */

ulong __thiscall
JPH::HingeRotationConstraintPart::SolvePositionConstraint
          (HingeRotationConstraintPart *this,Body *param_1,Body *param_2,float param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 0x18) * *(float *)(this + 8) +
          *(float *)(this + 0x14) * *(float *)(this + 4) +
          *(float *)(this + 0x10) * *(float *)this + 0.0;
  fVar3 = *(float *)(this + 8) * *(float *)(this + 0x28) +
          *(float *)(this + 4) * *(float *)(this + 0x24) +
          *(float *)this * *(float *)(this + 0x20) + 0.0;
  uVar2 = CONCAT71((int7)((ulong)in_RAX >> 8),NAN(fVar3)) & 0xffffffff;
  if (fVar3 != 0.0) {
    uVar2 = 1;
  }
  bVar1 = (byte)uVar2 | fVar6 != 0.0;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar1);
  if (bVar1 != 0) {
    fVar4 = (*(float *)(this + 0xd8) * fVar3 + *(float *)(this + 0xd0) * fVar6 + 0.0) *
            (float)((uint)param_3 ^ _LC42);
    fVar3 = (float)((uint)param_3 ^ _LC42) *
            (fVar3 * *(float *)(this + 0xdc) + fVar6 * *(float *)(this + 0xd4) + 0.0);
    fVar6 = fVar4 * *(float *)(this + 0xb0) + fVar3 * *(float *)(this + 0xc0);
    fVar5 = fVar4 * *(float *)(this + 0xb4) + fVar3 * *(float *)(this + 0xc4);
    fVar3 = fVar4 * *(float *)(this + 0xb8) + fVar3 * *(float *)(this + 200);
    if (param_1[0x78] == (Body)0x2) {
      Body::SubRotationStep
                (CONCAT44(fVar6 * *(float *)(this + 0x34) + fVar5 * *(float *)(this + 0x44) +
                          fVar3 * *(float *)(this + 0x54),
                          fVar6 * *(float *)(this + 0x30) + fVar5 * *(float *)(this + 0x40) +
                          fVar3 * *(float *)(this + 0x50)),
                 CONCAT44(fVar6 * *(float *)(this + 0x3c) + fVar5 * *(float *)(this + 0x4c) +
                          fVar3 * *(float *)(this + 0x5c),
                          fVar6 * *(float *)(this + 0x38) + fVar5 * *(float *)(this + 0x48) +
                          fVar3 * *(float *)(this + 0x58)),param_1);
      uVar2 = (ulong)bVar1;
    }
    if (param_2[0x78] == (Body)0x2) {
      Body::AddRotationStep
                (CONCAT44(fVar6 * *(float *)(this + 0x74) + fVar5 * *(float *)(this + 0x84) +
                          fVar3 * *(float *)(this + 0x94),
                          fVar6 * *(float *)(this + 0x70) + fVar5 * *(float *)(this + 0x80) +
                          fVar3 * *(float *)(this + 0x90)),
                 CONCAT44(fVar6 * *(float *)(this + 0x7c) + fVar5 * *(float *)(this + 0x8c) +
                          fVar3 * *(float *)(this + 0x9c),
                          fVar6 * *(float *)(this + 0x78) + fVar5 * *(float *)(this + 0x88) +
                          fVar3 * *(float *)(this + 0x98)),param_2);
      uVar2 = uVar2 & 0xff;
    }
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AngleConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body const&,
   JPH::Vec3, float) */

void JPH::AngleConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined4 param_3,undefined1 (*param_1) [16]
               ,long param_2,long param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar23;
  uint uVar26;
  uint uVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_28;
  float fStack_24;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar11 = 0.0;
  local_28 = (float)param_1_00;
  fStack_24 = (float)((ulong)param_1_00 >> 0x20);
  if (*(char *)(param_2 + 0x78) == '\x02') {
    lVar3 = *(long *)(param_2 + 0x48);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    cVar1 = *(char *)(param_6 + 0x78);
    auVar24._1_3_ = 0;
    auVar24[0] = bVar2;
    auVar24[4] = bVar2;
    auVar24._5_3_ = 0;
    auVar24[8] = bVar2;
    auVar24._9_3_ = 0;
    auVar24[0xc] = bVar2;
    auVar24._13_3_ = 0;
    auVar6._4_4_ = _UNK_00107294;
    auVar6._0_4_ = __LC9;
    auVar6._8_4_ = _UNK_00107298;
    auVar6._12_4_ = _UNK_0010729c;
    auVar24 = auVar24 & auVar6;
    uVar23 = -(uint)(auVar24._0_4_ == __LC9);
    uVar26 = -(uint)(auVar24._4_4_ == _UNK_00107294);
    uVar27 = -(uint)(auVar24._8_4_ == _UNK_00107298);
    bVar4 = auVar24._12_4_ == _UNK_0010729c;
    fVar14 = (float)((uint)local_28 & uVar23);
    fVar16 = (float)((uint)fStack_24 & uVar26);
    fVar17 = (float)((uint)param_2_00 & uVar27);
    fVar22 = (fVar8 * fVar13 + fVar11 * fVar10 + fVar12 * fVar9) - fVar7 * fVar15;
    fVar20 = (fVar8 * fVar15 - fVar11 * fVar9) + fVar12 * fVar10 + fVar7 * fVar13;
    fVar21 = fVar20 + fVar20;
    fVar33 = fVar7 * fVar10 + ((fVar8 * fVar9 + fVar11 * fVar15) - fVar12 * fVar13);
    fVar18 = fVar22 + fVar22;
    fVar19 = fVar33 * (fVar33 + fVar33);
    fVar7 = ((fVar8 * fVar10 - fVar11 * fVar13) - fVar12 * fVar15) - fVar7 * fVar9;
    fVar8 = fVar7 * (fVar33 + fVar33);
    fVar11 = (_LC1 - fVar20 * fVar21) - fVar19;
    fVar15 = fVar33 * fVar21 + fVar18 * fVar7;
    fVar12 = fVar33 * fVar21 - fVar18 * fVar7;
    fVar19 = (_LC1 - fVar19) - fVar22 * fVar18;
    fVar28 = fVar20 * fVar18 - fVar8;
    fVar8 = fVar8 + fVar20 * fVar18;
    fVar22 = (_LC1 - fVar22 * fVar18) - fVar20 * fVar21;
    fVar20 = fVar33 * fVar18 - fVar21 * fVar7;
    fVar7 = fVar33 * fVar18 + fVar21 * fVar7;
    fVar9 = (fVar14 * fVar11 + fVar16 * fVar8 + fVar17 * fVar20) * *(float *)(lVar3 + 0x20);
    fVar10 = (fVar14 * fVar28 + fVar16 * fVar19 + fVar17 * fVar15) * *(float *)(lVar3 + 0x24);
    fVar13 = (fVar14 * fVar7 + fVar16 * fVar12 + fVar17 * fVar22) * *(float *)(lVar3 + 0x28);
    fVar7 = (float)((uint)(fVar9 * fVar11 + fVar10 * fVar28 + fVar13 * fVar7) & uVar23);
    fVar8 = (float)((uint)(fVar9 * fVar8 + fVar10 * fVar19 + fVar13 * fVar12) & uVar26);
    fVar11 = (float)((uint)(fVar9 * fVar20 + fVar10 * fVar15 + fVar13 * fVar22) & uVar27);
    *(float *)*param_1 = fVar7;
    *(float *)(*param_1 + 4) = fVar8;
    *(float *)(*param_1 + 8) = fVar11;
    *(uint *)(*param_1 + 0xc) = (uint)(fVar9 * 0.0 + fVar10 * 0.0 + fVar13 * 0.0) & -(uint)bVar4;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x78);
    *param_1 = (undefined1  [16])0x0;
  }
  uVar23 = 0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (cVar1 == '\x02') {
    lVar3 = *(long *)(param_6 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(param_6 + 0x10);
    fVar9 = (float)*(undefined8 *)(param_6 + 0x18);
    auVar25._1_3_ = 0;
    auVar25[0] = bVar2;
    fVar10 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
    fVar20 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar15 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    auVar25[4] = bVar2;
    auVar25._5_3_ = 0;
    auVar25[8] = bVar2;
    auVar25._9_3_ = 0;
    auVar25[0xc] = bVar2;
    auVar25._13_3_ = 0;
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    auVar5._4_4_ = _UNK_00107294;
    auVar5._0_4_ = __LC9;
    auVar5._8_4_ = _UNK_00107298;
    auVar5._12_4_ = _UNK_0010729c;
    auVar25 = auVar25 & auVar5;
    uVar23 = -(uint)(auVar25._0_4_ == __LC9);
    uVar26 = -(uint)(auVar25._4_4_ == _UNK_00107294);
    uVar27 = -(uint)(auVar25._8_4_ == _UNK_00107298);
    fVar17 = (float)((uint)local_28 & uVar23);
    fVar19 = (float)((uint)fStack_24 & uVar26);
    fVar21 = (float)((uint)param_2_00 & uVar27);
    fVar16 = (fVar10 * fVar20 + fVar13 * fVar18 + fVar15 * fVar33) - fVar9 * fVar22;
    fVar14 = (fVar10 * fVar22 - fVar13 * fVar33) + fVar15 * fVar18 + fVar9 * fVar20;
    fVar28 = fVar16 + fVar16;
    fVar30 = fVar14 + fVar14;
    fVar12 = ((fVar10 * fVar33 + fVar13 * fVar22) - fVar15 * fVar20) + fVar9 * fVar18;
    fVar9 = ((fVar10 * fVar18 - fVar13 * fVar20) - fVar15 * fVar22) - fVar9 * fVar33;
    fVar33 = fVar12 * (fVar12 + fVar12);
    fVar10 = fVar9 * (fVar12 + fVar12);
    fVar31 = fVar12 * fVar30 - fVar28 * fVar9;
    fVar13 = fVar12 * fVar30 + fVar28 * fVar9;
    fVar29 = (_LC1 - fVar16 * fVar28) - fVar14 * fVar30;
    fVar15 = (_LC1 - fVar14 * fVar30) - fVar33;
    fVar32 = (_LC1 - fVar33) - fVar16 * fVar28;
    fVar16 = fVar12 * fVar28 + fVar30 * fVar9;
    fVar33 = fVar14 * fVar28 - fVar10;
    fVar10 = fVar10 + fVar14 * fVar28;
    fVar12 = fVar12 * fVar28 - fVar30 * fVar9;
    fVar18 = (fVar21 * fVar12 + fVar17 * fVar15 + fVar19 * fVar10) * *(float *)(lVar3 + 0x20);
    fVar20 = (fVar21 * fVar13 + fVar17 * fVar33 + fVar19 * fVar32) * *(float *)(lVar3 + 0x24);
    fVar22 = (fVar21 * fVar29 + fVar17 * fVar16 + fVar19 * fVar31) * *(float *)(lVar3 + 0x28);
    fVar9 = (float)((uint)(fVar18 * fVar15 + fVar20 * fVar33 + fVar16 * fVar22) & uVar23);
    fVar10 = (float)((uint)(fVar18 * fVar10 + fVar20 * fVar32 + fVar31 * fVar22) & uVar26);
    fVar13 = (float)((uint)(fVar18 * fVar12 + fVar20 * fVar13 + fVar29 * fVar22) & uVar27);
    uVar23 = (uint)(fVar18 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0) &
             -(uint)(auVar25._12_4_ == _UNK_0010729c);
  }
  *(float *)param_1[1] = fVar9;
  *(float *)(param_1[1] + 4) = fVar10;
  *(float *)(param_1[1] + 8) = fVar13;
  *(uint *)(param_1[1] + 0xc) = uVar23;
  fVar15 = _LC1;
  fVar7 = (fVar11 + fVar13) * param_2_00 +
          (fVar8 + fVar10) * fStack_24 + (fVar7 + fVar9) * local_28 + 0.0;
  if (fVar7 == 0.0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(undefined4 *)param_1[2] = 0;
    return;
  }
  *(undefined4 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[2] + 4) = param_3;
  *(float *)param_1[2] = fVar15 / fVar7;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::sGetInvInitialOrientationXZ(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3) */

undefined1  [16]
JPH::RotationEulerConstraintPart::sGetInvInitialOrientationXZ
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  fVar4 = _LC1;
  local_88 = (float)param_1;
  uStack_84 = (float)((ulong)param_1 >> 0x20);
  uStack_80 = (float)param_2;
  uStack_7c = (float)((ulong)param_2 >> 0x20);
  local_68 = (float)param_3;
  uStack_64 = (float)((ulong)param_3 >> 0x20);
  uStack_60 = (float)param_4;
  uStack_5c = (float)((ulong)param_4 >> 0x20);
  local_78 = (float)param_5;
  uStack_74 = (float)((ulong)param_5 >> 0x20);
  uStack_70 = (float)param_6;
  uStack_6c = (float)((ulong)param_6 >> 0x20);
  auVar3._4_4_ = -(uint)(uStack_84 == uStack_74);
  auVar3._0_4_ = -(uint)(local_88 == local_78);
  auVar3._8_4_ = -(uint)(uStack_80 == uStack_70);
  auVar3._12_4_ = -(uint)(uStack_7c == uStack_6c);
  uVar2 = movmskps(in_EAX,auVar3);
  local_58 = (float)param_7;
  uStack_54 = (float)((ulong)param_7 >> 0x20);
  uStack_50 = (float)param_8;
  uStack_4c = (float)((ulong)param_8 >> 0x20);
  if (((~uVar2 & 7) == 0) &&
     (auVar7._4_4_ = -(uint)(uStack_64 == uStack_54), auVar7._0_4_ = -(uint)(local_68 == local_58),
     auVar7._8_4_ = -(uint)(uStack_60 == uStack_50), auVar7._12_4_ = -(uint)(uStack_5c == uStack_4c)
     , uVar2 = movmskps(~uVar2,auVar7), (~uVar2 & 7) == 0)) {
    local_88 = 0.0;
    uStack_84 = 0.0;
    uStack_80 = 0.0;
    uStack_7c = 1.0;
    goto LAB_00106ac1;
  }
  local_48 = uStack_64;
  fVar6 = uStack_84 * local_68 - uStack_64 * local_88;
  fVar8 = uStack_80 * uStack_64 - uStack_60 * uStack_84;
  fVar9 = local_88 * uStack_60 - local_68 * uStack_80;
  fVar11 = uStack_74 * local_58 - uStack_54 * local_78;
  fVar12 = uStack_70 * uStack_54 - uStack_50 * uStack_74;
  fVar13 = local_78 * uStack_50 - local_58 * uStack_70;
  fVar15 = local_88 + fVar9 + uStack_60;
  if (0.0 <= fVar15) {
    fVar9 = SQRT(fVar15 + _LC1);
    fVar14 = _LC17 / fVar9;
    fVar9 = fVar9 * _LC17;
    fVar5 = (fVar6 - uStack_64) * fVar14;
    fVar15 = (local_68 - uStack_80) * fVar14;
    fVar14 = (uStack_84 - fVar8) * fVar14;
  }
  else if (fVar9 <= local_88) {
    if (local_88 < uStack_60) goto LAB_00106967;
    fVar5 = (local_88 - (uStack_60 + fVar9)) + _LC1;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar9 = _LC17 / fVar5;
    fVar5 = fVar5 * _LC17;
    fVar15 = (fVar8 + uStack_84) * fVar9;
    fVar14 = (uStack_80 + local_68) * fVar9;
    fVar9 = (fVar6 - local_48) * fVar9;
  }
  else if (uStack_60 <= fVar9) {
    fVar15 = (fVar9 - (uStack_60 + local_88)) + _LC1;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar9 = _LC17 / fVar15;
    fVar15 = fVar15 * _LC17;
    fVar5 = (fVar8 + uStack_84) * fVar9;
    fVar14 = (fVar6 + local_48) * fVar9;
    fVar9 = (local_68 - uStack_80) * fVar9;
  }
  else {
LAB_00106967:
    fVar14 = (uStack_60 - (local_88 + fVar9)) + _LC1;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    fVar9 = _LC17 / fVar14;
    fVar14 = fVar14 * _LC17;
    fVar5 = (uStack_80 + local_68) * fVar9;
    fVar15 = (fVar6 + local_48) * fVar9;
    fVar9 = (uStack_84 - fVar8) * fVar9;
  }
  fVar6 = _LC17;
  fVar5 = (float)((uint)fVar5 ^ __LC55);
  fVar15 = (float)((uint)fVar15 ^ _UNK_00107304);
  fVar14 = (float)((uint)fVar14 ^ _UNK_00107308);
  fVar9 = (float)((uint)fVar9 ^ _UNK_0010730c);
  fVar8 = local_78 + fVar13 + uStack_50;
  if (0.0 <= fVar8) {
    fVar10 = SQRT(fVar8 + fVar4);
    fVar13 = _LC17 / fVar10;
    fVar10 = fVar10 * _LC17;
    fVar4 = (uStack_74 - fVar12) * fVar13;
    fVar8 = (local_58 - uStack_70) * fVar13;
    fVar13 = (fVar11 - uStack_54) * fVar13;
  }
  else if (fVar13 <= local_78) {
    if (local_78 < uStack_50) goto LAB_00106a15;
    fVar4 = (local_78 - (uStack_50 + fVar13)) + fVar4;
    if (fVar4 < 0.0) {
      fVar13 = sqrtf(fVar4);
    }
    else {
      fVar13 = SQRT(fVar4);
    }
    fVar8 = fVar6 / fVar13;
    fVar10 = (fVar11 - uStack_54) * fVar8;
    fVar4 = (uStack_70 + local_58) * fVar8;
    fVar8 = (uStack_74 + fVar12) * fVar8;
    fVar13 = fVar13 * fVar6;
  }
  else if (uStack_50 <= fVar13) {
    fVar4 = (fVar13 - (local_78 + uStack_50)) + fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar13 = fVar6 / fVar4;
    fVar8 = fVar4 * fVar6;
    fVar10 = (local_58 - uStack_70) * fVar13;
    fVar4 = (uStack_54 + fVar11) * fVar13;
    fVar13 = (uStack_74 + fVar12) * fVar13;
  }
  else {
LAB_00106a15:
    fVar4 = (uStack_50 - (local_78 + fVar13)) + fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar13 = fVar6 / fVar4;
    fVar4 = fVar4 * fVar6;
    fVar8 = (uStack_54 + fVar11) * fVar13;
    fVar10 = (uStack_74 - fVar12) * fVar13;
    fVar13 = (uStack_70 + local_58) * fVar13;
  }
  local_88 = (fVar8 * fVar14 + fVar13 * fVar9 + fVar10 * fVar5) - fVar4 * fVar15;
  uStack_7c = ((fVar10 * fVar9 - fVar13 * fVar5) - fVar8 * fVar15) - fVar4 * fVar14;
  uStack_84 = fVar4 * fVar5 + fVar8 * fVar9 + (fVar10 * fVar15 - fVar13 * fVar14);
  uStack_80 = fVar4 * fVar9 + ((fVar13 * fVar15 + fVar10 * fVar14) - fVar8 * fVar5);
LAB_00106ac1:
  auVar1._4_4_ = uStack_84;
  auVar1._0_4_ = local_88;
  auVar1._8_4_ = uStack_80;
  auVar1._12_4_ = uStack_7c;
  return auVar1;
}



/* JPH::GetRTTIOfType(JPH::HingeConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC76;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::HingeConstraint::~HingeConstraint() */

void __thiscall JPH::HingeConstraint::~HingeConstraint(HingeConstraint *this)

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
/* JPH::HingeConstraintSettings::~HingeConstraintSettings() */

void __thiscall
JPH::HingeConstraintSettings::~HingeConstraintSettings(HingeConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



