
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::RackAndPinionConstraint::ResetWarmStart() */

void __thiscall JPH::RackAndPinionConstraint::ResetWarmStart(RackAndPinionConstraint *this)

{
  *(undefined8 *)(this + 0xc0) = 0;
  return;
}



/* JPH::RackAndPinionConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::RackAndPinionConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::RackAndPinionConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::RackAndPinionConstraintSettings::SaveBinaryState
          (RackAndPinionConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
                    /* WARNING: Could not recover jumptable at 0x001000b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  return;
}



/* JPH::RackAndPinionConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::RackAndPinionConstraintSettings::RestoreBinaryState
          (RackAndPinionConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::GetConstraintToBody1Matrix() const */

void JPH::RackAndPinionConstraint::GetConstraintToBody1Matrix(void)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar6;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar7 [12];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  fVar13 = *(float *)(in_RSI + 0x40);
  fVar1 = *(float *)(in_RSI + 0x48);
  fVar12 = (float)((ulong)uVar2 >> 0x20);
  if ((float)(_LC0 & (uint)fVar13) <= (float)((uint)fVar12 & _LC0)) {
    fVar13 = SQRT(fVar12 * fVar12 + fVar1 * fVar1);
    auVar4._8_4_ = (uint)fVar12 ^ __LC1;
    auVar4._4_4_ = (uint)fVar12 ^ __LC1;
    auVar4._0_4_ = fVar1;
    auVar4._12_4_ = 0;
    auVar9._4_4_ = fVar13;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = fVar13;
    auVar9._12_4_ = fVar13;
    auVar9 = divps(auVar4 << 0x20,auVar9);
    auVar7 = auVar9._0_12_;
  }
  else {
    auVar8._4_4_ = 0;
    auVar8._0_4_ = fVar1;
    fVar12 = SQRT(fVar13 * fVar13 + fVar1 * fVar1);
    auVar8._12_4_ = (uint)fVar13 ^ __LC1;
    auVar8._8_4_ = (uint)fVar13 ^ __LC1;
    auVar3._4_4_ = fVar12;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar12;
    auVar3._12_4_ = fVar12;
    auVar9 = divps(auVar8,auVar3);
    auVar7 = auVar9._0_12_;
  }
  fVar13 = *(float *)(in_RSI + 0x40);
  fVar12 = *(float *)(in_RSI + 0x44);
  fVar5 = *(float *)(in_RSI + 0x48);
  fVar6 = auVar7._0_4_;
  fVar10 = auVar7._4_4_;
  fVar11 = auVar7._8_4_;
  *(float *)(in_RDI + 2) = fVar6;
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  *in_RDI = uVar2;
  *(float *)(in_RDI + 1) = fVar1;
  *(float *)((long)in_RDI + 0x14) = fVar10;
  *(float *)(in_RDI + 3) = fVar11;
  *(float *)(in_RDI + 5) = fVar10 * fVar13 - fVar12 * fVar6;
  *(float *)(in_RDI + 4) = fVar11 * fVar12 - fVar5 * fVar10;
  *(float *)((long)in_RDI + 0x24) = fVar6 * fVar5 - fVar13 * fVar11;
  uVar2 = _UNK_00102168;
  in_RDI[6] = __LC3;
  in_RDI[7] = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::GetConstraintToBody2Matrix() const */

void JPH::RackAndPinionConstraint::GetConstraintToBody2Matrix(void)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  long in_RSI;
  undefined8 *in_RDI;
  float fVar6;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar7 [12];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  fVar13 = *(float *)(in_RSI + 0x50);
  fVar1 = *(float *)(in_RSI + 0x58);
  fVar12 = (float)((ulong)uVar2 >> 0x20);
  if ((float)(_LC0 & (uint)fVar13) <= (float)((uint)fVar12 & _LC0)) {
    fVar13 = SQRT(fVar12 * fVar12 + fVar1 * fVar1);
    auVar4._8_4_ = (uint)fVar12 ^ __LC1;
    auVar4._4_4_ = (uint)fVar12 ^ __LC1;
    auVar4._0_4_ = fVar1;
    auVar4._12_4_ = 0;
    auVar9._4_4_ = fVar13;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = fVar13;
    auVar9._12_4_ = fVar13;
    auVar9 = divps(auVar4 << 0x20,auVar9);
    auVar7 = auVar9._0_12_;
  }
  else {
    auVar8._4_4_ = 0;
    auVar8._0_4_ = fVar1;
    fVar12 = SQRT(fVar13 * fVar13 + fVar1 * fVar1);
    auVar8._12_4_ = (uint)fVar13 ^ __LC1;
    auVar8._8_4_ = (uint)fVar13 ^ __LC1;
    auVar3._4_4_ = fVar12;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar12;
    auVar3._12_4_ = fVar12;
    auVar9 = divps(auVar8,auVar3);
    auVar7 = auVar9._0_12_;
  }
  fVar13 = *(float *)(in_RSI + 0x50);
  fVar12 = *(float *)(in_RSI + 0x54);
  fVar5 = *(float *)(in_RSI + 0x58);
  fVar6 = auVar7._0_4_;
  fVar10 = auVar7._4_4_;
  fVar11 = auVar7._8_4_;
  *(float *)(in_RDI + 2) = fVar6;
  *(undefined4 *)((long)in_RDI + 0xc) = 0;
  *(undefined4 *)((long)in_RDI + 0x1c) = 0;
  *(undefined4 *)((long)in_RDI + 0x2c) = 0;
  *in_RDI = uVar2;
  *(float *)(in_RDI + 1) = fVar1;
  *(float *)((long)in_RDI + 0x14) = fVar10;
  *(float *)(in_RDI + 3) = fVar11;
  *(float *)(in_RDI + 5) = fVar10 * fVar13 - fVar12 * fVar6;
  *(float *)(in_RDI + 4) = fVar11 * fVar12 - fVar5 * fVar10;
  *(float *)((long)in_RDI + 0x24) = fVar6 * fVar5 - fVar13 * fVar11;
  uVar2 = _UNK_00102168;
  in_RDI[6] = __LC3;
  in_RDI[7] = uVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::RackAndPinionConstraint::WarmStartVelocityConstraint
          (RackAndPinionConstraint *this,float param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  
  fVar12 = param_1 * *(float *)(this + 0xc4);
  lVar2 = *(long *)(this + 0x30);
  *(float *)(this + 0xc4) = fVar12;
  if (fVar12 != 0.0) {
    fVar8 = *(float *)(this + 0xa4);
    fVar9 = *(float *)(this + 0xa8);
    fVar10 = *(float *)(this + 0xac);
    lVar3 = *(long *)(*(long *)(this + 0x28) + 0x48);
    *(float *)(lVar3 + 0x10) = *(float *)(this + 0xa0) * fVar12 + *(float *)(lVar3 + 0x10);
    *(float *)(lVar3 + 0x14) = fVar8 * fVar12 + *(float *)(lVar3 + 0x14);
    *(float *)(lVar3 + 0x18) = fVar9 * fVar12 + *(float *)(lVar3 + 0x18);
    *(float *)(lVar3 + 0x1c) = fVar10 * fVar12 + *(float *)(lVar3 + 0x1c);
    pfVar4 = *(float **)(lVar2 + 0x48);
    fVar8 = *(float *)(this + 0xb4);
    fVar9 = *(float *)(this + 0xb8);
    fVar10 = *(float *)(this + 0xbc);
    bVar1 = *(byte *)((long)pfVar4 + 0x7a);
    auVar13._1_3_ = 0;
    auVar13[0] = bVar1;
    auVar13[4] = bVar1;
    auVar13._5_3_ = 0;
    auVar13[8] = bVar1;
    auVar13._9_3_ = 0;
    auVar13[0xc] = bVar1;
    auVar13._13_3_ = 0;
    auVar11._4_4_ = _UNK_00102174;
    auVar11._0_4_ = __LC5;
    auVar11._8_4_ = _UNK_00102178;
    auVar11._12_4_ = _UNK_0010217c;
    auVar13 = auVar13 & auVar11;
    bVar5 = auVar13._4_4_ == _UNK_00102174;
    bVar6 = auVar13._8_4_ == _UNK_00102178;
    bVar7 = auVar13._12_4_ == _UNK_0010217c;
    *pfVar4 = (float)(-(uint)(auVar13._0_4_ == __LC5) &
                     (uint)(*pfVar4 - fVar12 * *(float *)(this + 0xb0)));
    pfVar4[1] = (float)(-(uint)bVar5 & (uint)(pfVar4[1] - fVar12 * fVar8));
    pfVar4[2] = (float)(-(uint)bVar6 & (uint)(pfVar4[2] - fVar12 * fVar9));
    pfVar4[3] = (float)(-(uint)bVar7 & (uint)(pfVar4[3] - fVar12 * fVar10));
    return;
  }
  return;
}



/* JPH::RackAndPinionConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::RackAndPinionConstraint::SaveState(RackAndPinionConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::SaveState((StateRecorder *)this);
                    /* WARNING: Could not recover jumptable at 0x00100443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0xc4,4);
  return;
}



/* JPH::RackAndPinionConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::RackAndPinionConstraint::RestoreState(RackAndPinionConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
                    /* WARNING: Could not recover jumptable at 0x00100482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc4,4);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x60);
  uVar1 = _LC6;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((long)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_GetRTTI_00102048;
  puVar2[2] = 0;
  puVar2[3] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 1;
  *(undefined4 *)(puVar2 + 10) = 0x3f800000;
  *(undefined1 (*) [16])(puVar2 + 6) = ZEXT416(uVar1);
  *(undefined1 (*) [16])(puVar2 + 8) = ZEXT416(uVar1);
  return;
}



/* JPH::RackAndPinionConstraint::GetConstraintSettings() const */

void JPH::RackAndPinionConstraint::GetConstraintSettings(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  
  puVar7 = (undefined8 *)(*Allocate)(0x60);
  uVar6 = _LC6;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined1 *)((long)puVar7 + 0xc) = 1;
  *puVar7 = &PTR_GetRTTI_00102048;
  puVar7[2] = 0;
  puVar7[3] = 0x3f80000000000000;
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 5) = 1;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  *(undefined1 (*) [16])(puVar7 + 6) = ZEXT416(uVar6);
  *(undefined1 (*) [16])(puVar7 + 8) = ZEXT416(uVar6);
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar3 = *(undefined8 *)(in_RSI + 0x48);
  uVar4 = *(undefined8 *)(in_RSI + 0x50);
  uVar5 = *(undefined8 *)(in_RSI + 0x58);
  *(undefined4 *)(puVar7 + 5) = 0;
  uVar1 = *(undefined4 *)(in_RSI + 0x60);
  puVar7[6] = uVar2;
  puVar7[7] = uVar3;
  puVar7[8] = uVar4;
  puVar7[9] = uVar5;
  *(undefined4 *)(puVar7 + 10) = uVar1;
  *in_RDI = puVar7;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::SolveVelocityConstraint(float) */

undefined8 JPH::RackAndPinionConstraint::SolveVelocityConstraint(float param_1)

{
  byte bVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  long in_RDI;
  float fVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  auVar15 = SUB1612((undefined1  [16])0x0,0);
  pauVar2 = *(undefined1 (**) [16])(*(long *)(in_RDI + 0x30) + 0x48);
  if (*(char *)(*(long *)(in_RDI + 0x30) + 0x78) != '\0') {
    auVar15 = SUB1612(*pauVar2,0);
  }
  lVar3 = *(long *)(*(long *)(in_RDI + 0x28) + 0x48);
  auVar17 = SUB1612((undefined1  [16])0x0,0);
  if (*(char *)(*(long *)(in_RDI + 0x28) + 0x78) != '\0') {
    auVar17 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x10),0);
  }
  fVar14 = ((auVar15._8_4_ * (float)*(undefined8 *)(in_RDI + 0x98) +
            auVar15._4_4_ * (float)((ulong)*(undefined8 *)(in_RDI + 0x90) >> 0x20) +
            auVar15._0_4_ * (float)*(undefined8 *)(in_RDI + 0x90) + 0.0) * *(float *)(in_RDI + 0x60)
           - (auVar17._8_4_ * (float)*(undefined8 *)(in_RDI + 0x88) +
             auVar17._4_4_ * (float)((ulong)*(undefined8 *)(in_RDI + 0x80) >> 0x20) +
             auVar17._0_4_ * (float)*(undefined8 *)(in_RDI + 0x80) + 0.0)) *
           *(float *)(in_RDI + 0xc0);
  *(float *)(in_RDI + 0xc4) = *(float *)(in_RDI + 0xc4) + fVar14;
  if (fVar14 != 0.0) {
    fVar7 = *(float *)(in_RDI + 0xa4);
    fVar8 = *(float *)(in_RDI + 0xa8);
    fVar9 = *(float *)(in_RDI + 0xac);
    bVar1 = pauVar2[7][10];
    auVar16._1_3_ = 0;
    auVar16[0] = bVar1;
    *(float *)(lVar3 + 0x10) = *(float *)(in_RDI + 0xa0) * fVar14 + *(float *)(lVar3 + 0x10);
    *(float *)(lVar3 + 0x14) = fVar7 * fVar14 + *(float *)(lVar3 + 0x14);
    *(float *)(lVar3 + 0x18) = fVar8 * fVar14 + *(float *)(lVar3 + 0x18);
    *(float *)(lVar3 + 0x1c) = fVar9 * fVar14 + *(float *)(lVar3 + 0x1c);
    fVar7 = *(float *)(in_RDI + 0xb4);
    fVar8 = *(float *)(in_RDI + 0xb8);
    fVar9 = *(float *)(in_RDI + 0xbc);
    fVar10 = *(float *)(*pauVar2 + 4);
    fVar11 = *(float *)(*pauVar2 + 8);
    fVar12 = *(float *)(*pauVar2 + 0xc);
    auVar16[4] = bVar1;
    auVar16._5_3_ = 0;
    auVar16[8] = bVar1;
    auVar16._9_3_ = 0;
    auVar16[0xc] = bVar1;
    auVar16._13_3_ = 0;
    auVar13._4_4_ = _UNK_00102174;
    auVar13._0_4_ = __LC5;
    auVar13._8_4_ = _UNK_00102178;
    auVar13._12_4_ = _UNK_0010217c;
    auVar16 = auVar16 & auVar13;
    bVar4 = auVar16._4_4_ == _UNK_00102174;
    bVar5 = auVar16._8_4_ == _UNK_00102178;
    bVar6 = auVar16._12_4_ == _UNK_0010217c;
    *(uint *)*pauVar2 =
         -(uint)(auVar16._0_4_ == __LC5) &
         (uint)(*(float *)*pauVar2 - fVar14 * *(float *)(in_RDI + 0xb0));
    *(uint *)(*pauVar2 + 4) = -(uint)bVar4 & (uint)(fVar10 - fVar14 * fVar7);
    *(uint *)(*pauVar2 + 8) = -(uint)bVar5 & (uint)(fVar11 - fVar14 * fVar8);
    *(uint *)(*pauVar2 + 0xc) = -(uint)bVar6 & (uint)(fVar12 - fVar14 * fVar9);
    return 1;
  }
  return 0;
}



/* JPH::RackAndPinionConstraintSettings::GetRTTI() const */

undefined1 * JPH::RackAndPinionConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti,
                      "RackAndPinionConstraintSettings",0x60,
                      GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti;
}



/* JPH::RackAndPinionConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall
JPH::RackAndPinionConstraint::DrawConstraint(RackAndPinionConstraint *this,DebugRenderer *param_1)

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
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  fVar9 = (float)puVar2[2];
  uVar3 = *puVar2;
  fVar10 = (float)puVar2[3];
  fVar19 = (float)((ulong)puVar2[2] >> 0x20);
  fVar20 = (float)((ulong)puVar2[3] >> 0x20);
  fVar18 = fVar9 + fVar9;
  fVar21 = fVar19 + fVar19;
  puVar4 = *(undefined8 **)(this + 0x30);
  fVar13 = (float)puVar4[2];
  fVar11 = (float)puVar4[3];
  fVar17 = (float)((ulong)puVar4[2] >> 0x20);
  fVar26 = fVar10 * (fVar10 + fVar10);
  fVar24 = fVar13 + fVar13;
  fVar14 = fVar20 * (fVar10 + fVar10);
  fVar12 = (float)((ulong)puVar4[3] >> 0x20);
  fVar23 = fVar17 + fVar17;
  fVar22 = fVar11 * (fVar11 + fVar11);
  fVar27 = (fVar11 + fVar11) * fVar12;
  fVar25 = _LC7 - fVar13 * fVar24;
  fVar15 = _LC7 - fVar22;
  fVar16 = _LC7 - fVar17 * fVar23;
  uVar5 = *puVar4;
  fVar1 = *(float *)(puVar4 + 1);
  fVar6 = *(float *)(this + 0x40);
  fVar7 = *(float *)(this + 0x44);
  fVar8 = *(float *)(this + 0x48);
  local_88._0_4_ = (float)uVar3;
  local_88._4_4_ = (float)((ulong)uVar3 >> 0x20);
  JPH::DebugRenderer::DrawArrow
            (uVar3,(ulong)(uint)*(float *)(puVar2 + 1) | 0x3f80000000000000,
             CONCAT44(local_88._4_4_ +
                      (fVar19 * fVar18 + fVar14) * fVar6 +
                      ((_LC7 - fVar26) - fVar9 * fVar18) * fVar7 +
                      (fVar10 * fVar21 - fVar18 * fVar20) * fVar8,
                      (float)local_88 +
                      ((_LC7 - fVar19 * fVar21) - fVar26) * fVar6 +
                      (fVar19 * fVar18 - fVar14) * fVar7 +
                      (fVar10 * fVar18 + fVar21 * fVar20) * fVar8),
             CONCAT44(fVar6 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0 + 1.0,
                      *(float *)(puVar2 + 1) +
                      (fVar10 * fVar18 - fVar21 * fVar20) * fVar6 +
                      (fVar18 * fVar20 + fVar10 * fVar21) * fVar7 +
                      ((_LC7 - fVar9 * fVar18) - fVar19 * fVar21) * fVar8),param_1,
             (undefined4)Color::sGreen);
  fVar6 = *(float *)(this + 0x50);
  fVar7 = *(float *)(this + 0x54);
  fVar8 = *(float *)(this + 0x58);
  local_78 = (float)uVar5;
  fStack_74 = (float)((ulong)uVar5 >> 0x20);
  local_88 = CONCAT44(fVar8 * (fVar11 * fVar23 - fVar24 * fVar12) +
                      (fVar17 * fVar24 + fVar27) * fVar6 + fVar7 * (fVar15 - fVar13 * fVar24) +
                      fStack_74,
                      fVar8 * (fVar11 * fVar24 + fVar23 * fVar12) +
                      (fVar16 - fVar22) * fVar6 + fVar7 * (fVar17 * fVar24 - fVar27) + local_78);
  uStack_80 = CONCAT44(fVar8 * 0.0 + fVar6 * 0.0 + fVar7 * 0.0 + 1.0,
                       fVar8 * (fVar25 - fVar17 * fVar23) +
                       (fVar11 * fVar24 - fVar23 * fVar12) * fVar6 +
                       fVar7 * (fVar11 * fVar23 + fVar24 * fVar12) + fVar1);
  JPH::DebugRenderer::DrawArrow
            (uVar5,(ulong)(uint)fVar1 | 0x3f80000000000000,local_88,uStack_80,param_1,
             (undefined4)Color::sBlue);
  return;
}



/* JPH::GetRTTIOfType(JPH::RackAndPinionConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(RackAndPinionConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti,
                      "RackAndPinionConstraintSettings",0x60,
                      GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      RackAndPinionConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RackAndPinionConstraintSettings*)::rtti;
}



/* JPH::RackAndPinionConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::RackAndPinionConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((RackAndPinionConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::RackAndPinionConstraint(JPH::Body&, JPH::Body&,
   JPH::RackAndPinionConstraintSettings const&) */

void __thiscall
JPH::RackAndPinionConstraint::RackAndPinionConstraint
          (RackAndPinionConstraint *this,Body *param_1,Body *param_2,
          RackAndPinionConstraintSettings *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_3 + 0x10);
  this[0x18] = SUB41(*(undefined4 *)(param_3 + 0x14),0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  uVar1 = *(undefined4 *)(param_3 + 0x50);
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  uVar8 = *(undefined8 *)(param_3 + 0x38);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  iVar2 = *(int *)(param_3 + 0x28);
  *(RackAndPinionConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(this + 0x60) = uVar1;
  *(Body **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__RackAndPinionConstraint_00102090;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x40) = uVar7;
  *(undefined8 *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x50) = uVar9;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  if (iVar2 != 1) {
    return;
  }
  fVar18 = *(float *)(this + 0x40);
  fVar22 = *(float *)(this + 0x44);
  fVar23 = *(float *)(this + 0x48);
  fVar11 = (float)(*(uint *)(param_1 + 0x10) ^ __LC36);
  fVar15 = (float)(*(uint *)(param_1 + 0x14) ^ _UNK_001021b4);
  fVar16 = (float)(*(uint *)(param_1 + 0x18) ^ _UNK_001021b8);
  fVar17 = (float)(*(uint *)(param_1 + 0x1c) ^ _UNK_001021bc);
  fVar21 = (float)(__LC36 ^ *(uint *)(param_2 + 0x10));
  fVar24 = (float)(_UNK_001021b4 ^ *(uint *)(param_2 + 0x14));
  fVar25 = (float)(_UNK_001021b8 ^ *(uint *)(param_2 + 0x18));
  fVar26 = (float)(_UNK_001021bc ^ *(uint *)(param_2 + 0x1c));
  fVar29 = fVar15 + fVar15;
  fVar27 = fVar11 + fVar11;
  fVar30 = fVar16 * (fVar16 + fVar16);
  fVar12 = fVar17 * (fVar16 + fVar16);
  fVar28 = fVar21 + fVar21;
  fVar4 = *(float *)(this + 0x50);
  fVar5 = *(float *)(this + 0x54);
  fVar6 = *(float *)(this + 0x58);
  auVar13._0_4_ =
       (fVar16 * fVar27 + fVar29 * fVar17) * fVar23 +
       (fVar15 * fVar27 - fVar12) * fVar22 + ((_LC7 - fVar15 * fVar29) - fVar30) * fVar18;
  auVar13._4_4_ =
       (fVar16 * fVar29 - fVar27 * fVar17) * fVar23 +
       ((_LC7 - fVar30) - fVar11 * fVar27) * fVar22 + (fVar15 * fVar27 + fVar12) * fVar18;
  auVar13._8_4_ =
       ((_LC7 - fVar11 * fVar27) - fVar15 * fVar29) * fVar23 +
       (fVar27 * fVar17 + fVar16 * fVar29) * fVar22 + (fVar16 * fVar27 - fVar29 * fVar17) * fVar18;
  auVar13._12_4_ = fVar23 * 0.0 + fVar22 * 0.0 + fVar18 * 0.0;
  fVar12 = fVar24 + fVar24;
  auVar19._0_4_ =
       SQRT(auVar13._8_4_ * auVar13._8_4_ +
            auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_ + 0.0);
  auVar19._4_4_ = auVar19._0_4_;
  auVar19._8_4_ = auVar19._0_4_;
  auVar19._12_4_ = auVar19._0_4_;
  auVar13 = divps(auVar13,auVar19);
  fVar22 = fVar26 * (fVar25 + fVar25);
  fVar15 = fVar25 * (fVar25 + fVar25);
  fVar18 = _LC7 - fVar24 * fVar12;
  fVar23 = _LC7 - fVar15;
  fVar11 = _LC7 - fVar21 * fVar28;
  *(undefined1 (*) [16])(this + 0x40) = auVar13;
  auVar20._0_4_ =
       (fVar18 - fVar15) * fVar4 + (fVar24 * fVar28 - fVar22) * fVar5 +
       fVar6 * (fVar25 * fVar28 + fVar12 * fVar26);
  auVar20._4_4_ =
       (fVar24 * fVar28 + fVar22) * fVar4 + (fVar23 - fVar21 * fVar28) * fVar5 +
       fVar6 * (fVar25 * fVar12 - fVar28 * fVar26);
  auVar20._8_4_ =
       (fVar25 * fVar28 - fVar12 * fVar26) * fVar4 + (fVar28 * fVar26 + fVar25 * fVar12) * fVar5 +
       fVar6 * (fVar11 - fVar24 * fVar12);
  auVar20._12_4_ = fVar4 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0;
  auVar14._0_4_ =
       SQRT(auVar20._8_4_ * auVar20._8_4_ +
            auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + 0.0);
  auVar14._4_4_ = auVar14._0_4_;
  auVar14._8_4_ = auVar14._0_4_;
  auVar14._12_4_ = auVar14._0_4_;
  auVar13 = divps(auVar20,auVar14);
  *(undefined1 (*) [16])(this + 0x50) = auVar13;
  return;
}



/* JPH::RackAndPinionConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

RackAndPinionConstraint * __thiscall
JPH::RackAndPinionConstraintSettings::Create
          (RackAndPinionConstraintSettings *this,Body *param_1,Body *param_2)

{
  RackAndPinionConstraint *this_00;
  
  this_00 = (RackAndPinionConstraint *)(*Allocate)(0xd0);
  RackAndPinionConstraint::RackAndPinionConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::CalculateConstraintProperties(JPH::Mat44 const&, JPH::Mat44 const&)
    */

void __thiscall
JPH::RackAndPinionConstraint::CalculateConstraintProperties
          (RackAndPinionConstraint *this,Mat44 *param_1,Mat44 *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  float fVar7;
  undefined1 auVar8 [16];
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
  uint uVar26;
  uint uVar28;
  uint uVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar9 = *(float *)(this + 0x40);
  fVar7 = *(float *)(this + 0x44);
  fVar10 = *(float *)(this + 0x48);
  fVar21 = *(float *)(param_1 + 0xc);
  fVar19 = *(float *)(param_1 + 0x1c);
  fVar35 = *(float *)(param_1 + 0x2c);
  fVar16 = *(float *)(this + 0x50);
  fVar17 = *(float *)(this + 0x54);
  fVar14 = *(float *)(this + 0x58);
  fVar15 = *(float *)(param_1 + 0x3c);
  fVar11 = fVar9 * *(float *)param_1 + fVar7 * *(float *)(param_1 + 0x10) +
           fVar10 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30);
  fVar12 = fVar9 * *(float *)(param_1 + 4) + fVar7 * *(float *)(param_1 + 0x14) +
           fVar10 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34);
  fVar13 = fVar9 * *(float *)(param_1 + 8) + fVar7 * *(float *)(param_1 + 0x18) +
           fVar10 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  lVar2 = *(long *)(*(long *)(this + 0x30) + 0x48);
  fVar18 = *(float *)param_2;
  fVar20 = *(float *)(param_2 + 4);
  fVar38 = *(float *)(param_2 + 8);
  fVar25 = *(float *)(param_2 + 0xc);
  fVar22 = *(float *)(param_2 + 0x10);
  fVar23 = *(float *)(param_2 + 0x14);
  fVar24 = *(float *)(param_2 + 0x18);
  fVar30 = *(float *)(param_2 + 0x1c);
  *(float *)(this + 0x80) = fVar11;
  *(float *)(this + 0x84) = fVar12;
  *(float *)(this + 0x88) = fVar13;
  *(float *)(this + 0x8c) = fVar9 * fVar21 + fVar7 * fVar19 + fVar10 * fVar35 + fVar15;
  fVar22 = fVar16 * fVar18 + fVar17 * fVar22 + fVar14 * *(float *)(param_2 + 0x20) +
           *(float *)(param_2 + 0x30);
  fVar23 = fVar16 * fVar20 + fVar17 * fVar23 + fVar14 * *(float *)(param_2 + 0x24) +
           *(float *)(param_2 + 0x34);
  fVar24 = fVar16 * fVar38 + fVar17 * fVar24 + fVar14 * *(float *)(param_2 + 0x28) +
           *(float *)(param_2 + 0x38);
  fVar25 = fVar16 * fVar25 + fVar17 * fVar30 + fVar14 * *(float *)(param_2 + 0x2c) +
           *(float *)(param_2 + 0x3c);
  lVar3 = *(long *)(this + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(float *)(this + 0x90) = fVar22;
  *(float *)(this + 0x94) = fVar23;
  *(float *)(this + 0x98) = fVar24;
  *(float *)(this + 0x9c) = fVar25;
  fVar7 = _LC7;
  lVar5 = *(long *)(lVar3 + 0x48);
  fVar9 = (float)uVar4;
  fVar10 = (float)((ulong)uVar4 >> 0x20);
  fVar21 = (float)*(undefined8 *)(lVar3 + 0x18);
  bVar1 = *(byte *)(lVar5 + 0x7a);
  fVar19 = (float)*(undefined8 *)(lVar5 + 0x38);
  fVar16 = (float)*(undefined8 *)(lVar5 + 0x30);
  fVar38 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
  fVar35 = (float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20);
  auVar27._1_3_ = 0;
  auVar27[0] = bVar1;
  fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20);
  auVar27[4] = bVar1;
  auVar27._5_3_ = 0;
  auVar27[8] = bVar1;
  auVar27._9_3_ = 0;
  auVar27[0xc] = bVar1;
  auVar27._13_3_ = 0;
  auVar8._4_4_ = _UNK_001021c4;
  auVar8._0_4_ = __LC39;
  auVar8._8_4_ = _UNK_001021c8;
  auVar8._12_4_ = _UNK_001021cc;
  auVar27 = auVar27 & auVar8;
  uVar26 = -(uint)(auVar27._0_4_ == __LC39);
  uVar28 = -(uint)(auVar27._4_4_ == _UNK_001021c4);
  uVar29 = -(uint)(auVar27._8_4_ == _UNK_001021c8);
  bVar6 = auVar27._12_4_ == _UNK_001021cc;
  fVar30 = (float)((uint)fVar11 & uVar26);
  fVar31 = (float)((uint)fVar12 & uVar28);
  fVar32 = (float)((uint)fVar13 & uVar29);
  fVar20 = (fVar38 * fVar16 + fVar9 * fVar35 + fVar10 * fVar19) - fVar21 * fVar17;
  fVar15 = (fVar38 * fVar17 - fVar9 * fVar19) + fVar10 * fVar35 + fVar21 * fVar16;
  fVar18 = fVar20 + fVar20;
  fVar14 = ((fVar38 * fVar19 + fVar9 * fVar17) - fVar10 * fVar16) + fVar21 * fVar35;
  fVar9 = ((fVar38 * fVar35 - fVar9 * fVar16) - fVar10 * fVar17) - fVar21 * fVar19;
  fVar35 = fVar15 + fVar15;
  fVar38 = fVar14 * (fVar14 + fVar14);
  fVar10 = fVar9 * (fVar14 + fVar14);
  fVar36 = fVar14 * fVar35 - fVar18 * fVar9;
  fVar19 = fVar18 * fVar9 + fVar14 * fVar35;
  fVar33 = (_LC7 - fVar20 * fVar18) - fVar15 * fVar35;
  fVar37 = (_LC7 - fVar38) - fVar20 * fVar18;
  fVar34 = fVar14 * fVar18 + fVar35 * fVar9;
  fVar21 = fVar15 * fVar18 - fVar10;
  fVar20 = fVar14 * fVar18 - fVar35 * fVar9;
  fVar10 = fVar10 + fVar15 * fVar18;
  fVar38 = (_LC7 - fVar15 * fVar35) - fVar38;
  fVar35 = (fVar31 * fVar10 + fVar30 * fVar38 + fVar20 * fVar32) * *(float *)(lVar5 + 0x20);
  fVar17 = (fVar31 * fVar37 + fVar30 * fVar21 + fVar19 * fVar32) * *(float *)(lVar5 + 0x24);
  fVar14 = (fVar31 * fVar36 + fVar30 * fVar34 + fVar33 * fVar32) * *(float *)(lVar5 + 0x28);
  fVar9 = *(float *)(lVar2 + 0x58);
  fVar16 = *(float *)(this + 0x60) * fVar9;
  fVar21 = (float)((uint)(fVar35 * fVar38 + fVar17 * fVar21 + fVar34 * fVar14) & uVar26);
  fVar10 = (float)((uint)(fVar35 * fVar10 + fVar17 * fVar37 + fVar36 * fVar14) & uVar28);
  fVar19 = (float)((uint)(fVar35 * fVar20 + fVar17 * fVar19 + fVar33 * fVar14) & uVar29);
  *(float *)(this + 0xa0) = fVar21;
  *(float *)(this + 0xa4) = fVar10;
  *(float *)(this + 0xa8) = fVar19;
  *(uint *)(this + 0xac) = (uint)(fVar35 * 0.0 + fVar17 * 0.0 + fVar14 * 0.0) & -(uint)bVar6;
  *(float *)(this + 0xb0) = fVar16 * fVar22;
  *(float *)(this + 0xb4) = fVar16 * fVar23;
  *(float *)(this + 0xb8) = fVar16 * fVar24;
  *(float *)(this + 0xbc) = fVar16 * fVar25;
  fVar9 = fVar13 * fVar19 + fVar10 * fVar12 + fVar11 * fVar21 + 0.0 +
          *(float *)(this + 0x60) * *(float *)(this + 0x60) * fVar9;
  if (fVar9 != 0.0) {
    *(float *)(this + 0xc0) = fVar7 / fVar9;
    return;
  }
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::SetupVelocityConstraint(float) */

void JPH::RackAndPinionConstraint::SetupVelocityConstraint(float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RackAndPinionConstraint *in_RDI;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Mat44 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Mat44 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  ulong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(in_RDI + 0x28) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(in_RDI + 0x28) + 0x18);
  fVar3 = (float)uVar1;
  fVar6 = (float)uVar2;
  fVar4 = (float)((ulong)uVar1 >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar4 + fVar4;
  fVar8 = (float)((ulong)uVar2 >> 0x20);
  uVar1 = *(undefined8 *)(*(long *)(in_RDI + 0x30) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(in_RDI + 0x30) + 0x18);
  fVar11 = fVar6 * (fVar6 + fVar6);
  fVar7 = fVar8 * (fVar6 + fVar6);
  fVar5 = (float)uVar1;
  local_98._0_4_ = (_LC7 - fVar4 * fVar10) - fVar11;
  local_98._4_4_ = fVar4 * fVar9 + fVar7;
  local_98._8_4_ = fVar6 * fVar9 - fVar10 * fVar8;
  local_98._12_4_ = 0;
  local_88._4_4_ = (_LC7 - fVar11) - fVar3 * fVar9;
  local_88._0_4_ = fVar4 * fVar9 - fVar7;
  uStack_70 = (ulong)(uint)((_LC7 - fVar3 * fVar9) - fVar4 * fVar10);
  fVar7 = fVar5 + fVar5;
  local_88._8_4_ = fVar9 * fVar8 + fVar6 * fVar10;
  local_88._12_4_ = 0;
  local_78 = CONCAT44(fVar6 * fVar10 - fVar9 * fVar8,fVar6 * fVar9 + fVar10 * fVar8);
  uStack_60 = CONCAT44(_LC7,_UNK_00102168);
  fVar4 = (float)uVar2;
  fVar3 = (float)((ulong)uVar1 >> 0x20);
  fVar6 = (float)((ulong)uVar2 >> 0x20);
  local_68 = __LC3;
  fVar9 = fVar3 + fVar3;
  local_28 = __LC3;
  fVar8 = fVar6 * (fVar4 + fVar4);
  fVar10 = fVar4 * (fVar4 + fVar4);
  local_58._0_4_ = (_LC7 - fVar3 * fVar9) - fVar10;
  local_58._4_4_ = fVar3 * fVar7 + fVar8;
  local_58._8_4_ = fVar4 * fVar7 - fVar9 * fVar6;
  local_58._12_4_ = 0;
  local_48._4_4_ = (_LC7 - fVar10) - fVar5 * fVar7;
  local_48._0_4_ = fVar3 * fVar7 - fVar8;
  local_48._8_4_ = fVar7 * fVar6 + fVar4 * fVar9;
  local_48._12_4_ = 0;
  local_38 = CONCAT44(fVar4 * fVar9 - fVar7 * fVar6,fVar4 * fVar7 + fVar9 * fVar6);
  uStack_30 = (ulong)(uint)((_LC7 - fVar5 * fVar7) - fVar3 * fVar9);
  uStack_20 = uStack_60;
  CalculateConstraintProperties(in_RDI,local_98,local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RackAndPinionConstraint::SolvePositionConstraint(float, float) */

undefined8 __thiscall
JPH::RackAndPinionConstraint::SolvePositionConstraint
          (RackAndPinionConstraint *this,float param_1,float param_2)

{
  byte bVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  long lVar12;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  Mat44 local_a8 [16];
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  Mat44 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(this + 0x70) != 0) && (*(long **)(this + 0x68) != (long *)0x0)) &&
     (iVar7 = (**(code **)(**(long **)(this + 0x68) + 0x18))(), iVar7 == 2)) {
    fVar13 = (float)JPH::HingeConstraint::GetCurrentAngle();
    iVar7 = (**(code **)(**(long **)(this + 0x70) + 0x18))();
    if (iVar7 == 3) {
      fVar14 = (float)JPH::SliderConstraint::GetCurrentPosition();
      fVar13 = fVar13 - fVar14 * *(float *)(this + 0x60);
      fVar14 = fVar13;
      do {
        fVar14 = fVar14 - (fVar14 / _LC40) * _LC40;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar14)) {
        fmodf(fVar13,_LC40);
      }
      else {
        if (_LC41 <= fVar14) {
          for (; __LC42 < fVar14; fVar14 = fVar14 - _LC40) {
          }
        }
        else {
          do {
            fVar14 = fVar14 + _LC40;
          } while (fVar14 < _LC41);
        }
        if (fVar14 == 0.0) goto LAB_00101633;
      }
      lVar12 = *(long *)(this + 0x28);
      pfVar2 = *(float **)(this + 0x30);
      fVar13 = (float)*(undefined8 *)(lVar12 + 0x10);
      fVar11 = (float)*(undefined8 *)(lVar12 + 0x18);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20);
      fVar18 = fVar13 + fVar13;
      fVar19 = fVar8 + fVar8;
      fVar17 = (float)((ulong)*(undefined8 *)(lVar12 + 0x18) >> 0x20);
      fVar20 = fVar11 * (fVar11 + fVar11);
      fVar16 = fVar17 * (fVar11 + fVar11);
      local_a8._0_4_ = (_LC7 - fVar8 * fVar19) - fVar20;
      local_a8._4_4_ = fVar8 * fVar18 + fVar16;
      local_a8._8_4_ = fVar11 * fVar18 - fVar19 * fVar17;
      local_a8._12_4_ = 0;
      fVar9 = (float)*(undefined8 *)(pfVar2 + 4);
      local_98 = CONCAT44((_LC7 - fVar20) - fVar13 * fVar18,fVar8 * fVar18 - fVar16);
      fVar16 = fVar9 + fVar9;
      uStack_90 = (ulong)(uint)(fVar18 * fVar17 + fVar11 * fVar19);
      local_88._4_4_ = fVar11 * fVar19 - fVar18 * fVar17;
      local_88._0_4_ = fVar11 * fVar18 + fVar19 * fVar17;
      uStack_70 = CONCAT44(_LC7,_UNK_00102168);
      local_88._8_4_ = (_LC7 - fVar13 * fVar18) - fVar8 * fVar19;
      local_88._12_4_ = 0;
      fVar8 = (float)*(undefined8 *)(pfVar2 + 6);
      fVar13 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
      fVar11 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
      local_78 = __LC3;
      fVar18 = fVar13 + fVar13;
      local_38 = __LC3;
      fVar19 = fVar8 * (fVar8 + fVar8);
      fVar17 = fVar11 * (fVar8 + fVar8);
      local_68._4_4_ = fVar13 * fVar16 + fVar17;
      local_68._0_4_ = (_LC7 - fVar18 * fVar13) - fVar19;
      local_68._8_4_ = fVar16 * fVar8 - fVar18 * fVar11;
      local_68._12_4_ = 0;
      local_58._4_4_ = (_LC7 - fVar19) - fVar9 * fVar16;
      local_58._0_4_ = fVar13 * fVar16 - fVar17;
      local_58._8_4_ = fVar16 * fVar11 + fVar8 * fVar18;
      local_58._12_4_ = 0;
      local_48 = CONCAT44(fVar8 * fVar18 - fVar16 * fVar11,fVar16 * fVar8 + fVar18 * fVar11);
      uStack_40 = (ulong)(uint)((_LC7 - fVar9 * fVar16) - fVar18 * fVar13);
      uStack_30 = uStack_70;
      CalculateConstraintProperties(this,local_a8,local_68);
      fVar14 = fVar14 * (float)(*(uint *)(this + 0xc0) ^ __LC1) * param_2;
      if (*(char *)(lVar12 + 0x78) == '\x02') {
        Body::AddRotationStep
                  (CONCAT44(fVar14 * *(float *)(this + 0xa4),fVar14 * *(float *)(this + 0xa0)),
                   CONCAT44(fVar14 * *(float *)(this + 0xac),fVar14 * *(float *)(this + 0xa8)),
                   lVar12);
      }
      if (*(char *)(pfVar2 + 0x1e) == '\x02') {
        fVar13 = *(float *)(this + 0xb4);
        fVar8 = *(float *)(this + 0xb8);
        fVar9 = *(float *)(this + 0xbc);
        bVar1 = *(byte *)(*(long *)(pfVar2 + 0x12) + 0x7a);
        auVar15._1_3_ = 0;
        auVar15[0] = bVar1;
        auVar15[4] = bVar1;
        auVar15._5_3_ = 0;
        auVar15[8] = bVar1;
        auVar15._9_3_ = 0;
        auVar15[0xc] = bVar1;
        auVar15._13_3_ = 0;
        auVar6._4_4_ = _UNK_00102174;
        auVar6._0_4_ = __LC5;
        auVar6._8_4_ = _UNK_00102178;
        auVar6._12_4_ = _UNK_0010217c;
        auVar15 = auVar15 & auVar6;
        bVar3 = auVar15._4_4_ == _UNK_00102174;
        bVar4 = auVar15._8_4_ == _UNK_00102178;
        bVar5 = auVar15._12_4_ == _UNK_0010217c;
        *pfVar2 = *pfVar2 - (float)((uint)(fVar14 * *(float *)(this + 0xb0)) &
                                   -(uint)(auVar15._0_4_ == __LC5));
        pfVar2[1] = pfVar2[1] - (float)((uint)(fVar14 * fVar13) & -(uint)bVar3);
        pfVar2[2] = pfVar2[2] - (float)((uint)(fVar14 * fVar8) & -(uint)bVar4);
        pfVar2[3] = pfVar2[3] - (float)((uint)(fVar14 * fVar9) & -(uint)bVar5);
      }
      uVar10 = 1;
      goto LAB_00101635;
    }
  }
LAB_00101633:
  uVar10 = 0;
LAB_00101635:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* JPH::RackAndPinionConstraint::GetSubType() const */

undefined8 JPH::RackAndPinionConstraint::GetSubType(void)

{
  return 10;
}



/* JPH::RackAndPinionConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::RackAndPinionConstraint::NotifyShapeChanged(void)

{
  return;
}



/* JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings() */

void __thiscall
JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings
          (RackAndPinionConstraintSettings *this)

{
  return;
}



/* JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings() */

void __thiscall
JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings
          (RackAndPinionConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00101b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
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



/* JPH::RackAndPinionConstraint::~RackAndPinionConstraint() */

void __thiscall
JPH::RackAndPinionConstraint::~RackAndPinionConstraint(RackAndPinionConstraint *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__RackAndPinionConstraint_00102090;
  plVar2 = *(long **)(this + 0x70);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00101bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::RackAndPinionConstraint::~RackAndPinionConstraint() */

void __thiscall
JPH::RackAndPinionConstraint::~RackAndPinionConstraint(RackAndPinionConstraint *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__RackAndPinionConstraint_00102090;
  plVar2 = *(long **)(this + 0x70);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
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
  if (auVar5._0_4_ <= __LC10) {
    return;
  }
  fVar11 = _LC11 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC12 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00102194 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00102198 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010219c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC14 * fVar17 + _LC11);
  iVar14 = (int)(_LC14 * fVar18 + _LC11);
  iVar15 = (int)(_LC14 * fVar19 + _LC11);
  iVar16 = (int)(_LC14 * fVar20 + _LC11);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC17 * fVar4) - _LC19 * fVar4) - fVar4 * _LC21;
  fVar18 = ((fVar18 - _LC17 * fVar6) - _LC19 * fVar6) - fVar6 * _LC21;
  fVar7 = ((fVar19 - _LC17 * fVar7) - _LC19 * fVar7) - fVar7 * _LC21;
  fVar9 = ((fVar20 - _LC17 * fVar9) - _LC19 * fVar9) - fVar9 * _LC21;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC23 * fVar4 + _LC25) * fVar4 + _LC27) * fVar4 * fVar4 - _LC11 * fVar4) + _LC7;
  fVar20 = (((_LC23 * fVar22 + _LC25) * fVar22 + _LC27) * fVar22 * fVar22 - _LC11 * fVar22) + _LC7;
  fVar8 = (((_LC23 * fVar24 + _LC25) * fVar24 + _LC27) * fVar24 * fVar24 - _LC11 * fVar24) + _LC7;
  fVar10 = (((_LC23 * fVar26 + _LC25) * fVar26 + _LC27) * fVar26 * fVar26 - _LC11 * fVar26) + _LC7;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC30 * fVar4 + _LC32) * fVar4 + _LC34) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC30 * fVar22 + _LC32) * fVar22 + _LC34) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC30 * fVar24 + _LC32) * fVar24 + _LC34) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC30 * fVar26 + _LC32) * fVar26 + _LC34) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC35 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC12 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC35 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC12 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001021a4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00102194 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001021a4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00102194 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001021a8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00102198 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001021a8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00102198 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001021ac &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010219c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001021ac &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010219c ^
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



/* JPH::GetRTTIOfType(JPH::RackAndPinionConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC45;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RackAndPinionConstraint::~RackAndPinionConstraint() */

void __thiscall
JPH::RackAndPinionConstraint::~RackAndPinionConstraint(RackAndPinionConstraint *this)

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
/* JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings() */

void __thiscall
JPH::RackAndPinionConstraintSettings::~RackAndPinionConstraintSettings
          (RackAndPinionConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


