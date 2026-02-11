
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleControllerSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::VehicleControllerSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleControllerSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::VehicleControllerSettings::GetRTTI() const */

undefined1 * JPH::VehicleControllerSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti,
                      "VehicleControllerSettings",0x10,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::VehicleControllerSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::VehicleControllerSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleControllerSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti,
                      "VehicleControllerSettings",0x10,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::VehicleControllerSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleControllerSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleControllerSettings*)::rtti;
}



/* JPH::VehicleControllerSettings::CastTo(JPH::RTTI const*) const */

void JPH::VehicleControllerSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((VehicleControllerSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleControllerSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC1;
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


