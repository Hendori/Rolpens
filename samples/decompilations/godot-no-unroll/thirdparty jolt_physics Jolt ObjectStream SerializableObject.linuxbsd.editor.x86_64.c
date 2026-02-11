
/* JPH::SerializableObject::sCreateRTTI(JPH::RTTI&) */

void JPH::SerializableObject::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SerializableObject*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  if (*(code **)(*param_1 + 0x18) == SerializableObject::~SerializableObject) {
                    /* WARNING: Could not recover jumptable at 0x0010002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* JPH::SerializableObject::GetRTTI() const */

undefined1 * JPH::SerializableObject::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SerializableObject*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SerializableObject*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SerializableObject*)::rtti,"SerializableObject",8,
                      (_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::SerializableObject*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SerializableObject*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SerializableObject*)::rtti);
      return GetRTTIOfType(JPH::SerializableObject*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SerializableObject*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::SerializableObject*) */

undefined1 * JPH::GetRTTIOfType(SerializableObject *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SerializableObject*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SerializableObject*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SerializableObject*)::rtti,"SerializableObject",8,
                      (_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::SerializableObject*)::{lambda(void*)#1}::_FUN,
                      SerializableObject::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SerializableObject*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SerializableObject*)::rtti);
      return GetRTTIOfType(JPH::SerializableObject*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SerializableObject*)::rtti;
}



/* JPH::SerializableObject::CastTo(JPH::RTTI const*) const */

void JPH::SerializableObject::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::SerializableObject::~SerializableObject() */

void __thiscall JPH::SerializableObject::~SerializableObject(SerializableObject *this)

{
  return;
}



/* JPH::SerializableObject::~SerializableObject() */

void __thiscall JPH::SerializableObject::~SerializableObject(SerializableObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::SerializableObject*) */

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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SerializableObject::~SerializableObject() */

void __thiscall JPH::SerializableObject::~SerializableObject(SerializableObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


