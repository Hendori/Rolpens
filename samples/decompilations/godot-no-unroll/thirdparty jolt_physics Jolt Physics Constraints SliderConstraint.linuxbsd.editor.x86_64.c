
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SliderConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::SliderConstraint::NotifyShapeChanged
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



/* JPH::SliderConstraint::GetConstraintToBody1Matrix() const */

void JPH::SliderConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar5 = *(undefined8 *)(in_RSI + 0x40);
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  uVar2 = *(undefined4 *)(in_RSI + 0x78);
  uVar6 = *(undefined8 *)(in_RSI + 0x70);
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  uVar3 = *(undefined4 *)(in_RSI + 0x88);
  uVar7 = *(undefined8 *)(in_RSI + 0x80);
  in_RDI[6] = uVar5;
  uVar5 = *(undefined8 *)(in_RSI + 0x60);
  uVar4 = *(undefined4 *)(in_RSI + 0x68);
  in_RDI[2] = uVar6;
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *in_RDI = uVar5;
  in_RDI[4] = uVar7;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  *(undefined4 *)((long)in_RDI + 0x3c) = 0x3f800000;
  *(undefined4 *)(in_RDI + 1) = uVar4;
  *(undefined4 *)(in_RDI + 3) = uVar2;
  *(undefined4 *)(in_RDI + 5) = uVar3;
  *(undefined4 *)(in_RDI + 7) = uVar1;
  return;
}



/* JPH::SliderConstraint::GetConstraintToBody2Matrix() const */

void JPH::SliderConstraint::GetConstraintToBody2Matrix(void)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_58;
  float afStack_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_10;
  
  fVar7 = _LC1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  afStack_50[1] = 0.0;
  fVar12 = (float)*(undefined8 *)(in_RSI + 0x98);
  local_3c = 0;
  local_2c = 0;
  fVar13 = (float)((ulong)*(undefined8 *)(in_RSI + 0x98) >> 0x20);
  local_48 = *(undefined8 *)(in_RSI + 0x70);
  fVar20 = fVar12 * (fVar12 + fVar12);
  fVar8 = (float)*(undefined8 *)(in_RSI + 0x90);
  fVar9 = (float)((ulong)*(undefined8 *)(in_RSI + 0x90) >> 0x20);
  fVar15 = fVar8 + fVar8;
  fVar19 = fVar9 + fVar9;
  local_38 = *(undefined8 *)(in_RSI + 0x80);
  fVar14 = fVar13 * (fVar12 + fVar12);
  fVar16 = _LC1 - fVar8 * fVar15;
  fVar17 = _LC1 - fVar20;
  fVar18 = _LC1 - fVar9 * fVar19;
  afStack_50[0] = *(float *)(in_RSI + 0x68);
  local_30 = *(undefined4 *)(in_RSI + 0x88);
  local_58 = *(undefined8 *)(in_RSI + 0x60);
  local_40 = *(undefined4 *)(in_RSI + 0x78);
  lVar10 = 0;
  do {
    fVar4 = *(float *)((long)afStack_50 + lVar10 + -8);
    fVar5 = *(float *)((long)afStack_50 + lVar10 + -4);
    fVar6 = *(float *)((long)afStack_50 + lVar10);
    lVar11 = lVar10 + 0x10;
    pfVar1 = (float *)(lVar10 + in_RDI);
    *pfVar1 = fVar6 * (fVar12 * fVar15 + fVar19 * fVar13) +
              fVar4 * (fVar18 - fVar20) + fVar5 * (fVar9 * fVar15 - fVar14);
    pfVar1[1] = fVar6 * (fVar12 * fVar19 - fVar15 * fVar13) +
                fVar4 * (fVar9 * fVar15 + fVar14) + fVar5 * (fVar17 - fVar8 * fVar15);
    pfVar1[2] = fVar6 * (fVar16 - fVar9 * fVar19) +
                fVar4 * (fVar12 * fVar15 - fVar19 * fVar13) +
                fVar5 * (fVar15 * fVar13 + fVar12 * fVar19);
    pfVar1[3] = fVar6 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0;
    lVar10 = lVar11;
  } while (lVar11 != 0x30);
  uVar3 = *(undefined8 *)(in_RSI + 0x50);
  uVar2 = *(undefined4 *)(in_RSI + 0x58);
  *(float *)(in_RDI + 0x3c) = fVar7;
  *(undefined8 *)(in_RDI + 0x30) = uVar3;
  *(undefined4 *)(in_RDI + 0x38) = uVar2;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SliderConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::SliderConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::SliderConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::SliderConstraintSettings::SaveBinaryState(SliderConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,1);
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



/* JPH::SliderConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::SliderConstraintSettings::RestoreBinaryState(SliderConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,1);
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



/* JPH::SliderConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::SliderConstraint::SaveState(SliderConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x34c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1f0,8);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x2c0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x30c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xd8,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xdc,4);
                    /* WARNING: Could not recover jumptable at 0x001005b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe0,4);
  return;
}



/* JPH::SliderConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::SliderConstraint::RestoreState(SliderConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1f0,8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xdc,4);
                    /* WARNING: Could not recover jumptable at 0x0010066f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe0,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::GetConstraintSettings() const */

void JPH::SliderConstraint::GetConstraintSettings(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 *puVar11;
  float fVar12;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
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
  
  puVar11 = (undefined8 *)(*Allocate)(0xd0);
  uVar4 = _UNK_00107fd8;
  uVar3 = __LC3;
  *(undefined4 *)(puVar11 + 1) = 0;
  fVar9 = _LC1;
  *(undefined1 *)((long)puVar11 + 0xc) = 1;
  *puVar11 = &PTR_GetRTTI_00107ec8;
  puVar11[3] = 0x3f80000000000000;
  uVar5 = _LC4;
  puVar11[10] = uVar3;
  puVar11[0xb] = uVar4;
  puVar11[0x12] = uVar5;
  *(undefined8 *)((long)puVar11 + 0xbc) = uVar5;
  puVar11[0x10] = uVar3;
  puVar11[0x11] = uVar4;
  uVar4 = _LC4;
  uVar3 = __LC5;
  puVar11[2] = 0;
  puVar11[4] = 0;
  *(undefined4 *)(puVar11 + 5) = 1;
  *(undefined1 *)((long)puVar11 + 0x2c) = 0;
  *(undefined1 *)(puVar11 + 0x13) = 0;
  *(undefined8 *)((long)puVar11 + 0x9c) = 0;
  *(undefined4 *)((long)puVar11 + 0xa4) = 0;
  *(undefined1 *)(puVar11 + 0x15) = 0;
  *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 8) = ZEXT416((uint)fVar9);
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0xe) = ZEXT416((uint)fVar9);
  *(undefined8 *)((long)puVar11 + 0xac) = uVar3;
  *(undefined8 *)((long)puVar11 + 0xb4) = uVar4;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar5 = *(undefined8 *)(in_RSI + 0x60);
  uVar6 = *(undefined8 *)(in_RSI + 0x68);
  uVar3 = *(undefined8 *)(in_RSI + 0x90);
  uVar7 = *(undefined8 *)(in_RSI + 0x40);
  uVar8 = *(undefined8 *)(in_RSI + 0x48);
  uVar4 = *(undefined8 *)(in_RSI + 0x98);
  *(undefined4 *)(puVar11 + 5) = 0;
  puVar11[8] = uVar5;
  puVar11[9] = uVar6;
  fVar9 = (float)uVar3;
  uVar5 = *(undefined8 *)(in_RSI + 0x50);
  uVar6 = *(undefined8 *)(in_RSI + 0x58);
  fVar10 = (float)((ulong)uVar3 >> 0x20);
  puVar11[6] = uVar7;
  puVar11[7] = uVar8;
  fVar12 = (float)uVar4;
  uVar3 = *(undefined8 *)(in_RSI + 0x70);
  uVar7 = *(undefined8 *)(in_RSI + 0x78);
  puVar11[0xc] = uVar5;
  puVar11[0xd] = uVar6;
  fVar21 = fVar10 + fVar10;
  fVar18 = fVar9 + fVar9;
  puVar11[10] = uVar3;
  puVar11[0xb] = uVar7;
  fVar13 = (float)((ulong)uVar4 >> 0x20);
  fVar22 = fVar12 * (fVar12 + fVar12);
  fVar15 = fVar13 * (fVar12 + fVar12);
  fVar16 = fVar12 * fVar18 + fVar21 * fVar13;
  fVar20 = fVar12 * fVar18 - fVar21 * fVar13;
  fVar23 = fVar12 * fVar21 - fVar18 * fVar13;
  fVar19 = fVar18 * fVar13 + fVar12 * fVar21;
  fVar17 = (_LC1 - fVar9 * fVar18) - fVar10 * fVar21;
  fVar14 = fVar10 * fVar18 + fVar15;
  fVar13 = (_LC1 - fVar10 * fVar21) - fVar22;
  fVar15 = fVar10 * fVar18 - fVar15;
  fVar18 = (_LC1 - fVar22) - fVar9 * fVar18;
  fVar9 = *(float *)(in_RSI + 0x60);
  fVar10 = *(float *)(in_RSI + 100);
  fVar12 = *(float *)(in_RSI + 0x68);
  *(float *)(puVar11 + 0xe) = fVar12 * fVar16 + fVar9 * fVar13 + fVar10 * fVar15;
  *(float *)((long)puVar11 + 0x74) = fVar12 * fVar23 + fVar9 * fVar14 + fVar10 * fVar18;
  *(float *)(puVar11 + 0xf) = fVar12 * fVar17 + fVar9 * fVar20 + fVar10 * fVar19;
  *(float *)((long)puVar11 + 0x7c) = fVar12 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0;
  fVar9 = *(float *)(in_RSI + 0x70);
  fVar10 = *(float *)(in_RSI + 0x74);
  fVar12 = *(float *)(in_RSI + 0x78);
  *(float *)(puVar11 + 0x10) = fVar13 * fVar9 + fVar10 * fVar15 + fVar12 * fVar16;
  *(float *)((long)puVar11 + 0x84) = fVar14 * fVar9 + fVar10 * fVar18 + fVar12 * fVar23;
  *(float *)(puVar11 + 0x11) = fVar20 * fVar9 + fVar10 * fVar19 + fVar12 * fVar17;
  *(float *)((long)puVar11 + 0x8c) = fVar9 * 0.0 + fVar10 * 0.0 + fVar12 * 0.0;
  puVar11[0x12] = *(undefined8 *)(in_RSI + 0xa4);
  uVar1 = *(undefined4 *)(in_RSI + 0xb8);
  uVar3 = *(undefined8 *)(in_RSI + 0xbc);
  uVar4 = *(undefined8 *)(in_RSI + 0xc4);
  puVar11[0x13] = *(undefined8 *)(in_RSI + 0xac);
  uVar5 = *(undefined8 *)(in_RSI + 200);
  uVar6 = *(undefined8 *)(in_RSI + 0xd0);
  uVar2 = *(undefined4 *)(in_RSI + 0xb4);
  puVar11[0x15] = uVar3;
  puVar11[0x16] = uVar4;
  *(undefined4 *)((long)puVar11 + 0xa4) = uVar1;
  *(undefined4 *)(puVar11 + 0x14) = uVar2;
  *(undefined8 *)((long)puVar11 + 0xb4) = uVar5;
  *(undefined8 *)((long)puVar11 + 0xbc) = uVar6;
  *in_RDI = puVar11;
  LOCK();
  *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
  UNLOCK();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&, JPH::Vec3, float, float)
   [clone .isra.0] */

undefined8
JPH::AxisConstraintPart::SolveVelocityConstraint
          (undefined8 param_1_00,undefined8 param_2_00,float param_3,float param_4,float *param_1,
          float *param_2,char param_7,float *param_8,char param_9)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float local_18;
  float fStack_14;
  
  fVar23 = (float)((ulong)param_2_00 >> 0x20);
  fVar19 = (float)param_2_00;
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  if (param_7 == '\x01') {
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_8[0x16];
    fVar27 = param_1[0xf];
    fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
               (param_2[2] - fVar17) * fVar19 +
               (param_2[1] - fVar16) * fStack_14 + (*param_2 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar27;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar26 = fVar26 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar26 * local_18 + fVar14;
    fVar16 = fVar26 * fStack_14 + fVar16;
    fVar17 = fVar26 * fVar19 + fVar17;
    fVar18 = fVar26 * fVar23 + fVar18;
  }
  else {
    if (param_7 == '\x02') {
      if (param_9 == '\x01') {
        fVar14 = *param_2;
        fVar16 = param_2[1];
        fVar17 = param_2[2];
        fVar18 = param_2[3];
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                    (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                    (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                   (fVar17 - param_8[2]) * fVar19 +
                   (fVar16 - param_8[1]) * fStack_14 + (fVar14 - *param_8) * local_18 + 0.0) -
                  ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                   (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                  (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar13) {
          param_3 = fVar13;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar21._1_3_ = 0;
        auVar21[0] = bVar1;
        auVar21[4] = bVar1;
        auVar21._5_3_ = 0;
        auVar21[8] = bVar1;
        auVar21._9_3_ = 0;
        auVar21[0xc] = bVar1;
        auVar21._13_3_ = 0;
        auVar8._4_4_ = _UNK_00107ff4;
        auVar8._0_4_ = __LC8;
        auVar8._8_4_ = _UNK_00107ff8;
        auVar8._12_4_ = _UNK_00107ffc;
        auVar21 = auVar21 & auVar8;
        bVar2 = auVar21._4_4_ == _UNK_00107ff4;
        bVar3 = auVar21._8_4_ == _UNK_00107ff8;
        bVar4 = auVar21._12_4_ == _UNK_00107ffc;
        *param_2 = (float)((uint)(fVar14 - fVar26 * local_18) & -(uint)(auVar21._0_4_ == __LC8));
        param_2[1] = (float)((uint)(fVar16 - fVar26 * fStack_14) & -(uint)bVar2);
        param_2[2] = (float)((uint)(fVar17 - fVar26 * fVar19) & -(uint)bVar3);
        param_2[3] = (float)((uint)(fVar18 - fVar26 * fVar23) & -(uint)bVar4);
      }
      else {
        if (param_9 == '\x02') {
          fVar16 = *param_2;
          fVar17 = param_2[1];
          fVar18 = param_2[2];
          fVar13 = param_2[3];
          fVar26 = param_8[0x16];
          fVar27 = param_2[0x16];
          fVar14 = param_1[0xf];
          fVar15 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                      (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                      (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                     (fVar18 - param_8[2]) * fVar19 +
                     (fVar17 - param_8[1]) * fStack_14 + (fVar16 - *param_8) * local_18 + 0.0) -
                    ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                     (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                    (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                   (param_1[0xe] * fVar14 + param_1[0xd])) * param_1[0xc] + fVar14;
          if (param_3 <= fVar15) {
            param_3 = fVar15;
          }
          if (param_3 <= param_4) {
            param_4 = param_3;
          }
          param_1[0xf] = param_4;
          iVar12 = _UNK_00107ffc;
          iVar11 = _UNK_00107ff8;
          iVar10 = _UNK_00107ff4;
          iVar9 = __LC8;
          param_4 = param_4 - fVar14;
          if (param_4 != 0.0) {
            bVar1 = *(byte *)((long)param_2 + 0x7a);
            fVar27 = fVar27 * param_4;
            auVar7._4_4_ = _UNK_00107ff4;
            auVar7._0_4_ = __LC8;
            auVar7._8_4_ = _UNK_00107ff8;
            auVar7._12_4_ = _UNK_00107ffc;
            fVar26 = fVar26 * param_4;
            auVar25._1_3_ = 0;
            auVar25[0] = bVar1;
            auVar25[4] = bVar1;
            auVar25._5_3_ = 0;
            auVar25[8] = bVar1;
            auVar25._9_3_ = 0;
            auVar25[0xc] = bVar1;
            auVar25._13_3_ = 0;
            auVar25 = auVar25 & auVar7;
            bVar2 = auVar25._4_4_ == _UNK_00107ff4;
            bVar3 = auVar25._8_4_ == _UNK_00107ff8;
            bVar4 = auVar25._12_4_ == _UNK_00107ffc;
            *param_2 = (float)((uint)(fVar16 - fVar27 * local_18) & -(uint)(auVar25._0_4_ == __LC8))
            ;
            param_2[1] = (float)((uint)(fVar17 - fVar27 * fStack_14) & -(uint)bVar2);
            param_2[2] = (float)((uint)(fVar18 - fVar27 * fVar19) & -(uint)bVar3);
            param_2[3] = (float)((uint)(fVar13 - fVar27 * fVar23) & -(uint)bVar4);
            fVar27 = param_1[7];
            fVar14 = param_1[8];
            fVar16 = param_1[9];
            param_2[4] = param_2[4] - param_1[6] * param_4;
            param_2[5] = param_2[5] - fVar27 * param_4;
            param_2[6] = param_2[6] - fVar14 * param_4;
            param_2[7] = param_2[7] - fVar16 * param_4;
            bVar1 = *(byte *)((long)param_8 + 0x7a);
            auVar22._1_3_ = 0;
            auVar22[0] = bVar1;
            auVar22[4] = bVar1;
            auVar22._5_3_ = 0;
            auVar22[8] = bVar1;
            auVar22._9_3_ = 0;
            auVar22[0xc] = bVar1;
            auVar22._13_3_ = 0;
            auVar22 = auVar22 & auVar7;
            *param_8 = (float)((uint)(local_18 * fVar26 + *param_8) &
                              -(uint)(auVar22._0_4_ == iVar9));
            param_8[1] = (float)((uint)(fStack_14 * fVar26 + param_8[1]) &
                                -(uint)(auVar22._4_4_ == iVar10));
            param_8[2] = (float)((uint)(fVar19 * fVar26 + param_8[2]) &
                                -(uint)(auVar22._8_4_ == iVar11));
            param_8[3] = (float)((uint)(fVar23 * fVar26 + param_8[3]) &
                                -(uint)(auVar22._12_4_ == iVar12));
            fVar19 = param_1[10];
            fVar23 = param_1[0xb];
            fVar26 = param_1[0xc];
            param_8[4] = param_1[9] * param_4 + param_8[4];
            param_8[5] = fVar19 * param_4 + param_8[5];
            param_8[6] = fVar23 * param_4 + param_8[6];
            param_8[7] = fVar26 * param_4 + param_8[7];
            return 1;
          }
          return 0;
        }
        if (param_9 != '\0') {
          return 0;
        }
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar14 = (((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                   (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                   (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                  fVar19 * (float)*(undefined8 *)(param_2 + 2) +
                  fStack_14 * (float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                  local_18 * (float)*(undefined8 *)param_2 + 0.0) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar14) {
          param_3 = fVar14;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar20._1_3_ = 0;
        auVar20[0] = bVar1;
        auVar20[4] = bVar1;
        auVar20._5_3_ = 0;
        auVar20[8] = bVar1;
        auVar20._9_3_ = 0;
        auVar20[0xc] = bVar1;
        auVar20._13_3_ = 0;
        auVar6._4_4_ = _UNK_00107ff4;
        auVar6._0_4_ = __LC8;
        auVar6._8_4_ = _UNK_00107ff8;
        auVar6._12_4_ = _UNK_00107ffc;
        auVar20 = auVar20 & auVar6;
        bVar2 = auVar20._4_4_ == _UNK_00107ff4;
        bVar3 = auVar20._8_4_ == _UNK_00107ff8;
        bVar4 = auVar20._12_4_ == _UNK_00107ffc;
        *param_2 = (float)(-(uint)(auVar20._0_4_ == __LC8) & (uint)(*param_2 - fVar26 * local_18));
        param_2[1] = (float)(-(uint)bVar2 & (uint)(param_2[1] - fVar26 * fStack_14));
        param_2[2] = (float)(-(uint)bVar3 & (uint)(param_2[2] - fVar26 * fVar19));
        param_2[3] = (float)(-(uint)bVar4 & (uint)(param_2[3] - fVar26 * fVar23));
      }
      fVar19 = param_1[7];
      fVar23 = param_1[8];
      fVar26 = param_1[9];
      param_2[4] = param_2[4] - param_1[6] * param_4;
      param_2[5] = param_2[5] - fVar19 * param_4;
      param_2[6] = param_2[6] - fVar23 * param_4;
      param_2[7] = param_2[7] - fVar26 * param_4;
      return 1;
    }
    if (param_7 != '\0') {
      return 0;
    }
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_1[0xf];
    fVar27 = param_8[0x16];
    fVar13 = ((((0.0 - fVar17) * fVar19 +
               (0.0 - fVar16) * fStack_14 + (0.0 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar26 + param_1[0xd])) * param_1[0xc] + fVar26;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar26;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar27 = fVar27 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar27 * local_18 + fVar14;
    fVar16 = fVar27 * fStack_14 + fVar16;
    fVar17 = fVar27 * fVar19 + fVar17;
    fVar18 = fVar27 * fVar23 + fVar18;
  }
  auVar24._1_3_ = 0;
  auVar24[0] = bVar1;
  auVar24[4] = bVar1;
  auVar24._5_3_ = 0;
  auVar24[8] = bVar1;
  auVar24._9_3_ = 0;
  auVar24[0xc] = bVar1;
  auVar24._13_3_ = 0;
  auVar5._4_4_ = _UNK_00107ff4;
  auVar5._0_4_ = __LC8;
  auVar5._8_4_ = _UNK_00107ff8;
  auVar5._12_4_ = _UNK_00107ffc;
  auVar24 = auVar24 & auVar5;
  bVar2 = auVar24._4_4_ == _UNK_00107ff4;
  bVar3 = auVar24._8_4_ == _UNK_00107ff8;
  bVar4 = auVar24._12_4_ == _UNK_00107ffc;
  *param_8 = (float)((uint)fVar14 & -(uint)(auVar24._0_4_ == __LC8));
  param_8[1] = (float)((uint)fVar16 & -(uint)bVar2);
  param_8[2] = (float)((uint)fVar17 & -(uint)bVar3);
  param_8[3] = (float)((uint)fVar18 & -(uint)bVar4);
  fVar19 = param_1[10];
  fVar23 = param_1[0xb];
  fVar26 = param_1[0xc];
  param_8[4] = param_1[9] * param_4 + param_8[4];
  param_8[5] = fVar19 * param_4 + param_8[5];
  param_8[6] = fVar23 * param_4 + param_8[6];
  param_8[7] = fVar26 * param_4 + param_8[7];
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*Allocate)(0xd0);
  uVar4 = _LC4;
  uVar3 = _UNK_00107fd8;
  uVar2 = __LC3;
  uVar1 = _LC1;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[10] = uVar2;
  puVar5[0xb] = uVar3;
  puVar5[0x10] = uVar2;
  puVar5[0x11] = uVar3;
  uVar3 = _LC4;
  uVar2 = __LC5;
  *(undefined1 *)((long)puVar5 + 0xc) = 1;
  *puVar5 = &PTR_GetRTTI_00107ec8;
  puVar5[2] = 0;
  puVar5[3] = 0x3f80000000000000;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 1;
  *(undefined1 *)((long)puVar5 + 0x2c) = 0;
  puVar5[0x12] = uVar4;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined8 *)((long)puVar5 + 0x9c) = 0;
  *(undefined4 *)((long)puVar5 + 0xa4) = 0;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  *(undefined8 *)((long)puVar5 + 0xbc) = uVar4;
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 8) = ZEXT416(uVar1);
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = ZEXT416(uVar1);
  *(undefined8 *)((long)puVar5 + 0xac) = uVar2;
  *(undefined8 *)((long)puVar5 + 0xb4) = uVar3;
  return;
}



/* JPH::SliderConstraint::ResetWarmStart() */

void __thiscall JPH::SliderConstraint::ResetWarmStart(SliderConstraint *this)

{
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  return;
}



/* JPH::SliderConstraintSettings::GetRTTI() const */

undefined1 * JPH::SliderConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti,
                      "SliderConstraintSettings",0xd0,
                      GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::SliderConstraint::WarmStartVelocityConstraint(SliderConstraint *this,float param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  
  lVar28 = *(long *)(this + 0x30);
  fVar33 = *(float *)(this + 0x120);
  fVar32 = *(float *)(this + 0x124);
  fVar36 = *(float *)(this + 0x128);
  fVar47 = *(float *)(this + 300);
  cVar1 = *(char *)(*(long *)(this + 0x28) + 0x78);
  pfVar5 = *(float **)(*(long *)(this + 0x28) + 0x48);
  fVar37 = *(float *)(this + 0x34c) * param_1;
  pfVar6 = *(float **)(lVar28 + 0x48);
  cVar2 = *(char *)(lVar28 + 0x78);
  if (cVar1 == '\x02') {
    fVar30 = pfVar5[0x16];
    if (cVar2 == '\x02') {
      fVar31 = pfVar6[0x16];
      *(float *)(this + 0x34c) = fVar37;
      iVar26 = _UNK_00107ffc;
      iVar25 = _UNK_00107ff8;
      iVar24 = _UNK_00107ff4;
      iVar23 = __LC8;
      if (fVar37 != 0.0) {
        fVar30 = fVar30 * fVar37;
        bVar4 = *(byte *)((long)pfVar5 + 0x7a);
        auVar21._4_4_ = _UNK_00107ff4;
        auVar21._0_4_ = __LC8;
        auVar21._8_4_ = _UNK_00107ff8;
        auVar21._12_4_ = _UNK_00107ffc;
        auVar41._1_3_ = 0;
        auVar41[0] = bVar4;
        bVar3 = *(byte *)((long)pfVar6 + 0x7a);
        lVar28 = 0;
        auVar41[4] = bVar4;
        auVar41._5_3_ = 0;
        auVar41[8] = bVar4;
        auVar41._9_3_ = 0;
        auVar41[0xc] = bVar4;
        auVar41._13_3_ = 0;
        auVar41 = auVar41 & auVar21;
        bVar7 = auVar41._4_4_ == _UNK_00107ff4;
        bVar8 = auVar41._8_4_ == _UNK_00107ff8;
        bVar9 = auVar41._12_4_ == _UNK_00107ffc;
        *pfVar5 = (float)(-(uint)(auVar41._0_4_ == __LC8) & (uint)(*pfVar5 - fVar30 * fVar33));
        pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar30 * fVar32));
        pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar30 * fVar36));
        pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar30 * fVar47));
        fVar31 = fVar37 * fVar31;
        fVar30 = *(float *)(this + 0x32c);
        fVar10 = *(float *)(this + 0x330);
        fVar11 = *(float *)(this + 0x334);
        pfVar5[4] = pfVar5[4] - *(float *)(this + 0x328) * fVar37;
        pfVar5[5] = pfVar5[5] - fVar30 * fVar37;
        pfVar5[6] = pfVar5[6] - fVar10 * fVar37;
        pfVar5[7] = pfVar5[7] - fVar11 * fVar37;
        auVar42._1_3_ = 0;
        auVar42[0] = bVar3;
        auVar42[4] = bVar3;
        auVar42._5_3_ = 0;
        auVar42[8] = bVar3;
        auVar42._9_3_ = 0;
        auVar42[0xc] = bVar3;
        auVar42._13_3_ = 0;
        auVar42 = auVar42 & auVar21;
        *pfVar6 = (float)((uint)(fVar31 * fVar33 + *pfVar6) & -(uint)(auVar42._0_4_ == iVar23));
        pfVar6[1] = (float)((uint)(fVar31 * fVar32 + pfVar6[1]) & -(uint)(auVar42._4_4_ == iVar24));
        pfVar6[2] = (float)((uint)(fVar31 * fVar36 + pfVar6[2]) & -(uint)(auVar42._8_4_ == iVar25));
        pfVar6[3] = (float)((uint)(fVar31 * fVar47 + pfVar6[3]) & -(uint)(auVar42._12_4_ == iVar26))
        ;
        fVar33 = *(float *)(this + 0x338);
        fVar32 = *(float *)(this + 0x33c);
        fVar36 = *(float *)(this + 0x340);
        pfVar6[4] = *(float *)(this + 0x334) * fVar37 + pfVar6[4];
        pfVar6[5] = fVar33 * fVar37 + pfVar6[5];
        pfVar6[6] = fVar32 * fVar37 + pfVar6[6];
        pfVar6[7] = fVar36 * fVar37 + pfVar6[7];
      }
    }
    else {
      *(float *)(this + 0x34c) = fVar37;
      if (fVar37 != 0.0) {
        fVar30 = fVar30 * fVar37;
        bVar4 = *(byte *)((long)pfVar5 + 0x7a);
        lVar28 = 0;
        auVar44._1_3_ = 0;
        auVar44[0] = bVar4;
        auVar44[4] = bVar4;
        auVar44._5_3_ = 0;
        auVar44[8] = bVar4;
        auVar44._9_3_ = 0;
        auVar44[0xc] = bVar4;
        auVar44._13_3_ = 0;
        auVar20._4_4_ = _UNK_00107ff4;
        auVar20._0_4_ = __LC8;
        auVar20._8_4_ = _UNK_00107ff8;
        auVar20._12_4_ = _UNK_00107ffc;
        auVar44 = auVar44 & auVar20;
        bVar7 = auVar44._4_4_ == _UNK_00107ff4;
        bVar8 = auVar44._8_4_ == _UNK_00107ff8;
        bVar9 = auVar44._12_4_ == _UNK_00107ffc;
        *pfVar5 = (float)(-(uint)(auVar44._0_4_ == __LC8) & (uint)(*pfVar5 - fVar30 * fVar33));
        pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar30 * fVar32));
        pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar30 * fVar36));
        pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar30 * fVar47));
        fVar33 = *(float *)(this + 0x32c);
        fVar32 = *(float *)(this + 0x330);
        fVar36 = *(float *)(this + 0x334);
        pfVar5[4] = pfVar5[4] - fVar37 * *(float *)(this + 0x328);
        pfVar5[5] = pfVar5[5] - fVar37 * fVar33;
        pfVar5[6] = pfVar5[6] - fVar37 * fVar32;
        pfVar5[7] = pfVar5[7] - fVar37 * fVar36;
      }
    }
  }
  else {
    fVar30 = pfVar6[0x16];
    *(float *)(this + 0x34c) = fVar37;
    if (fVar37 != 0.0) {
      fVar30 = fVar30 * fVar37;
      bVar4 = *(byte *)((long)pfVar6 + 0x7a);
      lVar28 = 0;
      auVar45._1_3_ = 0;
      auVar45[0] = bVar4;
      auVar45[4] = bVar4;
      auVar45._5_3_ = 0;
      auVar45[8] = bVar4;
      auVar45._9_3_ = 0;
      auVar45[0xc] = bVar4;
      auVar45._13_3_ = 0;
      auVar22._4_4_ = _UNK_00107ff4;
      auVar22._0_4_ = __LC8;
      auVar22._8_4_ = _UNK_00107ff8;
      auVar22._12_4_ = _UNK_00107ffc;
      auVar45 = auVar45 & auVar22;
      bVar7 = auVar45._4_4_ == _UNK_00107ff4;
      bVar8 = auVar45._8_4_ == _UNK_00107ff8;
      bVar9 = auVar45._12_4_ == _UNK_00107ffc;
      *pfVar6 = (float)((uint)(fVar30 * fVar33 + *pfVar6) & -(uint)(auVar45._0_4_ == __LC8));
      pfVar6[1] = (float)((uint)(fVar30 * fVar32 + pfVar6[1]) & -(uint)bVar7);
      pfVar6[2] = (float)((uint)(fVar30 * fVar36 + pfVar6[2]) & -(uint)bVar8);
      pfVar6[3] = (float)((uint)(fVar30 * fVar47 + pfVar6[3]) & -(uint)bVar9);
      fVar33 = *(float *)(this + 0x338);
      fVar32 = *(float *)(this + 0x33c);
      fVar36 = *(float *)(this + 0x340);
      pfVar6[4] = fVar37 * *(float *)(this + 0x334) + pfVar6[4];
      pfVar6[5] = fVar37 * fVar33 + pfVar6[5];
      pfVar6[6] = fVar37 * fVar32 + pfVar6[6];
      pfVar6[7] = fVar37 * fVar36 + pfVar6[7];
    }
  }
  fVar33 = *(float *)(this + 0x1f0);
  fVar32 = param_1 * (float)*(undefined8 *)(this + 0x1f0);
  fVar36 = param_1 * (float)((ulong)*(undefined8 *)(this + 0x1f0) >> 0x20);
  *(ulong *)(this + 0x1f0) = CONCAT44(fVar36,fVar32);
  uVar29 = CONCAT71((int7)((ulong)lVar28 >> 8),NAN(*(float *)(this + 500) * param_1)) & 0xffffffff;
  if (*(float *)(this + 500) * param_1 != 0.0) {
    uVar29 = 1;
  }
  uVar27 = (uint)uVar29;
  if ((char)uVar29 == '\0') {
    uVar27 = (uint)CONCAT71((int7)(uVar29 >> 8),NAN(fVar33 * param_1));
    if (fVar33 * param_1 != 0.0) {
      uVar27 = 1;
    }
    if ((char)uVar27 != '\0') goto LAB_00101500;
  }
  else {
LAB_00101500:
    fVar33 = *(float *)(this + 0x140) * fVar36 + *(float *)(this + 0x130) * fVar32;
    fVar47 = *(float *)(this + 0x144) * fVar36 + *(float *)(this + 0x134) * fVar32;
    fVar37 = *(float *)(this + 0x148) * fVar36 + *(float *)(this + 0x138) * fVar32;
    fVar30 = *(float *)(this + 0x14c) * fVar36 + *(float *)(this + 0x13c) * fVar32;
    if (cVar1 == '\x02') {
      fVar31 = pfVar5[0x16];
      bVar4 = *(byte *)((long)pfVar5 + 0x7a);
      uVar27 = (uint)bVar4;
      auVar43._1_3_ = 0;
      auVar43[0] = bVar4;
      auVar43[4] = bVar4;
      auVar43._5_3_ = 0;
      auVar43[8] = bVar4;
      auVar43._9_3_ = 0;
      auVar43[0xc] = bVar4;
      auVar43._13_3_ = 0;
      auVar19._4_4_ = _UNK_00107ff4;
      auVar19._0_4_ = __LC8;
      auVar19._8_4_ = _UNK_00107ff8;
      auVar19._12_4_ = _UNK_00107ffc;
      auVar43 = auVar43 & auVar19;
      bVar7 = auVar43._4_4_ == _UNK_00107ff4;
      bVar8 = auVar43._8_4_ == _UNK_00107ff8;
      bVar9 = auVar43._12_4_ == _UNK_00107ffc;
      *pfVar5 = (float)(-(uint)(auVar43._0_4_ == __LC8) & (uint)(*pfVar5 - fVar31 * fVar33));
      pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar31 * fVar47));
      pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar31 * fVar37));
      pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar31 * fVar30));
      fVar31 = *(float *)(this + 0x1b4);
      fVar10 = *(float *)(this + 0x1b8);
      fVar11 = *(float *)(this + 0x1bc);
      fVar12 = *(float *)(this + 0x1a4);
      fVar13 = *(float *)(this + 0x1a8);
      fVar14 = *(float *)(this + 0x1ac);
      pfVar5[4] = pfVar5[4] -
                  (*(float *)(this + 0x1b0) * fVar36 + *(float *)(this + 0x1a0) * fVar32);
      pfVar5[5] = pfVar5[5] - (fVar31 * fVar36 + fVar12 * fVar32);
      pfVar5[6] = pfVar5[6] - (fVar10 * fVar36 + fVar13 * fVar32);
      pfVar5[7] = pfVar5[7] - (fVar11 * fVar36 + fVar14 * fVar32);
    }
    if (cVar2 == '\x02') {
      bVar4 = *(byte *)((long)pfVar6 + 0x7a);
      fVar31 = pfVar6[0x16];
      uVar27 = CONCAT31(0,bVar4);
      auVar46[4] = bVar4;
      auVar46._0_4_ = uVar27;
      auVar46._5_3_ = 0;
      auVar46[8] = bVar4;
      auVar46._9_3_ = 0;
      auVar46[0xc] = bVar4;
      auVar46._13_3_ = 0;
      auVar18._4_4_ = _UNK_00107ff4;
      auVar18._0_4_ = __LC8;
      auVar18._8_4_ = _UNK_00107ff8;
      auVar18._12_4_ = _UNK_00107ffc;
      auVar46 = auVar46 & auVar18;
      bVar7 = auVar46._4_4_ == _UNK_00107ff4;
      bVar8 = auVar46._8_4_ == _UNK_00107ff8;
      bVar9 = auVar46._12_4_ == _UNK_00107ffc;
      *pfVar6 = (float)((uint)(fVar31 * fVar33 + *pfVar6) & -(uint)(auVar46._0_4_ == __LC8));
      pfVar6[1] = (float)((uint)(fVar31 * fVar47 + pfVar6[1]) & -(uint)bVar7);
      pfVar6[2] = (float)((uint)(fVar31 * fVar37 + pfVar6[2]) & -(uint)bVar8);
      pfVar6[3] = (float)((uint)(fVar31 * fVar30 + pfVar6[3]) & -(uint)bVar9);
      fVar33 = *(float *)(this + 0x1d4);
      fVar47 = *(float *)(this + 0x1d8);
      fVar37 = *(float *)(this + 0x1dc);
      fVar30 = *(float *)(this + 0x1c4);
      fVar31 = *(float *)(this + 0x1c8);
      fVar10 = *(float *)(this + 0x1cc);
      pfVar6[4] = fVar32 * *(float *)(this + 0x1c0) + fVar36 * *(float *)(this + 0x1d0) + pfVar6[4];
      pfVar6[5] = fVar32 * fVar30 + fVar36 * fVar33 + pfVar6[5];
      pfVar6[6] = fVar32 * fVar31 + fVar36 * fVar47 + pfVar6[6];
      pfVar6[7] = fVar32 * fVar10 + fVar36 * fVar37 + pfVar6[7];
    }
  }
  fVar33 = param_1 * *(float *)(this + 0x2c0);
  fVar32 = param_1 * *(float *)(this + 0x2c4);
  fVar36 = param_1 * *(float *)(this + 0x2c8);
  auVar38._4_4_ = -(uint)(fVar32 == 0.0);
  auVar38._0_4_ = -(uint)(fVar33 == 0.0);
  auVar38._8_4_ = -(uint)(fVar36 == 0.0);
  auVar38._12_4_ = -(uint)(param_1 * *(float *)(this + 0x2cc) == 0.0);
  *(float *)(this + 0x2c0) = fVar33;
  *(float *)(this + 0x2c4) = fVar32;
  *(float *)(this + 0x2c8) = fVar36;
  *(float *)(this + 0x2cc) = param_1 * *(float *)(this + 0x2cc);
  uVar27 = movmskps(uVar27,auVar38);
  if ((~uVar27 & 7) == 0) {
    fVar33 = *(float *)(this + 0x120);
    fVar32 = *(float *)(this + 0x124);
    fVar36 = *(float *)(this + 0x128);
    fVar47 = *(float *)(this + 300);
    if (cVar1 == '\x02') {
      if (cVar2 == '\x02') goto LAB_00101317;
      goto LAB_00101422;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar47 = *(float *)(this + 0x204);
      fVar37 = *(float *)(this + 0x208);
      fVar30 = *(float *)(this + 0x20c);
      fVar31 = *(float *)(this + 0x214);
      fVar10 = *(float *)(this + 0x218);
      fVar11 = *(float *)(this + 0x21c);
      fVar12 = *(float *)(this + 0x224);
      fVar13 = *(float *)(this + 0x228);
      fVar14 = *(float *)(this + 0x22c);
      pfVar5[4] = pfVar5[4] -
                  (*(float *)(this + 0x200) * fVar33 + *(float *)(this + 0x210) * fVar32 +
                  *(float *)(this + 0x220) * fVar36);
      pfVar5[5] = pfVar5[5] - (fVar47 * fVar33 + fVar31 * fVar32 + fVar12 * fVar36);
      pfVar5[6] = pfVar5[6] - (fVar37 * fVar33 + fVar10 * fVar32 + fVar13 * fVar36);
      pfVar5[7] = pfVar5[7] - (fVar30 * fVar33 + fVar11 * fVar32 + fVar14 * fVar36);
      if (cVar2 == '\x02') {
        fVar47 = *(float *)(this + 0x244);
        fVar37 = *(float *)(this + 0x248);
        fVar30 = *(float *)(this + 0x24c);
        fVar31 = *(float *)(this + 0x254);
        fVar10 = *(float *)(this + 600);
        fVar11 = *(float *)(this + 0x25c);
        fVar12 = *(float *)(this + 0x264);
        fVar13 = *(float *)(this + 0x268);
        fVar14 = *(float *)(this + 0x26c);
        pfVar6[4] = fVar36 * *(float *)(this + 0x260) +
                    fVar33 * *(float *)(this + 0x240) + fVar32 * *(float *)(this + 0x250) +
                    pfVar6[4];
        pfVar6[5] = fVar36 * fVar12 + fVar33 * fVar47 + fVar32 * fVar31 + pfVar6[5];
        pfVar6[6] = fVar36 * fVar13 + fVar33 * fVar37 + fVar32 * fVar10 + pfVar6[6];
        pfVar6[7] = fVar36 * fVar14 + fVar33 * fVar30 + fVar32 * fVar11 + pfVar6[7];
        fVar33 = *(float *)(this + 0x120);
        fVar32 = *(float *)(this + 0x124);
        fVar36 = *(float *)(this + 0x128);
        fVar47 = *(float *)(this + 300);
LAB_00101317:
        fVar37 = pfVar6[0x16];
        fVar30 = pfVar5[0x16];
        fVar31 = param_1 * *(float *)(this + 0x30c);
        *(float *)(this + 0x30c) = fVar31;
        iVar26 = _UNK_00107ffc;
        iVar25 = _UNK_00107ff8;
        iVar24 = _UNK_00107ff4;
        iVar23 = __LC8;
        if (fVar31 == 0.0) {
          return;
        }
        fVar30 = fVar30 * fVar31;
        bVar4 = *(byte *)((long)pfVar5 + 0x7a);
        auVar17._4_4_ = _UNK_00107ff4;
        auVar17._0_4_ = __LC8;
        auVar17._8_4_ = _UNK_00107ff8;
        auVar17._12_4_ = _UNK_00107ffc;
        auVar39._1_3_ = 0;
        auVar39[0] = bVar4;
        auVar39[4] = bVar4;
        auVar39._5_3_ = 0;
        auVar39[8] = bVar4;
        auVar39._9_3_ = 0;
        auVar39[0xc] = bVar4;
        auVar39._13_3_ = 0;
        auVar39 = auVar39 & auVar17;
        bVar7 = auVar39._4_4_ == _UNK_00107ff4;
        bVar8 = auVar39._8_4_ == _UNK_00107ff8;
        bVar9 = auVar39._12_4_ == _UNK_00107ffc;
        *pfVar5 = (float)(-(uint)(auVar39._0_4_ == __LC8) & (uint)(*pfVar5 - fVar30 * fVar33));
        pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar30 * fVar32));
        pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar30 * fVar36));
        pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar30 * fVar47));
        fVar30 = *(float *)(this + 0x2ec);
        fVar10 = *(float *)(this + 0x2f0);
        fVar11 = *(float *)(this + 0x2f4);
        fVar37 = fVar31 * fVar37;
        pfVar5[4] = pfVar5[4] - *(float *)(this + 0x2e8) * fVar31;
        pfVar5[5] = pfVar5[5] - fVar30 * fVar31;
        pfVar5[6] = pfVar5[6] - fVar10 * fVar31;
        pfVar5[7] = pfVar5[7] - fVar11 * fVar31;
        bVar4 = *(byte *)((long)pfVar6 + 0x7a);
        auVar34._1_3_ = 0;
        auVar34[0] = bVar4;
        auVar34[4] = bVar4;
        auVar34._5_3_ = 0;
        auVar34[8] = bVar4;
        auVar34._9_3_ = 0;
        auVar34[0xc] = bVar4;
        auVar34._13_3_ = 0;
        auVar34 = auVar34 & auVar17;
        *pfVar6 = (float)((uint)(fVar37 * fVar33 + *pfVar6) & -(uint)(auVar34._0_4_ == iVar23));
        pfVar6[1] = (float)((uint)(fVar37 * fVar32 + pfVar6[1]) & -(uint)(auVar34._4_4_ == iVar24));
        pfVar6[2] = (float)((uint)(fVar37 * fVar36 + pfVar6[2]) & -(uint)(auVar34._8_4_ == iVar25));
        pfVar6[3] = (float)((uint)(fVar37 * fVar47 + pfVar6[3]) & -(uint)(auVar34._12_4_ == iVar26))
        ;
        fVar33 = *(float *)(this + 0x2f8);
        fVar32 = *(float *)(this + 0x2fc);
        fVar36 = *(float *)(this + 0x300);
        pfVar6[4] = *(float *)(this + 0x2f4) * fVar31 + pfVar6[4];
        pfVar6[5] = fVar33 * fVar31 + pfVar6[5];
        pfVar6[6] = fVar32 * fVar31 + pfVar6[6];
        pfVar6[7] = fVar36 * fVar31 + pfVar6[7];
        return;
      }
      fVar33 = *(float *)(this + 0x120);
      fVar32 = *(float *)(this + 0x124);
      fVar36 = *(float *)(this + 0x128);
      fVar47 = *(float *)(this + 300);
LAB_00101422:
      fVar30 = param_1 * *(float *)(this + 0x30c);
      fVar37 = pfVar5[0x16];
      *(float *)(this + 0x30c) = fVar30;
      if (fVar30 == 0.0) {
        return;
      }
      fVar37 = fVar37 * fVar30;
      bVar4 = *(byte *)((long)pfVar5 + 0x7a);
      auVar35._1_3_ = 0;
      auVar35[0] = bVar4;
      auVar35[4] = bVar4;
      auVar35._5_3_ = 0;
      auVar35[8] = bVar4;
      auVar35._9_3_ = 0;
      auVar35[0xc] = bVar4;
      auVar35._13_3_ = 0;
      auVar16._4_4_ = _UNK_00107ff4;
      auVar16._0_4_ = __LC8;
      auVar16._8_4_ = _UNK_00107ff8;
      auVar16._12_4_ = _UNK_00107ffc;
      auVar35 = auVar35 & auVar16;
      bVar7 = auVar35._4_4_ == _UNK_00107ff4;
      bVar8 = auVar35._8_4_ == _UNK_00107ff8;
      bVar9 = auVar35._12_4_ == _UNK_00107ffc;
      *pfVar5 = (float)(-(uint)(auVar35._0_4_ == __LC8) & (uint)(*pfVar5 - fVar37 * fVar33));
      pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar37 * fVar32));
      pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar37 * fVar36));
      pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar37 * fVar47));
      fVar33 = *(float *)(this + 0x2ec);
      fVar32 = *(float *)(this + 0x2f0);
      fVar36 = *(float *)(this + 0x2f4);
      pfVar5[4] = pfVar5[4] - *(float *)(this + 0x2e8) * fVar30;
      pfVar5[5] = pfVar5[5] - fVar33 * fVar30;
      pfVar5[6] = pfVar5[6] - fVar32 * fVar30;
      pfVar5[7] = pfVar5[7] - fVar36 * fVar30;
      return;
    }
    if (cVar2 == '\x02') {
      fVar47 = *(float *)(this + 0x254);
      fVar37 = *(float *)(this + 600);
      fVar30 = *(float *)(this + 0x25c);
      fVar31 = *(float *)(this + 0x244);
      fVar10 = *(float *)(this + 0x248);
      fVar11 = *(float *)(this + 0x24c);
      fVar12 = *(float *)(this + 0x264);
      fVar13 = *(float *)(this + 0x268);
      fVar14 = *(float *)(this + 0x26c);
      pfVar6[4] = fVar36 * *(float *)(this + 0x260) +
                  fVar32 * *(float *)(this + 0x250) + fVar33 * *(float *)(this + 0x240) + pfVar6[4];
      pfVar6[5] = fVar36 * fVar12 + fVar32 * fVar47 + fVar33 * fVar31 + pfVar6[5];
      pfVar6[6] = fVar36 * fVar13 + fVar32 * fVar37 + fVar33 * fVar10 + pfVar6[6];
      pfVar6[7] = fVar36 * fVar14 + fVar32 * fVar30 + fVar33 * fVar11 + pfVar6[7];
    }
    fVar33 = *(float *)(this + 0x120);
    fVar32 = *(float *)(this + 0x124);
    fVar36 = *(float *)(this + 0x128);
    fVar47 = *(float *)(this + 300);
  }
  fVar30 = param_1 * *(float *)(this + 0x30c);
  fVar37 = pfVar6[0x16];
  *(float *)(this + 0x30c) = fVar30;
  if (fVar30 == 0.0) {
    return;
  }
  fVar37 = fVar37 * fVar30;
  bVar4 = *(byte *)((long)pfVar6 + 0x7a);
  auVar40._1_3_ = 0;
  auVar40[0] = bVar4;
  auVar40[4] = bVar4;
  auVar40._5_3_ = 0;
  auVar40[8] = bVar4;
  auVar40._9_3_ = 0;
  auVar40[0xc] = bVar4;
  auVar40._13_3_ = 0;
  auVar15._4_4_ = _UNK_00107ff4;
  auVar15._0_4_ = __LC8;
  auVar15._8_4_ = _UNK_00107ff8;
  auVar15._12_4_ = _UNK_00107ffc;
  auVar40 = auVar40 & auVar15;
  bVar7 = auVar40._4_4_ == _UNK_00107ff4;
  bVar8 = auVar40._8_4_ == _UNK_00107ff8;
  bVar9 = auVar40._12_4_ == _UNK_00107ffc;
  *pfVar6 = (float)((uint)(fVar37 * fVar33 + *pfVar6) & -(uint)(auVar40._0_4_ == __LC8));
  pfVar6[1] = (float)((uint)(fVar37 * fVar32 + pfVar6[1]) & -(uint)bVar7);
  pfVar6[2] = (float)((uint)(fVar37 * fVar36 + pfVar6[2]) & -(uint)bVar8);
  pfVar6[3] = (float)((uint)(fVar37 * fVar47 + pfVar6[3]) & -(uint)bVar9);
  fVar33 = *(float *)(this + 0x2f8);
  fVar32 = *(float *)(this + 0x2fc);
  fVar36 = *(float *)(this + 0x300);
  pfVar6[4] = fVar30 * *(float *)(this + 0x2f4) + pfVar6[4];
  pfVar6[5] = fVar30 * fVar33 + pfVar6[5];
  pfVar6[6] = fVar30 * fVar32 + pfVar6[6];
  pfVar6[7] = fVar30 * fVar36 + pfVar6[7];
  return;
}



/* JPH::SliderConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void __thiscall
JPH::SliderConstraint::DrawConstraintLimits(SliderConstraint *this,DebugRenderer *param_1)

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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (this[0xa0] != (SliderConstraint)0x0) {
    puVar1 = *(undefined8 **)(this + 0x28);
    fVar7 = (float)puVar1[2];
    fVar5 = (float)puVar1[3];
    fVar8 = (float)((ulong)puVar1[2] >> 0x20);
    fVar11 = fVar7 + fVar7;
    fVar14 = fVar8 + fVar8;
    fVar6 = (float)((ulong)puVar1[3] >> 0x20);
    puVar2 = *(undefined8 **)(this + 0x30);
    fVar22 = fVar5 * (fVar5 + fVar5);
    fVar10 = fVar6 * (fVar5 + fVar5);
    fVar27 = fVar5 * fVar11 + fVar14 * fVar6;
    fVar13 = fVar5 * fVar11 - fVar14 * fVar6;
    fVar25 = fVar5 * fVar14 - fVar11 * fVar6;
    fVar12 = fVar11 * fVar6 + fVar5 * fVar14;
    fVar9 = (float)puVar2[2];
    fVar15 = (float)puVar2[3];
    fVar17 = (float)((ulong)puVar2[3] >> 0x20);
    fVar21 = (_LC1 - fVar7 * fVar11) - fVar8 * fVar14;
    fVar29 = fVar8 * fVar11 - fVar10;
    fVar10 = fVar8 * fVar11 + fVar10;
    fVar11 = (_LC1 - fVar22) - fVar7 * fVar11;
    fVar24 = fVar9 + fVar9;
    fVar22 = (_LC1 - fVar8 * fVar14) - fVar22;
    fVar23 = (float)((ulong)puVar2[2] >> 0x20);
    fVar26 = fVar23 + fVar23;
    fVar28 = fVar15 * (fVar15 + fVar15);
    fVar14 = fVar17 * (fVar15 + fVar15);
    fVar5 = *(float *)(this + 0x60);
    fVar6 = *(float *)(this + 100);
    fVar7 = *(float *)(this + 0x68);
    fVar16 = fVar5 * fVar22 + fVar6 * fVar29 + fVar7 * fVar27;
    fVar18 = fVar5 * fVar10 + fVar6 * fVar11 + fVar7 * fVar25;
    fVar19 = fVar5 * fVar13 + fVar6 * fVar12 + fVar7 * fVar21;
    fVar20 = fVar5 * 0.0 + fVar6 * 0.0 + fVar7 * 0.0;
    fVar5 = *(float *)(this + 0x40);
    fVar6 = *(float *)(this + 0x44);
    fVar7 = *(float *)(this + 0x48);
    local_58._0_4_ = (float)*puVar1;
    local_58._4_4_ = (float)((ulong)*puVar1 >> 0x20);
    local_58._0_4_ = fVar7 * fVar27 + fVar22 * fVar5 + fVar29 * fVar6 + (float)local_58;
    local_58._4_4_ = fVar7 * fVar25 + fVar10 * fVar5 + fVar11 * fVar6 + local_58._4_4_;
    fVar10 = fVar7 * fVar21 + fVar13 * fVar5 + fVar12 * fVar6 + *(float *)(puVar1 + 1);
    fVar11 = fVar7 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0 + 1.0;
    fVar6 = *(float *)(this + 0x50);
    fVar7 = *(float *)(this + 0x54);
    fVar8 = *(float *)(this + 0x58);
    uStack_50 = CONCAT44(fVar11,fVar10);
    local_48._0_4_ = (float)*puVar2;
    local_48._4_4_ = (float)((ulong)*puVar2 >> 0x20);
    fVar5 = *(float *)(this + 0xa4);
    local_48 = CONCAT44(((_LC1 - fVar28) - fVar9 * fVar24) * fVar7 +
                        fVar6 * (fVar23 * fVar24 + fVar14) +
                        (fVar15 * fVar26 - fVar24 * fVar17) * fVar8 + local_48._4_4_,
                        (fVar23 * fVar24 - fVar14) * fVar7 +
                        fVar6 * ((_LC1 - fVar23 * fVar26) - fVar28) +
                        (fVar15 * fVar24 + fVar26 * fVar17) * fVar8 + (float)local_48);
    uStack_40 = CONCAT44(fVar7 * 0.0 + fVar6 * 0.0 + fVar8 * 0.0 + 1.0,
                         (fVar24 * fVar17 + fVar15 * fVar26) * fVar7 +
                         fVar6 * (fVar15 * fVar24 - fVar26 * fVar17) +
                         ((_LC1 - fVar9 * fVar24) - fVar23 * fVar26) * fVar8 +
                         *(float *)(puVar2 + 1));
    local_38 = CONCAT44(fVar5 * fVar18 + local_58._4_4_,fVar5 * fVar16 + (float)local_58);
    fVar6 = *(float *)(this + 0xa8);
    uVar3 = CONCAT44(fVar5 * fVar20 + fVar11,fVar5 * fVar19 + fVar10);
    (**(code **)(*(long *)param_1 + 0x10))
              (local_38,uVar3,local_58,uStack_50,param_1,(undefined4)Color::sWhite);
    uVar4 = CONCAT44(fVar6 * fVar18 + local_58._4_4_,fVar6 * fVar16 + (float)local_58);
    (**(code **)(*(long *)param_1 + 0x10))
              (local_48,uStack_40,uVar4,param_1,(undefined4)Color::sWhite);
    JPH::DebugRenderer::DrawMarker(local_38,uVar3,param_1,(undefined4)Color::sWhite);
    JPH::DebugRenderer::DrawMarker
              (uVar4,CONCAT44(fVar6 * fVar20 + fVar11,fVar6 * fVar19 + fVar10),param_1,
               (undefined4)Color::sWhite);
    return;
  }
  return;
}



/* JPH::SliderConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::SliderConstraint::DrawConstraint(SliderConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [12];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar11 = (float)puVar1[2];
  fVar6 = (float)puVar1[3];
  fVar8 = (float)((ulong)puVar1[2] >> 0x20);
  fVar14 = fVar11 + fVar11;
  fVar17 = fVar8 + fVar8;
  fVar10 = (float)((ulong)puVar1[3] >> 0x20);
  puVar2 = *(undefined8 **)(this + 0x30);
  fVar22 = fVar6 * (fVar6 + fVar6);
  fVar12 = fVar10 * (fVar6 + fVar6);
  fVar30 = fVar6 * fVar14 + fVar17 * fVar10;
  fVar16 = fVar6 * fVar14 - fVar17 * fVar10;
  fVar27 = fVar6 * fVar17 - fVar14 * fVar10;
  fVar15 = fVar14 * fVar10 + fVar6 * fVar17;
  fVar20 = (_LC1 - fVar11 * fVar14) - fVar8 * fVar17;
  fVar7 = fVar8 * fVar14 + fVar12;
  fVar12 = fVar8 * fVar14 - fVar12;
  fVar5 = (float)puVar2[3];
  fVar10 = (float)puVar2[2];
  fVar28 = (_LC1 - fVar8 * fVar17) - fVar22;
  fVar24 = (float)((ulong)puVar2[2] >> 0x20);
  fVar21 = (_LC1 - fVar22) - fVar11 * fVar14;
  fVar29 = fVar5 * (fVar5 + fVar5);
  fVar25 = (float)((ulong)puVar2[3] >> 0x20);
  fVar26 = fVar24 + fVar24;
  fVar11 = *(float *)(this + 0x60);
  fVar8 = *(float *)(this + 100);
  fVar6 = *(float *)(this + 0x68);
  fVar23 = fVar10 + fVar10;
  fVar14 = fVar25 * (fVar5 + fVar5);
  fVar17 = fVar11 * fVar28 + fVar8 * fVar12 + fVar6 * fVar30;
  fVar22 = fVar11 * fVar7 + fVar8 * fVar21 + fVar6 * fVar27;
  fVar18 = fVar11 * fVar16 + fVar8 * fVar15 + fVar6 * fVar20;
  fVar19 = fVar11 * 0.0 + fVar8 * 0.0 + fVar6 * 0.0;
  fVar11 = *(float *)(this + 0x40);
  fVar8 = *(float *)(this + 0x44);
  fVar6 = *(float *)(this + 0x48);
  local_78._0_4_ = (float)*puVar1;
  local_78._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  fVar28 = fVar6 * fVar30 + fVar28 * fVar11 + fVar12 * fVar8 + (float)local_78;
  fVar21 = fVar6 * fVar27 + fVar7 * fVar11 + fVar21 * fVar8 + local_78._4_4_;
  fVar15 = fVar6 * fVar20 + fVar16 * fVar11 + fVar15 * fVar8 + *(float *)(puVar1 + 1);
  fVar16 = fVar6 * 0.0 + fVar11 * 0.0 + fVar8 * 0.0 + 1.0;
  fVar11 = *(float *)(this + 0x50);
  fVar8 = *(float *)(this + 0x54);
  fVar6 = *(float *)(this + 0x58);
  uVar3 = CONCAT44(fVar21,fVar28);
  uVar4 = CONCAT44(fVar16,fVar15);
  local_68._0_4_ = (float)*puVar2;
  local_68._4_4_ = (float)((ulong)*puVar2 >> 0x20);
  fVar7 = (fVar24 * fVar23 - fVar14) * fVar8 + ((_LC1 - fVar24 * fVar26) - fVar29) * fVar11 +
          (fVar5 * fVar23 + fVar26 * fVar25) * fVar6 + (float)local_68;
  fVar12 = ((_LC1 - fVar29) - fVar10 * fVar23) * fVar8 + (fVar24 * fVar23 + fVar14) * fVar11 +
           (fVar5 * fVar26 - fVar23 * fVar25) * fVar6 + local_68._4_4_;
  fVar10 = (fVar23 * fVar25 + fVar5 * fVar26) * fVar8 + (fVar5 * fVar23 - fVar26 * fVar25) * fVar11
           + ((_LC1 - fVar10 * fVar23) - fVar24 * fVar26) * fVar6 + *(float *)(puVar2 + 1);
  fVar11 = fVar8 * 0.0 + fVar11 * 0.0 + fVar6 * 0.0 + 1.0;
  local_78 = CONCAT44(fVar12,fVar7);
  uStack_70 = CONCAT44(fVar11,fVar10);
  JPH::DebugRenderer::DrawMarker(uVar3,uVar4,param_1,(undefined4)Color::sRed);
  JPH::DebugRenderer::DrawMarker(local_78,uStack_70,param_1,(undefined4)Color::sGreen);
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar3,uVar4,local_78,uStack_70,param_1,(undefined4)Color::sGreen);
  if (*(int *)(this + 0xd8) == 1) {
    auVar13 = SUB1612((undefined1  [16])0x0,0);
    if (*(char *)(*(long *)(this + 0x28) + 0x78) != '\0') {
      auVar13 = SUB1612(**(undefined1 (**) [16])(*(long *)(this + 0x28) + 0x48),0);
    }
    auVar9 = SUB1612((undefined1  [16])0x0,0);
    if (*(char *)(*(long *)(this + 0x30) + 0x78) != '\0') {
      auVar9 = SUB1612(**(undefined1 (**) [16])(*(long *)(this + 0x30) + 0x48),0);
    }
    fVar8 = (auVar9._8_4_ - auVar13._8_4_) * fVar18 +
            (auVar9._4_4_ - auVar13._4_4_) * fVar22 + fVar17 * (auVar9._0_4_ - auVar13._0_4_) + 0.0;
    local_68 = CONCAT44(fVar8 * fVar22 + fVar12,fVar8 * fVar17 + fVar7);
    uStack_60 = CONCAT44(fVar8 * fVar19 + fVar11,fVar8 * fVar18 + fVar10);
    (**(code **)(*(long *)param_1 + 0x10))
              (local_78,uStack_70,local_68,uStack_60,param_1,(undefined4)Color::sBlue);
    fVar8 = *(float *)(this + 0xdc);
    local_78 = CONCAT44(fVar8 * fVar22 + fVar12,fVar8 * fVar17 + fVar7);
    uStack_70 = CONCAT44(fVar8 * fVar19 + fVar11,fVar8 * fVar18 + fVar10);
    JPH::DebugRenderer::DrawArrow
              (local_68,uStack_60,local_78,uStack_70,param_1,(undefined4)Color::sRed);
    return;
  }
  if (*(int *)(this + 0xd8) != 2) {
    return;
  }
  fVar11 = *(float *)(this + 0xe0);
  local_78 = CONCAT44(fVar11 * fVar22 + fVar21,fVar11 * fVar17 + fVar28);
  uStack_70 = CONCAT44(fVar11 * fVar19 + fVar16,fVar11 * fVar18 + fVar15);
  JPH::DebugRenderer::DrawMarker(local_78,uStack_70,param_1,(undefined4)Color::sYellow);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::SolveVelocityConstraint(float) */

uint JPH::SliderConstraint::SolveVelocityConstraint(float param_1)

{
  float fVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  float *pfVar20;
  char cVar21;
  float *pfVar22;
  undefined8 uVar23;
  long in_RDI;
  char cVar24;
  long in_FS_OFFSET;
  float fVar28;
  undefined1 auVar26 [12];
  float fVar25;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  float local_38;
  float fStack_34;
  long local_30;
  
  lVar3 = *(long *)(in_RDI + 0x30);
  lVar4 = *(long *)(in_RDI + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = 0;
  if (*(float *)(in_RDI + 0x340) != 0.0) {
    if (*(int *)(in_RDI + 0xd8) == 0) {
      uVar18 = *(undefined8 *)(lVar3 + 0x48);
      uVar2 = *(undefined1 *)(lVar4 + 0x78);
      uVar23 = *(undefined8 *)(lVar4 + 0x48);
    }
    else {
      uVar17 = 0;
      if (1 < *(int *)(in_RDI + 0xd8) - 1U) goto LAB_001020f8;
      uVar18 = *(undefined8 *)(lVar3 + 0x48);
      uVar2 = *(undefined1 *)(lVar4 + 0x78);
      uVar23 = *(undefined8 *)(lVar4 + 0x48);
    }
    uVar17 = AxisConstraintPart::SolveVelocityConstraint
                       (*(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                        in_RDI + 0x310,uVar23,uVar2,uVar18,*(undefined1 *)(lVar3 + 0x78));
  }
LAB_001020f8:
  fVar30 = *(float *)(in_RDI + 0x130);
  fVar33 = *(float *)(in_RDI + 0x134);
  fVar34 = *(float *)(in_RDI + 0x138);
  fVar35 = *(float *)(in_RDI + 0x13c);
  fVar1 = *(float *)(in_RDI + 0x140);
  fVar8 = *(float *)(in_RDI + 0x144);
  fVar9 = *(float *)(in_RDI + 0x148);
  fVar10 = *(float *)(in_RDI + 0x14c);
  uVar18 = DualAxisConstraintPart::CalculateLagrangeMultiplier
                     (*(undefined8 *)(in_RDI + 0x130),*(undefined8 *)(in_RDI + 0x138),
                      *(undefined8 *)(in_RDI + 0x140),*(undefined8 *)(in_RDI + 0x148),in_RDI + 0x160
                      ,lVar4,lVar3,&local_38);
  *(ulong *)(in_RDI + 0x1f0) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_RDI + 0x1f0) >> 0x20) + fStack_34,
                (float)*(undefined8 *)(in_RDI + 0x1f0) + local_38);
  uVar19 = CONCAT71((int7)((ulong)uVar18 >> 8),NAN(fStack_34)) & 0xffffffff;
  if (fStack_34 != 0.0) {
    uVar19 = 1;
  }
  bVar14 = (byte)uVar19 | local_38 != 0.0;
  uVar15 = (uint)CONCAT71((int7)(uVar19 >> 8),bVar14);
  if (bVar14 == 0) {
    pfVar22 = *(float **)(lVar4 + 0x48);
    cVar21 = *(char *)(lVar4 + 0x78);
    pfVar20 = *(float **)(lVar3 + 0x48);
    cVar24 = *(char *)(lVar3 + 0x78);
LAB_00102198:
    auVar26 = SUB1612((undefined1  [16])0x0,0);
    if (cVar24 != '\0') goto LAB_00102300;
    if (cVar21 == '\0') goto LAB_0010230c;
LAB_001021ad:
    fVar30 = pfVar22[4] - auVar26._0_4_;
    fVar33 = pfVar22[5] - auVar26._4_4_;
    fVar34 = pfVar22[6] - auVar26._8_4_;
    auVar26._0_4_ =
         fVar30 * *(float *)(in_RDI + 0x280) + fVar33 * *(float *)(in_RDI + 0x290) +
         fVar34 * *(float *)(in_RDI + 0x2a0);
    auVar26._4_4_ =
         fVar30 * *(float *)(in_RDI + 0x284) + fVar33 * *(float *)(in_RDI + 0x294) +
         fVar34 * *(float *)(in_RDI + 0x2a4);
    auVar26._8_4_ =
         fVar30 * *(float *)(in_RDI + 0x288) + fVar33 * *(float *)(in_RDI + 0x298) +
         fVar34 * *(float *)(in_RDI + 0x2a8);
    fVar30 = fVar30 * *(float *)(in_RDI + 0x28c) + fVar33 * *(float *)(in_RDI + 0x29c) +
             fVar34 * *(float *)(in_RDI + 0x2ac);
    *(float *)(in_RDI + 0x2c0) = *(float *)(in_RDI + 0x2c0) + auVar26._0_4_;
    *(float *)(in_RDI + 0x2c4) = *(float *)(in_RDI + 0x2c4) + auVar26._4_4_;
    *(float *)(in_RDI + 0x2c8) = *(float *)(in_RDI + 0x2c8) + auVar26._8_4_;
    *(float *)(in_RDI + 0x2cc) = *(float *)(in_RDI + 0x2cc) + fVar30;
    auVar31._4_4_ = -(uint)(auVar26._4_4_ == 0.0);
    auVar31._0_4_ = -(uint)(auVar26._0_4_ == 0.0);
    auVar31._8_4_ = -(uint)(auVar26._8_4_ == 0.0);
    auVar31._12_4_ = -(uint)(fVar30 == 0.0);
    uVar15 = movmskps(uVar15,auVar31);
    if ((~uVar15 & 7) != 0) {
      if (cVar21 == '\x02') {
        fVar30 = *(float *)(in_RDI + 0x204);
        fVar33 = *(float *)(in_RDI + 0x208);
        fVar34 = *(float *)(in_RDI + 0x20c);
        fVar35 = *(float *)(in_RDI + 0x214);
        fVar1 = *(float *)(in_RDI + 0x218);
        fVar8 = *(float *)(in_RDI + 0x21c);
        fVar9 = *(float *)(in_RDI + 0x224);
        fVar10 = *(float *)(in_RDI + 0x228);
        fVar11 = *(float *)(in_RDI + 0x22c);
        pfVar22[4] = pfVar22[4] -
                     (auVar26._0_4_ * *(float *)(in_RDI + 0x200) +
                      auVar26._4_4_ * *(float *)(in_RDI + 0x210) +
                     auVar26._8_4_ * *(float *)(in_RDI + 0x220));
        pfVar22[5] = pfVar22[5] -
                     (auVar26._0_4_ * fVar30 + auVar26._4_4_ * fVar35 + auVar26._8_4_ * fVar9);
        pfVar22[6] = pfVar22[6] -
                     (auVar26._0_4_ * fVar33 + auVar26._4_4_ * fVar1 + auVar26._8_4_ * fVar10);
        pfVar22[7] = pfVar22[7] -
                     (auVar26._0_4_ * fVar34 + auVar26._4_4_ * fVar8 + auVar26._8_4_ * fVar11);
      }
joined_r0x00102369:
      if (cVar24 == '\x02') {
        fVar25 = auVar26._0_4_;
        fVar28 = auVar26._4_4_;
        fVar29 = auVar26._8_4_;
        uVar15 = 1;
        fVar30 = *(float *)(in_RDI + 0x244);
        fVar33 = *(float *)(in_RDI + 0x248);
        fVar34 = *(float *)(in_RDI + 0x24c);
        fVar35 = *(float *)(in_RDI + 0x254);
        fVar1 = *(float *)(in_RDI + 600);
        fVar8 = *(float *)(in_RDI + 0x25c);
        fVar9 = *(float *)(in_RDI + 0x264);
        fVar10 = *(float *)(in_RDI + 0x268);
        fVar11 = *(float *)(in_RDI + 0x26c);
        pfVar20[4] = fVar29 * *(float *)(in_RDI + 0x260) +
                     fVar25 * *(float *)(in_RDI + 0x240) + fVar28 * *(float *)(in_RDI + 0x250) +
                     pfVar20[4];
        pfVar20[5] = fVar29 * fVar9 + fVar25 * fVar30 + fVar28 * fVar35 + pfVar20[5];
        pfVar20[6] = fVar29 * fVar10 + fVar25 * fVar33 + fVar28 * fVar1 + pfVar20[6];
        pfVar20[7] = fVar29 * fVar11 + fVar25 * fVar34 + fVar28 * fVar8 + pfVar20[7];
      }
      else {
        uVar15 = 1;
      }
      goto LAB_0010220a;
    }
  }
  else {
    pfVar22 = *(float **)(lVar4 + 0x48);
    cVar21 = *(char *)(lVar4 + 0x78);
    fVar30 = fVar1 * fStack_34 + fVar30 * local_38;
    fVar33 = fVar8 * fStack_34 + fVar33 * local_38;
    fVar34 = fVar9 * fStack_34 + fVar34 * local_38;
    fVar35 = fVar10 * fStack_34 + fVar35 * local_38;
    if (cVar21 == '\x02') {
      fVar1 = pfVar22[0x16];
      bVar14 = *(byte *)((long)pfVar22 + 0x7a);
      auVar27._1_3_ = 0;
      auVar27[0] = bVar14;
      auVar27[4] = bVar14;
      auVar27._5_3_ = 0;
      auVar27[8] = bVar14;
      auVar27._9_3_ = 0;
      auVar27[0xc] = bVar14;
      auVar27._13_3_ = 0;
      auVar13._4_4_ = _UNK_00107ff4;
      auVar13._0_4_ = __LC8;
      auVar13._8_4_ = _UNK_00107ff8;
      auVar13._12_4_ = _UNK_00107ffc;
      auVar27 = auVar27 & auVar13;
      bVar5 = auVar27._4_4_ == _UNK_00107ff4;
      bVar6 = auVar27._8_4_ == _UNK_00107ff8;
      bVar7 = auVar27._12_4_ == _UNK_00107ffc;
      *pfVar22 = (float)(-(uint)(auVar27._0_4_ == __LC8) & (uint)(*pfVar22 - fVar1 * fVar30));
      pfVar22[1] = (float)(-(uint)bVar5 & (uint)(pfVar22[1] - fVar1 * fVar33));
      pfVar22[2] = (float)(-(uint)bVar6 & (uint)(pfVar22[2] - fVar1 * fVar34));
      pfVar22[3] = (float)(-(uint)bVar7 & (uint)(pfVar22[3] - fVar1 * fVar35));
      fVar1 = *(float *)(in_RDI + 0x1b4);
      fVar8 = *(float *)(in_RDI + 0x1b8);
      fVar9 = *(float *)(in_RDI + 0x1bc);
      fVar10 = *(float *)(in_RDI + 0x1a4);
      fVar11 = *(float *)(in_RDI + 0x1a8);
      fVar25 = *(float *)(in_RDI + 0x1ac);
      pfVar22[4] = pfVar22[4] -
                   (*(float *)(in_RDI + 0x1b0) * fStack_34 + *(float *)(in_RDI + 0x1a0) * local_38);
      pfVar22[5] = pfVar22[5] - (fVar1 * fStack_34 + fVar10 * local_38);
      pfVar22[6] = pfVar22[6] - (fVar8 * fStack_34 + fVar11 * local_38);
      pfVar22[7] = pfVar22[7] - (fVar9 * fStack_34 + fVar25 * local_38);
    }
    cVar24 = *(char *)(lVar3 + 0x78);
    pfVar20 = *(float **)(lVar3 + 0x48);
    uVar17 = uVar15;
    if (cVar24 != '\x02') goto LAB_00102198;
    bVar14 = *(byte *)((long)pfVar20 + 0x7a);
    fVar1 = pfVar20[0x16];
    auVar32._1_3_ = 0;
    auVar32[0] = bVar14;
    auVar32[4] = bVar14;
    auVar32._5_3_ = 0;
    auVar32[8] = bVar14;
    auVar32._9_3_ = 0;
    auVar32[0xc] = bVar14;
    auVar32._13_3_ = 0;
    auVar12._4_4_ = _UNK_00107ff4;
    auVar12._0_4_ = __LC8;
    auVar12._8_4_ = _UNK_00107ff8;
    auVar12._12_4_ = _UNK_00107ffc;
    auVar32 = auVar32 & auVar12;
    bVar5 = auVar32._4_4_ == _UNK_00107ff4;
    bVar6 = auVar32._8_4_ == _UNK_00107ff8;
    bVar7 = auVar32._12_4_ == _UNK_00107ffc;
    *pfVar20 = (float)((uint)(fVar1 * fVar30 + *pfVar20) & -(uint)(auVar32._0_4_ == __LC8));
    pfVar20[1] = (float)((uint)(fVar1 * fVar33 + pfVar20[1]) & -(uint)bVar5);
    pfVar20[2] = (float)((uint)(fVar1 * fVar34 + pfVar20[2]) & -(uint)bVar6);
    pfVar20[3] = (float)((uint)(fVar1 * fVar35 + pfVar20[3]) & -(uint)bVar7);
    fVar30 = *(float *)(in_RDI + 0x1d4);
    fVar33 = *(float *)(in_RDI + 0x1d8);
    fVar34 = *(float *)(in_RDI + 0x1dc);
    fVar35 = *(float *)(in_RDI + 0x1c4);
    fVar1 = *(float *)(in_RDI + 0x1c8);
    fVar8 = *(float *)(in_RDI + 0x1cc);
    pfVar20[4] = local_38 * *(float *)(in_RDI + 0x1c0) + fStack_34 * *(float *)(in_RDI + 0x1d0) +
                 pfVar20[4];
    pfVar20[5] = local_38 * fVar35 + fStack_34 * fVar30 + pfVar20[5];
    pfVar20[6] = local_38 * fVar1 + fStack_34 * fVar33 + pfVar20[6];
    pfVar20[7] = local_38 * fVar8 + fStack_34 * fVar34 + pfVar20[7];
    uVar15 = (uint)bVar14;
LAB_00102300:
    auVar26 = SUB1612(*(undefined1 (*) [16])(pfVar20 + 4),0);
    if (cVar21 != '\0') goto LAB_001021ad;
LAB_0010230c:
    fVar30 = 0.0 - auVar26._0_4_;
    fVar33 = 0.0 - auVar26._4_4_;
    fVar34 = 0.0 - auVar26._8_4_;
    auVar26._0_4_ =
         fVar33 * *(float *)(in_RDI + 0x290) + fVar30 * *(float *)(in_RDI + 0x280) +
         fVar34 * *(float *)(in_RDI + 0x2a0);
    auVar26._4_4_ =
         fVar33 * *(float *)(in_RDI + 0x294) + fVar30 * *(float *)(in_RDI + 0x284) +
         fVar34 * *(float *)(in_RDI + 0x2a4);
    auVar26._8_4_ =
         fVar33 * *(float *)(in_RDI + 0x298) + fVar30 * *(float *)(in_RDI + 0x288) +
         fVar34 * *(float *)(in_RDI + 0x2a8);
    fVar30 = fVar33 * *(float *)(in_RDI + 0x29c) + fVar30 * *(float *)(in_RDI + 0x28c) +
             fVar34 * *(float *)(in_RDI + 0x2ac);
    auVar36._4_4_ = -(uint)(auVar26._4_4_ == 0.0);
    auVar36._0_4_ = -(uint)(auVar26._0_4_ == 0.0);
    auVar36._8_4_ = -(uint)(auVar26._8_4_ == 0.0);
    auVar36._12_4_ = -(uint)(fVar30 == 0.0);
    uVar15 = movmskps(uVar15,auVar36);
    *(float *)(in_RDI + 0x2c0) = *(float *)(in_RDI + 0x2c0) + auVar26._0_4_;
    *(float *)(in_RDI + 0x2c4) = *(float *)(in_RDI + 0x2c4) + auVar26._4_4_;
    *(float *)(in_RDI + 0x2c8) = *(float *)(in_RDI + 0x2c8) + auVar26._8_4_;
    *(float *)(in_RDI + 0x2cc) = *(float *)(in_RDI + 0x2cc) + fVar30;
    if ((~uVar15 & 7) != 0) goto joined_r0x00102369;
  }
  uVar15 = 0;
LAB_0010220a:
  uVar16 = 0;
  if (*(float *)(in_RDI + 0x300) != 0.0) {
    uVar16 = AxisConstraintPart::SolveVelocityConstraint
                       (*(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                        in_RDI + 0x2d0);
  }
  if ((char)uVar17 == '\0') {
    uVar17 = uVar16 | uVar15;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



/* JPH::GetRTTIOfType(JPH::SliderConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(SliderConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti,
                      "SliderConstraintSettings",0xd0,
                      GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SliderConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      SliderConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SliderConstraintSettings*)::rtti;
}



/* JPH::SliderConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::SliderConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((SliderConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::SliderConstraintSettings::SetSliderAxis(JPH::Vec3) */

void JPH::SliderConstraintSettings::SetSliderAxis(undefined8 param_1,ulong param_2,long param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar5;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  fVar6 = (float)param_2;
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar8 = (float)param_1;
  *(float *)(param_3 + 0x70) = fVar8;
  *(float *)(param_3 + 0x74) = fVar5;
  uVar2 = _LC48;
  *(float *)(param_3 + 0x78) = fVar6;
  *(int *)(param_3 + 0x7c) = (int)(param_2 >> 0x20);
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_3 + 0x78);
  if ((float)((uint)fVar5 & uVar2) < (float)(uVar2 & (uint)fVar8)) {
    auVar3._12_4_ = (uint)fVar8 ^ _LC40;
    auVar3._8_4_ = (uint)fVar8 ^ _LC40;
    auVar3._0_8_ = param_2 & 0xffffffff;
    fVar8 = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
    auVar7._4_4_ = fVar8;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = fVar8;
    auVar7._12_4_ = fVar8;
    auVar4 = divps(auVar3,auVar7);
    *(undefined1 (*) [16])(param_3 + 0x80) = auVar4;
    *(undefined1 (*) [16])(param_3 + 0x50) = auVar4;
    return;
  }
  fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
  auVar1._4_4_ = (uint)fVar5 ^ _LC40;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = (uint)fVar5 ^ _LC40;
  auVar1._12_4_ = 0;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar8;
  auVar4._8_4_ = fVar8;
  auVar4._12_4_ = fVar8;
  auVar4 = divps(auVar1 << 0x20,auVar4);
  *(undefined1 (*) [16])(param_3 + 0x80) = auVar4;
  *(undefined1 (*) [16])(param_3 + 0x50) = auVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::SliderConstraint(JPH::Body&, JPH::Body&, JPH::SliderConstraintSettings
   const&) */

void __thiscall
JPH::SliderConstraint::SliderConstraint
          (SliderConstraint *this,Body *param_1,Body *param_2,SliderConstraintSettings *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  uVar7 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar7;
  uVar7 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar7,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  *(SliderConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0xb0) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0xa4);
  this[0xac] = (SliderConstraint)0x0;
  uVar2 = *(undefined8 *)(param_3 + 0xa8);
  uVar3 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(this + 0x20) = uVar9;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__SliderConstraint_00107f10;
  *(undefined8 *)(this + 0xbc) = uVar2;
  *(undefined8 *)(this + 0xc4) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0xb4);
  uVar4 = *(undefined8 *)(param_3 + 0xbc);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined1 (*) [16])(this + 0x300) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(this + 200) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar4;
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  uVar5 = *(undefined8 *)(param_3 + 0x88);
  uVar6 = *(undefined8 *)(param_3 + 0x78);
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  auVar57 = RotationEulerConstraintPart::sGetInvInitialOrientationXY
                      (uVar9,uVar2,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),
                       uVar3,uVar6,uVar4,uVar5);
  iVar8 = *(int *)(param_3 + 0x28);
  *(undefined1 (*) [16])(this + 0x90) = auVar57;
  if (iVar8 != 1) {
    uVar9 = *(undefined8 *)(param_3 + 0x38);
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    uVar3 = *(undefined8 *)(param_3 + 0x58);
    auVar27 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x50),0);
    auVar17 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x40),0);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar9;
    uVar9 = *(undefined8 *)(param_3 + 0x60);
    uVar4 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(this + 0x70) = uVar2;
    *(undefined8 *)(this + 0x78) = uVar3;
    *(undefined8 *)(this + 0x50) = uVar9;
    *(undefined8 *)(this + 0x58) = uVar4;
    uVar9 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(this + 0x68) = uVar9;
    goto LAB_00102898;
  }
  fVar12 = *(float *)(param_1 + 0x10);
  fVar37 = *(float *)param_1;
  fVar11 = *(float *)(param_1 + 4);
  fVar46 = *(float *)(param_1 + 8);
  fVar16 = (float)(__LC44 ^ (uint)fVar12);
  fVar19 = (float)(_UNK_00108054 ^ *(uint *)(param_1 + 0x14));
  fVar20 = (float)(_UNK_00108058 ^ *(uint *)(param_1 + 0x18));
  fVar21 = (float)(_UNK_0010805c ^ *(uint *)(param_1 + 0x1c));
  fVar36 = fVar19 + fVar19;
  fVar33 = fVar16 + fVar16;
  fVar43 = fVar20 * (fVar20 + fVar20);
  fVar22 = fVar21 * (fVar20 + fVar20);
  fVar54 = fVar20 * fVar33 + fVar36 * fVar21;
  fVar35 = fVar20 * fVar33 - fVar36 * fVar21;
  fVar56 = fVar20 * fVar36 - fVar33 * fVar21;
  fVar34 = fVar33 * fVar21 + fVar20 * fVar36;
  fVar49 = (_LC1 - fVar16 * fVar33) - fVar19 * fVar36;
  fVar50 = fVar19 * fVar33 - fVar22;
  fVar22 = fVar19 * fVar33 + fVar22;
  fVar21 = (float)(__LC44 ^ *(uint *)(param_2 + 0x10));
  fVar13 = (float)(_UNK_00108054 ^ *(uint *)(param_2 + 0x14));
  fVar14 = (float)(_UNK_00108058 ^ *(uint *)(param_2 + 0x18));
  fVar15 = (float)(_UNK_0010805c ^ *(uint *)(param_2 + 0x1c));
  fVar55 = (_LC1 - fVar43) - fVar16 * fVar33;
  fVar43 = (_LC1 - fVar19 * fVar36) - fVar43;
  fVar16 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar20 = *(float *)(param_2 + 8);
  local_78 = fVar43 * fVar37 + fVar50 * fVar11 + fVar46 * fVar54;
  fStack_74 = fVar22 * fVar37 + fVar55 * fVar11 + fVar46 * fVar56;
  fStack_70 = fVar35 * fVar37 + fVar34 * fVar11 + fVar46 * fVar49;
  fStack_6c = fVar37 * 0.0 + fVar11 * 0.0 + fVar46 * 0.0;
  fVar45 = fVar13 + fVar13;
  fVar36 = 0.0 - local_78;
  fVar23 = 0.0 - fStack_74;
  fVar24 = 0.0 - fStack_70;
  fVar33 = fVar14 * (fVar14 + fVar14);
  fVar47 = (fVar14 + fVar14) * fVar15;
  fVar25 = fVar21 + fVar21;
  fVar51 = fVar14 * fVar25 + fVar45 * fVar15;
  fVar44 = fVar14 * fVar25 - fVar45 * fVar15;
  fVar52 = fVar14 * fVar45 - fVar25 * fVar15;
  fVar48 = (_LC1 - fVar21 * fVar25) - fVar13 * fVar45;
  fVar53 = fVar13 * fVar25 + fVar47;
  fVar47 = fVar13 * fVar25 - fVar47;
  fVar26 = (_LC1 - fVar33) - fVar21 * fVar25;
  fVar33 = (_LC1 - fVar13 * fVar45) - fVar33;
  fVar25 = fVar25 * fVar15 + fVar14 * fVar45;
  fVar45 = fVar51 * fVar20 + fVar47 * fVar19 + fVar33 * fVar16;
  fVar30 = fVar52 * fVar20 + fVar26 * fVar19 + fVar53 * fVar16;
  fVar31 = fVar48 * fVar20 + fVar25 * fVar19 + fVar44 * fVar16;
  fVar32 = fVar20 * 0.0 + fVar19 * 0.0 + fVar16 * 0.0;
  fVar40 = 0.0 - fVar45;
  fVar41 = 0.0 - fVar30;
  fVar42 = 0.0 - fVar31;
  if (param_3[0x2c] == (SliderConstraintSettings)0x0) {
    fVar37 = *(float *)(param_3 + 0x30);
    fVar11 = *(float *)(param_3 + 0x34);
    fVar46 = *(float *)(param_3 + 0x38);
    fVar16 = *(float *)(param_3 + 0x60);
    fVar19 = *(float *)(param_3 + 100);
    fVar20 = *(float *)(param_3 + 0x68);
    *(float *)(this + 0x40) = fVar46 * fVar54 + fVar37 * fVar43 + fVar11 * fVar50 + fVar36;
    *(float *)(this + 0x44) = fVar46 * fVar56 + fVar37 * fVar22 + fVar11 * fVar55 + fVar23;
    *(float *)(this + 0x48) = fVar46 * fVar49 + fVar37 * fVar35 + fVar11 * fVar34 + fVar24;
    *(float *)(this + 0x4c) = fVar46 * 0.0 + fVar37 * 0.0 + fVar11 * 0.0 + 1.0;
    fVar45 = fVar16 * fVar33 + fVar19 * fVar47 + fVar20 * fVar51;
    fVar30 = fVar16 * fVar53 + fVar19 * fVar26 + fVar20 * fVar52;
    fVar31 = fVar16 * fVar44 + fVar19 * fVar25 + fVar20 * fVar48;
    fVar32 = fVar16 * 0.0 + fVar19 * 0.0 + fVar20 * 0.0;
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
      local_78 = fVar16 * fVar43 + fVar19 * fVar50 + fVar20 * fVar54;
      fStack_74 = fVar16 * fVar22 + fVar19 * fVar55 + fVar20 * fVar56;
      fStack_70 = fVar16 * fVar35 + fVar19 * fVar34 + fVar20 * fVar49;
      fStack_6c = fVar16 * 0.0 + fVar19 * 0.0 + fVar20 * 0.0;
    }
    else {
      if (*(long *)(param_2 + 0x48) != 0) {
        fVar45 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
        fVar30 = *(float *)(*(long *)(param_1 + 0x48) + 0x58);
        auVar57._0_4_ = fVar45 + fVar30;
        if (auVar57._0_4_ != 0.0) {
          auVar57._4_4_ = auVar57._0_4_;
          auVar57._8_4_ = auVar57._0_4_;
          auVar57._12_4_ = auVar57._0_4_;
          auVar39._4_4_ = fVar30 * fVar11 + fVar45 * fVar19;
          auVar39._0_4_ = fVar30 * fVar37 + fVar45 * fVar16;
          auVar39._8_4_ = fVar30 * fVar46 + fVar45 * fVar20;
          auVar39._12_4_ = fVar30 * *(float *)(param_1 + 0xc) + fVar45 * *(float *)(param_2 + 0xc);
          auVar57 = divps(auVar39,auVar57);
          fVar37 = auVar57._0_4_;
          fVar11 = auVar57._4_4_;
          fVar46 = auVar57._8_4_;
          fVar45 = fVar33 * fVar37 + fVar47 * fVar11 + fVar51 * fVar46;
          fVar30 = fVar53 * fVar37 + fVar26 * fVar11 + fVar52 * fVar46;
          fVar31 = fVar44 * fVar37 + fVar25 * fVar11 + fVar48 * fVar46;
          fVar32 = fVar37 * 0.0 + fVar11 * 0.0 + fVar46 * 0.0;
          local_78 = fVar37 * fVar43 + fVar11 * fVar50 + fVar46 * fVar54;
          fStack_74 = fVar37 * fVar22 + fVar11 * fVar55 + fVar46 * fVar56;
          fStack_70 = fVar37 * fVar35 + fVar11 * fVar34 + fVar46 * fVar49;
          fStack_6c = fVar37 * 0.0 + fVar11 * 0.0 + fVar46 * 0.0;
          goto LAB_00102d2e;
        }
      }
      fVar45 = fVar37 * fVar33 + fVar11 * fVar47 + fVar51 * fVar46;
      fVar30 = fVar37 * fVar53 + fVar11 * fVar26 + fVar52 * fVar46;
      fVar31 = fVar37 * fVar44 + fVar11 * fVar25 + fVar48 * fVar46;
      fVar32 = fVar37 * 0.0 + fVar11 * 0.0 + fVar46 * 0.0;
    }
LAB_00102d2e:
    *(float *)(this + 0x40) = fVar36 + local_78;
    *(float *)(this + 0x44) = fVar23 + fStack_74;
    *(float *)(this + 0x48) = fVar24 + fStack_70;
    *(float *)(this + 0x4c) = fStack_6c + 1.0;
  }
  *(float *)(this + 0x50) = fVar45 + fVar40;
  *(float *)(this + 0x54) = fVar30 + fVar41;
  *(float *)(this + 0x58) = fVar31 + fVar42;
  *(float *)(this + 0x5c) = fVar32 + 1.0;
  fVar11 = *(float *)(param_3 + 0x40);
  fVar46 = *(float *)(param_3 + 0x44);
  fVar16 = *(float *)(param_3 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  fVar37 = *(float *)(param_1 + 0x14);
  auVar18._0_4_ = fVar11 * fVar43 + fVar46 * fVar50 + fVar16 * fVar54;
  auVar18._4_4_ = fVar11 * fVar22 + fVar46 * fVar55 + fVar16 * fVar56;
  auVar18._8_4_ = fVar11 * fVar35 + fVar46 * fVar34 + fVar16 * fVar49;
  auVar18._12_4_ = fVar11 * 0.0 + fVar46 * 0.0 + fVar16 * 0.0;
  fVar11 = *(float *)(param_3 + 0x50);
  fVar46 = *(float *)(param_3 + 0x54);
  fVar16 = *(float *)(param_3 + 0x58);
  auVar28._0_4_ =
       SQRT(auVar18._8_4_ * auVar18._8_4_ +
            auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + 0.0);
  auVar28._4_4_ = auVar28._0_4_;
  auVar28._8_4_ = auVar28._0_4_;
  auVar28._12_4_ = auVar28._0_4_;
  auVar57 = divps(auVar18,auVar28);
  auVar17 = auVar57._0_12_;
  fVar19 = (float)*(undefined8 *)(this + 0x90);
  auVar29._0_4_ = fVar11 * fVar43 + fVar46 * fVar50 + fVar16 * fVar54;
  auVar29._4_4_ = fVar11 * fVar22 + fVar46 * fVar55 + fVar16 * fVar56;
  auVar29._8_4_ = fVar11 * fVar35 + fVar46 * fVar34 + fVar16 * fVar49;
  auVar29._12_4_ = fVar11 * 0.0 + fVar46 * 0.0 + fVar16 * 0.0;
  *(undefined1 (*) [16])(this + 0x60) = auVar57;
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x90) >> 0x20);
  fVar11 = (float)uVar9;
  auVar38._0_4_ =
       SQRT(auVar29._8_4_ * auVar29._8_4_ +
            auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ + 0.0);
  fVar46 = (float)*(undefined8 *)(this + 0x98);
  auVar38._4_4_ = auVar38._0_4_;
  auVar38._8_4_ = auVar38._0_4_;
  auVar38._12_4_ = auVar38._0_4_;
  auVar57 = divps(auVar29,auVar38);
  auVar27 = auVar57._0_12_;
  fVar16 = (float)((ulong)*(undefined8 *)(this + 0x98) >> 0x20);
  fVar36 = (fVar46 * fVar13 + fVar19 * fVar15 + fVar16 * fVar21) - fVar20 * fVar14;
  *(undefined1 (*) [16])(this + 0x70) = auVar57;
  fVar23 = fVar16 * fVar13 + (fVar20 * fVar15 - fVar46 * fVar21) + fVar19 * fVar14;
  fVar33 = (float)((ulong)uVar9 >> 0x20);
  fVar22 = ((fVar15 * fVar16 - fVar21 * fVar19) - fVar20 * fVar13) - fVar14 * fVar46;
  fVar46 = ((fVar46 * fVar15 + fVar20 * fVar21) - fVar19 * fVar13) + fVar16 * fVar14;
  *(float *)(this + 0x90) = (fVar11 * fVar23 + fVar33 * fVar36 + fVar22 * fVar12) - fVar37 * fVar46;
  *(float *)(this + 0x94) = fVar12 * fVar46 + fVar33 * fVar23 + (fVar22 * fVar37 - fVar11 * fVar36);
  *(float *)(this + 0x98) =
       fVar33 * fVar46 + ((fVar37 * fVar36 + fVar22 * fVar11) - fVar12 * fVar23);
  *(float *)(this + 0x9c) =
       ((fVar22 * fVar33 - fVar12 * fVar36) - fVar37 * fVar23) - fVar11 * fVar46;
LAB_00102898:
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)(param_3 + 0x90);
  fVar12 = auVar27._4_4_ * auVar17._0_4_ - auVar17._4_4_ * auVar27._0_4_;
  bVar10 = *(float *)(param_3 + 0x94) != _LC4._4_4_;
  *(float *)(this + 0x80) = auVar27._8_4_ * auVar17._4_4_ - auVar17._8_4_ * auVar27._4_4_;
  *(float *)(this + 0x84) = auVar27._0_4_ * auVar17._8_4_ - auVar17._0_4_ * auVar27._8_4_;
  *(float *)(this + 0x88) = fVar12;
  *(float *)(this + 0x8c) = fVar12;
  this[0xa0] = (SliderConstraint)(bVar10 || *(float *)(param_3 + 0x90) != (float)_LC4);
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_3 + 0x98);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_3 + 0xa0);
  return;
}



/* JPH::SliderConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

SliderConstraint * __thiscall
JPH::SliderConstraintSettings::Create(SliderConstraintSettings *this,Body *param_1,Body *param_2)

{
  SliderConstraint *this_00;
  
  this_00 = (SliderConstraint *)(*Allocate)(0x350);
  SliderConstraint::SliderConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::GetCurrentPosition() const */

float __thiscall JPH::SliderConstraint::GetCurrentPosition(SliderConstraint *this)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pfVar2 = *(float **)(this + 0x28);
  fVar10 = *(float *)(this + 0x48);
  fVar8 = *(float *)(this + 0x44);
  fVar18 = (float)*(undefined8 *)(this + 0x40);
  fVar1 = pfVar2[4];
  pfVar3 = *(float **)(this + 0x30);
  fVar4 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
  fVar12 = (float)((uint)pfVar2[4] ^ __LC44);
  fVar13 = (float)((uint)pfVar2[5] ^ _UNK_00108054);
  fVar14 = (float)((uint)pfVar2[6] ^ _UNK_00108058);
  fVar15 = (float)((uint)pfVar2[7] ^ _UNK_0010805c);
  fVar24 = (float)(__LC44 ^ (uint)pfVar3[4]);
  fVar26 = (float)(_UNK_00108054 ^ (uint)pfVar3[5]);
  fVar27 = (float)(_UNK_00108058 ^ (uint)pfVar3[6]);
  fVar28 = (float)(_UNK_0010805c ^ (uint)pfVar3[7]);
  fVar5 = (float)*(undefined8 *)(pfVar2 + 6);
  fVar6 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
  fVar11 = pfVar3[4];
  fVar19 = (fVar6 * fVar18 + fVar1 * 0.0 + fVar4 * fVar10) - fVar8 * fVar5;
  fVar16 = (fVar8 * fVar6 - fVar1 * fVar10) + fVar4 * 0.0 + fVar5 * fVar18;
  fVar7 = ((fVar6 * fVar10 + fVar8 * fVar1) - fVar4 * fVar18) + fVar5 * 0.0;
  fVar9 = *(float *)(this + 0x54);
  fVar21 = ((fVar6 * 0.0 - fVar18 * fVar1) - fVar8 * fVar4) - fVar10 * fVar5;
  fVar8 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
  fVar18 = (float)*(undefined8 *)(pfVar3 + 6);
  fVar10 = (float)*(undefined8 *)(this + 0x50);
  fVar23 = (float)((ulong)*(undefined8 *)(pfVar3 + 6) >> 0x20);
  fVar20 = (fVar11 * 0.0 + fVar23 * fVar10 + *(float *)(this + 0x58) * fVar8) - fVar18 * fVar9;
  fVar22 = fVar8 * 0.0 + (fVar23 * fVar9 - fVar11 * *(float *)(this + 0x58)) + fVar18 * fVar10;
  fVar17 = ((*(float *)(this + 0x58) * fVar23 + fVar11 * fVar9) - fVar8 * fVar10) + fVar18 * 0.0;
  fVar8 = ((fVar23 * 0.0 - fVar11 * fVar10) - fVar8 * fVar9) - fVar18 * *(float *)(this + 0x58);
  fVar10 = *(float *)(this + 0x68);
  fVar9 = (float)*(undefined8 *)(this + 0x60);
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar25 = (fVar6 * fVar9 + fVar1 * 0.0 + fVar4 * fVar10) - fVar5 * fVar11;
  fVar23 = (fVar6 * fVar11 - fVar1 * fVar10) + fVar4 * 0.0 + fVar5 * fVar9;
  fVar18 = ((fVar6 * fVar10 + fVar1 * fVar11) - fVar4 * fVar9) + fVar5 * 0.0;
  fVar10 = ((fVar6 * 0.0 - fVar1 * fVar9) - fVar4 * fVar11) - fVar5 * fVar10;
  return (((fVar10 * fVar14 + fVar25 * fVar13) - fVar23 * fVar12) + fVar18 * fVar15) *
         ((fVar17 * fVar28 + ((fVar8 * fVar27 + fVar20 * fVar26) - fVar22 * fVar24) +
          (pfVar3[2] - pfVar2[2])) -
         (((fVar19 * fVar13 + fVar14 * fVar21) - fVar16 * fVar12) + fVar7 * fVar15)) +
         ((fVar10 * fVar13 - fVar25 * fVar14) + fVar23 * fVar15 + fVar18 * fVar12) *
         ((fVar17 * fVar24 + (fVar8 * fVar26 - fVar20 * fVar27) + fVar22 * fVar28 +
          (pfVar3[1] - pfVar2[1])) -
         ((fVar13 * fVar21 - fVar19 * fVar14) + fVar16 * fVar15 + fVar7 * fVar12)) +
         ((fVar10 * fVar12 + fVar25 * fVar15 + fVar23 * fVar14) - fVar18 * fVar13) *
         ((((fVar8 * fVar24 + fVar20 * fVar28 + fVar22 * fVar27) - fVar17 * fVar26) +
          (*pfVar3 - *pfVar2)) -
         ((fVar19 * fVar15 + fVar12 * fVar21 + fVar16 * fVar14) - fVar7 * fVar13)) + 0.0;
}



/* JPH::SliderConstraint::SetLimits(float, float) */

void __thiscall JPH::SliderConstraint::SetLimits(SliderConstraint *this,float param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = param_2 != _LC4._4_4_;
  *(ulong *)(this + 0xa4) = CONCAT44(param_2,param_1);
  this[0xa0] = (SliderConstraint)(bVar1 || param_1 != (float)_LC4);
  return;
}



/* JPH::SliderConstraint::CalculateR1R2U(JPH::Mat44 const&, JPH::Mat44 const&) */

void __thiscall
JPH::SliderConstraint::CalculateR1R2U(SliderConstraint *this,Mat44 *param_1,Mat44 *param_2)

{
  float *pfVar1;
  float *pfVar2;
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
  
  fVar3 = *(float *)(this + 0x40);
  fVar4 = *(float *)(this + 0x44);
  fVar5 = *(float *)(this + 0x48);
  pfVar1 = *(float **)(this + 0x28);
  fVar6 = *(float *)(this + 0x50);
  fVar7 = *(float *)(this + 0x54);
  fVar8 = *(float *)(this + 0x58);
  fVar14 = fVar3 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 0x10) +
           fVar5 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30);
  fVar15 = fVar3 * *(float *)(param_1 + 4) + fVar4 * *(float *)(param_1 + 0x14) +
           fVar5 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34);
  fVar16 = fVar3 * *(float *)(param_1 + 8) + fVar4 * *(float *)(param_1 + 0x18) +
           fVar5 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  fVar17 = fVar3 * *(float *)(param_1 + 0xc) + fVar4 * *(float *)(param_1 + 0x1c) +
           fVar5 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar10 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar20 = *(float *)(param_2 + 8);
  fVar21 = *(float *)(param_2 + 0xc);
  fVar18 = *(float *)(param_2 + 0x20);
  fVar11 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_2 + 0x28);
  fVar13 = *(float *)(param_2 + 0x2c);
  *(float *)(this + 0xf0) = fVar14;
  *(float *)(this + 0xf4) = fVar15;
  *(float *)(this + 0xf8) = fVar16;
  *(float *)(this + 0xfc) = fVar17;
  fVar18 = fVar6 * fVar10 + fVar7 * fVar3 + fVar8 * fVar18 + *(float *)(param_2 + 0x30);
  fVar19 = fVar6 * fVar19 + fVar7 * fVar4 + fVar8 * fVar11 + *(float *)(param_2 + 0x34);
  fVar20 = fVar6 * fVar20 + fVar7 * fVar5 + fVar8 * fVar12 + *(float *)(param_2 + 0x38);
  fVar21 = fVar6 * fVar21 + fVar7 * fVar9 + fVar8 * fVar13 + *(float *)(param_2 + 0x3c);
  pfVar2 = *(float **)(this + 0x30);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  *(float *)(this + 0x100) = fVar18;
  *(float *)(this + 0x104) = fVar19;
  *(float *)(this + 0x108) = fVar20;
  *(float *)(this + 0x10c) = fVar21;
  *(float *)(this + 0x110) = (fVar18 + (fVar3 - fVar7)) - fVar14;
  *(float *)(this + 0x114) = (fVar19 + (fVar4 - fVar8)) - fVar15;
  *(float *)(this + 0x118) = (fVar20 + (fVar5 - fVar9)) - fVar16;
  *(float *)(this + 0x11c) = (fVar21 + (fVar6 - fVar10)) - fVar17;
  return;
}



/* JPH::SliderConstraint::CalculatePositionConstraintProperties(JPH::Mat44 const&, JPH::Mat44
   const&) */

void JPH::SliderConstraint::CalculatePositionConstraintProperties(Mat44 *param_1,Mat44 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_30;
  
  fVar15 = *(float *)(param_1 + 0x70);
  fVar16 = *(float *)(param_1 + 0x74);
  fVar17 = *(float *)(param_1 + 0x78);
  fVar18 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar20 = *(float *)(param_2 + 8);
  fVar25 = *(float *)(param_2 + 0xc);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar26 = *(float *)(param_2 + 0x10);
  fVar27 = *(float *)(param_2 + 0x14);
  fVar29 = *(float *)(param_2 + 0x18);
  fVar31 = *(float *)(param_2 + 0x1c);
  fVar33 = *(float *)(param_2 + 0x20);
  fVar10 = *(float *)(param_2 + 0x24);
  fVar36 = *(float *)(param_2 + 0x28);
  fVar22 = *(float *)(param_2 + 0x2c);
  fVar9 = *(float *)(param_2 + 0x30);
  fVar13 = *(float *)(param_2 + 0x34);
  fVar14 = *(float *)(param_2 + 0x38);
  fVar34 = *(float *)(param_2 + 0x3c);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
  cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 0x78);
  lVar3 = *(long *)(param_1 + 0x30);
  fVar35 = *(float *)(param_1 + 0x80);
  fVar4 = *(float *)(param_1 + 0x84);
  fVar5 = *(float *)(param_1 + 0x88);
  fVar21 = fVar15 * fVar18 + fVar16 * fVar26 + fVar17 * fVar33 + fVar9;
  fVar23 = fVar15 * fVar19 + fVar16 * fVar27 + fVar17 * fVar10 + fVar13;
  fVar24 = fVar15 * fVar20 + fVar16 * fVar29 + fVar17 * fVar36 + fVar14;
  fVar6 = *(float *)(param_1 + 0x100);
  fVar7 = *(float *)(param_1 + 0x104);
  fVar8 = *(float *)(param_1 + 0x108);
  fVar28 = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x110);
  fVar30 = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0x114);
  fVar32 = *(float *)(param_1 + 0xf8) + *(float *)(param_1 + 0x118);
  *(float *)(param_1 + 0x130) = fVar21;
  *(float *)(param_1 + 0x134) = fVar23;
  *(float *)(param_1 + 0x138) = fVar24;
  *(float *)(param_1 + 0x13c) = fVar15 * fVar25 + fVar16 * fVar31 + fVar17 * fVar22 + fVar34;
  fVar9 = fVar35 * fVar18 + fVar4 * fVar26 + fVar5 * fVar33 + fVar9;
  fVar13 = fVar35 * fVar19 + fVar4 * fVar27 + fVar5 * fVar10 + fVar13;
  fVar14 = fVar35 * fVar20 + fVar4 * fVar29 + fVar5 * fVar36 + fVar14;
  *(float *)(param_1 + 0x140) = fVar9;
  *(float *)(param_1 + 0x144) = fVar13;
  *(float *)(param_1 + 0x148) = fVar14;
  *(float *)(param_1 + 0x14c) = fVar35 * fVar25 + fVar4 * fVar31 + fVar5 * fVar22 + fVar34;
  fVar15 = fVar28 * fVar23 - fVar21 * fVar30;
  fVar16 = fVar30 * fVar24 - fVar23 * fVar32;
  fVar17 = fVar32 * fVar21 - fVar24 * fVar28;
  *(float *)(param_1 + 0x160) = fVar16;
  *(float *)(param_1 + 0x164) = fVar17;
  *(float *)(param_1 + 0x168) = fVar15;
  *(float *)(param_1 + 0x16c) = fVar15;
  fVar29 = fVar28 * fVar13 - fVar30 * fVar9;
  fVar31 = fVar30 * fVar14 - fVar32 * fVar13;
  fVar33 = fVar32 * fVar9 - fVar28 * fVar14;
  *(float *)(param_1 + 0x170) = fVar31;
  *(float *)(param_1 + 0x174) = fVar33;
  *(float *)(param_1 + 0x178) = fVar29;
  *(float *)(param_1 + 0x17c) = fVar29;
  fVar25 = fVar23 * fVar6 - fVar21 * fVar7;
  fVar26 = fVar24 * fVar7 - fVar23 * fVar8;
  fVar27 = fVar21 * fVar8 - fVar24 * fVar6;
  fVar18 = fVar13 * fVar6 - fVar9 * fVar7;
  fVar19 = fVar14 * fVar7 - fVar13 * fVar8;
  fVar20 = fVar9 * fVar8 - fVar14 * fVar6;
  *(float *)(param_1 + 0x180) = fVar26;
  *(float *)(param_1 + 0x184) = fVar27;
  *(float *)(param_1 + 0x188) = fVar25;
  *(float *)(param_1 + 0x18c) = fVar25;
  *(float *)(param_1 + 400) = fVar19;
  *(float *)(param_1 + 0x194) = fVar20;
  *(float *)(param_1 + 0x198) = fVar18;
  *(float *)(param_1 + 0x19c) = fVar18;
  if (cVar1 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
    fVar10 = *(float *)(lVar2 + 0x58);
    fVar22 = local_78 * fVar16 + fVar17 * local_68 + fVar15 * local_58;
    fVar9 = fStack_74 * fVar16 + fVar17 * fStack_64 + fVar15 * fStack_54;
    fVar13 = fStack_70 * fVar16 + fVar17 * fStack_60 + fVar15 * fStack_50;
    *(float *)(param_1 + 0x1a0) = fVar22;
    *(float *)(param_1 + 0x1a4) = fVar9;
    *(float *)(param_1 + 0x1a8) = fVar13;
    *(float *)(param_1 + 0x1ac) = fStack_6c * fVar16 + fVar17 * fStack_5c + fVar15 * fStack_4c;
    fVar14 = local_78 * fVar31 + fVar33 * local_68 + fVar29 * local_58;
    fVar34 = fStack_74 * fVar31 + fVar33 * fStack_64 + fVar29 * fStack_54;
    fVar35 = fStack_70 * fVar31 + fVar33 * fStack_60 + fVar29 * fStack_50;
    *(float *)(param_1 + 0x1b0) = fVar14;
    *(float *)(param_1 + 0x1b4) = fVar34;
    *(float *)(param_1 + 0x1b8) = fVar35;
    *(float *)(param_1 + 0x1bc) = fStack_6c * fVar31 + fVar33 * fStack_5c + fVar29 * fStack_4c;
    fVar36 = fVar15 * fVar13 + fVar17 * fVar9 + fVar22 * fVar16 + 0.0 + fVar10;
    fVar16 = fVar15 * fVar35 + fVar17 * fVar34 + fVar16 * fVar14 + 0.0;
    fVar10 = fVar35 * fVar29 + fVar34 * fVar33 + fVar14 * fVar31 + 0.0 + fVar10;
    fVar15 = fVar13 * fVar29 + fVar9 * fVar33 + fVar22 * fVar31 + 0.0;
  }
  else {
    fVar10 = 0.0;
    fVar16 = 0.0;
    fVar36 = 0.0;
    fVar15 = fVar16;
  }
  if (*(char *)(lVar3 + 0x78) == '\x02') {
    lVar2 = *(long *)(lVar3 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
    fVar17 = *(float *)(lVar2 + 0x58);
    fVar29 = local_78 * fVar26 + fVar27 * local_68 + fVar25 * local_58;
    fVar31 = fStack_74 * fVar26 + fVar27 * fStack_64 + fVar25 * fStack_54;
    fVar33 = fStack_70 * fVar26 + fVar27 * fStack_60 + fVar25 * fStack_50;
    *(float *)(param_1 + 0x1c0) = fVar29;
    *(float *)(param_1 + 0x1c4) = fVar31;
    *(float *)(param_1 + 0x1c8) = fVar33;
    *(float *)(param_1 + 0x1cc) = fStack_6c * fVar26 + fVar27 * fStack_5c + fVar25 * fStack_4c;
    fVar22 = local_78 * fVar19 + fVar20 * local_68 + fVar18 * local_58;
    fVar9 = fStack_74 * fVar19 + fVar20 * fStack_64 + fVar18 * fStack_54;
    fVar13 = fStack_70 * fVar19 + fVar20 * fStack_60 + fVar18 * fStack_50;
    *(float *)(param_1 + 0x1d0) = fVar22;
    *(float *)(param_1 + 0x1d4) = fVar9;
    *(float *)(param_1 + 0x1d8) = fVar13;
    *(float *)(param_1 + 0x1dc) = fStack_6c * fVar19 + fVar20 * fStack_5c + fVar18 * fStack_4c;
    fVar36 = fVar36 + fVar25 * fVar33 + fVar27 * fVar31 + fVar26 * fVar29 + 0.0 + fVar17;
    fVar16 = fVar16 + fVar25 * fVar13 + fVar27 * fVar9 + fVar26 * fVar22 + 0.0;
    fVar15 = fVar15 + fVar33 * fVar18 + fVar31 * fVar20 + fVar29 * fVar19 + 0.0;
    fVar10 = fVar10 + fVar18 * fVar13 + fVar9 * fVar20 + fVar22 * fVar19 + 0.0 + fVar17;
  }
  fVar17 = fVar10 * fVar36 - fVar16 * fVar15;
  if (fVar17 == 0.0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined1 (*) [16])(param_1 + 0x1e0) = (undefined1  [16])0x0;
  }
  else {
    auVar11._4_4_ = (uint)fVar15 ^ _LC40;
    auVar11._0_4_ = fVar10;
    auVar11._12_4_ = fVar36;
    auVar11._8_4_ = (uint)fVar16 ^ _LC40;
    auVar12._4_4_ = fVar17;
    auVar12._0_4_ = fVar17;
    auVar12._8_4_ = fVar17;
    auVar12._12_4_ = fVar17;
    auVar12 = divps(auVar11,auVar12);
    *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar12;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::SliderConstraint::CalculateSlidingAxisAndPosition(JPH::Mat44 const&) */

void __thiscall
JPH::SliderConstraint::CalculateSlidingAxisAndPosition(SliderConstraint *this,Mat44 *param_1)

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
  
  if (((this[0xa0] == (SliderConstraint)0x0) && (*(int *)(this + 0xd8) == 0)) &&
     (*(float *)(this + 0xb8) <= 0.0)) {
    return;
  }
  fVar1 = *(float *)(this + 0x60);
  fVar2 = *(float *)(this + 100);
  fVar3 = *(float *)(this + 0x68);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x3c);
  fVar8 = fVar1 * *(float *)param_1 + fVar2 * *(float *)(param_1 + 0x10) +
          fVar3 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30);
  fVar9 = fVar1 * *(float *)(param_1 + 4) + fVar2 * *(float *)(param_1 + 0x14) +
          fVar3 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34);
  fVar10 = fVar1 * *(float *)(param_1 + 8) + fVar2 * *(float *)(param_1 + 0x18) +
           fVar3 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  *(float *)(this + 0x120) = fVar8;
  *(float *)(this + 0x124) = fVar9;
  *(float *)(this + 0x128) = fVar10;
  *(float *)(this + 300) = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6 + fVar7;
  *(float *)(this + 0x150) =
       fVar10 * *(float *)(this + 0x118) +
       fVar9 * *(float *)(this + 0x114) + *(float *)(this + 0x110) * fVar8 + 0.0;
  return;
}



/* JPH::SliderConstraint::CalculatePositionLimitsConstraintProperties(float) */

void __thiscall
JPH::SliderConstraint::CalculatePositionLimitsConstraintProperties
          (SliderConstraint *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  
  fVar1 = *(float *)(this + 0x150);
  fVar2 = *(float *)(this + 0xa4);
  if ((this[0xa0] != (SliderConstraint)0x0) &&
     ((fVar1 <= fVar2 || (fVar2 = *(float *)(this + 0xa8), fVar2 <= fVar1)))) {
    AxisConstraintPart::CalculateConstraintPropertiesWithSettings
              (param_1,CONCAT44(*(float *)(this + 0x114) + *(float *)(this + 0xf4),
                                *(float *)(this + 0x110) + *(float *)(this + 0xf0)),
               CONCAT44(*(float *)(this + 0x11c) + *(float *)(this + 0xfc),
                        *(float *)(this + 0x118) + *(float *)(this + 0xf8)),
               *(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),
               *(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),0,this + 0x2d0,
               *(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30),this + 0xac,in_R8,in_R9,
               fVar1 - fVar2);
    return;
  }
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::SolvePositionConstraint(float, float) */

ulong __thiscall
JPH::SliderConstraint::SolvePositionConstraint(SliderConstraint *this,float param_1,float param_2)

{
  SliderConstraint SVar1;
  Mat44 *pMVar2;
  Mat44 *pMVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  Mat44 *pMVar16;
  Mat44 *pMVar17;
  SliderConstraint *pSVar18;
  long in_FS_OFFSET;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float fStack_18c;
  Mat44 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  Mat44 local_108 [16];
  undefined8 local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  Body local_c8 [16];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pMVar2 = *(Mat44 **)(this + 0x28);
  pMVar3 = *(Mat44 **)(this + 0x30);
  pMVar17 = local_148;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar26 = (float)*(undefined8 *)(pMVar2 + 0x18);
  fVar25 = (float)*(undefined8 *)(pMVar2 + 0x10);
  fVar28 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  fVar27 = fVar25 + fVar25;
  fVar30 = fVar24 + fVar24;
  fVar31 = fVar26 * (fVar26 + fVar26);
  fVar20 = fVar28 * (fVar26 + fVar26);
  local_148._4_4_ = fVar24 * fVar27 + fVar20;
  local_148._0_4_ = (_LC1 - fVar24 * fVar30) - fVar31;
  local_148._8_4_ = fVar26 * fVar27 - fVar30 * fVar28;
  local_148._12_4_ = 0;
  fVar29 = (float)*(undefined8 *)(pMVar3 + 0x18);
  local_138._4_4_ = (_LC1 - fVar31) - fVar25 * fVar27;
  local_138._0_4_ = fVar24 * fVar27 - fVar20;
  local_128 = CONCAT44(fVar26 * fVar30 - fVar27 * fVar28,fVar26 * fVar27 + fVar30 * fVar28);
  fVar20 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x18) >> 0x20);
  local_138._8_4_ = fVar27 * fVar28 + fVar26 * fVar30;
  local_138._12_4_ = 0;
  local_118 = __LC11;
  uStack_110 = _UNK_00108008;
  fVar26 = (float)*(undefined8 *)(pMVar3 + 0x10);
  fVar28 = fVar26 + fVar26;
  uStack_120 = (ulong)(uint)((_LC1 - fVar25 * fVar27) - fVar24 * fVar30);
  fVar25 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x10) >> 0x20);
  fVar27 = fVar25 + fVar25;
  fVar30 = fVar29 * (fVar29 + fVar29);
  fVar24 = fVar20 * (fVar29 + fVar29);
  local_108._0_4_ = (_LC1 - fVar25 * fVar27) - fVar30;
  local_108._4_4_ = fVar25 * fVar28 + fVar24;
  local_108._8_4_ = fVar29 * fVar28 - fVar27 * fVar20;
  local_108._12_4_ = 0;
  local_d8 = __LC11;
  uStack_d0 = _UNK_00108008;
  local_f8 = CONCAT44((_LC1 - fVar30) - fVar26 * fVar28,fVar25 * fVar28 - fVar24);
  uStack_f0 = (ulong)(uint)(fVar28 * fVar20 + fVar29 * fVar27);
  local_e8 = CONCAT44(fVar29 * fVar27 - fVar28 * fVar20,fVar29 * fVar28 + fVar27 * fVar20);
  uStack_e0 = (ulong)(uint)((_LC1 - fVar26 * fVar28) - fVar25 * fVar27);
  pMVar16 = pMVar17;
  pSVar18 = this;
  CalculateR1R2U(this,pMVar17,local_108);
  CalculatePositionConstraintProperties((Mat44 *)pSVar18,pMVar16);
  fVar20 = (float)*(undefined8 *)(this + 0x110);
  fVar25 = (float)*(undefined8 *)(this + 0x130);
  fVar30 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  fVar31 = (float)((ulong)*(undefined8 *)(this + 0x130) >> 0x20);
  fVar24 = (float)*(undefined8 *)(this + 0x138);
  fVar27 = fVar24 * *(float *)(this + 0x118) + fVar31 * fVar30 + fVar25 * fVar20 + 0.0;
  fVar26 = (float)*(undefined8 *)(this + 0x140);
  fVar28 = (float)((ulong)*(undefined8 *)(this + 0x140) >> 0x20);
  fVar29 = (float)*(undefined8 *)(this + 0x148);
  fVar20 = *(float *)(this + 0x118) * fVar29 + fVar28 * fVar30 + fVar20 * fVar26 + 0.0;
  bVar7 = fVar27 != 0.0 || fVar20 != 0.0;
  if (bVar7) {
    uStack_1a0._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x148) >> 0x20);
    fVar30 = (*(float *)(this + 0x1e8) * fVar20 + *(float *)(this + 0x1e0) * fVar27 + 0.0) *
             (float)((uint)param_2 ^ _LC40);
    fVar20 = (fVar20 * *(float *)(this + 0x1ec) + fVar27 * *(float *)(this + 0x1e4) + 0.0) *
             (float)((uint)param_2 ^ _LC40);
    fStack_18c = (float)((ulong)*(undefined8 *)(this + 0x138) >> 0x20);
    fVar25 = fVar26 * fVar20 + fVar25 * fVar30;
    fVar26 = fVar28 * fVar20 + fVar31 * fVar30;
    fVar24 = fVar29 * fVar20 + fVar24 * fVar30;
    fVar28 = uStack_1a0._4_4_ * fVar20 + fStack_18c * fVar30;
    if (pMVar2[0x78] == (Mat44)0x2) {
      bVar12 = *(byte *)(*(long *)(pMVar2 + 0x48) + 0x7a);
      fVar29 = *(float *)(*(long *)(pMVar2 + 0x48) + 0x58);
      auVar19._1_3_ = 0;
      auVar19[0] = bVar12;
      auVar19[4] = bVar12;
      auVar19._5_3_ = 0;
      auVar19[8] = bVar12;
      auVar19._9_3_ = 0;
      auVar19[0xc] = bVar12;
      auVar19._13_3_ = 0;
      auVar11._4_4_ = _UNK_00107ff4;
      auVar11._0_4_ = __LC8;
      auVar11._8_4_ = _UNK_00107ff8;
      auVar11._12_4_ = _UNK_00107ffc;
      auVar19 = auVar19 & auVar11;
      bVar4 = auVar19._4_4_ == _UNK_00107ff4;
      bVar5 = auVar19._8_4_ == _UNK_00107ff8;
      bVar6 = auVar19._12_4_ == _UNK_00107ffc;
      *(float *)pMVar2 =
           *(float *)pMVar2 - (float)(-(uint)(auVar19._0_4_ == __LC8) & (uint)(fVar29 * fVar25));
      *(float *)(pMVar2 + 4) =
           *(float *)(pMVar2 + 4) - (float)(-(uint)bVar4 & (uint)(fVar29 * fVar26));
      *(float *)(pMVar2 + 8) =
           *(float *)(pMVar2 + 8) - (float)(-(uint)bVar5 & (uint)(fVar29 * fVar24));
      *(float *)(pMVar2 + 0xc) =
           *(float *)(pMVar2 + 0xc) - (float)(-(uint)bVar6 & (uint)(fVar29 * fVar28));
      local_1a8 = CONCAT44(fVar20 * *(float *)(this + 0x1b4) + fVar30 * *(float *)(this + 0x1a4),
                           fVar20 * *(float *)(this + 0x1b0) + fVar30 * *(float *)(this + 0x1a0));
      uStack_1a0 = CONCAT44(fVar20 * *(float *)(this + 0x1bc) + fVar30 * *(float *)(this + 0x1ac),
                            fVar20 * *(float *)(this + 0x1b8) + fVar30 * *(float *)(this + 0x1a8));
      Body::SubRotationStep(local_1a8,uStack_1a0,pMVar2);
    }
    if (pMVar3[0x78] == (Mat44)0x2) {
      bVar12 = *(byte *)(*(long *)(pMVar3 + 0x48) + 0x7a);
      fVar29 = *(float *)(*(long *)(pMVar3 + 0x48) + 0x58);
      auVar21._1_3_ = 0;
      auVar21[0] = bVar12;
      auVar21[4] = bVar12;
      auVar21._5_3_ = 0;
      auVar21[8] = bVar12;
      auVar21._9_3_ = 0;
      auVar21[0xc] = bVar12;
      auVar21._13_3_ = 0;
      auVar10._4_4_ = _UNK_00107ff4;
      auVar10._0_4_ = __LC8;
      auVar10._8_4_ = _UNK_00107ff8;
      auVar10._12_4_ = _UNK_00107ffc;
      auVar21 = auVar21 & auVar10;
      bVar4 = auVar21._4_4_ == _UNK_00107ff4;
      bVar5 = auVar21._8_4_ == _UNK_00107ff8;
      bVar6 = auVar21._12_4_ == _UNK_00107ffc;
      *(float *)pMVar3 =
           (float)((uint)(fVar29 * fVar25) & -(uint)(auVar21._0_4_ == __LC8)) + *(float *)pMVar3;
      *(float *)(pMVar3 + 4) =
           (float)((uint)(fVar29 * fVar26) & -(uint)bVar4) + *(float *)(pMVar3 + 4);
      *(float *)(pMVar3 + 8) =
           (float)((uint)(fVar29 * fVar24) & -(uint)bVar5) + *(float *)(pMVar3 + 8);
      *(float *)(pMVar3 + 0xc) =
           (float)((uint)(fVar29 * fVar28) & -(uint)bVar6) + *(float *)(pMVar3 + 0xc);
      local_1a8 = CONCAT44(fVar20 * *(float *)(this + 0x1d4) + fVar30 * *(float *)(this + 0x1c4),
                           fVar20 * *(float *)(this + 0x1d0) + fVar30 * *(float *)(this + 0x1c0));
      uStack_1a0 = CONCAT44(fVar20 * *(float *)(this + 0x1dc) + fVar30 * *(float *)(this + 0x1cc),
                            fVar20 * *(float *)(this + 0x1d8) + fVar30 * *(float *)(this + 0x1c8));
      Body::AddRotationStep(local_1a8,uStack_1a0,pMVar3);
    }
  }
  fVar25 = (float)*(undefined8 *)(pMVar3 + 0x10);
  fVar26 = (float)*(undefined8 *)(pMVar3 + 0x18);
  fVar24 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x10) >> 0x20);
  fVar29 = fVar25 + fVar25;
  fVar27 = fVar24 + fVar24;
  fVar28 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x18) >> 0x20);
  fVar20 = fVar26 * (fVar26 + fVar26);
  fVar30 = (fVar26 + fVar26) * fVar28;
  local_88._0_4_ = (_LC1 - fVar24 * fVar27) - fVar20;
  local_88._4_4_ = fVar24 * fVar29 + fVar30;
  local_88._8_4_ = fVar26 * fVar29 - fVar27 * fVar28;
  local_88._12_4_ = 0;
  local_78 = CONCAT44((_LC1 - fVar20) - fVar25 * fVar29,fVar24 * fVar29 - fVar30);
  uStack_70 = (ulong)(uint)(fVar29 * fVar28 + fVar26 * fVar27);
  local_68._4_4_ = fVar26 * fVar27 - fVar29 * fVar28;
  local_68._0_4_ = fVar26 * fVar29 + fVar27 * fVar28;
  fVar28 = (float)*(undefined8 *)(pMVar2 + 0x18);
  fVar26 = (float)*(undefined8 *)(pMVar2 + 0x10);
  fVar20 = fVar26 + fVar26;
  fVar30 = fVar28 * (fVar28 + fVar28);
  local_68._8_4_ = (_LC1 - fVar25 * fVar29) - fVar24 * fVar27;
  local_68._12_4_ = 0;
  fVar24 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  fVar25 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  fVar27 = (fVar28 + fVar28) * fVar24;
  fVar29 = fVar25 + fVar25;
  local_c8._0_4_ = (_LC1 - fVar25 * fVar29) - fVar30;
  local_c8._4_4_ = fVar25 * fVar20 + fVar27;
  local_c8._8_4_ = fVar28 * fVar20 - fVar29 * fVar24;
  local_c8._12_4_ = 0;
  local_b8 = CONCAT44((_LC1 - fVar30) - fVar26 * fVar20,fVar25 * fVar20 - fVar27);
  uStack_b0 = (ulong)(uint)(fVar20 * fVar24 + fVar28 * fVar29);
  local_a8 = CONCAT44(fVar28 * fVar29 - fVar20 * fVar24,fVar28 * fVar20 + fVar29 * fVar24);
  fStack_a0 = (_LC1 - fVar26 * fVar20) - fVar25 * fVar29;
  uStack_9c = 0;
  local_98 = __LC11;
  uStack_90 = _UNK_00108008;
  local_58 = __LC11;
  uStack_50 = _UNK_00108008;
  RotationEulerConstraintPart::CalculateConstraintProperties
            ((Body *)(this + 0x200),pMVar2,local_c8,pMVar3);
  uVar13 = RotationEulerConstraintPart::SolvePositionConstraint
                     (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),
                      (Body *)(this + 0x200),pMVar2,pMVar3);
  SVar1 = this[0xa0];
  uVar14 = uVar13;
  if ((SVar1 != (SliderConstraint)0x0) && (*(float *)(this + 0xb0) <= 0.0)) {
    fVar25 = (float)*(undefined8 *)(pMVar2 + 0x10);
    fVar26 = (float)*(undefined8 *)(pMVar2 + 0x18);
    fVar24 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
    fVar20 = fVar25 + fVar25;
    fVar30 = fVar24 + fVar24;
    fVar28 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
    fVar29 = fVar28 * (fVar26 + fVar26);
    fVar27 = fVar26 * (fVar26 + fVar26);
    local_148._0_4_ = (_LC1 - fVar24 * fVar30) - fVar27;
    local_148._4_4_ = fVar24 * fVar20 + fVar29;
    local_148._8_4_ = fVar26 * fVar20 - fVar30 * fVar28;
    local_148._12_4_ = 0;
    local_128 = CONCAT44(fVar26 * fVar30 - fVar20 * fVar28,fVar26 * fVar20 + fVar30 * fVar28);
    local_138._4_4_ = (_LC1 - fVar27) - fVar25 * fVar20;
    local_138._0_4_ = fVar24 * fVar20 - fVar29;
    local_138._8_4_ = fVar20 * fVar28 + fVar26 * fVar30;
    local_138._12_4_ = 0;
    fVar28 = (float)*(undefined8 *)(pMVar3 + 0x18);
    fVar26 = (float)*(undefined8 *)(pMVar3 + 0x10);
    fVar27 = fVar26 + fVar26;
    fVar31 = fVar28 * (fVar28 + fVar28);
    uStack_120 = (ulong)(uint)((_LC1 - fVar25 * fVar20) - fVar24 * fVar30);
    fVar24 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x18) >> 0x20);
    fVar25 = (float)((ulong)*(undefined8 *)(pMVar3 + 0x10) >> 0x20);
    fVar20 = fVar25 + fVar25;
    fVar29 = fVar24 * (fVar28 + fVar28);
    local_108._0_4_ = (_LC1 - fVar25 * fVar20) - fVar31;
    local_108._4_4_ = fVar25 * fVar27 + fVar29;
    local_108._8_4_ = fVar28 * fVar27 - fVar20 * fVar24;
    local_108._12_4_ = 0;
    uStack_f0 = (ulong)(uint)(fVar27 * fVar24 + fVar28 * fVar20);
    local_f8 = CONCAT44((_LC1 - fVar31) - fVar26 * fVar27,fVar25 * fVar27 - fVar29);
    local_e8 = CONCAT44(fVar28 * fVar20 - fVar27 * fVar24,fVar28 * fVar27 + fVar20 * fVar24);
    uStack_e0 = (ulong)(uint)((_LC1 - fVar26 * fVar27) - fVar25 * fVar20);
    pSVar18 = this;
    CalculateR1R2U(this,pMVar17,local_108);
    CalculateSlidingAxisAndPosition(pSVar18,pMVar17);
    CalculatePositionLimitsConstraintProperties(pSVar18,param_1);
    uVar14 = uVar13 & 0xff;
    if (*(float *)(this + 0x300) != 0.0) {
      fVar24 = *(float *)(this + 0x120);
      fVar26 = *(float *)(this + 0x124);
      fVar28 = *(float *)(this + 0x128);
      fVar29 = *(float *)(this + 300);
      fVar25 = *(float *)(this + 0xa4);
      if (fVar25 < *(float *)(this + 0x150)) {
        fVar25 = *(float *)(this + 0xa8);
      }
      fVar25 = *(float *)(this + 0x150) - fVar25;
      if ((fVar25 != 0.0) && (*(float *)(this + 0x308) == 0.0)) {
        fVar25 = (float)((uint)*(float *)(this + 0x300) ^ _LC40) * param_2 * fVar25;
        if (pMVar2[0x78] == (Mat44)0x2) {
          bVar12 = *(byte *)(*(long *)(pMVar2 + 0x48) + 0x7a);
          fVar20 = *(float *)(*(long *)(pMVar2 + 0x48) + 0x58) * fVar25;
          auVar23._1_3_ = 0;
          auVar23[0] = bVar12;
          auVar23[4] = bVar12;
          auVar23._5_3_ = 0;
          auVar23[8] = bVar12;
          auVar23._9_3_ = 0;
          auVar23[0xc] = bVar12;
          auVar23._13_3_ = 0;
          auVar9._4_4_ = _UNK_00107ff4;
          auVar9._0_4_ = __LC8;
          auVar9._8_4_ = _UNK_00107ff8;
          auVar9._12_4_ = _UNK_00107ffc;
          auVar23 = auVar23 & auVar9;
          bVar4 = auVar23._4_4_ == _UNK_00107ff4;
          bVar5 = auVar23._8_4_ == _UNK_00107ff8;
          bVar6 = auVar23._12_4_ == _UNK_00107ffc;
          *(float *)pMVar2 =
               *(float *)pMVar2 - (float)((uint)(fVar20 * fVar24) & -(uint)(auVar23._0_4_ == __LC8))
          ;
          *(float *)(pMVar2 + 4) =
               *(float *)(pMVar2 + 4) - (float)((uint)(fVar20 * fVar26) & -(uint)bVar4);
          *(float *)(pMVar2 + 8) =
               *(float *)(pMVar2 + 8) - (float)((uint)(fVar20 * fVar28) & -(uint)bVar5);
          *(float *)(pMVar2 + 0xc) =
               *(float *)(pMVar2 + 0xc) - (float)((uint)(fVar20 * fVar29) & -(uint)bVar6);
          local_1a8 = CONCAT44(fVar25 * *(float *)(this + 0x2ec),fVar25 * *(float *)(this + 0x2e8));
          uStack_1a0 = CONCAT44(fVar25 * *(float *)(this + 0x2f4),fVar25 * *(float *)(this + 0x2f0))
          ;
          Body::SubRotationStep(local_1a8,uStack_1a0,pMVar2);
        }
        uVar15 = (ulong)(byte)SVar1;
        uVar14 = uVar13 & 0xff;
        if (pMVar3[0x78] == (Mat44)0x2) {
          bVar12 = *(byte *)(*(long *)(pMVar3 + 0x48) + 0x7a);
          fVar20 = *(float *)(*(long *)(pMVar3 + 0x48) + 0x58) * fVar25;
          auVar22._1_3_ = 0;
          auVar22[0] = bVar12;
          auVar22[4] = bVar12;
          auVar22._5_3_ = 0;
          auVar22[8] = bVar12;
          auVar22._9_3_ = 0;
          auVar22[0xc] = bVar12;
          auVar22._13_3_ = 0;
          auVar8._4_4_ = _UNK_00107ff4;
          auVar8._0_4_ = __LC8;
          auVar8._8_4_ = _UNK_00107ff8;
          auVar8._12_4_ = _UNK_00107ffc;
          auVar22 = auVar22 & auVar8;
          bVar4 = auVar22._4_4_ == _UNK_00107ff4;
          bVar5 = auVar22._8_4_ == _UNK_00107ff8;
          bVar6 = auVar22._12_4_ == _UNK_00107ffc;
          *(float *)pMVar3 =
               (float)((uint)(fVar20 * fVar24) & -(uint)(auVar22._0_4_ == __LC8)) + *(float *)pMVar3
          ;
          *(float *)(pMVar3 + 4) =
               (float)((uint)(fVar20 * fVar26) & -(uint)bVar4) + *(float *)(pMVar3 + 4);
          *(float *)(pMVar3 + 8) =
               (float)((uint)(fVar20 * fVar28) & -(uint)bVar5) + *(float *)(pMVar3 + 8);
          *(float *)(pMVar3 + 0xc) =
               (float)((uint)(fVar20 * fVar29) & -(uint)bVar6) + *(float *)(pMVar3 + 0xc);
          local_1a8 = CONCAT44(*(float *)(this + 0x2f8) * fVar25,*(float *)(this + 0x2f4) * fVar25);
          uStack_1a0 = CONCAT44(*(float *)(this + 0x300) * fVar25,*(float *)(this + 0x2fc) * fVar25)
          ;
          Body::AddRotationStep(local_1a8,uStack_1a0,pMVar3);
        }
        goto LAB_001042dc;
      }
    }
  }
  uVar15 = 0;
LAB_001042dc:
  bVar12 = (byte)uVar14 | bVar7;
  uVar14 = CONCAT71((int7)(uVar14 >> 8),bVar12) & 0xffffffff;
  if (bVar12 == 0) {
    uVar14 = uVar15;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* JPH::SliderConstraint::CalculateMotorConstraintProperties(float) */

long JPH::SliderConstraint::CalculateMotorConstraintProperties(float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_RDI;
  undefined1 in_register_00001204 [12];
  undefined1 auVar9 [16];
  undefined4 uStack_24;
  undefined8 uVar4;
  
  auVar9._4_12_ = in_register_00001204;
  auVar9._0_4_ = param_1;
  iVar5 = *(int *)(in_RDI + 0xd8);
  if (iVar5 == 1) {
    uVar7 = *(undefined8 *)(in_RDI + 0x30);
    uVar8 = *(undefined8 *)(in_RDI + 0x28);
    uVar3 = CONCAT44(*(float *)(in_RDI + 0x114) + *(float *)(in_RDI + 0xf4),
                     *(float *)(in_RDI + 0x110) + *(float *)(in_RDI + 0xf0));
    uVar4 = CONCAT44(*(float *)(in_RDI + 0x11c) + *(float *)(in_RDI + 0xfc),
                     *(float *)(in_RDI + 0x118) + *(float *)(in_RDI + 0xf8));
LAB_001049cb:
    lVar6 = AxisConstraintPart::CalculateConstraintProperties
                      (uVar3,uVar4,*(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),
                       *(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                       in_RDI + 0x310,uVar8,uVar7);
    return lVar6;
  }
  if (iVar5 == 2) {
    if (0.0 < *(float *)(in_RDI + 0xc0)) {
      fVar1 = *(float *)(in_RDI + 0x150);
      fVar2 = *(float *)(in_RDI + 0xe0);
      AxisConstraintPart::CalculateConstraintPropertiesWithSettings
                (auVar9._0_8_,
                 CONCAT44(*(float *)(in_RDI + 0x114) + *(float *)(in_RDI + 0xf4),
                          *(float *)(in_RDI + 0x110) + *(float *)(in_RDI + 0xf0)),
                 CONCAT44(*(float *)(in_RDI + 0x11c) + *(float *)(in_RDI + 0xfc),
                          *(float *)(in_RDI + 0x118) + *(float *)(in_RDI + 0xf8)),
                 *(undefined8 *)(in_RDI + 0x100),*(undefined8 *)(in_RDI + 0x108),
                 *(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),0,in_RDI + 0x310,
                 *(undefined8 *)(in_RDI + 0x28),*(undefined8 *)(in_RDI + 0x30),in_RDI + 0xbc);
      return CONCAT44(uStack_24,fVar1 - fVar2);
    }
  }
  else {
    if (iVar5 != 0) {
      return in_RDI;
    }
    if (0.0 < *(float *)(in_RDI + 0xb8)) {
      uVar7 = *(undefined8 *)(in_RDI + 0x30);
      uVar8 = *(undefined8 *)(in_RDI + 0x28);
      uVar3 = CONCAT44(*(float *)(in_RDI + 0x114) + *(float *)(in_RDI + 0xf4),
                       *(float *)(in_RDI + 0x110) + *(float *)(in_RDI + 0xf0));
      uVar4 = CONCAT44(*(float *)(in_RDI + 0x11c) + *(float *)(in_RDI + 0xfc),
                       *(float *)(in_RDI + 0x118) + *(float *)(in_RDI + 0xf8));
      goto LAB_001049cb;
    }
  }
  *(undefined4 *)(in_RDI + 0x340) = 0;
  *(undefined4 *)(in_RDI + 0x34c) = 0;
  return in_RDI;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SliderConstraint::SetupVelocityConstraint(float) */

void __thiscall JPH::SliderConstraint::SetupVelocityConstraint(SliderConstraint *this,float param_1)

{
  Mat44 *pMVar1;
  Mat44 *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Mat44 *pMVar7;
  SliderConstraint *pSVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Mat44 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Mat44 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pMVar1 = *(Mat44 **)(this + 0x28);
  pMVar2 = *(Mat44 **)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)(pMVar1 + 0x10);
  fVar6 = (float)*(undefined8 *)(pMVar1 + 0x18);
  fVar4 = (float)((ulong)*(undefined8 *)(pMVar1 + 0x10) >> 0x20);
  fVar11 = fVar3 + fVar3;
  fVar12 = fVar4 + fVar4;
  fVar10 = (float)((ulong)*(undefined8 *)(pMVar1 + 0x18) >> 0x20);
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar9 = fVar10 * (fVar6 + fVar6);
  fVar5 = (float)*(undefined8 *)(pMVar2 + 0x10);
  local_c8._0_4_ = (_LC1 - fVar4 * fVar12) - fVar13;
  local_c8._4_4_ = fVar4 * fVar11 + fVar9;
  local_c8._8_4_ = fVar6 * fVar11 - fVar12 * fVar10;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC1 - fVar13) - fVar3 * fVar11;
  local_b8._0_4_ = fVar4 * fVar11 - fVar9;
  uStack_a0 = (ulong)(uint)((_LC1 - fVar3 * fVar11) - fVar4 * fVar12);
  fVar9 = fVar5 + fVar5;
  local_b8._8_4_ = fVar11 * fVar10 + fVar6 * fVar12;
  local_b8._12_4_ = 0;
  local_a8 = CONCAT44(fVar6 * fVar12 - fVar11 * fVar10,fVar6 * fVar11 + fVar12 * fVar10);
  fVar4 = (float)*(undefined8 *)(pMVar2 + 0x18);
  fVar3 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  fVar11 = fVar3 + fVar3;
  local_98 = __LC11;
  uStack_90 = _UNK_00108008;
  fVar10 = fVar6 * (fVar4 + fVar4);
  fVar12 = fVar4 * (fVar4 + fVar4);
  local_88._0_4_ = (_LC1 - fVar3 * fVar11) - fVar12;
  local_88._4_4_ = fVar3 * fVar9 + fVar10;
  local_88._8_4_ = fVar4 * fVar9 - fVar11 * fVar6;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC1 - fVar12) - fVar5 * fVar9;
  local_78._0_4_ = fVar3 * fVar9 - fVar10;
  local_78._8_4_ = fVar9 * fVar6 + fVar4 * fVar11;
  local_78._12_4_ = 0;
  local_68 = CONCAT44(fVar4 * fVar11 - fVar9 * fVar6,fVar4 * fVar9 + fVar11 * fVar6);
  uStack_60 = (ulong)(uint)((_LC1 - fVar5 * fVar9) - fVar3 * fVar11);
  local_58 = __LC11;
  uStack_50 = _UNK_00108008;
  pMVar7 = local_c8;
  pSVar8 = this;
  CalculateR1R2U(this,local_c8,local_88);
  CalculatePositionConstraintProperties((Mat44 *)pSVar8,pMVar7);
  RotationEulerConstraintPart::CalculateConstraintProperties
            ((Body *)(this + 0x200),pMVar1,(Body *)local_c8,pMVar2);
  CalculateSlidingAxisAndPosition(this,local_c8);
  CalculatePositionLimitsConstraintProperties(this,param_1);
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



/* JPH::SliderConstraint::GetSubType() const */

undefined8 JPH::SliderConstraint::GetSubType(void)

{
  return 3;
}



/* JPH::SliderConstraintSettings::~SliderConstraintSettings() */

void __thiscall
JPH::SliderConstraintSettings::~SliderConstraintSettings(SliderConstraintSettings *this)

{
  return;
}



/* JPH::SliderConstraintSettings::~SliderConstraintSettings() */

void __thiscall
JPH::SliderConstraintSettings::~SliderConstraintSettings(SliderConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00104dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::SliderConstraint::~SliderConstraint() */

void __thiscall JPH::SliderConstraint::~SliderConstraint(SliderConstraint *this)

{
  return;
}



/* JPH::SliderConstraint::~SliderConstraint() */

void __thiscall JPH::SliderConstraint::~SliderConstraint(SliderConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00104df4. Too many branches */
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
  
  uVar6 = _UNK_00108008;
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
  *(undefined8 *)(param_1 + 0x30) = __LC11;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_00108014;
  auVar5._0_4_ = __LC13;
  auVar5._8_4_ = _UNK_00108018;
  auVar5._12_4_ = _UNK_0010801c;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC13);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00108014);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00108018);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_0010801c);
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
  if (auVar5._0_4_ <= __LC14) {
    return;
  }
  fVar11 = _LC15 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC46 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00108024 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00108028 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010802c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC18 * fVar17 + _LC15);
  iVar14 = (int)(_LC18 * fVar18 + _LC15);
  iVar15 = (int)(_LC18 * fVar19 + _LC15);
  iVar16 = (int)(_LC18 * fVar20 + _LC15);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC21 * fVar4) - _LC23 * fVar4) - fVar4 * _LC25;
  fVar18 = ((fVar18 - _LC21 * fVar6) - _LC23 * fVar6) - fVar6 * _LC25;
  fVar7 = ((fVar19 - _LC21 * fVar7) - _LC23 * fVar7) - fVar7 * _LC25;
  fVar9 = ((fVar20 - _LC21 * fVar9) - _LC23 * fVar9) - fVar9 * _LC25;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC27 * fVar4 + _LC29) * fVar4 + _LC31) * fVar4 * fVar4 - _LC15 * fVar4) + _LC1;
  fVar20 = (((_LC27 * fVar22 + _LC29) * fVar22 + _LC31) * fVar22 * fVar22 - _LC15 * fVar22) + _LC1;
  fVar8 = (((_LC27 * fVar24 + _LC29) * fVar24 + _LC31) * fVar24 * fVar24 - _LC15 * fVar24) + _LC1;
  fVar10 = (((_LC27 * fVar26 + _LC29) * fVar26 + _LC31) * fVar26 * fVar26 - _LC15 * fVar26) + _LC1;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC34 * fVar4 + _LC36) * fVar4 + _LC38) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC34 * fVar22 + _LC36) * fVar22 + _LC38) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC34 * fVar24 + _LC36) * fVar24 + _LC38) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC34 * fVar26 + _LC36) * fVar26 + _LC38) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC39 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC46 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC39 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC46 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00108034 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00108024 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00108034 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00108024 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00108038 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00108028 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00108038 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00108028 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010803c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010802c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010803c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010802c ^
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
  if (auVar5._0_4_ <= __LC14) {
    return;
  }
  fVar11 = _LC41 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC46 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00108024 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00108028 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010802c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC18 * fVar17 + _LC15);
  iVar14 = (int)(_LC18 * fVar18 + _LC15);
  iVar15 = (int)(_LC18 * fVar19 + _LC15);
  iVar16 = (int)(_LC18 * fVar20 + _LC15);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC21 * fVar4) - _LC23 * fVar4) - fVar4 * _LC25;
  fVar18 = ((fVar18 - _LC21 * fVar6) - _LC23 * fVar6) - fVar6 * _LC25;
  fVar7 = ((fVar19 - _LC21 * fVar7) - _LC23 * fVar7) - fVar7 * _LC25;
  fVar9 = ((fVar20 - _LC21 * fVar9) - _LC23 * fVar9) - fVar9 * _LC25;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC27 * fVar4 + _LC29) * fVar4 + _LC31) * fVar4 * fVar4 - _LC15 * fVar4) + _LC1;
  fVar20 = (((_LC27 * fVar22 + _LC29) * fVar22 + _LC31) * fVar22 * fVar22 - _LC15 * fVar22) + _LC1;
  fVar8 = (((_LC27 * fVar24 + _LC29) * fVar24 + _LC31) * fVar24 * fVar24 - _LC15 * fVar24) + _LC1;
  fVar10 = (((_LC27 * fVar26 + _LC29) * fVar26 + _LC31) * fVar26 * fVar26 - _LC15 * fVar26) + _LC1;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC34 * fVar4 + _LC36) * fVar4 + _LC38) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC34 * fVar22 + _LC36) * fVar22 + _LC38) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC34 * fVar24 + _LC36) * fVar24 + _LC38) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC34 * fVar26 + _LC36) * fVar26 + _LC38) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC39 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC46 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC39 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC46 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00108034 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00108024 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00108034 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00108024 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00108038 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00108028 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00108038 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00108028 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010803c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010802c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010803c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010802c ^
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



/* JPH::DualAxisConstraintPart::CalculateLagrangeMultiplier(JPH::Body const&, JPH::Body const&,
   JPH::Vec3, JPH::Vec3, JPH::Vector<2u>&) const */

void JPH::DualAxisConstraintPart::CalculateLagrangeMultiplier
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,float param_4,
               float *param_1,long param_2,long param_7,undefined8 *param_8)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (float)((ulong)param_1_00 >> 0x20);
  cVar1 = *(char *)(param_7 + 0x78);
  pfVar2 = *(float **)(param_7 + 0x48);
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (cVar1 != '\0') {
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  pfVar3 = *(float **)(param_2 + 0x48);
  if (*(char *)(param_2 + 0x78) == '\0') {
    fVar6 = 0.0 - fVar6;
    fVar7 = 0.0 - fVar7;
    fVar8 = 0.0 - fVar8;
    fVar9 = param_2_00 * fVar8 + fVar9 * fVar7 + (float)param_1_00 * fVar6 + 0.0;
    auVar4 = SUB1612((undefined1  [16])0x0,0);
  }
  else {
    fVar6 = *pfVar3 - fVar6;
    fVar7 = pfVar3[1] - fVar7;
    fVar8 = pfVar3[2] - fVar8;
    fVar9 = param_2_00 * fVar8 + fVar9 * fVar7 + (float)param_1_00 * fVar6 + 0.0;
    auVar4 = SUB1612(*(undefined1 (*) [16])(pfVar3 + 4),0);
  }
  auVar5 = SUB1612((undefined1  [16])0x0,0);
  if (cVar1 != '\0') {
    auVar5 = SUB1612(*(undefined1 (*) [16])(pfVar2 + 4),0);
  }
  fVar9 = (auVar4._8_4_ * param_1[2] + auVar4._4_4_ * param_1[1] + *param_1 * auVar4._0_4_ + 0.0 +
          fVar9) - (auVar5._8_4_ * param_1[10] +
                   auVar5._4_4_ * param_1[9] + param_1[8] * auVar5._0_4_ + 0.0);
  auVar4 = SUB1612((undefined1  [16])0x0,0);
  if (*(char *)(param_2 + 0x78) != '\0') {
    auVar4 = SUB1612(*(undefined1 (*) [16])(pfVar3 + 4),0);
  }
  auVar5 = SUB1612((undefined1  [16])0x0,0);
  if (cVar1 != '\0') {
    auVar5 = SUB1612(*(undefined1 (*) [16])(pfVar2 + 4),0);
  }
  fVar6 = (auVar4._8_4_ * param_1[6] + auVar4._4_4_ * param_1[5] + param_1[4] * auVar4._0_4_ + 0.0 +
          fVar8 * param_4 + (float)((ulong)param_3 >> 0x20) * fVar7 + (float)param_3 * fVar6 + 0.0)
          - (auVar5._8_4_ * param_1[0xe] +
            auVar5._4_4_ * param_1[0xd] + param_1[0xc] * auVar5._0_4_ + 0.0);
  *param_8 = CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar9 + 0.0,
                      fVar6 * (float)*(undefined8 *)(param_1 + 0x22) +
                      (float)*(undefined8 *)(param_1 + 0x20) * fVar9 + 0.0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::sGetInvInitialOrientationXY(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3) */

undefined1  [16]
JPH::RotationEulerConstraintPart::sGetInvInitialOrientationXY
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar11;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  
  fVar4 = _LC1;
  fVar15 = (float)param_8;
  local_88 = (float)param_1;
  uStack_84 = (float)((ulong)param_1 >> 0x20);
  uStack_80 = (float)param_2;
  uStack_7c = (float)((ulong)param_2 >> 0x20);
  local_78 = (float)param_5;
  uStack_74 = (float)((ulong)param_5 >> 0x20);
  uStack_70 = (float)param_6;
  uStack_6c = (float)((ulong)param_6 >> 0x20);
  auVar9._4_4_ = -(uint)(uStack_84 == uStack_74);
  auVar9._0_4_ = -(uint)(local_88 == local_78);
  auVar9._8_4_ = -(uint)(uStack_80 == uStack_70);
  auVar9._12_4_ = -(uint)(uStack_7c == uStack_6c);
  local_68 = (float)param_3;
  uStack_64 = (float)((ulong)param_3 >> 0x20);
  uStack_60 = (float)param_4;
  uStack_5c = (float)((ulong)param_4 >> 0x20);
  local_58 = (float)param_7;
  uStack_54 = (float)((ulong)param_7 >> 0x20);
  uVar2 = movmskps(in_EAX,auVar9);
  if (((~uVar2 & 7) == 0) &&
     (auVar10._4_4_ = -(uint)(uStack_64 == uStack_54), auVar10._0_4_ = -(uint)(local_68 == local_58)
     , auVar10._8_4_ = -(uint)(uStack_60 == fVar15),
     auVar10._12_4_ = -(uint)(uStack_5c == (float)((ulong)param_8 >> 0x20)),
     uVar2 = movmskps(~uVar2,auVar10), (~uVar2 & 7) == 0)) {
    local_88 = 0.0;
    uStack_84 = 0.0;
    uStack_80 = 0.0;
    uStack_7c = 1.0;
    goto LAB_00105c45;
  }
  fVar7 = uStack_64 * local_88 - uStack_84 * local_68;
  fVar11 = uStack_60 * uStack_84 - uStack_80 * uStack_64;
  fVar12 = local_68 * uStack_80 - local_88 * uStack_60;
  fVar16 = local_88 + uStack_64 + fVar7;
  fVar3 = uStack_54 * local_78 - uStack_74 * local_58;
  fVar5 = fVar15 * uStack_74 - uStack_70 * uStack_54;
  fVar6 = local_58 * uStack_70 - local_78 * fVar15;
  if (0.0 <= fVar16) {
    fVar16 = SQRT(fVar16 + _LC1);
    fVar8 = _LC15 / fVar16;
    fVar16 = fVar16 * _LC15;
    fVar7 = (uStack_60 - fVar12) * fVar8;
    fVar14 = (fVar11 - uStack_80) * fVar8;
    fVar8 = (uStack_84 - local_68) * fVar8;
  }
  else if (uStack_64 <= local_88) {
    if (local_88 < fVar7) goto LAB_00105af3;
    fVar7 = (local_88 - (fVar7 + uStack_64)) + _LC1;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar16 = _LC15 / fVar7;
    fVar7 = fVar7 * _LC15;
    fVar14 = (local_68 + uStack_84) * fVar16;
    fVar8 = (uStack_80 + fVar11) * fVar16;
    fVar16 = (uStack_60 - fVar12) * fVar16;
  }
  else if (fVar7 <= uStack_64) {
    fVar14 = (uStack_64 - (fVar7 + local_88)) + _LC1;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    fVar16 = _LC15 / fVar14;
    fVar14 = fVar14 * _LC15;
    fVar7 = (local_68 + uStack_84) * fVar16;
    fVar8 = (uStack_60 + fVar12) * fVar16;
    fVar16 = (fVar11 - uStack_80) * fVar16;
  }
  else {
LAB_00105af3:
    fVar8 = (fVar7 - (local_88 + uStack_64)) + _LC1;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar16 = _LC15 / fVar8;
    fVar8 = fVar8 * _LC15;
    fVar14 = (fVar12 + uStack_60) * fVar16;
    fVar7 = (fVar11 + uStack_80) * fVar16;
    fVar16 = (uStack_84 - local_68) * fVar16;
  }
  fVar11 = _LC15;
  fVar7 = (float)((uint)fVar7 ^ __LC44);
  fVar14 = (float)((uint)fVar14 ^ _UNK_00108054);
  fVar8 = (float)((uint)fVar8 ^ _UNK_00108058);
  fVar16 = (float)((uint)fVar16 ^ _UNK_0010805c);
  fVar12 = local_78 + uStack_54 + fVar3;
  if (0.0 <= fVar12) {
    fVar3 = SQRT(fVar12 + fVar4);
    fVar12 = _LC15 / fVar3;
    fVar3 = fVar3 * _LC15;
    fVar4 = (uStack_74 - local_58) * fVar12;
    fVar11 = (fVar5 - uStack_70) * fVar12;
    fVar12 = (fVar15 - fVar6) * fVar12;
  }
  else if (uStack_54 <= local_78) {
    if (local_78 < fVar3) goto LAB_00105ba2;
    fVar4 = (local_78 - (fVar3 + uStack_54)) + fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar13 = fVar11 / fVar4;
    fVar12 = fVar4 * fVar11;
    fVar3 = (fVar15 - fVar6) * fVar13;
    fVar4 = (uStack_70 + fVar5) * fVar13;
    fVar11 = (local_58 + uStack_74) * fVar13;
  }
  else if (fVar3 <= uStack_54) {
    fVar4 = (uStack_54 - (local_78 + fVar3)) + fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar12 = fVar11 / fVar4;
    fVar11 = fVar4 * fVar11;
    fVar3 = (fVar5 - uStack_70) * fVar12;
    fVar4 = (fVar15 + fVar6) * fVar12;
    fVar12 = (local_58 + uStack_74) * fVar12;
  }
  else {
LAB_00105ba2:
    fVar4 = (fVar3 - (local_78 + uStack_54)) + fVar4;
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar12 = fVar11 / fVar4;
    fVar4 = fVar4 * fVar11;
    fVar3 = (uStack_74 - local_58) * fVar12;
    fVar11 = (fVar15 + fVar6) * fVar12;
    fVar12 = (uStack_70 + fVar5) * fVar12;
  }
  local_88 = (fVar11 * fVar8 + fVar12 * fVar16 + fVar3 * fVar7) - fVar4 * fVar14;
  uStack_7c = ((fVar3 * fVar16 - fVar12 * fVar7) - fVar11 * fVar14) - fVar4 * fVar8;
  uStack_84 = fVar4 * fVar7 + fVar11 * fVar16 + (fVar3 * fVar14 - fVar12 * fVar8);
  uStack_80 = fVar4 * fVar16 + ((fVar12 * fVar14 + fVar3 * fVar8) - fVar11 * fVar7);
LAB_00105c45:
  auVar1._4_4_ = uStack_84;
  auVar1._0_4_ = local_88;
  auVar1._8_4_ = uStack_80;
  auVar1._12_4_ = uStack_7c;
  return auVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44
   const&, JPH::Body const&, JPH::Mat44 const&) */

void JPH::RotationEulerConstraintPart::CalculateConstraintProperties
               (Body *param_1,Mat44 *param_2,Body *param_3,Mat44 *param_4)

{
  Body *pBVar1;
  Body *pBVar2;
  Mat44 MVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  Mat44 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  Mat44 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x78] == (Mat44)0x2) {
    MotionProperties::GetInverseInertiaForRotation(local_e8);
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8._0_12_ = ZEXT812(0);
    local_c8._12_4_ = 0;
    local_d8._0_12_ = ZEXT812(0);
    local_d8._12_4_ = 0;
    local_e8._0_12_ = ZEXT812(0);
    local_e8._12_4_ = 0;
  }
  MVar3 = param_4[0x78];
  *(Mat44 (*) [16])param_1 = local_e8;
  *(undefined1 (*) [16])(param_1 + 0x10) = local_d8;
  *(undefined1 (*) [16])(param_1 + 0x20) = local_c8;
  *(undefined8 *)(param_1 + 0x30) = local_b8;
  *(undefined8 *)(param_1 + 0x38) = uStack_b0;
  if (MVar3 == (Mat44)0x2) {
    MotionProperties::GetInverseInertiaForRotation(local_a8);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88._0_12_ = ZEXT812(0);
    local_88._12_4_ = 0;
    local_98._0_12_ = ZEXT812(0);
    local_98._12_4_ = 0;
    local_a8._0_12_ = ZEXT812(0);
    local_a8._12_4_ = 0;
  }
  *(Mat44 (*) [16])(param_1 + 0x40) = local_a8;
  lVar11 = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = local_98;
  *(undefined1 (*) [16])(param_1 + 0x60) = local_88;
  *(undefined8 *)(param_1 + 0x70) = local_78;
  *(undefined8 *)(param_1 + 0x78) = uStack_70;
  uVar10 = _UNK_00108008;
  do {
    pBVar2 = param_1 + lVar11 + 0x40;
    fVar4 = *(float *)(pBVar2 + 4);
    fVar5 = *(float *)(pBVar2 + 8);
    fVar6 = *(float *)(pBVar2 + 0xc);
    pBVar1 = param_1 + lVar11;
    fVar7 = *(float *)(pBVar1 + 4);
    fVar8 = *(float *)(pBVar1 + 8);
    fVar9 = *(float *)(pBVar1 + 0xc);
    *(float *)((long)local_68 + lVar11) = *(float *)pBVar2 + *(float *)pBVar1;
    *(float *)((long)local_68 + lVar11 + 4) = fVar4 + fVar7;
    *(float *)((long)local_68 + lVar11 + 8) = fVar5 + fVar8;
    *(float *)((long)local_68 + lVar11 + 0xc) = fVar6 + fVar9;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x40);
  auVar13._0_4_ =
       (local_68[9] * local_68[4] - local_68[5] * local_68[8]) * local_68[2] +
       (local_68[8] * local_68[6] - local_68[4] * local_68[10]) * local_68[1] +
       (local_68[10] * local_68[5] - local_68[6] * local_68[9]) * local_68[0] + 0.0;
  if (auVar13._0_4_ == 0.0) {
    *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
  }
  else {
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    *(undefined8 *)(param_1 + 0xb0) = __LC11;
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    auVar15._0_4_ = local_68[5] * local_68[10] - local_68[9] * local_68[6];
    auVar15._4_4_ = local_68[9] * local_68[2] - local_68[1] * local_68[10];
    auVar15._8_4_ = local_68[1] * local_68[6] - local_68[5] * local_68[2];
    auVar15._12_4_ = 0;
    auVar12._0_4_ = local_68[9] * local_68[4] - local_68[5] * local_68[8];
    auVar12._4_4_ = local_68[1] * local_68[8] - local_68[9] * local_68[0];
    auVar12._8_4_ = local_68[5] * local_68[0] - local_68[1] * local_68[4];
    auVar12._12_4_ = 0;
    auVar14._0_4_ = local_68[6] * local_68[8] - local_68[10] * local_68[4];
    auVar14._4_4_ = local_68[10] * local_68[0] - local_68[2] * local_68[8];
    auVar14._8_4_ = local_68[2] * local_68[4] - local_68[6] * local_68[0];
    auVar14._12_4_ = 0;
    auVar15 = divps(auVar15,auVar13);
    auVar14 = divps(auVar14,auVar13);
    *(undefined1 (*) [16])(param_1 + 0x80) = auVar15;
    auVar13 = divps(auVar12,auVar13);
    *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
    *(undefined1 (*) [16])(param_1 + 0xa0) = auVar13;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, JPH::Quat,
   float) const */

undefined8
JPH::RotationEulerConstraintPart::SolvePositionConstraint
          (undefined8 param_1_00,undefined8 param_2_00,uint param_3,float *param_1,long param_2,
          long param_6)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_68 [18];
  long local_20;
  
  fVar13 = (float)((ulong)param_2_00 >> 0x20);
  fVar10 = (float)param_2_00;
  fVar9 = (float)param_1_00;
  fVar16 = (float)((ulong)param_1_00 >> 0x20);
  uVar5 = 0;
  fVar11 = (float)(__LC44 ^ *(uint *)(param_2 + 0x10));
  fVar14 = (float)(_UNK_00108054 ^ *(uint *)(param_2 + 0x14));
  fVar15 = (float)(_UNK_00108058 ^ *(uint *)(param_2 + 0x18));
  fVar17 = (float)(_UNK_0010805c ^ *(uint *)(param_2 + 0x1c));
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = (float)*(undefined8 *)(param_6 + 0x18);
  fVar18 = (float)*(undefined8 *)(param_6 + 0x10);
  fVar8 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
  fVar21 = (fVar8 * fVar9 + fVar18 * fVar13 + fVar6 * fVar10) - fVar7 * fVar16;
  fVar20 = (fVar8 * fVar16 - fVar18 * fVar10) + fVar6 * fVar13 + fVar7 * fVar9;
  fVar19 = ((fVar8 * fVar10 + fVar18 * fVar16) - fVar6 * fVar9) + fVar7 * fVar13;
  fVar7 = ((fVar8 * fVar13 - fVar18 * fVar9) - fVar6 * fVar16) - fVar7 * fVar10;
  fVar16 = ((fVar17 * fVar7 - fVar21 * fVar11) - fVar20 * fVar14) - fVar19 * fVar15;
  fVar8 = (float)((uint)((fVar11 * fVar7 + fVar21 * fVar17 + fVar20 * fVar15) - fVar19 * fVar14) ^
                 (uint)fVar16 & _LC46);
  fVar9 = (float)((uint)((fVar14 * fVar7 - fVar21 * fVar15) + fVar20 * fVar17 + fVar19 * fVar11) ^
                 (uint)fVar16 & _LC46);
  fVar7 = (float)((uint)(((fVar15 * fVar7 + fVar21 * fVar14) - fVar20 * fVar11) + fVar19 * fVar17) ^
                 (uint)fVar16 & _LC46);
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & _LC46);
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._0_4_ = -(uint)(fVar8 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar16 + fVar16 == 0.0);
  uVar3 = movmskps(fVar13,auVar12);
  if ((~uVar3 & 7) != 0) {
    fVar16 = (float)(param_3 ^ _LC40);
    lVar4 = 0;
    do {
      pfVar1 = (float *)((long)param_1 + lVar4 + 0x80);
      fVar18 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar10 = pfVar1[3];
      *(float *)((long)local_68 + lVar4) = *pfVar1 * fVar16;
      *(float *)((long)local_68 + lVar4 + 4) = fVar18 * fVar16;
      *(float *)((long)local_68 + lVar4 + 8) = fVar6 * fVar16;
      *(float *)((long)local_68 + lVar4 + 0xc) = fVar10 * fVar16;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x40);
    fVar16 = fVar8 * local_68[0] + fVar9 * local_68[4] + fVar7 * local_68[8] + local_68[0xc];
    fVar18 = fVar8 * local_68[1] + fVar9 * local_68[5] + fVar7 * local_68[9] + local_68[0xd];
    fVar7 = fVar8 * local_68[2] + fVar9 * local_68[6] + fVar7 * local_68[10] + local_68[0xe];
    if (*(char *)(param_2 + 0x78) == '\x02') {
      Body::SubRotationStep
                (CONCAT44(fVar16 * param_1[1] + fVar18 * param_1[5] + fVar7 * param_1[9],
                          fVar16 * *param_1 + fVar18 * param_1[4] + fVar7 * param_1[8]),
                 CONCAT44(fVar16 * param_1[3] + fVar18 * param_1[7] + fVar7 * param_1[0xb],
                          fVar16 * param_1[2] + fVar18 * param_1[6] + fVar7 * param_1[10]));
      cVar2 = *(char *)(param_6 + 0x78);
    }
    else {
      cVar2 = *(char *)(param_6 + 0x78);
    }
    if (cVar2 == '\x02') {
      Body::AddRotationStep
                (CONCAT44(fVar16 * param_1[0x11] + fVar18 * param_1[0x15] + fVar7 * param_1[0x19],
                          fVar16 * param_1[0x10] + fVar18 * param_1[0x14] + fVar7 * param_1[0x18]),
                 CONCAT44(fVar16 * param_1[0x13] + fVar18 * param_1[0x17] + fVar7 * param_1[0x1b],
                          fVar16 * param_1[0x12] + fVar18 * param_1[0x16] + fVar7 * param_1[0x1a]),
                 param_6);
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Vec3, JPH::Body
   const&, JPH::Vec3, JPH::Vec3, float) */

void JPH::AxisConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2,undefined8 param_3,float param_4,
               undefined8 param_5,float param_6,float param_7,float *param_1,long param_9,
               long param_10)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
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
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar7 = _LC1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_9 + 0x78);
  fStack_174 = (float)((ulong)param_5 >> 0x20);
  local_168 = (float)param_1_00;
  fStack_164 = (float)((ulong)param_1_00 >> 0x20);
  fStack_154 = (float)((ulong)param_3 >> 0x20);
  local_178 = (float)param_5;
  local_158 = (float)param_3;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_10 + 0x48);
    fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
    fVar3 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_10 + 0x18);
    fVar14 = fVar4 + fVar4;
    fVar15 = fVar3 + fVar3;
    fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
    fVar16 = fVar5 * (fVar5 + fVar5);
    fVar8 = fVar6 * (fVar5 + fVar5);
    local_78._4_4_ = fVar3 * fVar14 + fVar8;
    local_78._0_4_ = (_LC1 - fVar3 * fVar15) - fVar16;
    local_78._8_4_ = fVar5 * fVar14 - fVar15 * fVar6;
    local_78._12_4_ = 0;
    local_68 = CONCAT44((_LC1 - fVar16) - fVar4 * fVar14,fVar3 * fVar14 - fVar8);
    uStack_60 = (ulong)(uint)(fVar14 * fVar6 + fVar5 * fVar15);
    local_58._4_4_ = fVar5 * fVar15 - fVar14 * fVar6;
    local_58._0_4_ = fVar5 * fVar14 + fVar15 * fVar6;
    local_58._8_4_ = (_LC1 - fVar4 * fVar14) - fVar3 * fVar15;
    local_58._12_4_ = 0;
    local_48 = __LC11;
    uStack_40 = _UNK_00108008;
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
    fVar4 = *(float *)(lVar2 + 0x58);
    fVar3 = local_158 * fStack_174 - fStack_154 * local_178;
    fVar5 = fStack_154 * param_6 - param_4 * fStack_174;
    fVar6 = param_4 * local_178 - local_158 * param_6;
    *param_1 = param_6 * fStack_164 - param_2 * fStack_174;
    param_1[1] = local_178 * param_2 - local_168 * param_6;
    param_1[2] = fStack_174 * local_168 - fStack_164 * local_178;
    param_1[3] = fVar5;
    *(ulong *)(param_1 + 4) = CONCAT44(fVar3,fVar6);
    fVar8 = local_b8 * fVar5 + fVar6 * local_a8 + fVar3 * local_98;
    fVar14 = fStack_b4 * fVar5 + fVar6 * fStack_a4 + fVar3 * fStack_94;
    fVar15 = fStack_b0 * fVar5 + fVar6 * fStack_a0 + fVar3 * fStack_90;
    *(ulong *)(param_1 + 9) = CONCAT44(fVar14,fVar8);
    param_1[0xb] = fVar15;
    fVar4 = fVar3 * fVar15 + fVar14 * fVar6 + fVar5 * fVar8 + 0.0 + fVar4 + 0.0;
LAB_00106a1f:
    if (fVar4 != 0.0) {
      param_1[0xe] = 0.0;
      fVar7 = fVar7 / fVar4;
      param_1[0xd] = param_7;
      goto LAB_00106a41;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar4 = *(float *)(*(long *)(param_9 + 0x48) + 0x58);
      fVar3 = (float)*(undefined8 *)(param_9 + 0x10);
      fVar6 = (float)*(undefined8 *)(param_9 + 0x18);
      fVar5 = (float)((ulong)*(undefined8 *)(param_9 + 0x10) >> 0x20);
      fVar15 = fVar3 + fVar3;
      fVar16 = fVar5 + fVar5;
      fVar8 = (float)((ulong)*(undefined8 *)(param_9 + 0x18) >> 0x20);
      fVar17 = fVar6 * (fVar6 + fVar6);
      fVar14 = (fVar6 + fVar6) * fVar8;
      local_78._0_4_ = (_LC1 - fVar5 * fVar16) - fVar17;
      local_78._4_4_ = fVar5 * fVar15 + fVar14;
      local_78._8_4_ = fVar6 * fVar15 - fVar16 * fVar8;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar15 * fVar8 + fVar6 * fVar16);
      local_68 = CONCAT44((_LC1 - fVar17) - fVar3 * fVar15,fVar5 * fVar15 - fVar14);
      local_58._4_4_ = fVar6 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar6 * fVar15 + fVar16 * fVar8;
      local_48 = __LC11;
      uStack_40 = _UNK_00108008;
      local_58._8_4_ = (_LC1 - fVar3 * fVar15) - fVar5 * fVar16;
      local_58._12_4_ = 0;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_f8);
      cVar1 = *(char *)(param_10 + 0x78);
      if (cVar1 == '\x01') {
        fVar8 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar14 = fStack_164 * param_6 - param_2 * fStack_174;
        fVar15 = param_2 * local_178 - local_168 * param_6;
        fVar3 = local_f8 * fVar14 + fVar15 * local_e8 + fVar8 * local_d8;
        fVar5 = fStack_f4 * fVar14 + fVar15 * fStack_e4 + fVar8 * fStack_d4;
        fVar6 = fStack_f0 * fVar14 + fVar15 * fStack_e0 + fVar8 * fStack_d0;
        *param_1 = fVar14;
        param_1[1] = fVar15;
        param_1[2] = fVar8;
        param_1[3] = param_6 * fStack_154 - param_4 * fStack_174;
        param_1[4] = local_178 * param_4 - local_158 * param_6;
        param_1[5] = fStack_174 * local_158 - fStack_154 * local_178;
        param_1[6] = fVar3;
        param_1[7] = fVar5;
        param_1[8] = fVar6;
        fVar4 = fVar4 + fVar8 * fVar6 + fVar5 * fVar15 + fVar3 * fVar14 + 0.0;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_10 + 0x48);
        fVar3 = (float)*(undefined8 *)(param_10 + 0x18);
        fVar6 = (float)*(undefined8 *)(param_10 + 0x10);
        fVar14 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
        fVar15 = fVar6 + fVar6;
        fVar16 = fVar14 + fVar14;
        fVar5 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
        fVar17 = (fVar3 + fVar3) * fVar3;
        fVar8 = fVar5 * (fVar3 + fVar3);
        local_78._4_4_ = fVar8 + fVar14 * fVar15;
        local_78._0_4_ = (fVar7 - fVar14 * fVar16) - fVar17;
        local_78._8_4_ = fVar3 * fVar15 - fVar16 * fVar5;
        local_78._12_4_ = 0;
        local_68 = CONCAT44((fVar7 - fVar17) - fVar6 * fVar15,fVar14 * fVar15 - fVar8);
        uStack_60 = (ulong)(uint)(fVar15 * fVar5 + fVar3 * fVar16);
        local_58._4_4_ = fVar3 * fVar16 - fVar15 * fVar5;
        local_58._0_4_ = fVar3 * fVar15 + fVar16 * fVar5;
        local_48 = __LC11;
        uStack_40 = _UNK_00108008;
        local_58._8_4_ = (fVar7 - fVar6 * fVar15) - fVar14 * fVar16;
        local_58._12_4_ = 0;
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
        fVar3 = *(float *)(lVar2 + 0x58);
        fVar11 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar12 = fStack_164 * param_6 - param_2 * fStack_174;
        fVar13 = param_2 * local_178 - local_168 * param_6;
        fVar17 = fStack_174 * local_158 - fStack_154 * local_178;
        fVar9 = param_6 * fStack_154 - param_4 * fStack_174;
        fVar10 = local_178 * param_4 - local_158 * param_6;
        fVar5 = local_f8 * fVar12 + fVar13 * local_e8 + fVar11 * local_d8;
        fVar6 = fStack_f4 * fVar12 + fVar13 * fStack_e4 + fVar11 * fStack_d4;
        fVar8 = fStack_f0 * fVar12 + fVar13 * fStack_e0 + fVar11 * fStack_d0;
        *param_1 = fVar12;
        param_1[1] = fVar13;
        param_1[2] = fVar11;
        param_1[3] = fVar9;
        fVar14 = local_b8 * fVar9 + fVar10 * local_a8 + fVar17 * local_98;
        fVar15 = fStack_b4 * fVar9 + fVar10 * fStack_a4 + fVar17 * fStack_94;
        fVar16 = fStack_b0 * fVar9 + fVar10 * fStack_a0 + fVar17 * fStack_90;
        param_1[4] = fVar10;
        param_1[5] = fVar17;
        param_1[6] = fVar5;
        param_1[7] = fVar6;
        param_1[8] = fVar8;
        param_1[9] = fVar14;
        param_1[10] = fVar15;
        param_1[0xb] = fVar16;
        fVar4 = fVar16 * fVar17 + fVar15 * fVar10 + fVar14 * fVar9 + 0.0 + fVar3 +
                fVar8 * fVar11 + fVar6 * fVar13 + fVar5 * fVar12 + 0.0 + fVar4;
      }
      else {
        if (cVar1 != '\0') goto LAB_00106ca8;
        fVar3 = fStack_174 * local_168 - fStack_164 * local_178;
        fVar5 = param_6 * fStack_164 - param_2 * fStack_174;
        fVar6 = local_178 * param_2 - local_168 * param_6;
        param_1[2] = fVar3;
        *(ulong *)param_1 = CONCAT44(fVar6,fVar5);
        fVar8 = local_f8 * fVar5 + fVar6 * local_e8 + fVar3 * local_d8;
        fVar14 = fStack_f4 * fVar5 + fVar6 * fStack_e4 + fVar3 * fStack_d4;
        fVar15 = fStack_f0 * fVar5 + fVar6 * fStack_e0 + fVar3 * fStack_d0;
        *(ulong *)(param_1 + 6) = CONCAT44(fVar14,fVar8);
        param_1[8] = fVar15;
        fVar4 = fVar4 + fVar3 * fVar15 + fVar6 * fVar14 + fVar5 * fVar8 + 0.0;
      }
      goto LAB_00106a1f;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_10 + 0x48);
      fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
      fVar3 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
      fVar5 = (float)*(undefined8 *)(param_10 + 0x18);
      fVar15 = fVar3 + fVar3;
      fVar14 = fVar4 + fVar4;
      fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
      fVar16 = fVar5 * (fVar5 + fVar5);
      fVar8 = fVar6 * (fVar5 + fVar5);
      local_78._0_4_ = (_LC1 - fVar3 * fVar15) - fVar16;
      local_78._4_4_ = fVar3 * fVar14 + fVar8;
      local_78._8_4_ = fVar5 * fVar14 - fVar15 * fVar6;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar14 * fVar6 + fVar5 * fVar15);
      local_68 = CONCAT44((_LC1 - fVar16) - fVar4 * fVar14,fVar3 * fVar14 - fVar8);
      local_58._4_4_ = fVar5 * fVar15 - fVar14 * fVar6;
      local_58._0_4_ = fVar5 * fVar14 + fVar15 * fVar6;
      local_58._8_4_ = (_LC1 - fVar4 * fVar14) - fVar3 * fVar15;
      local_58._12_4_ = 0;
      local_48 = __LC11;
      uStack_40 = _UNK_00108008;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      fVar4 = *(float *)(lVar2 + 0x58);
      fVar8 = fStack_174 * local_158 - fStack_154 * local_178;
      fVar14 = param_6 * fStack_154 - param_4 * fStack_174;
      fVar15 = local_178 * param_4 - local_158 * param_6;
      param_1[5] = fVar8;
      *(ulong *)(param_1 + 3) = CONCAT44(fVar15,fVar14);
      fVar3 = local_b8 * fVar14 + fVar15 * local_a8 + fVar8 * local_98;
      fVar5 = fStack_b4 * fVar14 + fVar15 * fStack_a4 + fVar8 * fStack_94;
      fVar6 = fStack_b0 * fVar14 + fVar15 * fStack_a0 + fVar8 * fStack_90;
      *(ulong *)(param_1 + 9) = CONCAT44(fVar5,fVar3);
      param_1[0xb] = fVar6;
      fVar4 = fVar8 * fVar6 + fVar15 * fVar5 + fVar3 * fVar14 + 0.0 + fVar4 + 0.0;
      goto LAB_00106a1f;
    }
  }
LAB_00106ca8:
  param_1[0xf] = 0.0;
  fVar7 = 0.0;
LAB_00106a41:
  param_1[0xc] = fVar7;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::CalculateConstraintPropertiesWithSettings(float, JPH::Body const&,
   JPH::Vec3, JPH::Body const&, JPH::Vec3, JPH::Vec3, float, float, JPH::SpringSettings const&) */

void JPH::AxisConstraintPart::CalculateConstraintPropertiesWithSettings
               (float param_1,undefined8 param_2_00,float param_3,undefined8 param_4,float param_5,
               undefined8 param_6,float param_7,float param_8,float *param_2,long param_10,
               long param_11,char *param_12,undefined8 param_13,undefined8 param_14,float param_15)

{
  char cVar1;
  long lVar2;
  float fVar3;
  long in_FS_OFFSET;
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
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar3 = _LC1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_10 + 0x78);
  fStack_174 = (float)((ulong)param_6 >> 0x20);
  local_168 = (float)param_2_00;
  fStack_164 = (float)((ulong)param_2_00 >> 0x20);
  fStack_154 = (float)((ulong)param_4 >> 0x20);
  local_178 = (float)param_6;
  local_158 = (float)param_4;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_11 + 0x48);
    fVar5 = (float)*(undefined8 *)(param_11 + 0x10);
    fVar4 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_11 + 0x18);
    fVar14 = fVar5 + fVar5;
    fVar15 = fVar4 + fVar4;
    fVar7 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
    fVar16 = fVar6 * (fVar6 + fVar6);
    fVar8 = (fVar6 + fVar6) * fVar7;
    local_78._4_4_ = fVar4 * fVar14 + fVar8;
    local_78._0_4_ = (_LC1 - fVar4 * fVar15) - fVar16;
    local_78._8_4_ = fVar6 * fVar14 - fVar15 * fVar7;
    local_78._12_4_ = 0;
    local_68 = CONCAT44((_LC1 - fVar16) - fVar5 * fVar14,fVar4 * fVar14 - fVar8);
    uStack_60 = (ulong)(uint)(fVar14 * fVar7 + fVar6 * fVar15);
    local_58._4_4_ = fVar6 * fVar15 - fVar14 * fVar7;
    local_58._0_4_ = fVar6 * fVar14 + fVar15 * fVar7;
    local_58._8_4_ = (_LC1 - fVar5 * fVar14) - fVar4 * fVar15;
    local_58._12_4_ = 0;
    local_48 = __LC11;
    uStack_40 = _UNK_00108008;
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
    fVar5 = *(float *)(lVar2 + 0x58);
    fVar4 = local_158 * fStack_174 - fStack_154 * local_178;
    fVar6 = fStack_154 * param_7 - param_5 * fStack_174;
    fVar7 = param_5 * local_178 - local_158 * param_7;
    *param_2 = param_7 * fStack_164 - param_3 * fStack_174;
    param_2[1] = local_178 * param_3 - local_168 * param_7;
    param_2[2] = fStack_174 * local_168 - fStack_164 * local_178;
    param_2[3] = fVar6;
    *(ulong *)(param_2 + 4) = CONCAT44(fVar4,fVar7);
    fVar8 = local_b8 * fVar6 + fVar7 * local_a8 + fVar4 * local_98;
    fVar14 = fStack_b4 * fVar6 + fVar7 * fStack_a4 + fVar4 * fStack_94;
    fVar15 = fStack_b0 * fVar6 + fVar7 * fStack_a0 + fVar4 * fStack_90;
    *(ulong *)(param_2 + 9) = CONCAT44(fVar14,fVar8);
    param_2[0xb] = fVar15;
    fVar5 = fVar4 * fVar15 + fVar6 * fVar8 + 0.0 + fVar14 * fVar7 + fVar5 + 0.0;
LAB_001074c8:
    if (fVar5 != 0.0) {
      fVar4 = *(float *)(param_12 + 8);
      fVar6 = *(float *)(param_12 + 4);
      if (*param_12 == '\0') {
        fVar7 = fVar3 / fVar5;
        param_2[0xc] = fVar7;
        if (fVar6 <= 0.0) {
          param_2[0xe] = 0.0;
          param_2[0xd] = param_8;
        }
        else {
          fVar6 = fVar6 * __LC47;
          fVar8 = fVar6 * fVar6 * fVar7 * param_1;
          fVar4 = fVar3 / ((fVar6 * (fVar7 + fVar7) * fVar4 + fVar8) * param_1);
          param_2[0xe] = fVar4;
          *(ulong *)(param_2 + 0xc) =
               CONCAT44(fVar8 * fVar4 * param_15 + param_8,fVar3 / (fVar5 + fVar4));
        }
      }
      else if (fVar6 <= 0.0) {
        param_2[0xe] = 0.0;
        *(ulong *)(param_2 + 0xc) = CONCAT44(param_8,fVar3 / fVar5);
      }
      else {
        fVar4 = fVar3 / ((fVar4 + fVar6 * param_1) * param_1);
        param_2[0xe] = fVar4;
        *(ulong *)(param_2 + 0xc) =
             CONCAT44(fVar6 * param_1 * fVar4 * param_15 + param_8,fVar3 / (fVar5 + fVar4));
      }
      goto LAB_001077be;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
      fVar7 = (float)*(undefined8 *)(param_10 + 0x18);
      fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
      fVar5 = *(float *)(*(long *)(param_10 + 0x48) + 0x58);
      fVar15 = fVar4 + fVar4;
      fVar16 = fVar6 + fVar6;
      fVar8 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
      fVar17 = fVar7 * (fVar7 + fVar7);
      fVar14 = (fVar7 + fVar7) * fVar8;
      local_78._0_4_ = (_LC1 - fVar6 * fVar16) - fVar17;
      local_78._4_4_ = fVar6 * fVar15 + fVar14;
      local_78._8_4_ = fVar7 * fVar15 - fVar16 * fVar8;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar15 * fVar8 + fVar7 * fVar16);
      local_68 = CONCAT44((_LC1 - fVar17) - fVar4 * fVar15,fVar6 * fVar15 - fVar14);
      local_58._4_4_ = fVar7 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar7 * fVar15 + fVar16 * fVar8;
      local_48 = __LC11;
      uStack_40 = _UNK_00108008;
      local_58._8_4_ = (_LC1 - fVar4 * fVar15) - fVar6 * fVar16;
      local_58._12_4_ = 0;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_f8);
      cVar1 = *(char *)(param_11 + 0x78);
      if (cVar1 == '\x01') {
        fVar8 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar14 = fStack_164 * param_7 - param_3 * fStack_174;
        fVar15 = param_3 * local_178 - local_168 * param_7;
        fVar4 = local_f8 * fVar14 + fVar15 * local_e8 + fVar8 * local_d8;
        fVar6 = fStack_f4 * fVar14 + fVar15 * fStack_e4 + fVar8 * fStack_d4;
        fVar7 = fStack_f0 * fVar14 + fVar15 * fStack_e0 + fVar8 * fStack_d0;
        *param_2 = fVar14;
        param_2[1] = fVar15;
        param_2[2] = fVar8;
        param_2[3] = param_7 * fStack_154 - param_5 * fStack_174;
        param_2[4] = local_178 * param_5 - local_158 * param_7;
        param_2[5] = fStack_174 * local_158 - fStack_154 * local_178;
        param_2[6] = fVar4;
        param_2[7] = fVar6;
        param_2[8] = fVar7;
        fVar5 = fVar5 + fVar8 * fVar7 + fVar14 * fVar4 + 0.0 + fVar6 * fVar15;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_11 + 0x48);
        fVar4 = (float)*(undefined8 *)(param_11 + 0x18);
        fVar7 = (float)*(undefined8 *)(param_11 + 0x10);
        fVar14 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
        fVar15 = fVar7 + fVar7;
        fVar16 = fVar14 + fVar14;
        fVar6 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
        fVar17 = (fVar4 + fVar4) * fVar4;
        fVar8 = fVar6 * (fVar4 + fVar4);
        local_78._0_4_ = (fVar3 - fVar14 * fVar16) - fVar17;
        local_78._4_4_ = fVar8 + fVar14 * fVar15;
        local_78._8_4_ = fVar4 * fVar15 - fVar16 * fVar6;
        local_78._12_4_ = 0;
        local_68 = CONCAT44((fVar3 - fVar17) - fVar7 * fVar15,fVar14 * fVar15 - fVar8);
        uStack_60 = (ulong)(uint)(fVar15 * fVar6 + fVar4 * fVar16);
        local_58._4_4_ = fVar4 * fVar16 - fVar15 * fVar6;
        local_58._0_4_ = fVar4 * fVar15 + fVar16 * fVar6;
        local_58._8_4_ = (fVar3 - fVar7 * fVar15) - fVar14 * fVar16;
        local_58._12_4_ = 0;
        local_48 = __LC11;
        uStack_40 = _UNK_00108008;
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
        fVar4 = *(float *)(lVar2 + 0x58);
        fVar11 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar12 = fStack_164 * param_7 - param_3 * fStack_174;
        fVar13 = param_3 * local_178 - local_168 * param_7;
        fVar17 = fStack_174 * local_158 - fStack_154 * local_178;
        fVar9 = param_7 * fStack_154 - param_5 * fStack_174;
        fVar10 = local_178 * param_5 - local_158 * param_7;
        fVar14 = local_f8 * fVar12 + fVar13 * local_e8 + fVar11 * local_d8;
        fVar15 = fStack_f4 * fVar12 + fVar13 * fStack_e4 + fVar11 * fStack_d4;
        fVar16 = fStack_f0 * fVar12 + fVar13 * fStack_e0 + fVar11 * fStack_d0;
        fVar6 = local_b8 * fVar9 + fVar10 * local_a8 + fVar17 * local_98;
        fVar7 = fStack_b4 * fVar9 + fVar10 * fStack_a4 + fVar17 * fStack_94;
        fVar8 = fStack_b0 * fVar9 + fVar10 * fStack_a0 + fVar17 * fStack_90;
        *param_2 = fVar12;
        param_2[1] = fVar13;
        param_2[2] = fVar11;
        param_2[3] = fVar9;
        param_2[4] = fVar10;
        param_2[5] = fVar17;
        param_2[6] = fVar14;
        param_2[7] = fVar15;
        param_2[8] = fVar16;
        param_2[9] = fVar6;
        param_2[10] = fVar7;
        param_2[0xb] = fVar8;
        fVar5 = fVar17 * fVar8 + fVar7 * fVar10 + fVar6 * fVar9 + 0.0 + fVar4 +
                fVar16 * fVar11 + fVar15 * fVar13 + fVar14 * fVar12 + 0.0 + fVar5;
      }
      else {
        if (cVar1 != '\0') goto LAB_001077b0;
        fVar4 = fStack_174 * local_168 - fStack_164 * local_178;
        fVar6 = param_7 * fStack_164 - param_3 * fStack_174;
        fVar7 = local_178 * param_3 - local_168 * param_7;
        param_2[2] = fVar4;
        *(ulong *)param_2 = CONCAT44(fVar7,fVar6);
        fVar8 = local_f8 * fVar6 + fVar7 * local_e8 + fVar4 * local_d8;
        fVar14 = fStack_f4 * fVar6 + fVar7 * fStack_e4 + fVar4 * fStack_d4;
        fVar15 = fStack_f0 * fVar6 + fVar7 * fStack_e0 + fVar4 * fStack_d0;
        *(ulong *)(param_2 + 6) = CONCAT44(fVar14,fVar8);
        param_2[8] = fVar15;
        fVar5 = fVar5 + fVar4 * fVar15 + fVar7 * fVar14 + fVar6 * fVar8 + 0.0;
      }
      goto LAB_001074c8;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_11 + 0x48);
      fVar5 = (float)*(undefined8 *)(param_11 + 0x10);
      fVar4 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
      fVar6 = (float)*(undefined8 *)(param_11 + 0x18);
      fVar15 = fVar4 + fVar4;
      fVar14 = fVar5 + fVar5;
      fVar7 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
      fVar16 = fVar6 * (fVar6 + fVar6);
      fVar8 = (fVar6 + fVar6) * fVar7;
      local_78._0_4_ = (_LC1 - fVar4 * fVar15) - fVar16;
      local_78._4_4_ = fVar4 * fVar14 + fVar8;
      local_78._8_4_ = fVar6 * fVar14 - fVar15 * fVar7;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar14 * fVar7 + fVar6 * fVar15);
      local_68 = CONCAT44((_LC1 - fVar16) - fVar5 * fVar14,fVar4 * fVar14 - fVar8);
      local_58._4_4_ = fVar6 * fVar15 - fVar14 * fVar7;
      local_58._0_4_ = fVar6 * fVar14 + fVar15 * fVar7;
      local_58._8_4_ = (_LC1 - fVar5 * fVar14) - fVar4 * fVar15;
      local_58._12_4_ = 0;
      local_48 = __LC11;
      uStack_40 = _UNK_00108008;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      fVar5 = *(float *)(lVar2 + 0x58);
      fVar8 = fStack_174 * local_158 - local_178 * fStack_154;
      fVar14 = param_7 * fStack_154 - fStack_174 * param_5;
      fVar15 = local_178 * param_5 - param_7 * local_158;
      param_2[5] = fVar8;
      *(ulong *)(param_2 + 3) = CONCAT44(fVar15,fVar14);
      fVar4 = local_b8 * fVar14 + fVar15 * local_a8 + fVar8 * local_98;
      fVar6 = fStack_b4 * fVar14 + fVar15 * fStack_a4 + fVar8 * fStack_94;
      fVar7 = fStack_b0 * fVar14 + fVar15 * fStack_a0 + fVar8 * fStack_90;
      *(ulong *)(param_2 + 9) = CONCAT44(fVar6,fVar4);
      param_2[0xb] = fVar7;
      fVar5 = fVar6 * fVar15 + fVar4 * fVar14 + 0.0 + fVar8 * fVar7 + fVar5 + 0.0;
      goto LAB_001074c8;
    }
  }
LAB_001077b0:
  param_2[0xc] = 0.0;
  param_2[0xf] = 0.0;
LAB_001077be:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::SliderConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC49;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SliderConstraint::~SliderConstraint() */

void __thiscall JPH::SliderConstraint::~SliderConstraint(SliderConstraint *this)

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
/* JPH::SliderConstraintSettings::~SliderConstraintSettings() */

void __thiscall
JPH::SliderConstraintSettings::~SliderConstraintSettings(SliderConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


