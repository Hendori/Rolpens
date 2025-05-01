
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SwingTwistConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::SwingTwistConstraint::NotifyShapeChanged
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



/* JPH::SwingTwistConstraint::ResetWarmStart() */

void __thiscall JPH::SwingTwistConstraint::ResetWarmStart(SwingTwistConstraint *this)

{
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 0x38c) = 0;
  *(undefined4 *)(this + 0x3b0) = 0;
  *(undefined4 *)(this + 0x3bc) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  return;
}



/* JPH::SwingTwistConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::SwingTwistConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::SwingTwistConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::SwingTwistConstraintSettings::SaveBinaryState
          (SwingTwistConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x9c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa0,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa4,4);
  JPH::MotorSettings::SaveBinaryState((StreamOut *)(this + 0xa8));
  JPH::MotorSettings::SaveBinaryState((StreamOut *)(this + 0xc4));
  return;
}



/* JPH::SwingTwistConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::SwingTwistConstraintSettings::RestoreBinaryState
          (SwingTwistConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x9c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa0,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa4,4);
  JPH::MotorSettings::RestoreBinaryState((StreamIn *)(this + 0xa8));
  JPH::MotorSettings::RestoreBinaryState((StreamIn *)(this + 0xc4));
  return;
}



/* JPH::SwingTwistConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::SwingTwistConstraint::SaveState(SwingTwistConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  SwingTwistConstraint *pSVar2;
  SwingTwistConstraint *pSVar3;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x210,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x2cc,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x2fc,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x32c,4);
  pSVar2 = this + 0x35c;
  do {
    pSVar3 = pSVar2 + 0x30;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,pSVar2,4);
    pSVar2 = pSVar3;
  } while (pSVar3 != this + 0x3ec);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xcc,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xd0,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe0,0xc);
                    /* WARNING: Could not recover jumptable at 0x001004bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xf0,0x10);
  return;
}



/* JPH::SwingTwistConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::SwingTwistConstraint::RestoreState(SwingTwistConstraint *this,StateRecorder *param_1)

{
  SwingTwistConstraint *pSVar1;
  SwingTwistConstraint *pSVar2;
  
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x210,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2cc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2fc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x32c,4);
  pSVar1 = this + 0x35c;
  do {
    pSVar2 = pSVar1 + 0x30;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,pSVar1,4);
    pSVar1 = pSVar2;
  } while (pSVar2 != this + 0x3ec);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xcc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd0,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe0,0xc);
                    /* WARNING: Could not recover jumptable at 0x001005b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xf0,0x10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::GetConstraintSettings() const */

void JPH::SwingTwistConstraint::GetConstraintSettings(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  ConstraintSettings CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar11 = (undefined8 *)(*Allocate)(0xe0);
  uVar6 = _UNK_00109af8;
  uVar5 = __LC4;
  *(undefined4 *)(puVar11 + 1) = 0;
  auVar14 = ZEXT416((uint)_LC0);
  *(undefined1 *)((long)puVar11 + 0xc) = 1;
  *puVar11 = &PTR_GetRTTI_001099e8;
  puVar11[3] = 0x3f80000000000000;
  uVar7 = _LC6;
  *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
  *(undefined8 *)((long)puVar11 + 0xbc) = uVar7;
  puVar11[0x1b] = uVar7;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar11 + 0x94) = (undefined1  [16])0x0;
  uVar8 = _LC6;
  uVar7 = __LC5;
  puVar11[2] = 0;
  puVar11[4] = 0;
  *(undefined4 *)(puVar11 + 5) = 1;
  *(undefined1 *)(puVar11 + 0x12) = 0;
  *(undefined4 *)((long)puVar11 + 0xa4) = 0;
  *(undefined1 *)(puVar11 + 0x15) = 0;
  *(undefined1 *)((long)puVar11 + 0xc4) = 0;
  *(undefined1 (*) [16])(puVar11 + 8) = auVar14;
  puVar11[10] = uVar5;
  puVar11[0xb] = uVar6;
  *(undefined1 (*) [16])(puVar11 + 0xe) = auVar14;
  puVar11[0x10] = uVar5;
  puVar11[0x11] = uVar6;
  *(undefined8 *)((long)puVar11 + 0xac) = uVar7;
  *(undefined8 *)((long)puVar11 + 0xb4) = uVar8;
  puVar11[0x19] = uVar7;
  puVar11[0x1a] = uVar8;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  fVar18 = *(float *)(in_RSI + 0x60);
  fVar1 = *(float *)(in_RSI + 0x6c);
  *(undefined4 *)(puVar11 + 5) = 0;
  fVar2 = *(float *)(in_RSI + 0x68);
  fVar22 = *(float *)(in_RSI + 100);
  uVar5 = *(undefined8 *)(in_RSI + 0x48);
  fVar19 = fVar1 + fVar1;
  fVar15 = fVar18 + fVar18;
  CVar4 = in_RSI[0x221];
  puVar11[6] = *(undefined8 *)(in_RSI + 0x40);
  puVar11[7] = uVar5;
  fVar13 = _LC0;
  fVar21 = fVar2 * fVar15 - fVar22 * fVar19;
  fVar16 = fVar2 + fVar2;
  *(float *)(puVar11 + 8) = (fVar18 * fVar15 + fVar1 * fVar19) - _LC0;
  *(float *)((long)puVar11 + 0x44) = fVar15 * fVar22 + fVar2 * fVar19;
  *(float *)(puVar11 + 9) = fVar21;
  *(float *)((long)puVar11 + 0x4c) = fVar21;
  uVar5 = *(undefined8 *)(in_RSI + 0x58);
  puVar11[0xc] = *(undefined8 *)(in_RSI + 0x50);
  puVar11[0xd] = uVar5;
  fVar15 = *(float *)(in_RSI + 0x74);
  fVar21 = *(float *)(in_RSI + 0x7c);
  fVar12 = (fVar2 * fVar16 + fVar1 * fVar19) - fVar13;
  fVar1 = *(float *)(in_RSI + 0x70);
  fVar20 = fVar21 + fVar21;
  fVar17 = fVar1 + fVar1;
  fVar2 = *(float *)(in_RSI + 0x78);
  *(float *)(puVar11 + 10) = fVar16 * fVar18 + fVar22 * fVar19;
  *(float *)((long)puVar11 + 0x54) = fVar16 * fVar22 - fVar18 * fVar19;
  *(float *)(puVar11 + 0xb) = fVar12;
  *(float *)((long)puVar11 + 0x5c) = fVar12;
  *(ConstraintSettings *)(puVar11 + 0x12) = CVar4;
  fVar22 = fVar2 * fVar17 - fVar15 * fVar20;
  fVar18 = fVar2 + fVar2;
  *(float *)(puVar11 + 0xe) = (fVar1 * fVar17 + fVar21 * fVar20) - fVar13;
  *(float *)((long)puVar11 + 0x74) = fVar17 * fVar15 + fVar2 * fVar20;
  *(float *)(puVar11 + 0xf) = fVar22;
  *(float *)((long)puVar11 + 0x7c) = fVar22;
  fVar13 = (fVar2 * fVar18 + fVar21 * fVar20) - fVar13;
  *(float *)(puVar11 + 0x10) = fVar18 * fVar1 + fVar15 * fVar20;
  *(float *)((long)puVar11 + 0x84) = fVar18 * fVar15 - fVar1 * fVar20;
  *(float *)(puVar11 + 0x11) = fVar13;
  *(float *)((long)puVar11 + 0x8c) = fVar13;
  uVar5 = *(undefined8 *)(in_RSI + 0x88);
  *(undefined8 *)((long)puVar11 + 0x94) = *(undefined8 *)(in_RSI + 0x80);
  *(undefined8 *)((long)puVar11 + 0x9c) = uVar5;
  uVar5 = *(undefined8 *)(in_RSI + 0x9c);
  uVar3 = *(undefined4 *)(in_RSI + 0x90);
  uVar6 = *(undefined8 *)(in_RSI + 0xa0);
  uVar7 = *(undefined8 *)(in_RSI + 0xa8);
  uVar8 = *(undefined8 *)(in_RSI + 0xbc);
  uVar9 = *(undefined8 *)(in_RSI + 0xc4);
  puVar11[0x15] = *(undefined8 *)(in_RSI + 0x94);
  puVar11[0x16] = uVar5;
  uVar5 = *(undefined8 *)(in_RSI + 0xb0);
  uVar10 = *(undefined8 *)(in_RSI + 0xb8);
  *(undefined4 *)((long)puVar11 + 0xa4) = uVar3;
  *(undefined8 *)((long)puVar11 + 0xc4) = uVar5;
  *(undefined8 *)((long)puVar11 + 0xcc) = uVar10;
  *(undefined8 *)((long)puVar11 + 0xb4) = uVar6;
  *(undefined8 *)((long)puVar11 + 0xbc) = uVar7;
  puVar11[0x1a] = uVar8;
  puVar11[0x1b] = uVar9;
  *in_RDI = puVar11;
  LOCK();
  *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
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
    auVar5._4_4_ = _UNK_00109b14;
    auVar5._0_4_ = __LC8;
    auVar5._8_4_ = _UNK_00109b18;
    auVar5._12_4_ = _UNK_00109b1c;
    auVar24 = auVar24 & auVar5;
    uVar16 = -(uint)(auVar24._0_4_ == __LC8);
    uVar17 = -(uint)(auVar24._4_4_ == _UNK_00109b14);
    uVar18 = -(uint)(auVar24._8_4_ == _UNK_00109b18);
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
    fVar6 = (_LC0 - fVar11 * fVar26) - fVar14;
    fVar10 = fVar11 * fVar22 - fVar9;
    fVar9 = fVar9 + fVar11 * fVar22;
    fVar28 = (_LC0 - fVar14) - fVar23 * fVar22;
    fVar21 = (_LC0 - fVar23 * fVar22) - fVar11 * fVar26;
    fVar14 = *(float *)(lVar3 + 0x20) * (fVar9 * fVar15 + fVar13 * fVar6 + fVar20 * fVar19);
    fVar12 = *(float *)(lVar3 + 0x24) * (fVar28 * fVar15 + fVar13 * fVar10 + fVar7 * fVar19);
    fVar29 = *(float *)(lVar3 + 0x28) * (fVar27 * fVar15 + fVar13 * fVar25 + fVar21 * fVar19);
    fVar6 = (float)((uint)(fVar14 * fVar6 + fVar12 * fVar10 + fVar29 * fVar25) & uVar16);
    fVar9 = (float)((uint)(fVar14 * fVar9 + fVar12 * fVar28 + fVar29 * fVar27) & uVar17);
    fVar10 = (float)((uint)(fVar14 * fVar20 + fVar12 * fVar7 + fVar29 * fVar21) & uVar18);
    fVar7 = (float)((uint)(fVar14 * 0.0 + fVar12 * 0.0 + fVar29 * 0.0) &
                   -(uint)(auVar24._12_4_ == _UNK_00109b1c));
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
    auVar4._4_4_ = _UNK_00109b14;
    auVar4._0_4_ = __LC8;
    auVar4._8_4_ = _UNK_00109b18;
    auVar4._12_4_ = _UNK_00109b1c;
    auVar8 = auVar8 & auVar4;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar14 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
    fVar23 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    uVar16 = -(uint)(auVar8._0_4_ == __LC8);
    uVar17 = -(uint)(auVar8._4_4_ == _UNK_00109b14);
    uVar18 = -(uint)(auVar8._8_4_ == _UNK_00109b18);
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
    fVar30 = (_LC0 - fVar19 * fVar11) - fVar13 * fVar25;
    fVar32 = (_LC0 - fVar29) - fVar19 * fVar11;
    fVar20 = fVar13 * fVar11 - fVar14;
    fVar14 = fVar14 + fVar13 * fVar11;
    fVar19 = fVar15 * fVar11 - fVar25 * fVar7;
    fVar7 = fVar15 * fVar11 + fVar25 * fVar7;
    fVar29 = (_LC0 - fVar13 * fVar25) - fVar29;
    fVar21 = *(float *)(lVar3 + 0x20) * (fVar19 * fVar28 + fVar14 * fVar27 + fVar26 * fVar29);
    fVar22 = *(float *)(lVar3 + 0x24) * (fVar12 * fVar28 + fVar32 * fVar27 + fVar26 * fVar20);
    fVar23 = *(float *)(lVar3 + 0x28) * (fVar30 * fVar28 + fVar31 * fVar27 + fVar26 * fVar7);
    fVar7 = (float)((uint)(fVar29 * fVar21 + fVar22 * fVar20 + fVar7 * fVar23) & uVar16);
    fVar14 = (float)((uint)(fVar14 * fVar21 + fVar22 * fVar32 + fVar31 * fVar23) & uVar17);
    fVar12 = (float)((uint)(fVar19 * fVar21 + fVar22 * fVar12 + fVar30 * fVar23) & uVar18);
    fVar29 = (float)((uint)(fVar21 * 0.0 + fVar22 * 0.0 + fVar23 * 0.0) &
                    -(uint)(auVar8._12_4_ == _UNK_00109b1c));
  }
  param_2[4] = fVar7;
  param_2[5] = fVar14;
  param_2[6] = fVar12;
  param_2[7] = fVar29;
  fVar29 = _LC0;
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
    fVar9 = _LC0 / ((param_7 + param_6 * param_1) * param_1);
    param_2[10] = fVar9;
    *(ulong *)(param_2 + 8) =
         CONCAT44(param_6 * param_1 * fVar9 * param_5 + param_4,fVar29 / (fVar6 + fVar9));
    return;
  }
  fVar9 = _LC0 / fVar6;
  param_2[8] = fVar9;
  if (param_6 <= 0.0) {
    param_2[10] = 0.0;
    param_2[9] = param_4;
    return;
  }
  param_6 = param_6 * __LC9;
  fVar10 = param_6 * param_6 * fVar9 * param_1;
  fVar9 = fVar29 / (((fVar9 + fVar9) * param_7 * param_6 + fVar10) * param_1);
  param_2[10] = fVar9;
  *(ulong *)(param_2 + 8) = CONCAT44(fVar10 * fVar9 * param_5 + param_4,fVar29 / (fVar6 + fVar9));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(*Allocate)(0xe0);
  uVar5 = _LC6;
  uVar3 = _UNK_00109af8;
  uVar2 = __LC4;
  *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
  uVar1 = _LC0;
  *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar7 + 0x94) = (undefined1  [16])0x0;
  uVar6 = _LC6;
  uVar4 = __LC5;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined1 *)((long)puVar7 + 0xc) = 1;
  *puVar7 = &PTR_GetRTTI_001099e8;
  puVar7[2] = 0;
  puVar7[3] = 0x3f80000000000000;
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 5) = 1;
  *(undefined1 *)(puVar7 + 0x12) = 0;
  *(undefined4 *)((long)puVar7 + 0xa4) = 0;
  *(undefined1 *)(puVar7 + 0x15) = 0;
  *(undefined8 *)((long)puVar7 + 0xbc) = uVar5;
  *(undefined1 *)((long)puVar7 + 0xc4) = 0;
  puVar7[0x1b] = uVar5;
  *(undefined1 (*) [16])(puVar7 + 8) = ZEXT416(uVar1);
  puVar7[10] = uVar2;
  puVar7[0xb] = uVar3;
  *(undefined1 (*) [16])(puVar7 + 0xe) = ZEXT416(uVar1);
  puVar7[0x10] = uVar2;
  puVar7[0x11] = uVar3;
  *(undefined8 *)((long)puVar7 + 0xac) = uVar4;
  *(undefined8 *)((long)puVar7 + 0xb4) = uVar6;
  puVar7[0x19] = uVar4;
  puVar7[0x1a] = uVar6;
  return;
}



/* JPH::SwingTwistConstraintSettings::GetRTTI() const */

undefined1 * JPH::SwingTwistConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti,
                      "SwingTwistConstraintSettings",0xe0,
                      GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::SwingTwistConstraint::WarmStartVelocityConstraint(SwingTwistConstraint *this,float param_1)

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
  SwingTwistConstraint *pSVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar4 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x28);
  pSVar25 = this + 0x330;
  do {
    fVar29 = *(float *)(pSVar25 + 0x2c) * param_1;
    *(float *)(pSVar25 + 0x2c) = fVar29;
    if (fVar29 != 0.0) {
      if (*(char *)(lVar5 + 0x78) == '\x02') {
        lVar6 = *(long *)(lVar5 + 0x48);
        fVar26 = *(float *)(pSVar25 + 4);
        fVar27 = *(float *)(pSVar25 + 8);
        fVar28 = *(float *)(pSVar25 + 0xc);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar29 * *(float *)pSVar25;
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar29 * fVar26;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar29 * fVar27;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar29 * fVar28;
      }
      if (*(char *)(lVar4 + 0x78) == '\x02') {
        lVar6 = *(long *)(lVar4 + 0x48);
        fVar26 = *(float *)(pSVar25 + 0x14);
        fVar27 = *(float *)(pSVar25 + 0x18);
        fVar28 = *(float *)(pSVar25 + 0x1c);
        *(float *)(lVar6 + 0x10) = fVar29 * *(float *)(pSVar25 + 0x10) + *(float *)(lVar6 + 0x10);
        *(float *)(lVar6 + 0x14) = fVar29 * fVar26 + *(float *)(lVar6 + 0x14);
        *(float *)(lVar6 + 0x18) = fVar29 * fVar27 + *(float *)(lVar6 + 0x18);
        *(float *)(lVar6 + 0x1c) = fVar29 * fVar28 + *(float *)(lVar6 + 0x1c);
      }
    }
    pSVar25 = pSVar25 + 0x30;
  } while (pSVar25 != this + 0x3c0);
  fVar29 = *(float *)(this + 0x2cc) * param_1;
  *(float *)(this + 0x2cc) = fVar29;
  if (fVar29 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar5 + 0x48);
      fVar26 = *(float *)(this + 0x2a4);
      fVar27 = *(float *)(this + 0x2a8);
      fVar28 = *(float *)(this + 0x2ac);
      *(float *)(pSVar25 + 0x10) = *(float *)(pSVar25 + 0x10) - fVar29 * *(float *)(this + 0x2a0);
      *(float *)(pSVar25 + 0x14) = *(float *)(pSVar25 + 0x14) - fVar29 * fVar26;
      *(float *)(pSVar25 + 0x18) = *(float *)(pSVar25 + 0x18) - fVar29 * fVar27;
      *(float *)(pSVar25 + 0x1c) = *(float *)(pSVar25 + 0x1c) - fVar29 * fVar28;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar4 + 0x48);
      fVar26 = *(float *)(this + 0x2b4);
      fVar27 = *(float *)(this + 0x2b8);
      fVar28 = *(float *)(this + 700);
      *(float *)(pSVar25 + 0x10) = fVar29 * *(float *)(this + 0x2b0) + *(float *)(pSVar25 + 0x10);
      *(float *)(pSVar25 + 0x14) = fVar29 * fVar26 + *(float *)(pSVar25 + 0x14);
      *(float *)(pSVar25 + 0x18) = fVar29 * fVar27 + *(float *)(pSVar25 + 0x18);
      *(float *)(pSVar25 + 0x1c) = fVar29 * fVar28 + *(float *)(pSVar25 + 0x1c);
    }
  }
  fVar29 = *(float *)(this + 0x2fc) * param_1;
  *(float *)(this + 0x2fc) = fVar29;
  if (fVar29 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar5 + 0x48);
      fVar26 = *(float *)(this + 0x2d4);
      fVar27 = *(float *)(this + 0x2d8);
      fVar28 = *(float *)(this + 0x2dc);
      *(float *)(pSVar25 + 0x10) = *(float *)(pSVar25 + 0x10) - fVar29 * *(float *)(this + 0x2d0);
      *(float *)(pSVar25 + 0x14) = *(float *)(pSVar25 + 0x14) - fVar29 * fVar26;
      *(float *)(pSVar25 + 0x18) = *(float *)(pSVar25 + 0x18) - fVar29 * fVar27;
      *(float *)(pSVar25 + 0x1c) = *(float *)(pSVar25 + 0x1c) - fVar29 * fVar28;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar4 + 0x48);
      fVar26 = *(float *)(this + 0x2e4);
      fVar27 = *(float *)(this + 0x2e8);
      fVar28 = *(float *)(this + 0x2ec);
      *(float *)(pSVar25 + 0x10) = fVar29 * *(float *)(this + 0x2e0) + *(float *)(pSVar25 + 0x10);
      *(float *)(pSVar25 + 0x14) = fVar29 * fVar26 + *(float *)(pSVar25 + 0x14);
      *(float *)(pSVar25 + 0x18) = fVar29 * fVar27 + *(float *)(pSVar25 + 0x18);
      *(float *)(pSVar25 + 0x1c) = fVar29 * fVar28 + *(float *)(pSVar25 + 0x1c);
    }
  }
  fVar29 = *(float *)(this + 0x32c) * param_1;
  *(float *)(this + 0x32c) = fVar29;
  if (fVar29 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar5 + 0x48);
      fVar26 = *(float *)(this + 0x304);
      fVar27 = *(float *)(this + 0x308);
      fVar28 = *(float *)(this + 0x30c);
      *(float *)(pSVar25 + 0x10) = *(float *)(pSVar25 + 0x10) - fVar29 * *(float *)(this + 0x300);
      *(float *)(pSVar25 + 0x14) = *(float *)(pSVar25 + 0x14) - fVar29 * fVar26;
      *(float *)(pSVar25 + 0x18) = *(float *)(pSVar25 + 0x18) - fVar29 * fVar27;
      *(float *)(pSVar25 + 0x1c) = *(float *)(pSVar25 + 0x1c) - fVar29 * fVar28;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      pSVar25 = *(SwingTwistConstraint **)(lVar4 + 0x48);
      fVar26 = *(float *)(this + 0x314);
      fVar27 = *(float *)(this + 0x318);
      fVar28 = *(float *)(this + 0x31c);
      *(float *)(pSVar25 + 0x10) = fVar29 * *(float *)(this + 0x310) + *(float *)(pSVar25 + 0x10);
      *(float *)(pSVar25 + 0x14) = fVar29 * fVar26 + *(float *)(pSVar25 + 0x14);
      *(float *)(pSVar25 + 0x18) = fVar29 * fVar27 + *(float *)(pSVar25 + 0x18);
      *(float *)(pSVar25 + 0x1c) = fVar29 * fVar28 + *(float *)(pSVar25 + 0x1c);
    }
  }
  fVar29 = param_1 * *(float *)(this + 0x210);
  fVar26 = param_1 * *(float *)(this + 0x214);
  fVar27 = param_1 * *(float *)(this + 0x218);
  fVar28 = param_1 * *(float *)(this + 0x21c);
  auVar30._4_4_ = -(uint)(fVar26 == 0.0);
  auVar30._0_4_ = -(uint)(fVar29 == 0.0);
  auVar30._8_4_ = -(uint)(fVar27 == 0.0);
  auVar30._12_4_ = -(uint)(fVar28 == 0.0);
  *(float *)(this + 0x210) = fVar29;
  *(float *)(this + 0x214) = fVar26;
  *(float *)(this + 0x218) = fVar27;
  *(float *)(this + 0x21c) = fVar28;
  uVar24 = movmskps((int)pSVar25,auVar30);
  if ((~uVar24 & 7) != 0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pfVar7 = *(float **)(lVar5 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar1 = pfVar7[0x16];
      bVar3 = *(byte *)((long)pfVar7 + 0x7a);
      auVar31._1_3_ = 0;
      auVar31[0] = bVar3;
      auVar31[4] = bVar3;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar3;
      auVar31._9_3_ = 0;
      auVar31[0xc] = bVar3;
      auVar31._13_3_ = 0;
      auVar23._4_4_ = _UNK_00109b24;
      auVar23._0_4_ = __LC12;
      auVar23._8_4_ = _UNK_00109b28;
      auVar23._12_4_ = _UNK_00109b2c;
      auVar31 = auVar31 & auVar23;
      bVar8 = auVar31._4_4_ == _UNK_00109b24;
      bVar9 = auVar31._8_4_ == _UNK_00109b28;
      bVar10 = auVar31._12_4_ == _UNK_00109b2c;
      *pfVar7 = (float)(-(uint)(auVar31._0_4_ == __LC12) & (uint)(*pfVar7 - fVar1 * fVar29));
      pfVar7[1] = (float)(-(uint)bVar8 & (uint)(pfVar7[1] - fVar1 * fVar26));
      pfVar7[2] = (float)(-(uint)bVar9 & (uint)(pfVar7[2] - fVar1 * fVar27));
      pfVar7[3] = (float)(-(uint)bVar10 & (uint)(pfVar7[3] - fVar1 * fVar28));
      fVar1 = *(float *)(this + 0x164);
      fVar11 = *(float *)(this + 0x168);
      fVar12 = *(float *)(this + 0x16c);
      fVar13 = *(float *)(this + 0x154);
      fVar14 = *(float *)(this + 0x158);
      fVar15 = *(float *)(this + 0x15c);
      fVar16 = *(float *)(this + 0x174);
      fVar17 = *(float *)(this + 0x178);
      fVar18 = *(float *)(this + 0x17c);
      fVar19 = *(float *)(this + 0x184);
      fVar20 = *(float *)(this + 0x188);
      fVar21 = *(float *)(this + 0x18c);
      pfVar7[4] = pfVar7[4] -
                  (fVar29 * *(float *)(this + 0x150) + fVar26 * *(float *)(this + 0x160) +
                   fVar27 * *(float *)(this + 0x170) + *(float *)(this + 0x180));
      pfVar7[5] = pfVar7[5] - (fVar29 * fVar13 + fVar26 * fVar1 + fVar27 * fVar16 + fVar19);
      pfVar7[6] = pfVar7[6] - (fVar29 * fVar14 + fVar26 * fVar11 + fVar27 * fVar17 + fVar20);
      pfVar7[7] = pfVar7[7] - (fVar29 * fVar15 + fVar26 * fVar12 + fVar27 * fVar18 + fVar21);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      pfVar7 = *(float **)(lVar4 + 0x48);
      bVar3 = *(byte *)((long)pfVar7 + 0x7a);
      fVar1 = pfVar7[0x16];
      auVar32._1_3_ = 0;
      auVar32[0] = bVar3;
      auVar32[4] = bVar3;
      auVar32._5_3_ = 0;
      auVar32[8] = bVar3;
      auVar32._9_3_ = 0;
      auVar32[0xc] = bVar3;
      auVar32._13_3_ = 0;
      auVar22._4_4_ = _UNK_00109b24;
      auVar22._0_4_ = __LC12;
      auVar22._8_4_ = _UNK_00109b28;
      auVar22._12_4_ = _UNK_00109b2c;
      auVar32 = auVar32 & auVar22;
      bVar8 = auVar32._4_4_ == _UNK_00109b24;
      bVar9 = auVar32._8_4_ == _UNK_00109b28;
      bVar10 = auVar32._12_4_ == _UNK_00109b2c;
      *pfVar7 = (float)((uint)(fVar1 * fVar29 + *pfVar7) & -(uint)(auVar32._0_4_ == __LC12));
      pfVar7[1] = (float)((uint)(fVar1 * fVar26 + pfVar7[1]) & -(uint)bVar8);
      pfVar7[2] = (float)((uint)(fVar1 * fVar27 + pfVar7[2]) & -(uint)bVar9);
      pfVar7[3] = (float)((uint)(fVar1 * fVar28 + pfVar7[3]) & -(uint)bVar10);
      fVar28 = *(float *)(this + 0x1a4);
      fVar1 = *(float *)(this + 0x1a8);
      fVar11 = *(float *)(this + 0x1ac);
      fVar12 = *(float *)(this + 0x194);
      fVar13 = *(float *)(this + 0x198);
      fVar14 = *(float *)(this + 0x19c);
      fVar15 = *(float *)(this + 0x1b4);
      fVar16 = *(float *)(this + 0x1b8);
      fVar17 = *(float *)(this + 0x1bc);
      fVar18 = *(float *)(this + 0x1c4);
      fVar19 = *(float *)(this + 0x1c8);
      fVar20 = *(float *)(this + 0x1cc);
      pfVar7[4] = fVar27 * *(float *)(this + 0x1b0) +
                  fVar29 * *(float *)(this + 400) + fVar26 * *(float *)(this + 0x1a0) +
                  *(float *)(this + 0x1c0) + pfVar7[4];
      pfVar7[5] = fVar27 * fVar15 + fVar29 * fVar12 + fVar26 * fVar28 + fVar18 + pfVar7[5];
      pfVar7[6] = fVar27 * fVar16 + fVar29 * fVar13 + fVar26 * fVar1 + fVar19 + pfVar7[6];
      pfVar7[7] = fVar27 * fVar17 + fVar29 * fVar14 + fVar26 * fVar11 + fVar20 + pfVar7[7];
      return;
    }
  }
  return;
}



/* JPH::SwingTwistConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void __thiscall
JPH::SwingTwistConstraint::DrawConstraintLimits(SwingTwistConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  float fVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_20;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar8 = *(float *)(this + 0x40);
  fVar9 = *(float *)(this + 0x44);
  fVar10 = *(float *)(this + 0x48);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = (float)puVar1[3];
  fVar12 = (float)puVar1[2];
  fVar11 = (float)((ulong)puVar1[2] >> 0x20);
  fVar17 = fVar11 + fVar11;
  fVar16 = fVar12 + fVar12;
  fVar14 = (float)((ulong)puVar1[3] >> 0x20);
  fVar7 = fVar14 * (fVar13 + fVar13);
  fVar18 = fVar13 * (fVar13 + fVar13);
  fStack_2c = _LC0;
  fVar5 = (float)*(undefined8 *)(this + 0x60);
  fVar19 = (float)puVar1[3];
  fVar2 = (float)*(undefined8 *)(this + 0x68);
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar4 = (float)puVar1[2];
  fVar15 = (float)((ulong)puVar1[2] >> 0x20);
  local_78 = (float)*puVar1;
  fStack_74 = (float)((ulong)*puVar1 >> 0x20);
  local_38 = CONCAT44(fStack_74 +
                      (fVar11 * fVar16 + fVar7) * fVar8 +
                      ((_LC0 - fVar18) - fVar12 * fVar16) * fVar9 +
                      (fVar13 * fVar17 - fVar16 * fVar14) * fVar10,
                      local_78 +
                      ((_LC0 - fVar11 * fVar17) - fVar18) * fVar8 +
                      (fVar11 * fVar16 - fVar7) * fVar9 +
                      (fVar13 * fVar16 + fVar17 * fVar14) * fVar10);
  local_30 = *(float *)(puVar1 + 1) +
             (fVar13 * fVar16 - fVar17 * fVar14) * fVar8 +
             (fVar16 * fVar14 + fVar13 * fVar17) * fVar9 +
             ((_LC0 - fVar12 * fVar16) - fVar11 * fVar17) * fVar10;
  fVar8 = (float)((ulong)puVar1[3] >> 0x20);
  fVar12 = (fVar8 * fVar5 + fVar4 * fVar3 + fVar15 * fVar2) - fVar19 * fVar6;
  fVar10 = (fVar8 * fVar6 - fVar4 * fVar2) + fVar15 * fVar3 + fVar19 * fVar5;
  fVar13 = fVar12 + fVar12;
  fVar14 = ((fVar8 * fVar2 + fVar4 * fVar6) - fVar15 * fVar5) + fVar19 * fVar3;
  fVar7 = fVar10 + fVar10;
  fVar8 = ((fVar8 * fVar3 - fVar4 * fVar5) - fVar15 * fVar6) - fVar19 * fVar2;
  fVar19 = (fVar14 + fVar14) * fVar14;
  fVar9 = fVar8 * (fVar14 + fVar14);
  uStack_60 = (ulong)(uint)(fVar13 * fVar14 - fVar7 * fVar8);
  local_68 = CONCAT44(fVar10 * fVar13 + fVar9,(_LC0 - fVar7 * fVar10) - fVar19);
  uStack_50 = (ulong)(uint)(fVar13 * fVar8 + fVar14 * fVar7);
  local_58 = CONCAT44((_LC0 - fVar19) - fVar12 * fVar13,fVar10 * fVar13 - fVar9);
  local_48 = CONCAT44(fVar14 * fVar7 - fVar13 * fVar8,fVar13 * fVar14 + fVar7 * fVar8);
  uStack_40 = (ulong)(uint)((_LC0 - fVar12 * fVar13) - fVar7 * fVar10);
  if (this[0x221] == (SwingTwistConstraint)0x1) {
    JPH::DebugRenderer::DrawSwingPyramidLimits(param_1,&local_68,(undefined4)Color::sGreen,1,0);
  }
  else {
    JPH::DebugRenderer::DrawSwingConeLimits(param_1,&local_68,(undefined4)Color::sGreen,1,0);
  }
  JPH::DebugRenderer::DrawPie
            (local_38,CONCAT44(fStack_2c,local_30),param_1,(undefined4)Color::sPurple,1,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SwingTwistConstraint::SolveVelocityConstraint(float) */

uint __thiscall
JPH::SwingTwistConstraint::SolveVelocityConstraint(SwingTwistConstraint *this,float param_1)

{
  Body BVar1;
  Body BVar2;
  Body *pBVar3;
  Body *pBVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  uint uVar8;
  SwingTwistConstraint *pSVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  float fVar18;
  float fVar19;
  
  pBVar3 = *(Body **)(this + 0x30);
  pBVar4 = *(Body **)(this + 0x28);
  uVar10 = 0;
  if (*(float *)(this + 0x350) != 0.0) {
    if (*(int *)(this + 0xd0) == 0) {
      fVar18 = *(float *)(this + 0x90) * param_1;
      fVar19 = (float)((uint)fVar18 ^ _LC47);
    }
    else {
      fVar19 = *(float *)(this + 0xc4) * param_1;
      fVar18 = *(float *)(this + 200) * param_1;
    }
    BVar1 = pBVar3[0x78];
    auVar17 = SUB1612((undefined1  [16])0x0,0);
    lVar5 = *(long *)(pBVar3 + 0x48);
    if (BVar1 != (Body)0x0) {
      auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
    }
    BVar2 = pBVar4[0x78];
    lVar6 = *(long *)(pBVar4 + 0x48);
    auVar16 = SUB1612((undefined1  [16])0x0,0);
    if (BVar2 != (Body)0x0) {
      auVar16 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
    }
    fVar14 = *(float *)(this + 0x35c);
    fVar13 = (((auVar16._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x108) +
              (auVar16._4_4_ - auVar17._4_4_) *
              (float)((ulong)*(undefined8 *)(this + 0x100) >> 0x20) +
              (auVar16._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x100) + 0.0) -
             (*(float *)(this + 0x358) * fVar14 + *(float *)(this + 0x354))) *
             *(float *)(this + 0x350) + fVar14;
    if (fVar19 <= fVar13) {
      fVar19 = fVar13;
    }
    if (fVar19 <= fVar18) {
      fVar18 = fVar19;
    }
    *(float *)(this + 0x35c) = fVar18;
    fVar18 = fVar18 - fVar14;
    uVar10 = 0;
    if (fVar18 != 0.0) {
      if (BVar2 == (Body)0x2) {
        fVar19 = *(float *)(this + 0x334);
        fVar14 = *(float *)(this + 0x338);
        fVar13 = *(float *)(this + 0x33c);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar18 * *(float *)(this + 0x330);
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar18 * fVar19;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar18 * fVar14;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar18 * fVar13;
      }
      if (BVar1 == (Body)0x2) {
        fVar19 = *(float *)(this + 0x344);
        fVar14 = *(float *)(this + 0x348);
        fVar13 = *(float *)(this + 0x34c);
        *(float *)(lVar5 + 0x10) = fVar18 * *(float *)(this + 0x340) + *(float *)(lVar5 + 0x10);
        *(float *)(lVar5 + 0x14) = fVar18 * fVar19 + *(float *)(lVar5 + 0x14);
        *(float *)(lVar5 + 0x18) = fVar18 * fVar14 + *(float *)(lVar5 + 0x18);
        *(float *)(lVar5 + 0x1c) = fVar18 * fVar13 + *(float *)(lVar5 + 0x1c);
      }
      uVar10 = 1;
    }
  }
  if (*(float *)(this + 0x380) != 0.0) {
    if (*(int *)(this + 0xcc) == 0) {
      fVar19 = param_1 * *(float *)(this + 0x90);
      fVar18 = (float)((uint)fVar19 ^ _LC47);
    }
    else {
      fVar18 = *(float *)(this + 0xa8) * param_1;
      fVar19 = param_1 * *(float *)(this + 0xac);
    }
    BVar1 = pBVar3[0x78];
    lVar5 = *(long *)(pBVar3 + 0x48);
    lVar12 = 0;
    BVar2 = pBVar4[0x78];
    lVar6 = *(long *)(pBVar4 + 0x48);
    pSVar9 = this + 0x360;
    while( true ) {
      auVar17 = SUB1612((undefined1  [16])0x0,0);
      if (BVar1 != (Body)0x0) {
        auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
      }
      auVar16 = SUB1612((undefined1  [16])0x0,0);
      if (BVar2 != (Body)0x0) {
        auVar16 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
      }
      fVar14 = *(float *)(pSVar9 + 0x2c);
      fVar15 = (((auVar16._4_4_ - auVar17._4_4_) *
                 (float)((ulong)*(undefined8 *)(this + lVar12 + 0x110) >> 0x20) +
                 (auVar16._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + lVar12 + 0x110) +
                 0.0 + (auVar16._8_4_ - auVar17._8_4_) *
                       (float)*(undefined8 *)(this + lVar12 + 0x118)) -
               (*(float *)(pSVar9 + 0x28) * fVar14 + *(float *)(pSVar9 + 0x24))) *
               *(float *)(pSVar9 + 0x20) + fVar14;
      fVar13 = fVar18;
      if (fVar18 <= fVar15) {
        fVar13 = fVar15;
      }
      fVar15 = fVar19;
      if (fVar13 <= fVar19) {
        fVar15 = fVar13;
      }
      *(float *)(pSVar9 + 0x2c) = fVar15;
      fVar15 = fVar15 - fVar14;
      if (fVar15 != 0.0) {
        if (BVar2 == (Body)0x2) {
          fVar14 = *(float *)(pSVar9 + 4);
          fVar13 = *(float *)(pSVar9 + 8);
          fVar7 = *(float *)(pSVar9 + 0xc);
          *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar15 * *(float *)pSVar9;
          *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar15 * fVar14;
          *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar15 * fVar13;
          *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar15 * fVar7;
        }
        if (BVar1 == (Body)0x2) {
          fVar14 = *(float *)(pSVar9 + 0x14);
          fVar13 = *(float *)(pSVar9 + 0x18);
          fVar7 = *(float *)(pSVar9 + 0x1c);
          *(float *)(lVar5 + 0x10) = fVar15 * *(float *)(pSVar9 + 0x10) + *(float *)(lVar5 + 0x10);
          *(float *)(lVar5 + 0x14) = fVar15 * fVar14 + *(float *)(lVar5 + 0x14);
          *(float *)(lVar5 + 0x18) = fVar15 * fVar13 + *(float *)(lVar5 + 0x18);
          *(float *)(lVar5 + 0x1c) = fVar15 * fVar7 + *(float *)(lVar5 + 0x1c);
        }
        uVar10 = 1;
      }
      pSVar9 = pSVar9 + 0x30;
      if (lVar12 == 0x10) break;
      lVar12 = 0x10;
    }
  }
  uVar11 = 0;
  if (*(float *)(this + 0x2c0) != 0.0) {
    fVar18 = _LC6._4_4_;
    if (*(float *)(this + 0x244) != *(float *)(this + 0x248)) {
      fVar18 = 0.0;
    }
    BVar1 = pBVar3[0x78];
    auVar17 = SUB1612((undefined1  [16])0x0,0);
    lVar5 = *(long *)(pBVar3 + 0x48);
    if (BVar1 != (Body)0x0) {
      auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
    }
    BVar2 = pBVar4[0x78];
    lVar6 = *(long *)(pBVar4 + 0x48);
    auVar16 = SUB1612((undefined1  [16])0x0,0);
    if (BVar2 != (Body)0x0) {
      auVar16 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
    }
    fVar19 = *(float *)(this + 0x2cc);
    fVar13 = (((auVar16._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x278) +
              (auVar16._4_4_ - auVar17._4_4_) *
              (float)((ulong)*(undefined8 *)(this + 0x270) >> 0x20) +
              (auVar16._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x270) + 0.0) -
             (*(float *)(this + 0x2c8) * fVar19 + *(float *)(this + 0x2c4))) *
             *(float *)(this + 0x2c0) + fVar19;
    fVar14 = (float)_LC6;
    if (((float)_LC6 <= fVar13) && (fVar14 = fVar18, fVar13 <= fVar18)) {
      fVar14 = fVar13;
    }
    *(float *)(this + 0x2cc) = fVar14;
    fVar14 = fVar14 - fVar19;
    uVar11 = 0;
    if (fVar14 != 0.0) {
      if (BVar2 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x2a4);
        fVar19 = *(float *)(this + 0x2a8);
        fVar13 = *(float *)(this + 0x2ac);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar14 * *(float *)(this + 0x2a0);
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar14 * fVar18;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar14 * fVar19;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar14 * fVar13;
      }
      if (BVar1 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x2b4);
        fVar19 = *(float *)(this + 0x2b8);
        fVar13 = *(float *)(this + 700);
        *(float *)(lVar5 + 0x10) = fVar14 * *(float *)(this + 0x2b0) + *(float *)(lVar5 + 0x10);
        *(float *)(lVar5 + 0x14) = fVar14 * fVar18 + *(float *)(lVar5 + 0x14);
        *(float *)(lVar5 + 0x18) = fVar14 * fVar19 + *(float *)(lVar5 + 0x18);
        *(float *)(lVar5 + 0x1c) = fVar14 * fVar13 + *(float *)(lVar5 + 0x1c);
      }
      uVar11 = 1;
    }
  }
  if (*(float *)(this + 0x2f0) != 0.0) {
    fVar18 = _LC6._4_4_;
    if (*(float *)(this + 0x24c) != *(float *)(this + 0x250)) {
      fVar18 = 0.0;
    }
    BVar1 = pBVar3[0x78];
    auVar17 = SUB1612((undefined1  [16])0x0,0);
    lVar5 = *(long *)(pBVar3 + 0x48);
    if (BVar1 != (Body)0x0) {
      auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
    }
    BVar2 = pBVar4[0x78];
    lVar6 = *(long *)(pBVar4 + 0x48);
    auVar16 = SUB1612((undefined1  [16])0x0,0);
    if (BVar2 != (Body)0x0) {
      auVar16 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
    }
    fVar19 = *(float *)(this + 0x2fc);
    fVar13 = (((auVar16._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x288) +
              (auVar16._4_4_ - auVar17._4_4_) *
              (float)((ulong)*(undefined8 *)(this + 0x280) >> 0x20) +
              (auVar16._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x280) + 0.0) -
             (*(float *)(this + 0x2f8) * fVar19 + *(float *)(this + 0x2f4))) *
             *(float *)(this + 0x2f0) + fVar19;
    fVar14 = (float)_LC6;
    if (((float)_LC6 <= fVar13) && (fVar14 = fVar18, fVar13 <= fVar18)) {
      fVar14 = fVar13;
    }
    *(float *)(this + 0x2fc) = fVar14;
    fVar14 = fVar14 - fVar19;
    if (fVar14 != 0.0) {
      if (BVar2 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x2d4);
        fVar19 = *(float *)(this + 0x2d8);
        fVar13 = *(float *)(this + 0x2dc);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar14 * *(float *)(this + 0x2d0);
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar14 * fVar18;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar14 * fVar19;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar14 * fVar13;
      }
      if (BVar1 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x2e4);
        fVar19 = *(float *)(this + 0x2e8);
        fVar13 = *(float *)(this + 0x2ec);
        *(float *)(lVar5 + 0x10) = fVar14 * *(float *)(this + 0x2e0) + *(float *)(lVar5 + 0x10);
        *(float *)(lVar5 + 0x14) = fVar14 * fVar18 + *(float *)(lVar5 + 0x14);
        *(float *)(lVar5 + 0x18) = fVar14 * fVar19 + *(float *)(lVar5 + 0x18);
        *(float *)(lVar5 + 0x1c) = fVar14 * fVar13 + *(float *)(lVar5 + 0x1c);
      }
      uVar11 = 1;
    }
  }
  if (*(float *)(this + 800) != 0.0) {
    fVar18 = _LC6._4_4_;
    if (*(float *)(this + 0x224) != *(float *)(this + 0x228)) {
      fVar18 = 0.0;
    }
    BVar1 = pBVar3[0x78];
    auVar17 = SUB1612((undefined1  [16])0x0,0);
    lVar5 = *(long *)(pBVar3 + 0x48);
    if (BVar1 != (Body)0x0) {
      auVar17 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
    }
    BVar2 = pBVar4[0x78];
    lVar6 = *(long *)(pBVar4 + 0x48);
    auVar16 = SUB1612((undefined1  [16])0x0,0);
    if (BVar2 != (Body)0x0) {
      auVar16 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
    }
    fVar19 = *(float *)(this + 0x32c);
    fVar13 = (((auVar16._8_4_ - auVar17._8_4_) * (float)*(undefined8 *)(this + 0x298) +
              (auVar16._4_4_ - auVar17._4_4_) *
              (float)((ulong)*(undefined8 *)(this + 0x290) >> 0x20) +
              (auVar16._0_4_ - auVar17._0_4_) * (float)*(undefined8 *)(this + 0x290) + 0.0) -
             (*(float *)(this + 0x328) * fVar19 + *(float *)(this + 0x324))) *
             *(float *)(this + 800) + fVar19;
    fVar14 = (float)_LC6;
    if (((float)_LC6 <= fVar13) && (fVar14 = fVar18, fVar13 <= fVar18)) {
      fVar14 = fVar13;
    }
    *(float *)(this + 0x32c) = fVar14;
    fVar14 = fVar14 - fVar19;
    if (fVar14 != 0.0) {
      if (BVar2 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x304);
        fVar19 = *(float *)(this + 0x308);
        fVar13 = *(float *)(this + 0x30c);
        *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x10) - fVar14 * *(float *)(this + 0x300);
        *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) - fVar14 * fVar18;
        *(float *)(lVar6 + 0x18) = *(float *)(lVar6 + 0x18) - fVar14 * fVar19;
        *(float *)(lVar6 + 0x1c) = *(float *)(lVar6 + 0x1c) - fVar14 * fVar13;
      }
      if (BVar1 == (Body)0x2) {
        fVar18 = *(float *)(this + 0x314);
        fVar19 = *(float *)(this + 0x318);
        fVar13 = *(float *)(this + 0x31c);
        *(float *)(lVar5 + 0x10) = fVar14 * *(float *)(this + 0x310) + *(float *)(lVar5 + 0x10);
        *(float *)(lVar5 + 0x14) = fVar14 * fVar18 + *(float *)(lVar5 + 0x14);
        *(float *)(lVar5 + 0x18) = fVar14 * fVar19 + *(float *)(lVar5 + 0x18);
        *(float *)(lVar5 + 0x1c) = fVar14 * fVar13 + *(float *)(lVar5 + 0x1c);
      }
      uVar11 = 1;
    }
  }
  uVar8 = PointConstraintPart::SolveVelocityConstraint
                    ((PointConstraintPart *)(this + 0x130),pBVar4,pBVar3);
  return uVar8 | uVar11 | uVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::SetupVelocityConstraint(float) */

void __thiscall
JPH::SwingTwistConstraint::SetupVelocityConstraint(SwingTwistConstraint *this,float param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float unaff_EBP;
  long in_FS_OFFSET;
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
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar2 = *(long *)(this + 0x28);
  lVar3 = *(long *)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = (float)*(undefined8 *)(lVar2 + 0x10);
  fVar16 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  fVar11 = fVar8 + fVar8;
  fVar17 = fVar10 + fVar10;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  fVar6 = fVar7 * (fVar16 + fVar16);
  fVar18 = fVar16 * (fVar16 + fVar16);
  local_c8._4_4_ = fVar10 * fVar11 + fVar6;
  local_c8._0_4_ = (_LC0 - fVar10 * fVar17) - fVar18;
  local_c8._8_4_ = fVar16 * fVar11 - fVar17 * fVar7;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC0 - fVar18) - fVar8 * fVar11;
  local_b8._0_4_ = fVar10 * fVar11 - fVar6;
  local_a8 = CONCAT44(fVar16 * fVar17 - fVar11 * fVar7,fVar16 * fVar11 + fVar17 * fVar7);
  fVar6 = (float)*(undefined8 *)(lVar3 + 0x18);
  local_b8._8_4_ = fVar11 * fVar7 + fVar16 * fVar17;
  local_b8._12_4_ = 0;
  fVar19 = fVar6 * (fVar6 + fVar6);
  local_98 = __LC42;
  uStack_90 = _UNK_00109b48;
  fVar16 = (float)*(undefined8 *)(lVar3 + 0x10);
  fVar18 = fVar16 + fVar16;
  uStack_a0 = (ulong)(uint)((_LC0 - fVar8 * fVar11) - fVar10 * fVar17);
  fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
  fVar11 = fVar8 + fVar8;
  fVar7 = fVar10 * (fVar6 + fVar6);
  local_88._4_4_ = fVar8 * fVar18 + fVar7;
  local_88._0_4_ = (_LC0 - fVar8 * fVar11) - fVar19;
  local_88._8_4_ = fVar6 * fVar18 - fVar11 * fVar10;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC0 - fVar19) - fVar16 * fVar18;
  local_78._0_4_ = fVar8 * fVar18 - fVar7;
  local_68 = CONCAT44(fVar6 * fVar11 - fVar18 * fVar10,fVar6 * fVar18 + fVar11 * fVar10);
  local_78._8_4_ = fVar18 * fVar10 + fVar6 * fVar11;
  local_78._12_4_ = 0;
  local_58 = __LC42;
  uStack_50 = _UNK_00109b48;
  uStack_60 = (ulong)(uint)((_LC0 - fVar16 * fVar18) - fVar8 * fVar11);
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),this + 0x130,lVar2,local_c8,lVar3,local_88);
  fVar10 = (float)*(undefined8 *)(this + 0x60);
  fVar8 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar15 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  fVar18 = (float)*(undefined8 *)(this + 0x68);
  fVar6 = (float)*(undefined8 *)(lVar2 + 0x10);
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar3 + 0x10);
  fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
  fVar17 = (float)*(undefined8 *)(this + 0x70);
  fVar16 = (float)*(undefined8 *)(this + 0x78);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  fVar19 = (fVar18 * fVar11 + fVar15 * fVar10 + fVar6 * fVar13) - fVar8 * fVar20;
  fVar5 = ((fVar15 * fVar13 - fVar6 * fVar10) - fVar20 * fVar11) - fVar8 * fVar18;
  fVar9 = fVar8 * fVar10 + fVar13 * fVar11 + (fVar15 * fVar20 - fVar6 * fVar18);
  fVar10 = fVar8 * fVar13 + ((fVar15 * fVar18 + fVar6 * fVar20) - fVar10 * fVar11);
  fVar6 = (float)*(undefined8 *)(lVar3 + 0x18);
  fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
  local_108 = CONCAT44(fVar9,fVar19);
  uStack_100 = CONCAT44(fVar5,fVar10);
  fVar8 = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
  fVar20 = (fVar18 * fVar17 + fVar12 * fVar7 + fVar14 * fVar16) - fVar6 * fVar8;
  fVar15 = (fVar18 * fVar8 - fVar12 * fVar16) + fVar14 * fVar7 + fVar6 * fVar17;
  fVar11 = ((fVar18 * fVar7 - fVar12 * fVar17) - fVar14 * fVar8) - fVar6 * fVar16;
  fVar19 = (float)((uint)fVar19 ^ __LC45);
  fVar9 = (float)((uint)fVar9 ^ _UNK_00109c04);
  fVar10 = (float)((uint)fVar10 ^ _UNK_00109c08);
  fVar5 = (float)((uint)fVar5 ^ _UNK_00109c0c);
  fVar18 = ((fVar18 * fVar16 + fVar12 * fVar8) - fVar14 * fVar17) + fVar6 * fVar7;
  fVar16 = (fVar20 * fVar5 + fVar19 * fVar11 + fVar18 * fVar9) - fVar15 * fVar10;
  fVar7 = (fVar15 * fVar5 - fVar19 * fVar18) + fVar11 * fVar9 + fVar20 * fVar10;
  fVar6 = ((fVar18 * fVar5 + fVar19 * fVar15) - fVar20 * fVar9) + fVar11 * fVar10;
  fVar10 = ((fVar5 * fVar11 - fVar19 * fVar20) - fVar9 * fVar15) - fVar10 * fVar18;
  SwingTwistConstraintPart::CalculateConstraintProperties
            (CONCAT44(fVar7,fVar16),CONCAT44(fVar10,fVar6),local_108,uStack_100,this + 0x220,lVar2,
             lVar3);
  fVar8 = _LC0;
  iVar1 = *(int *)(this + 0xcc);
  if (((iVar1 != 0) || (*(int *)(this + 0xd0) != 0)) || (0.0 < *(float *)(this + 0x90))) {
    fVar17 = fVar15 + fVar15;
    fVar19 = fVar20 + fVar20;
    fVar5 = fVar18 * (fVar18 + fVar18);
    fVar9 = (fVar18 + fVar18) * fVar11;
    *(ulong *)(this + 0x100) = CONCAT44(fVar15 * fVar19 + fVar9,(_LC0 - fVar15 * fVar17) - fVar5);
    *(ulong *)(this + 0x108) = (ulong)(uint)(fVar18 * fVar19 - fVar17 * fVar11);
    auVar4._4_4_ = (fVar8 - fVar5) - fVar20 * fVar19;
    auVar4._0_4_ = fVar15 * fVar19 - fVar9;
    auVar4._8_4_ = fVar19 * fVar11 + fVar18 * fVar17;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(this + 0x110) = auVar4;
    *(ulong *)(this + 0x120) =
         CONCAT44(fVar18 * fVar17 - fVar19 * fVar11,fVar17 * fVar11 + fVar18 * fVar19);
    *(ulong *)(this + 0x128) = (ulong)(uint)((fVar8 - fVar20 * fVar19) - fVar15 * fVar17);
    if ((iVar1 == 2) || (*(int *)(this + 0xd0) == 2)) {
      if (fVar16 * *(float *)(this + 0xf0) + fVar7 * *(float *)(this + 0xf4) +
          fVar6 * *(float *)(this + 0xf8) + fVar10 * *(float *)(this + 0xfc) <= 0.0) {
        fVar8 = 0.0 - *(float *)(this + 0xf0);
        local_108 = (ulong)(uint)(0.0 - *(float *)(this + 0xf4)) << 0x20;
        uStack_100 = CONCAT44(0.0 - *(float *)(this + 0xfc),0.0 - *(float *)(this + 0xf8));
      }
      else {
        local_108 = *(long *)(this + 0xf0);
        uStack_100 = *(undefined8 *)(this + 0xf8);
        fVar8 = (float)local_108;
      }
      fVar16 = (float)((uint)fVar16 ^ __LC45);
      fVar7 = (float)((uint)fVar7 ^ _UNK_00109c04);
      fVar6 = (float)((uint)fVar6 ^ _UNK_00109c08);
      fVar10 = (float)((uint)fVar10 ^ _UNK_00109c0c);
      fVar17 = (float)((ulong)local_108 >> 0x20);
      fVar11 = (float)uStack_100;
      fVar19 = (float)((ulong)uStack_100 >> 0x20);
      unaff_EBP = ((fVar16 * fVar19 + fVar8 * fVar10 + fVar11 * fVar7) - fVar17 * fVar6) * _LC59;
      fVar18 = (fVar19 * fVar6 + ((fVar16 * fVar17 + fVar11 * fVar10) - fVar8 * fVar7)) * _LC59;
      if (iVar1 != 1) {
        if (iVar1 != 2) goto LAB_001027f4;
        if (*(float *)(this + 0x98) <= 0.0) {
          *(undefined4 *)(this + 0x380) = 0;
          *(undefined4 *)(this + 0x38c) = 0;
          *(undefined4 *)(this + 0x3b0) = 0;
          *(undefined4 *)(this + 0x3bc) = 0;
        }
        else {
          AngleConstraintPart::CalculateConstraintPropertiesWithSettings
                    (param_1,*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x118),0,
                     (fVar8 * fVar6 + (fVar17 * fVar10 - fVar16 * fVar11) + fVar19 * fVar7) * _LC59,
                     this + 0x360,lVar2,lVar3,this[0x94]);
          AngleConstraintPart::CalculateConstraintPropertiesWithSettings
                    (param_1,*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),0,fVar18,
                     this + 0x390,lVar2,lVar3);
        }
        goto LAB_00102ae0;
      }
LAB_00102c50:
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x118),this + 0x360,lVar2,
                 lVar3);
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),this + 0x390,lVar2,
                 lVar3);
LAB_00102ae0:
      iVar1 = *(int *)(this + 0xd0);
      if (iVar1 != 1) {
        if (iVar1 == 2) {
LAB_00102bb8:
          if (0.0 < *(float *)(this + 0xb4)) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              AngleConstraintPart::CalculateConstraintPropertiesWithSettings
                        (param_1,*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),0,
                         unaff_EBP,this + 0x330,lVar2,lVar3,this[0xb0]);
              return;
            }
            goto LAB_00102d9d;
          }
        }
        else {
          if (iVar1 != 0) goto LAB_00102880;
          if (0.0 < *(float *)(this + 0x90)) {
LAB_00102b15:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102c1d;
            goto LAB_00102d9d;
          }
        }
        *(undefined4 *)(this + 0x350) = 0;
        *(undefined4 *)(this + 0x35c) = 0;
        goto LAB_00102880;
      }
    }
    else {
      if (iVar1 == 1) goto LAB_00102c50;
LAB_001027f4:
      if (iVar1 != 0) goto LAB_00102ae0;
      if (*(float *)(this + 0x90) <= 0.0) {
        *(undefined4 *)(this + 0x350) = 0;
        *(undefined4 *)(this + 0x35c) = 0;
        *(undefined4 *)(this + 0x380) = 0;
        *(undefined4 *)(this + 0x38c) = 0;
        *(undefined4 *)(this + 0x3b0) = 0;
        *(undefined4 *)(this + 0x3bc) = 0;
        goto LAB_00102ae0;
      }
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x118),this + 0x360,lVar2,
                 lVar3);
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),0,this + 0x390,lVar2,
                 lVar3);
      iVar1 = *(int *)(this + 0xd0);
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          if (iVar1 != 0) goto LAB_00102880;
          goto LAB_00102b15;
        }
        goto LAB_00102bb8;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102c1d:
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),this + 0x330,lVar2,
                 lVar3);
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0x350) = 0;
    *(undefined4 *)(this + 0x35c) = 0;
    *(undefined4 *)(this + 0x380) = 0;
    *(undefined4 *)(this + 0x38c) = 0;
    *(undefined4 *)(this + 0x3b0) = 0;
    *(undefined4 *)(this + 0x3bc) = 0;
LAB_00102880:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00102d9d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::SwingTwistConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(SwingTwistConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti,
                      "SwingTwistConstraintSettings",0xe0,
                      GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      SwingTwistConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SwingTwistConstraintSettings*)::rtti;
}



/* JPH::SwingTwistConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::SwingTwistConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((SwingTwistConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::SwingTwistConstraint::UpdateLimits() */

void __thiscall JPH::SwingTwistConstraint::UpdateLimits(SwingTwistConstraint *this)

{
  SwingTwistConstraintPart::SetLimits
            ((SwingTwistConstraintPart *)(this + 0x220),*(float *)(this + 0x88),
             *(float *)(this + 0x8c),(float)(_LC47 ^ (uint)*(float *)(this + 0x84)),
             *(float *)(this + 0x84),(float)((uint)*(float *)(this + 0x80) ^ _LC47),
             *(float *)(this + 0x80));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::SwingTwistConstraint(JPH::Body&, JPH::Body&,
   JPH::SwingTwistConstraintSettings const&) */

void __thiscall
JPH::SwingTwistConstraint::SwingTwistConstraint
          (SwingTwistConstraint *this,Body *param_1,Body *param_2,
          SwingTwistConstraintSettings *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  SwingTwistConstraintSettings SVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  
  uVar6 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar6;
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar6,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  fVar2 = *(float *)(param_3 + 0x9c);
  uVar12 = *(undefined8 *)(param_3 + 0x94);
  uVar13 = *(undefined8 *)(param_3 + 0x9c);
  *(SwingTwistConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(undefined4 *)(param_3 + 0xa4);
  *(undefined8 *)(this + 0x80) = uVar12;
  *(undefined8 *)(this + 0x88) = uVar13;
  fVar7 = *(float *)(param_3 + 0xa0);
  *(undefined8 *)(this + 0x20) = uVar9;
  fVar3 = *(float *)(param_3 + 0x98);
  *(undefined ***)this = &PTR__SwingTwistConstraint_00109a30;
  fVar4 = *(float *)(param_3 + 0x94);
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0x90) = uVar1;
  uVar16 = _UNK_00109b48;
  uVar15 = __LC42;
  uVar9 = *(undefined8 *)(param_3 + 0xa8);
  uVar12 = *(undefined8 *)(param_3 + 0xb0);
  uVar13 = *(undefined8 *)(param_3 + 0xb4);
  uVar14 = *(undefined8 *)(param_3 + 0xbc);
  *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
  SVar5 = param_3[0x90];
  *(undefined8 *)(this + 0x94) = uVar9;
  *(undefined8 *)(this + 0x9c) = uVar12;
  uVar9 = *(undefined8 *)(param_3 + 0xc4);
  uVar12 = *(undefined8 *)(param_3 + 0xcc);
  *(undefined8 *)(this + 0xa0) = uVar13;
  *(undefined8 *)(this + 0xa8) = uVar14;
  uVar13 = *(undefined8 *)(param_3 + 0xd0);
  uVar14 = *(undefined8 *)(param_3 + 0xd8);
  *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 800) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x350) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x380) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3b0) = (undefined1  [16])0x0;
  fVar32 = *(float *)(param_3 + 0x40);
  fVar29 = *(float *)(param_3 + 0x44);
  fVar48 = *(float *)(param_3 + 0x48);
  fVar39 = *(float *)(param_3 + 0x50);
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  fVar41 = *(float *)(param_3 + 0x50);
  fVar30 = *(float *)(param_3 + 0x54);
  fVar33 = *(float *)(param_3 + 0x58);
  fVar18 = *(float *)(param_3 + 0x54);
  *(undefined8 *)(this + 0xf0) = uVar15;
  *(undefined8 *)(this + 0xf8) = uVar16;
  fVar19 = *(float *)(param_3 + 0x44);
  fVar28 = *(float *)(param_3 + 0x48);
  *(undefined8 *)(this + 0xb0) = uVar9;
  *(undefined8 *)(this + 0xb8) = uVar12;
  fVar17 = *(float *)(param_3 + 0x40);
  fVar47 = *(float *)(param_3 + 0x58);
  *(undefined8 *)(this + 0xbc) = uVar13;
  *(undefined8 *)(this + 0xc4) = uVar14;
  *(undefined8 *)(this + 0xcc) = 0;
  *(SwingTwistConstraintSettings *)(this + 0x221) = SVar5;
  fVar38 = _LC0;
  fVar24 = fVar29 * fVar41 - fVar30 * fVar32;
  fVar29 = fVar48 * fVar30 - fVar33 * fVar29;
  fVar32 = fVar32 * fVar33 - fVar41 * fVar48;
  fVar48 = fVar47 + fVar17 + fVar32;
  if (0.0 <= fVar48) {
    fVar17 = SQRT(fVar48 + _LC0);
    fVar48 = _LC16 / fVar17;
    fVar17 = fVar17 * _LC16;
    fVar47 = (fVar24 - fVar18) * fVar48;
    fVar32 = (fVar39 - fVar28) * fVar48;
    fVar48 = (fVar19 - fVar29) * fVar48;
  }
  else if (fVar32 <= fVar17) {
    if (fVar17 < fVar47) goto LAB_0010308a;
    fVar47 = (fVar17 - (fVar47 + fVar32)) + _LC0;
    if (fVar47 < 0.0) {
      fVar47 = sqrtf(fVar47);
    }
    else {
      fVar47 = SQRT(fVar47);
    }
    fVar17 = _LC16 / fVar47;
    fVar47 = fVar47 * _LC16;
    fVar32 = (fVar19 + fVar29) * fVar17;
    fVar48 = (fVar28 + fVar39) * fVar17;
    fVar17 = (fVar24 - fVar18) * fVar17;
  }
  else if (fVar47 <= fVar32) {
    fVar32 = (fVar32 - (fVar47 + fVar17)) + _LC0;
    if (fVar32 < 0.0) {
      fVar32 = sqrtf(fVar32);
    }
    else {
      fVar32 = SQRT(fVar32);
    }
    fVar17 = _LC16 / fVar32;
    fVar32 = fVar32 * _LC16;
    fVar47 = (fVar29 + fVar19) * fVar17;
    fVar48 = (fVar18 + fVar24) * fVar17;
    fVar17 = (fVar39 - fVar28) * fVar17;
  }
  else {
LAB_0010308a:
    fVar48 = (fVar47 - (fVar17 + fVar32)) + _LC0;
    if (fVar48 < 0.0) {
      fVar48 = sqrtf(fVar48);
    }
    else {
      fVar48 = SQRT(fVar48);
    }
    fVar17 = _LC16 / fVar48;
    fVar48 = fVar48 * _LC16;
    fVar47 = (fVar28 + fVar39) * fVar17;
    fVar32 = (fVar24 + fVar18) * fVar17;
    fVar17 = (fVar19 - fVar29) * fVar17;
  }
  fVar11 = _LC16;
  fVar41 = *(float *)(param_3 + 0x70);
  fVar30 = *(float *)(param_3 + 0x74);
  fVar33 = *(float *)(param_3 + 0x78);
  fVar24 = *(float *)(param_3 + 0x80);
  fVar45 = *(float *)(param_3 + 0x84);
  fVar10 = *(float *)(param_3 + 0x88);
  *(float *)(this + 0x60) = fVar47;
  *(float *)(this + 100) = fVar32;
  *(float *)(this + 0x68) = fVar48;
  *(float *)(this + 0x6c) = fVar17;
  fVar39 = *(float *)(param_3 + 0x88);
  fVar18 = *(float *)(param_3 + 0x70);
  fVar19 = *(float *)(param_3 + 0x80);
  fVar28 = *(float *)(param_3 + 0x84);
  fVar29 = *(float *)(param_3 + 0x78);
  fVar25 = fVar30 * fVar24 - fVar45 * fVar41;
  fVar30 = fVar33 * fVar45 - fVar10 * fVar30;
  fVar33 = fVar41 * fVar10 - fVar24 * fVar33;
  fVar41 = *(float *)(param_3 + 0x74);
  fVar24 = fVar18 + fVar33 + fVar39;
  if (0.0 <= fVar24) {
    iVar8 = *(int *)(param_3 + 0x28);
    fVar39 = SQRT(fVar24 + fVar38);
    fVar24 = fVar11 / fVar39;
    fVar39 = fVar39 * fVar11;
    fVar18 = (fVar25 - fVar28) * fVar24;
    fVar33 = (fVar19 - fVar29) * fVar24;
    fVar24 = (fVar41 - fVar30) * fVar24;
    *(float *)(this + 0x70) = fVar18;
    *(float *)(this + 0x74) = fVar33;
    *(float *)(this + 0x78) = fVar24;
    *(float *)(this + 0x7c) = fVar39;
    goto joined_r0x0010330e;
  }
  if (fVar33 <= fVar18) {
    if (fVar18 < fVar39) goto LAB_00103190;
    fVar18 = (fVar18 - (fVar39 + fVar33)) + fVar38;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    fVar39 = fVar11 / fVar18;
    fVar18 = fVar18 * fVar11;
    fVar33 = (fVar41 + fVar30) * fVar39;
    fVar24 = (fVar29 + fVar19) * fVar39;
    fVar39 = (fVar25 - fVar28) * fVar39;
  }
  else if (fVar39 <= fVar33) {
    fVar33 = (fVar33 - (fVar18 + fVar39)) + fVar38;
    if (fVar33 < 0.0) {
      fVar33 = sqrtf(fVar33);
    }
    else {
      fVar33 = SQRT(fVar33);
    }
    fVar39 = fVar11 / fVar33;
    fVar33 = fVar33 * fVar11;
    fVar18 = (fVar41 + fVar30) * fVar39;
    fVar24 = (fVar25 + fVar28) * fVar39;
    fVar39 = (fVar19 - fVar29) * fVar39;
  }
  else {
LAB_00103190:
    fVar24 = (fVar39 - (fVar18 + fVar33)) + fVar38;
    if (fVar24 < 0.0) {
      fVar24 = sqrtf(fVar24);
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    fVar39 = fVar11 / fVar24;
    fVar24 = fVar24 * fVar11;
    fVar18 = (fVar29 + fVar19) * fVar39;
    fVar33 = (fVar28 + fVar25) * fVar39;
    fVar39 = (fVar41 - fVar30) * fVar39;
  }
  iVar8 = *(int *)(param_3 + 0x28);
  *(float *)(this + 0x70) = fVar18;
  *(float *)(this + 0x74) = fVar33;
  *(float *)(this + 0x78) = fVar24;
  *(float *)(this + 0x7c) = fVar39;
joined_r0x0010330e:
  if (iVar8 == 1) {
    fVar40 = (float)(__LC45 ^ *(uint *)(param_1 + 0x10));
    fVar42 = (float)(_UNK_00109c04 ^ *(uint *)(param_1 + 0x14));
    fVar43 = (float)(_UNK_00109c08 ^ *(uint *)(param_1 + 0x18));
    fVar44 = (float)(_UNK_00109c0c ^ *(uint *)(param_1 + 0x1c));
    fVar19 = *(float *)param_1;
    fVar28 = *(float *)(param_1 + 4);
    fVar29 = *(float *)(param_1 + 8);
    fVar30 = fVar42 + fVar42;
    fVar41 = fVar40 + fVar40;
    fVar36 = fVar43 * (fVar43 + fVar43);
    fVar26 = fVar44 * (fVar43 + fVar43);
    fVar20 = fVar43 * fVar41 + fVar30 * fVar44;
    fVar46 = fVar43 * fVar41 - fVar30 * fVar44;
    fVar37 = fVar43 * fVar30 + fVar41 * fVar44;
    fVar21 = fVar43 * fVar30 - fVar41 * fVar44;
    fVar49 = (fVar38 - fVar40 * fVar41) - fVar42 * fVar30;
    fVar22 = fVar42 * fVar41 - fVar26;
    fVar26 = fVar42 * fVar41 + fVar26;
    fVar23 = (fVar38 - fVar36) - fVar40 * fVar41;
    fVar36 = (fVar38 - fVar42 * fVar30) - fVar36;
    fVar27 = (float)(__LC45 ^ *(uint *)(param_2 + 0x10));
    fVar31 = (float)(_UNK_00109c04 ^ *(uint *)(param_2 + 0x14));
    fVar34 = (float)(_UNK_00109c08 ^ *(uint *)(param_2 + 0x18));
    fVar35 = (float)(_UNK_00109c0c ^ *(uint *)(param_2 + 0x1c));
    fVar41 = *(float *)(param_3 + 0x30);
    fVar30 = *(float *)(param_3 + 0x34);
    fVar45 = *(float *)(param_3 + 0x38);
    fVar10 = *(float *)param_2;
    fVar11 = *(float *)(param_2 + 4);
    fVar25 = *(float *)(param_2 + 8);
    *(float *)(this + 0x40) =
         fVar45 * fVar20 + fVar41 * fVar36 + fVar22 * fVar30 +
         (0.0 - (fVar29 * fVar20 + fVar19 * fVar36 + fVar28 * fVar22));
    *(float *)(this + 0x44) =
         fVar45 * fVar21 + fVar41 * fVar26 + fVar23 * fVar30 +
         (0.0 - (fVar29 * fVar21 + fVar19 * fVar26 + fVar28 * fVar23));
    *(float *)(this + 0x48) =
         fVar45 * fVar49 + fVar41 * fVar46 + fVar37 * fVar30 +
         (0.0 - (fVar29 * fVar49 + fVar19 * fVar46 + fVar28 * fVar37));
    *(float *)(this + 0x4c) = fVar45 * 0.0 + fVar41 * 0.0 + fVar30 * 0.0 + 1.0;
    *(float *)(this + 0x60) =
         (fVar42 * fVar48 + fVar40 * fVar17 + fVar47 * fVar44) - fVar43 * fVar32;
    *(float *)(this + 100) = fVar43 * fVar47 + fVar42 * fVar17 + (fVar32 * fVar44 - fVar40 * fVar48)
    ;
    *(float *)(this + 0x68) =
         fVar43 * fVar17 + ((fVar40 * fVar32 + fVar48 * fVar44) - fVar42 * fVar47);
    *(float *)(this + 0x6c) =
         ((fVar17 * fVar44 - fVar40 * fVar47) - fVar42 * fVar32) - fVar43 * fVar48;
    fVar19 = fVar27 + fVar27;
    fVar17 = fVar31 + fVar31;
    fVar28 = fVar34 * (fVar34 + fVar34);
    fVar30 = (fVar34 + fVar34) * fVar35;
    fVar48 = fVar34 * fVar19 + fVar17 * fVar35;
    fVar20 = (fVar38 - fVar27 * fVar19) - fVar31 * fVar17;
    fVar45 = fVar34 * fVar19 - fVar17 * fVar35;
    fVar29 = fVar34 * fVar17 + fVar19 * fVar35;
    fVar41 = fVar34 * fVar17 - fVar19 * fVar35;
    fVar47 = (fVar38 - fVar31 * fVar17) - fVar28;
    fVar32 = fVar31 * fVar19 + fVar30;
    fVar30 = fVar31 * fVar19 - fVar30;
    fVar38 = (fVar38 - fVar28) - fVar27 * fVar19;
    fVar19 = *(float *)(param_3 + 0x60);
    fVar28 = *(float *)(param_3 + 100);
    fVar17 = *(float *)(param_3 + 0x68);
    *(float *)(this + 0x50) =
         fVar47 * fVar19 + fVar28 * fVar30 + fVar17 * fVar48 +
         (0.0 - (fVar10 * fVar47 + fVar11 * fVar30 + fVar25 * fVar48));
    *(float *)(this + 0x54) =
         fVar32 * fVar19 + fVar28 * fVar38 + fVar17 * fVar41 +
         (0.0 - (fVar10 * fVar32 + fVar11 * fVar38 + fVar25 * fVar41));
    *(float *)(this + 0x58) =
         fVar45 * fVar19 + fVar28 * fVar29 + fVar17 * fVar20 +
         (0.0 - (fVar10 * fVar45 + fVar11 * fVar29 + fVar25 * fVar20));
    *(float *)(this + 0x5c) = fVar19 * 0.0 + fVar28 * 0.0 + fVar17 * 0.0 + 1.0;
    *(float *)(this + 0x70) =
         (fVar31 * fVar24 + fVar27 * fVar39 + fVar18 * fVar35) - fVar34 * fVar33;
    *(float *)(this + 0x74) =
         fVar34 * fVar18 + fVar31 * fVar39 + (fVar33 * fVar35 - fVar27 * fVar24);
    *(float *)(this + 0x78) =
         fVar34 * fVar39 + ((fVar27 * fVar33 + fVar24 * fVar35) - fVar31 * fVar18);
    *(float *)(this + 0x7c) =
         ((fVar39 * fVar35 - fVar27 * fVar18) - fVar31 * fVar33) - fVar34 * fVar24;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar9;
    uVar9 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar9;
  }
  SwingTwistConstraintPart::SetLimits
            ((SwingTwistConstraintPart *)(this + 0x220),fVar2,fVar7,(float)(_LC47 ^ (uint)fVar3),
             fVar3,(float)((uint)fVar4 ^ _LC47),fVar4);
  return;
}



/* JPH::SwingTwistConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

SwingTwistConstraint * __thiscall
JPH::SwingTwistConstraintSettings::Create
          (SwingTwistConstraintSettings *this,Body *param_1,Body *param_2)

{
  SwingTwistConstraint *this_00;
  
  this_00 = (SwingTwistConstraint *)(*Allocate)(0x3c0);
  SwingTwistConstraint::SwingTwistConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::GetRotationInConstraintSpace() const */

undefined1  [16] __thiscall
JPH::SwingTwistConstraint::GetRotationInConstraintSpace(SwingTwistConstraint *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
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
  
  uVar1 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
  fVar7 = (float)*(undefined8 *)(this + 0x60);
  fVar19 = (float)*(undefined8 *)(this + 0x68);
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar12 = (float)uVar2;
  fVar4 = (float)uVar1;
  fVar21 = (float)((ulong)uVar1 >> 0x20);
  fVar18 = (float)((ulong)uVar2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  uVar1 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar9 = (float)*(undefined8 *)(this + 0x78);
  fVar11 = (float)uVar1;
  fVar5 = (float)*(undefined8 *)(this + 0x70);
  fVar8 = (float)uVar2;
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
  fVar15 = (float)((ulong)uVar1 >> 0x20);
  fVar16 = (float)((ulong)uVar2 >> 0x20);
  fVar10 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  fVar17 = (fVar16 * fVar5 + fVar11 * fVar10 + fVar15 * fVar9) - fVar8 * fVar6;
  fVar14 = (fVar16 * fVar6 - fVar11 * fVar9) + fVar15 * fVar10 + fVar8 * fVar5;
  fVar13 = ((fVar16 * fVar9 + fVar11 * fVar6) - fVar15 * fVar5) + fVar8 * fVar10;
  fVar8 = ((fVar16 * fVar10 - fVar11 * fVar5) - fVar15 * fVar6) - fVar8 * fVar9;
  fVar9 = (float)((uint)((fVar18 * fVar7 + fVar4 * fVar20 + fVar21 * fVar19) - fVar12 * fVar22) ^
                 __LC45);
  fVar10 = (float)((uint)((fVar18 * fVar22 - fVar4 * fVar19) + fVar21 * fVar20 + fVar12 * fVar7) ^
                  _UNK_00109c04);
  fVar11 = (float)((uint)(((fVar18 * fVar19 + fVar4 * fVar22) - fVar21 * fVar7) + fVar12 * fVar20) ^
                  _UNK_00109c08);
  fVar12 = (float)((uint)(((fVar18 * fVar20 - fVar4 * fVar7) - fVar21 * fVar22) - fVar12 * fVar19) ^
                  _UNK_00109c0c);
  auVar3._4_4_ = fVar17 * fVar11 + (fVar14 * fVar12 - fVar9 * fVar13) + fVar8 * fVar10;
  auVar3._0_4_ = (fVar13 * fVar10 + fVar17 * fVar12 + fVar9 * fVar8) - fVar14 * fVar11;
  auVar3._12_4_ = ((fVar8 * fVar12 - fVar9 * fVar17) - fVar14 * fVar10) - fVar13 * fVar11;
  auVar3._8_4_ = ((fVar13 * fVar12 + fVar9 * fVar14) - fVar17 * fVar10) + fVar8 * fVar11;
  return auVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall
JPH::SwingTwistConstraint::DrawConstraint(SwingTwistConstraint *this,DebugRenderer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float extraout_XMM0_Db;
  float extraout_XMM1_Da;
  float fVar12;
  float extraout_XMM1_Db;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  fVar11 = (float)puVar2[3];
  fVar21 = (float)puVar2[2];
  fVar33 = (float)((ulong)puVar2[2] >> 0x20);
  fVar25 = fVar21 + fVar21;
  fVar27 = fVar33 + fVar33;
  fVar12 = (float)((ulong)puVar2[3] >> 0x20);
  fVar10 = fVar12 * (fVar11 + fVar11);
  fVar29 = fVar11 * (fVar11 + fVar11);
  fVar17 = *(float *)(this + 0x40);
  fVar15 = *(float *)(this + 0x44);
  fVar20 = *(float *)(this + 0x48);
  fVar30 = (float)puVar2[2];
  fVar14 = (float)((ulong)puVar2[2] >> 0x20);
  local_f8._0_4_ = (float)*puVar2;
  local_f8._4_4_ = (float)((ulong)*puVar2 >> 0x20);
  local_f8._0_4_ =
       ((_LC0 - fVar33 * fVar27) - fVar29) * fVar17 + (fVar33 * fVar25 - fVar10) * fVar15 +
       (fVar11 * fVar25 + fVar27 * fVar12) * fVar20 + (float)local_f8;
  local_f8._4_4_ =
       (fVar33 * fVar25 + fVar10) * fVar17 + ((_LC0 - fVar29) - fVar21 * fVar25) * fVar15 +
       (fVar11 * fVar27 - fVar25 * fVar12) * fVar20 + local_f8._4_4_;
  fVar27 = (fVar11 * fVar25 - fVar27 * fVar12) * fVar17 +
           (fVar25 * fVar12 + fVar11 * fVar27) * fVar15 +
           ((_LC0 - fVar21 * fVar25) - fVar33 * fVar27) * fVar20 + *(float *)(puVar2 + 1);
  fVar29 = fVar17 * 0.0 + fVar15 * 0.0 + fVar20 * 0.0 + 1.0;
  uVar8 = local_f8;
  uStack_f0 = CONCAT44(fVar29,fVar27);
  uVar9 = uStack_f0;
  uVar4 = *(undefined8 *)(this + 0x70);
  fVar21 = (float)*(undefined8 *)(this + 0x68);
  fVar17 = (float)puVar2[3];
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar34 = (float)((ulong)puVar2[3] >> 0x20);
  fVar12 = (float)*(undefined8 *)(this + 0x60);
  fVar10 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  uVar5 = *(undefined8 *)(this + 0x78);
  uVar6 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar33 = (float)uVar4;
  fVar25 = (float)uVar5;
  fVar20 = (float)uVar6;
  fVar15 = (float)uVar7;
  fVar28 = (fVar34 * fVar12 + fVar30 * fVar11 + fVar14 * fVar21) - fVar17 * fVar10;
  fVar26 = (fVar34 * fVar10 - fVar30 * fVar21) + fVar14 * fVar11 + fVar17 * fVar12;
  fVar24 = ((fVar34 * fVar21 + fVar30 * fVar10) - fVar14 * fVar12) + fVar17 * fVar11;
  fVar21 = ((fVar34 * fVar11 - fVar30 * fVar12) - fVar14 * fVar10) - fVar17 * fVar21;
  JPH::DebugRenderer::DrawCoordinateSystem((Mat44 *)param_1,*(float *)(this + 0xc));
  GetRotationInConstraintSpace(this);
  fVar17 = SQRT(extraout_XMM1_Db * extraout_XMM1_Db + extraout_XMM0_Da * extraout_XMM0_Da);
  if (fVar17 == 0.0) {
    fVar18 = 0.0;
    fVar30 = fVar24;
    fVar11 = fVar26;
    fVar12 = fVar21;
    fVar10 = fVar28;
    fVar17 = extraout_XMM1_Db;
    fVar14 = extraout_XMM1_Da;
    fVar34 = extraout_XMM0_Db;
    fVar16 = extraout_XMM0_Da;
  }
  else {
    fVar16 = 0.0;
    fVar30 = extraout_XMM1_Db / fVar17;
    fVar34 = (extraout_XMM0_Db * extraout_XMM1_Db - extraout_XMM1_Da * extraout_XMM0_Da) / fVar17;
    fVar11 = fVar30 * fVar26;
    fVar10 = fVar30 * fVar28;
    fVar18 = extraout_XMM0_Da / fVar17;
    fVar12 = fVar30 * fVar21;
    fVar30 = fVar30 * fVar24;
    fVar14 = (extraout_XMM1_Da * extraout_XMM1_Db + extraout_XMM0_Da * extraout_XMM0_Db) / fVar17;
  }
  fVar19 = fVar26 * 0.0;
  fVar35 = fVar24 * 0.0;
  fVar10 = (fVar21 * fVar18 + fVar10 + fVar19) - fVar35;
  fVar22 = fVar21 * 0.0 - fVar28 * 0.0;
  fVar23 = fVar21 * 0.0 + fVar28 * 0.0;
  fVar13 = fVar11 + fVar22 + fVar24 * fVar18;
  fVar31 = fVar13 + fVar13;
  fVar30 = (fVar23 - fVar26 * fVar18) + fVar30;
  fVar12 = ((fVar12 - fVar18 * fVar28) - fVar19) - fVar35;
  fVar32 = fVar12 + fVar12;
  fVar18 = fVar32 * fVar10 + fVar31 * fVar30;
  fVar11 = *(float *)(this + 0xc);
  local_e8 = CONCAT44(((fVar12 * fVar32 + fVar31 * fVar13) - _LC0) * fVar11 + local_f8._4_4_,
                      (fVar10 * fVar31 - fVar30 * fVar32) * fVar11 + (float)local_f8);
  (**(code **)(*(long *)param_1 + 0x10))
            (local_f8,uStack_f0,local_e8,CONCAT44(fVar18 * fVar11 + fVar29,fVar18 * fVar11 + fVar27)
             ,param_1,(undefined4)Color::sWhite);
  fVar11 = (fVar21 * fVar16 + fVar28 * fVar17 + fVar26 * fVar14) - fVar24 * fVar34;
  fVar12 = ((fVar17 * fVar21 - fVar16 * fVar28) - fVar34 * fVar26) - fVar14 * fVar24;
  local_e8 = CONCAT44(((fVar11 + fVar11) *
                       ((fVar21 * fVar34 - fVar28 * fVar14) + fVar26 * fVar17 + fVar24 * fVar16) +
                      (fVar12 + fVar12) *
                      (fVar24 * fVar17 + ((fVar21 * fVar14 + fVar28 * fVar34) - fVar26 * fVar16))) *
                      *(float *)(this + 0xc) + local_f8._4_4_,
                      ((fVar11 * (fVar11 + fVar11) + fVar12 * (fVar12 + fVar12)) - _LC0) *
                      *(float *)(this + 0xc) + (float)local_f8);
  (**(code **)(*(long *)param_1 + 0x10))
            (local_f8,uStack_f0,local_e8,param_1,(undefined4)Color::sWhite);
  iVar1 = *(int *)(this + 0xcc);
  if ((iVar1 == 1) || (*(int *)(this + 0xd0) == 1)) {
    fVar30 = (float)((ulong)uVar5 >> 0x20);
    fVar14 = (float)((ulong)uVar4 >> 0x20);
    fVar17 = *(float *)(this + 0xe4);
    fVar10 = (float)((ulong)uVar6 >> 0x20);
    fVar12 = (float)((ulong)uVar7 >> 0x20);
    fVar11 = (float)*(undefined8 *)(this + 0xe0);
    fVar16 = fVar33 * fVar15 + fVar30 * fVar10 + (fVar12 * fVar14 - fVar25 * fVar20);
    fVar18 = fVar30 * fVar15 + ((fVar14 * fVar20 + fVar12 * fVar25) - fVar33 * fVar10);
    fVar34 = (fVar25 * fVar10 + fVar30 * fVar20 + fVar12 * fVar33) - fVar14 * fVar15;
    fVar15 = ((fVar12 * fVar30 - fVar33 * fVar20) - fVar14 * fVar10) - fVar25 * fVar15;
    fVar12 = (fVar34 * 0.0 + fVar11 * fVar15 + *(float *)(this + 0xe8) * fVar16) - fVar17 * fVar18;
    fVar10 = fVar16 * 0.0 + (fVar17 * fVar15 - *(float *)(this + 0xe8) * fVar34) + fVar11 * fVar18;
    fVar20 = ((fVar15 * 0.0 - fVar11 * fVar34) - fVar17 * fVar16) - *(float *)(this + 0xe8) * fVar18
    ;
    fVar17 = ((*(float *)(this + 0xe8) * fVar15 + fVar17 * fVar34) - fVar11 * fVar16) + fVar18 * 0.0
    ;
    local_e8 = CONCAT44(fVar17 * (float)((uint)fVar34 ^ __LC45) +
                        fVar10 * (float)((uint)fVar15 ^ _UNK_00109c0c) +
                        ((float)((uint)fVar16 ^ _UNK_00109c04) * fVar20 -
                        fVar12 * (float)((uint)fVar18 ^ _UNK_00109c08)) + local_f8._4_4_,
                        ((fVar10 * (float)((uint)fVar18 ^ _UNK_00109c08) +
                         fVar12 * (float)((uint)fVar15 ^ _UNK_00109c0c) +
                         (float)((uint)fVar34 ^ __LC45) * fVar20) -
                        fVar17 * (float)((uint)fVar16 ^ _UNK_00109c04)) + (float)local_f8);
    JPH::DebugRenderer::DrawArrow(local_f8,uStack_f0,local_e8,param_1,(undefined4)Color::sRed);
    iVar1 = *(int *)(this + 0xcc);
  }
  if (iVar1 != 2) {
    if (*(int *)(this + 0xd0) != 2) {
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00104ea8;
    }
  }
  fVar17 = *(float *)(this + 0xf0);
  fVar15 = *(float *)(this + 0xfc);
  fVar20 = *(float *)(this + 0xf8);
  fVar11 = *(float *)(this + 0xf4);
  fVar12 = SQRT(fVar15 * fVar15 + fVar17 * fVar17);
  if (fVar12 == 0.0) {
    fVar30 = 0.0;
    fVar25 = fVar24;
    fVar10 = fVar28;
    fVar12 = fVar26;
    fVar33 = fVar21;
  }
  else {
    fVar10 = fVar20 * fVar17;
    fVar33 = fVar15 / fVar12;
    fVar30 = fVar17 / fVar12;
    fVar20 = (fVar20 * fVar15 + fVar17 * fVar11) / fVar12;
    fVar11 = (fVar11 * fVar15 - fVar10) / fVar12;
    fVar25 = fVar33 * fVar24;
    fVar10 = fVar28 * fVar33;
    fVar15 = fVar12;
    fVar12 = fVar26 * fVar33;
    fVar33 = fVar21 * fVar33;
    fVar17 = 0.0;
  }
  fVar14 = fVar12 + fVar22 + fVar24 * fVar30;
  fVar10 = (fVar21 * fVar30 + fVar10 + fVar19) - fVar35;
  fVar34 = fVar14 + fVar14;
  fVar25 = (fVar23 - fVar26 * fVar30) + fVar25;
  fVar35 = ((fVar33 - fVar30 * fVar28) - fVar19) - fVar35;
  fVar33 = fVar35 + fVar35;
  fVar30 = fVar33 * fVar10 + fVar34 * fVar25;
  fVar12 = *(float *)(this + 0xc);
  local_e8 = CONCAT44(((fVar33 * fVar35 + fVar34 * fVar14) - _LC0) * fVar12 + local_f8._4_4_,
                      (fVar10 * fVar34 - fVar25 * fVar33) * fVar12 + (float)local_f8);
  (**(code **)(*(long *)param_1 + 0x10))
            (local_f8,uStack_f0,local_e8,CONCAT44(fVar30 * fVar12 + fVar29,fVar30 * fVar12 + fVar27)
             ,param_1,(undefined4)Color::sYellow);
  fVar12 = (fVar21 * fVar17 + fVar28 * fVar15 + fVar26 * fVar20) - fVar24 * fVar11;
  fVar10 = (fVar21 * fVar11 - fVar28 * fVar20) + fVar26 * fVar15 + fVar24 * fVar17;
  fVar25 = fVar12 + fVar12;
  fVar33 = ((fVar21 * fVar15 - fVar28 * fVar17) - fVar26 * fVar11) - fVar24 * fVar20;
  fVar15 = ((fVar21 * fVar20 + fVar28 * fVar11) - fVar26 * fVar17) + fVar24 * fVar15;
  fVar21 = fVar33 + fVar33;
  fVar17 = *(float *)(this + 0xc);
  fVar20 = fVar25 * fVar15 - fVar21 * fVar10;
  local_f8 = CONCAT44((fVar25 * fVar10 + fVar21 * fVar15) * fVar17 + local_f8._4_4_,
                      ((fVar12 * fVar25 + fVar33 * fVar21) - _LC0) * fVar17 + (float)local_f8);
  uStack_f0 = CONCAT44(fVar20 * fVar17 + fVar29,fVar20 * fVar17 + fVar27);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))
              (uVar8,uVar9,local_f8,uStack_f0,param_1,(undefined4)Color::sCyan,extraout_RDX,
               *(code **)(*(long *)param_1 + 0x10));
    return;
  }
LAB_00104ea8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::SolvePositionConstraint(float, float) */

uint __thiscall
JPH::SwingTwistConstraint::SolvePositionConstraint
          (SwingTwistConstraint *this,float param_1,float param_2)

{
  Body *pBVar1;
  Body *pBVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  auVar15 = GetRotationInConstraintSpace(this);
  pBVar1 = *(Body **)(this + 0x30);
  pBVar2 = *(Body **)(this + 0x28);
  uVar3 = SwingTwistConstraintPart::SolvePositionConstraint
                    (auVar15._0_8_,auVar15._8_8_,*(undefined8 *)(this + 0x60),
                     *(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70),
                     *(undefined8 *)(this + 0x78),this + 0x220,pBVar2,pBVar1);
  fVar6 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar4 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar7 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar10 = fVar4 + fVar4;
  fVar11 = fVar9 + fVar9;
  fVar12 = fVar6 * (fVar6 + fVar6);
  fVar8 = fVar7 * (fVar6 + fVar6);
  local_78._0_4_ = (_LC0 - fVar9 * fVar11) - fVar12;
  local_78._4_4_ = fVar9 * fVar10 + fVar8;
  local_78._8_4_ = fVar6 * fVar10 - fVar11 * fVar7;
  local_78._12_4_ = 0;
  local_68 = CONCAT44((_LC0 - fVar12) - fVar4 * fVar10,fVar9 * fVar10 - fVar8);
  uStack_60 = (ulong)(uint)(fVar10 * fVar7 + fVar6 * fVar11);
  fVar8 = (float)*(undefined8 *)(pBVar2 + 0x18);
  local_58._4_4_ = fVar6 * fVar11 - fVar10 * fVar7;
  local_58._0_4_ = fVar6 * fVar10 + fVar11 * fVar7;
  fVar14 = fVar8 * (fVar8 + fVar8);
  fVar6 = (float)*(undefined8 *)(pBVar2 + 0x10);
  fVar7 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x10) >> 0x20);
  fVar12 = fVar6 + fVar6;
  fVar13 = fVar7 + fVar7;
  local_58._8_4_ = (_LC0 - fVar4 * fVar10) - fVar9 * fVar11;
  local_58._12_4_ = 0;
  fVar4 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x18) >> 0x20);
  local_48 = __LC42;
  uStack_40 = _UNK_00109b48;
  local_88 = __LC42;
  uStack_80 = _UNK_00109b48;
  fVar9 = (fVar8 + fVar8) * fVar4;
  local_b8._0_4_ = (_LC0 - fVar7 * fVar13) - fVar14;
  local_b8._4_4_ = fVar7 * fVar12 + fVar9;
  local_b8._8_4_ = fVar8 * fVar12 - fVar13 * fVar4;
  local_b8._12_4_ = 0;
  local_a8 = CONCAT44((_LC0 - fVar14) - fVar6 * fVar12,fVar7 * fVar12 - fVar9);
  uStack_a0 = (ulong)(uint)(fVar12 * fVar4 + fVar8 * fVar13);
  uStack_90 = (ulong)(uint)((_LC0 - fVar6 * fVar12) - fVar7 * fVar13);
  local_98 = CONCAT44(fVar8 * fVar13 - fVar12 * fVar4,fVar8 * fVar12 + fVar13 * fVar4);
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),(PointConstraintPart *)(this + 0x130),pBVar2,local_b8,
             pBVar1,local_78);
  uVar5 = PointConstraintPart::SolvePositionConstraint
                    ((PointConstraintPart *)(this + 0x130),pBVar2,pBVar1,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5 | uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SwingTwistConstraint::SetSwingMotorState(JPH::EMotorState) */

void __thiscall
JPH::SwingTwistConstraint::SetSwingMotorState(SwingTwistConstraint *this,int param_2)

{
  if (*(int *)(this + 0xcc) != param_2) {
    *(int *)(this + 0xcc) = param_2;
    *(undefined4 *)(this + 0x350) = 0;
    *(undefined4 *)(this + 0x35c) = 0;
    *(undefined4 *)(this + 0x380) = 0;
    *(undefined4 *)(this + 0x38c) = 0;
    *(undefined4 *)(this + 0x3b0) = 0;
    *(undefined4 *)(this + 0x3bc) = 0;
  }
  return;
}



/* JPH::SwingTwistConstraint::SetTwistMotorState(JPH::EMotorState) */

void __thiscall
JPH::SwingTwistConstraint::SetTwistMotorState(SwingTwistConstraint *this,int param_2)

{
  if (*(int *)(this + 0xd0) != param_2) {
    *(int *)(this + 0xd0) = param_2;
    *(undefined4 *)(this + 0x350) = 0;
    *(undefined4 *)(this + 0x35c) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraint::SetTargetOrientationCS(JPH::Quat) */

void JPH::SwingTwistConstraint::SetTargetOrientationCS
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  ulong local_38;
  long lStack_30;
  long local_20;
  
  fVar4 = (float)((ulong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
  if (fVar3 == 0.0) {
    fStack_40 = fVar6;
    local_48 = (undefined1  [8])param_1;
    fStack_3c = fVar4;
    local_38 = __LC42;
    lStack_30 = _UNK_00109b48;
  }
  else {
    local_38 = (ulong)(uint)(fVar2 / fVar3);
    lStack_30 = (ulong)(uint)(fVar4 / fVar3) << 0x20;
    auVar1._8_4_ = fVar3;
    auVar1._4_4_ = (fVar6 * fVar4 + fVar2 * fVar5) / fVar3;
    auVar1._0_4_ = (fVar5 * fVar4 - fVar2 * fVar6) / fVar3;
    auVar1._12_4_ = 0;
    _local_48 = auVar1 << 0x20;
  }
  SwingTwistConstraintPart::ClampSwingTwist
            ((SwingTwistConstraintPart *)(param_3 + 0x220),local_48,(Quat *)&local_38,&local_4c);
  if (local_4c == 0) {
    *(float *)(param_3 + 0xf0) = fVar2;
    *(float *)(param_3 + 0xf4) = fVar5;
    *(float *)(param_3 + 0xf8) = fVar6;
    *(float *)(param_3 + 0xfc) = fVar4;
  }
  else {
    fVar2 = (float)local_38;
    fVar3 = (float)(local_38 >> 0x20);
    fVar5 = (float)lStack_30;
    fVar6 = (float)((ulong)lStack_30 >> 0x20);
    *(float *)(param_3 + 0xf0) =
         ((float)local_48._0_4_ * fVar6 + fStack_3c * fVar2 + (float)local_48._4_4_ * fVar5) -
         fStack_40 * fVar3;
    *(float *)(param_3 + 0xf4) =
         (fStack_3c * fVar3 - (float)local_48._0_4_ * fVar5) + (float)local_48._4_4_ * fVar6 +
         fStack_40 * fVar2;
    *(float *)(param_3 + 0xf8) =
         (((float)local_48._0_4_ * fVar3 + fStack_3c * fVar5) - (float)local_48._4_4_ * fVar2) +
         fStack_40 * fVar6;
    *(float *)(param_3 + 0xfc) =
         ((fStack_3c * fVar6 - (float)local_48._0_4_ * fVar2) - (float)local_48._4_4_ * fVar3) -
         fStack_40 * fVar5;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::SwingTwistConstraint::GetSubType() const */

undefined8 JPH::SwingTwistConstraint::GetSubType(void)

{
  return 6;
}



/* JPH::SwingTwistConstraint::GetConstraintToBody1Matrix() const */

void JPH::SwingTwistConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long in_RSI;
  float fVar6;
  float fVar7;
  undefined1 (*in_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = _LC0;
  uVar2 = *(undefined8 *)(in_RSI + 0x68);
  fVar4 = (float)*(undefined8 *)(in_RSI + 0x60);
  fVar6 = (float)uVar2;
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x60) >> 0x20);
  fVar11 = fVar4 + fVar4;
  *(undefined8 *)in_RDI[3] = *(undefined8 *)(in_RSI + 0x40);
  fVar12 = fVar5 + fVar5;
  fVar7 = (float)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  *(float *)(in_RDI[3] + 0xc) = fVar3;
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar10 = (fVar6 + fVar6) * fVar7;
  auVar9._0_4_ = (fVar3 - fVar5 * fVar12) - fVar13;
  auVar9._4_4_ = fVar5 * fVar11 + fVar10;
  auVar9._8_4_ = fVar6 * fVar11 - fVar12 * fVar7;
  auVar9._12_4_ = 0;
  *in_RDI = auVar9;
  *(ulong *)in_RDI[1] = CONCAT44((fVar3 - fVar13) - fVar4 * fVar11,fVar5 * fVar11 - fVar10);
  *(ulong *)(in_RDI[1] + 8) = (ulong)(uint)(fVar11 * fVar7 + fVar6 * fVar12);
  auVar8._4_4_ = fVar6 * fVar12 - fVar11 * fVar7;
  auVar8._0_4_ = fVar6 * fVar11 + fVar12 * fVar7;
  auVar8._8_4_ = (fVar3 - fVar4 * fVar11) - fVar5 * fVar12;
  auVar8._12_4_ = 0;
  in_RDI[2] = auVar8;
  return;
}



/* JPH::SwingTwistConstraint::GetConstraintToBody2Matrix() const */

void JPH::SwingTwistConstraint::GetConstraintToBody2Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long in_RSI;
  float fVar6;
  float fVar7;
  undefined1 (*in_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = _LC0;
  uVar2 = *(undefined8 *)(in_RSI + 0x78);
  fVar4 = (float)*(undefined8 *)(in_RSI + 0x70);
  fVar6 = (float)uVar2;
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x70) >> 0x20);
  fVar11 = fVar4 + fVar4;
  *(undefined8 *)in_RDI[3] = *(undefined8 *)(in_RSI + 0x50);
  fVar12 = fVar5 + fVar5;
  fVar7 = (float)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  *(float *)(in_RDI[3] + 0xc) = fVar3;
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar10 = (fVar6 + fVar6) * fVar7;
  auVar9._0_4_ = (fVar3 - fVar5 * fVar12) - fVar13;
  auVar9._4_4_ = fVar5 * fVar11 + fVar10;
  auVar9._8_4_ = fVar6 * fVar11 - fVar12 * fVar7;
  auVar9._12_4_ = 0;
  *in_RDI = auVar9;
  *(ulong *)in_RDI[1] = CONCAT44((fVar3 - fVar13) - fVar4 * fVar11,fVar5 * fVar11 - fVar10);
  *(ulong *)(in_RDI[1] + 8) = (ulong)(uint)(fVar11 * fVar7 + fVar6 * fVar12);
  auVar8._4_4_ = fVar6 * fVar12 - fVar11 * fVar7;
  auVar8._0_4_ = fVar6 * fVar11 + fVar12 * fVar7;
  auVar8._8_4_ = (fVar3 - fVar4 * fVar11) - fVar5 * fVar12;
  auVar8._12_4_ = 0;
  in_RDI[2] = auVar8;
  return;
}



/* JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings() */

void __thiscall
JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings(SwingTwistConstraintSettings *this)

{
  return;
}



/* JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings() */

void __thiscall
JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings(SwingTwistConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00105744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::SwingTwistConstraint::~SwingTwistConstraint() */

void __thiscall JPH::SwingTwistConstraint::~SwingTwistConstraint(SwingTwistConstraint *this)

{
  return;
}



/* JPH::SwingTwistConstraint::~SwingTwistConstraint() */

void __thiscall JPH::SwingTwistConstraint::~SwingTwistConstraint(SwingTwistConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00105774. Too many branches */
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
  
  uVar6 = _UNK_00109b48;
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
  local_58 = (_LC0 - fVar8 * fVar26) - fVar27;
  register0x00001284 = fVar8 * fVar25 + fVar21;
  register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
  register0x0000128c = 0;
  local_48._4_4_ = (_LC0 - fVar27) - fVar7 * fVar25;
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
  local_38._8_4_ = (_LC0 - fVar7 * fVar25) - fVar8 * fVar26;
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
  *(undefined8 *)(param_1 + 0x30) = __LC42;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_00109b14;
  auVar5._0_4_ = __LC8;
  auVar5._8_4_ = _UNK_00109b18;
  auVar5._12_4_ = _UNK_00109b1c;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC8);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00109b14);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00109b18);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_00109b1c);
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
  if (auVar5._0_4_ <= _LC15) {
    return;
  }
  fVar11 = _LC16 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC17 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00109b54 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00109b58 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_00109b5c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC19 * fVar17 + _LC16);
  iVar14 = (int)(_LC19 * fVar18 + _LC16);
  iVar15 = (int)(_LC19 * fVar19 + _LC16);
  iVar16 = (int)(_LC19 * fVar20 + _LC16);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC16 * fVar4) + _LC0;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC0;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC16 * fVar24) + _LC0;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC17 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC17 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00109bf4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00109b54 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00109bf4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00109b54 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00109bf8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00109b58 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00109bf8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00109b58 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_00109bfc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_00109b5c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_00109bfc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_00109b5c ^
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
  if (auVar5._0_4_ <= _LC15) {
    return;
  }
  fVar11 = _LC41 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC17 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00109b54 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00109b58 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_00109b5c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC19 * fVar17 + _LC16);
  iVar14 = (int)(_LC19 * fVar18 + _LC16);
  iVar15 = (int)(_LC19 * fVar19 + _LC16);
  iVar16 = (int)(_LC19 * fVar20 + _LC16);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC16 * fVar4) + _LC0;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC16 * fVar22) + _LC0;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC16 * fVar24) + _LC0;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC17 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC17 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00109bf4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00109b54 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00109bf4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00109b54 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00109bf8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00109b58 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00109bf8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00109b58 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_00109bfc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_00109b5c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_00109bfc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_00109b5c ^
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
    uVar20 = _UNK_00109b48;
    uVar18 = __LC42;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC47);
    fVar24 = (float)((uint)fVar15 ^ _LC47);
    fVar26 = (float)((uint)fVar13 ^ _LC47);
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
    uVar7 = _UNK_00109b48;
    *(undefined8 *)(param_1 + 0x14) = __LC42;
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
    uVar18 = __LC42;
    uVar20 = _UNK_00109b48;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC47);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC47);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC47);
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
      auVar16._4_4_ = _UNK_00109b24;
      auVar16._0_4_ = __LC12;
      auVar16._8_4_ = _UNK_00109b28;
      auVar16._12_4_ = _UNK_00109b2c;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_00109b24;
      bVar7 = auVar30._8_4_ == _UNK_00109b28;
      bVar8 = auVar30._12_4_ == _UNK_00109b2c;
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
      auVar15._4_4_ = _UNK_00109b24;
      auVar15._0_4_ = __LC12;
      auVar15._8_4_ = _UNK_00109b28;
      auVar15._12_4_ = _UNK_00109b2c;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_00109b24;
      bVar7 = auVar31._8_4_ == _UNK_00109b28;
      bVar8 = auVar31._12_4_ == _UNK_00109b2c;
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
    fVar23 = (float)((uint)param_3 ^ _LC47);
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
      auVar19._4_4_ = _UNK_00109b24;
      auVar19._0_4_ = __LC12;
      auVar19._8_4_ = _UNK_00109b28;
      auVar19._12_4_ = _UNK_00109b2c;
      auVar24 = auVar24 & auVar19;
      bVar5 = auVar24._4_4_ == _UNK_00109b24;
      bVar6 = auVar24._8_4_ == _UNK_00109b28;
      bVar7 = auVar24._12_4_ == _UNK_00109b2c;
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
      auVar18._4_4_ = _UNK_00109b24;
      auVar18._0_4_ = __LC12;
      auVar18._8_4_ = _UNK_00109b28;
      auVar18._12_4_ = _UNK_00109b2c;
      auVar26 = auVar26 & auVar18;
      bVar5 = auVar26._4_4_ == _UNK_00109b24;
      bVar6 = auVar26._8_4_ == _UNK_00109b28;
      bVar7 = auVar26._12_4_ == _UNK_00109b2c;
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
    auVar6._4_4_ = _UNK_00109b14;
    auVar6._0_4_ = __LC8;
    auVar6._8_4_ = _UNK_00109b18;
    auVar6._12_4_ = _UNK_00109b1c;
    auVar24 = auVar24 & auVar6;
    uVar23 = -(uint)(auVar24._0_4_ == __LC8);
    uVar26 = -(uint)(auVar24._4_4_ == _UNK_00109b14);
    uVar27 = -(uint)(auVar24._8_4_ == _UNK_00109b18);
    bVar4 = auVar24._12_4_ == _UNK_00109b1c;
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
    fVar11 = (_LC0 - fVar20 * fVar21) - fVar19;
    fVar15 = fVar33 * fVar21 + fVar18 * fVar7;
    fVar12 = fVar33 * fVar21 - fVar18 * fVar7;
    fVar19 = (_LC0 - fVar19) - fVar22 * fVar18;
    fVar28 = fVar20 * fVar18 - fVar8;
    fVar8 = fVar8 + fVar20 * fVar18;
    fVar22 = (_LC0 - fVar22 * fVar18) - fVar20 * fVar21;
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
    auVar5._4_4_ = _UNK_00109b14;
    auVar5._0_4_ = __LC8;
    auVar5._8_4_ = _UNK_00109b18;
    auVar5._12_4_ = _UNK_00109b1c;
    auVar25 = auVar25 & auVar5;
    uVar23 = -(uint)(auVar25._0_4_ == __LC8);
    uVar26 = -(uint)(auVar25._4_4_ == _UNK_00109b14);
    uVar27 = -(uint)(auVar25._8_4_ == _UNK_00109b18);
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
    fVar29 = (_LC0 - fVar16 * fVar28) - fVar14 * fVar30;
    fVar15 = (_LC0 - fVar14 * fVar30) - fVar33;
    fVar32 = (_LC0 - fVar33) - fVar16 * fVar28;
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
             -(uint)(auVar25._12_4_ == _UNK_00109b1c);
  }
  *(float *)param_1[1] = fVar9;
  *(float *)(param_1[1] + 4) = fVar10;
  *(float *)(param_1[1] + 8) = fVar13;
  *(uint *)(param_1[1] + 0xc) = uVar23;
  fVar15 = _LC0;
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
  fVar11 = (float)(__LC45 ^ *(uint *)(param_2 + 0x10));
  fVar14 = (float)(_UNK_00109c04 ^ *(uint *)(param_2 + 0x14));
  fVar15 = (float)(_UNK_00109c08 ^ *(uint *)(param_2 + 0x18));
  fVar17 = (float)(_UNK_00109c0c ^ *(uint *)(param_2 + 0x1c));
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
                 (uint)fVar16 & _LC47);
  fVar9 = (float)((uint)((fVar14 * fVar7 - fVar21 * fVar15) + fVar20 * fVar17 + fVar19 * fVar11) ^
                 (uint)fVar16 & _LC47);
  fVar7 = (float)((uint)(((fVar15 * fVar7 + fVar21 * fVar14) - fVar20 * fVar11) + fVar19 * fVar17) ^
                 (uint)fVar16 & _LC47);
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & _LC47);
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._0_4_ = -(uint)(fVar8 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar16 + fVar16 == 0.0);
  uVar3 = movmskps(fVar13,auVar12);
  if ((~uVar3 & 7) != 0) {
    fVar16 = (float)(param_3 ^ _LC47);
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
/* JPH::SwingTwistConstraintPart::SetLimits(float, float, float, float, float, float) */

void __thiscall
JPH::SwingTwistConstraintPart::SetLimits
          (SwingTwistConstraintPart *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  float fVar1;
  undefined8 uVar2;
  SwingTwistConstraintPart SVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = __LC53;
  fVar17 = param_3 * _LC16;
  fVar18 = param_4 * _LC16;
  fVar19 = param_5 * _LC16;
  fVar20 = param_6 * _LC16;
  fVar21 = (float)(__LC17 & (uint)fVar17 ^ (uint)fVar17);
  fVar23 = (float)(_UNK_00109b54 & (uint)fVar18 ^ (uint)fVar18);
  fVar25 = (float)(_UNK_00109b58 & (uint)fVar19 ^ (uint)fVar19);
  fVar27 = (float)(_UNK_00109b5c & (uint)fVar20 ^ (uint)fVar20);
  iVar5 = (int)(fVar21 * _LC19 + _LC16);
  iVar6 = (int)(fVar23 * _LC19 + _LC16);
  iVar7 = (int)(fVar25 * _LC19 + _LC16);
  iVar9 = (int)(fVar27 * _LC19 + _LC16);
  fVar11 = (float)iVar5;
  fVar12 = (float)iVar6;
  fVar13 = (float)iVar7;
  fVar14 = (float)iVar9;
  fVar11 = ((fVar21 - fVar11 * _LC22) - _LC24 * fVar11) - fVar11 * _LC26;
  fVar12 = ((fVar23 - fVar12 * _LC22) - _UNK_00109b64 * fVar12) - fVar12 * _UNK_00109b74;
  fVar13 = ((fVar25 - fVar13 * _LC22) - _UNK_00109b68 * fVar13) - fVar13 * _UNK_00109b78;
  fVar14 = ((fVar27 - fVar14 * _LC22) - _UNK_00109b6c * fVar14) - fVar14 * _UNK_00109b7c;
  fVar29 = fVar11 * fVar11;
  fVar30 = fVar12 * fVar12;
  fVar31 = fVar13 * fVar13;
  fVar32 = fVar14 * fVar14;
  fVar21 = (((_LC28 * fVar29 + _LC30) * fVar29 + _LC32) * fVar29 * fVar29 - fVar29 * _LC16) +
           (float)_LC50;
  fVar23 = (((_UNK_00109b84 * fVar30 + _UNK_00109b94) * fVar30 + _UNK_00109ba4) * fVar30 * fVar30 -
           fVar30 * _LC16) + _LC50._4_4_;
  fVar25 = (((_UNK_00109b88 * fVar31 + _UNK_00109b98) * fVar31 + _UNK_00109ba8) * fVar31 * fVar31 -
           fVar31 * _LC16) + _UNK_00109bb8;
  fVar27 = (((_UNK_00109b8c * fVar32 + _UNK_00109b9c) * fVar32 + _UNK_00109bac) * fVar32 * fVar32 -
           fVar32 * _LC16) + _UNK_00109bbc;
  fVar11 = ((_LC35 * fVar29 + _LC37) * fVar29 + _LC39) * fVar29 * fVar11 + fVar11;
  fVar12 = ((_UNK_00109bc4 * fVar30 + _UNK_00109bd4) * fVar30 + _UNK_00109be4) * fVar30 * fVar12 +
           fVar12;
  fVar13 = ((_UNK_00109bc8 * fVar31 + _UNK_00109bd8) * fVar31 + _UNK_00109be8) * fVar31 * fVar13 +
           fVar13;
  fVar14 = ((_UNK_00109bcc * fVar32 + _UNK_00109bdc) * fVar32 + _UNK_00109bec) * fVar32 * fVar14 +
           fVar14;
  uVar22 = (iVar5 << 0x1f) >> 0x1f;
  uVar24 = (iVar6 << 0x1f) >> 0x1f;
  uVar26 = (iVar7 << 0x1f) >> 0x1f;
  uVar28 = (iVar9 << 0x1f) >> 0x1f;
  uVar4 = CONCAT44(iVar6 << 0x1e & _UNK_00109b54 ^ iVar6 << 0x1f ^
                   ((uint)fVar12 & uVar24 | ~uVar24 & (uint)fVar23),
                   iVar5 << 0x1e & __LC17 ^ iVar5 << 0x1f ^
                   ((uint)fVar11 & uVar22 | ~uVar22 & (uint)fVar21));
  uVar8 = iVar7 << 0x1e & _UNK_00109b58 ^ iVar7 << 0x1f ^
          ((uint)fVar13 & uVar26 | ~uVar26 & (uint)fVar25);
  uVar10 = iVar9 << 0x1e & _UNK_00109b5c ^ iVar9 << 0x1f ^
           ((uint)fVar14 & uVar28 | ~uVar28 & (uint)fVar27);
  uVar2 = CONCAT44((iVar6 << 0x1e ^ (uint)fVar18) & _UNK_00109b54 ^
                   (~uVar24 & (uint)fVar12 | (uint)fVar23 & uVar24),
                   (iVar5 << 0x1e ^ (uint)fVar17) & __LC17 ^
                   (~uVar22 & (uint)fVar11 | (uint)fVar21 & uVar22));
  uVar24 = (iVar7 << 0x1e ^ (uint)fVar19) & _UNK_00109b58 ^
           (~uVar26 & (uint)fVar13 | (uint)fVar25 & uVar26);
  uVar22 = (iVar9 << 0x1e ^ (uint)fVar20) & _UNK_00109b5c ^
           (~uVar28 & (uint)fVar14 | (uint)fVar27 & uVar28);
  if (param_1 <= __LC53) {
    if ((param_1 < _LC55) && (__LC56 < param_2)) {
      uVar15 = CONCAT44(_LC51._4_4_,(uint)_LC51);
      SVar3 = (SwingTwistConstraintPart)0x8;
      uVar16 = _UNK_00109c28;
      goto LAB_001077fc;
    }
  }
  else if (param_2 < _LC54) {
    SVar3 = (SwingTwistConstraintPart)0x1;
    uVar15 = __LC48;
    uVar16 = _UNK_00109c18;
    goto LAB_001077fc;
  }
  SVar3 = (SwingTwistConstraintPart)0x0;
  fVar21 = param_1 * _LC16;
  fVar23 = param_2 * _LC16;
  fVar11 = (float)(__LC17 & (uint)fVar21 ^ (uint)fVar21);
  fVar12 = (float)(_UNK_00109b54 & (uint)fVar23 ^ (uint)fVar23);
  iVar5 = (int)(_LC19 * fVar11 + _LC16);
  iVar6 = (int)(_LC19 * fVar12 + _LC16);
  fVar13 = (float)iVar5;
  fVar14 = (float)iVar6;
  fVar11 = ((fVar11 - _LC22 * fVar13) - _LC24 * fVar13) - fVar13 * _LC26;
  fVar12 = ((fVar12 - _LC22 * fVar14) - _UNK_00109b64 * fVar14) - fVar14 * _UNK_00109b74;
  fVar25 = fVar11 * fVar11;
  fVar27 = fVar12 * fVar12;
  fVar13 = (((_LC28 * fVar25 + _LC30) * fVar25 + _LC32) * fVar25 * fVar25 - _LC16 * fVar25) +
           (float)_LC50;
  fVar14 = (((_UNK_00109b84 * fVar27 + _UNK_00109b94) * fVar27 + _UNK_00109ba4) * fVar27 * fVar27 -
           _LC16 * fVar27) + _LC50._4_4_;
  fVar11 = fVar11 + ((_LC35 * fVar25 + _LC37) * fVar25 + _LC39) * fVar25 * fVar11;
  fVar12 = fVar12 + ((_UNK_00109bc4 * fVar27 + _UNK_00109bd4) * fVar27 + _UNK_00109be4) * fVar27 *
                    fVar12;
  uVar26 = (iVar5 << 0x1f) >> 0x1f;
  uVar28 = (iVar6 << 0x1f) >> 0x1f;
  uVar15 = CONCAT44(((uint)fVar14 & uVar28 | ~uVar28 & (uint)fVar12) ^
                    ((uint)fVar23 ^ iVar6 << 0x1e) & _UNK_00109b54,
                    ((uint)fVar13 & uVar26 | ~uVar26 & (uint)fVar11) ^
                    ((uint)fVar21 ^ iVar5 << 0x1e) & __LC17);
  uVar16 = CONCAT44(((uint)fVar12 & uVar28 | ~uVar28 & (uint)fVar14) ^
                    _UNK_00109b54 & iVar6 << 0x1e ^ iVar6 << 0x1f,
                    ((uint)fVar11 & uVar26 | ~uVar26 & (uint)fVar13) ^
                    __LC17 & iVar5 << 0x1e ^ iVar5 << 0x1f);
LAB_001077fc:
  *this = SVar3;
  *(float *)(this + 0x14) = fVar17;
  *(float *)(this + 0x18) = fVar18;
  *(float *)(this + 0x1c) = fVar19;
  *(float *)(this + 0x20) = fVar20;
  *(undefined8 *)(this + 4) = uVar15;
  *(undefined8 *)(this + 0xc) = uVar16;
  if (param_3 <= fVar1) {
    if ((param_3 < _LC55) && (__LC56 < param_4)) {
      *this = (SwingTwistConstraintPart)((byte)*this | 0x10);
      uVar2 = CONCAT44(_LC51._4_4_,(uint)_LC51);
      uVar4 = 0;
    }
  }
  else if (param_4 < _LC54) {
    *this = (SwingTwistConstraintPart)((byte)*this | 2);
    uVar4 = CONCAT44(_LC50._4_4_,(float)_LC50);
    uVar2 = 0;
  }
  fVar1 = __LC53;
  *(undefined8 *)(this + 0x24) = uVar2;
  *(undefined8 *)(this + 0x34) = uVar4;
  uVar26 = _LC0;
  if (param_5 <= fVar1) {
    if ((param_5 < _LC55) && (__LC56 < param_6)) {
      uVar8 = 0;
      *this = (SwingTwistConstraintPart)((byte)*this | 0x20);
      uVar10 = 0;
      uVar22 = _LC0;
      uVar24 = (uint)_LC51;
    }
  }
  else if (param_6 < _LC54) {
    *this = (SwingTwistConstraintPart)((byte)*this | 4);
    uVar22 = 0;
    uVar10 = uVar26;
    uVar8 = uVar26;
    uVar24 = 0;
  }
  *(uint *)(this + 0x2c) = uVar24;
  *(uint *)(this + 0x30) = uVar22;
  *(uint *)(this + 0x3c) = uVar8;
  *(uint *)(this + 0x40) = uVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::ClampSwingTwist(JPH::Quat&, JPH::Quat&, unsigned int&) const */

void __thiscall
JPH::SwingTwistConstraintPart::ClampSwingTwist
          (SwingTwistConstraintPart *this,Quat *param_1,Quat *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  SwingTwistConstraintPart SVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar31;
  float fVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar34;
  undefined1 auVar33 [16];
  int iVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  float fVar60;
  undefined1 extraout_var [12];
  
  fVar1 = *(float *)(param_1 + 0xc);
  *param_3 = 0;
  if (fVar1 < 0.0) {
    *(float *)param_1 = 0.0 - *(float *)param_1;
    *(float *)(param_1 + 4) = 0.0 - *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = 0.0 - *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = 0.0 - *(float *)(param_1 + 0xc);
  }
  fVar2 = *(float *)(param_2 + 0xc);
  if (fVar2 < 0.0) {
    *(float *)param_2 = 0.0 - *(float *)param_2;
    *(float *)(param_2 + 4) = 0.0 - *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) = 0.0 - *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) = 0.0 - *(float *)(param_2 + 0xc);
  }
  uVar14 = _UNK_00109b48;
  uVar13 = __LC42;
  SVar4 = *this;
  if (((byte)SVar4 & 1) == 0) {
    if (((byte)SVar4 & 8) == 0) {
      fVar31 = *(float *)(this + 4) - *(float *)param_2;
      fVar18 = *(float *)param_2 - *(float *)(this + 8);
      if ((0.0 < fVar31) || (0.0 < fVar18)) {
        fVar31 = (float)((uint)fVar31 & _LC57);
        if (_LC0 < fVar31) {
          fVar31 = _LC5 - fVar31;
        }
        fVar18 = (float)((uint)fVar18 & _LC57);
        if (_LC0 < fVar18) {
          fVar18 = _LC5 - fVar18;
        }
        if (fVar31 < fVar18) {
          uVar15 = *(uint *)(this + 0xc);
          *(ulong *)param_2 = (ulong)(uint)*(float *)(this + 4);
          *(ulong *)(param_2 + 8) = (ulong)uVar15 << 0x20;
          *param_3 = 1;
          uVar13 = __LC42;
          uVar14 = _UNK_00109b48;
        }
        else {
          uVar15 = *(uint *)(this + 0x10);
          *(ulong *)param_2 = (ulong)(uint)*(float *)(this + 8);
          *(ulong *)(param_2 + 8) = (ulong)uVar15 << 0x20;
          *param_3 = 2;
          uVar13 = __LC42;
          uVar14 = _UNK_00109b48;
        }
      }
    }
  }
  else {
    uVar15 = 0;
    if (*(float *)param_2 != 0.0) {
      uVar15 = 3;
    }
    *param_3 = uVar15;
    *(undefined8 *)param_2 = uVar13;
    *(undefined8 *)(param_2 + 8) = uVar14;
    uVar13 = __LC42;
    uVar14 = _UNK_00109b48;
  }
  __LC42 = uVar13;
  _UNK_00109b48 = uVar14;
  if (((byte)SVar4 & 2) == 0) {
    if (((byte)SVar4 & 4) == 0) {
      if (this[1] == (SwingTwistConstraintPart)0x0) {
        fVar18 = *(float *)(param_1 + 8);
        fVar31 = *(float *)(param_1 + 4);
        fVar32 = *(float *)(this + 0x30);
        fVar17 = *(float *)(this + 0x28);
        if (_LC0 < (fVar31 / fVar17) * (fVar31 / fVar17) + (fVar18 / fVar32) * (fVar18 / fVar32)) {
          fVar44 = fVar17 * fVar17;
          fVar45 = fVar32 * fVar32;
          fVar36 = fVar44 + 0.0;
          fVar25 = fVar45 + 0.0;
          fVar26 = (fVar17 * fVar31) / fVar36;
          fVar40 = (fVar32 * fVar18) / fVar25;
          fVar26 = (fVar26 * fVar26 + fVar40 * fVar40) - _LC0;
          if (_LC15 <= (float)((uint)fVar26 & _LC57)) {
            fVar40 = 0.0;
            do {
              fVar40 = fVar40 - fVar26 / (((fVar18 * fVar18 * fVar45) / (fVar25 * fVar25 * fVar25) +
                                          (fVar31 * fVar31 * fVar44) / (fVar36 * fVar36 * fVar36)) *
                                         _LC59);
              fVar36 = fVar44 + fVar40;
              fVar25 = fVar45 + fVar40;
              fVar26 = (fVar17 * fVar31) / fVar36;
              fVar60 = (fVar32 * fVar18) / fVar25;
              fVar26 = (fVar26 * fVar26 + fVar60 * fVar60) - _LC0;
            } while (_LC15 <= (float)((uint)fVar26 & _LC57));
          }
          fVar36 = (fVar31 * fVar44) / fVar36;
          fVar25 = (fVar18 * fVar45) / fVar25;
          fVar18 = (_LC0 - fVar36 * fVar36) - fVar25 * fVar25;
          if (0.0 < fVar18) {
            fVar18 = SQRT(fVar18);
          }
          else {
            fVar18 = 0.0;
          }
          auVar7._8_4_ = fVar18;
          auVar7._4_4_ = fVar25;
          auVar7._0_4_ = fVar36;
          auVar7._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar7 << 0x20;
          *param_3 = *param_3 | 0x3c;
        }
      }
      else {
        uVar15 = *(uint *)(param_1 + 4);
        uVar37 = *(uint *)(param_1 + 8);
        uVar38 = *(uint *)(param_1 + 0xc);
        auVar41._4_4_ = uVar38;
        auVar41._0_4_ = uVar38;
        auVar41._8_4_ = uVar38;
        auVar41._12_4_ = uVar38;
        auVar43 = __LC17 & auVar41;
        auVar42._4_4_ = uVar15;
        auVar42._0_4_ = uVar15;
        auVar42._8_4_ = uVar37;
        auVar42._12_4_ = uVar37;
        fVar26 = (float)(uVar38 ^ auVar43._0_4_);
        fVar25 = (float)(uVar38 ^ auVar43._4_4_);
        fVar36 = (float)(uVar38 ^ auVar43._8_4_);
        fVar40 = (float)(uVar38 ^ auVar43._12_4_);
        auVar27 = __LC17 & auVar42;
        auVar54._4_4_ = (float)_LC51;
        auVar54._0_4_ = (float)_LC51;
        auVar54._8_4_ = (float)_LC51;
        auVar54._12_4_ = (float)_LC51;
        fVar18 = (float)(auVar27._0_4_ ^ uVar15);
        fVar31 = (float)(auVar27._4_4_ ^ uVar15);
        fVar32 = (float)(auVar27._8_4_ ^ uVar37);
        fVar17 = (float)(auVar27._12_4_ ^ uVar37);
        auVar42 = (auVar41 ^ auVar42) & __LC17;
        uVar15 = (int)-(uint)(fVar26 < fVar18) >> 0x1f;
        uVar37 = (int)-(uint)(fVar25 < fVar31) >> 0x1f;
        uVar38 = (int)-(uint)(fVar36 < fVar32) >> 0x1f;
        uVar39 = (int)-(uint)(fVar40 < fVar17) >> 0x1f;
        auVar20._0_4_ = (uint)fVar26 & uVar15;
        auVar20._4_4_ = (uint)fVar25 & uVar37;
        auVar20._8_4_ = (uint)fVar36 & uVar38;
        auVar20._12_4_ = (uint)fVar40 & uVar39;
        auVar28._0_4_ = (uint)fVar18 & uVar15;
        auVar28._4_4_ = (uint)fVar31 & uVar37;
        auVar28._8_4_ = (uint)fVar32 & uVar38;
        auVar28._12_4_ = (uint)fVar17 & uVar39;
        auVar27._4_4_ = ~uVar37 & (uint)fVar31;
        auVar27._0_4_ = ~uVar15 & (uint)fVar18;
        auVar27._8_4_ = ~uVar38 & (uint)fVar32;
        auVar27._12_4_ = ~uVar39 & (uint)fVar17;
        auVar55._4_4_ = ~uVar37 & (uint)fVar25;
        auVar55._0_4_ = ~uVar15 & (uint)fVar26;
        auVar55._8_4_ = ~uVar38 & (uint)fVar36;
        auVar55._12_4_ = ~uVar39 & (uint)fVar40;
        auVar27 = divps(auVar20 | auVar27,auVar28 | auVar55);
        uVar46 = _LC47 & auVar27._0_4_;
        uVar47 = _LC47 & auVar27._4_4_;
        uVar48 = _LC47 & auVar27._8_4_;
        uVar49 = _LC47 & auVar27._12_4_;
        auVar21._0_4_ = (float)(auVar27._0_4_ ^ uVar46);
        auVar21._4_4_ = (float)(auVar27._4_4_ ^ uVar47);
        auVar21._8_4_ = (float)(auVar27._8_4_ ^ uVar48);
        auVar21._12_4_ = (float)(auVar27._12_4_ ^ uVar49);
        auVar29._0_4_ = auVar21._0_4_ + (float)_LC51;
        auVar29._4_4_ = auVar21._4_4_ + (float)_LC51;
        auVar29._8_4_ = auVar21._8_4_ + (float)_LC51;
        auVar29._12_4_ = auVar21._12_4_ + (float)_LC51;
        auVar55 = divps(auVar54,auVar21);
        uVar56 = (int)-(uint)(_LC61 < auVar21._0_4_) >> 0x1f;
        uVar57 = (int)-(uint)(_LC61 < auVar21._4_4_) >> 0x1f;
        uVar58 = (int)-(uint)(_LC61 < auVar21._8_4_) >> 0x1f;
        uVar59 = (int)-(uint)(_LC61 < auVar21._12_4_) >> 0x1f;
        uVar50 = (int)-(uint)(_LC63 < auVar21._0_4_) >> 0x1f;
        uVar51 = (int)-(uint)(_LC63 < auVar21._4_4_) >> 0x1f;
        uVar52 = (int)-(uint)(_LC63 < auVar21._8_4_) >> 0x1f;
        uVar53 = (int)-(uint)(_LC63 < auVar21._12_4_) >> 0x1f;
        auVar5._4_4_ = auVar21._4_4_ + _LC0;
        auVar5._0_4_ = auVar21._0_4_ + _LC0;
        auVar5._8_4_ = auVar21._8_4_ + _LC0;
        auVar5._12_4_ = auVar21._12_4_ + _LC0;
        auVar27 = divps(auVar29,auVar5);
        fVar18 = (float)(auVar55._0_4_ & uVar50 |
                        ~uVar50 & (auVar27._0_4_ & uVar56 | ~uVar56 & (uint)auVar21._0_4_));
        fVar31 = (float)(auVar55._4_4_ & uVar51 |
                        ~uVar51 & (auVar27._4_4_ & uVar57 | ~uVar57 & (uint)auVar21._4_4_));
        fVar32 = (float)(auVar55._8_4_ & uVar52 |
                        ~uVar52 & (auVar27._8_4_ & uVar58 | ~uVar58 & (uint)auVar21._8_4_));
        fVar17 = (float)(auVar55._12_4_ & uVar53 |
                        ~uVar53 & (auVar27._12_4_ & uVar59 | ~uVar59 & (uint)auVar21._12_4_));
        fVar26 = fVar18 * fVar18;
        fVar25 = fVar31 * fVar31;
        fVar36 = fVar32 * fVar32;
        fVar40 = fVar17 * fVar17;
        fVar18 = (float)((uint)((((_LC70 * fVar26 + _LC72) * fVar26 + _LC74) * fVar26 + _LC76) *
                                fVar26 * fVar18 + fVar18 +
                               (float)(uVar50 & (uint)_LC68 | ~uVar50 & uVar56 & _LC66)) ^ uVar46);
        fVar31 = (float)((uint)((((_LC70 * fVar25 + _LC72) * fVar25 + _LC74) * fVar25 + _LC76) *
                                fVar25 * fVar31 + fVar31 +
                               (float)(uVar51 & (uint)_LC68 | ~uVar51 & uVar57 & _LC66)) ^ uVar47);
        fVar32 = (float)((uint)((((_LC70 * fVar36 + _LC72) * fVar36 + _LC74) * fVar36 + _LC76) *
                                fVar36 * fVar32 + fVar32 +
                               (float)(uVar52 & (uint)_LC68 | ~uVar52 & uVar58 & _LC66)) ^ uVar48);
        fVar17 = (float)((uint)((((_LC70 * fVar40 + _LC72) * fVar40 + _LC74) * fVar40 + _LC76) *
                                fVar40 * fVar17 + fVar17 +
                               (float)(uVar53 & (uint)_LC68 | ~uVar53 & uVar59 & _LC66)) ^ uVar49);
        auVar33._4_4_ = *(undefined4 *)(this + 0x14);
        auVar33._0_4_ = *(undefined4 *)(this + 0x14);
        auVar33._8_4_ = *(undefined4 *)(this + 0x1c);
        auVar33._12_4_ = *(undefined4 *)(this + 0x1c);
        auVar22._4_4_ = *(undefined4 *)(this + 0x18);
        auVar22._0_4_ = *(undefined4 *)(this + 0x18);
        auVar22._8_4_ = *(undefined4 *)(this + 0x20);
        auVar22._12_4_ = *(undefined4 *)(this + 0x20);
        fVar18 = (float)(auVar42._0_4_ ^
                        (uint)((float)((uint)(_LC68 - fVar18) & uVar15 | ~uVar15 & (uint)fVar18) -
                              (float)((int)auVar43._0_4_ >> 0x1f & _LC78)));
        fVar31 = (float)(auVar42._4_4_ ^
                        (uint)((float)((uint)(_LC68 - fVar31) & uVar37 | ~uVar37 & (uint)fVar31) -
                              (float)((int)auVar43._4_4_ >> 0x1f & _LC78)));
        auVar30._4_4_ = fVar31;
        auVar30._0_4_ = fVar18;
        fVar32 = (float)(auVar42._8_4_ ^
                        (uint)((float)((uint)(_LC68 - fVar32) & uVar38 | ~uVar38 & (uint)fVar32) -
                              (float)((int)auVar43._8_4_ >> 0x1f & _LC78)));
        fVar17 = (float)(auVar42._12_4_ ^
                        (uint)((float)((uint)(_LC68 - fVar17) & uVar39 | ~uVar39 & (uint)fVar17) -
                              (float)((int)auVar43._12_4_ >> 0x1f & _LC78)));
        auVar30._8_4_ = fVar32;
        auVar30._12_4_ = fVar17;
        auVar27 = maxps(auVar30,auVar33);
        auVar27 = minps(auVar27,auVar22);
        auVar43._4_4_ = -(uint)(fVar31 == auVar27._4_4_);
        auVar43._0_4_ = -(uint)(fVar18 == auVar27._0_4_);
        auVar43._8_4_ = -(uint)(fVar32 == auVar27._8_4_);
        auVar43._12_4_ = -(uint)(fVar17 == auVar27._12_4_);
        iVar16 = movmskps((byte)SVar4 & 2,auVar43);
        if (iVar16 != 0xf) {
          auVar55 = __LC17 & auVar27;
          fVar32 = (float)(auVar55._4_4_ ^ (uint)auVar27._4_4_);
          fVar17 = (float)(auVar55._8_4_ ^ (uint)auVar27._8_4_);
          iVar16 = (int)(_LC19 * fVar32 + _LC16);
          iVar34 = (int)(_LC19 * fVar17 + _LC16);
          iVar35 = (int)(_LC19 * (float)(auVar55._12_4_ ^ (uint)auVar27._12_4_) + _LC16);
          fVar18 = (float)iVar16;
          fVar31 = (float)iVar34;
          fVar32 = ((fVar32 - _LC22 * fVar18) - _LC24 * fVar18) - fVar18 * _LC26;
          fVar17 = ((fVar17 - _LC22 * fVar31) - _LC24 * fVar31) - fVar31 * _LC26;
          fVar26 = fVar32 * fVar32;
          fVar25 = fVar17 * fVar17;
          fVar31 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC16 * fVar26)
                   + _LC0;
          fVar18 = (((_LC28 * fVar25 + _LC30) * fVar25 + _LC32) * fVar25 * fVar25 - _LC16 * fVar25)
                   + _LC0;
          auVar11._4_4_ = iVar34 << 0x1f;
          auVar11._0_4_ = iVar16 << 0x1f;
          auVar11._8_4_ = iVar35 << 0x1f;
          auVar11._12_4_ = 0;
          auVar12._4_4_ = iVar34 << 0x1e;
          auVar12._0_4_ = iVar16 << 0x1e;
          auVar12._8_4_ = iVar35 << 0x1e;
          auVar12._12_4_ = 0;
          fVar32 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar32 + fVar32;
          fVar17 = ((_LC35 * fVar25 + _LC37) * fVar25 + _LC39) * fVar25 * fVar17 + fVar17;
          uVar15 = (iVar16 << 0x1f) >> 0x1f;
          uVar37 = (iVar34 << 0x1f) >> 0x1f;
          auVar27 = (auVar27 ^ auVar12 << 0x20) & __LC17;
          auVar55 = __LC17 & auVar12 << 0x20 ^ auVar11 << 0x20;
          fVar25 = (float)(auVar55._4_4_ ^ ((uint)fVar32 & uVar15 | ~uVar15 & (uint)fVar31));
          fVar26 = (float)(auVar55._8_4_ ^ ((uint)fVar17 & uVar37 | ~uVar37 & (uint)fVar18));
          fVar18 = (float)(((uint)fVar18 & uVar37 | ~uVar37 & (uint)fVar17) ^ auVar27._8_4_) *
                   fVar25;
          fVar31 = (float)(((uint)fVar31 & uVar15 | ~uVar15 & (uint)fVar32) ^ auVar27._4_4_) *
                   fVar26;
          fVar26 = fVar26 * fVar25;
          auVar10._8_4_ = fVar26;
          auVar10._4_4_ = fVar18;
          auVar10._0_4_ = fVar31;
          auVar10._12_4_ = 0;
          auVar23._0_4_ = SQRT(fVar18 * fVar18 + fVar26 * fVar26 + fVar31 * fVar31 + 0.0);
          auVar23._4_4_ = auVar23._0_4_;
          auVar23._8_4_ = auVar23._0_4_;
          auVar23._12_4_ = auVar23._0_4_;
          auVar27 = divps(auVar10 << 0x20,auVar23);
          *(undefined1 (*) [16])param_1 = auVar27;
          *param_3 = *param_3 | 0x3c;
        }
      }
    }
    else {
      uVar15 = 0;
      if (*(float *)(param_1 + 8) != 0.0) {
        uVar15 = 0x30;
      }
      fVar18 = *(float *)(this + 0x24);
      fVar31 = *(float *)(param_1 + 4);
      uVar15 = uVar15 | *param_3;
      fVar32 = *(float *)(this + 0x28);
      *param_3 = uVar15;
      fVar17 = fVar18 - fVar31;
      fVar26 = fVar31 - fVar32;
      if ((0.0 < fVar17) || (0.0 < fVar26)) {
        fVar17 = (float)((uint)fVar17 & _LC57);
        if (_LC0 < fVar17) {
          fVar17 = _LC5 - fVar17;
        }
        fVar26 = (float)((uint)fVar26 & _LC57);
        if (_LC0 < fVar26) {
          fVar26 = _LC5 - fVar26;
        }
        if (fVar26 <= fVar17) {
          auVar8._4_8_ = (ulong)*(uint *)(this + 0x38) << 0x20;
          auVar8._0_4_ = fVar32;
          auVar8._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar8 << 0x20;
          *param_3 = uVar15 | 8;
        }
        else {
          auVar6._4_8_ = (ulong)*(uint *)(this + 0x34) << 0x20;
          auVar6._0_4_ = fVar18;
          auVar6._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar6 << 0x20;
          *param_3 = uVar15 | 4;
        }
      }
      else if ((uVar15 & 0x10) != 0) {
        fVar18 = _LC0 - fVar31 * fVar31;
        if (fVar18 < 0.0) {
          auVar24._0_4_ = sqrtf(fVar18);
          auVar24._4_12_ = extraout_var;
          uVar19 = auVar24._0_8_;
        }
        else {
          uVar19 = (ulong)(uint)SQRT(fVar18);
        }
        auVar9._4_8_ = uVar19 << 0x20;
        auVar9._0_4_ = fVar31;
        auVar9._12_4_ = 0;
        *(undefined1 (*) [16])param_1 = auVar9 << 0x20;
      }
    }
  }
  else if (((byte)SVar4 & 4) == 0) {
    uVar15 = 0;
    if (*(float *)(param_1 + 4) != 0.0) {
      uVar15 = 0xc;
    }
    fVar18 = *(float *)(this + 0x2c);
    fVar31 = *(float *)(param_1 + 8);
    uVar15 = uVar15 | *param_3;
    fVar32 = *(float *)(this + 0x30);
    *param_3 = uVar15;
    fVar17 = fVar18 - fVar31;
    fVar26 = fVar31 - fVar32;
    if ((0.0 < fVar17) || (0.0 < fVar26)) {
      fVar17 = (float)((uint)fVar17 & _LC57);
      if (_LC0 < fVar17) {
        fVar17 = _LC5 - fVar17;
      }
      fVar26 = (float)((uint)fVar26 & _LC57);
      if (_LC0 < fVar26) {
        fVar26 = _LC5 - fVar26;
      }
      if (fVar26 <= fVar17) {
        uVar3 = *(undefined4 *)(this + 0x40);
        *(undefined8 *)param_1 = 0;
        *(ulong *)(param_1 + 8) = CONCAT44(uVar3,fVar32);
        *param_3 = uVar15 | 0x20;
      }
      else {
        uVar3 = *(undefined4 *)(this + 0x3c);
        *(undefined8 *)param_1 = 0;
        *(ulong *)(param_1 + 8) = CONCAT44(uVar3,fVar18);
        *param_3 = uVar15 | 0x10;
      }
    }
    else if ((uVar15 & 4) != 0) {
      fVar18 = _LC0 - fVar31 * fVar31;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      *(undefined8 *)param_1 = 0;
      *(ulong *)(param_1 + 8) = CONCAT44(fVar18,fVar31);
    }
  }
  else {
    uVar15 = 0;
    if (*(float *)(param_1 + 4) != 0.0) {
      uVar15 = 0xc;
    }
    uVar15 = uVar15 | *param_3;
    if (*(float *)(param_1 + 8) != 0.0) {
      uVar15 = uVar15 | 0x30;
    }
    *param_3 = uVar15;
    *(undefined8 *)param_1 = uVar13;
    *(undefined8 *)(param_1 + 8) = uVar14;
  }
  if (fVar1 < 0.0) {
    *(float *)param_1 = 0.0 - *(float *)param_1;
    *(float *)(param_1 + 4) = 0.0 - *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = 0.0 - *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = 0.0 - *(float *)(param_1 + 0xc);
  }
  if (fVar2 < 0.0) {
    *(float *)param_2 = 0.0 - *(float *)param_2;
    *(float *)(param_2 + 4) = 0.0 - *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) = 0.0 - *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) = 0.0 - *(float *)(param_2 + 0xc);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body const&,
   JPH::Quat, JPH::Quat) */

void JPH::SwingTwistConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               SwingTwistConstraintPart *param_1,undefined8 param_2,undefined8 param_7)

{
  SwingTwistConstraintPart SVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_8c;
  uint local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulong local_58;
  long lStack_50;
  long local_40;
  
  fVar11 = (float)((ulong)param_4 >> 0x20);
  fVar10 = (float)param_4;
  fVar17 = (float)((ulong)param_3 >> 0x20);
  fVar9 = (float)param_3;
  fVar4 = (float)param_2_00;
  local_98 = (float)param_1_00;
  fStack_94 = (float)((ulong)param_1_00 >> 0x20);
  fStack_8c = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = SQRT(fStack_8c * fStack_8c + local_98 * local_98);
  local_58 = __LC42;
  lStack_50 = _UNK_00109b48;
  if (fVar7 != 0.0) {
    fVar6 = fStack_8c / fVar7;
    fVar3 = local_98 / fVar7;
    fVar8 = local_98 * fVar4;
    fVar4 = (fVar4 * fStack_8c + local_98 * fStack_94) / fVar7;
    fStack_94 = (fStack_94 * fStack_8c - fVar8) / fVar7;
    local_98 = 0.0;
    fStack_8c = fVar7;
    local_58 = (ulong)(uint)fVar3;
    lStack_50 = (ulong)(uint)fVar6 << 0x20;
  }
  local_68 = local_98;
  fStack_64 = fStack_94;
  fStack_60 = fVar4;
  fStack_5c = fStack_8c;
  ClampSwingTwist(param_1,(Quat *)&local_68,(Quat *)&local_58,&local_6c);
  fVar7 = _LC0;
  SVar1 = *param_1;
  if (((byte)SVar1 & 2) == 0) {
    if (((byte)SVar1 & 4) != 0) {
      fVar6 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
      fVar15 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
      fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
      fVar12 = fVar15 + fVar15;
      fVar8 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
      fVar19 = fVar8 + fVar8;
      fVar20 = fVar12 * fVar6 - fVar19 * fVar3;
      fVar16 = fVar12 * fVar3 + fVar19 * fVar6;
      fVar12 = (fVar12 * fVar15 + fVar8 * fVar19) - _LC0;
      fVar18 = fVar3 + fVar3;
      *(ulong *)(param_1 + 0x50) = CONCAT44(fVar12,fVar20);
      *(ulong *)(param_1 + 0x58) = CONCAT44(fVar16,fVar16);
      fVar7 = (fVar3 * fVar18 + fVar8 * fVar19) - fVar7;
      *(ulong *)(param_1 + 0x60) =
           CONCAT44(fVar18 * fVar15 - fVar19 * fVar6,fVar6 * fVar18 + fVar19 * fVar15);
      *(ulong *)(param_1 + 0x68) = CONCAT44(fVar7,fVar7);
      if ((local_6c & 0xc) == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      else {
        if ((local_6c & 4) != 0) {
          *(float *)(param_1 + 0x50) = 0.0 - fVar20;
          *(float *)(param_1 + 0x54) = 0.0 - fVar12;
          *(float *)(param_1 + 0x58) = 0.0 - fVar16;
          *(float *)(param_1 + 0x5c) = 0.0 - fVar16;
        }
        AngleConstraintPart::CalculateConstraintProperties
                  (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                   param_2,param_7);
      }
      goto LAB_00108688;
    }
    if (((~(byte)SVar1 & 0x30) != 0) && ((local_6c & 0x3c) != 0)) {
      fVar8 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
      fVar15 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
      fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
      fVar7 = ((fStack_8c * fVar11 - local_98 * fVar9) - fStack_94 * fVar17) - fVar4 * fVar10;
      fVar6 = fVar8 + fVar8;
      fVar12 = fVar7 + fVar7;
      fVar19 = fVar6 * fVar3 - fVar12 * fVar15;
      fVar15 = fVar15 * fVar6 + fVar3 * fVar12;
      fVar6 = (fVar6 * fVar8 + fVar12 * fVar7) - _LC0;
      fVar18 = (local_68 * fVar11 + fStack_5c * fVar9 + fStack_60 * fVar17) - fStack_64 * fVar10;
      fVar7 = (fStack_64 * fVar11 - fStack_60 * fVar9) + fStack_5c * fVar17 + local_68 * fVar10;
      fVar12 = fVar18 + fVar18;
      fVar8 = ((fStack_60 * fVar11 + fStack_64 * fVar9) - local_68 * fVar17) + fStack_5c * fVar10;
      fVar3 = ((fStack_5c * fVar11 - local_68 * fVar9) - fStack_64 * fVar17) - fStack_60 * fVar10;
      fVar20 = fVar3 + fVar3;
      fVar16 = fVar12 * fVar8 - fVar20 * fVar7;
      fVar8 = fVar7 * fVar12 + fVar8 * fVar20;
      fVar12 = (fVar12 * fVar18 + fVar20 * fVar3) - _LC0;
      fVar7 = fVar15 * fVar12 - fVar8 * fVar6;
      fVar3 = fVar19 * fVar8 - fVar16 * fVar15;
      fVar6 = fVar6 * fVar16 - fVar12 * fVar19;
      auVar13._4_4_ = fVar6;
      auVar13._0_4_ = fVar3;
      auVar13._8_4_ = fVar7;
      auVar13._12_4_ = fVar7;
      auVar14._0_4_ = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3 + 0.0);
      if (auVar14._0_4_ != 0.0) {
        auVar14._4_4_ = auVar14._0_4_;
        auVar14._8_4_ = auVar14._0_4_;
        auVar14._12_4_ = auVar14._0_4_;
        auVar14 = divps(auVar13,auVar14);
        *(undefined1 (*) [16])(param_1 + 0x50) = auVar14;
        AngleConstraintPart::CalculateConstraintProperties
                  (auVar14._0_8_,*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,param_2,param_7);
        goto LAB_00108d6e;
      }
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar13;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
LAB_00108d6e:
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    fVar8 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar12 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar6 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar15 = fVar12 + fVar12;
    fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar16 = fVar6 + fVar6;
    fVar19 = fVar15 * fVar3 + fVar16 * fVar8;
    *(ulong *)(param_1 + 0x50) =
         CONCAT44((fVar15 * fVar12 + fVar6 * fVar16) - _LC0,fVar15 * fVar8 - fVar16 * fVar3);
    *(ulong *)(param_1 + 0x58) = CONCAT44(fVar19,fVar19);
    fVar19 = fVar3 + fVar3;
    fVar15 = fVar8 * fVar19 + fVar16 * fVar12;
    fVar8 = fVar19 * fVar12 - fVar16 * fVar8;
    fVar7 = (fVar3 * fVar19 + fVar6 * fVar16) - fVar7;
    *(ulong *)(param_1 + 0x60) = CONCAT44(fVar8,fVar15);
    *(ulong *)(param_1 + 0x68) = CONCAT44(fVar7,fVar7);
    if (((byte)SVar1 & 4) == 0) {
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                 param_2,param_7);
      if ((local_6c & 0x30) == 0) goto LAB_00108d6e;
      if ((local_6c & 0x10) != 0) {
        *(float *)(param_1 + 0x60) = 0.0 - fVar15;
        *(float *)(param_1 + 100) = 0.0 - fVar8;
        *(float *)(param_1 + 0x68) = 0.0 - fVar7;
        *(float *)(param_1 + 0x6c) = 0.0 - fVar7;
      }
    }
    else {
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                 param_2,param_7);
    }
LAB_00108688:
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0,param_1 + 0xb0,
               param_2,param_7);
  }
  if (((byte)SVar1 & 1) == 0) {
    if ((((byte)SVar1 & 8) != 0) || ((local_6c & 3) == 0)) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108818;
    }
    fVar7 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar6 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar4 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar9 = fVar7 + fVar7;
    fVar17 = fVar4 + fVar4;
    auVar5._0_4_ = (fVar4 * fVar17 + fVar7 * fVar9) - _LC0;
    fVar7 = fVar9 * fVar3 - fVar17 * fVar6;
    fVar4 = fVar9 * fVar6 + fVar17 * fVar3;
    auVar5._12_4_ = fVar7;
    auVar5._8_4_ = fVar7;
    auVar5._4_4_ = fVar4;
    if ((local_6c & 1) != 0) {
      auVar5._4_4_ = 0.0 - fVar4;
      auVar5._0_4_ = 0.0 - auVar5._0_4_;
      auVar5._8_4_ = 0.0 - fVar7;
      auVar5._12_4_ = 0.0 - fVar7;
    }
    *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  else {
    fVar3 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar8 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar6 = fVar3 + fVar3;
    fVar7 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar9 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar17 = fVar7 + fVar7;
    fVar4 = fVar6 * fVar9 - fVar17 * fVar8;
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar6 * fVar8 + fVar17 * fVar9,(fVar7 * fVar17 + fVar3 * fVar6) - _LC0);
    *(ulong *)(param_1 + 0x78) = CONCAT44(fVar4,fVar4);
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  if (local_40 == lVar2) {
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),0,param_1 + 0xe0,
               param_2,param_7);
    return;
  }
LAB_00108818:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, JPH::Quat,
   JPH::Quat, JPH::Quat, float) const */

undefined8
JPH::SwingTwistConstraintPart::SolvePositionConstraint
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7,SwingTwistConstraintPart *param_1
          ,long param_2,long param_10)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float *pfVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_27c;
  undefined1 local_278 [16];
  ulong local_268;
  long lStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  ulong uStack_230;
  ulong local_228;
  long lStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  ulong uStack_200;
  undefined1 local_1f8 [16];
  ulong local_1e8;
  long lStack_1e0;
  float local_1d8 [8];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  Mat44 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  Mat44 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  float afStack_110 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  float afStack_d0 [2];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  fVar23 = (float)((ulong)param_6 >> 0x20);
  fVar21 = (float)param_6;
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar18 = (float)param_5;
  fVar9 = (float)((ulong)param_3 >> 0x20);
  fVar6 = (float)param_3;
  fVar3 = (float)((ulong)param_1_00 >> 0x20);
  fVar15 = (float)param_1_00;
  fVar11 = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = SQRT(fVar11 * fVar11 + fVar15 * fVar15);
  if (fVar8 == 0.0) {
    local_278._8_8_ = param_2_00;
    local_278._0_8_ = param_1_00;
    local_268 = __LC42;
    lStack_260 = _UNK_00109b48;
  }
  else {
    local_268 = (ulong)(uint)(fVar15 / fVar8);
    lStack_260 = (ulong)(uint)(fVar11 / fVar8) << 0x20;
    auVar2._8_4_ = fVar8;
    auVar2._4_4_ = ((float)param_2_00 * fVar11 + fVar15 * fVar3) / fVar8;
    auVar2._0_4_ = (fVar3 * fVar11 - fVar15 * (float)param_2_00) / fVar8;
    auVar2._12_4_ = 0;
    local_278 = auVar2 << 0x20;
  }
  ClampSwingTwist(param_1,local_278,(Quat *)&local_268,&local_27c);
  uVar5 = 0;
  if (local_27c != 0) {
    fVar25 = (float)param_4;
    local_58 = (undefined1  [16])0x0;
    fVar15 = local_278._8_4_;
    fVar28 = (float)((ulong)param_4 >> 0x20);
    fVar11 = local_278._0_4_;
    fVar8 = local_278._12_4_;
    fVar12 = local_278._4_4_;
    fVar26 = (fVar28 * fVar11 + fVar6 * fVar8 + fVar9 * fVar15) - fVar25 * fVar12;
    fVar24 = (fVar28 * fVar12 - fVar6 * fVar15) + fVar9 * fVar8 + fVar25 * fVar11;
    fVar13 = (float)local_268;
    fVar16 = (float)(local_268 >> 0x20);
    fVar22 = ((fVar28 * fVar15 + fVar6 * fVar12) - fVar9 * fVar11) + fVar25 * fVar8;
    fVar3 = (float)lStack_260;
    fVar27 = (float)((ulong)lStack_260 >> 0x20);
    fVar15 = ((fVar8 * fVar28 - fVar6 * fVar11) - fVar9 * fVar12) - fVar25 * fVar15;
    fVar9 = (float)((uint)((fVar13 * fVar15 + fVar27 * fVar26 + fVar3 * fVar24) - fVar16 * fVar22) ^
                   __LC45);
    fVar11 = (float)((uint)(fVar13 * fVar22 + (fVar16 * fVar15 - fVar3 * fVar26) + fVar27 * fVar24)
                    ^ _UNK_00109c04);
    fVar12 = (float)((uint)(((fVar3 * fVar15 + fVar16 * fVar26) - fVar13 * fVar24) + fVar27 * fVar22
                           ) ^ _UNK_00109c08);
    fVar13 = (float)((uint)(((fVar27 * fVar15 - fVar13 * fVar26) - fVar16 * fVar24) - fVar3 * fVar22
                           ) ^ _UNK_00109c0c);
    fVar15 = (float)*(undefined8 *)(param_10 + 0x10);
    fVar25 = fVar15 + fVar15;
    fVar3 = (float)*(undefined8 *)(param_10 + 0x18);
    fVar28 = fVar3 * (fVar3 + fVar3);
    fVar8 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
    fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
    fVar27 = fVar8 + fVar8;
    fVar16 = fVar6 * (fVar3 + fVar3);
    local_1f8._0_4_ = fVar3 * fVar25 + fVar27 * fVar6;
    local_218._0_4_ = (_LC0 - fVar8 * fVar27) - fVar28;
    local_218._4_4_ = fVar8 * fVar25 + fVar16;
    uStack_200 = (ulong)(uint)(fVar25 * fVar6 + fVar3 * fVar27);
    local_218._8_4_ = fVar3 * fVar25 - fVar27 * fVar6;
    local_218._12_4_ = 0;
    local_1f8._4_4_ = fVar3 * fVar27 - fVar25 * fVar6;
    local_1e8 = __LC42;
    lStack_1e0 = _UNK_00109b48;
    local_228 = __LC42;
    lStack_220 = _UNK_00109b48;
    local_208 = CONCAT44((_LC0 - fVar28) - fVar15 * fVar25,fVar8 * fVar25 - fVar16);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar28 = fVar3 + fVar3;
    local_1f8._8_4_ = (_LC0 - fVar15 * fVar25) - fVar8 * fVar27;
    local_1f8._12_4_ = 0;
    fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar25 = fVar15 + fVar15;
    fVar16 = fVar6 * (fVar8 + fVar8);
    fVar27 = fVar8 * (fVar8 + fVar8);
    local_258._0_4_ = (_LC0 - fVar15 * fVar25) - fVar27;
    local_258._4_4_ = fVar15 * fVar28 + fVar16;
    local_258._8_4_ = fVar8 * fVar28 - fVar25 * fVar6;
    local_258._12_4_ = 0;
    local_248._4_4_ = (_LC0 - fVar27) - fVar3 * fVar28;
    local_248._0_4_ = fVar15 * fVar28 - fVar16;
    local_248._8_4_ = fVar28 * fVar6 + fVar8 * fVar25;
    local_248._12_4_ = 0;
    local_238 = CONCAT44(fVar8 * fVar25 - fVar28 * fVar6,fVar8 * fVar28 + fVar25 * fVar6);
    uStack_230 = (ulong)(uint)((_LC0 - fVar3 * fVar28) - fVar15 * fVar25);
    if (*(char *)(param_2 + 0x78) == '\x02') {
      MotionProperties::GetInverseInertiaForRotation(local_158);
    }
    else {
      local_128 = 0;
      uStack_120 = 0;
      local_138._0_12_ = ZEXT812(0);
      local_138._12_4_ = 0;
      local_148._0_12_ = ZEXT812(0);
      local_148._12_4_ = 0;
      local_158._0_12_ = ZEXT812(0);
      local_158._12_4_ = 0;
    }
    _local_118 = (undefined1  [16])local_158;
    local_108 = local_148;
    local_f8 = local_138;
    local_e8 = local_128;
    uStack_e0 = uStack_120;
    if (*(char *)(param_10 + 0x78) == '\x02') {
      MotionProperties::GetInverseInertiaForRotation(local_198);
    }
    else {
      local_168 = 0;
      uStack_160 = 0;
      local_178._0_12_ = ZEXT812(0);
      local_178._12_4_ = 0;
      local_188._0_12_ = ZEXT812(0);
      local_188._12_4_ = 0;
      local_198._0_12_ = ZEXT812(0);
      local_198._12_4_ = 0;
    }
    _local_d8 = (undefined1  [16])local_198;
    local_c8 = local_188;
    local_b8 = local_178;
    local_a8 = local_168;
    uStack_a0 = uStack_160;
    pfVar4 = (float *)local_118;
    pfVar7 = local_1d8;
    do {
      pfVar1 = pfVar4 + 0x10;
      fVar15 = pfVar4[0x11];
      fVar8 = pfVar4[0x12];
      fVar3 = pfVar4[0x13];
      fVar6 = *pfVar4;
      fVar16 = pfVar4[1];
      fVar25 = pfVar4[2];
      fVar28 = pfVar4[3];
      pfVar4 = pfVar4 + 4;
      *pfVar7 = *pfVar1 + fVar6;
      pfVar7[1] = fVar15 + fVar16;
      pfVar7[2] = fVar8 + fVar25;
      pfVar7[3] = fVar3 + fVar28;
      pfVar7 = pfVar7 + 4;
    } while (pfVar4 != (float *)local_d8);
    auVar10._0_4_ =
         (fStack_1b4 * local_1d8[4] - local_1d8[5] * local_1b8) * local_1d8[2] +
         (local_1b8 * local_1d8[6] - local_1d8[4] * fStack_1b0) * local_1d8[1] +
         (fStack_1b0 * local_1d8[5] - local_1d8[6] * fStack_1b4) * local_1d8[0] + 0.0;
    if (auVar10._0_4_ == 0.0) {
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
    }
    else {
      auVar10._4_4_ = auVar10._0_4_;
      auVar10._8_4_ = auVar10._0_4_;
      auVar10._12_4_ = auVar10._0_4_;
      local_68._8_8_ = _UNK_00109b48;
      local_68._0_8_ = __LC42;
      auVar19._0_4_ = local_1d8[5] * fStack_1b0 - fStack_1b4 * local_1d8[6];
      auVar19._4_4_ = fStack_1b4 * local_1d8[2] - local_1d8[1] * fStack_1b0;
      auVar19._8_4_ = local_1d8[1] * local_1d8[6] - local_1d8[5] * local_1d8[2];
      auVar19._12_4_ = 0;
      auVar14._0_4_ = fStack_1b4 * local_1d8[4] - local_1d8[5] * local_1b8;
      auVar14._4_4_ = local_1d8[1] * local_1b8 - fStack_1b4 * local_1d8[0];
      auVar14._8_4_ = local_1d8[5] * local_1d8[0] - local_1d8[1] * local_1d8[4];
      auVar14._12_4_ = 0;
      auVar17._0_4_ = local_1d8[6] * local_1b8 - fStack_1b0 * local_1d8[4];
      auVar17._4_4_ = fStack_1b0 * local_1d8[0] - local_1d8[2] * local_1b8;
      auVar17._8_4_ = local_1d8[2] * local_1d8[4] - local_1d8[6] * local_1d8[0];
      auVar17._12_4_ = 0;
      local_98 = divps(auVar19,auVar10);
      local_88 = divps(auVar17,auVar10);
      local_78 = divps(auVar14,auVar10);
    }
    uVar5 = RotationEulerConstraintPart::SolvePositionConstraint
                      (CONCAT44(fVar9 * fVar21 +
                                (fVar11 * fVar23 - fVar12 * fVar18) + fVar13 * fVar20,
                                (fVar13 * fVar18 + fVar9 * fVar23 + fVar12 * fVar20) -
                                fVar11 * fVar21),
                       CONCAT44(((fVar13 * fVar23 - fVar9 * fVar18) - fVar11 * fVar20) -
                                fVar12 * fVar21,
                                fVar13 * fVar21 +
                                ((fVar11 * fVar18 + fVar12 * fVar23) - fVar9 * fVar20)),param_7,
                       local_118,param_2,param_10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* JPH::GetRTTIOfType(JPH::SwingTwistConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC81;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SwingTwistConstraint::~SwingTwistConstraint() */

void __thiscall JPH::SwingTwistConstraint::~SwingTwistConstraint(SwingTwistConstraint *this)

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
/* JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings() */

void __thiscall
JPH::SwingTwistConstraintSettings::~SwingTwistConstraintSettings(SwingTwistConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


