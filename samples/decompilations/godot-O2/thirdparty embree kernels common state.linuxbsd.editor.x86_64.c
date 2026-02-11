
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
LAB_00100073:
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
    if (psVar6 == (string *)0x0) goto LAB_00100073;
    *(string **)param_1 = psVar6;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    psVar4 = psVar6;
    goto LAB_00100045;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  if (this == param_1) {
LAB_00100045:
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
          goto LAB_001000d8;
        }
        if (uVar3 == 0) goto LAB_001000d8;
        *psVar6 = *psVar4;
        if ((uVar9 & 2) != 0) {
          *(undefined2 *)(psVar6 + (uVar5 - 2)) = *(undefined2 *)(psVar4 + (uVar5 - 2));
          psVar6 = *(string **)this;
          uVar9 = *(ulong *)(param_1 + 8);
          goto LAB_001000d8;
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
LAB_001000d8:
  *(ulong *)(this + 8) = uVar9;
  psVar6[uVar9] = (string)0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  **(undefined1 **)param_1 = 0;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::endl<char, std::char_traits<char> >(std::ostream&) [clone .isra.0] */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
  long *plVar1;
  void *pvVar2;
  ostream *poVar3;
  long lVar4;
  ostream *extraout_RAX;
  long lVar5;
  ulong uVar6;
  
  plVar1 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)param_1);
    poVar3 = (ostream *)std::ostream::flush();
    return poVar3;
  }
  std::__throw_bad_cast();
  uVar6 = 0;
  embree::MutexSys::lock();
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 8);
  if (lVar5 != lVar4) {
    do {
      pvVar2 = *(void **)(lVar4 + uVar6 * 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2,4);
        lVar5 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(param_1 + 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
  }
  embree::destroyTls(*(opaque_tls_t **)param_1);
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
  }
  embree::MutexSys::unlock();
  poVar3 = (ostream *)embree::MutexSys::~MutexSys((MutexSys *)(param_1 + 0x20));
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 == (void *)0x0) {
    return poVar3;
  }
  operator_delete(pvVar2,*(long *)(param_1 + 0x18) - (long)pvVar2);
  return extraout_RAX;
}



/* embree::State::ErrorHandler::~ErrorHandler() */

void __thiscall embree::State::ErrorHandler::~ErrorHandler(ErrorHandler *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = 0;
  embree::MutexSys::lock();
  lVar3 = *(long *)(this + 0x10);
  lVar2 = *(long *)(this + 8);
  if (lVar3 != lVar2) {
    do {
      pvVar1 = *(void **)(lVar2 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,4);
        lVar3 = *(long *)(this + 0x10);
        lVar2 = *(long *)(this + 8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar3 - lVar2 >> 3));
  }
  embree::destroyTls(*(opaque_tls_t **)this);
  if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
    *(long *)(this + 0x10) = *(long *)(this + 8);
  }
  embree::MutexSys::unlock();
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x20));
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1,*(long *)(this + 0x18) - (long)pvVar1);
  return;
}



/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */

char * __thiscall
std::__cxx11::string::string<std::allocator<char>>(string *this,char *param_1,allocator *param_2)

{
  ulong *__src;
  size_t __n;
  string *__dest;
  char *__dest_00;
  ulong __n_00;
  ulong __n_01;
  char *pcVar1;
  long in_FS_OFFSET;
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong auStack_80 [3];
  long lStack_68;
  size_t local_38;
  long local_30;
  
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(string **)this = __dest;
  if (param_1 != (char *)0x0) {
    __n = strlen(param_1);
    local_38 = __n;
    if (__n < 0x10) {
      if (__n == 1) {
        this[0x10] = (string)*param_1;
        goto LAB_00100323;
      }
      if (__n == 0) goto LAB_00100323;
    }
    else {
      __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_38);
      *(string **)this = __dest;
      *(size_t *)(this + 0x10) = local_38;
    }
    memcpy(__dest,param_1,__n);
    __dest = *(string **)this;
LAB_00100323:
    *(size_t *)(this + 8) = local_38;
    __dest[local_38] = (string)0x0;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (char *)0x0;
  }
  pcVar1 = "basic_string: construction from null is not valid";
  std::__throw_logic_error("basic_string: construction from null is not valid");
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_90 = auStack_80;
  uStack_98 = __n_00;
  if (__n_00 < 0x10) {
    if (__n_00 == 1) {
      auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,*param_1);
      __n_01 = __n_00;
    }
    else {
      __n_01 = __n_00;
      if (__n_00 != 0) goto LAB_001004fb;
    }
  }
  else {
    puStack_90 = (ulong *)std::__cxx11::string::_M_create((ulong *)&puStack_90,(ulong)&uStack_98);
    auStack_80[0] = uStack_98;
LAB_001004fb:
    memcpy(puStack_90,param_1,__n_00);
    __n_01 = uStack_98;
  }
  __src = puStack_90;
  __dest_00 = pcVar1 + 0x18;
  *(undefined1 *)((long)puStack_90 + __n_01) = 0;
  pcVar1[0] = '\x04';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(char **)(pcVar1 + 8) = __dest_00;
  uStack_98 = __n_01;
  uStack_88 = __n_01;
  if (__n_01 < 0x10) {
    if (__n_01 == 1) {
      pcVar1[0x18] = (char)*puStack_90;
      goto LAB_00100446;
    }
    if (__n_01 == 0) goto LAB_00100446;
  }
  else {
    __dest_00 = (char *)std::__cxx11::string::_M_create((ulong *)(pcVar1 + 8),(ulong)&uStack_98);
    *(char **)(pcVar1 + 8) = __dest_00;
    *(ulong *)(pcVar1 + 0x18) = uStack_98;
  }
  memcpy(__dest_00,__src,__n_01);
  __dest_00 = *(char **)(pcVar1 + 8);
LAB_00100446:
  *(ulong *)(pcVar1 + 0x10) = uStack_98;
  __dest_00[uStack_98] = '\0';
  pcVar1[0x28] = '\0';
  pcVar1[0x29] = '\0';
  pcVar1[0x2a] = '\0';
  pcVar1[0x2b] = '\0';
  pcVar1[0x2c] = '\0';
  pcVar1[0x2d] = '\0';
  pcVar1[0x2e] = '\0';
  pcVar1[0x2f] = '\0';
  pcVar1[0x30] = '\0';
  pcVar1[0x31] = '\0';
  pcVar1[0x32] = '\0';
  pcVar1[0x33] = '\0';
  pcVar1[0x34] = '\0';
  pcVar1[0x35] = '\0';
  pcVar1[0x36] = '\0';
  pcVar1[0x37] = '\0';
  pcVar1[0x38] = -1;
  pcVar1[0x39] = -1;
  pcVar1[0x3a] = -1;
  pcVar1[0x3b] = -1;
  pcVar1[0x3c] = -1;
  pcVar1[0x3d] = -1;
  pcVar1[0x3e] = -1;
  pcVar1[0x3f] = -1;
  pcVar1[0x40] = -1;
  pcVar1[0x41] = -1;
  pcVar1[0x42] = -1;
  pcVar1[0x43] = -1;
  pcVar1[0x44] = -1;
  pcVar1[0x45] = -1;
  pcVar1[0x46] = -1;
  pcVar1[0x47] = -1;
  if (puStack_90 != auStack_80) {
    operator_delete(puStack_90,auStack_80[0] + 1);
  }
  if (lStack_68 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar1;
}



/* embree::Token::Id(std::__cxx11::string) [clone .isra.0] */

undefined4 * embree::Token::Id(undefined4 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong *__src;
  undefined4 *__dest;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = local_48;
  local_60 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,*param_2);
    }
    else if (param_3 != 0) goto LAB_001004fb;
  }
  else {
    local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
LAB_001004fb:
    memcpy(local_58,param_2,param_3);
    param_3 = local_60;
  }
  __src = local_58;
  __dest = param_1 + 6;
  *(undefined1 *)((long)local_58 + param_3) = 0;
  *param_1 = 4;
  *(undefined4 **)(param_1 + 2) = __dest;
  local_60 = param_3;
  local_50 = param_3;
  if (param_3 < 0x10) {
    if (param_3 == 1) {
      *(char *)(param_1 + 6) = (char)*local_58;
      goto LAB_00100446;
    }
    if (param_3 == 0) goto LAB_00100446;
  }
  else {
    __dest = (undefined4 *)std::__cxx11::string::_M_create((ulong *)(param_1 + 2),(ulong)&local_60);
    *(undefined4 **)(param_1 + 2) = __dest;
    *(ulong *)(param_1 + 6) = local_60;
  }
  memcpy(__dest,__src,param_3);
  __dest = *(undefined4 **)(param_1 + 2);
LAB_00100446:
  *(ulong *)(param_1 + 4) = local_60;
  *(undefined1 *)((long)__dest + local_60) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* embree::State::~State() */

void __thiscall embree::State::~State(State *this)

{
  *(undefined ***)this = &PTR__State_0010f510;
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
  
  *(undefined ***)this = &PTR__State_0010f510;
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
  std::__cxx11::string::_M_replace((ulong)(this + 0x10),0,*(char **)(this + 0x18),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x30),0,*(char **)(this + 0x38),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x50),0,*(char **)(this + 0x58),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x70),0,*(char **)(this + 0x78),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x90),0,*(char **)(this + 0x98),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xb0),0,*(char **)(this + 0xb8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xd0),0,*(char **)(this + 0xd8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0xf0),0,*(char **)(this + 0xf8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x110),0,*(char **)(this + 0x118),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x130),0,*(char **)(this + 0x138),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x150),0,*(char **)(this + 0x158),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x170),0,*(char **)(this + 0x178),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 400),0,*(char **)(this + 0x198),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1b0),0,*(char **)(this + 0x1b8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1d0),0,*(char **)(this + 0x1d8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x1f0),0,*(char **)(this + 0x1f8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x210),0,*(char **)(this + 0x218),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x230),0,*(char **)(this + 0x238),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x250),0,*(char **)(this + 600),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x270),0,*(char **)(this + 0x278),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x290),0,*(char **)(this + 0x298),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2b0),0,*(char **)(this + 0x2b8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2d0),0,*(char **)(this + 0x2d8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x2f0),0,*(char **)(this + 0x2f8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x310),0,*(char **)(this + 0x318),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x330),0,*(char **)(this + 0x338),0x10aa9c);
  *(undefined8 *)(this + 0x350) = 0x100000001;
  std::__cxx11::string::_M_replace((ulong)(this + 0x358),0,*(char **)(this + 0x360),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x378),0,*(char **)(this + 0x380),0x10aa9c);
  *(undefined8 *)(this + 0x398) = 0x100000001;
  *(undefined4 *)(this + 0x460) = 0x3f99999a;
  this[0x464] = (State)0x0;
  *(undefined8 *)(this + 0x468) = 0x8000000;
  std::__cxx11::string::_M_replace((ulong)(this + 0x3a0),0,*(char **)(this + 0x3a8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x3c0),0,*(char **)(this + 0x3c8),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x3e0),0,*(char **)(this + 1000),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x400),0,*(char **)(this + 0x408),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x420),0,*(char **)(this + 0x428),0x10aa9c);
  std::__cxx11::string::_M_replace((ulong)(this + 0x440),0,*(char **)(this + 0x448),0x10aa9c);
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



/* WARNING: Removing unreachable block (ram,0x001044d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::print() */

void __thiscall embree::State::print(State *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined4 *puVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  size_t __n;
  string *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong __n_00;
  char cVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  ostream *poVar17;
  long lVar18;
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
  allocator *paVar19;
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
  allocator *extraout_RDX_x00179;
  allocator *extraout_RDX_x00180;
  allocator *extraout_RDX_x00181;
  allocator *extraout_RDX_x00182;
  allocator *extraout_RDX_x00183;
  allocator *extraout_RDX_x00184;
  allocator *extraout_RDX_x00185;
  allocator *extraout_RDX_x00186;
  allocator *extraout_RDX_x00187;
  allocator *extraout_RDX_x00188;
  allocator *extraout_RDX_x00189;
  allocator *extraout_RDX_x00190;
  allocator *extraout_RDX_x00191;
  long *plVar20;
  Token *this_00;
  char *pcVar21;
  ostream *poVar22;
  char *unaff_R13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var23;
  char *unaff_R14;
  ostream *unaff_R15;
  long in_FS_OFFSET;
  float fVar24;
  ulong uStack_a28;
  undefined8 uStack_a20;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  int iStack_a00;
  float fStack_9fc;
  undefined1 *puStack_9f8;
  size_t sStack_9f0;
  undefined1 uStack_9e8;
  undefined7 uStack_9e7;
  undefined8 uStack_9d8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  int aiStack_9b0 [2];
  long *plStack_9a8;
  long lStack_9a0;
  long alStack_998 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_980;
  int iStack_960;
  int iStack_95c;
  long *plStack_958;
  long alStack_948 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_930;
  int iStack_910;
  int iStack_90c;
  long *plStack_908;
  long alStack_8f8 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_8e0;
  int iStack_8c0;
  int iStack_8bc;
  int iStack_870;
  int iStack_86c;
  int iStack_820;
  int iStack_81c;
  int iStack_7d0;
  int iStack_7cc;
  int iStack_780;
  int iStack_77c;
  int iStack_730;
  int iStack_72c;
  int iStack_6e0;
  undefined4 uStack_6dc;
  int iStack_690;
  undefined4 uStack_68c;
  int iStack_640;
  undefined4 uStack_63c;
  int iStack_5f0;
  undefined4 uStack_5ec;
  int iStack_5a0;
  int iStack_59c;
  int iStack_550;
  int iStack_54c;
  int iStack_500;
  int iStack_4fc;
  int iStack_4b0;
  float fStack_4ac;
  int iStack_460;
  int iStack_45c;
  int iStack_410;
  int iStack_40c;
  int iStack_3c0;
  int iStack_3bc;
  int iStack_370;
  float fStack_36c;
  int iStack_320;
  int iStack_31c;
  int iStack_2d0;
  float fStack_2cc;
  int iStack_280;
  float fStack_27c;
  int iStack_230;
  int iStack_22c;
  undefined8 uStack_228;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  uint uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  ulong uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_118;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  
  pcVar21 = "general:";
  plVar20 = &std::cout;
  poVar22 = (ostream *)&std::cout;
  poStack_50 = (ostream *)0x1017f0;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"general:",8);
  pcVar16 = *(char **)(std::__basic_file<char>::is_open + *(long *)(std::cout + -0x18));
  if ((ostream *)pcVar16 != (ostream *)0x0) {
    if (((ostream *)pcVar16)[0x38] == (ostream)0x0) {
      poStack_50 = (ostream *)0x102c90;
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*(long *)pcVar16 + 0x30) != std::ctype<char>::do_widen) {
        poStack_50 = (ostream *)0x102cb2;
        (**(code **)(*(long *)pcVar16 + 0x30))(pcVar16,10);
      }
    }
    poStack_50 = (ostream *)0x101826;
    std::ostream::put(-0x50);
    poStack_50 = (ostream *)0x10182e;
    std::ostream::flush();
    poStack_50 = (ostream *)0x101842;
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"  build threads      = ",0x17);
    pcVar21 = *(char **)(this + 0x4b8);
    poVar22 = (ostream *)&std::cout;
    poStack_50 = (ostream *)0x101851;
    pcVar16 = (char *)std::ostream::_M_insert<unsigned_long>(0x1100b0);
    unaff_R13 = *(char **)((ostream *)pcVar16 + *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
    if ((ostream *)unaff_R13 != (ostream *)0x0) {
      if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
        poStack_50 = (ostream *)0x102cc8;
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
          poStack_50 = (ostream *)0x102cea;
          (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
        }
      }
      poStack_50 = (ostream *)0x101884;
      std::ostream::put((char)pcVar16);
      poStack_50 = (ostream *)0x10188c;
      std::ostream::flush();
      poStack_50 = (ostream *)0x1018a0;
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"  build user threads = ",0x17);
      pcVar21 = *(char **)(this + 0x4c0);
      poVar22 = (ostream *)&std::cout;
      poStack_50 = (ostream *)0x1018af;
      pcVar16 = (char *)std::ostream::_M_insert<unsigned_long>(0x1100b0);
      unaff_R13 = *(char **)((ostream *)pcVar16 + *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
      if ((ostream *)unaff_R13 != (ostream *)0x0) {
        if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
          poStack_50 = (ostream *)0x102d00;
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
            poStack_50 = (ostream *)0x102d22;
            (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
          }
        }
        poStack_50 = (ostream *)0x1018e2;
        std::ostream::put((char)pcVar16);
        poStack_50 = (ostream *)0x1018ea;
        std::ostream::flush();
        poStack_50 = (ostream *)0x1018fe;
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&std::cout,"  start_threads      = ",0x17);
        pcVar21 = (char *)(ulong)(byte)this[0x4c9];
        poVar22 = (ostream *)&std::cout;
        poStack_50 = (ostream *)0x10190d;
        pcVar16 = (char *)std::ostream::_M_insert<bool>(true);
        unaff_R13 = *(char **)((ostream *)pcVar16 + *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
        if ((ostream *)unaff_R13 != (ostream *)0x0) {
          if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
            poStack_50 = (ostream *)0x102d38;
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
              poStack_50 = (ostream *)0x102d5a;
              (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
            }
          }
          poStack_50 = (ostream *)0x101940;
          std::ostream::put((char)pcVar16);
          poStack_50 = (ostream *)0x101948;
          std::ostream::flush();
          poStack_50 = (ostream *)0x10195c;
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&std::cout,"  affinity           = ",0x17);
          pcVar21 = (char *)(ulong)(byte)this[0x4c8];
          poVar22 = (ostream *)&std::cout;
          poStack_50 = (ostream *)0x10196b;
          pcVar16 = (char *)std::ostream::_M_insert<bool>(true);
          unaff_R13 = *(char **)((ostream *)pcVar16 + *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
          if ((ostream *)unaff_R13 != (ostream *)0x0) {
            if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
              poStack_50 = (ostream *)0x102d70;
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                poStack_50 = (ostream *)0x102d92;
                (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
              }
            }
            poStack_50 = (ostream *)0x10199e;
            std::ostream::put((char)pcVar16);
            poStack_50 = (ostream *)0x1019a6;
            std::ostream::flush();
            poStack_50 = (ostream *)0x1019ba;
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&std::cout,"  frequency_level    = ",0x17);
            iVar14 = *(int *)(this + 0x4d4);
            if (iVar14 == 1) {
              poStack_50 = (ostream *)0x1039ac;
              std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"simd256",7);
              poStack_50 = (ostream *)0x1039b4;
              std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
            }
            else if (iVar14 == 2) {
              poStack_50 = (ostream *)0x102c74;
              std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"simd512",7);
              poStack_50 = (ostream *)0x102c7c;
              std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
            }
            else if (iVar14 == 0) {
              poStack_50 = (ostream *)0x1019ee;
              std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"simd128",7);
              poStack_50 = (ostream *)0x1019f6;
              std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
            }
            else {
              poStack_50 = (ostream *)0x103984;
              std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"error",5);
              poStack_50 = (ostream *)0x10398c;
              std::endl<char,std::char_traits<char>>((ostream *)&std::cout);
            }
            poStack_50 = (ostream *)0x101a0a;
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&std::cout,"  hugepages          = ",0x17);
            lVar18 = 8;
            pcVar21 = "disabled";
            if (this[0x4d9] != (State)0x0) {
              lVar18 = 7;
              pcVar21 = "enabled";
              if (this[0x4da] == (State)0x0) {
                lVar18 = 6;
                pcVar21 = "failed";
              }
            }
            poVar22 = (ostream *)&std::cout;
            poStack_50 = (ostream *)0x101a48;
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar21,lVar18)
            ;
            pcVar16 = *(char **)(std::__basic_file<char>::is_open + *(long *)(std::cout + -0x18));
            if ((ostream *)pcVar16 != (ostream *)0x0) {
              if (((ostream *)pcVar16)[0x38] == (ostream)0x0) {
                poStack_50 = (ostream *)0x102da8;
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*(long *)pcVar16 + 0x30) != std::ctype<char>::do_widen) {
                  poStack_50 = (ostream *)0x102dca;
                  (**(code **)(*(long *)pcVar16 + 0x30))(pcVar16,10);
                }
              }
              poStack_50 = (ostream *)0x101a7e;
              std::ostream::put(-0x50);
              poStack_50 = (ostream *)0x101a86;
              std::ostream::flush();
              poStack_50 = (ostream *)0x101a9a;
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)&std::cout,"  verbosity          = ",0x17);
              pcVar21 = *(char **)(this + 0x4a8);
              poVar22 = (ostream *)&std::cout;
              poStack_50 = (ostream *)0x101aa9;
              pcVar16 = (char *)std::ostream::_M_insert<unsigned_long>(0x1100b0);
              unaff_R13 = *(char **)((ostream *)pcVar16 + *(long *)(*(long *)pcVar16 + -0x18) + 0xf0
                                    );
              if ((ostream *)unaff_R13 != (ostream *)0x0) {
                if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                  poStack_50 = (ostream *)0x102de0;
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                    poStack_50 = (ostream *)0x102e02;
                    (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                  }
                }
                poStack_50 = (ostream *)0x101adc;
                std::ostream::put((char)pcVar16);
                poStack_50 = (ostream *)0x101ae4;
                std::ostream::flush();
                poStack_50 = (ostream *)0x101af8;
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)&std::cout,"  cache_size         = ",0x17);
                poStack_50 = (ostream *)0x101b25;
                pcVar16 = (char *)std::ostream::_M_insert<double>
                                            ((double)*(ulong *)(this + 0x468) * __LC28);
                pcVar21 = &_LC29;
                poStack_50 = (ostream *)0x101b3c;
                poVar22 = (ostream *)pcVar16;
                std::__ostream_insert<char,std::char_traits<char>>((ostream *)pcVar16," MB",3);
                unaff_R13 = *(char **)((ostream *)pcVar16 +
                                      *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
                if ((ostream *)unaff_R13 != (ostream *)0x0) {
                  if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                    poStack_50 = (ostream *)0x102e18;
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                      poStack_50 = (ostream *)0x102e3a;
                      (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                    }
                  }
                  poStack_50 = (ostream *)0x101b6d;
                  std::ostream::put((char)pcVar16);
                  poStack_50 = (ostream *)0x101b75;
                  std::ostream::flush();
                  pcVar21 = "  max_spatial_split_replications = ";
                  poStack_50 = (ostream *)0x101b89;
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&std::cout,"  max_spatial_split_replications = ",0x23);
                  poVar22 = (ostream *)&std::cout;
                  poStack_50 = (ostream *)0x101b9d;
                  pcVar16 = (char *)std::ostream::_M_insert<double>
                                              ((double)*(float *)(this + 0x460));
                  unaff_R13 = *(char **)((ostream *)pcVar16 +
                                        *(long *)(*(long *)pcVar16 + -0x18) + 0xf0);
                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0) {
                      poStack_50 = (ostream *)0x102e50;
                      std::ctype<char>::_M_widen_init();
                      if (*(code **)(*(long *)unaff_R13 + 0x30) != std::ctype<char>::do_widen) {
                        poStack_50 = (ostream *)0x102e72;
                        (**(code **)(*(long *)unaff_R13 + 0x30))(unaff_R13,10);
                      }
                    }
                    poStack_50 = (ostream *)0x101bd0;
                    std::ostream::put((char)pcVar16);
                    poStack_50 = (ostream *)0x101bd8;
                    std::ostream::flush();
                    pcVar21 = "triangles:";
                    poVar22 = (ostream *)&std::cout;
                    poStack_50 = (ostream *)0x101bec;
                    std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)&std::cout,"triangles:",10);
                    pcVar16 = *(char **)(std::__basic_file<char>::is_open +
                                        *(long *)(std::cout + -0x18));
                    if ((ostream *)pcVar16 != (ostream *)0x0) {
                      if (((ostream *)pcVar16)[0x38] == (ostream)0x0) {
                        poStack_50 = (ostream *)0x102e88;
                        std::ctype<char>::_M_widen_init();
                        if (*(code **)(*(long *)pcVar16 + 0x30) != std::ctype<char>::do_widen) {
                          poStack_50 = (ostream *)0x102eaa;
                          (**(code **)(*(long *)pcVar16 + 0x30))(pcVar16,10);
                        }
                      }
                      pcVar16 = "  accel              = ";
                      poStack_50 = (ostream *)0x101c29;
                      std::ostream::put(-0x50);
                      poStack_50 = (ostream *)0x101c31;
                      std::ostream::flush();
                      poStack_50 = (ostream *)0x101c41;
                      std::__ostream_insert<char,std::char_traits<char>>
                                ((ostream *)&std::cout,"  accel              = ",0x17);
                      pcVar21 = *(char **)(this + 0x10);
                      poVar22 = (ostream *)&std::cout;
                      poStack_50 = (ostream *)0x101c51;
                      poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)&std::cout,pcVar21,*(long *)(this + 0x18));
                      unaff_R14 = *(char **)(poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                      unaff_R13 = (char *)poVar17;
                      if ((ostream *)unaff_R14 != (ostream *)0x0) {
                        if (((ostream *)unaff_R14)[0x38] == (ostream)0x0) {
                          poStack_50 = (ostream *)0x102ec0;
                          std::ctype<char>::_M_widen_init();
                          if (*(code **)(*(long *)unaff_R14 + 0x30) != std::ctype<char>::do_widen) {
                            poStack_50 = (ostream *)0x102ee1;
                            (**(code **)(*(long *)unaff_R14 + 0x30))(unaff_R14,10);
                          }
                        }
                        unaff_R13 = "  builder            = ";
                        poStack_50 = (ostream *)0x101c8b;
                        std::ostream::put((char)poVar17);
                        poStack_50 = (ostream *)0x101c93;
                        std::ostream::flush();
                        poStack_50 = (ostream *)0x101ca3;
                        std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)&std::cout,"  builder            = ",0x17);
                        pcVar21 = *(char **)(this + 0x30);
                        poVar22 = (ostream *)&std::cout;
                        poStack_50 = (ostream *)0x101cb3;
                        poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,pcVar21,*(long *)(this + 0x38));
                        unaff_R15 = *(ostream **)
                                     (poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                        unaff_R14 = (char *)poVar17;
                        if (unaff_R15 != (ostream *)0x0) {
                          if (unaff_R15[0x38] == (ostream)0x0) {
                            poStack_50 = (ostream *)0x102ef8;
                            std::ctype<char>::_M_widen_init();
                            if (*(code **)(*(long *)unaff_R15 + 0x30) != std::ctype<char>::do_widen)
                            {
                              poStack_50 = (ostream *)0x102f19;
                              (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                            }
                          }
                          unaff_R14 = "  traverser          = ";
                          poStack_50 = (ostream *)0x101ced;
                          std::ostream::put((char)poVar17);
                          poStack_50 = (ostream *)0x101cf5;
                          std::ostream::flush();
                          poStack_50 = (ostream *)0x101d05;
                          std::__ostream_insert<char,std::char_traits<char>>
                                    ((ostream *)&std::cout,"  traverser          = ",0x17);
                          pcVar21 = *(char **)(this + 0x50);
                          poVar22 = (ostream *)&std::cout;
                          poStack_50 = (ostream *)0x101d15;
                          poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,pcVar21,*(long *)(this + 0x58))
                          ;
                          unaff_R15 = *(ostream **)
                                       (poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                          if (unaff_R15 != (ostream *)0x0) {
                            if (unaff_R15[0x38] == (ostream)0x0) {
                              poStack_50 = (ostream *)0x102f35;
                              local_40 = poVar17;
                              std::ctype<char>::_M_widen_init();
                              poVar17 = local_40;
                              if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                  std::ctype<char>::do_widen) {
                                poStack_50 = (ostream *)0x102f5b;
                                (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                poVar17 = local_40;
                              }
                            }
                            poStack_50 = (ostream *)0x101d48;
                            std::ostream::put((char)poVar17);
                            poStack_50 = (ostream *)0x101d50;
                            std::ostream::flush();
                            pcVar21 = "motion blur triangles:";
                            poVar22 = (ostream *)&std::cout;
                            poStack_50 = (ostream *)0x101d64;
                            std::__ostream_insert<char,std::char_traits<char>>
                                      ((ostream *)&std::cout,"motion blur triangles:",0x16);
                            unaff_R15 = *(ostream **)
                                         (std::__basic_file<char>::is_open +
                                         *(long *)(std::cout + -0x18));
                            if (unaff_R15 != (ostream *)0x0) {
                              if (unaff_R15[0x38] == (ostream)0x0) {
                                poStack_50 = (ostream *)0x102f78;
                                std::ctype<char>::_M_widen_init();
                                if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                    std::ctype<char>::do_widen) {
                                  poStack_50 = (ostream *)0x102f99;
                                  (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                }
                              }
                              poStack_50 = (ostream *)0x101d98;
                              std::ostream::put(-0x50);
                              poStack_50 = (ostream *)0x101da0;
                              std::ostream::flush();
                              poStack_50 = (ostream *)0x101db0;
                              std::__ostream_insert<char,std::char_traits<char>>
                                        ((ostream *)&std::cout,"  accel              = ",0x17);
                              pcVar21 = *(char **)(this + 0x70);
                              poStack_50 = (ostream *)0x101dc0;
                              unaff_R15 = std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,pcVar21,
                                                     *(long *)(this + 0x78));
                              poVar22 = *(ostream **)
                                         (unaff_R15 + *(long *)(*(long *)unaff_R15 + -0x18) + 0xf0);
                              if (poVar22 != (ostream *)0x0) {
                                if (poVar22[0x38] == (ostream)0x0) {
                                  poStack_50 = (ostream *)0x102fb2;
                                  local_40 = poVar22;
                                  std::ctype<char>::_M_widen_init();
                                  if (*(code **)(*(long *)local_40 + 0x30) !=
                                      std::ctype<char>::do_widen) {
                                    poStack_50 = (ostream *)0x102fd5;
                                    (**(code **)(*(long *)local_40 + 0x30))(local_40,10);
                                  }
                                }
                                poStack_50 = (ostream *)0x101df1;
                                std::ostream::put((char)unaff_R15);
                                poStack_50 = (ostream *)0x101df9;
                                std::ostream::flush();
                                poStack_50 = (ostream *)0x101e09;
                                std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)&std::cout,"  builder            = ",0x17);
                                pcVar21 = *(char **)(this + 0x90);
                                poVar22 = (ostream *)&std::cout;
                                poStack_50 = (ostream *)0x101e1f;
                                poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,pcVar21,
                                                     *(long *)(this + 0x98));
                                unaff_R15 = *(ostream **)
                                             (poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                                if (unaff_R15 != (ostream *)0x0) {
                                  if (unaff_R15[0x38] == (ostream)0x0) {
                                    poStack_50 = (ostream *)0x102fed;
                                    local_40 = poVar17;
                                    std::ctype<char>::_M_widen_init();
                                    poVar17 = local_40;
                                    if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                        std::ctype<char>::do_widen) {
                                      poStack_50 = (ostream *)0x103013;
                                      (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                      poVar17 = local_40;
                                    }
                                  }
                                  poStack_50 = (ostream *)0x101e52;
                                  std::ostream::put((char)poVar17);
                                  poStack_50 = (ostream *)0x101e5a;
                                  std::ostream::flush();
                                  poStack_50 = (ostream *)0x101e6a;
                                  std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)&std::cout,"  traverser          = ",0x17);
                                  pcVar21 = *(char **)(this + 0xb0);
                                  poVar22 = (ostream *)&std::cout;
                                  poStack_50 = (ostream *)0x101e80;
                                  poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,pcVar21,
                                                       *(long *)(this + 0xb8));
                                  unaff_R15 = *(ostream **)
                                               (poVar17 + *(long *)(*(long *)poVar17 + -0x18) + 0xf0
                                               );
                                  if (unaff_R15 != (ostream *)0x0) {
                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                      poStack_50 = (ostream *)0x10302d;
                                      local_40 = poVar17;
                                      std::ctype<char>::_M_widen_init();
                                      poVar17 = local_40;
                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                          std::ctype<char>::do_widen) {
                                        poStack_50 = (ostream *)0x103053;
                                        (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                        poVar17 = local_40;
                                      }
                                    }
                                    poStack_50 = (ostream *)0x101eb3;
                                    std::ostream::put((char)poVar17);
                                    poStack_50 = (ostream *)0x101ebb;
                                    std::ostream::flush();
                                    pcVar21 = "quads:";
                                    poVar22 = (ostream *)&std::cout;
                                    poStack_50 = (ostream *)0x101ecf;
                                    std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)&std::cout,"quads:",6);
                                    unaff_R15 = *(ostream **)
                                                 (std::__basic_file<char>::is_open +
                                                 *(long *)(std::cout + -0x18));
                                    if (unaff_R15 != (ostream *)0x0) {
                                      if (unaff_R15[0x38] == (ostream)0x0) {
                                        poStack_50 = (ostream *)0x103068;
                                        std::ctype<char>::_M_widen_init();
                                        if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                            std::ctype<char>::do_widen) {
                                          poStack_50 = (ostream *)0x103089;
                                          (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                        }
                                      }
                                      poStack_50 = (ostream *)0x101f03;
                                      std::ostream::put(-0x50);
                                      poStack_50 = (ostream *)0x101f0b;
                                      std::ostream::flush();
                                      poStack_50 = (ostream *)0x101f1b;
                                      std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)&std::cout,"  accel              = ",
                                                 0x17);
                                      pcVar21 = *(char **)(this + 0xd0);
                                      poVar22 = (ostream *)&std::cout;
                                      poStack_50 = (ostream *)0x101f31;
                                      poVar17 = std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)&std::cout,pcVar21,
                                                           *(long *)(this + 0xd8));
                                      unaff_R15 = *(ostream **)
                                                   (poVar17 +
                                                   *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                                      if (unaff_R15 != (ostream *)0x0) {
                                        if (unaff_R15[0x38] == (ostream)0x0) {
                                          poStack_50 = (ostream *)0x1030a5;
                                          local_40 = poVar17;
                                          std::ctype<char>::_M_widen_init();
                                          poVar17 = local_40;
                                          if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                              std::ctype<char>::do_widen) {
                                            poStack_50 = (ostream *)0x1030cb;
                                            (**(code **)(*(long *)unaff_R15 + 0x30))(unaff_R15,10);
                                            poVar17 = local_40;
                                          }
                                        }
                                        poStack_50 = (ostream *)0x101f64;
                                        std::ostream::put((char)poVar17);
                                        poStack_50 = (ostream *)0x101f6c;
                                        std::ostream::flush();
                                        poStack_50 = (ostream *)0x101f7c;
                                        std::__ostream_insert<char,std::char_traits<char>>
                                                  ((ostream *)&std::cout,"  builder            = ",
                                                   0x17);
                                        pcVar21 = *(char **)(this + 0xf0);
                                        poStack_50 = (ostream *)0x101f92;
                                        unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0xf8));
                                        poVar22 = *(ostream **)
                                                   (unaff_R15 +
                                                   *(long *)(*(long *)unaff_R15 + -0x18) + 0xf0);
                                        if (poVar22 != (ostream *)0x0) {
                                          if (poVar22[0x38] == (ostream)0x0) {
                                            poStack_50 = (ostream *)0x1030ea;
                                            local_40 = poVar22;
                                            std::ctype<char>::_M_widen_init();
                                            if (*(code **)(*(long *)local_40 + 0x30) !=
                                                std::ctype<char>::do_widen) {
                                              poStack_50 = (ostream *)0x10310d;
                                              (**(code **)(*(long *)local_40 + 0x30))(local_40,10);
                                            }
                                          }
                                          poStack_50 = (ostream *)0x101fc3;
                                          std::ostream::put((char)unaff_R15);
                                          poStack_50 = (ostream *)0x101fcb;
                                          std::ostream::flush();
                                          poStack_50 = (ostream *)0x101fdb;
                                          std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)&std::cout,"  traverser          = "
                                                     ,0x17);
                                          pcVar21 = *(char **)(this + 0x110);
                                          poVar22 = (ostream *)&std::cout;
                                          poStack_50 = (ostream *)0x101ff1;
                                          poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x118));
                                          unaff_R15 = *(ostream **)
                                                       (poVar17 +
                                                       *(long *)(*(long *)poVar17 + -0x18) + 0xf0);
                                          if (unaff_R15 != (ostream *)0x0) {
                                            if (unaff_R15[0x38] == (ostream)0x0) {
                                              poStack_50 = (ostream *)0x103125;
                                              local_40 = poVar17;
                                              std::ctype<char>::_M_widen_init();
                                              poVar17 = local_40;
                                              if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                  std::ctype<char>::do_widen) {
                                                poStack_50 = (ostream *)0x10314b;
                                                (**(code **)(*(long *)unaff_R15 + 0x30))
                                                          (unaff_R15,10);
                                                poVar17 = local_40;
                                              }
                                            }
                                            poStack_50 = (ostream *)0x102024;
                                            std::ostream::put((char)poVar17);
                                            poStack_50 = (ostream *)0x10202c;
                                            std::ostream::flush();
                                            pcVar21 = "motion blur quads:";
                                            poVar22 = (ostream *)&std::cout;
                                            poStack_50 = (ostream *)0x102040;
                                            std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)&std::cout,"motion blur quads:",
                                                       0x12);
                                            unaff_R15 = *(ostream **)
                                                         (std::__basic_file<char>::is_open +
                                                         *(long *)(std::cout + -0x18));
                                            if (unaff_R15 != (ostream *)0x0) {
                                              if (unaff_R15[0x38] == (ostream)0x0) {
                                                poStack_50 = (ostream *)0x103168;
                                                std::ctype<char>::_M_widen_init();
                                                if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                    std::ctype<char>::do_widen) {
                                                  poStack_50 = (ostream *)0x103189;
                                                  (**(code **)(*(long *)unaff_R15 + 0x30))
                                                            (unaff_R15,10);
                                                }
                                              }
                                              poStack_50 = (ostream *)0x102074;
                                              std::ostream::put(-0x50);
                                              poStack_50 = (ostream *)0x10207c;
                                              std::ostream::flush();
                                              poStack_50 = (ostream *)0x10208c;
                                              std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)&std::cout,
                                                         "  accel              = ",0x17);
                                              pcVar21 = *(char **)(this + 0x130);
                                              poVar22 = (ostream *)&std::cout;
                                              poStack_50 = (ostream *)0x1020a2;
                                              poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x138));
                                              unaff_R15 = *(ostream **)
                                                           (poVar17 +
                                                           *(long *)(*(long *)poVar17 + -0x18) +
                                                           0xf0);
                                              if (unaff_R15 != (ostream *)0x0) {
                                                if (unaff_R15[0x38] == (ostream)0x0) {
                                                  poStack_50 = (ostream *)0x1031a5;
                                                  local_40 = poVar17;
                                                  std::ctype<char>::_M_widen_init();
                                                  poVar17 = local_40;
                                                  if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    poStack_50 = (ostream *)0x1031cb;
                                                    (**(code **)(*(long *)unaff_R15 + 0x30))
                                                              (unaff_R15,10);
                                                    poVar17 = local_40;
                                                  }
                                                }
                                                poStack_50 = (ostream *)0x1020d5;
                                                std::ostream::put((char)poVar17);
                                                poStack_50 = (ostream *)0x1020dd;
                                                std::ostream::flush();
                                                poStack_50 = (ostream *)0x1020ed;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)&std::cout,
                                                           "  builder            = ",0x17);
                                                pcVar21 = *(char **)(this + 0x150);
                                                poVar22 = (ostream *)&std::cout;
                                                poStack_50 = (ostream *)0x102103;
                                                poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x158));
                                                unaff_R15 = *(ostream **)
                                                             (poVar17 +
                                                             *(long *)(*(long *)poVar17 + -0x18) +
                                                             0xf0);
                                                if (unaff_R15 != (ostream *)0x0) {
                                                  if (unaff_R15[0x38] == (ostream)0x0) {
                                                    poStack_50 = (ostream *)0x1031ed;
                                                    local_40 = poVar17;
                                                    std::ctype<char>::_M_widen_init();
                                                    poVar17 = local_40;
                                                    if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                        std::ctype<char>::do_widen) {
                                                      poStack_50 = (ostream *)0x103213;
                                                      (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                (unaff_R15,10);
                                                      poVar17 = local_40;
                                                    }
                                                  }
                                                  poStack_50 = (ostream *)0x102136;
                                                  std::ostream::put((char)poVar17);
                                                  poStack_50 = (ostream *)0x10213e;
                                                  std::ostream::flush();
                                                  poStack_50 = (ostream *)0x10214e;
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x170);
                                                  poStack_50 = (ostream *)0x102164;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x178));
                                                  poVar22 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar22 != (ostream *)0x0) {
                                                    if (poVar22[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10322a;
                                                      local_40 = poVar22;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10324d;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102195;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x10219d;
                                                    std::ostream::flush();
                                                    pcVar21 = "line segments:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x1021b1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"line segments:",
                                                             0xe);
                                                  unaff_R15 = *(ostream **)
                                                               (std::__basic_file<char>::is_open +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103260;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103281;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1021e5;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x1021ed;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1021fd;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 400);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102213;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x198));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10329d;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1032c3;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102246;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x10224e;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x10225e;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x1b0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102274;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x1b8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1032dd;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103303;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1022a7;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x1022af;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1022bf;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x1d0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1022d5;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x1d8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10331d;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103343;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102308;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x102310;
                                                    std::ostream::flush();
                                                    pcVar21 = "motion blur line segments:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102324;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur line segments:",0x1a);
                                                  unaff_R15 = *(ostream **)
                                                               (std::__basic_file<char>::is_open +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103358;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103379;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102358;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102360;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102370;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x1f0);
                                                  poStack_50 = (ostream *)0x102386;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x1f8));
                                                  poVar22 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar22 != (ostream *)0x0) {
                                                    if (poVar22[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103392;
                                                      local_40 = poVar22;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1033b5;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1023b7;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x1023bf;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1023cf;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x210);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1023e5;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x218));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1033cd;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1033f3;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102418;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x102420;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102430;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x230);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102446;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x238));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x10340d;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103433;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102479;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x102481;
                                                    std::ostream::flush();
                                                    pcVar21 = "hair:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102495;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"hair:",5);
                                                  unaff_R15 = *(ostream **)
                                                               (std::__basic_file<char>::is_open +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103448;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103469;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1024c9;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x1024d1;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1024e1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x250);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1024f7;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 600));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103485;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1034ab;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10252a;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x102532;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102542;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x270);
                                                  poStack_50 = (ostream *)0x102558;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x278));
                                                  poVar22 = *(ostream **)
                                                             (unaff_R15 +
                                                             *(long *)(*(long *)unaff_R15 + -0x18) +
                                                             0xf0);
                                                  if (poVar22 != (ostream *)0x0) {
                                                    if (poVar22[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1034ca;
                                                      local_40 = poVar22;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)local_40 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1034ed;
                                                        (**(code **)(*(long *)local_40 + 0x30))
                                                                  (local_40,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102589;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102591;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1025a1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x290);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1025b7;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x298));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103505;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10352b;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1025ea;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x1025f2;
                                                    std::ostream::flush();
                                                    pcVar21 = "motion blur hair:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102606;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur hair:",0x11);
                                                  unaff_R15 = *(ostream **)
                                                               (std::__basic_file<char>::is_open +
                                                               *(long *)(std::cout + -0x18));
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103548;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103569;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10263a;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102642;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102652;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x2b0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102668;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x2b8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103585;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1035ab;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10269b;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x1026a3;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1026b3;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x2d0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1026c9;
                                                  poVar17 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x2d8));
                                                  unaff_R15 = *(ostream **)
                                                               (poVar17 +
                                                               *(long *)(*(long *)poVar17 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x1035cd;
                                                      local_40 = poVar17;
                                                      std::ctype<char>::_M_widen_init();
                                                      poVar17 = local_40;
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1035f3;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                        poVar17 = local_40;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1026fc;
                                                    std::ostream::put((char)poVar17);
                                                    poStack_50 = (ostream *)0x102704;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102714;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  traverser          = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x2f0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x10272a;
                                                  unaff_R14 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x2f8));
                                                  unaff_R15 = *(ostream **)
                                                               ((ostream *)unaff_R14 +
                                                               *(long *)(*(long *)unaff_R14 + -0x18)
                                                               + 0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103608;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103629;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10275d;
                                                    std::ostream::put((char)unaff_R14);
                                                    poStack_50 = (ostream *)0x102765;
                                                    std::ostream::flush();
                                                    pcVar21 = "subdivision surfaces:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102779;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "subdivision surfaces:",0x15);
                                                  unaff_R14 = *(char **)(std::__basic_file<char>::
                                                                         is_open +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103640;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103661;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1027ad;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x1027b5;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1027c5;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x3a0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1027db;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x3a8));
                                                  unaff_R14 = *(char **)(unaff_R15 +
                                                                        *(long *)(*(long *)unaff_R15
                                                                                 + -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103678;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103699;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10280e;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x102816;
                                                    std::ostream::flush();
                                                    pcVar21 = "grids:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x10282a;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"grids:",6);
                                                  unaff_R14 = *(char **)(std::__basic_file<char>::
                                                                         is_open +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1036b0;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1036d1;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x10285e;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102866;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102876;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x3e0);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x10288c;
                                                  unaff_R15 = std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 1000));
                                                  unaff_R14 = *(char **)(unaff_R15 +
                                                                        *(long *)(*(long *)unaff_R15
                                                                                 + -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1036e8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103709;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1028bf;
                                                    std::ostream::put((char)unaff_R15);
                                                    poStack_50 = (ostream *)0x1028c7;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1028d7;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x400);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1028ed;
                                                  unaff_R14 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x408));
                                                  unaff_R15 = *(ostream **)
                                                               ((ostream *)unaff_R14 +
                                                               *(long *)(*(long *)unaff_R14 + -0x18)
                                                               + 0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103720;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103741;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102920;
                                                    std::ostream::put((char)unaff_R14);
                                                    poStack_50 = (ostream *)0x102928;
                                                    std::ostream::flush();
                                                    pcVar21 = "motion blur grids:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x10293c;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "motion blur grids:",0x12);
                                                  unaff_R14 = *(char **)(std::__basic_file<char>::
                                                                         is_open +
                                                                        *(long *)(std::cout + -0x18)
                                                                        );
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103758;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103779;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102970;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102978;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102988;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  accel              = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x420);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x10299e;
                                                  pcVar16 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x428));
                                                  unaff_R14 = *(char **)((ostream *)pcVar16 +
                                                                        *(long *)(*(long *)pcVar16 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103790;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1037b1;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x1029d1;
                                                    std::ostream::put((char)pcVar16);
                                                    poStack_50 = (ostream *)0x1029d9;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x1029e9;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  builder            = ",0x17);
                                                  pcVar21 = *(char **)(this + 0x440);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x1029ff;
                                                  pcVar16 = (char *)std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,pcVar21,
                                                             *(long *)(this + 0x448));
                                                  unaff_R13 = *(char **)((ostream *)pcVar16 +
                                                                        *(long *)(*(long *)pcVar16 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1037c8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R13 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1037ea;
                                                        (**(code **)(*(long *)unaff_R13 + 0x30))
                                                                  (unaff_R13,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102a32;
                                                    std::ostream::put((char)pcVar16);
                                                    poStack_50 = (ostream *)0x102a3a;
                                                    std::ostream::flush();
                                                    pcVar21 = "object_accel:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102a4e;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,"object_accel:",
                                                             0xd);
                                                  pcVar16 = *(char **)(std::__basic_file<char>::
                                                                       is_open +
                                                                      *(long *)(std::cout + -0x18));
                                                  if ((ostream *)pcVar16 != (ostream *)0x0) {
                                                    if (((ostream *)pcVar16)[0x38] == (ostream)0x0)
                                                    {
                                                      poStack_50 = (ostream *)0x103800;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)pcVar16 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103822;
                                                        (**(code **)(*(long *)pcVar16 + 0x30))
                                                                  (pcVar16,10);
                                                      }
                                                    }
                                                    unaff_R13 = "  min_leaf_size      = ";
                                                    poStack_50 = (ostream *)0x102a8b;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102a93;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102aa3;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  min_leaf_size      = ",0x17);
                                                  pcVar21 = (char *)(ulong)*(uint *)(this + 0x350);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102ab1;
                                                  pcVar16 = (char *)std::ostream::operator<<
                                                                              ((ostream *)&std::cout
                                                                               ,*(uint *)(this + 
                                                  0x350));
                                                  unaff_R14 = *(char **)((ostream *)pcVar16 +
                                                                        *(long *)(*(long *)pcVar16 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R14 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R14)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x103838;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R14 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103859;
                                                        (**(code **)(*(long *)unaff_R14 + 0x30))
                                                                  (unaff_R14,10);
                                                      }
                                                    }
                                                    unaff_R14 = "  max_leaf_size      = ";
                                                    poStack_50 = (ostream *)0x102aeb;
                                                    std::ostream::put((char)pcVar16);
                                                    poStack_50 = (ostream *)0x102af3;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102b03;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  max_leaf_size      = ",0x17);
                                                  pcVar21 = (char *)(ulong)*(uint *)(this + 0x354);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102b11;
                                                  pcVar16 = (char *)std::ostream::operator<<
                                                                              ((ostream *)&std::cout
                                                                               ,*(uint *)(this + 
                                                  0x354));
                                                  unaff_R15 = *(ostream **)
                                                               ((ostream *)pcVar16 +
                                                               *(long *)(*(long *)pcVar16 + -0x18) +
                                                               0xf0);
                                                  if (unaff_R15 != (ostream *)0x0) {
                                                    if (unaff_R15[0x38] == (ostream)0x0) {
                                                      poStack_50 = (ostream *)0x103870;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R15 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103891;
                                                        (**(code **)(*(long *)unaff_R15 + 0x30))
                                                                  (unaff_R15,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102b44;
                                                    std::ostream::put((char)pcVar16);
                                                    poStack_50 = (ostream *)0x102b4c;
                                                    std::ostream::flush();
                                                    pcVar21 = "object_accel_mb:";
                                                    poVar22 = (ostream *)&std::cout;
                                                    poStack_50 = (ostream *)0x102b60;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "object_accel_mb:",0x10);
                                                  pcVar16 = *(char **)(std::__basic_file<char>::
                                                                       is_open +
                                                                      *(long *)(std::cout + -0x18));
                                                  if ((ostream *)pcVar16 != (ostream *)0x0) {
                                                    if (((ostream *)pcVar16)[0x38] == (ostream)0x0)
                                                    {
                                                      poStack_50 = (ostream *)0x1038a8;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)pcVar16 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x1038ca;
                                                        (**(code **)(*(long *)pcVar16 + 0x30))
                                                                  (pcVar16,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102b96;
                                                    std::ostream::put(-0x50);
                                                    poStack_50 = (ostream *)0x102b9e;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102bae;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  min_leaf_size      = ",0x17);
                                                  pcVar21 = (char *)(ulong)*(uint *)(this + 0x398);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102bbc;
                                                  pcVar16 = (char *)std::ostream::operator<<
                                                                              ((ostream *)&std::cout
                                                                               ,*(uint *)(this + 
                                                  0x398));
                                                  unaff_R13 = *(char **)((ostream *)pcVar16 +
                                                                        *(long *)(*(long *)pcVar16 +
                                                                                 -0x18) + 0xf0);
                                                  if ((ostream *)unaff_R13 != (ostream *)0x0) {
                                                    if (((ostream *)unaff_R13)[0x38] == (ostream)0x0
                                                       ) {
                                                      poStack_50 = (ostream *)0x1038e0;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)unaff_R13 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x103902;
                                                        (**(code **)(*(long *)unaff_R13 + 0x30))
                                                                  (unaff_R13,10);
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102bef;
                                                    std::ostream::put((char)pcVar16);
                                                    poStack_50 = (ostream *)0x102bf7;
                                                    std::ostream::flush();
                                                    poStack_50 = (ostream *)0x102c07;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)&std::cout,
                                                             "  max_leaf_size      = ",0x17);
                                                  pcVar21 = (char *)(ulong)*(uint *)(this + 0x39c);
                                                  poVar22 = (ostream *)&std::cout;
                                                  poStack_50 = (ostream *)0x102c15;
                                                  plVar20 = (long *)std::ostream::operator<<
                                                                              ((ostream *)&std::cout
                                                                               ,*(uint *)(this + 
                                                  0x39c));
                                                  this = *(State **)
                                                          ((long)plVar20 +
                                                          *(long *)(*plVar20 + -0x18) + 0xf0);
                                                  if (this != (State *)0x0) {
                                                    if (this[0x38] == (State)0x0) {
                                                      poStack_50 = (ostream *)0x103918;
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*(long *)this + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        poStack_50 = (ostream *)0x10393a;
                                                        (**(code **)(*(long *)this + 0x30))(this,10)
                                                        ;
                                                      }
                                                    }
                                                    poStack_50 = (ostream *)0x102c46;
                                                    std::ostream::put((char)plVar20);
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
  poStack_50 = (ostream *)0x1039c5;
  std::__throw_bad_cast();
  lStack_88 = *(long *)(in_FS_OFFSET + 0x28);
  plStack_78 = plVar20;
  pSStack_70 = this;
  poStack_68 = (ostream *)pcVar16;
  poStack_60 = (ostream *)unaff_R13;
  poStack_58 = (ostream *)unaff_R14;
  poStack_50 = unaff_R15;
LAB_00103a10:
  plVar20 = *(long **)pcVar21;
  uStack_9d8 = 0;
  p_Stack_9d0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  uStack_9c8 = 0xffffffffffffffff;
  uStack_9c0 = 0xffffffffffffffff;
  iStack_a00 = 0;
  sStack_9f0 = 0;
  uStack_9e8 = 0;
  puStack_9f8 = &uStack_9e8;
  if (plVar20[4] == 0) {
    if (*(code **)(*plVar20 + 0x28) == TokenStream::location) {
      plVar5 = (long *)plVar20[8];
      if (plVar5[4] == 0) {
        (**(code **)(*plVar5 + 0x28))(&uStack_a20,plVar5);
        uVar13 = (**(code **)(*plVar5 + 0x20))(plVar5);
        uVar10 = uStack_a08;
        uVar9 = uStack_a10;
        p_Var23 = p_Stack_a18;
        uVar8 = uStack_a20;
        if (p_Stack_a18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
          }
          if (p_Stack_a18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = p_Stack_a18 + 8;
            if (*(long *)(p_Stack_a18 + 8) == 0x100000001) {
              *(undefined8 *)(p_Stack_a18 + 8) = 0;
              (**(code **)(*(long *)p_Stack_a18 + 0x10))(p_Stack_a18);
              (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar14 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar14 = *(int *)(p_Stack_a18 + 8);
                *(int *)(p_Stack_a18 + 8) = iVar14 + -1;
              }
              if (iVar14 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (p_Stack_a18);
              }
            }
          }
        }
        lVar18 = plVar5[3];
        lVar6 = plVar5[4];
        if (lVar18 + lVar6 == 0x400) {
          if (lVar18 == 0) {
embree_State_parse:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar18 = lVar18 + -1;
          plVar5[3] = lVar18;
          uVar15 = (int)plVar5[2] + 1U & 0x3ff;
          plVar5[2] = (ulong)uVar15;
        }
        else {
          uVar15 = (uint)plVar5[2];
        }
        plVar5[4] = lVar6 + 1;
        puVar3 = (undefined4 *)
                 (plVar5[5] + (ulong)((int)lVar18 + uVar15 + (int)lVar6 & 0x3ff) * 0x28);
        p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
        *puVar3 = uVar13;
        *(undefined8 *)(puVar3 + 2) = uVar8;
        if (p_Var23 == p_Var1) {
          *(undefined8 *)(puVar3 + 6) = uVar9;
          *(undefined8 *)(puVar3 + 8) = uVar10;
          if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103bc5;
        }
        else if (p_Var23 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar3 + 6) = uVar9;
            *(undefined8 *)(puVar3 + 8) = uVar10;
          }
          else {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
            *(undefined8 *)(puVar3 + 4) = 0;
            *(undefined8 *)(puVar3 + 6) = uVar9;
            *(undefined8 *)(puVar3 + 8) = uVar10;
          }
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            UNLOCK();
            p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
          }
          else {
            *(int *)(p_Var23 + 8) = *(int *)(p_Var23 + 8) + 1;
            p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
          }
          if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4) = p_Var23;
            *(undefined8 *)(puVar3 + 6) = uVar9;
            *(undefined8 *)(puVar3 + 8) = uVar10;
          }
          else {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4) = p_Var23;
            *(undefined8 *)(puVar3 + 6) = uVar9;
            *(undefined8 *)(puVar3 + 8) = uVar10;
          }
LAB_00103bc5:
          p_Var1 = p_Var23 + 8;
          if (*(long *)(p_Var23 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var23 + 8) = 0;
            (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(p_Var23 + 8);
              *(int *)(p_Var23 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
            }
          }
        }
      }
      lVar18 = plVar5[5] + (ulong)((int)plVar5[3] + (int)plVar5[2] & 0x3ff) * 0x28;
      uStack_a20 = *(undefined8 *)(lVar18 + 8);
      p_Stack_a18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar18 + 0x10);
      if (p_Stack_a18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
        }
      }
      uStack_a10 = *(undefined8 *)(lVar18 + 0x18);
      uStack_a08 = *(undefined8 *)(lVar18 + 0x20);
    }
    else {
      (**(code **)(*plVar20 + 0x28))(&uStack_a20,plVar20);
    }
    (**(code **)(*plVar20 + 0x20))(&uStack_140,plVar20);
    __n_00 = uStack_130;
    puVar3 = puStack_138;
    uStack_a28 = uStack_130;
    uStack_f0 = uStack_140;
    puStack_e8 = &uStack_d8;
    if (uStack_130 < 0x10) {
      if (uStack_130 == 1) {
        uStack_d8 = CONCAT71(uStack_d8._1_7_,*(undefined1 *)puStack_138);
      }
      else if (uStack_130 != 0) goto LAB_0010485c;
    }
    else {
      puStack_e8 = (ulong *)std::__cxx11::string::_M_create((ulong *)&puStack_e8,(ulong)&uStack_a28)
      ;
      uStack_d8 = uStack_a28;
LAB_0010485c:
      memcpy(puStack_e8,puVar3,__n_00);
    }
    p_Var23 = p_Stack_110;
    *(undefined1 *)((long)puStack_e8 + uStack_a28) = 0;
    uStack_c8 = uStack_118;
    p_Stack_c0 = p_Stack_110;
    if (p_Stack_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Stack_110 + 8) = *(int *)(p_Stack_110 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Stack_110 + 8) = *(int *)(p_Stack_110 + 8) + 1;
      }
    }
    uStack_b8 = uStack_108;
    uStack_b0 = uStack_100;
    uStack_a8 = uStack_a20;
    p_Stack_a0 = p_Stack_a18;
    if (p_Stack_a18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Stack_a18 + 8) = *(int *)(p_Stack_a18 + 8) + 1;
      }
    }
    uStack_98 = uStack_a10;
    uStack_90 = uStack_a08;
    uStack_e0 = uStack_a28;
    if (p_Stack_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_110 + 8;
      if (*(long *)(p_Stack_110 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_110 + 8) = 0;
        (**(code **)(*(long *)p_Stack_110 + 0x10))(p_Stack_110);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_110 + 8);
          *(int *)(p_Stack_110 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_110);
        }
      }
    }
    if (puStack_138 != &uStack_128) {
      operator_delete(puStack_138,CONCAT44(uStack_124,uStack_128) + 1);
    }
    p_Var23 = p_Stack_a18;
    if (p_Stack_a18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_a18 + 8;
      if (*(long *)(p_Stack_a18 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_a18 + 8) = 0;
        (**(code **)(*(long *)p_Stack_a18 + 0x10))(p_Stack_a18);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_a18 + 8);
          *(int *)(p_Stack_a18 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_a18);
        }
      }
    }
    lVar18 = plVar20[3];
    lVar6 = plVar20[4];
    if (lVar18 + lVar6 == 0x400) {
      if (lVar18 == 0) goto embree_State_parse;
      lVar18 = lVar18 + -1;
      plVar20[3] = lVar18;
      uVar15 = (int)plVar20[2] + 1U & 0x3ff;
      plVar20[2] = (ulong)uVar15;
    }
    else {
      uVar15 = (uint)plVar20[2];
    }
    plVar20[4] = lVar6 + 1;
    puVar3 = (undefined4 *)(plVar20[5] + (ulong)((int)lVar18 + uVar15 + (int)lVar6 & 0x3ff) * 0x68);
    *puVar3 = (undefined4)uStack_f0;
    puVar3[1] = uStack_f0._4_4_;
    std::__cxx11::string::_M_assign((string *)(puVar3 + 2));
    p_Var1 = p_Stack_c0;
    p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
    *(undefined8 *)(puVar3 + 10) = uStack_c8;
    if (p_Stack_c0 != p_Var23) {
      if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Stack_c0 + 8) = *(int *)(p_Stack_c0 + 8) + 1;
          UNLOCK();
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
        else {
          *(int *)(p_Stack_c0 + 8) = *(int *)(p_Stack_c0 + 8) + 1;
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
      }
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc) = p_Var1;
    }
    p_Var1 = p_Stack_a0;
    p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
    *(undefined8 *)(puVar3 + 0xe) = uStack_b8;
    *(undefined8 *)(puVar3 + 0x10) = uStack_b0;
    *(undefined8 *)(puVar3 + 0x12) = uStack_a8;
    if (p_Stack_a0 != p_Var23) {
      if (p_Stack_a0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(p_Stack_a0 + 8) = *(int *)(p_Stack_a0 + 8) + 1;
          UNLOCK();
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
        else {
          *(int *)(p_Stack_a0 + 8) = *(int *)(p_Stack_a0 + 8) + 1;
          p_Var23 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
      }
      if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var23 + 8;
        if (*(long *)(p_Var23 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var23 + 8) = 0;
          (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(p_Var23 + 8);
            *(int *)(p_Var23 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14) = p_Var1;
      p_Var23 = p_Stack_a0;
    }
    *(undefined8 *)(puVar3 + 0x16) = uStack_98;
    *(undefined8 *)(puVar3 + 0x18) = uStack_90;
    if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var23 + 8;
      if (*(long *)(p_Var23 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var23 + 8) = 0;
        (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Var23 + 8);
          *(int *)(p_Var23 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
        }
      }
    }
    p_Var23 = p_Stack_c0;
    if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_c0 + 8;
      if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_c0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_c0 + 0x10))(p_Stack_c0);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_c0 + 8);
          *(int *)(p_Stack_c0 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_c0);
        }
      }
    }
    if (puStack_e8 != &uStack_d8) {
      operator_delete(puStack_e8,uStack_d8 + 1);
    }
    p_Var23 = p_Stack_9d0;
    bVar12 = false;
    piVar4 = (int *)(plVar20[5] + (ulong)((int)plVar20[3] + (int)plVar20[2] & 0x3ff) * 0x68);
    if (*piVar4 == iStack_a00) {
      switch(iStack_a00) {
      default:
        bVar12 = true;
        break;
      case 1:
        bVar12 = (char)piVar4[1] == fStack_9fc._0_1_;
        break;
      case 2:
        bVar12 = (float)piVar4[1] == fStack_9fc;
        break;
      case 3:
        bVar12 = (float)piVar4[1] == fStack_9fc;
        break;
      case 4:
      case 5:
      case 6:
        __n = *(size_t *)(piVar4 + 4);
        bVar12 = false;
        if ((__n == sStack_9f0) && (bVar12 = true, __n != 0)) {
          iVar14 = memcmp(*(void **)(piVar4 + 2),puStack_9f8,__n);
          bVar12 = iVar14 == 0;
        }
      }
    }
    if (p_Var23 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var23 + 8;
      if (*(long *)(p_Var23 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var23 + 8) = 0;
        (**(code **)(*(long *)p_Var23 + 0x10))(p_Var23);
        (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Var23 + 8);
          *(int *)(p_Var23 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var23);
        }
      }
    }
LAB_0010410d:
    if (puStack_9f8 != &uStack_9e8) {
      operator_delete(puStack_9f8,CONCAT71(uStack_9e7,uStack_9e8) + 1);
    }
    if (bVar12) {
      if (lStack_88 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else if (*(int *)(plVar20[5] + (ulong)((int)plVar20[2] + (int)plVar20[3] & 0x3ff) * 0x68) == 0) {
    bVar12 = true;
    goto LAB_0010410d;
  }
  Stream<embree::Token>::get();
  uStack_130 = CONCAT17(uStack_130._7_1_,0x73646165726874);
  uStack_188 = 7;
  lStack_180 = 0x73646165726874;
  uStack_f0 = (ulong *)CONCAT44(uStack_f0._4_4_,4);
  uStack_e0 = 7;
  uStack_d8 = 0x73646165726874;
  uStack_c8 = 0;
  p_Stack_c0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  if ((((aiStack_9b0[0] == 4) && (lStack_9a0 == 7)) && ((int)*plStack_9a8 == 0x65726874)) &&
     (*(int *)((long)plStack_9a8 + 3) == 0x73646165)) {
    uStack_130 = CONCAT62(uStack_130._2_6_,0x3d);
    puStack_138 = (undefined4 *)0x1;
    uStack_190 = &lStack_180;
    uStack_140 = &uStack_130;
    puStack_e8 = &uStack_d8;
    cVar11 = embree::TokenStream::trySymbol(*(string **)pcVar21);
    if (uStack_140 != &uStack_130) {
      operator_delete(uStack_140,uStack_130 + 1);
    }
    p_Var23 = p_Stack_c0;
    if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_c0 + 8;
      if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_c0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_c0 + 0x10))();
        (**(code **)(*(long *)p_Var23 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_c0 + 8);
          *(int *)(p_Stack_c0 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_c0);
        }
      }
    }
    if (puStack_e8 != &uStack_d8) {
      operator_delete(puStack_e8,uStack_d8 + 1);
    }
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
    }
    if (cVar11 == '\0') goto LAB_00104400;
    Stream<embree::Token>::get();
    p_Var23 = p_Stack_930;
    if (iStack_960 == 2) {
      *(long *)(poVar22 + 0x4b8) = (long)iStack_95c;
      if (p_Stack_930 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Stack_930 + 8;
        if (*(long *)(p_Stack_930 + 8) == 0x100000001) {
          *(undefined8 *)(p_Stack_930 + 8) = 0;
          (**(code **)(*(long *)p_Stack_930 + 0x10))(p_Stack_930);
          (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar14 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar14 = *(int *)(p_Stack_930 + 8);
            *(int *)(p_Stack_930 + 8) = iVar14 + -1;
          }
          if (iVar14 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_930)
            ;
          }
        }
      }
      if (plStack_958 != alStack_948) {
        operator_delete(plStack_958,alStack_948[0] + 1);
      }
      goto LAB_00104323;
    }
    goto embree_State_parse;
  }
LAB_00104400:
  lStack_180 = 0x7268745f72657375;
  uStack_178 = 0x73646165;
  uStack_188 = 0xc;
  uStack_174 = 0;
  uStack_128 = 0x73646165;
  uStack_f0 = (ulong *)CONCAT44(uStack_f0._4_4_,4);
  uStack_d8 = 0x7268745f72657375;
  uStack_d0 = 0x73646165;
  uStack_e0 = 0xc;
  uStack_cc = 0;
  uStack_c8 = 0;
  p_Stack_c0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  if (((aiStack_9b0[0] == 4) && (lStack_9a0 == 0xc)) &&
     ((*plStack_9a8 == 0x7268745f72657375 && ((int)plStack_9a8[1] == 0x73646165)))) {
    uStack_130 = 0x7268745f7265003d;
    puStack_138 = (undefined4 *)0x1;
    uStack_190 = &lStack_180;
    uStack_140 = &uStack_130;
    puStack_e8 = &uStack_d8;
    cVar11 = embree::TokenStream::trySymbol(*(string **)pcVar21);
    if (uStack_140 != &uStack_130) {
      operator_delete(uStack_140,uStack_130 + 1);
    }
    p_Var23 = p_Stack_c0;
    if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_c0 + 8;
      if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_c0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_c0 + 0x10))();
        (**(code **)(*(long *)p_Var23 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_c0 + 8);
          *(int *)(p_Stack_c0 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_c0);
        }
      }
    }
    if (puStack_e8 != &uStack_d8) {
      operator_delete(puStack_e8,uStack_d8 + 1);
    }
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
    }
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      p_Var23 = p_Stack_8e0;
      if (iStack_910 == 2) {
        *(long *)(poVar22 + 0x4c0) = (long)iStack_90c;
        if (p_Stack_8e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = p_Stack_8e0 + 8;
          if (*(long *)(p_Stack_8e0 + 8) == 0x100000001) {
            *(undefined8 *)(p_Stack_8e0 + 8) = 0;
            (**(code **)(*(long *)p_Stack_8e0 + 0x10))(p_Stack_8e0);
            (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar14 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar14 = *(int *)(p_Stack_8e0 + 8);
              *(int *)(p_Stack_8e0 + 8) = iVar14 + -1;
            }
            if (iVar14 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                        (p_Stack_8e0);
            }
          }
        }
        if (plStack_908 != alStack_8f8) {
          operator_delete(plStack_908,alStack_8f8[0] + 1);
        }
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  lStack_180 = 0x696666615f746573;
  uStack_178 = 0x7974696e;
  uStack_188 = 0xc;
  uStack_174 = 0;
  uStack_130 = 0x696666615f746573;
  uStack_128 = 0x7974696e;
  uStack_f0 = (ulong *)CONCAT44(uStack_f0._4_4_,4);
  uStack_d8 = 0x696666615f746573;
  uStack_d0 = 0x7974696e;
  uStack_e0 = 0xc;
  uStack_cc = 0;
  uStack_c8 = 0;
  p_Stack_c0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffffffffffff;
  puStack_e8 = &uStack_d8;
  if (((aiStack_9b0[0] == 4) && (lStack_9a0 == 0xc)) &&
     ((*plStack_9a8 == 0x696666615f746573 && ((int)plStack_9a8[1] == 0x7974696e)))) {
    uStack_130 = 0x696666615f74003d;
    puStack_138 = (undefined4 *)0x1;
    uStack_190 = &lStack_180;
    uStack_140 = &uStack_130;
    cVar11 = embree::TokenStream::trySymbol(*(string **)pcVar21);
    if (uStack_140 != &uStack_130) {
      operator_delete(uStack_140,uStack_130 + 1);
    }
    p_Var23 = p_Stack_c0;
    if (p_Stack_c0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Stack_c0 + 8;
      if (*(long *)(p_Stack_c0 + 8) == 0x100000001) {
        *(undefined8 *)(p_Stack_c0 + 8) = 0;
        (**(code **)(*(long *)p_Stack_c0 + 0x10))();
        (**(code **)(*(long *)p_Var23 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar14 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar14 = *(int *)(p_Stack_c0 + 8);
          *(int *)(p_Stack_c0 + 8) = iVar14 + -1;
        }
        if (iVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_c0);
        }
      }
    }
    if (puStack_e8 != &uStack_d8) {
      operator_delete(puStack_e8,uStack_d8 + 1);
    }
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
    }
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_8c0 == 2) {
        poVar22[0x4c8] = (ostream)(iStack_8bc != 0);
        Token::~Token((Token *)&iStack_8c0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  lStack_180 = 0x7974696e69666661;
  uStack_188 = 8;
  uStack_178 = uStack_178 & 0xffffff00;
  uStack_190 = &lStack_180;
  Token::Id((Token *)&uStack_f0,&lStack_180,8);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_00;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_01;
    }
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    if (uStack_140 != &uStack_130) {
      operator_delete(uStack_140,uStack_130 + 1);
    }
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_23;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_24;
    }
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_870 == 2) {
        poVar22[0x4c8] = (ostream)(iStack_86c != 0);
        Token::~Token((Token *)&iStack_870);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"start_threads",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_03;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_04;
    }
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_02);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    if (uStack_140 != &uStack_130) {
      operator_delete(uStack_140,uStack_130 + 1);
    }
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_25;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_26;
    }
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_820 == 2) {
        poVar22[0x4c9] = (ostream)(iStack_81c != 0);
        Token::~Token((Token *)&iStack_820);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"isa",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_06;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_07;
    }
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_05);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    paVar19 = extraout_RDX_27;
    if (uStack_190 != &lStack_180) {
      operator_delete(uStack_190,lStack_180 + 1);
      paVar19 = extraout_RDX_28;
    }
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&uStack_190);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      uVar13 = string_to_cpufeatures((string *)&uStack_190);
      *(undefined4 *)(poVar22 + 0x4cc) = uVar13;
      *(undefined4 *)(poVar22 + 0x4d0) = uVar13;
      if (uStack_190 != &lStack_180) {
        operator_delete(uStack_190,lStack_180 + 1);
      }
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"max_isa",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_09;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_08);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_29;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&uStack_190);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      uVar15 = string_to_cpufeatures((string *)&uStack_190);
      *(uint *)(poVar22 + 0x4d0) = *(uint *)(poVar22 + 0x4d0) & uVar15 & *(uint *)(poVar22 + 0x4cc);
      *(uint *)(poVar22 + 0x4cc) = uVar15 & *(uint *)(poVar22 + 0x4cc);
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"max_builder_isa",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_11;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_10);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_30;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&uStack_190);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      uVar15 = string_to_cpufeatures((string *)&uStack_190);
      *(uint *)(poVar22 + 0x4d0) = *(uint *)(poVar22 + 0x4d0) & uVar15;
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"frequency_level",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_13;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_12);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_31;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      Token::~Token((Token *)&uStack_f0);
      bVar12 = std::operator==((string *)&uStack_140,"simd128");
      if (bVar12) {
        *(undefined4 *)(poVar22 + 0x4d4) = 0;
      }
      else {
        bVar12 = std::operator==((string *)&uStack_140,"simd256");
        if (bVar12) {
          *(undefined4 *)(poVar22 + 0x4d4) = 1;
        }
        else {
          bVar12 = std::operator==((string *)&uStack_140,"simd512");
          if (bVar12) {
            *(undefined4 *)(poVar22 + 0x4d4) = 2;
          }
        }
      }
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"enable_selockmemoryprivilege",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_15;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_14);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_32;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_7d0 == 2) {
        poVar22[0x4d8] = (ostream)(iStack_7cc != 0);
        Token::~Token((Token *)&iStack_7d0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"hugepages",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_17;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_16);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_33;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_780 == 2) {
        poVar22[0x4d9] = (ostream)(iStack_77c != 0);
        Token::~Token((Token *)&iStack_780);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"float_exceptions",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_19;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_18);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_34;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_730 == 2) {
        poVar22[0x498] = (ostream)(iStack_72c != 0);
        Token::~Token((Token *)&iStack_730);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&iStack_230,"tri_accel",paVar19);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"accel",extraout_RDX_20);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_21);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_20);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0x10;
LAB_00104d35:
    std::__cxx11::string::operator=((string *)poVar17,(string *)&uStack_140);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&iStack_230,"tri_builder",extraout_RDX_22);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"builder",extraout_RDX_35);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_36);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_35);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0x30;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&iStack_230,"tri_traverser",extraout_RDX_37);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"traverser",extraout_RDX_38);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_39);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_38);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0x50;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&iStack_230,"tri_accel_mb",extraout_RDX_40);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"accel_mb",extraout_RDX_41);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_42);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_41);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0x70;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&iStack_230,"tri_builder_mb",extraout_RDX_43);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"builder_mb",extraout_RDX_44);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_45);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_44);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0x90;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&iStack_230,"tri_traverser_mb",extraout_RDX_46);
  Token::Id((Token *)&uStack_140,CONCAT44(iStack_22c,iStack_230),uStack_228);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_140);
  if (cVar11 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&iStack_1e0,"traverser_mb",extraout_RDX_47);
    Token::Id((Token *)&uStack_f0,CONCAT44(uStack_1dc,iStack_1e0),uStack_1d8);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 != '\0') {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_48);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"=",extraout_RDX_47);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&uStack_140);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    poVar17 = poVar22 + 0xb0;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"quad_accel",extraout_RDX_49);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_51;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_50);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00127;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0xd0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"quad_builder",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_53;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_52);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00191;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0xf0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"quad_traverser",paVar19)
  ;
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_55;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_54);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00190;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x110;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"quad_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_57;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_56);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00189;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x130;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"quad_builder_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_59;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_58);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00188;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x150;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"quad_traverser_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_61;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_60);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00187;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x170;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"line_accel",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_63;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_62);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00186;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 400;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"line_builder",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_65;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_64);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00185;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x1b0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"line_traverser",paVar19)
  ;
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_67;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_66);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00184;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x1d0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"line_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_69;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_68);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00183;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x1f0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"line_builder_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_71;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_70);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00182;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x210;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"line_traverser_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_73;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_72);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00181;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x230;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"hair_accel",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_75;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_74);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00180;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x250;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"hair_builder",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_77;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_76);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00179;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x270;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"hair_traverser",paVar19)
  ;
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_79;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_78);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00178;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x290;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"hair_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_81;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_80);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00177;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x2b0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"hair_builder_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_83;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_82);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00176;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x2d0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"hair_traverser_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_85;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_84);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00175;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x2f0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"object_accel",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_87;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_86);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00174;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x310;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"object_builder",paVar19)
  ;
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_89;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_88);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00173;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x330;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_accel_min_leaf_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_91;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_90);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00172;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_6e0 == 2) {
        *(undefined4 *)(poVar22 + 0x350) = uStack_6dc;
        Token::~Token((Token *)&iStack_6e0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_accel_max_leaf_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_93;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_92);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00171;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_690 == 2) {
        *(undefined4 *)(poVar22 + 0x354) = uStack_68c;
        Token::~Token((Token *)&iStack_690);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_95;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_94);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00170;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x358;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_builder_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_97;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_96);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00169;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x378;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_accel_mb_min_leaf_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_99;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"=",extraout_RDX_98);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00168;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_640 == 2) {
        *(undefined4 *)(poVar22 + 0x398) = uStack_63c;
        Token::~Token((Token *)&iStack_640);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"object_accel_mb_max_leaf_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00101;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00100);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00166;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_5f0 == 2) {
        *(undefined4 *)(poVar22 + 0x39c) = uStack_5ec;
        Token::~Token((Token *)&iStack_5f0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"instancing_open_min",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00103;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00102);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00165;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_5a0 == 2) {
        *(long *)(poVar22 + 0x470) = (long)iStack_59c;
        Token::~Token((Token *)&iStack_5a0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"instancing_block_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00105;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00104);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00167;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_550 == 2) {
        *(long *)(poVar22 + 0x478) = (long)iStack_54c;
        Token::~Token((Token *)&iStack_550);
        *(undefined4 *)(poVar22 + 0x480) = 0;
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"instancing_open_max_depth",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00107;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00106);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00164;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_500 == 2) {
        *(long *)(poVar22 + 0x488) = (long)iStack_4fc;
        Token::~Token((Token *)&iStack_500);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"instancing_open_factor",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00109;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00108);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00163;
    if (cVar11 != '\0') {
      *(long *)(poVar22 + 0x478) = 0;
      Stream<embree::Token>::get();
      fVar24 = fStack_4ac;
      if (iStack_4b0 != 3) {
        if (iStack_4b0 != 2) goto embree_State_parse;
        fVar24 = (float)(int)fStack_4ac;
      }
      *(float *)(poVar22 + 0x480) = fVar24;
      Token::~Token((Token *)&iStack_4b0);
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"instancing_open_max",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00111;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00110);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00162;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_460 == 2) {
        *(long *)(poVar22 + 0x490) = (long)iStack_45c;
        Token::~Token((Token *)&iStack_460);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"subdiv_accel",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00113;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00112);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00161;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x3a0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"subdiv_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00115;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00114);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00160;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x3c0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"grid_accel",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00117;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00116);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00158;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x3e0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"grid_accel_mb",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00119;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00118);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00157;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      poVar17 = poVar22 + 0x420;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"verbose",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00121;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00120);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00159;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_410 == 2) {
        *(long *)(poVar22 + 0x4a8) = (long)iStack_40c;
        Token::~Token((Token *)&iStack_410);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"benchmark",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00123;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00122);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00154;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_3c0 == 2) {
        *(long *)(poVar22 + 0x4b0) = (long)iStack_3bc;
        Token::~Token((Token *)&iStack_3c0);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_140,"quality",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_140,puStack_138);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  Token::~Token((Token *)&uStack_f0);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_f0,"=",extraout_RDX_x00124)
    ;
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    if (cVar11 == '\0') goto LAB_00104323;
    Stream<embree::Token>::get();
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_190,"low",extraout_RDX_x00125);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    if (cVar11 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_190,"medium",extraout_RDX_x00126);
      Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
      cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      if (cVar11 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_190,"high",extraout_RDX_x00128);
        Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
        cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
        Token::~Token((Token *)&uStack_f0);
        std::__cxx11::string::_M_dispose();
        if (cVar11 != '\0') {
          *(undefined4 *)(poVar22 + 0x49c) = 2;
        }
      }
      else {
        *(undefined4 *)(poVar22 + 0x49c) = 1;
      }
    }
    else {
      *(undefined4 *)(poVar22 + 0x49c) = 0;
    }
LAB_00106d9e:
    Token::~Token((Token *)&uStack_140);
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_140,"scene_flags",extraout_RDX_x00124);
  Token::Id((Token *)&uStack_f0,uStack_140,puStack_138);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  Token::~Token((Token *)&uStack_f0);
  std::__cxx11::string::_M_dispose();
  if (cVar11 != '\0') {
    *(undefined4 *)(poVar22 + 0x4a0) = 0;
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_f0,"=",extraout_RDX_x00129)
    ;
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    while (cVar11 != '\0') {
      Stream<embree::Token>::get();
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_190,"dynamic",extraout_RDX_x00130);
      Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
      cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      if (cVar11 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&uStack_190,"compact",extraout_RDX_x00131);
        Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
        cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
        Token::~Token((Token *)&uStack_f0);
        std::__cxx11::string::_M_dispose();
        if (cVar11 == '\0') {
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&uStack_190,"robust",extraout_RDX_x00133);
          Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
          cVar11 = operator==((Token *)&uStack_140,(Token *)&uStack_f0);
          Token::~Token((Token *)&uStack_f0);
          std::__cxx11::string::_M_dispose();
          if (cVar11 != '\0') {
            *(uint *)(poVar22 + 0x4a0) = *(uint *)(poVar22 + 0x4a0) | 4;
          }
        }
        else {
          *(uint *)(poVar22 + 0x4a0) = *(uint *)(poVar22 + 0x4a0) | 2;
        }
      }
      else {
        *(uint *)(poVar22 + 0x4a0) = *(uint *)(poVar22 + 0x4a0) | 1;
      }
      Token::~Token((Token *)&uStack_140);
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_f0,"|",extraout_RDX_x00132);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
    }
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"max_spatial_split_replications",extraout_RDX_x00129);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00135;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00134);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00156;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      fVar24 = fStack_36c;
      if (iStack_370 != 3) {
        if (iStack_370 != 2) goto embree_State_parse;
        fVar24 = (float)(int)fStack_36c;
      }
      *(float *)(poVar22 + 0x460) = fVar24;
      Token::~Token((Token *)&iStack_370);
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"presplits",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00137;
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00136);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00155;
    if (cVar11 != '\0') {
      Stream<embree::Token>::get();
      if (iStack_320 == 2) {
        poVar22[0x464] = (ostream)(iStack_31c != 0);
        Token::~Token((Token *)&iStack_320);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&uStack_190,"tessellation_cache_size",paVar19);
  Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
  cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
  if (cVar11 == '\0') {
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00139;
LAB_0010715f:
    std::__cxx11::string::string<std::allocator<char>>((string *)&uStack_190,"cache_size",paVar19);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 == '\0') {
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00141;
    }
    else {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_140,"=",extraout_RDX_x00140);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00152;
      if (cVar11 != '\0') {
        this_00 = (Token *)&iStack_280;
        Stream<embree::Token>::get();
        fVar24 = fStack_27c;
        if (iStack_280 != 3) {
          if (iStack_280 == 2) {
            fVar24 = (float)(int)fStack_27c;
            goto LAB_001075b3;
          }
          goto embree_State_parse;
        }
        goto LAB_001075b3;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_190,"alloc_main_block_size",paVar19);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 == '\0') {
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00143;
    }
    else {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_140,"=",extraout_RDX_x00142);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00151;
      if (cVar11 != '\0') {
        Stream<embree::Token>::get();
        if (iStack_230 == 2) {
          *(long *)(poVar22 + 0x4e0) = (long)iStack_22c;
          Token::~Token((Token *)&iStack_230);
          goto LAB_00104323;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_190,"alloc_num_main_slots",paVar19);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 == '\0') {
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00145;
    }
    else {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_140,"=",extraout_RDX_x00144);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00150;
      if (cVar11 != '\0') {
        this_00 = (Token *)&iStack_1e0;
        Stream<embree::Token>::get();
        if (iStack_1e0 == 2) {
          *(undefined4 *)(poVar22 + 0x4e8) = uStack_1dc;
          goto LAB_001074ac;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_190,"alloc_thread_block_size",paVar19);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 == '\0') {
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00147;
    }
    else {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_140,"=",extraout_RDX_x00146);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      paVar19 = extraout_RDX_x00149;
      if (cVar11 != '\0') {
        Stream<embree::Token>::get();
        if ((int)uStack_190 == 2) {
          *(long *)(poVar22 + 0x4f0) = (long)uStack_190._4_4_;
          Token::~Token((Token *)&uStack_190);
          goto LAB_00104323;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_190,"alloc_single_thread_alloc",paVar19);
    Token::Id((Token *)&uStack_f0,uStack_190,uStack_188);
    cVar11 = operator==((Token *)aiStack_9b0,(Token *)&uStack_f0);
    if (cVar11 == '\0') {
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
    }
    else {
      psVar7 = *(string **)pcVar21;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&uStack_140,"=",extraout_RDX_x00148);
      cVar11 = embree::TokenStream::trySymbol(psVar7);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&uStack_f0);
      std::__cxx11::string::_M_dispose();
      if (cVar11 != '\0') {
        Stream<embree::Token>::get();
        if ((int)uStack_140 == 2) {
          *(undefined4 *)(poVar22 + 0x4f8) = uStack_140._4_4_;
          goto LAB_00106d9e;
        }
        goto embree_State_parse;
      }
    }
  }
  else {
    psVar7 = *(string **)pcVar21;
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&uStack_140,"=",extraout_RDX_x00138);
    cVar11 = embree::TokenStream::trySymbol(psVar7);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&uStack_f0);
    std::__cxx11::string::_M_dispose();
    paVar19 = extraout_RDX_x00153;
    if (cVar11 == '\0') goto LAB_0010715f;
    this_00 = (Token *)&iStack_2d0;
    Stream<embree::Token>::get();
    fVar24 = fStack_2cc;
    if (iStack_2d0 != 3) {
      if (iStack_2d0 != 2) goto embree_State_parse;
      fVar24 = (float)(int)fStack_2cc;
    }
LAB_001075b3:
    fVar24 = fVar24 * _LC120 * _LC120;
    if (__LC121 <= fVar24) {
      *(long *)(poVar22 + 0x468) = (long)(fVar24 - __LC121);
      *(ulong *)(poVar22 + 0x468) = *(ulong *)(poVar22 + 0x468) ^ 0x8000000000000000;
    }
    else {
      *(long *)(poVar22 + 0x468) = (long)fVar24;
    }
LAB_001074ac:
    Token::~Token(this_00);
  }
LAB_00104323:
  puStack_e8 = (ulong *)0x1;
  uStack_e0 = CONCAT62(uStack_e0._2_6_,0x2c);
  uStack_f0 = &uStack_e0;
  embree::TokenStream::trySymbol(*(string **)pcVar21);
  if (uStack_f0 != &uStack_e0) {
    operator_delete(uStack_f0,uStack_e0 + 1);
  }
  p_Var23 = p_Stack_980;
  if (p_Stack_980 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = p_Stack_980 + 8;
    if (*(long *)(p_Stack_980 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_980 + 8) = 0;
      (**(code **)(*(long *)p_Stack_980 + 0x10))(p_Stack_980);
      (**(code **)(*(long *)p_Var23 + 0x18))(p_Var23);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar14 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar14 = *(int *)(p_Stack_980 + 8);
        *(int *)(p_Stack_980 + 8) = iVar14 + -1;
      }
      if (iVar14 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_980);
      }
    }
  }
  if (plStack_9a8 != alStack_998) {
    operator_delete(plStack_9a8,alStack_998[0] + 1);
  }
  goto LAB_00103a10;
}



/* WARNING: Removing unreachable block (ram,0x001044d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::parse(embree::Ref<embree::TokenStream>) */

void __thiscall embree::State::parse(State *this,long *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined4 *puVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  size_t __n;
  string *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong __n_00;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
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
  allocator *paVar18;
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
  allocator *extraout_RDX_x00179;
  allocator *extraout_RDX_x00180;
  allocator *extraout_RDX_x00181;
  allocator *extraout_RDX_x00182;
  allocator *extraout_RDX_x00183;
  allocator *extraout_RDX_x00184;
  allocator *extraout_RDX_x00185;
  allocator *extraout_RDX_x00186;
  allocator *extraout_RDX_x00187;
  allocator *extraout_RDX_x00188;
  allocator *extraout_RDX_x00189;
  allocator *extraout_RDX_x00190;
  allocator *extraout_RDX_x00191;
  Token *this_00;
  State *this_01;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var19;
  long in_FS_OFFSET;
  float fVar20;
  ulong local_9e0;
  undefined8 local_9d8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  int local_9b8;
  float local_9b4;
  undefined1 *local_9b0;
  size_t local_9a8;
  undefined1 local_9a0;
  undefined7 uStack_99f;
  undefined8 local_990;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_988;
  undefined8 local_980;
  undefined8 local_978;
  int local_968 [2];
  long *local_960;
  long local_958;
  long local_950 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_938;
  int local_918;
  int local_914;
  long *local_910;
  long local_900 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_8e8;
  int local_8c8;
  int local_8c4;
  long *local_8c0;
  long local_8b0 [3];
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_898;
  int local_878;
  int local_874;
  int local_828;
  int local_824;
  int local_7d8;
  int local_7d4;
  int local_788;
  int local_784;
  int local_738;
  int local_734;
  int local_6e8;
  int local_6e4;
  int local_698;
  undefined4 local_694;
  int local_648;
  undefined4 local_644;
  int local_5f8;
  undefined4 local_5f4;
  int local_5a8;
  undefined4 local_5a4;
  int local_558;
  int local_554;
  int local_508;
  int local_504;
  int local_4b8;
  int local_4b4;
  int local_468;
  float local_464;
  int local_418;
  int local_414;
  int local_3c8;
  int local_3c4;
  int local_378;
  int local_374;
  int local_328;
  float local_324;
  int local_2d8;
  int local_2d4;
  int local_288;
  float local_284;
  int local_238;
  float local_234;
  int local_1e8;
  int iStack_1e4;
  undefined8 local_1e0;
  int local_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  uint local_130;
  undefined1 local_12c;
  undefined8 local_f8;
  undefined4 *local_f0;
  ulong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  ulong *local_a0;
  ulong local_98;
  ulong local_90;
  undefined4 local_88;
  undefined1 local_84;
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
LAB_00103a10:
  plVar5 = (long *)*param_2;
  local_990 = 0;
  local_988 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_980 = 0xffffffffffffffff;
  local_978 = 0xffffffffffffffff;
  local_9b8 = 0;
  local_9a8 = 0;
  local_9a0 = 0;
  local_9b0 = &local_9a0;
  if (plVar5[4] == 0) {
    if (*(code **)(*plVar5 + 0x28) == TokenStream::location) {
      plVar6 = (long *)plVar5[8];
      if (plVar6[4] == 0) {
        (**(code **)(*plVar6 + 0x28))(&local_9d8,plVar6);
        uVar14 = (**(code **)(*plVar6 + 0x20))(plVar6);
        uVar11 = local_9c0;
        uVar10 = local_9c8;
        p_Var19 = local_9d0;
        uVar9 = local_9d8;
        if (local_9d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
          }
          if (local_9d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var1 = local_9d0 + 8;
            if (*(long *)(local_9d0 + 8) == 0x100000001) {
              *(undefined8 *)(local_9d0 + 8) = 0;
              (**(code **)(*(long *)local_9d0 + 0x10))(local_9d0);
              (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar15 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar15 = *(int *)(local_9d0 + 8);
                *(int *)(local_9d0 + 8) = iVar15 + -1;
              }
              if (iVar15 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_9d0);
              }
            }
          }
        }
        lVar17 = plVar6[3];
        lVar7 = plVar6[4];
        if (lVar17 + lVar7 == 0x400) {
          if (lVar17 == 0) {
embree_State_parse:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar17 = lVar17 + -1;
          plVar6[3] = lVar17;
          uVar16 = (int)plVar6[2] + 1U & 0x3ff;
          plVar6[2] = (ulong)uVar16;
        }
        else {
          uVar16 = (uint)plVar6[2];
        }
        plVar6[4] = lVar7 + 1;
        puVar3 = (undefined4 *)
                 (plVar6[5] + (ulong)((int)lVar17 + uVar16 + (int)lVar7 & 0x3ff) * 0x28);
        p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
        *puVar3 = uVar14;
        *(undefined8 *)(puVar3 + 2) = uVar9;
        if (p_Var19 == p_Var1) {
          *(undefined8 *)(puVar3 + 6) = uVar10;
          *(undefined8 *)(puVar3 + 8) = uVar11;
          if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00103bc5;
        }
        else if (p_Var19 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(undefined8 *)(puVar3 + 6) = uVar10;
            *(undefined8 *)(puVar3 + 8) = uVar11;
          }
          else {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
            *(undefined8 *)(puVar3 + 4) = 0;
            *(undefined8 *)(puVar3 + 6) = uVar10;
            *(undefined8 *)(puVar3 + 8) = uVar11;
          }
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
            UNLOCK();
            p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
          }
          else {
            *(int *)(p_Var19 + 8) = *(int *)(p_Var19 + 8) + 1;
            p_Var1 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4);
          }
          if (p_Var1 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4) = p_Var19;
            *(undefined8 *)(puVar3 + 6) = uVar10;
            *(undefined8 *)(puVar3 + 8) = uVar11;
          }
          else {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(p_Var1);
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 4) = p_Var19;
            *(undefined8 *)(puVar3 + 6) = uVar10;
            *(undefined8 *)(puVar3 + 8) = uVar11;
          }
LAB_00103bc5:
          p_Var1 = p_Var19 + 8;
          if (*(long *)(p_Var19 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var19 + 8) = 0;
            (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
            (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar15 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar15 = *(int *)(p_Var19 + 8);
              *(int *)(p_Var19 + 8) = iVar15 + -1;
            }
            if (iVar15 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
            }
          }
        }
      }
      lVar17 = plVar6[5] + (ulong)((int)plVar6[3] + (int)plVar6[2] & 0x3ff) * 0x28;
      local_9d8 = *(undefined8 *)(lVar17 + 8);
      local_9d0 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar17 + 0x10);
      if (local_9d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
        }
      }
      local_9c8 = *(undefined8 *)(lVar17 + 0x18);
      local_9c0 = *(undefined8 *)(lVar17 + 0x20);
    }
    else {
      (**(code **)(*plVar5 + 0x28))(&local_9d8,plVar5);
    }
    (**(code **)(*plVar5 + 0x20))(&local_f8,plVar5);
    __n_00 = local_e8;
    puVar3 = local_f0;
    local_9e0 = local_e8;
    local_a8 = local_f8;
    local_a0 = &local_90;
    if (local_e8 < 0x10) {
      if (local_e8 == 1) {
        local_90 = CONCAT71(local_90._1_7_,*(undefined1 *)local_f0);
      }
      else if (local_e8 != 0) goto LAB_0010485c;
    }
    else {
      local_a0 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_a0,(ulong)&local_9e0);
      local_90 = local_9e0;
LAB_0010485c:
      memcpy(local_a0,puVar3,__n_00);
    }
    p_Var19 = local_c8;
    *(undefined1 *)((long)local_a0 + local_9e0) = 0;
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
    local_60 = local_9d8;
    local_58 = local_9d0;
    if (local_9d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_9d0 + 8) = *(int *)(local_9d0 + 8) + 1;
      }
    }
    local_50 = local_9c8;
    local_48 = local_9c0;
    local_98 = local_9e0;
    if (local_c8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_c8 + 8;
      if (*(long *)(local_c8 + 8) == 0x100000001) {
        *(undefined8 *)(local_c8 + 8) = 0;
        (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
        (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_c8 + 8);
          *(int *)(local_c8 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c8);
        }
      }
    }
    if (local_f0 != &local_e0) {
      operator_delete(local_f0,CONCAT44(uStack_dc,local_e0) + 1);
    }
    p_Var19 = local_9d0;
    if (local_9d0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_9d0 + 8;
      if (*(long *)(local_9d0 + 8) == 0x100000001) {
        *(undefined8 *)(local_9d0 + 8) = 0;
        (**(code **)(*(long *)local_9d0 + 0x10))(local_9d0);
        (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_9d0 + 8);
          *(int *)(local_9d0 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_9d0);
        }
      }
    }
    lVar17 = plVar5[3];
    lVar7 = plVar5[4];
    if (lVar17 + lVar7 == 0x400) {
      if (lVar17 == 0) goto embree_State_parse;
      lVar17 = lVar17 + -1;
      plVar5[3] = lVar17;
      uVar16 = (int)plVar5[2] + 1U & 0x3ff;
      plVar5[2] = (ulong)uVar16;
    }
    else {
      uVar16 = (uint)plVar5[2];
    }
    plVar5[4] = lVar7 + 1;
    puVar3 = (undefined4 *)(plVar5[5] + (ulong)((int)lVar17 + uVar16 + (int)lVar7 & 0x3ff) * 0x68);
    *puVar3 = (undefined4)local_a8;
    puVar3[1] = local_a8._4_4_;
    std::__cxx11::string::_M_assign((string *)(puVar3 + 2));
    p_Var1 = local_78;
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
    *(undefined8 *)(puVar3 + 10) = local_80;
    if (local_78 != p_Var19) {
      if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
        else {
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc);
        }
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var19 + 8;
        if (*(long *)(p_Var19 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var19 + 8) = 0;
          (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
          (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar15 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar15 = *(int *)(p_Var19 + 8);
            *(int *)(p_Var19 + 8) = iVar15 + -1;
          }
          if (iVar15 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0xc) = p_Var1;
    }
    p_Var1 = local_58;
    p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
    *(undefined8 *)(puVar3 + 0xe) = local_70;
    *(undefined8 *)(puVar3 + 0x10) = local_68;
    *(undefined8 *)(puVar3 + 0x12) = local_60;
    if (local_58 != p_Var19) {
      if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
        else {
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          p_Var19 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14);
        }
      }
      if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var2 = p_Var19 + 8;
        if (*(long *)(p_Var19 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var19 + 8) = 0;
          (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
          (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar15 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar15 = *(int *)(p_Var19 + 8);
            *(int *)(p_Var19 + 8) = iVar15 + -1;
          }
          if (iVar15 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar3 + 0x14) = p_Var1;
      p_Var19 = local_58;
    }
    *(undefined8 *)(puVar3 + 0x16) = local_50;
    *(undefined8 *)(puVar3 + 0x18) = local_48;
    if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var19 + 8;
      if (*(long *)(p_Var19 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var19 + 8) = 0;
        (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
        (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(p_Var19 + 8);
          *(int *)(p_Var19 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
        }
      }
    }
    p_Var19 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0 != &local_90) {
      operator_delete(local_a0,local_90 + 1);
    }
    p_Var19 = local_988;
    bVar13 = false;
    piVar4 = (int *)(plVar5[5] + (ulong)((int)plVar5[3] + (int)plVar5[2] & 0x3ff) * 0x68);
    if (*piVar4 == local_9b8) {
      switch(local_9b8) {
      default:
        bVar13 = true;
        break;
      case 1:
        bVar13 = (char)piVar4[1] == local_9b4._0_1_;
        break;
      case 2:
        bVar13 = (float)piVar4[1] == local_9b4;
        break;
      case 3:
        bVar13 = (float)piVar4[1] == local_9b4;
        break;
      case 4:
      case 5:
      case 6:
        __n = *(size_t *)(piVar4 + 4);
        bVar13 = false;
        if ((__n == local_9a8) && (bVar13 = true, __n != 0)) {
          iVar15 = memcmp(*(void **)(piVar4 + 2),local_9b0,__n);
          bVar13 = iVar15 == 0;
        }
      }
    }
    if (p_Var19 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = p_Var19 + 8;
      if (*(long *)(p_Var19 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var19 + 8) = 0;
        (**(code **)(*(long *)p_Var19 + 0x10))(p_Var19);
        (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(p_Var19 + 8);
          *(int *)(p_Var19 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var19);
        }
      }
    }
LAB_0010410d:
    if (local_9b0 != &local_9a0) {
      operator_delete(local_9b0,CONCAT71(uStack_99f,local_9a0) + 1);
    }
    if (bVar13) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else if (*(int *)(plVar5[5] + (ulong)((int)plVar5[2] + (int)plVar5[3] & 0x3ff) * 0x68) == 0) {
    bVar13 = true;
    goto LAB_0010410d;
  }
  Stream<embree::Token>::get();
  local_e8 = CONCAT17(local_e8._7_1_,0x73646165726874);
  local_140 = 7;
  local_138 = 0x73646165726874;
  local_a8 = (ulong *)CONCAT44(local_a8._4_4_,4);
  local_98 = 7;
  local_90 = 0x73646165726874;
  local_80 = 0;
  local_78 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  if ((((local_968[0] == 4) && (local_958 == 7)) && ((int)*local_960 == 0x65726874)) &&
     (*(int *)((long)local_960 + 3) == 0x73646165)) {
    local_e8 = CONCAT62(local_e8._2_6_,0x3d);
    local_f0 = (undefined4 *)0x1;
    local_148 = &local_138;
    local_f8 = &local_e8;
    local_a0 = &local_90;
    cVar12 = embree::TokenStream::trySymbol((string *)*param_2);
    if (local_f8 != &local_e8) {
      operator_delete(local_f8,local_e8 + 1);
    }
    p_Var19 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))();
        (**(code **)(*(long *)p_Var19 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0 != &local_90) {
      operator_delete(local_a0,local_90 + 1);
    }
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
    }
    if (cVar12 == '\0') goto LAB_00104400;
    Stream<embree::Token>::get();
    p_Var19 = local_8e8;
    if (local_918 == 2) {
      *(long *)(this + 0x4b8) = (long)local_914;
      if (local_8e8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = local_8e8 + 8;
        if (*(long *)(local_8e8 + 8) == 0x100000001) {
          *(undefined8 *)(local_8e8 + 8) = 0;
          (**(code **)(*(long *)local_8e8 + 0x10))(local_8e8);
          (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar15 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar15 = *(int *)(local_8e8 + 8);
            *(int *)(local_8e8 + 8) = iVar15 + -1;
          }
          if (iVar15 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_8e8);
          }
        }
      }
      if (local_910 != local_900) {
        operator_delete(local_910,local_900[0] + 1);
      }
      goto LAB_00104323;
    }
    goto embree_State_parse;
  }
LAB_00104400:
  local_138 = 0x7268745f72657375;
  local_130 = 0x73646165;
  local_140 = 0xc;
  local_12c = 0;
  local_e0 = 0x73646165;
  local_a8 = (ulong *)CONCAT44(local_a8._4_4_,4);
  local_90 = 0x7268745f72657375;
  local_88 = 0x73646165;
  local_98 = 0xc;
  local_84 = 0;
  local_80 = 0;
  local_78 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  if (((local_968[0] == 4) && (local_958 == 0xc)) &&
     ((*local_960 == 0x7268745f72657375 && ((int)local_960[1] == 0x73646165)))) {
    local_e8 = 0x7268745f7265003d;
    local_f0 = (undefined4 *)0x1;
    local_148 = &local_138;
    local_f8 = &local_e8;
    local_a0 = &local_90;
    cVar12 = embree::TokenStream::trySymbol((string *)*param_2);
    if (local_f8 != &local_e8) {
      operator_delete(local_f8,local_e8 + 1);
    }
    p_Var19 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))();
        (**(code **)(*(long *)p_Var19 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0 != &local_90) {
      operator_delete(local_a0,local_90 + 1);
    }
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
    }
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      p_Var19 = local_898;
      if (local_8c8 == 2) {
        *(long *)(this + 0x4c0) = (long)local_8c4;
        if (local_898 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          p_Var1 = local_898 + 8;
          if (*(long *)(local_898 + 8) == 0x100000001) {
            *(undefined8 *)(local_898 + 8) = 0;
            (**(code **)(*(long *)local_898 + 0x10))(local_898);
            (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar15 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar15 = *(int *)(local_898 + 8);
              *(int *)(local_898 + 8) = iVar15 + -1;
            }
            if (iVar15 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_898)
              ;
            }
          }
        }
        if (local_8c0 != local_8b0) {
          operator_delete(local_8c0,local_8b0[0] + 1);
        }
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  local_138 = 0x696666615f746573;
  local_130 = 0x7974696e;
  local_140 = 0xc;
  local_12c = 0;
  local_e8 = 0x696666615f746573;
  local_e0 = 0x7974696e;
  local_a8 = (ulong *)CONCAT44(local_a8._4_4_,4);
  local_90 = 0x696666615f746573;
  local_88 = 0x7974696e;
  local_98 = 0xc;
  local_84 = 0;
  local_80 = 0;
  local_78 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  local_70 = 0xffffffffffffffff;
  local_68 = 0xffffffffffffffff;
  local_a0 = &local_90;
  if (((local_968[0] == 4) && (local_958 == 0xc)) &&
     ((*local_960 == 0x696666615f746573 && ((int)local_960[1] == 0x7974696e)))) {
    local_e8 = 0x696666615f74003d;
    local_f0 = (undefined4 *)0x1;
    local_148 = &local_138;
    local_f8 = &local_e8;
    cVar12 = embree::TokenStream::trySymbol((string *)*param_2);
    if (local_f8 != &local_e8) {
      operator_delete(local_f8,local_e8 + 1);
    }
    p_Var19 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var1 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))();
        (**(code **)(*(long *)p_Var19 + 0x18))();
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar15 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar15 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar15 + -1;
        }
        if (iVar15 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0 != &local_90) {
      operator_delete(local_a0,local_90 + 1);
    }
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
    }
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_878 == 2) {
        this[0x4c8] = (State)(local_874 != 0);
        Token::~Token((Token *)&local_878);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  local_138 = 0x7974696e69666661;
  local_140 = 8;
  local_130 = local_130 & 0xffffff00;
  local_148 = &local_138;
  Token::Id((Token *)&local_a8,&local_138,8);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_00;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_01;
    }
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    if (local_f8 != &local_e8) {
      operator_delete(local_f8,local_e8 + 1);
    }
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_23;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_24;
    }
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_828 == 2) {
        this[0x4c8] = (State)(local_824 != 0);
        Token::~Token((Token *)&local_828);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"start_threads",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_03;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_04;
    }
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_02);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    if (local_f8 != &local_e8) {
      operator_delete(local_f8,local_e8 + 1);
    }
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_25;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_26;
    }
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_7d8 == 2) {
        this[0x4c9] = (State)(local_7d4 != 0);
        Token::~Token((Token *)&local_7d8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"isa",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_06;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_07;
    }
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_05);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    paVar18 = extraout_RDX_27;
    if (local_148 != &local_138) {
      operator_delete(local_148,local_138 + 1);
      paVar18 = extraout_RDX_28;
    }
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&local_148);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      uVar14 = string_to_cpufeatures((string *)&local_148);
      *(undefined4 *)(this + 0x4cc) = uVar14;
      *(undefined4 *)(this + 0x4d0) = uVar14;
      if (local_148 != &local_138) {
        operator_delete(local_148,local_138 + 1);
      }
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"max_isa",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_09;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_08);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_29;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&local_148);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      uVar16 = string_to_cpufeatures((string *)&local_148);
      *(uint *)(this + 0x4d0) = *(uint *)(this + 0x4d0) & uVar16 & *(uint *)(this + 0x4cc);
      *(uint *)(this + 0x4cc) = uVar16 & *(uint *)(this + 0x4cc);
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"max_builder_isa",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_11;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_10);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_30;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      embree::toLowerCase((string *)&local_148);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      uVar16 = string_to_cpufeatures((string *)&local_148);
      *(uint *)(this + 0x4d0) = *(uint *)(this + 0x4d0) & uVar16;
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"frequency_level",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_13;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_12);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_31;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      Token::~Token((Token *)&local_a8);
      bVar13 = std::operator==((string *)&local_f8,"simd128");
      if (bVar13) {
        *(undefined4 *)(this + 0x4d4) = 0;
      }
      else {
        bVar13 = std::operator==((string *)&local_f8,"simd256");
        if (bVar13) {
          *(undefined4 *)(this + 0x4d4) = 1;
        }
        else {
          bVar13 = std::operator==((string *)&local_f8,"simd512");
          if (bVar13) {
            *(undefined4 *)(this + 0x4d4) = 2;
          }
        }
      }
      std::__cxx11::string::_M_dispose();
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"enable_selockmemoryprivilege",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_15;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_14);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_32;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_788 == 2) {
        this[0x4d8] = (State)(local_784 != 0);
        Token::~Token((Token *)&local_788);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hugepages",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_17;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_16);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_33;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_738 == 2) {
        this[0x4d9] = (State)(local_734 != 0);
        Token::~Token((Token *)&local_738);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"float_exceptions",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_19;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_18);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_34;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_6e8 == 2) {
        this[0x498] = (State)(local_6e4 != 0);
        Token::~Token((Token *)&local_6e8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_1e8,"tri_accel",paVar18);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_198,"accel",extraout_RDX_20)
    ;
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_21);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_20);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0x10;
LAB_00104d35:
    std::__cxx11::string::operator=((string *)this_01,(string *)&local_f8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_1e8,"tri_builder",extraout_RDX_22);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_198,"builder",extraout_RDX_35);
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_36);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_35);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0x30;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_1e8,"tri_traverser",extraout_RDX_37);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_198,"traverser",extraout_RDX_38);
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_39);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_38);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0x50;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_1e8,"tri_accel_mb",extraout_RDX_40);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_198,"accel_mb",extraout_RDX_41);
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_42);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_41);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0x70;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_1e8,"tri_builder_mb",extraout_RDX_43);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_198,"builder_mb",extraout_RDX_44);
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_45);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_44);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0x90;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_1e8,"tri_traverser_mb",extraout_RDX_46);
  Token::Id((Token *)&local_f8,CONCAT44(iStack_1e4,local_1e8),local_1e0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_f8);
  if (cVar12 == '\0') {
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_198,"traverser_mb",extraout_RDX_47);
    Token::Id((Token *)&local_a8,CONCAT44(uStack_194,local_198),local_190);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 != '\0') {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_48);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"=",extraout_RDX_47);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
  }
  Token::~Token((Token *)&local_f8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    Stream<embree::Token>::get();
    Token::Identifier_abi_cxx11_();
    this_01 = this + 0xb0;
    goto LAB_00104d35;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"quad_accel",extraout_RDX_49);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_51;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_50);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00127;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0xd0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"quad_builder",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_53;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_52);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00191;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0xf0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"quad_traverser",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_55;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_54);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00190;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x110;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"quad_accel_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_57;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_56);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00189;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x130;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"quad_builder_mb",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_59;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_58);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00188;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x150;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"quad_traverser_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_61;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_60);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00187;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x170;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"line_accel",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_63;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_62);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00186;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 400;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"line_builder",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_65;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_64);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00185;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x1b0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"line_traverser",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_67;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_66);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00184;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x1d0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"line_accel_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_69;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_68);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00183;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x1f0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"line_builder_mb",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_71;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_70);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00182;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x210;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"line_traverser_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_73;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_72);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00181;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x230;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hair_accel",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_75;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_74);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00180;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x250;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hair_builder",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_77;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_76);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00179;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x270;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hair_traverser",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_79;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_78);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00178;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x290;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hair_accel_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_81;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_80);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00177;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x2b0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"hair_builder_mb",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_83;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_82);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00176;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x2d0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"hair_traverser_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_85;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_84);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00175;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x2f0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"object_accel",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_87;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_86);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00174;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x310;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"object_builder",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_89;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_88);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00173;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x330;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"object_accel_min_leaf_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_91;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_90);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00172;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_698 == 2) {
        *(undefined4 *)(this + 0x350) = local_694;
        Token::~Token((Token *)&local_698);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"object_accel_max_leaf_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_93;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_92);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00171;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_648 == 2) {
        *(undefined4 *)(this + 0x354) = local_644;
        Token::~Token((Token *)&local_648);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"object_accel_mb",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_95;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_94);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00170;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x358;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"object_builder_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_97;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_96);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00169;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x378;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"object_accel_mb_min_leaf_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_99;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_98);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00168;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_5f8 == 2) {
        *(undefined4 *)(this + 0x398) = local_5f4;
        Token::~Token((Token *)&local_5f8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"object_accel_mb_max_leaf_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00101;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00100);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00166;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_5a8 == 2) {
        *(undefined4 *)(this + 0x39c) = local_5a4;
        Token::~Token((Token *)&local_5a8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"instancing_open_min",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00103;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00102);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00165;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_558 == 2) {
        *(long *)(this + 0x470) = (long)local_554;
        Token::~Token((Token *)&local_558);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"instancing_block_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00105;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00104);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00167;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_508 == 2) {
        *(long *)(this + 0x478) = (long)local_504;
        Token::~Token((Token *)&local_508);
        *(undefined4 *)(this + 0x480) = 0;
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"instancing_open_max_depth",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00107;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00106);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00164;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_4b8 == 2) {
        *(long *)(this + 0x488) = (long)local_4b4;
        Token::~Token((Token *)&local_4b8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"instancing_open_factor",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00109;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00108);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00163;
    if (cVar12 != '\0') {
      *(undefined8 *)(this + 0x478) = 0;
      Stream<embree::Token>::get();
      fVar20 = local_464;
      if (local_468 != 3) {
        if (local_468 != 2) goto embree_State_parse;
        fVar20 = (float)(int)local_464;
      }
      *(float *)(this + 0x480) = fVar20;
      Token::~Token((Token *)&local_468);
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"instancing_open_max",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00111;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00110);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00162;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_418 == 2) {
        *(long *)(this + 0x490) = (long)local_414;
        Token::~Token((Token *)&local_418);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"subdiv_accel",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00113;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00112);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00161;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x3a0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"subdiv_accel_mb",paVar18)
  ;
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00115;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00114);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00160;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x3c0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"grid_accel",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00117;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00116);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00158;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x3e0;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"grid_accel_mb",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00119;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00118);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00157;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      Token::Identifier_abi_cxx11_();
      this_01 = this + 0x420;
      goto LAB_00104d35;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"verbose",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00121;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00120);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00159;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_3c8 == 2) {
        *(long *)(this + 0x4a8) = (long)local_3c4;
        Token::~Token((Token *)&local_3c8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"benchmark",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00123;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00122);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00154;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_378 == 2) {
        *(long *)(this + 0x4b0) = (long)local_374;
        Token::~Token((Token *)&local_378);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"quality",paVar18);
  Token::Id((Token *)&local_a8,local_f8,local_f0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  Token::~Token((Token *)&local_a8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_a8,"=",extraout_RDX_x00124);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    if (cVar12 == '\0') goto LAB_00104323;
    Stream<embree::Token>::get();
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_148,"low",extraout_RDX_x00125);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    if (cVar12 == '\0') {
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_148,"medium",extraout_RDX_x00126);
      Token::Id((Token *)&local_a8,local_148,local_140);
      cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      if (cVar12 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_148,"high",extraout_RDX_x00128);
        Token::Id((Token *)&local_a8,local_148,local_140);
        cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
        Token::~Token((Token *)&local_a8);
        std::__cxx11::string::_M_dispose();
        if (cVar12 != '\0') {
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
LAB_00106d9e:
    Token::~Token((Token *)&local_f8);
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_f8,"scene_flags",extraout_RDX_x00124);
  Token::Id((Token *)&local_a8,local_f8,local_f0);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  Token::~Token((Token *)&local_a8);
  std::__cxx11::string::_M_dispose();
  if (cVar12 != '\0') {
    *(undefined4 *)(this + 0x4a0) = 0;
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_a8,"=",extraout_RDX_x00129);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    while (cVar12 != '\0') {
      Stream<embree::Token>::get();
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_148,"dynamic",extraout_RDX_x00130);
      Token::Id((Token *)&local_a8,local_148,local_140);
      cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      if (cVar12 == '\0') {
        std::__cxx11::string::string<std::allocator<char>>
                  ((string *)&local_148,"compact",extraout_RDX_x00131);
        Token::Id((Token *)&local_a8,local_148,local_140);
        cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
        Token::~Token((Token *)&local_a8);
        std::__cxx11::string::_M_dispose();
        if (cVar12 == '\0') {
          std::__cxx11::string::string<std::allocator<char>>
                    ((string *)&local_148,"robust",extraout_RDX_x00133);
          Token::Id((Token *)&local_a8,local_148,local_140);
          cVar12 = operator==((Token *)&local_f8,(Token *)&local_a8);
          Token::~Token((Token *)&local_a8);
          std::__cxx11::string::_M_dispose();
          if (cVar12 != '\0') {
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
      Token::~Token((Token *)&local_f8);
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_a8,"|",extraout_RDX_x00132);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
    }
    goto LAB_00104323;
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"max_spatial_split_replications",extraout_RDX_x00129);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00135;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00134);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00156;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      fVar20 = local_324;
      if (local_328 != 3) {
        if (local_328 != 2) goto embree_State_parse;
        fVar20 = (float)(int)local_324;
      }
      *(float *)(this + 0x460) = fVar20;
      Token::~Token((Token *)&local_328);
      goto LAB_00104323;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"presplits",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00137;
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00136);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00155;
    if (cVar12 != '\0') {
      Stream<embree::Token>::get();
      if (local_2d8 == 2) {
        this[0x464] = (State)(local_2d4 != 0);
        Token::~Token((Token *)&local_2d8);
        goto LAB_00104323;
      }
      goto embree_State_parse;
    }
  }
  std::__cxx11::string::string<std::allocator<char>>
            ((string *)&local_148,"tessellation_cache_size",paVar18);
  Token::Id((Token *)&local_a8,local_148,local_140);
  cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
  if (cVar12 == '\0') {
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00139;
LAB_0010715f:
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_148,"cache_size",paVar18);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 == '\0') {
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00141;
    }
    else {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_f8,"=",extraout_RDX_x00140);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00152;
      if (cVar12 != '\0') {
        this_00 = (Token *)&local_238;
        Stream<embree::Token>::get();
        fVar20 = local_234;
        if (local_238 != 3) {
          if (local_238 == 2) {
            fVar20 = (float)(int)local_234;
            goto LAB_001075b3;
          }
          goto embree_State_parse;
        }
        goto LAB_001075b3;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_148,"alloc_main_block_size",paVar18);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 == '\0') {
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00143;
    }
    else {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_f8,"=",extraout_RDX_x00142);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00151;
      if (cVar12 != '\0') {
        Stream<embree::Token>::get();
        if (local_1e8 == 2) {
          *(long *)(this + 0x4e0) = (long)iStack_1e4;
          Token::~Token((Token *)&local_1e8);
          goto LAB_00104323;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_148,"alloc_num_main_slots",paVar18);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 == '\0') {
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00145;
    }
    else {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_f8,"=",extraout_RDX_x00144);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00150;
      if (cVar12 != '\0') {
        this_00 = (Token *)&local_198;
        Stream<embree::Token>::get();
        if (local_198 == 2) {
          *(undefined4 *)(this + 0x4e8) = uStack_194;
          goto LAB_001074ac;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_148,"alloc_thread_block_size",paVar18);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 == '\0') {
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00147;
    }
    else {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_f8,"=",extraout_RDX_x00146);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      paVar18 = extraout_RDX_x00149;
      if (cVar12 != '\0') {
        Stream<embree::Token>::get();
        if ((int)local_148 == 2) {
          *(long *)(this + 0x4f0) = (long)local_148._4_4_;
          Token::~Token((Token *)&local_148);
          goto LAB_00104323;
        }
        goto embree_State_parse;
      }
    }
    std::__cxx11::string::string<std::allocator<char>>
              ((string *)&local_148,"alloc_single_thread_alloc",paVar18);
    Token::Id((Token *)&local_a8,local_148,local_140);
    cVar12 = operator==((Token *)local_968,(Token *)&local_a8);
    if (cVar12 == '\0') {
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
    }
    else {
      psVar8 = (string *)*param_2;
      std::__cxx11::string::string<std::allocator<char>>
                ((string *)&local_f8,"=",extraout_RDX_x00148);
      cVar12 = embree::TokenStream::trySymbol(psVar8);
      std::__cxx11::string::_M_dispose();
      Token::~Token((Token *)&local_a8);
      std::__cxx11::string::_M_dispose();
      if (cVar12 != '\0') {
        Stream<embree::Token>::get();
        if ((int)local_f8 == 2) {
          *(undefined4 *)(this + 0x4f8) = local_f8._4_4_;
          goto LAB_00106d9e;
        }
        goto embree_State_parse;
      }
    }
  }
  else {
    psVar8 = (string *)*param_2;
    std::__cxx11::string::string<std::allocator<char>>((string *)&local_f8,"=",extraout_RDX_x00138);
    cVar12 = embree::TokenStream::trySymbol(psVar8);
    std::__cxx11::string::_M_dispose();
    Token::~Token((Token *)&local_a8);
    std::__cxx11::string::_M_dispose();
    paVar18 = extraout_RDX_x00153;
    if (cVar12 == '\0') goto LAB_0010715f;
    this_00 = (Token *)&local_288;
    Stream<embree::Token>::get();
    fVar20 = local_284;
    if (local_288 != 3) {
      if (local_288 != 2) goto embree_State_parse;
      fVar20 = (float)(int)local_284;
    }
LAB_001075b3:
    fVar20 = fVar20 * _LC120 * _LC120;
    if (__LC121 <= fVar20) {
      *(long *)(this + 0x468) = (long)(fVar20 - __LC121);
      *(ulong *)(this + 0x468) = *(ulong *)(this + 0x468) ^ 0x8000000000000000;
    }
    else {
      *(long *)(this + 0x468) = (long)fVar20;
    }
LAB_001074ac:
    Token::~Token(this_00);
  }
LAB_00104323:
  local_a0 = (ulong *)0x1;
  local_98 = CONCAT62(local_98._2_6_,0x2c);
  local_a8 = &local_98;
  embree::TokenStream::trySymbol((string *)*param_2);
  if (local_a8 != &local_98) {
    operator_delete(local_a8,local_98 + 1);
  }
  p_Var19 = local_938;
  if (local_938 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    p_Var1 = local_938 + 8;
    if (*(long *)(local_938 + 8) == 0x100000001) {
      *(undefined8 *)(local_938 + 8) = 0;
      (**(code **)(*(long *)local_938 + 0x10))(local_938);
      (**(code **)(*(long *)p_Var19 + 0x18))(p_Var19);
    }
    else {
      if (__libc_single_threaded == '\0') {
        LOCK();
        iVar15 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar15 = *(int *)(local_938 + 8);
        *(int *)(local_938 + 8) = iVar15 + -1;
      }
      if (iVar15 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_938);
      }
    }
  }
  if (local_960 != local_950) {
    operator_delete(local_960,local_950[0] + 1);
  }
  goto LAB_00103a10;
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
  TokenStream *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  TokenStream *pTVar15;
  long *plVar16;
  long *plVar17;
  TokenStream *pTVar18;
  undefined4 *puVar19;
  ulong *__dest;
  TokenStream *pTVar20;
  uint uVar21;
  TokenStream **ppTVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  TokenStream **ppTVar26;
  ulong uVar27;
  TokenStream *pTVar28;
  long *plVar29;
  TokenStream **ppTVar30;
  long in_FS_OFFSET;
  TokenStream *local_f0;
  TokenStream *local_e8;
  TokenStream *local_e0;
  TokenStream *local_d8;
  TokenStream *local_c8;
  TokenStream *local_c0;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)operator_new(0x270);
  plVar9[1] = 0;
  *plVar9 = (long)&DAT_0010f410;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  puVar10 = (undefined4 *)operator_new(0xa000);
  plVar9[5] = (long)puVar10;
  plVar9[7] = (long)(puVar10 + 0x2800);
  puVar19 = puVar10;
  do {
    *puVar19 = 0;
    puVar11 = puVar19 + 10;
    *(undefined8 *)(puVar19 + 2) = 0;
    *(undefined8 *)(puVar19 + 4) = 0;
    *(undefined8 *)(puVar19 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
    puVar19 = puVar11;
  } while (puVar11 != puVar10 + 0x2800);
  plVar9[6] = (long)puVar11;
  *plVar9 = (long)&PTR__FileStream_0010f450;
  std::ios_base::ios_base((ios_base *)(plVar9 + 0x28));
  plVar9[0x28] = (long)std::ios::clear;
  lVar14 = _vtable;
  *(undefined2 *)(plVar9 + 0x44) = 0;
  uVar6 = __ios_base;
  plVar9[8] = lVar14;
  plVar9[0x43] = 0;
  plVar9[0x45] = 0;
  plVar9[0x46] = 0;
  plVar9[0x47] = 0;
  plVar9[0x48] = 0;
  *(undefined8 *)((long)plVar9 + *(long *)(lVar14 + -0x18) + 0x40) = uVar6;
  plVar9[9] = 0;
  std::ios::init((streambuf *)((long)plVar9 + *(long *)(plVar9[8] + -0x18) + 0x40));
  plVar9[8] = (long)std::__basic_file<char>::~__basic_file;
  plVar9[0x28] = (long)std::ios_base::~ios_base;
  std::filebuf::filebuf((filebuf *)(plVar9 + 10));
  std::ios::init((streambuf *)(plVar9 + 0x28));
  plVar9[0x49] = 1;
  plVar9[0x4a] = 0;
  plVar9[0x4b] = 0;
  puVar12 = (ulong *)operator_new(0x20);
  pTVar15 = *(TokenStream **)(param_1 + 8);
  puVar2 = *(undefined1 **)param_1;
  __dest = puVar12 + 2;
  *puVar12 = (ulong)__dest;
  local_e8 = pTVar15;
  if (pTVar15 < (TokenStream *)0x10) {
    if (pTVar15 == (TokenStream *)0x1) {
      *(undefined1 *)(puVar12 + 2) = *puVar2;
    }
    else if (pTVar15 != (TokenStream *)0x0) goto LAB_001094a7;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(puVar12,(ulong)&local_e8);
    *puVar12 = (ulong)__dest;
    puVar12[2] = (ulong)local_e8;
LAB_001094a7:
    memcpy(__dest,puVar2,(size_t)pTVar15);
    __dest = (ulong *)*puVar12;
  }
  puVar12[1] = (ulong)local_e8;
  *(TokenStream *)((long)__dest + (long)local_e8) = (TokenStream)0x0;
  plVar9[0x4c] = (long)puVar12;
  plVar9[0x4d] = 0;
  puVar13 = (undefined8 *)operator_new(0x18);
  puVar13[1] = 0x100000001;
  *puVar13 = &PTR___Sp_counted_ptr_0010f540;
  puVar13[2] = puVar12;
  plVar9[0x4d] = (long)puVar13;
  if (((*(byte *)(plVar9 + 0x2c) & 5) == 0) && (lVar14 = std::filebuf::close(), lVar14 == 0)) {
    lVar14 = (long)plVar9 + *(long *)(plVar9[8] + -0x18) + 0x40;
    std::ios::clear(lVar14,*(uint *)(lVar14 + 0x20) | 4);
  }
  puVar2 = *(undefined1 **)param_1;
  pTVar15 = *(TokenStream **)(param_1 + 8);
  local_68 = local_58;
  local_e8 = pTVar15;
  if (pTVar15 < (TokenStream *)0x10) {
    if (pTVar15 == (TokenStream *)0x1) {
      local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar2);
    }
    else if (pTVar15 != (TokenStream *)0x0) goto LAB_0010942f;
  }
  else {
    local_68 = (TokenStream **)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_e8);
    local_58[0] = local_e8;
LAB_0010942f:
    memcpy(local_68,puVar2,(size_t)pTVar15);
  }
  *(TokenStream *)((long)local_68 + (long)local_e8) = (TokenStream)0x0;
  local_60 = local_e8;
  lVar14 = std::filebuf::open((filebuf *)(plVar9 + 10),local_68,8);
  if (lVar14 == 0) {
    lVar14 = (long)plVar9 + *(long *)(plVar9[8] + -0x18) + 0x40;
    std::ios::clear(lVar14,*(uint *)(lVar14 + 0x20) | 4);
  }
  else {
    std::ios::clear((long)plVar9 + *(long *)(plVar9[8] + -0x18) + 0x40,0);
  }
  if (local_68 != local_58) {
    operator_delete(local_68,(ulong)(local_58[0] + 1));
  }
  cVar7 = std::__basic_file<char>::is_open();
  if (cVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar9[1] = plVar9[1] + 1;
    UNLOCK();
  }
  puVar5 = symbols;
  local_e8 = (TokenStream *)0x0;
  local_e0 = (TokenStream *)0x0;
  local_d8 = (TokenStream *)0x0;
  local_68 = local_58;
  if (symbols != (undefined *)0x0) {
    pTVar15 = (TokenStream *)strlen(symbols);
    local_f0 = pTVar15;
    if (pTVar15 < (TokenStream *)0x10) {
      ppTVar22 = local_58;
      if (pTVar15 == (TokenStream *)0x1) {
        local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar5);
      }
      else if (pTVar15 != (TokenStream *)0x0) goto LAB_001094ea;
    }
    else {
      local_68 = (TokenStream **)
                 std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_f0);
      local_58[0] = local_f0;
      ppTVar22 = local_68;
LAB_001094ea:
      memcpy(ppTVar22,puVar5,(size_t)pTVar15);
      ppTVar22 = local_68;
    }
    local_60 = local_f0;
    *(TokenStream *)((long)ppTVar22 + (long)local_f0) = (TokenStream)0x0;
    if (local_d8 == local_e0) {
      std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
      _M_realloc_insert<std::__cxx11::string>
                ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_e8,
                 local_e0,(string *)&local_68);
      if (local_68 != local_58) {
        operator_delete(local_68,(ulong)(local_58[0] + 1));
      }
    }
    else {
      *(TokenStream **)local_e0 = local_e0 + 0x10;
      if (local_68 == local_58) {
        pTVar15 = local_f0 + 1;
        uVar21 = (uint)pTVar15;
        if (uVar21 < 8) {
          if (((ulong)pTVar15 & 4) == 0) {
            if (uVar21 != 0) {
              local_e0[0x10] = local_58[0]._0_1_;
              if (((ulong)pTVar15 & 2) != 0) {
                *(undefined2 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xe) =
                     *(undefined2 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 2));
              }
            }
          }
          else {
            *(undefined4 *)(local_e0 + 0x10) = local_58[0]._0_4_;
            *(undefined4 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 4));
          }
        }
        else {
          *(TokenStream **)(local_e0 + 0x10) = local_58[0];
          *(undefined8 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 8));
          lVar14 = (long)(local_e0 + 0x10) - ((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8);
          uVar21 = uVar21 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar21) {
            uVar8 = 0;
            do {
              uVar27 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8) + uVar27) =
                   *(undefined8 *)((long)local_58 + (uVar27 - lVar14));
            } while (uVar8 < uVar21);
          }
        }
      }
      else {
        *(TokenStream ***)local_e0 = local_68;
        *(TokenStream **)(local_e0 + 0x10) = local_58[0];
      }
      *(TokenStream **)(local_e0 + 8) = local_f0;
      local_e0 = local_e0 + 0x20;
    }
    puVar5 = PTR_DAT_0010f578;
    local_68 = local_58;
    if (PTR_DAT_0010f578 != (undefined *)0x0) {
      pTVar15 = (TokenStream *)strlen(PTR_DAT_0010f578);
      local_f0 = pTVar15;
      if (pTVar15 < (TokenStream *)0x10) {
        ppTVar22 = local_58;
        if (pTVar15 == (TokenStream *)0x1) {
          local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar5);
        }
        else if (pTVar15 != (TokenStream *)0x0) goto LAB_0010958a;
      }
      else {
        local_68 = (TokenStream **)
                   std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_f0);
        local_58[0] = local_f0;
        ppTVar22 = local_68;
LAB_0010958a:
        memcpy(ppTVar22,puVar5,(size_t)pTVar15);
        ppTVar22 = local_68;
      }
      local_60 = local_f0;
      *(TokenStream *)((long)ppTVar22 + (long)local_f0) = (TokenStream)0x0;
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
        *(TokenStream **)local_e0 = local_e0 + 0x10;
        if (local_68 == local_58) {
          pTVar15 = local_f0 + 1;
          uVar21 = (uint)pTVar15;
          if (uVar21 < 8) {
            if (((ulong)pTVar15 & 4) == 0) {
              if (uVar21 != 0) {
                local_e0[0x10] = local_58[0]._0_1_;
                if (((ulong)pTVar15 & 2) != 0) {
                  *(undefined2 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)(local_e0 + 0x10) = local_58[0]._0_4_;
              *(undefined4 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 4));
            }
          }
          else {
            *(TokenStream **)(local_e0 + 0x10) = local_58[0];
            *(undefined8 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 8));
            lVar14 = (long)(local_e0 + 0x10) - ((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8);
            uVar21 = uVar21 + (int)lVar14 & 0xfffffff8;
            if (7 < uVar21) {
              uVar8 = 0;
              do {
                uVar27 = (ulong)uVar8;
                uVar8 = uVar8 + 8;
                *(undefined8 *)(((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8) + uVar27) =
                     *(undefined8 *)((long)local_58 + (uVar27 - lVar14));
              } while (uVar8 < uVar21);
            }
          }
        }
        else {
          *(TokenStream ***)local_e0 = local_68;
          *(TokenStream **)(local_e0 + 0x10) = local_58[0];
        }
        *(TokenStream **)(local_e0 + 8) = local_f0;
        local_e0 = local_e0 + 0x20;
      }
      puVar5 = PTR__LC116_0010f580;
      local_68 = local_58;
      if (PTR__LC116_0010f580 != (undefined *)0x0) {
        pTVar15 = (TokenStream *)strlen(PTR__LC116_0010f580);
        local_f0 = pTVar15;
        if (pTVar15 < (TokenStream *)0x10) {
          ppTVar22 = local_58;
          if (pTVar15 == (TokenStream *)0x1) {
            local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar5);
          }
          else if (pTVar15 != (TokenStream *)0x0) goto LAB_0010953a;
        }
        else {
          local_68 = (TokenStream **)
                     std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_f0);
          local_58[0] = local_f0;
          ppTVar22 = local_68;
LAB_0010953a:
          memcpy(ppTVar22,puVar5,(size_t)pTVar15);
          ppTVar22 = local_68;
        }
        local_60 = local_f0;
        *(TokenStream *)((long)ppTVar22 + (long)local_f0) = (TokenStream)0x0;
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
          *(TokenStream **)local_e0 = local_e0 + 0x10;
          if (local_68 == local_58) {
            pTVar15 = local_f0 + 1;
            uVar21 = (uint)pTVar15;
            if (uVar21 < 8) {
              if (((ulong)pTVar15 & 4) == 0) {
                if (uVar21 != 0) {
                  local_e0[0x10] = local_58[0]._0_1_;
                  if (((ulong)pTVar15 & 2) != 0) {
                    *(undefined2 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xe) =
                         *(undefined2 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 2));
                  }
                }
              }
              else {
                *(undefined4 *)(local_e0 + 0x10) = local_58[0]._0_4_;
                *(undefined4 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 0xc) =
                     *(undefined4 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 4));
              }
            }
            else {
              *(TokenStream **)(local_e0 + 0x10) = local_58[0];
              *(undefined8 *)(local_e0 + ((ulong)pTVar15 & 0xffffffff) + 8) =
                   *(undefined8 *)((long)local_58 + (((ulong)pTVar15 & 0xffffffff) - 8));
              lVar14 = (long)(local_e0 + 0x10) - ((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8);
              uVar21 = uVar21 + (int)lVar14 & 0xfffffff8;
              if (7 < uVar21) {
                uVar8 = 0;
                do {
                  uVar27 = (ulong)uVar8;
                  uVar8 = uVar8 + 8;
                  *(undefined8 *)(((ulong)(local_e0 + 0x18) & 0xfffffffffffffff8) + uVar27) =
                       *(undefined8 *)((long)local_58 + (uVar27 - lVar14));
                } while (uVar8 < uVar21);
              }
            }
          }
          else {
            *(TokenStream ***)local_e0 = local_68;
            *(TokenStream **)(local_e0 + 0x10) = local_58[0];
          }
          *(TokenStream **)(local_e0 + 8) = local_f0;
          local_e0 = local_e0 + 0x20;
        }
        pTVar15 = (TokenStream *)operator_new(0x360);
        uVar23 = _reserve;
        uVar25 = TokenStream::ALPHA_abi_cxx11_;
        uVar27 = TokenStream::alpha_abi_cxx11_;
        local_a0 = 0;
        local_98 = 0;
        local_a8 = &local_98;
        std::__cxx11::string::reserve((ulong)&local_a8);
        if (((uVar25 <= 0x3fffffffffffffffU - local_a0) &&
            (std::__cxx11::string::_M_append((char *)&local_a8,uVar27),
            uVar23 <= 0x3fffffffffffffffU - local_a0)) &&
           (std::__cxx11::string::_M_append((char *)&local_a8,uVar25),
           TokenStream::separators_abi_cxx11_ <= 0x3fffffffffffffffU - local_a0)) {
          plVar16 = (long *)std::__cxx11::string::_M_append
                                      ((char *)&local_a8,TokenStream::numbers_abi_cxx11_);
          plVar17 = plVar16 + 2;
          if ((long *)*plVar16 == plVar17) {
            uVar27 = plVar16[1] + 1;
            plVar24 = plVar17;
            plVar29 = local_78;
            if (7 < (uint)uVar27) {
              uVar25 = 0;
              do {
                uVar21 = (int)uVar25 + 8;
                uVar23 = (ulong)uVar21;
                *(undefined8 *)((long)local_78 + uVar25) = *(undefined8 *)((long)plVar17 + uVar25);
                uVar25 = uVar23;
              } while (uVar21 < ((uint)uVar27 & 0xfffffff8));
              plVar29 = (long *)((long)local_78 + uVar23);
              plVar24 = (long *)(uVar23 + (long)plVar17);
            }
            lVar14 = 0;
            if ((uVar27 & 4) != 0) {
              *(int *)plVar29 = (int)*plVar24;
              lVar14 = 4;
            }
            if ((uVar27 & 2) != 0) {
              *(undefined2 *)((long)plVar29 + lVar14) = *(undefined2 *)((long)plVar24 + lVar14);
              lVar14 = lVar14 + 2;
            }
            local_88 = local_78;
            if ((uVar27 & 1) != 0) {
              *(undefined1 *)((long)plVar29 + lVar14) = *(undefined1 *)((long)plVar24 + lVar14);
            }
          }
          else {
            local_78[0] = plVar16[2];
            local_88 = (long *)*plVar16;
          }
          local_80 = plVar16[1];
          *plVar16 = (long)plVar17;
          plVar16[1] = 0;
          *(undefined1 *)(plVar16 + 2) = 0;
          if (1 < 0x3fffffffffffffffU - local_80) {
            plVar17 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10b161);
            ppTVar22 = (TokenStream **)(plVar17 + 2);
            if ((TokenStream **)*plVar17 == ppTVar22) {
              uVar27 = plVar17[1] + 1;
              ppTVar26 = ppTVar22;
              ppTVar30 = local_58;
              if (7 < (uint)uVar27) {
                uVar25 = 0;
                do {
                  uVar21 = (int)uVar25 + 8;
                  uVar23 = (ulong)uVar21;
                  *(undefined8 *)((long)local_58 + uVar25) =
                       *(undefined8 *)((long)ppTVar22 + uVar25);
                  uVar25 = uVar23;
                } while (uVar21 < ((uint)uVar27 & 0xfffffff8));
                ppTVar30 = (TokenStream **)((long)local_58 + uVar23);
                ppTVar26 = (TokenStream **)(uVar23 + (long)ppTVar22);
              }
              lVar14 = 0;
              if ((uVar27 & 4) != 0) {
                *(undefined4 *)ppTVar30 = *(undefined4 *)ppTVar26;
                lVar14 = 4;
              }
              if ((uVar27 & 2) != 0) {
                *(undefined2 *)((long)ppTVar30 + lVar14) = *(undefined2 *)((long)ppTVar26 + lVar14);
                lVar14 = lVar14 + 2;
              }
              local_68 = local_58;
              if ((uVar27 & 1) != 0) {
                *(undefined1 *)((long)ppTVar30 + lVar14) = *(undefined1 *)((long)ppTVar26 + lVar14);
              }
            }
            else {
              local_58[0] = (TokenStream *)plVar17[2];
              local_68 = (TokenStream **)*plVar17;
            }
            local_60 = (TokenStream *)plVar17[1];
            *plVar17 = (long)ppTVar22;
            plVar17[1] = 0;
            *(undefined1 *)(plVar17 + 2) = 0;
            pTVar18 = (TokenStream *)operator_new(0x68);
            local_c0 = (TokenStream *)0x1;
            local_b8 = 0x23;
            local_c8 = (TokenStream *)&local_b8;
            if (plVar9 != (long *)0x0) {
              if (*(code **)(*plVar9 + 0x10) == RefCount::refInc) {
                LOCK();
                plVar9[1] = plVar9[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            *(long *)(pTVar18 + 8) = 0;
            *(undefined **)pTVar18 = &DAT_0010f410;
            *(long *)(pTVar18 + 0x10) = 0;
            *(long *)(pTVar18 + 0x18) = 0;
            *(long *)(pTVar18 + 0x20) = 0;
            *(long *)(pTVar18 + 0x28) = 0;
            *(long *)(pTVar18 + 0x30) = 0;
            *(long *)(pTVar18 + 0x38) = 0;
            puVar10 = (undefined4 *)operator_new(0xa000);
            *(undefined4 **)(pTVar18 + 0x28) = puVar10;
            *(undefined4 **)(pTVar18 + 0x38) = puVar10 + 0x2800;
            puVar19 = puVar10;
            do {
              *puVar19 = 0;
              puVar11 = puVar19 + 10;
              *(undefined8 *)(puVar19 + 2) = 0;
              *(undefined8 *)(puVar19 + 4) = 0;
              *(undefined8 *)(puVar19 + 6) = 0xffffffffffffffff;
              *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
              puVar19 = puVar11;
            } while (puVar11 != puVar10 + 0x2800);
            *(undefined4 **)(pTVar18 + 0x30) = puVar11;
            *(undefined ***)pTVar18 = &PTR__LineCommentFilter_0010f4d0;
            *(long **)(pTVar18 + 0x40) = plVar9;
            if (plVar9 != (long *)0x0) {
              if (*(code **)(*plVar9 + 0x10) == RefCount::refInc) {
                LOCK();
                plVar9[1] = plVar9[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            pTVar28 = local_c0;
            pTVar1 = local_c8;
            pTVar20 = pTVar18 + 0x58;
            *(TokenStream **)(pTVar18 + 0x48) = pTVar20;
            local_f0 = local_c0;
            if (local_c0 < (TokenStream *)0x10) {
              if (local_c0 == (TokenStream *)0x1) {
                pTVar18[0x58] = *local_c8;
              }
              else if (local_c0 != (TokenStream *)0x0) goto LAB_00109616;
            }
            else {
              pTVar20 = (TokenStream *)
                        std::__cxx11::string::_M_create((ulong *)(pTVar18 + 0x48),(ulong)&local_f0);
              *(TokenStream **)(pTVar18 + 0x48) = pTVar20;
              *(TokenStream **)(pTVar18 + 0x58) = local_f0;
LAB_00109616:
              memcpy(pTVar20,pTVar1,(size_t)pTVar28);
              pTVar20 = *(TokenStream **)(pTVar18 + 0x48);
              pTVar28 = local_f0;
            }
            *(TokenStream **)(pTVar18 + 0x50) = pTVar28;
            pTVar20[(long)pTVar28] = (TokenStream)0x0;
            if (pTVar18 != (TokenStream *)0x0) {
              LOCK();
              *(long *)(pTVar18 + 8) = *(long *)(pTVar18 + 8) + 1;
              UNLOCK();
            }
            local_f0 = pTVar18;
            embree::TokenStream::TokenStream
                      (pTVar15,(Ref *)&local_f0,(string *)&local_68,
                       (string *)&TokenStream::separators_abi_cxx11_,(vector *)&local_e8);
            if (pTVar15 != (TokenStream *)0x0) {
              LOCK();
              *(long *)(pTVar15 + 8) = *(long *)(pTVar15 + 8) + 1;
              UNLOCK();
            }
            if (local_f0 != (TokenStream *)0x0) {
              if (*(code **)(*(long *)local_f0 + 0x18) == RefCount::refDec) {
                LOCK();
                pTVar18 = local_f0 + 8;
                *(long *)pTVar18 = *(long *)pTVar18 + -1;
                UNLOCK();
                if (*(long *)pTVar18 == 0) {
                  (**(code **)(*(long *)local_f0 + 8))();
                }
              }
              else {
                (**(code **)(*(long *)local_f0 + 0x18))();
              }
            }
            if (plVar9 != (long *)0x0) {
              if (*(code **)(*plVar9 + 0x18) == RefCount::refDec) {
                LOCK();
                plVar17 = plVar9 + 1;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (*plVar17 == 0) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
              }
              else {
                (**(code **)(*plVar9 + 0x18))(plVar9);
              }
            }
            if (local_c8 != (TokenStream *)&local_b8) {
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
            local_f0 = pTVar15;
            if (pTVar15 == (TokenStream *)0x0) {
              parse(this,&local_f0);
              pTVar18 = local_e8;
              pTVar20 = local_e0;
            }
            else {
              if (*(code **)(*(long *)pTVar15 + 0x10) == RefCount::refInc) {
                LOCK();
                *(long *)(pTVar15 + 8) = *(long *)(pTVar15 + 8) + 1;
                UNLOCK();
                parse(this,&local_f0);
              }
              else {
                (**(code **)(*(long *)pTVar15 + 0x10))(pTVar15);
                parse(this,&local_f0);
              }
              if (*(code **)(*(long *)pTVar15 + 0x18) == RefCount::refDec) {
                LOCK();
                pTVar18 = pTVar15 + 8;
                *(long *)pTVar18 = *(long *)pTVar18 + -1;
                UNLOCK();
                if (*(long *)pTVar18 == 0) {
                  (**(code **)(*(long *)pTVar15 + 8))(pTVar15);
                }
                pcVar3 = *(code **)(*(long *)pTVar15 + 0x18);
              }
              else {
                (**(code **)(*(long *)pTVar15 + 0x18))(pTVar15);
                pcVar3 = *(code **)(*(long *)pTVar15 + 0x18);
              }
              if (pcVar3 == RefCount::refDec) {
                LOCK();
                pTVar1 = pTVar15 + 8;
                *(long *)pTVar1 = *(long *)pTVar1 + -1;
                UNLOCK();
                pTVar18 = local_e8;
                pTVar20 = local_e0;
                if (*(long *)pTVar1 == 0) {
                  (**(code **)(*(long *)pTVar15 + 8))(pTVar15);
                  pTVar18 = local_e8;
                  pTVar20 = local_e0;
                }
              }
              else {
                (*pcVar3)(pTVar15);
                pTVar18 = local_e8;
                pTVar20 = local_e0;
              }
            }
            for (; pTVar15 = local_e0, bVar4 = local_e0 != pTVar18, local_e0 = pTVar20, bVar4;
                pTVar18 = pTVar18 + 0x20) {
              while (pTVar20 = *(TokenStream **)pTVar18, pTVar20 != pTVar18 + 0x10) {
                pTVar1 = pTVar18 + 0x10;
                pTVar18 = pTVar18 + 0x20;
                operator_delete(pTVar20,*(long *)pTVar1 + 1);
                if (pTVar15 == pTVar18) goto LAB_0010927c;
              }
              pTVar20 = local_e0;
              local_e0 = pTVar15;
            }
LAB_0010927c:
            if (local_e8 != (TokenStream *)0x0) {
              operator_delete(local_e8,(long)local_d8 - (long)local_e8);
            }
            if (plVar9 != (long *)0x0) {
              if (*(code **)(*plVar9 + 0x18) == RefCount::refDec) {
                LOCK();
                plVar17 = plVar9 + 1;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (*plVar17 == 0) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
              }
              else {
                (**(code **)(*plVar9 + 0x18))(plVar9);
              }
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return 1;
            }
            goto LAB_00109a6c;
          }
        }
        std::__throw_length_error("basic_string::append");
      }
    }
  }
  std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00109a6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::State::parseString(char const*) */

void __thiscall embree::State::parseString(State *this,char *param_1)

{
  undefined *puVar1;
  uint uVar2;
  TokenStream *pTVar3;
  long *plVar4;
  long *plVar5;
  TokenStream *pTVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  TokenStream **ppTVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  TokenStream **ppTVar15;
  ulong uVar16;
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
  
  puVar1 = symbols;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
LAB_0010a0bc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (long *)0x0;
    local_68 = local_58;
    if (symbols != (undefined *)0x0) {
      pTVar3 = (TokenStream *)strlen(symbols);
      local_d0 = pTVar3;
      if (pTVar3 < (TokenStream *)0x10) {
        ppTVar11 = local_58;
        if (pTVar3 == (TokenStream *)0x1) {
          local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar1);
        }
        else if (pTVar3 != (TokenStream *)0x0) goto LAB_0010a24f;
      }
      else {
        local_68 = (TokenStream **)
                   std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_d0);
        local_58[0] = local_d0;
        ppTVar11 = local_68;
LAB_0010a24f:
        memcpy(ppTVar11,puVar1,(size_t)pTVar3);
        ppTVar11 = local_68;
      }
      local_60 = local_d0;
      *(TokenStream *)((long)ppTVar11 + (long)local_d0) = (TokenStream)0x0;
      if (local_b8 == local_c0) {
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
          pTVar3 = local_d0 + 1;
          uVar10 = (uint)pTVar3;
          if (uVar10 < 8) {
            if (((ulong)pTVar3 & 4) == 0) {
              if (uVar10 != 0) {
                *(undefined1 *)(local_c0 + 2) = local_58[0]._0_1_;
                if (((ulong)pTVar3 & 2) != 0) {
                  *(undefined2 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 2));
                }
              }
            }
            else {
              *(undefined4 *)(local_c0 + 2) = local_58[0]._0_4_;
              *(undefined4 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 4));
            }
          }
          else {
            local_c0[2] = (long)local_58[0];
            *(undefined8 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 8));
            lVar17 = (long)(local_c0 + 2) - ((ulong)(local_c0 + 3) & 0xfffffffffffffff8);
            uVar10 = uVar10 + (int)lVar17 & 0xfffffff8;
            if (7 < uVar10) {
              uVar2 = 0;
              do {
                uVar16 = (ulong)uVar2;
                uVar2 = uVar2 + 8;
                *(undefined8 *)(((ulong)(local_c0 + 3) & 0xfffffffffffffff8) + uVar16) =
                     *(undefined8 *)((long)local_58 + (uVar16 - lVar17));
              } while (uVar2 < uVar10);
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
      puVar1 = PTR_DAT_0010f578;
      local_68 = local_58;
      if (PTR_DAT_0010f578 != (undefined *)0x0) {
        pTVar3 = (TokenStream *)strlen(PTR_DAT_0010f578);
        local_d0 = pTVar3;
        if (pTVar3 < (TokenStream *)0x10) {
          ppTVar11 = local_58;
          if (pTVar3 == (TokenStream *)0x1) {
            local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar1);
          }
          else if (pTVar3 != (TokenStream *)0x0) goto LAB_0010a297;
        }
        else {
          local_68 = (TokenStream **)
                     std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_d0);
          local_58[0] = local_d0;
          ppTVar11 = local_68;
LAB_0010a297:
          memcpy(ppTVar11,puVar1,(size_t)pTVar3);
          ppTVar11 = local_68;
        }
        local_60 = local_d0;
        *(TokenStream *)((long)ppTVar11 + (long)local_d0) = (TokenStream)0x0;
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
            pTVar3 = local_d0 + 1;
            uVar10 = (uint)pTVar3;
            if (uVar10 < 8) {
              if (((ulong)pTVar3 & 4) == 0) {
                if (uVar10 != 0) {
                  *(undefined1 *)(local_c0 + 2) = local_58[0]._0_1_;
                  if (((ulong)pTVar3 & 2) != 0) {
                    *(undefined2 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xe) =
                         *(undefined2 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 2));
                  }
                }
              }
              else {
                *(undefined4 *)(local_c0 + 2) = local_58[0]._0_4_;
                *(undefined4 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xc) =
                     *(undefined4 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 4));
              }
            }
            else {
              local_c0[2] = (long)local_58[0];
              *(undefined8 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 8) =
                   *(undefined8 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 8));
              lVar17 = (long)(local_c0 + 2) - ((ulong)(local_c0 + 3) & 0xfffffffffffffff8);
              uVar10 = uVar10 + (int)lVar17 & 0xfffffff8;
              if (7 < uVar10) {
                uVar2 = 0;
                do {
                  uVar16 = (ulong)uVar2;
                  uVar2 = uVar2 + 8;
                  *(undefined8 *)(((ulong)(local_c0 + 3) & 0xfffffffffffffff8) + uVar16) =
                       *(undefined8 *)((long)local_58 + (uVar16 - lVar17));
                } while (uVar2 < uVar10);
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
        puVar1 = PTR__LC116_0010f580;
        local_68 = local_58;
        if (PTR__LC116_0010f580 != (undefined *)0x0) {
          pTVar3 = (TokenStream *)strlen(PTR__LC116_0010f580);
          local_d0 = pTVar3;
          if (pTVar3 < (TokenStream *)0x10) {
            ppTVar11 = local_58;
            if (pTVar3 == (TokenStream *)0x1) {
              local_58[0] = (TokenStream *)CONCAT71(local_58[0]._1_7_,*puVar1);
            }
            else if (pTVar3 != (TokenStream *)0x0) goto LAB_0010a207;
          }
          else {
            local_68 = (TokenStream **)
                       std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_d0);
            local_58[0] = local_d0;
            ppTVar11 = local_68;
LAB_0010a207:
            memcpy(ppTVar11,puVar1,(size_t)pTVar3);
            ppTVar11 = local_68;
          }
          local_60 = local_d0;
          *(TokenStream *)((long)ppTVar11 + (long)local_d0) = (TokenStream)0x0;
          if (local_c0 == local_b8) {
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
            _M_realloc_insert<std::__cxx11::string>
                      ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                       &local_c8,local_c0,(string *)&local_68);
            if (local_68 != local_58) {
              operator_delete(local_68,(ulong)(local_58[0] + 1));
            }
          }
          else {
            *local_c0 = (long)(local_c0 + 2);
            if (local_68 == local_58) {
              pTVar3 = local_d0 + 1;
              uVar10 = (uint)pTVar3;
              if (uVar10 < 8) {
                if (((ulong)pTVar3 & 4) == 0) {
                  if (uVar10 != 0) {
                    *(undefined1 *)(local_c0 + 2) = local_58[0]._0_1_;
                    if (((ulong)pTVar3 & 2) != 0) {
                      *(undefined2 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xe) =
                           *(undefined2 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 2));
                    }
                  }
                }
                else {
                  *(undefined4 *)(local_c0 + 2) = local_58[0]._0_4_;
                  *(undefined4 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 0xc) =
                       *(undefined4 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 4));
                }
              }
              else {
                local_c0[2] = (long)local_58[0];
                *(undefined8 *)((long)local_c0 + ((ulong)pTVar3 & 0xffffffff) + 8) =
                     *(undefined8 *)((long)local_58 + (((ulong)pTVar3 & 0xffffffff) - 8));
                lVar17 = (long)(local_c0 + 2) - ((ulong)(local_c0 + 3) & 0xfffffffffffffff8);
                uVar10 = uVar10 + (int)lVar17 & 0xfffffff8;
                if (7 < uVar10) {
                  uVar2 = 0;
                  do {
                    uVar16 = (ulong)uVar2;
                    uVar2 = uVar2 + 8;
                    *(undefined8 *)(((ulong)(local_c0 + 3) & 0xfffffffffffffff8) + uVar16) =
                         *(undefined8 *)((long)local_58 + (uVar16 - lVar17));
                  } while (uVar2 < uVar10);
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
          pTVar3 = (TokenStream *)operator_new(0x360);
          uVar12 = _reserve;
          uVar14 = TokenStream::ALPHA_abi_cxx11_;
          uVar16 = TokenStream::alpha_abi_cxx11_;
          local_98 = 0;
          local_a0 = 0;
          local_a8 = &local_98;
          std::__cxx11::string::reserve((ulong)&local_a8);
          if (((uVar14 <= 0x3fffffffffffffffU - local_a0) &&
              (std::__cxx11::string::_M_append((char *)&local_a8,uVar16),
              uVar12 <= 0x3fffffffffffffffU - local_a0)) &&
             (std::__cxx11::string::_M_append((char *)&local_a8,uVar14),
             TokenStream::separators_abi_cxx11_ <= 0x3fffffffffffffffU - local_a0)) {
            plVar4 = (long *)std::__cxx11::string::_M_append
                                       ((char *)&local_a8,TokenStream::numbers_abi_cxx11_);
            plVar5 = plVar4 + 2;
            if ((long *)*plVar4 == plVar5) {
              uVar16 = plVar4[1] + 1;
              plVar13 = plVar5;
              plVar18 = local_78;
              if (7 < (uint)uVar16) {
                uVar14 = 0;
                do {
                  uVar10 = (int)uVar14 + 8;
                  uVar12 = (ulong)uVar10;
                  *(undefined8 *)((long)local_78 + uVar14) = *(undefined8 *)((long)plVar5 + uVar14);
                  uVar14 = uVar12;
                } while (uVar10 < ((uint)uVar16 & 0xfffffff8));
                plVar18 = (long *)((long)local_78 + uVar12);
                plVar13 = (long *)(uVar12 + (long)plVar5);
              }
              lVar17 = 0;
              if ((uVar16 & 4) != 0) {
                *(int *)plVar18 = (int)*plVar13;
                lVar17 = 4;
              }
              if ((uVar16 & 2) != 0) {
                *(undefined2 *)((long)plVar18 + lVar17) = *(undefined2 *)((long)plVar13 + lVar17);
                lVar17 = lVar17 + 2;
              }
              local_88 = local_78;
              if ((uVar16 & 1) != 0) {
                *(undefined1 *)((long)plVar18 + lVar17) = *(undefined1 *)((long)plVar13 + lVar17);
              }
            }
            else {
              local_78[0] = plVar4[2];
              local_88 = (long *)*plVar4;
            }
            local_80 = plVar4[1];
            *plVar4 = (long)plVar5;
            plVar4[1] = 0;
            *(undefined1 *)(plVar4 + 2) = 0;
            if (1 < 0x3fffffffffffffffU - local_80) {
              plVar5 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x10b161);
              ppTVar11 = (TokenStream **)(plVar5 + 2);
              if ((TokenStream **)*plVar5 == ppTVar11) {
                uVar16 = plVar5[1] + 1;
                ppTVar15 = ppTVar11;
                ppTVar19 = local_58;
                if (7 < (uint)uVar16) {
                  uVar14 = 0;
                  do {
                    uVar10 = (int)uVar14 + 8;
                    uVar12 = (ulong)uVar10;
                    *(undefined8 *)((long)local_58 + uVar14) =
                         *(undefined8 *)((long)ppTVar11 + uVar14);
                    uVar14 = uVar12;
                  } while (uVar10 < ((uint)uVar16 & 0xfffffff8));
                  ppTVar19 = (TokenStream **)((long)local_58 + uVar12);
                  ppTVar15 = (TokenStream **)(uVar12 + (long)ppTVar11);
                }
                lVar17 = 0;
                if ((uVar16 & 4) != 0) {
                  *(undefined4 *)ppTVar19 = *(undefined4 *)ppTVar15;
                  lVar17 = 4;
                }
                if ((uVar16 & 2) != 0) {
                  *(undefined2 *)((long)ppTVar19 + lVar17) =
                       *(undefined2 *)((long)ppTVar15 + lVar17);
                  lVar17 = lVar17 + 2;
                }
                local_68 = local_58;
                if ((uVar16 & 1) != 0) {
                  *(undefined1 *)((long)ppTVar19 + lVar17) =
                       *(undefined1 *)((long)ppTVar15 + lVar17);
                }
              }
              else {
                local_58[0] = (TokenStream *)plVar5[2];
                local_68 = (TokenStream **)*plVar5;
              }
              local_60 = (TokenStream *)plVar5[1];
              *plVar5 = (long)ppTVar11;
              plVar5[1] = 0;
              *(undefined1 *)(plVar5 + 2) = 0;
              pTVar6 = (TokenStream *)operator_new(0x60);
              *(long *)(pTVar6 + 8) = 0;
              *(undefined **)pTVar6 = &DAT_0010f410;
              *(long *)(pTVar6 + 0x10) = 0;
              *(long *)(pTVar6 + 0x18) = 0;
              *(long *)(pTVar6 + 0x20) = 0;
              *(long *)(pTVar6 + 0x28) = 0;
              *(long *)(pTVar6 + 0x30) = 0;
              *(long *)(pTVar6 + 0x38) = 0;
              puVar7 = (undefined4 *)operator_new(0xa000);
              *(undefined4 **)(pTVar6 + 0x28) = puVar7;
              *(undefined4 **)(pTVar6 + 0x38) = puVar7 + 0x2800;
              puVar8 = puVar7;
              do {
                *puVar8 = 0;
                puVar9 = puVar8 + 10;
                *(undefined8 *)(puVar8 + 2) = 0;
                *(undefined8 *)(puVar8 + 4) = 0;
                *(undefined8 *)(puVar8 + 6) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                puVar8 = puVar9;
              } while (puVar9 != puVar7 + 0x2800);
              *(undefined4 **)(pTVar6 + 0x30) = puVar9;
              *(undefined ***)pTVar6 = &PTR__StrStream_0010f490;
              *(long *)(pTVar6 + 0x48) = 1;
              *(char **)(pTVar6 + 0x40) = param_1;
              *(long *)(pTVar6 + 0x50) = 0;
              *(long *)(pTVar6 + 0x58) = 0;
              if (pTVar6 != (TokenStream *)0x0) {
                LOCK();
                *(long *)(pTVar6 + 8) = *(long *)(pTVar6 + 8) + 1;
                UNLOCK();
              }
              local_d0 = pTVar6;
              embree::TokenStream::TokenStream
                        (pTVar3,(Ref *)&local_d0,(string *)&local_68,
                         (string *)&TokenStream::separators_abi_cxx11_,(vector *)&local_c8);
              if (pTVar3 != (TokenStream *)0x0) {
                LOCK();
                *(long *)(pTVar3 + 8) = *(long *)(pTVar3 + 8) + 1;
                UNLOCK();
              }
              if (local_d0 != (TokenStream *)0x0) {
                if (*(code **)(*(long *)local_d0 + 0x18) == RefCount::refDec) {
                  LOCK();
                  pTVar6 = local_d0 + 8;
                  *(long *)pTVar6 = *(long *)pTVar6 + -1;
                  UNLOCK();
                  if (*(long *)pTVar6 == 0) {
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
              local_d0 = pTVar3;
              if (pTVar3 == (TokenStream *)0x0) {
                parse(this,&local_d0);
                plVar5 = local_c8;
                plVar4 = local_c0;
              }
              else {
                if (*(code **)(*(long *)pTVar3 + 0x10) == RefCount::refInc) {
                  LOCK();
                  *(long *)(pTVar3 + 8) = *(long *)(pTVar3 + 8) + 1;
                  UNLOCK();
                  parse(this,&local_d0);
                }
                else {
                  (**(code **)(*(long *)pTVar3 + 0x10))(pTVar3);
                  parse(this,&local_d0);
                }
                if (*(code **)(*(long *)pTVar3 + 0x18) == RefCount::refDec) {
                  LOCK();
                  pTVar6 = pTVar3 + 8;
                  *(long *)pTVar6 = *(long *)pTVar6 + -1;
                  UNLOCK();
                  if (*(long *)pTVar6 == 0) {
                    (**(code **)(*(long *)pTVar3 + 8))(pTVar3);
                  }
                }
                else {
                  (**(code **)(*(long *)pTVar3 + 0x18))(pTVar3);
                }
                if (*(code **)(*(long *)pTVar3 + 0x18) == RefCount::refDec) {
                  LOCK();
                  pTVar6 = pTVar3 + 8;
                  *(long *)pTVar6 = *(long *)pTVar6 + -1;
                  UNLOCK();
                  plVar5 = local_c8;
                  plVar4 = local_c0;
                  if (*(long *)pTVar6 == 0) {
                    (**(code **)(*(long *)pTVar3 + 8))(pTVar3);
                    plVar5 = local_c8;
                    plVar4 = local_c0;
                  }
                }
                else {
                  (**(code **)(*(long *)pTVar3 + 0x18))(pTVar3);
                  plVar5 = local_c8;
                  plVar4 = local_c0;
                }
              }
              for (; plVar18 = local_c0, local_c0 != plVar5; plVar5 = plVar5 + 4) {
                while ((long *)*plVar5 == plVar5 + 2) {
                  plVar5 = plVar5 + 4;
                  if (local_c0 == plVar5) goto LAB_0010a0a7;
                }
                local_c0 = plVar4;
                operator_delete((long *)*plVar5,plVar5[2] + 1);
                plVar4 = local_c0;
                local_c0 = plVar18;
              }
LAB_0010a0a7:
              local_c0 = plVar4;
              if (local_c8 != (long *)0x0) {
                operator_delete(local_c8,(long)local_b8 - (long)local_c8);
              }
              goto LAB_0010a0bc;
            }
          }
          std::__throw_length_error("basic_string::append");
        }
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0010a7f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
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
      goto LAB_0010a94f;
    }
    if (__n == 0) goto LAB_0010a94f;
  }
  else {
    __dest = (ulong *)std::__cxx11::string::_M_create(in_RDI,(ulong)&local_28);
    *in_RDI = (ulong)__dest;
    in_RDI[2] = local_28;
  }
  memcpy(__dest,__src,__n);
  __dest = (ulong *)*in_RDI;
LAB_0010a94f:
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
      uVar2 = CONCAT71(0x10aa,param_1[4] == param_2[4]);
      break;
    case 2:
      uVar2 = CONCAT71(0x10aa,*(int *)(param_1 + 4) == *(int *)(param_2 + 4));
      break;
    case 3:
      uVar2 = CONCAT71(0x10aa,!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)));
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
                    /* WARNING: Could not recover jumptable at 0x0010b1ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this);
  return;
}



/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  if (*(long *)(this + 8) == 0x100000001) {
    *(undefined8 *)(this + 8) = 0;
    (**(code **)(*(long *)this + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0010b227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))();
    return;
  }
  if (__libc_single_threaded == '\0') {
    p_Var1 = this + 8;
    LOCK();
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
  _M_release_last_use_cold(this);
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar3 != pvVar4) {
LAB_0010b28f:
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
            goto LAB_0010b28f;
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar3 != pvVar4) {
LAB_0010b37f:
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
            goto LAB_0010b37f;
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
  
  *(undefined ***)this = &PTR__LineCommentFilter_0010f4d0;
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar5 != pvVar6) {
LAB_0010b4c7:
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
            goto LAB_0010b4c7;
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
  
  *(undefined ***)this = &PTR__LineCommentFilter_0010f4d0;
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar5 != pvVar6) {
LAB_0010b627:
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
            goto LAB_0010b627;
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
      goto LAB_0010b731;
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
LAB_0010b731:
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
      goto LAB_0010b7f5;
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
LAB_0010b7f5:
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
  
  *(undefined ***)this = &PTR__FileStream_0010f450;
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar3 != pvVar7) {
LAB_0010ba17:
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
            goto LAB_0010ba17;
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
  
  *(undefined ***)this = &PTR__FileStream_0010f450;
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
  *(undefined **)this = &DAT_0010f410;
  if (pvVar3 != pvVar7) {
LAB_0010bc77:
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
            goto LAB_0010bc77;
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



/* embree::TokenStream::location() */

void embree::TokenStream::location(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long in_RSI;
  undefined8 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  plVar3 = *(long **)(in_RSI + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3[4] != 0) goto LAB_0010bf20;
  (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
  uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
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
      p_Var10 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var10;
          *(int *)p_Var10 = *(int *)p_Var10 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar8 = plVar3[3];
  lVar4 = plVar3[4];
  if (lVar8 + lVar4 == 0x400) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = lVar8 + -1;
    plVar3[3] = lVar8;
    uVar9 = (int)plVar3[2] + 1U & 0x3ff;
    plVar3[2] = (ulong)uVar9;
  }
  else {
    uVar9 = (uint)plVar3[2];
  }
  plVar3[4] = lVar4 + 1;
  puVar2 = (undefined4 *)(plVar3[5] + (ulong)((int)lVar8 + uVar9 + (int)lVar4 & 0x3ff) * 0x28);
  *puVar2 = uVar6;
  p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var10) {
LAB_0010bf0a:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010bf20;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010bf20;
      }
LAB_0010beca:
      p_Var1 = p_Var10 + 8;
      if (*(long *)(p_Var10 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var10 + 8) = 0;
        (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
        (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var10 + 8);
          *(int *)(p_Var10 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_0010bf0a;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010beca;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var10 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar7 = *(int *)p_Var10;
      *(int *)p_Var10 = *(int *)p_Var10 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_0010bf20:
  lVar8 = plVar3[5] + (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28;
  *in_RDI = *(undefined8 *)(lVar8 + 8);
  lVar4 = *(long *)(lVar8 + 0x10);
  in_RDI[1] = lVar4;
  if (lVar4 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
  }
  uVar5 = *(undefined8 *)(lVar8 + 0x20);
  in_RDI[2] = *(undefined8 *)(lVar8 + 0x18);
  in_RDI[3] = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::LineCommentFilter::location() */

void embree::LineCommentFilter::location(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long in_RSI;
  undefined8 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var10;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  plVar3 = *(long **)(in_RSI + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3[4] != 0) goto LAB_0010c310;
  (**(code **)(*plVar3 + 0x28))(&local_68,plVar3);
  uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
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
      p_Var10 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var10;
          *(int *)p_Var10 = *(int *)p_Var10 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar8 = plVar3[3];
  lVar4 = plVar3[4];
  if (lVar8 + lVar4 == 0x400) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = lVar8 + -1;
    plVar3[3] = lVar8;
    uVar9 = (int)plVar3[2] + 1U & 0x3ff;
    plVar3[2] = (ulong)uVar9;
  }
  else {
    uVar9 = (uint)plVar3[2];
  }
  plVar3[4] = lVar4 + 1;
  puVar2 = (undefined4 *)(plVar3[5] + (ulong)((int)lVar8 + uVar9 + (int)lVar4 & 0x3ff) * 0x28);
  *puVar2 = uVar6;
  p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
  *(undefined8 *)(puVar2 + 2) = local_68;
  if (local_60 == p_Var10) {
LAB_0010c2fa:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c310;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var10 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010c310;
      }
LAB_0010c2ba:
      p_Var1 = p_Var10 + 8;
      if (*(long *)(p_Var10 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var10 + 8) = 0;
        (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
        (**(code **)(*(long *)p_Var10 + 0x18))(p_Var10);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = *(int *)(p_Var10 + 8);
          *(int *)(p_Var10 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var10);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
      goto LAB_0010c2fa;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var10 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4);
    }
    if (p_Var10 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c2ba;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar2 + 4) = local_60;
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
  }
  p_Var10 = local_60 + 8;
  if (*(long *)(local_60 + 8) == 0x100000001) {
    *(undefined8 *)(local_60 + 8) = 0;
    (**(code **)(*(long *)local_60 + 0x10))(local_60);
    (**(code **)(*(long *)local_60 + 0x18))(local_60);
  }
  else {
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar7 = *(int *)p_Var10;
      *(int *)p_Var10 = *(int *)p_Var10 + -1;
      UNLOCK();
    }
    else {
      iVar7 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar7 + -1;
    }
    if (iVar7 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
LAB_0010c310:
  lVar8 = plVar3[5] + (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28;
  *in_RDI = *(undefined8 *)(lVar8 + 8);
  lVar4 = *(long *)(lVar8 + 0x10);
  in_RDI[1] = lVar4;
  if (lVar4 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    }
  }
  uVar5 = *(undefined8 *)(lVar8 + 0x20);
  in_RDI[2] = *(undefined8 *)(lVar8 + 0x18);
  in_RDI[3] = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  if (*(long *)(this + 0x20) != 0) goto LAB_0010c700;
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
LAB_0010c6ea:
    *(undefined8 *)(puVar2 + 6) = local_58;
    *(undefined8 *)(puVar2 + 8) = local_50;
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c700;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var8 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar2 + 6) = local_58;
        *(undefined8 *)(puVar2 + 8) = local_50;
        goto LAB_0010c700;
      }
LAB_0010c6a9:
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
      goto LAB_0010c6ea;
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
    if (p_Var8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010c6a9;
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
LAB_0010c700:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(long *)(this + 0x28) +
           (ulong)((int)*(undefined8 *)(this + 0x18) + (int)*(undefined8 *)(this + 0x10) & 0x3ff) *
           0x28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::LineCommentFilter::next() */

undefined4 __thiscall embree::LineCommentFilter::next(LineCommentFilter *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  Stream<int> *pSVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var14;
  long lVar15;
  long *plVar16;
  Stream<int> *this_00;
  long *plVar17;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var18;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined8 local_68;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x50) != 0) {
    do {
      pSVar6 = *(Stream<int> **)(this + 0x40);
      this_00 = pSVar6;
      if (*(long *)(pSVar6 + 0x20) == 0) {
        (**(code **)(*(long *)pSVar6 + 0x28))(&local_68,pSVar6);
        uVar11 = (**(code **)(*(long *)pSVar6 + 0x20))(pSVar6);
        uVar9 = local_50;
        uVar8 = local_58;
        p_Var18 = local_60;
        uVar7 = local_68;
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
            p_Var14 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))();
              (**(code **)(*(long *)p_Var18 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar12 = *(long *)(pSVar6 + 0x18);
        lVar15 = *(long *)(pSVar6 + 0x20);
        if (lVar12 + lVar15 == 0x400) {
          if (lVar12 == 0) goto LAB_0010de64;
          lVar12 = lVar12 + -1;
          *(long *)(pSVar6 + 0x18) = lVar12;
          uVar13 = (int)*(long *)(pSVar6 + 0x10) + 1U & 0x3ff;
          *(ulong *)(pSVar6 + 0x10) = (ulong)uVar13;
        }
        else {
          uVar13 = (uint)*(long *)(pSVar6 + 0x10);
        }
        *(long *)(pSVar6 + 0x20) = lVar15 + 1;
        puVar5 = (undefined4 *)
                 (*(long *)(pSVar6 + 0x28) +
                 (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
        *puVar5 = uVar11;
        p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = uVar7;
        if (p_Var18 == p_Var14) {
LAB_0010ca63:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010cc46;
        }
        else {
          if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = uVar8;
              *(undefined8 *)(puVar5 + 8) = uVar9;
              this_00 = *(Stream<int> **)(this + 0x40);
              goto LAB_0010ca78;
            }
LAB_0010ca2d:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
            goto LAB_0010ca63;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010ca2d;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_0010cc46:
          p_Var14 = p_Var18 + 8;
          if (*(long *)(p_Var18 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var18 + 8) = 0;
            (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
            (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var18 + 8);
              *(int *)(p_Var18 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
            }
          }
        }
        this_00 = *(Stream<int> **)(this + 0x40);
      }
LAB_0010ca78:
      if (*(int *)(*(long *)(pSVar6 + 0x28) +
                  (ulong)((int)*(long *)(pSVar6 + 0x18) + (int)*(long *)(pSVar6 + 0x10) & 0x3ff) *
                  0x28) != (int)*(char *)(*(long *)(this + 0x48) + uVar19)) {
        if (*(ulong *)(this_00 + 0x18) < uVar19) goto LAB_0010de64;
        *(ulong *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + uVar19;
        *(ulong *)(this_00 + 0x18) = *(ulong *)(this_00 + 0x18) - uVar19;
        Stream<int>::peek(this_00);
        lVar12 = (*(long **)(this + 0x40))[4];
        plVar17 = *(long **)(this + 0x40);
        goto LAB_0010d4e8;
      }
      lVar12 = *(long *)(this_00 + 0x20);
      if (lVar12 == 0) {
        (**(code **)(*(long *)this_00 + 0x28))(&local_68,this_00);
        uVar11 = (**(code **)(*(long *)this_00 + 0x20))(this_00);
        uVar9 = local_50;
        uVar8 = local_58;
        p_Var18 = local_60;
        uVar7 = local_68;
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
            p_Var14 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))();
              (**(code **)(*(long *)p_Var18 + 0x18))();
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar12 = *(long *)(this_00 + 0x18);
        lVar15 = *(long *)(this_00 + 0x20);
        if (lVar12 + lVar15 == 0x400) {
          if (lVar12 == 0) goto LAB_0010de64;
          lVar12 = lVar12 + -1;
          *(long *)(this_00 + 0x18) = lVar12;
          uVar13 = (int)*(undefined8 *)(this_00 + 0x10) + 1U & 0x3ff;
          *(ulong *)(this_00 + 0x10) = (ulong)uVar13;
        }
        else {
          uVar13 = (uint)*(undefined8 *)(this_00 + 0x10);
        }
        *(long *)(this_00 + 0x20) = lVar15 + 1;
        puVar5 = (undefined4 *)
                 (*(long *)(this_00 + 0x28) +
                 (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
        *puVar5 = uVar11;
        p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = uVar7;
        if (p_Var18 == p_Var14) {
LAB_0010cbdc:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010ccce;
        }
        else {
          if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = uVar8;
              *(undefined8 *)(puVar5 + 8) = uVar9;
              lVar12 = *(long *)(this_00 + 0x20);
              goto LAB_0010cbf1;
            }
LAB_0010cba6:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
            goto LAB_0010cbdc;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010cba6;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_0010ccce:
          p_Var14 = p_Var18 + 8;
          if (*(long *)(p_Var18 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var18 + 8) = 0;
            (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
            (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
            lVar12 = *(long *)(this_00 + 0x20);
            goto LAB_0010cbf1;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar10 = *(int *)p_Var14;
            *(int *)p_Var14 = *(int *)p_Var14 + -1;
            UNLOCK();
          }
          else {
            iVar10 = *(int *)(p_Var18 + 8);
            *(int *)(p_Var18 + 8) = iVar10 + -1;
          }
          if (iVar10 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
          }
        }
        lVar12 = *(long *)(this_00 + 0x20);
      }
LAB_0010cbf1:
      *(long *)(this_00 + 0x18) = *(long *)(this_00 + 0x18) + 1;
      uVar19 = uVar19 + 1;
      *(long *)(this_00 + 0x20) = lVar12 + -1;
    } while (uVar19 < *(ulong *)(this + 0x50));
  }
  do {
    plVar17 = *(long **)(this + 0x40);
    lVar12 = plVar17[4];
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x28))(&local_68,plVar17);
      uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17);
      uVar9 = local_50;
      uVar8 = local_58;
      p_Var18 = local_60;
      uVar7 = local_68;
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
          p_Var14 = local_60 + 8;
          if (*(long *)(local_60 + 8) == 0x100000001) {
            *(undefined8 *)(local_60 + 8) = 0;
            (**(code **)(*(long *)local_60 + 0x10))();
            (**(code **)(*(long *)p_Var18 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
            }
          }
        }
      }
      lVar12 = plVar17[3];
      lVar15 = plVar17[4];
      if (lVar12 + lVar15 == 0x400) {
        if (lVar12 == 0) goto LAB_0010de64;
        lVar12 = lVar12 + -1;
        plVar17[3] = lVar12;
        uVar13 = (int)plVar17[2] + 1U & 0x3ff;
        plVar17[2] = (ulong)uVar13;
      }
      else {
        uVar13 = (uint)plVar17[2];
      }
      plVar17[4] = lVar15 + 1;
      puVar5 = (undefined4 *)
               (plVar17[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
      *puVar5 = uVar11;
      p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *(undefined8 *)(puVar5 + 2) = uVar7;
      if (p_Var18 == p_Var14) {
LAB_0010cfaf:
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          lVar12 = *(long *)(p_Var18 + 8);
joined_r0x0010d019:
          if (lVar12 == 0x100000001) {
            *(undefined8 *)(p_Var18 + 8) = 0;
            (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
            (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
            plVar16 = *(long **)(this + 0x40);
            lVar12 = plVar16[4];
            goto LAB_0010d042;
          }
          p_Var14 = p_Var18 + 8;
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar10 = *(int *)p_Var14;
            *(int *)p_Var14 = *(int *)p_Var14 + -1;
            UNLOCK();
          }
          else {
            iVar10 = *(int *)(p_Var18 + 8);
            *(int *)(p_Var18 + 8) = iVar10 + -1;
          }
          if (iVar10 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
          }
        }
        plVar16 = *(long **)(this + 0x40);
        lVar12 = plVar16[4];
      }
      else {
        if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010cf79;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          lVar12 = *(long *)(p_Var18 + 8);
          goto joined_r0x0010d019;
        }
        if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010cf79:
          p_Var1 = p_Var14 + 8;
          if (*(long *)(p_Var14 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var14 + 8) = 0;
            (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
            (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var14 + 8);
              *(int *)(p_Var14 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14);
            }
          }
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          goto LAB_0010cfaf;
        }
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        plVar16 = *(long **)(this + 0x40);
        lVar12 = plVar16[4];
      }
LAB_0010d042:
      plVar2 = plVar17 + 3;
      plVar3 = plVar17 + 2;
      plVar4 = plVar17 + 5;
      plVar17 = plVar16;
      if (*(int *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28) == 10) break;
      if (lVar12 != 0) goto LAB_0010d38b;
      (**(code **)(*plVar16 + 0x28))(&local_68,plVar16);
      uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16);
      uVar9 = local_50;
      uVar8 = local_58;
      p_Var18 = local_60;
      uVar7 = local_68;
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
          p_Var14 = local_60 + 8;
          if (*(long *)(local_60 + 8) == 0x100000001) {
            *(undefined8 *)(local_60 + 8) = 0;
            (**(code **)(*(long *)local_60 + 0x10))();
            (**(code **)(*(long *)p_Var18 + 0x18))();
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(local_60 + 8);
              *(int *)(local_60 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
            }
          }
        }
      }
      lVar12 = plVar16[3];
      lVar15 = plVar16[4];
      if (lVar12 + lVar15 == 0x400) {
        if (lVar12 == 0) goto LAB_0010de64;
        lVar12 = lVar12 + -1;
        plVar16[3] = lVar12;
        uVar13 = (int)plVar16[2] + 1U & 0x3ff;
        plVar16[2] = (ulong)uVar13;
      }
      else {
        uVar13 = (uint)plVar16[2];
      }
      plVar16[4] = lVar15 + 1;
      puVar5 = (undefined4 *)
               (plVar16[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
      *puVar5 = uVar11;
      p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
      *(undefined8 *)(puVar5 + 2) = uVar7;
      if (p_Var18 == p_Var14) {
LAB_0010d191:
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
        if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
LAB_0010d1ba:
          p_Var14 = p_Var18 + 8;
          if (*(long *)(p_Var18 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var18 + 8) = 0;
            (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
            (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
          }
          else {
            if (__libc_single_threaded == '\0') {
              LOCK();
              iVar10 = *(int *)p_Var14;
              *(int *)p_Var14 = *(int *)p_Var14 + -1;
              UNLOCK();
            }
            else {
              iVar10 = *(int *)(p_Var18 + 8);
              *(int *)(p_Var18 + 8) = iVar10 + -1;
            }
            if (iVar10 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
            }
          }
        }
      }
      else {
        if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d1ae;
LAB_0010d15b:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
            goto LAB_0010d191;
          }
          *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
          p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d15b;
LAB_0010d1ae:
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          goto LAB_0010d1ba;
        }
        if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d15b;
        *(undefined8 *)(puVar5 + 6) = uVar8;
        *(undefined8 *)(puVar5 + 8) = uVar9;
      }
      plVar2 = plVar16 + 3;
      plVar3 = plVar16 + 2;
      plVar4 = plVar16 + 5;
      plVar16 = *(long **)(this + 0x40);
      lVar12 = plVar16[4];
      plVar17 = plVar16;
      if (*(int *)(*plVar4 + (ulong)((int)*plVar2 + (int)*plVar3 & 0x3ff) * 0x28) == -1) break;
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x28))(&local_68,plVar16);
        uVar11 = (**(code **)(*plVar16 + 0x20))(plVar16);
        uVar9 = local_50;
        uVar8 = local_58;
        p_Var18 = local_60;
        uVar7 = local_68;
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
            p_Var14 = local_60 + 8;
            if (*(long *)(local_60 + 8) == 0x100000001) {
              *(undefined8 *)(local_60 + 8) = 0;
              (**(code **)(*(long *)local_60 + 0x10))(local_60);
              (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(local_60 + 8);
                *(int *)(local_60 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_60);
              }
            }
          }
        }
        lVar12 = plVar16[3];
        lVar15 = plVar16[4];
        if (lVar12 + lVar15 == 0x400) {
          if (lVar12 == 0) goto LAB_0010de64;
          lVar12 = lVar12 + -1;
          plVar16[3] = lVar12;
          uVar13 = (int)plVar16[2] + 1U & 0x3ff;
          plVar16[2] = (ulong)uVar13;
        }
        else {
          uVar13 = (uint)plVar16[2];
        }
        plVar16[4] = lVar15 + 1;
        puVar5 = (undefined4 *)
                 (plVar16[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
        *puVar5 = uVar11;
        p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
        *(undefined8 *)(puVar5 + 2) = uVar7;
        if (p_Var18 == p_Var14) {
LAB_0010d349:
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
          if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d44e;
        }
        else {
          if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar5 + 6) = uVar8;
              *(undefined8 *)(puVar5 + 8) = uVar9;
              lVar15 = plVar16[3];
              lVar12 = plVar16[4];
              goto LAB_0010d3b1;
            }
LAB_0010d313:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar10 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar10 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar10 + -1;
              }
              if (iVar10 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
            goto LAB_0010d349;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          else {
            *(int *)(p_Var18 + 8) = *(int *)(p_Var18 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d313;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = p_Var18;
          *(undefined8 *)(puVar5 + 6) = uVar8;
          *(undefined8 *)(puVar5 + 8) = uVar9;
LAB_0010d44e:
          p_Var14 = p_Var18 + 8;
          if (*(long *)(p_Var18 + 8) == 0x100000001) {
            *(undefined8 *)(p_Var18 + 8) = 0;
            (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
            (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
            lVar15 = plVar16[3];
            lVar12 = plVar16[4];
            goto LAB_0010d3b1;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar10 = *(int *)p_Var14;
            *(int *)p_Var14 = *(int *)p_Var14 + -1;
            UNLOCK();
          }
          else {
            iVar10 = *(int *)(p_Var18 + 8);
            *(int *)(p_Var18 + 8) = iVar10 + -1;
          }
          if (iVar10 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
          }
        }
        lVar15 = plVar16[3];
        lVar12 = plVar16[4];
      }
      else {
        lVar15 = plVar16[3];
      }
    }
    else {
      plVar16 = plVar17;
      if (*(int *)(plVar17[5] + (ulong)((int)plVar17[2] + (int)plVar17[3] & 0x3ff) * 0x28) == 10)
      break;
LAB_0010d38b:
      lVar15 = plVar16[3];
      if (*(int *)(plVar16[5] + (ulong)((int)plVar16[2] + (int)lVar15 & 0x3ff) * 0x28) == -1)
      goto LAB_0010d654;
    }
LAB_0010d3b1:
    plVar16[3] = lVar15 + 1;
    plVar16[4] = lVar12 + -1;
  } while( true );
LAB_0010d4e8:
  plVar16 = plVar17;
  if (lVar12 != 0) goto LAB_0010d654;
  (**(code **)(*plVar17 + 0x28))(&local_68,plVar17);
  uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17);
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
      p_Var18 = local_60 + 8;
      if (*(long *)(local_60 + 8) == 0x100000001) {
        *(undefined8 *)(local_60 + 8) = 0;
        (**(code **)(*(long *)local_60 + 0x10))(local_60);
        (**(code **)(*(long *)local_60 + 0x18))(local_60);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar10 = *(int *)p_Var18;
          *(int *)p_Var18 = *(int *)p_Var18 + -1;
          UNLOCK();
        }
        else {
          iVar10 = *(int *)(local_60 + 8);
          *(int *)(local_60 + 8) = iVar10 + -1;
        }
        if (iVar10 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
        }
      }
    }
  }
  lVar12 = plVar17[3];
  lVar15 = plVar17[4];
  if (lVar12 + lVar15 == 0x400) {
    if (lVar12 == 0) {
LAB_0010de64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar12 = lVar12 + -1;
    plVar17[3] = lVar12;
    uVar13 = (int)plVar17[2] + 1U & 0x3ff;
    plVar17[2] = (ulong)uVar13;
  }
  else {
    uVar13 = (uint)plVar17[2];
  }
  plVar17[4] = lVar15 + 1;
  puVar5 = (undefined4 *)(plVar17[5] + (ulong)((int)lVar12 + uVar13 + (int)lVar15 & 0x3ff) * 0x28);
  *puVar5 = uVar11;
  p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
  *(undefined8 *)(puVar5 + 2) = local_68;
  if (local_60 == p_Var18) {
LAB_0010d63d:
    *(undefined8 *)(puVar5 + 6) = local_58;
    *(undefined8 *)(puVar5 + 8) = local_50;
    if (local_60 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d94d;
  }
  else {
    if (local_60 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (p_Var18 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        *(undefined8 *)(puVar5 + 6) = local_58;
        *(undefined8 *)(puVar5 + 8) = local_50;
        lVar12 = plVar17[4];
        goto LAB_0010d654;
      }
LAB_0010d5fc:
      p_Var14 = p_Var18 + 8;
      if (*(long *)(p_Var18 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var18 + 8) = 0;
        (**(code **)(*(long *)p_Var18 + 0x10))(p_Var18);
        (**(code **)(*(long *)p_Var18 + 0x18))(p_Var18);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar10 = *(int *)p_Var14;
          *(int *)p_Var14 = *(int *)p_Var14 + -1;
          UNLOCK();
        }
        else {
          iVar10 = *(int *)(p_Var18 + 8);
          *(int *)(p_Var18 + 8) = iVar10 + -1;
        }
        if (iVar10 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var18);
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_60;
      goto LAB_0010d63d;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
    }
    else {
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      p_Var18 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4);
    }
    if (p_Var18 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010d5fc;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar5 + 4) = local_60;
    *(undefined8 *)(puVar5 + 6) = local_58;
    *(undefined8 *)(puVar5 + 8) = local_50;
LAB_0010d94d:
    p_Var18 = local_60 + 8;
    if (*(long *)(local_60 + 8) == 0x100000001) {
      *(undefined8 *)(local_60 + 8) = 0;
      (**(code **)(*(long *)local_60 + 0x10))(local_60);
      (**(code **)(*(long *)local_60 + 0x18))(local_60);
      lVar12 = plVar17[4];
      goto LAB_0010d654;
    }
    if (__libc_single_threaded == '\0') {
      LOCK();
      iVar10 = *(int *)p_Var18;
      *(int *)p_Var18 = *(int *)p_Var18 + -1;
      UNLOCK();
    }
    else {
      iVar10 = *(int *)(local_60 + 8);
      *(int *)(local_60 + 8) = iVar10 + -1;
    }
    if (iVar10 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_60);
    }
  }
  lVar12 = plVar17[4];
LAB_0010d654:
  uVar11 = *(undefined4 *)(plVar16[5] + (ulong)((int)plVar16[2] + (int)plVar16[3] & 0x3ff) * 0x28);
  plVar16[3] = plVar16[3] + 1;
  plVar16[4] = lVar12 + -1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&, char const*) */

bool std::operator==(string *param_1,char *param_2)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  __n = *(size_t *)(param_1 + 8);
  sVar3 = strlen(param_2);
  bVar1 = false;
  if ((__n == sVar3) && (bVar1 = true, __n != 0)) {
    iVar2 = memcmp(*(void **)param_1,param_2,__n);
    return iVar2 == 0;
  }
  return bVar1;
}



/* embree::Stream<embree::Token>::get() */

void embree::Stream<embree::Token>::get(void)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  long *in_RSI;
  undefined4 *in_RDI;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var13;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var14;
  long in_FS_OFFSET;
  ulong local_120;
  ulong local_118;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  long *local_f0;
  ulong local_e8;
  long local_e0 [2];
  undefined8 local_d0;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  ulong *local_a0;
  ulong local_98;
  ulong local_90 [2];
  undefined8 local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RSI[4] == 0) {
    if (*(code **)(*in_RSI + 0x28) == TokenStream::location) {
      plVar3 = (long *)in_RSI[8];
      if (plVar3[4] == 0) {
        (**(code **)(*plVar3 + 0x28))(&local_118,plVar3);
        uVar8 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar7 = local_100;
        uVar6 = local_108;
        p_Var13 = local_110;
        uVar5 = local_118;
        if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          }
          if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            p_Var14 = local_110 + 8;
            if (*(long *)(local_110 + 8) == 0x100000001) {
              *(undefined8 *)(local_110 + 8) = 0;
              (**(code **)(*(long *)local_110 + 0x10))(local_110);
              (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var14;
                *(int *)p_Var14 = *(int *)p_Var14 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(local_110 + 8);
                *(int *)(local_110 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_110);
              }
            }
          }
        }
        lVar10 = plVar3[3];
        lVar4 = plVar3[4];
        if (lVar10 + lVar4 == 0x400) {
          if (lVar10 == 0) goto LAB_0010eaf9;
          lVar10 = lVar10 + -1;
          plVar3[3] = lVar10;
          uVar12 = (int)plVar3[2] + 1U & 0x3ff;
          plVar3[2] = (ulong)uVar12;
        }
        else {
          uVar12 = (uint)plVar3[2];
        }
        plVar3[4] = lVar4 + 1;
        puVar11 = (undefined4 *)
                  (plVar3[5] + (ulong)((int)lVar10 + uVar12 + (int)lVar4 & 0x3ff) * 0x28);
        *puVar11 = uVar8;
        p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 4);
        *(ulong *)(puVar11 + 2) = uVar5;
        if (p_Var13 == p_Var14) {
LAB_0010e07a:
          *(undefined8 *)(puVar11 + 6) = uVar6;
          *(undefined8 *)(puVar11 + 8) = uVar7;
          if (p_Var13 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010e0c8;
        }
        else {
          if (p_Var13 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (p_Var14 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              *(undefined8 *)(puVar11 + 6) = uVar6;
              *(undefined8 *)(puVar11 + 8) = uVar7;
              goto LAB_0010e0c8;
            }
LAB_0010e03a:
            p_Var1 = p_Var14 + 8;
            if (*(long *)(p_Var14 + 8) == 0x100000001) {
              *(undefined8 *)(p_Var14 + 8) = 0;
              (**(code **)(*(long *)p_Var14 + 0x10))(p_Var14);
              (**(code **)(*(long *)p_Var14 + 0x18))(p_Var14);
            }
            else {
              if (__libc_single_threaded == '\0') {
                LOCK();
                iVar9 = *(int *)p_Var1;
                *(int *)p_Var1 = *(int *)p_Var1 + -1;
                UNLOCK();
              }
              else {
                iVar9 = *(int *)(p_Var14 + 8);
                *(int *)(p_Var14 + 8) = iVar9 + -1;
              }
              if (iVar9 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var14)
                ;
              }
            }
            *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 4) = p_Var13;
            goto LAB_0010e07a;
          }
          if (__libc_single_threaded == '\0') {
            LOCK();
            *(int *)(p_Var13 + 8) = *(int *)(p_Var13 + 8) + 1;
            UNLOCK();
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 4);
          }
          else {
            *(int *)(p_Var13 + 8) = *(int *)(p_Var13 + 8) + 1;
            p_Var14 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 4);
          }
          if (p_Var14 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0010e03a;
          *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 4) = p_Var13;
          *(undefined8 *)(puVar11 + 6) = uVar6;
          *(undefined8 *)(puVar11 + 8) = uVar7;
        }
        p_Var14 = p_Var13 + 8;
        if (*(long *)(p_Var13 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var13 + 8) = 0;
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var14;
            *(int *)p_Var14 = *(int *)p_Var14 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var13 + 8);
            *(int *)(p_Var13 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var13);
          }
        }
      }
LAB_0010e0c8:
      lVar10 = plVar3[5] + (ulong)((int)plVar3[3] + (int)plVar3[2] & 0x3ff) * 0x28;
      local_118 = *(ulong *)(lVar10 + 8);
      local_110 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar10 + 0x10);
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
      local_108 = *(undefined8 *)(lVar10 + 0x18);
      local_100 = *(undefined8 *)(lVar10 + 0x20);
    }
    else {
      (**(code **)(*in_RSI + 0x28))(&local_118);
    }
    (**(code **)(*in_RSI + 0x20))(&local_f8);
    plVar3 = local_f0;
    local_a8 = local_f8;
    local_120 = local_e8;
    local_a4 = local_f4;
    local_a0 = local_90;
    if (local_e8 < 0x10) {
      if (local_e8 == 1) {
        local_90[0] = CONCAT71(local_90[0]._1_7_,(char)*local_f0);
      }
      else if (local_e8 != 0) goto LAB_0010e64c;
    }
    else {
      local_a0 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_a0,(ulong)&local_120);
      local_90[0] = local_120;
LAB_0010e64c:
      memcpy(local_a0,plVar3,local_e8);
    }
    *(undefined1 *)((long)local_a0 + local_120) = 0;
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
    local_98 = local_120;
    if (local_c8 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var13 = local_c8 + 8;
      if (*(long *)(local_c8 + 8) == 0x100000001) {
        *(undefined8 *)(local_c8 + 8) = 0;
        (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
        (**(code **)(*(long *)local_c8 + 0x18))(local_c8);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var13;
          *(int *)p_Var13 = *(int *)p_Var13 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(local_c8 + 8);
          *(int *)(local_c8 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_c8);
        }
      }
    }
    if (local_f0 != local_e0) {
      operator_delete(local_f0,local_e0[0] + 1);
    }
    p_Var13 = local_110;
    if (local_110 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var14 = local_110 + 8;
      if (*(long *)(local_110 + 8) == 0x100000001) {
        *(undefined8 *)(local_110 + 8) = 0;
        (**(code **)(*(long *)local_110 + 0x10))(local_110);
        (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var14;
          *(int *)p_Var14 = *(int *)p_Var14 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(local_110 + 8);
          *(int *)(local_110 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_110);
        }
      }
    }
    lVar10 = in_RSI[3];
    lVar4 = in_RSI[4];
    if (lVar10 + lVar4 == 0x400) {
      if (lVar10 == 0) {
LAB_0010eaf9:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = lVar10 + -1;
      in_RSI[3] = lVar10;
      uVar12 = (int)in_RSI[2] + 1U & 0x3ff;
      in_RSI[2] = (ulong)uVar12;
    }
    else {
      uVar12 = (uint)in_RSI[2];
    }
    in_RSI[4] = lVar4 + 1;
    puVar11 = (undefined4 *)(in_RSI[5] + (ulong)((int)lVar10 + uVar12 + (int)lVar4 & 0x3ff) * 0x68);
    *puVar11 = local_a8;
    puVar11[1] = local_a4;
    std::__cxx11::string::_M_assign((string *)(puVar11 + 2));
    p_Var14 = local_78;
    p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0xc);
    *(undefined8 *)(puVar11 + 10) = local_80;
    if (local_78 != p_Var13) {
      if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          UNLOCK();
          p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0xc);
        }
        else {
          *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
          p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0xc);
        }
      }
      if (p_Var13 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var13 + 8;
        if (*(long *)(p_Var13 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var13 + 8) = 0;
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var13 + 8);
            *(int *)(p_Var13 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var13);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0xc) = p_Var14;
    }
    p_Var14 = local_58;
    p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0x14);
    *(undefined8 *)(puVar11 + 0xe) = local_70;
    *(undefined8 *)(puVar11 + 0x10) = local_68;
    *(ulong *)(puVar11 + 0x12) = local_60;
    if (local_58 != p_Var13) {
      if (local_58 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
          p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0x14);
        }
        else {
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          p_Var13 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0x14);
        }
      }
      if (p_Var13 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        p_Var1 = p_Var13 + 8;
        if (*(long *)(p_Var13 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var13 + 8) = 0;
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
        }
        else {
          if (__libc_single_threaded == '\0') {
            LOCK();
            iVar9 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(p_Var13 + 8);
            *(int *)(p_Var13 + 8) = iVar9 + -1;
          }
          if (iVar9 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var13);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(puVar11 + 0x14) = p_Var14;
      p_Var13 = local_58;
    }
    *(undefined8 *)(puVar11 + 0x16) = local_50;
    *(undefined8 *)(puVar11 + 0x18) = local_48;
    if (p_Var13 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var14 = p_Var13 + 8;
      if (*(long *)(p_Var13 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var13 + 8) = 0;
        (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
        (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var14;
          *(int *)p_Var14 = *(int *)p_Var14 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(p_Var13 + 8);
          *(int *)(p_Var13 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var13);
        }
      }
    }
    p_Var13 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var14 = local_78 + 8;
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        (**(code **)(*(long *)p_Var13 + 0x18))(p_Var13);
      }
      else {
        if (__libc_single_threaded == '\0') {
          LOCK();
          iVar9 = *(int *)p_Var14;
          *(int *)p_Var14 = *(int *)p_Var14 + -1;
          UNLOCK();
        }
        else {
          iVar9 = *(int *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar9 + -1;
        }
        if (iVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    if (local_a0 != local_90) {
      operator_delete(local_a0,local_90[0] + 1);
    }
  }
  puVar11 = in_RDI + 6;
  puVar2 = (undefined4 *)(in_RSI[5] + (ulong)((int)in_RSI[3] + (int)in_RSI[2] & 0x3ff) * 0x68);
  *in_RDI = *puVar2;
  uVar8 = puVar2[1];
  *(undefined4 **)(in_RDI + 2) = puVar11;
  in_RDI[1] = uVar8;
  uVar5 = *(ulong *)(puVar2 + 4);
  __src = *(undefined1 **)(puVar2 + 2);
  local_118 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(in_RDI + 6) = *__src;
      goto LAB_0010e596;
    }
    if (uVar5 == 0) goto LAB_0010e596;
  }
  else {
    puVar11 = (undefined4 *)std::__cxx11::string::_M_create((ulong *)(in_RDI + 2),(ulong)&local_118)
    ;
    *(undefined4 **)(in_RDI + 2) = puVar11;
    *(ulong *)(in_RDI + 6) = local_118;
  }
  memcpy(puVar11,__src,uVar5);
  puVar11 = *(undefined4 **)(in_RDI + 2);
LAB_0010e596:
  *(ulong *)(in_RDI + 4) = local_118;
  *(undefined1 *)((long)puVar11 + local_118) = 0;
  *(undefined8 *)(in_RDI + 10) = *(undefined8 *)(puVar2 + 10);
  lVar10 = *(long *)(puVar2 + 0xc);
  *(long *)(in_RDI + 0xc) = lVar10;
  if (lVar10 != 0) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
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
    if (0xfffffffffffffffe < uVar1) goto LAB_0010ec30;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_0010ec30:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_0010ebb9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_0010ebb9:
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
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  pvVar1 = *(void **)(this + 8);
  pvVar2 = *(void **)this;
  uVar3 = (long)pvVar1 - (long)pvVar2 >> 5;
  if (uVar3 == 0x3ffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar2 == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_0010ede0;
    uVar13 = 0x3ffffffffffffff;
    if (uVar3 + 1 < 0x400000000000000) {
      uVar13 = uVar3 + 1;
    }
    uVar13 = uVar13 << 5;
LAB_0010edea:
    plVar5 = (long *)operator_new(uVar13);
    lVar10 = uVar13 + (long)plVar5;
    plVar4 = plVar5 + 4;
  }
  else {
    uVar13 = uVar3 * 2;
    if (uVar13 < uVar3) {
LAB_0010ede0:
      uVar13 = 0x7fffffffffffffe0;
      goto LAB_0010edea;
    }
    if (uVar13 != 0) {
      if (0x3ffffffffffffff < uVar13) {
        uVar13 = 0x3ffffffffffffff;
      }
      uVar13 = uVar13 << 5;
      goto LAB_0010edea;
    }
    plVar4 = (long *)0x20;
    lVar10 = 0;
    plVar5 = (long *)0x0;
  }
  plVar8 = (long *)(((long)param_2 - (long)pvVar2) + (long)plVar5);
  plVar9 = param_3 + 2;
  *plVar8 = (long)(plVar8 + 2);
  if ((long *)*param_3 == plVar9) {
    lVar12 = param_3[1];
    uVar3 = lVar12 + 1;
    uVar7 = (uint)uVar3;
    if (uVar7 < 8) {
      if ((uVar3 & 4) != 0) {
        *(int *)(plVar8 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar3 & 0xffffffff) + 0xc);
        lVar12 = param_3[1];
        goto LAB_0010ed44;
      }
      if (uVar7 == 0) goto LAB_0010ed44;
      *(char *)(plVar8 + 2) = (char)param_3[2];
      if ((uVar3 & 2) != 0) {
        *(undefined2 *)((long)plVar8 + (uVar3 & 0xffffffff) + 0xe) =
             *(undefined2 *)((long)param_3 + (uVar3 & 0xffffffff) + 0xe);
        lVar12 = param_3[1];
        goto LAB_0010ed44;
      }
    }
    else {
      plVar8[2] = param_3[2];
      *(undefined8 *)((long)plVar8 + (uVar3 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar3 & 0xffffffff) + 8);
      lVar12 = (long)(plVar8 + 2) - ((ulong)(plVar8 + 3) & 0xfffffffffffffff8);
      uVar7 = uVar7 + (int)lVar12 & 0xfffffff8;
      if (7 < uVar7) {
        uVar11 = 0;
        do {
          uVar3 = (ulong)uVar11;
          uVar11 = uVar11 + 8;
          *(undefined8 *)(((ulong)(plVar8 + 3) & 0xfffffffffffffff8) + uVar3) =
               *(undefined8 *)((long)plVar9 + (uVar3 - lVar12));
        } while (uVar11 < uVar7);
        lVar12 = param_3[1];
        goto LAB_0010ed44;
      }
    }
  }
  else {
    *plVar8 = *param_3;
    plVar8[2] = param_3[2];
  }
  lVar12 = param_3[1];
LAB_0010ed44:
  plVar8[1] = lVar12;
  *param_3 = (long)plVar9;
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar2) {
    plVar4 = (long *)((long)pvVar2 + 0x10);
    plVar9 = plVar5;
    do {
      plVar8 = plVar9 + 2;
      *plVar9 = (long)plVar8;
      plVar6 = (long *)plVar4[-2];
      if (plVar4 == plVar6) {
        uVar3 = plVar4[-1] + 1;
        uVar7 = (uint)uVar3;
        if (uVar7 < 8) {
          if ((uVar3 & 4) == 0) {
            if ((uVar7 != 0) && (*(char *)plVar8 = (char)*plVar4, (uVar3 & 2) != 0)) {
              *(undefined2 *)((long)plVar9 + (uVar3 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar4 + ((uVar3 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar8 = (int)*plVar4;
            *(undefined4 *)((long)plVar9 + (uVar3 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar4 + ((uVar3 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar8 = *plVar4;
          *(undefined8 *)((long)plVar9 + (uVar3 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar4 + ((uVar3 & 0xffffffff) - 8));
          lVar12 = (long)plVar8 - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
          uVar7 = uVar7 + (int)lVar12 & 0xfffffff8;
          if (7 < uVar7) {
            uVar11 = 0;
            do {
              uVar3 = (ulong)uVar11;
              uVar11 = uVar11 + 8;
              *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((long)plVar4 + (uVar3 - lVar12));
            } while (uVar11 < uVar7);
          }
        }
        lVar12 = plVar6[-1];
      }
      else {
        *plVar9 = (long)plVar6;
        plVar9[2] = *plVar4;
        lVar12 = plVar4[-1];
      }
      plVar4 = plVar4 + 4;
      plVar9[1] = lVar12;
      plVar9 = plVar9 + 4;
    } while ((long *)((long)param_2 + 0x10) != plVar4);
    plVar4 = (long *)((long)plVar5 + (long)param_2 + (0x20 - (long)pvVar2));
  }
  plVar9 = plVar4;
  if (param_2 != pvVar1) {
    plVar9 = (long *)(((long)pvVar1 - (long)param_2) + (long)plVar4);
    plVar8 = (long *)((long)param_2 + 0x10);
    do {
      while( true ) {
        plVar6 = plVar4 + 2;
        *plVar4 = (long)plVar6;
        if ((long *)plVar8[-2] == plVar8) break;
        *plVar4 = plVar8[-2];
        plVar6 = plVar4 + 4;
        plVar4[2] = *plVar8;
        plVar4[1] = plVar8[-1];
        plVar4 = plVar6;
        plVar8 = plVar8 + 4;
        if (plVar6 == plVar9) goto LAB_0010ee6f;
      }
      lVar12 = plVar8[-1];
      uVar3 = lVar12 + 1;
      uVar7 = (uint)uVar3;
      if (uVar7 < 8) {
        if ((uVar3 & 4) == 0) {
          if (uVar7 != 0) {
            *(char *)plVar6 = (char)*plVar8;
            if ((uVar3 & 2) == 0) goto LAB_0010eec9;
            *(undefined2 *)((long)plVar4 + (uVar3 & 0xffffffff) + 0xe) =
                 *(undefined2 *)((long)plVar8 + ((uVar3 & 0xffffffff) - 2));
            lVar12 = plVar8[-1];
          }
        }
        else {
          *(int *)plVar6 = (int)*plVar8;
          *(undefined4 *)((long)plVar4 + (uVar3 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)plVar8 + ((uVar3 & 0xffffffff) - 4));
          lVar12 = plVar8[-1];
        }
      }
      else {
        *plVar6 = *plVar8;
        *(undefined8 *)((long)plVar4 + (uVar3 & 0xffffffff) + 8) =
             *(undefined8 *)((long)plVar8 + ((uVar3 & 0xffffffff) - 8));
        lVar12 = (long)plVar6 - ((ulong)(plVar4 + 3) & 0xfffffffffffffff8);
        uVar7 = uVar7 + (int)lVar12 & 0xfffffff8;
        if (7 < uVar7) {
          uVar11 = 0;
          do {
            uVar3 = (ulong)uVar11;
            uVar11 = uVar11 + 8;
            *(undefined8 *)(((ulong)(plVar4 + 3) & 0xfffffffffffffff8) + uVar3) =
                 *(undefined8 *)((long)plVar8 + (uVar3 - lVar12));
          } while (uVar11 < uVar7);
        }
LAB_0010eec9:
        lVar12 = plVar8[-1];
      }
      plVar4[1] = lVar12;
      plVar4 = plVar4 + 4;
      plVar8 = plVar8 + 4;
    } while (plVar4 != plVar9);
  }
LAB_0010ee6f:
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x10) - (long)pvVar2);
  }
  *(long **)this = plVar5;
  *(long **)(this + 8) = plVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* embree::g_printMutex */

void embree::_GLOBAL__sub_I_g_printMutex(void)

{
  embree::MutexSys::MutexSys((MutexSys *)&g_printMutex);
  __cxa_atexit(embree::MutexSys::~MutexSys,&g_printMutex,&__dso_handle);
  State::g_errorHandler._0_8_ = embree::createTls();
  State::g_errorHandler._8_8_ = 0;
  State::g_errorHandler._16_8_ = 0;
  State::g_errorHandler._24_8_ = 0;
  embree::MutexSys::MutexSys((MutexSys *)(State::g_errorHandler + 0x20));
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


