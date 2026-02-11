
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TInfoSinkBase::append(char const*) */

void __thiscall glslang::TInfoSinkBase::append(TInfoSinkBase *this,char *param_1)

{
  ulong uVar1;
  uint uVar2;
  size_t sVar3;
  long lVar4;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 4) == 0) goto LAB_00100088;
  lVar4 = *(long *)(this + 8);
  if (param_1 == (char *)0x0) {
    if (5 < 0x3fffffffffffffffU - lVar4) {
      std::__cxx11::string::_M_append((char *)this,0x100346);
      uVar2 = *(uint *)(this + 0x20);
      goto LAB_00100088;
    }
    goto LAB_001000f0;
  }
  sVar3 = strlen(param_1);
  uVar1 = sVar3 + 2 + lVar4;
  if (*(TInfoSinkBase **)this == this + 0x10) {
    if (0xf < uVar1) goto LAB_00100051;
  }
  else if (*(ulong *)(this + 0x10) < uVar1) {
LAB_00100051:
    std::__cxx11::string::reserve((ulong)this);
    sVar3 = strlen(param_1);
    lVar4 = *(long *)(this + 8);
  }
  if (0x3fffffffffffffffU - lVar4 < sVar3) {
LAB_001000f0:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::string::_M_append((char *)this,(ulong)param_1);
  uVar2 = *(uint *)(this + 0x20);
LAB_00100088:
  if ((uVar2 & 2) != 0) {
    fputs(param_1,_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TInfoSinkBase::append(int, char) */

void __thiscall glslang::TInfoSinkBase::append(TInfoSinkBase *this,int param_1,char param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 4) == 0) goto joined_r0x0010016c;
  uVar3 = *(ulong *)(this + 8);
  uVar1 = (long)param_1 + 2 + uVar3;
  if (*(TInfoSinkBase **)this == this + 0x10) {
    if (0xf < uVar1) goto LAB_0010014a;
  }
  else if (*(ulong *)(this + 0x10) < uVar1) {
LAB_0010014a:
    std::__cxx11::string::reserve((ulong)this);
    uVar3 = *(ulong *)(this + 8);
  }
  std::__cxx11::string::_M_replace_aux((ulong)this,uVar3,0,(char)param_1);
  uVar2 = *(uint *)(this + 0x20);
joined_r0x0010016c:
  if ((uVar2 & 2) != 0) {
    fputc((int)param_2,_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TInfoSinkBase::append(std::__cxx11::string const&) */

void __thiscall glslang::TInfoSinkBase::append(TInfoSinkBase *this,string *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 4) == 0) goto joined_r0x0010021e;
  uVar4 = *(ulong *)(param_1 + 8);
  lVar3 = *(long *)(this + 8);
  uVar1 = uVar4 + 2 + lVar3;
  if (*(TInfoSinkBase **)this == this + 0x10) {
    if (0xf < uVar1) goto LAB_001001eb;
  }
  else if (*(ulong *)(this + 0x10) < uVar1) {
LAB_001001eb:
    std::__cxx11::string::reserve((ulong)this);
    uVar4 = *(ulong *)(param_1 + 8);
    lVar3 = *(long *)(this + 8);
  }
  if (0x3fffffffffffffffU - lVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::string::_M_append((char *)this,*(ulong *)param_1);
  uVar2 = *(uint *)(this + 0x20);
joined_r0x0010021e:
  if ((uVar2 & 2) != 0) {
    fputs(*(char **)param_1,_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TInfoSinkBase::append(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TInfoSinkBase::append(TInfoSinkBase *this,basic_string *param_1)

{
  ulong uVar1;
  uint uVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  
  uVar2 = *(uint *)(this + 0x20);
  if ((uVar2 & 4) == 0) goto joined_r0x001002f8;
  lVar4 = *(long *)(this + 8);
  uVar1 = lVar4 + 2 + *(long *)(param_1 + 0x10);
  if (*(TInfoSinkBase **)this == this + 0x10) {
    if (0xf < uVar1) goto LAB_001002bb;
  }
  else if (*(ulong *)(this + 0x10) < uVar1) {
LAB_001002bb:
    std::__cxx11::string::reserve((ulong)this);
    lVar4 = *(long *)(this + 8);
  }
  __s = *(char **)(param_1 + 8);
  sVar3 = strlen(__s);
  if (0x3fffffffffffffffU - lVar4 < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  std::__cxx11::string::_M_append((char *)this,(ulong)__s);
  uVar2 = *(uint *)(this + 0x20);
joined_r0x001002f8:
  if ((uVar2 & 2) != 0) {
    fputs(*(char **)(param_1 + 8),_stdout);
    return;
  }
  return;
}


