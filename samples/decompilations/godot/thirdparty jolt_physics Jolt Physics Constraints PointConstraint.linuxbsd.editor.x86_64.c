
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::PointConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::PointConstraint::NotifyShapeChanged
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



/* JPH::PointConstraint::ResetWarmStart() */

void __thiscall JPH::PointConstraint::ResetWarmStart(PointConstraint *this)

{
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x130) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  return;
}



/* JPH::PointConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::PointConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PointConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PointConstraintSettings::SaveBinaryState(PointConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  return;
}



/* JPH::PointConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PointConstraintSettings::RestoreBinaryState(PointConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::PointConstraint::WarmStartVelocityConstraint(PointConstraint *this,float param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 in_EAX;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  lVar4 = *(long *)(this + 0x30);
  fVar23 = param_1 * *(float *)(this + 0x140);
  fVar24 = param_1 * *(float *)(this + 0x144);
  fVar25 = param_1 * *(float *)(this + 0x148);
  fVar26 = param_1 * *(float *)(this + 0x14c);
  auVar27._4_4_ = -(uint)(fVar24 == 0.0);
  auVar27._0_4_ = -(uint)(fVar23 == 0.0);
  auVar27._8_4_ = -(uint)(fVar25 == 0.0);
  auVar27._12_4_ = -(uint)(fVar26 == 0.0);
  *(float *)(this + 0x140) = fVar23;
  *(float *)(this + 0x144) = fVar24;
  *(float *)(this + 0x148) = fVar25;
  *(float *)(this + 0x14c) = fVar26;
  uVar22 = movmskps(in_EAX,auVar27);
  if ((~uVar22 & 7) != 0) {
    if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
      pfVar5 = *(float **)(*(long *)(this + 0x28) + 0x48);
      cVar2 = *(char *)(lVar4 + 0x78);
      fVar1 = pfVar5[0x16];
      bVar3 = *(byte *)((long)pfVar5 + 0x7a);
      auVar28._1_3_ = 0;
      auVar28[0] = bVar3;
      auVar28[4] = bVar3;
      auVar28._5_3_ = 0;
      auVar28[8] = bVar3;
      auVar28._9_3_ = 0;
      auVar28[0xc] = bVar3;
      auVar28._13_3_ = 0;
      auVar21._4_4_ = _UNK_00102b74;
      auVar21._0_4_ = __LC5;
      auVar21._8_4_ = _UNK_00102b78;
      auVar21._12_4_ = _UNK_00102b7c;
      auVar28 = auVar28 & auVar21;
      bVar6 = auVar28._4_4_ == _UNK_00102b74;
      bVar7 = auVar28._8_4_ == _UNK_00102b78;
      bVar8 = auVar28._12_4_ == _UNK_00102b7c;
      *pfVar5 = (float)(-(uint)(auVar28._0_4_ == __LC5) & (uint)(*pfVar5 - fVar1 * fVar23));
      pfVar5[1] = (float)(-(uint)bVar6 & (uint)(pfVar5[1] - fVar1 * fVar24));
      pfVar5[2] = (float)(-(uint)bVar7 & (uint)(pfVar5[2] - fVar1 * fVar25));
      pfVar5[3] = (float)(-(uint)bVar8 & (uint)(pfVar5[3] - fVar1 * fVar26));
      fVar1 = *(float *)(this + 0x94);
      fVar9 = *(float *)(this + 0x98);
      fVar10 = *(float *)(this + 0x9c);
      fVar11 = *(float *)(this + 0x84);
      fVar12 = *(float *)(this + 0x88);
      fVar13 = *(float *)(this + 0x8c);
      fVar14 = *(float *)(this + 0xa4);
      fVar15 = *(float *)(this + 0xa8);
      fVar16 = *(float *)(this + 0xac);
      fVar17 = *(float *)(this + 0xb4);
      fVar18 = *(float *)(this + 0xb8);
      fVar19 = *(float *)(this + 0xbc);
      pfVar5[4] = pfVar5[4] -
                  (fVar23 * *(float *)(this + 0x80) + fVar24 * *(float *)(this + 0x90) +
                   fVar25 * *(float *)(this + 0xa0) + *(float *)(this + 0xb0));
      pfVar5[5] = pfVar5[5] - (fVar23 * fVar11 + fVar24 * fVar1 + fVar25 * fVar14 + fVar17);
      pfVar5[6] = pfVar5[6] - (fVar23 * fVar12 + fVar24 * fVar9 + fVar25 * fVar15 + fVar18);
      pfVar5[7] = pfVar5[7] - (fVar23 * fVar13 + fVar24 * fVar10 + fVar25 * fVar16 + fVar19);
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x78);
    }
    if (cVar2 == '\x02') {
      pfVar5 = *(float **)(lVar4 + 0x48);
      bVar3 = *(byte *)((long)pfVar5 + 0x7a);
      fVar1 = pfVar5[0x16];
      auVar29._1_3_ = 0;
      auVar29[0] = bVar3;
      auVar29[4] = bVar3;
      auVar29._5_3_ = 0;
      auVar29[8] = bVar3;
      auVar29._9_3_ = 0;
      auVar29[0xc] = bVar3;
      auVar29._13_3_ = 0;
      auVar20._4_4_ = _UNK_00102b74;
      auVar20._0_4_ = __LC5;
      auVar20._8_4_ = _UNK_00102b78;
      auVar20._12_4_ = _UNK_00102b7c;
      auVar29 = auVar29 & auVar20;
      bVar6 = auVar29._4_4_ == _UNK_00102b74;
      bVar7 = auVar29._8_4_ == _UNK_00102b78;
      bVar8 = auVar29._12_4_ == _UNK_00102b7c;
      *pfVar5 = (float)((uint)(fVar1 * fVar23 + *pfVar5) & -(uint)(auVar29._0_4_ == __LC5));
      pfVar5[1] = (float)((uint)(fVar1 * fVar24 + pfVar5[1]) & -(uint)bVar6);
      pfVar5[2] = (float)((uint)(fVar1 * fVar25 + pfVar5[2]) & -(uint)bVar7);
      pfVar5[3] = (float)((uint)(fVar1 * fVar26 + pfVar5[3]) & -(uint)bVar8);
      fVar26 = *(float *)(this + 0xd4);
      fVar1 = *(float *)(this + 0xd8);
      fVar9 = *(float *)(this + 0xdc);
      fVar10 = *(float *)(this + 0xc4);
      fVar11 = *(float *)(this + 200);
      fVar12 = *(float *)(this + 0xcc);
      fVar13 = *(float *)(this + 0xe4);
      fVar14 = *(float *)(this + 0xe8);
      fVar15 = *(float *)(this + 0xec);
      fVar16 = *(float *)(this + 0xf4);
      fVar17 = *(float *)(this + 0xf8);
      fVar18 = *(float *)(this + 0xfc);
      pfVar5[4] = fVar25 * *(float *)(this + 0xe0) +
                  fVar23 * *(float *)(this + 0xc0) + fVar24 * *(float *)(this + 0xd0) +
                  *(float *)(this + 0xf0) + pfVar5[4];
      pfVar5[5] = fVar25 * fVar13 + fVar23 * fVar10 + fVar24 * fVar26 + fVar16 + pfVar5[5];
      pfVar5[6] = fVar25 * fVar14 + fVar23 * fVar11 + fVar24 * fVar1 + fVar17 + pfVar5[6];
      pfVar5[7] = fVar25 * fVar15 + fVar23 * fVar12 + fVar24 * fVar9 + fVar18 + pfVar5[7];
      return;
    }
  }
  return;
}



/* JPH::PointConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::PointConstraint::SaveState(PointConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::SaveState((StateRecorder *)this);
                    /* WARNING: Could not recover jumptable at 0x00100303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x140,0xc);
  return;
}



/* JPH::PointConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::PointConstraint::RestoreState(PointConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x140,0xc);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x50);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((long)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_GetRTTI_00102a40;
  puVar1[2] = 0;
  puVar1[3] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* JPH::PointConstraint::GetConstraintSettings() const */

void JPH::PointConstraint::GetConstraintSettings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  
  puVar5 = (undefined8 *)(*Allocate)(0x50);
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined1 *)((long)puVar5 + 0xc) = 1;
  *puVar5 = &PTR_GetRTTI_00102a40;
  puVar5[2] = 0;
  puVar5[3] = 0x3f80000000000000;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 1;
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 8) = (undefined1  [16])0x0;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar1 = *(undefined8 *)(in_RSI + 0x40);
  uVar2 = *(undefined8 *)(in_RSI + 0x48);
  uVar3 = *(undefined8 *)(in_RSI + 0x50);
  uVar4 = *(undefined8 *)(in_RSI + 0x58);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[6] = uVar1;
  puVar5[7] = uVar2;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *in_RDI = puVar5;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  return;
}



/* JPH::PointConstraintSettings::GetRTTI() const */

undefined1 * JPH::PointConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PointConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PointConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PointConstraintSettings*)::rtti,
                      "PointConstraintSettings",0x50,
                      GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PointConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PointConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PointConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PointConstraintSettings*)::rtti;
}



/* JPH::PointConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::PointConstraint::DrawConstraint(PointConstraint *this,DebugRenderer *param_1)

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
  
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar2 = *(float *)(this + 0x40);
  fVar3 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x48);
  fVar5 = (float)puVar1[2];
  fVar6 = (float)puVar1[3];
  fVar9 = (float)((ulong)puVar1[2] >> 0x20);
  fVar10 = fVar5 + fVar5;
  fVar7 = (float)((ulong)puVar1[3] >> 0x20);
  fVar11 = fVar9 + fVar9;
  fVar8 = fVar7 * (fVar6 + fVar6);
  fVar12 = fVar6 * (fVar6 + fVar6);
  local_38._0_4_ = (float)*puVar1;
  local_38._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_38 = CONCAT44((fVar9 * fVar10 + fVar8) * fVar2 + ((_LC3 - fVar12) - fVar5 * fVar10) * fVar3
                      + (fVar6 * fVar11 - fVar10 * fVar7) * fVar4 + local_38._4_4_,
                      ((_LC3 - fVar9 * fVar11) - fVar12) * fVar2 + (fVar9 * fVar10 - fVar8) * fVar3
                      + (fVar6 * fVar10 + fVar11 * fVar7) * fVar4 + (float)local_38);
  uStack_30 = CONCAT44(fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0 + 1.0,
                       (fVar6 * fVar10 - fVar11 * fVar7) * fVar2 +
                       (fVar10 * fVar7 + fVar6 * fVar11) * fVar3 +
                       ((_LC3 - fVar5 * fVar10) - fVar9 * fVar11) * fVar4 + *(float *)(puVar1 + 1));
  JPH::DebugRenderer::DrawMarker(local_38,uStack_30,param_1,(undefined4)Color::sRed);
  puVar1 = *(undefined8 **)(this + 0x30);
  fVar5 = (float)puVar1[2];
  fVar6 = (float)puVar1[3];
  fVar9 = (float)((ulong)puVar1[2] >> 0x20);
  fVar10 = fVar5 + fVar5;
  fVar7 = (float)((ulong)puVar1[3] >> 0x20);
  fVar11 = fVar9 + fVar9;
  fVar8 = fVar7 * (fVar6 + fVar6);
  fVar12 = fVar6 * (fVar6 + fVar6);
  fVar2 = *(float *)(this + 0x50);
  fVar3 = *(float *)(this + 0x54);
  fVar4 = *(float *)(this + 0x58);
  local_38._0_4_ = (float)*puVar1;
  local_38._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_38 = CONCAT44((fVar9 * fVar10 + fVar8) * fVar2 + ((_LC3 - fVar12) - fVar5 * fVar10) * fVar3
                      + fVar4 * (fVar6 * fVar11 - fVar10 * fVar7) + local_38._4_4_,
                      ((_LC3 - fVar9 * fVar11) - fVar12) * fVar2 + (fVar9 * fVar10 - fVar8) * fVar3
                      + fVar4 * (fVar6 * fVar10 + fVar11 * fVar7) + (float)local_38);
  uStack_30 = CONCAT44(fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0 + 1.0,
                       (fVar6 * fVar10 - fVar11 * fVar7) * fVar2 +
                       (fVar10 * fVar7 + fVar6 * fVar11) * fVar3 +
                       fVar4 * ((_LC3 - fVar5 * fVar10) - fVar9 * fVar11) + *(float *)(puVar1 + 1));
  JPH::DebugRenderer::DrawMarker(local_38,uStack_30,param_1,(undefined4)Color::sGreen);
  return;
}



/* JPH::PointConstraint::SolveVelocityConstraint(float) */

void JPH::PointConstraint::SolveVelocityConstraint(float param_1)

{
  long in_RDI;
  
  PointConstraintPart::SolveVelocityConstraint
            ((PointConstraintPart *)(in_RDI + 0x60),*(Body **)(in_RDI + 0x28),
             *(Body **)(in_RDI + 0x30));
  return;
}



/* JPH::GetRTTIOfType(JPH::PointConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(PointConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PointConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PointConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PointConstraintSettings*)::rtti,
                      "PointConstraintSettings",0x50,
                      GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PointConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      PointConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PointConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PointConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PointConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PointConstraintSettings*)::rtti;
}



/* JPH::PointConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::PointConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PointConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::PointConstraint(JPH::Body&, JPH::Body&, JPH::PointConstraintSettings
   const&) */

void __thiscall
JPH::PointConstraint::PointConstraint
          (PointConstraint *this,Body *param_1,Body *param_2,PointConstraintSettings *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
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
  
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x18] = SUB41(uVar1,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  iVar3 = *(int *)(param_3 + 0x28);
  *(PointConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(Body **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__PointConstraint_00102a88;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  fVar6 = _LC3;
  if (iVar3 != 1) {
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    uVar8 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar4;
    *(undefined8 *)(this + 0x50) = uVar7;
    *(undefined8 *)(this + 0x58) = uVar8;
    return;
  }
  fVar9 = (float)(__LC42 ^ *(uint *)(param_1 + 0x10));
  fVar12 = (float)(_UNK_00102bd4 ^ *(uint *)(param_1 + 0x14));
  fVar13 = (float)(_UNK_00102bd8 ^ *(uint *)(param_1 + 0x18));
  fVar14 = (float)(_UNK_00102bdc ^ *(uint *)(param_1 + 0x1c));
  fVar27 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar11 = *(float *)(param_1 + 8);
  fVar19 = fVar9 + fVar9;
  fVar28 = fVar12 + fVar12;
  fVar10 = fVar14 * (fVar13 + fVar13);
  fVar29 = fVar13 * (fVar13 + fVar13);
  fVar30 = fVar13 * fVar28 - fVar19 * fVar14;
  fVar21 = fVar13 * fVar19 + fVar28 * fVar14;
  fVar20 = fVar19 * fVar14 + fVar13 * fVar28;
  fVar26 = fVar13 * fVar19 - fVar28 * fVar14;
  fVar23 = (_LC3 - fVar9 * fVar19) - fVar12 * fVar28;
  fVar31 = (_LC3 - fVar29) - fVar9 * fVar19;
  fVar15 = (float)(__LC42 ^ *(uint *)(param_2 + 0x10));
  fVar16 = (float)(_UNK_00102bd4 ^ *(uint *)(param_2 + 0x14));
  fVar17 = (float)(_UNK_00102bd8 ^ *(uint *)(param_2 + 0x18));
  fVar18 = (float)(_UNK_00102bdc ^ *(uint *)(param_2 + 0x1c));
  fVar24 = fVar12 * fVar19 + fVar10;
  fVar10 = fVar12 * fVar19 - fVar10;
  fVar29 = (_LC3 - fVar12 * fVar28) - fVar29;
  fVar9 = *(float *)(param_3 + 0x30);
  fVar12 = *(float *)(param_3 + 0x34);
  fVar13 = *(float *)(param_3 + 0x38);
  fVar14 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar28 = *(float *)(param_2 + 8);
  fVar22 = fVar15 + fVar15;
  fVar25 = fVar16 + fVar16;
  *(float *)(this + 0x40) =
       fVar13 * fVar21 + fVar9 * fVar29 + fVar12 * fVar10 +
       (0.0 - (fVar27 * fVar29 + fVar5 * fVar10 + fVar11 * fVar21));
  *(float *)(this + 0x44) =
       fVar13 * fVar30 + fVar9 * fVar24 + fVar12 * fVar31 +
       (0.0 - (fVar27 * fVar24 + fVar5 * fVar31 + fVar11 * fVar30));
  *(float *)(this + 0x48) =
       fVar13 * fVar23 + fVar9 * fVar26 + fVar12 * fVar20 +
       (0.0 - (fVar27 * fVar26 + fVar5 * fVar20 + fVar11 * fVar23));
  *(float *)(this + 0x4c) = fVar13 * 0.0 + fVar9 * 0.0 + fVar12 * 0.0 + 1.0;
  fVar27 = fVar17 * (fVar17 + fVar17);
  fVar9 = fVar18 * (fVar17 + fVar17);
  fVar13 = fVar17 * fVar22 + fVar25 * fVar18;
  fVar21 = fVar17 * fVar25 - fVar22 * fVar18;
  fVar29 = fVar22 * fVar18 + fVar17 * fVar25;
  fVar10 = (fVar6 - fVar15 * fVar22) - fVar16 * fVar25;
  fVar20 = fVar16 * fVar22 + fVar9;
  fVar9 = fVar16 * fVar22 - fVar9;
  fVar11 = (fVar6 - fVar16 * fVar25) - fVar27;
  fVar15 = (fVar6 - fVar27) - fVar15 * fVar22;
  fVar12 = fVar17 * fVar22 - fVar25 * fVar18;
  fVar6 = *(float *)(param_3 + 0x40);
  fVar27 = *(float *)(param_3 + 0x44);
  fVar5 = *(float *)(param_3 + 0x48);
  *(float *)(this + 0x50) =
       fVar5 * fVar13 + fVar6 * fVar11 + fVar27 * fVar9 +
       (0.0 - (fVar14 * fVar11 + fVar19 * fVar9 + fVar28 * fVar13));
  *(float *)(this + 0x54) =
       fVar5 * fVar21 + fVar6 * fVar20 + fVar27 * fVar15 +
       (0.0 - (fVar14 * fVar20 + fVar19 * fVar15 + fVar28 * fVar21));
  *(float *)(this + 0x58) =
       fVar5 * fVar10 + fVar6 * fVar12 + fVar27 * fVar29 +
       (0.0 - (fVar14 * fVar12 + fVar19 * fVar29 + fVar28 * fVar10));
  *(float *)(this + 0x5c) = fVar5 * 0.0 + fVar6 * 0.0 + fVar27 * 0.0 + 1.0;
  return;
}



/* JPH::PointConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

PointConstraint * __thiscall
JPH::PointConstraintSettings::Create(PointConstraintSettings *this,Body *param_1,Body *param_2)

{
  PointConstraint *this_00;
  
  this_00 = (PointConstraint *)(*Allocate)(0x150);
  PointConstraint::PointConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::SetPoint1(JPH::EConstraintSpace, JPH::Vec3) */

void JPH::PointConstraint::SetPoint1(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_28;
  float fStack_24;
  
  fVar10 = (float)param_2;
  if (param_4 != 1) {
    *(undefined8 *)(param_3 + 0x40) = param_1;
    *(undefined8 *)(param_3 + 0x48) = param_2;
    return;
  }
  pfVar1 = *(float **)(param_3 + 0x28);
  fVar5 = (float)(__LC42 ^ (uint)pfVar1[4]);
  fVar7 = (float)(_UNK_00102bd4 ^ (uint)pfVar1[5]);
  fVar8 = (float)(_UNK_00102bd8 ^ (uint)pfVar1[6]);
  fVar9 = (float)(_UNK_00102bdc ^ (uint)pfVar1[7]);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar15 = fVar5 + fVar5;
  fVar17 = fVar7 + fVar7;
  fVar18 = fVar8 * (fVar8 + fVar8);
  fVar6 = fVar9 * (fVar8 + fVar8);
  fVar13 = (_LC3 - fVar5 * fVar15) - fVar7 * fVar17;
  fVar12 = fVar8 * fVar15 + fVar17 * fVar9;
  fVar19 = fVar8 * fVar17 - fVar15 * fVar9;
  fVar16 = fVar15 * fVar9 + fVar8 * fVar17;
  fVar14 = fVar7 * fVar15 - fVar6;
  fVar6 = fVar7 * fVar15 + fVar6;
  fVar11 = (_LC3 - fVar7 * fVar17) - fVar18;
  fVar7 = fVar8 * fVar15 - fVar17 * fVar9;
  fVar5 = (_LC3 - fVar18) - fVar5 * fVar15;
  local_28 = (float)param_1;
  fStack_24 = (float)((ulong)param_1 >> 0x20);
  *(float *)(param_3 + 0x40) =
       local_28 * fVar11 + fStack_24 * fVar14 + fVar10 * fVar12 +
       (0.0 - (fVar2 * fVar11 + fVar3 * fVar14 + fVar4 * fVar12));
  *(float *)(param_3 + 0x44) =
       local_28 * fVar6 + fStack_24 * fVar5 + fVar10 * fVar19 +
       (0.0 - (fVar2 * fVar6 + fVar3 * fVar5 + fVar4 * fVar19));
  *(float *)(param_3 + 0x48) =
       local_28 * fVar7 + fStack_24 * fVar16 + fVar10 * fVar13 +
       (0.0 - (fVar2 * fVar7 + fVar3 * fVar16 + fVar4 * fVar13));
  *(float *)(param_3 + 0x4c) = local_28 * 0.0 + fStack_24 * 0.0 + fVar10 * 0.0 + 1.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::SetPoint2(JPH::EConstraintSpace, JPH::Vec3) */

void JPH::PointConstraint::SetPoint2(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_28;
  float fStack_24;
  
  fVar10 = (float)param_2;
  if (param_4 != 1) {
    *(undefined8 *)(param_3 + 0x50) = param_1;
    *(undefined8 *)(param_3 + 0x58) = param_2;
    return;
  }
  pfVar1 = *(float **)(param_3 + 0x30);
  fVar5 = (float)(__LC42 ^ (uint)pfVar1[4]);
  fVar7 = (float)(_UNK_00102bd4 ^ (uint)pfVar1[5]);
  fVar8 = (float)(_UNK_00102bd8 ^ (uint)pfVar1[6]);
  fVar9 = (float)(_UNK_00102bdc ^ (uint)pfVar1[7]);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar15 = fVar5 + fVar5;
  fVar17 = fVar7 + fVar7;
  fVar18 = fVar8 * (fVar8 + fVar8);
  fVar6 = fVar9 * (fVar8 + fVar8);
  fVar13 = (_LC3 - fVar5 * fVar15) - fVar7 * fVar17;
  fVar12 = fVar8 * fVar15 + fVar17 * fVar9;
  fVar19 = fVar8 * fVar17 - fVar15 * fVar9;
  fVar16 = fVar15 * fVar9 + fVar8 * fVar17;
  fVar14 = fVar7 * fVar15 - fVar6;
  fVar6 = fVar7 * fVar15 + fVar6;
  fVar11 = (_LC3 - fVar7 * fVar17) - fVar18;
  fVar7 = fVar8 * fVar15 - fVar17 * fVar9;
  fVar5 = (_LC3 - fVar18) - fVar5 * fVar15;
  local_28 = (float)param_1;
  fStack_24 = (float)((ulong)param_1 >> 0x20);
  *(float *)(param_3 + 0x50) =
       local_28 * fVar11 + fStack_24 * fVar14 + fVar10 * fVar12 +
       (0.0 - (fVar2 * fVar11 + fVar3 * fVar14 + fVar4 * fVar12));
  *(float *)(param_3 + 0x54) =
       local_28 * fVar6 + fStack_24 * fVar5 + fVar10 * fVar19 +
       (0.0 - (fVar2 * fVar6 + fVar3 * fVar5 + fVar4 * fVar19));
  *(float *)(param_3 + 0x58) =
       local_28 * fVar7 + fStack_24 * fVar16 + fVar10 * fVar13 +
       (0.0 - (fVar2 * fVar7 + fVar3 * fVar16 + fVar4 * fVar13));
  *(float *)(param_3 + 0x5c) = local_28 * 0.0 + fStack_24 * 0.0 + fVar10 * 0.0 + 1.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::CalculateConstraintProperties() */

void __thiscall JPH::PointConstraint::CalculateConstraintProperties(PointConstraint *this)

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
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  ulong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  lVar1 = *(long *)(this + 0x30);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x28);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x10);
  fVar6 = (float)*(undefined8 *)(lVar1 + 0x18);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
  fVar9 = fVar3 + fVar3;
  fVar10 = fVar4 + fVar4;
  fVar8 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
  fVar11 = fVar6 * (fVar6 + fVar6);
  fVar7 = fVar8 * (fVar6 + fVar6);
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x10);
  local_58._0_4_ = (_LC3 - fVar4 * fVar10) - fVar11;
  local_58._4_4_ = fVar4 * fVar9 + fVar7;
  local_58._8_4_ = fVar6 * fVar9 - fVar10 * fVar8;
  local_58._12_4_ = 0;
  local_48._4_4_ = (_LC3 - fVar11) - fVar3 * fVar9;
  local_48._0_4_ = fVar4 * fVar9 - fVar7;
  uStack_30 = (ulong)(uint)((_LC3 - fVar3 * fVar9) - fVar4 * fVar10);
  fVar7 = fVar5 + fVar5;
  local_48._8_4_ = fVar9 * fVar8 + fVar6 * fVar10;
  local_48._12_4_ = 0;
  local_38 = CONCAT44(fVar6 * fVar10 - fVar9 * fVar8,fVar6 * fVar9 + fVar10 * fVar8);
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x18);
  fVar3 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
  local_68 = __LC41;
  uStack_60 = _UNK_00102b88;
  fVar9 = fVar3 + fVar3;
  local_28 = __LC41;
  uStack_20 = _UNK_00102b88;
  fVar8 = fVar6 * (fVar4 + fVar4);
  fVar10 = fVar4 * (fVar4 + fVar4);
  local_98._0_4_ = (_LC3 - fVar3 * fVar9) - fVar10;
  local_98._4_4_ = fVar3 * fVar7 + fVar8;
  local_98._8_4_ = fVar4 * fVar7 - fVar9 * fVar6;
  local_98._12_4_ = 0;
  local_88._4_4_ = (_LC3 - fVar10) - fVar5 * fVar7;
  local_88._0_4_ = fVar3 * fVar7 - fVar8;
  local_88._8_4_ = fVar7 * fVar6 + fVar4 * fVar9;
  local_88._12_4_ = 0;
  local_78 = CONCAT44(fVar4 * fVar9 - fVar7 * fVar6,fVar4 * fVar7 + fVar9 * fVar6);
  uStack_70 = (ulong)(uint)((_LC3 - fVar5 * fVar7) - fVar3 * fVar9);
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),this + 0x60,lVar2,local_98,lVar1,local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PointConstraint::SetupVelocityConstraint(float) */

void JPH::PointConstraint::SetupVelocityConstraint(float param_1)

{
  PointConstraint *in_RDI;
  
  CalculateConstraintProperties(in_RDI);
  return;
}



/* JPH::PointConstraint::SolvePositionConstraint(float, float) */

void __thiscall
JPH::PointConstraint::SolvePositionConstraint(PointConstraint *this,float param_1,float param_2)

{
  CalculateConstraintProperties(this);
  PointConstraintPart::SolvePositionConstraint
            ((PointConstraintPart *)(this + 0x60),*(Body **)(this + 0x28),*(Body **)(this + 0x30),
             param_2);
  return;
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



/* JPH::PointConstraint::GetSubType() const */

undefined8 JPH::PointConstraint::GetSubType(void)

{
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::GetConstraintToBody1Matrix() const */

void JPH::PointConstraint::GetConstraintToBody1Matrix(void)

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
  uVar4 = _UNK_00102b58;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_00102b68;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraint::GetConstraintToBody2Matrix() const */

void JPH::PointConstraint::GetConstraintToBody2Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  *in_RDI = ZEXT416(_LC3);
  uVar4 = _UNK_00102b58;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_00102b68;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* JPH::PointConstraintSettings::~PointConstraintSettings() */

void __thiscall
JPH::PointConstraintSettings::~PointConstraintSettings(PointConstraintSettings *this)

{
  return;
}



/* JPH::PointConstraintSettings::~PointConstraintSettings() */

void __thiscall
JPH::PointConstraintSettings::~PointConstraintSettings(PointConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x001014b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PointConstraint::~PointConstraint() */

void __thiscall JPH::PointConstraint::~PointConstraint(PointConstraint *this)

{
  return;
}



/* JPH::PointConstraint::~PointConstraint() */

void __thiscall JPH::PointConstraint::~PointConstraint(PointConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x001014e4. Too many branches */
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
  
  uVar6 = _UNK_00102b88;
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
  *(undefined8 *)(param_1 + 0x30) = __LC41;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_00102b94;
  auVar5._0_4_ = __LC11;
  auVar5._8_4_ = _UNK_00102b98;
  auVar5._12_4_ = _UNK_00102b9c;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC11);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00102b94);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00102b98);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_00102b9c);
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
  fVar17 = (float)(__LC15 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00102bb4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00102bb8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_00102bbc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC17 * fVar17 + _LC14);
  iVar14 = (int)(_LC17 * fVar18 + _LC14);
  iVar15 = (int)(_LC17 * fVar19 + _LC14);
  iVar16 = (int)(_LC17 * fVar20 + _LC14);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC20 * fVar4) - _LC22 * fVar4) - fVar4 * _LC24;
  fVar18 = ((fVar18 - _LC20 * fVar6) - _LC22 * fVar6) - fVar6 * _LC24;
  fVar7 = ((fVar19 - _LC20 * fVar7) - _LC22 * fVar7) - fVar7 * _LC24;
  fVar9 = ((fVar20 - _LC20 * fVar9) - _LC22 * fVar9) - fVar9 * _LC24;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC26 * fVar4 + _LC28) * fVar4 + _LC30) * fVar4 * fVar4 - _LC14 * fVar4) + _LC3;
  fVar20 = (((_LC26 * fVar22 + _LC28) * fVar22 + _LC30) * fVar22 * fVar22 - _LC14 * fVar22) + _LC3;
  fVar8 = (((_LC26 * fVar24 + _LC28) * fVar24 + _LC30) * fVar24 * fVar24 - _LC14 * fVar24) + _LC3;
  fVar10 = (((_LC26 * fVar26 + _LC28) * fVar26 + _LC30) * fVar26 * fVar26 - _LC14 * fVar26) + _LC3;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC33 * fVar4 + _LC35) * fVar4 + _LC37) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC33 * fVar22 + _LC35) * fVar22 + _LC37) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC33 * fVar24 + _LC35) * fVar24 + _LC37) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC33 * fVar26 + _LC35) * fVar26 + _LC37) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC38 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC15 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC38 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC15 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00102bc4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00102bb4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00102bc4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00102bb4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00102bc8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00102bb8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00102bc8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00102bb8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_00102bcc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_00102bbc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_00102bcc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_00102bbc ^
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
    uVar20 = _UNK_00102b88;
    uVar18 = __LC41;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC13);
    fVar24 = (float)((uint)fVar15 ^ _LC13);
    fVar26 = (float)((uint)fVar13 ^ _LC13);
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
    uVar7 = _UNK_00102b88;
    *(undefined8 *)(param_1 + 0x14) = __LC41;
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
    uVar18 = __LC41;
    uVar20 = _UNK_00102b88;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC13);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC13);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC13);
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
      auVar16._4_4_ = _UNK_00102b74;
      auVar16._0_4_ = __LC5;
      auVar16._8_4_ = _UNK_00102b78;
      auVar16._12_4_ = _UNK_00102b7c;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_00102b74;
      bVar7 = auVar30._8_4_ == _UNK_00102b78;
      bVar8 = auVar30._12_4_ == _UNK_00102b7c;
      *pfVar5 = (float)(-(uint)(auVar30._0_4_ == __LC5) & (uint)(*pfVar5 - fVar22 * fVar21));
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
      auVar15._4_4_ = _UNK_00102b74;
      auVar15._0_4_ = __LC5;
      auVar15._8_4_ = _UNK_00102b78;
      auVar15._12_4_ = _UNK_00102b7c;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_00102b74;
      bVar7 = auVar31._8_4_ == _UNK_00102b78;
      bVar8 = auVar31._12_4_ == _UNK_00102b7c;
      *pfVar4 = (float)((uint)(fVar22 * fVar21 + *pfVar4) & -(uint)(auVar31._0_4_ == __LC5));
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
  Body BVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float local_68 [18];
  long local_20;
  
  fVar28 = *(float *)param_1;
  fVar30 = *(float *)(param_1 + 4);
  fVar31 = *(float *)(param_1 + 8);
  fVar36 = *(float *)(param_1 + 0xc);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar21 = ((*(float *)param_2 - fVar28) + *(float *)(this + 0x10)) - *(float *)this;
  fVar24 = ((*(float *)(param_2 + 4) - fVar30) + *(float *)(this + 0x14)) - *(float *)(this + 4);
  fVar25 = ((*(float *)(param_2 + 8) - fVar31) + *(float *)(this + 0x18)) - *(float *)(this + 8);
  auVar19._4_4_ = -(uint)(fVar24 == 0.0);
  auVar19._0_4_ = -(uint)(fVar21 == 0.0);
  auVar19._8_4_ = -(uint)(fVar25 == 0.0);
  auVar19._12_4_ =
       -(uint)(((*(float *)(param_2 + 0xc) - fVar36) + *(float *)(this + 0x1c)) -
               *(float *)(this + 0xc) == 0.0);
  uVar13 = movmskps(0,auVar19);
  if ((~uVar13 & 7) == 0) {
    uVar15 = 0;
  }
  else {
    fVar16 = (float)((uint)param_3 ^ _LC13);
    lVar14 = 0;
    do {
      pPVar1 = this + lVar14 + 0xa0;
      fVar26 = *(float *)(pPVar1 + 4);
      fVar27 = *(float *)(pPVar1 + 8);
      fVar37 = *(float *)(pPVar1 + 0xc);
      *(float *)((long)local_68 + lVar14) = *(float *)pPVar1 * fVar16;
      *(float *)((long)local_68 + lVar14 + 4) = fVar26 * fVar16;
      *(float *)((long)local_68 + lVar14 + 8) = fVar27 * fVar16;
      *(float *)((long)local_68 + lVar14 + 0xc) = fVar37 * fVar16;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != 0x40);
    fVar16 = fVar21 * local_68[0] + fVar24 * local_68[4] + fVar25 * local_68[8] + local_68[0xc];
    fVar26 = fVar21 * local_68[1] + fVar24 * local_68[5] + fVar25 * local_68[9] + local_68[0xd];
    fVar27 = fVar21 * local_68[2] + fVar24 * local_68[6] + fVar25 * local_68[10] + local_68[0xe];
    fVar21 = fVar21 * local_68[3] + fVar24 * local_68[7] + fVar25 * local_68[0xb] + local_68[0xf];
    if (param_1[0x78] == (Body)0x2) {
      bVar3 = *(byte *)(*(long *)(param_1 + 0x48) + 0x7a);
      fVar24 = *(float *)(*(long *)(param_1 + 0x48) + 0x58);
      auVar18._1_3_ = 0;
      auVar18[0] = bVar3;
      auVar18[4] = bVar3;
      auVar18._5_3_ = 0;
      auVar18[8] = bVar3;
      auVar18._9_3_ = 0;
      auVar18[0xc] = bVar3;
      auVar18._13_3_ = 0;
      auVar12._4_4_ = _UNK_00102b74;
      auVar12._0_4_ = __LC5;
      auVar12._8_4_ = _UNK_00102b78;
      auVar12._12_4_ = _UNK_00102b7c;
      auVar18 = auVar18 & auVar12;
      bVar4 = auVar18._4_4_ == _UNK_00102b74;
      bVar5 = auVar18._8_4_ == _UNK_00102b78;
      bVar6 = auVar18._12_4_ == _UNK_00102b7c;
      fVar25 = *(float *)(this + 0x30);
      fVar37 = *(float *)(this + 0x34);
      fVar38 = *(float *)(this + 0x38);
      fVar39 = *(float *)(this + 0x3c);
      fVar7 = *(float *)(this + 0x20);
      fVar8 = *(float *)(this + 0x24);
      fVar9 = *(float *)(this + 0x28);
      fVar10 = *(float *)(this + 0x2c);
      *(float *)param_1 =
           fVar28 - (float)(-(uint)(auVar18._0_4_ == __LC5) & (uint)(fVar24 * fVar16));
      *(float *)(param_1 + 4) = fVar30 - (float)(-(uint)bVar4 & (uint)(fVar24 * fVar26));
      *(float *)(param_1 + 8) = fVar31 - (float)(-(uint)bVar5 & (uint)(fVar24 * fVar27));
      *(float *)(param_1 + 0xc) = fVar36 - (float)(-(uint)bVar6 & (uint)(fVar24 * fVar21));
      Body::SubRotationStep
                (CONCAT44(fVar16 * fVar8 + fVar26 * fVar37 + fVar27 * *(float *)(this + 0x44) +
                          *(float *)(this + 0x54),
                          fVar16 * fVar7 + fVar26 * fVar25 + fVar27 * *(float *)(this + 0x40) +
                          *(float *)(this + 0x50)),
                 CONCAT44(fVar16 * fVar10 + fVar26 * fVar39 + fVar27 * *(float *)(this + 0x4c) +
                          *(float *)(this + 0x5c),
                          fVar16 * fVar9 + fVar26 * fVar38 + fVar27 * *(float *)(this + 0x48) +
                          *(float *)(this + 0x58)),param_1);
      BVar2 = param_2[0x78];
    }
    else {
      BVar2 = param_2[0x78];
    }
    if (BVar2 == (Body)0x2) {
      bVar3 = *(byte *)(*(long *)(param_2 + 0x48) + 0x7a);
      fVar28 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
      auVar22._1_3_ = 0;
      auVar22[0] = bVar3;
      auVar22[4] = bVar3;
      auVar22._5_3_ = 0;
      auVar22[8] = bVar3;
      auVar22._9_3_ = 0;
      auVar22[0xc] = bVar3;
      auVar22._13_3_ = 0;
      auVar11._4_4_ = _UNK_00102b74;
      auVar11._0_4_ = __LC5;
      auVar11._8_4_ = _UNK_00102b78;
      auVar11._12_4_ = _UNK_00102b7c;
      auVar22 = auVar22 & auVar11;
      bVar4 = auVar22._4_4_ == _UNK_00102b74;
      bVar5 = auVar22._8_4_ == _UNK_00102b78;
      bVar6 = auVar22._12_4_ == _UNK_00102b7c;
      fVar30 = *(float *)(this + 0x70);
      fVar31 = *(float *)(this + 0x74);
      fVar36 = *(float *)(this + 0x78);
      fVar24 = *(float *)(this + 0x7c);
      *(float *)param_2 =
           (float)((uint)(fVar28 * fVar16) & -(uint)(auVar22._0_4_ == __LC5)) + *(float *)param_2;
      *(float *)(param_2 + 4) =
           (float)((uint)(fVar28 * fVar26) & -(uint)bVar4) + *(float *)(param_2 + 4);
      *(float *)(param_2 + 8) =
           (float)((uint)(fVar28 * fVar27) & -(uint)bVar5) + *(float *)(param_2 + 8);
      *(float *)(param_2 + 0xc) =
           (float)((uint)(fVar28 * fVar21) & -(uint)bVar6) + *(float *)(param_2 + 0xc);
      auVar17._0_4_ =
           fVar16 * *(float *)(this + 0x60) + fVar26 * fVar30 + fVar27 * *(float *)(this + 0x80) +
           *(float *)(this + 0x90);
      auVar17._4_4_ =
           fVar16 * *(float *)(this + 100) + fVar26 * fVar31 + fVar27 * *(float *)(this + 0x84) +
           *(float *)(this + 0x94);
      auVar17._8_4_ =
           fVar16 * *(float *)(this + 0x68) + fVar26 * fVar36 + fVar27 * *(float *)(this + 0x88) +
           *(float *)(this + 0x98);
      auVar17._12_4_ =
           fVar16 * *(float *)(this + 0x6c) + fVar26 * fVar24 + fVar27 * *(float *)(this + 0x8c) +
           *(float *)(this + 0x9c);
      auVar23._0_4_ =
           SQRT(auVar17._8_4_ * auVar17._8_4_ +
                auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_ + 0.0);
      if (__LC12 < auVar23._0_4_) {
        fVar26 = _LC14 * auVar23._0_4_;
        auVar23._4_4_ = auVar23._0_4_;
        auVar23._8_4_ = auVar23._0_4_;
        auVar23._12_4_ = auVar23._0_4_;
        auVar19 = divps(auVar17,auVar23);
        fVar36 = (float)(__LC15 & (uint)fVar26 ^ (uint)fVar26);
        fVar24 = (float)(_UNK_00102bb4 & (uint)fVar26 ^ (uint)fVar26);
        fVar25 = (float)(_UNK_00102bb8 & (uint)fVar26 ^ (uint)fVar26);
        fVar16 = (float)(_UNK_00102bbc & (uint)fVar26 ^ (uint)fVar26);
        iVar32 = (int)(_LC17 * fVar36 + _LC14);
        iVar33 = (int)(_LC17 * fVar24 + _LC14);
        iVar34 = (int)(_LC17 * fVar25 + _LC14);
        iVar35 = (int)(_LC17 * fVar16 + _LC14);
        fVar28 = (float)iVar32;
        fVar30 = (float)iVar33;
        fVar31 = (float)iVar34;
        fVar21 = (float)iVar35;
        fVar28 = ((fVar36 - _LC20 * fVar28) - _LC22 * fVar28) - fVar28 * _LC24;
        fVar30 = ((fVar24 - _LC20 * fVar30) - _LC22 * fVar30) - fVar30 * _LC24;
        fVar36 = ((fVar25 - _LC20 * fVar31) - _LC22 * fVar31) - fVar31 * _LC24;
        fVar21 = ((fVar16 - _LC20 * fVar21) - _LC22 * fVar21) - fVar21 * _LC24;
        fVar27 = fVar28 * fVar28;
        fVar37 = fVar30 * fVar30;
        fVar38 = fVar36 * fVar36;
        fVar39 = fVar21 * fVar21;
        fVar31 = (((_LC26 * fVar27 + _LC28) * fVar27 + _LC30) * fVar27 * fVar27 - _LC14 * fVar27) +
                 _LC3;
        fVar24 = (((_LC26 * fVar37 + _LC28) * fVar37 + _LC30) * fVar37 * fVar37 - _LC14 * fVar37) +
                 _LC3;
        fVar25 = (((_LC26 * fVar38 + _LC28) * fVar38 + _LC30) * fVar38 * fVar38 - _LC14 * fVar38) +
                 _LC3;
        fVar16 = (((_LC26 * fVar39 + _LC28) * fVar39 + _LC30) * fVar39 * fVar39 - _LC14 * fVar39) +
                 _LC3;
        uVar13 = (iVar32 << 0x1f) >> 0x1f;
        uVar40 = (iVar33 << 0x1f) >> 0x1f;
        uVar41 = (iVar34 << 0x1f) >> 0x1f;
        uVar42 = (iVar35 << 0x1f) >> 0x1f;
        fVar28 = ((_LC33 * fVar27 + _LC35) * fVar27 + _LC37) * fVar27 * fVar28 + fVar28;
        fVar30 = ((_LC33 * fVar37 + _LC35) * fVar37 + _LC37) * fVar37 * fVar30 + fVar30;
        fVar36 = ((_LC33 * fVar38 + _LC35) * fVar38 + _LC37) * fVar38 * fVar36 + fVar36;
        fVar21 = ((_LC33 * fVar39 + _LC35) * fVar39 + _LC37) * fVar39 * fVar21 + fVar21;
        fVar27 = (float)*(undefined8 *)(param_2 + 0x10);
        fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        fVar37 = (float)*(undefined8 *)(param_2 + 0x18);
        fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
        fVar28 = (float)(__LC38 & (((uint)fVar28 & uVar13 | ~uVar13 & (uint)fVar31) ^
                                  __LC15 & iVar32 << 0x1e ^ iVar32 << 0x1f) |
                        ~__LC38 & (uint)(auVar19._0_4_ *
                                        (float)(((uint)fVar31 & uVar13 | ~uVar13 & (uint)fVar28) ^
                                               ((uint)fVar26 ^ iVar32 << 0x1e) & __LC15)));
        fVar31 = (float)(_UNK_00102bc4 &
                         (((uint)fVar30 & uVar40 | ~uVar40 & (uint)fVar24) ^
                         _UNK_00102bb4 & iVar33 << 0x1e ^ iVar33 << 0x1f) |
                        ~_UNK_00102bc4 &
                        (uint)(auVar19._4_4_ *
                              (float)(((uint)fVar24 & uVar40 | ~uVar40 & (uint)fVar30) ^
                                     ((uint)fVar26 ^ iVar33 << 0x1e) & _UNK_00102bb4)));
        fVar36 = (float)(_UNK_00102bc8 &
                         (((uint)fVar36 & uVar41 | ~uVar41 & (uint)fVar25) ^
                         _UNK_00102bb8 & iVar34 << 0x1e ^ iVar34 << 0x1f) |
                        ~_UNK_00102bc8 &
                        (uint)(auVar19._8_4_ *
                              (float)(((uint)fVar25 & uVar41 | ~uVar41 & (uint)fVar36) ^
                                     ((uint)fVar26 ^ iVar34 << 0x1e) & _UNK_00102bb8)));
        fVar21 = (float)(_UNK_00102bcc &
                         (((uint)fVar21 & uVar42 | ~uVar42 & (uint)fVar16) ^
                         _UNK_00102bbc & iVar35 << 0x1e ^ iVar35 << 0x1f) |
                        ~_UNK_00102bcc &
                        (uint)(auVar19._12_4_ *
                              (float)(((uint)fVar16 & uVar42 | ~uVar42 & (uint)fVar21) ^
                                     ((uint)fVar26 ^ iVar35 << 0x1e) & _UNK_00102bbc)));
        fVar24 = fVar36 * fVar27 + (fVar21 * fVar38 - fVar28 * fVar37) + fVar31 * fVar39;
        fVar25 = fVar36 * fVar39 + ((fVar28 * fVar38 + fVar21 * fVar37) - fVar31 * fVar27);
        fVar30 = (fVar28 * fVar39 + fVar21 * fVar27 + fVar31 * fVar37) - fVar36 * fVar38;
        fVar28 = ((fVar21 * fVar39 - fVar28 * fVar27) - fVar31 * fVar38) - fVar36 * fVar37;
        auVar29._4_4_ = fVar24;
        auVar29._0_4_ = fVar30;
        auVar29._8_4_ = fVar25;
        auVar29._12_4_ = fVar28;
        auVar20._0_4_ = SQRT(fVar30 * fVar30 + fVar24 * fVar24 + fVar25 * fVar25 + fVar28 * fVar28);
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_4_ = auVar20._0_4_;
        auVar20._12_4_ = auVar20._0_4_;
        auVar19 = divps(auVar29,auVar20);
        *(undefined1 (*) [16])(param_2 + 0x10) = auVar19;
      }
    }
    uVar15 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::PointConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC43;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PointConstraint::~PointConstraint() */

void __thiscall JPH::PointConstraint::~PointConstraint(PointConstraint *this)

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
/* JPH::PointConstraintSettings::~PointConstraintSettings() */

void __thiscall
JPH::PointConstraintSettings::~PointConstraintSettings(PointConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


