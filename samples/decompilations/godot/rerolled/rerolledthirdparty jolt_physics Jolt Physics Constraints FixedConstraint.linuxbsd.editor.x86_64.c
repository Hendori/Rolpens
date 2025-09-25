/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::FixedConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::FixedConstraint::NotifyShapeChanged
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



/* JPH::FixedConstraint::ResetWarmStart() */

void __thiscall JPH::FixedConstraint::ResetWarmStart(FixedConstraint *this)

{
  *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  return;
}



/* JPH::FixedConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::FixedConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::FixedConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::FixedConstraintSettings::SaveBinaryState(FixedConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
                    /* WARNING: Could not recover jumptable at 0x0010018f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  return;
}



/* JPH::FixedConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::FixedConstraintSettings::RestoreBinaryState(FixedConstraintSettings *this,StreamIn *param_1)

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
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::FixedConstraint::WarmStartVelocityConstraint(FixedConstraint *this,float param_1)

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
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar4 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x28);
  fVar26 = *(float *)(this + 0x130) * param_1;
  fVar29 = *(float *)(this + 0x134) * param_1;
  fVar30 = *(float *)(this + 0x138) * param_1;
  auVar31._4_4_ = -(uint)(fVar29 == 0.0);
  auVar31._0_4_ = -(uint)(fVar26 == 0.0);
  auVar31._8_4_ = -(uint)(fVar30 == 0.0);
  auVar31._12_4_ = -(uint)(*(float *)(this + 0x13c) * param_1 == 0.0);
  *(float *)(this + 0x130) = fVar26;
  *(float *)(this + 0x134) = fVar29;
  *(float *)(this + 0x138) = fVar30;
  *(float *)(this + 0x13c) = *(float *)(this + 0x13c) * param_1;
  uVar23 = movmskps(in_EAX,auVar31);
  uVar24 = (ulong)~uVar23;
  if ((~uVar23 & 7) != 0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      uVar24 = *(ulong *)(lVar5 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar25 = *(float *)(this + 0x74);
      fVar1 = *(float *)(this + 0x78);
      fVar10 = *(float *)(this + 0x7c);
      fVar11 = *(float *)(this + 0x84);
      fVar12 = *(float *)(this + 0x88);
      fVar13 = *(float *)(this + 0x8c);
      fVar14 = *(float *)(this + 0x94);
      fVar15 = *(float *)(this + 0x98);
      fVar16 = *(float *)(this + 0x9c);
      *(float *)(uVar24 + 0x10) =
           *(float *)(uVar24 + 0x10) -
           (fVar26 * *(float *)(this + 0x70) + fVar29 * *(float *)(this + 0x80) +
           fVar30 * *(float *)(this + 0x90));
      *(float *)(uVar24 + 0x14) =
           *(float *)(uVar24 + 0x14) - (fVar26 * fVar25 + fVar29 * fVar11 + fVar30 * fVar14);
      *(float *)(uVar24 + 0x18) =
           *(float *)(uVar24 + 0x18) - (fVar26 * fVar1 + fVar29 * fVar12 + fVar30 * fVar15);
      *(float *)(uVar24 + 0x1c) =
           *(float *)(uVar24 + 0x1c) - (fVar26 * fVar10 + fVar29 * fVar13 + fVar30 * fVar16);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      uVar24 = *(ulong *)(lVar4 + 0x48);
      fVar25 = *(float *)(this + 0xb4);
      fVar1 = *(float *)(this + 0xb8);
      fVar10 = *(float *)(this + 0xbc);
      fVar11 = *(float *)(this + 0xc4);
      fVar12 = *(float *)(this + 200);
      fVar13 = *(float *)(this + 0xcc);
      fVar14 = *(float *)(this + 0xd4);
      fVar15 = *(float *)(this + 0xd8);
      fVar16 = *(float *)(this + 0xdc);
      *(float *)(uVar24 + 0x10) =
           fVar30 * *(float *)(this + 0xd0) +
           fVar26 * *(float *)(this + 0xb0) + fVar29 * *(float *)(this + 0xc0) +
           *(float *)(uVar24 + 0x10);
      *(float *)(uVar24 + 0x14) =
           fVar30 * fVar14 + fVar26 * fVar25 + fVar29 * fVar11 + *(float *)(uVar24 + 0x14);
      *(float *)(uVar24 + 0x18) =
           fVar30 * fVar15 + fVar26 * fVar1 + fVar29 * fVar12 + *(float *)(uVar24 + 0x18);
      *(float *)(uVar24 + 0x1c) =
           fVar30 * fVar16 + fVar26 * fVar10 + fVar29 * fVar13 + *(float *)(uVar24 + 0x1c);
    }
  }
  fVar26 = param_1 * *(float *)(this + 0x220);
  fVar29 = param_1 * *(float *)(this + 0x224);
  fVar30 = param_1 * *(float *)(this + 0x228);
  fVar25 = param_1 * *(float *)(this + 0x22c);
  auVar27._4_4_ = -(uint)(fVar29 == 0.0);
  auVar27._0_4_ = -(uint)(fVar26 == 0.0);
  auVar27._8_4_ = -(uint)(fVar30 == 0.0);
  auVar27._12_4_ = -(uint)(fVar25 == 0.0);
  *(float *)(this + 0x220) = fVar26;
  *(float *)(this + 0x224) = fVar29;
  *(float *)(this + 0x228) = fVar30;
  *(float *)(this + 0x22c) = fVar25;
  uVar23 = movmskps((int)uVar24,auVar27);
  if ((~uVar23 & 7) != 0) {
    if (*(char *)(lVar5 + 0x78) == '\x02') {
      pfVar6 = *(float **)(lVar5 + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar1 = pfVar6[0x16];
      bVar3 = *(byte *)((long)pfVar6 + 0x7a);
      auVar28._1_3_ = 0;
      auVar28[0] = bVar3;
      auVar28[4] = bVar3;
      auVar28._5_3_ = 0;
      auVar28[8] = bVar3;
      auVar28._9_3_ = 0;
      auVar28[0xc] = bVar3;
      auVar28._13_3_ = 0;
      auVar22._4_4_ = _UNK_00104574;
      auVar22._0_4_ = __LC6;
      auVar22._8_4_ = _UNK_00104578;
      auVar22._12_4_ = _UNK_0010457c;
      auVar28 = auVar28 & auVar22;
      bVar7 = auVar28._4_4_ == _UNK_00104574;
      bVar8 = auVar28._8_4_ == _UNK_00104578;
      bVar9 = auVar28._12_4_ == _UNK_0010457c;
      *pfVar6 = (float)(-(uint)(auVar28._0_4_ == __LC6) & (uint)(*pfVar6 - fVar1 * fVar26));
      pfVar6[1] = (float)(-(uint)bVar7 & (uint)(pfVar6[1] - fVar1 * fVar29));
      pfVar6[2] = (float)(-(uint)bVar8 & (uint)(pfVar6[2] - fVar1 * fVar30));
      pfVar6[3] = (float)(-(uint)bVar9 & (uint)(pfVar6[3] - fVar1 * fVar25));
      fVar1 = *(float *)(this + 0x174);
      fVar10 = *(float *)(this + 0x178);
      fVar11 = *(float *)(this + 0x17c);
      fVar12 = *(float *)(this + 0x164);
      fVar13 = *(float *)(this + 0x168);
      fVar14 = *(float *)(this + 0x16c);
      fVar15 = *(float *)(this + 0x184);
      fVar16 = *(float *)(this + 0x188);
      fVar17 = *(float *)(this + 0x18c);
      fVar18 = *(float *)(this + 0x194);
      fVar19 = *(float *)(this + 0x198);
      fVar20 = *(float *)(this + 0x19c);
      pfVar6[4] = pfVar6[4] -
                  (fVar26 * *(float *)(this + 0x160) + fVar29 * *(float *)(this + 0x170) +
                   fVar30 * *(float *)(this + 0x180) + *(float *)(this + 400));
      pfVar6[5] = pfVar6[5] - (fVar26 * fVar12 + fVar29 * fVar1 + fVar30 * fVar15 + fVar18);
      pfVar6[6] = pfVar6[6] - (fVar26 * fVar13 + fVar29 * fVar10 + fVar30 * fVar16 + fVar19);
      pfVar6[7] = pfVar6[7] - (fVar26 * fVar14 + fVar29 * fVar11 + fVar30 * fVar17 + fVar20);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      pfVar6 = *(float **)(lVar4 + 0x48);
      bVar3 = *(byte *)((long)pfVar6 + 0x7a);
      fVar1 = pfVar6[0x16];
      auVar32._1_3_ = 0;
      auVar32[0] = bVar3;
      auVar32[4] = bVar3;
      auVar32._5_3_ = 0;
      auVar32[8] = bVar3;
      auVar32._9_3_ = 0;
      auVar32[0xc] = bVar3;
      auVar32._13_3_ = 0;
      auVar21._4_4_ = _UNK_00104574;
      auVar21._0_4_ = __LC6;
      auVar21._8_4_ = _UNK_00104578;
      auVar21._12_4_ = _UNK_0010457c;
      auVar32 = auVar32 & auVar21;
      bVar7 = auVar32._4_4_ == _UNK_00104574;
      bVar8 = auVar32._8_4_ == _UNK_00104578;
      bVar9 = auVar32._12_4_ == _UNK_0010457c;
      *pfVar6 = (float)((uint)(fVar1 * fVar26 + *pfVar6) & -(uint)(auVar32._0_4_ == __LC6));
      pfVar6[1] = (float)((uint)(fVar1 * fVar29 + pfVar6[1]) & -(uint)bVar7);
      pfVar6[2] = (float)((uint)(fVar1 * fVar30 + pfVar6[2]) & -(uint)bVar8);
      pfVar6[3] = (float)((uint)(fVar1 * fVar25 + pfVar6[3]) & -(uint)bVar9);
      fVar25 = *(float *)(this + 0x1b4);
      fVar1 = *(float *)(this + 0x1b8);
      fVar10 = *(float *)(this + 0x1bc);
      fVar11 = *(float *)(this + 0x1a4);
      fVar12 = *(float *)(this + 0x1a8);
      fVar13 = *(float *)(this + 0x1ac);
      fVar14 = *(float *)(this + 0x1c4);
      fVar15 = *(float *)(this + 0x1c8);
      fVar16 = *(float *)(this + 0x1cc);
      fVar17 = *(float *)(this + 0x1d4);
      fVar18 = *(float *)(this + 0x1d8);
      fVar19 = *(float *)(this + 0x1dc);
      pfVar6[4] = fVar30 * *(float *)(this + 0x1c0) +
                  fVar26 * *(float *)(this + 0x1a0) + fVar29 * *(float *)(this + 0x1b0) +
                  *(float *)(this + 0x1d0) + pfVar6[4];
      pfVar6[5] = fVar30 * fVar14 + fVar26 * fVar11 + fVar29 * fVar25 + fVar17 + pfVar6[5];
      pfVar6[6] = fVar30 * fVar15 + fVar26 * fVar12 + fVar29 * fVar1 + fVar18 + pfVar6[6];
      pfVar6[7] = fVar30 * fVar16 + fVar26 * fVar13 + fVar29 * fVar10 + fVar19 + pfVar6[7];
      return;
    }
  }
  return;
}



/* JPH::FixedConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::FixedConstraint::SaveState(FixedConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x130,0xc);
                    /* WARNING: Could not recover jumptable at 0x001004a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x220,0xc);
  return;
}



/* JPH::FixedConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::FixedConstraint::RestoreState(FixedConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x130,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x220,0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*Allocate)(0x90);
  uVar3 = _UNK_00104558;
  uVar2 = __LC1;
  uVar1 = _LC3;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined1 *)((long)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_GetRTTI_00104440;
  puVar4[2] = 0;
  puVar4[3] = 0x3f80000000000000;
  puVar4[4] = 0;
  *(undefined4 *)(puVar4 + 5) = 1;
  *(undefined1 *)((long)puVar4 + 0x2c) = 0;
  *(undefined1 (*) [16])(puVar4 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 8) = ZEXT416(uVar1);
  puVar4[10] = uVar2;
  puVar4[0xb] = uVar3;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = ZEXT416(uVar1);
  puVar4[0x10] = uVar2;
  puVar4[0x11] = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::GetConstraintSettings() const */

void JPH::FixedConstraint::GetConstraintSettings(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar10 = (undefined8 *)(*Allocate)(0x90);
  uVar6 = _UNK_00104558;
  uVar5 = __LC1;
  *(undefined4 *)(puVar10 + 1) = 0;
  fVar1 = _LC3;
  *(undefined1 *)((long)puVar10 + 0xc) = 1;
  *puVar10 = &PTR_GetRTTI_00104440;
  puVar10[2] = 0;
  puVar10[3] = 0x3f80000000000000;
  puVar10[4] = 0;
  *(undefined4 *)(puVar10 + 5) = 1;
  *(undefined1 *)((long)puVar10 + 0x2c) = 0;
  *(undefined1 (*) [16])(puVar10 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar10 + 8) = ZEXT416((uint)fVar1);
  puVar10[10] = uVar5;
  puVar10[0xb] = uVar6;
  *(undefined1 (*) [16])(puVar10 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar10 + 0xe) = ZEXT416((uint)fVar1);
  puVar10[0x10] = uVar5;
  puVar10[0x11] = uVar6;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar9 = _UNK_00104558;
  uVar8 = __LC1;
  uVar5 = *(undefined8 *)(in_RSI + 0x40);
  uVar6 = *(undefined8 *)(in_RSI + 0x48);
  fVar1 = *(float *)(in_RSI + 0x6c);
  *(undefined1 (*) [16])(puVar10 + 8) = ZEXT416((uint)_LC3);
  fVar2 = *(float *)(in_RSI + 100);
  puVar10[10] = uVar8;
  puVar10[0xb] = uVar9;
  fVar3 = *(float *)(in_RSI + 0x60);
  fVar4 = *(float *)(in_RSI + 0x68);
  puVar10[6] = uVar5;
  puVar10[7] = uVar6;
  uVar5 = *(undefined8 *)(in_RSI + 0x50);
  uVar6 = *(undefined8 *)(in_RSI + 0x58);
  fVar11 = fVar1 + fVar1;
  *(undefined4 *)(puVar10 + 5) = 0;
  fVar12 = fVar3 + fVar3;
  puVar10[0xc] = uVar5;
  puVar10[0xd] = uVar6;
  fVar7 = _LC3;
  fVar13 = fVar4 * fVar12 - fVar2 * fVar11;
  puVar10[0xe] = CONCAT44(fVar12 * fVar2 + fVar4 * fVar11,(fVar3 * fVar12 + fVar1 * fVar11) - _LC3);
  puVar10[0xf] = CONCAT44(fVar13,fVar13);
  fVar13 = fVar2 + fVar2;
  fVar12 = fVar11 * fVar3 + fVar4 * fVar13;
  *(float *)(puVar10 + 0x10) = fVar3 * fVar13 - fVar4 * fVar11;
  *(float *)((long)puVar10 + 0x84) = (fVar13 * fVar2 + fVar1 * fVar11) - fVar7;
  *(float *)(puVar10 + 0x11) = fVar12;
  *(float *)((long)puVar10 + 0x8c) = fVar12;
  *in_RDI = puVar10;
  LOCK();
  *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
  UNLOCK();
  return;
}



/* JPH::FixedConstraintSettings::GetRTTI() const */

undefined1 * JPH::FixedConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti,
                      "FixedConstraintSettings",0x90,
                      GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti;
}



/* JPH::FixedConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::FixedConstraint::DrawConstraint(FixedConstraint *this,DebugRenderer *param_1)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  fVar12 = (float)puVar2[2];
  uVar3 = *puVar2;
  fVar13 = (float)puVar2[3];
  fVar24 = (float)((ulong)puVar2[2] >> 0x20);
  fVar16 = fVar24 + fVar24;
  fVar25 = (float)((ulong)puVar2[3] >> 0x20);
  fVar28 = fVar12 + fVar12;
  puVar4 = *(undefined8 **)(this + 0x30);
  fVar23 = fVar13 * (fVar13 + fVar13);
  fVar15 = (float)puVar4[2];
  fVar27 = fVar15 + fVar15;
  fVar14 = (float)puVar4[3];
  fVar21 = fVar25 * (fVar13 + fVar13);
  uVar5 = *puVar4;
  fVar19 = (float)((ulong)puVar4[2] >> 0x20);
  fVar1 = *(float *)(puVar4 + 1);
  fVar29 = fVar19 + fVar19;
  fVar20 = (float)((ulong)puVar4[3] >> 0x20);
  fVar18 = fVar20 * (fVar14 + fVar14);
  fVar6 = *(float *)(this + 0x40);
  fVar7 = *(float *)(this + 0x44);
  fVar8 = *(float *)(this + 0x48);
  fVar30 = fVar14 * (fVar14 + fVar14);
  fVar22 = _LC3 - fVar19 * fVar29;
  fVar9 = *(float *)(this + 0x50);
  fVar10 = *(float *)(this + 0x54);
  fVar11 = *(float *)(this + 0x58);
  local_78 = (float)uVar3;
  fStack_74 = (float)((ulong)uVar3 >> 0x20);
  fVar26 = _LC3 - fVar30;
  fVar17 = _LC3 - fVar15 * fVar27;
  local_68 = (float)uVar5;
  fStack_64 = (float)((ulong)uVar5 >> 0x20);
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar3,(ulong)(uint)*(float *)(puVar2 + 1) | 0x3f80000000000000,
             CONCAT44(fVar6 * (fVar24 * fVar28 + fVar21) +
                      ((_LC3 - fVar23) - fVar12 * fVar28) * fVar7 +
                      fVar8 * (fVar13 * fVar16 - fVar28 * fVar25) + fStack_74,
                      fVar6 * ((_LC3 - fVar24 * fVar16) - fVar23) +
                      (fVar24 * fVar28 - fVar21) * fVar7 +
                      fVar8 * (fVar13 * fVar28 + fVar16 * fVar25) + local_78),
             CONCAT44(fVar6 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0 + 1.0,
                      fVar6 * (fVar13 * fVar28 - fVar16 * fVar25) +
                      (fVar28 * fVar25 + fVar13 * fVar16) * fVar7 +
                      fVar8 * ((_LC3 - fVar12 * fVar28) - fVar24 * fVar16) + *(float *)(puVar2 + 1))
             ,param_1,(undefined4)Color::sGreen);
                    /* WARNING: Could not recover jumptable at 0x00100b51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar5,(ulong)(uint)fVar1 | 0x3f80000000000000,
             CONCAT44((fVar19 * fVar27 + fVar18) * fVar9 + (fVar26 - fVar15 * fVar27) * fVar10 +
                      (fVar14 * fVar29 - fVar27 * fVar20) * fVar11 + fStack_64,
                      (fVar22 - fVar30) * fVar9 + (fVar19 * fVar27 - fVar18) * fVar10 +
                      (fVar14 * fVar27 + fVar29 * fVar20) * fVar11 + local_68),
             CONCAT44(fVar9 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + 1.0,
                      (fVar14 * fVar27 - fVar29 * fVar20) * fVar9 +
                      (fVar27 * fVar20 + fVar14 * fVar29) * fVar10 +
                      (fVar17 - fVar19 * fVar29) * fVar11 + fVar1),param_1,(undefined4)Color::sBlue)
  ;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::SetupVelocityConstraint(float) */

void JPH::FixedConstraint::SetupVelocityConstraint(float param_1)

{
  Mat44 *pMVar1;
  Mat44 *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long in_RDI;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Body local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  pMVar1 = *(Mat44 **)(in_RDI + 0x28);
  pMVar2 = *(Mat44 **)(in_RDI + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)(pMVar1 + 0x10);
  fVar6 = (float)*(undefined8 *)(pMVar1 + 0x18);
  fVar4 = (float)((ulong)*(undefined8 *)(pMVar1 + 0x10) >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar4 + fVar4;
  fVar8 = (float)((ulong)*(undefined8 *)(pMVar1 + 0x18) >> 0x20);
  fVar11 = fVar6 * (fVar6 + fVar6);
  fVar7 = fVar8 * (fVar6 + fVar6);
  fVar5 = (float)*(undefined8 *)(pMVar2 + 0x10);
  local_b8._0_4_ = (_LC3 - fVar4 * fVar10) - fVar11;
  local_b8._4_4_ = fVar4 * fVar9 + fVar7;
  local_b8._8_4_ = fVar6 * fVar9 - fVar10 * fVar8;
  local_b8._12_4_ = 0;
  local_a8._4_4_ = (_LC3 - fVar11) - fVar3 * fVar9;
  local_a8._0_4_ = fVar4 * fVar9 - fVar7;
  uStack_90 = (ulong)(uint)((_LC3 - fVar3 * fVar9) - fVar4 * fVar10);
  fVar7 = fVar5 + fVar5;
  local_a8._8_4_ = fVar9 * fVar8 + fVar6 * fVar10;
  local_a8._12_4_ = 0;
  local_98 = CONCAT44(fVar6 * fVar10 - fVar9 * fVar8,fVar6 * fVar9 + fVar10 * fVar8);
  fVar4 = (float)*(undefined8 *)(pMVar2 + 0x18);
  fVar3 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  fVar9 = fVar3 + fVar3;
  local_88 = __LC43;
  uStack_80 = _UNK_00104588;
  local_48 = __LC43;
  uStack_40 = _UNK_00104588;
  fVar8 = fVar6 * (fVar4 + fVar4);
  fVar10 = fVar4 * (fVar4 + fVar4);
  local_78._0_4_ = (_LC3 - fVar3 * fVar9) - fVar10;
  local_78._4_4_ = fVar3 * fVar7 + fVar8;
  local_78._8_4_ = fVar4 * fVar7 - fVar9 * fVar6;
  local_78._12_4_ = 0;
  local_68._4_4_ = (_LC3 - fVar10) - fVar5 * fVar7;
  local_68._0_4_ = fVar3 * fVar7 - fVar8;
  local_68._8_4_ = fVar7 * fVar6 + fVar4 * fVar9;
  local_68._12_4_ = 0;
  local_58 = CONCAT44(fVar4 * fVar9 - fVar7 * fVar6,fVar4 * fVar7 + fVar9 * fVar6);
  uStack_50 = (ulong)(uint)((_LC3 - fVar5 * fVar7) - fVar3 * fVar9);
  RotationEulerConstraintPart::CalculateConstraintProperties
            ((Body *)(in_RDI + 0x70),pMVar1,local_b8,pMVar2);
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(in_RDI + 0x40),*(undefined8 *)(in_RDI + 0x48),
             *(undefined8 *)(in_RDI + 0x50),*(undefined8 *)(in_RDI + 0x58),in_RDI + 0x140,pMVar1,
             local_b8,pMVar2,local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::FixedConstraint::SolveVelocityConstraint(float) */

uint JPH::FixedConstraint::SolveVelocityConstraint(float param_1)

{
  Body BVar1;
  Body BVar2;
  Body *pBVar3;
  Body *pBVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long in_RDI;
  undefined4 in_R8D;
  uint uVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [12];
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  
  pBVar3 = *(Body **)(in_RDI + 0x30);
  auVar15 = SUB1612((undefined1  [16])0x0,0);
  pBVar4 = *(Body **)(in_RDI + 0x28);
  BVar1 = pBVar3[0x78];
  lVar5 = *(long *)(pBVar3 + 0x48);
  if (BVar1 != (Body)0x0) {
    auVar15 = SUB1612(*(undefined1 (*) [16])(lVar5 + 0x10),0);
  }
  BVar2 = pBVar4[0x78];
  lVar6 = *(long *)(pBVar4 + 0x48);
  if (BVar2 == (Body)0x0) {
    fVar18 = 0.0 - auVar15._0_4_;
    fVar20 = 0.0 - auVar15._4_4_;
    fVar21 = 0.0 - auVar15._8_4_;
    auVar15._0_4_ =
         fVar20 * *(float *)(in_RDI + 0x100) + fVar18 * *(float *)(in_RDI + 0xf0) +
         fVar21 * *(float *)(in_RDI + 0x110);
    auVar15._4_4_ =
         fVar20 * *(float *)(in_RDI + 0x104) + fVar18 * *(float *)(in_RDI + 0xf4) +
         fVar21 * *(float *)(in_RDI + 0x114);
    auVar15._8_4_ =
         fVar20 * *(float *)(in_RDI + 0x108) + fVar18 * *(float *)(in_RDI + 0xf8) +
         fVar21 * *(float *)(in_RDI + 0x118);
    fVar18 = fVar20 * *(float *)(in_RDI + 0x10c) + fVar18 * *(float *)(in_RDI + 0xfc) +
             fVar21 * *(float *)(in_RDI + 0x11c);
    auVar22._4_4_ = -(uint)(auVar15._4_4_ == 0.0);
    auVar22._0_4_ = -(uint)(auVar15._0_4_ == 0.0);
    auVar22._8_4_ = -(uint)(auVar15._8_4_ == 0.0);
    auVar22._12_4_ = -(uint)(fVar18 == 0.0);
    uVar13 = movmskps(0,auVar22);
    *(float *)(in_RDI + 0x130) = *(float *)(in_RDI + 0x130) + auVar15._0_4_;
    *(float *)(in_RDI + 0x134) = *(float *)(in_RDI + 0x134) + auVar15._4_4_;
    *(float *)(in_RDI + 0x138) = *(float *)(in_RDI + 0x138) + auVar15._8_4_;
    *(float *)(in_RDI + 0x13c) = *(float *)(in_RDI + 0x13c) + fVar18;
    if ((~uVar13 & 7) == 0) goto LAB_00100ead;
  }
  else {
    fVar18 = *(float *)(lVar6 + 0x10) - auVar15._0_4_;
    fVar20 = *(float *)(lVar6 + 0x14) - auVar15._4_4_;
    fVar21 = *(float *)(lVar6 + 0x18) - auVar15._8_4_;
    auVar15._0_4_ =
         fVar18 * *(float *)(in_RDI + 0xf0) + fVar20 * *(float *)(in_RDI + 0x100) +
         fVar21 * *(float *)(in_RDI + 0x110);
    auVar15._4_4_ =
         fVar18 * *(float *)(in_RDI + 0xf4) + fVar20 * *(float *)(in_RDI + 0x104) +
         fVar21 * *(float *)(in_RDI + 0x114);
    auVar15._8_4_ =
         fVar18 * *(float *)(in_RDI + 0xf8) + fVar20 * *(float *)(in_RDI + 0x108) +
         fVar21 * *(float *)(in_RDI + 0x118);
    fVar18 = fVar18 * *(float *)(in_RDI + 0xfc) + fVar20 * *(float *)(in_RDI + 0x10c) +
             fVar21 * *(float *)(in_RDI + 0x11c);
    *(float *)(in_RDI + 0x130) = *(float *)(in_RDI + 0x130) + auVar15._0_4_;
    *(float *)(in_RDI + 0x134) = *(float *)(in_RDI + 0x134) + auVar15._4_4_;
    *(float *)(in_RDI + 0x138) = *(float *)(in_RDI + 0x138) + auVar15._8_4_;
    *(float *)(in_RDI + 0x13c) = *(float *)(in_RDI + 0x13c) + fVar18;
    auVar19._4_4_ = -(uint)(auVar15._4_4_ == 0.0);
    auVar19._0_4_ = -(uint)(auVar15._0_4_ == 0.0);
    auVar19._8_4_ = -(uint)(auVar15._8_4_ == 0.0);
    auVar19._12_4_ = -(uint)(fVar18 == 0.0);
    uVar13 = movmskps(in_R8D,auVar19);
    if ((~uVar13 & 7) == 0) {
LAB_00100ead:
      uVar13 = PointConstraintPart::SolveVelocityConstraint
                         ((PointConstraintPart *)(in_RDI + 0x140),pBVar4,pBVar3);
      return uVar13;
    }
    if (BVar2 == (Body)0x2) {
      fVar18 = *(float *)(in_RDI + 0x74);
      fVar20 = *(float *)(in_RDI + 0x78);
      fVar21 = *(float *)(in_RDI + 0x7c);
      fVar7 = *(float *)(in_RDI + 0x84);
      fVar8 = *(float *)(in_RDI + 0x88);
      fVar9 = *(float *)(in_RDI + 0x8c);
      fVar10 = *(float *)(in_RDI + 0x94);
      fVar11 = *(float *)(in_RDI + 0x98);
      fVar12 = *(float *)(in_RDI + 0x9c);
      *(float *)(lVar6 + 0x10) =
           *(float *)(lVar6 + 0x10) -
           (auVar15._0_4_ * *(float *)(in_RDI + 0x70) + auVar15._4_4_ * *(float *)(in_RDI + 0x80) +
           auVar15._8_4_ * *(float *)(in_RDI + 0x90));
      *(float *)(lVar6 + 0x14) =
           *(float *)(lVar6 + 0x14) -
           (auVar15._0_4_ * fVar18 + auVar15._4_4_ * fVar7 + auVar15._8_4_ * fVar10);
      *(float *)(lVar6 + 0x18) =
           *(float *)(lVar6 + 0x18) -
           (auVar15._0_4_ * fVar20 + auVar15._4_4_ * fVar8 + auVar15._8_4_ * fVar11);
      *(float *)(lVar6 + 0x1c) =
           *(float *)(lVar6 + 0x1c) -
           (auVar15._0_4_ * fVar21 + auVar15._4_4_ * fVar9 + auVar15._8_4_ * fVar12);
    }
  }
  if (BVar1 == (Body)0x2) {
    fVar14 = auVar15._0_4_;
    fVar16 = auVar15._4_4_;
    fVar17 = auVar15._8_4_;
    fVar18 = *(float *)(in_RDI + 0xb4);
    fVar20 = *(float *)(in_RDI + 0xb8);
    fVar21 = *(float *)(in_RDI + 0xbc);
    fVar7 = *(float *)(in_RDI + 0xc4);
    fVar8 = *(float *)(in_RDI + 200);
    fVar9 = *(float *)(in_RDI + 0xcc);
    fVar10 = *(float *)(in_RDI + 0xd4);
    fVar11 = *(float *)(in_RDI + 0xd8);
    fVar12 = *(float *)(in_RDI + 0xdc);
    *(float *)(lVar5 + 0x10) =
         fVar17 * *(float *)(in_RDI + 0xd0) +
         fVar14 * *(float *)(in_RDI + 0xb0) + fVar16 * *(float *)(in_RDI + 0xc0) +
         *(float *)(lVar5 + 0x10);
    *(float *)(lVar5 + 0x14) =
         fVar17 * fVar10 + fVar14 * fVar18 + fVar16 * fVar7 + *(float *)(lVar5 + 0x14);
    *(float *)(lVar5 + 0x18) =
         fVar17 * fVar11 + fVar14 * fVar20 + fVar16 * fVar8 + *(float *)(lVar5 + 0x18);
    *(float *)(lVar5 + 0x1c) =
         fVar17 * fVar12 + fVar14 * fVar21 + fVar16 * fVar9 + *(float *)(lVar5 + 0x1c);
  }
  uVar13 = PointConstraintPart::SolveVelocityConstraint
                     ((PointConstraintPart *)(in_RDI + 0x140),pBVar4,pBVar3);
  return uVar13 | 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::SolvePositionConstraint(float, float) */

uint __thiscall
JPH::FixedConstraint::SolvePositionConstraint(FixedConstraint *this,float param_1,float param_2)

{
  Body *pBVar1;
  Mat44 *pMVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Body local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pBVar1 = *(Body **)(this + 0x30);
  pMVar2 = *(Mat44 **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar12 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar8 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar8 + fVar8;
  fVar5 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar7 = fVar5 * (fVar12 + fVar12);
  fVar11 = fVar12 * (fVar12 + fVar12);
  local_88._0_4_ = (_LC3 - fVar8 * fVar10) - fVar11;
  local_88._4_4_ = fVar8 * fVar9 + fVar7;
  local_88._8_4_ = fVar12 * fVar9 - fVar10 * fVar5;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC3 - fVar11) - fVar3 * fVar9;
  local_78._0_4_ = fVar8 * fVar9 - fVar7;
  local_68._4_4_ = fVar12 * fVar10 - fVar9 * fVar5;
  local_68._0_4_ = fVar12 * fVar9 + fVar10 * fVar5;
  fVar7 = (float)*(undefined8 *)(pMVar2 + 0x18);
  local_78._8_4_ = fVar9 * fVar5 + fVar12 * fVar10;
  local_78._12_4_ = 0;
  local_58 = __LC43;
  uStack_50 = _UNK_00104588;
  fVar12 = (float)*(undefined8 *)(pMVar2 + 0x10);
  fVar13 = fVar7 * (fVar7 + fVar7);
  fVar11 = fVar12 + fVar12;
  fVar5 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  local_68._8_4_ = (_LC3 - fVar3 * fVar9) - fVar8 * fVar10;
  local_68._12_4_ = 0;
  fVar3 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar8 = fVar5 * (fVar7 + fVar7);
  local_c8._0_4_ = (_LC3 - fVar3 * fVar9) - fVar13;
  local_c8._4_4_ = fVar3 * fVar11 + fVar8;
  local_c8._8_4_ = fVar7 * fVar11 - fVar9 * fVar5;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC3 - fVar13) - fVar12 * fVar11;
  local_b8._0_4_ = fVar3 * fVar11 - fVar8;
  local_a8._4_4_ = fVar7 * fVar9 - fVar11 * fVar5;
  local_a8._0_4_ = fVar7 * fVar11 + fVar9 * fVar5;
  local_98 = __LC43;
  uStack_90 = _UNK_00104588;
  local_b8._8_4_ = fVar11 * fVar5 + fVar7 * fVar9;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC3 - fVar12 * fVar11) - fVar3 * fVar9;
  local_a8._12_4_ = 0;
  RotationEulerConstraintPart::CalculateConstraintProperties
            ((Body *)(this + 0x70),pMVar2,local_c8,(Mat44 *)pBVar1);
  uVar4 = RotationEulerConstraintPart::SolvePositionConstraint
                    (*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68),(Body *)(this + 0x70)
                     ,pMVar2,pBVar1);
  fVar5 = (float)*(undefined8 *)(pBVar1 + 0x18);
  fVar3 = (float)*(undefined8 *)(pBVar1 + 0x10);
  fVar8 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x10) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(pBVar1 + 0x18) >> 0x20);
  fVar10 = fVar8 + fVar8;
  fVar9 = fVar3 + fVar3;
  fVar12 = fVar5 * (fVar5 + fVar5);
  fVar11 = (fVar5 + fVar5) * fVar7;
  local_88._0_4_ = (_LC3 - fVar8 * fVar10) - fVar12;
  local_88._4_4_ = fVar8 * fVar9 + fVar11;
  local_88._8_4_ = fVar5 * fVar9 - fVar10 * fVar7;
  local_88._12_4_ = 0;
  local_78._4_4_ = (_LC3 - fVar12) - fVar3 * fVar9;
  local_78._0_4_ = fVar8 * fVar9 - fVar11;
  fVar12 = (float)*(undefined8 *)(pMVar2 + 0x18);
  local_78._8_4_ = fVar9 * fVar7 + fVar5 * fVar10;
  local_78._12_4_ = 0;
  local_68._4_4_ = fVar5 * fVar10 - fVar9 * fVar7;
  local_68._0_4_ = fVar5 * fVar9 + fVar10 * fVar7;
  fVar5 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x18) >> 0x20);
  fVar13 = fVar12 * (fVar12 + fVar12);
  fVar7 = (float)*(undefined8 *)(pMVar2 + 0x10);
  fVar14 = (fVar12 + fVar12) * fVar5;
  fVar11 = fVar7 + fVar7;
  local_68._8_4_ = (_LC3 - fVar3 * fVar9) - fVar8 * fVar10;
  local_68._12_4_ = 0;
  fVar3 = (float)((ulong)*(undefined8 *)(pMVar2 + 0x10) >> 0x20);
  local_98 = __LC43;
  uStack_90 = _UNK_00104588;
  fVar8 = fVar3 + fVar3;
  local_58 = __LC43;
  uStack_50 = _UNK_00104588;
  local_a8._0_4_ = fVar12 * fVar11 + fVar8 * fVar5;
  local_c8._0_4_ = (_LC3 - fVar3 * fVar8) - fVar13;
  local_c8._4_4_ = fVar3 * fVar11 + fVar14;
  local_c8._8_4_ = fVar12 * fVar11 - fVar8 * fVar5;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC3 - fVar13) - fVar7 * fVar11;
  local_b8._0_4_ = fVar3 * fVar11 - fVar14;
  local_a8._4_4_ = fVar12 * fVar8 - fVar11 * fVar5;
  local_b8._8_4_ = fVar11 * fVar5 + fVar12 * fVar8;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC3 - fVar7 * fVar11) - fVar3 * fVar8;
  local_a8._12_4_ = 0;
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),(PointConstraintPart *)(this + 0x140),pMVar2,local_c8,
             pBVar1,local_88);
  uVar6 = PointConstraintPart::SolvePositionConstraint
                    ((PointConstraintPart *)(this + 0x140),(Body *)pMVar2,pBVar1,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6 | uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::FixedConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(FixedConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti,
                      "FixedConstraintSettings",0x90,
                      GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::FixedConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      FixedConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::FixedConstraintSettings*)::rtti;
}



/* JPH::FixedConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::FixedConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((FixedConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::FixedConstraint(JPH::Body&, JPH::Body&, JPH::FixedConstraintSettings
   const&) */

void __thiscall
JPH::FixedConstraint::FixedConstraint
          (FixedConstraint *this,Body *param_1,Body *param_2,FixedConstraintSettings *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  undefined1 auVar34 [16];
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
  undefined1 auVar46 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar6 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar6;
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar6,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  uVar4 = *(undefined8 *)(param_3 + 0x88);
  uVar5 = *(undefined8 *)(param_3 + 0x70);
  *(FixedConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  uVar8 = *(undefined8 *)(param_3 + 0x80);
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__FixedConstraint_00104488;
  auVar46 = RotationEulerConstraintPart::sGetInvInitialOrientationXY
                      (*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48),
                       *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),uVar5,
                       *(undefined8 *)(param_3 + 0x78),uVar8,uVar4);
  iVar7 = *(int *)(param_3 + 0x28);
  *(undefined1 (*) [16])(this + 0x60) = auVar46;
  if (iVar7 != 1) {
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar4;
    return;
  }
  fVar20 = (float)(*(uint *)(param_2 + 0x10) ^ __LC40);
  fVar23 = (float)(*(uint *)(param_2 + 0x14) ^ _UNK_001045d4);
  fVar24 = (float)(*(uint *)(param_2 + 0x18) ^ _UNK_001045d8);
  fVar25 = (float)(*(uint *)(param_2 + 0x1c) ^ _UNK_001045dc);
  fVar26 = fVar20 + fVar20;
  fVar33 = fVar23 + fVar23;
  fVar29 = (fVar24 + fVar24) * fVar25;
  fVar12 = fVar33 * fVar25 + fVar26 * fVar24;
  fVar32 = fVar26 * fVar24 - fVar33 * fVar25;
  fVar9 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 4);
  fVar11 = *(float *)(param_1 + 8);
  fVar21 = (fVar24 + fVar24) * fVar24;
  fVar13 = fVar33 * fVar24 - fVar26 * fVar25;
  fVar27 = fVar26 * fVar25 + fVar33 * fVar24;
  fVar35 = (_LC3 - fVar26 * fVar20) - fVar33 * fVar23;
  fVar36 = fVar26 * fVar23 - fVar29;
  fVar29 = fVar29 + fVar26 * fVar23;
  fVar14 = (_LC3 - fVar21) - fVar26 * fVar20;
  local_b8 = (float)*(undefined8 *)param_2;
  fStack_b4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fStack_b0 = (float)*(undefined8 *)(param_2 + 8);
  fVar21 = (_LC3 - fVar33 * fVar23) - fVar21;
  fVar26 = *(float *)(param_1 + 0x10);
  fVar15 = (float)(__LC40 ^ (uint)fVar26);
  fVar33 = (float)(_UNK_001045d4 ^ *(uint *)(param_1 + 0x14));
  fVar17 = (float)(_UNK_001045d8 ^ *(uint *)(param_1 + 0x18));
  fVar18 = (float)(_UNK_001045dc ^ *(uint *)(param_1 + 0x1c));
  fVar30 = fVar15 + fVar15;
  fVar43 = 0.0 - (local_b8 * fVar21 + fStack_b4 * fVar36 + fStack_b0 * fVar12);
  fVar44 = 0.0 - (local_b8 * fVar29 + fStack_b4 * fVar14 + fStack_b0 * fVar13);
  fVar45 = 0.0 - (local_b8 * fVar32 + fStack_b4 * fVar27 + fStack_b0 * fVar35);
  fVar37 = fVar17 * (fVar17 + fVar17);
  fVar39 = fVar33 + fVar33;
  fVar16 = fVar18 * (fVar17 + fVar17);
  fVar40 = fVar17 * fVar30 + fVar39 * fVar18;
  fVar38 = fVar17 * fVar30 - fVar39 * fVar18;
  fVar41 = fVar17 * fVar39 - fVar30 * fVar18;
  fVar18 = fVar30 * fVar18 + fVar17 * fVar39;
  fVar42 = (_LC3 - fVar15 * fVar30) - fVar33 * fVar39;
  fVar17 = fVar33 * fVar30 + fVar16;
  fVar16 = fVar33 * fVar30 - fVar16;
  fVar33 = (_LC3 - fVar33 * fVar39) - fVar37;
  fVar39 = (_LC3 - fVar37) - fVar15 * fVar30;
  fVar15 = 0.0 - (fVar40 * fVar11 + fVar9 * fVar33 + fVar10 * fVar16);
  fVar30 = 0.0 - (fVar41 * fVar11 + fVar9 * fVar17 + fVar10 * fVar39);
  fVar37 = 0.0 - (fVar42 * fVar11 + fVar9 * fVar38 + fVar10 * fVar18);
  if (param_3[0x2c] == (FixedConstraintSettings)0x0) {
    fVar9 = *(float *)(param_3 + 0x30);
    fVar10 = *(float *)(param_3 + 0x34);
    fVar11 = *(float *)(param_3 + 0x38);
    *(float *)(this + 0x40) = fVar33 * fVar9 + fVar10 * fVar16 + fVar11 * fVar40 + fVar15;
    *(float *)(this + 0x44) = fVar17 * fVar9 + fVar10 * fVar39 + fVar11 * fVar41 + fVar30;
    *(float *)(this + 0x48) = fVar38 * fVar9 + fVar10 * fVar18 + fVar11 * fVar42 + fVar37;
    *(float *)(this + 0x4c) = fVar9 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + 1.0;
    fVar9 = *(float *)(param_3 + 0x60);
    fVar10 = *(float *)(param_3 + 100);
    fVar11 = *(float *)(param_3 + 0x68);
    *(float *)(this + 0x50) = fVar11 * fVar12 + fVar9 * fVar21 + fVar10 * fVar36 + fVar43;
    *(float *)(this + 0x54) = fVar11 * fVar13 + fVar9 * fVar29 + fVar10 * fVar14 + fVar44;
    *(float *)(this + 0x58) = fVar11 * fVar35 + fVar9 * fVar32 + fVar10 * fVar27 + fVar45;
    *(float *)(this + 0x5c) = fVar11 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0 + 1.0;
  }
  else {
    fVar19 = local_b8;
    fVar28 = fStack_b0;
    fVar31 = fStack_b4;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (fVar19 = fVar9, fVar28 = fVar11, fVar31 = fVar10, *(long *)(param_2 + 0x48) != 0)) {
      fVar2 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
      fVar3 = *(float *)(*(long *)(param_1 + 0x48) + 0x58);
      fVar22 = fVar2 + fVar3;
      if (fVar22 != 0.0) {
        fStack_ac = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
        auVar46._4_4_ = fVar22;
        auVar46._0_4_ = fVar22;
        auVar46._8_4_ = fVar22;
        auVar46._12_4_ = fVar22;
        auVar34._4_4_ = fVar2 * fStack_b4 + fVar3 * fVar10;
        auVar34._0_4_ = fVar2 * local_b8 + fVar3 * fVar9;
        auVar34._8_4_ = fVar2 * fStack_b0 + fVar3 * fVar11;
        auVar34._12_4_ = fVar2 * fStack_ac + fVar3 * *(float *)(param_1 + 0xc);
        auVar46 = divps(auVar34,auVar46);
        fVar19 = auVar46._0_4_;
        fVar28 = auVar46._8_4_;
        fVar31 = auVar46._4_4_;
      }
    }
    *(float *)(this + 0x40) = fVar33 * fVar19 + fVar16 * fVar31 + fVar40 * fVar28 + fVar15;
    *(float *)(this + 0x44) = fVar17 * fVar19 + fVar39 * fVar31 + fVar41 * fVar28 + fVar30;
    *(float *)(this + 0x48) = fVar38 * fVar19 + fVar18 * fVar31 + fVar42 * fVar28 + fVar37;
    *(float *)(this + 0x4c) = fVar19 * 0.0 + fVar31 * 0.0 + fVar28 * 0.0 + 1.0;
    *(float *)(this + 0x50) = fVar19 * fVar21 + fVar31 * fVar36 + fVar28 * fVar12 + fVar43;
    *(float *)(this + 0x54) = fVar19 * fVar29 + fVar31 * fVar14 + fVar28 * fVar13 + fVar44;
    *(float *)(this + 0x58) = fVar19 * fVar32 + fVar31 * fVar27 + fVar28 * fVar35 + fVar45;
    *(float *)(this + 0x5c) = fVar19 * 0.0 + fVar31 * 0.0 + fVar28 * 0.0 + 1.0;
  }
  fVar12 = (float)*(undefined8 *)(this + 0x60);
  fVar10 = (float)*(undefined8 *)(this + 0x68);
  fVar33 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar16 = (fVar12 * fVar25 + fVar33 * fVar20 + fVar10 * fVar23) - fVar13 * fVar24;
  fVar15 = (fVar13 * fVar25 - fVar10 * fVar20) + fVar33 * fVar23 + fVar12 * fVar24;
  fVar9 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar14 = ((fVar10 * fVar25 + fVar13 * fVar20) - fVar12 * fVar23) + fVar33 * fVar24;
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar12 = ((fVar33 * fVar25 - fVar12 * fVar20) - fVar13 * fVar23) - fVar10 * fVar24;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  *(ulong *)(this + 0x60) =
       CONCAT44(fVar26 * fVar14 + (fVar11 * fVar12 - fVar9 * fVar16) + fVar10 * fVar15,
                (fVar26 * fVar12 + fVar10 * fVar16 + fVar9 * fVar15) - fVar11 * fVar14);
  *(ulong *)(this + 0x68) =
       CONCAT44(((fVar10 * fVar12 - fVar26 * fVar16) - fVar11 * fVar15) - fVar9 * fVar14,
                ((fVar9 * fVar12 + fVar11 * fVar16) - fVar26 * fVar15) + fVar10 * fVar14);
  return;
}



/* JPH::FixedConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

FixedConstraint * __thiscall
JPH::FixedConstraintSettings::Create(FixedConstraintSettings *this,Body *param_1,Body *param_2)

{
  FixedConstraint *this_00;
  
  this_00 = (FixedConstraint *)(*Allocate)(0x230);
  FixedConstraint::FixedConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* JPH::Constraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::FixedConstraint::GetSubType() const */

undefined8 JPH::FixedConstraint::GetSubType(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::FixedConstraint::GetConstraintToBody1Matrix() const */

void JPH::FixedConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  *in_RDI = ZEXT416(_LC3);
  uVar4 = _UNK_00104558;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_00104568;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* JPH::FixedConstraint::GetConstraintToBody2Matrix() const */

void JPH::FixedConstraint::GetConstraintToBody2Matrix(void)

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
  
  fVar3 = _LC3;
  uVar2 = *(undefined8 *)(in_RSI + 0x68);
  fVar4 = (float)*(undefined8 *)(in_RSI + 0x60);
  fVar6 = (float)uVar2;
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x60) >> 0x20);
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



/* JPH::FixedConstraintSettings::~FixedConstraintSettings() */

void __thiscall
JPH::FixedConstraintSettings::~FixedConstraintSettings(FixedConstraintSettings *this)

{
  return;
}



/* JPH::FixedConstraintSettings::~FixedConstraintSettings() */

void __thiscall
JPH::FixedConstraintSettings::~FixedConstraintSettings(FixedConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::FixedConstraint::~FixedConstraint() */

void __thiscall JPH::FixedConstraint::~FixedConstraint(FixedConstraint *this)

{
  return;
}



/* JPH::FixedConstraint::~FixedConstraint() */

void __thiscall JPH::FixedConstraint::~FixedConstraint(FixedConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102074. Too many branches */
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
  
  uVar6 = _UNK_00104588;
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
  local_58 = (_LC3 - fVar8 * fVar26) - fVar27;
  register0x00001284 = fVar8 * fVar25 + fVar21;
  register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
  register0x0000128c = 0;
  local_48._4_4_ = (_LC3 - fVar27) - fVar7 * fVar25;
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
  local_38._8_4_ = (_LC3 - fVar7 * fVar25) - fVar8 * fVar26;
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
  *(undefined8 *)(param_1 + 0x30) = __LC43;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_00104594;
  auVar5._0_4_ = __LC11;
  auVar5._8_4_ = _UNK_00104598;
  auVar5._12_4_ = _UNK_0010459c;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC11);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00104594);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00104598);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_0010459c);
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
  if (auVar5._0_4_ <= __LC12) {
    return;
  }
  fVar11 = _LC13 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC42 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001045a4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001045a8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001045ac & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC16 * fVar17 + _LC13);
  iVar14 = (int)(_LC16 * fVar18 + _LC13);
  iVar15 = (int)(_LC16 * fVar19 + _LC13);
  iVar16 = (int)(_LC16 * fVar20 + _LC13);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC19 * fVar4) - _LC21 * fVar4) - fVar4 * _LC23;
  fVar18 = ((fVar18 - _LC19 * fVar6) - _LC21 * fVar6) - fVar6 * _LC23;
  fVar7 = ((fVar19 - _LC19 * fVar7) - _LC21 * fVar7) - fVar7 * _LC23;
  fVar9 = ((fVar20 - _LC19 * fVar9) - _LC21 * fVar9) - fVar9 * _LC23;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC25 * fVar4 + _LC27) * fVar4 + _LC29) * fVar4 * fVar4 - _LC13 * fVar4) + _LC3;
  fVar20 = (((_LC25 * fVar22 + _LC27) * fVar22 + _LC29) * fVar22 * fVar22 - _LC13 * fVar22) + _LC3;
  fVar8 = (((_LC25 * fVar24 + _LC27) * fVar24 + _LC29) * fVar24 * fVar24 - _LC13 * fVar24) + _LC3;
  fVar10 = (((_LC25 * fVar26 + _LC27) * fVar26 + _LC29) * fVar26 * fVar26 - _LC13 * fVar26) + _LC3;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC32 * fVar4 + _LC34) * fVar4 + _LC36) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC32 * fVar22 + _LC34) * fVar22 + _LC36) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC32 * fVar24 + _LC34) * fVar24 + _LC36) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC32 * fVar26 + _LC34) * fVar26 + _LC36) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC37 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC42 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC37 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC42 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001045b4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001045a4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001045b4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001045a4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001045b8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001045a8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001045b8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001045a8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001045bc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001045ac & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001045bc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001045ac ^
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
  if (auVar5._0_4_ <= __LC12) {
    return;
  }
  fVar11 = _LC39 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC42 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001045a4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001045a8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001045ac & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC16 * fVar17 + _LC13);
  iVar14 = (int)(_LC16 * fVar18 + _LC13);
  iVar15 = (int)(_LC16 * fVar19 + _LC13);
  iVar16 = (int)(_LC16 * fVar20 + _LC13);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC19 * fVar4) - _LC21 * fVar4) - fVar4 * _LC23;
  fVar18 = ((fVar18 - _LC19 * fVar6) - _LC21 * fVar6) - fVar6 * _LC23;
  fVar7 = ((fVar19 - _LC19 * fVar7) - _LC21 * fVar7) - fVar7 * _LC23;
  fVar9 = ((fVar20 - _LC19 * fVar9) - _LC21 * fVar9) - fVar9 * _LC23;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC25 * fVar4 + _LC27) * fVar4 + _LC29) * fVar4 * fVar4 - _LC13 * fVar4) + _LC3;
  fVar20 = (((_LC25 * fVar22 + _LC27) * fVar22 + _LC29) * fVar22 * fVar22 - _LC13 * fVar22) + _LC3;
  fVar8 = (((_LC25 * fVar24 + _LC27) * fVar24 + _LC29) * fVar24 * fVar24 - _LC13 * fVar24) + _LC3;
  fVar10 = (((_LC25 * fVar26 + _LC27) * fVar26 + _LC29) * fVar26 * fVar26 - _LC13 * fVar26) + _LC3;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC32 * fVar4 + _LC34) * fVar4 + _LC36) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC32 * fVar22 + _LC34) * fVar22 + _LC36) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC32 * fVar24 + _LC34) * fVar24 + _LC36) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC32 * fVar26 + _LC34) * fVar26 + _LC36) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC37 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC42 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC37 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC42 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001045b4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001045a4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001045b4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001045a4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001045b8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001045a8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001045b8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001045a8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001045bc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001045ac & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001045bc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001045ac ^
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
  
  fVar4 = _LC3;
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
    goto LAB_00102c85;
  }
  fVar7 = uStack_64 * local_88 - uStack_84 * local_68;
  fVar11 = uStack_60 * uStack_84 - uStack_80 * uStack_64;
  fVar12 = local_68 * uStack_80 - local_88 * uStack_60;
  fVar16 = local_88 + uStack_64 + fVar7;
  fVar3 = uStack_54 * local_78 - uStack_74 * local_58;
  fVar5 = fVar15 * uStack_74 - uStack_70 * uStack_54;
  fVar6 = local_58 * uStack_70 - local_78 * fVar15;
  if (0.0 <= fVar16) {
    fVar16 = SQRT(fVar16 + _LC3);
    fVar8 = _LC13 / fVar16;
    fVar16 = fVar16 * _LC13;
    fVar7 = (uStack_60 - fVar12) * fVar8;
    fVar14 = (fVar11 - uStack_80) * fVar8;
    fVar8 = (uStack_84 - local_68) * fVar8;
  }
  else if (uStack_64 <= local_88) {
    if (local_88 < fVar7) goto LAB_00102b33;
    fVar7 = (local_88 - (fVar7 + uStack_64)) + _LC3;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar16 = _LC13 / fVar7;
    fVar7 = fVar7 * _LC13;
    fVar14 = (local_68 + uStack_84) * fVar16;
    fVar8 = (uStack_80 + fVar11) * fVar16;
    fVar16 = (uStack_60 - fVar12) * fVar16;
  }
  else if (fVar7 <= uStack_64) {
    fVar14 = (uStack_64 - (fVar7 + local_88)) + _LC3;
    if (fVar14 < 0.0) {
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    fVar16 = _LC13 / fVar14;
    fVar14 = fVar14 * _LC13;
    fVar7 = (local_68 + uStack_84) * fVar16;
    fVar8 = (uStack_60 + fVar12) * fVar16;
    fVar16 = (fVar11 - uStack_80) * fVar16;
  }
  else {
LAB_00102b33:
    fVar8 = (fVar7 - (local_88 + uStack_64)) + _LC3;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar16 = _LC13 / fVar8;
    fVar8 = fVar8 * _LC13;
    fVar14 = (fVar12 + uStack_60) * fVar16;
    fVar7 = (fVar11 + uStack_80) * fVar16;
    fVar16 = (uStack_84 - local_68) * fVar16;
  }
  fVar11 = _LC13;
  fVar7 = (float)((uint)fVar7 ^ __LC40);
  fVar14 = (float)((uint)fVar14 ^ _UNK_001045d4);
  fVar8 = (float)((uint)fVar8 ^ _UNK_001045d8);
  fVar16 = (float)((uint)fVar16 ^ _UNK_001045dc);
  fVar12 = local_78 + uStack_54 + fVar3;
  if (0.0 <= fVar12) {
    fVar3 = SQRT(fVar12 + fVar4);
    fVar12 = _LC13 / fVar3;
    fVar3 = fVar3 * _LC13;
    fVar4 = (uStack_74 - local_58) * fVar12;
    fVar11 = (fVar5 - uStack_70) * fVar12;
    fVar12 = (fVar15 - fVar6) * fVar12;
  }
  else if (uStack_54 <= local_78) {
    if (local_78 < fVar3) goto LAB_00102be2;
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
LAB_00102be2:
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
LAB_00102c85:
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
  uVar10 = _UNK_00104588;
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
    *(undefined8 *)(param_1 + 0xb0) = __LC43;
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
  fVar11 = (float)(__LC40 ^ *(uint *)(param_2 + 0x10));
  fVar14 = (float)(_UNK_001045d4 ^ *(uint *)(param_2 + 0x14));
  fVar15 = (float)(_UNK_001045d8 ^ *(uint *)(param_2 + 0x18));
  fVar17 = (float)(_UNK_001045dc ^ *(uint *)(param_2 + 0x1c));
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
                 (uint)fVar16 & _LC42);
  fVar9 = (float)((uint)((fVar14 * fVar7 - fVar21 * fVar15) + fVar20 * fVar17 + fVar19 * fVar11) ^
                 (uint)fVar16 & _LC42);
  fVar7 = (float)((uint)(((fVar15 * fVar7 + fVar21 * fVar14) - fVar20 * fVar11) + fVar19 * fVar17) ^
                 (uint)fVar16 & _LC42);
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & _LC42);
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._0_4_ = -(uint)(fVar8 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar16 + fVar16 == 0.0);
  uVar3 = movmskps(fVar13,auVar12);
  if ((~uVar3 & 7) != 0) {
    fVar16 = (float)(param_3 ^ _LC38);
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
    uVar20 = _UNK_00104588;
    uVar18 = __LC43;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC38);
    fVar24 = (float)((uint)fVar15 ^ _LC38);
    fVar26 = (float)((uint)fVar13 ^ _LC38);
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
    uVar7 = _UNK_00104588;
    *(undefined8 *)(param_1 + 0x14) = __LC43;
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
    uVar18 = __LC43;
    uVar20 = _UNK_00104588;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC38);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC38);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC38);
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
      auVar16._4_4_ = _UNK_00104574;
      auVar16._0_4_ = __LC6;
      auVar16._8_4_ = _UNK_00104578;
      auVar16._12_4_ = _UNK_0010457c;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_00104574;
      bVar7 = auVar30._8_4_ == _UNK_00104578;
      bVar8 = auVar30._12_4_ == _UNK_0010457c;
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
      auVar15._4_4_ = _UNK_00104574;
      auVar15._0_4_ = __LC6;
      auVar15._8_4_ = _UNK_00104578;
      auVar15._12_4_ = _UNK_0010457c;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_00104574;
      bVar7 = auVar31._8_4_ == _UNK_00104578;
      bVar8 = auVar31._12_4_ == _UNK_0010457c;
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
    fVar23 = (float)((uint)param_3 ^ _LC38);
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
      auVar19._4_4_ = _UNK_00104574;
      auVar19._0_4_ = __LC6;
      auVar19._8_4_ = _UNK_00104578;
      auVar19._12_4_ = _UNK_0010457c;
      auVar24 = auVar24 & auVar19;
      bVar5 = auVar24._4_4_ == _UNK_00104574;
      bVar6 = auVar24._8_4_ == _UNK_00104578;
      bVar7 = auVar24._12_4_ == _UNK_0010457c;
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
      auVar18._4_4_ = _UNK_00104574;
      auVar18._0_4_ = __LC6;
      auVar18._8_4_ = _UNK_00104578;
      auVar18._12_4_ = _UNK_0010457c;
      auVar26 = auVar26 & auVar18;
      bVar5 = auVar26._4_4_ == _UNK_00104574;
      bVar6 = auVar26._8_4_ == _UNK_00104578;
      bVar7 = auVar26._12_4_ == _UNK_0010457c;
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



/* JPH::GetRTTIOfType(JPH::FixedConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC44;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::FixedConstraint::~FixedConstraint() */

void __thiscall JPH::FixedConstraint::~FixedConstraint(FixedConstraint *this)

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
/* JPH::FixedConstraintSettings::~FixedConstraintSettings() */

void __thiscall
JPH::FixedConstraintSettings::~FixedConstraintSettings(FixedConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



