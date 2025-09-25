/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::MotorSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MotorSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::MotorSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::MotorSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)(*Allocate)(0x1c);
  uVar2 = _LC1;
  uVar1 = __LC0;
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar2;
  *(undefined8 *)(puVar3 + 4) = uVar1;
  *(undefined8 *)(puVar3 + 0xc) = uVar2;
  return;
}



/* JPH::GetRTTIOfType(JPH::MotorSettings*) */

undefined1 * JPH::GetRTTIOfType(MotorSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MotorSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MotorSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MotorSettings*)::rtti,"MotorSettings",0x1c,
                      GetRTTIOfType(JPH::MotorSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MotorSettings*)::{lambda(void*)#1}::_FUN,
                      MotorSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MotorSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::MotorSettings*)::rtti);
      return GetRTTIOfType(JPH::MotorSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MotorSettings*)::rtti;
}



/* JPH::MotorSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::MotorSettings::SaveBinaryState(MotorSettings *this,StreamOut *param_1)

{
  JPH::SpringSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
                    /* WARNING: Could not recover jumptable at 0x00100174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
  return;
}



/* JPH::MotorSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::MotorSettings::RestoreBinaryState(MotorSettings *this,StreamIn *param_1)

{
  JPH::SpringSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
                    /* WARNING: Could not recover jumptable at 0x001001e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::MotorSettings*) */

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




