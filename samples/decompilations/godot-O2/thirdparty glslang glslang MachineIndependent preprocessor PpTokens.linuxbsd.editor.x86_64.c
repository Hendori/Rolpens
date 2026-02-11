
/* glslang::TPpContext::tUngotTokenInput::scan(glslang::TPpToken*) */

undefined4 __thiscall
glslang::TPpContext::tUngotTokenInput::scan(tUngotTokenInput *this,TPpToken *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  tUngotTokenInput *ptVar4;
  undefined8 *puVar5;
  
  if (this[8] == (tUngotTokenInput)0x0) {
    uVar3 = *(undefined4 *)(this + 0x18);
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(param_1 + 0x421) = *(undefined8 *)(this + 0x441);
    lVar1 = (long)param_1 - (long)((ulong)(param_1 + 8) & 0xfffffffffffffff8);
    ptVar4 = this + (0x20 - lVar1);
    puVar5 = (undefined8 *)((ulong)(param_1 + 8) & 0xfffffffffffffff8);
    for (uVar2 = (ulong)((int)lVar1 + 0x429U >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *(undefined8 *)ptVar4;
      ptVar4 = ptVar4 + 8;
      puVar5 = puVar5 + 1;
    }
    this[8] = (tUngotTokenInput)0x1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     _M_construct<char_const*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)param_1[1];
    if (__n == 1) {
      *__dest = *param_2;
      param_1[2] = 1;
      *(undefined1 *)(param_1[1] + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[2] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*param_1);
    param_1[3] = __n;
    param_1[1] = (ulong)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[2] = __n;
  *(undefined1 *)(param_1[1] + __n) = 0;
  return;
}



/* glslang::TPpContext::TokenStream::getToken(glslang::TParseContextBase&, glslang::TPpToken*) */

int __thiscall
glslang::TPpContext::TokenStream::getToken
          (TokenStream *this,TParseContextBase *param_1,TPpToken *param_2)

{
  int *piVar1;
  TPpToken TVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  lVar3 = *(long *)(this + 8);
  uVar4 = *(ulong *)(this + 0x20);
  if (uVar4 < (ulong)((*(long *)(this + 0x10) - lVar3 >> 3) * 0x6db6db6db6db6db7)) {
    *(ulong *)(this + 0x20) = uVar4 + 1;
    param_2[0x28] = (TPpToken)0x0;
    piVar1 = (int *)(lVar3 + uVar4 * 0x38);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined2 *)(param_2 + 0x18) = 0;
    TVar2 = *(TPpToken *)(piVar1 + 1);
    *(undefined8 *)param_2 = 0;
    uVar5 = *(undefined8 *)(piVar1 + 6);
    param_2[0x18] = TVar2;
    uVar6 = *(undefined8 *)(piVar1 + 2);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x20) = uVar6;
    *(undefined4 *)(param_2 + 0x10) = 0;
    snprintf((char *)(param_2 + 0x28),0x401,"%s",uVar5);
    lVar3 = *(long *)(param_1 + 0xd8);
    iVar9 = *piVar1;
    puVar8 = (undefined8 *)(lVar3 + 0x40);
    if (*(char *)(lVar3 + 0x58) == '\0') {
      puVar8 = *(undefined8 **)(lVar3 + 0x30);
      iVar7 = (*(int *)(lVar3 + 8) - *(int *)(lVar3 + 0x3c)) + -1;
      if (*(int *)(lVar3 + 0x20) < iVar7) {
        iVar7 = *(int *)(lVar3 + 0x20);
      }
      if (0 < iVar7) {
        puVar8 = puVar8 + (long)iVar7 * 3;
      }
    }
    uVar5 = puVar8[1];
    *(undefined8 *)param_2 = *puVar8;
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = puVar8[2];
    if (iVar9 == 0x23) {
      if ((*(ulong *)(this + 0x20) <
           (ulong)((*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * 0x6db6db6db6db6db7)) &&
         (*(int *)(*(long *)(this + 8) + *(ulong *)(this + 0x20) * 0x38) == 0x23)) {
        glslang::TParseVersions::requireProfile
                  ((TSourceLoc *)param_1,(int)param_2,(char *)0xfffffff7);
        glslang::TParseVersions::profileRequires
                  ((TSourceLoc *)param_1,(int)param_2,-9,(char *)0x82,(char *)0x0);
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
        return 0x97;
      }
    }
  }
  else {
    iVar9 = -1;
  }
  return iVar9;
}



/* glslang::TPpContext::TokenStream::peekTokenizedPasting(bool) */

undefined4 __thiscall
glslang::TPpContext::TokenStream::peekTokenizedPasting(TokenStream *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined3 in_register_00000031;
  undefined4 uVar5;
  ulong uVar6;
  
  uVar5 = CONCAT31(in_register_00000031,param_1);
  lVar1 = *(long *)(this + 8);
  uVar2 = *(ulong *)(this + 0x20);
  uVar6 = (*(long *)(this + 0x10) - lVar1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar2 < uVar6) {
    piVar3 = (int *)(lVar1 + uVar2 * 0x38);
    uVar4 = uVar2;
    do {
      if (*piVar3 != 0x20) {
        if (uVar4 < uVar6) {
          if (*(int *)(lVar1 + uVar4 * 0x38) == 0x97) {
            *(ulong *)(this + 0x20) = uVar2;
            return 1;
          }
          uVar5 = 0;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0xe;
      *(ulong *)(this + 0x20) = uVar4;
    } while (uVar4 < uVar6);
  }
  if (param_1) {
    return uVar5;
  }
  return 0;
}



/* glslang::TPpContext::TokenStream::peekUntokenizedPasting() */

bool __thiscall glslang::TPpContext::TokenStream::peekUntokenizedPasting(TokenStream *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar1 = *(long *)(this + 8);
  uVar2 = *(ulong *)(this + 0x20);
  uVar3 = (*(long *)(this + 0x10) - lVar1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar3 <= uVar2) {
    return false;
  }
  piVar4 = (int *)(lVar1 + uVar2 * 0x38);
  while (*piVar4 == 0x20) {
    uVar2 = uVar2 + 1;
    piVar4 = piVar4 + 0xe;
    if (uVar3 <= uVar2) {
      return false;
    }
  }
  if (uVar3 <= uVar2) {
    return false;
  }
  if (*(int *)(lVar1 + uVar2 * 0x38) != 0x23) {
    return false;
  }
  if (uVar3 <= uVar2 + 1) {
    return false;
  }
  return *(int *)(lVar1 + 0x38 + uVar2 * 0x38) == 0x23;
}



/* glslang::TPpContext::UngetToken(int, glslang::TPpToken*) */

void __thiscall glslang::TPpContext::UngetToken(TPpContext *this,int param_1,TPpToken *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  byte bVar5;
  long *local_38;
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)operator_new(0x450);
  *(undefined1 *)(plVar2 + 1) = 0;
  plVar2[2] = (long)this;
  *plVar2 = (long)&PTR__tUngotTokenInput_001011a8;
  *(int *)(plVar2 + 3) = param_1;
  plVar4 = plVar2 + 4;
  for (lVar3 = 0x86; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = *(long *)param_2;
    param_2 = param_2 + (ulong)bVar5 * -0x10 + 8;
    plVar4 = plVar4 + (ulong)bVar5 * -2 + 1;
  }
  puVar1 = *(undefined8 **)(this + 400);
  local_38 = plVar2;
  if (puVar1 == *(undefined8 **)(this + 0x198)) {
    std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
    _M_realloc_insert<glslang::TPpContext::tInput*const&>
              ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *)
               (this + 0x188),puVar1,&local_38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x50);
  }
  else {
    *puVar1 = plVar2;
    UNRECOVERED_JUMPTABLE = tInput::notifyActivated;
    *(undefined8 **)(this + 400) = puVar1 + 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010048f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::pushTokenStreamInput(glslang::TPpContext::TokenStream&, bool, bool) */

void __thiscall
glslang::TPpContext::pushTokenStreamInput
          (TPpContext *this,TokenStream *param_1,bool param_2,bool param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)operator_new(0x28);
  puVar1 = *(undefined8 **)(this + 400);
  *(undefined1 *)(plVar2 + 1) = 0;
  plVar2[2] = (long)this;
  *plVar2 = (long)&PTR__tTokenInput_00101138;
  plVar2[3] = (long)param_1;
  *(bool *)(plVar2 + 4) = param_2;
  *(bool *)((long)plVar2 + 0x21) = param_3;
  local_38 = plVar2;
  if (puVar1 == *(undefined8 **)(this + 0x198)) {
    std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
    _M_realloc_insert<glslang::TPpContext::tInput*const&>
              ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *)
               (this + 0x188),puVar1,&local_38);
    pcVar3 = *(code **)(*plVar2 + 0x50);
  }
  else {
    *puVar1 = plVar2;
    pcVar3 = tInput::notifyActivated;
    *(undefined8 **)(this + 400) = puVar1 + 1;
  }
  (*pcVar3)(plVar2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::TokenStream::putToken(int, glslang::TPpToken*) */

void __thiscall
glslang::TPpContext::TokenStream::putToken(TokenStream *this,int param_1,TPpToken *param_2)

{
  int *piVar1;
  undefined1 *__src;
  size_t sVar2;
  ulong uVar3;
  int *__dest;
  TPpToken *__s;
  long in_FS_OFFSET;
  int local_68;
  TPpToken local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined1 local_40 [16];
  long local_30;
  
  __s = param_2 + 0x28;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = param_2[0x18];
  local_60 = *(undefined8 *)(param_2 + 0x20);
  local_68 = param_1;
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  sVar2 = strlen((char *)__s);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_58,__s,__s + sVar2);
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 == *(int **)(this + 0x18)) {
    std::
    vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
    ::_M_realloc_insert<glslang::TPpContext::TokenStream::Token_const&>
              ((vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
                *)this,piVar1,&local_68);
    goto LAB_0010065a;
  }
  *piVar1 = local_68;
  *(TPpToken *)(piVar1 + 1) = local_64;
  *(undefined8 *)(piVar1 + 2) = local_60;
  uVar3 = glslang::GetThreadPoolAllocator();
  __src = local_50;
  __dest = piVar1 + 10;
  *(int **)(piVar1 + 6) = __dest;
  *(ulong *)(piVar1 + 4) = uVar3;
  if (local_48 < 0x10) {
    if (local_48 == 1) {
      *(undefined1 *)(piVar1 + 10) = *local_50;
    }
    else if (local_48 != 0) goto LAB_00100695;
  }
  else {
    if ((long)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    __dest = (int *)glslang::TPoolAllocator::allocate(uVar3);
    *(ulong *)(piVar1 + 10) = local_48;
    *(int **)(piVar1 + 6) = __dest;
LAB_00100695:
    memcpy(__dest,__src,local_48);
    __dest = *(int **)(piVar1 + 6);
  }
  *(ulong *)(piVar1 + 8) = local_48;
  *(undefined1 *)((long)__dest + local_48) = 0;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x38;
LAB_0010065a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TPpContext::tInput::peekPasting() */

undefined8 glslang::TPpContext::tInput::peekPasting(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::peekContinuedPasting(int) */

undefined8 glslang::TPpContext::tInput::peekContinuedPasting(int param_1)

{
  return 0;
}



/* glslang::TPpContext::tInput::endOfReplacementList() */

undefined8 glslang::TPpContext::tInput::endOfReplacementList(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::isMacroInput() */

undefined8 glslang::TPpContext::tInput::isMacroInput(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::isStringInput() */

undefined8 glslang::TPpContext::tInput::isStringInput(void)

{
  return 0;
}



/* glslang::TPpContext::tInput::notifyActivated() */

void glslang::TPpContext::tInput::notifyActivated(void)

{
  return;
}



/* glslang::TPpContext::tInput::notifyDeleted() */

void glslang::TPpContext::tInput::notifyDeleted(void)

{
  return;
}



/* glslang::TPpContext::tTokenInput::getch() */

undefined8 glslang::TPpContext::tTokenInput::getch(void)

{
  return 0xffffffff;
}



/* glslang::TPpContext::tTokenInput::ungetch() */

void glslang::TPpContext::tTokenInput::ungetch(void)

{
  return;
}



/* glslang::TPpContext::tTokenInput::peekContinuedPasting(int) */

ulong __thiscall
glslang::TPpContext::tTokenInput::peekContinuedPasting(tTokenInput *this,int param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x18);
  uVar5 = (*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3) * 0x6db6db6db6db6db7;
  bVar3 = *(ulong *)(lVar2 + 0x20) < uVar5 && param_1 == 0xa2;
  uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar3);
  if (bVar3) {
    piVar1 = (int *)(*(long *)(lVar2 + 8) + *(ulong *)(lVar2 + 0x20) * 0x38);
    uVar5 = 0;
    if ((char)piVar1[1] == '\0') {
      uVar4 = *piVar1 - 0x98;
      return (ulong)CONCAT31((int3)(uVar4 >> 8),uVar4 < 0xb);
    }
  }
  return uVar5;
}



/* glslang::TPpContext::tUngotTokenInput::getch() */

undefined8 glslang::TPpContext::tUngotTokenInput::getch(void)

{
  return 0xffffffff;
}



/* glslang::TPpContext::tUngotTokenInput::ungetch() */

void glslang::TPpContext::tUngotTokenInput::ungetch(void)

{
  return;
}



/* glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput() */

void __thiscall glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput(tUngotTokenInput *this)

{
  return;
}



/* glslang::TPpContext::tTokenInput::~tTokenInput() */

void __thiscall glslang::TPpContext::tTokenInput::~tTokenInput(tTokenInput *this)

{
  return;
}



/* glslang::TPpContext::tTokenInput::~tTokenInput() */

void __thiscall glslang::TPpContext::tTokenInput::~tTokenInput(tTokenInput *this)

{
  operator_delete(this,0x28);
  return;
}



/* glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput() */

void __thiscall glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput(tUngotTokenInput *this)

{
  operator_delete(this,0x450);
  return;
}



/* glslang::TPpContext::tTokenInput::scan(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::tTokenInput::scan(tTokenInput *this,TPpToken *param_1)

{
  TPpToken *__s;
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *__s1;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = TokenStream::getToken
                    (*(TokenStream **)(this + 0x18),
                     *(TParseContextBase **)(*(long *)(this + 0x10) + 0x100),param_1);
  lVar2 = *(long *)(this + 0x18);
  param_1[0x19] = *(TPpToken *)(this + 0x21);
  if (((ulong)((*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 3) * 0x6db6db6db6db6db7) <=
       *(ulong *)(lVar2 + 0x20)) && (iVar5 == 0xa2)) {
    __s = param_1 + 0x28;
    lVar2 = *(long *)(this + 0x10);
    local_68 = glslang::GetThreadPoolAllocator();
    local_60 = local_50;
    sVar8 = strlen((char *)__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(&local_68,__s,__s + sVar8);
    __s1 = local_60;
    if (*(long *)(lVar2 + 0x60) == 0) {
      for (puVar15 = *(undefined8 **)(lVar2 + 0x58); puVar15 != (undefined8 *)0x0;
          puVar15 = (undefined8 *)*puVar15) {
        if ((local_58 == puVar15[3]) &&
           ((local_58 == 0 || (iVar6 = memcmp(__s1,(void *)puVar15[2],local_58), iVar6 == 0))))
        goto LAB_0010099b;
      }
    }
    else {
      uVar16 = 0x811c9dc5;
      if (local_58 != 0) {
        uVar7 = 0x811c9dc5;
        pcVar12 = local_60;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
        } while (local_60 + local_58 != pcVar12);
        uVar16 = (ulong)uVar7;
      }
      uVar3 = *(ulong *)(lVar2 + 0x50);
      uVar13 = uVar16 % uVar3;
      puVar15 = *(undefined8 **)(*(long *)(lVar2 + 0x48) + uVar13 * 8);
      if (puVar15 != (undefined8 *)0x0) {
        uVar11 = ((undefined8 *)*puVar15)[7];
        puVar17 = (undefined8 *)*puVar15;
        while (((uVar16 != uVar11 || (local_58 != puVar17[3])) ||
               ((local_58 != 0 && (iVar6 = memcmp(__s1,(void *)puVar17[2],local_58), iVar6 != 0)))))
        {
          puVar4 = (undefined8 *)*puVar17;
          if ((puVar4 == (undefined8 *)0x0) ||
             (uVar11 = puVar4[7], puVar15 = puVar17, puVar17 = puVar4, uVar13 != uVar11 % uVar3))
          goto LAB_001008e4;
        }
        puVar15 = (undefined8 *)*puVar15;
        if (puVar15 != (undefined8 *)0x0) goto LAB_0010099b;
      }
    }
  }
LAB_001008e4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010099b:
  iVar6 = *(int *)(puVar15 + 6);
  if (iVar6 != 0) {
    lVar2 = *(long *)(this + 0x10) + 0x18;
    lVar10 = *(long *)(*(long *)(this + 0x10) + 0x20);
    lVar14 = lVar2;
    if (lVar10 != 0) {
      do {
        lVar9 = *(long *)(lVar10 + 0x18);
        if (iVar6 <= *(int *)(lVar10 + 0x20)) {
          lVar9 = *(long *)(lVar10 + 0x10);
          lVar14 = lVar10;
        }
        lVar10 = lVar9;
      } while (lVar9 != 0);
      if (((lVar14 != lVar2) && (*(int *)(lVar14 + 0x20) <= iVar6)) &&
         ((*(byte *)(lVar14 + 0x70) & 1) != 0)) {
        param_1[0x19] = (TPpToken)0x0;
      }
    }
  }
  goto LAB_001008e4;
}



/* glslang::TPpContext::tTokenInput::peekPasting() */

void __thiscall glslang::TPpContext::tTokenInput::peekPasting(tTokenInput *this)

{
  TokenStream::peekTokenizedPasting(*(TokenStream **)(this + 0x18),(bool)this[0x20]);
  return;
}



/* void std::vector<glslang::TPpContext::tInput*, std::allocator<glslang::TPpContext::tInput*>
   >::_M_realloc_insert<glslang::TPpContext::tInput*
   const&>(__gnu_cxx::__normal_iterator<glslang::TPpContext::tInput**,
   std::vector<glslang::TPpContext::tInput*, std::allocator<glslang::TPpContext::tInput*> > >,
   glslang::TPpContext::tInput* const&) */

void __thiscall
std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
_M_realloc_insert<glslang::TPpContext::tInput*const&>
          (vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *this,
          void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00100c00;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00100c0a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00100c00:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00100c0a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00100c0a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00100bdc;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00100bdc:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<glslang::TPpContext::TokenStream::Token,
   glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>
   >::_M_realloc_insert<glslang::TPpContext::TokenStream::Token
   const&>(__gnu_cxx::__normal_iterator<glslang::TPpContext::TokenStream::Token*,
   std::vector<glslang::TPpContext::TokenStream::Token,
   glslang::pool_allocator<glslang::TPpContext::TokenStream::Token> > >,
   glslang::TPpContext::TokenStream::Token const&) */

void __thiscall
std::
vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
::_M_realloc_insert<glslang::TPpContext::TokenStream::Token_const&>
          (vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
           *this,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_50;
  ulong local_48;
  
  puVar1 = *(undefined4 **)(this + 0x10);
  puVar6 = *(undefined4 **)(this + 8);
  lVar3 = (long)puVar1 - (long)puVar6 >> 3;
  uVar4 = lVar3 * 0x6db6db6db6db6db7;
  if (uVar4 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar6 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_00100e60;
    local_48 = 0x249249249249249;
    if (uVar4 + 1 < 0x24924924924924a) {
      local_48 = uVar4 + 1;
    }
LAB_00100e6f:
    local_50 = (undefined4 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  }
  else {
    uVar5 = lVar3 * -0x2492492492492492;
    if (uVar5 < uVar4) {
LAB_00100e60:
      local_48 = 0x249249249249249;
      goto LAB_00100e6f;
    }
    if (uVar5 != 0) {
      local_48 = 0x249249249249249;
      if (uVar5 < 0x24924924924924a) {
        local_48 = uVar5;
      }
      goto LAB_00100e6f;
    }
    local_50 = (undefined4 *)0x0;
    local_48 = uVar5;
  }
  puVar8 = (undefined4 *)(((long)param_2 - (long)puVar6) + (long)local_50);
  *puVar8 = *param_3;
  *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
  uVar5 = glslang::GetThreadPoolAllocator();
  puVar7 = puVar8 + 10;
  *(undefined4 **)(puVar8 + 6) = puVar7;
  puVar2 = *(undefined1 **)(param_3 + 6);
  uVar4 = *(ulong *)(param_3 + 8);
  *(ulong *)(puVar8 + 4) = uVar5;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar8 + 10) = *puVar2;
      goto LAB_00100da7;
    }
    if (uVar4 == 0) goto LAB_00100da7;
  }
  else {
    if ((long)uVar4 < 0) {
LAB_00101041:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    puVar7 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar5);
    *(undefined4 **)(puVar8 + 6) = puVar7;
    *(ulong *)(puVar8 + 10) = uVar4;
  }
  memcpy(puVar7,puVar2,uVar4);
  puVar7 = *(undefined4 **)(puVar8 + 6);
LAB_00100da7:
  *(ulong *)(puVar8 + 8) = uVar4;
  *(undefined1 *)((long)puVar7 + uVar4) = 0;
  puVar7 = local_50;
  for (; param_2 != puVar6; puVar6 = puVar6 + 0xe) {
    *puVar7 = *puVar6;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar6 + 1);
    *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
    uVar5 = glslang::GetThreadPoolAllocator();
    uVar4 = *(ulong *)(puVar6 + 8);
    puVar8 = puVar7 + 10;
    *(undefined4 **)(puVar7 + 6) = puVar8;
    puVar2 = *(undefined1 **)(puVar6 + 6);
    *(ulong *)(puVar7 + 4) = uVar5;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        *(undefined1 *)(puVar7 + 10) = *puVar2;
      }
      else if (uVar4 != 0) goto LAB_00100e45;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_00101041;
      puVar8 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar5);
      *(ulong *)(puVar7 + 10) = uVar4;
      *(undefined4 **)(puVar7 + 6) = puVar8;
LAB_00100e45:
      memcpy(puVar8,puVar2,uVar4);
      puVar8 = *(undefined4 **)(puVar7 + 6);
    }
    *(ulong *)(puVar7 + 8) = uVar4;
    puVar7 = puVar7 + 0xe;
    *(undefined1 *)((long)puVar8 + uVar4) = 0;
  }
  puVar7 = puVar7 + 0xe;
  if (param_2 != puVar1) {
    do {
      *puVar7 = *param_2;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_2 + 1);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + 2);
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong *)(param_2 + 8);
      puVar6 = puVar7 + 10;
      *(undefined4 **)(puVar7 + 6) = puVar6;
      puVar2 = *(undefined1 **)(param_2 + 6);
      *(ulong *)(puVar7 + 4) = uVar5;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          *(undefined1 *)(puVar7 + 10) = *puVar2;
        }
        else if (uVar4 != 0) goto LAB_00100f28;
      }
      else {
        if ((long)uVar4 < 0) goto LAB_00101041;
        puVar6 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar5);
        *(ulong *)(puVar7 + 10) = uVar4;
        *(undefined4 **)(puVar7 + 6) = puVar6;
LAB_00100f28:
        memcpy(puVar6,puVar2,uVar4);
        puVar6 = *(undefined4 **)(puVar7 + 6);
      }
      param_2 = param_2 + 0xe;
      *(ulong *)(puVar7 + 8) = uVar4;
      puVar7 = puVar7 + 0xe;
      *(undefined1 *)((long)puVar6 + uVar4) = 0;
    } while (puVar1 != param_2);
  }
  *(undefined4 **)(this + 0x10) = puVar7;
  *(undefined4 **)(this + 8) = local_50;
  *(undefined4 **)(this + 0x18) = local_50 + local_48 * 0xe;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tTokenInput::~tTokenInput() */

void __thiscall glslang::TPpContext::tTokenInput::~tTokenInput(tTokenInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput() */

void __thiscall glslang::TPpContext::tUngotTokenInput::~tUngotTokenInput(tUngotTokenInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


