
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SpringSettings*)::{lambda()#1}::_FUN(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*Allocate)(0xc);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SpringSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SpringSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::SpringSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::SpringSettings*) */

undefined1 * JPH::GetRTTIOfType(SpringSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SpringSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SpringSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SpringSettings*)::rtti,"SpringSettings",0xc,
                      GetRTTIOfType(JPH::SpringSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SpringSettings*)::{lambda(void*)#1}::_FUN,
                      SpringSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SpringSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SpringSettings*)::rtti);
      return GetRTTIOfType(JPH::SpringSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SpringSettings*)::rtti;
}



/* JPH::SpringSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::SpringSettings::SaveBinaryState(SpringSettings *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,4);
                    /* WARNING: Could not recover jumptable at 0x0010014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
  return;
}



/* JPH::SpringSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::SpringSettings::RestoreBinaryState(SpringSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,1);
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



/* JPH::GetRTTIOfType(JPH::SpringSettings*) */

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


