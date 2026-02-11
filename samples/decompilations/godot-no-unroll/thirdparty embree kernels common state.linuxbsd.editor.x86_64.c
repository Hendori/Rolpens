
/* std::__cxx11::string::_M_dispose() [clone .part.0] [clone .isra.0] */

void std::__cxx11::string::_M_dispose(void)

{
  return;
}



/* embree::Token::Float(bool) const [clone .isra.0] */

float embree::Token::Float(bool param_1)

{
  char in_DL;
  float in_ESI;
  undefined3 in_register_00000039;
  
  if (CONCAT31(in_register_00000039,param_1) == 3) {
    return in_ESI;
  }
  if ((CONCAT31(in_register_00000039,param_1) == 2) && (in_DL != '\0')) {
    return (float)(int)in_ESI;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::State::ErrorHandler::~ErrorHandler() */

void __thiscall embree::State::ErrorHandler::~ErrorHandler(ErrorHandler *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  embree::MutexSys::lock();
  lVar2 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar2) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(lVar2 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,4);
        lVar2 = *(long *)(this + 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x10) - lVar2 >> 3));
  }
  embree::destroyTls(*(opaque_tls_t **)this);
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 0x10) = *(long *)(this + 8);
  }
  embree::MutexSys::unlock();
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x20));
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x18) - (long)pvVar1);
    return;
  }
  return;
}



/* std::__cxx11::string::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string&&) [clone .isra.0] */

void __thiscall std::__cxx11::string::operator=(string *this,string *param_1)

{
  string *psVar1;
  undefined8 uVar2;
  uint uVar3;
  string *psVar4;
  ulong uVar5;
  string *psVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  psVar6 = *(string **)this;
  psVar4 = *(string **)param_1;
  psVar1 = param_1 + 0x10;
  if (psVar6 == this + 0x10) {
    if (psVar1 != psVar4) {
      *(string **)this = psVar4;
      *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
LAB_00100153:
      *(string **)param_1 = psVar1;
      *(undefined8 *)(param_1 + 8) = 0;
      *psVar1 = (string)0x0;
      return;
    }
  }
  else if (psVar1 != psVar4) {
    *(string **)this = psVar4;
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    if (psVar6 == (string *)0x0) goto LAB_00100153;
    *(string **)param_1 = psVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    psVar4 = psVar6;
    goto LAB_00100125;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  if (this == param_1) {
LAB_00100125:
    *(undefined8 *)(param_1 + 8) = 0;
    *psVar4 = (string)0x0;
    return;
  }
  if (uVar9 != 0) {
    if (uVar9 == 1) {
      *psVar6 = *psVar4;
      uVar9 = *(ulong *)(param_1 + 8);
      psVar6 = *(string **)this;
    }
    else {
      uVar3 = (uint)uVar9;
      uVar5 = uVar9 & 0xffffffff;
      if (uVar3 < 8) {
        if ((uVar9 & 4) != 0) {
          *(undefined4 *)psVar6 = *(undefined4 *)psVar4;
          *(undefined4 *)(psVar6 + (uVar5 - 4)) = *(undefined4 *)(psVar4 + (uVar5 - 4));
          psVar6 = *(string **)this;
          uVar9 = *(ulong *)(param_1 + 8);
          goto LAB_001001b8;
        }
        if (uVar3 == 0) goto LAB_001001b8;
        *psVar6 = *psVar4;
        if ((uVar9 & 2) != 0) {
          *(undefined2 *)(psVar6 + (uVar5 - 2)) = *(undefined2 *)(psVar4 + (uVar5 - 2));
          psVar6 = *(string **)this;
          uVar9 = *(ulong *)(param_1 + 8);
          goto LAB_001001b8;
        }
      }
      else {
        *(undefined8 *)psVar6 = *(undefined8 *)psVar4;
        *(undefined8 *)(psVar6 + ((uVar9 & 0xffffffff) - 8)) =
             *(undefined8 *)(psVar4 + ((uVar9 & 0xffffffff) - 8));
        lVar7 = (long)psVar6 - ((ulong)(psVar6 + 8) & 0xfffffffffffffff8);
        uVar3 = (int)lVar7 + uVar3 & 0xfffffff8;
        if (7 < uVar3) {
          uVar8 = 0;
          do {
            uVar9 = (ulong)uVar8;
            uVar8 = uVar8 + 8;
            *(undefined8 *)(((ulong)(psVar6 + 8) & 0xfffffffffffffff8) + uVar9) =
                 *(undefined8 *)(psVar4 + (uVar9 - lVar7));
          } while (uVar8 < uVar3);
        }
      }
      psVar6 = *(string **)this;
      uVar9 = *(ulong *)(param_1 + 8);
    }
  }
LAB_001001b8:
  *(ulong *)(this + 8) = uVar9;
  psVar6[uVar9] = (string)0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  **(undefined1 **)param_1 = 0;
  return;
}



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
      goto LAB_001002d4;
    }
    if (__n == 0) goto LAB_001002d4;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_001002d4:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */

void __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  size_t __n;
  string *__dest;
  char *pcVar1;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = __dest;
  if (param_1 == (char *)0x0) {
    pcVar1 = "basic_string: construction from null is not valid";
    std::__throw_logic_error("basic_string: construction from null is not valid");
    *(undefined ***)pcVar1 = &PTR__State_0010dd50;
    embree::State::ErrorHandler::~ErrorHandler((ErrorHandler *)(pcVar1 + 0x500));
    if (*(char **)(pcVar1 + 0x440) != pcVar1 + 0x450) {
      operator_delete(*(char **)(pcVar1 + 0x440),*(long *)(pcVar1 + 0x450) + 1);
    }
    if (*(char **)(pcVar1 + 0x420) != pcVar1 + 0x430) {
      operator_delete(*(char **)(pcVar1 + 0x420),*(long *)(pcVar1 + 0x430) + 1);
    }
    if (*(char **)(pcVar1 + 0x400) != pcVar1 + 0x410) {
      operator_delete(*(char **)(pcVar1 + 0x400),*(long *)(pcVar1 + 0x410) + 1);
    }
    if (*(char **)(pcVar1 + 0x3e0) != pcVar1 + 0x3f0) {
      operator_delete(*(char **)(pcVar1 + 0x3e0),*(long *)(pcVar1 + 0x3f0) + 1);
    }
    if (*(char **)(pcVar1 + 0x3c0) != pcVar1 + 0x3d0) {
      operator_delete(*(char **)(pcVar1 + 0x3c0),*(long *)(pcVar1 + 0x3d0) + 1);
    }
    if (*(char **)(pcVar1 + 0x3a0) != pcVar1 + 0x3b0) {
      operator_delete(*(char **)(pcVar1 + 0x3a0),*(long *)(pcVar1 + 0x3b0) + 1);
    }
    if (*(char **)(pcVar1 + 0x378) != pcVar1 + 0x388) {
      operator_delete(*(char **)(pcVar1 + 0x378),*(long *)(pcVar1 + 0x388) + 1);
    }
    if (*(char **)(pcVar1 + 0x358) != pcVar1 + 0x368) {
      operator_delete(*(char **)(pcVar1 + 0x358),*(long *)(pcVar1 + 0x368) + 1);
    }
    if (*(char **)(pcVar1 + 0x330) != pcVar1 + 0x340) {
      operator_delete(*(char **)(pcVar1 + 0x330),*(long *)(pcVar1 + 0x340) + 1);
    }
    if (*(char **)(pcVar1 + 0x310) != pcVar1 + 800) {
      operator_delete(*(char **)(pcVar1 + 0x310),*(long *)(pcVar1 + 800) + 1);
    }
    if (*(char **)(pcVar1 + 0x2f0) != pcVar1 + 0x300) {
      operator_delete(*(char **)(pcVar1 + 0x2f0),*(long *)(pcVar1 + 0x300) + 1);
    }
    if (*(char **)(pcVar1 + 0x2d0) != pcVar1 + 0x2e0) {
      operator_delete(*(char **)(pcVar1 + 0x2d0),*(long *)(pcVar1 + 0x2e0) + 1);
    }
    if (*(char **)(pcVar1 + 0x2b0) != pcVar1 + 0x2c0) {
      operator_delete(*(char **)(pcVar1 + 0x2b0),*(long *)(pcVar1 + 0x2c0) + 1);
    }
    if (*(char **)(pcVar1 + 0x290) != pcVar1 + 0x2a0) {
      operator_delete(*(char **)(pcVar1 + 0x290),*(long *)(pcVar1 + 0x2a0) + 1);
    }
    if (*(char **)(pcVar1 + 0x270) != pcVar1 + 0x280) {
      operator_delete(*(char **)(pcVar1 + 0x270),*(long *)(pcVar1 + 0x280) + 1);
    }
    if (*(char **)(pcVar1 + 0x250) != pcVar1 + 0x260) {
      operator_delete(*(char **)(pcVar1 + 0x250),*(long *)(pcVar1 + 0x260) + 1);
    }
    if (*(char **)(pcVar1 + 0x230) != pcVar1 + 0x240) {
      operator_delete(*(char **)(pcVar1 + 0x230),*(long *)(pcVar1 + 0x240) + 1);
    }
    if (*(char **)(pcVar1 + 0x210) != pcVar1 + 0x220) {
      operator_delete(*(char **)(pcVar1 + 0x210),*(long *)(pcVar1 + 0x220) + 1);
    }
    if (*(char **)(pcVar1 + 0x1f0) != pcVar1 + 0x200) {
      operator_delete(*(char **)(pcVar1 + 0x1f0),*(long *)(pcVar1 + 0x200) + 1);
    }
    if (*(char **)(pcVar1 + 0x1d0) != pcVar1 + 0x1e0) {
      operator_delete(*(char **)(pcVar1 + 0x1d0),*(long *)(pcVar1 + 0x1e0) + 1);
    }
    if (*(char **)(pcVar1 + 0x1b0) != pcVar1 + 0x1c0) {
      operator_delete(*(char **)(pcVar1 + 0x1b0),*(long *)(pcVar1 + 0x1c0) + 1);
    }
    if (*(char **)(pcVar1 + 400) != pcVar1 + 0x1a0) {
      operator_delete(*(char **)(pcVar1 + 400),*(long *)(pcVar1 + 0x1a0) + 1);
    }
    if (*(char **)(pcVar1 + 0x170) != pcVar1 + 0x180) {
      operator_delete(*(char **)(pcVar1 + 0x170),*(long *)(pcVar1 + 0x180) + 1);
    }
    if (*(char **)(pcVar1 + 0x150) != pcVar1 + 0x160) {
      operator_delete(*(char **)(pcVar1 + 0x150),*(long *)(pcVar1 + 0x160) + 1);
    }
    if (*(char **)(pcVar1 + 0x130) != pcVar1 + 0x140) {
      operator_delete(*(char **)(pcVar1 + 0x130),*(long *)(pcVar1 + 0x140) + 1);
    }
    if (*(char **)(pcVar1 + 0x110) != pcVar1 + 0x120) {
      operator_delete(*(char **)(pcVar1 + 0x110),*(long *)(pcVar1 + 0x120) + 1);
    }
    if (*(char **)(pcVar1 + 0xf0) != pcVar1 + 0x100) {
      operator_delete(*(char **)(pcVar1 + 0xf0),*(long *)(pcVar1 + 0x100) + 1);
    }
    if (*(char **)(pcVar1 + 0xd0) != pcVar1 + 0xe0) {
      operator_delete(*(char **)(pcVar1 + 0xd0),*(long *)(pcVar1 + 0xe0) + 1);
    }
    if (*(char **)(pcVar1 + 0xb0) != pcVar1 + 0xc0) {
      operator_delete(*(char **)(pcVar1 + 0xb0),*(long *)(pcVar1 + 0xc0) + 1);
    }
    if (*(char **)(pcVar1 + 0x90) != pcVar1 + 0xa0) {
      operator_delete(*(char **)(pcVar1 + 0x90),*(long *)(pcVar1 + 0xa0) + 1);
    }
    if (*(char **)(pcVar1 + 0x70) != pcVar1 + 0x80) {
      operator_delete(*(char **)(pcVar1 + 0x70),*(long *)(pcVar1 + 0x80) + 1);
    }
    if (*(char **)(pcVar1 + 0x50) != pcVar1 + 0x60) {
      operator_delete(*(char **)(pcVar1 + 0x50),*(long *)(pcVar1 + 0x60) + 1);
    }
    if (*(char **)(pcVar1 + 0x30) != pcVar1 + 0x40) {
      operator_delete(*(char **)(pcVar1 + 0x30),*(long *)(pcVar1 + 0x40) + 1);
    }
    if (*(char **)(pcVar1 + 0x10) == pcVar1 + 0x20) {
      return;
    }
    operator_delete(*(char **)(pcVar1 + 0x10),*(long *)(pcVar1 + 0x20) + 1);
    return;
  }
  __n = strlen(param_1);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (string)*param_1;
      goto LAB_00100393;
    }
    if (__n == 0) goto LAB_00100393;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(string **)this;
LAB_00100393:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::State::~State() */

void __thiscall embree::State::~State(State *this)

{
  *(undefined ***)this = &PTR__State_0010dd50;
  ErrorHandler::~ErrorHandler((ErrorHandler *)(this + 0x500));
  if (*(State **)(this + 0x440) != this + 0x450) {
    operator_delete(*(State **)(this + 0x440),*(long *)(this + 0x450) + 1);
  }
  if (*(State **)(this + 0x420) != this + 0x430) {
    operator_delete(*(State **)(this + 0x420),*(long *)(this + 0x430) + 1);
  }
  if (*(State **)(this + 0x400) != this + 0x410) {
    operator_delete(*(State **)(this + 0x400),*(long *)(this + 0x410) + 1);
  }
  if (*(State **)(this + 0x3e0) != this + 0x3f0) {
    operator_delete(*(State **)(this + 0x3e0),*(long *)(this + 0x3f0) + 1);
  }
  if (*(State **)(this + 0x3c0) != this + 0x3d0) {
    operator_delete(*(State **)(this + 0x3c0),*(long *)(this + 0x3d0) + 1);
  }
  if (*(State **)(this + 0x3a0) != this + 0x3b0) {
    operator_delete(*(State **)(this + 0x3a0),*(long *)(this + 0x3b0) + 1);
  }
  if (*(State **)(this + 0x378) != this + 0x388) {
    operator_delete(*(State **)(this + 0x378),*(long *)(this + 0x388) + 1);
  }
  if (*(State **)(this + 0x358) != this + 0x368) {
    operator_delete(*(State **)(this + 0x358),*(long *)(this + 0x368) + 1);
  }
  if (*(State **)(this + 0x330) != this + 0x340) {
    operator_delete(*(State **)(this + 0x330),*(long *)(this + 0x340) + 1);
  }
  if (*(State **)(this + 0x310) != this + 800) {
    operator_delete(*(State **)(this + 0x310),*(long *)(this + 800) + 1);
  }
  if (*(State **)(this + 0x2f0) != this + 0x300) {
    operator_delete(*(State **)(this + 0x2f0),*(long *)(this + 0x300) + 1);
  }
  if (*(State **)(this + 0x2d0) != this + 0x2e0) {
    operator_delete(*(State **)(this + 0x2d0),*(long *)(this + 0x2e0) + 1);
  }
  if (*(State **)(this + 0x2b0) != this + 0x2c0) {
    operator_delete(*(State **)(this + 0x2b0),*(long *)(this + 0x2c0) + 1);
  }
  if (*(State **)(this + 0x290) != this + 0x2a0) {
    operator_delete(*(State **)(this + 0x290),*(long *)(this + 0x2a0) + 1);
  }
  if (*(State **)(this + 0x270) != this + 0x280) {
    operator_delete(*(State **)(this + 0x270),*(long *)(this + 0x280) + 1);
  }
  if (*(State **)(this + 0x250) != this + 0x260) {
    operator_delete(*(State **)(this + 0x250),*(long *)(this + 0x260) + 1);
  }
  if (*(State **)(this + 0x230) != this + 0x240) {
    operator_delete(*(State **)(this + 0x230),*(long *)(this + 0x240) + 1);
  }
  if (*(State **)(this + 0x210) != this + 0x220) {
    operator_delete(*(State **)(this + 0x210),*(long *)(this + 0x220) + 1);
  }
  if (*(State **)(this + 0x1f0) != this + 0x200) {
    operator_delete(*(State **)(this + 0x1f0),*(long *)(this + 0x200) + 1);
  }
  if (*(State **)(this + 0x1d0) != this + 0x1e0) {
    operator_delete(*(State **)(this + 0x1d0),*(long *)(this + 0x1e0) + 1);
  }
  if (*(State **)(this + 0x1b0) != this + 0x1c0) {
    operator_delete(*(State **)(this + 0x1b0),*(long *)(this + 0x1c0) + 1);
  }
  if (*(State **)(this + 400) != this + 0x1a0) {
    operator_delete(*(State **)(this + 400),*(long *)(this + 0x1a0) + 1);
  }
  if (*(State **)(this + 0x170) != this + 0x180) {
    operator_delete(*(State **)(this + 0x170),*(long *)(this + 0x180) + 1);
  }
  if (*(State **)(this + 0x150) != this + 0x160) {
    operator_delete(*(State **)(this + 0x150),*(long *)(this + 0x160) + 1);
  }
  if (*(State **)(this + 0x130) != this + 0x140) {
    operator_delete(*(State **)(this + 0x130),*(long *)(this + 0x140) + 1);
  }
  if (*(State **)(this + 0x110) != this + 0x120) {
    operator_delete(*(State **)(this + 0x110),*(long *)(this + 0x120) + 1);
  }
  if (*(State **)(this + 0xf0) != this + 0x100) {
    operator_delete(*(State **)(this + 0xf0),*(long *)(this + 0x100) + 1);
  }
  if (*(State **)(this + 0xd0) != this + 0xe0) {
    operator_delete(*(State **)(this + 0xd0),*(long *)(this + 0xe0) + 1);
  }
  if (*(State **)(this + 0xb0) != this + 0xc0) {
    operator_delete(*(State **)(this + 0xb0),*(long *)(this + 0xc0) + 1);
  }
  if (*(State **)(this + 0x90) != this + 0xa0) {
    operator_delete(*(State **)(this + 0x90),*(long *)(this + 0xa0) + 1);
  }
  if (*(State **)(this + 0x70) != this + 0x80) {
    operator_delete(*(State **)(this + 0x70),*(long *)(this + 0x80) + 1);
  }
  if (*(State **)(this + 0x50) != this + 0x60) {
    operator_delete(*(State **)(this + 0x50),*(long *)(this + 0x60) + 1);
  }
  if (*(State **)(this + 0x30) != this + 0x40) {
    operator_delete(*(State **)(this + 0x30),*(long *)(this + 0x40) + 1);
  }
  if (*(State **)(this + 0x10) != this + 0x20) {
    operator_delete(*(State **)(this + 0x10),*(long *)(this + 0x20) + 1);
    return;
  }
  return;
}



/* embree::State::~State() */

void __thiscall embree::State::~State(State *this)

{
  ~State(this);
  operator_delete(this,0x548);
  return;
}



/* embree::State::ErrorHandler::ErrorHandler() */

void __thiscall embree::State::ErrorHandler::ErrorHandler(ErrorHandler *this)

{
  undefined8 uVar1;
  
  uVar1 = embree::createTls();
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x20));
  return;
}



/* embree::State::State() */

void __thiscall embree::State::State(State *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__State_0010dd50;
  *(State **)(this + 0x10) = this + 0x20;
  *(State **)(this + 0x30) = this + 0x40;
  *(State **)(this + 0x50) = this + 0x60;
  *(State **)(this + 0x70) = this + 0x80;
  *(State **)(this + 0x90) = this + 0xa0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (State)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (State)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x60] = (State)0x0;
  *(undefined8 *)(this + 0x78) = 0;
  this[0x80] = (State)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (State)0x0;
  *(State **)(this + 0xb0) = this + 0xc0;
  *(State **)(this + 0xd0) = this + 0xe0;
  *(State **)(this + 0xf0) = this + 0x100;
  *(State **)(this + 0x110) = this + 0x120;
  *(State **)(this + 0x130) = this + 0x140;
  *(State **)(this + 0x150) = this + 0x160;
  *(State **)(this + 0x170) = this + 0x180;
  *(State **)(this + 400) = this + 0x1a0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xc0] = (State)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe0] = (State)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (State)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x120] = (State)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (State)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x160] = (State)0x0;
  *(undefined8 *)(this + 0x178) = 0;
  this[0x180] = (State)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (State)0x0;
  *(State **)(this + 0x1b0) = this + 0x1c0;
  *(State **)(this + 0x1d0) = this + 0x1e0;
  *(State **)(this + 0x1f0) = this + 0x200;
  *(State **)(this + 0x210) = this + 0x220;
  *(State **)(this + 0x230) = this + 0x240;
  *(State **)(this + 0x250) = this + 0x260;
  *(State **)(this + 0x270) = this + 0x280;
  *(State **)(this + 0x290) = this + 0x2a0;
  *(State **)(this + 0x2b0) = this + 0x2c0;
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (State)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1e0] = (State)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  this[0x200] = (State)0x0;
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (State)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x240] = (State)0x0;
  *(undefined8 *)(this + 600) = 0;
  this[0x260] = (State)0x0;
  *(undefined8 *)(this + 0x278) = 0;
  this[0x280] = (State)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  this[0x2a0] = (State)0x0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(State **)(this + 0x2d0) = this + 0x2e0;
  *(State **)(this + 0x2f0) = this + 0x300;
  *(State **)(this + 0x310) = this + 800;
  *(State **)(this + 0x330) = this + 0x340;
  *(State **)(this + 0x358) = this + 0x368;
  *(State **)(this + 0x378) = this + 0x388;
  *(State **)(this + 0x3a0) = this + 0x3b0;
  *(State **)(this + 0x3c0) = this + 0x3d0;
  this[0x2c0] = (State)0x0;
  *(undefined8 *)(this + 0x2d8) = 0;
  this[0x2e0] = (State)0x0;
  *(undefined8 *)(this + 0x2f8) = 0;
  this[0x300] = (State)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  this[800] = (State)0x0;
  *(undefined8 *)(this + 0x338) = 0;
  this[0x340] = (State)0x0;
  *(undefined8 *)(this + 0x360) = 0;
  this[0x368] = (State)0x0;
  *(undefined8 *)(this + 0x380) = 0;
  this[0x388] = (State)0x0;
  *(undefined8 *)(this + 0x3a8) = 0;
  this[0x3b0] = (State)0x0;
  *(undefined8 *)(this + 0x3c8) = 0;
  this[0x3d0] = (State)0x0;
  *(State **)(this + 0x3e0) = this + 0x3f0;
  *(State **)(this + 0x400) = this + 0x410;
  *(State **)(this + 0x420) = this + 0x430;
  *(undefined8 *)(this + 1000) = 0;
  this[0x3f0] = (State)0x0;
  *(undefined8 *)(this + 0x408) = 0;
  this[0x410] = (State)0x0;
  *(undefined8 *)(this + 0x428) = 0;
  this[0x430] = (State)0x0;
  *(State **)(this + 0x440) = this + 0x450;
  *(undefined8 *)(this + 0x448) = 0;
  this[0x450] = (State)0x0;
  uVar1 = embree::getCPUFeatures();
  *(undefined4 *)(this + 0x4d4) = 1;
  *(undefined4 *)(this + 0x4cc) = uVar1;
  *(undefined4 *)(this + 0x4d0) = uVar1;
  uVar2 = embree::createTls();
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x500) = uVar2;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  embree::MutexSys::MutexSys((MutexSys *)(this + 0x520));
  std::__cxx11::string::_M_replace((ulong)(this + 0x10),0,*(char **)(this + 0x18),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x30),0,*(char **)(this + 0x38),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x50),0,*(char **)(this + 0x58),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x70),0,*(char **)(this + 0x78),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x90),0,*(char **)(this + 0x98),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xb0),0,*(char **)(this + 0xb8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xd0),0,*(char **)(this + 0xd8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xf0),0,*(char **)(this + 0xf8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x110),0,*(char **)(this + 0x118),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x130),0,*(char **)(this + 0x138),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x150),0,*(char **)(this + 0x158),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x170),0,*(char **)(this + 0x178),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 400),0,*(char **)(this + 0x198),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1b0),0,*(char **)(this + 0x1b8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1d0),0,*(char **)(this + 0x1d8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1f0),0,*(char **)(this + 0x1f8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x210),0,*(char **)(this + 0x218),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x230),0,*(char **)(this + 0x238),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x250),0,*(char **)(this + 600),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x270),0,*(char **)(this + 0x278),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x290),0,*(char **)(this + 0x298),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2b0),0,*(char **)(this + 0x2b8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2d0),0,*(char **)(this + 0x2d8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2f0),0,*(char **)(this + 0x2f8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x310),0,*(char **)(this + 0x318),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x330),0,*(char **)(this + 0x338),0x10a64c);
  *(undefined8 *)(this + 0x350) = 0x100000001;
  std::__cxx11::string::_M_replace((ulong)(this + 0x358),0,*(char **)(this + 0x360),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x378),0,*(char **)(this + 0x380),0x10a64c);
  *(undefined8 *)(this + 0x398) = 0x100000001;
  *(undefined4 *)(this + 0x460) = 0x3f99999a;
  this[0x464] = (State)0x0;
  *(undefined8 *)(this + 0x468) = 0x8000000;
  std::__cxx11::string::_M_replace((ulong)(this + 0x3a0),0,*(char **)(this + 0x3a8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x3c0),0,*(char **)(this + 0x3c8),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x3e0),0,*(char **)(this + 1000),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x400),0,*(char **)(this + 0x408),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x420),0,*(char **)(this + 0x428),0x10a64c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x440),0,*(char **)(this + 0x448),0x10a64c);
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x480) = 0x41000000;
  *(undefined8 *)(this + 0x488) = 0x20;
  *(undefined8 *)(this + 0x490) = 50000000;
  this[0x498] = (State)0x0;
  *(undefined8 *)(this + 0x49c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined2 *)(this + 0x4c8) = 1;
  *(undefined2 *)(this + 0x4d8) = 0x100;
  this[0x4da] = (State)0x1;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4f8) = 0xffffffff;
  *(undefined8 *)(this + 0x528) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  return;
}



/* embree::State::hasISA(int) */

undefined4 __thiscall embree::State::hasISA(State *this,int param_1)

{
  return CONCAT31((int3)((*(uint *)(this + 0x4cc) & param_1) >> 8),
                  (*(uint *)(this + 0x4cc) & param_1) == param_1);
}



/* embree::State::checkISASupport() */

undefined4 __thiscall embree::State::checkISASupport(State *this)

{
  uint uVar1;
  
  uVar1 = embree::getCPUFeatures();
  return CONCAT31((int3)(~uVar1 >> 8),(~uVar1 & *(uint *)(this + 0x4cc)) == 0);
}



/* embree::State::verify() */

void embree::State::verify(void)

{
  return;
}



/* embree::string_to_cpufeatures(std::__cxx11::string const&) */

undefined8 embree::string_to_cpufeatures(string *param_1)

{
  long lVar1;
  int *piVar2;
  short *psVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 3) {
    psVar3 = *(short **)param_1;
    if ((*psVar3 == 0x7373) && ((char)psVar3[1] == 'e')) {
      return 0x2000001;
    }
    if ((*psVar3 == 0x7661) && ((char)psVar3[1] == 'x')) {
      return 0x60000ff;
    }
  }
  else {
    if (lVar1 == 4) {
      piVar2 = *(int **)param_1;
      uVar4 = 0x2000003;
      if (((*piVar2 != 0x32657373) && (uVar4 = 0x2000007, *piVar2 != 0x33657373)) &&
         (uVar4 = 0x60003ff, *piVar2 != 0x69787661)) {
        uVar4 = 0x6007fff;
        if (*piVar2 != 0x32787661) {
          uVar4 = 0x2000003;
        }
        return uVar4;
      }
      return uVar4;
    }
    if (lVar1 == 5) {
      piVar2 = *(int **)param_1;
      if ((*piVar2 == 0x65737373) && ((char)piVar2[1] == '3')) {
        return 0x200000f;
      }
      if ((*piVar2 == 0x34657373) && ((char)piVar2[1] == '1')) {
        return 0x200001f;
      }
      if ((*piVar2 == 0x34657373) && ((char)piVar2[1] == '2')) {
        return 0x200007f;
      }
    }
    else if (lVar1 == 6) {
      piVar2 = *(int **)param_1;
      if ((*piVar2 == 0x34657373) && ((short)piVar2[1] == 0x312e)) {
        return 0x200001f;
      }
      if ((*piVar2 == 0x34657373) && ((short)piVar2[1] == 0x322e)) {
        return 0x200007f;
      }
      if ((*piVar2 == 0x35787661) && ((short)piVar2[1] == 0x3231)) {
        return 0xe737fff;
      }
    }
  }
  return 0x2000003;
}



/* embree::State::verbosity(unsigned long) */

bool __thiscall embree::State::verbosity(State *this,ulong param_1)

{
  return param_1 <= *(ulong *)(this + 0x4a8);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::print() */

void __thiscall embree::State::print(State *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined1 *puVar2;
  string *psVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  ostream *poVar10;
  int *piVar11;
  long lVar12;
  allocator *extraout_RDX;
  allocator *extraout_RDX_00;
  allocator *extraout_RDX_01;
  allocator *extraout_RDX_02;
  allocator *extraout_RDX_03;
  allocator *extraout_RDX_04;
  allocator *extraout_RDX_05;
  allocator *extraout_RDX_06;
  allocator *extraout_RDX_07;
  allocator *extraout_RDX_08;
  allocator *extraout_RDX_09;
  allocator *extraout_RDX_10;
  allocator *extraout_RDX_11;
  allocator *extraout_RDX_12;
  allocator *extraout_RDX_13;
  allocator *extraout_RDX_14;
  allocator *extraout_RDX_15;
  allocator *extraout_RDX_16;
  allocator *extraout_RDX_17;
  allocator *extraout_RDX_18;
  allocator *extraout_RDX_19;
  allocator *extraout_RDX_20;
  allocator *extraout_RDX_21;
  allocator *extraout_RDX_22;
  allocator *extraout_RDX_23;
  allocator *extraout_RDX_24;
  allocator *extraout_RDX_25;
  allocator *extraout_RDX_26;
  allocator *extraout_RDX_27;
  allocator *extraout_RDX_28;
  allocator *extraout_RDX_29;
  allocator *extraout_RDX_30;
  allocator *extraout_RDX_31;
  allocator *extraout_RDX_32;
  allocator *extraout_RDX_33;
  allocator *extraout_RDX_34;
  allocator *extraout_RDX_35;
  allocator *extraout_RDX_36;
  allocator *extraout_RDX_37;
  allocator *extraout_RDX_38;
  allocator *extraout_RDX_39;
  allocator *extraout_RDX_40;
  allocator *extraout_RDX_41;
  allocator *extraout_RDX_42;
  allocator *extraout_RDX_43;
  allocator *extraout_RDX_44;
  allocator *extraout_RDX_45;
  allocator *extraout_RDX_46;
  allocator *extraout_RDX_47;
  allocator *extraout_RDX_48;
  allocator *extraout_RDX_49;
  allocator *extraout_RDX_50;
  allocator *extraout_RDX_51;
  allocator *extraout_RDX_52;
  allocator *extraout_RDX_53;
  allocator *extraout_RDX_54;
  allocator *extraout_RDX_55;
  allocator *extraout_RDX_56;
  allocator *extraout_RDX_57;
  allocator *extraout_RDX_58;
  allocator *extraout_RDX_59;
  allocator *extraout_RDX_60;
  allocator *extraout_RDX_61;
  allocator *extraout_RDX_62;
  allocator *extraout_RDX_63;
  allocator *extraout_RDX_64;
  allocator *extraout_RDX_65;
  allocator *extraout_RDX_66;
  allocator *extraout_RDX_67;
  allocator *extraout_RDX_68;
  allocator *extraout_RDX_69;
  allocator *extraout_RDX_70;
  allocator *extraout_RDX_71;
  allocator *extraout_RDX_72;
  allocator *extraout_RDX_73;
  allocator *extraout_RDX_74;
  allocator *extraout_RDX_75;
  allocator *extraout_RDX_76;
  allocator *extraout_RDX_77;
  allocator *extraout_RDX_78;
  allocator *extraout_RDX_79;
  allocator *extraout_RDX_80;
  allocator *extraout_RDX_81;
  allocator *extraout_RDX_82;
  allocator *extraout_RDX_83;
  allocator *extraout_RDX_84;
  allocator *extraout_RDX_85;
  allocator *extraout_RDX_86;
  allocator *extraout_RDX_87;
  allocator *extraout_RDX_88;
  allocator *extraout_RDX_89;
  allocator *extraout_RDX_90;
  allocator *extraout_RDX_91;
  allocator *extraout_RDX_92;
  allocator *extraout_RDX_93;
  allocator *extraout_RDX_94;
  allocator *extraout_RDX_95;
  allocator *extraout_RDX_96;
  allocator *extraout_RDX_97;
  allocator *extraout_RDX_98;
  allocator *extraout_RDX_99;
  allocator *extraout_RDX_x00100;
  allocator *extraout_RDX_x00101;
  allocator *extraout_RDX_x00102;
  allocator *extraout_RDX_x00103;
  allocator *extraout_RDX_x00104;
  allocator *extraout_RDX_x00105;
  allocator *extraout_RDX_x00106;
  allocator *extraout_RDX_x00107;
  allocator *extraout_RDX_x00108;
  allocator *extraout_RDX_x00109;
  allocator *extraout_RDX_x00110;
  allocator *extraout_RDX_x00111;
  allocator *extraout_RDX_x00112;
  allocator *extraout_RDX_x00113;
  allocator *extraout_RDX_x00114;
  allocator *extraout_RDX_x00115;
  allocator *extraout_RDX_x00116;
  allocator *extraout_RDX_x00117;
  allocator *extraout_RDX_x00118;
  allocator *extraout_RDX_x00119;
  allocator *extraout_RDX_x00120;
  allocator *extraout_RDX_x00121;
  allocator *extraout_RDX_x00122;
  allocator *extraout_RDX_x00123;
  allocator *extraout_RDX_x00124;
  allocator *extraout_RDX_x00125;
  allocator *extraout_RDX_x00126;
  allocator *extraout_RDX_x00127;
  allocator *extraout_RDX_x00128;
  allocator *extraout_RDX_x00129;
  allocator *extraout_RDX_x00130;
  allocator *extraout_RDX_x00131;
  allocator *extraout_RDX_x00132;
  allocator *extraout_RDX_x00133;
  allocator *extraout_RDX_x00134;
  allocator *paVar13;
  allocator *extraout_RDX_x00135;
  allocator *extraout_RDX_x00136;
  allocator *extraout_RDX_x00137;
  allocator *extraout_RDX_x00138;
  allocator *extraout_RDX_x00139;
  allocator *extraout_RDX_x00140;
  allocator *extraout_RDX_x00141;
  allocator *extraout_RDX_x00142;
  allocator *extraout_RDX_x00143;
  allocator *extraout_RDX_x00144;
  allocator *extraout_RDX_x00145;
  allocator *extraout_RDX_x00146;
  allocator *extraout_RDX_x00147;
  allocator *extraout_RDX_x00148;
  allocator *extraout_RDX_x00149;
  allocator *extraout_RDX_x00150;
  allocator *extraout_RDX_x00151;
  allocator *extraout_RDX_x00152;
  allocator *extraout_RDX_x00153;
  allocator *extraout_RDX_x00154;
  allocator *extraout_RDX_x00155;
  allocator *extraout_RDX_x00156;
  allocator *extraout_RDX_x00157;
  allocator *extraout_RDX_x00158;
  allocator *extraout_RDX_x00159;
  allocator *extraout_RDX_x00160;
  allocator *extraout_RDX_x00161;
  allocator *extraout_RDX_x00162;
  allocator *extraout_RDX_x00163;
  allocator *extraout_RDX_x00164;
  allocator *extraout_RDX_x00165;
  allocator *extraout_RDX_x00166;
  allocator *extraout_RDX_x00167;
  allocator *extraout_RDX_x00168;
  allocator *extraout_RDX_x00169;
  allocator *extraout_RDX_x00170;
  allocator *extraout_RDX_x00171;
  allocator *extraout_RDX_x00172;
  allocator *extraout_RDX_x00173;
  allocator *extraout_RDX_x00174;
  allocator *extraout_RDX_x00175;
  allocator *extraout_RDX_x00176;
  allocator *extraout_RDX_x00177;
  allocator *extraout_RDX_x00178;
  long *plVar14;
  char *pcVar15;
  ostream *poVar16;
  char *unaff_R13;
  char *unaff_R14;
  ostream *unaff_R15;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 *puStack_948;
  int iStack_940;
  float fStack_93c;
  long *plStack_938;
  undefined1 *puStack_930;
  long alStack_928 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_910;
  int iStack_8f0;
  int iStack_8ec;
  long *plStack_8e8;
  long alStack_8d8 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_8c0;
  int iStack_8a0;
  int iStack_89c;
  long *plStack_898;
  long alStack_888 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_870;
  int iStack_850;
  int iStack_84c;
  long *plStack_848;
  long alStack_838 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_820;
  int iStack_800;
  int iStack_7fc;
  long *plStack_7f8;
  long alStack_7e8 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_7d0;
  int iStack_7b0;
  int iStack_7ac;
  long *plStack_7a8;
  long alStack_798 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_780;
  int iStack_760;
  long *plStack_758;
  undefined1 *puStack_750;
  long alStack_748 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_730;
  int iStack_710;
  long *plStack_708;
  undefined1 *puStack_700;
  long alStack_6f8 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_6e0;
  int aiStack_6c0 [2];
  undefined1 *puStack_6b8;
  undefined1 *puStack_6b0;
  int aiStack_670 [2];
  undefined1 *puStack_668;
  undefined1 *puStack_660;
  int iStack_620;
  int iStack_61c;
  int iStack_5d0;
  int iStack_5cc;
  int iStack_580;
  int iStack_57c;
  int iStack_530;
  undefined4 uStack_52c;
  int iStack_4e0;
  undefined4 uStack_4dc;
  int iStack_490;
  undefined4 uStack_48c;
  int iStack_440;
  undefined4 uStack_43c;
  int iStack_3f0;
  int iStack_3ec;
  int iStack_3a0;
  int iStack_39c;
  int iStack_350;
  int iStack_34c;
  int iStack_300;
  int iStack_2fc;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_260;
  int iStack_25c;
  int iStack_210;
  int iStack_20c;
  int iStack_1c0;
  int iStack_1bc;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  uint uStack_158;
  undefined1 uStack_154;
  undefined1 uStack_153;
  undefined1 uStack_152;
  undefined1 auStack_151 [49];
  undefined8 uStack_120;
  long lStack_118;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_78;
  State *pSStack_70;
  ostream *poStack_68;
  ostream *poStack_60;
  ostream *poStack_58;
  ostream *poStack_50;
  ostream *local_40;
  
  pcVar15 = "general:";
  plVar14 = &std::cout;
  poVar16 = (ostream *)&std::cout;
  poStack_50 = (ostream *)0x1016b0;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"general:",8);
  pcVar9 = *(char **)(std::ios_base::ios_base + *(long *)(std::cout + -0x18));
  if ((ostream *)pcVar9 != (ostream *)0x0) {
    if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
      poStack_50 = (ostream *)0x102ba8;
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*(long *)pcVar9 + 0x30) != std::ctype<char>::do_widen) {
        poStack_50 = (ostream *)0x102bca;
        (**(code **)(*(long *)pcVar9 + 0x30))(pcVar9,10);
      }
    }
    poStack_50 = (ostream *)0x1016e6;
    std::ostream::put(-0x70);
    poStack_50 = (ostream *)0x1016ee;
    std::ostream::flush();
    poStack_50 = (ostream *)0x101702;
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"  build threads      = ",0x17);
    pcVar15 = *(char **)(this + 0x4b8);
    poVar16 = (ostream *)&std::cout;
    poStack_50 = (ostream *)0x101711;
    pcVar9 = (char *)std::ostream::_M_insert<unsigned_long>(0x10f090);
    unaff_R13 = *(char **)((ostream *)pcVar9 + *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
    if ((ostream *)unaff_R13 != (ostream *)0x0) {
      if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
        poStack_50 = (ostream *)0x102be0;
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
          poStack_50 = (ostream *)0x102c02;
          (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
        }
      }
      poStack_50 = (ostream *)0x101744;
      std::ostream::put((char)pcVar9);
      poStack_50 = (ostream *)0x10174c;
      std::ostream::flush();
      poStack_50 = (ostream *)0x101760;
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"  build user threads = ",0x17);
      pcVar15 = *(char **)(this + 0x4c0);
      poVar16 = (ostream *)&std::cout;
      poStack_50 = (ostream *)0x10176f;
      pcVar9 = (char *)std::ostream::_M_insert<unsigned_long>(0x10f090);
      unaff_R13 = *(char **)((ostream *)pcVar9 + *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
      if ((ostream *)unaff_R13 != (ostream *)0x0) {
        if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
          poStack_50 = (ostream *)0x102c18;
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
            poStack_50 = (ostream *)0x102c3a;
            (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
          }
        }
        poStack_50 = (ostream *)0x1017a2;
        std::ostream::put((char)pcVar9);
        poStack_50 = (ostream *)0x1017aa;
        std::ostream::flush();
        poStack_50 = (ostream *)0x1017be;
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,"  start_threads      = ",0x17);
        pcVar15 = (char *)(ulong)(byte)this[0x4c9];
        poVar16 = (ostream *)&std::cout;
        poStack_50 = (ostream *)0x1017cd;
        pcVar9 = (char *)std::ostream::_M_insert<bool>(true);
        unaff_R13 = *(char **)((ostream *)pcVar9 + *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
        if ((ostream *)unaff_R13 != (ostream *)0x0) {
          if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
            poStack_50 = (ostream *)0x102c50;
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
              poStack_50 = (ostream *)0x102c72;
              (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
            }
          }
          poStack_50 = (ostream *)0x101800;
          std::ostream::put((char)pcVar9);
          poStack_50 = (ostream *)0x101808;
          std::ostream::flush();
          poStack_50 = (ostream *)0x10181c;
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"  affinity           = ",0x17);
          pcVar15 = (char *)(ulong)(byte)this[0x4c8];
          poVar16 = (ostream *)&std::cout;
          poStack_50 = (ostream *)0x10182b;
          pcVar9 = (char *)std::ostream::_M_insert<bool>(true);
          unaff_R13 = *(char **)((ostream *)pcVar9 + *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
          if ((ostream *)unaff_R13 != (ostream *)0x0) {
            if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
              poStack_50 = (ostream *)0x102c88;
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                poStack_50 = (ostream *)0x102caa;
                (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
              }
            }
            poStack_50 = (ostream *)0x10185e;
            std::ostream::put((char)pcVar9);
            poStack_50 = (ostream *)0x101866;
            std::ostream::flush();
            poStack_50 = (ostream *)0x10187a;
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&std::cout,"  frequency_level    = ",0x17);
            iVar7 = *(int *)(this + 0x4d4);
            if (iVar7 == 1) {
              lVar12 = 7;
              pcVar15 = "simd256";
            }
            else {
              lVar12 = 7;
              pcVar15 = "simd512";
              if (iVar7 != 2) {
                lVar12 = 7;
                pcVar15 = "simd128";
                if (iVar7 != 0) {
                  lVar12 = 5;
                  pcVar15 = "error";
                }
              }
            }
            poVar16 = (ostream *)&std::cout;
            poStack_50 = (ostream *)0x1018be;
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar15,lVar12)
            ;
            pcVar9 = *(char **)(std::ios_base::ios_base + *(long *)(std::cout + -0x18));
            if ((ostream *)pcVar9 != (ostream *)0x0) {
              if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
                poStack_50 = (ostream *)0x102cc0;
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*(long *)pcVar9 + 0x30) != std::ctype<char>::do_widen) {
                  poStack_50 = (ostream *)0x102ce2;
                  (**(code **)(*(long *)pcVar9 + 0x30))(pcVar9,10);
                }
              }
              poStack_50 = (ostream *)0x1018f4;
              std::ostream::put(-0x70);
              poStack_50 = (ostream *)0x1018fc;
              std::ostream::flush();
              poStack_50 = (ostream *)0x101910;
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)&std::cout,"  hugepages          = ",0x17);
              lVar12 = 8;
              pcVar15 = "disabled";
              if (this[0x4d9] != (State)0x0) {
                lVar12 = 7;
                pcVar15 = "enabled";
                if (this[0x4da] == (State)0x0) {
                  lVar12 = 6;
                  pcVar15 = "failed";
                }
              }
              poVar16 = (ostream *)&std::cout;
              poStack_50 = (ostream *)0x101946;
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)&std::cout,pcVar15,lVar12);
              pcVar9 = *(char **)(std::ios_base::ios_base + *(long *)(std::cout + -0x18));
              if ((ostream *)pcVar9 != (ostream *)0x0) {
                if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
                  poStack_50 = (ostream *)0x102cf8;
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*(long *)pcVar9 + 0x30) != std::ctype<char>::do_widen) {
                    poStack_50 = (ostream *)0x102d1a;
                    (**(code **)(*(long *)pcVar9 + 0x30))(pcVar9,10);
                  }
                }
                poStack_50 = (ostream *)0x10197c;
                std::ostream::put(-0x70);
                poStack_50 = (ostream *)0x101984;
                std::ostream::flush();
                poStack_50 = (ostream *)0x101998;
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)&std::cout,"  verbosity          = ",0x17);
                pcVar15 = *(char **)(this + 0x4a8);
                poVar16 = (ostream *)&std::cout;
                poStack_50 = (ostream *)0x1019a7;
                pcVar9 = (char *)std::ostream::_M_insert<unsigned_long>(0x10f090);
                unaff_R13 = *(char **)((ostream *)pcVar9 + *(long *)(*(long *)pcVar9 + -0x18) + 0xf0
                                      );
                if ((ostream *)unaff_R13 != (ostream *)0x0) {
                  if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                    poStack_50 = (ostream *)0x102d30;
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                      poStack_50 = (ostream *)0x102d52;
                      (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                    }
                  }
                  poStack_50 = (ostream *)0x1019da;
                  std::ostream::put((char)pcVar9);
                  poStack_50 = (ostream *)0x1019e2;
                  std::ostream::flush();
                  poStack_50 = (ostream *)0x1019f6;
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&std::cout,"  cache_size         = ",0x17);
                  poStack_50 = (ostream *)0x101a23;
                  pcVar9 = (char *)std::ostream::_M_insert<double>
                                             ((double)*(ulong *)(this + 0x468) * __LC29);
                  pcVar15 = " MB";
                  poStack_50 = (ostream *)0x101a3a;
                  poVar16 = (ostream *)pcVar9;
                  std::__ostream_insert<char,std::char_traits<char>>((ostream *)pcVar9," MB",3);
                  unaff_R13 = *(char **)((ostream *)pcVar9 +
                                        *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                      poStack_50 = (ostream *)0x102d68;
                      std::ctype<char>::_M_widen_init();
                      if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                        poStack_50 = (ostream *)0x102d8a;
                        (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                      }
                    }
                    poStack_50 = (ostream *)0x101a6b;
                    std::ostream::put((char)pcVar9);
                    poStack_50 = (ostream *)0x101a73;
                    std::ostream::flush();
                    pcVar15 = "  max_spatial_split_replications = ";
                    poStack_50 = (ostream *)0x101a87;
                    std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)&std::cout,"  max_spatial_split_replications = ",0x23);
                    poVar16 = (ostream *)&std::cout;
                    poStack_50 = (ostream *)0x101a9b;
                    pcVar9 = (char *)std::ostream::_M_insert<double>
                                               ((double)*(float *)(this + 0x460));
                    unaff_R13 = *(char **)((ostream *)pcVar9 +
                                          *(long *)(*(long *)pcVar9 + -0x18) + 0xf0);
                    if ((ostream *)unaff_R13 != (ostream *)0x0) {
                      if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                        poStack_50 = (ostream *)0x102da0;
                        std::ctype<char>::_M_widen_init();
                        if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                          poStack_50 = (ostream *)0x102dc2;
                          (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                        }
                      }
                      poStack_50 = (ostream *)0x101ace;
                      std::ostream::put((char)pcVar9);
                      poStack_50 = (ostream *)0x101ad6;
                      std::ostream::flush();
                      pcVar15 = "triangles:";
                      poVar16 = (ostream *)&std::cout;
                      poStack_50 = (ostream *)0x101aea;
                      std::__ostream_insert<char,std::char_traits<char>>
                                ((ostream *)&std::cout,"triangles:",10);
                      pcVar9 = *(char **)(std::ios_base::ios_base + *(long *)(std::cout + -0x18));
                      if ((ostream *)pcVar9 != (ostream *)0x0) {
                        if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
                          poStack_50 = (ostream *)0x102dd8;
                          std::ctype<char>::_M_widen_init();
                          if (*(code **)(*(long *)pcVar9 + 0x30) != std::ctype<char>::do_widen) {
                            poStack_50 = (ostream *)0x102dfa;
                            (**(code **)(*(long *)pcVar9 + 0x30))(pcVar9,10);
                          }
                        }
                        pcVar9 = "  accel              = ";
                        poStack_50 = (ostream *)0x101b27;
                        std::ostream::put(-0x70);
                        poStack_50 = (ostream *)0x101b2f;
                        std::ostream::flush();
                        poStack_50 = (ostream *)0x101b3f;
                        std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)&std::cout,"  accel              = ",0x17);
                        pcVar15 = *(char **)(this + 0x10);
                        poVar16 = (ostream *)&std::cout;
                        poStack_50 = (ostream *)0x101b4f;
                        poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,pcVar15,*(long *)(this + 0x18));
                        unaff_R14 = *(char **)(poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0)
                        ;
                        unaff_R13 = (char *)poVar10;
                        if ((ostream *)unaff_R14 != (ostream *)0x0) {
                          if (((ostream *)unaff_R14)[0x38] == (ostream)0x0) {
                            poStack_50 = (ostream *)0x102e10;
                            std::ctype<char>::_M_widen_init();
                            if (*(code **)(*(long *)unaff_R14 + 0x30) != std::ctype<char>::do_widen)
                            {
                              poStack_50 = (ostream *)0x102e31;
                              (**(code **)(*(long *)unaff_R14 + 0x30))(unaff_R14,10);
                            }
                          }
                          unaff_R13 = "  builder            = ";
                          poStack_50 = (ostream *)0x101b89;
                          std::ostream::put((char)poVar10);
                          poStack_50 = (ostream *)0x101b91;
                          std::ostream::flush();
                          poStack_50 = (ostream *)0x101ba1;
                          std::__ostream_insert<char,std::char_traits<char>>
                                    ((ostream *)&std::cout,"  builder            = ",0x17);
                          pcVar15 = *(char **)(this + 0x30);
                          poVar16 = (ostream *)&std::cout;
                          poStack_50 = (ostream *)0x101bb1;
                          poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,pcVar15,*(long *)(this + 0x38))
                          ;
                          unaff_R15 = *(ostream **)
                                       (poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
                          unaff_R14 = (char *)poVar10;
                          if (unaff_R15 != (ostream *)0x0) {
                            if (unaff_R15[0x38] == (ostream)0x0) {
                              poStack_50 = (ostream *)0x102e48;
                              std::ctype<char>::_M_widen_init();
                              if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                  std::ctype<char>::do_widen) {
                                poStack_50 = (ostream *)0x102e69;
                                (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                              }
                            }
                            unaff_R14 = "  traverser          = ";
                            poStack_50 = (ostream *)0x101beb;
                            std::ostream::put((char)poVar10);
                            poStack_50 = (ostream *)0x101bf3;
                            std::ostream::flush();
                            poStack_50 = (ostream *)0x101c03;
                            std::__ostream_insert<char,std::char_traits<char>>
                                      ((ostream *)&std::cout,"  traverser          = ",0x17);
                            pcVar15 = *(char **)(this + 0x50);
                            poVar16 = (ostream *)&std::cout;
                            poStack_50 = (ostream *)0x101c13;
                            poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)&std::cout,pcVar15,
                                                 *(long *)(this + 0x58));
                            unaff_R15 = *(ostream **)
                                         (poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
                            if (unaff_R15 != (ostream *)0x0) {
                              if (unaff_R15[0x38] == (ostream)0x0) {
                                poStack_50 = (ostream *)0x102e85;
                                local_40 = poVar10;
                                std::ctype<char>::_M_widen_init();
                                poVar10 = local_40;
                                if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                    std::ctype<char>::do_widen) {
                                  poStack_50 = (ostream *)0x102eab;
                                  (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                  poVar10 = local_40;
                                }
                              }
                              poStack_50 = (ostream *)0x101c46;
                              std::ostream::put((char)poVar10);
                              poStack_50 = (ostream *)0x101c4e;
                              std::ostream::flush();
                              pcVar15 = "motion blur triangles:";
                              poVar16 = (ostream *)&std::cout;
                              poStack_50 = (ostream *)0x101c62;
                              std::__ostream_insert<char,std::char_traits<char>>
                                        ((ostream *)&std::cout,"motion blur triangles:",0x16);
                              unaff_R15 = *(ostream **)
                                           (std::ios_base::ios_base + *(long *)(std::cout + -0x18));
                              if (unaff_R15 != (ostream *)0x0) {
                                if (unaff_R15[0x38] == (ostream)0x0) {
                                  poStack_50 = (ostream *)0x102ec8;
                                  std::ctype<char>::_M_widen_init();
                                  if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                      std::ctype<char>::do_widen) {
                                    poStack_50 = (ostream *)0x102ee9;
                                    (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                  }
                                }
                                poStack_50 = (ostream *)0x101c96;
                                std::ostream::put(-0x70);
                                poStack_50 = (ostream *)0x101c9e;
                                std::ostream::flush();
                                poStack_50 = (ostream *)0x101cae;
                                std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)&std::cout,"  accel              = ",0x17);
                                pcVar15 = *(char **)(this + 0x70);
                                poStack_50 = (ostream *)0x101cbe;
                                unaff_R15 = std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,pcVar15,
                                                       *(long *)(this + 0x78));
                                poVar16 = *(ostream **)
                                           (unaff_R15 + *(long *)(*(long *)unaff_R15 + -0x18) + 0xf0
                                           );
                                if (poVar16 != (ostream *)0x0) {
                                  if (poVar16[0x38] == (ostream)0x0) {
                                    poStack_50 = (ostream *)0x102f02;
                                    local_40 = poVar16;
                                    std::ctype<char>::_M_widen_init();
                                    if (*(code **)(*(long *)local_40 + 0x30) !=
                                        std::ctype<char>::do_widen) {
                                      poStack_50 = (ostream *)0x102f25;
                                      (**(code **)(*(long *)local_40 + 0x30))(local_40,10);
                                    }
                                  }
                                  poStack_50 = (ostream *)0x101cef;
                                  std::ostream::put((char)unaff_R15);
                                  poStack_50 = (ostream *)0x101cf7;
                                  std::ostream::flush();
                                  poStack_50 = (ostream *)0x101d07;
                                  std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,"  builder            = ",0x17);
                                  pcVar15 = *(char **)(this + 0x90);
                                  poVar16 = (ostream *)&std::cout;
                                  poStack_50 = (ostream *)0x101d1d;
                                  poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,pcVar15,
                                                       *(long *)(this + 0x98));
                                  unaff_R15 = *(ostream **)
                                               (poVar10 + *(long *)(*(long *)poVar10 + -0x18) + 0xf0
                                               );
                                  if (unaff_R15 != (ostream *)0x0) {
                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                      poStack_50 = (ostream *)0x102f3d;
                                      local_40 = poVar10;
                                      std::ctype<char>::_M_widen_init();
                                      poVar10 = local_40;
                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                          std::ctype<char>::do_widen) {
                                        poStack_50 = (ostream *)0x102f63;
                                        (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                        poVar10 = local_40;
                                      }
                                    }
                                    poStack_50 = (ostream *)0x101d50;
                                    std::ostream::put((char)poVar10);
                                    poStack_50 = (ostream *)0x101d58;
                                    std::ostream::flush();
                                    poStack_50 = (ostream *)0x101d68;
                                    std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,"  traverser          = ",0x17)
                                    ;
                                    pcVar15 = *(char **)(this + 0xb0);
                                    poVar16 = (ostream *)&std::cout;
                                    poStack_50 = (ostream *)0x101d7e;
                                    poVar10 = std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)&std::cout,pcVar15,
                                                         *(long *)(this + 0xb8));
                                    unaff_R15 = *(ostream **)
                                                 (poVar10 +
                                                 *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
                                    if (unaff_R15 != (ostream *)0x0) {
                                      if (unaff_R15[0x38] == (ostream)0x0) {
                                        poStack_50 = (ostream *)0x102f7d;
                                        local_40 = poVar10;
                                        std::ctype<char>::_M_widen_init();
                                        poVar10 = local_40;
                                        if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                            std::ctype<char>::do_widen) {
                                          poStack_50 = (ostream *)0x102fa3;
                                          (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                          poVar10 = local_40;
                                        }
                                      }
                                      poStack_50 = (ostream *)0x101db1;
                                      std::ostream::put((char)poVar10);
                                      poStack_50 = (ostream *)0x101db9;
                                      std::ostream::flush();
                                      pcVar15 = "quads:";
                                      poVar16 = (ostream *)&std::cout;
                                      poStack_50 = (ostream *)0x101dcd;
                                      std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)&std::cout,"quads:",6);
                                      unaff_R15 = *(ostream **)
                                                   (std::ios_base::ios_base +
                                                   *(long *)(std::cout + -0x18));
                                      if (unaff_R15 != (ostream *)0x0) {
                                        if (unaff_R15[0x38] == (ostream)0x0) {
                                          poStack_50 = (ostream *)0x102fb8;
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                              std::ctype<char>::do_widen) {
                                            poStack_50 = (ostream *)0x102fd9;
                                            (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                          }
                                        }
                                        poStack_50 = (ostream *)0x101e01;
                                        std::ostream::put(-0x70);
                                        poStack_50 = (ostream *)0x101e09;
                                        std::ostream::flush();
                                        poStack_50 = (ostream *)0x101e19;
                                        std::__ostream_insert<char,std::char_traits<char>>
                                                  ((ostream *)&std::cout,"  accel              = ",
                                                   0x17);
                                        pcVar15 = *(char **)(this + 0xd0);
                                        poStack_50 = (ostream *)0x101e2f;
                                        unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0xd8));
                                        poVar16 = *(ostream **)
                                                   (unaff_R15 +
                                                   *(long *)(*(long *)unaff_R15 + -0x18) + 0xf0);
                                        if (poVar16 != (ostream *)0x0) {
                                          if (poVar16[0x38] == (ostream)0x0) {
                                            poStack_50 = (ostream *)0x102ff2;
                                            local_40 = poVar16;
                                            std::ctype<char>::_M_widen_init();
                                            if (*(code **)(*(long *)local_40 + 0x30) !=
                                                std::ctype<char>::do_widen) {
                                              poStack_50 = (ostream *)0x103015;
                                              (**(code **)(*(long *)local_40 + 0x30))(local_40,10);
                                            }
                                          }
                                          poStack_50 = (ostream *)0x101e60;
                                          std::ostream::put((char)unaff_R15);
                                          poStack_50 = (ostream *)0x101e68;
                                          std::ostream::flush();
                                          poStack_50 = (ostream *)0x101e78;
                                          std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,"  builder            = "
                                                     ,0x17);
                                          pcVar15 = *(char **)(this + 0xf0);
                                          poVar16 = (ostream *)&std::cout;
                                          poStack_50 = (ostream *)0x101e8e;
                                          poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0xf8));
                                          unaff_R15 = *(ostream **)
                                                       (poVar10 +
                                                       *(long *)(*(long *)poVar10 + -0x18) + 0xf0);
                                          if (unaff_R15 != (ostream *)0x0) {
                                            if (unaff_R15[0x38] == (ostream)0x0) {
                                              poStack_50 = (ostream *)0x10302d;
                                              local_40 = poVar10;
                                              std::ctype<char>::_M_widen_init();
                                              poVar10 = local_40;
                                              if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                  std::ctype<char>::do_widen) {
                                                poStack_50 = (ostream *)0x103053;
                                                (**(code **)(*(long *)unaff_R15 + 0x30))
                                                          (unaff_R15,10);
                                                poVar10 = local_40;
                                              }
                                            }
                                            poStack_50 = (ostream *)0x101ec1;
                                            std::ostream::put((char)poVar10);
                                            poStack_50 = (ostream *)0x101ec9;
                                            std::ostream::flush();
                                            poStack_50 = (ostream *)0x101ed9;
                                            std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,
                                                       "  traverser          = ",0x17);
                                            pcVar15 = *(char **)(this + 0x110);
                                            poVar16 = (ostream *)&std::cout;
                                            poStack_50 = (ostream *)0x101eef;
                                            poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x118));
                                            unaff_R15 = *(ostream **)
                                                         (poVar10 +
                                                         *(long *)(*(long *)poVar10 + -0x18) + 0xf0)
                                            ;
                                            if (unaff_R15 != (ostream *)0x0) {
                                              if (unaff_R15[0x38] == (ostream)0x0) {
                                                poStack_50 = (ostream *)0x10306d;
                                                local_40 = poVar10;
                                                std::ctype<char>::_M_widen_init();
                                                poVar10 = local_40;
                                                if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                    std::ctype<char>::do_widen) {
                                                  poStack_50 = (ostream *)0x103093;
                                                  (**(code **)(*(long *)unaff_R15 + 0x30))
                                                            (unaff_R15,10);
                                                  poVar10 = local_40;
                                                }
                                              }
                                              poStack_50 = (ostream *)0x101f22;
                                              std::ostream::put((char)poVar10);
                                              poStack_50 = (ostream *)0x101f2a;
                                              std::ostream::flush();
                                              pcVar15 = "motion blur quads:";
                                              poVar16 = (ostream *)&std::cout;
                                              poStack_50 = (ostream *)0x101f3e;
                                              std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)&std::cout,"motion blur quads:",
                                                         0x12);
                                              unaff_R15 = *(ostream **)
                                                           (std::ios_base::ios_base +
                                                           *(long *)(std::cout + -0x18));
                                              if (unaff_R15 != (ostream *)0x0) {
                                                if (unaff_R15[0x38] == (ostream)0x0) {
                                                  poStack_50 = (ostream *)0x1030a8;
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    poStack_50 = (ostream *)0x1030c9;
                                                    (**(code **)(*(long *)unaff_R15 + 0x30))
                                                              (unaff_R15,10);
                                                  }
                                                }
                                                poStack_50 = (ostream *)0x101f72;
                                                std::ostream::put(-0x70);
                                                poStack_50 = (ostream *)0x101f7a;
                                                std::ostream::flush();
                                                poStack_50 = (ostream *)0x101f8a;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)&std::cout,
                                                           "  accel              = ",0x17);
                                                pcVar15 = *(char **)(this + 0x130);
                                                poVar16 = (ostream *)&std::cout;
                                                poStack_50 = (ostream *)0x101fa0;
                                                poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x138));
                                                unaff_R15 = *(ostream **)
                                                             (poVar10 +
                                                             *(long *)(*(long *)poVar10 + -0x18) +
                                                             0xf0);
                                                if (unaff_R15 != (ostream *)0x0) {
                                                  if (unaff_R15[0x38] == (ostream)0x0) {
                                                    poStack_50 = (ostream *)0x1030e5;
                                                    local_40 = poVar10;
                                                    std::ctype<char>::_M_widen_init();
                                                    poVar10 = local_40;
                                                    if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                        std::ctype<char>::do_widen) {
                                                      poStack_50 = (ostream *)0x10310b;
                                                      (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                (unaff_R15,10);
                                                      poVar10 = local_40;
                                                    }
                                                  }
                                                  poStack_50 = (ostream *)0x101fd3;
                                                  std::ostream::put((char)poVar10);
                                                  poStack_50 = (ostream *)0x101fdb;
                                                  std::ostream::flush();
                                                  poStack_50 = (ostream *)0x101feb;
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x150);
                                                  poStack_50 = (ostream *)0x102001;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x158));
                                                  poVar16 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar16 != (ostream *)0x0) {
                                                    if (poVar16[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10312a;
                                                      local_40 = poVar16;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10314d;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102032;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x10203a;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10204a;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x170);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102060;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x178));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103165;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10318b;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102093;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10209b;
                                                    std::ostream::flush();
                                                    pcVar15 = "line segments:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x1020af;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"line segments:",
                                                             0xe);
                                                  unaff_R15 = *(ostream **)
                                                               (std::ios_base::ios_base +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1031a8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1031c9;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1020e3;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x1020eb;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1020fb;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 400);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102111;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x198));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1031e5;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10320b;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102144;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10214c;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10215c;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x1b0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102172;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x1b8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10322d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103253;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1021a5;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x1021ad;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1021bd;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x1d0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1021d3;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x1d8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10326d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103293;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102206;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10220e;
                                                    std::ostream::flush();
                                                    pcVar15 = "motion blur line segments:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102222;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur line segments:",0x1a);
                                                  unaff_R15 = *(ostream **)
                                                               (std::ios_base::ios_base +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1032a8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1032c9;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102256;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x10225e;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10226e;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x1f0);
                                                  poStack_50 = (ostream *)0x102284;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x1f8));
                                                  poVar16 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar16 != (ostream *)0x0) {
                                                    if (poVar16[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1032e2;
                                                      local_40 = poVar16;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103305;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1022b5;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x1022bd;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1022cd;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x210);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1022e3;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x218));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10331d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103343;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102316;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10231e;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10232e;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x230);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102344;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x238));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10335d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103383;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102377;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10237f;
                                                    std::ostream::flush();
                                                    pcVar15 = "hair:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102393;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"hair:",5);
                                                  unaff_R15 = *(ostream **)
                                                               (std::ios_base::ios_base +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103398;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1033b9;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1023c7;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x1023cf;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1023df;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x250);
                                                  poStack_50 = (ostream *)0x1023f5;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 600));
                                                  poVar16 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar16 != (ostream *)0x0) {
                                                    if (poVar16[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1033d2;
                                                      local_40 = poVar16;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1033f5;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102426;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x10242e;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10243e;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x270);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102454;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x278));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10340d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103433;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102487;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x10248f;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10249f;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x290);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1024b5;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x298));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10344d;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103473;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1024e8;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x1024f0;
                                                    std::ostream::flush();
                                                    pcVar15 = "motion blur hair:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102504;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur hair:",0x11);
                                                  unaff_R15 = *(ostream **)
                                                               (std::ios_base::ios_base +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103488;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1034a9;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102538;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x102540;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102550;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x2b0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102566;
                                                  poVar10 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x2b8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar10 +
                                                               *(long *)(*(long *)poVar10 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1034c5;
                                                      local_40 = poVar10;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar10 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1034eb;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar10 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102599;
                                                    std::ostream::put((char)poVar10);
                                                    poStack_50 = (ostream *)0x1025a1;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1025b1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x2d0);
                                                  poStack_50 = (ostream *)0x1025c7;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x2d8));
                                                  poVar16 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar16 != (ostream *)0x0) {
                                                    if (poVar16[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10350a;
                                                      local_40 = poVar16;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10352d;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1025f8;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102600;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102610;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x2f0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102626;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x2f8));
                                                  unaff_R14 = *(char **)(unaff_R15 +
                                                                        *(long *)(*(long *)unaff_R15
                                                                                 + -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103540;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103561;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102659;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102661;
                                                    std::ostream::flush();
                                                    pcVar15 = "subdivision surfaces:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102675;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "subdivision surfaces:",0x15);
                                                  unaff_R14 = *(char **)(std::ios_base::ios_base +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103578;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103599;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1026a9;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x1026b1;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1026c1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x3a0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1026d7;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x3a8));
                                                  unaff_R14 = *(char **)(unaff_R15 +
                                                                        *(long *)(*(long *)unaff_R15
                                                                                 + -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1035b0;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1035d1;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10270a;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102712;
                                                    std::ostream::flush();
                                                    pcVar15 = "grids:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102726;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"grids:",6);
                                                  unaff_R14 = *(char **)(std::ios_base::ios_base +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1035e8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103609;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10275a;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x102762;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102772;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x3e0);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102788;
                                                  unaff_R14 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 1000));
                                                  unaff_R15 = *(ostream **)
                                                               ((ostream *)unaff_R14 +
                                                               *(long *)(*(long *)unaff_R14 + -0x18)
                                                               + 0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103620;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103641;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1027bb;
                                                    std::ostream::put((char)unaff_R14);
                                                    poStack_50 = (ostream *)0x1027c3;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1027d3;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x400);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1027e9;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x408));
                                                  unaff_R14 = *(char **)(unaff_R15 +
                                                                        *(long *)(*(long *)unaff_R15
                                                                                 + -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103658;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103679;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10281c;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102824;
                                                    std::ostream::flush();
                                                    pcVar15 = "motion blur grids:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102838;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur grids:",0x12);
                                                  unaff_R14 = *(char **)(std::ios_base::ios_base +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103690;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1036b1;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10286c;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x102874;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102884;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x420);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x10289a;
                                                  pcVar9 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x428));
                                                  unaff_R14 = *(char **)((ostream *)pcVar9 +
                                                                        *(long *)(*(long *)pcVar9 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1036c8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1036e9;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1028cd;
                                                    std::ostream::put((char)pcVar9);
                                                    poStack_50 = (ostream *)0x1028d5;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1028e5;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar15 = *(char **)(this + 0x440);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1028fb;
                                                  pcVar9 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar15,
                                                             *(long *)(this + 0x448));
                                                  unaff_R13 = *(char **)((ostream *)pcVar9 +
                                                                        *(long *)(*(long *)pcVar9 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103700;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R13 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103722;
                                                        (**(code **)(*(long *)unaff_R13 + 0x30))
                                                                  (unaff_R13,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10292e;
                                                    std::ostream::put((char)pcVar9);
                                                    poStack_50 = (ostream *)0x102936;
                                                    std::ostream::flush();
                                                    pcVar15 = "object_accel:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x10294a;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"object_accel:",
                                                             0xd);
                                                  pcVar9 = *(char **)(std::ios_base::ios_base +
                                                                     *(long *)(std::cout + -0x18));
                                                  if ((ostream *)pcVar9 != (ostream *)0x0) {
                                                    if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103738;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)pcVar9 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10375a;
                                                        (**(code **)(*(long *)pcVar9 + 0x30))
                                                                  (pcVar9,10);
                                                      }
                                                    }
                                                    unaff_R13 = "  min_leaf_size      = ";
                                                    poStack_50 = (ostream *)0x102987;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x10298f;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10299f;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  min_leaf_size      = ",0x17);
                                                  pcVar15 = (char *)(ulong)*(uint *)(this + 0x350);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1029ad;
                                                  pcVar9 = (char *)std::ostream::operator<<
                                                                             ((ostream *)&std::cout,
                                                                              *(uint *)(this + 0x350
                                                                                       ));
                                                  unaff_R14 = *(char **)((ostream *)pcVar9 +
                                                                        *(long *)(*(long *)pcVar9 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103770;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103791;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    unaff_R14 = "  max_leaf_size      = ";
                                                    poStack_50 = (ostream *)0x1029e7;
                                                    std::ostream::put((char)pcVar9);
                                                    poStack_50 = (ostream *)0x1029ef;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1029ff;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  max_leaf_size      = ",0x17);
                                                  pcVar15 = (char *)(ulong)*(uint *)(this + 0x354);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102a0d;
                                                  pcVar9 = (char *)std::ostream::operator<<
                                                                             ((ostream *)&std::cout,
                                                                              *(uint *)(this + 0x354
                                                                                       ));
                                                  unaff_R15 = *(ostream **)
                                                               ((ostream *)pcVar9 +
                                                               *(long *)(*(long *)pcVar9 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1037a8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1037c9;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102a40;
                                                    std::ostream::put((char)pcVar9);
                                                    poStack_50 = (ostream *)0x102a48;
                                                    std::ostream::flush();
                                                    pcVar15 = "object_accel_mb:";
                                                    poVar16 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102a5c;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "object_accel_mb:",0x10);
                                                  pcVar9 = *(char **)(std::ios_base::ios_base +
                                                                     *(long *)(std::cout + -0x18));
                                                  if ((ostream *)pcVar9 != (ostream *)0x0) {
                                                    if (((ostream *)pcVar9)[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1037e0;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)pcVar9 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103802;
                                                        (**(code **)(*(long *)pcVar9 + 0x30))
                                                                  (pcVar9,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102a92;
                                                    std::ostream::put(-0x70);
                                                    poStack_50 = (ostream *)0x102a9a;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102aaa;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  min_leaf_size      = ",0x17);
                                                  pcVar15 = (char *)(ulong)*(uint *)(this + 0x398);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102ab8;
                                                  pcVar9 = (char *)std::ostream::operator<<
                                                                             ((ostream *)&std::cout,
                                                                              *(uint *)(this + 0x398
                                                                                       ));
                                                  unaff_R13 = *(char **)((ostream *)pcVar9 +
                                                                        *(long *)(*(long *)pcVar9 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103818;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R13 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10383a;
                                                        (**(code **)(*(long *)unaff_R13 + 0x30))
                                                                  (unaff_R13,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102aeb;
                                                    std::ostream::put((char)pcVar9);
                                                    poStack_50 = (ostream *)0x102af3;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102b03;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  max_leaf_size      = ",0x17);
                                                  pcVar15 = (char *)(ulong)*(uint *)(this + 0x39c);
                                                  poVar16 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102b11;
                                                  plVar14 = (long *)std::ostream::operator<<
                                                                              ((ostream *)&std::cout
                                                                               ,*(uint *)(this + 
                                                  0x39c));
                                                  this = *(State **)
                                                          ((long)plVar14 +
                                                          *(long *)(*plVar14 + -0x18) + 0xf0);
                                                  if (this != (State *)0x0) {
                                                    if (this[0x38] == (State)0x0) {
                                                      poStack_50 = (ostream *)0x102b60;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)this + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x102b7e;
                                                        (**(code **)(*(long *)this + 0x30))(this,10)
                                                        ;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102b3e;
                                                    std::ostream::put((char)plVar14);
                                                    std::ostream::flush();
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  poStack_50 = (ostream *)0x10388d;
  std::__throw_bad_cast();
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_78 = plVar14;
  pSStack_70 = this;
  poStack_68 = (ostream *)pcVar9;
  poStack_60 = (ostream *)unaff_R13;
  poStack_58 = (ostream *)unaff_R14;
  poStack_50 = unaff_R15;
  do {
    bVar17 = false;
    uStack_d0 = (undefined1 **)((ulong)uStack_d0 & 0xffffffff00000000);
    puStack_c0 = (undefined1 *)0x0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    puStack_c8 = &uStack_b8;
    piVar11 = (int *)Stream<embree::Token>::peek(*(Stream<embree::Token> **)pcVar15);
    if (*piVar11 == (int)uStack_d0) {
      switch(*piVar11) {
      default:
        bVar17 = true;
        break;
      case 1:
        bVar17 = (char)piVar11[1] == uStack_d0._4_1_;
        break;
      case 2:
        bVar17 = (float)piVar11[1] == uStack_d0._4_4_;
        break;
      case 3:
        bVar17 = (float)piVar11[1] == uStack_d0._4_4_;
        break;
      case 4:
      case 5:
      case 6:
        puVar2 = *(undefined1 **)(piVar11 + 4);
        bVar17 = false;
        if ((puVar2 == puStack_c0) && (bVar17 = true, puVar2 != (undefined1 *)0x0)) {
          iVar7 = memcmp(*(void **)(piVar11 + 2),puStack_c8,(size_t)puVar2);
          bVar17 = iVar7 == 0;
        }
      }
    }
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (bVar17) {
      if (lStack_88 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Stream<embree::Token>::get();
    uStack_160 = 0x6874;
    uStack_15e = 0x72;
    uStack_15d = 0x65;
    uStack_15c = 0x61;
    uStack_15b = 0x7364;
    uStack_168 = 7;
    uStack_159 = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_159);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_00103b33;
    switch(iStack_940) {
    default:
      goto switchD_00103b15_caseD_0;
    case 1:
      cVar6 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_00103b33;
      goto switchD_00103b15_caseD_0;
    }
    if ((bool)cVar6 != false) {
switchD_00103b15_caseD_0:
      lStack_118 = 1;
      uStack_110 = 0x3d;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
    }
LAB_00103b33:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = p_Stack_8c0;
      if (iStack_8f0 == 2) {
        *(long *)(poVar16 + 0x4b8) = (long)iStack_8ec;
        if (p_Stack_8c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_8c0 + 8;
          if (*(long *)(p_Stack_8c0 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_8c0 + 8) = 0;
            (**(code **)(*(long *)p_Stack_8c0 + 0x10))(p_Stack_8c0);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_8c0 + 8);
              *(int *)(p_Stack_8c0 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_8c0);
            }
          }
        }
        if (plStack_8e8 != alStack_8d8) {
          operator_delete(plStack_8e8,alStack_8d8[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x7375;
    uStack_15e = 0x65;
    uStack_15d = 0x72;
    uStack_15c = 0x5f;
    uStack_15b = 0x6874;
    uStack_159 = 0x72;
    uStack_158 = 0x73646165;
    uStack_168 = 0xc;
    uStack_154 = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_154);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_00103f3b;
    switch(iStack_940) {
    default:
      goto switchD_00103f22_caseD_0;
    case 1:
      cVar6 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_00103f3b;
      goto switchD_00103f22_caseD_0;
    }
    if ((bool)cVar6 != false) {
switchD_00103f22_caseD_0:
      uStack_110 = 0x3d;
      lStack_118 = 1;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
    }
LAB_00103f3b:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))();
        (**(code **)(*(long *)p_Var4 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = p_Stack_870;
      if (iStack_8a0 == 2) {
        *(long *)(poVar16 + 0x4c0) = (long)iStack_89c;
        if (p_Stack_870 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_870 + 8;
          if (*(long *)(p_Stack_870 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_870 + 8) = 0;
            (**(code **)(*(long *)p_Stack_870 + 0x10))(p_Stack_870);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_870 + 8);
              *(int *)(p_Stack_870 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_870);
            }
          }
        }
        if (plStack_898 != alStack_888) {
          operator_delete(plStack_898,alStack_888[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x6573;
    uStack_15e = 0x74;
    uStack_15d = 0x5f;
    uStack_15c = 0x61;
    uStack_15b = 0x6666;
    uStack_159 = 0x69;
    uStack_158 = 0x7974696e;
    uStack_168 = 0xc;
    uStack_154 = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_154);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_001041d8;
    switch(iStack_940) {
    default:
      goto switchD_0010416e_caseD_0;
    case 1:
      cVar6 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_001041d8;
      goto switchD_0010416e_caseD_0;
    }
    if ((bool)cVar6 != false) {
switchD_0010416e_caseD_0:
      lStack_118 = 1;
      uStack_110 = 0x3d;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
    }
LAB_001041d8:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = p_Stack_820;
      if (iStack_850 == 2) {
        poVar16[0x4c8] = (ostream)(iStack_84c != 0);
        if (p_Stack_820 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_820 + 8;
          if (*(long *)(p_Stack_820 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_820 + 8) = 0;
            (**(code **)(*(long *)p_Stack_820 + 0x10))(p_Stack_820);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_820 + 8);
              *(int *)(p_Stack_820 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_820);
            }
          }
        }
        if (plStack_848 != alStack_838) {
          operator_delete(plStack_848,alStack_838[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x6661;
    uStack_15e = 0x66;
    uStack_15d = 0x69;
    uStack_15c = 0x6e;
    uStack_15b = 0x7469;
    uStack_159 = 0x79;
    uStack_168 = 8;
    uStack_158 = uStack_158 & 0xffffff00;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_158);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_00104732;
    switch(iStack_940) {
    default:
      goto switchD_001046d0_caseD_0;
    case 1:
      cVar6 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_00104732;
      goto switchD_001046d0_caseD_0;
    }
    if ((bool)cVar6 != false) {
switchD_001046d0_caseD_0:
      lStack_118 = 1;
      uStack_110 = 0x3d;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
    }
LAB_00104732:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = p_Stack_7d0;
      if (iStack_800 == 2) {
        poVar16[0x4c8] = (ostream)(iStack_7fc != 0);
        if (p_Stack_7d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_7d0 + 8;
          if (*(long *)(p_Stack_7d0 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_7d0 + 8) = 0;
            (**(code **)(*(long *)p_Stack_7d0 + 0x10))(p_Stack_7d0);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_7d0 + 8);
              *(int *)(p_Stack_7d0 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_7d0);
            }
          }
        }
        if (plStack_7f8 != alStack_7e8) {
          operator_delete(plStack_7f8,alStack_7e8[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x7473;
    uStack_15e = 0x61;
    uStack_15d = 0x72;
    uStack_15c = 0x74;
    uStack_15b = 0x745f;
    uStack_159 = 0x68;
    uStack_158 = 0x64616572;
    uStack_154 = 0x73;
    uStack_168 = 0xd;
    uStack_153 = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_153);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    p_Var4 = p_Stack_a0;
    if (iStack_940 != (int)uStack_d0) goto joined_r0x00105a1e;
    switch(iStack_940) {
    default:
      goto switchD_00104a77_caseD_0;
    case 1:
      bVar17 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      bVar17 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      bVar17 = !NAN(fStack_93c) && !NAN(uStack_d0._4_4_);
      if (fStack_93c != uStack_d0._4_4_) {
        bVar17 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), p_Var4 = p_Stack_a0,
          iVar7 != 0)))) goto joined_r0x00105a1e;
      goto switchD_00104a77_caseD_0;
    }
    if (bVar17) {
switchD_00104a77_caseD_0:
      lStack_118 = 1;
      uStack_110 = 0x3d;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      p_Var4 = p_Stack_a0;
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
        p_Var4 = p_Stack_a0;
      }
    }
    else {
      cVar6 = '\0';
    }
joined_r0x00105a1e:
    p_Stack_a0 = p_Var4;
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = p_Stack_780;
      if (iStack_7b0 == 2) {
        poVar16[0x4c9] = (ostream)(iStack_7ac != 0);
        if (p_Stack_780 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_780 + 8;
          if (*(long *)(p_Stack_780 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_780 + 8) = 0;
            (**(code **)(*(long *)p_Stack_780 + 0x10))(p_Stack_780);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_780 + 8);
              *(int *)(p_Stack_780 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_780);
            }
          }
        }
        if (plStack_7a8 != alStack_798) {
          operator_delete(plStack_7a8,alStack_798[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x7369;
    uStack_15e = 0x61;
    uStack_168 = 3;
    uStack_15d = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_15d);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_00104c1f;
    switch(iStack_940) {
    case 1:
      if (fStack_93c._0_1_ != uStack_d0._4_1_) goto LAB_00104c1f;
      break;
    case 2:
      cVar6 = fStack_93c == uStack_d0._4_4_;
      goto LAB_00104bcc;
    case 3:
      cVar6 = !NAN(fStack_93c) && !NAN(uStack_d0._4_4_);
      if (fStack_93c != uStack_d0._4_4_) {
        cVar6 = false;
      }
LAB_00104bcc:
      if ((bool)cVar6 != false) break;
      goto LAB_00104c1f;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_00104c1f;
    }
    lStack_118 = 1;
    uStack_110 = 0x3d;
    uStack_120 = &uStack_110;
    cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
LAB_00104c1f:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      puVar2 = puStack_750;
      plVar14 = plStack_758;
      if (iStack_760 == 4) {
        puStack_948 = puStack_750;
        uStack_d0 = &puStack_c0;
        if (puStack_750 < (undefined1 *)0x10) {
          if (puStack_750 == (undefined1 *)0x1) {
            puStack_c0 = (undefined1 *)CONCAT71(puStack_c0._1_7_,(char)*plStack_758);
          }
          else if (puStack_750 != (undefined1 *)0x0) goto LAB_00105bc3;
        }
        else {
          uStack_d0 = (undefined1 **)std::__cxx11::string::_M_create(&uStack_d0,(ulong)&puStack_948)
          ;
          puStack_c0 = puStack_948;
LAB_00105bc3:
          memcpy(uStack_d0,plVar14,(size_t)puVar2);
        }
        *(undefined1 *)((long)uStack_d0 + (long)puStack_948) = 0;
        puStack_c8 = puStack_948;
        embree::toLowerCase((string *)&uStack_120);
        if (uStack_d0 != &puStack_c0) {
          operator_delete(uStack_d0,(ulong)(puStack_c0 + 1));
        }
        p_Var4 = p_Stack_730;
        if (p_Stack_730 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_730 + 8;
          if (*(long *)(p_Stack_730 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_730 + 8) = 0;
            (**(code **)(*(long *)p_Stack_730 + 0x10))(p_Stack_730);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_730 + 8);
              *(int *)(p_Stack_730 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_730);
            }
          }
        }
        if (plStack_758 != alStack_748) {
          operator_delete(plStack_758,alStack_748[0] + 1);
        }
        uVar19 = string_to_cpufeatures((string *)&uStack_120);
        *(undefined4 *)(poVar16 + 0x4cc) = uVar19;
        *(undefined4 *)(poVar16 + 0x4d0) = uVar19;
        goto joined_r0x00105043;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x616d;
    uStack_15e = 0x78;
    uStack_15d = 0x5f;
    uStack_15c = 0x69;
    uStack_15b = 0x6173;
    uStack_168 = 7;
    uStack_159 = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,&uStack_159);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    if (iStack_940 != (int)uStack_d0) goto LAB_00105265;
    switch(iStack_940) {
    default:
      goto switchD_00104d9d_caseD_0;
    case 1:
      bVar17 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      bVar17 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      bVar17 = !NAN(fStack_93c) && !NAN(uStack_d0._4_4_);
      if (fStack_93c != uStack_d0._4_4_) {
        bVar17 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), iVar7 != 0))))
      goto LAB_00105265;
      goto switchD_00104d9d_caseD_0;
    }
    if (bVar17) {
switchD_00104d9d_caseD_0:
      uStack_110 = 0x3d;
      lStack_118 = 1;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
    }
    else {
      cVar6 = '\0';
    }
LAB_00105265:
    p_Var4 = p_Stack_a0;
    if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a0 + 8;
      if (*(long *)(p_Stack_a0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a0 + 0x10))(p_Stack_a0);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_a0 + 8);
          *(int *)(p_Stack_a0 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a0);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      puVar2 = puStack_700;
      plVar14 = plStack_708;
      if (iStack_710 == 4) {
        puStack_948 = puStack_700;
        uStack_d0 = &puStack_c0;
        if (puStack_700 < (undefined1 *)0x10) {
          if (puStack_700 == (undefined1 *)0x1) {
            puStack_c0 = (undefined1 *)CONCAT71(puStack_c0._1_7_,(char)*plStack_708);
          }
          else if (puStack_700 != (undefined1 *)0x0) goto LAB_00105b5e;
        }
        else {
          uStack_d0 = (undefined1 **)std::__cxx11::string::_M_create(&uStack_d0,(ulong)&puStack_948)
          ;
          puStack_c0 = puStack_948;
LAB_00105b5e:
          memcpy(uStack_d0,plVar14,(size_t)puVar2);
        }
        *(undefined1 *)((long)uStack_d0 + (long)puStack_948) = 0;
        puStack_c8 = puStack_948;
        embree::toLowerCase((string *)&uStack_120);
        if (uStack_d0 != &puStack_c0) {
          operator_delete(uStack_d0,(ulong)(puStack_c0 + 1));
        }
        p_Var4 = p_Stack_6e0;
        if (p_Stack_6e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_6e0 + 8;
          if (*(long *)(p_Stack_6e0 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_6e0 + 8) = 0;
            (**(code **)(*(long *)p_Stack_6e0 + 0x10))(p_Stack_6e0);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = *(int *)(p_Stack_6e0 + 8);
              *(int *)(p_Stack_6e0 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_6e0);
            }
          }
        }
        if (plStack_708 != alStack_6f8) {
          operator_delete(plStack_708,alStack_6f8[0] + 1);
        }
        uVar8 = string_to_cpufeatures((string *)&uStack_120);
        *(uint *)(poVar16 + 0x4d0) = *(uint *)(poVar16 + 0x4d0) & uVar8 & *(uint *)(poVar16 + 0x4cc)
        ;
        *(uint *)(poVar16 + 0x4cc) = uVar8 & *(uint *)(poVar16 + 0x4cc);
        goto joined_r0x00105043;
      }
embree_State_parse:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uStack_160 = 0x616d;
    uStack_15e = 0x78;
    uStack_15d = 0x5f;
    uStack_15c = 0x62;
    uStack_15b = 0x6975;
    uStack_159 = 0x6c;
    uStack_158 = 0x5f726564;
    uStack_154 = 0x69;
    uStack_153 = 0x73;
    uStack_152 = 0x61;
    uStack_168 = 0xf;
    auStack_151[0] = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,auStack_151);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = '\0';
    p_Var4 = p_Stack_a0;
    if (iStack_940 != (int)uStack_d0) goto joined_r0x00105c53;
    switch(iStack_940) {
    default:
      goto switchD_0010555b_caseD_0;
    case 1:
      bVar17 = fStack_93c._0_1_ == uStack_d0._4_1_;
      break;
    case 2:
      bVar17 = fStack_93c == uStack_d0._4_4_;
      break;
    case 3:
      bVar17 = !NAN(fStack_93c) && !NAN(uStack_d0._4_4_);
      if (fStack_93c != uStack_d0._4_4_) {
        bVar17 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((puStack_930 != puStack_c0) ||
         ((puStack_930 != (undefined1 *)0x0 &&
          (iVar7 = memcmp(plStack_938,puStack_c8,(size_t)puStack_930), p_Var4 = p_Stack_a0,
          iVar7 != 0)))) goto joined_r0x00105c53;
      goto switchD_0010555b_caseD_0;
    }
    if (bVar17) {
switchD_0010555b_caseD_0:
      lStack_118 = 1;
      uStack_110 = 0x3d;
      uStack_120 = &uStack_110;
      cVar6 = embree::TokenStream::trySymbol(*(string **)pcVar15);
      p_Var4 = p_Stack_a0;
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
        p_Var4 = p_Stack_a0;
      }
    }
    else {
      cVar6 = '\0';
    }
joined_r0x00105c53:
    p_Stack_a0 = p_Var4;
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))();
        (**(code **)(*(long *)p_Var4 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
    if (puStack_c8 != &uStack_b8) {
      operator_delete(puStack_c8,CONCAT71(uStack_b7,uStack_b8) + 1);
    }
    if (uStack_170 != &uStack_160) {
      operator_delete(uStack_170,
                      CONCAT17(uStack_159,
                               CONCAT25(uStack_15b,
                                        CONCAT14(uStack_15c,
                                                 CONCAT13(uStack_15d,CONCAT12(uStack_15e,uStack_160)
                                                         )))) + 1);
    }
    if (cVar6 != '\0') {
      Stream<embree::Token>::get();
      puVar5 = puStack_6b0;
      puVar2 = puStack_6b8;
      if (aiStack_6c0[0] == 4) {
        puStack_948 = puStack_6b0;
        uStack_d0 = &puStack_c0;
        if (puStack_6b0 < (undefined1 *)0x10) {
          if (puStack_6b0 == (undefined1 *)0x1) {
            puStack_c0 = (undefined1 *)CONCAT71(puStack_c0._1_7_,*puStack_6b8);
          }
          else if (puStack_6b0 != (undefined1 *)0x0) goto LAB_00105dc8;
        }
        else {
          uStack_d0 = (undefined1 **)std::__cxx11::string::_M_create(&uStack_d0,(ulong)&puStack_948)
          ;
          puStack_c0 = puStack_948;
LAB_00105dc8:
          memcpy(uStack_d0,puVar2,(size_t)puVar5);
        }
        *(undefined1 *)((long)uStack_d0 + (long)puStack_948) = 0;
        puStack_c8 = puStack_948;
        embree::toLowerCase((string *)&uStack_120);
        if (uStack_d0 != &puStack_c0) {
          operator_delete(uStack_d0,(ulong)(puStack_c0 + 1));
        }
        Token::~Token((Token *)aiStack_6c0);
        uVar8 = string_to_cpufeatures((string *)&uStack_120);
        *(uint *)(poVar16 + 0x4d0) = *(uint *)(poVar16 + 0x4d0) & uVar8;
joined_r0x00105043:
        if (uStack_120 != &uStack_110) {
          operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    uStack_160 = 0x7266;
    uStack_15e = 0x65;
    uStack_15d = 0x71;
    uStack_15c = 0x75;
    uStack_15b = 0x6e65;
    uStack_159 = 99;
    uStack_158 = 0x656c5f79;
    uStack_154 = 0x76;
    uStack_153 = 0x65;
    uStack_152 = 0x6c;
    uStack_168 = 0xf;
    auStack_151[0] = 0;
    uStack_170 = &uStack_160;
    uStack_120 = &uStack_110;
    std::__cxx11::string::_M_construct<char*>((string *)&uStack_120,&uStack_160,auStack_151);
    uStack_d0 = (undefined1 **)CONCAT44(uStack_d0._4_4_,4);
    puStack_c8 = &uStack_b8;
    std::__cxx11::string::_M_construct<char*>(&puStack_c8,uStack_120,lStack_118 + (long)uStack_120);
    uStack_a8 = 0;
    p_Stack_a0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    uStack_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    if (uStack_120 != &uStack_110) {
      operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
    }
    cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
    if (cVar6 == '\0') {
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_00;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_01;
      }
    }
    else {
      psVar3 = *(string **)pcVar15;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_120,"=",extraout_RDX);
      cVar6 = embree::TokenStream::trySymbol(psVar3);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_14;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_15;
      }
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        puVar5 = puStack_660;
        puVar2 = puStack_668;
        if (aiStack_670[0] == 4) {
          puStack_948 = puStack_660;
          uStack_d0 = &puStack_c0;
          if (puStack_660 < (undefined1 *)0x10) {
            if (puStack_660 == (undefined1 *)0x1) {
              puStack_c0 = (undefined1 *)CONCAT71(puStack_c0._1_7_,*puStack_668);
            }
            else if (puStack_660 != (undefined1 *)0x0) goto LAB_001060ce;
          }
          else {
            uStack_d0 = (undefined1 **)
                        std::__cxx11::string::_M_create((ulong *)&uStack_d0,(ulong)&puStack_948);
            puStack_c0 = puStack_948;
LAB_001060ce:
            memcpy(uStack_d0,puVar2,(size_t)puVar5);
          }
          *(undefined1 *)((long)uStack_d0 + (long)puStack_948) = 0;
          puStack_c8 = puStack_948;
          Token::~Token((Token *)aiStack_670);
          if (puStack_c8 == (undefined1 *)0x7) {
            if ((*(int *)uStack_d0 == 0x646d6973) && (*(int *)((long)uStack_d0 + 3) == 0x38323164))
            {
              *(undefined4 *)(poVar16 + 0x4d4) = 0;
            }
            else if ((*(int *)uStack_d0 == 0x646d6973) &&
                    (*(int *)((long)uStack_d0 + 3) == 0x36353264)) {
              *(undefined4 *)(poVar16 + 0x4d4) = 1;
            }
            else if ((*(int *)uStack_d0 == 0x646d6973) &&
                    (*(int *)((long)uStack_d0 + 3) == 0x32313564)) {
              *(undefined4 *)(poVar16 + 0x4d4) = 2;
            }
          }
          if (uStack_d0 != &puStack_c0) {
            operator_delete(uStack_d0,(ulong)(puStack_c0 + 1));
          }
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_170,"enable_selockmemoryprivilege",paVar13);
    Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
    cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
    if (cVar6 == '\0') {
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_03;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_04;
      }
    }
    else {
      psVar3 = *(string **)pcVar15;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_120,"=",extraout_RDX_02);
      cVar6 = embree::TokenStream::trySymbol(psVar3);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_16;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_17;
      }
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        if (iStack_620 == 2) {
          poVar16[0x4d8] = (ostream)(iStack_61c != 0);
          Token::~Token((Token *)&iStack_620);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"hugepages",paVar13);
    Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
    cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
    if (cVar6 == '\0') {
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_06;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_07;
      }
    }
    else {
      psVar3 = *(string **)pcVar15;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_120,"=",extraout_RDX_05);
      cVar6 = embree::TokenStream::trySymbol(psVar3);
      if (uStack_120 != &uStack_110) {
        operator_delete(uStack_120,CONCAT62(uStack_10e,uStack_110) + 1);
      }
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_18;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_19;
      }
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        if (iStack_5d0 == 2) {
          poVar16[0x4d9] = (ostream)(iStack_5cc != 0);
          Token::~Token((Token *)&iStack_5d0);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_170,"float_exceptions",paVar13);
    Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
    cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
    if (cVar6 == '\0') {
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_09;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_10;
      }
    }
    else {
      psVar3 = *(string **)pcVar15;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_120,"=",extraout_RDX_08);
      cVar6 = embree::TokenStream::trySymbol(psVar3);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_d0);
      paVar13 = extraout_RDX_20;
      if (uStack_170 != &uStack_160) {
        operator_delete(uStack_170,
                        CONCAT17(uStack_159,
                                 CONCAT25(uStack_15b,
                                          CONCAT14(uStack_15c,
                                                   CONCAT13(uStack_15d,
                                                            CONCAT12(uStack_15e,uStack_160))))) + 1)
        ;
        paVar13 = extraout_RDX_21;
      }
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        if (iStack_580 == 2) {
          poVar16[0x498] = (ostream)(iStack_57c != 0);
          Token::~Token((Token *)&iStack_580);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>((string *)&iStack_210,"tri_accel",paVar13);
    Token::Id((Token *)&uStack_120,(string *)&iStack_210);
    cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
    if (cVar6 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_1c0,"accel",extraout_RDX_11);
      Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 != '\0') {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_12);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_d0);
      std::__cxx11::string::_M_dispose();
    }
    else {
      psVar3 = *(string **)pcVar15;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"=",extraout_RDX_11);
      cVar6 = embree::TokenStream::trySymbol(psVar3);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_120);
    std::__cxx11::string::_M_dispose();
    if (cVar6 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_210,"tri_builder",extraout_RDX_13);
      Token::Id((Token *)&uStack_120,(string *)&iStack_210);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&iStack_1c0,"builder",extraout_RDX_22);
        Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"=",extraout_RDX_23);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_22);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_120);
      std::__cxx11::string::_M_dispose();
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        poVar10 = poVar16 + 0x30;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_210,"tri_traverser",extraout_RDX_24);
      Token::Id((Token *)&uStack_120,(string *)&iStack_210);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&iStack_1c0,"traverser",extraout_RDX_25);
        Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"=",extraout_RDX_26);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_25);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_120);
      std::__cxx11::string::_M_dispose();
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        poVar10 = poVar16 + 0x50;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_210,"tri_accel_mb",extraout_RDX_27);
      Token::Id((Token *)&uStack_120,(string *)&iStack_210);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&iStack_1c0,"accel_mb",extraout_RDX_28);
        Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"=",extraout_RDX_29);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_28);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_120);
      std::__cxx11::string::_M_dispose();
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        poVar10 = poVar16 + 0x70;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_210,"tri_builder_mb",extraout_RDX_30);
      Token::Id((Token *)&uStack_120,(string *)&iStack_210);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&iStack_1c0,"builder_mb",extraout_RDX_31);
        Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"=",extraout_RDX_32);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_31);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_120);
      std::__cxx11::string::_M_dispose();
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        poVar10 = poVar16 + 0x90;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&iStack_210,"tri_traverser_mb",extraout_RDX_33);
      Token::Id((Token *)&uStack_120,(string *)&iStack_210);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_120);
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&iStack_1c0,"traverser_mb",extraout_RDX_34);
        Token::Id((Token *)&uStack_d0,(string *)&iStack_1c0);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"=",extraout_RDX_35);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"=",extraout_RDX_34);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&uStack_120);
      std::__cxx11::string::_M_dispose();
      if (cVar6 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        poVar10 = poVar16 + 0xb0;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_accel",extraout_RDX_36);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_38;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_37);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00114;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0xd0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_builder",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_40;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_39);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00178;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0xf0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_traverser",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_42;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_41);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00177;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x110;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_44;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_43);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00176;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x130;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_builder_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_46;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_45);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00175;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x150;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"quad_traverser_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_48;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_47);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00174;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x170;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"line_accel",paVar13)
      ;
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_50;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_49);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00173;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 400;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"line_builder",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_52;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_51);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00172;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x1b0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"line_traverser",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_54;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_53);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00171;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x1d0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"line_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_56;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_55);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00170;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x1f0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"line_builder_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_58;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_57);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00169;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x210;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"line_traverser_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_60;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_59);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00168;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x230;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"hair_accel",paVar13)
      ;
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_62;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_61);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00167;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x250;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"hair_builder",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_64;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_63);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00166;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x270;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"hair_traverser",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_66;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_65);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00165;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x290;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"hair_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_68;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_67);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00164;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x2b0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"hair_builder_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_70;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_69);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00163;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x2d0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"hair_traverser_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_72;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_71);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00162;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x2f0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_74;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_73);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00161;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x310;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_builder",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_76;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_75);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00160;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x330;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel_min_leaf_size",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_78;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_77);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00159;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_530 == 2) {
            *(undefined4 *)(poVar16 + 0x350) = uStack_52c;
            Token::~Token((Token *)&iStack_530);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel_max_leaf_size",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_80;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_79);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00158;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_4e0 == 2) {
            *(undefined4 *)(poVar16 + 0x354) = uStack_4dc;
            Token::~Token((Token *)&iStack_4e0);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_82;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_81);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00157;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x358;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_builder_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_84;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_83);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00156;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x378;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel_mb_min_leaf_size",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_86;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_85);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00155;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_490 == 2) {
            *(undefined4 *)(poVar16 + 0x398) = uStack_48c;
            Token::~Token((Token *)&iStack_490);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"object_accel_mb_max_leaf_size",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_88;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_87);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00154;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_440 == 2) {
            *(undefined4 *)(poVar16 + 0x39c) = uStack_43c;
            Token::~Token((Token *)&iStack_440);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"instancing_open_min",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_90;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_89);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00153;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_3f0 == 2) {
            *(long *)(poVar16 + 0x470) = (long)iStack_3ec;
            Token::~Token((Token *)&iStack_3f0);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"instancing_block_size",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_92;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_91);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00152;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_3a0 == 2) {
            *(long *)(poVar16 + 0x478) = (long)iStack_39c;
            Token::~Token((Token *)&iStack_3a0);
            *(undefined4 *)(poVar16 + 0x480) = 0;
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"instancing_open_max_depth",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_94;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_93);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00151;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_350 == 2) {
            *(long *)(poVar16 + 0x488) = (long)iStack_34c;
            Token::~Token((Token *)&iStack_350);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"instancing_open_factor",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_96;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_95);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00150;
        if (cVar6 != '\0') {
          *(long *)(poVar16 + 0x478) = 0;
          Stream<embree::Token>::get();
          uVar19 = Token::Float(SUB81(uStack_d0,0));
          *(undefined4 *)(poVar16 + 0x480) = uVar19;
          Token::~Token((Token *)&uStack_d0);
          goto LAB_00103c73;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"instancing_open_max",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_98;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_97);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00149;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_300 == 2) {
            *(long *)(poVar16 + 0x490) = (long)iStack_2fc;
            Token::~Token((Token *)&iStack_300);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"subdiv_accel",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00100;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_99);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00148;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x3a0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"subdiv_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00102;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_x00101);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00147;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x3c0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"grid_accel",paVar13)
      ;
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00104;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_x00103);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00144;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x3e0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_170,"grid_accel_mb",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00106;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_x00105);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00143;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          poVar10 = poVar16 + 0x420;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"verbose",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00108;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_x00107);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00142;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_2b0 == 2) {
            *(long *)(poVar16 + 0x4a8) = (long)iStack_2ac;
            Token::~Token((Token *)&iStack_2b0);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_170,"benchmark",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      if (cVar6 == '\0') {
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00110;
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"=",extraout_RDX_x00109);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00141;
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          if (iStack_260 == 2) {
            *(long *)(poVar16 + 0x4b0) = (long)iStack_25c;
            Token::~Token((Token *)&iStack_260);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_120,"quality",paVar13);
      Token::Id((Token *)&uStack_d0,(string *)&uStack_120);
      cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
      Token::~Token((Token *)&uStack_d0);
      std::__cxx11::string::_M_dispose();
      if (cVar6 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_120,"scene_flags",extraout_RDX_x00111);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_120);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        if (cVar6 != '\0') {
          *(undefined4 *)(poVar16 + 0x4a0) = 0;
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_d0,"=",(allocator *)0x0);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          while (cVar6 != '\0') {
            Stream<embree::Token>::get();
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&uStack_170,"dynamic",extraout_RDX_x00117);
            Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
            cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
            Token::~Token((Token *)&uStack_d0);
            std::__cxx11::string::_M_dispose();
            if (cVar6 == '\0') {
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&uStack_170,"compact",extraout_RDX_x00118);
              Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
              cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
              Token::~Token((Token *)&uStack_d0);
              std::__cxx11::string::_M_dispose();
              if (cVar6 == '\0') {
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)&uStack_170,"robust",extraout_RDX_x00120);
                Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
                cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
                Token::~Token((Token *)&uStack_d0);
                std::__cxx11::string::_M_dispose();
                if (cVar6 != '\0') {
                  *(uint *)(poVar16 + 0x4a0) = *(uint *)(poVar16 + 0x4a0) | 4;
                }
              }
              else {
                *(uint *)(poVar16 + 0x4a0) = *(uint *)(poVar16 + 0x4a0) | 2;
              }
            }
            else {
              *(uint *)(poVar16 + 0x4a0) = *(uint *)(poVar16 + 0x4a0) | 1;
            }
            Token::~Token((Token *)&uStack_120);
            psVar3 = *(string **)pcVar15;
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&uStack_d0,"|",extraout_RDX_x00119);
            cVar6 = embree::TokenStream::trySymbol(psVar3);
            std::__cxx11::string::_M_dispose();
          }
          goto LAB_00103c73;
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"max_spatial_split_replications",extraout_RDX_x00116);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00122;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00121);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00146;
          if (cVar6 != '\0') {
            Stream<embree::Token>::get();
            uVar19 = Token::Float(SUB81(uStack_d0,0));
            *(undefined4 *)(poVar16 + 0x460) = uVar19;
            Token::~Token((Token *)&uStack_d0);
            goto LAB_00103c73;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"presplits",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00124;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00123);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00145;
          if (cVar6 != '\0') {
            Stream<embree::Token>::get();
            if (iStack_210 == 2) {
              poVar16[0x464] = (ostream)(iStack_20c != 0);
              Token::~Token((Token *)&iStack_210);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"tessellation_cache_size",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 != '\0') {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00125);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00140;
          if (cVar6 == '\0') goto LAB_001075ba;
LAB_001079b3:
          Stream<embree::Token>::get();
          fVar18 = (float)Token::Float(SUB81(uStack_d0,0));
          fVar18 = fVar18 * _LC116 * _LC116;
          if (__LC117 <= fVar18) {
            *(long *)(poVar16 + 0x468) = (long)(fVar18 - __LC117);
            *(ulong *)(poVar16 + 0x468) = *(ulong *)(poVar16 + 0x468) ^ 0x8000000000000000;
          }
          else {
            *(long *)(poVar16 + 0x468) = (long)fVar18;
          }
          goto LAB_00105980;
        }
        Token::~Token((Token *)&uStack_d0);
        std::__cxx11::string::_M_dispose();
        paVar13 = extraout_RDX_x00126;
LAB_001075ba:
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"cache_size",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00128;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00127);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00139;
          if (cVar6 != '\0') goto LAB_001079b3;
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"alloc_main_block_size",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00130;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00129);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00138;
          if (cVar6 != '\0') {
            Stream<embree::Token>::get();
            if (iStack_1c0 == 2) {
              *(long *)(poVar16 + 0x4e0) = (long)iStack_1bc;
              Token::~Token((Token *)&iStack_1c0);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"alloc_num_main_slots",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00132;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00131);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00137;
          if (cVar6 != '\0') {
            Stream<embree::Token>::get();
            if ((int)uStack_170 == 2) {
              *(undefined4 *)(poVar16 + 0x4e8) = uStack_170._4_4_;
              Token::~Token((Token *)&uStack_170);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"alloc_thread_block_size",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00134;
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00133);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          paVar13 = extraout_RDX_x00136;
          if (cVar6 != '\0') {
            Stream<embree::Token>::get();
            if ((int)uStack_120 == 2) {
              *(long *)(poVar16 + 0x4f0) = (long)uStack_120._4_4_;
              Token::~Token((Token *)&uStack_120);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_170,"alloc_single_thread_alloc",paVar13);
        Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
        cVar6 = operator==((Token *)&iStack_940,(Token *)&uStack_d0);
        if (cVar6 == '\0') {
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
        }
        else {
          psVar3 = *(string **)pcVar15;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_120,"=",extraout_RDX_x00135);
          cVar6 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          if (cVar6 == '\0') goto LAB_00103c73;
          Stream<embree::Token>::get();
          if ((int)uStack_d0 != 2) goto embree_State_parse;
          *(float *)(poVar16 + 0x4f8) = uStack_d0._4_4_;
          Token::~Token((Token *)&uStack_d0);
        }
      }
      else {
        psVar3 = *(string **)pcVar15;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_d0,"=",extraout_RDX_x00111);
        cVar6 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        if (cVar6 != '\0') {
          Stream<embree::Token>::get();
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_170,"low",extraout_RDX_x00112);
          Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
          cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
          Token::~Token((Token *)&uStack_d0);
          std::__cxx11::string::_M_dispose();
          if (cVar6 == '\0') {
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&uStack_170,"medium",extraout_RDX_x00113);
            Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
            cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
            Token::~Token((Token *)&uStack_d0);
            std::__cxx11::string::_M_dispose();
            if (cVar6 == '\0') {
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&uStack_170,"high",extraout_RDX_x00115);
              Token::Id((Token *)&uStack_d0,(string *)&uStack_170);
              cVar6 = operator==((Token *)&uStack_120,(Token *)&uStack_d0);
              Token::~Token((Token *)&uStack_d0);
              std::__cxx11::string::_M_dispose();
              if (cVar6 != '\0') {
                *(undefined4 *)(poVar16 + 0x49c) = 2;
              }
            }
            else {
              *(undefined4 *)(poVar16 + 0x49c) = 1;
            }
          }
          else {
            *(undefined4 *)(poVar16 + 0x49c) = 0;
          }
          Token::~Token((Token *)&uStack_120);
        }
      }
    }
    else {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar10 = poVar16 + 0x10;
LAB_00105970:
      std::__cxx11::string::operator=((string *)poVar10,(string *)&uStack_120);
      std::__cxx11::string::_M_dispose();
LAB_00105980:
      Token::~Token((Token *)&uStack_d0);
    }
LAB_00103c73:
    puStack_c8 = (undefined1 *)0x1;
    puStack_c0 = (undefined1 *)CONCAT62(puStack_c0._2_6_,0x2c);
    uStack_d0 = &puStack_c0;
    embree::TokenStream::trySymbol(*(string **)pcVar15);
    if (uStack_d0 != &puStack_c0) {
      operator_delete(uStack_d0,(ulong)(puStack_c0 + 1));
    }
    p_Var4 = p_Stack_910;
    if (p_Stack_910 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_910 + 8;
      if (*(long *)(p_Stack_910 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_910 + 8) = 0;
        (**(code **)(*(long *)p_Stack_910 + 0x10))(p_Stack_910);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Stack_910 + 8);
          *(int *)(p_Stack_910 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_910);
        }
      }
    }
    if (plStack_938 != alStack_928) {
      operator_delete(plStack_938,alStack_928[0] + 1);
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::parse(embree::Ref<embree::TokenStream>) */

void __thiscall embree::State::parse(State *this,undefined8 *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined1 *puVar2;
  string *psVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  long *plVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  allocator *extraout_RDX;
  allocator *extraout_RDX_00;
  allocator *extraout_RDX_01;
  allocator *extraout_RDX_02;
  allocator *extraout_RDX_03;
  allocator *extraout_RDX_04;
  allocator *extraout_RDX_05;
  allocator *extraout_RDX_06;
  allocator *extraout_RDX_07;
  allocator *extraout_RDX_08;
  allocator *extraout_RDX_09;
  allocator *extraout_RDX_10;
  allocator *extraout_RDX_11;
  allocator *extraout_RDX_12;
  allocator *extraout_RDX_13;
  allocator *extraout_RDX_14;
  allocator *extraout_RDX_15;
  allocator *extraout_RDX_16;
  allocator *extraout_RDX_17;
  allocator *extraout_RDX_18;
  allocator *extraout_RDX_19;
  allocator *extraout_RDX_20;
  allocator *extraout_RDX_21;
  allocator *extraout_RDX_22;
  allocator *extraout_RDX_23;
  allocator *extraout_RDX_24;
  allocator *extraout_RDX_25;
  allocator *extraout_RDX_26;
  allocator *extraout_RDX_27;
  allocator *extraout_RDX_28;
  allocator *extraout_RDX_29;
  allocator *extraout_RDX_30;
  allocator *extraout_RDX_31;
  allocator *extraout_RDX_32;
  allocator *extraout_RDX_33;
  allocator *extraout_RDX_34;
  allocator *extraout_RDX_35;
  allocator *extraout_RDX_36;
  allocator *extraout_RDX_37;
  allocator *extraout_RDX_38;
  allocator *extraout_RDX_39;
  allocator *extraout_RDX_40;
  allocator *extraout_RDX_41;
  allocator *extraout_RDX_42;
  allocator *extraout_RDX_43;
  allocator *extraout_RDX_44;
  allocator *extraout_RDX_45;
  allocator *extraout_RDX_46;
  allocator *extraout_RDX_47;
  allocator *extraout_RDX_48;
  allocator *extraout_RDX_49;
  allocator *extraout_RDX_50;
  allocator *extraout_RDX_51;
  allocator *extraout_RDX_52;
  allocator *extraout_RDX_53;
  allocator *extraout_RDX_54;
  allocator *extraout_RDX_55;
  allocator *extraout_RDX_56;
  allocator *extraout_RDX_57;
  allocator *extraout_RDX_58;
  allocator *extraout_RDX_59;
  allocator *extraout_RDX_60;
  allocator *extraout_RDX_61;
  allocator *extraout_RDX_62;
  allocator *extraout_RDX_63;
  allocator *extraout_RDX_64;
  allocator *extraout_RDX_65;
  allocator *extraout_RDX_66;
  allocator *extraout_RDX_67;
  allocator *extraout_RDX_68;
  allocator *extraout_RDX_69;
  allocator *extraout_RDX_70;
  allocator *extraout_RDX_71;
  allocator *extraout_RDX_72;
  allocator *extraout_RDX_73;
  allocator *extraout_RDX_74;
  allocator *extraout_RDX_75;
  allocator *extraout_RDX_76;
  allocator *extraout_RDX_77;
  allocator *extraout_RDX_78;
  allocator *extraout_RDX_79;
  allocator *extraout_RDX_80;
  allocator *extraout_RDX_81;
  allocator *extraout_RDX_82;
  allocator *extraout_RDX_83;
  allocator *extraout_RDX_84;
  allocator *extraout_RDX_85;
  allocator *extraout_RDX_86;
  allocator *extraout_RDX_87;
  allocator *extraout_RDX_88;
  allocator *extraout_RDX_89;
  allocator *extraout_RDX_90;
  allocator *extraout_RDX_91;
  allocator *extraout_RDX_92;
  allocator *extraout_RDX_93;
  allocator *extraout_RDX_94;
  allocator *extraout_RDX_95;
  allocator *extraout_RDX_96;
  allocator *extraout_RDX_97;
  allocator *extraout_RDX_98;
  allocator *extraout_RDX_99;
  allocator *extraout_RDX_x00100;
  allocator *extraout_RDX_x00101;
  allocator *extraout_RDX_x00102;
  allocator *extraout_RDX_x00103;
  allocator *extraout_RDX_x00104;
  allocator *extraout_RDX_x00105;
  allocator *extraout_RDX_x00106;
  allocator *extraout_RDX_x00107;
  allocator *extraout_RDX_x00108;
  allocator *extraout_RDX_x00109;
  allocator *extraout_RDX_x00110;
  allocator *extraout_RDX_x00111;
  allocator *extraout_RDX_x00112;
  allocator *extraout_RDX_x00113;
  allocator *extraout_RDX_x00114;
  allocator *extraout_RDX_x00115;
  allocator *extraout_RDX_x00116;
  allocator *extraout_RDX_x00117;
  allocator *extraout_RDX_x00118;
  allocator *extraout_RDX_x00119;
  allocator *extraout_RDX_x00120;
  allocator *extraout_RDX_x00121;
  allocator *extraout_RDX_x00122;
  allocator *extraout_RDX_x00123;
  allocator *extraout_RDX_x00124;
  allocator *extraout_RDX_x00125;
  allocator *extraout_RDX_x00126;
  allocator *extraout_RDX_x00127;
  allocator *extraout_RDX_x00128;
  allocator *extraout_RDX_x00129;
  allocator *extraout_RDX_x00130;
  allocator *extraout_RDX_x00131;
  allocator *extraout_RDX_x00132;
  allocator *extraout_RDX_x00133;
  allocator *extraout_RDX_x00134;
  allocator *paVar11;
  allocator *extraout_RDX_x00135;
  allocator *extraout_RDX_x00136;
  allocator *extraout_RDX_x00137;
  allocator *extraout_RDX_x00138;
  allocator *extraout_RDX_x00139;
  allocator *extraout_RDX_x00140;
  allocator *extraout_RDX_x00141;
  allocator *extraout_RDX_x00142;
  allocator *extraout_RDX_x00143;
  allocator *extraout_RDX_x00144;
  allocator *extraout_RDX_x00145;
  allocator *extraout_RDX_x00146;
  allocator *extraout_RDX_x00147;
  allocator *extraout_RDX_x00148;
  allocator *extraout_RDX_x00149;
  allocator *extraout_RDX_x00150;
  allocator *extraout_RDX_x00151;
  allocator *extraout_RDX_x00152;
  allocator *extraout_RDX_x00153;
  allocator *extraout_RDX_x00154;
  allocator *extraout_RDX_x00155;
  allocator *extraout_RDX_x00156;
  allocator *extraout_RDX_x00157;
  allocator *extraout_RDX_x00158;
  allocator *extraout_RDX_x00159;
  allocator *extraout_RDX_x00160;
  allocator *extraout_RDX_x00161;
  allocator *extraout_RDX_x00162;
  allocator *extraout_RDX_x00163;
  allocator *extraout_RDX_x00164;
  allocator *extraout_RDX_x00165;
  allocator *extraout_RDX_x00166;
  allocator *extraout_RDX_x00167;
  allocator *extraout_RDX_x00168;
  allocator *extraout_RDX_x00169;
  allocator *extraout_RDX_x00170;
  allocator *extraout_RDX_x00171;
  allocator *extraout_RDX_x00172;
  allocator *extraout_RDX_x00173;
  allocator *extraout_RDX_x00174;
  allocator *extraout_RDX_x00175;
  allocator *extraout_RDX_x00176;
  allocator *extraout_RDX_x00177;
  allocator *extraout_RDX_x00178;
  State *this_00;
  long in_FS_OFFSET;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 *local_900;
  int local_8f8;
  float local_8f4;
  long *local_8f0;
  undefined1 *local_8e8;
  long local_8e0 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_8c8;
  int local_8a8;
  int local_8a4;
  long *local_8a0;
  long local_890 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_878;
  int local_858;
  int local_854;
  long *local_850;
  long local_840 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_828;
  int local_808;
  int local_804;
  long *local_800;
  long local_7f0 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_7d8;
  int local_7b8;
  int local_7b4;
  long *local_7b0;
  long local_7a0 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_788;
  int local_768;
  int local_764;
  long *local_760;
  long local_750 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_738;
  int local_718;
  long *local_710;
  undefined1 *local_708;
  long local_700 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_6e8;
  int local_6c8;
  long *local_6c0;
  undefined1 *local_6b8;
  long local_6b0 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_698;
  int local_678 [2];
  undefined1 *local_670;
  undefined1 *local_668;
  int local_628 [2];
  undefined1 *local_620;
  undefined1 *local_618;
  int local_5d8;
  int local_5d4;
  int local_588;
  int local_584;
  int local_538;
  int local_534;
  int local_4e8;
  undefined4 local_4e4;
  int local_498;
  undefined4 local_494;
  int local_448;
  undefined4 local_444;
  int local_3f8;
  undefined4 local_3f4;
  int local_3a8;
  int local_3a4;
  int local_358;
  int local_354;
  int local_308;
  int local_304;
  int local_2b8;
  int local_2b4;
  int local_268;
  int local_264;
  int local_218;
  int local_214;
  int local_1c8;
  int local_1c4;
  int local_178;
  int local_174;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined2 uStack_113;
  undefined1 uStack_111;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 uStack_10a;
  undefined1 local_109 [49];
  undefined8 local_d8;
  long local_d0;
  undefined2 local_c8;
  undefined6 uStack_c6;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    bVar12 = false;
    local_88 = (undefined1 **)((ulong)local_88 & 0xffffffff00000000);
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    local_80 = &local_70;
    piVar10 = (int *)Stream<embree::Token>::peek((Stream<embree::Token> *)*param_2);
    if (*piVar10 == (int)local_88) {
      switch(*piVar10) {
      default:
        bVar12 = true;
        break;
      case 1:
        bVar12 = (char)piVar10[1] == local_88._4_1_;
        break;
      case 2:
        bVar12 = (float)piVar10[1] == local_88._4_4_;
        break;
      case 3:
        bVar12 = (float)piVar10[1] == local_88._4_4_;
        break;
      case 4:
      case 5:
      case 6:
        puVar2 = *(undefined1 **)(piVar10 + 4);
        bVar12 = false;
        if ((puVar2 == local_78) && (bVar12 = true, puVar2 != (undefined1 *)0x0)) {
          iVar8 = memcmp(*(void **)(piVar10 + 2),local_80,(size_t)puVar2);
          bVar12 = iVar8 == 0;
        }
      }
    }
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (bVar12) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Stream<embree::Token>::get();
    local_118 = 0x6874;
    uStack_116 = 0x72;
    uStack_115 = 0x65;
    uStack_114 = 0x61;
    uStack_113 = 0x7364;
    local_120 = 7;
    uStack_111 = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&uStack_111);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_00103b33;
    switch(local_8f8) {
    default:
      goto switchD_00103b15_caseD_0;
    case 1:
      cVar7 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_00103b33;
      goto switchD_00103b15_caseD_0;
    }
    if ((bool)cVar7 != false) {
switchD_00103b15_caseD_0:
      local_d0 = 1;
      local_c8 = 0x3d;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
    }
LAB_00103b33:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = local_878;
      if (local_8a8 == 2) {
        *(long *)(this + 0x4b8) = (long)local_8a4;
        if (local_878 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_878 + 8;
          if (*(long *)(local_878 + 8) == 0x100000001) {
            *(undefined8 *)(local_878 + 8) = 0;
            (**(code **)(*(long *)local_878 + 0x10))(local_878);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_878 + 8);
              *(int *)(local_878 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_878)
              ;
            }
          }
        }
        if (local_8a0 != local_890) {
          operator_delete(local_8a0,local_890[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x7375;
    uStack_116 = 0x65;
    uStack_115 = 0x72;
    uStack_114 = 0x5f;
    uStack_113 = 0x6874;
    uStack_111 = 0x72;
    local_110 = 0x73646165;
    local_120 = 0xc;
    local_10c = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&local_10c);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_00103f3b;
    switch(local_8f8) {
    default:
      goto switchD_00103f22_caseD_0;
    case 1:
      cVar7 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_00103f3b;
      goto switchD_00103f22_caseD_0;
    }
    if ((bool)cVar7 != false) {
switchD_00103f22_caseD_0:
      local_c8 = 0x3d;
      local_d0 = 1;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
    }
LAB_00103f3b:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))();
        (**(code **)(*(long *)p_Var4 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = local_828;
      if (local_858 == 2) {
        *(long *)(this + 0x4c0) = (long)local_854;
        if (local_828 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_828 + 8;
          if (*(long *)(local_828 + 8) == 0x100000001) {
            *(undefined8 *)(local_828 + 8) = 0;
            (**(code **)(*(long *)local_828 + 0x10))(local_828);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_828 + 8);
              *(int *)(local_828 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_828)
              ;
            }
          }
        }
        if (local_850 != local_840) {
          operator_delete(local_850,local_840[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x6573;
    uStack_116 = 0x74;
    uStack_115 = 0x5f;
    uStack_114 = 0x61;
    uStack_113 = 0x6666;
    uStack_111 = 0x69;
    local_110 = 0x7974696e;
    local_120 = 0xc;
    local_10c = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&local_10c);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_001041d8;
    switch(local_8f8) {
    default:
      goto switchD_0010416e_caseD_0;
    case 1:
      cVar7 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_001041d8;
      goto switchD_0010416e_caseD_0;
    }
    if ((bool)cVar7 != false) {
switchD_0010416e_caseD_0:
      local_d0 = 1;
      local_c8 = 0x3d;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
    }
LAB_001041d8:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = local_7d8;
      if (local_808 == 2) {
        this[0x4c8] = (State)(local_804 != 0);
        if (local_7d8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_7d8 + 8;
          if (*(long *)(local_7d8 + 8) == 0x100000001) {
            *(undefined8 *)(local_7d8 + 8) = 0;
            (**(code **)(*(long *)local_7d8 + 0x10))(local_7d8);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_7d8 + 8);
              *(int *)(local_7d8 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_7d8)
              ;
            }
          }
        }
        if (local_800 != local_7f0) {
          operator_delete(local_800,local_7f0[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x6661;
    uStack_116 = 0x66;
    uStack_115 = 0x69;
    uStack_114 = 0x6e;
    uStack_113 = 0x7469;
    uStack_111 = 0x79;
    local_120 = 8;
    local_110 = local_110 & 0xffffff00;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&local_110);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_00104732;
    switch(local_8f8) {
    default:
      goto switchD_001046d0_caseD_0;
    case 1:
      cVar7 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      cVar7 = local_8f4 == local_88._4_4_;
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_00104732;
      goto switchD_001046d0_caseD_0;
    }
    if ((bool)cVar7 != false) {
switchD_001046d0_caseD_0:
      local_d0 = 1;
      local_c8 = 0x3d;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
    }
LAB_00104732:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = local_788;
      if (local_7b8 == 2) {
        this[0x4c8] = (State)(local_7b4 != 0);
        if (local_788 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_788 + 8;
          if (*(long *)(local_788 + 8) == 0x100000001) {
            *(undefined8 *)(local_788 + 8) = 0;
            (**(code **)(*(long *)local_788 + 0x10))(local_788);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_788 + 8);
              *(int *)(local_788 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_788)
              ;
            }
          }
        }
        if (local_7b0 != local_7a0) {
          operator_delete(local_7b0,local_7a0[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x7473;
    uStack_116 = 0x61;
    uStack_115 = 0x72;
    uStack_114 = 0x74;
    uStack_113 = 0x745f;
    uStack_111 = 0x68;
    local_110 = 0x64616572;
    local_10c = 0x73;
    local_120 = 0xd;
    local_10b = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&local_10b);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    p_Var4 = local_58;
    if (local_8f8 != (int)local_88) goto joined_r0x00105a1e;
    switch(local_8f8) {
    default:
      goto switchD_00104a77_caseD_0;
    case 1:
      bVar12 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      bVar12 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      bVar12 = !NAN(local_8f4) && !NAN(local_88._4_4_);
      if (local_8f4 != local_88._4_4_) {
        bVar12 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), p_Var4 = local_58, iVar8 != 0))))
      goto joined_r0x00105a1e;
      goto switchD_00104a77_caseD_0;
    }
    if (bVar12) {
switchD_00104a77_caseD_0:
      local_d0 = 1;
      local_c8 = 0x3d;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      p_Var4 = local_58;
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
        p_Var4 = local_58;
      }
    }
    else {
      cVar7 = '\0';
    }
joined_r0x00105a1e:
    local_58 = p_Var4;
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      p_Var4 = local_738;
      if (local_768 == 2) {
        this[0x4c9] = (State)(local_764 != 0);
        if (local_738 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_738 + 8;
          if (*(long *)(local_738 + 8) == 0x100000001) {
            *(undefined8 *)(local_738 + 8) = 0;
            (**(code **)(*(long *)local_738 + 0x10))(local_738);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_738 + 8);
              *(int *)(local_738 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_738)
              ;
            }
          }
        }
        if (local_760 != local_750) {
          operator_delete(local_760,local_750[0] + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x7369;
    uStack_116 = 0x61;
    local_120 = 3;
    uStack_115 = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&uStack_115);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_00104c1f;
    switch(local_8f8) {
    case 1:
      if (local_8f4._0_1_ != local_88._4_1_) goto LAB_00104c1f;
      break;
    case 2:
      cVar7 = local_8f4 == local_88._4_4_;
      goto LAB_00104bcc;
    case 3:
      cVar7 = !NAN(local_8f4) && !NAN(local_88._4_4_);
      if (local_8f4 != local_88._4_4_) {
        cVar7 = false;
      }
LAB_00104bcc:
      if ((bool)cVar7 != false) break;
      goto LAB_00104c1f;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_00104c1f;
    }
    local_d0 = 1;
    local_c8 = 0x3d;
    local_d8 = &local_c8;
    cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
LAB_00104c1f:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      puVar2 = local_708;
      plVar5 = local_710;
      if (local_718 == 4) {
        local_900 = local_708;
        local_88 = &local_78;
        if (local_708 < (undefined1 *)0x10) {
          if (local_708 == (undefined1 *)0x1) {
            local_78 = (undefined1 *)CONCAT71(local_78._1_7_,(char)*local_710);
          }
          else if (local_708 != (undefined1 *)0x0) goto LAB_00105bc3;
        }
        else {
          local_88 = (undefined1 **)std::__cxx11::string::_M_create(&local_88,(ulong)&local_900);
          local_78 = local_900;
LAB_00105bc3:
          memcpy(local_88,plVar5,(size_t)puVar2);
        }
        *(undefined1 *)((long)local_88 + (long)local_900) = 0;
        local_80 = local_900;
        embree::toLowerCase((string *)&local_d8);
        if (local_88 != &local_78) {
          operator_delete(local_88,(ulong)(local_78 + 1));
        }
        p_Var4 = local_6e8;
        if (local_6e8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_6e8 + 8;
          if (*(long *)(local_6e8 + 8) == 0x100000001) {
            *(undefined8 *)(local_6e8 + 8) = 0;
            (**(code **)(*(long *)local_6e8 + 0x10))(local_6e8);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_6e8 + 8);
              *(int *)(local_6e8 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_6e8)
              ;
            }
          }
        }
        if (local_710 != local_700) {
          operator_delete(local_710,local_700[0] + 1);
        }
        uVar14 = string_to_cpufeatures((string *)&local_d8);
        *(undefined4 *)(this + 0x4cc) = uVar14;
        *(undefined4 *)(this + 0x4d0) = uVar14;
        goto joined_r0x00105043;
      }
      goto embree_State_parse;
    }
    local_118 = 0x616d;
    uStack_116 = 0x78;
    uStack_115 = 0x5f;
    uStack_114 = 0x69;
    uStack_113 = 0x6173;
    local_120 = 7;
    uStack_111 = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,&uStack_111);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    if (local_8f8 != (int)local_88) goto LAB_00105265;
    switch(local_8f8) {
    default:
      goto switchD_00104d9d_caseD_0;
    case 1:
      bVar12 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      bVar12 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      bVar12 = !NAN(local_8f4) && !NAN(local_88._4_4_);
      if (local_8f4 != local_88._4_4_) {
        bVar12 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), iVar8 != 0)))) goto LAB_00105265;
      goto switchD_00104d9d_caseD_0;
    }
    if (bVar12) {
switchD_00104d9d_caseD_0:
      local_c8 = 0x3d;
      local_d0 = 1;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
    }
    else {
      cVar7 = '\0';
    }
LAB_00105265:
    p_Var4 = local_58;
    if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_58 + 8;
      if (*(long *)(local_58 + 8) == 0x100000001) {
        *(undefined8 *)(local_58 + 8) = 0;
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_58 + 8);
          *(int *)(local_58 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_58);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      puVar2 = local_6b8;
      plVar5 = local_6c0;
      if (local_6c8 == 4) {
        local_900 = local_6b8;
        local_88 = &local_78;
        if (local_6b8 < (undefined1 *)0x10) {
          if (local_6b8 == (undefined1 *)0x1) {
            local_78 = (undefined1 *)CONCAT71(local_78._1_7_,(char)*local_6c0);
          }
          else if (local_6b8 != (undefined1 *)0x0) goto LAB_00105b5e;
        }
        else {
          local_88 = (undefined1 **)std::__cxx11::string::_M_create(&local_88,(ulong)&local_900);
          local_78 = local_900;
LAB_00105b5e:
          memcpy(local_88,plVar5,(size_t)puVar2);
        }
        *(undefined1 *)((long)local_88 + (long)local_900) = 0;
        local_80 = local_900;
        embree::toLowerCase((string *)&local_d8);
        if (local_88 != &local_78) {
          operator_delete(local_88,(ulong)(local_78 + 1));
        }
        p_Var4 = local_698;
        if (local_698 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_698 + 8;
          if (*(long *)(local_698 + 8) == 0x100000001) {
            *(undefined8 *)(local_698 + 8) = 0;
            (**(code **)(*(long *)local_698 + 0x10))(local_698);
            (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar8 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar8 = *(int *)(local_698 + 8);
              *(int *)(local_698 + 8) = iVar8 + -1;
            }
            if (iVar8 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_698)
              ;
            }
          }
        }
        if (local_6c0 != local_6b0) {
          operator_delete(local_6c0,local_6b0[0] + 1);
        }
        uVar9 = string_to_cpufeatures((string *)&local_d8);
        *(uint *)(this + 0x4d0) = *(uint *)(this + 0x4d0) & uVar9 & *(uint *)(this + 0x4cc);
        *(uint *)(this + 0x4cc) = uVar9 & *(uint *)(this + 0x4cc);
        goto joined_r0x00105043;
      }
embree_State_parse:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_118 = 0x616d;
    uStack_116 = 0x78;
    uStack_115 = 0x5f;
    uStack_114 = 0x62;
    uStack_113 = 0x6975;
    uStack_111 = 0x6c;
    local_110 = 0x5f726564;
    local_10c = 0x69;
    local_10b = 0x73;
    uStack_10a = 0x61;
    local_120 = 0xf;
    local_109[0] = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,local_109);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = '\0';
    p_Var4 = local_58;
    if (local_8f8 != (int)local_88) goto joined_r0x00105c53;
    switch(local_8f8) {
    default:
      goto switchD_0010555b_caseD_0;
    case 1:
      bVar12 = local_8f4._0_1_ == local_88._4_1_;
      break;
    case 2:
      bVar12 = local_8f4 == local_88._4_4_;
      break;
    case 3:
      bVar12 = !NAN(local_8f4) && !NAN(local_88._4_4_);
      if (local_8f4 != local_88._4_4_) {
        bVar12 = false;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((local_8e8 != local_78) ||
         ((local_8e8 != (undefined1 *)0x0 &&
          (iVar8 = memcmp(local_8f0,local_80,(size_t)local_8e8), p_Var4 = local_58, iVar8 != 0))))
      goto joined_r0x00105c53;
      goto switchD_0010555b_caseD_0;
    }
    if (bVar12) {
switchD_0010555b_caseD_0:
      local_d0 = 1;
      local_c8 = 0x3d;
      local_d8 = &local_c8;
      cVar7 = embree::TokenStream::trySymbol((string *)*param_2);
      p_Var4 = local_58;
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
        p_Var4 = local_58;
      }
    }
    else {
      cVar7 = '\0';
    }
joined_r0x00105c53:
    local_58 = p_Var4;
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var4 + 8;
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))();
        (**(code **)(*(long *)p_Var4 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
    if (local_80 != &local_70) {
      operator_delete(local_80,CONCAT71(uStack_6f,local_70) + 1);
    }
    if (local_128 != &local_118) {
      operator_delete(local_128,
                      CONCAT17(uStack_111,
                               CONCAT25(uStack_113,
                                        CONCAT14(uStack_114,
                                                 CONCAT13(uStack_115,CONCAT12(uStack_116,local_118))
                                                ))) + 1);
    }
    if (cVar7 != '\0') {
      Stream<embree::Token>::get();
      puVar6 = local_668;
      puVar2 = local_670;
      if (local_678[0] == 4) {
        local_900 = local_668;
        local_88 = &local_78;
        if (local_668 < (undefined1 *)0x10) {
          if (local_668 == (undefined1 *)0x1) {
            local_78 = (undefined1 *)CONCAT71(local_78._1_7_,*local_670);
          }
          else if (local_668 != (undefined1 *)0x0) goto LAB_00105dc8;
        }
        else {
          local_88 = (undefined1 **)std::__cxx11::string::_M_create(&local_88,(ulong)&local_900);
          local_78 = local_900;
LAB_00105dc8:
          memcpy(local_88,puVar2,(size_t)puVar6);
        }
        *(undefined1 *)((long)local_88 + (long)local_900) = 0;
        local_80 = local_900;
        embree::toLowerCase((string *)&local_d8);
        if (local_88 != &local_78) {
          operator_delete(local_88,(ulong)(local_78 + 1));
        }
        Token::~Token((Token *)local_678);
        uVar9 = string_to_cpufeatures((string *)&local_d8);
        *(uint *)(this + 0x4d0) = *(uint *)(this + 0x4d0) & uVar9;
joined_r0x00105043:
        if (local_d8 != &local_c8) {
          operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
        }
        goto LAB_00103c73;
      }
      goto embree_State_parse;
    }
    local_118 = 0x7266;
    uStack_116 = 0x65;
    uStack_115 = 0x71;
    uStack_114 = 0x75;
    uStack_113 = 0x6e65;
    uStack_111 = 99;
    local_110 = 0x656c5f79;
    local_10c = 0x76;
    local_10b = 0x65;
    uStack_10a = 0x6c;
    local_120 = 0xf;
    local_109[0] = 0;
    local_128 = &local_118;
    local_d8 = &local_c8;
    std::__cxx11::string::_M_construct<char*>((string *)&local_d8,&local_118,local_109);
    local_88 = (undefined1 **)CONCAT44(local_88._4_4_,4);
    local_80 = &local_70;
    std::__cxx11::string::_M_construct<char*>(&local_80,local_d8,local_d0 + (long)local_d8);
    local_60 = 0;
    local_58 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    local_50 = 0xffffffffffffffff;
    local_48 = 0xffffffffffffffff;
    if (local_d8 != &local_c8) {
      operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
    }
    cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
    if (cVar7 == '\0') {
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_00;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_01;
      }
    }
    else {
      psVar3 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX);
      cVar7 = embree::TokenStream::trySymbol(psVar3);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_14;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_15;
      }
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        puVar6 = local_618;
        puVar2 = local_620;
        if (local_628[0] == 4) {
          local_900 = local_618;
          local_88 = &local_78;
          if (local_618 < (undefined1 *)0x10) {
            if (local_618 == (undefined1 *)0x1) {
              local_78 = (undefined1 *)CONCAT71(local_78._1_7_,*local_620);
            }
            else if (local_618 != (undefined1 *)0x0) goto LAB_001060ce;
          }
          else {
            local_88 = (undefined1 **)
                       std::__cxx11::string::_M_create((ulong *)&local_88,(ulong)&local_900);
            local_78 = local_900;
LAB_001060ce:
            memcpy(local_88,puVar2,(size_t)puVar6);
          }
          *(undefined1 *)((long)local_88 + (long)local_900) = 0;
          local_80 = local_900;
          Token::~Token((Token *)local_628);
          if (local_80 == (undefined1 *)0x7) {
            if ((*(int *)local_88 == 0x646d6973) && (*(int *)((long)local_88 + 3) == 0x38323164)) {
              *(undefined4 *)(this + 0x4d4) = 0;
            }
            else if ((*(int *)local_88 == 0x646d6973) &&
                    (*(int *)((long)local_88 + 3) == 0x36353264)) {
              *(undefined4 *)(this + 0x4d4) = 1;
            }
            else if ((*(int *)local_88 == 0x646d6973) &&
                    (*(int *)((long)local_88 + 3) == 0x32313564)) {
              *(undefined4 *)(this + 0x4d4) = 2;
            }
          }
          if (local_88 != &local_78) {
            operator_delete(local_88,(ulong)(local_78 + 1));
          }
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_128,"enable_selockmemoryprivilege",paVar11);
    Token::Id((Token *)&local_88,(string *)&local_128);
    cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
    if (cVar7 == '\0') {
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_03;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_04;
      }
    }
    else {
      psVar3 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_02);
      cVar7 = embree::TokenStream::trySymbol(psVar3);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_16;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_17;
      }
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        if (local_5d8 == 2) {
          this[0x4d8] = (State)(local_5d4 != 0);
          Token::~Token((Token *)&local_5d8);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"hugepages",paVar11);
    Token::Id((Token *)&local_88,(string *)&local_128);
    cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
    if (cVar7 == '\0') {
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_06;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_07;
      }
    }
    else {
      psVar3 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_05);
      cVar7 = embree::TokenStream::trySymbol(psVar3);
      if (local_d8 != &local_c8) {
        operator_delete(local_d8,CONCAT62(uStack_c6,local_c8) + 1);
      }
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_18;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_19;
      }
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        if (local_588 == 2) {
          this[0x4d9] = (State)(local_584 != 0);
          Token::~Token((Token *)&local_588);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_128,"float_exceptions",paVar11);
    Token::Id((Token *)&local_88,(string *)&local_128);
    cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
    if (cVar7 == '\0') {
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_09;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_10;
      }
    }
    else {
      psVar3 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_08);
      cVar7 = embree::TokenStream::trySymbol(psVar3);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_88);
      paVar11 = extraout_RDX_20;
      if (local_128 != &local_118) {
        operator_delete(local_128,
                        CONCAT17(uStack_111,
                                 CONCAT25(uStack_113,
                                          CONCAT14(uStack_114,
                                                   CONCAT13(uStack_115,
                                                            CONCAT12(uStack_116,local_118))))) + 1);
        paVar11 = extraout_RDX_21;
      }
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        if (local_538 == 2) {
          this[0x498] = (State)(local_534 != 0);
          Token::~Token((Token *)&local_538);
          goto LAB_00103c73;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_1c8,"tri_accel",paVar11);
    Token::Id((Token *)&local_d8,(string *)&local_1c8);
    cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
    if (cVar7 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_178,"accel",extraout_RDX_11);
      Token::Id((Token *)&local_88,(string *)&local_178);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 != '\0') {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_12)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_88);
      std::__cxx11::string::_M_dispose();
    }
    else {
      psVar3 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_11);
      cVar7 = embree::TokenStream::trySymbol(psVar3);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_d8);
    std::__cxx11::string::_M_dispose();
    if (cVar7 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1c8,"tri_builder",extraout_RDX_13);
      Token::Id((Token *)&local_d8,(string *)&local_1c8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_178,"builder",extraout_RDX_22);
        Token::Id((Token *)&local_88,(string *)&local_178);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"=",extraout_RDX_23);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_22)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_d8);
      std::__cxx11::string::_M_dispose();
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        this_00 = this + 0x30;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1c8,"tri_traverser",extraout_RDX_24);
      Token::Id((Token *)&local_d8,(string *)&local_1c8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_178,"traverser",extraout_RDX_25);
        Token::Id((Token *)&local_88,(string *)&local_178);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"=",extraout_RDX_26);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_25)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_d8);
      std::__cxx11::string::_M_dispose();
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        this_00 = this + 0x50;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1c8,"tri_accel_mb",extraout_RDX_27);
      Token::Id((Token *)&local_d8,(string *)&local_1c8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_178,"accel_mb",extraout_RDX_28);
        Token::Id((Token *)&local_88,(string *)&local_178);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"=",extraout_RDX_29);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_28)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_d8);
      std::__cxx11::string::_M_dispose();
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        this_00 = this + 0x70;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1c8,"tri_builder_mb",extraout_RDX_30);
      Token::Id((Token *)&local_d8,(string *)&local_1c8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_178,"builder_mb",extraout_RDX_31);
        Token::Id((Token *)&local_88,(string *)&local_178);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"=",extraout_RDX_32);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_31)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_d8);
      std::__cxx11::string::_M_dispose();
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        this_00 = this + 0x90;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_1c8,"tri_traverser_mb",extraout_RDX_33);
      Token::Id((Token *)&local_d8,(string *)&local_1c8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_d8);
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_178,"traverser_mb",extraout_RDX_34);
        Token::Id((Token *)&local_88,(string *)&local_178);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"=",extraout_RDX_35);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"=",extraout_RDX_34)
        ;
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
      }
      Token::~Token((Token *)&local_d8);
      std::__cxx11::string::_M_dispose();
      if (cVar7 != '\0') {
        Stream<embree::Token>::get();
        Token::Identifier_abi_cxx11_();
        this_00 = this + 0xb0;
        goto LAB_00105970;
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_accel",extraout_RDX_36);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_38;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_37);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00114;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0xd0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_builder",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_40;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_39);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00178;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0xf0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_traverser",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_42;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_41);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00177;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x110;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_44;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_43);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00176;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x130;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_builder_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_46;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_45);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00175;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x150;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"quad_traverser_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_48;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_47);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00174;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x170;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"line_accel",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_50;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_49);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00173;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 400;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"line_builder",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_52;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_51);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00172;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x1b0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"line_traverser",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_54;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_53);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00171;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x1d0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"line_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_56;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_55);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00170;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x1f0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"line_builder_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_58;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_57);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00169;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x210;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"line_traverser_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_60;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_59);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00168;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x230;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"hair_accel",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_62;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_61);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00167;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x250;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"hair_builder",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_64;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_63);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00166;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x270;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"hair_traverser",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_66;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_65);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00165;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x290;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"hair_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_68;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_67);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00164;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x2b0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"hair_builder_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_70;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_69);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00163;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x2d0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"hair_traverser_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_72;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_71);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00162;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x2f0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_74;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_73);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00161;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x310;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_builder",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_76;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_75);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00160;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x330;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel_min_leaf_size",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_78;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_77);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00159;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_4e8 == 2) {
            *(undefined4 *)(this + 0x350) = local_4e4;
            Token::~Token((Token *)&local_4e8);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel_max_leaf_size",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_80;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_79);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00158;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_498 == 2) {
            *(undefined4 *)(this + 0x354) = local_494;
            Token::~Token((Token *)&local_498);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_82;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_81);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00157;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x358;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_builder_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_84;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_83);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00156;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x378;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel_mb_min_leaf_size",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_86;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_85);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00155;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_448 == 2) {
            *(undefined4 *)(this + 0x398) = local_444;
            Token::~Token((Token *)&local_448);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"object_accel_mb_max_leaf_size",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_88;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_87);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00154;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_3f8 == 2) {
            *(undefined4 *)(this + 0x39c) = local_3f4;
            Token::~Token((Token *)&local_3f8);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"instancing_open_min",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_90;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_89);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00153;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_3a8 == 2) {
            *(long *)(this + 0x470) = (long)local_3a4;
            Token::~Token((Token *)&local_3a8);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"instancing_block_size",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_92;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_91);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00152;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_358 == 2) {
            *(long *)(this + 0x478) = (long)local_354;
            Token::~Token((Token *)&local_358);
            *(undefined4 *)(this + 0x480) = 0;
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"instancing_open_max_depth",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_94;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_93);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00151;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_308 == 2) {
            *(long *)(this + 0x488) = (long)local_304;
            Token::~Token((Token *)&local_308);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"instancing_open_factor",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_96;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_95);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00150;
        if (cVar7 != '\0') {
          *(undefined8 *)(this + 0x478) = 0;
          Stream<embree::Token>::get();
          uVar14 = Token::Float(SUB81(local_88,0));
          *(undefined4 *)(this + 0x480) = uVar14;
          Token::~Token((Token *)&local_88);
          goto LAB_00103c73;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"instancing_open_max",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_98;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_97);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00149;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_2b8 == 2) {
            *(long *)(this + 0x490) = (long)local_2b4;
            Token::~Token((Token *)&local_2b8);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"subdiv_accel",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00100;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"=",extraout_RDX_99);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00148;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x3a0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"subdiv_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00102;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"=",extraout_RDX_x00101);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00147;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x3c0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"grid_accel",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00104;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"=",extraout_RDX_x00103);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00144;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x3e0;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_128,"grid_accel_mb",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00106;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"=",extraout_RDX_x00105);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00143;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          Token::Identifier_abi_cxx11_();
          this_00 = this + 0x420;
          goto LAB_00105970;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"verbose",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00108;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"=",extraout_RDX_x00107);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00142;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_268 == 2) {
            *(long *)(this + 0x4a8) = (long)local_264;
            Token::~Token((Token *)&local_268);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"benchmark",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_128);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      if (cVar7 == '\0') {
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00110;
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"=",extraout_RDX_x00109);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00141;
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          if (local_218 == 2) {
            *(long *)(this + 0x4b0) = (long)local_214;
            Token::~Token((Token *)&local_218);
            goto LAB_00103c73;
          }
          goto embree_State_parse;
        }
      }
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_d8,"quality",paVar11);
      Token::Id((Token *)&local_88,(string *)&local_d8);
      cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
      Token::~Token((Token *)&local_88);
      std::__cxx11::string::_M_dispose();
      if (cVar7 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_d8,"scene_flags",extraout_RDX_x00111);
        Token::Id((Token *)&local_88,(string *)&local_d8);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        if (cVar7 != '\0') {
          *(undefined4 *)(this + 0x4a0) = 0;
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_88,"=",(allocator *)0x0);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          while (cVar7 != '\0') {
            Stream<embree::Token>::get();
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_128,"dynamic",extraout_RDX_x00117);
            Token::Id((Token *)&local_88,(string *)&local_128);
            cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
            Token::~Token((Token *)&local_88);
            std::__cxx11::string::_M_dispose();
            if (cVar7 == '\0') {
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_128,"compact",extraout_RDX_x00118);
              Token::Id((Token *)&local_88,(string *)&local_128);
              cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
              Token::~Token((Token *)&local_88);
              std::__cxx11::string::_M_dispose();
              if (cVar7 == '\0') {
                std::__cxx11::string::string<std::allocator<char>>
                          ((string *)&local_128,"robust",extraout_RDX_x00120);
                Token::Id((Token *)&local_88,(string *)&local_128);
                cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
                Token::~Token((Token *)&local_88);
                std::__cxx11::string::_M_dispose();
                if (cVar7 != '\0') {
                  *(uint *)(this + 0x4a0) = *(uint *)(this + 0x4a0) | 4;
                }
              }
              else {
                *(uint *)(this + 0x4a0) = *(uint *)(this + 0x4a0) | 2;
              }
            }
            else {
              *(uint *)(this + 0x4a0) = *(uint *)(this + 0x4a0) | 1;
            }
            Token::~Token((Token *)&local_d8);
            psVar3 = (string *)*param_2;
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_88,"|",extraout_RDX_x00119);
            cVar7 = embree::TokenStream::trySymbol(psVar3);
            std::__cxx11::string::_M_dispose();
          }
          goto LAB_00103c73;
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"max_spatial_split_replications",extraout_RDX_x00116);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00122;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00121);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00146;
          if (cVar7 != '\0') {
            Stream<embree::Token>::get();
            uVar14 = Token::Float(SUB81(local_88,0));
            *(undefined4 *)(this + 0x460) = uVar14;
            Token::~Token((Token *)&local_88);
            goto LAB_00103c73;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>((string *)&local_128,"presplits",paVar11)
        ;
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00124;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00123);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00145;
          if (cVar7 != '\0') {
            Stream<embree::Token>::get();
            if (local_1c8 == 2) {
              this[0x464] = (State)(local_1c4 != 0);
              Token::~Token((Token *)&local_1c8);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"tessellation_cache_size",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 != '\0') {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00125);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00140;
          if (cVar7 == '\0') goto LAB_001075ba;
LAB_001079b3:
          Stream<embree::Token>::get();
          fVar13 = (float)Token::Float(SUB81(local_88,0));
          fVar13 = fVar13 * _LC116 * _LC116;
          if (__LC117 <= fVar13) {
            *(long *)(this + 0x468) = (long)(fVar13 - __LC117);
            *(ulong *)(this + 0x468) = *(ulong *)(this + 0x468) ^ 0x8000000000000000;
          }
          else {
            *(long *)(this + 0x468) = (long)fVar13;
          }
          goto LAB_00105980;
        }
        Token::~Token((Token *)&local_88);
        std::__cxx11::string::_M_dispose();
        paVar11 = extraout_RDX_x00126;
LAB_001075ba:
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"cache_size",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00128;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00127);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00139;
          if (cVar7 != '\0') goto LAB_001079b3;
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"alloc_main_block_size",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00130;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00129);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00138;
          if (cVar7 != '\0') {
            Stream<embree::Token>::get();
            if (local_178 == 2) {
              *(long *)(this + 0x4e0) = (long)local_174;
              Token::~Token((Token *)&local_178);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"alloc_num_main_slots",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00132;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00131);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00137;
          if (cVar7 != '\0') {
            Stream<embree::Token>::get();
            if ((int)local_128 == 2) {
              *(undefined4 *)(this + 0x4e8) = local_128._4_4_;
              Token::~Token((Token *)&local_128);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"alloc_thread_block_size",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00134;
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00133);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          paVar11 = extraout_RDX_x00136;
          if (cVar7 != '\0') {
            Stream<embree::Token>::get();
            if ((int)local_d8 == 2) {
              *(long *)(this + 0x4f0) = (long)local_d8._4_4_;
              Token::~Token((Token *)&local_d8);
              goto LAB_00103c73;
            }
            goto embree_State_parse;
          }
        }
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_128,"alloc_single_thread_alloc",paVar11);
        Token::Id((Token *)&local_88,(string *)&local_128);
        cVar7 = operator==((Token *)&local_8f8,(Token *)&local_88);
        if (cVar7 == '\0') {
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
        }
        else {
          psVar3 = (string *)*param_2;
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_d8,"=",extraout_RDX_x00135);
          cVar7 = embree::TokenStream::trySymbol(psVar3);
          std::__cxx11::string::_M_dispose();
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          if (cVar7 == '\0') goto LAB_00103c73;
          Stream<embree::Token>::get();
          if ((int)local_88 != 2) goto embree_State_parse;
          *(float *)(this + 0x4f8) = local_88._4_4_;
          Token::~Token((Token *)&local_88);
        }
      }
      else {
        psVar3 = (string *)*param_2;
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_88,"=",extraout_RDX_x00111);
        cVar7 = embree::TokenStream::trySymbol(psVar3);
        std::__cxx11::string::_M_dispose();
        if (cVar7 != '\0') {
          Stream<embree::Token>::get();
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_128,"low",extraout_RDX_x00112);
          Token::Id((Token *)&local_88,(string *)&local_128);
          cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
          Token::~Token((Token *)&local_88);
          std::__cxx11::string::_M_dispose();
          if (cVar7 == '\0') {
            std::__cxx11::string::string<std::allocator<char>>
                      ((string *)&local_128,"medium",extraout_RDX_x00113);
            Token::Id((Token *)&local_88,(string *)&local_128);
            cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
            Token::~Token((Token *)&local_88);
            std::__cxx11::string::_M_dispose();
            if (cVar7 == '\0') {
              std::__cxx11::string::string<std::allocator<char>>
                        ((string *)&local_128,"high",extraout_RDX_x00115);
              Token::Id((Token *)&local_88,(string *)&local_128);
              cVar7 = operator==((Token *)&local_d8,(Token *)&local_88);
              Token::~Token((Token *)&local_88);
              std::__cxx11::string::_M_dispose();
              if (cVar7 != '\0') {
                *(undefined4 *)(this + 0x49c) = 2;
              }
            }
            else {
              *(undefined4 *)(this + 0x49c) = 1;
            }
          }
          else {
            *(undefined4 *)(this + 0x49c) = 0;
          }
          Token::~Token((Token *)&local_d8);
        }
      }
    }
    else {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_00 = this + 0x10;
LAB_00105970:
      std::__cxx11::string::operator=((string *)this_00,(string *)&local_d8);
      std::__cxx11::string::_M_dispose();
LAB_00105980:
      Token::~Token((Token *)&local_88);
    }
LAB_00103c73:
    local_80 = (undefined1 *)0x1;
    local_78 = (undefined1 *)CONCAT62(local_78._2_6_,0x2c);
    local_88 = &local_78;
    embree::TokenStream::trySymbol((string *)*param_2);
    if (local_88 != &local_78) {
      operator_delete(local_88,(ulong)(local_78 + 1));
    }
    p_Var4 = local_8c8;
    if (local_8c8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_8c8 + 8;
      if (*(long *)(local_8c8 + 8) == 0x100000001) {
        *(undefined8 *)(local_8c8 + 8) = 0;
        (**(code **)(*(long *)local_8c8 + 0x10))(local_8c8);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar8 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar8 = *(int *)(local_8c8 + 8);
          *(int *)(local_8c8 + 8) = iVar8 + -1;
        }
        if (iVar8 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_8c8);
        }
      }
    }
    if (local_8f0 != local_8e0) {
      operator_delete(local_8f0,local_8e0[0] + 1);
    }
  } while( true );
}



/* embree::State::ErrorHandler::error() */

undefined4 * __thiscall embree::State::ErrorHandler::error(ErrorHandler *this)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined4 *)embree::getTls(*(opaque_tls_t **)this);
  local_28 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    embree::MutexSys::lock();
    puVar2 = (undefined4 *)operator_new(4);
    puVar1 = *(undefined8 **)(this + 0x10);
    *puVar2 = 0;
    local_28 = puVar2;
    if (puVar1 == *(undefined8 **)(this + 0x18)) {
      std::vector<RTCError*,std::allocator<RTCError*>>::_M_realloc_insert<RTCError*const&>
                ((vector<RTCError*,std::allocator<RTCError*>> *)(this + 8),puVar1,&local_28);
    }
    else {
      *puVar1 = puVar2;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
    embree::setTls(*(opaque_tls_t **)this,puVar2);
    embree::MutexSys::unlock();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::parseFile(embree::FileName const&) */

undefined8 __thiscall embree::State::parseFile(State *this,FileName *param_1)

{
  long lVar1;
  char *__s;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  TokenStream *pTVar11;
  long *plVar12;
  TokenStream *pTVar13;
  undefined4 *puVar14;
  uint uVar15;
  TokenStream **ppTVar16;
  ulong uVar17;
  ulong uVar18;
  TokenStream **ppTVar20;
  long *plVar21;
  undefined **ppuVar22;
  long *plVar23;
  TokenStream **ppTVar24;
  long in_FS_OFFSET;
  TokenStream *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  undefined2 *local_c8;
  long local_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined1 *local_a8;
  long local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  long *local_88;
  long local_80;
  long local_78 [2];
  TokenStream **local_68;
  undefined8 local_60;
  TokenStream *local_58 [3];
  long local_40;
  ulong uVar19;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)operator_new(0x270);
  plVar5[1] = 0;
  *plVar5 = (long)&DAT_0010dc50;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  puVar6 = (undefined4 *)operator_new(0xa000);
  plVar5[5] = (long)puVar6;
  plVar5[7] = (long)(puVar6 + 0x2800);
  puVar14 = puVar6;
  do {
    *puVar14 = 0;
    puVar7 = puVar14 + 10;
    *(undefined8 *)(puVar14 + 2) = 0;
    *(undefined8 *)(puVar14 + 4) = 0;
    *(undefined8 *)(puVar14 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
    puVar14 = puVar7;
  } while (puVar7 != puVar6 + 0x2800);
  plVar5[6] = (long)puVar7;
  *plVar5 = (long)&PTR__FileStream_0010dc90;
  std::ios_base::ios_base((ios_base *)(plVar5 + 0x28));
  plVar5[0x28] = (long)std::ios::clear;
  lVar10 = _vtable;
  *(undefined2 *)(plVar5 + 0x44) = 0;
  uVar2 = __ios_base;
  plVar5[8] = lVar10;
  plVar5[0x43] = 0;
  plVar5[0x45] = 0;
  plVar5[0x46] = 0;
  plVar5[0x47] = 0;
  plVar5[0x48] = 0;
  *(undefined8 *)((long)plVar5 + *(long *)(lVar10 + -0x18) + 0x40) = uVar2;
  plVar5[9] = 0;
  std::ios::init((streambuf *)((long)plVar5 + *(long *)(plVar5[8] + -0x18) + 0x40));
  plVar5[8] = (long)std::__basic_file<char>::~__basic_file;
  plVar5[0x28] = (long)std::ios_base::~ios_base;
  std::filebuf::filebuf((filebuf *)(plVar5 + 10));
  std::ios::init((streambuf *)(plVar5 + 0x28));
  plVar5[0x49] = 1;
  plVar5[0x4a] = 0;
  plVar5[0x4b] = 0;
  plVar8 = (long *)operator_new(0x20);
  lVar10 = *(long *)param_1;
  lVar1 = *(long *)(param_1 + 8);
  *plVar8 = (long)(plVar8 + 2);
  std::__cxx11::string::_M_construct<char*>(plVar8,lVar10,lVar1 + lVar10);
  plVar5[0x4c] = (long)plVar8;
  plVar5[0x4d] = 0;
  puVar9 = (undefined8 *)operator_new(0x18);
  puVar9[1] = 0x100000001;
  *puVar9 = &PTR___Sp_counted_ptr_0010dd80;
  puVar9[2] = plVar8;
  plVar5[0x4d] = (long)puVar9;
  if (((*(byte *)(plVar5 + 0x2c) & 5) == 0) && (lVar10 = std::filebuf::close(), lVar10 == 0)) {
    lVar10 = (long)plVar5 + *(long *)(plVar5[8] + -0x18) + 0x40;
    std::ios::clear(lVar10,*(uint *)(lVar10 + 0x20) | 4);
  }
  local_68 = local_58;
  std::__cxx11::string::_M_construct<char*>
            ((string *)&local_68,*(long *)param_1,*(long *)(param_1 + 8) + *(long *)param_1);
  lVar10 = std::filebuf::open((filebuf *)(plVar5 + 10),local_68,8);
  if (lVar10 == 0) {
    lVar10 = (long)plVar5 + *(long *)(plVar5[8] + -0x18) + 0x40;
    std::ios::clear(lVar10,*(uint *)(lVar10 + 0x20) | 4);
  }
  else {
    std::ios::clear((long)plVar5 + *(long *)(plVar5[8] + -0x18) + 0x40,0);
  }
  if (local_68 != local_58) {
    operator_delete(local_68,(ulong)(local_58[0] + 1));
  }
  cVar3 = std::__basic_file<char>::is_open();
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
  }
  ppuVar22 = &symbols;
  local_e8 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  do {
    __s = *ppuVar22;
    local_68 = local_58;
    if (__s == (char *)0x0) goto LAB_00109923;
    pTVar11 = (TokenStream *)strlen(__s);
    local_f0 = pTVar11;
    if (pTVar11 < (TokenStream *)0x10) {
      ppTVar16 = local_58;
      if (pTVar11 == (TokenStream *)0x1) {
        local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*__s);
      }
      else if (pTVar11 != (TokenStream *)0x0) goto LAB_00109641;
    }
    else {
      local_68 = (TokenStream **)
                 std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_f0);
      local_58[0] = local_f0;
      ppTVar16 = local_68;
LAB_00109641:
      memcpy(ppTVar16,__s,(size_t)pTVar11);
      ppTVar16 = local_68;
    }
    local_60 = local_f0;
    *(TokenStream *)((long)ppTVar16 + (long)local_f0) = (TokenStream)0x0;
    if (local_e0 == local_d8) {
      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
      _M_realloc_insert<std::__cxx11::string>
                ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_e8,
                 local_e0,(string *)&local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,(ulong)(local_58[0] + 1));
      }
    }
    else {
      *local_e0 = (long)(local_e0 + 2);
      if (local_68 == local_58) {
        pTVar11 = local_f0 + 1;
        uVar15 = (uint)pTVar11;
        if (uVar15 < 8) {
          if (((ulong)pTVar11 & 4) == 0) {
            if (uVar15 != 0) {
              *(undefined1 *)(local_e0 + 2) = local_58[0]._0_1_;
              if (((ulong)pTVar11 & 2) != 0) {
                *(undefined2 *)((long)local_e0 + ((ulong)pTVar11 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)local_58 + (((ulong)pTVar11 & 0xffffffff) - 2));
              }
            }
          }
          else {
            *(undefined4 *)(local_e0 + 2) = local_58[0]._0_4_;
            *(undefined4 *)((long)local_e0 + ((ulong)pTVar11 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)local_58 + (((ulong)pTVar11 & 0xffffffff) - 4));
          }
        }
        else {
          local_e0[2] = (long)local_58[0];
          *(undefined8 *)((long)local_e0 + ((ulong)pTVar11 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_58 + (((ulong)pTVar11 & 0xffffffff) - 8));
          lVar10 = (long)(local_e0 + 2) - ((ulong)(local_e0 + 3) & 0xfffffffffffffff8);
          uVar15 = uVar15 + (int)lVar10 & 0xfffffff8;
          if (7 < uVar15) {
            uVar4 = 0;
            do {
              uVar17 = (ulong)uVar4;
              uVar4 = uVar4 + 8;
              *(undefined8 *)(((ulong)(local_e0 + 3) & 0xfffffffffffffff8) + uVar17) =
                   *(undefined8 *)((long)local_58 + (uVar17 - lVar10));
            } while (uVar4 < uVar15);
          }
        }
      }
      else {
        *local_e0 = (long)local_68;
        local_e0[2] = (long)local_58[0];
      }
      local_e0[1] = (long)local_f0;
      local_e0 = local_e0 + 4;
    }
    ppuVar22 = ppuVar22 + 1;
  } while (ppuVar22 != (undefined **)&_LC29);
  pTVar11 = (TokenStream *)operator_new(0x360);
  uVar19 = _reserve;
  uVar18 = TokenStream::ALPHA_abi_cxx11_;
  uVar17 = TokenStream::alpha_abi_cxx11_;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = &local_98;
  std::__cxx11::string::reserve((ulong)&local_a8);
  if (((uVar18 <= 0x3fffffffffffffffU - local_a0) &&
      (std::__cxx11::string::_M_append((char *)&local_a8,uVar17),
      uVar19 <= 0x3fffffffffffffffU - local_a0)) &&
     (std::__cxx11::string::_M_append((char *)&local_a8,uVar18),
     TokenStream::separators_abi_cxx11_ <= 0x3fffffffffffffffU - local_a0)) {
    plVar12 = (long *)std::__cxx11::string::_M_append
                                ((char *)&local_a8,TokenStream::numbers_abi_cxx11_);
    plVar8 = plVar12 + 2;
    if ((long *)*plVar12 == plVar8) {
      uVar17 = plVar12[1] + 1;
      plVar21 = plVar8;
      plVar23 = local_78;
      if (7 < (uint)uVar17) {
        uVar18 = 0;
        do {
          uVar15 = (int)uVar18 + 8;
          uVar19 = (ulong)uVar15;
          *(undefined8 *)((long)local_78 + uVar18) = *(undefined8 *)((long)plVar8 + uVar18);
          uVar18 = uVar19;
        } while (uVar15 < ((uint)uVar17 & 0xfffffff8));
        plVar23 = (long *)((long)local_78 + uVar19);
        plVar21 = (long *)(uVar19 + (long)plVar8);
      }
      lVar10 = 0;
      if ((uVar17 & 4) != 0) {
        *(int *)plVar23 = (int)*plVar21;
        lVar10 = 4;
      }
      if ((uVar17 & 2) != 0) {
        *(undefined2 *)((long)plVar23 + lVar10) = *(undefined2 *)((long)plVar21 + lVar10);
        lVar10 = lVar10 + 2;
      }
      local_88 = local_78;
      if ((uVar17 & 1) != 0) {
        *(undefined1 *)((long)plVar23 + lVar10) = *(undefined1 *)((long)plVar21 + lVar10);
      }
    }
    else {
      local_78[0] = plVar12[2];
      local_88 = (long *)*plVar12;
    }
    local_80 = plVar12[1];
    *plVar12 = (long)plVar8;
    plVar12[1] = 0;
    *(undefined1 *)(plVar12 + 2) = 0;
    if (1 < 0x3fffffffffffffffU - local_80) {
      plVar8 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10acd7);
      ppTVar16 = (TokenStream **)(plVar8 + 2);
      if ((TokenStream **)*plVar8 == ppTVar16) {
        uVar17 = plVar8[1] + 1;
        ppTVar20 = ppTVar16;
        ppTVar24 = local_58;
        if (7 < (uint)uVar17) {
          uVar18 = 0;
          do {
            uVar15 = (int)uVar18 + 8;
            uVar19 = (ulong)uVar15;
            *(undefined8 *)((long)local_58 + uVar18) = *(undefined8 *)((long)ppTVar16 + uVar18);
            uVar18 = uVar19;
          } while (uVar15 < ((uint)uVar17 & 0xfffffff8));
          ppTVar24 = (TokenStream **)((long)local_58 + uVar19);
          ppTVar20 = (TokenStream **)(uVar19 + (long)ppTVar16);
        }
        lVar10 = 0;
        if ((uVar17 & 4) != 0) {
          *(undefined4 *)ppTVar24 = *(undefined4 *)ppTVar20;
          lVar10 = 4;
        }
        if ((uVar17 & 2) != 0) {
          *(undefined2 *)((long)ppTVar24 + lVar10) = *(undefined2 *)((long)ppTVar20 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_68 = local_58;
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)((long)ppTVar24 + lVar10) = *(undefined1 *)((long)ppTVar20 + lVar10);
        }
      }
      else {
        local_58[0] = (TokenStream *)plVar8[2];
        local_68 = (TokenStream **)*plVar8;
      }
      local_60 = (TokenStream *)plVar8[1];
      *plVar8 = (long)ppTVar16;
      plVar8[1] = 0;
      *(undefined1 *)(plVar8 + 2) = 0;
      pTVar13 = (TokenStream *)operator_new(0x68);
      local_c0 = 1;
      local_b8 = 0x23;
      local_c8 = &local_b8;
      if (plVar5 != (long *)0x0) {
        if (*(code **)(*plVar5 + 0x10) == RefCount::refInc) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      *(long *)(pTVar13 + 8) = 0;
      *(undefined **)pTVar13 = &DAT_0010dc50;
      *(long *)(pTVar13 + 0x10) = 0;
      *(long *)(pTVar13 + 0x18) = 0;
      *(long *)(pTVar13 + 0x20) = 0;
      *(long *)(pTVar13 + 0x28) = 0;
      *(long *)(pTVar13 + 0x30) = 0;
      *(long *)(pTVar13 + 0x38) = 0;
      puVar6 = (undefined4 *)operator_new(0xa000);
      *(undefined4 **)(pTVar13 + 0x28) = puVar6;
      *(undefined4 **)(pTVar13 + 0x38) = puVar6 + 0x2800;
      puVar14 = puVar6;
      do {
        *puVar14 = 0;
        puVar7 = puVar14 + 10;
        *(undefined8 *)(puVar14 + 2) = 0;
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0xffffffffffffffff;
        *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
        puVar14 = puVar7;
      } while (puVar7 != puVar6 + 0x2800);
      *(undefined4 **)(pTVar13 + 0x30) = puVar7;
      *(undefined ***)pTVar13 = &PTR__LineCommentFilter_0010dd10;
      *(long **)(pTVar13 + 0x40) = plVar5;
      if (plVar5 != (long *)0x0) {
        if (*(code **)(*plVar5 + 0x10) == RefCount::refInc) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      *(TokenStream **)(pTVar13 + 0x48) = pTVar13 + 0x58;
      std::__cxx11::string::_M_construct<char*>(pTVar13 + 0x48,local_c8,local_c0 + (long)local_c8);
      if (pTVar13 != (TokenStream *)0x0) {
        LOCK();
        *(long *)(pTVar13 + 8) = *(long *)(pTVar13 + 8) + 1;
        UNLOCK();
      }
      local_f0 = pTVar13;
      embree::TokenStream::TokenStream
                (pTVar11,(Ref *)&local_f0,(string *)&local_68,
                 (string *)&TokenStream::separators_abi_cxx11_,(vector *)&local_e8);
      if (pTVar11 != (TokenStream *)0x0) {
        LOCK();
        *(long *)(pTVar11 + 8) = *(long *)(pTVar11 + 8) + 1;
        UNLOCK();
      }
      if (local_f0 != (TokenStream *)0x0) {
        if (*(code **)(*(long *)local_f0 + 0x18) == RefCount::refDec) {
          LOCK();
          pTVar13 = local_f0 + 8;
          *(long *)pTVar13 = *(long *)pTVar13 + -1;
          UNLOCK();
          if (*(long *)pTVar13 == 0) {
            (**(code **)(*(long *)local_f0 + 8))();
          }
        }
        else {
          (**(code **)(*(long *)local_f0 + 0x18))();
        }
      }
      if (plVar5 != (long *)0x0) {
        if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar8 = plVar5 + 1;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
        else {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if (local_c8 != &local_b8) {
        operator_delete(local_c8,CONCAT62(uStack_b6,local_b8) + 1);
      }
      if (local_68 != local_58) {
        operator_delete(local_68,(ulong)(local_58[0] + 1));
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8 != &local_98) {
        operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
      }
      local_f0 = pTVar11;
      if (pTVar11 == (TokenStream *)0x0) {
        parse(this,&local_f0);
        plVar8 = local_e8;
        plVar12 = local_e0;
      }
      else {
        if (*(code **)(*(long *)pTVar11 + 0x10) == RefCount::refInc) {
          LOCK();
          *(long *)(pTVar11 + 8) = *(long *)(pTVar11 + 8) + 1;
          UNLOCK();
          parse(this,&local_f0);
        }
        else {
          (**(code **)(*(long *)pTVar11 + 0x10))(pTVar11);
          parse(this,&local_f0);
        }
        if (*(code **)(*(long *)pTVar11 + 0x18) == RefCount::refDec) {
          LOCK();
          pTVar13 = pTVar11 + 8;
          *(long *)pTVar13 = *(long *)pTVar13 + -1;
          UNLOCK();
          if (*(long *)pTVar13 == 0) {
            (**(code **)(*(long *)pTVar11 + 8))(pTVar11);
          }
        }
        else {
          (**(code **)(*(long *)pTVar11 + 0x18))(pTVar11);
        }
        if (*(code **)(*(long *)pTVar11 + 0x18) == RefCount::refDec) {
          LOCK();
          pTVar13 = pTVar11 + 8;
          *(long *)pTVar13 = *(long *)pTVar13 + -1;
          UNLOCK();
          plVar8 = local_e8;
          plVar12 = local_e0;
          if (*(long *)pTVar13 == 0) {
            (**(code **)(*(long *)pTVar11 + 8))(pTVar11);
            plVar8 = local_e8;
            plVar12 = local_e0;
          }
        }
        else {
          (**(code **)(*(long *)pTVar11 + 0x18))(pTVar11);
          plVar8 = local_e8;
          plVar12 = local_e0;
        }
      }
      for (; plVar23 = local_e0, local_e0 != plVar8; plVar8 = plVar8 + 4) {
        local_e0 = plVar12;
        if ((long *)*plVar8 != plVar8 + 2) {
          operator_delete((long *)*plVar8,plVar8[2] + 1);
        }
        plVar12 = local_e0;
        local_e0 = plVar23;
      }
      local_e0 = plVar12;
      if (local_e8 != (long *)0x0) {
        operator_delete(local_e8,(long)local_d8 - (long)local_e8);
      }
      if (plVar5 != (long *)0x0) {
        if (*(code **)(*plVar5 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar8 = plVar5 + 1;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
        else {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 1;
      }
      goto LAB_0010992f;
    }
  }
  std::__throw_length_error("basic_string::append");
LAB_00109923:
  std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_0010992f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::parseString(char const*) */

void __thiscall embree::State::parseString(State *this,char *param_1)

{
  char *__s;
  uint uVar1;
  TokenStream *pTVar2;
  long *plVar3;
  long *plVar4;
  TokenStream *pTVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  TokenStream **ppTVar10;
  ulong uVar11;
  ulong uVar12;
  TokenStream **ppTVar14;
  long *plVar15;
  undefined **ppuVar16;
  long lVar17;
  long *plVar18;
  TokenStream **ppTVar19;
  long in_FS_OFFSET;
  TokenStream *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined1 *local_a8;
  long local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  long *local_88;
  long local_80;
  long local_78 [2];
  TokenStream **local_68;
  undefined8 local_60;
  TokenStream *local_58 [3];
  long local_40;
  ulong uVar13;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
LAB_00109e5c:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_c8 = (long *)0x0;
    ppuVar16 = &symbols;
    local_c0 = (long *)0x0;
    local_b8 = (long *)0x0;
    do {
      __s = *ppuVar16;
      local_68 = local_58;
      if (__s == (char *)0x0) goto LAB_0010a153;
      pTVar2 = (TokenStream *)strlen(__s);
      local_d0 = pTVar2;
      if (pTVar2 < (TokenStream *)0x10) {
        ppTVar10 = local_58;
        if (pTVar2 == (TokenStream *)0x1) {
          local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*__s);
        }
        else if (pTVar2 != (TokenStream *)0x0) goto LAB_00109f01;
      }
      else {
        local_68 = (TokenStream **)
                   std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_d0);
        local_58[0] = local_d0;
        ppTVar10 = local_68;
LAB_00109f01:
        memcpy(ppTVar10,__s,(size_t)pTVar2);
        ppTVar10 = local_68;
      }
      local_60 = local_d0;
      *(TokenStream *)((long)ppTVar10 + (long)local_d0) = (TokenStream)0x0;
      if (local_c0 == local_b8) {
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_c8,
                   local_c0,(string *)&local_68);
        if (local_68 != local_58) {
          operator_delete(local_68,(ulong)(local_58[0] + 1));
        }
      }
      else {
        *local_c0 = (long)(local_c0 + 2);
        if (local_68 == local_58) {
          pTVar2 = local_d0 + 1;
          uVar9 = (uint)pTVar2;
          if (uVar9 < 8) {
            if (((ulong)pTVar2 & 4) == 0) {
              if (uVar9 != 0) {
                *(undefined1 *)(local_c0 + 2) = local_58[0]._0_1_;
                if (((ulong)pTVar2 & 2) != 0) {
                  *(undefined2 *)((long)local_c0 + ((ulong)pTVar2 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + (((ulong)pTVar2 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)(local_c0 + 2) = local_58[0]._0_4_;
              *(undefined4 *)((long)local_c0 + ((ulong)pTVar2 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)local_58 + (((ulong)pTVar2 & 0xffffffff) - 4));
            }
          }
          else {
            local_c0[2] = (long)local_58[0];
            *(undefined8 *)((long)local_c0 + ((ulong)pTVar2 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_58 + (((ulong)pTVar2 & 0xffffffff) - 8));
            lVar17 = (long)(local_c0 + 2) - ((ulong)(local_c0 + 3) & 0xfffffffffffffff8);
            uVar9 = uVar9 + (int)lVar17 & 0xfffffff8;
            if (7 < uVar9) {
              uVar1 = 0;
              do {
                uVar11 = (ulong)uVar1;
                uVar1 = uVar1 + 8;
                *(undefined8 *)(((ulong)(local_c0 + 3) & 0xfffffffffffffff8) + uVar11) =
                     *(undefined8 *)((long)local_58 + (uVar11 - lVar17));
              } while (uVar1 < uVar9);
            }
          }
        }
        else {
          *local_c0 = (long)local_68;
          local_c0[2] = (long)local_58[0];
        }
        local_c0[1] = (long)local_d0;
        local_c0 = local_c0 + 4;
      }
      ppuVar16 = ppuVar16 + 1;
    } while (ppuVar16 != (undefined **)&_LC29);
    pTVar2 = (TokenStream *)operator_new(0x360);
    uVar13 = _reserve;
    uVar12 = TokenStream::ALPHA_abi_cxx11_;
    uVar11 = TokenStream::alpha_abi_cxx11_;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = &local_98;
    std::__cxx11::string::reserve((ulong)&local_a8);
    if (((uVar12 <= 0x3fffffffffffffffU - local_a0) &&
        (std::__cxx11::string::_M_append((char *)&local_a8,uVar11),
        uVar13 <= 0x3fffffffffffffffU - local_a0)) &&
       (std::__cxx11::string::_M_append((char *)&local_a8,uVar12),
       TokenStream::separators_abi_cxx11_ <= 0x3fffffffffffffffU - local_a0)) {
      plVar3 = (long *)std::__cxx11::string::_M_append
                                 ((char *)&local_a8,TokenStream::numbers_abi_cxx11_);
      plVar4 = plVar3 + 2;
      if ((long *)*plVar3 == plVar4) {
        uVar11 = plVar3[1] + 1;
        plVar15 = plVar4;
        plVar18 = local_78;
        if (7 < (uint)uVar11) {
          uVar12 = 0;
          do {
            uVar9 = (int)uVar12 + 8;
            uVar13 = (ulong)uVar9;
            *(undefined8 *)((long)local_78 + uVar12) = *(undefined8 *)((long)plVar4 + uVar12);
            uVar12 = uVar13;
          } while (uVar9 < ((uint)uVar11 & 0xfffffff8));
          plVar18 = (long *)((long)local_78 + uVar13);
          plVar15 = (long *)(uVar13 + (long)plVar4);
        }
        lVar17 = 0;
        if ((uVar11 & 4) != 0) {
          *(int *)plVar18 = (int)*plVar15;
          lVar17 = 4;
        }
        if ((uVar11 & 2) != 0) {
          *(undefined2 *)((long)plVar18 + lVar17) = *(undefined2 *)((long)plVar15 + lVar17);
          lVar17 = lVar17 + 2;
        }
        local_88 = local_78;
        if ((uVar11 & 1) != 0) {
          *(undefined1 *)((long)plVar18 + lVar17) = *(undefined1 *)((long)plVar15 + lVar17);
        }
      }
      else {
        local_78[0] = plVar3[2];
        local_88 = (long *)*plVar3;
      }
      local_80 = plVar3[1];
      *plVar3 = (long)plVar4;
      plVar3[1] = 0;
      *(undefined1 *)(plVar3 + 2) = 0;
      if (1 < 0x3fffffffffffffffU - local_80) {
        plVar4 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10acd7);
        ppTVar10 = (TokenStream **)(plVar4 + 2);
        if ((TokenStream **)*plVar4 == ppTVar10) {
          uVar11 = plVar4[1] + 1;
          ppTVar14 = ppTVar10;
          ppTVar19 = local_58;
          if (7 < (uint)uVar11) {
            uVar12 = 0;
            do {
              uVar9 = (int)uVar12 + 8;
              uVar13 = (ulong)uVar9;
              *(undefined8 *)((long)local_58 + uVar12) = *(undefined8 *)((long)ppTVar10 + uVar12);
              uVar12 = uVar13;
            } while (uVar9 < ((uint)uVar11 & 0xfffffff8));
            ppTVar19 = (TokenStream **)((long)local_58 + uVar13);
            ppTVar14 = (TokenStream **)(uVar13 + (long)ppTVar10);
          }
          lVar17 = 0;
          if ((uVar11 & 4) != 0) {
            *(undefined4 *)ppTVar19 = *(undefined4 *)ppTVar14;
            lVar17 = 4;
          }
          if ((uVar11 & 2) != 0) {
            *(undefined2 *)((long)ppTVar19 + lVar17) = *(undefined2 *)((long)ppTVar14 + lVar17);
            lVar17 = lVar17 + 2;
          }
          local_68 = local_58;
          if ((uVar11 & 1) != 0) {
            *(undefined1 *)((long)ppTVar19 + lVar17) = *(undefined1 *)((long)ppTVar14 + lVar17);
          }
        }
        else {
          local_58[0] = (TokenStream *)plVar4[2];
          local_68 = (TokenStream **)*plVar4;
        }
        local_60 = (TokenStream *)plVar4[1];
        *plVar4 = (long)ppTVar10;
        plVar4[1] = 0;
        *(undefined1 *)(plVar4 + 2) = 0;
        pTVar5 = (TokenStream *)operator_new(0x60);
        *(long *)(pTVar5 + 8) = 0;
        *(undefined **)pTVar5 = &DAT_0010dc50;
        *(long *)(pTVar5 + 0x10) = 0;
        *(long *)(pTVar5 + 0x18) = 0;
        *(long *)(pTVar5 + 0x20) = 0;
        *(long *)(pTVar5 + 0x28) = 0;
        *(long *)(pTVar5 + 0x30) = 0;
        *(long *)(pTVar5 + 0x38) = 0;
        puVar6 = (undefined4 *)operator_new(0xa000);
        *(undefined4 **)(pTVar5 + 0x28) = puVar6;
        *(undefined4 **)(pTVar5 + 0x38) = puVar6 + 0x2800;
        puVar7 = puVar6;
        do {
          *puVar7 = 0;
          puVar8 = puVar7 + 10;
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          *(undefined8 *)(puVar7 + 6) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          puVar7 = puVar8;
        } while (puVar8 != puVar6 + 0x2800);
        *(undefined4 **)(pTVar5 + 0x30) = puVar8;
        *(undefined ***)pTVar5 = &PTR__StrStream_0010dcd0;
        *(long *)(pTVar5 + 0x48) = 1;
        *(char **)(pTVar5 + 0x40) = param_1;
        *(long *)(pTVar5 + 0x50) = 0;
        *(long *)(pTVar5 + 0x58) = 0;
        if (pTVar5 != (TokenStream *)0x0) {
          LOCK();
          *(long *)(pTVar5 + 8) = *(long *)(pTVar5 + 8) + 1;
          UNLOCK();
        }
        local_d0 = pTVar5;
        embree::TokenStream::TokenStream
                  (pTVar2,(Ref *)&local_d0,(string *)&local_68,
                   (string *)&TokenStream::separators_abi_cxx11_,(vector *)&local_c8);
        if (pTVar2 != (TokenStream *)0x0) {
          LOCK();
          *(long *)(pTVar2 + 8) = *(long *)(pTVar2 + 8) + 1;
          UNLOCK();
        }
        if (local_d0 != (TokenStream *)0x0) {
          if (*(code **)(*(long *)local_d0 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar5 = local_d0 + 8;
            *(long *)pTVar5 = *(long *)pTVar5 + -1;
            UNLOCK();
            if (*(long *)pTVar5 == 0) {
              (**(code **)(*(long *)local_d0 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_d0 + 0x18))();
          }
        }
        if (local_68 != local_58) {
          operator_delete(local_68,(ulong)(local_58[0] + 1));
        }
        if (local_88 != local_78) {
          operator_delete(local_88,local_78[0] + 1);
        }
        if (local_a8 != &local_98) {
          operator_delete(local_a8,CONCAT71(uStack_97,local_98) + 1);
        }
        local_d0 = pTVar2;
        if (pTVar2 == (TokenStream *)0x0) {
          parse(this,&local_d0);
          plVar4 = local_c8;
          plVar3 = local_c0;
        }
        else {
          if (*(code **)(*(long *)pTVar2 + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(pTVar2 + 8) = *(long *)(pTVar2 + 8) + 1;
            UNLOCK();
            parse(this,&local_d0);
          }
          else {
            (**(code **)(*(long *)pTVar2 + 0x10))(pTVar2);
            parse(this,&local_d0);
          }
          if (*(code **)(*(long *)pTVar2 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar5 = pTVar2 + 8;
            *(long *)pTVar5 = *(long *)pTVar5 + -1;
            UNLOCK();
            if (*(long *)pTVar5 == 0) {
              (**(code **)(*(long *)pTVar2 + 8))(pTVar2);
            }
          }
          else {
            (**(code **)(*(long *)pTVar2 + 0x18))(pTVar2);
          }
          if (*(code **)(*(long *)pTVar2 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar5 = pTVar2 + 8;
            *(long *)pTVar5 = *(long *)pTVar5 + -1;
            UNLOCK();
            plVar4 = local_c8;
            plVar3 = local_c0;
            if (*(long *)pTVar5 == 0) {
              (**(code **)(*(long *)pTVar2 + 8))(pTVar2);
              plVar4 = local_c8;
              plVar3 = local_c0;
            }
          }
          else {
            (**(code **)(*(long *)pTVar2 + 0x18))(pTVar2);
            plVar4 = local_c8;
            plVar3 = local_c0;
          }
        }
        for (; plVar18 = local_c0, local_c0 != plVar4; plVar4 = plVar4 + 4) {
          local_c0 = plVar3;
          if ((long *)*plVar4 != plVar4 + 2) {
            operator_delete((long *)*plVar4,plVar4[2] + 1);
          }
          plVar3 = local_c0;
          local_c0 = plVar18;
        }
        local_c0 = plVar3;
        if (local_c8 != (long *)0x0) {
          operator_delete(local_c8,(long)local_b8 - (long)local_c8);
        }
        goto LAB_00109e5c;
      }
    }
    std::__throw_length_error("basic_string::append");
LAB_0010a153:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::StrStream::location() */

void embree::StrStream::location(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x50);
  uVar2 = *(undefined8 *)(in_RSI + 0x48);
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar1;
  return;
}



/* embree::StrStream::next() */

int __thiscall embree::StrStream::next(StrStream *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(*(long *)(this + 0x40) + *(long *)(this + 0x58));
  iVar2 = (int)cVar1;
  if (cVar1 == '\0') {
    iVar2 = -1;
  }
  else {
    if (iVar2 == 10) {
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
      *(undefined8 *)(this + 0x50) = 0;
    }
    else if (iVar2 != 0xd) {
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
    }
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  return iVar2;
}



/* std::_Sp_counted_ptr<std::__cxx11::string*, (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr() */

void __thiscall
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr
          (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *this)

{
  return;
}



/* std::_Sp_counted_ptr<std::__cxx11::string*,
   (__gnu_cxx::_Lock_policy)2>::_M_get_deleter(std::type_info const&) */

undefined8
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::_M_get_deleter
          (type_info *param_1)

{
  return 0;
}



/* std::_Sp_counted_ptr<std::__cxx11::string*, (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr() */

void __thiscall
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr
          (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *this)

{
  operator_delete(this,0x18);
  return;
}



/* std::_Sp_counted_ptr<std::__cxx11::string*, (__gnu_cxx::_Lock_policy)2>::_M_destroy() */

void __thiscall
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::_M_destroy
          (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *this)

{
  if (this != (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *)0x0) {
    operator_delete(this,0x18);
    return;
  }
  return;
}



/* embree::FileStream::next() */

void __thiscall embree::FileStream::next(FileStream *this)

{
  int iVar1;
  
  iVar1 = std::istream::get();
  if (iVar1 != 10) {
    if (iVar1 != 0xd) {
      *(long *)(this + 0x250) = *(long *)(this + 0x250) + 1;
    }
    *(long *)(this + 600) = *(long *)(this + 600) + 1;
    return;
  }
  *(long *)(this + 0x248) = *(long *)(this + 0x248) + 1;
  *(long *)(this + 600) = *(long *)(this + 600) + 1;
  *(undefined8 *)(this + 0x250) = 0;
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0010a309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::Token::Float(bool) const [clone .isra.0] [clone .cold] */

void embree::Token::Float(bool param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::State::parse(embree::Ref<embree::TokenStream>) [clone .cold] */

void embree::State::parse(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::State::parseFile(embree::FileName const&) [clone .cold] */

void embree::State::parseFile(FileName *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* std::_Sp_counted_ptr<std::__cxx11::string*, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::_M_dispose
          (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if ((undefined8 *)*puVar1 != puVar1 + 2) {
      operator_delete((undefined8 *)*puVar1,puVar1[2] + 1);
    }
    operator_delete(puVar1,0x20);
    return;
  }
  return;
}



/* embree::Token::Id(std::__cxx11::string) */

Token * __thiscall embree::Token::Id(Token *this,long *param_2)

{
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  long local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = local_38;
  std::__cxx11::string::_M_construct<char*>(&local_48,*param_2,param_2[1] + *param_2);
  *(undefined4 *)this = 4;
  *(Token **)(this + 8) = this + 0x18;
  std::__cxx11::string::_M_construct<char*>(this + 8,local_48,local_40 + (long)local_48);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  if (local_48 != local_38) {
    operator_delete(local_48,local_38[0] + 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Token::Identifier[abi:cxx11]() const */

void embree::Token::Identifier_abi_cxx11_(void)

{
  ulong __n;
  undefined1 *__src;
  ulong *__dest;
  int *in_RSI;
  ulong *in_RDI;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*in_RSI != 4) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __dest = in_RDI + 2;
  *in_RDI = (ulong)__dest;
  __n = *(ulong *)(in_RSI + 4);
  __src = *(undefined1 **)(in_RSI + 2);
  local_28 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_0010a4ff;
    }
    if (__n == 0) goto LAB_0010a4ff;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
  }
  memcpy(__dest,__src,__n);
  __dest = (ulong *)*in_RDI;
LAB_0010a4ff:
  in_RDI[1] = local_28;
  *(undefined1 *)((long)__dest + local_28) = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::TEMPNAMEPLACEHOLDERVALUE(embree::Token const&, embree::Token const&) */

ulong embree::operator==(Token *param_1,Token *param_2)

{
  size_t __n;
  int iVar1;
  ulong uVar2;
  
  if (*(int *)param_1 == *(int *)param_2) {
    switch(*(int *)param_1) {
    case 0:
      uVar2 = 1;
      break;
    case 1:
      uVar2 = CONCAT71(0x10a6,param_1[4] == param_2[4]);
      break;
    case 2:
      uVar2 = CONCAT71(0x10a6,*(int *)(param_1 + 4) == *(int *)(param_2 + 4));
      break;
    case 3:
      uVar2 = CONCAT71(0x10a6,!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)));
      if (*(float *)(param_1 + 4) != *(float *)(param_2 + 4)) {
        uVar2 = 0;
      }
      break;
    case 4:
    case 5:
    case 6:
      __n = *(size_t *)(param_1 + 0x10);
      uVar2 = 0;
      if ((__n == *(size_t *)(param_2 + 0x10)) && (uVar2 = 1, __n != 0)) {
        iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),__n);
        uVar2 = CONCAT71((int7)(uVar2 >> 8),iVar1 == 0);
      }
      break;
    default:
      return 1;
    }
    return uVar2 & 0xffffffff;
  }
  return 0;
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x10))();
  if (__libc_single_threaded == '\0') {
    LOCK();
    p_Var1 = this + 0xc;
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010ad1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* embree::StrStream::~StrStream() */

void __thiscall embree::StrStream::~StrStream(StrStream *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  void *pvVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  void *pvVar4;
  
  pvVar3 = *(void **)(this + 0x30);
  pvVar4 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar3 != pvVar4) {
LAB_0010ad7f:
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar4 + 0x10);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            pvVar4 = (void *)((long)pvVar4 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            if (pvVar3 == pvVar4) break;
            goto LAB_0010ad7f;
          }
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x28);
    } while (pvVar3 != pvVar4);
    pvVar4 = *(void **)(this + 0x28);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x38) - (long)pvVar4);
    return;
  }
  return;
}



/* embree::StrStream::~StrStream() */

void __thiscall embree::StrStream::~StrStream(StrStream *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  void *pvVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  void *pvVar4;
  
  pvVar3 = *(void **)(this + 0x30);
  pvVar4 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar3 != pvVar4) {
LAB_0010ae6f:
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar4 + 0x10);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            pvVar4 = (void *)((long)pvVar4 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            if (pvVar3 == pvVar4) break;
            goto LAB_0010ae6f;
          }
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x28);
    } while (pvVar3 != pvVar4);
    pvVar4 = *(void **)(this + 0x28);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x38) - (long)pvVar4);
  }
  operator_delete(this,0x60);
  return;
}



/* embree::LineCommentFilter::~LineCommentFilter() */

void __thiscall embree::LineCommentFilter::~LineCommentFilter(LineCommentFilter *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__LineCommentFilter_0010dd10;
  if (*(LineCommentFilter **)(this + 0x48) != this + 0x58) {
    operator_delete(*(LineCommentFilter **)(this + 0x48),*(long *)(this + 0x58) + 1);
  }
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(code **)(*plVar4 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  pvVar5 = *(void **)(this + 0x30);
  pvVar6 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar5 != pvVar6) {
LAB_0010afb7:
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar6 + 0x10);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            pvVar6 = (void *)((long)pvVar6 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            if (pvVar5 == pvVar6) break;
            goto LAB_0010afb7;
          }
        }
      }
      pvVar6 = (void *)((long)pvVar6 + 0x28);
    } while (pvVar5 != pvVar6);
    pvVar6 = *(void **)(this + 0x28);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6,*(long *)(this + 0x38) - (long)pvVar6);
    return;
  }
  return;
}



/* embree::LineCommentFilter::~LineCommentFilter() */

void __thiscall embree::LineCommentFilter::~LineCommentFilter(LineCommentFilter *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__LineCommentFilter_0010dd10;
  if (*(LineCommentFilter **)(this + 0x48) != this + 0x58) {
    operator_delete(*(LineCommentFilter **)(this + 0x48),*(long *)(this + 0x58) + 1);
  }
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(code **)(*plVar4 + 0x18) == RefCount::refDec) {
      LOCK();
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  pvVar5 = *(void **)(this + 0x30);
  pvVar6 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar5 != pvVar6) {
LAB_0010b117:
    do {
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar6 + 0x10);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = this_00 + 8;
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = *(int *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            pvVar6 = (void *)((long)pvVar6 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            if (pvVar5 == pvVar6) break;
            goto LAB_0010b117;
          }
        }
      }
      pvVar6 = (void *)((long)pvVar6 + 0x28);
    } while (pvVar5 != pvVar6);
    pvVar6 = *(void **)(this + 0x28);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6,*(long *)(this + 0x38) - (long)pvVar6);
  }
  operator_delete(this,0x68);
  return;
}



/* embree::Token::~Token() */

void __thiscall embree::Token::~Token(Token *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  int iVar2;
  Token *pTVar3;
  
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x30);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = this_00 + 8;
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      pTVar3 = *(Token **)(this + 8);
      if (pTVar3 == this + 0x18) {
        return;
      }
      goto LAB_0010b221;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(this_00 + 8);
      *(int *)(this_00 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
    }
  }
  pTVar3 = *(Token **)(this + 8);
  if (pTVar3 == this + 0x18) {
    return;
  }
LAB_0010b221:
  operator_delete(pTVar3,*(long *)(this + 0x18) + 1);
  return;
}



/* embree::FileStream::location() */

undefined8 * embree::FileStream::location(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long in_RSI;
  undefined8 *in_RDI;
  bool bVar6;
  
  this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(in_RSI + 0x268);
  uVar2 = *(undefined8 *)(in_RSI + 0x250);
  uVar3 = *(undefined8 *)(in_RSI + 0x248);
  uVar4 = *(undefined8 *)(in_RSI + 0x260);
  if (this == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    *in_RDI = uVar4;
    in_RDI[1] = 0;
    in_RDI[2] = uVar3;
    in_RDI[3] = uVar2;
    return in_RDI;
  }
  p_Var1 = this + 8;
  if (__libc_single_threaded == '\0') {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    bVar6 = __libc_single_threaded == '\0';
    *in_RDI = uVar4;
    in_RDI[1] = this;
    if (bVar6) {
      LOCK();
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UNLOCK();
      in_RDI[2] = uVar3;
      in_RDI[3] = uVar2;
      goto LAB_0010b2e1;
    }
  }
  else {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    *in_RDI = uVar4;
    in_RDI[1] = this;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  in_RDI[2] = uVar3;
  in_RDI[3] = uVar2;
LAB_0010b2e1:
  if (*(long *)(this + 8) != 0x100000001) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(this + 8);
      *(int *)(this + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
    }
    return in_RDI;
  }
  *(undefined8 *)(this + 8) = 0;
  (**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*(long *)this + 0x18))(this);
  return in_RDI;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::FileStream::~FileStream() */

void __thiscall embree::FileStream::~FileStream(FileStream *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__FileStream_0010dc90;
  if (((byte)this[0x160] & 5) == 0) {
    lVar6 = std::filebuf::close();
    if (lVar6 == 0) {
      std::ios::clear(this + *(long *)(*(long *)(this + 0x40) + -0x18) + 0x40,
                      *(uint *)(this + *(long *)(*(long *)(this + 0x40) + -0x18) + 0x40 + 0x20) | 4)
      ;
    }
  }
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x268);
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
  }
  *(code **)(this + 0x40) = std::__basic_file<char>::~__basic_file;
  *(code **)(this + 0x140) = std::ios_base::~ios_base;
  *(code **)(this + 0x50) = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0xb8));
  *(undefined **)(this + 0x50) = &std::ifstream::VTT;
  std::locale::~locale((locale *)(this + 0x88));
  uVar4 = __ios_base;
  lVar6 = _vtable;
  *(long *)(this + 0x40) = _vtable;
  *(undefined8 *)(this + *(long *)(lVar6 + -0x18) + 0x40) = uVar4;
  *(code **)(this + 0x140) = std::ios::clear;
  *(undefined8 *)(this + 0x48) = 0;
  std::ios_base::~ios_base((ios_base *)(this + 0x140));
  pvVar3 = *(void **)(this + 0x30);
  pvVar7 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar3 != pvVar7) {
LAB_0010b507:
    do {
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar7 + 0x10);
      if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var2 + 8;
        if (*(long *)(p_Var2 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var2 + 8) = 0;
          (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
          (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var2 + 8);
            *(int *)(p_Var2 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            pvVar7 = (void *)((long)pvVar7 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            if (pvVar3 == pvVar7) break;
            goto LAB_0010b507;
          }
        }
      }
      pvVar7 = (void *)((long)pvVar7 + 0x28);
    } while (pvVar3 != pvVar7);
    pvVar7 = *(void **)(this + 0x28);
  }
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7,*(long *)(this + 0x38) - (long)pvVar7);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::FileStream::~FileStream() */

void __thiscall embree::FileStream::~FileStream(FileStream *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__FileStream_0010dc90;
  if (((byte)this[0x160] & 5) == 0) {
    lVar6 = std::filebuf::close();
    if (lVar6 == 0) {
      std::ios::clear(this + *(long *)(*(long *)(this + 0x40) + -0x18) + 0x40,
                      *(uint *)(this + *(long *)(*(long *)(this + 0x40) + -0x18) + 0x40 + 0x20) | 4)
      ;
    }
  }
  p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x268);
  if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Var2 + 8;
    if (*(long *)(p_Var2 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var2 + 8) = 0;
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar5 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar5 = *(int *)(p_Var2 + 8);
        *(int *)(p_Var2 + 8) = iVar5 + -1;
      }
      if (iVar5 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
      }
    }
  }
  *(code **)(this + 0x40) = std::__basic_file<char>::~__basic_file;
  *(code **)(this + 0x140) = std::ios_base::~ios_base;
  *(code **)(this + 0x50) = std::__basic_file<char>::~__basic_file;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file((__basic_file<char> *)(this + 0xb8));
  *(undefined **)(this + 0x50) = &std::ifstream::VTT;
  std::locale::~locale((locale *)(this + 0x88));
  uVar4 = __ios_base;
  lVar6 = _vtable;
  *(long *)(this + 0x40) = _vtable;
  *(undefined8 *)(this + *(long *)(lVar6 + -0x18) + 0x40) = uVar4;
  *(code **)(this + 0x140) = std::ios::clear;
  *(undefined8 *)(this + 0x48) = 0;
  std::ios_base::~ios_base((ios_base *)(this + 0x140));
  pvVar3 = *(void **)(this + 0x30);
  pvVar7 = *(void **)(this + 0x28);
  *(undefined **)this = &DAT_0010dc50;
  if (pvVar3 != pvVar7) {
LAB_0010b767:
    do {
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar7 + 0x10);
      if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var2 + 8;
        if (*(long *)(p_Var2 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var2 + 8) = 0;
          (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
          (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var2 + 8);
            *(int *)(p_Var2 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            pvVar7 = (void *)((long)pvVar7 + 0x28);
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            if (pvVar3 == pvVar7) break;
            goto LAB_0010b767;
          }
        }
      }
      pvVar7 = (void *)((long)pvVar7 + 0x28);
    } while (pvVar3 != pvVar7);
    pvVar7 = *(void **)(this + 0x28);
  }
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7,*(long *)(this + 0x38) - (long)pvVar7);
  }
  operator_delete(this,0x270);
  return;
}



/* embree::Stream<int>::loc() */

long __thiscall embree::Stream<int>::loc(Stream<int> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) != 0) goto LAB_0010ba60;
  (**(code **)(*(long *)this + 0x28))(&local_68,this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var8 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var8;
          *(int *)p_Var8 = *(int *)p_Var8 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar6 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar6 + lVar3 == 0x400) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = lVar6 + -1;
    *(long *)(this + 0x18) = lVar6;
    uVar7 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
    *(ulong *)(this + 0x10) = (ulong)uVar7;
  }
  else {
    uVar7 = (uint)*(undefined8 *)(this + 0x10);
  }
  *(long *)(this + 0x20) = lVar3 + 1;
  puVar2 = (undefined4 *)
           (*(long *)(this + 0x28) + (ulong)((int)lVar6 + uVar7 + (int)lVar3 & 0x3ff) * 0x28);
  *puVar2 = uVar4;
  p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var8) {
LAB_0010ba12:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010ba60;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010ba60;
      }
LAB_0010b9d1:
      p_Var1 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_0010ba12;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010b9d1;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var8 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var8;
      *(int *)p_Var8 = *(int *)p_Var8 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_0010ba60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) + 8 +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::LineCommentFilter::location() */

void embree::LineCommentFilter::location(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  puVar3 = (undefined8 *)Stream<int>::loc(*(Stream<int> **)(in_RSI + 0x40));
  *in_RDI = *puVar3;
  lVar1 = puVar3[1];
  in_RDI[1] = lVar1;
  if (lVar1 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
  }
  uVar2 = puVar3[3];
  in_RDI[2] = puVar3[2];
  in_RDI[3] = uVar2;
  return;
}



/* embree::TokenStream::location() */

void embree::TokenStream::location(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  puVar3 = (undefined8 *)Stream<int>::loc(*(Stream<int> **)(in_RSI + 0x40));
  *in_RDI = *puVar3;
  lVar1 = puVar3[1];
  in_RDI[1] = lVar1;
  if (lVar1 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
  }
  uVar2 = puVar3[3];
  in_RDI[2] = puVar3[2];
  in_RDI[3] = uVar2;
  return;
}



/* embree::Stream<int>::peek() */

long __thiscall embree::Stream<int>::peek(Stream<int> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) != 0) goto LAB_0010beb0;
  (**(code **)(*(long *)this + 0x28))(&local_68,this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var8 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var8;
          *(int *)p_Var8 = *(int *)p_Var8 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar6 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar6 + lVar3 == 0x400) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = lVar6 + -1;
    *(long *)(this + 0x18) = lVar6;
    uVar7 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
    *(ulong *)(this + 0x10) = (ulong)uVar7;
  }
  else {
    uVar7 = (uint)*(undefined8 *)(this + 0x10);
  }
  *(long *)(this + 0x20) = lVar3 + 1;
  puVar2 = (undefined4 *)
           (*(long *)(this + 0x28) + (ulong)((int)lVar6 + uVar7 + (int)lVar3 & 0x3ff) * 0x28);
  *puVar2 = uVar4;
  p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var8) {
LAB_0010be62:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010beb0;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010beb0;
      }
LAB_0010be21:
      p_Var1 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_0010be62;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010be21;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var8 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var8;
      *(int *)p_Var8 = *(int *)p_Var8 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_0010beb0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Stream<int>::get() */

undefined4 __thiscall embree::Stream<int>::get(Stream<int> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var8;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  lVar6 = *(long *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 != 0) goto LAB_0010c23f;
  (**(code **)(*(long *)this + 0x28))(&local_68,this);
  uVar4 = (**(code **)(*(long *)this + 0x20))(this);
  if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    }
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var8 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var8;
          *(int *)p_Var8 = *(int *)p_Var8 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar6 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar6 + lVar3 == 0x400) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = lVar6 + -1;
    *(long *)(this + 0x18) = lVar6;
    uVar7 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
    *(ulong *)(this + 0x10) = (ulong)uVar7;
  }
  else {
    uVar7 = (uint)*(undefined8 *)(this + 0x10);
  }
  *(long *)(this + 0x20) = lVar3 + 1;
  puVar2 = (undefined4 *)
           (*(long *)(this + 0x28) + (ulong)((int)lVar6 + uVar7 + (int)lVar3 & 0x3ff) * 0x28);
  *puVar2 = uVar4;
  p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var8) {
LAB_0010c1f2:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c201;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        lVar6 = *(long *)(this + 0x20);
        goto LAB_0010c23f;
      }
LAB_0010c1b1:
      p_Var1 = p_Var8 + 8;
      if (*(long *)(p_Var8 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var8 + 8) = 0;
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        (**(code **)(*(long *)p_Var8 + 0x18))(p_Var8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var8 + 8);
          *(int *)(p_Var8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var8);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_0010c1f2;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var8 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c1b1;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
LAB_0010c201:
    p_Var8 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar6 = *(long *)(this + 0x20);
      goto LAB_0010c23f;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar5 = *(int *)p_Var8;
      *(int *)p_Var8 = *(int *)p_Var8 + -1;
      UNLOCK();
    }
    else {
      iVar5 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar5 + -1;
    }
    if (iVar5 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
  lVar6 = *(long *)(this + 0x20);
LAB_0010c23f:
  uVar4 = *(undefined4 *)
           (*(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x10) + (int)*(long *)(this + 0x18) & 0x3ff) * 0x28);
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  *(long *)(this + 0x20) = lVar6 + -1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::LineCommentFilter::next() */

void __thiscall embree::LineCommentFilter::next(LineCommentFilter *this)

{
  Stream<int> *this_00;
  int *piVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0x50) != 0) {
    uVar2 = 0;
    do {
      piVar1 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
      this_00 = *(Stream<int> **)(this + 0x40);
      if (*piVar1 != (int)*(char *)(*(long *)(this + 0x48) + uVar2)) {
        if (*(ulong *)(this_00 + 0x18) < uVar2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + uVar2;
        *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - uVar2;
        Stream<int>::peek(this_00);
        goto LAB_0010c464;
      }
      Stream<int>::get(this_00);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(this + 0x50));
  }
  while( true ) {
    piVar1 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (*piVar1 == 10) {
      Stream<int>::get(*(Stream<int> **)(this + 0x40));
      return;
    }
    piVar1 = (int *)Stream<int>::peek(*(Stream<int> **)(this + 0x40));
    if (*piVar1 == -1) break;
    Stream<int>::get(*(Stream<int> **)(this + 0x40));
  }
LAB_0010c464:
  Stream<int>::get(*(Stream<int> **)(this + 0x40));
  return;
}



/* embree::Stream<embree::Token>::peek() */

long __thiscall embree::Stream<embree::Token>::peek(Stream<embree::Token> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var9;
  long in_FS_OFFSET;
  undefined8 local_108;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  long *local_e0;
  long local_d8;
  long local_d0 [2];
  undefined8 local_c0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  long *local_90 [2];
  long local_80 [2];
  undefined8 local_70;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(code **)(*(long *)this + 0x28) == TokenStream::location) {
      puVar6 = (undefined8 *)Stream<int>::loc(*(Stream<int> **)(this + 0x40));
      local_108 = *puVar6;
      local_100 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar6[1];
      if (local_100 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        }
      }
      local_f8 = puVar6[2];
      local_f0 = puVar6[3];
    }
    else {
      (**(code **)(*(long *)this + 0x28))(&local_108,this);
    }
    (**(code **)(*(long *)this + 0x20))(&local_e8,this);
    local_98 = local_e8;
    local_94 = local_e4;
    local_90[0] = local_80;
    std::__cxx11::string::_M_construct<char*>(local_90,local_e0,local_d8 + (long)local_e0);
    local_70 = local_c0;
    local_68 = local_b8;
    if (local_b8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      }
    }
    local_60 = local_b0;
    local_58 = local_a8;
    local_50 = local_108;
    local_48 = local_100;
    if (local_100 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      }
    }
    local_40 = local_f8;
    local_38 = local_f0;
    if (local_b8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var9 = local_b8 + 8;
      if (*(long *)(local_b8 + 8) == 0x100000001) {
        *(undefined8 *)(local_b8 + 8) = 0;
        (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
        (**(code **)(*(long *)local_b8 + 0x18))(local_b8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var9;
          *(int *)p_Var9 = *(int *)p_Var9 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_b8 + 8);
          *(int *)(local_b8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_b8);
        }
      }
    }
    if (local_e0 != local_d0) {
      operator_delete(local_e0,local_d0[0] + 1);
    }
    p_Var9 = local_100;
    if (local_100 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_100 + 8;
      if (*(long *)(local_100 + 8) == 0x100000001) {
        *(undefined8 *)(local_100 + 8) = 0;
        (**(code **)(*(long *)local_100 + 0x10))(local_100);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_100 + 8);
          *(int *)(local_100 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_100);
        }
      }
    }
    lVar7 = *(long *)(this + 0x18);
    lVar4 = *(long *)(this + 0x20);
    if (lVar7 + lVar4 == 0x400) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = lVar7 + -1;
      *(long *)(this + 0x18) = lVar7;
      uVar8 = (int)*(undefined8 *)(this + 0x10) + 1U & 0x3ff;
      *(ulong *)(this + 0x10) = (ulong)uVar8;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(this + 0x10);
    }
    *(long *)(this + 0x20) = lVar4 + 1;
    puVar3 = (undefined4 *)
             (*(long *)(this + 0x28) + (ulong)((int)lVar7 + uVar8 + (int)lVar4 & 0x3ff) * 0x68);
    *puVar3 = local_98;
    puVar3[1] = local_94;
    std::__cxx11::string::_M_assign((string *)(puVar3 + 2));
    p_Var1 = local_68;
    p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
    *(undefined8 *)(puVar3 + 10) = local_70;
    if (local_68 != p_Var9) {
      if (local_68 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
        else {
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
      }
      if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var9 + 8;
        if (*(long *)(p_Var9 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var9 + 8) = 0;
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var9 + 8);
            *(int *)(p_Var9 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc) = p_Var1;
    }
    p_Var1 = local_48;
    p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
    *(undefined8 *)(puVar3 + 0xe) = local_60;
    *(undefined8 *)(puVar3 + 0x10) = local_58;
    *(undefined8 *)(puVar3 + 0x12) = local_50;
    if (local_48 != p_Var9) {
      if (local_48 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
        else {
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
      }
      if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var9 + 8;
        if (*(long *)(p_Var9 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var9 + 8) = 0;
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var9 + 8);
            *(int *)(p_Var9 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14) = p_Var1;
      p_Var9 = local_48;
    }
    *(undefined8 *)(puVar3 + 0x16) = local_40;
    *(undefined8 *)(puVar3 + 0x18) = local_38;
    if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var9 + 8;
      if (*(long *)(p_Var9 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var9 + 8) = 0;
        (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var9 + 8);
          *(int *)(p_Var9 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
        }
      }
    }
    p_Var9 = local_68;
    if (local_68 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_68 + 8;
      if (*(long *)(local_68 + 8) == 0x100000001) {
        *(undefined8 *)(local_68 + 8) = 0;
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_68 + 8);
          *(int *)(local_68 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_68);
        }
      }
    }
    if (local_90[0] != local_80) {
      operator_delete(local_90[0],local_80[0] + 1);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::Stream<embree::Token>::get() */

void embree::Stream<embree::Token>::get(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long *in_RSI;
  undefined4 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var9;
  long in_FS_OFFSET;
  undefined8 local_118;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  long *local_f0;
  long local_e8;
  long local_e0 [2];
  undefined8 local_d0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  long *local_a0 [2];
  long local_90 [2];
  undefined8 local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RSI[4] == 0) {
    if (*(code **)(*in_RSI + 0x28) == TokenStream::location) {
      puVar6 = (undefined8 *)Stream<int>::loc((Stream<int> *)in_RSI[8]);
      local_118 = *puVar6;
      local_110 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)puVar6[1];
      if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        }
      }
      local_108 = puVar6[2];
      local_100 = puVar6[3];
    }
    else {
      (**(code **)(*in_RSI + 0x28))(&local_118);
    }
    (**(code **)(*in_RSI + 0x20))(&local_f8);
    local_a8 = local_f8;
    local_a4 = local_f4;
    local_a0[0] = local_90;
    std::__cxx11::string::_M_construct<char*>(local_a0,local_f0,local_e8 + (long)local_f0);
    local_80 = local_d0;
    local_78 = local_c8;
    if (local_c8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
      }
    }
    local_70 = local_c0;
    local_68 = local_b8;
    local_60 = local_118;
    local_58 = local_110;
    if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
      }
    }
    local_50 = local_108;
    local_48 = local_100;
    if (local_c8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var9 = local_c8 + 8;
      if (*(long *)(local_c8 + 8) == 0x100000001) {
        *(undefined8 *)(local_c8 + 8) = 0;
        (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
        (**(code **)(*(long *)local_c8 + 0x18))(local_c8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var9;
          *(int *)p_Var9 = *(int *)p_Var9 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_c8 + 8);
          *(int *)(local_c8 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c8);
        }
      }
    }
    if (local_f0 != local_e0) {
      operator_delete(local_f0,local_e0[0] + 1);
    }
    p_Var9 = local_110;
    if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var3 = local_110 + 8;
      if (*(long *)(local_110 + 8) == 0x100000001) {
        *(undefined8 *)(local_110 + 8) = 0;
        (**(code **)(*(long *)local_110 + 0x10))(local_110);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var3;
          *(int *)p_Var3 = *(int *)p_Var3 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_110 + 8);
          *(int *)(local_110 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_110);
        }
      }
    }
    lVar7 = in_RSI[3];
    lVar4 = in_RSI[4];
    if (lVar7 + lVar4 == 0x400) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = lVar7 + -1;
      in_RSI[3] = lVar7;
      uVar8 = (int)in_RSI[2] + 1U & 0x3ff;
      in_RSI[2] = (ulong)uVar8;
    }
    else {
      uVar8 = (uint)in_RSI[2];
    }
    in_RSI[4] = lVar4 + 1;
    puVar2 = (undefined4 *)(in_RSI[5] + (ulong)((int)lVar7 + uVar8 + (int)lVar4 & 0x3ff) * 0x68);
    *puVar2 = local_a8;
    puVar2[1] = local_a4;
    std::__cxx11::string::_M_assign((string *)(puVar2 + 2));
    p_Var3 = local_78;
    p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0xc);
    *(undefined8 *)(puVar2 + 10) = local_80;
    if (local_78 != p_Var9) {
      if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0xc);
        }
        else {
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0xc);
        }
      }
      if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var9 + 8;
        if (*(long *)(p_Var9 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var9 + 8) = 0;
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var9 + 8);
            *(int *)(p_Var9 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0xc) = p_Var3;
    }
    p_Var3 = local_58;
    p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0x14);
    *(undefined8 *)(puVar2 + 0xe) = local_70;
    *(undefined8 *)(puVar2 + 0x10) = local_68;
    *(undefined8 *)(puVar2 + 0x12) = local_60;
    if (local_58 != p_Var9) {
      if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0x14);
        }
        else {
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0x14);
        }
      }
      if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var9 + 8;
        if (*(long *)(p_Var9 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var9 + 8) = 0;
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar5 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar5 = *(int *)(p_Var9 + 8);
            *(int *)(p_Var9 + 8) = iVar5 + -1;
          }
          if (iVar5 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 0x14) = p_Var3;
      p_Var9 = local_58;
    }
    *(undefined8 *)(puVar2 + 0x16) = local_50;
    *(undefined8 *)(puVar2 + 0x18) = local_48;
    if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var3 = p_Var9 + 8;
      if (*(long *)(p_Var9 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var9 + 8) = 0;
        (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var3;
          *(int *)p_Var3 = *(int *)p_Var3 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(p_Var9 + 8);
          *(int *)(p_Var9 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
        }
      }
    }
    p_Var9 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var3 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar5 = *(int *)p_Var3;
          *(int *)p_Var3 = *(int *)p_Var3 + -1;
          UNLOCK();
        }
        else {
          iVar5 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0[0] != local_90) {
      operator_delete(local_a0[0],local_90[0] + 1);
    }
  }
  puVar2 = (undefined4 *)(in_RSI[5] + (ulong)((int)in_RSI[3] + (int)in_RSI[2] & 0x3ff) * 0x68);
  *in_RDI = *puVar2;
  in_RDI[1] = puVar2[1];
  *(undefined4 **)(in_RDI + 2) = in_RDI + 6;
  std::__cxx11::string::_M_construct<char*>
            (in_RDI + 2,*(long *)(puVar2 + 2),*(long *)(puVar2 + 4) + *(long *)(puVar2 + 2));
  *(undefined8 *)(in_RDI + 10) = *(undefined8 *)(puVar2 + 10);
  lVar7 = *(long *)(puVar2 + 0xc);
  *(long *)(in_RDI + 0xc) = lVar7;
  if (lVar7 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
  }
  *(undefined8 *)(in_RDI + 0xe) = *(undefined8 *)(puVar2 + 0xe);
  *(undefined8 *)(in_RDI + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  in_RSI[3] = in_RSI[3] + 1;
  in_RSI[4] = in_RSI[4] + -1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<RTCError*, std::allocator<RTCError*> >::_M_realloc_insert<RTCError*
   const&>(__gnu_cxx::__normal_iterator<RTCError**, std::vector<RTCError*, std::allocator<RTCError*>
   > >, RTCError* const&) */

void __thiscall
std::vector<RTCError*,std::allocator<RTCError*>>::_M_realloc_insert<RTCError*const&>
          (vector<RTCError*,std::allocator<RTCError*>> *this,void *param_2,undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_0010d4e0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_0010d4e0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_0010d469;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_0010d469:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,void *param_2,
          long *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  uVar3 = (long)pvVar1 - (long)pvVar2 >> 5;
  if (uVar3 == 0x3ffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar2 == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_0010d6a0;
    uVar7 = 0x3ffffffffffffff;
    if (uVar3 + 1 < 0x400000000000000) {
      uVar7 = uVar3 + 1;
    }
    uVar7 = uVar7 << 5;
LAB_0010d6aa:
    plVar5 = (long *)operator_new(uVar7);
    lVar11 = uVar7 + (long)plVar5;
    plVar4 = plVar5 + 4;
  }
  else {
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar3) {
LAB_0010d6a0:
      uVar7 = 0x7fffffffffffffe0;
      goto LAB_0010d6aa;
    }
    if (uVar7 != 0) {
      if (0x3ffffffffffffff < uVar7) {
        uVar7 = 0x3ffffffffffffff;
      }
      uVar7 = uVar7 << 5;
      goto LAB_0010d6aa;
    }
    plVar4 = (long *)0x20;
    lVar11 = 0;
    plVar5 = (long *)0x0;
  }
  plVar8 = (long *)(((long)param_2 - (long)pvVar2) + (long)plVar5);
  plVar9 = param_3 + 2;
  *plVar8 = (long)(plVar8 + 2);
  if ((long *)*param_3 == plVar9) {
    lVar14 = param_3[1];
    uVar3 = lVar14 + 1;
    uVar12 = (uint)uVar3;
    if (uVar12 < 8) {
      if ((uVar3 & 4) != 0) {
        *(int *)(plVar8 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar3 & 0xffffffff) + 0xc);
        lVar14 = param_3[1];
        goto LAB_0010d5fa;
      }
      if (uVar12 == 0) goto LAB_0010d5fa;
      *(char *)(plVar8 + 2) = (char)param_3[2];
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xe) =
             *(undefined2 *)((long)param_3 + (uVar3 & 0xffffffff) + 0xe);
        lVar14 = param_3[1];
        goto LAB_0010d5fa;
      }
    }
    else {
      plVar8[2] = param_3[2];
      *(undefined8 *)((long)plVar8 + (uVar3 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar3 & 0xffffffff) + 8);
      lVar14 = (long)(plVar8 + 2) - ((ulong)(plVar8 + 3) & 0xfffffffffffffff8);
      uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
      if (7 < uVar12) {
        uVar13 = 0;
        do {
          uVar3 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(plVar8 + 3) & 0xfffffffffffffff8) + uVar3) =
               *(undefined8 *)((long)plVar9 + (uVar3 - lVar14));
        } while (uVar13 < uVar12);
        lVar14 = param_3[1];
        goto LAB_0010d5fa;
      }
    }
  }
  else {
    *plVar8 = *param_3;
    plVar8[2] = param_3[2];
  }
  lVar14 = param_3[1];
LAB_0010d5fa:
  plVar8[1] = lVar14;
  *param_3 = (long)plVar9;
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar2) {
    plVar9 = (long *)((long)pvVar2 + 0x10);
    plVar8 = plVar5;
    do {
      plVar4 = plVar8;
      plVar8 = plVar4 + 2;
      *plVar4 = (long)plVar8;
      if (plVar9 == (long *)plVar9[-2]) {
        uVar3 = plVar9[-1] + 1;
        uVar12 = (uint)uVar3;
        if (uVar12 < 8) {
          if ((uVar3 & 4) == 0) {
            if ((uVar12 != 0) && (*(char *)plVar8 = (char)*plVar9, (uVar3 & 2) != 0)) {
              *(undefined2 *)((long)plVar4 + (uVar3 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar8 = (int)*plVar9;
            *(undefined4 *)((long)plVar4 + (uVar3 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar8 = *plVar9;
          *(undefined8 *)((long)plVar4 + (uVar3 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 8));
          lVar14 = (long)plVar8 - ((ulong)(plVar4 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar3 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar4 + 3) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((long)plVar9 + (uVar3 - lVar14));
            } while (uVar13 < uVar12);
          }
        }
      }
      else {
        *plVar4 = plVar9[-2];
        plVar4[2] = *plVar9;
      }
      plVar8 = plVar9 + -1;
      plVar9 = plVar9 + 4;
      plVar4[1] = *plVar8;
      plVar8 = plVar4 + 4;
    } while (plVar4 + 4 != (long *)(((long)param_2 - (long)pvVar2) + (long)plVar5));
    plVar4 = plVar4 + 8;
  }
  if (param_2 != pvVar1) {
    plVar9 = (long *)((long)param_2 + 0x10);
    plVar10 = (long *)(((long)pvVar1 - (long)param_2) + (long)plVar4);
    plVar8 = plVar4;
    do {
      plVar4 = plVar8 + 2;
      *plVar8 = (long)plVar4;
      if (plVar9 == (long *)plVar9[-2]) {
        uVar3 = plVar9[-1] + 1;
        uVar12 = (uint)uVar3;
        if (uVar12 < 8) {
          if ((uVar3 & 4) == 0) {
            if ((uVar12 != 0) && (*(char *)plVar4 = (char)*plVar9, (uVar3 & 2) != 0)) {
              *(undefined2 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar4 = (int)*plVar9;
            *(undefined4 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar4 = *plVar9;
          *(undefined8 *)((long)plVar8 + (uVar3 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar9 + ((uVar3 & 0xffffffff) - 8));
          lVar14 = (long)plVar4 - ((ulong)(plVar8 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar3 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar8 + 3) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((long)plVar9 + (uVar3 - lVar14));
            } while (uVar13 < uVar12);
          }
        }
      }
      else {
        *plVar8 = plVar9[-2];
        plVar8[2] = *plVar9;
      }
      plVar4 = plVar9 + -1;
      plVar6 = plVar8 + 4;
      plVar9 = plVar9 + 4;
      plVar8[1] = *plVar4;
      plVar8 = plVar6;
      plVar4 = plVar10;
    } while (plVar10 != plVar6);
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
  }
  *(long **)this = plVar5;
  *(long **)(this + 8) = plVar4;
  *(long *)(this + 0x10) = lVar11;
  return;
}



/* embree::g_printMutex */

void embree::_GLOBAL__sub_I_g_printMutex(void)

{
  embree::MutexSys::MutexSys((MutexSys *)&g_printMutex);
  __cxa_atexit(embree::MutexSys::~MutexSys,&g_printMutex,&__dso_handle);
  State::ErrorHandler::ErrorHandler((ErrorHandler *)State::g_errorHandler);
  __cxa_atexit(State::ErrorHandler::~ErrorHandler,State::g_errorHandler,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::FileStream::~FileStream() */

void __thiscall embree::FileStream::~FileStream(FileStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::Token::~Token() */

void __thiscall embree::Token::~Token(Token *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::LineCommentFilter::~LineCommentFilter() */

void __thiscall embree::LineCommentFilter::~LineCommentFilter(LineCommentFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::StrStream::~StrStream() */

void __thiscall embree::StrStream::~StrStream(StrStream *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Sp_counted_ptr<std::__cxx11::string*, (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr() */

void __thiscall
std::_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr
          (_Sp_counted_ptr<std::__cxx11::string*,(__gnu_cxx::_Lock_policy)2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


