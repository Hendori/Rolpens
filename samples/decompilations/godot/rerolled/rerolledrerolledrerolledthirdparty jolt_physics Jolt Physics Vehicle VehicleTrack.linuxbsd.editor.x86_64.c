/* JPH::VehicleTrackSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::VehicleTrackSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::VehicleTrackSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x18) != 0) {
      *(undefined8 *)((long)param_1 + 8) = 0;
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00100038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::VehicleTrackSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (*Allocate)(0x30);
  *(undefined1 (*) [16])(lVar3 + 8) = (undefined1  [16])0x0;
  uVar2 = _UNK_00100498;
  uVar1 = __LC0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleTrackSettings*) */

undefined1 * JPH::GetRTTIOfType(VehicleTrackSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti,"VehicleTrackSettings"
                      ,0x30,GetRTTIOfType(JPH::VehicleTrackSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::VehicleTrackSettings*)::{lambda(void*)#1}::_FUN,
                      VehicleTrackSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti);
      return GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::VehicleTrackSettings*)::rtti;
}



/* JPH::VehicleTrackSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::VehicleTrackSettings::SaveBinaryState(VehicleTrackSettings *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  local_24 = (uint)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x18),(ulong)local_24 << 2);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x24,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001001fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::VehicleTrackSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::VehicleTrackSettings::RestoreBinaryState(VehicleTrackSettings *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,4);
  local_24 = (uint)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulong)local_24;
      uVar3 = *(undefined8 *)(this + 0x18);
      uVar4 = uVar5;
      if (*(ulong *)(this + 0x10) < uVar5) {
        uVar3 = (*_Reallocate)(uVar3,*(ulong *)(this + 0x10) << 2,uVar5 * 4);
        *(ulong *)(this + 0x10) = uVar5;
        uVar4 = (ulong)local_24;
        *(undefined8 *)(this + 0x18) = uVar3;
      }
      lVar1 = *(long *)param_1;
      *(ulong *)(this + 8) = uVar5;
      (**(code **)(lVar1 + 0x10))(param_1,uVar3,uVar4 << 2);
      goto LAB_0010027e;
    }
  }
  *(undefined8 *)(this + 8) = 0;
LAB_0010027e:
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x24,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001002df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::VehicleTrack::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::VehicleTrack::SaveState(VehicleTrack *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010036f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x30,4);
  return;
}



/* JPH::VehicleTrack::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::VehicleTrack::RestoreState(VehicleTrack *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010039a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::VehicleTrackSettings*) */

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





