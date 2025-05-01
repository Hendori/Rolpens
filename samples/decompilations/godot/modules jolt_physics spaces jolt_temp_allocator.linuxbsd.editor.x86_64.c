
/* JoltTempAllocator::~JoltTempAllocator() */

void __thiscall JoltTempAllocator::~JoltTempAllocator(JoltTempAllocator *this)

{
  *(undefined ***)this = &PTR__JoltTempAllocator_00100990;
                    /* WARNING: Could not recover jumptable at 0x00100012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(*(undefined8 *)(this + 0x18));
  return;
}



/* JoltTempAllocator::~JoltTempAllocator() */

void __thiscall JoltTempAllocator::~JoltTempAllocator(JoltTempAllocator *this)

{
  *(undefined ***)this = &PTR__JoltTempAllocator_00100990;
  (*JPH::Free)(*(undefined8 *)(this + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00100040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
  return;
}



/* JoltTempAllocator::Free(void*, unsigned int) */

void __thiscall JoltTempAllocator::Free(JoltTempAllocator *this,void *param_1,uint param_2)

{
  code *pcVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  lVar3 = *(ulong *)(this + 0x10) - (ulong)(param_2 + 0xf & 0xfffffff0);
  if (*(ulong *)(this + 8) < *(ulong *)(this + 0x10)) {
    (*JPH::Free)(param_1);
  }
  else {
    pvVar2 = (void *)(*(long *)(this + 0x18) + lVar3);
    if (param_1 != pvVar2) {
      _err_print_error(&_LC3,"modules/jolt_physics/spaces/jolt_temp_allocator.cpp",0x71,
                       "FATAL: Method/function failed.",
                       "Jolt Physics temporary memory was freed in the wrong order.",0,0,pvVar2);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* JoltTempAllocator::JoltTempAllocator() */

void __thiscall JoltTempAllocator::JoltTempAllocator(JoltTempAllocator *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__JoltTempAllocator_00100990;
  uVar1 = JoltProjectSettings::get_temp_memory_b();
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = (*JPH::Allocate)(uVar1);
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}



/* JoltTempAllocator::Allocate(unsigned int) */

long __thiscall JoltTempAllocator::Allocate(JoltTempAllocator *this,uint param_1)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = (ulong)(param_1 + 0xf & 0xfffffff0);
    uVar2 = *(long *)(this + 0x10) + uVar5;
    if (*(ulong *)(this + 8) < uVar2) {
      if (Allocate(unsigned_int)::first_print != '\0') {
        JoltProjectSettings::get_temp_memory_mib();
        local_60 = 0;
        local_58 = 
        "Jolt Physics temporary memory allocator exceeded capacity of %d MiB. Falling back to slower general-purpose allocator. Consider increasing maximum temporary memory in project settings."
        ;
        local_50 = 0xb8;
        String::parse_latin1((StrRange *)&local_60);
        vformat<int>((String_conflict *)&local_58,(int)(StrRange *)&local_60);
        _err_print_error("Allocate","modules/jolt_physics/spaces/jolt_temp_allocator.cpp",0x59,
                         (String_conflict *)&local_58,0,1);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar4 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        Allocate(unsigned_int)::first_print = '\0';
      }
      lVar4 = (*JPH::Allocate)(uVar5);
    }
    else {
      lVar4 = *(long *)(this + 0x10) + *(long *)(this + 0x18);
    }
    *(ulong *)(this + 0x10) = uVar2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00100598) */
/* WARNING: Removing unreachable block (ram,0x001006c8) */
/* WARNING: Removing unreachable block (ram,0x00100890) */
/* WARNING: Removing unreachable block (ram,0x001006d4) */
/* WARNING: Removing unreachable block (ram,0x001006de) */
/* WARNING: Removing unreachable block (ram,0x00100870) */
/* WARNING: Removing unreachable block (ram,0x001006ea) */
/* WARNING: Removing unreachable block (ram,0x001006f4) */
/* WARNING: Removing unreachable block (ram,0x00100850) */
/* WARNING: Removing unreachable block (ram,0x00100700) */
/* WARNING: Removing unreachable block (ram,0x0010070a) */
/* WARNING: Removing unreachable block (ram,0x00100830) */
/* WARNING: Removing unreachable block (ram,0x00100716) */
/* WARNING: Removing unreachable block (ram,0x00100720) */
/* WARNING: Removing unreachable block (ram,0x00100810) */
/* WARNING: Removing unreachable block (ram,0x0010072c) */
/* WARNING: Removing unreachable block (ram,0x00100736) */
/* WARNING: Removing unreachable block (ram,0x001007f0) */
/* WARNING: Removing unreachable block (ram,0x00100742) */
/* WARNING: Removing unreachable block (ram,0x0010074c) */
/* WARNING: Removing unreachable block (ram,0x001007d0) */
/* WARNING: Removing unreachable block (ram,0x00100754) */
/* WARNING: Removing unreachable block (ram,0x0010076a) */
/* WARNING: Removing unreachable block (ram,0x00100776) */
/* String vformat<int>(String const&, int const) */

String_conflict * vformat<int>(String_conflict *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JoltTempAllocator::JoltTempAllocator() */

void JoltTempAllocator::_GLOBAL__sub_I_JoltTempAllocator(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC12;
  }
  return;
}


