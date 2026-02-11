
/* _FUN() */

void JPH::GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_GetRTTI_00100940;
  return;
}



/* JPH::PhysicsMaterial::RestoreBinaryState(JPH::StreamIn&) */

void JPH::PhysicsMaterial::RestoreBinaryState(StreamIn *param_1)

{
  return;
}



/* JPH::PhysicsMaterial::sCreateRTTI(JPH::RTTI&) */

void JPH::PhysicsMaterial::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  if (*(code **)(*param_1 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x0010007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* JPH::PhysicsMaterial::GetRTTI() const */

undefined1 * JPH::PhysicsMaterial::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsMaterial*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsMaterial*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsMaterial*)::rtti,"PhysicsMaterial",0x10,
                      GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsMaterial*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsMaterial*)::rtti);
      return GetRTTIOfType(JPH::PhysicsMaterial*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsMaterial*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::PhysicsMaterial*) */

undefined1 * JPH::GetRTTIOfType(PhysicsMaterial *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsMaterial*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsMaterial*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsMaterial*)::rtti,"PhysicsMaterial",0x10,
                      GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsMaterial*)::{lambda(void*)#1}::_FUN,
                      PhysicsMaterial::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsMaterial*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsMaterial*)::rtti);
      return GetRTTIOfType(JPH::PhysicsMaterial*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsMaterial*)::rtti;
}



/* JPH::PhysicsMaterial::CastTo(JPH::RTTI const*) const */

void JPH::PhysicsMaterial::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PhysicsMaterial *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::PhysicsMaterial::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::PhysicsMaterial::SaveBinaryState(PhysicsMaterial *this,StreamOut *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code *)**(undefined8 **)this == GetRTTI) {
    GetRTTIOfType((PhysicsMaterial *)0x0);
  }
  else {
    (*(code *)**(undefined8 **)this)();
  }
  local_14 = JPH::RTTI::GetHash();
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_14,4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterial::sRestoreFromBinaryState(JPH::StreamIn&) */

PhysicsMaterial * __thiscall
JPH::PhysicsMaterial::sRestoreFromBinaryState(PhysicsMaterial *this,StreamIn *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  StreamUtils::RestoreObject<JPH::PhysicsMaterial>
            ((StreamIn *)this,(_func_void_StreamIn_ptr *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterial::GetDebugName() const */

char * JPH::PhysicsMaterial::GetDebugName(void)

{
  return "Unknown";
}



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001003a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::RefConst<JPH::PhysicsMaterial>::~RefConst() */

void __thiscall JPH::RefConst<JPH::PhysicsMaterial>::~RefConst(RefConst<JPH::PhysicsMaterial> *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x001003eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001003f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::PhysicsMaterial> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::PhysicsMaterial>>::SetError
          (Result<JPH::Ref<JPH::PhysicsMaterial>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::PhysicsMaterial>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::PhysicsMaterial>>)0x1) {
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_001004cc;
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::PhysicsMaterial>>)0x2) &&
          (*(Result<JPH::Ref<JPH::PhysicsMaterial>> **)this != this + 0x10)) {
LAB_001004cc:
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::PhysicsMaterial>>)0x0;
  *(Result<JPH::Ref<JPH::PhysicsMaterial>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::PhysicsMaterial>>)*param_1;
      goto LAB_001004a8;
    }
    if (__n == 0) goto LAB_001004a8;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::PhysicsMaterial>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::PhysicsMaterial>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::PhysicsMaterial>> **)this;
LAB_001004a8:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::PhysicsMaterial>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::PhysicsMaterial>>)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Result<JPH::Ref<JPH::PhysicsMaterial> >
   JPH::StreamUtils::RestoreObject<JPH::PhysicsMaterial>(JPH::StreamIn&, void
   (JPH::PhysicsMaterial::*)(JPH::StreamIn&)) */

StreamIn *
JPH::StreamUtils::RestoreObject<JPH::PhysicsMaterial>
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
      Result<JPH::Ref<JPH::PhysicsMaterial>>::SetError
                ((Result<JPH::Ref<JPH::PhysicsMaterial>> *)param_1,
                 "Failed to create instance of type");
      goto LAB_00100666;
    }
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
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2), cVar5 == '\0'))
    {
      if (param_1[0x20] == (StreamIn)0x1) {
        plVar2 = *(long **)param_1;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_001007d0;
            (**(code **)(*plVar2 + 0x18))();
          }
        }
      }
      else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
LAB_001007d0:
        (*Free)();
      }
      param_1[0x20] = (StreamIn)0x0;
      *(long **)param_1 = plVar8;
      if (plVar8 == (long *)0x0) {
        param_1[0x20] = (StreamIn)0x1;
        goto LAB_00100666;
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      param_1[0x20] = (StreamIn)0x1;
    }
    else {
      Result<JPH::Ref<JPH::PhysicsMaterial>>::SetError
                ((Result<JPH::Ref<JPH::PhysicsMaterial>> *)param_1,"Failed to restore object");
      if (plVar8 == (long *)0x0) goto LAB_00100666;
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      if (*(code **)(*plVar8 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    goto LAB_00100666;
  }
  if (param_1[0x20] == (StreamIn)0x1) {
    plVar8 = *(long **)param_1;
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        if (*(code **)(*plVar8 + 0x18) == PhysicsMaterial::~PhysicsMaterial) goto LAB_0010069c;
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
LAB_0010069c:
    (*Free)();
  }
  param_1[0x20] = (StreamIn)0x0;
  *(StreamIn **)param_1 = param_1 + 0x10;
  puVar6 = (undefined8 *)(*Allocate)(0x19);
  uVar4 = _UNK_00100998;
  uVar3 = __LC5;
  *(undefined8 *)(param_1 + 0x10) = 0x18;
  *(undefined8 **)param_1 = puVar6;
  puVar6[2] = 0x6873616820657079;
  *puVar6 = uVar3;
  puVar6[1] = uVar4;
  *(undefined8 *)(param_1 + 8) = 0x18;
  *(undefined1 *)(*(long *)param_1 + 0x18) = 0;
  param_1[0x20] = (StreamIn)0x2;
LAB_00100666:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::PhysicsMaterial::sDefault */

void JPH::PhysicsMaterial::_GLOBAL__sub_I_sDefault(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC6;
  }
  sDefault = 0;
  __cxa_atexit(RefConst<JPH::PhysicsMaterial>::~RefConst,&sDefault,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RefConst<JPH::PhysicsMaterial>::~RefConst() */

void __thiscall JPH::RefConst<JPH::PhysicsMaterial>::~RefConst(RefConst<JPH::PhysicsMaterial> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


