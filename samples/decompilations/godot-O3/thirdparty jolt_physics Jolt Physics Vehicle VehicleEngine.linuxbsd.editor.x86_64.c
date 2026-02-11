
/* JPH::VehicleEngineSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleEngineSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleEngineSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x20) != 0) {
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00100038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleEngineSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleEngineSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti,
                      "VehicleEngineSettings",0x30,
                      GetRTTIOfType(JPH::VehicleEngineSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleEngineSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleEngineSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleEngineSettings*)::rtti;
}



/* JPH::VehicleEngineSettings::VehicleEngineSettings() */

void __thiscall JPH::VehicleEngineSettings::VehicleEngineSettings(VehicleEngineSettings *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = 3;
  *(undefined8 *)this = _LC1;
  uVar2 = _LC3;
  *(undefined4 *)(this + 8) = 0x45bb8000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  lVar3 = (*Reallocate)(0,0,0x18);
  lVar5 = *(long *)(this + 0x10);
  *(undefined8 *)(this + 0x18) = 3;
  *(long *)(this + 0x20) = lVar3;
  uVar4 = lVar5 + 1;
  if (3 < uVar4) {
    uVar7 = 6;
    if (5 < uVar4) {
      uVar7 = uVar4;
    }
    lVar3 = (*Reallocate)(lVar3,0x18,uVar7 * 8);
    lVar5 = *(long *)(this + 0x10);
    *(ulong *)(this + 0x18) = uVar7;
    *(long *)(this + 0x20) = lVar3;
    uVar4 = lVar5 + 1;
  }
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 8);
  *(ulong *)(this + 0x10) = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC4;
  }
  uVar6 = lVar5 + 2;
  if (uVar7 < uVar6) {
    uVar4 = uVar7 * 2;
    lVar5 = uVar7 * 8;
    uVar7 = uVar4;
    if (uVar4 < uVar6) {
      uVar7 = uVar6;
    }
    lVar3 = (*Reallocate)(lVar3,lVar5,uVar7 * 8);
    *(ulong *)(this + 0x18) = uVar7;
    *(long *)(this + 0x20) = lVar3;
    uVar4 = *(ulong *)(this + 0x10);
    uVar6 = uVar4 + 1;
  }
  puVar1 = (undefined8 *)(lVar3 + uVar4 * 8);
  *(ulong *)(this + 0x10) = uVar6;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC5;
  }
  uVar4 = uVar4 + 2;
  if (uVar7 < uVar4) {
    uVar8 = uVar7 * 2;
    if (uVar7 * 2 < uVar4) {
      uVar8 = uVar4;
    }
    lVar3 = (*Reallocate)(lVar3,uVar7 * 8,uVar8 * 8);
    uVar6 = *(ulong *)(this + 0x10);
    *(ulong *)(this + 0x18) = uVar8;
    *(long *)(this + 0x20) = lVar3;
    uVar4 = uVar6 + 1;
  }
  *(ulong *)(this + 0x10) = uVar4;
  puVar1 = (undefined8 *)(lVar3 + uVar6 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC6;
  }
  return;
}



/* _FUN() */

VehicleEngineSettings * JPH::GetRTTIOfType(JPH::VehicleEngineSettings*)::{lambda()#1}::_FUN(void)

{
  VehicleEngineSettings *this;
  
  this = (VehicleEngineSettings *)(*Allocate)(0x30);
  VehicleEngineSettings::VehicleEngineSettings(this);
  return this;
}



/* JPH::VehicleEngineSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleEngineSettings::SaveBinaryState(VehicleEngineSettings *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  JPH::LinearCurve::SaveBinaryState((StreamOut *)(this + 0x10));
  return;
}



/* JPH::VehicleEngineSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleEngineSettings::RestoreBinaryState(VehicleEngineSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  JPH::LinearCurve::RestoreBinaryState((StreamIn *)(this + 0x10));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleEngine::ApplyTorque(float, float) */

void __thiscall JPH::VehicleEngine::ApplyTorque(VehicleEngine *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1 * __LC8 * param_2) / *(float *)(this + 0x28) + *(float *)(this + 0x30);
  fVar2 = *(float *)(this + 4);
  if (*(float *)(this + 4) <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(this + 8);
  if (fVar2 <= *(float *)(this + 8)) {
    fVar1 = fVar2;
  }
  *(float *)(this + 0x30) = fVar1;
  return;
}



/* JPH::VehicleEngine::ApplyDamping(float) */

void __thiscall JPH::VehicleEngine::ApplyDamping(VehicleEngine *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _LC5._4_4_ - *(float *)(this + 0x2c) * param_1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = *(float *)(this + 4);
  if (*(float *)(this + 4) <= fVar1 * *(float *)(this + 0x30)) {
    fVar2 = fVar1 * *(float *)(this + 0x30);
  }
  fVar1 = *(float *)(this + 8);
  if (fVar2 <= *(float *)(this + 8)) {
    fVar1 = fVar2;
  }
  *(float *)(this + 0x30) = fVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleEngine::DrawRPM(JPH::DebugRenderer*, JPH::Vec3, JPH::Vec3, JPH::Vec3, float, float,
   float) const */

void JPH::VehicleEngine::DrawRPM
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,float param_8,long param_1,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,float param_15)

{
  float fVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  float fVar5;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::DebugRenderer::DrawPie
            (param_10,(undefined4)Color::sGrey,1,0,param_13,param_14,
             ((_LC13 * *(float *)(param_1 + 4)) / *(float *)(param_1 + 8) - __LC11) * __LC12);
  fVar5 = _LC13;
  if (param_8 <= *(float *)(param_1 + 0x30)) {
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,
               ((_LC13 * *(float *)(param_1 + 4)) / *(float *)(param_1 + 8) - __LC11) * __LC12,
               param_10,(undefined4)Color::sRed,1,0);
  }
  else {
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,
               ((_LC13 * *(float *)(param_1 + 4)) / *(float *)(param_1 + 8) - __LC11) * __LC12,
               param_10,(undefined4)Color::sRed,1,0);
    fVar5 = _LC13;
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,
               ((_LC13 * *(float *)(param_1 + 0x30)) / *(float *)(param_1 + 8) - __LC11) * __LC12,
               param_10,(undefined4)Color::sDarkRed,1,0);
  }
  fVar3 = _LC13;
  fVar1 = *(float *)(param_1 + 0x30);
  fVar5 = ((fVar5 * param_8) / *(float *)(param_1 + 8) - __LC11) * __LC12;
  if (fVar1 <= param_8) {
    uVar4 = (undefined4)Color::sDarkOrange;
    if (param_8 < fVar1) {
      uVar4 = (undefined4)Color::sOrange;
    }
LAB_00100648:
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,fVar5,param_10,uVar4,1,0);
  }
  else {
    uVar4 = (undefined4)Color::sOrange;
    if (param_15 <= fVar1) goto LAB_00100648;
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,fVar5,param_10,
               (undefined4)Color::sOrange,1,0);
    fVar3 = _LC13;
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,
               ((_LC13 * *(float *)(param_1 + 0x30)) / *(float *)(param_1 + 8) - __LC11) * __LC12,
               param_10,(undefined4)Color::sDarkOrange,1,0);
  }
  fVar5 = ((fVar3 * param_15) / *(float *)(param_1 + 8) - __LC11) * __LC12;
  if (*(float *)(param_1 + 0x30) <= param_15) {
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100a41;
  }
  else {
    JPH::DebugRenderer::DrawPie
              (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,param_10,
               (undefined4)Color::sGreen,1,0);
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100a41:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    fVar5 = ((*(float *)(param_1 + 0x30) * _LC13) / *(float *)(param_1 + 8) - __LC11) * __LC12;
  }
  JPH::DebugRenderer::DrawPie
            (param_1_00,param_2,param_7,param_3,param_4,param_5,param_6,fVar5,param_10,
             (undefined4)Color::sDarkGreen,1,0);
  return;
}



/* JPH::VehicleEngine::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::VehicleEngine::SaveState(VehicleEngine *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x30,4);
  return;
}



/* JPH::VehicleEngine::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::VehicleEngine::RestoreState(VehicleEngine *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleEngineSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC14;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


