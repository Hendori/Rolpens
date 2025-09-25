/* JPH::VehicleTransmissionSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleTransmissionSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleTransmissionSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x30) != 0) {
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      (*Free)();
    }
    if (*(long *)((long)param_1 + 0x18) != 0) {
      *(undefined8 *)((long)param_1 + 8) = 0;
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x0010004f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

undefined1 * JPH::GetRTTIOfType(JPH::VehicleTransmissionSettings*)::{lambda()#1}::_FUN(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = (undefined1 *)(*Allocate)(0x50);
  *puVar6 = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined1 (*) [16])(puVar6 + 8) = (undefined1  [16])0x0;
  lVar7 = (*Reallocate)(0,0,0x14);
  lVar8 = *(long *)(puVar6 + 8);
  lVar9 = 0;
  *(undefined8 *)(puVar6 + 0x10) = 5;
  *(long *)(puVar6 + 0x18) = lVar7;
  lVar1 = lVar8 * 4;
  do {
    uVar2 = *(undefined4 *)((long)&C_6_0 + lVar9);
    *(undefined4 *)(lVar7 + lVar1 + lVar9) = uVar2;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x14);
  *(long *)(puVar6 + 8) = lVar8 + 5;
  *(undefined4 *)(lVar7 + 0x10 + lVar1) = uVar2;
  *(undefined1 (*) [16])(puVar6 + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar6 + 0x30) = 0;
  lVar8 = (*Reallocate)(0,0,4);
  lVar1 = *(long *)(puVar6 + 0x20);
  *(undefined8 *)(puVar6 + 0x28) = 1;
  *(long *)(puVar6 + 0x30) = lVar8;
  uVar4 = _UNK_00100988;
  uVar3 = __LC1;
  *(long *)(puVar6 + 0x20) = lVar1 + 1;
  *(undefined4 *)(lVar8 + lVar1 * 4) = 0xc039999a;
  uVar5 = _LC2;
  *(undefined8 *)(puVar6 + 0x38) = uVar3;
  *(undefined8 *)(puVar6 + 0x40) = uVar4;
  *(undefined8 *)(puVar6 + 0x48) = uVar5;
  return puVar6;
}



/* JPH::GetRTTIOfType(JPH::VehicleTransmissionSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleTransmissionSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti,
                      "VehicleTransmissionSettings",0x50,
                      GetRTTIOfType(JPH::VehicleTransmissionSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleTransmissionSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleTransmissionSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleTransmissionSettings*)::rtti;
}



/* JPH::VehicleTransmissionSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleTransmissionSettings::SaveBinaryState
          (VehicleTransmissionSettings *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,1);
  local_24 = (uint)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x18),(ulong)local_24 << 2);
  }
  local_24 = (uint)*(undefined8 *)(this + 0x20);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x30),(ulong)local_24 << 2);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x3c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleTransmissionSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleTransmissionSettings::RestoreBinaryState
          (VehicleTransmissionSettings *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,1);
  local_34 = (uint)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 != '\0') goto LAB_0010038f;
    uVar5 = (ulong)local_34;
    uVar3 = *(undefined8 *)(this + 0x18);
    uVar4 = uVar5;
    if (*(ulong *)(this + 0x10) < uVar5) {
      uVar3 = (*Reallocate)(uVar3,*(ulong *)(this + 0x10) << 2,uVar5 * 4);
      *(ulong *)(this + 0x10) = uVar5;
      uVar4 = (ulong)local_34;
      *(undefined8 *)(this + 0x18) = uVar3;
    }
    lVar1 = *(long *)param_1;
    *(ulong *)(this + 8) = uVar5;
    (**(code **)(lVar1 + 0x10))(param_1,uVar3,uVar4 << 2);
  }
  else {
LAB_0010038f:
    *(undefined8 *)(this + 8) = 0;
  }
  local_34 = (uint)*(undefined8 *)(this + 0x20);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulong)local_34;
      uVar3 = *(undefined8 *)(this + 0x30);
      uVar4 = uVar5;
      if (*(ulong *)(this + 0x28) < uVar5) {
        uVar3 = (*Reallocate)(uVar3,*(ulong *)(this + 0x28) << 2,uVar5 * 4);
        *(ulong *)(this + 0x28) = uVar5;
        uVar4 = (ulong)local_34;
        *(undefined8 *)(this + 0x30) = uVar3;
      }
      lVar1 = *(long *)param_1;
      *(ulong *)(this + 0x20) = uVar5;
      (**(code **)(lVar1 + 0x10))(param_1,uVar3,uVar4 << 2);
      goto LAB_001003d6;
    }
  }
  *(undefined8 *)(this + 0x20) = 0;
LAB_001003d6:
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x3c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleTransmission::Update(float, float, float, bool) */

void __thiscall
JPH::VehicleTransmission::Update
          (VehicleTransmission *this,float param_1,float param_2,float param_3,bool param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*this != (VehicleTransmission)0x0) {
    return;
  }
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 == 0) {
    if (param_3 <= 0.0) {
      *(uint *)(this + 0x50) = -(uint)(param_3 < 0.0);
      if (0.0 <= param_3) goto LAB_001005e8;
    }
    else {
      *(undefined4 *)(this + 0x50) = 1;
    }
    uVar2 = 0;
    goto LAB_0010055b;
  }
  if ((float)iVar1 * param_3 < 0.0) {
    if (param_3 <= 0.0) {
      *(uint *)(this + 0x50) = -(uint)(param_3 < 0.0);
      if (iVar1 == -(uint)(param_3 < 0.0)) goto LAB_001005e8;
    }
    else {
      *(undefined4 *)(this + 0x50) = 1;
      if (iVar1 == 1) {
LAB_001005e8:
        fVar3 = _LC6;
        if (0.0 < *(float *)(this + 0x58)) {
          fVar3 = *(float *)(this + 0x58) - param_1;
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          *(undefined4 *)(this + 0x54) = 0;
          *(float *)(this + 0x58) = fVar3;
          return;
        }
        if (*(float *)(this + 0x5c) <= 0.0) {
          *(undefined4 *)(this + 0x54) = 0x3f800000;
          fVar3 = *(float *)(this + 0x60) - param_1;
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          *(float *)(this + 0x60) = fVar3;
          return;
        }
        fVar4 = *(float *)(this + 0x5c) - param_1;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        *(float *)(this + 0x5c) = fVar4;
        *(float *)(this + 0x54) = fVar3 - fVar4 / *(float *)(this + 0x3c);
        return;
      }
    }
  }
  else {
    if (*(float *)(this + 0x60) != 0.0) goto LAB_001005e8;
    if ((!param_4) || (param_2 < *(float *)(this + 0x44) || param_2 == *(float *)(this + 0x44))) {
      if (*(float *)(this + 0x48) <= param_2) goto LAB_001005e8;
      if (-1 < iVar1) {
        if ((iVar1 == 1) && (param_3 != 0.0)) goto LAB_001005e8;
        goto LAB_0010065d;
      }
      if ((iVar1 == -1) && (param_3 != 0.0)) goto LAB_001005e8;
    }
    else {
      if (iVar1 < 0) {
        if (iVar1 <= -*(int *)(this + 0x20)) goto LAB_001005e8;
LAB_0010065d:
        *(int *)(this + 0x50) = iVar1 + -1;
        goto LAB_001005c0;
      }
      if (*(int *)(this + 8) <= iVar1) goto LAB_001005e8;
    }
    *(int *)(this + 0x50) = iVar1 + 1;
  }
LAB_001005c0:
  uVar2 = *(undefined4 *)(this + 0x38);
LAB_0010055b:
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(this + 0x3c);
  return;
}



/* JPH::VehicleTransmission::GetCurrentRatio() const */

void __thiscall JPH::VehicleTransmission::GetCurrentRatio(VehicleTransmission *this)

{
  if (-1 < *(int *)(this + 0x50)) {
    return;
  }
  return;
}



/* JPH::VehicleTransmission::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::VehicleTransmission::SaveState(VehicleTransmission *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x50,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x54,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x58,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x5c,4);
                    /* WARNING: Could not recover jumptable at 0x001007c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x60,4);
  return;
}



/* JPH::VehicleTransmission::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::VehicleTransmission::RestoreState(VehicleTransmission *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x5c,4);
                    /* WARNING: Could not recover jumptable at 0x00100841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleTransmissionSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC7;
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



