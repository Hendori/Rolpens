
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::PulleyConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::PulleyConstraint::NotifyShapeChanged
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



/* JPH::PulleyConstraint::ResetWarmStart() */

void __thiscall JPH::PulleyConstraint::ResetWarmStart(PulleyConstraint *this)

{
  *(undefined8 *)(this + 0x120) = 0;
  return;
}



/* JPH::PulleyConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::PulleyConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PulleyConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PulleyConstraintSettings::SaveBinaryState(PulleyConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
                    /* WARNING: Could not recover jumptable at 0x0010014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  return;
}



/* JPH::PulleyConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PulleyConstraintSettings::RestoreBinaryState(PulleyConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
                    /* WARNING: Could not recover jumptable at 0x001001fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PulleyConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::PulleyConstraint::WarmStartVelocityConstraint(PulleyConstraint *this,float param_1)

{
  byte bVar1;
  long lVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  fVar16 = param_1 * *(float *)(this + 0x124);
  fVar17 = *(float *)(this + 0x80);
  lVar2 = *(long *)(this + 0x30);
  fVar7 = *(float *)(this + 0xb4);
  fVar8 = *(float *)(this + 0xb8);
  fVar9 = *(float *)(this + 0xbc);
  fVar10 = *(float *)(this + 0xc0);
  fVar11 = *(float *)(this + 0xc4);
  fVar12 = *(float *)(this + 200);
  fVar13 = *(float *)(this + 0xcc);
  *(float *)(this + 0x124) = fVar16;
  if (fVar16 != 0.0) {
    if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
      pfVar3 = *(float **)(*(long *)(this + 0x28) + 0x48);
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      fVar18 = pfVar3[0x16] * fVar16;
      auVar20._1_3_ = 0;
      auVar20[0] = bVar1;
      auVar20[4] = bVar1;
      auVar20._5_3_ = 0;
      auVar20[8] = bVar1;
      auVar20._9_3_ = 0;
      auVar20[0xc] = bVar1;
      auVar20._13_3_ = 0;
      auVar15._4_4_ = _UNK_001028d4;
      auVar15._0_4_ = __LC6;
      auVar15._8_4_ = _UNK_001028d8;
      auVar15._12_4_ = _UNK_001028dc;
      auVar20 = auVar20 & auVar15;
      bVar4 = auVar20._4_4_ == _UNK_001028d4;
      bVar5 = auVar20._8_4_ == _UNK_001028d8;
      bVar6 = auVar20._12_4_ == _UNK_001028dc;
      *pfVar3 = (float)((uint)(fVar18 * *(float *)(this + 0xb0) + *pfVar3) &
                       -(uint)(auVar20._0_4_ == __LC6));
      pfVar3[1] = (float)((uint)(fVar18 * fVar7 + pfVar3[1]) & -(uint)bVar4);
      pfVar3[2] = (float)((uint)(fVar18 * fVar8 + pfVar3[2]) & -(uint)bVar5);
      pfVar3[3] = (float)((uint)(fVar18 * fVar9 + pfVar3[3]) & -(uint)bVar6);
      fVar7 = *(float *)(this + 0xf4);
      fVar8 = *(float *)(this + 0xf8);
      fVar9 = *(float *)(this + 0xfc);
      pfVar3[4] = fVar16 * *(float *)(this + 0xf0) + pfVar3[4];
      pfVar3[5] = fVar16 * fVar7 + pfVar3[5];
      pfVar3[6] = fVar16 * fVar8 + pfVar3[6];
      pfVar3[7] = fVar16 * fVar9 + pfVar3[7];
    }
    if (*(char *)(lVar2 + 0x78) == '\x02') {
      pfVar3 = *(float **)(lVar2 + 0x48);
      bVar1 = *(byte *)((long)pfVar3 + 0x7a);
      auVar19._1_3_ = 0;
      auVar19[0] = bVar1;
      auVar19[4] = bVar1;
      auVar19._5_3_ = 0;
      auVar19[8] = bVar1;
      auVar19._9_3_ = 0;
      auVar19[0xc] = bVar1;
      auVar19._13_3_ = 0;
      auVar14._4_4_ = _UNK_001028d4;
      auVar14._0_4_ = __LC6;
      auVar14._8_4_ = _UNK_001028d8;
      auVar14._12_4_ = _UNK_001028dc;
      auVar19 = auVar19 & auVar14;
      fVar17 = fVar17 * pfVar3[0x16] * fVar16;
      bVar4 = auVar19._4_4_ == _UNK_001028d4;
      bVar5 = auVar19._8_4_ == _UNK_001028d8;
      bVar6 = auVar19._12_4_ == _UNK_001028dc;
      *pfVar3 = (float)((uint)(fVar17 * fVar10 + *pfVar3) & -(uint)(auVar19._0_4_ == __LC6));
      pfVar3[1] = (float)((uint)(fVar17 * fVar11 + pfVar3[1]) & -(uint)bVar4);
      pfVar3[2] = (float)((uint)(fVar17 * fVar12 + pfVar3[2]) & -(uint)bVar5);
      pfVar3[3] = (float)((uint)(fVar17 * fVar13 + pfVar3[3]) & -(uint)bVar6);
      fVar17 = *(float *)(this + 0x114);
      fVar7 = *(float *)(this + 0x118);
      fVar8 = *(float *)(this + 0x11c);
      pfVar3[4] = fVar16 * *(float *)(this + 0x110) + pfVar3[4];
      pfVar3[5] = fVar16 * fVar17 + pfVar3[5];
      pfVar3[6] = fVar16 * fVar7 + pfVar3[6];
      pfVar3[7] = fVar16 * fVar8 + pfVar3[7];
      return;
    }
  }
  return;
}



/* JPH::PulleyConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::PulleyConstraint::SaveState(PulleyConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x124,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xb0,0xc);
                    /* WARNING: Could not recover jumptable at 0x0010035e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xc0,0xc);
  return;
}



/* JPH::PulleyConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::PulleyConstraint::RestoreState(PulleyConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x124,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc0,0xc);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x80);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((long)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_GetRTTI_001027a8;
  puVar1[2] = 0;
  puVar1[3] = 0x3f80000000000000;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  puVar1[0xe] = 0x3f800000;
  *(undefined4 *)(puVar1 + 0xf) = 0xbf800000;
  *(undefined1 (*) [16])(puVar1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xc) = (undefined1  [16])0x0;
  return;
}



/* JPH::PulleyConstraint::GetConstraintSettings() const */

void JPH::PulleyConstraint::GetConstraintSettings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  
  puVar9 = (undefined8 *)(*Allocate)(0x80);
  *(undefined4 *)(puVar9 + 1) = 0;
  *(undefined1 *)((long)puVar9 + 0xc) = 1;
  *puVar9 = &PTR_GetRTTI_001027a8;
  puVar9[3] = 0x3f80000000000000;
  puVar9[2] = 0;
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 5) = 1;
  puVar9[0xe] = 0x3f800000;
  *(undefined4 *)(puVar9 + 0xf) = 0xbf800000;
  *(undefined1 (*) [16])(puVar9 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 0xc) = (undefined1  [16])0x0;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar1 = *(undefined8 *)(in_RSI + 0x40);
  uVar2 = *(undefined8 *)(in_RSI + 0x48);
  uVar3 = *(undefined8 *)(in_RSI + 0x60);
  uVar4 = *(undefined8 *)(in_RSI + 0x68);
  *(undefined4 *)(puVar9 + 5) = 0;
  uVar5 = *(undefined8 *)(in_RSI + 0x50);
  uVar6 = *(undefined8 *)(in_RSI + 0x58);
  uVar7 = *(undefined8 *)(in_RSI + 0x70);
  uVar8 = *(undefined8 *)(in_RSI + 0x78);
  puVar9[6] = uVar1;
  puVar9[7] = uVar2;
  puVar9[8] = uVar3;
  puVar9[9] = uVar4;
  puVar9[10] = uVar5;
  puVar9[0xb] = uVar6;
  puVar9[0xc] = uVar7;
  puVar9[0xd] = uVar8;
  puVar9[0xe] = *(undefined8 *)(in_RSI + 0x80);
  *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(in_RSI + 0x88);
  *in_RDI = puVar9;
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  return;
}



/* JPH::PulleyConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::PulleyConstraint::DrawConstraint(PulleyConstraint *this,DebugRenderer *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = SQRT((*(float *)(this + 0xa8) - *(float *)(this + 0x78)) *
               (*(float *)(this + 0xa8) - *(float *)(this + 0x78)) +
               (*(float *)(this + 0xa0) - *(float *)(this + 0x70)) *
               (*(float *)(this + 0xa0) - *(float *)(this + 0x70)) + 0.0 +
               (*(float *)(this + 0xa4) - *(float *)(this + 0x74)) *
               (*(float *)(this + 0xa4) - *(float *)(this + 0x74))) * *(float *)(this + 0x80) +
          SQRT((*(float *)(this + 0x98) - *(float *)(this + 0x68)) *
               (*(float *)(this + 0x98) - *(float *)(this + 0x68)) +
               (*(float *)(this + 0x90) - *(float *)(this + 0x60)) *
               (*(float *)(this + 0x90) - *(float *)(this + 0x60)) + 0.0 +
               (*(float *)(this + 0x94) - *(float *)(this + 100)) *
               (*(float *)(this + 0x94) - *(float *)(this + 100)));
  uVar2 = (undefined4)Color::sYellow;
  if ((*(float *)(this + 0x84) <= fVar3) &&
     (uVar2 = (undefined4)Color::sGreen,
     *(float *)(this + 0x88) <= fVar3 && fVar3 != *(float *)(this + 0x88))) {
    uVar2 = (undefined4)Color::sRed;
  }
  (**(code **)(*(long *)param_1 + 0x10))
            (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),*(undefined8 *)(this + 0x60),
             *(undefined8 *)(this + 0x68),param_1,uVar2);
  (**(code **)(*(long *)param_1 + 0x10))
            (*(undefined8 *)(this + 0x60),*(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70),
             *(undefined8 *)(this + 0x78),param_1,uVar2);
  (**(code **)(*(long *)param_1 + 0x10))
            (*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x78),*(undefined8 *)(this + 0xa0),
             *(undefined8 *)(this + 0xa8),param_1,uVar2);
  pcVar1 = *(code **)(*(long *)param_1 + 0x38);
  JPH::StringFormat_abi_cxx11_((char *)&local_48,(double)fVar3,&_LC10);
  local_58 = local_40;
  local_50 = local_48;
  (*pcVar1)(CONCAT44((*(float *)(this + 0x74) + *(float *)(this + 100)) * _LC12,
                     (*(float *)(this + 0x70) + *(float *)(this + 0x60)) * _LC12),
            CONCAT44((*(float *)(this + 0x7c) + *(float *)(this + 0x6c)) * _LC12,
                     (*(float *)(this + 0x78) + *(float *)(this + 0x68)) * _LC12),param_1,&local_58,
            (undefined4)Color::sWhite);
  if (local_48 != local_38) {
    (*Free)();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::PulleyConstraintSettings::GetRTTI() const */

undefined1 * JPH::PulleyConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti,
                      "PulleyConstraintSettings",0x80,
                      GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti;
}



/* JPH::PulleyConstraint::SolveVelocityConstraint(float) */

undefined8 JPH::PulleyConstraint::SolveVelocityConstraint(float param_1)

{
  undefined8 uVar1;
  long in_RDI;
  
  if (*(float *)(in_RDI + 0x120) != 0.0) {
    uVar1 = IndependentAxisConstraintPart::SolveVelocityConstraint
                      (*(undefined8 *)(in_RDI + 0xb0),*(undefined8 *)(in_RDI + 0xb8),
                       *(undefined8 *)(in_RDI + 0xc0),*(undefined8 *)(in_RDI + 200),
                       *(undefined4 *)(in_RDI + 0x80),*(undefined4 *)(in_RDI + 0xd0),
                       *(undefined4 *)(in_RDI + 0xd4),in_RDI + 0xe0,*(undefined8 *)(in_RDI + 0x28),
                       *(undefined8 *)(in_RDI + 0x30));
    return uVar1;
  }
  return 0;
}



/* JPH::GetRTTIOfType(JPH::PulleyConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(PulleyConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti,
                      "PulleyConstraintSettings",0x80,
                      GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PulleyConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      PulleyConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PulleyConstraintSettings*)::rtti;
}



/* JPH::PulleyConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::PulleyConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PulleyConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PulleyConstraint::PulleyConstraint(JPH::Body&, JPH::Body&, JPH::PulleyConstraintSettings
   const&) */

void __thiscall
JPH::PulleyConstraint::PulleyConstraint
          (PulleyConstraint *this,Body *param_1,Body *param_2,PulleyConstraintSettings *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float local_28;
  float fStack_24;
  
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  uVar4 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar4;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x18] = SUB41(uVar1,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  uVar7 = *(undefined8 *)(param_3 + 0x60);
  uVar8 = *(undefined8 *)(param_3 + 0x68);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  fVar2 = *(float *)(param_3 + 0x78);
  *(PulleyConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  iVar5 = *(int *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x70) = uVar7;
  *(undefined8 *)(this + 0x78) = uVar8;
  *(Body **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__PulleyConstraint_001027f0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x60) = uVar9;
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x80) = uVar3;
  *(float *)(this + 0x88) = fVar2;
  fVar17 = _LC3;
  if (iVar5 == 1) {
    fVar11 = *(float *)param_1;
    fVar20 = *(float *)(param_1 + 4);
    fVar14 = *(float *)(param_1 + 8);
    fVar22 = (float)(*(uint *)(param_1 + 0x10) ^ __LC41);
    fVar34 = (float)(*(uint *)(param_1 + 0x14) ^ _UNK_00102924);
    fVar18 = (float)(*(uint *)(param_1 + 0x18) ^ _UNK_00102928);
    fVar19 = (float)(*(uint *)(param_1 + 0x1c) ^ _UNK_0010292c);
    fVar12 = (float)(__LC41 ^ *(uint *)(param_2 + 0x10));
    fVar13 = (float)(_UNK_00102924 ^ *(uint *)(param_2 + 0x14));
    fVar15 = (float)(_UNK_00102928 ^ *(uint *)(param_2 + 0x18));
    fVar16 = (float)(_UNK_0010292c ^ *(uint *)(param_2 + 0x1c));
    fVar26 = fVar22 + fVar22;
    fVar32 = fVar34 + fVar34;
    fVar30 = fVar18 * (fVar18 + fVar18);
    fVar25 = fVar18 * fVar26 + fVar32 * fVar19;
    fVar21 = fVar19 * (fVar18 + fVar18);
    fVar31 = fVar18 * fVar26 - fVar32 * fVar19;
    fVar27 = fVar18 * fVar32 - fVar26 * fVar19;
    fVar29 = fVar26 * fVar19 + fVar18 * fVar32;
    fVar28 = (_LC3 - fVar22 * fVar26) - fVar34 * fVar32;
    fVar23 = fVar34 * fVar26 + fVar21;
    fVar21 = fVar34 * fVar26 - fVar21;
    fVar33 = (_LC3 - fVar30) - fVar22 * fVar26;
    fVar30 = (_LC3 - fVar34 * fVar32) - fVar30;
    fVar22 = *(float *)(param_3 + 0x30);
    fVar34 = *(float *)(param_3 + 0x34);
    fVar18 = *(float *)(param_3 + 0x38);
    fVar19 = *(float *)param_2;
    fVar26 = *(float *)(param_2 + 4);
    fVar32 = *(float *)(param_2 + 8);
    fVar24 = fVar12 + fVar12;
    *(float *)(this + 0x40) =
         fVar18 * fVar25 + fVar22 * fVar30 + fVar21 * fVar34 +
         (0.0 - (fVar11 * fVar30 + fVar20 * fVar21 + fVar14 * fVar25));
    *(float *)(this + 0x44) =
         fVar18 * fVar27 + fVar22 * fVar23 + fVar33 * fVar34 +
         (0.0 - (fVar11 * fVar23 + fVar20 * fVar33 + fVar14 * fVar27));
    *(float *)(this + 0x48) =
         fVar18 * fVar28 + fVar22 * fVar31 + fVar29 * fVar34 +
         (0.0 - (fVar11 * fVar31 + fVar20 * fVar29 + fVar14 * fVar28));
    *(float *)(this + 0x4c) = fVar18 * 0.0 + fVar22 * 0.0 + fVar34 * 0.0 + 1.0;
    fVar11 = fVar13 + fVar13;
    fVar20 = fVar15 * (fVar15 + fVar15);
    fVar22 = fVar16 * (fVar15 + fVar15);
    fVar23 = fVar15 * fVar24 + fVar11 * fVar16;
    fVar21 = fVar15 * fVar24 - fVar11 * fVar16;
    fVar25 = fVar15 * fVar11 - fVar24 * fVar16;
    fVar15 = fVar24 * fVar16 + fVar15 * fVar11;
    fVar16 = (fVar17 - fVar12 * fVar24) - fVar13 * fVar11;
    fVar18 = fVar13 * fVar24 + fVar22;
    fVar22 = fVar13 * fVar24 - fVar22;
    fVar34 = (fVar17 - fVar13 * fVar11) - fVar20;
    fVar12 = (fVar17 - fVar20) - fVar12 * fVar24;
    fVar11 = *(float *)(param_3 + 0x50);
    fVar20 = *(float *)(param_3 + 0x54);
    fVar14 = *(float *)(param_3 + 0x58);
    local_28 = *(float *)(param_3 + 0x50);
    fStack_24 = *(float *)(param_3 + 0x54);
    fVar17 = *(float *)(param_3 + 0x58);
    uVar1 = *(undefined4 *)(param_3 + 0x5c);
    *(float *)(this + 0xa0) = local_28;
    *(float *)(this + 0xa4) = fStack_24;
    *(float *)(this + 0xa8) = fVar17;
    *(undefined4 *)(this + 0xac) = uVar1;
    *(float *)(this + 0x50) =
         fVar14 * fVar23 + fVar11 * fVar34 + fVar20 * fVar22 +
         (0.0 - (fVar19 * fVar34 + fVar26 * fVar22 + fVar32 * fVar23));
    *(float *)(this + 0x54) =
         fVar14 * fVar25 + fVar11 * fVar18 + fVar20 * fVar12 +
         (0.0 - (fVar19 * fVar18 + fVar26 * fVar12 + fVar32 * fVar25));
    *(float *)(this + 0x58) =
         fVar14 * fVar16 + fVar11 * fVar21 + fVar20 * fVar15 +
         (0.0 - (fVar19 * fVar21 + fVar26 * fVar15 + fVar32 * fVar16));
    *(float *)(this + 0x5c) = fVar14 * 0.0 + fVar11 * 0.0 + fVar20 * 0.0 + 1.0;
    fVar11 = *(float *)(param_3 + 0x30);
    fVar20 = *(float *)(param_3 + 0x34);
    fVar14 = *(float *)(param_3 + 0x38);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    *(float *)(this + 0x90) = fVar11;
    *(float *)(this + 0x94) = fVar20;
    *(float *)(this + 0x98) = fVar14;
    *(undefined4 *)(this + 0x9c) = uVar1;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    fVar22 = *(float *)(param_3 + 0x30);
    fVar34 = *(float *)(param_3 + 0x34);
    fVar18 = *(float *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar8;
    uVar9 = *(undefined8 *)(param_3 + 0x58);
    fVar14 = (float)uVar6;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    fVar15 = (float)uVar7;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(this + 0x58) = uVar9;
    fVar12 = _LC3;
    fVar25 = (float)((ulong)uVar6 >> 0x20);
    fVar27 = fVar14 + fVar14;
    fVar29 = fVar25 + fVar25;
    fVar16 = (float)((ulong)uVar7 >> 0x20);
    fVar20 = fVar16 * (fVar15 + fVar15);
    fVar30 = fVar15 * (fVar15 + fVar15);
    fVar13 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar28 = fVar13 + fVar13;
    uVar6 = *(undefined8 *)param_2;
    fVar17 = *(float *)(param_2 + 8);
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar21 = (float)uVar8;
    fVar31 = fVar24 + fVar24;
    fVar19 = *(float *)(param_3 + 0x50);
    fVar26 = *(float *)(param_3 + 0x54);
    fVar32 = *(float *)(param_3 + 0x58);
    fVar23 = (float)((ulong)uVar8 >> 0x20);
    local_28 = (float)*(undefined8 *)param_1;
    fStack_24 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar11 = (fVar25 * fVar27 - fVar20) * fVar34 + ((_LC3 - fVar25 * fVar29) - fVar30) * fVar22 +
             (fVar15 * fVar27 + fVar29 * fVar16) * fVar18 + local_28;
    fVar20 = ((_LC3 - fVar30) - fVar14 * fVar27) * fVar34 + (fVar25 * fVar27 + fVar20) * fVar22 +
             (fVar15 * fVar29 - fVar27 * fVar16) * fVar18 + fStack_24;
    fVar14 = (fVar27 * fVar16 + fVar15 * fVar29) * fVar34 +
             (fVar15 * fVar27 - fVar29 * fVar16) * fVar22 +
             ((_LC3 - fVar14 * fVar27) - fVar25 * fVar29) * fVar18 + *(float *)(param_1 + 8);
    *(float *)(this + 0x90) = fVar11;
    *(float *)(this + 0x94) = fVar20;
    *(float *)(this + 0x98) = fVar14;
    *(float *)(this + 0x9c) = fVar34 * 0.0 + fVar22 * 0.0 + fVar18 * 0.0 + 1.0;
    fVar22 = fVar23 * (fVar21 + fVar21);
    fVar34 = fVar21 * (fVar21 + fVar21);
    local_28 = (float)uVar6;
    fStack_24 = (float)((ulong)uVar6 >> 0x20);
    local_28 = ((fVar12 - fVar24 * fVar31) - fVar34) * fVar19 + (fVar24 * fVar28 - fVar22) * fVar26
               + fVar32 * (fVar21 * fVar28 + fVar31 * fVar23) + local_28;
    fStack_24 = (fVar24 * fVar28 + fVar22) * fVar19 + ((fVar12 - fVar34) - fVar13 * fVar28) * fVar26
                + fVar32 * (fVar21 * fVar31 - fVar28 * fVar23) + fStack_24;
    fVar17 = (fVar21 * fVar28 - fVar31 * fVar23) * fVar19 +
             (fVar28 * fVar23 + fVar21 * fVar31) * fVar26 +
             fVar32 * ((fVar12 - fVar13 * fVar28) - fVar24 * fVar31) + fVar17;
    *(float *)(this + 0xa0) = local_28;
    *(float *)(this + 0xa4) = fStack_24;
    *(float *)(this + 0xa8) = fVar17;
    *(float *)(this + 0xac) = fVar19 * 0.0 + fVar26 * 0.0 + fVar32 * 0.0 + 1.0;
  }
  fVar17 = SQRT((fVar17 - *(float *)(this + 0x78)) * (fVar17 - *(float *)(this + 0x78)) +
                (local_28 - *(float *)(this + 0x70)) * (local_28 - *(float *)(this + 0x70)) + 0.0 +
                (fStack_24 - *(float *)(this + 0x74)) * (fStack_24 - *(float *)(this + 0x74))) *
           (float)uVar3 +
           SQRT((fVar14 - *(float *)(this + 0x68)) * (fVar14 - *(float *)(this + 0x68)) +
                (fVar11 - *(float *)(this + 0x60)) * (fVar11 - *(float *)(this + 0x60)) + 0.0 +
                (fVar20 - *(float *)(this + 100)) * (fVar20 - *(float *)(this + 100)));
  if ((float)((ulong)uVar3 >> 0x20) < 0.0) {
    *(float *)(this + 0x84) = fVar17;
  }
  if (fVar2 < 0.0) {
    *(float *)(this + 0x88) = fVar17;
  }
  uVar3 = _UNK_00102938;
  *(undefined8 *)(this + 0xc0) = __LC43;
  *(undefined8 *)(this + 200) = uVar3;
  uVar3 = _UNK_00102938;
  *(undefined8 *)(this + 0xb0) = __LC43;
  *(undefined8 *)(this + 0xb8) = uVar3;
  return;
}



/* JPH::PulleyConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

PulleyConstraint * __thiscall
JPH::PulleyConstraintSettings::Create(PulleyConstraintSettings *this,Body *param_1,Body *param_2)

{
  PulleyConstraint *this_00;
  
  this_00 = (PulleyConstraint *)(*Allocate)(0x130);
  PulleyConstraint::PulleyConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* JPH::PulleyConstraint::CalculatePositionsNormalsAndLength() */

undefined8 __thiscall
JPH::PulleyConstraint::CalculatePositionsNormalsAndLength(PulleyConstraint *this)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar8;
  float fVar9;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_18;
  float fStack_14;
  
  fVar14 = _LC3;
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar8 = (float)puVar1[2];
  fVar3 = (float)puVar1[3];
  fVar15 = (float)((ulong)puVar1[2] >> 0x20);
  fVar17 = fVar8 + fVar8;
  fVar18 = fVar15 + fVar15;
  fVar4 = (float)((ulong)puVar1[3] >> 0x20);
  fVar10 = fVar4 * (fVar3 + fVar3);
  fVar19 = fVar3 * (fVar3 + fVar3);
  fVar9 = *(float *)(this + 0x40);
  fVar16 = *(float *)(this + 0x44);
  fVar2 = *(float *)(this + 0x48);
  local_18 = (float)*puVar1;
  fStack_14 = (float)((ulong)*puVar1 >> 0x20);
  local_18 = (fVar15 * fVar17 - fVar10) * fVar16 + ((_LC3 - fVar15 * fVar18) - fVar19) * fVar9 +
             (fVar3 * fVar17 + fVar18 * fVar4) * fVar2 + local_18;
  fStack_14 = ((_LC3 - fVar19) - fVar8 * fVar17) * fVar16 + (fVar15 * fVar17 + fVar10) * fVar9 +
              (fVar3 * fVar18 - fVar17 * fVar4) * fVar2 + fStack_14;
  fVar8 = (fVar17 * fVar4 + fVar3 * fVar18) * fVar16 + (fVar3 * fVar17 - fVar18 * fVar4) * fVar9 +
          ((_LC3 - fVar8 * fVar17) - fVar15 * fVar18) * fVar2 + *(float *)(puVar1 + 1);
  fVar9 = fVar16 * 0.0 + fVar9 * 0.0 + fVar2 * 0.0 + 1.0;
  *(float *)(this + 0x90) = local_18;
  *(float *)(this + 0x94) = fStack_14;
  *(float *)(this + 0x98) = fVar8;
  *(float *)(this + 0x9c) = fVar9;
  puVar1 = *(undefined8 **)(this + 0x30);
  auVar5._0_4_ = local_18 - *(float *)(this + 0x60);
  auVar5._4_4_ = fStack_14 - *(float *)(this + 100);
  auVar5._8_4_ = fVar8 - *(float *)(this + 0x68);
  auVar5._12_4_ = fVar9 - *(float *)(this + 0x6c);
  fVar8 = (float)puVar1[2];
  fVar3 = (float)puVar1[3];
  fVar15 = (float)((ulong)puVar1[2] >> 0x20);
  fVar17 = fVar8 + fVar8;
  fVar18 = fVar15 + fVar15;
  fVar4 = (float)((ulong)puVar1[3] >> 0x20);
  fVar10 = fVar4 * (fVar3 + fVar3);
  fVar19 = fVar3 * (fVar3 + fVar3);
  fVar9 = *(float *)(this + 0x50);
  fVar16 = *(float *)(this + 0x54);
  fVar2 = *(float *)(this + 0x58);
  local_18 = (float)*puVar1;
  fStack_14 = (float)((ulong)*puVar1 >> 0x20);
  local_18 = (fVar15 * fVar17 - fVar10) * fVar16 + ((fVar14 - fVar15 * fVar18) - fVar19) * fVar9 +
             (fVar3 * fVar17 + fVar18 * fVar4) * fVar2 + local_18;
  fStack_14 = ((fVar14 - fVar19) - fVar8 * fVar17) * fVar16 + (fVar15 * fVar17 + fVar10) * fVar9 +
              (fVar3 * fVar18 - fVar17 * fVar4) * fVar2 + fStack_14;
  fVar14 = (fVar17 * fVar4 + fVar3 * fVar18) * fVar16 + (fVar3 * fVar17 - fVar18 * fVar4) * fVar9 +
           ((fVar14 - fVar8 * fVar17) - fVar15 * fVar18) * fVar2 + *(float *)(puVar1 + 1);
  fVar9 = fVar16 * 0.0 + fVar9 * 0.0 + fVar2 * 0.0 + 1.0;
  *(float *)(this + 0xa0) = local_18;
  *(float *)(this + 0xa4) = fStack_14;
  *(float *)(this + 0xa8) = fVar14;
  *(float *)(this + 0xac) = fVar9;
  fVar16 = SQRT(auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0 +
                auVar5._8_4_ * auVar5._8_4_);
  if (0.0 < fVar16) {
    auVar11._4_4_ = fVar16;
    auVar11._0_4_ = fVar16;
    auVar11._8_4_ = fVar16;
    auVar11._12_4_ = fVar16;
    auVar5 = divps(auVar5,auVar11);
    *(undefined1 (*) [16])(this + 0xb0) = auVar5;
  }
  auVar13._0_4_ = local_18 - *(float *)(this + 0x70);
  auVar13._4_4_ = fStack_14 - *(float *)(this + 0x74);
  auVar13._8_4_ = fVar14 - *(float *)(this + 0x78);
  auVar13._12_4_ = fVar9 - *(float *)(this + 0x7c);
  auVar6._4_4_ = auVar13._4_4_;
  auVar6._0_4_ = auVar13._4_4_;
  auVar6._8_4_ = auVar13._4_4_;
  auVar6._12_4_ = auVar13._4_4_;
  auVar7._4_12_ = auVar6._4_12_;
  fVar9 = SQRT(auVar13._4_4_ * auVar13._4_4_ + auVar13._0_4_ * auVar13._0_4_ + 0.0 +
               auVar13._8_4_ * auVar13._8_4_);
  if (0.0 < fVar9) {
    auVar12._4_4_ = fVar9;
    auVar12._0_4_ = fVar9;
    auVar12._8_4_ = fVar9;
    auVar12._12_4_ = fVar9;
    auVar5 = divps(auVar13,auVar12);
    *(undefined1 (*) [16])(this + 0xc0) = auVar5;
  }
  auVar7._0_4_ = fVar9 * *(float *)(this + 0x80) + fVar16;
  return auVar7._0_8_;
}



/* JPH::PulleyConstraint::CalculateConstraintProperties() */

void __thiscall JPH::PulleyConstraint::CalculateConstraintProperties(PulleyConstraint *this)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = *(float **)(this + 0x28);
  pfVar2 = *(float **)(this + 0x30);
  IndependentAxisConstraintPart::CalculateConstraintProperties
            (CONCAT44(*(float *)(this + 0x94) - pfVar1[1],*(float *)(this + 0x90) - *pfVar1),
             CONCAT44(*(float *)(this + 0x9c) - pfVar1[3],*(float *)(this + 0x98) - pfVar1[2]),
             *(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8),
             CONCAT44(*(float *)(this + 0xa4) - pfVar2[1],*(float *)(this + 0xa0) - *pfVar2),
             CONCAT44(*(float *)(this + 0xac) - pfVar2[3],*(float *)(this + 0xa8) - pfVar2[2]),
             *(undefined8 *)(this + 0xc0),*(undefined8 *)(this + 200),this + 0xe0);
  return;
}



/* JPH::PulleyConstraint::SetupVelocityConstraint(float) */

void JPH::PulleyConstraint::SetupVelocityConstraint(float param_1)

{
  PulleyConstraint *in_RDI;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float)CalculatePositionsNormalsAndLength(in_RDI);
  uVar2 = _LC45;
  if (fVar1 <= *(float *)(in_RDI + 0x84)) {
    if (fVar1 < *(float *)(in_RDI + 0x88)) {
      uVar3 = 0;
      goto LAB_00101599;
    }
  }
  else if (fVar1 < *(float *)(in_RDI + 0x88)) {
    *(undefined8 *)(in_RDI + 0x120) = 0;
    return;
  }
  uVar3 = _LC44;
  if (*(float *)(in_RDI + 0x84) < fVar1) {
    uVar2 = 0;
  }
LAB_00101599:
  *(undefined4 *)(in_RDI + 0xd0) = uVar3;
  *(undefined4 *)(in_RDI + 0xd4) = uVar2;
  CalculateConstraintProperties(in_RDI);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PulleyConstraint::SolvePositionConstraint(float, float) */

undefined8 __thiscall
JPH::PulleyConstraint::SolvePositionConstraint(PulleyConstraint *this,float param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  
  fVar16 = (float)CalculatePositionsNormalsAndLength(this);
  fVar20 = *(float *)(this + 0x84);
  if (((fVar16 < fVar20) || (fVar20 = *(float *)(this + 0x88), fVar20 < fVar16)) &&
     (fVar16 - fVar20 != 0.0)) {
    CalculateConstraintProperties(this);
    pfVar3 = *(float **)(this + 0x28);
    fVar1 = *(float *)(this + 0x80);
    pfVar4 = *(float **)(this + 0x30);
    fVar8 = *(float *)(this + 0xc0);
    fVar9 = *(float *)(this + 0xc4);
    fVar10 = *(float *)(this + 200);
    fVar11 = *(float *)(this + 0xcc);
    fVar20 = (float)(*(uint *)(this + 0x120) ^ __LC40) * param_2 * (fVar16 - fVar20);
    if (*(char *)(pfVar3 + 0x1e) == '\x02') {
      bVar2 = *(byte *)(*(long *)(pfVar3 + 0x12) + 0x7a);
      fVar17 = *(float *)(*(long *)(pfVar3 + 0x12) + 0x58) * fVar20;
      auVar18._1_3_ = 0;
      auVar18[0] = bVar2;
      auVar18[4] = bVar2;
      auVar18._5_3_ = 0;
      auVar18[8] = bVar2;
      auVar18._9_3_ = 0;
      auVar18[0xc] = bVar2;
      auVar18._13_3_ = 0;
      auVar15._4_4_ = _UNK_001028d4;
      auVar15._0_4_ = __LC6;
      auVar15._8_4_ = _UNK_001028d8;
      auVar15._12_4_ = _UNK_001028dc;
      auVar18 = auVar18 & auVar15;
      bVar5 = auVar18._4_4_ == _UNK_001028d4;
      bVar6 = auVar18._8_4_ == _UNK_001028d8;
      bVar7 = auVar18._12_4_ == _UNK_001028dc;
      fVar16 = *(float *)(this + 0xb4);
      fVar12 = *(float *)(this + 0xb8);
      fVar13 = *(float *)(this + 0xbc);
      *pfVar3 = (float)((uint)(fVar17 * *(float *)(this + 0xb0)) & -(uint)(auVar18._0_4_ == __LC6))
                + *pfVar3;
      pfVar3[1] = (float)((uint)(fVar17 * fVar16) & -(uint)bVar5) + pfVar3[1];
      pfVar3[2] = (float)((uint)(fVar17 * fVar12) & -(uint)bVar6) + pfVar3[2];
      pfVar3[3] = (float)((uint)(fVar17 * fVar13) & -(uint)bVar7) + pfVar3[3];
      Body::AddRotationStep
                (CONCAT44(fVar20 * *(float *)(this + 0xf4),fVar20 * *(float *)(this + 0xf0)),
                 CONCAT44(fVar20 * *(float *)(this + 0xfc),fVar20 * *(float *)(this + 0xf8)));
    }
    if (*(char *)(pfVar4 + 0x1e) == '\x02') {
      bVar2 = *(byte *)(*(long *)(pfVar4 + 0x12) + 0x7a);
      auVar19._1_3_ = 0;
      auVar19[0] = bVar2;
      fVar16 = *(float *)(*(long *)(pfVar4 + 0x12) + 0x58) * fVar1 * fVar20;
      auVar19[4] = bVar2;
      auVar19._5_3_ = 0;
      auVar19[8] = bVar2;
      auVar19._9_3_ = 0;
      auVar19[0xc] = bVar2;
      auVar19._13_3_ = 0;
      auVar14._4_4_ = _UNK_001028d4;
      auVar14._0_4_ = __LC6;
      auVar14._8_4_ = _UNK_001028d8;
      auVar14._12_4_ = _UNK_001028dc;
      auVar19 = auVar19 & auVar14;
      bVar5 = auVar19._4_4_ == _UNK_001028d4;
      bVar6 = auVar19._8_4_ == _UNK_001028d8;
      bVar7 = auVar19._12_4_ == _UNK_001028dc;
      *pfVar4 = (float)((uint)(fVar16 * fVar8) & -(uint)(auVar19._0_4_ == __LC6)) + *pfVar4;
      pfVar4[1] = (float)((uint)(fVar16 * fVar9) & -(uint)bVar5) + pfVar4[1];
      pfVar4[2] = (float)((uint)(fVar16 * fVar10) & -(uint)bVar6) + pfVar4[2];
      pfVar4[3] = (float)((uint)(fVar16 * fVar11) & -(uint)bVar7) + pfVar4[3];
      Body::AddRotationStep
                (CONCAT44(fVar20 * *(float *)(this + 0x114),fVar20 * *(float *)(this + 0x110)),
                 CONCAT44(fVar20 * *(float *)(this + 0x11c),fVar20 * *(float *)(this + 0x118)),
                 pfVar4);
    }
    return 1;
  }
  return 0;
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



/* JPH::PulleyConstraint::GetSubType() const */

undefined8 JPH::PulleyConstraint::GetSubType(void)

{
  return 0xc;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PulleyConstraint::GetConstraintToBody1Matrix() const */

void JPH::PulleyConstraint::GetConstraintToBody1Matrix(void)

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
  uVar4 = _UNK_001028b8;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_001028c8;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PulleyConstraint::GetConstraintToBody2Matrix() const */

void JPH::PulleyConstraint::GetConstraintToBody2Matrix(void)

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
  uVar4 = _UNK_001028b8;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_001028c8;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* JPH::PulleyConstraintSettings::~PulleyConstraintSettings() */

void __thiscall
JPH::PulleyConstraintSettings::~PulleyConstraintSettings(PulleyConstraintSettings *this)

{
  return;
}



/* JPH::PulleyConstraintSettings::~PulleyConstraintSettings() */

void __thiscall
JPH::PulleyConstraintSettings::~PulleyConstraintSettings(PulleyConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x001018f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PulleyConstraint::~PulleyConstraint() */

void __thiscall JPH::PulleyConstraint::~PulleyConstraint(PulleyConstraint *this)

{
  return;
}



/* JPH::PulleyConstraint::~PulleyConstraint() */

void __thiscall JPH::PulleyConstraint::~PulleyConstraint(PulleyConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00101924. Too many branches */
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
  fVar11 = _LC12 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC15 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_001028e4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_001028e8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_001028ec & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC17 * fVar17 + _LC12);
  iVar14 = (int)(_LC17 * fVar18 + _LC12);
  iVar15 = (int)(_LC17 * fVar19 + _LC12);
  iVar16 = (int)(_LC17 * fVar20 + _LC12);
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
  fVar19 = (((_LC25 * fVar4 + _LC27) * fVar4 + _LC29) * fVar4 * fVar4 - _LC12 * fVar4) + _LC3;
  fVar20 = (((_LC25 * fVar22 + _LC27) * fVar22 + _LC29) * fVar22 * fVar22 - _LC12 * fVar22) + _LC3;
  fVar8 = (((_LC25 * fVar24 + _LC27) * fVar24 + _LC29) * fVar24 * fVar24 - _LC12 * fVar24) + _LC3;
  fVar10 = (((_LC25 * fVar26 + _LC27) * fVar26 + _LC29) * fVar26 * fVar26 - _LC12 * fVar26) + _LC3;
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
                           __LC15 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC37 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC15 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_001028f4 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_001028e4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_001028f4 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_001028e4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_001028f8 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_001028e8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_001028f8 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_001028e8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_001028fc &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_001028ec & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_001028fc &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_001028ec ^
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
/* JPH::IndependentAxisConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body
   const&, JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3, float) */

void JPH::IndependentAxisConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,float param_4,
               undefined8 param_5,float param_6,undefined8 param_7,float param_8,float *param_1,
               long param_2,long param_11)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar13 [16];
  float fVar12;
  undefined1 auVar14 [16];
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
  uint uVar29;
  uint uVar31;
  uint uVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float in_stack_00000008;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  iVar10 = _UNK_0010290c;
  iVar9 = _UNK_00102908;
  iVar8 = _UNK_00102904;
  iVar7 = __LC39;
  fVar6 = _LC3;
  cVar1 = *(char *)(param_11 + 0x78);
  if (*(char *)(param_2 + 0x78) == '\0') {
    if (cVar1 == '\0') goto LAB_001023b8;
    auVar30._4_4_ = _UNK_00102904;
    auVar30._0_4_ = __LC39;
    auVar30._8_4_ = _UNK_00102908;
    auVar30._12_4_ = _UNK_0010290c;
    fVar19 = 0.0;
LAB_00101d41:
    local_38 = (float)param_5;
    fStack_34 = (float)((ulong)param_5 >> 0x20);
    local_28 = (float)param_7;
    fStack_24 = (float)((ulong)param_7 >> 0x20);
    lVar3 = *(long *)(param_11 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar15 = (float)*(undefined8 *)(param_11 + 0x10);
    fVar16 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_11 + 0x18);
    fVar17 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar24 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar20 = fStack_24 * local_38 - fStack_34 * local_28;
    fVar36 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    fVar21 = (param_8 * fStack_34 - param_6 * fStack_24) * in_stack_00000008;
    fVar22 = (local_28 * param_6 - local_38 * param_8) * in_stack_00000008;
    fVar23 = fVar20 * in_stack_00000008;
    auVar13._1_3_ = 0;
    auVar13[0] = bVar2;
    auVar13[4] = bVar2;
    auVar13._5_3_ = 0;
    auVar13[8] = bVar2;
    auVar13._9_3_ = 0;
    auVar13[0xc] = bVar2;
    auVar13._13_3_ = 0;
    auVar30 = auVar30 & auVar13;
    fVar12 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
    uVar29 = -(uint)(auVar30._0_4_ == iVar7);
    uVar31 = -(uint)(auVar30._4_4_ == iVar8);
    uVar32 = -(uint)(auVar30._8_4_ == iVar9);
    param_1[8] = fVar21;
    param_1[9] = fVar22;
    param_1[10] = fVar23;
    param_1[0xb] = fVar20 * in_stack_00000008;
    fVar33 = (float)((uint)fVar21 & uVar29);
    fVar34 = (float)((uint)fVar22 & uVar31);
    fVar35 = (float)((uint)fVar23 & uVar32);
    fVar25 = (fVar12 * fVar24 + fVar15 * fVar18 + fVar16 * fVar17) - fVar11 * fVar36;
    fVar26 = fVar16 * fVar18 + (fVar12 * fVar36 - fVar15 * fVar17) + fVar11 * fVar24;
    fVar27 = fVar25 + fVar25;
    fVar28 = fVar26 + fVar26;
    fVar20 = ((fVar12 * fVar17 + fVar15 * fVar36) - fVar16 * fVar24) + fVar11 * fVar18;
    fVar11 = ((fVar12 * fVar18 - fVar15 * fVar24) - fVar16 * fVar36) - fVar11 * fVar17;
    fVar38 = (fVar6 - fVar25 * fVar27) - fVar26 * fVar28;
    fVar36 = fVar20 * (fVar20 + fVar20);
    fVar12 = fVar11 * (fVar20 + fVar20);
    fVar39 = fVar20 * fVar28 - fVar27 * fVar11;
    fVar24 = fVar20 * fVar28 + fVar27 * fVar11;
    fVar37 = fVar20 * fVar27 + fVar28 * fVar11;
    fVar15 = fVar20 * fVar27 - fVar28 * fVar11;
    fVar20 = (fVar6 - fVar36) - fVar25 * fVar27;
    fVar11 = fVar26 * fVar27 - fVar12;
    fVar12 = fVar12 + fVar26 * fVar27;
    fVar36 = (fVar6 - fVar26 * fVar28) - fVar36;
    fVar16 = (fVar34 * fVar12 + fVar33 * fVar36 + fVar35 * fVar15) * *(float *)(lVar3 + 0x20);
    fVar17 = (fVar34 * fVar20 + fVar33 * fVar11 + fVar35 * fVar24) * *(float *)(lVar3 + 0x24);
    fVar18 = (fVar34 * fVar39 + fVar33 * fVar37 + fVar35 * fVar38) * *(float *)(lVar3 + 0x28);
    fVar11 = (float)((uint)(fVar16 * fVar36 + fVar17 * fVar11 + fVar37 * fVar18) & uVar29);
    fVar12 = (float)((uint)(fVar16 * fVar12 + fVar17 * fVar20 + fVar39 * fVar18) & uVar31);
    fVar15 = (float)((uint)(fVar16 * fVar15 + fVar17 * fVar24 + fVar38 * fVar18) & uVar32);
    param_1[0xc] = fVar11;
    param_1[0xd] = fVar12;
    param_1[0xe] = fVar15;
    param_1[0xf] = (float)((uint)(fVar16 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0) &
                          -(uint)(auVar30._12_4_ == iVar10));
    fVar19 = fVar19 + in_stack_00000008 * in_stack_00000008 * *(float *)(lVar3 + 0x58) +
                      fVar15 * fVar23 + fVar12 * fVar22 + fVar11 * fVar21 + 0.0;
  }
  else {
    local_48 = (float)param_3;
    fStack_44 = (float)((ulong)param_3 >> 0x20);
    local_58 = (float)param_1_00;
    fStack_54 = (float)((ulong)param_1_00 >> 0x20);
    lVar3 = *(long *)(param_2 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar19 = (float)*(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    fVar12 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    auVar30._4_4_ = _UNK_00102904;
    auVar30._0_4_ = __LC39;
    auVar30._8_4_ = _UNK_00102908;
    auVar30._12_4_ = _UNK_0010290c;
    fVar16 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar18 = (float)uVar4;
    fVar17 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar20 = fStack_44 * local_58 - fStack_54 * local_48;
    fVar21 = param_4 * fStack_54 - param_2_00 * fStack_44;
    fVar22 = local_48 * param_2_00 - local_58 * param_4;
    auVar14._1_3_ = 0;
    auVar14[0] = bVar2;
    auVar14[4] = bVar2;
    auVar14._5_3_ = 0;
    auVar14[8] = bVar2;
    auVar14._9_3_ = 0;
    auVar14[0xc] = bVar2;
    auVar14._13_3_ = 0;
    auVar14 = auVar14 & auVar30;
    fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    uVar29 = -(uint)(auVar14._0_4_ == __LC39);
    uVar31 = -(uint)(auVar14._4_4_ == _UNK_00102904);
    uVar32 = -(uint)(auVar14._8_4_ == _UNK_00102908);
    bVar5 = auVar14._12_4_ == _UNK_0010290c;
    *param_1 = fVar21;
    param_1[1] = fVar22;
    param_1[2] = fVar20;
    param_1[3] = fVar20;
    fVar24 = (float)((ulong)uVar4 >> 0x20);
    fVar26 = (float)((uint)fVar21 & uVar29);
    fVar27 = (float)((uint)fVar22 & uVar31);
    fVar28 = (float)((uint)fVar20 & uVar32);
    fVar25 = (fVar11 * fVar18 + fVar12 * fVar17 + fVar15 * fVar16) - fVar19 * fVar24;
    fVar33 = fVar15 * fVar17 + (fVar11 * fVar24 - fVar12 * fVar16) + fVar19 * fVar18;
    fVar34 = fVar33 + fVar33;
    fVar36 = fVar25 + fVar25;
    fVar23 = ((fVar11 * fVar16 + fVar12 * fVar24) - fVar15 * fVar18) + fVar19 * fVar17;
    fVar19 = ((fVar11 * fVar17 - fVar12 * fVar18) - fVar15 * fVar24) - fVar19 * fVar16;
    fVar15 = fVar23 * (fVar23 + fVar23);
    fVar11 = fVar19 * (fVar23 + fVar23);
    fVar37 = fVar23 * fVar34 - fVar36 * fVar19;
    fVar12 = fVar36 * fVar19 + fVar23 * fVar34;
    fVar35 = fVar23 * fVar36 + fVar34 * fVar19;
    fVar24 = fVar23 * fVar36 - fVar34 * fVar19;
    fVar23 = (fVar6 - fVar25 * fVar36) - fVar33 * fVar34;
    fVar19 = fVar33 * fVar36 - fVar11;
    fVar11 = fVar11 + fVar33 * fVar36;
    fVar36 = (fVar6 - fVar15) - fVar25 * fVar36;
    fVar15 = (fVar6 - fVar33 * fVar34) - fVar15;
    fVar16 = (fVar24 * fVar28 + fVar11 * fVar27 + fVar26 * fVar15) * *(float *)(lVar3 + 0x20);
    fVar17 = (fVar12 * fVar28 + fVar36 * fVar27 + fVar26 * fVar19) * *(float *)(lVar3 + 0x24);
    fVar18 = (fVar23 * fVar28 + fVar37 * fVar27 + fVar26 * fVar35) * *(float *)(lVar3 + 0x28);
    fVar19 = (float)((uint)(fVar16 * fVar15 + fVar17 * fVar19 + fVar35 * fVar18) & uVar29);
    fVar11 = (float)((uint)(fVar16 * fVar11 + fVar17 * fVar36 + fVar37 * fVar18) & uVar31);
    fVar12 = (float)((uint)(fVar16 * fVar24 + fVar17 * fVar12 + fVar23 * fVar18) & uVar32);
    param_1[4] = fVar19;
    param_1[5] = fVar11;
    param_1[6] = fVar12;
    param_1[7] = (float)((uint)(fVar16 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0) & -(uint)bVar5);
    fVar19 = fVar20 * fVar12 + fVar22 * fVar11 + fVar21 * fVar19 + 0.0 + *(float *)(lVar3 + 0x58) +
             0.0;
    if (cVar1 != '\0') goto LAB_00101d41;
  }
  if (fVar19 != 0.0) {
    param_1[0x10] = fVar6 / fVar19;
    return;
  }
LAB_001023b8:
  param_1[0x11] = 0.0;
  param_1[0x10] = 0.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::IndependentAxisConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&, JPH::Vec3,
   JPH::Vec3, float, float, float) */

undefined8
JPH::IndependentAxisConstraintPart::SolveVelocityConstraint
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          float param_5,float param_6,float param_7,float *param_1,long param_2,long param_10)

{
  float fVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fStack_c;
  float fVar13;
  
  fVar23 = (float)param_4;
  fVar18 = (float)((ulong)param_1_00 >> 0x20);
  fVar14 = (float)param_1_00;
  cVar2 = *(char *)(param_2 + 0x78);
  pfVar5 = *(float **)(param_2 + 0x48);
  fVar20 = (float)param_2_00;
  if (cVar2 == '\0') {
    fVar19 = fVar20 * 0.0 + fVar18 * 0.0 + fVar14 * 0.0 + 0.0;
    auVar16 = SUB1612((undefined1  [16])0x0,0);
  }
  else {
    fVar19 = fVar20 * (float)*(undefined8 *)(pfVar5 + 2) +
             (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar18 +
             fVar14 * (float)*(undefined8 *)pfVar5 + 0.0;
    auVar16 = SUB1612(*(undefined1 (*) [16])(pfVar5 + 4),0);
  }
  cVar3 = *(char *)(param_10 + 0x78);
  pfVar6 = *(float **)(param_10 + 0x48);
  fVar12 = (float)param_3;
  fVar13 = (float)((ulong)param_3 >> 0x20);
  if (cVar3 == '\0') {
    fVar15 = fVar23 * 0.0 + fVar13 * 0.0 + fVar12 * 0.0 + 0.0;
    auVar17 = SUB1612((undefined1  [16])0x0,0);
  }
  else {
    fVar15 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * fVar13 +
             (float)*(undefined8 *)pfVar6 * fVar12 + 0.0 +
             fVar23 * (float)*(undefined8 *)(pfVar6 + 2);
    auVar17 = SUB1612(*(undefined1 (*) [16])(pfVar6 + 4),0);
  }
  fVar1 = param_1[0x11];
  fVar19 = (auVar17._8_4_ * param_1[10] +
            auVar17._4_4_ * param_1[9] + param_1[8] * auVar17._0_4_ + 0.0 +
           param_1[2] * auVar16._8_4_ + auVar16._4_4_ * param_1[1] + *param_1 * auVar16._0_4_ + 0.0
           + fVar19 + fVar15 * param_5) * (float)((uint)param_1[0x10] ^ __LC40) + fVar1;
  if (param_6 <= fVar19) {
    param_6 = fVar19;
  }
  if (param_6 <= param_7) {
    param_7 = param_6;
  }
  param_1[0x11] = param_7;
  param_7 = param_7 - fVar1;
  if (param_7 == 0.0) {
    return 0;
  }
  if (cVar2 == '\x02') {
    bVar4 = *(byte *)((long)pfVar5 + 0x7a);
    fVar19 = pfVar5[0x16] * param_7;
    auVar21._1_3_ = 0;
    auVar21[0] = bVar4;
    auVar21[4] = bVar4;
    auVar21._5_3_ = 0;
    auVar21[8] = bVar4;
    auVar21._9_3_ = 0;
    auVar21[0xc] = bVar4;
    auVar21._13_3_ = 0;
    auVar11._4_4_ = _UNK_001028d4;
    auVar11._0_4_ = __LC6;
    auVar11._8_4_ = _UNK_001028d8;
    auVar11._12_4_ = _UNK_001028dc;
    auVar21 = auVar21 & auVar11;
    bVar7 = auVar21._4_4_ == _UNK_001028d4;
    bVar8 = auVar21._8_4_ == _UNK_001028d8;
    bVar9 = auVar21._12_4_ == _UNK_001028dc;
    fStack_c = (float)((ulong)param_2_00 >> 0x20);
    *pfVar5 = (float)((uint)(fVar19 * fVar14 + *pfVar5) & -(uint)(auVar21._0_4_ == __LC6));
    pfVar5[1] = (float)((uint)(fVar19 * fVar18 + pfVar5[1]) & -(uint)bVar7);
    pfVar5[2] = (float)((uint)(fVar19 * fVar20 + pfVar5[2]) & -(uint)bVar8);
    pfVar5[3] = (float)((uint)(fVar19 * fStack_c + pfVar5[3]) & -(uint)bVar9);
    fVar20 = param_1[5];
    fVar14 = param_1[6];
    fVar18 = param_1[7];
    pfVar5[4] = param_7 * param_1[4] + pfVar5[4];
    pfVar5[5] = param_7 * fVar20 + pfVar5[5];
    pfVar5[6] = param_7 * fVar14 + pfVar5[6];
    pfVar5[7] = param_7 * fVar18 + pfVar5[7];
  }
  if (cVar3 == '\x02') {
    bVar4 = *(byte *)((long)pfVar6 + 0x7a);
    auVar22._1_3_ = 0;
    auVar22[0] = bVar4;
    auVar22[4] = bVar4;
    auVar22._5_3_ = 0;
    auVar22[8] = bVar4;
    auVar22._9_3_ = 0;
    auVar22[0xc] = bVar4;
    auVar22._13_3_ = 0;
    auVar10._4_4_ = _UNK_001028d4;
    auVar10._0_4_ = __LC6;
    auVar10._8_4_ = _UNK_001028d8;
    auVar10._12_4_ = _UNK_001028dc;
    auVar22 = auVar22 & auVar10;
    bVar7 = auVar22._4_4_ == _UNK_001028d4;
    bVar8 = auVar22._8_4_ == _UNK_001028d8;
    bVar9 = auVar22._12_4_ == _UNK_001028dc;
    fVar20 = param_5 * pfVar6[0x16] * param_7;
    *pfVar6 = (float)((uint)(fVar20 * fVar12 + *pfVar6) & -(uint)(auVar22._0_4_ == __LC6));
    pfVar6[1] = (float)((uint)(fVar20 * fVar13 + pfVar6[1]) & -(uint)bVar7);
    pfVar6[2] = (float)((uint)(fVar20 * fVar23 + pfVar6[2]) & -(uint)bVar8);
    pfVar6[3] = (float)((uint)(fVar20 * (float)((ulong)param_4 >> 0x20) + pfVar6[3]) & -(uint)bVar9)
    ;
    fVar20 = param_1[0xd];
    fVar14 = param_1[0xe];
    fVar18 = param_1[0xf];
    pfVar6[4] = param_7 * param_1[0xc] + pfVar6[4];
    pfVar6[5] = param_7 * fVar20 + pfVar6[5];
    pfVar6[6] = param_7 * fVar14 + pfVar6[6];
    pfVar6[7] = param_7 * fVar18 + pfVar6[7];
  }
  return 1;
}



/* JPH::GetRTTIOfType(JPH::PulleyConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC46;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PulleyConstraint::~PulleyConstraint() */

void __thiscall JPH::PulleyConstraint::~PulleyConstraint(PulleyConstraint *this)

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
/* JPH::PulleyConstraintSettings::~PulleyConstraintSettings() */

void __thiscall
JPH::PulleyConstraintSettings::~PulleyConstraintSettings(PulleyConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


