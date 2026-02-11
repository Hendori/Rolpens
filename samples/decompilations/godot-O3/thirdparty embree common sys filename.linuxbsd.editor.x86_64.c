
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_001000f4;
    }
    if (__n == 0) goto LAB_001000f4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001000f4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::FileName::FileName() */

void __thiscall embree::FileName::FileName(FileName *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(FileName **)this = this + 0x10;
  this[0x10] = (FileName)0x0;
  return;
}



/* embree::FileName::FileName(char const*) */

void __thiscall embree::FileName::FileName(FileName *this,char *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  strlen(param_1);
  std::__cxx11::string::_M_replace((ulong)this,0,(char *)0x0,(ulong)param_1);
  if (*(long *)(this + 8) != 0) {
    uVar3 = 0;
    do {
      cVar1 = *(char *)(*(long *)this + uVar3);
      if ((cVar1 == '\\') || (cVar1 == '/')) {
        *(char *)(*(long *)this + uVar3) = '/';
      }
      uVar2 = *(ulong *)(this + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    while ((uVar2 != 0 && (*(char *)(*(long *)this + -1 + uVar2) == '/'))) {
      std::__cxx11::string::resize((ulong)this,(char)uVar2 + -1);
      uVar2 = *(ulong *)(this + 8);
    }
  }
  return;
}



/* embree::FileName::FileName(std::__cxx11::string const&) */

void __thiscall embree::FileName::FileName(FileName *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  std::__cxx11::string::_M_assign((string *)this);
  if (*(long *)(this + 8) != 0) {
    uVar3 = 0;
    do {
      cVar1 = *(char *)(*(long *)this + uVar3);
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        *(char *)(*(long *)this + uVar3) = '/';
      }
      uVar2 = *(ulong *)(this + 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    while ((uVar2 != 0 && (*(char *)(*(long *)this + -1 + uVar2) == '/'))) {
      std::__cxx11::string::resize((ulong)this,(char)uVar2 + -1);
      uVar2 = *(ulong *)(this + 8);
    }
  }
  return;
}



/* embree::FileName::homeFolder() */

FileName * __thiscall embree::FileName::homeFolder(FileName *this)

{
  char *pcVar1;
  
  pcVar1 = getenv("HOME");
  if (pcVar1 != (char *)0x0) {
    FileName(this,pcVar1);
    return this;
  }
  FileName(this,"");
  return this;
}



/* embree::FileName::path() const */

void embree::FileName::path(void)

{
  ulong uVar1;
  long *in_RSI;
  FileName *in_RDI;
  long in_FS_OFFSET;
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  if (uVar1 == 0xffffffffffffffff) {
    *(undefined8 *)(in_RDI + 8) = 0;
    *(FileName **)in_RDI = in_RDI + 0x10;
    in_RDI[0x10] = (FileName)0x0;
  }
  else {
    if ((ulong)in_RSI[1] < uVar1) {
      uVar1 = in_RSI[1];
    }
    local_58[0] = local_48;
    std::__cxx11::string::_M_construct<char_const*>(local_58,*in_RSI,*in_RSI + uVar1);
    FileName(in_RDI,(string *)local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0],local_48[0] + 1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::executableFolder() */

FileName * __thiscall embree::FileName::executableFolder(FileName *this)

{
  long in_FS_OFFSET;
  long *local_68 [2];
  long local_58 [2];
  long *local_48 [2];
  long local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  embree::getExecutableFileName_abi_cxx11_();
  FileName((FileName *)local_48,(string *)local_68);
  path();
  if (local_48[0] != local_38) {
    operator_delete(local_48[0],local_38[0] + 1);
  }
  if (local_68[0] != local_58) {
    operator_delete(local_68[0],local_58[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::base[abi:cxx11]() const */

void embree::FileName::base_abi_cxx11_(void)

{
  long lVar1;
  ulong uVar2;
  long in_RSI;
  long *in_RDI;
  
  lVar1 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  if (lVar1 == -1) {
    *in_RDI = (long)(in_RDI + 2);
    std::__cxx11::string::_M_construct<char*>();
    return;
  }
  uVar2 = lVar1 + 1;
  if (uVar2 <= *(ulong *)(in_RSI + 8)) {
    *in_RDI = (long)(in_RDI + 2);
    if (uVar2 <= *(ulong *)(in_RSI + 8)) {
      std::__cxx11::string::_M_construct<char_const*>();
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
               ,uVar2,*(ulong *)(in_RSI + 8));
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar2);
}



/* embree::FileName::ext[abi:cxx11]() const */

void embree::FileName::ext_abi_cxx11_(void)

{
  long lVar1;
  ulong uVar2;
  long in_RSI;
  long *in_RDI;
  
  lVar1 = std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if (lVar1 == -1) {
    *in_RDI = (long)(in_RDI + 2);
    std::__cxx11::string::_M_construct<char_const*>();
    return;
  }
  uVar2 = lVar1 + 1;
  if (uVar2 <= *(ulong *)(in_RSI + 8)) {
    *in_RDI = (long)(in_RDI + 2);
    if (uVar2 <= *(ulong *)(in_RSI + 8)) {
      std::__cxx11::string::_M_construct<char_const*>();
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
               ,uVar2,*(ulong *)(in_RSI + 8));
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar2);
}



/* embree::FileName::dropExt() const */

void embree::FileName::dropExt(void)

{
  ulong uVar1;
  string *in_RSI;
  FileName *in_RDI;
  long in_FS_OFFSET;
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if (uVar1 == 0xffffffffffffffff) {
    FileName(in_RDI,in_RSI);
  }
  else {
    if (*(ulong *)(in_RSI + 8) < uVar1) {
      uVar1 = *(ulong *)(in_RSI + 8);
    }
    local_58[0] = local_48;
    std::__cxx11::string::_M_construct<char_const*>
              (local_58,*(long *)in_RSI,*(long *)in_RSI + uVar1);
    FileName(in_RDI,(string *)local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0],local_48[0] + 1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::name[abi:cxx11]() const */

void embree::FileName::name_abi_cxx11_(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long in_RSI;
  char cVar4;
  long *in_RDI;
  
  cVar4 = (char)in_RSI;
  lVar2 = std::__cxx11::string::rfind(cVar4,0x2f);
  if (lVar2 == -1) {
    std::__cxx11::string::rfind(cVar4,0x2e);
    *in_RDI = (long)(in_RDI + 2);
  }
  else {
    uVar1 = lVar2 + 1;
    uVar3 = std::__cxx11::string::rfind(cVar4,0x2e);
    if ((uVar3 == 0xffffffffffffffff) || (uVar3 < uVar1)) {
      uVar3 = *(ulong *)(in_RSI + 8);
    }
    else {
      uVar3 = *(ulong *)(in_RSI + 8);
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                 uVar1);
    }
    *in_RDI = (long)(in_RDI + 2);
    if (*(ulong *)(in_RSI + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                 "basic_string::basic_string",uVar1);
    }
  }
  std::__cxx11::string::_M_construct<char_const*>();
  return;
}



/* embree::FileName::setExt(std::__cxx11::string const&) const */

string * embree::FileName::setExt(string *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  string *in_RCX;
  uint uVar5;
  ulong *in_RDX;
  string *psVar6;
  string *in_RSI;
  string *psVar7;
  string *psVar8;
  string *psVar9;
  long in_FS_OFFSET;
  string *local_88;
  long local_80;
  long local_78 [2];
  string *local_68;
  long local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  uVar2 = 0;
  if (lVar1 != -1) {
    uVar2 = lVar1 + 1;
  }
  uVar3 = std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if ((uVar3 == 0xffffffffffffffff) || (uVar3 < uVar2)) {
    uVar2 = *(ulong *)(in_RSI + 8);
    psVar9 = (string *)in_RDX[1];
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    psVar8 = *(string **)in_RSI;
    in_RSI = (string *)&local_68;
    uVar3 = *in_RDX;
    psVar7 = psVar9 + uVar2;
    local_60 = 0;
    local_68 = (string *)local_58;
    std::__cxx11::string::reserve((ulong)in_RSI);
    in_RCX = (string *)0x3fffffffffffffff;
    if (uVar2 <= 0x3fffffffffffffffU - local_60) {
      std::__cxx11::string::_M_append((char *)in_RSI,(ulong)psVar8);
      in_RCX = (string *)(0x3fffffffffffffff - local_60);
      psVar7 = psVar8;
      if (psVar9 <= in_RCX) {
        std::__cxx11::string::_M_append((char *)in_RSI,uVar3);
        FileName((FileName *)param_1,in_RSI);
        if (local_68 != (string *)local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        goto LAB_001009b9;
      }
    }
LAB_00100a3c:
    plVar4 = (long *)std::__throw_length_error("basic_string::append");
LAB_00100a50:
    uVar2 = 0;
    do {
      uVar5 = (int)uVar2 + 8;
      uVar3 = (ulong)uVar5;
      *(undefined8 *)(in_RSI + uVar2) = *(undefined8 *)(in_RCX + uVar2);
      uVar2 = uVar3;
    } while (uVar5 < ((uint)psVar7 & 0xfffffff8));
    psVar8 = in_RSI + uVar3;
    psVar6 = in_RCX + uVar3;
LAB_001009f3:
    lVar1 = 0;
    if (((ulong)psVar7 & 4) != 0) {
      *(undefined4 *)psVar8 = *(undefined4 *)psVar6;
      lVar1 = 4;
    }
    if (((ulong)psVar7 & 2) != 0) {
      *(undefined2 *)(psVar8 + lVar1) = *(undefined2 *)(psVar6 + lVar1);
      lVar1 = lVar1 + 2;
    }
    if (((ulong)psVar7 & 1) != 0) {
      psVar8[lVar1] = psVar6[lVar1];
    }
  }
  else {
    psVar9 = (string *)local_78;
    if (*(ulong *)(in_RSI + 8) < uVar3) {
      uVar3 = *(ulong *)(in_RSI + 8);
    }
    local_88 = psVar9;
    std::__cxx11::string::_M_construct<char_const*>
              (&local_88,*(long *)in_RSI,*(long *)in_RSI + uVar3);
    psVar7 = (string *)*in_RDX;
    if (0x3fffffffffffffffU - local_80 < in_RDX[1]) goto LAB_00100a3c;
    in_RSI = (string *)local_58;
    plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,*in_RDX);
    local_68 = (string *)*plVar4;
    in_RCX = (string *)(plVar4 + 2);
    if (local_68 == in_RCX) {
      psVar7 = (string *)(plVar4[1] + 1);
      psVar6 = in_RCX;
      psVar8 = in_RSI;
      local_68 = in_RSI;
      if (7 < (uint)psVar7) goto LAB_00100a50;
      goto LAB_001009f3;
    }
    local_58[0] = plVar4[2];
  }
  local_60 = plVar4[1];
  *plVar4 = (long)in_RCX;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 2) = 0;
  FileName((FileName *)param_1,(string *)&local_68);
  if (local_68 != in_RSI) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_88 != psVar9) {
    operator_delete(local_88,local_78[0] + 1);
  }
LAB_001009b9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::addExt(std::__cxx11::string const&) const */

string * embree::FileName::addExt(string *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *in_RDX;
  ulong *in_RSI;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  uVar1 = in_RDX[1];
  uVar2 = in_RSI[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *in_RSI;
  uVar4 = *in_RDX;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  std::__cxx11::string::reserve((ulong)&local_68);
  if (uVar2 <= 0x3fffffffffffffffU - local_60) {
    std::__cxx11::string::_M_append((char *)&local_68,uVar3);
    if (uVar1 <= 0x3fffffffffffffffU - local_60) {
      std::__cxx11::string::_M_append((char *)&local_68,uVar4);
      FileName((FileName *)param_1,(string *)&local_68);
      if (local_68 != &local_58) {
        operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
      goto LAB_00100b7a;
    }
  }
  std::__throw_length_error("basic_string::append");
LAB_00100b7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&) const */

FileName * __thiscall embree::FileName::operator+(FileName *this,FileName *param_1)

{
  long *plVar1;
  ulong *in_RCX;
  uint uVar2;
  ulong *in_RDX;
  ulong uVar3;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  undefined1 local_89;
  undefined1 *local_88;
  long local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  ulong *local_68;
  long local_60;
  ulong local_58 [3];
  long local_40;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 == 0) {
    *(FileName **)this = this + 0x10;
    std::__cxx11::string::_M_construct<char*>(this,*in_RDX,in_RDX[1] + *in_RDX);
    goto LAB_00100cee;
  }
  uVar4 = *(ulong *)param_1;
  uVar6 = uVar3 + 1;
  local_89 = 0x2f;
  local_80 = 0;
  local_78 = 0;
  local_88 = &local_78;
  std::__cxx11::string::reserve((ulong)&local_88);
  if (0x3fffffffffffffffU - local_80 < uVar3) {
LAB_00100d6c:
    plVar1 = (long *)std::__throw_length_error("basic_string::append");
LAB_00100d80:
    uVar3 = 0;
    do {
      uVar2 = (int)uVar3 + 8;
      uVar4 = (ulong)uVar2;
      *(undefined8 *)((long)in_RDX + uVar3) = *(undefined8 *)((long)in_RCX + uVar3);
      uVar3 = uVar4;
    } while (uVar2 < ((uint)uVar6 & 0xfffffff8));
    puVar8 = (ulong *)((long)in_RDX + uVar4);
    puVar5 = (ulong *)(uVar4 + (long)in_RCX);
LAB_00100d2b:
    lVar7 = 0;
    if ((uVar6 & 4) != 0) {
      *(int *)puVar8 = (int)*puVar5;
      lVar7 = 4;
    }
    if ((uVar6 & 2) != 0) {
      *(undefined2 *)((long)puVar8 + lVar7) = *(undefined2 *)((long)puVar5 + lVar7);
      lVar7 = lVar7 + 2;
    }
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)((long)puVar8 + lVar7) = *(undefined1 *)((long)puVar5 + lVar7);
    }
  }
  else {
    std::__cxx11::string::_M_append((char *)&local_88,uVar4);
    uVar6 = uVar4;
    if (local_80 == 0x3fffffffffffffff) goto LAB_00100d6c;
    std::__cxx11::string::_M_append((char *)&local_88,(ulong)&local_89);
    uVar6 = *in_RDX;
    in_RCX = (ulong *)(0x3fffffffffffffff - local_80);
    if (in_RCX < (ulong *)in_RDX[1]) goto LAB_00100d6c;
    in_RDX = local_58;
    plVar1 = (long *)std::__cxx11::string::_M_append((char *)&local_88,uVar6);
    local_68 = (ulong *)*plVar1;
    in_RCX = (ulong *)(plVar1 + 2);
    if (local_68 == in_RCX) {
      uVar6 = plVar1[1] + 1;
      puVar5 = in_RCX;
      puVar8 = in_RDX;
      local_68 = in_RDX;
      if (7 < (uint)uVar6) goto LAB_00100d80;
      goto LAB_00100d2b;
    }
    local_58[0] = plVar1[2];
  }
  local_60 = plVar1[1];
  *plVar1 = (long)in_RCX;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  FileName(this,(string *)&local_68);
  if (local_68 != in_RDX) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
LAB_00100cee:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&) const */

FileName * __thiscall embree::FileName::operator+(FileName *this,string *param_1)

{
  string *in_RDX;
  long in_FS_OFFSET;
  long *local_48 [2];
  long local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileName((FileName *)local_48,in_RDX);
  operator+(this,(FileName *)param_1);
  if (local_48[0] != local_38) {
    operator_delete(local_48[0],local_38[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&) const */

FileName * __thiscall embree::FileName::operator-(FileName *this,FileName *param_1)

{
  ulong uVar1;
  long lVar2;
  long *in_RDX;
  ulong uVar3;
  long in_FS_OFFSET;
  long *local_58 [2];
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_48;
  std::__cxx11::string::_M_construct<char*>(local_58,*in_RDX,in_RDX[1] + *in_RDX);
  lVar2 = std::__cxx11::string::find_first_of((char *)param_1,(ulong)local_58[0],0);
  if (local_58[0] != local_48) {
    operator_delete(local_58[0],local_48[0] + 1);
  }
  if (lVar2 == -1) {
    *(FileName **)this = this + 0x10;
    std::__cxx11::string::_M_construct<char*>
              (this,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = lVar2 + 1;
    if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                 uVar3,uVar1);
    }
    local_58[0] = local_48;
    std::__cxx11::string::_M_construct<char_const*>
              (local_58,*(long *)param_1 + uVar3,uVar1 + *(long *)param_1);
    FileName(this,(string *)local_58);
    if (local_58[0] != local_48) {
      operator_delete(local_58[0],local_48[0] + 1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&, embree::FileName const&) */

undefined8 embree::operator==(FileName *param_1,FileName *param_2)

{
  size_t __n;
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  __n = *(size_t *)(param_1 + 8);
  uVar2 = 0;
  if ((__n == *(size_t *)(param_2 + 8)) && (uVar2 = 1, __n != 0)) {
    iVar1 = memcmp(*(void **)param_1,*(void **)param_2,__n);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* embree::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&, embree::FileName const&) */

undefined8 embree::operator!=(FileName *param_1,FileName *param_2)

{
  size_t __n;
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  __n = *(size_t *)(param_1 + 8);
  uVar2 = 1;
  if ((__n == *(size_t *)(param_2 + 8)) && (uVar2 = 0, __n != 0)) {
    iVar1 = memcmp(*(void **)param_1,*(void **)param_2,__n);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* embree::TEMPNAMEPLACEHOLDERVALUE(std::ostream&, embree::FileName const&) */

void embree::operator<<(ostream *param_1,FileName *param_2)

{
  std::__ostream_insert<char,std::char_traits<char>>
            (param_1,*(char **)param_2,*(long *)(param_2 + 8));
  return;
}


