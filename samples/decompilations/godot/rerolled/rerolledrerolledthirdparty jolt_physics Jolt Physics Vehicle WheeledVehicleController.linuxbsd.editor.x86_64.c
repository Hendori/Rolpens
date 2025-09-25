/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
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

void JPH::GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::WheelSettingsWV::sCreateRTTI(JPH::RTTI&) */

void JPH::WheelSettingsWV::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::WheeledVehicleController::AllowSleep() const */

bool __thiscall JPH::WheeledVehicleController::AllowSleep(WheeledVehicleController *this)

{
  if ((((*(float *)(this + 0x18) == 0.0) && (*(float *)(this + 0xb8) <= 0.0)) &&
      (*(float *)(this + 0xbc) <= 0.0)) && (*(float *)(this + 0xc0) <= 0.0)) {
    return *(float *)(this + 0x58) <= _LC1 * *(float *)(this + 0x2c);
  }
  return false;
}



/* JPH::WheeledVehicleController::PreCollide(float, JPH::PhysicsSystem&) */

float JPH::WheeledVehicleController::PreCollide(float param_1,PhysicsSystem *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = _LC32;
  plVar3 = *(long **)(*(long *)(param_2 + 0x10) + 0xa0);
  plVar1 = plVar3 + *(long *)(*(long *)(param_2 + 0x10) + 0x90);
  for (; plVar1 != plVar3; plVar3 = plVar3 + 1) {
    param_1 = (float)(*(uint *)(param_2 + 0x1c) ^ uVar2) * *(float *)(*(long *)(*plVar3 + 8) + 0x9c)
    ;
    *(float *)(*plVar3 + 0x88) = param_1;
  }
  return param_1;
}



/* JPH::WheeledVehicleControllerSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::WheeledVehicleControllerSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((VehicleControllerSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::WheelSettingsWV::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::WheelSettingsWV::SaveBinaryState(WheelSettingsWV *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x9c,4);
  JPH::LinearCurve::SaveBinaryState((StreamOut *)(this + 0xa0));
  JPH::LinearCurve::SaveBinaryState((StreamOut *)(this + 0xb8));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd0,4);
                    /* WARNING: Could not recover jumptable at 0x001001be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd4,4);
  return;
}



/* JPH::WheelSettingsWV::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::WheelSettingsWV::RestoreBinaryState(WheelSettingsWV *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x98,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x9c,4);
  JPH::LinearCurve::RestoreBinaryState((StreamIn *)(this + 0xa0));
  JPH::LinearCurve::RestoreBinaryState((StreamIn *)(this + 0xb8));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd0,4);
                    /* WARNING: Could not recover jumptable at 0x0010025e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xd4,4);
  return;
}



/* JPH::WheeledVehicleControllerSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::WheeledVehicleControllerSettings::SaveBinaryState
          (WheeledVehicleControllerSettings *this,StreamOut *param_1)

{
  StreamOut *pSVar1;
  StreamOut *pSVar2;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::VehicleEngineSettings::SaveBinaryState((StreamOut *)(this + 0x10));
  JPH::VehicleTransmissionSettings::SaveBinaryState((StreamOut *)(this + 0x40));
  local_34 = (undefined4)*(undefined8 *)(this + 0x90);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  pSVar2 = *(StreamOut **)(this + 0xa0);
  pSVar1 = pSVar2 + *(long *)(this + 0x90) * 0x18;
  for (; pSVar1 != pSVar2; pSVar2 = pSVar2 + 0x18) {
    JPH::VehicleDifferentialSettings::SaveBinaryState(pSVar2);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::WheeledVehicleController::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::WheeledVehicleController::SaveState(WheeledVehicleController *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x18,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x20,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x24,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe4,4);
  JPH::VehicleEngine::SaveState((StateRecorder *)(this + 0x28));
  JPH::VehicleTransmission::SaveState((StateRecorder *)(this + 0x60));
  return;
}



/* JPH::WheeledVehicleController::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::WheeledVehicleController::RestoreState(WheeledVehicleController *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x24,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe4,4);
  JPH::VehicleEngine::RestoreState((StateRecorder *)(this + 0x28));
  JPH::VehicleTransmission::RestoreState((StateRecorder *)(this + 0x60));
  return;
}



/* JPH::WheeledVehicleController::SolveLongitudinalAndLateralConstraints(float) */

uint __thiscall
JPH::WheeledVehicleController::SolveLongitudinalAndLateralConstraints
          (WheeledVehicleController *this,float param_1)

{
  long lVar1;
  long lVar2;
  VehicleConstraint *pVVar3;
  code *pcVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  float fVar17;
  undefined1 auVar18 [12];
  float fVar19;
  float fVar20;
  undefined1 auStack_98 [8];
  long local_90;
  float local_84;
  long local_80;
  ulong local_78;
  undefined8 *local_70;
  float local_60;
  uint local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  long local_40;
  undefined1 *puVar13;
  
  puVar12 = auStack_98;
  lVar1 = *(long *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(lVar1 + 0x90);
  uVar10 = lVar2 * 4 + 0x17;
  puVar13 = auStack_98;
  puVar8 = auStack_98;
  while (puVar13 != auStack_98 + -(uVar10 & 0xfffffffffffff000)) {
    puVar12 = puVar8 + -0x1000;
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    puVar13 = puVar8 + -0x1000;
    puVar8 = puVar8 + -0x1000;
  }
  uVar10 = (ulong)((uint)uVar10 & 0xff0);
  lVar7 = -uVar10;
  if (uVar10 != 0) {
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
  }
  puVar14 = *(undefined8 **)(lVar1 + 0xa0);
  local_78 = (ulong)(puVar12 + lVar7 + 0xf) & 0xfffffffffffffff0;
  local_70 = puVar14 + lVar2;
  local_84 = param_1;
  if (puVar14 == local_70) {
    uVar16 = 0;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
LAB_00100512:
    do {
      pVVar3 = (VehicleConstraint *)*puVar14;
      if (*(int *)(pVVar3 + 0x10) != -1) {
        local_58 = *(float *)(pVVar3 + 0xd0) + *(float *)(pVVar3 + 0x110);
        local_48 = *(undefined4 *)(pVVar3 + 0x198);
        local_4c = *(undefined4 *)(pVVar3 + 0x194);
        local_50 = *(undefined4 *)(pVVar3 + 0x1a0);
        local_54 = *(undefined4 *)(pVVar3 + 0x19c);
        lVar1 = *(long *)(pVVar3 + 8);
        local_44 = local_84;
        local_5c = uVar15;
        if (*(long *)(this + 0xf8) == 0) {
          *(undefined8 *)(puVar12 + lVar7 + -8) = 0x100808;
          std::__throw_bad_function_call();
          goto LAB_00100808;
        }
        *(float **)(puVar12 + lVar7 + -8) = &local_44;
        *(undefined4 **)(puVar12 + lVar7 + -0x10) = &local_48;
        *(undefined4 **)(puVar12 + lVar7 + -0x18) = &local_4c;
        *(undefined4 **)(puVar12 + lVar7 + -0x20) = &local_50;
        pcVar4 = *(code **)(this + 0x100);
        *(undefined8 *)(puVar12 + lVar7 + -0x28) = 0x1005c6;
        local_80 = lVar1;
        (*pcVar4)(this + 0xe8,&local_5c,&local_60,local_78 + (ulong)uVar15 * 4,&local_58,&local_54);
        lVar1 = local_80;
        auVar18 = SUB1612((undefined1  [16])0x0,0);
        pfVar5 = *(float **)(*(long *)(this + 0x10) + 0x50);
        pfVar6 = *(float **)(pfVar5 + 0x12);
        if (*(char *)(pfVar5 + 0x1e) != '\0') {
          auVar18._0_4_ =
               ((*(float *)(pVVar3 + 0x38) - pfVar5[2]) * pfVar6[5] -
               pfVar6[6] * (*(float *)(pVVar3 + 0x34) - pfVar5[1])) + *pfVar6;
          auVar18._4_4_ =
               ((*(float *)(pVVar3 + 0x30) - *pfVar5) * pfVar6[6] -
               pfVar6[4] * (*(float *)(pVVar3 + 0x38) - pfVar5[2])) + pfVar6[1];
          auVar18._8_4_ =
               ((*(float *)(pVVar3 + 0x34) - pfVar5[1]) * pfVar6[4] -
               pfVar6[5] * (*(float *)(pVVar3 + 0x30) - *pfVar5)) + pfVar6[2];
        }
        fVar20 = *(float *)(pVVar3 + 0x1a4);
        fVar17 = (auVar18._8_4_ - *(float *)(pVVar3 + 0x48)) * (float)*(undefined8 *)(pVVar3 + 0x68)
                 + (auVar18._4_4_ - *(float *)(pVVar3 + 0x44)) *
                   (float)((ulong)*(undefined8 *)(pVVar3 + 0x60) >> 0x20) +
                   (auVar18._0_4_ - *(float *)(pVVar3 + 0x40)) *
                   (float)*(undefined8 *)(pVVar3 + 0x60) + 0.0;
        if (fVar20 != 0.0) {
          fVar19 = local_60;
          if (fVar20 <= local_60) {
            fVar19 = fVar20;
          }
          if (fVar17 < 0.0) {
            fVar20 = 0.0;
          }
          else {
            fVar20 = (float)((uint)fVar19 ^ _LC32);
            fVar19 = 0.0;
          }
          uVar15 = uVar15 + 1;
          puVar14 = puVar14 + 1;
          *(undefined8 *)(puVar12 + lVar7 + -8) = 0x1006a1;
          uVar9 = JPH::Wheel::SolveLongitudinalConstraintPart(pVVar3,fVar20,fVar19);
          uVar16 = uVar16 | uVar9;
          if (local_70 == puVar14) break;
          goto LAB_00100512;
        }
        pfVar5 = (float *)(local_80 + 0x88);
        local_90 = local_80;
        local_80 = CONCAT44(local_80._4_4_,*(float *)(pVVar3 + 0x150));
        fVar17 = ((*(float *)(pVVar3 + 0x8c) - fVar17 / *pfVar5) * *(float *)(lVar1 + 0x94)) /
                 *pfVar5 + *(float *)(pVVar3 + 0x150);
        fVar20 = (float)((uint)local_60 ^ _LC32);
        if ((float)((uint)local_60 ^ _LC32) <= fVar17) {
          fVar20 = fVar17;
        }
        fVar17 = local_60;
        if (fVar20 <= local_60) {
          fVar17 = fVar20;
        }
        *(undefined8 *)(puVar12 + lVar7 + -8) = 0x100791;
        uVar9 = JPH::Wheel::SolveLongitudinalConstraintPart(pVVar3,fVar17,fVar17);
        uVar16 = uVar16 | uVar9;
        *(float *)(pVVar3 + 0x8c) =
             *(float *)(pVVar3 + 0x8c) -
             ((*(float *)(pVVar3 + 0x150) - (float)local_80) * *(float *)(local_90 + 0x88)) /
             *(float *)(local_90 + 0x94);
      }
      uVar15 = uVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (local_70 != puVar14);
    puVar11 = *(undefined8 **)(*(long *)(this + 0x10) + 0xa0);
    puVar14 = puVar11 + *(long *)(*(long *)(this + 0x10) + 0x90);
    if (puVar14 != puVar11) {
      uVar10 = 0;
      do {
        pVVar3 = (VehicleConstraint *)*puVar11;
        if (*(int *)(pVVar3 + 0x10) != -1) {
          fVar20 = *(float *)(local_78 + uVar10 * 4);
          *(undefined8 *)(puVar12 + lVar7 + -8) = 0x1006f8;
          uVar15 = JPH::Wheel::SolveLateralConstraintPart
                             (pVVar3,(float)((uint)fVar20 ^ _LC32),fVar20);
          uVar16 = uVar16 | uVar15;
        }
        puVar11 = puVar11 + 1;
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (puVar14 != puVar11);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
LAB_00100808:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + lVar7 + -8) = &UNK_0010080d;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

undefined8 * JPH::GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda()#1}::_FUN(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)(*Allocate)(0xb0);
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR_GetRTTI_00105350;
  JPH::VehicleEngineSettings::VehicleEngineSettings((VehicleEngineSettings *)(puVar6 + 2));
  *(undefined1 *)(puVar6 + 8) = 0;
  puVar6[0xb] = 0;
  *(undefined1 (*) [16])(puVar6 + 9) = (undefined1  [16])0x0;
  lVar7 = (*Reallocate)(0,0,0x14);
  lVar8 = puVar6[9];
  lVar9 = 0;
  puVar6[10] = 5;
  puVar6[0xb] = lVar7;
  lVar1 = lVar8 * 4;
  do {
    uVar2 = *(undefined4 *)((long)&C_10_0 + lVar9);
    *(undefined4 *)(lVar7 + lVar1 + lVar9) = uVar2;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x14);
  puVar6[9] = lVar8 + 5;
  *(undefined4 *)(lVar7 + 0x10 + lVar1) = uVar2;
  *(undefined1 (*) [16])(puVar6 + 0xc) = (undefined1  [16])0x0;
  puVar6[0xe] = 0;
  lVar8 = (*Reallocate)(0,0,4);
  uVar4 = _UNK_001054b8;
  uVar3 = __LC35;
  lVar1 = puVar6[0xc];
  puVar6[0xd] = 1;
  puVar6[0xe] = lVar8;
  puVar6[0xc] = lVar1 + 1;
  *(undefined4 *)(lVar8 + lVar1 * 4) = 0xc039999a;
  uVar5 = _LC6;
  puVar6[0x14] = 0;
  puVar6[0x11] = uVar5;
  *(undefined4 *)(puVar6 + 0x15) = 0x3fb33333;
  puVar6[0xf] = uVar3;
  puVar6[0x10] = uVar4;
  *(undefined1 (*) [16])(puVar6 + 0x12) = (undefined1  [16])0x0;
  return puVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::WheeledVehicleControllerSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::WheeledVehicleControllerSettings::RestoreBinaryState
          (WheeledVehicleControllerSettings *this,StreamIn *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  StreamIn *pSVar5;
  StreamIn *pSVar6;
  StreamIn *pSVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::VehicleEngineSettings::RestoreBinaryState((StreamIn *)(this + 0x10));
  JPH::VehicleTransmissionSettings::RestoreBinaryState((StreamIn *)(this + 0x40));
  local_34 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  uVar8 = (ulong)local_34;
  if (*(ulong *)(this + 0x98) < uVar8) {
    pSVar6 = (StreamIn *)
             (*Reallocate)(*(undefined8 *)(this + 0xa0),*(ulong *)(this + 0x98) * 0x18,uVar8 * 0x18)
    ;
    *(ulong *)(this + 0x98) = uVar8;
    *(StreamIn **)(this + 0xa0) = pSVar6;
  }
  else {
    pSVar6 = *(StreamIn **)(this + 0xa0);
  }
  pSVar7 = pSVar6 + uVar8 * 0x18;
  pSVar5 = pSVar6 + *(long *)(this + 0x90) * 0x18;
  if (pSVar5 < pSVar7) {
    if (pSVar5 == (StreamIn *)0x0) goto LAB_001009e2;
    do {
      uVar4 = _LC27;
      uVar3 = _UNK_001054c8;
      uVar2 = _UNK_001054c4;
      uVar1 = __LC10;
      *(undefined8 *)pSVar5 = 0xffffffffffffffff;
      *(undefined4 *)(pSVar5 + 8) = uVar1;
      *(undefined4 *)(pSVar5 + 0xc) = uVar2;
      *(undefined4 *)(pSVar5 + 0x10) = uVar3;
      *(undefined4 *)(pSVar5 + 0x14) = uVar4;
LAB_001009e2:
      pSVar5 = pSVar5 + 0x18;
    } while (pSVar5 < pSVar7);
  }
  *(ulong *)(this + 0x90) = uVar8;
  for (; pSVar7 != pSVar6; pSVar6 = pSVar6 + 0x18) {
    JPH::VehicleDifferentialSettings::RestoreBinaryState(pSVar6);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::WheeledVehicleControllerSettings::GetRTTI() const */

undefined1 * JPH::WheeledVehicleControllerSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti,
                      "WheeledVehicleControllerSettings",0xb0,
                      GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
                      ,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti;
}



/* JPH::WheelSettingsWV::GetRTTI() const */

undefined1 * JPH::WheelSettingsWV::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettingsWV*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettingsWV*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettingsWV*)::rtti,"WheelSettingsWV",0xe0,
                      GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettingsWV*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettingsWV*)::rtti);
      return GetRTTIOfType(JPH::WheelSettingsWV*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettingsWV*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::WheeledVehicleControllerSettings*) */

undefined1 * JPH::GetRTTIOfType(WheeledVehicleControllerSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti,
                      "WheeledVehicleControllerSettings",0xb0,
                      GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::{lambda(void*)#1}::_FUN
                      ,WheeledVehicleControllerSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheeledVehicleControllerSettings*)::rtti;
}



/* JPH::WheeledVehicleControllerSettings::CastTo(JPH::RTTI const*) const */

void JPH::WheeledVehicleControllerSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((WheeledVehicleControllerSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::GetRTTIOfType(JPH::WheelSettingsWV*) */

undefined1 * JPH::GetRTTIOfType(WheelSettingsWV *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettingsWV*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettingsWV*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettingsWV*)::rtti,"WheelSettingsWV",0xe0,
                      GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda(void*)#1}::_FUN,
                      WheelSettingsWV::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettingsWV*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettingsWV*)::rtti);
      return GetRTTIOfType(JPH::WheelSettingsWV*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettingsWV*)::rtti;
}



/* JPH::WheelSettingsWV::CastTo(JPH::RTTI const*) const */

void JPH::WheelSettingsWV::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((WheelSettingsWV *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::WheelSettingsWV::WheelSettingsWV() */

void __thiscall JPH::WheelSettingsWV::WheelSettingsWV(WheelSettingsWV *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = _LC17;
  uVar9 = 3;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  uVar3 = _UNK_001054e8;
  uVar2 = __LC14;
  *(undefined8 *)(this + 0x70) = uVar4;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x38) = uVar3;
  uVar3 = _UNK_001054f8;
  uVar2 = __LC15;
  *(undefined ***)this = &PTR_GetRTTI_00105398;
  uVar4 = _LC19;
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x50) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar3;
  uVar3 = _UNK_00105508;
  uVar2 = __LC16;
  *(undefined8 *)(this + 0x94) = uVar4;
  uVar4 = _LC21;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x68) = uVar3;
  uVar3 = _UNK_00105518;
  uVar2 = __LC56;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x80) = uVar2;
  *(undefined8 *)(this + 0x88) = uVar3;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (WheelSettingsWV)0x0;
  this[0x90] = (WheelSettingsWV)0x0;
  *(undefined4 *)(this + 0x9c) = 0x3f9c61aa;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = uVar4;
  lVar5 = (*Reallocate)(0,0,0x18);
  lVar7 = *(long *)(this + 0xa0);
  *(undefined8 *)(this + 0xa8) = 3;
  *(long *)(this + 0xb0) = lVar5;
  uVar6 = lVar7 + 1;
  if (3 < uVar6) {
    uVar9 = 6;
    if (5 < uVar6) {
      uVar9 = uVar6;
    }
    lVar5 = (*Reallocate)(lVar5,0x18,uVar9 * 8);
    lVar7 = *(long *)(this + 0xa0);
    *(ulong *)(this + 0xa8) = uVar9;
    *(long *)(this + 0xb0) = lVar5;
    uVar6 = lVar7 + 1;
  }
  puVar1 = (undefined8 *)(lVar5 + lVar7 * 8);
  *(ulong *)(this + 0xa0) = uVar6;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  uVar8 = lVar7 + 2;
  if (uVar9 < uVar8) {
    uVar6 = uVar9 * 2;
    lVar7 = uVar9 * 8;
    uVar9 = uVar6;
    if (uVar6 < uVar8) {
      uVar9 = uVar8;
    }
    lVar5 = (*Reallocate)(lVar5,lVar7,uVar9 * 8);
    *(ulong *)(this + 0xa8) = uVar9;
    *(long *)(this + 0xb0) = lVar5;
    uVar6 = *(ulong *)(this + 0xa0);
    uVar8 = uVar6 + 1;
  }
  puVar1 = (undefined8 *)(lVar5 + uVar6 * 8);
  *(ulong *)(this + 0xa0) = uVar8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC22;
  }
  uVar6 = uVar6 + 2;
  if (uVar9 < uVar6) {
    uVar10 = uVar9 * 2;
    if (uVar9 * 2 < uVar6) {
      uVar10 = uVar6;
    }
    lVar5 = (*Reallocate)(lVar5,uVar9 * 8,uVar10 * 8);
    uVar8 = *(ulong *)(this + 0xa0);
    *(ulong *)(this + 0xa8) = uVar10;
    *(long *)(this + 0xb0) = lVar5;
    uVar6 = uVar8 + 1;
  }
  *(ulong *)(this + 0xa0) = uVar6;
  puVar1 = (undefined8 *)(lVar5 + uVar8 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC23;
  }
  uVar6 = *(ulong *)(this + 0xc0);
  lVar7 = *(long *)(this + 200);
  if (uVar6 < 3) {
    lVar7 = (*Reallocate)(lVar7,uVar6 << 3,0x18);
    uVar6 = 3;
    *(undefined8 *)(this + 0xc0) = 3;
    *(long *)(this + 200) = lVar7;
  }
  lVar5 = *(long *)(this + 0xb8);
  uVar9 = lVar5 + 1;
  uVar8 = uVar6;
  if (uVar6 < uVar9) {
    uVar8 = uVar6 * 2;
    if (uVar6 * 2 < uVar9) {
      uVar8 = uVar9;
    }
    lVar7 = (*Reallocate)(lVar7,uVar6 << 3,uVar8 * 8);
    lVar5 = *(long *)(this + 0xb8);
    *(ulong *)(this + 0xc0) = uVar8;
    *(long *)(this + 200) = lVar7;
    uVar9 = lVar5 + 1;
  }
  puVar1 = (undefined8 *)(lVar7 + lVar5 * 8);
  *(ulong *)(this + 0xb8) = uVar9;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  uVar6 = lVar5 + 2;
  uVar10 = uVar8;
  if (uVar8 < uVar6) {
    uVar10 = uVar8 * 2;
    if (uVar8 * 2 < uVar6) {
      uVar10 = uVar6;
    }
    lVar7 = (*Reallocate)(lVar7,uVar8 << 3,uVar10 * 8);
    *(ulong *)(this + 0xc0) = uVar10;
    *(long *)(this + 200) = lVar7;
    uVar9 = *(ulong *)(this + 0xb8);
    uVar6 = uVar9 + 1;
  }
  puVar1 = (undefined8 *)(lVar7 + uVar9 * 8);
  *(ulong *)(this + 0xb8) = uVar6;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC24;
  }
  uVar9 = uVar9 + 2;
  if (uVar10 < uVar9) {
    uVar8 = uVar10 * 2;
    if (uVar10 * 2 < uVar9) {
      uVar8 = uVar9;
    }
    lVar7 = (*Reallocate)(lVar7,uVar10 << 3,uVar8 * 8);
    uVar6 = *(ulong *)(this + 0xb8);
    *(ulong *)(this + 0xc0) = uVar8;
    *(long *)(this + 200) = lVar7;
    uVar9 = uVar6 + 1;
  }
  *(ulong *)(this + 0xb8) = uVar9;
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = _LC25;
  }
  return;
}



/* _FUN() */

WheelSettingsWV * JPH::GetRTTIOfType(JPH::WheelSettingsWV*)::{lambda()#1}::_FUN(void)

{
  WheelSettingsWV *this;
  
  this = (WheelSettingsWV *)(*Allocate)(0xe0);
  WheelSettingsWV::WheelSettingsWV(this);
  return this;
}



/* JPH::WheelWV::WheelWV(JPH::WheelSettingsWV const&) */

void __thiscall JPH::WheelWV::WheelWV(WheelWV *this,WheelSettingsWV *param_1)

{
  JPH::Wheel::Wheel((Wheel *)this,(WheelSettings *)param_1);
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined ***)this = &PTR__WheelWV_00105330;
  *(undefined1 (*) [16])(this + 0x194) = (undefined1  [16])0x0;
  return;
}



/* JPH::WheelWV::Update(unsigned int, float, JPH::VehicleConstraint const&) */

void __thiscall
JPH::WheelWV::Update(WheelWV *this,uint param_1,float param_2,VehicleConstraint *param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float local_78;
  uint local_5c;
  undefined1 local_58 [16];
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  fVar16 = _LC27;
  fVar9 = _LC29;
  puVar4 = *(undefined1 **)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = _LC27 - *(float *)(puVar4 + 0x98) * param_2;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 * *(float *)(this + 0x8c);
  *(float *)(this + 0x8c) = fVar13;
  local_78 = param_2 * fVar13 + *(float *)(this + 0x90);
  fVar12 = local_78;
  do {
    fVar12 = fVar12 - (fVar12 / fVar9) * fVar9;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(fVar12)) goto LAB_001015d8;
  do {
    *(float *)(this + 0x90) = fVar12;
    fVar9 = _LC28;
    if (*(long *)(this + 0x18) == 0) {
      *(undefined1 (*) [16])(this + 0x194) = (undefined1  [16])0x0;
LAB_0010156f:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pfVar1 = *(float **)(param_3 + 0x50);
    auVar10 = SUB1612((undefined1  [16])0x0,0);
    pfVar2 = *(float **)(pfVar1 + 0x12);
    if (*(char *)(pfVar1 + 0x1e) != '\0') {
      auVar10._0_4_ =
           ((*(float *)(this + 0x38) - pfVar1[2]) * pfVar2[5] -
           pfVar2[6] * (*(float *)(this + 0x34) - pfVar1[1])) + *pfVar2;
      auVar10._4_4_ =
           ((*(float *)(this + 0x30) - *pfVar1) * pfVar2[6] -
           pfVar2[4] * (*(float *)(this + 0x38) - pfVar1[2])) + pfVar2[1];
      auVar10._8_4_ =
           ((*(float *)(this + 0x34) - pfVar1[1]) * pfVar2[4] -
           pfVar2[5] * (*(float *)(this + 0x30) - *pfVar1)) + pfVar2[2];
    }
    fVar8 = auVar10._0_4_ - *(float *)(this + 0x40);
    local_78 = auVar10._4_4_ - *(float *)(this + 0x44);
    fVar11 = auVar10._8_4_ - *(float *)(this + 0x48);
    fVar12 = *(float *)(this + 0x58) * fVar11 +
             local_78 * *(float *)(this + 0x54) + *(float *)(this + 0x50) * fVar8 + 0.0;
    fVar8 = fVar8 - fVar12 * *(float *)(this + 0x50);
    local_78 = local_78 - fVar12 * *(float *)(this + 0x54);
    fVar11 = fVar11 - fVar12 * *(float *)(this + 0x58);
    fVar18 = *(float *)(this + 0x68) * fVar11 +
             *(float *)(this + 100) * local_78 + *(float *)(this + 0x60) * fVar8 + 0.0;
    fVar17 = (float)((uint)fVar18 & _LC30);
    fVar12 = fVar17;
    if (fVar17 <= _LC28) {
      fVar12 = _LC28;
    }
    fVar13 = (float)((uint)((fVar13 * *(float *)(puVar4 + 0x88) - fVar18) /
                           ((float)(_LC26 & -(uint)(fVar18 < 0.0) |
                                   ~-(uint)(fVar18 < 0.0) & (uint)fVar16) * fVar12)) & _LC30);
    *(float *)(this + 0x194) = fVar13;
    uVar5 = JPH::LinearCurve::GetValue(fVar13);
    fVar12 = fVar8 * fVar8 + 0.0;
    fVar13 = SQRT(fVar11 * fVar11 + local_78 * local_78 + fVar12);
    if (fVar13 < fVar9) {
      fVar9 = 0.0;
      fVar13 = 0.0;
    }
    else {
      fVar17 = fVar17 / fVar13;
      auVar14._4_4_ = _LC27;
      auVar14._0_4_ = _LC27;
      auVar14._8_4_ = _LC27;
      auVar14._12_4_ = _LC27;
      auVar7._0_4_ = (uint)fVar17 ^ _LC32 & (uint)fVar17;
      auVar7._4_4_ = (uint)fVar17 ^ _LC32 & (uint)fVar17;
      auVar7._8_4_ = (uint)fVar17 ^ _LC32 & (uint)fVar17;
      auVar7._12_4_ = (uint)fVar17 ^ _LC32 & (uint)fVar17;
      auVar7 = minps(auVar7,auVar14);
      fVar13 = auVar7._0_4_;
      auVar15._0_4_ = (_LC27 - fVar13) * _LC35;
      auVar15._4_4_ = (_LC27 - auVar7._4_4_) * _LC35;
      auVar15._8_4_ = (_LC27 - auVar7._8_4_) * _LC35;
      auVar15._12_4_ = (_LC27 - auVar7._12_4_) * _LC35;
      fVar12 = (float)((int)-(uint)(_LC35 < fVar13) >> 0x1f);
      auVar7 = sqrtps(ZEXT416((uint)fVar17),auVar15);
      fVar9 = (float)((uint)auVar15._0_4_ & (uint)fVar12 | ~(uint)fVar12 & (uint)(fVar13 * fVar13));
      fVar13 = (float)(auVar7._0_4_ & (uint)fVar12 | ~(uint)fVar12 & (uint)fVar13);
      fVar13 = ((((_LC37 * fVar9 + _LC39) * fVar9 + _LC41) * fVar9 + _LC43) * fVar9 + _LC45) * fVar9
               * fVar13 + fVar13;
      fVar13 = _LC47 - (float)(((uint)(_LC47 - (fVar13 + fVar13)) & (uint)fVar12 |
                               ~(uint)fVar12 & (uint)fVar13) ^ _LC32 & (uint)fVar17);
      fVar9 = _LC48 * fVar13;
    }
    *(float *)(this + 0x198) = fVar13;
    uVar6 = JPH::LinearCurve::GetValue(fVar9);
    local_48 = (code *)0x0;
    pcStack_40 = (code *)0x0;
    local_58 = (undefined1  [16])0x0;
    if (*(code **)(param_3 + 0x138) == (code *)0x0) {
      *(ulong *)(this + 0x19c) = CONCAT44(uVar6,uVar5);
    }
    else {
      puVar4 = local_58;
      (**(code **)(param_3 + 0x138))(puVar4,param_3 + 0x128,2);
      lVar3 = *(long *)(param_3 + 0x138);
      local_48 = *(code **)(param_3 + 0x138);
      pcStack_40 = *(code **)(param_3 + 0x140);
      *(ulong *)(this + 0x19c) = CONCAT44(uVar6,uVar5);
      if (lVar3 != 0) {
        local_5c = param_1;
        (*pcStack_40)(puVar4,&local_5c,this + 0x19c,this + 0x1a0,*(undefined8 *)(this + 0x18),
                      this + 0x14);
        if (local_48 != (code *)0x0) {
          (*local_48)(puVar4,puVar4,3);
        }
        goto LAB_0010156f;
      }
    }
    local_5c = param_1;
    std::__throw_bad_function_call();
LAB_001015d8:
    fmodf(local_78,_LC29);
    fVar16 = _LC27;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::WheeledVehicleController::WheeledVehicleController(JPH::WheeledVehicleControllerSettings
   const&, JPH::VehicleConstraint&) */

void __thiscall
JPH::WheeledVehicleController::WheeledVehicleController
          (WheeledVehicleController *this,WheeledVehicleControllerSettings *param_1,
          VehicleConstraint *param_2)

{
  undefined4 uVar1;
  WheeledVehicleControllerSettings WVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  
  *(VehicleConstraint **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__WheeledVehicleController_001053d8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  JPH::VehicleEngineSettings::VehicleEngineSettings((VehicleEngineSettings *)(this + 0x28));
  this[0x60] = (WheeledVehicleController)0x0;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x2c);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar10 = (*Reallocate)(0,0,0x14);
  lVar11 = *(long *)(this + 0x68);
  lVar18 = 0;
  *(undefined8 *)(this + 0x70) = 5;
  *(long *)(this + 0x78) = lVar10;
  lVar17 = lVar11 * 4;
  do {
    uVar1 = *(undefined4 *)((long)&C_10_0 + lVar18);
    *(undefined4 *)(lVar10 + lVar17 + lVar18) = uVar1;
    lVar18 = lVar18 + 4;
  } while (lVar18 != 0x14);
  *(long *)(this + 0x68) = lVar11 + 5;
  *(undefined4 *)(lVar10 + 0x10 + lVar17) = uVar1;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x90) = 0;
  lVar11 = (*Reallocate)(0,0,4);
  lVar17 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x88) = 1;
  *(long *)(this + 0x90) = lVar11;
  uVar8 = _UNK_001054b8;
  uVar15 = __LC35;
  *(long *)(this + 0x80) = lVar17 + 1;
  *(undefined4 *)(lVar11 + lVar17 * 4) = 0xc039999a;
  uVar9 = _LC6;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xa8) = uVar9;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x98) = uVar15;
  *(undefined8 *)(this + 0xa0) = uVar8;
  auVar21 = ZEXT416(_LC52);
  *(code **)(this + 0xf8) =
       std::
       _Function_handler<void(unsigned_int,float&,float&,float,float,float,float,float,float),JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned_int,float&,float&,float,float,float,float,float,float)#1}>
       ::_M_manager;
  *(code **)(this + 0x100) =
       std::
       _Function_handler<void(unsigned_int,float&,float&,float,float,float,float,float,float),JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned_int,float&,float&,float,float,float,float,float,float)#1}>
       ::_M_invoke;
  uVar8 = _UNK_001054f8;
  uVar15 = __LC15;
  *(undefined1 (*) [16])(this + 0xb4) = auVar21;
  *(undefined8 *)(this + 0x110) = uVar15;
  *(undefined8 *)(this + 0x118) = uVar8;
  fVar20 = *(float *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x28) = uVar15;
  fVar22 = (float)((ulong)uVar15 >> 0x20);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x120) = 0x3f000000;
  *(float *)(this + 0x30) = fVar20;
  if (param_1 + 0x20 != (WheeledVehicleControllerSettings *)(this + 0x38)) {
    lVar11 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    lVar17 = lVar10 + lVar11 * 8;
    uVar16 = lVar11 * 8 >> 3;
    if (*(ulong *)(this + 0x40) < uVar16) {
      uVar15 = (*Reallocate)(*(undefined8 *)(this + 0x48),*(ulong *)(this + 0x40) << 3);
      fVar20 = *(float *)(this + 0x30);
      *(undefined8 *)(this + 0x48) = uVar15;
      *(ulong *)(this + 0x40) = uVar16;
    }
    if (lVar10 != lVar17) {
      lVar11 = *(long *)(this + 0x38);
      lVar18 = lVar11 + 1;
      puVar19 = (undefined8 *)(*(long *)(this + 0x48) + lVar11 * 8);
      lVar17 = ((lVar17 - lVar10) - 8U >> 3) + lVar18;
      while( true ) {
        *(long *)(this + 0x38) = lVar18;
        if (puVar19 != (undefined8 *)0x0) {
          *puVar19 = *(undefined8 *)(lVar10 + lVar11 * -8 + -8 + lVar18 * 8);
        }
        puVar19 = puVar19 + 1;
        if (lVar17 == lVar18) break;
        lVar18 = lVar18 + 1;
      }
    }
    fVar22 = *(float *)(this + 0x2c);
  }
  if (fVar22 <= fVar20) {
    fVar20 = fVar22;
  }
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x38);
  WVar2 = param_1[0x40];
  *(float *)(this + 0x58) = fVar20;
  *(WheeledVehicleControllerSettings *)(this + 0x60) = WVar2;
  if ((WheeledVehicleControllerSettings *)(this + 0x68) != param_1 + 0x48) {
    lVar11 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(param_1 + 0x58);
    *(undefined8 *)(this + 0x68) = 0;
    lVar11 = lVar11 * 4;
    lVar17 = lVar10 + lVar11;
    if (*(ulong *)(this + 0x70) < (ulong)(lVar11 >> 2)) {
      uVar15 = (*Reallocate)(*(undefined8 *)(this + 0x78),*(ulong *)(this + 0x70) << 2,lVar11);
      *(undefined8 *)(this + 0x78) = uVar15;
      *(long *)(this + 0x70) = lVar11 >> 2;
    }
    if (lVar10 != lVar17) {
      lVar3 = *(long *)(this + 0x68);
      lVar4 = *(long *)(this + 0x78);
      lVar12 = 0;
      lVar18 = lVar3 * 4;
      do {
        uVar1 = *(undefined4 *)(lVar10 + lVar12);
        *(undefined4 *)(lVar4 + lVar18 + lVar12) = uVar1;
        lVar12 = lVar12 + 4;
      } while (lVar12 != lVar11);
      *(ulong *)(this + 0x68) = lVar3 + 1 + ((ulong)(lVar17 + (-4 - lVar10)) >> 2);
      *(undefined4 *)(lVar4 + (-4 - lVar10) + lVar17 + lVar18) = uVar1;
    }
  }
  if ((WheeledVehicleControllerSettings *)(this + 0x80) != param_1 + 0x60) {
    lVar11 = *(long *)(param_1 + 0x60);
    lVar10 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(this + 0x80) = 0;
    lVar11 = lVar11 * 4;
    lVar17 = lVar10 + lVar11;
    if (*(ulong *)(this + 0x88) < (ulong)(lVar11 >> 2)) {
      uVar15 = (*Reallocate)(*(undefined8 *)(this + 0x90),*(ulong *)(this + 0x88) << 2,lVar11);
      *(long *)(this + 0x88) = lVar11 >> 2;
      *(undefined8 *)(this + 0x90) = uVar15;
    }
    if (lVar10 != lVar17) {
      lVar3 = *(long *)(this + 0x80);
      lVar4 = *(long *)(this + 0x90);
      lVar12 = 0;
      lVar18 = lVar3 * 4;
      do {
        uVar1 = *(undefined4 *)(lVar10 + lVar12);
        *(undefined4 *)(lVar4 + lVar18 + lVar12) = uVar1;
        lVar12 = lVar12 + 4;
      } while (lVar11 - lVar12 != 0);
      *(ulong *)(this + 0x80) = lVar3 + 1 + ((ulong)(lVar17 + (-4 - lVar10)) >> 2);
      *(undefined4 *)(lVar17 + lVar4 + (-4 - lVar10) + lVar18) = uVar1;
    }
  }
  uVar16 = *(ulong *)(param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  uVar6 = *(undefined4 *)(param_1 + 0x80);
  uVar7 = *(undefined4 *)(param_1 + 0x84);
  lVar11 = *(long *)(this + 0xd8);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = uVar5;
  *(undefined4 *)(this + 0xa0) = uVar6;
  *(undefined4 *)(this + 0xa4) = uVar7;
  lVar17 = uVar16 * 0x18;
  if (*(ulong *)(this + 0xd0) < uVar16) {
    lVar11 = (*Reallocate)(lVar11,*(ulong *)(this + 0xd0) * 0x18,lVar17);
    *(ulong *)(this + 0xd0) = uVar16;
    *(long *)(this + 0xd8) = lVar11;
    puVar19 = (undefined8 *)(lVar11 + lVar17);
    puVar13 = (undefined8 *)(lVar11 + *(long *)(this + 200) * 0x18);
    if (puVar13 < puVar19) goto LAB_00101a3c;
    *(ulong *)(this + 200) = uVar16;
  }
  else {
    puVar19 = (undefined8 *)(lVar11 + lVar17);
    puVar13 = (undefined8 *)(lVar11 + *(long *)(this + 200) * 0x18);
    if (puVar13 < puVar19) {
LAB_00101a3c:
      if (puVar13 == (undefined8 *)0x0) goto LAB_00101a5a;
      do {
        uVar8 = _UNK_001054c8;
        uVar15 = __LC10;
        *puVar13 = 0xffffffffffffffff;
        puVar13[1] = uVar15;
        puVar13[2] = uVar8;
LAB_00101a5a:
        puVar13 = puVar13 + 3;
      } while (puVar13 < puVar19);
    }
    *(ulong *)(this + 200) = uVar16;
    if (uVar16 == 0) goto LAB_00101aaa;
  }
  lVar17 = *(long *)(param_1 + 0xa0);
  uVar14 = 0;
  do {
    puVar19 = (undefined8 *)(lVar17 + uVar14 * 0x18);
    uVar15 = puVar19[1];
    puVar13 = (undefined8 *)(lVar11 + uVar14 * 0x18);
    *puVar13 = *puVar19;
    puVar13[1] = uVar15;
    *(undefined8 *)(lVar11 + 0x10 + uVar14 * 0x18) = *(undefined8 *)(lVar17 + 0x10 + uVar14 * 0x18);
    uVar14 = (ulong)((int)uVar14 + 1);
  } while (uVar14 < uVar16);
LAB_00101aaa:
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xa8);
  return;
}



/* JPH::WheeledVehicleControllerSettings::ConstructController(JPH::VehicleConstraint&) const */

WheeledVehicleController * __thiscall
JPH::WheeledVehicleControllerSettings::ConstructController
          (WheeledVehicleControllerSettings *this,VehicleConstraint *param_1)

{
  WheeledVehicleController *this_00;
  
  this_00 = (WheeledVehicleController *)(*Allocate)(0x130);
  WheeledVehicleController::WheeledVehicleController(this_00,this,param_1);
  return this_00;
}



/* JPH::WheeledVehicleController::GetWheelSpeedAtClutch() const */

undefined8 __thiscall
JPH::WheeledVehicleController::GetWheelSpeedAtClutch(WheeledVehicleController *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  long local_18;
  long local_10 [2];
  undefined8 extraout_XMM0_Qb;
  
  plVar3 = *(long **)(this + 0xd8);
  local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = plVar3 + *(long *)(this + 200) * 3;
  if (plVar1 == plVar3) {
    fVar5 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    iVar4 = 0;
    do {
      local_18 = *plVar3;
      plVar2 = &local_18;
      do {
        if (-1 < (int)*plVar2) {
          iVar4 = iVar4 + 1;
          fVar8 = fVar8 + *(float *)(*(long *)(*(long *)(*(long *)(this + 0x10) + 0xa0) +
                                              (long)(int)*plVar2 * 8) + 0x8c) *
                          *(float *)(plVar3 + 1);
        }
        plVar2 = (long *)((long)plVar2 + 4);
      } while (plVar2 != local_10);
      plVar3 = plVar3 + 3;
    } while (plVar1 != plVar3);
    fVar5 = (float)iVar4;
  }
  fVar5 = (fVar8 / fVar5) * _LC53;
  auVar6._0_8_ = JPH::VehicleTransmission::GetCurrentRatio();
  auVar6._8_8_ = extraout_XMM0_Qb;
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_ * fVar5;
  if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar7._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::WheeledVehicleController::Draw(JPH::DebugRenderer*) const */

void __thiscall
JPH::WheeledVehicleController::Draw(WheeledVehicleController *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  Body *this_00;
  code *pcVar4;
  Vec3 *pVVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar16;
  undefined1 auVar15 [12];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [12];
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  float fVar34;
  int iVar35;
  undefined1 auVar33 [12];
  int iVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [12];
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
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
  fVar13 = *(float *)(lVar3 + 0x78);
  fVar49 = (float)(__LC13 ^ *(uint *)(this_00 + 0x10));
  fVar50 = (float)(_UNK_001054d4 ^ *(uint *)(this_00 + 0x14));
  fVar51 = (float)(_UNK_001054d8 ^ *(uint *)(this_00 + 0x18));
  fVar52 = (float)(_UNK_001054dc ^ *(uint *)(this_00 + 0x1c));
  fVar26 = (float)*(undefined8 *)(lVar3 + 0x70);
  fVar53 = (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar16 = *(float *)(this_00 + 0x10);
  fVar28 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar30 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar24 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  fVar46 = (fVar24 * fVar26 + fVar16 * 0.0 + fVar28 * fVar13) - fVar30 * fVar53;
  fVar31 = (fVar24 * fVar53 - fVar16 * fVar13) + fVar28 * 0.0 + fVar30 * fVar26;
  fVar22 = ((fVar24 * fVar13 + fVar16 * fVar53) - fVar28 * fVar26) + fVar30 * 0.0;
  fVar43 = ((fVar24 * 0.0 - fVar26 * fVar16) - fVar53 * fVar28) - fVar13 * fVar30;
  fVar13 = *(float *)(this + 0x118);
  fVar53 = *(float *)(this + 0x114);
  fVar34 = (fVar31 * fVar51 + fVar46 * fVar52 + fVar43 * fVar49) - fVar22 * fVar50;
  fVar23 = fVar22 * fVar49 + fVar31 * fVar52 + (fVar43 * fVar50 - fVar46 * fVar51);
  fVar27 = fVar22 * fVar52 + ((fVar46 * fVar50 + fVar43 * fVar51) - fVar31 * fVar49);
  fVar26 = (float)*(undefined8 *)(this + 0x110);
  local_2e8 = CONCAT44(fVar23,fVar34);
  uStack_2e0._0_4_ = fVar27;
  uStack_2e0._4_4_ = ((fVar43 * fVar52 - fVar46 * fVar49) - fVar31 * fVar50) - fVar22 * fVar51;
  fVar43 = (fVar16 * 0.0 + fVar24 * fVar26 + fVar28 * fVar13) - fVar30 * fVar53;
  fVar31 = (fVar24 * fVar53 - fVar16 * fVar13) + fVar28 * 0.0 + fVar30 * fVar26;
  fVar22 = ((fVar16 * fVar53 + fVar24 * fVar13) - fVar28 * fVar26) + fVar30 * 0.0;
  fVar53 = ((fVar24 * 0.0 - fVar16 * fVar26) - fVar28 * fVar53) - fVar30 * fVar13;
  auVar54 = Body::GetPosition(this_00);
  local_308 = auVar54._0_4_;
  fStack_304 = auVar54._4_4_;
  fVar13 = *(float *)(this_00 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x10) + 0x60);
  fVar16 = *(float *)(*(long *)(this + 0x10) + 0x68);
  fStack_300 = auVar54._8_4_;
  fStack_2fc = auVar54._12_4_;
  local_308 = ((fVar31 * fVar51 + fVar43 * fVar52 + fVar49 * fVar53) - fVar22 * fVar50) + local_308;
  fStack_304 = fVar22 * fVar49 + fVar31 * fVar52 + (fVar50 * fVar53 - fVar43 * fVar51) + fStack_304;
  fStack_300 = fVar22 * fVar52 + ((fVar43 * fVar50 + fVar51 * fVar53) - fVar31 * fVar49) +
               fStack_300;
  fStack_2fc = (((fVar52 * fVar53 - fVar43 * fVar49) - fVar31 * fVar50) - fVar22 * fVar51) +
               fStack_2fc;
  fVar50 = (float)uVar2;
  fVar24 = (float)(__LC13 ^ *(uint *)(this_00 + 0x10));
  fVar26 = (float)(_UNK_001054d4 ^ *(uint *)(this_00 + 0x14));
  fVar22 = (float)(_UNK_001054d8 ^ *(uint *)(this_00 + 0x18));
  fVar31 = (float)(_UNK_001054dc ^ *(uint *)(this_00 + 0x1c));
  fVar51 = (float)((ulong)uVar2 >> 0x20);
  fVar53 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar28 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar30 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  fVar49 = (fVar13 * 0.0 + fVar50 * fVar30 + fVar53 * fVar16) - fVar28 * fVar51;
  fVar46 = (fVar30 * fVar51 - fVar13 * fVar16) + fVar53 * 0.0 + fVar50 * fVar28;
  fVar43 = ((fVar30 * fVar16 + fVar13 * fVar51) - fVar50 * fVar53) + fVar28 * 0.0;
  fVar13 = ((fVar30 * 0.0 - fVar50 * fVar13) - fVar53 * fVar51) - fVar28 * fVar16;
  fVar16 = (fVar46 * fVar22 + fVar49 * fVar31 + fVar13 * fVar24) - fVar43 * fVar26;
  fVar53 = ((fVar13 * fVar31 - fVar49 * fVar24) - fVar46 * fVar26) - fVar43 * fVar22;
  fVar28 = fVar43 * fVar24 + fVar46 * fVar31 + (fVar13 * fVar26 - fVar49 * fVar22);
  fVar30 = fVar43 * fVar31 + ((fVar49 * fVar26 + fVar13 * fVar22) - fVar46 * fVar24);
  local_2f8 = (code *)CONCAT44(fVar28,fVar16);
  uStack_2f0._0_4_ = fVar30;
  uStack_2f0._4_4_ = fVar53;
  JPH::VehicleEngine::DrawRPM
            (CONCAT44(fStack_304,local_308),CONCAT44(fStack_2fc,fStack_300),local_2f8,uStack_2f0,
             local_2e8,uStack_2e0,this + 0x28,param_1);
  fVar13 = (float)JPH::VehicleTransmission::GetCurrentRatio();
  if (fVar13 != 0.0) {
    fVar13 = (float)GetWheelSpeedAtClutch(this);
    fVar24 = ((fVar13 * __LC56) / *(float *)(this + 0x30) - __LC57) * __LC58 * _LC35;
    fVar13 = *(float *)(this + 0x120);
    fVar46 = (float)(__LC59 & (uint)fVar24 ^ (uint)fVar24);
    fVar49 = (float)(_UNK_00105544 & (uint)fVar24 ^ (uint)fVar24);
    fVar50 = (float)(_UNK_00105548 & (uint)fVar24 ^ (uint)fVar24);
    fVar51 = (float)(_UNK_0010554c & (uint)fVar24 ^ (uint)fVar24);
    fVar26 = _LC55 * fVar34 * fVar13;
    fVar22 = _LC55 * fVar23 * fVar13;
    fVar13 = _LC55 * fVar27 * fVar13;
    iVar32 = (int)(_LC61 * fVar46 + _LC35);
    iVar35 = (int)(_LC61 * fVar49 + _LC35);
    iVar36 = (int)(_LC61 * fVar50 + _LC35);
    iVar37 = (int)(_LC61 * fVar51 + _LC35);
    fVar23 = (float)iVar32;
    fVar27 = (float)iVar35;
    fVar31 = (float)iVar36;
    fVar43 = (float)iVar37;
    fVar23 = ((fVar46 - _LC63 * fVar23) - _LC65 * fVar23) - fVar23 * _LC67;
    fVar27 = ((fVar49 - _LC63 * fVar27) - _LC65 * fVar27) - fVar27 * _LC67;
    fVar31 = ((fVar50 - _LC63 * fVar31) - _LC65 * fVar31) - fVar31 * _LC67;
    fVar43 = ((fVar51 - _LC63 * fVar43) - _LC65 * fVar43) - fVar43 * _LC67;
    fVar51 = fVar23 * fVar23;
    fVar52 = fVar27 * fVar27;
    fVar47 = fVar31 * fVar31;
    fVar48 = fVar43 * fVar43;
    fVar46 = _LC27 + (((_LC69 * fVar51 + _LC71) * fVar51 + _LC73) * fVar51 * fVar51 - _LC35 * fVar51
                     );
    fVar34 = _LC27 + (((_LC69 * fVar52 + _LC71) * fVar52 + _LC73) * fVar52 * fVar52 - _LC35 * fVar52
                     );
    fVar49 = _LC27 + (((_LC69 * fVar47 + _LC71) * fVar47 + _LC73) * fVar47 * fVar47 - _LC35 * fVar47
                     );
    fVar50 = _LC27 + (((_LC69 * fVar48 + _LC71) * fVar48 + _LC73) * fVar48 * fVar48 - _LC35 * fVar48
                     );
    uVar44 = (iVar32 << 0x1f) >> 0x1f;
    uVar29 = (iVar35 << 0x1f) >> 0x1f;
    uVar42 = (iVar36 << 0x1f) >> 0x1f;
    uVar45 = (iVar37 << 0x1f) >> 0x1f;
    fVar23 = ((_LC75 * fVar51 + _LC77) * fVar51 + _LC79) * fVar51 * fVar23 + fVar23;
    fVar27 = ((_LC75 * fVar52 + _LC77) * fVar52 + _LC79) * fVar52 * fVar27 + fVar27;
    fVar31 = ((_LC75 * fVar47 + _LC77) * fVar47 + _LC79) * fVar47 * fVar31 + fVar31;
    fVar43 = ((_LC75 * fVar48 + _LC77) * fVar48 + _LC79) * fVar48 * fVar43 + fVar43;
    fVar16 = (float)(__LC80 & (((uint)fVar23 & uVar44 | ~uVar44 & (uint)fVar46) ^
                              iVar32 << 0x1e & __LC59 ^ iVar32 << 0x1f) |
                    ~__LC80 & (uint)(fVar16 * (float)(((uint)fVar24 ^ iVar32 << 0x1e) & __LC59 ^
                                                     ((uint)fVar46 & uVar44 | ~uVar44 & (uint)fVar23
                                                     ))));
    fVar28 = (float)(_UNK_00105554 &
                     (((uint)fVar27 & uVar29 | ~uVar29 & (uint)fVar34) ^
                     iVar35 << 0x1e & _UNK_00105544 ^ iVar35 << 0x1f) |
                    ~_UNK_00105554 &
                    (uint)(fVar28 * (float)(((uint)fVar24 ^ iVar35 << 0x1e) & _UNK_00105544 ^
                                           ((uint)fVar34 & uVar29 | ~uVar29 & (uint)fVar27))));
    fVar30 = (float)(_UNK_00105558 &
                     (((uint)fVar31 & uVar42 | ~uVar42 & (uint)fVar49) ^
                     iVar36 << 0x1e & _UNK_00105548 ^ iVar36 << 0x1f) |
                    ~_UNK_00105558 &
                    (uint)(fVar30 * (float)(((uint)fVar24 ^ iVar36 << 0x1e) & _UNK_00105548 ^
                                           ((uint)fVar49 & uVar42 | ~uVar42 & (uint)fVar31))));
    fVar53 = (float)(_UNK_0010555c &
                     (((uint)fVar43 & uVar45 | ~uVar45 & (uint)fVar50) ^
                     iVar37 << 0x1e & _UNK_0010554c ^ iVar37 << 0x1f) |
                    ~_UNK_0010555c &
                    (uint)(fVar53 * (float)(((uint)fVar24 ^ iVar37 << 0x1e) & _UNK_0010554c ^
                                           ((uint)fVar50 & uVar45 | ~uVar45 & (uint)fVar43))));
    fVar24 = (float)(__LC13 ^ (uint)fVar16);
    fVar23 = (float)(_UNK_001054d4 ^ (uint)fVar28);
    fVar27 = (float)(_UNK_001054d8 ^ (uint)fVar30);
    fVar31 = (float)(_UNK_001054dc ^ (uint)fVar53);
    fVar34 = (fVar26 * fVar53 + fVar16 * 0.0 + fVar28 * fVar13) - fVar30 * fVar22;
    fVar46 = (fVar53 * fVar22 - fVar16 * fVar13) + fVar28 * 0.0 + fVar26 * fVar30;
    fVar43 = ((fVar53 * fVar13 + fVar16 * fVar22) - fVar26 * fVar28) + fVar30 * 0.0;
    fVar13 = ((fVar53 * 0.0 - fVar16 * fVar26) - fVar28 * fVar22) - fVar30 * fVar13;
    local_2f8 = (code *)CONCAT44(fVar43 * fVar24 +
                                 fVar46 * fVar31 + (fVar23 * fVar13 - fVar34 * fVar27) + fStack_304,
                                 ((fVar46 * fVar27 + fVar34 * fVar31 + fVar24 * fVar13) -
                                 fVar43 * fVar23) + local_308);
    uStack_2f0._0_4_ =
         fVar43 * fVar31 + ((fVar34 * fVar23 + fVar27 * fVar13) - fVar46 * fVar24) + fStack_300;
    uStack_2f0._4_4_ =
         (((fVar31 * fVar13 - fVar34 * fVar24) - fVar46 * fVar23) - fVar43 * fVar27) + fStack_2fc;
    (**(code **)(*(long *)param_1 + 0x10))
              (CONCAT44(fStack_304,local_308),CONCAT44(fStack_2fc,fStack_300),local_2f8,uStack_2f0,
               param_1,(undefined4)Color::sYellow);
  }
  auVar15 = SUB1612((undefined1  [16])0x0,0);
  if (this_00[0x78] != (Body)0x0) {
    auVar15 = SUB1612(**(undefined1 (**) [16])(this_00 + 0x48),0);
  }
  JPH::StringFormat_abi_cxx11_
            ((char *)&local_128,(double)*(float *)(this + 0x18),(double)*(float *)(this + 0x1c),
             (double)*(float *)(this + 0x20),(double)*(float *)(this + 0x24),
             (double)*(float *)(this + 0xb4),(double)*(float *)(this + 0x58),
             (double)SQRT(auVar15._8_4_ * auVar15._8_4_ +
                          auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_ + 0.0) *
             __LC81,
             "Forward: %.1f, Right: %.1f\nBrake: %.1f, HandBrake: %.1f\nGear: %d, Clutch: %.1f\nEngineRPM: %.0f, V: %.1f km/h"
             ,(ulong)*(uint *)(this + 0xb0));
  pcVar4 = *(code **)(*(long *)param_1 + 0x38);
  local_168 = local_120;
  local_160 = local_128;
  Body::GetPosition(this_00);
  (*pcVar4)(param_1,&local_168,(undefined4)Color::sWhite);
  fVar13 = (float)*(undefined8 *)(this_00 + 0x10);
  fVar53 = (float)*(undefined8 *)(this_00 + 0x18);
  fVar16 = (float)((ulong)*(undefined8 *)(this_00 + 0x10) >> 0x20);
  fVar24 = fVar13 + fVar13;
  fVar23 = fVar16 + fVar16;
  fVar28 = (float)((ulong)*(undefined8 *)(this_00 + 0x18) >> 0x20);
  auVar15 = *(undefined1 (*) [12])this_00;
  fVar22 = fVar53 * (fVar53 + fVar53);
  fVar30 = fVar28 * (fVar53 + fVar53);
  fVar43 = fVar53 * fVar23 - fVar24 * fVar28;
  fVar26 = fVar24 * fVar28 + fVar53 * fVar23;
  fVar31 = fVar53 * fVar24 + fVar23 * fVar28;
  fVar27 = (_LC27 - fVar13 * fVar24) - fVar16 * fVar23;
  fVar28 = fVar53 * fVar24 - fVar23 * fVar28;
  fVar53 = fVar16 * fVar24 + fVar30;
  fVar30 = fVar16 * fVar24 - fVar30;
  fVar13 = (_LC27 - fVar22) - fVar13 * fVar24;
  fVar22 = (_LC27 - fVar16 * fVar23) - fVar22;
  if (*(code **)(**(long **)(this_00 + 0x40) + 0x18) == Shape::GetCenterOfMass) {
    auVar25 = SUB1612((undefined1  [16])0x0,0);
    auVar33 = ZEXT812(0);
    auVar55 = ZEXT812(0);
  }
  else {
    auVar55 = (**(code **)(**(long **)(this_00 + 0x40) + 0x18))();
    local_308 = auVar55._0_4_;
    fStack_304 = auVar55._4_4_;
    local_308 = 0.0 - local_308;
    fStack_304 = 0.0 - fStack_304;
    auVar25._8_4_ = 0.0 - auVar55._8_4_;
    auVar55._4_4_ = local_308;
    auVar55._0_4_ = local_308;
    auVar55._8_4_ = local_308;
    auVar33._4_4_ = fStack_304;
    auVar33._0_4_ = fStack_304;
    auVar33._8_4_ = fStack_304;
    auVar25._4_4_ = auVar25._8_4_;
    auVar25._0_4_ = auVar25._8_4_;
  }
  uVar44 = __LC59;
  fVar7 = _LC27;
  fVar48 = _LC35;
  fVar47 = _LC79;
  fVar52 = _LC77;
  fVar51 = _LC75;
  fVar50 = _LC73;
  fVar49 = _LC71;
  fVar34 = _LC69;
  fVar46 = _LC67;
  fVar23 = _LC65;
  fVar24 = _LC63;
  fVar16 = _LC61;
  puVar12 = *(undefined8 **)(*(long *)(this + 0x10) + 0xa0);
  puVar1 = puVar12 + *(long *)(*(long *)(this + 0x10) + 0x90);
  if (puVar1 != puVar12) {
    do {
      pVVar5 = (Vec3 *)*puVar12;
      lVar3 = *(long *)(pVVar5 + 8);
      fVar18 = *(float *)(lVar3 + 0x10);
      fVar41 = *(float *)(lVar3 + 0x14);
      fVar21 = *(float *)(lVar3 + 0x18);
      fVar14 = fVar21 * fVar31 + fVar18 * fVar22 + fVar41 * fVar30 +
               auVar55._0_4_ * fVar22 + auVar33._0_4_ * fVar30 + auVar25._0_4_ * fVar31 +
               auVar15._0_4_;
      fVar17 = fVar21 * fVar43 + fVar18 * fVar53 + fVar41 * fVar13 +
               auVar55._4_4_ * fVar53 + auVar33._4_4_ * fVar13 + auVar25._4_4_ * fVar43 +
               auVar15._4_4_;
      fVar19 = fVar21 * fVar27 + fVar18 * fVar28 + fVar41 * fVar26 +
               auVar55._8_4_ * fVar28 + auVar33._8_4_ * fVar26 + auVar25._8_4_ * fVar27 +
               auVar15._8_4_;
      fVar20 = fVar21 * 0.0 + fVar18 * 0.0 + fVar41 * 0.0 + 1.0;
      fVar18 = *(float *)(lVar3 + 0x30);
      fVar41 = *(float *)(lVar3 + 0x34);
      fVar21 = *(float *)(lVar3 + 0x38);
      fVar38 = fVar18 * fVar22 + fVar41 * fVar30 + fVar21 * fVar31;
      fVar39 = fVar18 * fVar53 + fVar41 * fVar13 + fVar21 * fVar43;
      fVar40 = fVar18 * fVar28 + fVar41 * fVar26 + fVar21 * fVar27;
      fVar41 = fVar18 * 0.0 + fVar41 * 0.0 + fVar21 * 0.0;
      fVar18 = *(float *)(lVar3 + 0x70);
      local_2f8 = (code *)CONCAT44(fVar18 * fVar39 + fVar17,fVar18 * fVar38 + fVar14);
      uStack_2f0._0_4_ = fVar18 * fVar40 + fVar19;
      uStack_2f0._4_4_ = fVar18 * fVar41 + fVar20;
      fVar18 = *(float *)(lVar3 + 0x74);
      (**(code **)(*(long *)param_1 + 0x10))
                (CONCAT44(fVar17,fVar14),CONCAT44(fVar20,fVar19),local_2f8,uStack_2f0,param_1,
                 (undefined4)Color::sRed);
      (**(code **)(*(long *)param_1 + 0x10))
                (local_2f8,uStack_2f0,CONCAT44(fVar18 * fVar39 + fVar17,fVar18 * fVar38 + fVar14),
                 CONCAT44(fVar18 * fVar41 + fVar20,fVar18 * fVar40 + fVar19),param_1,
                 (undefined4)Color::sGreen);
      fVar18 = *(float *)(pVVar5 + 0x20);
      puVar9 = &Color::sGreen;
      fVar14 = fVar18 * fVar38 + fVar14;
      fVar17 = fVar18 * fVar39 + fVar17;
      fVar19 = fVar18 * fVar40 + fVar19;
      fVar20 = fVar18 * fVar41 + fVar20;
      uVar2 = CONCAT44(fVar17,fVar14);
      uVar6 = CONCAT44(fVar20,fVar19);
      if (fVar18 < *(float *)(lVar3 + 0x70)) {
        puVar9 = &Color::sRed;
      }
      JPH::DebugRenderer::DrawMarker(uVar2,param_1,*(undefined4 *)puVar9);
      JPH::VehicleConstraint::GetWheelLocalBasis
                (*(Wheel **)(this + 0x10),pVVar5,(Vec3 *)&local_158,(Vec3 *)&local_148);
      fVar18 = local_158 * fVar53;
      fVar41 = local_158 * fVar28;
      fVar21 = local_158 * 0.0;
      fVar38 = fStack_154 * fVar26;
      fVar39 = fStack_154 * 0.0;
      fStack_14c = fStack_150 * 0.0;
      local_158 = local_158 * fVar22 + fStack_154 * fVar30 + fStack_150 * fVar31;
      fStack_154 = fVar18 + fStack_154 * fVar13 + fStack_150 * fVar43;
      fStack_150 = fVar41 + fVar38 + fStack_150 * fVar27;
      fStack_14c = fVar21 + fVar39 + fStack_14c;
      fVar18 = local_148 * fVar53;
      fVar41 = local_148 * fVar28;
      fVar21 = local_148 * 0.0;
      fVar38 = fStack_144 * fVar26;
      fVar39 = fStack_144 * 0.0;
      fStack_13c = fStack_140 * 0.0;
      local_148 = fStack_140 * fVar31 + local_148 * fVar22 + fStack_144 * fVar30;
      fStack_144 = fStack_140 * fVar43 + fVar18 + fStack_144 * fVar13;
      fStack_140 = fStack_140 * fVar27 + fVar41 + fVar38;
      fStack_13c = fStack_13c + fVar21 + fVar39;
      fVar18 = local_138 * fVar53;
      fVar41 = local_138 * fVar28;
      fVar21 = local_138 * 0.0;
      fVar38 = fStack_134 * fVar26;
      fVar39 = fStack_134 * 0.0;
      fStack_12c = fStack_130 * 0.0;
      local_138 = fStack_130 * fVar31 + local_138 * fVar22 + fStack_134 * fVar30;
      fStack_134 = fStack_130 * fVar43 + fVar18 + fStack_134 * fVar13;
      fStack_130 = fStack_130 * fVar27 + fVar41 + fVar38;
      fStack_12c = fStack_12c + fVar21 + fVar39;
      fVar18 = *(float *)(lVar3 + 0x40);
      fVar41 = *(float *)(lVar3 + 0x44);
      fVar21 = *(float *)(lVar3 + 0x48);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,CONCAT44(fStack_154 + fVar17,local_158 + fVar14),
                 CONCAT44(fStack_14c + fVar20,fStack_150 + fVar19),param_1,(undefined4)Color::sRed);
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,CONCAT44(fVar17 + fStack_144,fVar14 + local_148),
                 CONCAT44(fVar20 + fStack_13c,fVar19 + fStack_140),param_1,(undefined4)Color::sGreen
                );
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,CONCAT44(fVar17 + fStack_134,fVar14 + local_138),
                 CONCAT44(fVar20 + fStack_12c,fVar19 + fStack_130),param_1,(undefined4)Color::sBlue)
      ;
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar2,uVar6,
                 CONCAT44(fVar18 * fVar53 + fVar41 * fVar13 + fVar21 * fVar43 + fVar17,
                          fVar18 * fVar22 + fVar41 * fVar30 + fVar21 * fVar31 + fVar14),
                 CONCAT44(fVar18 * 0.0 + fVar41 * 0.0 + fVar21 * 0.0 + fVar20,
                          fVar18 * fVar28 + fVar41 * fVar26 + fVar21 * fVar27 + fVar19),param_1,
                 (undefined4)Color::sYellow);
      uVar29 = *(uint *)(pVVar5 + 0x90) ^ _LC32;
      fVar41 = (float)(uVar44 & uVar29 ^ uVar29);
      lVar10 = 0;
      local_cc = 0x3f800000;
      iVar32 = (int)(fVar16 * fVar41 + fVar48);
      fVar18 = (float)iVar32;
      fVar18 = ((fVar41 - fVar24 * fVar18) - fVar23 * fVar18) - fVar18 * fVar46;
      fVar21 = fVar18 * fVar18;
      fVar41 = (((fVar34 * fVar21 + fVar49) * fVar21 + fVar50) * fVar21 * fVar21 - fVar48 * fVar21)
               + fVar7;
      uVar42 = (iVar32 << 0x1f) >> 0x1f;
      local_b8 = __LC15;
      uStack_b0 = _UNK_001054f8;
      local_98 = CONCAT44(_UNK_00105564,__LC83);
      uStack_90 = CONCAT44(_UNK_0010556c,_UNK_00105568);
      fVar18 = ((fVar51 * fVar21 + fVar52) * fVar21 + fVar47) * fVar21 * fVar18 + fVar18;
      local_a8._0_4_ =
           (uVar29 ^ iVar32 << 0x1e) & uVar44 ^ ((uint)fVar41 & uVar42 | ~uVar42 & (uint)fVar18);
      uVar29 = ((uint)fVar18 & uVar42 | ~uVar42 & (uint)fVar41) ^
               iVar32 << 0x1e & uVar44 ^ iVar32 << 0x1f;
      local_a8._4_4_ = 0;
      register0x000012c4 = 0;
      local_c8 = uVar29;
      local_a8._8_4_ = uVar29;
      local_a8._12_4_ = 0;
      register0x000012c8 = local_a8._0_4_ ^ _LC32;
      register0x000012cc = 0;
      do {
        fVar18 = *(float *)(local_c8 + lVar10);
        fVar41 = *(float *)(local_c8 + lVar10 + 4);
        fVar21 = *(float *)(local_c8 + lVar10 + 8);
        fVar38 = *(float *)(local_c8 + lVar10 + 0xc);
        *(float *)((long)&local_88 + lVar10) =
             fVar38 * __LC83 + fVar18 * local_148 + fVar41 * local_138 + fVar21 * local_158;
        *(float *)((long)&local_88 + lVar10 + 4) =
             fVar38 * _UNK_00105564 +
             fVar18 * fStack_144 + fVar41 * fStack_134 + fVar21 * fStack_154;
        *(float *)((long)&uStack_80 + lVar10) =
             fVar38 * _UNK_00105568 +
             fVar18 * fStack_140 + fVar41 * fStack_130 + fVar21 * fStack_150;
        *(float *)((long)&uStack_80 + lVar10 + 4) =
             fVar38 * _UNK_0010556c + fVar18 * 0.0 + fVar41 * 0.0 + fVar21 * 0.0;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x40);
      puVar9 = &Color::sGreen;
      if (*(float *)(pVVar5 + 0x20) <= *(float *)(lVar3 + 0x70)) {
        puVar9 = &Color::sRed;
      }
      local_108 = local_88;
      uStack_100 = uStack_80;
      local_f8 = local_78;
      uStack_f0 = uStack_70;
      local_e8 = local_68;
      uStack_e0 = uStack_60;
      local_d8 = fVar14;
      local_d4 = fVar17;
      local_d0 = fVar19;
      JPH::DebugRenderer::DrawCylinder
                (fVar48 * *(float *)(lVar3 + 0x8c),param_1,&local_108,*(undefined4 *)puVar9,1,1);
      plVar11 = DebugRenderer::sInstance;
      if (*(int *)(pVVar5 + 0x10) == -1) {
        local_2f8 = *(code **)(*DebugRenderer::sInstance + 0x38);
        JPH::StringFormat_abi_cxx11_((char *)&local_88,(double)*(float *)(pVVar5 + 0x8c),"W: %.1f");
        uVar8 = (undefined4)Color::sRed;
      }
      else {
        local_2f8 = (code *)CONCAT44(*(float *)(pVVar5 + 0x54) + *(float *)(pVVar5 + 0x34),
                                     *(float *)(pVVar5 + 0x50) + *(float *)(pVVar5 + 0x30));
        uStack_2f0._0_4_ = *(float *)(pVVar5 + 0x58) + *(float *)(pVVar5 + 0x38);
        uStack_2f0._4_4_ = *(float *)(pVVar5 + 0x5c) + *(float *)(pVVar5 + 0x3c);
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),local_2f8,
                   uStack_2f0,param_1,(undefined4)Color::sYellow);
        local_2f8 = (code *)CONCAT44(*(float *)(pVVar5 + 100) + *(float *)(pVVar5 + 0x34),
                                     *(float *)(pVVar5 + 0x60) + *(float *)(pVVar5 + 0x30));
        uStack_2f0._0_4_ = *(float *)(pVVar5 + 0x68) + *(float *)(pVVar5 + 0x38);
        uStack_2f0._4_4_ = *(float *)(pVVar5 + 0x6c) + *(float *)(pVVar5 + 0x3c);
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),local_2f8,
                   uStack_2f0,param_1,(undefined4)Color::sRed);
        local_2f8 = (code *)CONCAT44(*(float *)(pVVar5 + 0x74) + *(float *)(pVVar5 + 0x34),
                                     *(float *)(pVVar5 + 0x70) + *(float *)(pVVar5 + 0x30));
        uStack_2f0._0_4_ = *(float *)(pVVar5 + 0x78) + *(float *)(pVVar5 + 0x38);
        uStack_2f0._4_4_ = *(float *)(pVVar5 + 0x7c) + *(float *)(pVVar5 + 0x3c);
        (**(code **)(*(long *)param_1 + 0x10))
                  (*(undefined8 *)(pVVar5 + 0x30),*(undefined8 *)(pVVar5 + 0x38),local_2f8,
                   uStack_2f0,param_1,(undefined4)Color::sBlue);
        plVar11 = DebugRenderer::sInstance;
        local_2f8 = *(code **)(*DebugRenderer::sInstance + 0x38);
        JPH::StringFormat_abi_cxx11_
                  ((char *)&local_88,(double)*(float *)(pVVar5 + 0x8c),
                   (double)*(float *)(pVVar5 + 0x20),(double)(_LC48 * *(float *)(pVVar5 + 0x198)),
                   (double)*(float *)(pVVar5 + 0x194),(double)*(float *)(pVVar5 + 0x1a0),
                   (double)*(float *)(pVVar5 + 0x19c),
                   "W: %.1f, S: %.2f\nSlipLateral: %.1f, SlipLong: %.2f\nFrLateral: %.1f, FrLong: %.1f"
                  );
        uVar8 = (undefined4)Color::sWhite;
      }
      local_168 = uStack_80;
      local_160 = local_88;
      (*local_2f8)(CONCAT44(fVar17,fVar14),CONCAT44(fVar20,fVar19),plVar11,&local_168,uVar8);
      if (local_88 != &local_78) {
        (*Free)();
      }
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
  }
  if (local_128 != local_118) {
    (*Free)();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::WheeledVehicleController::PostCollide(float, JPH::PhysicsSystem&) */

void JPH::WheeledVehicleController::PostCollide(float param_1,PhysicsSystem *param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  VehicleConstraint *pVVar7;
  long lVar8;
  undefined8 uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  float *pfVar17;
  long *plVar18;
  VehicleConstraint *pVVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  long *local_130;
  long *local_128;
  float local_8c;
  undefined8 local_88;
  undefined1 local_80 [16];
  long local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  float *local_50;
  long local_40;
  
  pVVar7 = *(VehicleConstraint **)(param_2 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = *(ulong *)(pVVar7 + 0x90);
  if ((int)uVar24 != 0) {
    pVVar19 = pVVar7;
    uVar22 = 0;
    while( true ) {
      WheelWV::Update(*(WheelWV **)(*(long *)(pVVar7 + 0xa0) + uVar22 * 8),(uint)uVar22,param_1,
                      pVVar19);
      if (uVar22 + 1 == (uVar24 & 0xffffffff)) break;
      pVVar19 = *(VehicleConstraint **)(param_2 + 0x10);
      uVar22 = uVar22 + 1;
    }
  }
  fVar37 = (float)(*(uint *)(param_2 + 0x18) & _LC30);
  if (param_2[0x60] == (PhysicsSystem)0x0) {
    fVar37 = fVar37 * *(float *)(param_2 + 0xb4);
  }
  JPH::VehicleEngine::ApplyDamping(param_1);
  fVar40 = *(float *)(param_2 + 0x28);
  fVar35 = (float)JPH::LinearCurve::GetValue
                            (*(float *)(param_2 + 0x58) / *(float *)(param_2 + 0x30));
  fVar35 = fVar35 * fVar37 * fVar40;
  uVar24 = *(ulong *)(param_2 + 200);
  local_130 = (long *)0x0;
  if (uVar24 == 0) {
LAB_0010337c:
    uVar24 = *(ulong *)(pVVar7 + 0x90);
    plVar28 = local_130;
    if (uVar24 == 0) {
      plVar18 = (long *)0x0;
      JPH::VehicleTransmission::GetCurrentRatio();
      local_128 = (long *)0x0;
    }
    else {
LAB_00104062:
      plVar18 = (long *)(*Reallocate)(0,0,uVar24 * 0x18);
LAB_0010380c:
      fVar37 = (float)JPH::VehicleTransmission::GetCurrentRatio();
      local_128 = plVar18;
      if (local_130 != plVar28) goto LAB_00103842;
    }
LAB_001033b8:
    JPH::VehicleEngine::ApplyTorque(fVar35,param_1);
    fVar40 = *(float *)(param_2 + 0x58);
LAB_001033da:
    plVar28 = plVar18;
    if (plVar18 == local_128) goto LAB_00103441;
  }
  else {
    local_130 = (long *)(*Reallocate)(0,0,uVar24 * 0x18);
    piVar23 = *(int **)(param_2 + 0xd8);
    piVar2 = piVar23 + *(long *)(param_2 + 200) * 6;
    if (piVar23 == piVar2) goto LAB_0010337c;
    uVar22 = 0;
    fVar37 = _LC86;
    fVar40 = 0.0;
    do {
      iVar6 = piVar23[1];
      uVar33 = uVar24;
      if (*piVar23 == -1) {
        uVar32 = uVar22;
        fVar36 = fVar40;
        if (iVar6 != -1) {
          lVar16 = *(long *)(pVVar7 + 0xa0);
          fVar36 = 0.0;
          iVar12 = 0;
LAB_001035b2:
          iVar11 = iVar12 + 1;
          fVar36 = fVar36 + *(float *)(*(long *)(lVar16 + (long)iVar6 * 8) + 0x8c);
          goto LAB_001035c1;
        }
      }
      else {
        lVar16 = *(long *)(pVVar7 + 0xa0);
        iVar11 = 1;
        iVar12 = 1;
        fVar36 = *(float *)(*(long *)(lVar16 + (long)*piVar23 * 8) + 0x8c) + 0.0;
        if (iVar6 != -1) goto LAB_001035b2;
LAB_001035c1:
        iVar6 = piVar23[5];
        uVar32 = uVar22 + 1;
        fVar41 = (float)((uint)((fVar36 * (float)piVar23[2]) / (float)iVar11) & _LC30);
        if (uVar24 < uVar32) {
          uVar33 = uVar32;
          if (uVar32 <= uVar24 * 2) {
            uVar33 = uVar24 * 2;
          }
          local_130 = (long *)(*Reallocate)(local_130,uVar24 * 0x18,uVar33 * 0x18);
        }
        fVar36 = fVar41;
        if (fVar41 <= fVar40) {
          fVar36 = fVar40;
        }
        plVar28 = local_130 + uVar22 * 3;
        fVar40 = fVar41;
        if (fVar37 <= fVar41) {
          fVar40 = fVar37;
        }
        fVar37 = fVar40;
        *plVar28 = (long)piVar23;
        *(undefined4 *)(plVar28 + 2) = 0;
        plVar28[1] = CONCAT44(iVar6,fVar41);
      }
      piVar23 = piVar23 + 6;
      uVar24 = uVar33;
      uVar22 = uVar32;
      fVar40 = fVar36;
    } while (piVar2 != piVar23);
    plVar28 = local_130 + uVar32 * 3;
    fVar40 = *(float *)(param_2 + 0xe0);
    if ((_LC86 <= fVar40) || (fVar36 <= fVar37)) {
LAB_001037f8:
      uVar24 = *(ulong *)(pVVar7 + 0x90);
      plVar18 = (long *)0x0;
      if (uVar24 != 0) goto LAB_00104062;
      goto LAB_0010380c;
    }
    if (local_130 != plVar28) {
      fVar40 = 0.0;
      plVar18 = local_130;
      do {
        plVar14 = plVar18 + 3;
        fVar41 = (fVar36 - *(float *)(plVar18 + 1)) / (fVar36 - fVar37);
        *(float *)(plVar18 + 2) = fVar41;
        fVar40 = fVar40 + fVar41;
        plVar15 = local_130;
        plVar18 = plVar14;
      } while (plVar14 != plVar28);
      do {
        plVar18 = plVar15 + 3;
        *(float *)(plVar15 + 2) = *(float *)(plVar15 + 2) / fVar40;
        plVar15 = plVar18;
      } while (plVar28 != plVar18);
      fVar40 = *(float *)(param_2 + 0xe0);
    }
    if (_LC28 < fVar37) {
      if (fVar36 <= _LC28) {
        fVar36 = _LC28;
      }
LAB_0010435c:
      fVar37 = (fVar36 / fVar37 - _LC27) / (fVar40 - _LC27);
      if (fVar37 <= _LC27) goto LAB_00103777;
      fVar40 = 0.0;
      fVar37 = _LC27;
    }
    else {
      fVar37 = _LC28;
      if (_LC28 < fVar36) goto LAB_0010435c;
      fVar37 = 0.0 / (fVar40 - _LC27);
LAB_00103777:
      fVar40 = _LC27 - fVar37;
    }
    plVar18 = local_130;
    if (local_130 == plVar28) goto LAB_001037f8;
    do {
      plVar15 = plVar18 + 3;
      *(float *)((long)plVar18 + 0xc) =
           *(float *)((long)plVar18 + 0xc) * fVar40 + *(float *)(plVar18 + 2) * fVar37;
      plVar18 = plVar15;
    } while (plVar15 != plVar28);
    uVar24 = *(ulong *)(pVVar7 + 0x90);
    if (uVar24 != 0) goto LAB_00104062;
    plVar18 = (long *)0x0;
    fVar37 = (float)JPH::VehicleTransmission::GetCurrentRatio();
LAB_00103842:
    plVar15 = local_130;
    uVar22 = 0;
    do {
      while( true ) {
        uVar9 = *(undefined8 *)*plVar15;
        auStack_60 = *(undefined1 (*) [16])((undefined8 *)*plVar15 + 1);
        local_68._0_4_ = (float)uVar9;
        local_68._4_4_ = (int)((ulong)uVar9 >> 0x20);
        local_68 = uVar9;
        if ((float)local_68 == -NAN) break;
        lVar29 = *(long *)(*(long *)(pVVar7 + 0xa0) + (long)(int)(float)local_68 * 8);
        if (local_68._4_4_ == -1) {
          if (lVar29 != 0) {
LAB_00103f58:
            fVar40 = fVar37 * (float)auStack_60._0_4_;
            uVar3 = *(undefined4 *)((long)plVar15 + 0xc);
            uVar33 = uVar22 + 1;
            if (uVar24 < uVar33) {
              uVar32 = uVar33;
              if (uVar33 <= uVar24 * 2) {
                uVar32 = uVar24 * 2;
              }
              plVar18 = (long *)(*Reallocate)(plVar18,uVar24 * 0x18,uVar32 * 0x18);
              uVar24 = uVar32;
            }
            plVar14 = plVar18 + uVar22 * 3;
            *plVar14 = lVar29;
            *(undefined4 *)(plVar14 + 2) = 0;
            plVar14[1] = CONCAT44(uVar3,fVar40);
            uVar22 = uVar33;
          }
        }
        else {
          lVar16 = *(long *)(*(long *)(pVVar7 + 0xa0) + (long)local_68._4_4_ * 8);
          fVar40 = fVar37 * (float)auStack_60._0_4_;
          if (lVar29 != 0) {
            if (lVar16 != 0) {
              JPH::VehicleDifferentialSettings::CalculateTorqueRatio
                        (*(float *)(lVar29 + 0x8c),*(float *)(lVar16 + 0x8c),(float *)&local_68,
                         &local_8c);
              fVar36 = *(float *)((long)plVar15 + 0xc);
              uVar33 = uVar22 + 1;
              fVar41 = local_8c * fVar36;
              uVar32 = uVar24;
              if (uVar24 < uVar33) {
                uVar32 = uVar33;
                if (uVar33 <= uVar24 * 2) {
                  uVar32 = uVar24 * 2;
                }
                plVar18 = (long *)(*Reallocate)(plVar18,uVar24 * 0x18,uVar32 * 0x18);
                fVar36 = *(float *)((long)plVar15 + 0xc);
              }
              uVar33 = uVar22 + 2;
              plVar14 = plVar18 + uVar22 * 3;
              *(undefined4 *)(plVar14 + 2) = 0;
              plVar14[1] = CONCAT44(fVar41,fVar40);
              fVar36 = fVar36 * (float)local_88;
              *plVar14 = lVar29;
              uVar24 = uVar32;
              if (uVar32 < uVar33) {
                uVar24 = uVar33;
                if (uVar33 <= uVar32 * 2) {
                  uVar24 = uVar32 * 2;
                }
                plVar18 = (long *)(*Reallocate)(plVar18,uVar32 * 0x18,uVar24 * 0x18);
              }
              plVar14 = plVar18 + uVar22 * 3 + 3;
              *plVar14 = lVar16;
              *(undefined4 *)(plVar14 + 2) = 0;
              plVar14[1] = CONCAT44(fVar36,fVar40);
              uVar22 = uVar33;
              goto LAB_001039f8;
            }
            if (lVar29 != 0) goto LAB_00103f58;
          }
          if (lVar16 != 0) goto LAB_00103a64;
        }
LAB_001039f8:
        plVar15 = plVar15 + 3;
        if (plVar28 == plVar15) goto LAB_00103af0;
      }
      lVar16 = (long)local_68._4_4_;
      bVar34 = local_68._4_4_ == -1;
      if ((bVar34) || (lVar16 = *(long *)(*(long *)(pVVar7 + 0xa0) + lVar16 * 8), lVar16 == 0))
      goto LAB_001039f8;
LAB_00103a64:
      fVar40 = fVar37 * (float)auStack_60._0_4_;
      uVar3 = *(undefined4 *)((long)plVar15 + 0xc);
      uVar33 = uVar22 + 1;
      uVar32 = uVar24;
      if (uVar24 < uVar33) {
        uVar32 = uVar33;
        if (uVar33 <= uVar24 * 2) {
          uVar32 = uVar24 * 2;
        }
        plVar18 = (long *)(*Reallocate)(plVar18,uVar24 * 0x18,uVar32 * 0x18);
      }
      plVar15 = plVar15 + 3;
      plVar14 = plVar18 + uVar22 * 3;
      *plVar14 = lVar16;
      *(undefined4 *)(plVar14 + 2) = 0;
      plVar14[1] = CONCAT44(uVar3,fVar40);
      uVar22 = uVar33;
      uVar24 = uVar32;
    } while (plVar28 != plVar15);
LAB_00103af0:
    local_128 = plVar18 + uVar22 * 3;
    if (uVar22 == 0) goto LAB_001033b8;
    iVar6 = (int)uVar22;
    uVar31 = iVar6 + 1;
    local_70 = 0;
    uVar24 = CONCAT44(0,uVar31 * uVar31);
    local_88 = CONCAT44(uVar31,uVar31);
    local_80 = (undefined1  [16])0x0;
    local_80._8_8_ = 0;
    if (uVar24 != 0) {
      local_70 = (*Reallocate)(0,0,uVar24 * 4);
      local_80._12_4_ = 0;
      local_80._8_4_ = uVar31 * uVar31;
    }
    lVar16 = local_70;
    local_80._0_8_ = uVar24;
    uVar24 = CONCAT44(0,uVar31);
    local_68 = CONCAT44(1,uVar31);
    local_50 = (float *)0x0;
    auStack_60 = (undefined1  [16])0x0;
    if (uVar24 == 0) {
      auStack_60 = ZEXT816(0);
    }
    else {
      local_50 = (float *)(*Reallocate)(0,0,uVar24 * 4);
      auStack_60._8_4_ = uVar31;
      auStack_60._0_8_ = uVar24;
      auStack_60._12_4_ = 0;
    }
    pfVar10 = local_50;
    fVar40 = _LC27;
    fVar36 = *(float *)(param_2 + 0x58) / _LC53;
    fVar41 = 0.0;
    if (fVar37 != 0.0) {
      fVar41 = *(float *)(param_2 + 0xac) * *(float *)(param_2 + 0xb4);
    }
    fVar44 = 0.0;
    fVar37 = param_1 / *(float *)(param_2 + 0x50);
    if (0.0 < *(float *)(param_2 + 0xe4)) {
      fVar44 = param_1 / *(float *)(param_2 + 0xe4);
    }
    if (iVar6 < 1) {
      pfVar25 = local_50 + (uVar22 & 0xffffffff);
      *(float *)(lVar16 + (ulong)(uint)((iVar6 + 2) * iVar6) * 4) = fVar41 * fVar37 + _LC27;
      *pfVar25 = fVar37 * fVar35 + fVar36;
      bVar34 = GaussianElimination<JPH::DynMatrix,JPH::DynMatrix>
                         ((DynMatrix *)&local_88,(DynMatrix *)&local_68,_LC88);
      if (!bVar34) goto LAB_0010426d;
    }
    else {
      uVar24 = uVar22 & 0xffffffff;
      uVar30 = uVar31 * iVar6;
      fVar43 = (float)((uint)fVar37 ^ _LC32);
      uVar20 = 0;
      plVar28 = plVar18;
      pfVar25 = local_50;
      uVar42 = _LC32;
      do {
        fVar4 = *(float *)(plVar28 + 1);
        lVar29 = *plVar28;
        uVar21 = (uint)uVar24;
        uVar13 = uVar21 - iVar6;
        lVar8 = *(long *)(lVar29 + 8);
        fVar5 = *(float *)(lVar8 + 0x94);
        fVar38 = (param_1 * fVar4 * fVar41 * *(float *)((long)plVar28 + 0xc)) / fVar5;
        pfVar17 = (float *)(plVar18 + 1);
        do {
          fVar39 = *pfVar17;
          uVar33 = (ulong)uVar13;
          uVar13 = uVar13 + 1;
          pfVar17 = pfVar17 + 6;
          *(float *)(lVar16 + uVar33 * 4) = (fVar39 * fVar38) / (float)uVar22;
        } while (uVar13 != uVar21);
        pfVar17 = (float *)(lVar16 + (ulong)uVar20 * 4);
        *pfVar17 = *pfVar17 + fVar40;
        *(uint *)(lVar16 + uVar24 * 4) = (uint)fVar38 ^ uVar42;
        fVar38 = *(float *)(lVar29 + 0x8c);
        fVar39 = *(float *)(param_2 + 0x20) * *(float *)(lVar8 + 0xd0) +
                 *(float *)(param_2 + 0x24) * *(float *)(lVar8 + 0xd4);
        if (fVar39 <= 0.0) {
          fVar39 = 0.0;
        }
        else {
          fVar45 = param_1;
          if (!NAN(fVar38)) {
            if (fVar38 == 0.0) {
              fVar38 = (float)JPH::VehicleTransmission::GetCurrentRatio();
              uVar42 = _LC32;
              if (fVar38 < 0.0) {
                lVar29 = *plVar28;
                fVar38 = *(float *)(lVar29 + 0x8c);
                fVar45 = (float)((uint)param_1 ^ _LC32);
              }
              else {
                lVar29 = *plVar28;
                fVar38 = *(float *)(lVar29 + 0x8c);
              }
            }
            else if (fVar38 <= 0.0) {
              fVar45 = (float)((uint)param_1 ^ uVar42);
            }
          }
          fVar39 = fVar39 * fVar45;
        }
        if (*(int *)(lVar29 + 0x10) != -1) {
          fVar39 = fVar39 + *(float *)(lVar29 + 0x150) * fVar44 * *(float *)(lVar8 + 0x88);
        }
        uVar33 = (ulong)uVar30;
        plVar15 = plVar28 + 3;
        *(float *)(plVar28 + 2) = fVar39;
        uVar30 = uVar30 + 1;
        uVar20 = uVar20 + iVar6 + 2;
        uVar24 = (ulong)(uVar21 + uVar31);
        *pfVar25 = fVar38 - fVar39 / fVar5;
        *(float *)(lVar16 + uVar33 * 4) = (fVar4 * fVar41 * fVar43) / (float)uVar22;
        plVar28 = plVar15;
        pfVar25 = pfVar25 + 1;
      } while (plVar18 + (ulong)(iVar6 - 1) * 3 + 3 != plVar15);
      pfVar25 = pfVar10 + (uVar22 & 0xffffffff);
      *(float *)(lVar16 + (ulong)(uint)((iVar6 + 2) * iVar6) * 4) = fVar41 * fVar37 + fVar40;
      *pfVar25 = fVar37 * fVar35 + fVar36;
      bVar34 = GaussianElimination<JPH::DynMatrix,JPH::DynMatrix>
                         ((DynMatrix *)&local_88,(DynMatrix *)&local_68,_LC88);
      if (!bVar34) {
LAB_0010426d:
        if (pfVar10 != (float *)0x0) {
          (*Free)(pfVar10);
        }
        if (lVar16 != 0) {
          (*Free)(lVar16);
        }
        goto LAB_001033b8;
      }
      pfVar17 = (float *)(plVar18 + 2);
      pfVar26 = pfVar10;
      do {
        pfVar1 = pfVar17 + -4;
        fVar37 = *pfVar17;
        pfVar27 = pfVar26 + 1;
        pfVar17 = pfVar17 + 6;
        *(float *)(*(long *)pfVar1 + 0x8c) =
             fVar37 / *(float *)(*(long *)(*(long *)pfVar1 + 8) + 0x94) + *pfVar26;
        pfVar26 = pfVar27;
      } while (pfVar27 != pfVar25);
    }
    fVar37 = *(float *)(param_2 + 0x2c);
    if (*(float *)(param_2 + 0x2c) <= _LC53 * *pfVar25) {
      fVar37 = _LC53 * *pfVar25;
    }
    fVar40 = *(float *)(param_2 + 0x30);
    if (fVar37 <= *(float *)(param_2 + 0x30)) {
      fVar40 = fVar37;
    }
    *(float *)(param_2 + 0x58) = fVar40;
    if (pfVar10 == (float *)0x0) {
      if (lVar16 != 0) goto LAB_00103f07;
      goto LAB_001033da;
    }
    (*Free)(pfVar10);
    if (lVar16 == 0) {
      fVar40 = *(float *)(param_2 + 0x58);
      goto LAB_001033da;
    }
LAB_00103f07:
    (*Free)(lVar16);
    fVar40 = *(float *)(param_2 + 0x58);
    plVar28 = plVar18;
    if (plVar18 == local_128) goto LAB_00103441;
  }
  do {
    while ((0.0 < *(float *)((long)plVar18 + 0xc) && (*(int *)(*plVar18 + 0x10) == -1))) {
      plVar18 = plVar18 + 3;
      if (local_128 == plVar18) goto LAB_00103441;
    }
    plVar18 = plVar18 + 3;
  } while (local_128 != plVar18);
LAB_00103441:
  JPH::VehicleTransmission::Update
            (param_1,fVar40,*(float *)(param_2 + 0x18),(bool)((char)param_2 + '`'));
  uVar31 = _LC32;
  plVar15 = *(long **)(pVVar7 + 0xa0);
  plVar18 = plVar15 + *(long *)(pVVar7 + 0x90);
  for (; plVar18 != plVar15; plVar15 = plVar15 + 1) {
    lVar16 = *plVar15;
    lVar29 = *(long *)(lVar16 + 8);
    fVar37 = *(float *)(param_2 + 0x20) * *(float *)(lVar29 + 0xd0) +
             *(float *)(param_2 + 0x24) * *(float *)(lVar29 + 0xd4);
    if (0.0 < fVar37) {
      fVar40 = *(float *)(lVar16 + 0x8c);
      fVar35 = ((float)((uint)fVar40 & _LC30) * *(float *)(lVar29 + 0x94)) / param_1;
      if (fVar37 <= fVar35) {
        if (0.0 <= fVar40) {
          fVar37 = (float)((uint)fVar37 ^ uVar31);
        }
        *(float *)(lVar16 + 0x8c) = (fVar37 * param_1) / *(float *)(lVar29 + 0x94) + fVar40;
        fVar37 = 0.0;
      }
      else {
        *(undefined4 *)(lVar16 + 0x8c) = 0;
        fVar37 = ((fVar37 - fVar35) * param_1) / *(float *)(lVar29 + 0x88);
      }
    }
    else {
      fVar37 = 0.0;
    }
    *(float *)(lVar16 + 0x1a4) = fVar37;
  }
  *(float *)(param_2 + 0xe4) = param_1;
  if (plVar28 != (long *)0x0) {
    (*Free)(plVar28);
  }
  if (local_130 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* std::_Function_handler<void (unsigned int, float&, float&, float, float, float, float, float,
   float), JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned int, float&,
   float&, float, float, float, float, float, float)#1}>::_M_invoke(std::_Any_data const&, unsigned
   int&&, float&, float&, float&&, unsigned int&&, unsigned int&&, unsigned int&&, unsigned int&&,
   unsigned int&&) */

void std::
     _Function_handler<void(unsigned_int,float&,float&,float,float,float,float,float,float),JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned_int,float&,float&,float,float,float,float,float,float)#1}>
     ::_M_invoke(_Any_data *param_1,uint *param_2,float *param_3,float *param_4,float *param_5,
                uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_5;
  fVar2 = (float)*param_7;
  *param_3 = (float)*param_6 * fVar1;
  *param_4 = fVar2 * fVar1;
  return;
}



/* std::_Function_handler<void (unsigned int, float&, float&, float, float, float, float, float,
   float), JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned int, float&,
   float&, float, float, float, float, float, float)#1}>::_M_manager(std::_Any_data&,
   std::_Function_handler<void (unsigned int, float&, float&, float, float, float, float, float,
   float), JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned int, float&,
   float&, float, float, float, float, float, float)#1}> const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(unsigned_int,float&,float&,float,float,float,float,float,float),JPH::WheeledVehicleController::mTireMaxImpulseCallback::{lambda(unsigned_int,float&,float&,float,float,float,float,float,float)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &JPH::WheeledVehicleController::mTireMaxImpulseCallback::
                {lambda(unsigned_int,float&,float&,float,float,float,float,float,float)#1}::typeinfo
    ;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* JPH::WheeledVehicleController::ConstructWheel(JPH::WheelSettings const&) const */

Wheel * __thiscall
JPH::WheeledVehicleController::ConstructWheel(WheeledVehicleController *this,WheelSettings *param_1)

{
  Wheel *this_00;
  
  this_00 = (Wheel *)(*Allocate)(0x1b0);
  JPH::Wheel::Wheel(this_00,param_1);
  *(undefined4 *)(this_00 + 0x1a4) = 0;
  *(undefined ***)this_00 = &PTR__WheelWV_00105330;
  *(undefined1 (*) [16])(this_00 + 0x194) = (undefined1  [16])0x0;
  return this_00;
}



/* JPH::WheelWV::~WheelWV() */

void __thiscall JPH::WheelWV::~WheelWV(WheelWV *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00105310;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001045fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001045e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::WheelSettingsWV::~WheelSettingsWV() */

void __thiscall JPH::WheelSettingsWV::~WheelSettingsWV(WheelSettingsWV *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00105398;
  if (*(long *)(this + 200) != 0) {
    *(undefined8 *)(this + 0xb8) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xb0) != 0) {
    *(undefined8 *)(this + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00104647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::WheelSettingsWV::~WheelSettingsWV() */

void __thiscall JPH::WheelSettingsWV::~WheelSettingsWV(WheelSettingsWV *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00105398;
  if (*(long *)(this + 200) != 0) {
    *(undefined8 *)(this + 0xb8) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xb0) != 0) {
    *(undefined8 *)(this + 0xa0) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001046b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::WheelWV::~WheelWV() */

void __thiscall JPH::WheelWV::~WheelWV(WheelWV *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00105310;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001046e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00105310;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00104713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00105310;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0010475a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00104746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings() */

void __thiscall
JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings
          (WheeledVehicleControllerSettings *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00105350;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x001047cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings() */

void __thiscall
JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings
          (WheeledVehicleControllerSettings *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00105350;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00104858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::WheeledVehicleController::~WheeledVehicleController() */

void __thiscall
JPH::WheeledVehicleController::~WheeledVehicleController(WheeledVehicleController *this)

{
  *(undefined ***)this = &PTR__WheeledVehicleController_001053d8;
  if (*(code **)(this + 0xf8) != (code *)0x0) {
    (**(code **)(this + 0xf8))(this + 0xe8,this + 0xe8,3);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x001048f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::WheeledVehicleController::~WheeledVehicleController() */

void __thiscall
JPH::WheeledVehicleController::~WheeledVehicleController(WheeledVehicleController *this)

{
  *(undefined ***)this = &PTR__WheeledVehicleController_001053d8;
  if (*(code **)(this + 0xf8) != (code *)0x0) {
    (**(code **)(this + 0xf8))(this + 0xe8,this + 0xe8,3);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x001049ab. Too many branches */
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
  fVar10 = (float)(*(uint *)(this + 0x10) ^ __LC13);
  fVar11 = (float)(*(uint *)(this + 0x14) ^ _UNK_001054d4);
  fVar12 = (float)(*(uint *)(this + 0x18) ^ _UNK_001054d8);
  fVar13 = (float)(*(uint *)(this + 0x1c) ^ _UNK_001054dc);
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



/* bool JPH::GaussianElimination<JPH::DynMatrix, JPH::DynMatrix>(JPH::DynMatrix&, JPH::DynMatrix&,
   float) */

bool JPH::GaussianElimination<JPH::DynMatrix,JPH::DynMatrix>
               (DynMatrix *param_1,DynMatrix *param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  DynMatrix *pDVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  float fVar35;
  float fVar36;
  undefined1 auStack_88 [8];
  DynMatrix *local_80;
  int local_78;
  uint local_74;
  ulong local_70;
  ulong local_68;
  DynMatrix *local_60;
  uint local_58;
  float local_54;
  DynMatrix *local_50;
  long local_40;
  undefined1 *puVar27;
  
  puVar26 = auStack_88;
  uVar7 = *(uint *)(param_1 + 4);
  uVar34 = (ulong)uVar7;
  iVar8 = *(int *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = uVar34 * 4 + 0x17;
  puVar27 = auStack_88;
  puVar12 = auStack_88;
  while (puVar27 != auStack_88 + -(uVar21 & 0xfffffffffffff000)) {
    puVar26 = puVar12 + -0x1000;
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
    puVar27 = puVar12 + -0x1000;
    puVar12 = puVar12 + -0x1000;
  }
  uVar21 = (ulong)((uint)uVar21 & 0xff0);
  lVar11 = -uVar21;
  if (uVar21 != 0) {
    *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
  }
  uVar21 = (ulong)(puVar26 + lVar11 + 0xf) & 0xfffffffffffffff0;
  *(undefined8 *)(puVar26 + lVar11 + -8) = 0x104cf9;
  local_60 = param_2;
  local_54 = param_3;
  local_50 = param_1;
  __memset_chk(uVar21,0);
  pDVar16 = local_50;
  fVar15 = local_54;
  uVar14 = _LC30;
  fVar13 = _LC27;
  if (uVar7 != 0) {
    iVar24 = uVar7 + 1;
    uVar19 = 0;
    do {
      uVar28 = uVar19;
      uVar33 = (ulong)uVar28;
      uVar22 = (ulong)uVar28;
      iVar29 = 0;
      uVar31 = 0;
      fVar36 = 0.0;
      do {
        while (uVar19 = (uint)uVar22, local_68 = uVar21, *(int *)(uVar21 + uVar31 * 4) != 1) {
          local_50 = (DynMatrix *)CONCAT44(local_50._4_4_,iVar24);
          uVar23 = 0;
          do {
            iVar30 = *(int *)(uVar21 + uVar23 * 4);
            if (iVar30 == 0) {
              fVar35 = (float)(*(uint *)(*(long *)(pDVar16 + 0x18) +
                                        (ulong)(uint)(iVar29 + (int)uVar23) * 4) & uVar14);
              if (fVar36 <= fVar35) {
                uVar33 = uVar23 & 0xffffffff;
                uVar22 = uVar31 & 0xffffffff;
                fVar36 = fVar35;
              }
            }
            else if (1 < iVar30) goto LAB_00104da5;
            uVar19 = (uint)uVar22;
            uVar23 = uVar23 + 1;
          } while (uVar34 != uVar23);
          uVar31 = uVar31 + 1;
          iVar29 = iVar29 + uVar7;
          if (uVar34 == uVar31) goto LAB_00104de3;
        }
        uVar31 = uVar31 + 1;
        iVar29 = iVar29 + uVar7;
      } while (uVar34 != uVar31);
LAB_00104de3:
      uVar32 = (uint)uVar33;
      piVar1 = (int *)(uVar21 + uVar33 * 4);
      *piVar1 = *piVar1 + 1;
      lVar9 = *(long *)(pDVar16 + 0x18);
      if (uVar19 != uVar32) {
        uVar18 = uVar32 * uVar7;
        uVar20 = uVar7 + uVar18;
        iVar29 = uVar19 * uVar7 - uVar18;
        do {
          uVar22 = (ulong)uVar18;
          uVar25 = iVar29 + uVar18;
          uVar18 = uVar18 + 1;
          puVar4 = (undefined4 *)(lVar9 + uVar22 * 4);
          puVar5 = (undefined4 *)(lVar9 + (ulong)uVar25 * 4);
          uVar6 = *puVar5;
          *puVar5 = *puVar4;
          *puVar4 = uVar6;
        } while (uVar20 != uVar18);
        if (iVar8 != 0) {
          uVar18 = uVar32 * iVar8;
          lVar10 = *(long *)(local_60 + 0x18);
          iVar29 = uVar19 * iVar8 - uVar18;
          uVar19 = iVar8 + uVar18;
          do {
            uVar22 = (ulong)uVar18;
            uVar20 = iVar29 + uVar18;
            uVar18 = uVar18 + 1;
            puVar4 = (undefined4 *)(lVar10 + uVar22 * 4);
            puVar5 = (undefined4 *)(lVar10 + (ulong)uVar20 * 4);
            uVar6 = *puVar5;
            *puVar5 = *puVar4;
            *puVar4 = uVar6;
          } while (uVar19 != uVar18);
        }
      }
      local_54 = (float)(iVar24 * uVar32);
      pfVar2 = (float *)(lVar9 + (ulong)(uint)local_54 * 4);
      fVar36 = *pfVar2;
      if ((float)((uint)fVar36 & uVar14) < fVar15) {
LAB_00104da5:
        bVar17 = false;
        goto LAB_00104da7;
      }
      uVar18 = (int)local_54 - uVar32;
      local_50 = (DynMatrix *)CONCAT44(local_50._4_4_,uVar18);
      uVar19 = uVar18;
      do {
        uVar22 = (ulong)uVar19;
        uVar19 = uVar19 + 1;
        pfVar3 = (float *)(lVar9 + uVar22 * 4);
        *pfVar3 = *pfVar3 / fVar36;
      } while (uVar7 + uVar18 != uVar19);
      local_58 = uVar32 * iVar8;
      if (iVar8 != 0) {
        lVar10 = *(long *)(local_60 + 0x18);
        uVar19 = local_58;
        do {
          uVar22 = (ulong)uVar19;
          uVar19 = uVar19 + 1;
          pfVar3 = (float *)(lVar10 + uVar22 * 4);
          *pfVar3 = *pfVar3 / fVar36;
        } while (iVar8 + local_58 != uVar19);
      }
      *pfVar2 = fVar13;
      iVar29 = uVar32 - (int)local_54;
      iVar30 = -local_58;
      uVar19 = 0;
      do {
        if (uVar32 != uVar19) {
          pfVar2 = (float *)(lVar9 + (ulong)(uint)((int)local_54 + iVar29) * 4);
          fVar36 = *pfVar2;
          uVar20 = uVar18;
          do {
            uVar22 = (ulong)uVar20;
            uVar25 = uVar20 + iVar29;
            uVar20 = uVar20 + 1;
            pfVar3 = (float *)(lVar9 + (ulong)uVar25 * 4);
            *pfVar3 = *pfVar3 - *(float *)(lVar9 + uVar22 * 4) * fVar36;
          } while (uVar7 + uVar18 != uVar20);
          if (iVar8 != 0) {
            local_50 = (DynMatrix *)CONCAT44(local_50._4_4_,uVar32);
            lVar10 = *(long *)(local_60 + 0x18);
            uVar20 = local_58;
            do {
              uVar22 = (ulong)uVar20;
              uVar25 = uVar20 + iVar30;
              uVar20 = uVar20 + 1;
              pfVar3 = (float *)(lVar10 + (ulong)uVar25 * 4);
              *pfVar3 = *pfVar3 - *(float *)(lVar10 + uVar22 * 4) * fVar36;
            } while (uVar20 != iVar8 + local_58);
          }
          *pfVar2 = 0.0;
        }
        uVar19 = uVar19 + 1;
        iVar30 = iVar30 + iVar8;
        iVar29 = iVar29 + uVar7;
      } while (uVar7 != uVar19);
      uVar19 = uVar28 + 1;
      local_80 = pDVar16;
      local_78 = iVar24;
      local_74 = uVar28;
      local_70 = uVar34;
    } while (uVar28 + 1 != uVar7);
  }
  bVar17 = true;
LAB_00104da7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar17;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar26 + lVar11 + -8) = 0x105035;
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::WheeledVehicleControllerSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC89;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheeledVehicleController::~WheeledVehicleController() */

void __thiscall
JPH::WheeledVehicleController::~WheeledVehicleController(WheeledVehicleController *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings() */

void __thiscall
JPH::WheeledVehicleControllerSettings::~WheeledVehicleControllerSettings
          (WheeledVehicleControllerSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheelSettingsWV::~WheelSettingsWV() */

void __thiscall JPH::WheelSettingsWV::~WheelSettingsWV(WheelSettingsWV *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::WheelWV::~WheelWV() */

void __thiscall JPH::WheelWV::~WheelWV(WheelWV *this)

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




