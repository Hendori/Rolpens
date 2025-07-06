/* _FUN() */

void JPH::GetRTTIOfType(JPH::VehicleAntiRollBar*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0xc);
  uVar1 = _LC0;
  *(undefined4 *)(puVar2 + 1) = 0x447a0000;
  *puVar2 = uVar1;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleAntiRollBar*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::VehicleAntiRollBar::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleAntiRollBar::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleAntiRollBar*) */

undefined1 * JPH::GetRTTIOfType(VehicleAntiRollBar *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti,"VehicleAntiRollBar",0xc
                      ,GetRTTIOfType(JPH::VehicleAntiRollBar*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleAntiRollBar*)::{lambda(void*)#1}::_FUN,
                      VehicleAntiRollBar::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti);
      return GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleAntiRollBar*)::rtti;
}



/* JPH::VehicleAntiRollBar::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleAntiRollBar::SaveBinaryState(VehicleAntiRollBar *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
                    /* WARNING: Could not recover jumptable at 0x0010014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  return;
}



/* JPH::VehicleAntiRollBar::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleAntiRollBar::RestoreBinaryState(VehicleAntiRollBar *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
                    /* WARNING: Could not recover jumptable at 0x0010019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleAntiRollBar*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
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



