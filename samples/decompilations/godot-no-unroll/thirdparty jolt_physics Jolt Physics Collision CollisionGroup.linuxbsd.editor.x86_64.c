
/* _FUN() */

void JPH::GetRTTIOfType(JPH::CollisionGroup*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x10);
  *puVar1 = 0;
  puVar1[1] = 0xffffffffffffffff;
  return;
}



/* JPH::CollisionGroup::sCreateRTTI(JPH::RTTI&) */

void JPH::CollisionGroup::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::CollisionGroup*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  plVar2 = *param_1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00100082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* JPH::GetRTTIOfType(JPH::CollisionGroup*) */

undefined1 * JPH::GetRTTIOfType(CollisionGroup *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::CollisionGroup*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::CollisionGroup*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::CollisionGroup*)::rtti,"CollisionGroup",0x10,
                      GetRTTIOfType(JPH::CollisionGroup*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::CollisionGroup*)::{lambda(void*)#1}::_FUN,
                      CollisionGroup::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::CollisionGroup*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::CollisionGroup*)::rtti);
      return GetRTTIOfType(JPH::CollisionGroup*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::CollisionGroup*)::rtti;
}



/* JPH::CollisionGroup::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::CollisionGroup::SaveBinaryState(CollisionGroup *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
                    /* WARNING: Could not recover jumptable at 0x0010016b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  return;
}



/* JPH::CollisionGroup::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::CollisionGroup::RestoreBinaryState(CollisionGroup *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 8,4);
                    /* WARNING: Could not recover jumptable at 0x001001ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::CollisionGroup*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC2;
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


