
/* JPH::StateRecorderImpl::WriteBytes(void const*, unsigned long) */

void JPH::StateRecorderImpl::WriteBytes(void *param_1,ulong param_2)

{
  std::ostream::write((char *)((long)param_1 + 0x28),param_2);
  return;
}



/* JPH::StateRecorderImpl::ReadBytes(void*, unsigned long) */

void __thiscall
JPH::StateRecorderImpl::ReadBytes(StateRecorderImpl *this,void *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *__s1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  undefined1 *puVar8;
  
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  puVar6 = auStack_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x10] == (StateRecorderImpl)0x0) {
    std::istream::read((char *)(this + 0x18),(long)param_1);
  }
  else {
    puVar3 = auStack_48;
    while (puVar8 != auStack_48 + -(param_2 + 0x17 & 0xfffffffffffff000)) {
      puVar7 = puVar3 + -0x1000;
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      puVar8 = puVar3 + -0x1000;
      puVar3 = puVar3 + -0x1000;
    }
    uVar5 = (ulong)((uint)(param_2 + 0x17) & 0xff0);
    lVar2 = -uVar5;
    puVar6 = puVar7 + lVar2;
    if (uVar5 != 0) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    __s1 = (void *)((ulong)(puVar7 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1000cd;
    std::istream::read((char *)(this + 0x18),(long)__s1);
    *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1000db;
    iVar4 = memcmp(__s1,param_1,param_2);
    if (iVar4 != 0) {
      uVar5 = 0;
      *(undefined8 *)(puVar7 + lVar2 + -8) = 0x1000f3;
      (*Trace)("Mismatch reading %u bytes",param_2 & 0xffffffff);
      if (param_2 != 0) {
        do {
          if (*(char *)((long)param_1 + uVar5) != *(char *)((long)__s1 + uVar5)) {
            *(undefined8 *)(puVar7 + lVar2 + -8) = 0x10011c;
            (*Trace)("Offset %d: %02X -> %02X",uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (param_2 != uVar5);
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined8 *)(puVar7 + lVar2 + -8) = 0x100134;
    memcpy(param_1,__s1,param_2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_0010013e;
    __stack_chk_fail();
  }
  return;
}



/* non-virtual thunk to JPH::StateRecorderImpl::WriteBytes(void const*, unsigned long) */

void __thiscall
JPH::StateRecorderImpl::WriteBytes(StateRecorderImpl *this,void *param_1,ulong param_2)

{
  std::ostream::write((char *)(this + 0x20),(long)param_1);
  return;
}



/* JPH::StateRecorderImpl::Rewind() */

void __thiscall JPH::StateRecorderImpl::Rewind(StateRecorderImpl *this)

{
  std::istream::seekg(this + 0x18,0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001001f6) */
/* JPH::StateRecorderImpl::Clear() */

void __thiscall JPH::StateRecorderImpl::Clear(StateRecorderImpl *this)

{
  long in_FS_OFFSET;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios::clear(this + 0x98);
  local_38[0] = 0;
  std::__cxx11::string::_M_replace((ulong)(this + 0x78),0,*(char **)(this + 0x80),(ulong)local_38);
  std::__cxx11::stringbuf::_M_sync((char *)(this + 0x30),*(ulong *)(this + 0x78),0);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::StateRecorderImpl::IsEqual(JPH::StateRecorderImpl&) */

undefined8 __thiscall
JPH::StateRecorderImpl::IsEqual(StateRecorderImpl *this,StateRecorderImpl *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  std::istream::seekg(this + 0x18,0,2);
  uVar3 = std::istream::tellg();
  std::istream::seekg(this + 0x18,0,0);
  std::istream::seekg(param_1 + 0x18,0,2);
  uVar4 = std::istream::tellg();
  std::istream::seekg(param_1 + 0x18,0,0);
  if (uVar3 != uVar4) {
    (*Trace)("Failed to properly recover state, different stream length!");
    return 0;
  }
  uVar4 = 0;
  if (0 < (long)uVar3) {
    do {
      iVar1 = std::istream::get();
      iVar2 = std::istream::get();
      if (iVar1 != iVar2) {
        (*Trace)("Failed to properly recover state, different at offset %d!",uVar4 & 0xffffffff);
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return 1;
}



/* JPH::StateRecorderImpl::IsEOF() const */

uint __thiscall JPH::StateRecorderImpl::IsEOF(StateRecorderImpl *this)

{
  return *(uint *)(this + 0xb8) >> 1 & 1;
}



/* JPH::StateRecorderImpl::IsFailed() const */

bool __thiscall JPH::StateRecorderImpl::IsFailed(StateRecorderImpl *this)

{
  return ((byte)this[0xb8] & 5) != 0;
}



/* non-virtual thunk to JPH::StateRecorderImpl::IsFailed() const */

bool __thiscall JPH::StateRecorderImpl::IsFailed(StateRecorderImpl *this)

{
  return ((byte)this[0xb0] & 5) != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to JPH::StateRecorderImpl::~StateRecorderImpl() */

void __thiscall JPH::StateRecorderImpl::~StateRecorderImpl(StateRecorderImpl *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined **)(this + 0x10) = &std::streambuf::vtable;
  *(code **)(this + 0x90) = std::istream::get;
  *(undefined ***)(this + -8) = &PTR__StateRecorderImpl_00100988;
  *(undefined ***)this = &PTR__StateRecorderImpl_001009c8;
  *(code **)(this + 0x20) = std::istream::seekg;
  *(undefined **)(this + 0x28) = &std::streambuf::vtable;
  if (*(StateRecorderImpl **)(this + 0x70) != this + 0x80) {
    operator_delete(*(StateRecorderImpl **)(this + 0x70),*(long *)(this + 0x80) + 1);
  }
  *(undefined **)(this + 0x28) = &std::__cxx11::stringstream::VTT;
  std::locale::~locale((locale *)(this + 0x60));
  *(undefined8 *)(this + *(long *)(_vtable + -0x18) + 0x10) = __M_sync;
  uVar2 = __M_replace;
  lVar1 = _clear;
  *(long *)(this + 0x20) = _clear;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x20) = uVar2;
  uVar2 = _seekg;
  lVar1 = __ios_base;
  *(long *)(this + 0x10) = __ios_base;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(code **)(this + 0x90) = std::istream::seekg;
  std::ios_base::~ios_base((ios_base *)(this + 0x90));
  operator_delete(this + -8,0x1a0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StateRecorderImpl::~StateRecorderImpl() */

void __thiscall JPH::StateRecorderImpl::~StateRecorderImpl(StateRecorderImpl *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined **)(this + 0x18) = &std::streambuf::vtable;
  *(code **)(this + 0x98) = std::istream::get;
  *(undefined ***)this = &PTR__StateRecorderImpl_00100988;
  *(undefined ***)(this + 8) = &PTR__StateRecorderImpl_001009c8;
  *(code **)(this + 0x28) = std::istream::seekg;
  *(undefined **)(this + 0x30) = &std::streambuf::vtable;
  if (*(StateRecorderImpl **)(this + 0x78) != this + 0x88) {
    operator_delete(*(StateRecorderImpl **)(this + 0x78),*(long *)(this + 0x88) + 1);
  }
  *(undefined **)(this + 0x30) = &std::__cxx11::stringstream::VTT;
  std::locale::~locale((locale *)(this + 0x68));
  *(undefined8 *)(this + *(long *)(_vtable + -0x18) + 0x18) = __M_sync;
  uVar2 = __M_replace;
  lVar1 = _clear;
  *(long *)(this + 0x28) = _clear;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x28) = uVar2;
  uVar2 = _seekg;
  lVar1 = __ios_base;
  *(long *)(this + 0x18) = __ios_base;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = 0;
  *(code **)(this + 0x98) = std::istream::seekg;
  std::ios_base::~ios_base((ios_base *)(this + 0x98));
  operator_delete(this,0x1a0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to JPH::StateRecorderImpl::~StateRecorderImpl() */

void __thiscall JPH::StateRecorderImpl::~StateRecorderImpl(StateRecorderImpl *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined **)(this + 0x10) = &std::streambuf::vtable;
  *(code **)(this + 0x90) = std::istream::get;
  *(undefined ***)(this + -8) = &PTR__StateRecorderImpl_00100988;
  *(undefined ***)this = &PTR__StateRecorderImpl_001009c8;
  *(code **)(this + 0x20) = std::istream::seekg;
  *(undefined **)(this + 0x28) = &std::streambuf::vtable;
  if (*(StateRecorderImpl **)(this + 0x70) != this + 0x80) {
    operator_delete(*(StateRecorderImpl **)(this + 0x70),*(long *)(this + 0x80) + 1);
  }
  *(undefined **)(this + 0x28) = &std::__cxx11::stringstream::VTT;
  std::locale::~locale((locale *)(this + 0x60));
  *(undefined8 *)(this + *(long *)(_vtable + -0x18) + 0x10) = __M_sync;
  uVar2 = __M_replace;
  lVar1 = _clear;
  *(long *)(this + 0x20) = _clear;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x20) = uVar2;
  uVar2 = _seekg;
  lVar1 = __ios_base;
  *(long *)(this + 0x10) = __ios_base;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(code **)(this + 0x90) = std::istream::seekg;
  std::ios_base::~ios_base((ios_base *)(this + 0x90));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::StateRecorderImpl::~StateRecorderImpl() */

void __thiscall JPH::StateRecorderImpl::~StateRecorderImpl(StateRecorderImpl *this)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined **)(this + 0x18) = &std::streambuf::vtable;
  *(code **)(this + 0x98) = std::istream::get;
  *(undefined ***)this = &PTR__StateRecorderImpl_00100988;
  *(undefined ***)(this + 8) = &PTR__StateRecorderImpl_001009c8;
  *(code **)(this + 0x28) = std::istream::seekg;
  *(undefined **)(this + 0x30) = &std::streambuf::vtable;
  if (*(StateRecorderImpl **)(this + 0x78) != this + 0x88) {
    operator_delete(*(StateRecorderImpl **)(this + 0x78),*(long *)(this + 0x88) + 1);
  }
  *(undefined **)(this + 0x30) = &std::__cxx11::stringstream::VTT;
  std::locale::~locale((locale *)(this + 0x68));
  *(undefined8 *)(this + *(long *)(_vtable + -0x18) + 0x18) = __M_sync;
  uVar2 = __M_replace;
  lVar1 = _clear;
  *(long *)(this + 0x28) = _clear;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x28) = uVar2;
  uVar2 = _seekg;
  lVar1 = __ios_base;
  *(long *)(this + 0x18) = __ios_base;
  *(undefined8 *)(this + *(long *)(lVar1 + -0x18) + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = 0;
  *(code **)(this + 0x98) = std::istream::seekg;
  std::ios_base::~ios_base((ios_base *)(this + 0x98));
  return;
}



/* JPH::StateRecorderImpl::WriteBytes(void const*, unsigned long) */

void JPH::StateRecorderImpl::_GLOBAL__sub_I_WriteBytes(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC4;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::StateRecorderImpl::~StateRecorderImpl() */

void __thiscall JPH::StateRecorderImpl::~StateRecorderImpl(StateRecorderImpl *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


