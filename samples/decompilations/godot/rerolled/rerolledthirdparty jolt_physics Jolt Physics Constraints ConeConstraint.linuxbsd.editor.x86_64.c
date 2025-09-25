/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::ConeConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::ConeConstraint::NotifyShapeChanged
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



/* JPH::ConeConstraint::ResetWarmStart() */

void __thiscall JPH::ConeConstraint::ResetWarmStart(ConeConstraint *this)

{
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x160) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x170) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  return;
}



/* JPH::ConeConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::ConeConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::ConeConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::ConeConstraintSettings::SaveBinaryState(ConeConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  return;
}



/* JPH::ConeConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::ConeConstraintSettings::RestoreBinaryState(ConeConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
                    /* WARNING: Could not recover jumptable at 0x001001e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  return;
}



/* JPH::ConeConstraint::GetConstraintToBody1Matrix() const */

void JPH::ConeConstraint::GetConstraintToBody1Matrix(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar9 [12];
  
  uVar3 = *(undefined8 *)(in_RSI + 0x60);
  fVar15 = *(float *)(in_RSI + 0x60);
  fVar1 = *(float *)(in_RSI + 0x68);
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  if ((float)(_LC2 & (uint)fVar15) <= (float)((uint)fVar14 & _LC2)) {
    fVar15 = SQRT(fVar14 * fVar14 + fVar1 * fVar1);
    auVar6._8_4_ = (uint)fVar14 ^ _LC9;
    auVar6._4_4_ = (uint)fVar14 ^ _LC9;
    auVar6._0_4_ = fVar1;
    auVar6._12_4_ = 0;
    auVar11._4_4_ = fVar15;
    auVar11._0_4_ = fVar15;
    auVar11._8_4_ = fVar15;
    auVar11._12_4_ = fVar15;
    auVar11 = divps(auVar6 << 0x20,auVar11);
    auVar9 = auVar11._0_12_;
  }
  else {
    auVar10._4_4_ = 0;
    auVar10._0_4_ = fVar1;
    fVar14 = SQRT(fVar15 * fVar15 + fVar1 * fVar1);
    auVar10._12_4_ = (uint)fVar15 ^ _LC9;
    auVar10._8_4_ = (uint)fVar15 ^ _LC9;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar14;
    auVar5._8_4_ = fVar14;
    auVar5._12_4_ = fVar14;
    auVar11 = divps(auVar10,auVar5);
    auVar9 = auVar11._0_12_;
  }
  fVar15 = *(float *)(in_RSI + 0x60);
  fVar14 = *(float *)(in_RSI + 100);
  fVar7 = *(float *)(in_RSI + 0x68);
  fVar8 = auVar9._0_4_;
  fVar12 = auVar9._4_4_;
  fVar13 = auVar9._8_4_;
  *(float *)(in_RDI + 1) = fVar1;
  *(float *)(in_RDI + 2) = fVar8;
  uVar4 = *(undefined8 *)(in_RSI + 0x40);
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(float *)(in_RDI + 3) = fVar13;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  in_RDI[6] = uVar4;
  *(undefined4 *)((long)in_RDI + 0x3c) = 0x3f800000;
  uVar2 = *(undefined4 *)(in_RSI + 0x48);
  *in_RDI = uVar3;
  *(float *)((long)in_RDI + 0x14) = fVar12;
  *(undefined4 *)(in_RDI + 7) = uVar2;
  *(float *)(in_RDI + 5) = fVar12 * fVar15 - fVar14 * fVar8;
  *(float *)(in_RDI + 4) = fVar13 * fVar14 - fVar7 * fVar12;
  *(float *)((long)in_RDI + 0x24) = fVar8 * fVar7 - fVar15 * fVar13;
  return;
}



/* JPH::ConeConstraint::GetConstraintToBody2Matrix() const */

void JPH::ConeConstraint::GetConstraintToBody2Matrix(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar9 [12];
  
  uVar3 = *(undefined8 *)(in_RSI + 0x70);
  fVar15 = *(float *)(in_RSI + 0x70);
  fVar1 = *(float *)(in_RSI + 0x78);
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  if ((float)(_LC2 & (uint)fVar15) <= (float)((uint)fVar14 & _LC2)) {
    fVar15 = SQRT(fVar14 * fVar14 + fVar1 * fVar1);
    auVar6._8_4_ = (uint)fVar14 ^ _LC9;
    auVar6._4_4_ = (uint)fVar14 ^ _LC9;
    auVar6._0_4_ = fVar1;
    auVar6._12_4_ = 0;
    auVar11._4_4_ = fVar15;
    auVar11._0_4_ = fVar15;
    auVar11._8_4_ = fVar15;
    auVar11._12_4_ = fVar15;
    auVar11 = divps(auVar6 << 0x20,auVar11);
    auVar9 = auVar11._0_12_;
  }
  else {
    auVar10._4_4_ = 0;
    auVar10._0_4_ = fVar1;
    fVar14 = SQRT(fVar15 * fVar15 + fVar1 * fVar1);
    auVar10._12_4_ = (uint)fVar15 ^ _LC9;
    auVar10._8_4_ = (uint)fVar15 ^ _LC9;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar14;
    auVar5._8_4_ = fVar14;
    auVar5._12_4_ = fVar14;
    auVar11 = divps(auVar10,auVar5);
    auVar9 = auVar11._0_12_;
  }
  fVar15 = *(float *)(in_RSI + 0x70);
  fVar14 = *(float *)(in_RSI + 0x74);
  fVar7 = *(float *)(in_RSI + 0x78);
  fVar8 = auVar9._0_4_;
  fVar12 = auVar9._4_4_;
  fVar13 = auVar9._8_4_;
  *(float *)(in_RDI + 1) = fVar1;
  *(float *)(in_RDI + 2) = fVar8;
  uVar4 = *(undefined8 *)(in_RSI + 0x50);
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(float *)(in_RDI + 3) = fVar13;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  in_RDI[6] = uVar4;
  *(undefined4 *)((long)in_RDI + 0x3c) = 0x3f800000;
  uVar2 = *(undefined4 *)(in_RSI + 0x58);
  *in_RDI = uVar3;
  *(float *)((long)in_RDI + 0x14) = fVar12;
  *(undefined4 *)(in_RDI + 7) = uVar2;
  *(float *)(in_RDI + 5) = fVar12 * fVar15 - fVar14 * fVar8;
  *(float *)(in_RDI + 4) = fVar13 * fVar14 - fVar7 * fVar12;
  *(float *)((long)in_RDI + 0x24) = fVar8 * fVar7 - fVar15 * fVar13;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConeConstraint::WarmStartVelocityConstraint(float) */

void __thiscall JPH::ConeConstraint::WarmStartVelocityConstraint(ConeConstraint *this,float param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 in_EAX;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar4 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x28);
  fVar24 = param_1 * *(float *)(this + 400);
  fVar25 = param_1 * *(float *)(this + 0x194);
  fVar26 = param_1 * *(float *)(this + 0x198);
  fVar27 = param_1 * *(float *)(this + 0x19c);
  auVar28._4_4_ = -(uint)(fVar25 == 0.0);
  auVar28._0_4_ = -(uint)(fVar24 == 0.0);
  auVar28._8_4_ = -(uint)(fVar26 == 0.0);
  auVar28._12_4_ = -(uint)(fVar27 == 0.0);
  *(float *)(this + 400) = fVar24;
  *(float *)(this + 0x194) = fVar25;
  *(float *)(this + 0x198) = fVar26;
  *(float *)(this + 0x19c) = fVar27;
  uVar23 = movmskps(in_EAX,auVar28);
  if ((~uVar23 & 7) != 0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pfVar6 = *(float **)(lVar5 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar1 = pfVar6[0x16];
      bVar3 = *(byte *)((long)pfVar6 + 0x7a);
      auVar29._1_3_ = 0;
      auVar29[0] = bVar3;
      auVar29[4] = bVar3;
      auVar29._5_3_ = 0;
      auVar29[8] = bVar3;
      auVar29._9_3_ = 0;
      auVar29[0xc] = bVar3;
      auVar29._13_3_ = 0;
      auVar22._4_4_ = _UNK_00104374;
      auVar22._0_4_ = __LC6;
      auVar22._8_4_ = _UNK_00104378;
      auVar22._12_4_ = _UNK_0010437c;
      auVar29 = auVar29 & auVar22;
      bVar7 = auVar29._4_4_ == _UNK_00104374;
      bVar8 = auVar29._8_4_ == _UNK_00104378;
      bVar9 = auVar29._12_4_ == _UNK_0010437c;
      *pfVar6 = (float)(-(uint)(auVar29._0_4_ == __LC6) & (uint)(*pfVar6 - fVar1 * fVar24));
      pfVar6[1] = (float)(-(uint)bVar7 & (uint)(pfVar6[1] - fVar1 * fVar25));
      pfVar6[2] = (float)(-(uint)bVar8 & (uint)(pfVar6[2] - fVar1 * fVar26));
      pfVar6[3] = (float)(-(uint)bVar9 & (uint)(pfVar6[3] - fVar1 * fVar27));
      fVar1 = *(float *)(this + 0xe4);
      fVar10 = *(float *)(this + 0xe8);
      fVar11 = *(float *)(this + 0xec);
      fVar12 = *(float *)(this + 0xd4);
      fVar13 = *(float *)(this + 0xd8);
      fVar14 = *(float *)(this + 0xdc);
      fVar15 = *(float *)(this + 0xf4);
      fVar16 = *(float *)(this + 0xf8);
      fVar17 = *(float *)(this + 0xfc);
      fVar18 = *(float *)(this + 0x104);
      fVar19 = *(float *)(this + 0x108);
      fVar20 = *(float *)(this + 0x10c);
      pfVar6[4] = pfVar6[4] -
                  (fVar24 * *(float *)(this + 0xd0) + fVar25 * *(float *)(this + 0xe0) +
                   fVar26 * *(float *)(this + 0xf0) + *(float *)(this + 0x100));
      pfVar6[5] = pfVar6[5] - (fVar24 * fVar12 + fVar25 * fVar1 + fVar26 * fVar15 + fVar18);
      pfVar6[6] = pfVar6[6] - (fVar24 * fVar13 + fVar25 * fVar10 + fVar26 * fVar16 + fVar19);
      pfVar6[7] = pfVar6[7] - (fVar24 * fVar14 + fVar25 * fVar11 + fVar26 * fVar17 + fVar20);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      pfVar6 = *(float **)(lVar4 + 0x48);
      bVar3 = *(byte *)((long)pfVar6 + 0x7a);
      fVar1 = pfVar6[0x16];
      auVar30._1_3_ = 0;
      auVar30[0] = bVar3;
      auVar30[4] = bVar3;
      auVar30._5_3_ = 0;
      auVar30[8] = bVar3;
      auVar30._9_3_ = 0;
      auVar30[0xc] = bVar3;
      auVar30._13_3_ = 0;
      auVar21._4_4_ = _UNK_00104374;
      auVar21._0_4_ = __LC6;
      auVar21._8_4_ = _UNK_00104378;
      auVar21._12_4_ = _UNK_0010437c;
      auVar30 = auVar30 & auVar21;
      bVar7 = auVar30._4_4_ == _UNK_00104374;
      bVar8 = auVar30._8_4_ == _UNK_00104378;
      bVar9 = auVar30._12_4_ == _UNK_0010437c;
      *pfVar6 = (float)((uint)(fVar1 * fVar24 + *pfVar6) & -(uint)(auVar30._0_4_ == __LC6));
      pfVar6[1] = (float)((uint)(fVar1 * fVar25 + pfVar6[1]) & -(uint)bVar7);
      pfVar6[2] = (float)((uint)(fVar1 * fVar26 + pfVar6[2]) & -(uint)bVar8);
      pfVar6[3] = (float)((uint)(fVar1 * fVar27 + pfVar6[3]) & -(uint)bVar9);
      fVar27 = *(float *)(this + 0x124);
      fVar1 = *(float *)(this + 0x128);
      fVar10 = *(float *)(this + 300);
      fVar11 = *(float *)(this + 0x114);
      fVar12 = *(float *)(this + 0x118);
      fVar13 = *(float *)(this + 0x11c);
      fVar14 = *(float *)(this + 0x134);
      fVar15 = *(float *)(this + 0x138);
      fVar16 = *(float *)(this + 0x13c);
      fVar17 = *(float *)(this + 0x144);
      fVar18 = *(float *)(this + 0x148);
      fVar19 = *(float *)(this + 0x14c);
      pfVar6[4] = fVar26 * *(float *)(this + 0x130) +
                  fVar24 * *(float *)(this + 0x110) + fVar25 * *(float *)(this + 0x120) +
                  *(float *)(this + 0x140) + pfVar6[4];
      pfVar6[5] = fVar26 * fVar14 + fVar24 * fVar11 + fVar25 * fVar27 + fVar17 + pfVar6[5];
      pfVar6[6] = fVar26 * fVar15 + fVar24 * fVar12 + fVar25 * fVar1 + fVar18 + pfVar6[6];
      pfVar6[7] = fVar26 * fVar16 + fVar24 * fVar13 + fVar25 * fVar10 + fVar19 + pfVar6[7];
    }
  }
  fVar24 = param_1 * *(float *)(this + 0x1cc);
  *(float *)(this + 0x1cc) = fVar24;
  if (fVar24 != 0.0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      lVar5 = *(long *)(lVar5 + 0x48);
      fVar25 = *(float *)(this + 0x1a4);
      fVar26 = *(float *)(this + 0x1a8);
      fVar27 = *(float *)(this + 0x1ac);
      *(float *)(lVar5 + 0x10) = *(float *)(lVar5 + 0x10) - fVar24 * *(float *)(this + 0x1a0);
      *(float *)(lVar5 + 0x14) = *(float *)(lVar5 + 0x14) - fVar24 * fVar25;
      *(float *)(lVar5 + 0x18) = *(float *)(lVar5 + 0x18) - fVar24 * fVar26;
      *(float *)(lVar5 + 0x1c) = *(float *)(lVar5 + 0x1c) - fVar24 * fVar27;
    }
    if (*(char *)(lVar4 + 0x78) == '\x02') {
      lVar4 = *(long *)(lVar4 + 0x48);
      fVar25 = *(float *)(this + 0x1b4);
      fVar26 = *(float *)(this + 0x1b8);
      fVar27 = *(float *)(this + 0x1bc);
      *(float *)(lVar4 + 0x10) = fVar24 * *(float *)(this + 0x1b0) + *(float *)(lVar4 + 0x10);
      *(float *)(lVar4 + 0x14) = fVar24 * fVar25 + *(float *)(lVar4 + 0x14);
      *(float *)(lVar4 + 0x18) = fVar24 * fVar26 + *(float *)(lVar4 + 0x18);
      *(float *)(lVar4 + 0x1c) = fVar24 * fVar27 + *(float *)(lVar4 + 0x1c);
      return;
    }
  }
  return;
}



/* JPH::ConeConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::ConeConstraint::SaveState(ConeConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 400,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1cc,4);
                    /* WARNING: Could not recover jumptable at 0x0010069e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x90,0xc);
  return;
}



/* JPH::ConeConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::ConeConstraint::RestoreState(ConeConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 400,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1cc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,0xc);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x80);
  uVar1 = _LC4;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((long)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_GetRTTI_00104250;
  puVar2[2] = 0;
  puVar2[3] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 1;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 8) = ZEXT416(uVar1);
  *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xc) = ZEXT416(uVar1);
  return;
}



/* JPH::ConeConstraint::GetConstraintSettings() const */

void JPH::ConeConstraint::GetConstraintSettings(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  float fVar14;
  undefined1 in_XMM4 [16];
  
  puVar7 = (undefined8 *)(*Allocate)(0x80);
  auVar9 = ZEXT416((uint)_LC4);
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined1 *)((long)puVar7 + 0xc) = 1;
  *puVar7 = &PTR_GetRTTI_00104250;
  puVar7[2] = 0;
  puVar7[3] = 0x3f80000000000000;
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 5) = 1;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  *(undefined1 (*) [16])(puVar7 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar7 + 8) = auVar9;
  *(undefined1 (*) [16])(puVar7 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar7 + 0xc) = auVar9;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar3 = *(undefined8 *)(in_RSI + 0x48);
  uVar4 = *(undefined8 *)(in_RSI + 0x70);
  uVar5 = *(undefined8 *)(in_RSI + 0x78);
  *(undefined4 *)(puVar7 + 5) = 0;
  fVar14 = _LC4;
  uVar6 = _LC9;
  uVar1 = *(uint *)(in_RSI + 0x80);
  puVar7[6] = uVar2;
  puVar7[7] = uVar3;
  fVar10 = _LC12;
  uVar2 = *(undefined8 *)(in_RSI + 0x68);
  auVar9._0_4_ = uVar1 ^ uVar6 & uVar1;
  auVar9._4_4_ = uVar1 ^ uVar6 & uVar1;
  auVar9._8_4_ = uVar1 ^ uVar6 & uVar1;
  auVar9._12_4_ = uVar1 ^ uVar6 & uVar1;
  auVar11._4_4_ = fVar14;
  auVar11._0_4_ = fVar14;
  auVar11._8_4_ = fVar14;
  auVar11._12_4_ = fVar14;
  puVar7[8] = *(undefined8 *)(in_RSI + 0x60);
  puVar7[9] = uVar2;
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  uVar3 = *(undefined8 *)(in_RSI + 0x58);
  auVar9 = minps(auVar9,auVar11);
  puVar7[0xc] = uVar4;
  puVar7[0xd] = uVar5;
  puVar7[10] = uVar2;
  puVar7[0xb] = uVar3;
  fVar8 = auVar9._0_4_;
  auVar12._0_4_ = (fVar14 - fVar8) * fVar10;
  auVar12._4_4_ = (fVar14 - auVar9._4_4_) * fVar10;
  auVar12._8_4_ = (fVar14 - auVar9._8_4_) * fVar10;
  auVar12._12_4_ = (fVar14 - auVar9._12_4_) * fVar10;
  uVar13 = (int)-(uint)(fVar10 < fVar8) >> 0x1f;
  auVar9 = sqrtps(in_XMM4,auVar12);
  fVar10 = (float)((uint)auVar12._0_4_ & uVar13 | ~uVar13 & (uint)(fVar8 * fVar8));
  fVar14 = (float)(auVar9._0_4_ & uVar13 | ~uVar13 & (uint)fVar8);
  fVar14 = ((((_LC14 * fVar10 + _LC16) * fVar10 + _LC18) * fVar10 + _LC20) * fVar10 + _LC22) *
           fVar10 * fVar14 + fVar14;
  *(float *)(puVar7 + 0xe) =
       _LC24 - (float)(((uint)(_LC24 - (fVar14 + fVar14)) & uVar13 | ~uVar13 & (uint)fVar14) ^
                      uVar6 & uVar1);
  *in_RDI = puVar7;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  return;
}



/* JPH::ConeConstraintSettings::GetRTTI() const */

undefined1 * JPH::ConeConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti,
                      "ConeConstraintSettings",0x80,
                      GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti;
}



/* JPH::ConeConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::ConeConstraint::DrawConstraint(ConeConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  fVar7 = (float)puVar1[2];
  fVar8 = (float)puVar1[3];
  fVar34 = (float)((ulong)puVar1[2] >> 0x20);
  fVar20 = fVar7 + fVar7;
  fVar29 = fVar34 + fVar34;
  fVar22 = (float)((ulong)puVar1[3] >> 0x20);
  fVar10 = (float)puVar2[3];
  fVar33 = fVar8 * (fVar8 + fVar8);
  fVar17 = fVar22 * (fVar8 + fVar8);
  fVar27 = fVar8 * fVar20 - fVar29 * fVar22;
  fVar32 = fVar8 * fVar29 - fVar20 * fVar22;
  fVar31 = fVar8 * fVar20 + fVar29 * fVar22;
  fVar21 = fVar20 * fVar22 + fVar8 * fVar29;
  fVar24 = (_LC4 - fVar7 * fVar20) - fVar34 * fVar29;
  fVar9 = fVar34 * fVar20 + fVar17;
  fVar17 = fVar34 * fVar20 - fVar17;
  fVar8 = (float)puVar2[2];
  fVar11 = (float)((ulong)puVar2[3] >> 0x20);
  fVar25 = (_LC4 - fVar33) - fVar7 * fVar20;
  fVar22 = fVar8 + fVar8;
  fVar33 = (_LC4 - fVar34 * fVar29) - fVar33;
  fVar7 = (float)((ulong)puVar2[2] >> 0x20);
  fVar34 = fVar7 + fVar7;
  fVar29 = fVar10 * (fVar10 + fVar10);
  fVar18 = fVar11 * (fVar10 + fVar10);
  fVar30 = (_LC4 - fVar8 * fVar22) - fVar7 * fVar34;
  fVar28 = fVar10 * fVar22 + fVar34 * fVar11;
  fVar35 = fVar10 * fVar34 - fVar22 * fVar11;
  fVar23 = fVar22 * fVar11 + fVar10 * fVar34;
  fVar20 = fVar7 * fVar22 + fVar18;
  fVar18 = fVar7 * fVar22 - fVar18;
  fVar26 = (_LC4 - fVar7 * fVar34) - fVar29;
  fVar19 = fVar10 * fVar22 - fVar34 * fVar11;
  fVar36 = (_LC4 - fVar29) - fVar8 * fVar22;
  fVar7 = *(float *)(this + 0x40);
  fVar34 = *(float *)(this + 0x44);
  fVar8 = *(float *)(this + 0x48);
  local_c8._0_4_ = (float)*puVar1;
  local_c8._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  fVar10 = fVar8 * fVar31 + fVar7 * fVar33 + fVar34 * fVar17 + (float)local_c8;
  fVar29 = fVar8 * fVar32 + fVar7 * fVar9 + fVar34 * fVar25 + local_c8._4_4_;
  fVar13 = fVar8 * fVar24 + fVar7 * fVar27 + fVar34 * fVar21 + *(float *)(puVar1 + 1);
  fVar15 = fVar8 * 0.0 + fVar7 * 0.0 + fVar34 * 0.0 + 1.0;
  fVar7 = *(float *)(this + 0x50);
  fVar34 = *(float *)(this + 0x54);
  fVar8 = *(float *)(this + 0x58);
  uVar3 = CONCAT44(fVar29,fVar10);
  uVar4 = CONCAT44(fVar15,fVar13);
  local_b8._0_4_ = (float)*puVar2;
  local_b8._4_4_ = (float)((ulong)*puVar2 >> 0x20);
  fVar11 = fVar8 * fVar28 + fVar7 * fVar26 + fVar34 * fVar18 + (float)local_b8;
  fVar12 = fVar8 * fVar35 + fVar7 * fVar20 + fVar34 * fVar36 + local_b8._4_4_;
  fVar14 = fVar8 * fVar30 + fVar7 * fVar19 + fVar34 * fVar23 + *(float *)(puVar2 + 1);
  fVar16 = fVar8 * 0.0 + fVar7 * 0.0 + fVar34 * 0.0 + 1.0;
  local_c8 = CONCAT44(fVar12,fVar11);
  uVar5 = local_c8;
  uStack_c0 = CONCAT44(fVar16,fVar14);
  uVar6 = uStack_c0;
  JPH::DebugRenderer::DrawMarker(uVar3,uVar4,param_1,(undefined4)Color::sRed);
  JPH::DebugRenderer::DrawMarker(local_c8,uStack_c0,param_1,(undefined4)Color::sGreen);
  fVar34 = *(float *)(this + 0x60);
  fVar8 = *(float *)(this + 100);
  fVar22 = *(float *)(this + 0x68);
  fVar7 = *(float *)(this + 0xc);
  local_b8 = CONCAT44((fVar22 * fVar32 + fVar34 * fVar9 + fVar8 * fVar25) * fVar7 + fVar29,
                      (fVar22 * fVar31 + fVar34 * fVar33 + fVar8 * fVar17) * fVar7 + fVar10);
  uStack_b0 = CONCAT44((fVar22 * 0.0 + fVar34 * 0.0 + fVar8 * 0.0) * fVar7 + fVar15,
                       (fVar22 * fVar24 + fVar34 * fVar27 + fVar8 * fVar21) * fVar7 + fVar13);
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar3,uVar4,local_b8,uStack_b0,param_1,(undefined4)Color::sRed);
  fVar34 = *(float *)(this + 0x70);
  fVar8 = *(float *)(this + 0x74);
  fVar22 = *(float *)(this + 0x78);
  fVar7 = *(float *)(this + 0xc);
  local_c8 = CONCAT44((fVar22 * fVar35 + fVar34 * fVar20 + fVar8 * fVar36) * fVar7 + fVar12,
                      (fVar22 * fVar28 + fVar34 * fVar26 + fVar8 * fVar18) * fVar7 + fVar11);
  uStack_c0 = CONCAT44((fVar22 * 0.0 + fVar34 * 0.0 + fVar8 * 0.0) * fVar7 + fVar16,
                       (fVar22 * fVar30 + fVar34 * fVar19 + fVar8 * fVar23) * fVar7 + fVar14);
                    /* WARNING: Could not recover jumptable at 0x00100e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar5,uVar6,local_c8,uStack_c0,param_1,(undefined4)Color::sGreen);
  return;
}



/* JPH::ConeConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void __thiscall
JPH::ConeConstraint::DrawConstraintLimits(ConeConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 auVar5 [12];
  
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar25 = (float)puVar1[2];
  fVar19 = (float)puVar1[3];
  fVar2 = (float)((ulong)puVar1[2] >> 0x20);
  fVar23 = fVar25 + fVar25;
  fVar27 = fVar2 + fVar2;
  fVar3 = (float)((ulong)puVar1[3] >> 0x20);
  fVar28 = fVar19 * (fVar19 + fVar19);
  fVar18 = (fVar19 + fVar19) * fVar3;
  fVar11 = fVar19 * fVar23 + fVar27 * fVar3;
  fVar26 = fVar19 * fVar23 - fVar27 * fVar3;
  fVar29 = fVar19 * fVar27 - fVar23 * fVar3;
  fVar13 = (_LC4 - fVar25 * fVar23) - fVar2 * fVar27;
  fVar24 = fVar23 * fVar3 + fVar19 * fVar27;
  fVar14 = fVar2 * fVar23 + fVar18;
  fVar4 = (_LC4 - fVar2 * fVar27) - fVar28;
  fVar18 = fVar2 * fVar23 - fVar18;
  fVar2 = *(float *)(this + 0x68);
  fVar28 = (_LC4 - fVar28) - fVar25 * fVar23;
  fVar25 = *(float *)(this + 0x40);
  fVar19 = *(float *)(this + 0x44);
  fVar3 = *(float *)(this + 0x48);
  local_38._0_4_ = (float)*puVar1;
  local_38._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_38 = CONCAT44(fVar3 * fVar29 + fVar25 * fVar14 + fVar19 * fVar28 + local_38._4_4_,
                      fVar3 * fVar11 + fVar25 * fVar4 + fVar19 * fVar18 + (float)local_38);
  uStack_30 = CONCAT44(fVar3 * 0.0 + fVar25 * 0.0 + fVar19 * 0.0 + 1.0,
                       fVar3 * fVar13 + fVar25 * fVar26 + fVar19 * fVar24 + *(float *)(puVar1 + 1));
  fVar3 = *(float *)(this + 0x60);
  fVar23 = *(float *)(this + 100);
  fVar27 = *(float *)(this + 0x68);
  fVar25 = *(float *)(this + 100);
  fVar19 = *(float *)(this + 0x60);
  if ((float)(_LC2 & (uint)fVar19) <= (float)((uint)fVar25 & _LC2)) {
    auVar22._0_4_ = SQRT(fVar25 * fVar25 + fVar2 * fVar2);
    auVar7._8_4_ = (uint)fVar25 ^ _LC9;
    auVar7._4_4_ = (uint)fVar25 ^ _LC9;
    auVar7._0_4_ = fVar2;
    auVar7._12_4_ = 0;
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = auVar22._0_4_;
    auVar22._12_4_ = auVar22._0_4_;
    auVar7 = divps(auVar7 << 0x20,auVar22);
    auVar5 = auVar7._0_12_;
  }
  else {
    auVar6._12_4_ = (uint)fVar19 ^ _LC9;
    auVar6._8_4_ = (uint)fVar19 ^ _LC9;
    fVar25 = SQRT(fVar19 * fVar19 + fVar2 * fVar2);
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar2;
    auVar20._4_4_ = fVar25;
    auVar20._0_4_ = fVar25;
    auVar20._8_4_ = fVar25;
    auVar20._12_4_ = fVar25;
    auVar7 = divps(auVar6,auVar20);
    auVar5 = auVar7._0_12_;
  }
  fVar25 = auVar5._0_4_;
  fVar9 = auVar5._4_4_;
  fVar10 = auVar5._8_4_;
  fVar2 = *(float *)(this + 0x80);
  auVar21._4_4_ = fVar9;
  auVar21._0_4_ = fVar9;
  auVar21._8_4_ = fVar9;
  auVar21._12_4_ = fVar9;
  auVar16._4_4_ = _LC4;
  auVar16._0_4_ = _LC4;
  auVar16._8_4_ = _LC4;
  auVar16._12_4_ = _LC4;
  auVar8._0_4_ = (uint)fVar2 ^ _LC9 & (uint)fVar2;
  auVar8._4_4_ = (uint)fVar2 ^ _LC9 & (uint)fVar2;
  auVar8._8_4_ = (uint)fVar2 ^ _LC9 & (uint)fVar2;
  auVar8._12_4_ = (uint)fVar2 ^ _LC9 & (uint)fVar2;
  auVar7 = minps(auVar8,auVar16);
  fVar19 = auVar7._0_4_;
  auVar17._0_4_ = (_LC4 - fVar19) * _LC12;
  auVar17._4_4_ = (_LC4 - auVar7._4_4_) * _LC12;
  auVar17._8_4_ = (_LC4 - auVar7._8_4_) * _LC12;
  auVar17._12_4_ = (_LC4 - auVar7._12_4_) * _LC12;
  uVar12 = (int)-(uint)(_LC12 < fVar19) >> 0x1f;
  auVar7 = sqrtps(auVar21,auVar17);
  fVar15 = (float)((uint)auVar17._0_4_ & uVar12 | ~uVar12 & (uint)(fVar19 * fVar19));
  fVar19 = (float)(auVar7._0_4_ & uVar12 | ~uVar12 & (uint)fVar19);
  fVar19 = ((((_LC14 * fVar15 + _LC16) * fVar15 + _LC18) * fVar15 + _LC20) * fVar15 + _LC22) *
           fVar15 * fVar19 + fVar19;
  JPH::DebugRenderer::DrawOpenCone
            (local_38,uStack_30,
             CONCAT44(fVar3 * fVar14 + fVar23 * fVar28 + fVar27 * fVar29,
                      fVar3 * fVar4 + fVar23 * fVar18 + fVar27 * fVar11),
             CONCAT44(fVar3 * 0.0 + fVar23 * 0.0 + fVar27 * 0.0,
                      fVar3 * fVar26 + fVar23 * fVar24 + fVar27 * fVar13),
             CONCAT44(fVar28 * fVar9 + fVar14 * fVar25 + fVar10 * fVar29,
                      fVar18 * fVar9 + fVar4 * fVar25 + fVar10 * fVar11),
             CONCAT44(fVar9 * 0.0 + fVar25 * 0.0 + fVar10 * 0.0,
                      fVar24 * fVar9 + fVar26 * fVar25 + fVar10 * fVar13),
             _LC24 - (float)(((uint)(_LC24 - (fVar19 + fVar19)) & uVar12 | ~uVar12 & (uint)fVar19) ^
                            _LC9 & (uint)fVar2),fVar2 * *(float *)(this + 0xc),param_1,
             (undefined4)Color::sPurple,1,0);
  return;
}



/* JPH::ConeConstraint::SolveVelocityConstraint(float) */

undefined8 JPH::ConeConstraint::SolveVelocityConstraint(float param_1)

{
  float fVar1;
  Body BVar2;
  Body BVar3;
  Body *pBVar4;
  Body *pBVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_RDI;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pBVar4 = *(Body **)(in_RDI + 0x30);
  pBVar5 = *(Body **)(in_RDI + 0x28);
  uVar8 = PointConstraintPart::SolveVelocityConstraint
                    ((PointConstraintPart *)(in_RDI + 0xb0),pBVar5,pBVar4);
  if (*(float *)(in_RDI + 0x1c0) != 0.0) {
    BVar2 = pBVar4[0x78];
    fVar10 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    lVar6 = *(long *)(pBVar4 + 0x48);
    if (BVar2 != (Body)0x0) {
      fVar10 = *(float *)(lVar6 + 0x10);
      fVar13 = *(float *)(lVar6 + 0x14);
      fVar14 = *(float *)(lVar6 + 0x18);
    }
    BVar3 = pBVar5[0x78];
    lVar7 = *(long *)(pBVar5 + 0x48);
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    if (BVar3 != (Body)0x0) {
      fVar9 = *(float *)(lVar7 + 0x10);
      fVar11 = *(float *)(lVar7 + 0x14);
      fVar12 = *(float *)(lVar7 + 0x18);
    }
    fVar1 = *(float *)(in_RDI + 0x1cc);
    fVar10 = (((fVar12 - fVar14) * (float)*(undefined8 *)(in_RDI + 0x98) +
              (fVar11 - fVar13) * (float)((ulong)*(undefined8 *)(in_RDI + 0x90) >> 0x20) +
              (fVar9 - fVar10) * (float)*(undefined8 *)(in_RDI + 0x90) + 0.0) -
             (*(float *)(in_RDI + 0x1c8) * fVar1 + *(float *)(in_RDI + 0x1c4))) *
             *(float *)(in_RDI + 0x1c0) + fVar1;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (_LC55 < fVar10) {
      fVar10 = _LC55;
    }
    *(float *)(in_RDI + 0x1cc) = fVar10;
    fVar10 = fVar10 - fVar1;
    if (fVar10 != 0.0) {
      if (BVar3 == (Body)0x2) {
        fVar13 = *(float *)(in_RDI + 0x1a4);
        fVar14 = *(float *)(in_RDI + 0x1a8);
        fVar9 = *(float *)(in_RDI + 0x1ac);
        *(float *)(lVar7 + 0x10) = *(float *)(lVar7 + 0x10) - fVar10 * *(float *)(in_RDI + 0x1a0);
        *(float *)(lVar7 + 0x14) = *(float *)(lVar7 + 0x14) - fVar10 * fVar13;
        *(float *)(lVar7 + 0x18) = *(float *)(lVar7 + 0x18) - fVar10 * fVar14;
        *(float *)(lVar7 + 0x1c) = *(float *)(lVar7 + 0x1c) - fVar10 * fVar9;
      }
      if (BVar2 == (Body)0x2) {
        fVar13 = *(float *)(in_RDI + 0x1b4);
        fVar14 = *(float *)(in_RDI + 0x1b8);
        fVar9 = *(float *)(in_RDI + 0x1bc);
        *(float *)(lVar6 + 0x10) = fVar10 * *(float *)(in_RDI + 0x1b0) + *(float *)(lVar6 + 0x10);
        *(float *)(lVar6 + 0x14) = fVar10 * fVar13 + *(float *)(lVar6 + 0x14);
        *(float *)(lVar6 + 0x18) = fVar10 * fVar14 + *(float *)(lVar6 + 0x18);
        *(float *)(lVar6 + 0x1c) = fVar10 * fVar9 + *(float *)(lVar6 + 0x1c);
      }
      uVar8 = 1;
    }
  }
  return uVar8;
}



/* JPH::GetRTTIOfType(JPH::ConeConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(ConeConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti,
                      "ConeConstraintSettings",0x80,
                      GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConeConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      ConeConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConeConstraintSettings*)::rtti;
}



/* JPH::ConeConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::ConeConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ConeConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConeConstraint::ConeConstraint(JPH::Body&, JPH::Body&, JPH::ConeConstraintSettings const&)
    */

void __thiscall
JPH::ConeConstraint::ConeConstraint
          (ConeConstraint *this,Body *param_1,Body *param_2,ConeConstraintSettings *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
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
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined1 auVar11 [12];
  
  uVar9 = _LC9;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = uVar1;
  fVar10 = _LC33;
  fVar36 = _LC12;
  *(undefined4 *)(this + 0x14) = uVar3;
  fVar17 = _LC43;
  fVar22 = _LC35;
  this[0x18] = SUB41(*(undefined4 *)(param_3 + 0x14),0);
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x19] = SUB41(uVar1,0);
  *(ConeConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  uVar2 = *(uint *)(param_3 + 0x70);
  *(undefined8 *)(this + 0x20) = uVar4;
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__ConeConstraint_00104298;
  uVar8 = _LC2;
  iVar14 = (int)(fVar10 * (float)(~uVar9 & uVar2) + fVar36);
  fVar10 = (float)iVar14;
  uVar20 = (iVar14 << 0x1f) >> 0x1f;
  fVar22 = (((float)(~uVar9 & uVar2) - fVar22 * fVar10) - _LC37 * fVar10) - fVar10 * _LC39;
  fVar29 = fVar22 * fVar22;
  fVar10 = *(float *)(param_3 + 0x40);
  *(uint *)(this + 0x80) =
       ((uint)(((_LC47 * fVar29 + _LC49) * fVar29 + _LC51) * fVar29 * fVar22 + fVar22) & uVar20 |
       ~uVar20 & (uint)((((_LC41 * fVar29 + fVar17) * fVar29 + _LC45) * fVar29 * fVar29 -
                        fVar36 * fVar29) + _LC4)) ^
       iVar14 << 0x1e & SUB164(__LC31,0) ^ iVar14 << 0x1f;
  fVar36 = *(float *)(param_3 + 0x44);
  if ((float)(uVar8 & (uint)fVar10) <= (float)((uint)fVar36 & uVar8)) {
    fVar10 = *(float *)(param_3 + 0x48);
    iVar14 = *(int *)(param_3 + 0x28);
    auVar13._8_4_ = (uint)fVar36 ^ _LC9;
    auVar13._4_4_ = (uint)fVar36 ^ _LC9;
    fVar36 = SQRT(fVar10 * fVar10 + fVar36 * fVar36);
    auVar13._0_4_ = fVar10;
    auVar13._12_4_ = 0;
    auVar16._4_4_ = fVar36;
    auVar16._0_4_ = fVar36;
    auVar16._8_4_ = fVar36;
    auVar16._12_4_ = fVar36;
    auVar13 = divps(auVar13 << 0x20,auVar16);
    auVar11 = auVar13._0_12_;
    *(undefined1 (*) [16])(this + 0x90) = auVar13;
    fVar10 = _LC4;
  }
  else {
    fVar36 = *(float *)(param_3 + 0x48);
    iVar14 = *(int *)(param_3 + 0x28);
    auVar12._12_4_ = (uint)fVar10 ^ _LC9;
    auVar12._8_4_ = (uint)fVar10 ^ _LC9;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fVar36;
    fVar10 = SQRT(fVar36 * fVar36 + fVar10 * fVar10);
    auVar15._4_4_ = fVar10;
    auVar15._0_4_ = fVar10;
    auVar15._8_4_ = fVar10;
    auVar15._12_4_ = fVar10;
    auVar13 = divps(auVar12,auVar15);
    auVar11 = auVar13._0_12_;
    *(undefined1 (*) [16])(this + 0x90) = auVar13;
    fVar10 = _LC4;
  }
  _LC4 = fVar10;
  if (iVar14 != 1) {
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    uVar6 = *(undefined8 *)(param_3 + 0x68);
    fVar22 = auVar11._8_4_;
    fVar10 = auVar11._0_4_;
    fVar36 = auVar11._4_4_;
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x50);
    uVar7 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(this + 0x70) = uVar5;
    *(undefined8 *)(this + 0x78) = uVar6;
    *(undefined8 *)(this + 0x50) = uVar4;
    *(undefined8 *)(this + 0x58) = uVar7;
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(this + 0x68) = uVar4;
    local_18 = (float)*(undefined8 *)(param_1 + 0x10);
    fStack_14 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fStack_10 = (float)*(undefined8 *)(param_1 + 0x18);
    fStack_c = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    fVar23 = (float)((uint)local_18 ^ __LC56);
    fVar26 = (float)((uint)fStack_14 ^ _UNK_001043d4);
    fVar27 = (float)((uint)fStack_10 ^ _UNK_001043d8);
    fVar28 = (float)((uint)fStack_c ^ _UNK_001043dc);
    fVar30 = (fStack_c * fVar10 + local_18 * 0.0 + fStack_14 * fVar22) - fStack_10 * fVar36;
    fVar29 = (fStack_c * fVar36 - local_18 * fVar22) + fStack_14 * 0.0 + fStack_10 * fVar10;
    fVar17 = ((fStack_c * fVar22 + local_18 * fVar36) - fStack_14 * fVar10) + fStack_10 * 0.0;
    fVar10 = ((fStack_c * 0.0 - local_18 * fVar10) - fStack_14 * fVar36) - fStack_10 * fVar22;
    *(float *)(this + 0x90) =
         (fVar23 * fVar10 + fVar30 * fVar28 + fVar29 * fVar27) - fVar17 * fVar26;
    *(float *)(this + 0x94) =
         (fVar26 * fVar10 - fVar30 * fVar27) + fVar29 * fVar28 + fVar17 * fVar23;
    *(float *)(this + 0x98) =
         ((fVar27 * fVar10 + fVar30 * fVar26) - fVar29 * fVar23) + fVar17 * fVar28;
    *(float *)(this + 0x9c) =
         ((fVar28 * fVar10 - fVar30 * fVar23) - fVar29 * fVar26) - fVar17 * fVar27;
    return;
  }
  fVar36 = *(float *)param_1;
  fVar22 = *(float *)(param_1 + 4);
  fVar17 = *(float *)(param_1 + 8);
  fVar29 = (float)(*(uint *)(param_1 + 0x10) ^ __LC56);
  fVar23 = (float)(*(uint *)(param_1 + 0x14) ^ _UNK_001043d4);
  fVar26 = (float)(*(uint *)(param_1 + 0x18) ^ _UNK_001043d8);
  fVar27 = (float)(*(uint *)(param_1 + 0x1c) ^ _UNK_001043dc);
  fVar28 = (float)(__LC56 ^ *(uint *)(param_2 + 0x10));
  fVar30 = (float)(_UNK_001043d4 ^ *(uint *)(param_2 + 0x14));
  fVar18 = (float)(_UNK_001043d8 ^ *(uint *)(param_2 + 0x18));
  fVar19 = (float)(_UNK_001043dc ^ *(uint *)(param_2 + 0x1c));
  fVar24 = fVar29 + fVar29;
  fVar35 = fVar23 + fVar23;
  fVar37 = fVar26 * (fVar26 + fVar26);
  fVar21 = fVar27 * (fVar26 + fVar26);
  fVar31 = fVar26 * fVar24 + fVar35 * fVar27;
  fVar38 = fVar26 * fVar35 - fVar24 * fVar27;
  fVar25 = fVar24 * fVar27 + fVar26 * fVar35;
  fVar32 = (fVar10 - fVar29 * fVar24) - fVar23 * fVar35;
  fVar33 = fVar23 * fVar24 + fVar21;
  fVar21 = fVar23 * fVar24 - fVar21;
  fVar39 = (fVar10 - fVar37) - fVar29 * fVar24;
  fVar27 = fVar26 * fVar24 - fVar35 * fVar27;
  fVar37 = (fVar10 - fVar23 * fVar35) - fVar37;
  fVar29 = *(float *)(param_3 + 0x30);
  fVar23 = *(float *)(param_3 + 0x34);
  fVar26 = *(float *)(param_3 + 0x38);
  *(float *)(this + 0x40) =
       fVar26 * fVar31 + fVar29 * fVar37 + fVar23 * fVar21 +
       (0.0 - (fVar36 * fVar37 + fVar22 * fVar21 + fVar17 * fVar31));
  *(float *)(this + 0x44) =
       fVar26 * fVar38 + fVar29 * fVar33 + fVar23 * fVar39 +
       (0.0 - (fVar36 * fVar33 + fVar22 * fVar39 + fVar17 * fVar38));
  *(float *)(this + 0x48) =
       fVar26 * fVar32 + fVar29 * fVar27 + fVar23 * fVar25 +
       (0.0 - (fVar36 * fVar27 + fVar22 * fVar25 + fVar17 * fVar32));
  *(float *)(this + 0x4c) = fVar26 * 0.0 + fVar29 * 0.0 + fVar23 * 0.0 + 1.0;
  fVar36 = *(float *)(param_3 + 0x40);
  fVar22 = *(float *)(param_3 + 0x44);
  fVar17 = *(float *)(param_3 + 0x48);
  fVar29 = *(float *)param_2;
  fVar23 = *(float *)(param_2 + 4);
  fVar26 = *(float *)(param_2 + 8);
  fVar35 = fVar28 + fVar28;
  fVar34 = fVar30 + fVar30;
  *(float *)(this + 0x60) = fVar17 * fVar31 + fVar37 * fVar36 + fVar22 * fVar21;
  *(float *)(this + 100) = fVar17 * fVar38 + fVar33 * fVar36 + fVar22 * fVar39;
  *(float *)(this + 0x68) = fVar17 * fVar32 + fVar27 * fVar36 + fVar22 * fVar25;
  *(float *)(this + 0x6c) = fVar17 * 0.0 + fVar36 * 0.0 + fVar22 * 0.0;
  fVar36 = fVar18 * (fVar18 + fVar18);
  fVar27 = fVar19 * (fVar18 + fVar18);
  fVar21 = fVar18 * fVar35 + fVar34 * fVar19;
  fVar31 = fVar18 * fVar34 - fVar35 * fVar19;
  fVar37 = fVar35 * fVar19 + fVar18 * fVar34;
  fVar24 = (fVar10 - fVar28 * fVar35) - fVar30 * fVar34;
  fVar25 = fVar30 * fVar35 + fVar27;
  fVar27 = fVar30 * fVar35 - fVar27;
  fVar17 = (fVar10 - fVar30 * fVar34) - fVar36;
  fVar30 = (fVar10 - fVar36) - fVar28 * fVar35;
  fVar28 = fVar18 * fVar35 - fVar34 * fVar19;
  fVar10 = *(float *)(param_3 + 0x50);
  fVar36 = *(float *)(param_3 + 0x54);
  fVar22 = *(float *)(param_3 + 0x58);
  *(float *)(this + 0x50) =
       fVar22 * fVar21 + fVar10 * fVar17 + fVar36 * fVar27 +
       (0.0 - (fVar26 * fVar21 + fVar23 * fVar27 + fVar29 * fVar17));
  *(float *)(this + 0x54) =
       fVar22 * fVar31 + fVar10 * fVar25 + fVar36 * fVar30 +
       (0.0 - (fVar26 * fVar31 + fVar23 * fVar30 + fVar29 * fVar25));
  *(float *)(this + 0x58) =
       fVar22 * fVar24 + fVar10 * fVar28 + fVar36 * fVar37 +
       (0.0 - (fVar26 * fVar24 + fVar23 * fVar37 + fVar29 * fVar28));
  *(float *)(this + 0x5c) = fVar22 * 0.0 + fVar10 * 0.0 + fVar36 * 0.0 + 1.0;
  fVar10 = *(float *)(param_3 + 0x60);
  fVar36 = *(float *)(param_3 + 100);
  fVar22 = *(float *)(param_3 + 0x68);
  *(float *)(this + 0x70) = fVar22 * fVar21 + fVar17 * fVar10 + fVar36 * fVar27;
  *(float *)(this + 0x74) = fVar22 * fVar31 + fVar25 * fVar10 + fVar36 * fVar30;
  *(float *)(this + 0x78) = fVar22 * fVar24 + fVar28 * fVar10 + fVar36 * fVar37;
  *(float *)(this + 0x7c) = fVar22 * 0.0 + fVar10 * 0.0 + fVar36 * 0.0;
  return;
}



/* JPH::ConeConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

ConeConstraint * __thiscall
JPH::ConeConstraintSettings::Create(ConeConstraintSettings *this,Body *param_1,Body *param_2)

{
  ConeConstraint *this_00;
  
  this_00 = (ConeConstraint *)(*Allocate)(0x1d0);
  ConeConstraint::ConeConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* JPH::ConeConstraint::CalculateRotationConstraintProperties(JPH::Mat44 const&, JPH::Mat44 const&)
    */

void __thiscall
JPH::ConeConstraint::CalculateRotationConstraintProperties
          (ConeConstraint *this,Mat44 *param_1,Mat44 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *(float *)(this + 0x60);
  fVar4 = *(float *)(this + 100);
  fVar7 = *(float *)(this + 0x68);
  fVar8 = fVar3 * *(float *)param_1 + fVar4 * *(float *)(param_1 + 0x10) +
          fVar7 * *(float *)(param_1 + 0x20);
  fVar9 = fVar3 * *(float *)(param_1 + 4) + fVar4 * *(float *)(param_1 + 0x14) +
          fVar7 * *(float *)(param_1 + 0x24);
  fVar10 = fVar3 * *(float *)(param_1 + 8) + fVar4 * *(float *)(param_1 + 0x18) +
           fVar7 * *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(this + 0x70);
  fVar4 = *(float *)(this + 0x74);
  fVar7 = *(float *)(this + 0x78);
  fVar1 = fVar3 * *(float *)param_2 + fVar4 * *(float *)(param_2 + 0x10) +
          fVar7 * *(float *)(param_2 + 0x20);
  fVar2 = fVar3 * *(float *)(param_2 + 4) + fVar4 * *(float *)(param_2 + 0x14) +
          fVar7 * *(float *)(param_2 + 0x24);
  fVar3 = fVar3 * *(float *)(param_2 + 8) + fVar4 * *(float *)(param_2 + 0x18) +
          fVar7 * *(float *)(param_2 + 0x28);
  fVar4 = fVar10 * fVar3 + fVar2 * fVar9 + fVar1 * fVar8 + 0.0;
  *(float *)(this + 0xa0) = fVar4;
  if (fVar4 < *(float *)(this + 0x80)) {
    fVar4 = fVar9 * fVar1 - fVar2 * fVar8;
    fVar7 = fVar10 * fVar2 - fVar3 * fVar9;
    fVar3 = fVar8 * fVar3 - fVar1 * fVar10;
    auVar6._0_4_ = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + 0.0 + fVar3 * fVar3);
    if (0.0 < auVar6._0_4_) {
      auVar5._4_4_ = fVar3;
      auVar5._0_4_ = fVar7;
      auVar5._8_4_ = fVar4;
      auVar5._12_4_ = fVar4;
      auVar6._4_4_ = auVar6._0_4_;
      auVar6._8_4_ = auVar6._0_4_;
      auVar6._12_4_ = auVar6._0_4_;
      auVar6 = divps(auVar5,auVar6);
      *(undefined1 (*) [16])(this + 0x90) = auVar6;
    }
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),0,this + 0x1a0,
               *(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    return;
  }
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConeConstraint::SetupVelocityConstraint(float) */

void JPH::ConeConstraint::SetupVelocityConstraint(float param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ConeConstraint *in_RDI;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Mat44 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Mat44 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)(in_RDI + 0x28);
  lVar2 = *(long *)(in_RDI + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x10);
  fVar6 = (float)*(undefined8 *)(lVar1 + 0x18);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar4 + fVar4;
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
  fVar11 = fVar6 * (fVar6 + fVar6);
  fVar7 = fVar8 * (fVar6 + fVar6);
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x10);
  local_a8._0_4_ = (_LC4 - fVar4 * fVar10) - fVar11;
  local_a8._4_4_ = fVar4 * fVar9 + fVar7;
  local_a8._8_4_ = fVar6 * fVar9 - fVar10 * fVar8;
  local_a8._12_4_ = 0;
  local_98._4_4_ = (_LC4 - fVar11) - fVar3 * fVar9;
  local_98._0_4_ = fVar4 * fVar9 - fVar7;
  uStack_80 = (ulong)(uint)((_LC4 - fVar3 * fVar9) - fVar4 * fVar10);
  fVar7 = fVar5 + fVar5;
  local_98._8_4_ = fVar9 * fVar8 + fVar6 * fVar10;
  local_98._12_4_ = 0;
  local_88 = CONCAT44(fVar6 * fVar10 - fVar9 * fVar8,fVar6 * fVar9 + fVar10 * fVar8);
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar3 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  fVar9 = fVar3 + fVar3;
  local_78 = __LC54;
  uStack_70 = _UNK_00104398;
  local_38 = __LC54;
  uStack_30 = _UNK_00104398;
  fVar8 = fVar6 * (fVar4 + fVar4);
  fVar10 = fVar4 * (fVar4 + fVar4);
  local_68._0_4_ = (_LC4 - fVar3 * fVar9) - fVar10;
  local_68._4_4_ = fVar3 * fVar7 + fVar8;
  local_68._8_4_ = fVar4 * fVar7 - fVar9 * fVar6;
  local_68._12_4_ = 0;
  local_58._4_4_ = (_LC4 - fVar10) - fVar5 * fVar7;
  local_58._0_4_ = fVar3 * fVar7 - fVar8;
  local_58._8_4_ = fVar7 * fVar6 + fVar4 * fVar9;
  local_58._12_4_ = 0;
  local_48 = CONCAT44(fVar4 * fVar9 - fVar7 * fVar6,fVar4 * fVar7 + fVar9 * fVar6);
  uStack_40 = (ulong)(uint)((_LC4 - fVar5 * fVar7) - fVar3 * fVar9);
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(in_RDI + 0x40),*(undefined8 *)(in_RDI + 0x48),
             *(undefined8 *)(in_RDI + 0x50),*(undefined8 *)(in_RDI + 0x58),in_RDI + 0xb0,lVar1,
             local_a8,lVar2,local_68);
  CalculateRotationConstraintProperties(in_RDI,local_a8,local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConeConstraint::SolvePositionConstraint(float, float) */

undefined4 __thiscall
JPH::ConeConstraint::SolvePositionConstraint(ConeConstraint *this,float param_1,float param_2)

{
  Body *pBVar1;
  Body *pBVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Mat44 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  Mat44 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pBVar1 = *(Body **)(this + 0x30);
  pBVar2 = *(Body **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar3 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar7 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar9 = fVar8 + fVar8;
  fVar10 = fVar7 + fVar7;
  fVar5 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar11 = fVar3 * (fVar3 + fVar3);
  fVar6 = fVar5 * (fVar3 + fVar3);
  local_88._0_4_ = (_LC4 - fVar7 * fVar10) - fVar11;
  local_88._4_4_ = fVar7 * fVar9 + fVar6;
  local_88._8_4_ = fVar3 * fVar9 - fVar10 * fVar5;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC4 - fVar11) - fVar8 * fVar9;
  local_78._0_4_ = fVar7 * fVar9 - fVar6;
  local_68._4_4_ = fVar3 * fVar10 - fVar9 * fVar5;
  local_68._0_4_ = fVar3 * fVar9 + fVar10 * fVar5;
  fVar6 = (float)*(undefined8 *)(pBVar2 + 0x18);
  local_78._8_4_ = fVar9 * fVar5 + fVar3 * fVar10;
  local_78._12_4_ = 0;
  fVar3 = (float)*(undefined8 *)(pBVar2 + 0x10);
  fVar11 = fVar3 + fVar3;
  fVar12 = fVar6 * (fVar6 + fVar6);
  local_58 = __LC54;
  uStack_50 = _UNK_00104398;
  fVar5 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x18) >> 0x20);
  local_68._8_4_ = (_LC4 - fVar8 * fVar9) - fVar7 * fVar10;
  local_68._12_4_ = 0;
  fVar8 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x10) >> 0x20);
  fVar9 = fVar8 + fVar8;
  fVar7 = fVar5 * (fVar6 + fVar6);
  local_c8._0_4_ = (_LC4 - fVar8 * fVar9) - fVar12;
  local_c8._4_4_ = fVar8 * fVar11 + fVar7;
  local_c8._8_4_ = fVar6 * fVar11 - fVar9 * fVar5;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC4 - fVar12) - fVar3 * fVar11;
  local_b8._0_4_ = fVar8 * fVar11 - fVar7;
  local_a8._4_4_ = fVar6 * fVar9 - fVar11 * fVar5;
  local_a8._0_4_ = fVar6 * fVar11 + fVar9 * fVar5;
  local_98 = __LC54;
  uStack_90 = _UNK_00104398;
  local_b8._8_4_ = fVar11 * fVar5 + fVar6 * fVar9;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC4 - fVar3 * fVar11) - fVar8 * fVar9;
  local_a8._12_4_ = 0;
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),(PointConstraintPart *)(this + 0xb0),pBVar2,local_c8,
             pBVar1,local_88);
  uVar4 = PointConstraintPart::SolvePositionConstraint
                    ((PointConstraintPart *)(this + 0xb0),pBVar2,pBVar1,param_2);
  fVar3 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar8 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar7 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar9 = fVar8 + fVar8;
  fVar10 = fVar7 + fVar7;
  fVar6 = fVar3 * (fVar3 + fVar3);
  fVar11 = (fVar3 + fVar3) * fVar5;
  local_88._0_4_ = (_LC4 - fVar7 * fVar10) - fVar6;
  local_88._4_4_ = fVar7 * fVar9 + fVar11;
  local_88._8_4_ = fVar3 * fVar9 - fVar10 * fVar5;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC4 - fVar6) - fVar8 * fVar9;
  local_78._0_4_ = fVar7 * fVar9 - fVar11;
  fVar6 = (float)*(undefined8 *)(pBVar2 + 0x18);
  local_78._8_4_ = fVar9 * fVar5 + fVar3 * fVar10;
  local_78._12_4_ = 0;
  local_68._4_4_ = fVar3 * fVar10 - fVar9 * fVar5;
  local_68._0_4_ = fVar3 * fVar9 + fVar10 * fVar5;
  fVar5 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x18) >> 0x20);
  fVar12 = fVar6 * (fVar6 + fVar6);
  fVar3 = (float)*(undefined8 *)(pBVar2 + 0x10);
  fVar13 = (fVar6 + fVar6) * fVar5;
  fVar11 = fVar3 + fVar3;
  local_68._8_4_ = (_LC4 - fVar8 * fVar9) - fVar7 * fVar10;
  local_68._12_4_ = 0;
  fVar8 = (float)((ulong)*(undefined8 *)(pBVar2 + 0x10) >> 0x20);
  local_98 = __LC54;
  uStack_90 = _UNK_00104398;
  fVar7 = fVar8 + fVar8;
  local_58 = __LC54;
  uStack_50 = _UNK_00104398;
  local_a8._0_4_ = fVar6 * fVar11 + fVar7 * fVar5;
  local_c8._0_4_ = (_LC4 - fVar8 * fVar7) - fVar12;
  local_c8._4_4_ = fVar8 * fVar11 + fVar13;
  local_c8._8_4_ = fVar6 * fVar11 - fVar7 * fVar5;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC4 - fVar12) - fVar3 * fVar11;
  local_b8._0_4_ = fVar8 * fVar11 - fVar13;
  local_a8._4_4_ = fVar6 * fVar7 - fVar11 * fVar5;
  local_b8._8_4_ = fVar11 * fVar5 + fVar6 * fVar7;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC4 - fVar3 * fVar11) - fVar8 * fVar7;
  local_a8._12_4_ = 0;
  CalculateRotationConstraintProperties(this,local_c8,local_88);
  if (((*(float *)(this + 0x1c0) != 0.0) &&
      (*(float *)(this + 0xa0) - *(float *)(this + 0x80) != 0.0)) &&
     (*(float *)(this + 0x1c8) == 0.0)) {
    fVar8 = (float)((uint)*(float *)(this + 0x1c0) ^ _LC9) * param_2 *
            (*(float *)(this + 0xa0) - *(float *)(this + 0x80));
    if (pBVar2[0x78] == (Body)0x2) {
      Body::SubRotationStep
                (CONCAT44(fVar8 * *(float *)(this + 0x1a4),fVar8 * *(float *)(this + 0x1a0)),
                 CONCAT44(fVar8 * *(float *)(this + 0x1ac),fVar8 * *(float *)(this + 0x1a8)),pBVar2)
      ;
    }
    if (pBVar1[0x78] == (Body)0x2) {
      Body::AddRotationStep
                (CONCAT44(fVar8 * *(float *)(this + 0x1b4),fVar8 * *(float *)(this + 0x1b0)),
                 CONCAT44(fVar8 * *(float *)(this + 0x1bc),fVar8 * *(float *)(this + 0x1b8)),pBVar1)
      ;
    }
    uVar4 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::ConeConstraint::GetSubType() const */

undefined8 JPH::ConeConstraint::GetSubType(void)

{
  return 5;
}



/* JPH::ConeConstraintSettings::~ConeConstraintSettings() */

void __thiscall JPH::ConeConstraintSettings::~ConeConstraintSettings(ConeConstraintSettings *this)

{
  return;
}



/* JPH::ConeConstraintSettings::~ConeConstraintSettings() */

void __thiscall JPH::ConeConstraintSettings::~ConeConstraintSettings(ConeConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::ConeConstraint::~ConeConstraint() */

void __thiscall JPH::ConeConstraint::~ConeConstraint(ConeConstraint *this)

{
  return;
}



/* JPH::ConeConstraint::~ConeConstraint() */

void __thiscall JPH::ConeConstraint::~ConeConstraint(ConeConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102674. Too many branches */
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
  
  uVar6 = _UNK_00104398;
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
  local_58 = (_LC4 - fVar8 * fVar26) - fVar27;
  register0x00001284 = fVar8 * fVar25 + fVar21;
  register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
  register0x0000128c = 0;
  local_48._4_4_ = (_LC4 - fVar27) - fVar7 * fVar25;
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
  local_38._8_4_ = (_LC4 - fVar7 * fVar25) - fVar8 * fVar26;
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
  *(undefined8 *)(param_1 + 0x30) = __LC54;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_001043a4;
  auVar5._0_4_ = __LC29;
  auVar5._8_4_ = _UNK_001043a8;
  auVar5._12_4_ = _UNK_001043ac;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC29);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_001043a4);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_001043a8);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_001043ac);
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
  if (auVar5._0_4_ <= __LC30) {
    return;
  }
  fVar11 = _LC12 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC31 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001043b4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001043b8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001043bc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC33 * fVar17 + _LC12);
  iVar14 = (int)(_LC33 * fVar18 + _LC12);
  iVar15 = (int)(_LC33 * fVar19 + _LC12);
  iVar16 = (int)(_LC33 * fVar20 + _LC12);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC35 * fVar4) - _LC37 * fVar4) - fVar4 * _LC39;
  fVar18 = ((fVar18 - _LC35 * fVar6) - _LC37 * fVar6) - fVar6 * _LC39;
  fVar7 = ((fVar19 - _LC35 * fVar7) - _LC37 * fVar7) - fVar7 * _LC39;
  fVar9 = ((fVar20 - _LC35 * fVar9) - _LC37 * fVar9) - fVar9 * _LC39;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC41 * fVar4 + _LC43) * fVar4 + _LC45) * fVar4 * fVar4 - _LC12 * fVar4) + _LC4;
  fVar20 = (((_LC41 * fVar22 + _LC43) * fVar22 + _LC45) * fVar22 * fVar22 - _LC12 * fVar22) + _LC4;
  fVar8 = (((_LC41 * fVar24 + _LC43) * fVar24 + _LC45) * fVar24 * fVar24 - _LC12 * fVar24) + _LC4;
  fVar10 = (((_LC41 * fVar26 + _LC43) * fVar26 + _LC45) * fVar26 * fVar26 - _LC12 * fVar26) + _LC4;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC47 * fVar4 + _LC49) * fVar4 + _LC51) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC47 * fVar22 + _LC49) * fVar22 + _LC51) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC47 * fVar24 + _LC49) * fVar24 + _LC51) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC47 * fVar26 + _LC49) * fVar26 + _LC51) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC52 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC31 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC52 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC31 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001043c4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001043b4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001043c4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001043b4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001043c8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001043b8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001043c8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001043b8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001043cc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001043bc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001043cc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001043bc ^
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
  if (auVar5._0_4_ <= __LC30) {
    return;
  }
  fVar11 = _LC53 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC31 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001043b4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001043b8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001043bc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC33 * fVar17 + _LC12);
  iVar14 = (int)(_LC33 * fVar18 + _LC12);
  iVar15 = (int)(_LC33 * fVar19 + _LC12);
  iVar16 = (int)(_LC33 * fVar20 + _LC12);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC35 * fVar4) - _LC37 * fVar4) - fVar4 * _LC39;
  fVar18 = ((fVar18 - _LC35 * fVar6) - _LC37 * fVar6) - fVar6 * _LC39;
  fVar7 = ((fVar19 - _LC35 * fVar7) - _LC37 * fVar7) - fVar7 * _LC39;
  fVar9 = ((fVar20 - _LC35 * fVar9) - _LC37 * fVar9) - fVar9 * _LC39;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC41 * fVar4 + _LC43) * fVar4 + _LC45) * fVar4 * fVar4 - _LC12 * fVar4) + _LC4;
  fVar20 = (((_LC41 * fVar22 + _LC43) * fVar22 + _LC45) * fVar22 * fVar22 - _LC12 * fVar22) + _LC4;
  fVar8 = (((_LC41 * fVar24 + _LC43) * fVar24 + _LC45) * fVar24 * fVar24 - _LC12 * fVar24) + _LC4;
  fVar10 = (((_LC41 * fVar26 + _LC43) * fVar26 + _LC45) * fVar26 * fVar26 - _LC12 * fVar26) + _LC4;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC47 * fVar4 + _LC49) * fVar4 + _LC51) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC47 * fVar22 + _LC49) * fVar22 + _LC51) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC47 * fVar24 + _LC49) * fVar24 + _LC51) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC47 * fVar26 + _LC49) * fVar26 + _LC51) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC52 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC31 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC52 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC31 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001043c4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001043b4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001043c4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001043b4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001043c8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001043b8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001043c8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001043b8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001043cc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001043bc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001043cc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001043bc ^
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
    uVar20 = _UNK_00104398;
    uVar18 = __LC54;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC9);
    fVar24 = (float)((uint)fVar15 ^ _LC9);
    fVar26 = (float)((uint)fVar13 ^ _LC9);
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
    uVar7 = _UNK_00104398;
    *(undefined8 *)(param_1 + 0x14) = __LC54;
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
    uVar18 = __LC54;
    uVar20 = _UNK_00104398;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC9);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC9);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC9);
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
      auVar16._4_4_ = _UNK_00104374;
      auVar16._0_4_ = __LC6;
      auVar16._8_4_ = _UNK_00104378;
      auVar16._12_4_ = _UNK_0010437c;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_00104374;
      bVar7 = auVar30._8_4_ == _UNK_00104378;
      bVar8 = auVar30._12_4_ == _UNK_0010437c;
      *pfVar5 = (float)(-(uint)(auVar30._0_4_ == __LC6) & (uint)(*pfVar5 - fVar22 * fVar21));
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
      auVar15._4_4_ = _UNK_00104374;
      auVar15._0_4_ = __LC6;
      auVar15._8_4_ = _UNK_00104378;
      auVar15._12_4_ = _UNK_0010437c;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_00104374;
      bVar7 = auVar31._8_4_ == _UNK_00104378;
      bVar8 = auVar31._12_4_ == _UNK_0010437c;
      *pfVar4 = (float)((uint)(fVar22 * fVar21 + *pfVar4) & -(uint)(auVar31._0_4_ == __LC6));
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
    fVar23 = (float)((uint)param_3 ^ _LC9);
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
      auVar19._4_4_ = _UNK_00104374;
      auVar19._0_4_ = __LC6;
      auVar19._8_4_ = _UNK_00104378;
      auVar19._12_4_ = _UNK_0010437c;
      auVar24 = auVar24 & auVar19;
      bVar5 = auVar24._4_4_ == _UNK_00104374;
      bVar6 = auVar24._8_4_ == _UNK_00104378;
      bVar7 = auVar24._12_4_ == _UNK_0010437c;
      fVar28 = *(float *)(this + 0x30);
      fVar11 = *(float *)(this + 0x34);
      fVar12 = *(float *)(this + 0x38);
      fVar13 = *(float *)(this + 0x3c);
      fVar14 = *(float *)(this + 0x20);
      fVar15 = *(float *)(this + 0x24);
      fVar16 = *(float *)(this + 0x28);
      fVar17 = *(float *)(this + 0x2c);
      *(float *)param_1 = fVar2 - (float)(-(uint)(auVar24._0_4_ == __LC6) & (uint)(fVar27 * fVar23))
      ;
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
      auVar18._4_4_ = _UNK_00104374;
      auVar18._0_4_ = __LC6;
      auVar18._8_4_ = _UNK_00104378;
      auVar18._12_4_ = _UNK_0010437c;
      auVar26 = auVar26 & auVar18;
      bVar5 = auVar26._4_4_ == _UNK_00104374;
      bVar6 = auVar26._8_4_ == _UNK_00104378;
      bVar7 = auVar26._12_4_ == _UNK_0010437c;
      fVar8 = *(float *)(this + 0x70);
      fVar9 = *(float *)(this + 0x74);
      fVar10 = *(float *)(this + 0x78);
      fVar27 = *(float *)(this + 0x7c);
      *(float *)param_2 =
           (float)((uint)(fVar2 * fVar23) & -(uint)(auVar26._0_4_ == __LC6)) + *(float *)param_2;
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
    auVar6._4_4_ = _UNK_001043a4;
    auVar6._0_4_ = __LC29;
    auVar6._8_4_ = _UNK_001043a8;
    auVar6._12_4_ = _UNK_001043ac;
    auVar24 = auVar24 & auVar6;
    uVar23 = -(uint)(auVar24._0_4_ == __LC29);
    uVar26 = -(uint)(auVar24._4_4_ == _UNK_001043a4);
    uVar27 = -(uint)(auVar24._8_4_ == _UNK_001043a8);
    bVar4 = auVar24._12_4_ == _UNK_001043ac;
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
    fVar11 = (_LC4 - fVar20 * fVar21) - fVar19;
    fVar15 = fVar33 * fVar21 + fVar18 * fVar7;
    fVar12 = fVar33 * fVar21 - fVar18 * fVar7;
    fVar19 = (_LC4 - fVar19) - fVar22 * fVar18;
    fVar28 = fVar20 * fVar18 - fVar8;
    fVar8 = fVar8 + fVar20 * fVar18;
    fVar22 = (_LC4 - fVar22 * fVar18) - fVar20 * fVar21;
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
    auVar5._4_4_ = _UNK_001043a4;
    auVar5._0_4_ = __LC29;
    auVar5._8_4_ = _UNK_001043a8;
    auVar5._12_4_ = _UNK_001043ac;
    auVar25 = auVar25 & auVar5;
    uVar23 = -(uint)(auVar25._0_4_ == __LC29);
    uVar26 = -(uint)(auVar25._4_4_ == _UNK_001043a4);
    uVar27 = -(uint)(auVar25._8_4_ == _UNK_001043a8);
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
    fVar29 = (_LC4 - fVar16 * fVar28) - fVar14 * fVar30;
    fVar15 = (_LC4 - fVar14 * fVar30) - fVar33;
    fVar32 = (_LC4 - fVar33) - fVar16 * fVar28;
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
             -(uint)(auVar25._12_4_ == _UNK_001043ac);
  }
  *(float *)param_1[1] = fVar9;
  *(float *)(param_1[1] + 4) = fVar10;
  *(float *)(param_1[1] + 8) = fVar13;
  *(uint *)(param_1[1] + 0xc) = uVar23;
  fVar15 = _LC4;
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



/* JPH::GetRTTIOfType(JPH::ConeConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC57;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConeConstraint::~ConeConstraint() */

void __thiscall JPH::ConeConstraint::~ConeConstraint(ConeConstraint *this)

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
/* JPH::ConeConstraintSettings::~ConeConstraintSettings() */

void __thiscall JPH::ConeConstraintSettings::~ConeConstraintSettings(ConeConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



