
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
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  strlen(param_1);
  std::__cxx11::string::_M_replace((ulong)this,0,(char *)0x0,(ulong)param_1);
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)this;
      pcVar1 = (char *)(lVar4 + uVar5);
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_001000d6;
        pcVar1 = (char *)(lVar4 + uVar5);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar3 = *(ulong *)(this + 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    while (uVar3 != 0) {
      lVar4 = *(long *)this;
LAB_001000d6:
      if (*(char *)(lVar4 + -1 + uVar3) != '/') {
        return;
      }
      std::__cxx11::string::resize((ulong)this,(char)uVar3 + -1);
      uVar3 = *(ulong *)(this + 8);
    }
  }
  return;
}



/* embree::FileName::FileName(std::__cxx11::string const&) */

void __thiscall embree::FileName::FileName(FileName *this,string *param_1)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  std::__cxx11::string::_M_assign((string *)this);
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)this;
      pcVar1 = (char *)(lVar4 + uVar5);
      cVar2 = *pcVar1;
      while ((cVar2 != '/' && (cVar2 != '\\'))) {
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_00100186;
        pcVar1 = (char *)(lVar4 + uVar5);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar3 = *(ulong *)(this + 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    while (uVar3 != 0) {
      lVar4 = *(long *)this;
LAB_00100186:
      if (*(char *)(lVar4 + -1 + uVar3) != '/') {
        return;
      }
      std::__cxx11::string::resize((ulong)this,(char)uVar3 + -1);
      uVar3 = *(ulong *)(this + 8);
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



/* embree::FileName::executableFolder() */

FileName * __thiscall embree::FileName::executableFolder(FileName *this)

{
  char *pcVar1;
  char cVar2;
  undefined1 *__src;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_b0;
  long *local_a8;
  long local_98 [2];
  undefined1 *local_88;
  ulong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  embree::getExecutableFileName_abi_cxx11_();
  local_80 = 0;
  local_78 = 0;
  local_88 = &local_78;
  std::__cxx11::string::_M_assign((string *)&local_88);
  uVar4 = 0;
  if (local_80 != 0) {
    do {
      pcVar1 = local_88 + uVar4;
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar4 = uVar4 + 1;
        if (local_80 <= uVar4) goto LAB_0010036d;
        pcVar1 = local_88 + uVar4;
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_80);
    while (local_80 != 0) {
LAB_0010036d:
      if (local_88[local_80 - 1] != '/') break;
      std::__cxx11::string::resize((ulong)&local_88,(char)local_80 + -1);
    }
  }
  uVar4 = std::__cxx11::string::rfind((char)(string *)&local_88,0x2f);
  __src = local_88;
  if (uVar4 == 0xffffffffffffffff) {
    *(undefined8 *)(this + 8) = 0;
    *(FileName **)this = this + 0x10;
    this[0x10] = (FileName)0x0;
    goto LAB_001002e9;
  }
  uVar5 = local_80;
  if (uVar4 <= local_80) {
    uVar5 = uVar4;
  }
  local_68 = local_58;
  local_b0 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*local_88);
    }
    else if (uVar5 != 0) goto LAB_001004d1;
  }
  else {
    local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_b0);
    local_58[0] = local_b0;
LAB_001004d1:
    memcpy(local_68,__src,uVar5);
  }
  *(undefined1 *)((long)local_68 + local_b0) = 0;
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  local_60 = local_b0;
  std::__cxx11::string::_M_assign((string *)this);
  uVar4 = *(ulong *)(this + 8);
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      lVar3 = *(long *)this;
      pcVar1 = (char *)(lVar3 + uVar5);
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar5 = uVar5 + 1;
        if (uVar4 <= uVar5) goto LAB_00100486;
        pcVar1 = (char *)(lVar3 + uVar5);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar4 = *(ulong *)(this + 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
    while (uVar4 != 0) {
      lVar3 = *(long *)this;
LAB_00100486:
      if (*(char *)(lVar3 + -1 + uVar4) != '/') break;
      std::__cxx11::string::resize((ulong)this,(char)uVar4 + -1);
      uVar4 = *(ulong *)(this + 8);
    }
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
LAB_001002e9:
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  if (local_a8 != local_98) {
    operator_delete(local_a8,local_98[0] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::path() const */

void embree::FileName::path(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *in_RSI;
  string *in_RDI;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  if (uVar3 == 0xffffffffffffffff) {
    *(undefined8 *)(in_RDI + 8) = 0;
    *(string **)in_RDI = in_RDI + 0x10;
    in_RDI[0x10] = (string)0x0;
    goto LAB_00100543;
  }
  __src = (undefined1 *)*in_RSI;
  uVar5 = in_RSI[1];
  if (uVar3 <= (ulong)in_RSI[1]) {
    uVar5 = uVar3;
  }
  local_58 = local_48;
  local_60 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,*__src);
    }
    else if (uVar5 != 0) goto LAB_001006c1;
  }
  else {
    local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
LAB_001006c1:
    memcpy(local_58,__src,uVar5);
  }
  *(undefined1 *)((long)local_58 + local_60) = 0;
  *(string **)in_RDI = in_RDI + 0x10;
  *(undefined8 *)(in_RDI + 8) = 0;
  in_RDI[0x10] = (string)0x0;
  local_50 = local_60;
  std::__cxx11::string::_M_assign(in_RDI);
  uVar3 = *(ulong *)(in_RDI + 8);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      lVar4 = *(long *)in_RDI;
      pcVar1 = (char *)(lVar4 + uVar5);
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_00100676;
        pcVar1 = (char *)(lVar4 + uVar5);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar3 = *(ulong *)(in_RDI + 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    while (uVar3 != 0) {
      lVar4 = *(long *)in_RDI;
LAB_00100676:
      if (*(char *)(lVar4 + -1 + uVar3) != '/') break;
      std::__cxx11::string::resize((ulong)in_RDI,(char)uVar3 + -1);
      uVar3 = *(ulong *)(in_RDI + 8);
    }
  }
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
LAB_00100543:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::base[abi:cxx11]() const */

void embree::FileName::base_abi_cxx11_(void)

{
  ulong uVar1;
  long lVar2;
  ulong *__dest;
  ulong uVar3;
  long *in_RSI;
  ulong *in_RDI;
  undefined1 *__src;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  if (lVar2 == -1) {
    *in_RDI = (ulong)(in_RDI + 2);
    __src = (undefined1 *)*in_RSI;
    uVar3 = in_RSI[1];
    if (uVar3 < 0x10) goto LAB_0010075a;
LAB_001007b9:
    local_28 = uVar3;
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
  }
  else {
    uVar1 = lVar2 + 1;
    if ((ulong)in_RSI[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr");
    }
    *in_RDI = (ulong)(in_RDI + 2);
    uVar3 = in_RSI[1];
    if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                 "basic_string::basic_string",uVar1,uVar3);
    }
    uVar3 = uVar3 - uVar1;
    __src = (undefined1 *)(*in_RSI + uVar1);
    if (0xf < uVar3) goto LAB_001007b9;
LAB_0010075a:
    __dest = in_RDI + 2;
    local_28 = uVar3;
    if (uVar3 == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00100768;
    }
    if (uVar3 == 0) goto LAB_00100768;
  }
  memcpy(__dest,__src,uVar3);
  __dest = (ulong *)*in_RDI;
LAB_00100768:
  in_RDI[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::FileName::ext[abi:cxx11]() const */

void embree::FileName::ext_abi_cxx11_(void)

{
  ulong uVar1;
  long lVar2;
  ulong *__dest;
  ulong uVar3;
  long *in_RSI;
  ulong *in_RDI;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if (lVar2 == -1) {
    in_RDI[1] = 0;
    *in_RDI = (ulong)(in_RDI + 2);
    *(undefined1 *)(in_RDI + 2) = 0;
    goto LAB_001008b0;
  }
  uVar1 = lVar2 + 1;
  if ((ulong)in_RSI[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr");
  }
  __dest = in_RDI + 2;
  *in_RDI = (ulong)__dest;
  lVar2 = *in_RSI;
  uVar3 = in_RSI[1];
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
               ,uVar1,uVar3);
  }
  uVar3 = uVar3 - uVar1;
  local_28 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(in_RDI + 2) = *(undefined1 *)(lVar2 + uVar1);
    }
    else if (uVar3 != 0) goto LAB_001008eb;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
LAB_001008eb:
    memcpy(__dest,(undefined1 *)(lVar2 + uVar1),uVar3);
    __dest = (ulong *)*in_RDI;
  }
  in_RDI[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
LAB_001008b0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::FileName::dropExt() const */

void embree::FileName::dropExt(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 *__src;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *in_RSI;
  string *in_RDI;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if (uVar3 == 0xffffffffffffffff) {
    in_RDI[0x10] = (string)0x0;
    *(string **)in_RDI = in_RDI + 0x10;
    *(undefined8 *)(in_RDI + 8) = 0;
    std::__cxx11::string::_M_assign(in_RDI);
    uVar3 = *(ulong *)(in_RDI + 8);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        lVar4 = *(long *)in_RDI;
        pcVar1 = (char *)(lVar4 + uVar5);
        cVar2 = *pcVar1;
        while ((cVar2 != '/' && (cVar2 != '\\'))) {
          uVar5 = uVar5 + 1;
          if (uVar3 <= uVar5) goto LAB_00100baa;
          pcVar1 = (char *)(lVar4 + uVar5);
          cVar2 = *pcVar1;
        }
        *pcVar1 = '/';
        uVar3 = *(ulong *)(in_RDI + 8);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      while (uVar3 != 0) {
        lVar4 = *(long *)in_RDI;
LAB_00100baa:
        if (*(char *)(lVar4 + -1 + uVar3) != '/') break;
        std::__cxx11::string::resize((ulong)in_RDI,(char)uVar3 + -1);
        uVar3 = *(ulong *)(in_RDI + 8);
      }
    }
    goto LAB_00100a80;
  }
  __src = (undefined1 *)*in_RSI;
  uVar5 = in_RSI[1];
  if (uVar3 <= (ulong)in_RSI[1]) {
    uVar5 = uVar3;
  }
  local_58 = local_48;
  local_60 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,*__src);
    }
    else if (uVar5 != 0) goto LAB_00100af1;
  }
  else {
    local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
LAB_00100af1:
    memcpy(local_58,__src,uVar5);
  }
  *(undefined1 *)((long)local_58 + local_60) = 0;
  *(string **)in_RDI = in_RDI + 0x10;
  *(undefined8 *)(in_RDI + 8) = 0;
  in_RDI[0x10] = (string)0x0;
  local_50 = local_60;
  std::__cxx11::string::_M_assign(in_RDI);
  uVar3 = *(ulong *)(in_RDI + 8);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      lVar4 = *(long *)in_RDI;
      pcVar1 = (char *)(lVar4 + uVar5);
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_00100abe;
        pcVar1 = (char *)(lVar4 + uVar5);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar3 = *(ulong *)(in_RDI + 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
    while (uVar3 != 0) {
      lVar4 = *(long *)in_RDI;
LAB_00100abe:
      if (*(char *)(lVar4 + -1 + uVar3) != '/') break;
      std::__cxx11::string::resize((ulong)in_RDI,(char)uVar3 + -1);
      uVar3 = *(ulong *)(in_RDI + 8);
    }
  }
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
LAB_00100a80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::name[abi:cxx11]() const */

void embree::FileName::name_abi_cxx11_(void)

{
  long lVar1;
  ulong uVar2;
  ulong *__dest;
  ulong uVar3;
  ulong uVar4;
  long *in_RSI;
  char cVar5;
  ulong *in_RDI;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = (char)in_RSI;
  lVar1 = std::__cxx11::string::rfind(cVar5,0x2f);
  if (lVar1 == -1) {
    uVar2 = std::__cxx11::string::rfind(cVar5,0x2e);
    if (uVar2 == 0xffffffffffffffff) {
      uVar2 = in_RSI[1];
    }
    uVar4 = 0;
    *in_RDI = (ulong)(in_RDI + 2);
    lVar1 = *in_RSI;
    uVar3 = in_RSI[1];
  }
  else {
    uVar4 = lVar1 + 1;
    uVar2 = std::__cxx11::string::rfind(cVar5,0x2e);
    if ((uVar2 == 0xffffffffffffffff) || (uVar2 < uVar4)) {
      uVar2 = in_RSI[1];
      uVar3 = uVar2;
    }
    else {
      uVar3 = in_RSI[1];
    }
    uVar2 = uVar2 - uVar4;
    if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                 uVar4);
    }
    *in_RDI = (ulong)(in_RDI + 2);
    uVar3 = in_RSI[1];
    lVar1 = *in_RSI;
    if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                 "basic_string::basic_string",uVar4);
    }
  }
  __dest = in_RDI + 2;
  if (uVar3 - uVar4 <= uVar2) {
    uVar2 = uVar3 - uVar4;
  }
  local_28 = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(in_RDI + 2) = *(undefined1 *)(lVar1 + uVar4);
      goto LAB_00100ca7;
    }
    if (uVar2 == 0) goto LAB_00100ca7;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
  }
  memcpy(__dest,(undefined1 *)(lVar1 + uVar4),uVar2);
  __dest = (ulong *)*in_RDI;
LAB_00100ca7:
  in_RDI[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::FileName::setExt(std::__cxx11::string const&) const */

string * embree::FileName::setExt(string *param_1)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong *in_RDX;
  ulong uVar10;
  ulong *puVar12;
  ulong *extraout_RDX;
  undefined8 *in_RSI;
  char *pcVar13;
  ulong **ppuVar14;
  ulong ***pppuVar15;
  long in_FS_OFFSET;
  undefined1 *puStack_110;
  long lStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long lStack_e8;
  string *psStack_d8;
  ulong *puStack_d0;
  ulong **ppuStack_c8;
  ulong *puStack_c0;
  undefined8 ***pppuStack_b8;
  ulong *puStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong *local_90;
  ulong **local_88;
  ulong *local_80;
  ulong *local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [5];
  ulong uVar11;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  puStack_b0 = (ulong *)0x100ddf;
  lVar4 = std::__cxx11::string::rfind((char)in_RSI,0x2f);
  puVar5 = (ulong *)0x0;
  if (lVar4 != -1) {
    puVar5 = (ulong *)(lVar4 + 1);
  }
  puStack_b0 = (ulong *)0x100e07;
  puVar6 = (ulong *)std::__cxx11::string::rfind((char)in_RSI,0x2e);
  if ((puVar6 == (ulong *)0xffffffffffffffff) || (puVar6 < puVar5)) {
    local_a8 = in_RSI[1];
    pppuVar15 = (ulong ***)in_RDX[1];
    ppuVar14 = &local_68;
    local_60 = 0;
    local_a0 = *in_RDX;
    puVar12 = (ulong *)*in_RSI;
    puVar6 = local_58;
    puVar5 = (ulong *)((long)pppuVar15 + local_a8);
    in_RDX = (ulong *)0x3fffffffffffffff;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    puStack_b0 = (ulong *)0x100fdc;
    local_68 = puVar6;
    std::__cxx11::string::reserve((ulong)ppuVar14);
    if (local_a8 <= 0x3fffffffffffffffU - local_60) {
      puStack_b0 = (ulong *)0x100ffc;
      puVar5 = puVar12;
      std::__cxx11::string::_M_append((char *)ppuVar14,(ulong)puVar12);
      if ((ulong ***)(0x3fffffffffffffff - local_60) < pppuVar15) goto LAB_0010120e;
      puStack_b0 = (ulong *)0x10101d;
      std::__cxx11::string::_M_append((char *)ppuVar14,local_a0);
      param_1[0x10] = (string)0x0;
      *(string **)param_1 = param_1 + 0x10;
      *(undefined8 *)(param_1 + 8) = 0;
      puStack_b0 = (ulong *)0x10103b;
      std::__cxx11::string::_M_assign(param_1);
      uVar8 = *(ulong *)(param_1 + 8);
      uVar10 = 0;
      if (uVar8 != 0) {
        do {
          lVar4 = *(long *)param_1;
          pcVar13 = (char *)(lVar4 + uVar10);
          cVar2 = *pcVar13;
          while ((cVar2 != '\\' && (cVar2 != '/'))) {
            uVar10 = uVar10 + 1;
            if (uVar8 <= uVar10) goto LAB_001010f6;
            pcVar13 = (char *)(lVar4 + uVar10);
            cVar2 = *pcVar13;
          }
          *pcVar13 = '/';
          uVar8 = *(ulong *)(param_1 + 8);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
        while (uVar8 != 0) {
          lVar4 = *(long *)param_1;
LAB_001010f6:
          if (*(char *)(lVar4 + -1 + uVar8) != '/') break;
          puStack_b0 = (ulong *)0x1010ea;
          std::__cxx11::string::resize((ulong)param_1,(char)uVar8 + -1);
          uVar8 = *(ulong *)(param_1 + 8);
        }
      }
      if (local_68 != puVar6) {
        puStack_b0 = (ulong *)0x1010b0;
        operator_delete(local_68,local_58[0] + 1);
      }
      goto LAB_001010b0;
    }
    goto LAB_0010120e;
  }
  ppuVar14 = local_78;
  puVar12 = (ulong *)*in_RSI;
  pppuVar15 = &local_88;
  puVar5 = (ulong *)in_RSI[1];
  if (puVar6 <= (ulong *)in_RSI[1]) {
    puVar5 = puVar6;
  }
  local_88 = ppuVar14;
  local_90 = puVar5;
  if (puVar5 < (ulong *)0x10) {
    if (puVar5 == (ulong *)0x1) {
      local_78[0] = (ulong *)CONCAT71(local_78[0]._1_7_,(char)*puVar12);
    }
    else if (puVar5 != (ulong *)0x0) goto LAB_00101159;
  }
  else {
    puStack_b0 = (ulong *)0x101147;
    local_88 = (ulong **)std::__cxx11::string::_M_create((ulong *)pppuVar15,(ulong)&local_90);
    local_78[0] = local_90;
LAB_00101159:
    puStack_b0 = (ulong *)0x101164;
    memcpy(local_88,puVar12,(size_t)puVar5);
  }
  *(char *)((long)local_88 + (long)local_90) = '\0';
  puVar5 = (ulong *)*in_RDX;
  puVar6 = local_90;
  local_80 = local_90;
  if (in_RDX[1] <= 0x3fffffffffffffffU - (long)local_90) {
    puStack_b0 = (ulong *)0x100e95;
    plVar7 = (long *)std::__cxx11::string::_M_append((char *)pppuVar15,(ulong)puVar5);
    puVar5 = (ulong *)(plVar7 + 2);
    if ((ulong *)*plVar7 == puVar5) {
      uVar8 = plVar7[1] + 1;
      puVar12 = puVar5;
      puVar6 = local_58;
      if (7 < (uint)uVar8) {
        uVar10 = 0;
        do {
          uVar9 = (int)uVar10 + 8;
          uVar11 = (ulong)uVar9;
          *(undefined8 *)((long)local_58 + uVar10) = *(undefined8 *)((long)puVar5 + uVar10);
          uVar10 = uVar11;
        } while (uVar9 < ((uint)uVar8 & 0xfffffff8));
        puVar6 = (ulong *)((long)local_58 + uVar11);
        puVar12 = (ulong *)(uVar11 + (long)puVar5);
      }
      lVar4 = 0;
      if ((uVar8 & 4) != 0) {
        *(int *)puVar6 = (int)*puVar12;
        lVar4 = 4;
      }
      if ((uVar8 & 2) != 0) {
        *(undefined2 *)((long)puVar6 + lVar4) = *(undefined2 *)((long)puVar12 + lVar4);
        lVar4 = lVar4 + 2;
      }
      local_68 = local_58;
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)((long)puVar6 + lVar4) = *(undefined1 *)((long)puVar12 + lVar4);
      }
    }
    else {
      local_58[0] = plVar7[2];
      local_68 = (ulong *)*plVar7;
    }
    local_60 = plVar7[1];
    *plVar7 = (long)puVar5;
    plVar7[1] = 0;
    *(undefined1 *)(plVar7 + 2) = 0;
    *(string **)param_1 = param_1 + 0x10;
    *(undefined8 *)(param_1 + 8) = 0;
    param_1[0x10] = (string)0x0;
    puStack_b0 = (ulong *)0x100ef0;
    std::__cxx11::string::_M_assign(param_1);
    uVar8 = *(ulong *)(param_1 + 8);
    uVar10 = 0;
    if (uVar8 != 0) {
      do {
        lVar4 = *(long *)param_1;
        pcVar13 = (char *)(lVar4 + uVar10);
        cVar2 = *pcVar13;
        while ((cVar2 != '/' && (cVar2 != '\\'))) {
          uVar10 = uVar10 + 1;
          if (uVar8 <= uVar10) goto LAB_00101122;
          pcVar13 = (char *)(lVar4 + uVar10);
          cVar2 = *pcVar13;
        }
        *pcVar13 = '/';
        uVar8 = *(ulong *)(param_1 + 8);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
      while (uVar8 != 0) {
        lVar4 = *(long *)param_1;
LAB_00101122:
        if (*(char *)(lVar4 + -1 + uVar8) != '/') break;
        puStack_b0 = (ulong *)0x101112;
        std::__cxx11::string::resize((ulong)param_1,(char)uVar8 + -1);
        uVar8 = *(ulong *)(param_1 + 8);
      }
    }
    if (local_68 != local_58) {
      puStack_b0 = (ulong *)0x100f68;
      operator_delete(local_68,local_58[0] + 1);
    }
    if (local_88 != ppuVar14) {
      puStack_b0 = (ulong *)0x100f84;
      operator_delete(local_88,(long)local_78[0] + 1);
    }
LAB_001010b0:
    if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    puStack_b0 = (ulong *)0x10120e;
    __stack_chk_fail();
  }
LAB_0010120e:
  pcVar13 = "basic_string::append";
  puStack_b0 = (ulong *)0x10121a;
  std::__throw_length_error("basic_string::append");
  uVar8 = extraout_RDX[1];
  uVar10 = *extraout_RDX;
  uVar11 = puVar5[1];
  uVar3 = *puVar5;
  lStack_e8 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_108 = 0;
  uStack_100 = 0;
  puStack_110 = &uStack_100;
  psStack_d8 = param_1;
  puStack_d0 = puVar6;
  ppuStack_c8 = ppuVar14;
  puStack_c0 = in_RDX;
  pppuStack_b8 = pppuVar15;
  puStack_b0 = puVar12;
  std::__cxx11::string::reserve((ulong)&puStack_110);
  if ((0x3fffffffffffffffU - lStack_108 < uVar11) ||
     (std::__cxx11::string::_M_append((char *)&puStack_110,uVar3),
     0x3fffffffffffffffU - lStack_108 < uVar8)) {
    std::__throw_length_error("basic_string::append");
  }
  else {
    std::__cxx11::string::_M_append((char *)&puStack_110,uVar10);
    ((string *)pcVar13)[0x10] = (string)0x0;
    *(string **)pcVar13 = (string *)pcVar13 + 0x10;
    *(undefined8 *)((string *)pcVar13 + 8) = 0;
    std::__cxx11::string::_M_assign((string *)pcVar13);
    uVar8 = *(ulong *)((string *)pcVar13 + 8);
    uVar10 = 0;
    if (uVar8 != 0) {
      do {
        lVar4 = *(long *)pcVar13;
        pcVar1 = (char *)(lVar4 + uVar10);
        cVar2 = *pcVar1;
        while ((cVar2 != '\\' && (cVar2 != '/'))) {
          uVar10 = uVar10 + 1;
          if (uVar8 <= uVar10) goto LAB_0010139e;
          pcVar1 = (char *)(lVar4 + uVar10);
          cVar2 = *pcVar1;
        }
        *pcVar1 = '/';
        uVar8 = *(ulong *)((string *)pcVar13 + 8);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
      while (uVar8 != 0) {
        lVar4 = *(long *)pcVar13;
LAB_0010139e:
        if (*(char *)(lVar4 + -1 + uVar8) != '/') break;
        std::__cxx11::string::resize((ulong)pcVar13,(char)uVar8 + -1);
        uVar8 = *(ulong *)((string *)pcVar13 + 8);
      }
    }
    if (puStack_110 != &uStack_100) {
      operator_delete(puStack_110,CONCAT71(uStack_ff,uStack_100) + 1);
    }
    if (lStack_e8 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (string *)pcVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::addExt(std::__cxx11::string const&) const */

string * embree::FileName::addExt(string *param_1)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *in_RDX;
  ulong uVar7;
  ulong *in_RSI;
  long in_FS_OFFSET;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  uVar5 = in_RDX[1];
  uVar7 = *in_RDX;
  uVar3 = in_RSI[1];
  uVar4 = *in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  std::__cxx11::string::reserve((ulong)&local_68);
  if ((0x3fffffffffffffffU - local_60 < uVar3) ||
     (std::__cxx11::string::_M_append((char *)&local_68,uVar4),
     0x3fffffffffffffffU - local_60 < uVar5)) {
    std::__throw_length_error("basic_string::append");
  }
  else {
    std::__cxx11::string::_M_append((char *)&local_68,uVar7);
    param_1[0x10] = (string)0x0;
    *(string **)param_1 = param_1 + 0x10;
    *(undefined8 *)(param_1 + 8) = 0;
    std::__cxx11::string::_M_assign(param_1);
    uVar5 = *(ulong *)(param_1 + 8);
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        lVar6 = *(long *)param_1;
        pcVar1 = (char *)(lVar6 + uVar7);
        cVar2 = *pcVar1;
        while ((cVar2 != '\\' && (cVar2 != '/'))) {
          uVar7 = uVar7 + 1;
          if (uVar5 <= uVar7) goto LAB_0010139e;
          pcVar1 = (char *)(lVar6 + uVar7);
          cVar2 = *pcVar1;
        }
        *pcVar1 = '/';
        uVar5 = *(ulong *)(param_1 + 8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      while (uVar5 != 0) {
        lVar6 = *(long *)param_1;
LAB_0010139e:
        if (*(char *)(lVar6 + -1 + uVar5) != '/') break;
        std::__cxx11::string::resize((ulong)param_1,(char)uVar5 + -1);
        uVar5 = *(ulong *)(param_1 + 8);
      }
    }
    if (local_68 != &local_58) {
      operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&) const */

FileName * __thiscall embree::FileName::operator+(FileName *this,FileName *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  FileName FVar4;
  FileName *__src;
  long *plVar5;
  ulong uVar6;
  FileName *__dest;
  uint uVar7;
  ulong *in_RDX;
  ulong uVar8;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  ulong local_90;
  undefined1 *local_88;
  long local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  long *local_68;
  long local_60;
  long local_58 [5];
  ulong uVar9;
  
  uVar6 = *(ulong *)(param_1 + 8);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar6 != 0) {
    uVar8 = *(ulong *)param_1;
    local_90 = CONCAT71(local_90._1_7_,0x2f);
    local_80 = 0;
    local_78 = 0;
    local_88 = &local_78;
    std::__cxx11::string::reserve((ulong)&local_88);
    if ((uVar6 <= 0x3fffffffffffffffU - local_80) &&
       (std::__cxx11::string::_M_append((char *)&local_88,uVar8), local_80 != 0x3fffffffffffffff)) {
      std::__cxx11::string::_M_append((char *)&local_88,(ulong)&local_90);
      if (in_RDX[1] <= 0x3fffffffffffffffU - local_80) {
        plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_88,*in_RDX);
        plVar1 = plVar5 + 2;
        if ((long *)*plVar5 == plVar1) {
          uVar6 = plVar5[1] + 1;
          plVar10 = plVar1;
          plVar12 = local_58;
          if (7 < (uint)uVar6) {
            uVar8 = 0;
            do {
              uVar7 = (int)uVar8 + 8;
              uVar9 = (ulong)uVar7;
              *(undefined8 *)((long)local_58 + uVar8) = *(undefined8 *)((long)plVar1 + uVar8);
              uVar8 = uVar9;
            } while (uVar7 < ((uint)uVar6 & 0xfffffff8));
            plVar12 = (long *)((long)local_58 + uVar9);
            plVar10 = (long *)(uVar9 + (long)plVar1);
          }
          lVar11 = 0;
          if ((uVar6 & 4) != 0) {
            *(int *)plVar12 = (int)*plVar10;
            lVar11 = 4;
          }
          if ((uVar6 & 2) != 0) {
            *(undefined2 *)((long)plVar12 + lVar11) = *(undefined2 *)((long)plVar10 + lVar11);
            lVar11 = lVar11 + 2;
          }
          local_68 = local_58;
          if ((uVar6 & 1) != 0) {
            *(undefined1 *)((long)plVar12 + lVar11) = *(undefined1 *)((long)plVar10 + lVar11);
          }
        }
        else {
          local_58[0] = plVar5[2];
          local_68 = (long *)*plVar5;
        }
        local_60 = plVar5[1];
        *plVar5 = (long)plVar1;
        plVar5[1] = 0;
        *(undefined1 *)(plVar5 + 2) = 0;
        *(FileName **)this = this + 0x10;
        *(undefined8 *)(this + 8) = 0;
        this[0x10] = (FileName)0x0;
        std::__cxx11::string::_M_assign((string *)this);
        uVar6 = *(ulong *)(this + 8);
        uVar8 = 0;
        if (uVar6 != 0) {
          do {
            lVar11 = *(long *)this;
            pcVar2 = (char *)(lVar11 + uVar8);
            cVar3 = *pcVar2;
            while ((cVar3 != '/' && (cVar3 != '\\'))) {
              uVar8 = uVar8 + 1;
              if (uVar6 <= uVar8) goto LAB_001015b6;
              pcVar2 = (char *)(lVar11 + uVar8);
              cVar3 = *pcVar2;
            }
            *pcVar2 = '/';
            uVar6 = *(ulong *)(this + 8);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar6);
          while (uVar6 != 0) {
            lVar11 = *(long *)this;
LAB_001015b6:
            if (*(char *)(lVar11 + -1 + uVar6) != '/') break;
            std::__cxx11::string::resize((ulong)this,(char)uVar6 + -1);
            uVar6 = *(ulong *)(this + 8);
          }
        }
        if (local_68 != local_58) {
          operator_delete(local_68,local_58[0] + 1);
        }
        if (local_88 != &local_78) {
          operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
        }
        goto LAB_00101578;
      }
    }
    std::__throw_length_error("basic_string::append");
    goto LAB_001016db;
  }
  __dest = this + 0x10;
  *(FileName **)this = __dest;
  uVar6 = in_RDX[1];
  __src = (FileName *)*in_RDX;
  local_90 = uVar6;
  if (uVar6 < 0x10) {
    if (uVar6 == 1) {
      FVar4 = *__src;
      *(undefined8 *)(this + 8) = 1;
      this[0x10] = FVar4;
      this[0x11] = (FileName)0x0;
    }
    else {
      if (uVar6 != 0) goto LAB_0010161e;
      *(undefined8 *)(this + 8) = 0;
      *__dest = (FileName)0x0;
    }
  }
  else {
    __dest = (FileName *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_90);
    *(FileName **)this = __dest;
    *(ulong *)(this + 0x10) = local_90;
LAB_0010161e:
    memcpy(__dest,__src,uVar6);
    *(ulong *)(this + 8) = local_90;
    *(undefined1 *)(*(long *)this + local_90) = 0;
  }
LAB_00101578:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
LAB_001016db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&) const */

FileName * __thiscall embree::FileName::operator+(FileName *this,string *param_1)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 *local_58;
  ulong local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = 0;
  local_58 = &local_48;
  std::__cxx11::string::_M_assign((string *)&local_58);
  uVar3 = 0;
  if (local_50 != 0) {
    do {
      pcVar1 = local_58 + uVar3;
      cVar2 = *pcVar1;
      while ((cVar2 != '\\' && (cVar2 != '/'))) {
        uVar3 = uVar3 + 1;
        if (local_50 <= uVar3) goto LAB_001017f0;
        pcVar1 = local_58 + uVar3;
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_50);
    while (local_50 != 0) {
LAB_001017f0:
      if (local_58[local_50 - 1] != '/') break;
      std::__cxx11::string::resize((ulong)&local_58,(char)local_50 + -1);
    }
  }
  operator+(this,(FileName *)param_1);
  if (local_58 != &local_48) {
    operator_delete(local_58,CONCAT71(uStack_47,local_48) + 1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FileName::TEMPNAMEPLACEHOLDERVALUE(embree::FileName const&) const */

FileName * __thiscall embree::FileName::operator-(FileName *this,FileName *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined1 *__src;
  FileName *__src_00;
  long lVar3;
  FileName *__dest;
  ulong uVar4;
  undefined8 *in_RDX;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  
  uVar5 = in_RDX[1];
  __src = (undefined1 *)*in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  local_70 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*__src);
    }
    else if (uVar5 != 0) goto LAB_00101a61;
  }
  else {
    local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
LAB_00101a61:
    memcpy(local_68,__src,uVar5);
  }
  *(undefined1 *)((long)local_68 + local_70) = 0;
  local_60 = local_70;
  lVar3 = std::__cxx11::string::find_first_of((char *)param_1,(ulong)local_68,0);
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (lVar3 == -1) {
    __dest = this + 0x10;
    *(FileName **)this = __dest;
    uVar5 = *(ulong *)(param_1 + 8);
    __src_00 = *(FileName **)param_1;
    local_70 = uVar5;
    if (uVar5 < 0x10) {
      if (uVar5 == 1) {
        this[0x10] = *__src_00;
      }
      else if (uVar5 != 0) goto LAB_00101afe;
    }
    else {
      __dest = (FileName *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_70);
      *(FileName **)this = __dest;
      *(ulong *)(this + 0x10) = local_70;
LAB_00101afe:
      memcpy(__dest,__src_00,uVar5);
      __dest = *(FileName **)this;
    }
    *(ulong *)(this + 8) = local_70;
    __dest[local_70] = (FileName)0x0;
    goto LAB_00101990;
  }
  uVar5 = lVar3 + 1;
  if (*(ulong *)(param_1 + 8) < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",uVar5
              );
  }
  lVar3 = *(long *)param_1;
  uVar4 = *(ulong *)(param_1 + 8) - uVar5;
  local_70 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*(undefined1 *)(lVar3 + uVar5));
      local_68 = local_58;
    }
    else {
      local_68 = local_58;
      if (uVar4 != 0) goto LAB_00101ab1;
    }
  }
  else {
    local_68 = local_58;
    local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
LAB_00101ab1:
    memcpy(local_68,(undefined1 *)(lVar3 + uVar5),uVar4);
  }
  *(undefined1 *)((long)local_68 + local_70) = 0;
  *(FileName **)this = this + 0x10;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (FileName)0x0;
  local_60 = local_70;
  std::__cxx11::string::_M_assign((string *)this);
  uVar5 = *(ulong *)(this + 8);
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      lVar3 = *(long *)this;
      pcVar1 = (char *)(lVar3 + uVar4);
      cVar2 = *pcVar1;
      while ((cVar2 != '/' && (cVar2 != '\\'))) {
        uVar4 = uVar4 + 1;
        if (uVar5 <= uVar4) goto LAB_001019d6;
        pcVar1 = (char *)(lVar3 + uVar4);
        cVar2 = *pcVar1;
      }
      *pcVar1 = '/';
      uVar5 = *(ulong *)(this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
    while (uVar5 != 0) {
      lVar3 = *(long *)this;
LAB_001019d6:
      if (*(char *)(lVar3 + -1 + uVar5) != '/') break;
      std::__cxx11::string::resize((ulong)this,(char)uVar5 + -1);
      uVar5 = *(ulong *)(this + 8);
    }
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
LAB_00101990:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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


