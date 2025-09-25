/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleDifferentialSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::VehicleDifferentialSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleDifferentialSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::VehicleDifferentialSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*Allocate)(0x18);
  uVar2 = _UNK_001004a8;
  uVar1 = __LC1;
  *puVar3 = 0xffffffffffffffff;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleDifferentialSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleDifferentialSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti,
                      "VehicleDifferentialSettings",0x18,
                      GetRTTIOfType(JPH::VehicleDifferentialSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleDifferentialSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleDifferentialSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleDifferentialSettings*)::rtti;
}



/* JPH::VehicleDifferentialSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleDifferentialSettings::SaveBinaryState
          (VehicleDifferentialSettings *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
                    /* WARNING: Could not recover jumptable at 0x00100182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
  return;
}



/* JPH::VehicleDifferentialSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleDifferentialSettings::RestoreBinaryState
          (VehicleDifferentialSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
                    /* WARNING: Could not recover jumptable at 0x00100212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
  return;
}



/* JPH::VehicleDifferentialSettings::CalculateTorqueRatio(float, float, float&, float&) const */

void __thiscall
JPH::VehicleDifferentialSettings::CalculateTorqueRatio
          (VehicleDifferentialSettings *this,float param_1,float param_2,float *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = _LC6;
  fVar6 = _LC4;
  *param_3 = _LC4 - *(float *)(this + 0xc);
  *param_4 = *(float *)(this + 0xc);
  if (fVar1 <= *(float *)(this + 0x10)) {
    return;
  }
  fVar5 = *(float *)(this + 0x10) - fVar6;
  fVar1 = (float)((uint)param_1 & _LC7);
  fVar2 = (float)((uint)param_2 & _LC7);
  if (fVar1 <= _LC5) {
    fVar1 = _LC5;
    if (fVar2 <= _LC5) {
      fVar4 = fVar6 - 0.0 / fVar5;
      fVar6 = 0.0 / fVar5;
      goto LAB_00100289;
    }
LAB_001002f0:
    fVar5 = (fVar2 / fVar1 - fVar6) / fVar5;
    if (fVar5 <= fVar6) {
      fVar4 = fVar6 - fVar5;
      fVar6 = fVar5;
    }
    else {
      fVar4 = 0.0;
    }
    goto LAB_00100307;
  }
  fVar3 = _LC5;
  fVar4 = _LC5;
  if (_LC5 < fVar2) {
    if (fVar1 <= fVar2) {
      fVar3 = fVar2;
      fVar4 = fVar1;
      if (fVar1 < fVar2) goto LAB_001002f0;
      goto LAB_001002c4;
    }
    fVar5 = (fVar1 / fVar2 - fVar6) / fVar5;
    if (fVar5 <= fVar6) {
      fVar4 = fVar6 - fVar5;
      fVar6 = fVar5;
      goto LAB_00100289;
    }
    fVar4 = 0.0;
  }
  else {
LAB_001002c4:
    fVar5 = (fVar1 / fVar4 - fVar6) / fVar5;
    if (fVar6 < fVar5) {
      fVar4 = 0.0;
      goto LAB_00100289;
    }
    fVar4 = fVar6 - fVar5;
    fVar2 = fVar3;
    fVar6 = fVar5;
  }
  if (fVar1 < fVar2) {
LAB_00100307:
    *param_3 = *param_3 * fVar4 + fVar6;
    *param_4 = fVar4 * *param_4;
    return;
  }
LAB_00100289:
  *param_3 = *param_3 * fVar4;
  *param_4 = fVar4 * *param_4 + fVar6;
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleDifferentialSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC8;
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



