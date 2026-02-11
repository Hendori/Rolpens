
/* JPH::GroupFilterTable::sCreateRTTI(JPH::RTTI&) */

void JPH::GroupFilterTable::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((GroupFilter *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::GroupFilterTable::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::GroupFilterTable::SaveBinaryState(GroupFilterTable *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::GroupFilter::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  local_24 = (undefined4)*(undefined8 *)(this + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0x20),local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GroupFilterTable::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::GroupFilterTable::RestoreBinaryState(GroupFilterTable *this,StreamIn *param_1)

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
  JPH::GroupFilter::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,4);
  local_24 = (uint)*(undefined8 *)(this + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulong)local_24;
      uVar3 = *(undefined8 *)(this + 0x20);
      uVar4 = uVar5;
      if (*(ulong *)(this + 0x18) < uVar5) {
        uVar3 = (*Reallocate)(uVar3,*(ulong *)(this + 0x18),uVar5);
        *(ulong *)(this + 0x18) = uVar5;
        uVar4 = (ulong)local_24;
        *(undefined8 *)(this + 0x20) = uVar3;
      }
      lVar1 = *(long *)param_1;
      *(ulong *)(this + 0x10) = uVar5;
      (**(code **)(lVar1 + 0x10))(param_1,uVar3,uVar4);
      goto LAB_00100126;
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
LAB_00100126:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::GroupFilterTable*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x28);
  *puVar1 = &PTR_GetRTTI_001005b8;
  puVar1[1] = 0;
  puVar1[4] = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::GroupFilterTable*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(undefined ***)param_1 = &PTR_GetRTTI_001005b8;
    if (*(long *)((long)param_1 + 0x20) != 0) {
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00100202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GroupFilterTable::GetRTTI() const */

undefined1 * JPH::GroupFilterTable::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::GroupFilterTable*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::GroupFilterTable*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::GroupFilterTable*)::rtti,"GroupFilterTable",0x28,
                      GetRTTIOfType(JPH::GroupFilterTable*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::GroupFilterTable*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::GroupFilterTable*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::GroupFilterTable*)::rtti);
      return GetRTTIOfType(JPH::GroupFilterTable*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::GroupFilterTable*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::GroupFilterTable*) */

undefined1 * JPH::GetRTTIOfType(GroupFilterTable *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::GroupFilterTable*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::GroupFilterTable*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::GroupFilterTable*)::rtti,"GroupFilterTable",0x28,
                      GetRTTIOfType(JPH::GroupFilterTable*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::GroupFilterTable*)::{lambda(void*)#1}::_FUN,
                      GroupFilterTable::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::GroupFilterTable*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::GroupFilterTable*)::rtti);
      return GetRTTIOfType(JPH::GroupFilterTable*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::GroupFilterTable*)::rtti;
}



/* JPH::GroupFilterTable::CastTo(JPH::RTTI const*) const */

void JPH::GroupFilterTable::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((GroupFilterTable *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GroupFilterTable::~GroupFilterTable() */

void __thiscall JPH::GroupFilterTable::~GroupFilterTable(GroupFilterTable *this)

{
  *(undefined ***)this = &PTR_GetRTTI_001005b8;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010046d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::GroupFilterTable::CanCollide(JPH::CollisionGroup const&, JPH::CollisionGroup const&) const
    */

uint __thiscall
JPH::GroupFilterTable::CanCollide
          (GroupFilterTable *this,CollisionGroup *param_1,CollisionGroup *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (((*(int *)(param_1 + 8) != -1) && (*(int *)(param_2 + 8) == *(int *)(param_1 + 8))) &&
     (uVar4 = 0, *(long *)param_1 == *(long *)param_2)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar3 = *(uint *)(param_2 + 0xc);
    if (uVar1 != uVar3) {
      uVar4 = uVar1;
      if (uVar1 <= uVar3) {
        uVar4 = uVar3;
        uVar3 = uVar1;
      }
      iVar2 = ((uVar4 - 1) * uVar4 >> 1) + uVar3;
      return (int)(uint)*(byte *)(*(long *)(this + 0x20) + (long)(iVar2 >> 3)) >> ((byte)iVar2 & 7)
             & 1;
    }
  }
  return uVar4;
}



/* JPH::GroupFilterTable::~GroupFilterTable() */

void __thiscall JPH::GroupFilterTable::~GroupFilterTable(GroupFilterTable *this)

{
  *(undefined ***)this = &PTR_GetRTTI_001005b8;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00100502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x20));
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::GroupFilterTable*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC1;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::GroupFilterTable::~GroupFilterTable() */

void __thiscall JPH::GroupFilterTable::~GroupFilterTable(GroupFilterTable *this)

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


