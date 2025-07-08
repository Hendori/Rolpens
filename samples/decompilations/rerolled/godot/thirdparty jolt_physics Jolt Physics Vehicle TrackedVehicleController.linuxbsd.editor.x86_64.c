/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* JPH::WheelSettingsTV::sCreateRTTI(JPH::RTTI&) */

void JPH::WheelSettingsTV::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::WheelSettingsTV::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::WheelSettingsTV::SaveBinaryState(WheelSettingsTV *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
                    /* WARNING: Could not recover jumptable at 0x00100091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  return;
}



/* JPH::WheelSettingsTV::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::WheelSettingsTV::RestoreBinaryState(WheelSettingsTV *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
                    /* WARNING: Could not recover jumptable at 0x001000e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  return;
}



/* JPH::TrackedVehicleController::AllowSleep() const */

bool __thiscall JPH::TrackedVehicleController::AllowSleep(TrackedVehicleController *this)

{
  if ((((*(float *)(this + 0x18) == 0.0) && (*(float *)(this + 0xb8) <= 0.0)) &&
      (*(float *)(this + 0xbc) <= 0.0)) && (*(float *)(this + 0xc0) <= 0.0)) {
    return *(float *)(this + 0x58) <= _LC1 * *(float *)(this + 0x2c);
  }
  return false;
}



/* JPH::TrackedVehicleController::PreCollide(float, JPH::PhysicsSystem&) */

void JPH::TrackedVehicleController::PreCollide(float param_1,PhysicsSystem *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  PhysicsSystem *pPVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)(param_2 + 0x10);
  pPVar6 = param_2 + 0xd0;
  iVar7 = 0;
  while( true ) {
    puVar5 = *(uint **)(pPVar6 + 0x10);
    puVar1 = puVar5 + *(long *)pPVar6;
    if (puVar5 != puVar1) {
      lVar4 = *(long *)(lVar3 + 0xa0);
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *(int *)(*(long *)(lVar4 + (ulong)uVar2 * 8) + 0x194) = iVar7;
      } while (puVar5 != puVar1);
    }
    pPVar6 = pPVar6 + 0x38;
    if (iVar7 != 0) break;
    iVar7 = 1;
  }
  fVar9 = _LC2 - *(float *)(param_2 + 0xec) * param_1;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar8 = _LC2 - param_1 * *(float *)(param_2 + 0x124);
  *(float *)(param_2 + 0xf8) = fVar9 * *(float *)(param_2 + 0xf8);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(param_2 + 0x130) = fVar8 * *(float *)(param_2 + 0x130);
  return;
}



/* JPH::TrackedVehicleControllerSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::TrackedVehicleControllerSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((VehicleControllerSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::TrackedVehicleControllerSettings::SaveBinaryState(JPH::StreamOut&) const */

void JPH::TrackedVehicleControllerSettings::SaveBinaryState(StreamOut *param_1)

{
  JPH::VehicleEngineSettings::SaveBinaryState(param_1 + 0x10);
  JPH::VehicleTransmissionSettings::SaveBinaryState(param_1 + 0x40);
  JPH::VehicleTrackSettings::SaveBinaryState(param_1 + 0x90);
  JPH::VehicleTrackSettings::SaveBinaryState(param_1 + 0xc0);
  return;
}



/* JPH::TrackedVehicleControllerSettings::RestoreBinaryState(JPH::StreamIn&) */

void JPH::TrackedVehicleControllerSettings::RestoreBinaryState(StreamIn *param_1)

{
  JPH::VehicleEngineSettings::RestoreBinaryState(param_1 + 0x10);
  JPH::VehicleTransmissionSettings::RestoreBinaryState(param_1 + 0x40);
  JPH::VehicleTrackSettings::RestoreBinaryState(param_1 + 0x90);
  JPH::VehicleTrackSettings::RestoreBinaryState(param_1 + 0xc0);
  return;
}



/* JPH::TrackedVehicleController::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::TrackedVehicleController::SaveState(TrackedVehicleController *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x18,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x20,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x24,4);
  JPH::VehicleEngine::SaveState((StateRecorder *)(this + 0x28));
  JPH::VehicleTransmission::SaveState((StateRecorder *)(this + 0x60));
  JPH::VehicleTrack::SaveState((StateRecorder *)(this + 200));
  JPH::VehicleTrack::SaveState((StateRecorder *)(this + 0x100));
  return;
}



/* JPH::TrackedVehicleController::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::TrackedVehicleController::RestoreState(TrackedVehicleController *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x24,4);
  JPH::VehicleEngine::RestoreState((StateRecorder *)(this + 0x28));
  JPH::VehicleTransmission::RestoreState((StateRecorder *)(this + 0x60));
  JPH::VehicleTrack::RestoreState((StateRecorder *)(this + 200));
  JPH::VehicleTrack::RestoreState((StateRecorder *)(this + 0x100));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*Allocate)(0xa0);
  uVar3 = _LC6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
  uVar2 = _UNK_001038f8;
  uVar1 = __LC3;
  puVar4[0xe] = uVar3;
  uVar3 = _LC8;
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  uVar2 = _UNK_00103908;
  uVar1 = __LC4;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[8] = uVar1;
  puVar4[9] = uVar2;
  puVar4[10] = uVar1;
  puVar4[0xb] = uVar2;
  uVar2 = _UNK_00103918;
  uVar1 = __LC5;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  puVar4[0xc] = uVar1;
  puVar4[0xd] = uVar2;
  uVar2 = _UNK_00103928;
  uVar1 = __LC7;
  *(undefined1 *)((long)puVar4 + 0x7c) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  *puVar4 = &PTR_GetRTTI_00103838;
  *(undefined8 *)((long)puVar4 + 0x94) = uVar3;
  puVar4[0x10] = uVar1;
  puVar4[0x11] = uVar2;
  return;
}



/* JPH::WheelSettingsTV::GetRTTI() const */

undefined1 * JPH::WheelSettingsTV::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettingsTV*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettingsTV*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettingsTV*)::rtti,"WheelSettingsTV",0xa0,
                      GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettingsTV*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettingsTV*)::rtti);
      return GetRTTIOfType(JPH::WheelSettingsTV*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettingsTV*)::rtti;
}



/* JPH::TrackedVehicleControllerSettings::GetRTTI() const */

undefined1 * JPH::TrackedVehicleControllerSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti,
                      "TrackedVehicleControllerSettings",0xf0,
                      GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
                      ,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TrackedVehicleController::Draw(JPH::DebugRenderer*) const */

void __thiscall
JPH::TrackedVehicleController::Draw(TrackedVehicleController *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  Body *this_00;
  code *pcVar4;
  Vec3 *pVVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  TrackedVehicleController *pTVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [12];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [12];
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  undefined1 auVar32 [12];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1e8;
  undefined8 local_168;
  undefined8 *local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x10);
  this_00 = *(Body **)(lVar3 + 0x50);
  fVar12 = *(float *)(lVar3 + 0x78);
  fVar35 = (float)(__LC12 ^ *(uint *)(this_00 + 0x10));
  fVar36 = (float)(_UNK_00103934 ^ *(uint *)(this_00 + 0x14));
  fVar37 = (float)(_UNK_00103938 ^ *(uint *)(this_00 + 0x18));
  fVar38 = (float)(_UNK_0010393c ^ *(uint *)(this_00 + 0x1c));
  fVar33 = (float)*(undefined8 *)(lVar3 + 0x70);
  fVar13 = (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar15 = *(float *)(this_00 + 0x10);
  fVar26 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar21 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar18 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  fVar34 = (fVar18 * fVar33 + fVar15 * 0.0 + fVar26 * fVar12) - fVar21 * fVar13;
  fVar23 = (fVar18 * fVar13 - fVar15 * fVar12) + fVar26 * 0.0 + fVar21 * fVar33;
  fVar17 = ((fVar18 * fVar12 + fVar15 * fVar13) - fVar26 * fVar33) + fVar21 * 0.0;
  fVar33 = ((fVar18 * 0.0 - fVar33 * fVar15) - fVar13 * fVar26) - fVar12 * fVar21;
  fVar12 = *(float *)(this + 0x148);
  fVar13 = *(float *)(this + 0x144);
  local_228 = CONCAT44(fVar17 * fVar35 + fVar23 * fVar38 + (fVar33 * fVar36 - fVar34 * fVar37),
                       (fVar23 * fVar37 + fVar34 * fVar38 + fVar33 * fVar35) - fVar17 * fVar36);
  uStack_220._0_4_ = fVar17 * fVar38 + ((fVar34 * fVar36 + fVar33 * fVar37) - fVar23 * fVar35);
  uStack_220._4_4_ = ((fVar33 * fVar38 - fVar34 * fVar35) - fVar23 * fVar36) - fVar17 * fVar37;
  fVar17 = (float)*(undefined8 *)(this + 0x140);
  fVar28 = (fVar15 * 0.0 + fVar18 * fVar17 + fVar26 * fVar12) - fVar21 * fVar13;
  fVar24 = (fVar18 * fVar13 - fVar15 * fVar12) + fVar26 * 0.0 + fVar21 * fVar17;
  fVar23 = ((fVar15 * fVar13 + fVar18 * fVar12) - fVar26 * fVar17) + fVar21 * 0.0;
  fVar39 = ((fVar18 * 0.0 - fVar15 * fVar17) - fVar26 * fVar13) - fVar21 * fVar12;
  auVar40 = Body::GetPosition(this_00);
  local_238 = auVar40._0_4_;
  fStack_234 = auVar40._4_4_;
  fVar12 = *(float *)(this_00 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x10) + 0x60);
  fVar15 = *(float *)(*(long *)(this + 0x10) + 0x68);
  fStack_230 = auVar40._8_4_;
  fStack_22c = auVar40._12_4_;
  fVar16 = (float)uVar2;
  fVar18 = (float)(__LC12 ^ *(uint *)(this_00 + 0x10));
  fVar17 = (float)(_UNK_00103934 ^ *(uint *)(this_00 + 0x14));
  fVar33 = (float)(_UNK_00103938 ^ *(uint *)(this_00 + 0x18));
  fVar34 = (float)(_UNK_0010393c ^ *(uint *)(this_00 + 0x1c));
  fVar30 = (float)((ulong)uVar2 >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar26 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar21 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  fVar29 = (fVar16 * fVar21 + fVar12 * 0.0 + fVar13 * fVar15) - fVar26 * fVar30;
  fVar25 = (fVar21 * fVar30 - fVar12 * fVar15) + fVar13 * 0.0 + fVar16 * fVar26;
  fVar20 = ((fVar21 * fVar15 + fVar12 * fVar30) - fVar16 * fVar13) + fVar26 * 0.0;
  fVar12 = ((fVar21 * 0.0 - fVar16 * fVar12) - fVar13 * fVar30) - fVar26 * fVar15;
  local_218 = CONCAT44(fVar20 * fVar18 + fVar25 * fVar34 + (fVar12 * fVar17 - fVar29 * fVar33),
                       (fVar25 * fVar33 + fVar29 * fVar34 + fVar12 * fVar18) - fVar20 * fVar17);
  uStack_210._0_4_ = fVar20 * fVar34 + ((fVar29 * fVar17 + fVar12 * fVar33) - fVar25 * fVar18);
  uStack_210._4_4_ = ((fVar12 * fVar34 - fVar29 * fVar18) - fVar25 * fVar17) - fVar20 * fVar33;
  JPH::VehicleEngine::DrawRPM
            (CONCAT44(fVar23 * fVar35 + fVar24 * fVar38 + (fVar36 * fVar39 - fVar28 * fVar37) +
                      fStack_234,
                      ((fVar24 * fVar37 + fVar28 * fVar38 + fVar35 * fVar39) - fVar23 * fVar36) +
                      local_238),
             CONCAT44((((fVar38 * fVar39 - fVar28 * fVar35) - fVar24 * fVar36) - fVar23 * fVar37) +
                      fStack_22c,
                      fVar23 * fVar38 + ((fVar28 * fVar36 + fVar37 * fVar39) - fVar24 * fVar35) +
                      fStack_230),local_218,uStack_210,local_228,uStack_220,this + 0x28,param_1);
  auVar14 = SUB1612((undefined1  [16])0x0,0);
  if (this_00[0x78] != (Body)0x0) {
    auVar14 = SUB1612(**(undefined1 (**) [16])(this_00 + 0x48),0);
  }
  pTVar11 = this + 200;
  JPH::StringFormat_abi_cxx11_
            ((char *)&local_128,(double)*(float *)(this + 0x18),(double)*(float *)(this + 0x1c),
             (double)*(float *)(this + 0x20),(double)*(float *)(this + 0x24),
             (double)*(float *)(this + 0xb4),(double)*(float *)(this + 0x58),
             (double)SQRT(auVar14._8_4_ * auVar14._8_4_ +
                          auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_ + 0.0) *
             __LC13,
             "Forward: %.1f, LRatio: %.1f, RRatio: %.1f, Brake: %.1f\nGear: %d, Clutch: %.1f, EngineRPM: %.0f, V: %.1f km/h"
             ,(ulong)*(uint *)(this + 0xb0));
  pcVar4 = *(code **)(*(long *)param_1 + 0x38);
  local_168 = local_120;
  local_160 = local_128;
  Body::GetPosition(this_00);
  (*pcVar4)(param_1,&local_168,(undefined4)Color::sWhite);
  do {
    auVar14 = SUB1612((undefined1  [16])0x0,0);
    lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x10) + 0xa0) +
                               (ulong)*(uint *)pTVar11 * 8) + 8);
    if (*(code **)(**(long **)(this_00 + 0x40) + 0x18) != Shape::GetCenterOfMass) {
      auVar14 = (**(code **)(**(long **)(this_00 + 0x40) + 0x18))();
    }
    plVar7 = DebugRenderer::sInstance;
    fVar12 = *(float *)(this_00 + 0x10);
    fVar21 = *(float *)(lVar3 + 0x10) - auVar14._0_4_;
    fVar17 = *(float *)(lVar3 + 0x14) - auVar14._4_4_;
    fVar23 = *(float *)(lVar3 + 0x18) - auVar14._8_4_;
    fVar34 = (float)(__LC12 ^ *(uint *)(this_00 + 0x10));
    fVar20 = (float)(_UNK_00103934 ^ *(uint *)(this_00 + 0x14));
    fVar24 = (float)(_UNK_00103938 ^ *(uint *)(this_00 + 0x18));
    fVar25 = (float)(_UNK_0010393c ^ *(uint *)(this_00 + 0x1c));
    fVar15 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
    fVar13 = (float)*(undefined8 *)(this_00 + 0x18);
    fVar26 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
    pcVar4 = *(code **)(*DebugRenderer::sInstance + 0x38);
    fVar28 = (fVar26 * fVar21 + fVar12 * 0.0 + fVar15 * fVar23) - fVar13 * fVar17;
    fVar33 = (fVar26 * fVar17 - fVar12 * fVar23) + fVar15 * 0.0 + fVar13 * fVar21;
    fVar18 = ((fVar26 * fVar23 + fVar12 * fVar17) - fVar15 * fVar21) + fVar13 * 0.0;
    fVar21 = ((fVar26 * 0.0 - fVar12 * fVar21) - fVar15 * fVar17) - fVar13 * fVar23;
    fVar12 = *(float *)this_00;
    fVar15 = *(float *)(this_00 + 4);
    fVar13 = *(float *)(this_00 + 8);
    fVar26 = *(float *)(this_00 + 0xc);
    JPH::StringFormat_abi_cxx11_((char *)&local_88,(double)*(float *)(pTVar11 + 0x30),"W: %.1f");
    local_168 = uStack_80;
    local_160 = local_88;
    (*pcVar4)(CONCAT44(fVar18 * fVar34 + fVar33 * fVar25 + (fVar20 * fVar21 - fVar28 * fVar24) +
                       fVar15,((fVar33 * fVar24 + fVar28 * fVar25 + fVar34 * fVar21) -
                              fVar18 * fVar20) + fVar12),
              CONCAT44((((fVar25 * fVar21 - fVar28 * fVar34) - fVar33 * fVar20) - fVar18 * fVar24) +
                       fVar26,fVar18 * fVar25 +
                              ((fVar28 * fVar20 + fVar24 * fVar21) - fVar33 * fVar34) + fVar13),
              plVar7,&local_168,(undefined4)Color::sWhite);
    if (local_88 != &local_78) {
      (*Free)();
    }
    pTVar11 = pTVar11 + 0x38;
  } while (this + 0x138 != pTVar11);
  fVar12 = (float)*(undefined8 *)(this_00 + 0x10);
  fVar13 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar15 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar18 = fVar12 + fVar12;
  fVar20 = fVar15 + fVar15;
  fVar26 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  auVar14 = *(undefined1 (*) [12])this_00;
  fVar21 = fVar26 * (fVar13 + fVar13);
  fVar23 = fVar13 * (fVar13 + fVar13);
  fVar24 = fVar13 * fVar20 - fVar18 * fVar26;
  fVar33 = fVar13 * fVar18 + fVar20 * fVar26;
  fVar17 = fVar18 * fVar26 + fVar13 * fVar20;
  fVar26 = fVar13 * fVar18 - fVar20 * fVar26;
  fVar34 = (_LC2 - fVar12 * fVar18) - fVar15 * fVar20;
  fVar13 = fVar15 * fVar18 + fVar21;
  fVar21 = fVar15 * fVar18 - fVar21;
  fVar12 = (_LC2 - fVar23) - fVar12 * fVar18;
  fVar23 = (_LC2 - fVar15 * fVar20) - fVar23;
  if (*(code **)(**(long **)(this_00 + 0x40) + 0x18) == Shape::GetCenterOfMass) {
    auVar19 = SUB1612((undefined1  [16])0x0,0);
    auVar32 = ZEXT812(0);
    auVar41 = ZEXT812(0);
  }
  else {
    auVar41 = (**(code **)(**(long **)(this_00 + 0x40) + 0x18))();
    local_238 = auVar41._0_4_;
    fStack_234 = auVar41._4_4_;
    local_238 = 0.0 - local_238;
    fStack_234 = 0.0 - fStack_234;
    auVar19._8_4_ = 0.0 - auVar41._8_4_;
    auVar41._4_4_ = local_238;
    auVar41._0_4_ = local_238;
    auVar41._8_4_ = local_238;
    auVar32._4_4_ = fStack_234;
    auVar32._0_4_ = fStack_234;
    auVar32._8_4_ = fStack_234;
    auVar19._4_4_ = auVar19._8_4_;
    auVar19._0_4_ = auVar19._8_4_;
  }
  puVar10 = *(undefined8 **)(*(long *)(this + 0x10) + 0xa0);
  puVar1 = puVar10 + *(long *)(*(long *)(this + 0x10) + 0x90);
  if (puVar1 != puVar10) {
    do {
      pVVar5 = (Vec3 *)*puVar10;
      lVar3 = *(long *)(pVVar5 + 8);
      fVar15 = *(float *)(lVar3 + 0x10);
      fVar18 = *(float *)(lVar3 + 0x14);
      fVar20 = *(float *)(lVar3 + 0x18);
      fVar25 = fVar20 * fVar33 + fVar15 * fVar23 + fVar18 * fVar21 +
               auVar41._0_4_ * fVar23 + auVar32._0_4_ * fVar21 + auVar19._0_4_ * fVar33 +
               auVar14._0_4_;
      fVar28 = fVar20 * fVar24 + fVar15 * fVar13 + fVar18 * fVar12 +
               auVar41._4_4_ * fVar13 + auVar32._4_4_ * fVar12 + auVar19._4_4_ * fVar24 +
               auVar14._4_4_;
      fVar29 = fVar20 * fVar34 + fVar15 * fVar26 + fVar18 * fVar17 +
               auVar41._8_4_ * fVar26 + auVar32._8_4_ * fVar17 + auVar19._8_4_ * fVar34 +
               auVar14._8_4_;
      fVar16 = fVar20 * 0.0 + fVar15 * 0.0 + fVar18 * 0.0 + 1.0;
      fVar15 = *(float *)(lVar3 + 0x30);
      fVar18 = *(float *)(lVar3 + 0x34);
      fVar20 = *(float *)(lVar3 + 0x38);
      fVar30 = fVar15 * fVar23 + fVar18 * fVar21 + fVar20 * fVar33;
      fVar35 = fVar15 * fVar13 + fVar18 * fVar12 + fVar20 * fVar24;
      fVar36 = fVar15 * fVar26 + fVar18 * fVar17 + fVar20 * fVar34;
      fVar18 = fVar15 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0;
      fVar15 = *(float *)(lVar3 + 0x70);
      local_228 = CONCAT44(fVar15 * fVar35 + fVar28,fVar15 * fVar30 + fVar25);
      uStack_220._0_4_ = fVar15 * fVar36 + fVar29;
      uStack_220._4_4_ = fVar15 * fVar18 + fVar16;
      fVar15 = *(float *)(lVar3 + 0x74);
      local_1e8 = CONCAT44(fVar15 * fVar35 + fVar28,fVar15 * fVar30 + fVar25);
      (**(code **)(*(long *)param_1 + 0x10))
                (CONCAT44(fVar28,fVar25),CONCAT44(fVar16,fVar29),local_228,uStack_220,param_1,
                 (undefined4)Color::sRed);
      (**(code **)(*(long *)param_1 + 0x10))
                (local_228,uStack_220,local_1e8,
                 CONCAT44(fVar15 * fVar18 + fVar16,fVar15 * fVar36 + fVar29),param_1,
                 (undefined4)Color::sGreen);
      fVar15 = *(float *)(pVVar5 + 0x20);
      puVar8 = &Color::sGreen;
      fVar25 = fVar15 * fVar30 + fVar25;
      fVar28 = fVar15 * fVar35 + fVar28;
      fVar29 = fVar15 * fVar36 + fVar29;
      fVar16 = fVar15 * fVar18 + fVar16;
      uVar2 = CONCAT44(fVar28,fVar25);
      uVar6 = CONCAT44(fVar16,fVar29);
      if (fVar15 < *(float *)(lVar3 + 0x70)) {
        puVar8 = &Color::sRed;
      }
      JPH::DebugRenderer::DrawMarker(uVar2,param_1,*(undefined4 *)puVar8);
      JPH::VehicleConstraint::GetWheelLocalBasis
                (*(Wheel **)(this + 0x10),pVVar5,(Vec3 *)&local_158,(Vec3 *)&local_148);
      fVar15 = local_158 * fVar13;
      fVar18 = local_158 * fVar26;
      fVar20 = local_158 * 0.0;
      fVar30 = fStack_154 * fVar17;
      fVar35 = fStack_154 * 0.0;
      fStack_14c = fStack_150 * 0.0;
      local_158 = local_158 * fVar23 + fStack_154 * fVar21 + fStack_150 * fVar33;
      fStack_154 = fVar15 + fStack_154 * fVar12 + fStack_150 * fVar24;
      fStack_150 = fVar18 + fVar30 + fStack_150 * fVar34;
      fStack_14c = fVar20 + fVar35 + fStack_14c;
      fVar15 = local_148 * fVar13;
      fVar18 = local_148 * fVar26;
      fVar20 = local_148 * 0.0;
      fVar30 = fStack_144 * fVar17;
      fVar35 = fStack_144 * 0.0;
      fStack_13c = fStack_140 * 0.0;
      local_1e8 = CONCAT44(fStack_154 + fVar28,local_158 + fVar25);
      local_148 = fStack_140 * fVar33 + local_148 * fVar23 + fStack_144 * fVar21;
      fStack_144 = fStack_140 * fVar24 + fVar15 + fStack_144 * fVar12;
      fStack_140 = fStack_140 * fVar34 + fVar18 + fVar30;
      fStack_13c = fStack_13c + fVar20 + fVar35;
      fVar15 = local_138 * fVar13;
      fVar18 = local_138 * fVar26;
      fVar20 = local_138 * 0.0;
      fVar30 = fStack_134 * fVar17;
      fVar35 = fStack_134 * 0.0;
      fStack_12c = fStack_130 * 0.0;
      local_138 = fStack_130 * fVar33 + local_138 * fVar23 + fStack_134 * fVar21;
      fStack_134 = fStack_130 * fVar24 + fVar15 + fStack_134 * fVar12;
      fStack_130 = fStack_130 * fVar34 + fVar18 + fVar30;
      fStack_12c = fStack_12c + fVar20 + fVar35;
      fVar15 = *(float *)(lVar3 + 0x40);
      fVar18 = *(float *)(lVar3 + 0x44);
      fVar20 = *(float *)(lVar3 + 0x48);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,local_1e8,CONCAT44(fStack_14c + fVar16,fStack_150 + fVar29),param_1,
                 (undefined4)Color::sRed);
      local_1e8 = CONCAT44(fVar28 + fStack_144,fVar25 + local_148);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,local_1e8,CONCAT44(fVar16 + fStack_13c,fVar29 + fStack_140),param_1,
                 (undefined4)Color::sGreen);
      local_1e8 = CONCAT44(fVar28 + fStack_134,fVar25 + local_138);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,local_1e8,CONCAT44(fVar16 + fStack_12c,fVar29 + fStack_130),param_1,
                 (undefined4)Color::sBlue);
      local_1e8 = CONCAT44(fVar15 * fVar13 + fVar18 * fVar12 + fVar20 * fVar24 + fVar28,
                           fVar15 * fVar23 + fVar18 * fVar21 + fVar20 * fVar33 + fVar25);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,local_1e8,
                 CONCAT44(fVar15 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0 + fVar16,
                          fVar15 * fVar26 + fVar18 * fVar17 + fVar20 * fVar34 + fVar29),param_1,
                 (undefined4)Color::sYellow);
      uVar22 = *(uint *)(pVVar5 + 0x90) ^ __LC16;
      fVar18 = (float)(__LC17 & uVar22 ^ uVar22);
      iVar27 = (int)(__LC18 * fVar18 + _LC21);
      fVar15 = (float)iVar27;
      lVar9 = 0;
      local_cc = 0x3f800000;
      fVar15 = ((fVar18 - __LC22 * fVar15) - __LC24 * fVar15) - fVar15 * __LC26;
      fVar20 = fVar15 * fVar15;
      fVar18 = (((__LC28 * fVar20 + __LC30) * fVar20 + __LC32) * fVar20 * fVar20 - _LC21 * fVar20) +
               __LC34;
      uVar31 = (iVar27 << 0x1f) >> 0x1f;
      fVar15 = ((__LC35 * fVar20 + __LC37) * fVar20 + __LC39) * fVar20 * fVar15 + fVar15;
      local_a8._0_4_ =
           (uVar22 ^ iVar27 << 0x1e) & __LC17 ^ ((uint)fVar18 & uVar31 | ~uVar31 & (uint)fVar15);
      uVar22 = ((uint)fVar15 & uVar31 | ~uVar31 & (uint)fVar18) ^
               iVar27 << 0x1e & __LC17 ^ iVar27 << 0x1f;
      local_a8._4_4_ = 0;
      local_b8 = CONCAT44(_LC2,__LC4);
      uStack_b0 = _UNK_00103908;
      local_98 = CONCAT44(_UNK_00103a24,__LC41);
      uStack_90 = CONCAT44(_UNK_00103a2c,_UNK_00103a28);
      register0x000012c4 = 0;
      local_c8 = uVar22;
      local_a8._8_4_ = uVar22;
      local_a8._12_4_ = 0;
      register0x000012c8 = local_a8._0_4_ ^ __LC16;
      register0x000012cc = 0;
      do {
        fVar15 = *(float *)(local_c8 + lVar9);
        fVar18 = *(float *)(local_c8 + lVar9 + 4);
        fVar20 = *(float *)(local_c8 + lVar9 + 8);
        fVar16 = *(float *)(local_c8 + lVar9 + 0xc);
        *(float *)((long)&local_88 + lVar9) =
             fVar16 * __LC41 + fVar15 * local_148 + fVar18 * local_138 + fVar20 * local_158;
        *(float *)((long)&local_88 + lVar9 + 4) =
             fVar16 * _UNK_00103a24 +
             fVar15 * fStack_144 + fVar18 * fStack_134 + fVar20 * fStack_154;
        *(float *)((long)&uStack_80 + lVar9) =
             fVar16 * _UNK_00103a28 +
             fVar15 * fStack_140 + fVar18 * fStack_130 + fVar20 * fStack_150;
        *(float *)((long)&uStack_80 + lVar9 + 4) =
             fVar16 * _UNK_00103a2c + fVar15 * 0.0 + fVar18 * 0.0 + fVar20 * 0.0;
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 0x40);
      puVar8 = &Color::sGreen;
      if (*(float *)(pVVar5 + 0x20) <= *(float *)(lVar3 + 0x70)) {
        puVar8 = &Color::sRed;
      }
      local_108 = local_88;
      uStack_100 = uStack_80;
      local_f8 = local_78;
      uStack_f0 = uStack_70;
      local_e8 = local_68;
      uStack_e0 = uStack_60;
      local_d8 = fVar25;
      local_d4 = fVar28;
      local_d0 = fVar29;
      JPH::DebugRenderer::DrawCylinder
                (_LC21 * *(float *)(lVar3 + 0x8c),param_1,&local_108,*(undefined4 *)puVar8,1,1);
      if (*(int *)(pVVar5 + 0x10) != -1) {
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),
                   CONCAT44(*(float *)(pVVar5 + 0x54) + *(float *)(pVVar5 + 0x34),
                            *(float *)(pVVar5 + 0x50) + *(float *)(pVVar5 + 0x30)),
                   CONCAT44(*(float *)(pVVar5 + 0x5c) + *(float *)(pVVar5 + 0x3c),
                            *(float *)(pVVar5 + 0x58) + *(float *)(pVVar5 + 0x38)),param_1,
                   (undefined4)Color::sYellow);
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),
                   CONCAT44(*(float *)(pVVar5 + 100) + *(float *)(pVVar5 + 0x34),
                            *(float *)(pVVar5 + 0x60) + *(float *)(pVVar5 + 0x30)),
                   CONCAT44(*(float *)(pVVar5 + 0x6c) + *(float *)(pVVar5 + 0x3c),
                            *(float *)(pVVar5 + 0x68) + *(float *)(pVVar5 + 0x38)),param_1,
                   (undefined4)Color::sRed);
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),
                   CONCAT44(*(float *)(pVVar5 + 0x74) + *(float *)(pVVar5 + 0x34),
                            *(float *)(pVVar5 + 0x70) + *(float *)(pVVar5 + 0x30)),
                   CONCAT44(*(float *)(pVVar5 + 0x7c) + *(float *)(pVVar5 + 0x3c),
                            *(float *)(pVVar5 + 0x78) + *(float *)(pVVar5 + 0x38)),param_1,
                   (undefined4)Color::sBlue);
        plVar7 = DebugRenderer::sInstance;
        pcVar4 = *(code **)(*DebugRenderer::sInstance + 0x38);
        JPH::StringFormat_abi_cxx11_((char *)&local_88,(double)*(float *)(pVVar5 + 0x20),"S: %.2f");
        local_168 = uStack_80;
        local_160 = local_88;
        (*pcVar4)(*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),plVar7,&local_168,
                  (undefined4)Color::sWhite);
        if (local_88 != &local_78) {
          (*Free)();
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
  }
  if (local_128 != local_118) {
    (*Free)();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::TrackedVehicleControllerSettings*) */

undefined1 * JPH::GetRTTIOfType(TrackedVehicleControllerSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti,
                      "TrackedVehicleControllerSettings",0xf0,
                      GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
                      ,TrackedVehicleControllerSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::rtti;
}



/* JPH::TrackedVehicleControllerSettings::CastTo(JPH::RTTI const*) const */

void JPH::TrackedVehicleControllerSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((TrackedVehicleControllerSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::GetRTTIOfType(JPH::WheelSettingsTV*) */

undefined1 * JPH::GetRTTIOfType(WheelSettingsTV *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettingsTV*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettingsTV*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettingsTV*)::rtti,"WheelSettingsTV",0xa0,
                      GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettingsTV*)::{lambda(void*)#1}::_FUN,
                      WheelSettingsTV::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettingsTV*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettingsTV*)::rtti);
      return GetRTTIOfType(JPH::WheelSettingsTV*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettingsTV*)::rtti;
}



/* JPH::WheelSettingsTV::CastTo(JPH::RTTI const*) const */

void JPH::WheelSettingsTV::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((WheelSettingsTV *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::WheelTV::WheelTV(JPH::WheelSettingsTV const&) */

void __thiscall JPH::WheelTV::WheelTV(WheelTV *this,WheelSettingsTV *param_1)

{
  JPH::Wheel::Wheel((Wheel *)this,(WheelSettings *)param_1);
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined ***)this = &PTR__WheelTV_001037d0;
  *(undefined8 *)(this + 0x194) = 0xffffffff;
  return;
}



/* JPH::WheelTV::CalculateAngularVelocity(JPH::VehicleConstraint const&) */

void __thiscall JPH::WheelTV::CalculateAngularVelocity(WheelTV *this,VehicleConstraint *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xc0) + (long)*(int *)(this + 0x194) * 0x38;
  *(float *)(this + 0x8c) =
       (*(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0xa0) + (ulong)*(uint *)(lVar1 + 200) * 8
                                      ) + 8) + 0x88) * *(float *)(lVar1 + 0xf8)) /
       *(float *)(*(long *)(this + 8) + 0x88);
  return;
}



/* JPH::WheelTV::Update(unsigned int, float, JPH::VehicleConstraint const&) */

void __thiscall
JPH::WheelTV::Update(WheelTV *this,uint param_1,float param_2,VehicleConstraint *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar4;
  float __x;
  uint local_5c;
  undefined1 local_58 [16];
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  fVar3 = _LC43;
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_3 + 0xc0) + (long)*(int *)(this + 0x194) * 0x38;
  fVar4 = (*(float *)(*(long *)(*(long *)(*(long *)(param_3 + 0xa0) +
                                         (ulong)*(uint *)(lVar1 + 200) * 8) + 8) + 0x88) *
          *(float *)(lVar1 + 0xf8)) / *(float *)(lVar2 + 0x88);
  *(float *)(this + 0x8c) = fVar4;
  __x = param_2 * fVar4 + *(float *)(this + 0x90);
  fVar4 = __x;
  do {
    fVar4 = fVar4 - (fVar4 / fVar3) * fVar3;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar4)) goto LAB_00101c78;
  do {
    *(float *)(this + 0x90) = fVar4;
    *(undefined4 *)(this + 0x1a0) = 0;
    if (*(long *)(this + 0x18) == 0) {
      *(undefined8 *)(this + 0x198) = 0;
LAB_00101c30:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_48 = (code *)0x0;
    pcStack_40 = (code *)0x0;
    local_58 = (undefined1  [16])0x0;
    if (*(code **)(param_3 + 0x138) == (code *)0x0) {
      *(undefined8 *)(this + 0x198) = *(undefined8 *)(lVar2 + 0x94);
    }
    else {
      (**(code **)(param_3 + 0x138))(local_58,param_3 + 0x128,2);
      local_48 = *(code **)(param_3 + 0x138);
      pcStack_40 = *(code **)(param_3 + 0x140);
      lVar1 = *(long *)(param_3 + 0x138);
      *(undefined8 *)(this + 0x198) = *(undefined8 *)(lVar2 + 0x94);
      if (lVar1 != 0) {
        local_5c = param_1;
        (*pcStack_40)(local_58,&local_5c,this + 0x198,this + 0x19c,*(undefined8 *)(this + 0x18),
                      this + 0x14);
        if (local_48 != (code *)0x0) {
          (*local_48)(local_58,local_58,3);
        }
        goto LAB_00101c30;
      }
    }
    local_5c = param_1;
    std::__throw_bad_function_call();
LAB_00101c78:
    fmodf(__x,_LC43);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TrackedVehicleControllerSettings::TrackedVehicleControllerSettings() */

void __thiscall
JPH::TrackedVehicleControllerSettings::TrackedVehicleControllerSettings
          (TrackedVehicleControllerSettings *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  *(undefined ***)this = &PTR_GetRTTI_001037f0;
  *(undefined4 *)(this + 8) = 0;
  JPH::VehicleEngineSettings::VehicleEngineSettings((VehicleEngineSettings *)(this + 0x10));
  this[0x40] = (TrackedVehicleControllerSettings)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  lVar9 = (*Reallocate)(0,0,0x14);
  lVar10 = *(long *)(this + 0x48);
  lVar12 = 0;
  *(undefined8 *)(this + 0x50) = 5;
  *(long *)(this + 0x58) = lVar9;
  lVar11 = lVar10 * 4;
  do {
    uVar1 = *(undefined4 *)((long)&C_25_0 + lVar12);
    *(undefined4 *)(lVar9 + lVar11 + lVar12) = uVar1;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x14);
  *(long *)(this + 0x48) = lVar10 + 5;
  *(undefined4 *)(lVar9 + 0x10 + lVar11) = uVar1;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x70) = 0;
  lVar10 = (*Reallocate)(0,0,4);
  uVar5 = _UNK_00103a3c;
  uVar4 = _UNK_00103a38;
  uVar3 = _UNK_00103a34;
  uVar1 = __LC48;
  *(undefined8 *)(this + 0x68) = 1;
  *(long *)(this + 0x70) = lVar10;
  lVar11 = *(long *)(this + 0x60);
  uVar13 = *(ulong *)(this + 0x50);
  *(long *)(this + 0x60) = lVar11 + 1;
  *(undefined4 *)(lVar10 + lVar11 * 4) = 0xc039999a;
  uVar6 = _LC50;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar8 = _LC51;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  uVar7 = _UNK_00103a48;
  uVar6 = __LC52;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x18) = 0x457a0000;
  *(undefined8 *)(this + 0x88) = uVar8;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0xb0) = uVar1;
  *(undefined4 *)(this + 0xb4) = uVar3;
  *(undefined4 *)(this + 0xb8) = uVar4;
  *(undefined4 *)(this + 0xbc) = uVar5;
  *(undefined4 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe4) = uVar3;
  *(undefined4 *)(this + 0xe8) = uVar4;
  *(undefined4 *)(this + 0xec) = uVar5;
  *(undefined8 *)(this + 0x78) = uVar6;
  *(undefined8 *)(this + 0x80) = uVar7;
  uVar6 = _UNK_00103a58;
  if (uVar13 < 4) {
    lVar9 = (*Reallocate)(*(undefined8 *)(this + 0x58),uVar13 << 2,0x10);
    lVar11 = *(long *)(this + 0x48);
    uVar13 = *(ulong *)(this + 0x68);
    *(undefined8 *)(this + 0x50) = 4;
    uVar7 = _UNK_00103a58;
    uVar6 = __LC53;
    lVar10 = *(long *)(this + 0x70);
    *(long *)(this + 0x58) = lVar9;
    puVar2 = (undefined8 *)(lVar9 + lVar11 * 4);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(long *)(this + 0x48) = lVar11 + 4;
    *(undefined4 *)(lVar9 + 0xc + lVar11 * 4) = 0x3f800000;
    *(undefined8 *)(this + 0x60) = 0;
    if (1 < uVar13) {
      lVar11 = 0;
      goto LAB_00101e3a;
    }
  }
  else {
    puVar2 = *(undefined8 **)(this + 0x58);
    uVar13 = 1;
    *puVar2 = __LC53;
    puVar2[1] = uVar6;
    *(undefined8 *)(this + 0x48) = 4;
    *(undefined4 *)((long)puVar2 + 0xc) = 0x3f800000;
    *(undefined8 *)(this + 0x60) = 0;
  }
  lVar10 = (*Reallocate)(lVar10,uVar13 << 2,8);
  *(undefined8 *)(this + 0x68) = 2;
  *(long *)(this + 0x70) = lVar10;
  lVar11 = *(long *)(this + 0x60);
LAB_00101e3a:
  *(undefined8 *)(lVar10 + lVar11 * 4) = _LC54;
  *(long *)(this + 0x60) = lVar11 + 2;
  *(undefined4 *)(lVar10 + 4 + lVar11 * 4) = 0xc0400000;
  return;
}



/* _FUN() */

TrackedVehicleControllerSettings *
JPH::GetRTTIOfType(JPH::TrackedVehicleControllerSettings*)::{lambda()#1}::_FUN(void)

{
  TrackedVehicleControllerSettings *this;
  
  this = (TrackedVehicleControllerSettings *)(*Allocate)(0xf0);
  TrackedVehicleControllerSettings::TrackedVehicleControllerSettings(this);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TrackedVehicleController::TrackedVehicleController(JPH::TrackedVehicleControllerSettings
   const&, JPH::VehicleConstraint&) */

void __thiscall
JPH::TrackedVehicleController::TrackedVehicleController
          (TrackedVehicleController *this,TrackedVehicleControllerSettings *param_1,
          VehicleConstraint *param_2)

{
  TrackedVehicleControllerSettings *pTVar1;
  long lVar2;
  undefined4 uVar3;
  TrackedVehicleControllerSettings TVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  TrackedVehicleControllerSettings *pTVar17;
  ulong uVar18;
  TrackedVehicleControllerSettings *pTVar19;
  TrackedVehicleControllerSettings *pTVar20;
  float fVar21;
  float fVar22;
  
  *(VehicleConstraint **)(this + 0x10) = param_2;
  uVar7 = _UNK_00103a68;
  uVar14 = __LC57;
  *(undefined ***)this = &PTR__TrackedVehicleController_00103878;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = uVar14;
  *(undefined8 *)(this + 0x20) = uVar7;
  JPH::VehicleEngineSettings::VehicleEngineSettings((VehicleEngineSettings *)(this + 0x28));
  this[0x60] = (TrackedVehicleController)0x0;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x2c);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar11 = (*Reallocate)(0,0,0x14);
  lVar12 = *(long *)(this + 0x68);
  lVar15 = 0;
  *(undefined8 *)(this + 0x70) = 5;
  *(long *)(this + 0x78) = lVar11;
  lVar2 = lVar12 * 4;
  do {
    uVar3 = *(undefined4 *)((long)&C_25_0 + lVar15);
    *(undefined4 *)(lVar11 + lVar2 + lVar15) = uVar3;
    lVar15 = lVar15 + 4;
  } while (lVar15 != 0x14);
  *(long *)(this + 0x68) = lVar12 + 5;
  *(undefined4 *)(lVar11 + 0x10 + lVar2) = uVar3;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  lVar12 = (*Reallocate)(0,0,4);
  uVar7 = _UNK_00103a78;
  uVar14 = __LC58;
  lVar2 = *(long *)(this + 0x80);
  *(long *)(this + 0x90) = lVar12;
  *(undefined8 *)(this + 0x88) = 1;
  *(long *)(this + 0x80) = lVar2 + 1;
  *(undefined4 *)(lVar12 + lVar2 * 4) = 0xc039999a;
  uVar10 = _LC59;
  *(undefined8 *)(this + 0x98) = uVar14;
  *(undefined8 *)(this + 0xa0) = uVar7;
  *(undefined1 (*) [16])(this + 0xb4) = ZEXT416(_LC60);
  uVar9 = _UNK_00103a38;
  uVar8 = __LC48;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x108) = (undefined1  [16])0x0;
  uVar7 = _UNK_00103908;
  uVar14 = __LC4;
  *(undefined8 *)(this + 0xa8) = uVar10;
  *(undefined8 *)(this + 0xe8) = uVar8;
  *(undefined8 *)(this + 0xf0) = uVar9;
  *(undefined8 *)(this + 0x120) = uVar8;
  *(undefined8 *)(this + 0x128) = uVar9;
  *(undefined8 *)(this + 0x140) = uVar14;
  *(undefined8 *)(this + 0x148) = uVar7;
  fVar21 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xb0) = 0;
  fVar22 = *(float *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x28) = uVar14;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x150) = 0x3f000000;
  *(float *)(this + 0x30) = fVar21;
  if (param_1 + 0x20 != (TrackedVehicleControllerSettings *)(this + 0x38)) {
    lVar12 = *(long *)(param_1 + 0x20);
    lVar11 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    lVar2 = lVar11 + lVar12 * 8;
    uVar18 = lVar12 * 8 >> 3;
    if (*(ulong *)(this + 0x40) < uVar18) {
      uVar14 = (*Reallocate)(*(undefined8 *)(this + 0x48),*(ulong *)(this + 0x40) << 3);
      fVar22 = *(float *)(this + 0x2c);
      fVar21 = *(float *)(this + 0x30);
      *(undefined8 *)(this + 0x48) = uVar14;
      *(ulong *)(this + 0x40) = uVar18;
    }
    if (lVar11 != lVar2) {
      lVar15 = *(long *)(this + 0x38);
      lVar12 = lVar15 + 1;
      puVar16 = (undefined8 *)(*(long *)(this + 0x48) + lVar15 * 8);
      do {
        *(long *)(this + 0x38) = lVar12;
        if (puVar16 != (undefined8 *)0x0) {
          *puVar16 = *(undefined8 *)(lVar11 + lVar15 * -8 + -8 + lVar12 * 8);
        }
        lVar12 = lVar12 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar12 != lVar15 + 2 + ((lVar2 - lVar11) - 8U >> 3));
    }
  }
  if (fVar22 <= fVar21) {
    fVar21 = fVar22;
  }
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x38);
  TVar4 = param_1[0x40];
  *(float *)(this + 0x58) = fVar21;
  *(TrackedVehicleControllerSettings *)(this + 0x60) = TVar4;
  if ((TrackedVehicleControllerSettings *)(this + 0x68) != param_1 + 0x48) {
    lVar12 = *(long *)(param_1 + 0x48);
    lVar11 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(this + 0x68) = 0;
    lVar12 = lVar12 * 4;
    lVar2 = lVar11 + lVar12;
    if (*(ulong *)(this + 0x70) < (ulong)(lVar12 >> 2)) {
      uVar14 = (*Reallocate)(*(undefined8 *)(this + 0x78),*(ulong *)(this + 0x70) << 2,lVar12);
      *(undefined8 *)(this + 0x78) = uVar14;
      *(long *)(this + 0x70) = lVar12 >> 2;
    }
    if (lVar11 != lVar2) {
      lVar5 = *(long *)(this + 0x68);
      lVar6 = *(long *)(this + 0x78);
      lVar13 = 0;
      lVar15 = lVar5 * 4;
      do {
        uVar3 = *(undefined4 *)(lVar11 + lVar13);
        *(undefined4 *)(lVar6 + lVar15 + lVar13) = uVar3;
        lVar13 = lVar13 + 4;
      } while (lVar12 - lVar13 != 0);
      *(ulong *)(this + 0x68) = lVar5 + 1 + ((ulong)(lVar2 + (-4 - lVar11)) >> 2);
      *(undefined4 *)(lVar2 + lVar6 + (-4 - lVar11) + lVar15) = uVar3;
    }
  }
  if ((TrackedVehicleControllerSettings *)(this + 0x80) != param_1 + 0x60) {
    lVar12 = *(long *)(param_1 + 0x60);
    lVar11 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(this + 0x80) = 0;
    lVar12 = lVar12 * 4;
    lVar2 = lVar11 + lVar12;
    if (*(ulong *)(this + 0x88) < (ulong)(lVar12 >> 2)) {
      uVar14 = (*Reallocate)(*(undefined8 *)(this + 0x90),*(ulong *)(this + 0x88) << 2,lVar12);
      *(undefined8 *)(this + 0x90) = uVar14;
      *(long *)(this + 0x88) = lVar12 >> 2;
    }
    if (lVar11 != lVar2) {
      lVar5 = *(long *)(this + 0x80);
      lVar6 = *(long *)(this + 0x90);
      lVar13 = 0;
      lVar15 = lVar5 * 4;
      do {
        uVar3 = *(undefined4 *)(lVar11 + lVar13);
        *(undefined4 *)(lVar6 + lVar15 + lVar13) = uVar3;
        lVar13 = lVar13 + 4;
      } while (lVar13 != lVar12);
      *(ulong *)(this + 0x80) = lVar5 + 1 + ((ulong)(lVar2 + (-4 - lVar11)) >> 2);
      *(undefined4 *)(lVar2 + lVar6 + (-4 - lVar11) + lVar15) = uVar3;
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  pTVar17 = param_1 + 0x98;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x98) = uVar14;
  *(undefined8 *)(this + 0xa0) = uVar7;
  pTVar19 = (TrackedVehicleControllerSettings *)(this + 0xd0);
  do {
    *(undefined4 *)(pTVar19 + -8) = *(undefined4 *)(pTVar17 + -8);
    if (pTVar19 != pTVar17) {
      lVar12 = *(long *)pTVar17;
      lVar11 = *(long *)(pTVar17 + 0x10);
      *(long *)pTVar19 = 0;
      lVar12 = lVar12 * 4;
      lVar2 = lVar11 + lVar12;
      if (*(ulong *)(pTVar19 + 8) < (ulong)(lVar12 >> 2)) {
        lVar15 = (*Reallocate)(*(long *)(pTVar19 + 0x10),*(ulong *)(pTVar19 + 8) << 2,lVar12);
        *(long *)(pTVar19 + 0x10) = lVar15;
        *(long *)(pTVar19 + 8) = lVar12 >> 2;
      }
      if (lVar11 != lVar2) {
        lVar5 = *(long *)pTVar19;
        lVar6 = *(long *)(pTVar19 + 0x10);
        lVar13 = 0;
        lVar15 = lVar5 * 4;
        do {
          uVar3 = *(undefined4 *)(lVar11 + lVar13);
          *(undefined4 *)(lVar6 + lVar15 + lVar13) = uVar3;
          lVar13 = lVar13 + 4;
        } while (lVar12 - lVar13 != 0);
        *(ulong *)pTVar19 = lVar5 + 1 + ((lVar2 - lVar11) - 4U >> 2);
        *(undefined4 *)((lVar15 - lVar11) + -4 + lVar6 + lVar2) = uVar3;
      }
    }
    pTVar1 = pTVar17 + 0x18;
    lVar2 = *(long *)(pTVar17 + 0x20);
    pTVar20 = pTVar19 + 0x38;
    pTVar17 = pTVar17 + 0x30;
    *(long *)(pTVar19 + 0x18) = *(long *)pTVar1;
    *(long *)(pTVar19 + 0x20) = lVar2;
    pTVar19 = pTVar20;
  } while (pTVar20 != (TrackedVehicleControllerSettings *)(this + 0x140));
  return;
}



/* JPH::TrackedVehicleControllerSettings::ConstructController(JPH::VehicleConstraint&) const */

TrackedVehicleController * __thiscall
JPH::TrackedVehicleControllerSettings::ConstructController
          (TrackedVehicleControllerSettings *this,VehicleConstraint *param_1)

{
  TrackedVehicleController *this_00;
  
  this_00 = (TrackedVehicleController *)(*Allocate)(0x160);
  TrackedVehicleController::TrackedVehicleController(this_00,this,param_1);
  return this_00;
}



/* JPH::TrackedVehicleController::SyncLeftRightTracks() */

void __thiscall JPH::TrackedVehicleController::SyncLeftRightTracks(TrackedVehicleController *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(this + 0x20);
  fVar2 = *(float *)(this + 0x1c);
  fVar5 = *(float *)(this + 0x130);
  fVar3 = *(float *)(this + 0x120);
  fVar4 = fVar2 * fVar5 - fVar1 * *(float *)(this + 0xf8);
  fVar6 = fVar1 * *(float *)(this + 0xe8);
  if (fVar2 * fVar1 <= 0.0) {
    fVar4 = fVar4 / (fVar6 - fVar2 * fVar3);
    fVar5 = fVar5 + fVar4 * fVar3;
  }
  else {
    fVar4 = fVar4 / (fVar6 + fVar2 * fVar3);
    fVar5 = fVar5 - fVar4 * fVar3;
  }
  *(float *)(this + 0x130) = fVar5;
  *(float *)(this + 0xf8) = *(float *)(this + 0xf8) + *(float *)(this + 0xe8) * fVar4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TrackedVehicleController::SolveLongitudinalAndLateralConstraints(float) */

uint JPH::TrackedVehicleController::SolveLongitudinalAndLateralConstraints(float param_1)

{
  undefined8 *puVar1;
  int iVar2;
  VehicleConstraint *pVVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  TrackedVehicleController *in_RDI;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar8 = *(long *)(in_RDI + 0x10);
  puVar7 = *(undefined8 **)(lVar8 + 0xa0);
  puVar1 = puVar7 + *(long *)(lVar8 + 0x90);
  if (puVar1 == puVar7) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      while (pVVar3 = (VehicleConstraint *)*puVar7, *(int *)(pVVar3 + 0x10) == -1) {
        puVar7 = puVar7 + 1;
        if (puVar1 == puVar7) goto LAB_001026b0;
      }
      pfVar4 = *(float **)(lVar8 + 0x50);
      lVar8 = *(long *)(pVVar3 + 8);
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      iVar2 = *(int *)(pVVar3 + 0x194);
      fVar10 = (*(float *)(pVVar3 + 0xd0) + *(float *)(pVVar3 + 0x110)) * *(float *)(pVVar3 + 0x198)
      ;
      pfVar5 = *(float **)(pfVar4 + 0x12);
      if (*(char *)(pfVar4 + 0x1e) != '\0') {
        fVar11 = ((*(float *)(pVVar3 + 0x38) - pfVar4[2]) * pfVar5[5] -
                 pfVar5[6] * (*(float *)(pVVar3 + 0x34) - pfVar4[1])) + *pfVar5;
        fVar12 = ((*(float *)(pVVar3 + 0x30) - *pfVar4) * pfVar5[6] -
                 pfVar5[4] * (*(float *)(pVVar3 + 0x38) - pfVar4[2])) + pfVar5[1];
        fVar13 = ((*(float *)(pVVar3 + 0x34) - pfVar4[1]) * pfVar5[4] -
                 pfVar5[5] * (*(float *)(pVVar3 + 0x30) - *pfVar4)) + pfVar5[2];
      }
      fVar12 = (fVar13 - *(float *)(pVVar3 + 0x48)) * (float)*(undefined8 *)(pVVar3 + 0x68) +
               (fVar12 - *(float *)(pVVar3 + 0x44)) *
               (float)((ulong)*(undefined8 *)(pVVar3 + 0x60) >> 0x20) +
               (fVar11 - *(float *)(pVVar3 + 0x40)) * (float)*(undefined8 *)(pVVar3 + 0x60) + 0.0;
      fVar11 = *(float *)(pVVar3 + 0x1a0);
      if (fVar11 == 0.0) {
        fVar11 = *(float *)(lVar8 + 0x88);
        fVar13 = *(float *)(pVVar3 + 0x150);
        fVar12 = ((*(float *)(in_RDI + (long)iVar2 * 0x38 + 0xf8) - fVar12 / fVar11) *
                 *(float *)(in_RDI + (long)iVar2 * 0x38 + 0xe8)) / fVar11 + fVar13;
        fVar11 = (float)((uint)fVar10 ^ __LC16);
        if ((float)((uint)fVar10 ^ __LC16) <= fVar12) {
          fVar11 = fVar12;
        }
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
        uVar6 = JPH::Wheel::SolveLongitudinalConstraintPart(pVVar3,fVar10,fVar10);
        *(float *)(in_RDI + (long)iVar2 * 0x38 + 0xf8) =
             *(float *)(in_RDI + (long)iVar2 * 0x38 + 0xf8) -
             ((*(float *)(pVVar3 + 0x150) - fVar13) * *(float *)(lVar8 + 0x88)) /
             *(float *)(in_RDI + (long)iVar2 * 0x38 + 0xe8);
        SyncLeftRightTracks(in_RDI);
      }
      else {
        if (fVar11 <= fVar10) {
          fVar10 = fVar11;
        }
        if (fVar12 < 0.0) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = (float)((uint)fVar10 ^ __LC16);
          fVar10 = 0.0;
        }
        uVar6 = JPH::Wheel::SolveLongitudinalConstraintPart(pVVar3,fVar11,fVar10);
      }
      uVar9 = uVar9 | uVar6;
      puVar7 = puVar7 + 1;
      lVar8 = *(long *)(in_RDI + 0x10);
    } while (puVar1 != puVar7);
LAB_001026b0:
    puVar7 = *(undefined8 **)(lVar8 + 0xa0);
    puVar1 = puVar7 + *(long *)(lVar8 + 0x90);
    for (; puVar1 != puVar7; puVar7 = puVar7 + 1) {
      pVVar3 = (VehicleConstraint *)*puVar7;
      if (*(int *)(pVVar3 + 0x10) != -1) {
        fVar10 = (*(float *)(pVVar3 + 0xd0) + *(float *)(pVVar3 + 0x110)) *
                 *(float *)(pVVar3 + 0x19c);
        lVar8 = *(long *)(*(long *)(in_RDI + 0x10) + 0xc0) + (long)*(int *)(pVVar3 + 0x194) * 0x38;
        *(float *)(pVVar3 + 0x8c) =
             (*(float *)(*(long *)(*(long *)(*(long *)(*(long *)(in_RDI + 0x10) + 0xa0) +
                                            (ulong)*(uint *)(lVar8 + 200) * 8) + 8) + 0x88) *
             *(float *)(lVar8 + 0xf8)) / *(float *)(*(long *)(pVVar3 + 8) + 0x88);
        uVar6 = JPH::Wheel::SolveLateralConstraintPart(pVVar3,(float)((uint)fVar10 ^ __LC16),fVar10)
        ;
        uVar9 = uVar9 | uVar6;
      }
    }
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TrackedVehicleController::PostCollide(float, JPH::PhysicsSystem&) */

void JPH::TrackedVehicleController::PostCollide(float param_1,PhysicsSystem *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  VehicleConstraint *pVVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  PhysicsSystem *pPVar11;
  uint *puVar12;
  uint *puVar13;
  VehicleConstraint *pVVar14;
  PhysicsSystem *extraout_RDX;
  PhysicsSystem *pPVar15;
  ulong uVar16;
  uint *puVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_48;
  
  pVVar5 = *(VehicleConstraint **)(param_2 + 0x10);
  uVar6 = *(ulong *)(pVVar5 + 0x90);
  if ((int)uVar6 != 0) {
    pVVar14 = pVVar5;
    uVar16 = 0;
    while( true ) {
      WheelTV::Update(*(WheelTV **)(*(long *)(pVVar5 + 0xa0) + uVar16 * 8),(uint)uVar16,param_1,
                      pVVar14);
      if (uVar16 + 1 == (uVar6 & 0xffffffff)) break;
      pVVar14 = *(VehicleConstraint **)(param_2 + 0x10);
      uVar16 = uVar16 + 1;
    }
  }
  if ((*(int *)(param_2 + 0xb0) == 0) || (*(float *)(param_2 + 0xb4) <= __LC63)) {
    JPH::VehicleEngine::ApplyDamping(param_1);
    if (param_2[0x60] == (PhysicsSystem)0x1) {
      fVar23 = (float)(*(uint *)(param_2 + 0x18) & _LC65);
    }
    else {
      fVar23 = 0.0;
    }
    local_48 = _LC65;
    fVar22 = *(float *)(param_2 + 0x28);
    fVar19 = (float)JPH::LinearCurve::GetValue
                              (*(float *)(param_2 + 0x58) / *(float *)(param_2 + 0x30));
    JPH::VehicleEngine::ApplyTorque(fVar19 * fVar23 * fVar22,param_1);
    fVar23 = *(float *)(param_2 + 0x58);
  }
  else {
    fVar22 = (float)JPH::VehicleTransmission::GetCurrentRatio();
    pPVar11 = param_2 + 200;
    fVar23 = _LC62;
    if (fVar22 < 0.0) {
      fVar23 = _LC61;
    }
    do {
      fVar19 = *(float *)(pPVar11 + 0x30) * *(float *)(pPVar11 + 0x2c);
      if (fVar22 < 0.0) {
        if (fVar23 <= fVar19) {
          fVar19 = fVar23;
        }
      }
      else if (fVar19 <= fVar23) {
        fVar19 = fVar23;
      }
      fVar23 = fVar19;
      puVar12 = *(uint **)(pPVar11 + 0x18);
      puVar17 = puVar12 + *(long *)(pPVar11 + 8);
      if (puVar12 != puVar17) {
        do {
          if (*(int *)(*(long *)(*(long *)(pVVar5 + 0xa0) + (ulong)*puVar12 * 8) + 0x10) != -1)
          break;
          puVar12 = puVar12 + 1;
        } while (puVar17 != puVar12);
      }
      pPVar11 = pPVar11 + 0x38;
    } while (pPVar11 != param_2 + 0x138);
    if ((fVar23 <= _LC62) || (_LC61 <= fVar23)) {
      fVar23 = *(float *)(param_2 + 0x58);
      local_48 = _LC65;
    }
    else {
      fVar22 = (float)JPH::VehicleTransmission::GetCurrentRatio();
      local_48 = _LC65;
      fVar23 = fVar22 * fVar23 * _LC64;
      fVar22 = *(float *)(param_2 + 0x2c);
      if (*(float *)(param_2 + 0x2c) <= fVar23) {
        fVar22 = fVar23;
      }
      fVar23 = *(float *)(param_2 + 0x30);
      if (fVar22 <= *(float *)(param_2 + 0x30)) {
        fVar23 = fVar22;
      }
      *(float *)(param_2 + 0x58) = fVar23;
    }
  }
  JPH::VehicleTransmission::Update
            (param_1,fVar23,*(float *)(param_2 + 0x18),(bool)((char)param_2 + '`'));
  fVar20 = (float)JPH::VehicleTransmission::GetCurrentRatio();
  uVar3 = *(uint *)(param_2 + 0x18);
  fVar23 = *(float *)(param_2 + 0xb4);
  fVar22 = *(float *)(param_2 + 0x28);
  fVar21 = (float)JPH::LinearCurve::GetValue
                            (*(float *)(param_2 + 0x58) / *(float *)(param_2 + 0x30));
  fVar24 = _LC66;
  fVar19 = _LC64;
  fVar23 = (float)(uVar3 & local_48) * fVar22 * fVar21 * fVar20 * fVar23;
  if (fVar23 != 0.0) {
    fVar22 = *(float *)(param_2 + 0x20);
    pPVar11 = param_2 + 0xe8;
    bVar18 = false;
    fVar21 = *(float *)(param_2 + 0x58);
    fVar26 = *(float *)(param_2 + 0x1c);
    while( true ) {
      fVar25 = (fVar21 / (*(float *)(pPVar11 + 0xc) * fVar20 * fVar26 * fVar19)) * fVar24;
      fVar4 = *(float *)(pPVar11 + 0x10);
      if ((fVar4 * fVar25 < 0.0) ||
         ((float)(local_48 & (uint)fVar4) < (float)((uint)fVar25 & local_48))) {
        *(float *)(pPVar11 + 0x10) =
             (*(float *)(pPVar11 + 0xc) * fVar26 * fVar23 * param_1) / *(float *)pPVar11 + fVar4;
      }
      pPVar11 = pPVar11 + 0x38;
      if (bVar18) break;
      bVar18 = true;
      fVar26 = fVar22;
    }
  }
  pPVar11 = param_2 + 0x140;
  SyncLeftRightTracks((TrackedVehicleController *)param_2);
  fVar23 = *(float *)(param_2 + 0x24);
  plVar10 = *(long **)(pVVar5 + 0xa0);
  pPVar15 = extraout_RDX;
  do {
    fVar22 = *(float *)(pPVar15 + 0x20) * fVar23;
    if (0.0 < fVar22) {
      fVar19 = *(float *)(pPVar15 + 0x28);
      fVar24 = ((float)(local_48 & (uint)fVar19) * *(float *)(pPVar15 + 0x18)) / param_1;
      if (fVar22 <= fVar24) {
        *(float *)(pPVar15 + 0x28) =
             fVar19 - ((float)(((uint)fVar22 ^ __LC16) & -(uint)(fVar19 < 0.0) |
                              ~-(uint)(fVar19 < 0.0) & (uint)fVar22) * param_1) /
                      *(float *)(pPVar15 + 0x18);
      }
      else {
        fVar22 = fVar22 - fVar24;
        *(undefined4 *)(pPVar15 + 0x28) = 0;
        if (fVar22 <= 0.0) goto LAB_00102a56;
      }
      puVar17 = *(uint **)(pPVar15 + 0x10);
      if (puVar17 + *(long *)pPVar15 != puVar17) {
        fVar19 = 0.0;
        puVar12 = puVar17;
        do {
          puVar13 = puVar12;
          if (*(int *)(plVar10[*puVar13] + 0x10) != -1) {
            fVar19 = fVar19 + *(float *)(*(long *)(plVar10[*puVar13] + 8) + 0x88);
          }
          puVar12 = puVar13 + 1;
        } while (puVar17 + *(long *)pPVar15 != puVar13 + 1);
        if (0.0 < fVar19) {
          do {
            if (*(int *)(plVar10[*puVar17] + 0x10) != -1) {
              *(float *)(plVar10[*puVar17] + 0x1a0) = param_1 * (fVar22 / fVar19);
            }
            bVar18 = puVar13 != puVar17;
            puVar17 = puVar17 + 1;
          } while (bVar18);
        }
      }
    }
LAB_00102a56:
    pPVar15 = pPVar15 + 0x38;
    if (pPVar11 == pPVar15) {
      plVar1 = plVar10 + *(long *)(pVVar5 + 0x90);
      if (plVar1 != plVar10) {
        lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0xc0);
        lVar8 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
        do {
          lVar9 = *plVar10;
          plVar10 = plVar10 + 1;
          lVar2 = lVar7 + (long)*(int *)(lVar9 + 0x194) * 0x38;
          *(float *)(lVar9 + 0x8c) =
               (*(float *)(*(long *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar2 + 200) * 8) + 8) +
                          0x88) * *(float *)(lVar2 + 0xf8)) /
               *(float *)(*(long *)(lVar9 + 8) + 0x88);
        } while (plVar10 != plVar1);
      }
      return;
    }
  } while( true );
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::WheelSettingsTV::~WheelSettingsTV() */

void __thiscall JPH::WheelSettingsTV::~WheelSettingsTV(WheelSettingsTV *this)

{
  return;
}



/* JPH::WheelSettingsTV::~WheelSettingsTV() */

void __thiscall JPH::WheelSettingsTV::~WheelSettingsTV(WheelSettingsTV *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TrackedVehicleController::ConstructWheel(JPH::WheelSettings const&) const */

Wheel * __thiscall
JPH::TrackedVehicleController::ConstructWheel(TrackedVehicleController *this,WheelSettings *param_1)

{
  Wheel *this_00;
  
  this_00 = (Wheel *)(*Allocate)(0x1b0);
  JPH::Wheel::Wheel(this_00,param_1);
  *(undefined8 *)(this_00 + 0x19c) = 0;
  *(undefined ***)this_00 = &PTR__WheelTV_001037d0;
  *(undefined8 *)(this_00 + 0x194) = 0xffffffff;
  return this_00;
}



/* JPH::WheelTV::~WheelTV() */

void __thiscall JPH::WheelTV::~WheelTV(WheelTV *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_001037b0;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00102faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00102f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings() */

void __thiscall
JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings
          (TrackedVehicleControllerSettings *this)

{
  *(undefined ***)this = &PTR_GetRTTI_001037f0;
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0x98) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x70) != 0) {
    *(undefined8 *)(this + 0x60) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TrackedVehicleController::~TrackedVehicleController() */

void __thiscall
JPH::TrackedVehicleController::~TrackedVehicleController(TrackedVehicleController *this)

{
  *(undefined ***)this = &PTR__TrackedVehicleController_00103878;
  if (*(long *)(this + 0x118) != 0) {
    *(undefined8 *)(this + 0x108) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xe0) != 0) {
    *(undefined8 *)(this + 0xd0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x001030e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_001037b0;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00103123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::WheelTV::~WheelTV() */

void __thiscall JPH::WheelTV::~WheelTV(WheelTV *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_001037b0;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00103153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::TrackedVehicleController::~TrackedVehicleController() */

void __thiscall
JPH::TrackedVehicleController::~TrackedVehicleController(TrackedVehicleController *this)

{
  *(undefined ***)this = &PTR__TrackedVehicleController_00103878;
  if (*(long *)(this + 0x118) != 0) {
    *(undefined8 *)(this + 0x108) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xe0) != 0) {
    *(undefined8 *)(this + 0xd0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001031fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings() */

void __thiscall
JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings
          (TrackedVehicleControllerSettings *this)

{
  *(undefined ***)this = &PTR_GetRTTI_001037f0;
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0x98) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x70) != 0) {
    *(undefined8 *)(this + 0x60) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001032a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_001037b0;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001032ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001032d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetPosition() const */

undefined1  [16] __thiscall JPH::Body::GetPosition(Body *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  undefined1 auVar16 [12];
  
  auVar16 = ZEXT812(0);
  if (*(code **)(**(long **)(this + 0x40) + 0x18) != Shape::GetCenterOfMass) {
    auVar16 = (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  fVar7 = auVar16._8_4_;
  fVar8 = *(float *)(this + 0x1c);
  fVar1 = *(float *)(this + 0x10);
  fVar5 = auVar16._0_4_;
  fVar15 = auVar16._4_4_;
  fVar2 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x18);
  fVar10 = (float)(*(uint *)(this + 0x10) ^ __LC12);
  fVar11 = (float)(*(uint *)(this + 0x14) ^ _UNK_00103934);
  fVar12 = (float)(*(uint *)(this + 0x18) ^ _UNK_00103938);
  fVar13 = (float)(*(uint *)(this + 0x1c) ^ _UNK_0010393c);
  fVar14 = (fVar8 * fVar5 + fVar1 * 0.0 + fVar2 * fVar7) - fVar3 * fVar15;
  fVar9 = (fVar8 * fVar15 - fVar1 * fVar7) + fVar2 * 0.0 + fVar3 * fVar5;
  fVar6 = ((fVar8 * fVar7 + fVar1 * fVar15) - fVar2 * fVar5) + fVar3 * 0.0;
  fVar8 = ((fVar8 * 0.0 - fVar1 * fVar5) - fVar2 * fVar15) - fVar3 * fVar7;
  auVar4._4_4_ = *(float *)(this + 4) -
                 (fVar6 * fVar10 + fVar9 * fVar13 + (fVar11 * fVar8 - fVar14 * fVar12));
  auVar4._0_4_ = *(float *)this -
                 ((fVar9 * fVar12 + fVar14 * fVar13 + fVar10 * fVar8) - fVar6 * fVar11);
  auVar4._8_4_ = *(float *)(this + 8) -
                 (fVar6 * fVar13 + ((fVar14 * fVar11 + fVar12 * fVar8) - fVar9 * fVar10));
  auVar4._12_4_ =
       *(float *)(this + 0xc) -
       (((fVar13 * fVar8 - fVar14 * fVar10) - fVar9 * fVar11) - fVar6 * fVar12);
  return auVar4;
}



/* JPH::GetRTTIOfType(JPH::TrackedVehicleControllerSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC67;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TrackedVehicleController::~TrackedVehicleController() */

void __thiscall
JPH::TrackedVehicleController::~TrackedVehicleController(TrackedVehicleController *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings() */

void __thiscall
JPH::TrackedVehicleControllerSettings::~TrackedVehicleControllerSettings
          (TrackedVehicleControllerSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheelTV::~WheelTV() */

void __thiscall JPH::WheelTV::~WheelTV(WheelTV *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheelSettingsTV::~WheelSettingsTV() */

void __thiscall JPH::WheelSettingsTV::~WheelSettingsTV(WheelSettingsTV *this)

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



