
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::PhysicsMaterialSimple::sCreateRTTI(JPH::RTTI&) */

void JPH::PhysicsMaterialSimple::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((PhysicsMaterial *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PhysicsMaterialSimple::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PhysicsMaterialSimple::SaveBinaryState(PhysicsMaterialSimple *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::PhysicsMaterial::SaveBinaryState((StreamOut *)this);
  local_24 = (undefined4)*(undefined8 *)(this + 0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0x10),local_24);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001000c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x38);
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = puVar2 + 4;
  uVar1 = (undefined4)Color::sGrey;
  *puVar2 = &PTR_GetRTTI_00100798;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 6) = uVar1;
  return;
}



/* JPH::PhysicsMaterialSimple::GetRTTI() const */

undefined1 * JPH::PhysicsMaterialSimple::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti,
                      "PhysicsMaterialSimple",0x38,
                      GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti);
      return GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::PhysicsMaterialSimple*) */

undefined1 * JPH::GetRTTIOfType(PhysicsMaterialSimple *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti,
                      "PhysicsMaterialSimple",0x38,
                      GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsMaterialSimple*)::{lambda(void*)#1}::_FUN,
                      PhysicsMaterialSimple::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti);
      return GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsMaterialSimple*)::rtti;
}



/* JPH::PhysicsMaterialSimple::CastTo(JPH::RTTI const*) const */

void JPH::PhysicsMaterialSimple::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PhysicsMaterialSimple *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterialSimple::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PhysicsMaterialSimple::RestoreBinaryState(PhysicsMaterialSimple *this,StreamIn *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  PhysicsMaterialSimple *pPVar4;
  ulong uVar5;
  ulong __n;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::PhysicsMaterial::RestoreBinaryState((StreamIn *)this);
  local_34 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar2 == '\0') {
      uVar5 = (ulong)local_34;
      uVar1 = *(ulong *)(this + 0x18);
      if (uVar1 < uVar5) {
        __n = uVar5 - uVar1;
        if (0x7fffffffffffffff - uVar1 < __n) {
          std::__throw_length_error("basic_string::_M_replace_aux");
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pPVar4 = *(PhysicsMaterialSimple **)(this + 0x10);
        if (pPVar4 == this + 0x20) {
          uVar3 = 0xf;
        }
        else {
          uVar3 = *(ulong *)(this + 0x20);
        }
        if (uVar3 < uVar5) {
          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                     (this + 0x10),uVar1,0,(char *)0x0,__n);
          pPVar4 = *(PhysicsMaterialSimple **)(this + 0x10);
        }
        if (__n == 1) {
          pPVar4[uVar1] = (PhysicsMaterialSimple)0x0;
        }
        else {
          memset(pPVar4 + uVar1,0,__n);
        }
        *(ulong *)(this + 0x18) = uVar5;
        *(undefined1 *)(*(long *)(this + 0x10) + uVar5) = 0;
        uVar5 = (ulong)local_34;
      }
      else if (uVar5 < uVar1) {
        *(ulong *)(this + 0x18) = uVar5;
        *(undefined1 *)(*(long *)(this + 0x10) + uVar5) = 0;
        uVar5 = (ulong)local_34;
      }
      (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0x10),uVar5);
      goto LAB_001002ff;
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  **(undefined1 **)(this + 0x10) = 0;
LAB_001002ff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterialSimple::GetDebugName() const */

undefined8 __thiscall JPH::PhysicsMaterialSimple::GetDebugName(PhysicsMaterialSimple *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* JPH::PhysicsMaterialSimple::GetDebugColor() const */

undefined4 __thiscall JPH::PhysicsMaterialSimple::GetDebugColor(PhysicsMaterialSimple *this)

{
  return *(undefined4 *)(this + 0x30);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple() */

void __thiscall JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple(PhysicsMaterialSimple *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00100798;
  if (*(PhysicsMaterialSimple **)(this + 0x10) != this + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x001004df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(PhysicsMaterialSimple **)(this + 0x10));
    return;
  }
  return;
}



/* JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple() */

void __thiscall JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple(PhysicsMaterialSimple *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00100798;
  if (*(PhysicsMaterialSimple **)(this + 0x10) != this + 0x20) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00100519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined1 *__src;
  
  __n = *(long *)(this + 8) - (param_1 + param_2);
  uVar3 = (param_4 - param_2) + *(long *)(this + 8);
  if (this + 0x10 == *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (-1 < (long)uVar3) {
    if (uVar1 < uVar3) {
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar3 < uVar1) {
        uVar3 = uVar2;
      }
    }
    __dest = (undefined1 *)(*JPH::Allocate)(uVar3 + 1);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)this;
      }
      else {
        memcpy(__dest,*(undefined1 **)this,param_1);
      }
    }
    if ((param_3 != (char *)0x0) && (param_4 != 0)) {
      if (param_4 == 1) {
        __dest[param_1] = *param_3;
      }
      else {
        memcpy(__dest + param_1,param_3,param_4);
      }
    }
    if (__n != 0) {
      __src = (undefined1 *)(param_1 + param_2 + *(long *)this);
      if (__n == 1) {
        __dest[param_4 + param_1] = *__src;
      }
      else {
        memcpy(__dest + param_4 + param_1,__src,__n);
      }
    }
    if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this)
    {
      (*JPH::Free)();
    }
    *(undefined1 **)this = __dest;
    *(ulong *)(this + 0x10) = uVar3;
    return;
  }
  std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* JPH::GetRTTIOfType(JPH::PhysicsMaterialSimple*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple() */

void __thiscall JPH::PhysicsMaterialSimple::~PhysicsMaterialSimple(PhysicsMaterialSimple *this)

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


