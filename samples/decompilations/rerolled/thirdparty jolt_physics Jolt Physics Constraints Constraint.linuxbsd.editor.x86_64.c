/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::ConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::ConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::ConstraintSettings::RestoreBinaryState(ConstraintSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
                    /* WARNING: Could not recover jumptable at 0x00100091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
  return;
}



/* JPH::Constraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::Constraint::SaveState(Constraint *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x1a,1);
  return;
}



/* JPH::Constraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::Constraint::RestoreState(Constraint *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001000ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1a,1);
  return;
}



/* JPH::ConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::ConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::ConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x28);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_GetRTTI_00100ad0;
  *(undefined1 *)((long)puVar1 + 0xc) = 1;
  puVar1[2] = 0;
  puVar1[3] = 0x3f80000000000000;
  puVar1[4] = 0;
  return;
}



/* JPH::ConstraintSettings::GetRTTI() const */

undefined1 * JPH::ConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConstraintSettings*)::rtti,"ConstraintSettings",
                      0x28,GetRTTIOfType(JPH::ConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConstraintSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::ConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConstraintSettings*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::ConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(ConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConstraintSettings*)::rtti,"ConstraintSettings",
                      0x28,GetRTTIOfType(JPH::ConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::ConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      ConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::ConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConstraintSettings*)::rtti;
}



/* JPH::ConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::ConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::ConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::ConstraintSettings::SaveBinaryState(ConstraintSettings *this,StreamOut *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code *)**(undefined8 **)this == GetRTTI) {
    GetRTTIOfType((ConstraintSettings *)0x0);
  }
  else {
    (*(code *)**(undefined8 **)this)();
  }
  local_24 = JPH::RTTI::GetHash();
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x14,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010039b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Constraint::ToConstraintSettings(JPH::ConstraintSettings&) const */

void __thiscall JPH::Constraint::ToConstraintSettings(Constraint *this,ConstraintSettings *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x14);
  param_1[0xc] = *(ConstraintSettings *)(this + 0x1a);
  *(ulong *)(param_1 + 0x10) = (ulong)CONCAT14(this[0x18],uVar1);
  uVar1 = *(undefined4 *)(this + 0xc);
  *(uint *)(param_1 + 0x18) = (uint)(byte)this[0x19];
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* JPH::ConstraintSettings::sRestoreFromBinaryState(JPH::StreamIn&) */

ConstraintSettings * __thiscall
JPH::ConstraintSettings::sRestoreFromBinaryState(ConstraintSettings *this,StreamIn *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  StreamUtils::RestoreObject<JPH::ConstraintSettings>
            ((StreamIn *)this,(_func_void_StreamIn_ptr *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Constraint::GetType() const */

undefined8 JPH::Constraint::GetType(void)

{
  return 0;
}



/* JPH::Constraint::IsActive() const */

Constraint __thiscall JPH::Constraint::IsActive(Constraint *this)

{
  return this[0x1a];
}



/* JPH::Constraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::Constraint::DrawConstraintReferenceFrame(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintReferenceFrame(DebugRenderer *param_1)

{
  return;
}



/* JPH::ConstraintSettings::~ConstraintSettings() */

void __thiscall JPH::ConstraintSettings::~ConstraintSettings(ConstraintSettings *this)

{
  return;
}



/* JPH::ConstraintSettings::~ConstraintSettings() */

void __thiscall JPH::ConstraintSettings::~ConstraintSettings(ConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::ConstraintSettings> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::ConstraintSettings>>::SetError
          (Result<JPH::Ref<JPH::ConstraintSettings>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::ConstraintSettings>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::ConstraintSettings>>)0x1) {
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::ConstraintSettings>>)0x2) &&
          (*(Result<JPH::Ref<JPH::ConstraintSettings>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::ConstraintSettings>>)0x0;
  *(Result<JPH::Ref<JPH::ConstraintSettings>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::ConstraintSettings>>)*param_1;
      goto LAB_001005d4;
    }
    if (__n == 0) goto LAB_001005d4;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::ConstraintSettings>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::ConstraintSettings>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::ConstraintSettings>> **)this;
LAB_001005d4:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::ConstraintSettings>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::ConstraintSettings>>)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Result<JPH::Ref<JPH::ConstraintSettings> >
   JPH::StreamUtils::RestoreObject<JPH::ConstraintSettings>(JPH::StreamIn&, void
   (JPH::ConstraintSettings::*)(JPH::StreamIn&)) */

StreamIn *
JPH::StreamUtils::RestoreObject<JPH::ConstraintSettings>
          (StreamIn *param_1,_func_void_StreamIn_ptr *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long in_RCX;
  code *in_RDX;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)param_2;
  param_1[0x20] = (StreamIn)0x0;
  (**(code **)(lVar7 + 0x10))(param_2,local_44,4);
  cVar5 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2), cVar5 == '\0')) {
    lVar7 = JPH::Factory::Find((uint)Factory::sInstance);
    if (lVar7 == 0) {
      Result<JPH::Ref<JPH::ConstraintSettings>>::SetError
                ((Result<JPH::Ref<JPH::ConstraintSettings>> *)param_1,
                 "Failed to create instance of type");
    }
    else {
      plVar8 = (long *)JPH::RTTI::CreateObject();
      if (plVar8 != (long *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (((ulong)in_RDX & 1) != 0) {
        in_RDX = *(code **)(in_RDX + *(long *)((long)plVar8 + in_RCX) + -1);
      }
      (*in_RDX)((long *)((long)plVar8 + in_RCX),param_2);
      cVar5 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2), cVar5 == '\0')) {
        if (param_1[0x20] == (StreamIn)0x1) {
          plVar2 = *(long **)param_1;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
        }
        else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
          (*Free)();
        }
        param_1[0x20] = (StreamIn)0x0;
        *(long **)param_1 = plVar8;
        if (plVar8 == (long *)0x0) {
          param_1[0x20] = (StreamIn)0x1;
          goto LAB_00100786;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        param_1[0x20] = (StreamIn)0x1;
      }
      else {
        Result<JPH::Ref<JPH::ConstraintSettings>>::SetError
                  ((Result<JPH::Ref<JPH::ConstraintSettings>> *)param_1,"Failed to restore object");
        if (plVar8 == (long *)0x0) goto LAB_00100786;
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  else {
    if (param_1[0x20] == (StreamIn)0x1) {
      plVar8 = *(long **)param_1;
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
      (*Free)();
    }
    param_1[0x20] = (StreamIn)0x0;
    *(StreamIn **)param_1 = param_1 + 0x10;
    puVar6 = (undefined8 *)(*Allocate)(0x19);
    uVar4 = _UNK_00100bb8;
    uVar3 = __LC4;
    *(undefined8 *)(param_1 + 0x10) = 0x18;
    *(undefined8 **)param_1 = puVar6;
    puVar6[2] = 0x6873616820657079;
    *puVar6 = uVar3;
    puVar6[1] = uVar4;
    *(undefined8 *)(param_1 + 8) = 0x18;
    *(undefined1 *)(*(long *)param_1 + 0x18) = 0;
    param_1[0x20] = (StreamIn)0x2;
  }
LAB_00100786:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::GetRTTIOfType(JPH::ConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC5;
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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ConstraintSettings::~ConstraintSettings() */

void __thiscall JPH::ConstraintSettings::~ConstraintSettings(ConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



