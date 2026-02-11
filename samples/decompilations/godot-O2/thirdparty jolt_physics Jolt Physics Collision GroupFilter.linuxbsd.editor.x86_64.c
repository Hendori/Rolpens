
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::GroupFilter*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::GroupFilter::RestoreBinaryState(JPH::StreamIn&) */

void JPH::GroupFilter::RestoreBinaryState(StreamIn *param_1)

{
  return;
}



/* JPH::GroupFilter::sCreateRTTI(JPH::RTTI&) */

void JPH::GroupFilter::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::GroupFilter::GetRTTI() const */

undefined1 * JPH::GroupFilter::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::GroupFilter*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::GroupFilter*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::GroupFilter*)::rtti,"GroupFilter",0x10,
                      (_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::GroupFilter*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::GroupFilter*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::GroupFilter*)::rtti);
      return GetRTTIOfType(JPH::GroupFilter*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::GroupFilter*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::GroupFilter*) */

undefined1 * JPH::GetRTTIOfType(GroupFilter *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::GroupFilter*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::GroupFilter*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::GroupFilter*)::rtti,"GroupFilter",0x10,
                      (_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::GroupFilter*)::{lambda(void*)#1}::_FUN,
                      GroupFilter::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::GroupFilter*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::GroupFilter*)::rtti);
      return GetRTTIOfType(JPH::GroupFilter*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::GroupFilter*)::rtti;
}



/* JPH::GroupFilter::CastTo(JPH::RTTI const*) const */

void JPH::GroupFilter::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((GroupFilter *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::GroupFilter::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::GroupFilter::SaveBinaryState(GroupFilter *this,StreamOut *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code *)**(undefined8 **)this == GetRTTI) {
    GetRTTIOfType((GroupFilter *)0x0);
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



/* JPH::GroupFilter::sRestoreFromBinaryState(JPH::StreamIn&) */

GroupFilter * __thiscall
JPH::GroupFilter::sRestoreFromBinaryState(GroupFilter *this,StreamIn *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  StreamUtils::RestoreObject<JPH::GroupFilter>((StreamIn *)this,(_func_void_StreamIn_ptr *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::GroupFilter> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::GroupFilter>>::SetError
          (Result<JPH::Ref<JPH::GroupFilter>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::GroupFilter>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::GroupFilter>>)0x1) {
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
  else if ((this[0x20] == (Result<JPH::Ref<JPH::GroupFilter>>)0x2) &&
          (*(Result<JPH::Ref<JPH::GroupFilter>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::GroupFilter>>)0x0;
  *(Result<JPH::Ref<JPH::GroupFilter>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::GroupFilter>>)*param_1;
      goto LAB_001003d4;
    }
    if (__n == 0) goto LAB_001003d4;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::GroupFilter>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::GroupFilter>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::GroupFilter>> **)this;
LAB_001003d4:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::GroupFilter>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::GroupFilter>>)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Result<JPH::Ref<JPH::GroupFilter> >
   JPH::StreamUtils::RestoreObject<JPH::GroupFilter>(JPH::StreamIn&, void
   (JPH::GroupFilter::*)(JPH::StreamIn&)) */

StreamIn *
JPH::StreamUtils::RestoreObject<JPH::GroupFilter>
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
      Result<JPH::Ref<JPH::GroupFilter>>::SetError
                ((Result<JPH::Ref<JPH::GroupFilter>> *)param_1,"Failed to create instance of type");
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
          goto LAB_00100586;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        param_1[0x20] = (StreamIn)0x1;
      }
      else {
        Result<JPH::Ref<JPH::GroupFilter>>::SetError
                  ((Result<JPH::Ref<JPH::GroupFilter>> *)param_1,"Failed to restore object");
        if (plVar8 == (long *)0x0) goto LAB_00100586;
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
    uVar4 = _UNK_00100848;
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
LAB_00100586:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::GetRTTIOfType(JPH::GroupFilter*) */

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


