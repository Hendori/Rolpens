
/* glslang::(anonymous namespace)::op_logor(int, int) */

bool glslang::(anonymous_namespace)::op_logor(int param_1,int param_2)

{
  return param_1 != 0 || param_2 != 0;
}



/* glslang::(anonymous namespace)::op_logand(int, int) */

bool glslang::(anonymous_namespace)::op_logand(int param_1,int param_2)

{
  return param_2 != 0 && param_1 != 0;
}



/* glslang::(anonymous namespace)::op_or(int, int) */

uint glslang::(anonymous_namespace)::op_or(int param_1,int param_2)

{
  return param_1 | param_2;
}



/* glslang::(anonymous namespace)::op_xor(int, int) */

uint glslang::(anonymous_namespace)::op_xor(int param_1,int param_2)

{
  return param_1 ^ param_2;
}



/* glslang::(anonymous namespace)::op_and(int, int) */

uint glslang::(anonymous_namespace)::op_and(int param_1,int param_2)

{
  return param_1 & param_2;
}



/* glslang::(anonymous namespace)::op_eq(int, int) */

bool glslang::(anonymous_namespace)::op_eq(int param_1,int param_2)

{
  return param_1 == param_2;
}



/* glslang::(anonymous namespace)::op_ne(int, int) */

bool glslang::(anonymous_namespace)::op_ne(int param_1,int param_2)

{
  return param_1 != param_2;
}



/* glslang::(anonymous namespace)::op_ge(int, int) */

bool glslang::(anonymous_namespace)::op_ge(int param_1,int param_2)

{
  return param_2 <= param_1;
}



/* glslang::(anonymous namespace)::op_le(int, int) */

bool glslang::(anonymous_namespace)::op_le(int param_1,int param_2)

{
  return param_1 <= param_2;
}



/* glslang::(anonymous namespace)::op_gt(int, int) */

bool glslang::(anonymous_namespace)::op_gt(int param_1,int param_2)

{
  return param_2 < param_1;
}



/* glslang::(anonymous namespace)::op_lt(int, int) */

bool glslang::(anonymous_namespace)::op_lt(int param_1,int param_2)

{
  return param_1 < param_2;
}



/* glslang::(anonymous namespace)::op_shl(int, int) */

int glslang::(anonymous_namespace)::op_shl(int param_1,int param_2)

{
  return param_1 << ((byte)param_2 & 0x1f);
}



/* glslang::(anonymous namespace)::op_shr(int, int) */

int glslang::(anonymous_namespace)::op_shr(int param_1,int param_2)

{
  return param_1 >> ((byte)param_2 & 0x1f);
}



/* glslang::(anonymous namespace)::op_add(int, int) */

int glslang::(anonymous_namespace)::op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* glslang::(anonymous namespace)::op_sub(int, int) */

int glslang::(anonymous_namespace)::op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* glslang::(anonymous namespace)::op_mul(int, int) */

int glslang::(anonymous_namespace)::op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* glslang::(anonymous namespace)::op_div(int, int) */

undefined1  [16] __thiscall
glslang::(anonymous_namespace)::op_div(_anonymous_namespace_ *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined4 in_register_00000014;
  undefined1 auVar3 [16];
  
  auVar2._4_4_ = in_register_00000014;
  auVar2._0_4_ = param_2;
  if (((int)this == -0x80000000) && (param_1 == -1)) {
    auVar2._8_8_ = 0;
    return auVar2 << 0x40;
  }
  uVar1 = (ulong)(uint)((int)this >> 0x1f) << 0x20 | (ulong)this & 0xffffffff;
  auVar3._0_8_ = (long)uVar1 / (long)param_1 & 0xffffffff;
  auVar3._8_8_ = (long)uVar1 % (long)param_1 & 0xffffffff;
  return auVar3;
}



/* glslang::(anonymous namespace)::op_mod(int, int) */

ulong glslang::(anonymous_namespace)::op_mod(int param_1,int param_2)

{
  if ((param_1 == -0x80000000) && (param_2 == -1)) {
    return 0;
  }
  return (long)param_1 % (long)param_2 & 0xffffffff;
}



/* glslang::(anonymous namespace)::op_pos(int) */

int glslang::(anonymous_namespace)::op_pos(int param_1)

{
  return param_1;
}



/* glslang::(anonymous namespace)::op_neg(int) */

int glslang::(anonymous_namespace)::op_neg(int param_1)

{
  return -param_1;
}



/* glslang::(anonymous namespace)::op_cmpl(int) */

uint glslang::(anonymous_namespace)::op_cmpl(int param_1)

{
  return ~param_1;
}



/* glslang::(anonymous namespace)::op_not(int) */

bool glslang::(anonymous_namespace)::op_not(int param_1)

{
  return param_1 == 0;
}



/* glslang::TPpContext::tZeroInput::scan(glslang::TPpToken*) */

undefined8 __thiscall glslang::TPpContext::tZeroInput::scan(tZeroInput *this,TPpToken *param_1)

{
  if (this[8] == (tZeroInput)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x28) = 0x30;
    param_1[0x18] = (TPpToken)0x0;
    this[8] = (tZeroInput)0x1;
    return 0x98;
  }
  return 0xffffffff;
}



/* std::vector<int, glslang::pool_allocator<int> >::TEMPNAMEPLACEHOLDERVALUE(std::vector<int,
   glslang::pool_allocator<int> > const&) [clone .isra.0] */

void __thiscall
std::vector<int,glslang::pool_allocator<int>>::operator=
          (vector<int,glslang::pool_allocator<int>> *this,vector *param_1)

{
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *__dest;
  ulong __n_00;
  long lVar5;
  undefined4 *puVar6;
  
  if (param_1 == (vector *)this) {
    return;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  puVar4 = *(undefined4 **)(param_1 + 8);
  __dest = *(undefined4 **)(this + 8);
  __n_00 = (long)puVar6 - (long)puVar4;
  if ((ulong)(*(long *)(this + 0x18) - (long)__dest) < __n_00) {
    lVar1 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar3 = 0;
    if (puVar6 != puVar4) {
      do {
        *(undefined4 *)(lVar1 + uVar3) = *(undefined4 *)((long)puVar4 + uVar3);
        uVar3 = uVar3 + 4;
      } while (uVar3 != __n_00);
    }
    *(long *)(this + 8) = lVar1;
    *(ulong *)(this + 0x18) = __n_00 + lVar1;
    *(ulong *)(this + 0x10) = __n_00 + lVar1;
    return;
  }
  lVar1 = *(long *)(this + 0x10);
  __n = lVar1 - (long)__dest;
  if (__n < __n_00) {
    if ((long)__n < 5) {
      if (__n == 4) {
        *__dest = *puVar4;
      }
    }
    else {
      memmove(__dest,puVar4,__n);
      lVar1 = *(long *)(this + 0x10);
      __dest = *(undefined4 **)(this + 8);
      puVar6 = *(undefined4 **)(param_1 + 0x10);
      puVar4 = *(undefined4 **)(param_1 + 8);
      __n = lVar1 - (long)__dest;
    }
    puVar4 = (undefined4 *)((long)puVar4 + __n);
    lVar5 = __n_00 + (long)__dest;
    if (puVar4 != puVar6) {
      lVar2 = 0;
      do {
        *(undefined4 *)(lVar1 + lVar2) = *(undefined4 *)((long)puVar4 + lVar2);
        lVar2 = lVar2 + 4;
      } while (lVar2 != (long)puVar6 - (long)puVar4);
      *(long *)(this + 0x10) = lVar5;
      return;
    }
  }
  else if ((long)__n_00 < 5) {
    if (__n_00 == 4) {
      *__dest = *puVar4;
    }
    lVar5 = __n_00 + (long)__dest;
  }
  else {
    memmove(__dest,puVar4,__n_00);
    lVar5 = __n_00 + *(long *)(this + 8);
  }
  *(long *)(this + 0x10) = lVar5;
  return;
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



/* glslang::TPpContext::scanHeaderName(glslang::TPpToken*, char) */

undefined8 __thiscall
glslang::TPpContext::scanHeaderName(TPpContext *this,TPpToken *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (*(long *)(this + 0x188) == *(long *)(this + 400)) {
    return 0xffffffff;
  }
  bVar1 = false;
  iVar4 = 0;
  param_1[0x28] = (TPpToken)0x0;
  while( true ) {
    iVar2 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x18))();
    if (iVar2 == param_2) {
      param_1[(long)iVar4 + 0x28] = (TPpToken)0x0;
      if (bVar1) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_1,"header name too long",&_LC3);
      }
      return 0xa1;
    }
    if (iVar2 == -1) break;
    if (iVar4 == 0x400) {
      bVar1 = true;
    }
    else {
      lVar3 = (long)iVar4;
      iVar4 = iVar4 + 1;
      param_1[lVar3 + 0x28] = SUB41(iVar2,0);
    }
  }
  return 0xffffffff;
}



/* glslang::TPpContext::extraTokenCheck(int, glslang::TPpToken*, int) [clone .part.0] */

ulong __thiscall
glslang::TPpContext::extraTokenCheck(TPpContext *this,int param_1,TPpToken *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  
  switch(param_1) {
  case 0xa5:
    pcVar3 = "#if";
    break;
  default:
    pcVar3 = "";
    break;
  case 0xa8:
    pcVar3 = "#else";
    break;
  case 0xa9:
    pcVar3 = "#elif";
    break;
  case 0xaa:
    pcVar3 = "#endif";
    break;
  case 0xab:
    pcVar3 = "#line";
  }
  plVar1 = *(long **)(this + 0x100);
  if ((*(byte *)(plVar1 + 0x1a) & 1) == 0) {
    (**(code **)(*plVar1 + 0x168))
              (plVar1,param_2,"unexpected tokens following directive",pcVar3,&_LC3);
  }
  else {
    (**(code **)(*plVar1 + 0x170))();
  }
  if ((param_3 != 10) && (param_3 != -1)) {
    do {
      uVar2 = scanToken(this,param_2);
      if ((int)uVar2 == 10) {
        return uVar2;
      }
    } while ((int)uVar2 != -1);
    return uVar2;
  }
  return (ulong)(uint)param_3;
}



/* glslang::TPpContext::extraTokenCheck(int, glslang::TPpToken*, int) */

ulong __thiscall
glslang::TPpContext::extraTokenCheck(TPpContext *this,int param_1,TPpToken *param_2,int param_3)

{
  ulong uVar1;
  
  if ((param_3 != 10) && (param_3 != -1)) {
    uVar1 = extraTokenCheck(this,param_1,param_2,param_3);
    return uVar1;
  }
  return (ulong)(uint)param_3;
}



/* glslang::TPpContext::CPPerror(glslang::TPpToken*) */

undefined8 __thiscall glslang::TPpContext::CPPerror(TPpContext *this,TPpToken *param_1)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  ulong uVar4;
  TPpToken *__s;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  long local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x3c8] = (TPpContext)0x1;
  iVar1 = scanToken(this,param_1);
  local_88 = *(undefined8 *)param_1;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  local_78 = *(undefined8 *)(param_1 + 0x10);
  this[0x3c8] = (TPpContext)0x0;
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_58;
  if ((iVar1 != -1) && (iVar1 != 10)) {
    do {
      uVar4 = 0x3fffffffffffffff - local_60;
      if (iVar1 - 0x98U < 9) {
        sVar2 = strlen((char *)(param_1 + 0x28));
        if (uVar4 < sVar2) goto LAB_00100829;
        std::__cxx11::string::_M_append((char *)&local_68,(ulong)(param_1 + 0x28));
      }
      else {
        if (iVar1 - 0xa1U < 2) {
          __s = param_1 + 0x28;
        }
        else {
          __s = *(TPpToken **)(*(long *)(*(long *)(this + 0x88) + (long)iVar1 * 8) + 8);
        }
        sVar2 = strlen((char *)__s);
        if (uVar4 < sVar2) goto LAB_00100829;
        std::__cxx11::string::_M_append((char *)&local_68,(ulong)__s);
      }
      if (local_60 == 0x3fffffffffffffff) {
LAB_00100829:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      std::__cxx11::string::_M_append((char *)&local_68,0x10711d);
      iVar1 = scanToken(this,param_1);
    } while ((iVar1 != 10) && (iVar1 != -1));
  }
  plVar3 = *(long **)(this + 0x100);
  lVar5 = *plVar3;
  if (*(code **)(lVar5 + 0x1d8) == TParseContextBase::notifyErrorDirective) {
    if (plVar3[0x8c] != 0) {
      local_94 = uStack_80._4_4_;
      local_90 = local_68;
      (*(code *)plVar3[0x8d])(plVar3 + 0x8a,&local_94,&local_90);
      plVar3 = *(long **)(this + 0x100);
      lVar5 = *plVar3;
    }
  }
  else {
    (**(code **)(lVar5 + 0x1d8))(plVar3,uStack_80._4_4_);
    plVar3 = *(long **)(this + 0x100);
    lVar5 = *plVar3;
  }
  (**(code **)(lVar5 + 0x168))(plVar3,&local_88,local_68,"#error",&_LC3);
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT71(uStack_57,local_58) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 10;
}



/* glslang::TPpContext::CPPextension(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPextension(TPpContext *this,TPpToken *param_1)

{
  TPpToken *pTVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_45c;
  char *local_458;
  TPpToken *local_450;
  char local_448 [1032];
  long local_40;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = scanToken(this,param_1);
  if (iVar4 == 10) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"extension name not specified","#extension",&_LC3);
    iVar4 = 10;
  }
  else {
    if (iVar4 != 0xa2) {
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_1,"extension name expected","#extension",&_LC3);
    }
    pTVar1 = param_1 + 0x28;
    snprintf(local_448,0x401,"%s",pTVar1);
    iVar4 = scanToken(this,param_1);
    if (iVar4 == 0x3a) {
      iVar4 = scanToken(this,param_1);
      plVar3 = *(long **)(this + 0x100);
      if (iVar4 == 0xa2) {
        (**(code **)(*plVar3 + 0x50))(plVar3,uVar2,local_448,pTVar1);
        plVar3 = *(long **)(this + 0x100);
        if (*(code **)(*plVar3 + 0x1e8) == TParseContextBase::notifyExtensionDirective) {
          if (plVar3[0x88] != 0) {
            local_45c = uVar2;
            local_458 = local_448;
            local_450 = pTVar1;
            (*(code *)plVar3[0x89])(plVar3 + 0x86,&local_45c,&local_458,&local_450);
          }
        }
        else {
          (**(code **)(*plVar3 + 0x1e8))(plVar3,uVar2,local_448,pTVar1);
        }
        iVar4 = scanToken(this,param_1);
        if (iVar4 != 10) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_1,"extra tokens -- expected newline",
                     "#extension",&_LC3);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x168))
                  (plVar3,param_1,"behavior for extension not specified","#extension",&_LC3);
      }
    }
    else {
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_1,"\':\' missing after extension name","#extension",
                 &_LC3);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::tMacroInput::scan(glslang::TPpToken*) */

ulong __thiscall glslang::TPpContext::tMacroInput::scan(tMacroInput *this,TPpToken *param_1)

{
  TokenStream *pTVar1;
  long lVar2;
  tMacroInput tVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  tMacroInput local_41;
  
  do {
    uVar4 = glslang::TPpContext::TokenStream::getToken
                      ((TParseContextBase *)(*(long *)(this + 0x18) + 0x20),
                       *(TPpToken **)(*(long *)(this + 0x10) + 0x100));
  } while (uVar4 == 0x20);
  local_41 = this[0x61];
  if (local_41 != (tMacroInput)0x0) {
    this[0x61] = (tMacroInput)0x0;
  }
  if (this[0x60] != (tMacroInput)0x0) {
    *(undefined2 *)(this + 0x60) = 0x100;
  }
  tVar3 = (tMacroInput)glslang::TPpContext::TokenStream::peekUntokenizedPasting();
  if (tVar3 != (tMacroInput)0x0) {
    this[0x60] = (tMacroInput)0x1;
    local_41 = tVar3;
  }
  if (uVar4 == 0xa2) {
    lVar7 = *(long *)(*(long *)(this + 0x18) + 8);
    iVar8 = (int)(*(long *)(*(long *)(this + 0x18) + 0x10) - lVar7 >> 2) + -1;
    if (-1 < iVar8) {
      pTVar1 = *(TokenStream **)(this + 0x10);
      lVar2 = *(long *)(pTVar1 + 0x88);
      piVar9 = (int *)(lVar7 + (long)iVar8 * 4);
      do {
        iVar5 = strcmp(*(char **)(*(long *)(lVar2 + (long)*piVar9 * 8) + 8),(char *)(param_1 + 0x28)
                      );
        if (iVar5 == 0) {
          lVar7 = *(long *)(*(long *)(this + 0x48) + (long)iVar8 * 8);
          if ((lVar7 == 0) || (local_41 != (tMacroInput)0x0)) {
            lVar7 = *(long *)(*(long *)(this + 0x28) + (long)iVar8 * 8);
          }
          glslang::TPpContext::pushTokenStreamInput(pTVar1,SUB81(lVar7,0),(bool)this[0x60]);
          uVar6 = scanToken(*(TPpContext **)(this + 0x10),param_1);
          return uVar6;
        }
        iVar8 = iVar8 + -1;
        piVar9 = piVar9 + -1;
      } while (iVar8 != -1);
    }
  }
  else if (uVar4 == 0xffffffff) {
    *(byte *)(*(long *)(this + 0x18) + 0x48) = *(byte *)(*(long *)(this + 0x18) + 0x48) & 0xfd;
  }
  return (ulong)uVar4;
}



/* std::vector<glslang::TPpContext::TokenStream::Token,
   glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TPpContext::TokenStream::Token,
   glslang::pool_allocator<glslang::TPpContext::TokenStream::Token> > const&) [clone .isra.0] */

void __thiscall
std::
vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
::operator=(vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
            *this,vector *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 *__dest;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  undefined4 *puVar8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  
  if (param_1 == (vector *)this) {
    return;
  }
  puVar13 = *(undefined4 **)(param_1 + 0x10);
  puVar8 = *(undefined4 **)(param_1 + 8);
  lVar10 = *(long *)(this + 8);
  uVar5 = (long)puVar13 - (long)puVar8;
  if ((ulong)(*(long *)(this + 0x18) - lVar10) < uVar5) {
    puVar4 = (undefined4 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    puVar11 = puVar4;
    for (; puVar13 != puVar8; puVar8 = puVar8 + 0xe) {
      *puVar11 = *puVar8;
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
      *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar8 + 2);
      uVar3 = glslang::GetThreadPoolAllocator();
      uVar2 = *(ulong *)(puVar8 + 8);
      __dest = puVar11 + 10;
      *(undefined4 **)(puVar11 + 6) = __dest;
      puVar1 = *(undefined1 **)(puVar8 + 6);
      *(ulong *)(puVar11 + 4) = uVar3;
      if (uVar2 < 0x10) {
        if (uVar2 == 1) {
          *(undefined1 *)(puVar11 + 10) = *puVar1;
        }
        else if (uVar2 != 0) goto LAB_00100d90;
      }
      else {
        if ((long)uVar2 < 0) goto LAB_00100efe;
        __dest = (undefined4 *)glslang::TPoolAllocator::allocate(uVar3);
        *(ulong *)(puVar11 + 10) = uVar2;
        *(undefined4 **)(puVar11 + 6) = __dest;
LAB_00100d90:
        memcpy(__dest,puVar1,uVar2);
        __dest = *(undefined4 **)(puVar11 + 6);
      }
      *(ulong *)(puVar11 + 8) = uVar2;
      puVar11 = puVar11 + 0xe;
      *(undefined1 *)((long)__dest + uVar2) = 0;
    }
    lVar10 = uVar5 + (long)puVar4;
    *(undefined4 **)(this + 8) = puVar4;
    *(long *)(this + 0x18) = lVar10;
  }
  else {
    puVar11 = *(undefined4 **)(this + 0x10);
    uVar2 = (long)puVar11 - lVar10;
    if (uVar2 < uVar5) {
      if (0 < (long)uVar2) {
        pbVar6 = (basic_string *)(puVar8 + 4);
        pbVar9 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (lVar10 + 0x10);
        do {
          pbVar7 = pbVar6 + 0x38;
          *(undefined4 *)(pbVar9 + -0x10) = *(undefined4 *)(pbVar6 + -0x10);
          *(basic_string *)(pbVar9 + -0xc) = pbVar6[-0xc];
          *(undefined8 *)(pbVar9 + -8) = *(undefined8 *)(pbVar6 + -8);
          __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_assign(pbVar9,pbVar6);
          pbVar6 = pbVar7;
          pbVar9 = pbVar9 + 0x38;
        } while (pbVar7 != (basic_string *)(puVar8 + 4) + uVar2);
        puVar11 = *(undefined4 **)(this + 0x10);
        lVar10 = *(long *)(this + 8);
        puVar13 = *(undefined4 **)(param_1 + 0x10);
        puVar8 = *(undefined4 **)(param_1 + 8);
        uVar2 = (long)puVar11 - lVar10;
      }
      puVar8 = (undefined4 *)((long)puVar8 + uVar2);
      if (puVar8 != puVar13) {
        do {
          *puVar11 = *puVar8;
          *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
          *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar8 + 2);
          uVar3 = glslang::GetThreadPoolAllocator();
          uVar2 = *(ulong *)(puVar8 + 8);
          puVar4 = puVar11 + 10;
          *(undefined4 **)(puVar11 + 6) = puVar4;
          puVar1 = *(undefined1 **)(puVar8 + 6);
          *(ulong *)(puVar11 + 4) = uVar3;
          if (uVar2 < 0x10) {
            if (uVar2 == 1) {
              *(undefined1 *)(puVar11 + 10) = *puVar1;
            }
            else if (uVar2 != 0) goto LAB_00100eac;
          }
          else {
            if ((long)uVar2 < 0) {
LAB_00100efe:
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::_M_create");
            }
            puVar4 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar3);
            *(ulong *)(puVar11 + 10) = uVar2;
            *(undefined4 **)(puVar11 + 6) = puVar4;
LAB_00100eac:
            memcpy(puVar4,puVar1,uVar2);
            puVar4 = *(undefined4 **)(puVar11 + 6);
          }
          puVar8 = puVar8 + 0xe;
          *(ulong *)(puVar11 + 8) = uVar2;
          puVar11 = puVar11 + 0xe;
          *(undefined1 *)((long)puVar4 + uVar2) = 0;
        } while (puVar8 != puVar13);
        lVar10 = uVar5 + *(long *)(this + 8);
        goto LAB_00100cda;
      }
    }
    else if (0 < (long)uVar5) {
      lVar12 = ((long)uVar5 >> 3) * 0x6db6db6db6db6db7;
      pbVar6 = (basic_string *)(puVar8 + 4);
      pbVar9 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (lVar10 + 0x10);
      do {
        *(undefined4 *)(pbVar9 + -0x10) = *(undefined4 *)(pbVar6 + -0x10);
        *(basic_string *)(pbVar9 + -0xc) = pbVar6[-0xc];
        *(undefined8 *)(pbVar9 + -8) = *(undefined8 *)(pbVar6 + -8);
        __cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
                  (pbVar9,pbVar6);
        lVar12 = lVar12 + -1;
        pbVar6 = pbVar6 + 0x38;
        pbVar9 = pbVar9 + 0x38;
      } while (lVar12 != 0);
      lVar10 = *(long *)(this + 8);
    }
    lVar10 = uVar5 + lVar10;
  }
LAB_00100cda:
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* glslang::TPpContext::CPPpragma(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPpragma(TPpContext *this,TPpToken *param_1)

{
  TPpToken *__s;
  long *plVar1;
  ulong *puVar2;
  undefined1 *__src;
  ulong __n;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong *__dest;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong *local_b8;
  ulong *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  ulong local_98;
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined1 *local_70;
  ulong local_68;
  undefined1 local_60 [30];
  char local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = glslang::GetThreadPoolAllocator();
  local_e8 = *(undefined8 *)param_1;
  uStack_e0 = *(undefined8 *)(param_1 + 8);
  local_d8 = *(undefined8 *)(param_1 + 0x10);
  local_c0 = 0;
  local_b8 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  iVar3 = scanToken(this,param_1);
  if ((iVar3 != -1) && (iVar3 != 10)) {
    do {
      if (iVar3 < 0xa1) {
        if (0x97 < iVar3) goto LAB_00101080;
LAB_00100fac:
        local_42[0] = (char)iVar3;
        local_42[1] = 0;
        local_78 = glslang::GetThreadPoolAllocator();
        local_70 = local_60;
        sVar4 = strlen(local_42);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_78,local_42,local_42 + sVar4);
        puVar2 = local_b8;
        if (local_b8 == local_b0) {
          std::
          vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
          ::
          _M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>
                    ((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                      *)&local_c8,local_b8,&local_78);
        }
        else {
          uVar5 = glslang::GetThreadPoolAllocator();
          __dest = puVar2 + 3;
          puVar2[1] = (ulong)__dest;
          *puVar2 = uVar5;
          __src = local_70;
          __n = local_68;
joined_r0x00101022:
          if (__n < 0x10) {
            if (__n == 1) {
              *(undefined1 *)(puVar2 + 3) = *__src;
            }
            else if (__n != 0) goto LAB_00101104;
          }
          else {
            if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::_M_create");
            }
            __dest = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
            puVar2[3] = __n;
            puVar2[1] = (ulong)__dest;
LAB_00101104:
            memcpy(__dest,__src,__n);
            __dest = (ulong *)puVar2[1];
          }
          puVar2[2] = __n;
          *(undefined1 *)((long)__dest + __n) = 0;
          local_b8 = local_b8 + 5;
        }
      }
      else {
        if (iVar3 != 0xa2) goto LAB_00100fac;
LAB_00101080:
        local_a8 = glslang::GetThreadPoolAllocator();
        __s = param_1 + 0x28;
        local_a0 = local_90;
        sVar4 = strlen((char *)__s);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(&local_a8,__s,__s + sVar4);
        puVar2 = local_b8;
        if (local_b8 != local_b0) {
          uVar5 = glslang::GetThreadPoolAllocator();
          __dest = puVar2 + 3;
          puVar2[1] = (ulong)__dest;
          *puVar2 = uVar5;
          __src = local_a0;
          __n = local_98;
          goto joined_r0x00101022;
        }
        std::
        vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
        ::
        _M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>
                  ((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
                    *)&local_c8,local_b8,&local_a8);
      }
      iVar3 = scanToken(this,param_1);
    } while ((iVar3 != 10) && (iVar3 != -1));
  }
  plVar1 = *(long **)(this + 0x100);
  if (iVar3 == -1) {
    (**(code **)(*plVar1 + 0x168))
              (plVar1,&local_e8,"directive must end with a newline","#pragma",&_LC3);
  }
  else {
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_e8,&local_c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TPpContext::CPPinclude(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPinclude(TPpContext *this,TPpToken *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  pointer_____offset_0x10___ puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  TokenizableIncludeFile *pTVar8;
  undefined8 *puVar9;
  IncludeResult *pIVar10;
  ostream *poVar11;
  TokenizableIncludeFile *pTVar12;
  undefined1 *__src;
  TokenizableIncludeFile **ppTVar13;
  char *pcVar14;
  long *plVar15;
  streambuf *psVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint uVar18;
  string *psVar19;
  TokenizableIncludeFile *local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  TokenizableIncludeFile **local_398;
  TokenizableIncludeFile *local_390;
  TokenizableIncludeFile *local_388 [2];
  undefined1 *local_378;
  undefined8 local_370;
  undefined1 local_368;
  undefined7 uStack_367;
  char *local_358;
  long local_350;
  char local_348;
  undefined7 uStack_347;
  TokenizableIncludeFile *local_338 [2];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  locale local_2f8 [8];
  undefined4 local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  code *local_2c8 [27];
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  TokenizableIncludeFile *local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_3b8 = *(undefined8 *)param_1;
  uStack_3b0 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_3a8 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = *(long *)(this + 400);
  while ((iVar5 = (**(code **)(**(long **)(lVar7 + -8) + 0x18))(), iVar5 == 0x20 || (iVar5 == 9))) {
    lVar7 = *(long *)(this + 400);
  }
  if (iVar5 == 0x3c) {
    bVar17 = false;
    iVar5 = scanHeaderName(this,param_1,'>');
  }
  else if (iVar5 == 0x22) {
    bVar17 = true;
    iVar5 = scanHeaderName(this,param_1,'\"');
  }
  else {
    bVar17 = true;
    (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x20))();
    iVar5 = scanToken(this,param_1);
  }
  if (iVar5 != 0xa1) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),&local_3b8,"must be followed by a header name","#include",
               &_LC3);
    goto LAB_001012c6;
  }
  local_398 = local_388;
  pTVar8 = (TokenizableIncludeFile *)strlen((char *)(param_1 + 0x28));
  local_3c0 = pTVar8;
  if (pTVar8 < (TokenizableIncludeFile *)0x10) {
    ppTVar13 = local_388;
    if (pTVar8 == (TokenizableIncludeFile *)0x1) {
      local_388[0] = (TokenizableIncludeFile *)CONCAT71(local_388[0]._1_7_,param_1[0x28]);
    }
    else if (pTVar8 != (TokenizableIncludeFile *)0x0) goto LAB_0010160f;
  }
  else {
    local_398 = (TokenizableIncludeFile **)
                std::__cxx11::string::_M_create((ulong *)&local_398,(ulong)&local_3c0);
    local_388[0] = local_3c0;
    ppTVar13 = local_398;
LAB_0010160f:
    memcpy(ppTVar13,param_1 + 0x28,(size_t)pTVar8);
    ppTVar13 = local_398;
  }
  *(TokenizableIncludeFile *)((long)ppTVar13 + (long)local_3c0) = (TokenizableIncludeFile)0x0;
  local_390 = local_3c0;
  iVar5 = scanToken(this,param_1);
  if (iVar5 == 10) {
    plVar15 = *(long **)(this + 0x1a8);
    puVar9 = (undefined8 *)*plVar15;
    if (bVar17) {
      pcVar1 = (code *)puVar9[1];
      pIVar10 = (IncludeResult *)0x0;
      lVar7 = *(long *)(this + 0x220);
      if (pcVar1 == TShader::Includer::includeLocal) goto LAB_00101467;
      pIVar10 = (IncludeResult *)
                (*pcVar1)(plVar15,local_398,*(undefined8 *)(this + 0x228),
                          ((lVar7 - *(long *)(this + 0x200) >> 3) + -1 + (ulong)(lVar7 == 0)) * 0x40
                          + (*(long *)(this + 0x208) - *(long *)(this + 0x210) >> 3) + 1 +
                          (*(long *)(this + 0x1f8) - *(long *)(this + 0x1e8) >> 3),pcVar1,lVar7,
                          local_398);
      if ((pIVar10 == (IncludeResult *)0x0) || (*(long *)(pIVar10 + 8) == 0)) {
        plVar15 = *(long **)(this + 0x1a8);
        puVar9 = (undefined8 *)*plVar15;
        goto LAB_00101467;
      }
LAB_001016ee:
      puVar3 = PTR_vtable_0010af08;
      if ((*(long *)(pIVar10 + 0x20) == 0) || (*(long *)(pIVar10 + 0x28) == 0)) {
        pcVar1 = *(code **)(**(long **)(this + 0x1a8) + 0x10);
        if (pcVar1 != TShader::ForbidIncluder::releaseInclude) {
          (*pcVar1)(*(long **)(this + 0x1a8),pIVar10);
        }
      }
      else {
        pTVar12 = (TokenizableIncludeFile *)PTR_vtable_0010af00;
        bVar4 = (**(code **)(**(long **)(this + 0x100) + 0x1b8))();
        std::ios_base::ios_base((ios_base *)local_2c8);
        pTVar8 = _vtable;
        local_1e8 = 0;
        local_1e0 = (undefined1  [16])0x0;
        local_1d0 = (undefined1  [16])0x0;
        local_2c8[0] = (code *)&std::__cxx11::ostringstream::vtable;
        psVar16 = (streambuf *)((ostream *)local_338 + *(long *)(_vtable + -0x18));
        local_338[0] = _vtable;
        local_1f0 = 0;
        *(undefined8 *)psVar16 = _init;
        std::ios::init(psVar16);
        local_328 = (undefined1  [16])0x0;
        local_2c8[0] = std::ios_base::~ios_base;
        local_338[1] = (TokenizableIncludeFile *)puVar3;
        local_318 = (undefined1  [16])0x0;
        local_308 = (undefined1  [16])0x0;
        local_338[0] = pTVar12;
        std::locale::locale(local_2f8);
        local_338[1] = (TokenizableIncludeFile *)std::ostream::_M_insert<bool>;
        local_2f0 = 0x10;
        local_2e0 = 0;
        local_2d8 = 0;
        local_2e8 = &local_2d8;
        std::ios::init((streambuf *)local_2c8);
        std::ios_base::ios_base((ios_base *)local_148);
        local_68 = 0;
        local_60 = (undefined1  [16])0x0;
        local_50 = (undefined1  [16])0x0;
        psVar16 = (streambuf *)((ostream *)local_1b8 + *(long *)(pTVar8 + -0x18));
        local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
        local_70 = 0;
        local_1b8[0] = pTVar8;
        *(undefined8 *)psVar16 = _init;
        std::ios::init(psVar16);
        local_1a8 = (undefined1  [16])0x0;
        local_148[0] = std::ios_base::~ios_base;
        local_1b8[1] = (TokenizableIncludeFile *)puVar3;
        local_198 = (undefined1  [16])0x0;
        local_188 = (undefined1  [16])0x0;
        local_1b8[0] = pTVar12;
        std::locale::locale(local_178);
        local_1b8[1] = (TokenizableIncludeFile *)std::ostream::_M_insert<bool>;
        local_170 = 0x10;
        local_160 = 0;
        local_158 = 0;
        local_168 = &local_158;
        std::ios::init((streambuf *)local_148);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_338,"#line ",6);
        uVar18 = (uint)bVar4;
        poVar11 = std::ostream::_M_insert<bool>(SUB81((ostream *)local_338,0));
        std::__ostream_insert<char,std::char_traits<char>>(poVar11," ",1);
        std::__ostream_insert<char,std::char_traits<char>>(poVar11,"\"",1);
        poVar11 = std::__ostream_insert<char,std::char_traits<char>>
                            (poVar11,*(char **)pIVar10,*(long *)(pIVar10 + 8));
        std::__ostream_insert<char,std::char_traits<char>>(poVar11,"\"\n",2);
        bVar17 = *(char *)(*(long *)(pIVar10 + 0x20) + -1 + *(long *)(pIVar10 + 0x28)) == '\n';
        if (bVar17) {
          pcVar14 = "";
        }
        else {
          pcVar14 = "\n";
        }
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)local_1b8,pcVar14,(ulong)!bVar17);
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"#line ",6);
        poVar11 = (ostream *)
                  std::ostream::operator<<((ostream *)local_1b8,uVar18 + uStack_3b0._4_4_);
        std::__ostream_insert<char,std::char_traits<char>>(poVar11," ",1);
        psVar19 = (string *)&local_358;
        TSourceLoc::getStringNameOrNum_abi_cxx11_(SUB81(psVar19,0));
        poVar11 = std::__ostream_insert<char,std::char_traits<char>>(poVar11,local_358,local_350);
        std::__ostream_insert<char,std::char_traits<char>>(poVar11,"\n",1);
        if (local_358 != &local_348) {
          operator_delete(local_358,CONCAT71(uStack_347,local_348) + 1);
        }
        pTVar12 = (TokenizableIncludeFile *)operator_new(0x118);
        local_350 = 0;
        local_348 = '\0';
        local_358 = &local_348;
        if (local_188._0_8_ == 0) {
          std::__cxx11::string::_M_assign(psVar19);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)psVar19,0,(char *)0x0,local_198._8_8_);
        }
        local_370 = 0;
        local_368 = 0;
        local_378 = &local_368;
        if (local_308._0_8_ == 0) {
          std::__cxx11::string::_M_assign((string *)&local_378);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_378,0,(char *)0x0,local_318._8_8_);
        }
        TokenizableIncludeFile::TokenizableIncludeFile
                  (pTVar12,(TSourceLoc *)&local_3b8,(string *)&local_378,pIVar10,psVar19,this);
        puVar9 = *(undefined8 **)(this + 400);
        local_3c0 = pTVar12;
        if (puVar9 == *(undefined8 **)(this + 0x198)) {
          std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
          _M_realloc_insert<glslang::TPpContext::tInput*const&>
                    ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>
                      *)(this + 0x188),puVar9,&local_3c0);
        }
        else {
          *puVar9 = pTVar12;
          *(undefined8 **)(this + 400) = puVar9 + 1;
        }
        (**(code **)(*(long *)pTVar12 + 0x50))(pTVar12);
        if (local_378 != &local_368) {
          operator_delete(local_378,CONCAT71(uStack_367,local_368) + 1);
        }
        if (local_358 != &local_348) {
          operator_delete(local_358,CONCAT71(uStack_347,local_348) + 1);
        }
        puVar3 = PTR_vtable_0010af10;
        pTVar12 = (TokenizableIncludeFile *)PTR_vtable_0010af00;
        TIntermediate::addIncludeText
                  (*(char **)(*(long *)(this + 0x100) + 0x38),*(char **)pIVar10,
                   *(ulong *)(pIVar10 + 0x20));
        lVar7 = *(long *)(*(long *)(this + 0x100) + 0xd8);
        *(undefined4 *)(lVar7 + 0x50) = 0;
        iVar6 = *(int *)(lVar7 + 8) + -1;
        if (*(int *)(lVar7 + 0x20) < iVar6) {
          iVar6 = *(int *)(lVar7 + 0x20);
        }
        *(undefined4 *)(*(long *)(lVar7 + 0x30) + (long)iVar6 * 0x18 + 0x10) = 0;
        local_148[0] = std::ios_base::~ios_base;
        local_1b8[1] = (TokenizableIncludeFile *)puVar3;
        local_1b8[0] = pTVar12;
        if (local_168 != &local_158) {
          operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
        }
        local_1b8[1] = (TokenizableIncludeFile *)std::ios_base::~ios_base;
        std::locale::~locale(local_178);
        local_1b8[0] = pTVar8;
        *(undefined8 *)((long)local_1b8 + *(long *)(pTVar8 + -0x18)) = _init;
        local_148[0] = (code *)&std::__cxx11::ostringstream::vtable;
        std::ios_base::~ios_base((ios_base *)local_148);
        local_2c8[0] = std::ios_base::~ios_base;
        local_338[1] = (TokenizableIncludeFile *)puVar3;
        local_338[0] = pTVar12;
        if (local_2e8 != &local_2d8) {
          operator_delete(local_2e8,CONCAT71(uStack_2d7,local_2d8) + 1);
        }
        local_338[1] = (TokenizableIncludeFile *)std::ios_base::~ios_base;
        std::locale::~locale(local_2f8);
        local_338[0] = pTVar8;
        *(undefined8 *)((long)local_338 + *(long *)(pTVar8 + -0x18)) = _init;
        local_2c8[0] = (code *)&std::__cxx11::ostringstream::vtable;
        std::ios_base::~ios_base((ios_base *)local_2c8);
      }
    }
    else {
      pIVar10 = (IncludeResult *)0x0;
LAB_00101467:
      if ((code *)puVar9[2] != TShader::ForbidIncluder::releaseInclude) {
        (*(code *)puVar9[2])(plVar15,pIVar10);
        plVar15 = *(long **)(this + 0x1a8);
        puVar9 = (undefined8 *)*plVar15;
      }
      if ((code *)*puVar9 == TShader::Includer::includeSystem) {
LAB_001014c7:
        pIVar10 = (IncludeResult *)0x0;
        local_1b8[0] = (TokenizableIncludeFile *)local_1a8;
        local_3c0 = (TokenizableIncludeFile *)0x23;
        local_1b8[0] = (TokenizableIncludeFile *)
                       std::__cxx11::string::_M_create((ulong *)local_1b8,(ulong)&local_3c0);
        uVar2 = _UNK_0010aee8;
        local_1a8._0_8_ = local_3c0;
        *(undefined8 *)local_1b8[0] = __LC54;
        *(undefined8 *)(local_1b8[0] + 8) = uVar2;
        uVar2 = _UNK_0010aef8;
        *(undefined8 *)(local_1b8[0] + 0x10) = __LC55;
        *(undefined8 *)(local_1b8[0] + 0x18) = uVar2;
        *(undefined4 *)(local_1b8[0] + 0x1f) = 0x65766974;
        local_1b8[1] = local_3c0;
        local_1b8[0][(long)local_3c0] = (TokenizableIncludeFile)0x0;
      }
      else {
        pIVar10 = (IncludeResult *)
                  (*(code *)*puVar9)(plVar15,local_398,*(undefined8 *)(this + 0x228),
                                     ((*(long *)(this + 0x220) - *(long *)(this + 0x200) >> 3) + -1
                                     + (ulong)(*(long *)(this + 0x220) == 0)) * 0x40 +
                                     (*(long *)(this + 0x208) - *(long *)(this + 0x210) >> 3) + 1 +
                                     (*(long *)(this + 0x1f8) - *(long *)(this + 0x1e8) >> 3));
        if (pIVar10 == (IncludeResult *)0x0) goto LAB_001014c7;
        __src = *(undefined1 **)(pIVar10 + 0x20);
        if (*(long *)(pIVar10 + 8) != 0) goto LAB_001016ee;
        local_1b8[0] = (TokenizableIncludeFile *)local_1a8;
        pTVar8 = *(TokenizableIncludeFile **)(pIVar10 + 0x28);
        if ((__src == (undefined1 *)0x0) && (pTVar8 != (TokenizableIncludeFile *)0x0)) {
                    /* WARNING: Subroutine does not return */
          std::__throw_logic_error("basic_string: construction from null is not valid");
        }
        local_3c0 = pTVar8;
        if (pTVar8 < (TokenizableIncludeFile *)0x10) {
          if (pTVar8 == (TokenizableIncludeFile *)0x1) {
            local_1a8[0] = *__src;
          }
          else if (pTVar8 != (TokenizableIncludeFile *)0x0) goto LAB_00101e46;
        }
        else {
          local_1b8[0] = (TokenizableIncludeFile *)
                         std::__cxx11::string::_M_create((ulong *)local_1b8,(ulong)&local_3c0);
          local_1a8._0_8_ = local_3c0;
LAB_00101e46:
          memcpy(local_1b8[0],__src,(size_t)pTVar8);
        }
        local_1b8[0][(long)local_3c0] = (TokenizableIncludeFile)0x0;
        local_1b8[1] = local_3c0;
      }
      local_3c0 = local_1b8[1];
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),&local_3b8,local_1b8[0],"#include","for header name: %s",
                 local_398);
      pcVar1 = *(code **)(**(long **)(this + 0x1a8) + 0x10);
      if (pcVar1 != TShader::ForbidIncluder::releaseInclude) {
        (*pcVar1)(*(long **)(this + 0x1a8),pIVar10);
      }
      if (local_1b8[0] != (TokenizableIncludeFile *)local_1a8) {
        operator_delete(local_1b8[0],local_1a8._0_8_ + 1);
      }
    }
  }
  else {
    plVar15 = *(long **)(this + 0x100);
    if (iVar5 == -1) {
      (**(code **)(*plVar15 + 0x168))
                (plVar15,param_1,"expected newline after header name:","#include",&_LC38,local_398);
    }
    else {
      (**(code **)(*plVar15 + 0x168))(plVar15,param_1,"extra content after header name:");
    }
  }
  if (local_398 != local_388) {
    operator_delete(local_398,(ulong)(local_388[0] + 1));
  }
LAB_001012c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::pair<std::__detail::_Node_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>, false, true>, bool>
   std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true>
   >::_M_emplace<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, int> >(std::integral_constant<bool, true>,
   std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >, int>&&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::
_M_emplace<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int>>
          (_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           *param_1,long *param_2)

{
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
  *p_Var1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *__s;
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
  *p_Var11;
  long lVar12;
  uint uVar13;
  char *__s1;
  ulong uVar14;
  ulong extraout_RDX;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  size_t __n;
  char *pcVar20;
  undefined1 auVar21 [16];
  
  plVar9 = (long *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
  *plVar9 = 0;
  plVar17 = plVar9 + 4;
  lVar12 = *param_2;
  plVar9[2] = (long)plVar17;
  plVar2 = (long *)param_2[1];
  plVar9[1] = lVar12;
  plVar18 = param_2 + 3;
  if (plVar2 == plVar18) {
    lVar12 = param_2[2];
    uVar15 = lVar12 + 1;
    uVar7 = (uint)uVar15;
    if (7 < uVar7) {
      *plVar17 = param_2[3];
      *(undefined8 *)((long)plVar9 + (uVar15 & 0xffffffff) + 0x18) =
           *(undefined8 *)((long)param_2 + (uVar15 & 0xffffffff) + 0x10);
      lVar12 = (long)plVar17 - ((ulong)(plVar9 + 5) & 0xfffffffffffffff8);
      uVar7 = uVar7 + (int)lVar12 & 0xfffffff8;
      if (7 < uVar7) {
        uVar15 = 0;
        do {
          uVar13 = (int)uVar15 + 8;
          *(undefined8 *)(((ulong)(plVar9 + 5) & 0xfffffffffffffff8) + uVar15) =
               *(undefined8 *)((long)plVar18 + (uVar15 - lVar12));
          uVar15 = (ulong)uVar13;
        } while (uVar13 < uVar7);
      }
      goto LAB_00101fab;
    }
    if ((uVar15 & 4) == 0) {
      if (uVar7 != 0) {
        *(char *)plVar17 = (char)param_2[3];
        if ((uVar15 & 2) == 0) goto LAB_00101fab;
        *(undefined2 *)((long)plVar9 + (uVar15 & 0xffffffff) + 0x1e) =
             *(undefined2 *)((long)param_2 + (uVar15 & 0xffffffff) + 0x16);
        lVar12 = param_2[2];
      }
    }
    else {
      *(int *)plVar17 = (int)param_2[3];
      *(undefined4 *)((long)plVar9 + (uVar15 & 0xffffffff) + 0x1c) =
           *(undefined4 *)((long)param_2 + (uVar15 & 0xffffffff) + 0x14);
      lVar12 = param_2[2];
    }
  }
  else {
    plVar9[2] = (long)plVar2;
    plVar9[4] = param_2[3];
LAB_00101fab:
    lVar12 = param_2[2];
  }
  plVar9[3] = lVar12;
  param_2[1] = (long)plVar18;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  uVar15 = *(ulong *)(param_1 + 0x20);
  *(int *)(plVar9 + 6) = (int)param_2[5];
  if (uVar15 == 0) {
    __n = plVar9[3];
    __s1 = (char *)plVar9[2];
    for (plVar17 = *(long **)(param_1 + 0x18); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      if ((plVar17[3] == __n) &&
         ((__n == 0 || (iVar8 = memcmp(__s1,(void *)plVar17[2],__n), iVar8 == 0))))
      goto LAB_00102128;
    }
    if (__n == 0) {
      uVar19 = *(ulong *)(param_1 + 0x10);
      uVar16 = 0x811c9dc5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar19;
      uVar14 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar4,0);
    }
    else {
LAB_00101ff9:
      pcVar20 = __s1 + __n;
      uVar7 = 0x811c9dc5;
      do {
        cVar5 = *__s1;
        __s1 = __s1 + 1;
        uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      } while (__s1 != pcVar20);
      uVar19 = *(ulong *)(param_1 + 0x10);
      uVar16 = (ulong)uVar7;
      uVar14 = uVar16 % uVar19;
      if (uVar15 != 0) goto LAB_001020f0;
    }
  }
  else {
    __n = plVar9[3];
    __s1 = (char *)plVar9[2];
    if (__n != 0) goto LAB_00101ff9;
    uVar19 = *(ulong *)(param_1 + 0x10);
    uVar16 = 0x811c9dc5;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar19;
    uVar14 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x811c9dc5)) % auVar3,0);
LAB_001020f0:
    puVar10 = (undefined8 *)_M_find_before_node(param_1,uVar14,(basic_string *)(plVar9 + 1),uVar16);
    if ((puVar10 != (undefined8 *)0x0) && (plVar17 = (long *)*puVar10, plVar17 != (long *)0x0)) {
LAB_00102128:
      uVar6 = 0;
      goto LAB_0010212d;
    }
  }
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(param_1 + 0x28),uVar19,uVar15)
  ;
  if (cVar5 == '\0') {
    p_Var11 = *(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                **)(param_1 + 8);
  }
  else {
    if (extraout_RDX == 1) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      p_Var11 = param_1 + 0x38;
    }
    else {
      __s = (void *)glslang::TPoolAllocator::allocate(*(ulong *)param_1);
      p_Var11 = (_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                 *)memset(__s,0,extraout_RDX * 8);
    }
    plVar17 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar15 = 0;
    while (uVar19 = uVar15, plVar18 = plVar17, plVar17 != (long *)0x0) {
      while( true ) {
        plVar17 = (long *)*plVar18;
        uVar15 = (ulong)plVar18[7] % extraout_RDX;
        p_Var1 = p_Var11 + uVar15 * 8;
        if (*(long **)p_Var1 == (long *)0x0) break;
        *plVar18 = **(long **)p_Var1;
        **(undefined8 **)p_Var1 = plVar18;
        plVar18 = plVar17;
        if (plVar17 == (long *)0x0) goto LAB_001021b9;
      }
      *plVar18 = *(long *)(param_1 + 0x18);
      *(long **)(param_1 + 0x18) = plVar18;
      *(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
        **)p_Var1 = param_1 + 0x18;
      if (*plVar18 != 0) {
        *(long **)(p_Var11 + uVar19 * 8) = plVar18;
      }
    }
LAB_001021b9:
    *(ulong *)(param_1 + 0x10) = extraout_RDX;
    uVar14 = uVar16 % extraout_RDX;
    *(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
      **)(param_1 + 8) = p_Var11;
  }
  p_Var1 = p_Var11 + uVar14 * 8;
  plVar9[7] = uVar16;
  if (*(long **)p_Var1 == (long *)0x0) {
    *plVar9 = *(long *)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar9;
    if (*plVar9 != 0) {
      *(long **)(p_Var11 + (*(ulong *)(*plVar9 + 0x38) % *(ulong *)(param_1 + 0x10)) * 8) = plVar9;
    }
    *(_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
      **)p_Var1 = param_1 + 0x18;
  }
  else {
    *plVar9 = **(long **)p_Var1;
    **(undefined8 **)p_Var1 = plVar9;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  uVar6 = 1;
  plVar17 = plVar9;
LAB_0010212d:
  auVar21[8] = uVar6;
  auVar21._0_8_ = plVar17;
  auVar21._9_7_ = 0;
  return auVar21;
}



/* glslang::TPpContext::CPPundef(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPundef(TPpContext *this,TPpToken *param_1)

{
  TPpToken *__s;
  char cVar1;
  TPpContext *pTVar2;
  int iVar3;
  size_t sVar4;
  TPpContext *pTVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  TPpContext *pTVar9;
  long in_FS_OFFSET;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = scanToken(this,param_1);
  if (iVar3 != 0xa2) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"must be followed by macro name","#undef",&_LC3);
    goto LAB_00102361;
  }
  __s = param_1 + 0x28;
  (**(code **)(**(long **)(this + 0x100) + 0x1a8))(*(long **)(this + 0x100),param_1,__s,"#undef");
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = local_50;
  sVar4 = strlen((char *)__s);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_68,__s,__s + sVar4);
  pcVar6 = local_60;
  if (*(long *)(this + 0x60) == 0) {
    for (puVar7 = *(undefined8 **)(this + 0x58); puVar7 != (undefined8 *)0x0;
        puVar7 = (undefined8 *)*puVar7) {
      if ((local_58 == puVar7[3]) &&
         ((local_58 == 0 || (iVar3 = memcmp(pcVar6,(void *)puVar7[2],local_58), iVar3 == 0))))
      goto LAB_00102432;
    }
LAB_0010251d:
    iVar3 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    if (local_58 != 0) {
      uVar8 = 0x811c9dc5;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        uVar8 = (ulong)(((uint)uVar8 ^ (int)cVar1) * 0x1000193);
      } while (local_60 + local_58 != pcVar6);
    }
    puVar7 = (undefined8 *)
             std::
             _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
             ::_M_find_before_node
                       ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                         *)(this + 0x40),uVar8 % *(ulong *)(this + 0x50),(basic_string *)&local_68,
                        uVar8);
    if ((puVar7 == (undefined8 *)0x0) ||
       (puVar7 = (undefined8 *)*puVar7, puVar7 == (undefined8 *)0x0)) goto LAB_0010251d;
LAB_00102432:
    iVar3 = *(int *)(puVar7 + 6);
  }
  pTVar2 = *(TPpContext **)(this + 0x20);
  pTVar9 = this + 0x18;
  if (*(TPpContext **)(this + 0x20) != (TPpContext *)0x0) {
    do {
      while( true ) {
        pTVar5 = pTVar2;
        if (*(int *)(pTVar5 + 0x20) < iVar3) break;
        pTVar2 = *(TPpContext **)(pTVar5 + 0x10);
        pTVar9 = pTVar5;
        if (*(TPpContext **)(pTVar5 + 0x10) == (TPpContext *)0x0) goto LAB_00102470;
      }
      pTVar2 = *(TPpContext **)(pTVar5 + 0x18);
    } while (*(TPpContext **)(pTVar5 + 0x18) != (TPpContext *)0x0);
LAB_00102470:
    if ((this + 0x18 != pTVar9) && (*(int *)(pTVar9 + 0x20) <= iVar3)) {
      pTVar9[0x70] = (TPpContext)((byte)pTVar9[0x70] | 4);
    }
  }
  iVar3 = scanToken(this,param_1);
  if (iVar3 != 10) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"can only be followed by a single macro name",
               "#undef",&_LC3);
  }
LAB_00102361:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::CPPversion(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPversion(TPpContext *this,TPpToken *param_1)

{
  TPpToken *__s;
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  TPpToken *local_70;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = scanToken(this,param_1);
  if ((this[0x1a0] == (TPpContext)0x0) && (this[0x1a1] == (TPpContext)0x0)) {
    this[0x1a1] = (TPpContext)0x1;
    if (iVar4 != 10) goto LAB_0010259b;
LAB_0010279c:
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"must be followed by version number","#version",
               &_LC3);
  }
  else {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"must occur first in shader","#version",&_LC3);
    this[0x1a1] = (TPpContext)0x1;
    if (iVar4 == 10) goto LAB_0010279c;
LAB_0010259b:
    if (iVar4 != 0x98) {
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_1,"must be followed by version number","#version",
                 &_LC3);
    }
    __s = param_1 + 0x28;
    uVar5 = __isoc23_strtol(__s,0,10);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    iVar4 = scanToken(this,param_1);
    if (iVar4 != 10) {
      local_68 = glslang::GetThreadPoolAllocator();
      local_60 = local_50;
      sVar6 = strlen((char *)__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_68,__s,__s + sVar6);
      pcVar7 = local_60;
      if (*(long *)(this + 0x60) == 0) {
        for (puVar8 = *(undefined8 **)(this + 0x58); puVar8 != (undefined8 *)0x0;
            puVar8 = (undefined8 *)*puVar8) {
          if ((local_58 == puVar8[3]) &&
             ((local_58 == 0 || (iVar4 = memcmp(pcVar7,(void *)puVar8[2],local_58), iVar4 == 0))))
          goto LAB_00102693;
        }
LAB_0010282d:
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_1,
                   "bad profile name; use es, core, or compatibility","#version",&_LC3);
      }
      else {
        uVar9 = 0x811c9dc5;
        if (local_58 != 0) {
          uVar9 = 0x811c9dc5;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            uVar9 = (ulong)(((uint)uVar9 ^ (int)cVar1) * 0x1000193);
          } while (pcVar7 != local_60 + local_58);
        }
        puVar8 = (undefined8 *)
                 std::
                 _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                 ::_M_find_before_node
                           ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                             *)(this + 0x40),uVar9 % *(ulong *)(this + 0x50),
                            (basic_string *)&local_68,uVar9);
        if ((puVar8 == (undefined8 *)0x0) ||
           (puVar8 = (undefined8 *)*puVar8, puVar8 == (undefined8 *)0x0)) goto LAB_0010282d;
LAB_00102693:
        if (2 < *(int *)(puVar8 + 6) - 0xafU) goto LAB_0010282d;
      }
      plVar3 = *(long **)(this + 0x100);
      if (*(code **)(*plVar3 + 0x1d0) == TParseContextBase::notifyVersion) {
        if (plVar3[0x84] != 0) {
          local_78 = uVar2;
          local_74 = uVar5;
          local_70 = __s;
          (*(code *)plVar3[0x85])(plVar3 + 0x82,&local_78,&local_74,&local_70);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x1d0))(plVar3,uVar2,uVar5,__s);
      }
      iVar4 = scanToken(this,param_1);
      if (iVar4 != 10) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_1,
                   "bad tokens following profile -- expected newline","#version",&_LC3);
      }
      goto LAB_00102739;
    }
    plVar3 = *(long **)(this + 0x100);
    if (*(code **)(*plVar3 + 0x1d0) == TParseContextBase::notifyVersion) {
      if (plVar3[0x84] != 0) {
        local_70 = (TPpToken *)0x0;
        local_78 = uVar2;
        local_74 = uVar5;
        (*(code *)plVar3[0x85])(plVar3 + 0x82,&local_78,&local_74,&local_70);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x1d0))(plVar3,uVar2,uVar5,0);
    }
  }
  iVar4 = 10;
LAB_00102739:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::MacroExpand(glslang::TPpToken*, bool, bool) */

undefined8 __thiscall
glslang::TPpContext::MacroExpand(TPpContext *this,TPpToken *param_1,bool param_2,bool param_3)

{
  TPpToken *__s;
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  TPpContext *pTVar17;
  TPpContext *pTVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  long *plVar24;
  char *pcVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  long *plVar31;
  undefined1 *puVar32;
  TPpContext *pTVar33;
  long in_FS_OFFSET;
  undefined1 *local_520;
  ulong local_500;
  undefined1 *local_4f0;
  long *local_4d0;
  long *local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4a8;
  char *local_4a0;
  size_t local_498;
  char local_490 [24];
  undefined4 *local_478;
  char *local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined2 local_460 [4];
  undefined8 local_458;
  undefined1 local_450;
  long local_40;
  
  __s = param_1 + 0x28;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0x18] = (TPpToken)0x0;
  local_478 = (undefined4 *)glslang::GetThreadPoolAllocator();
  local_470 = (char *)local_460;
  sVar12 = strlen((char *)__s);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_478,__s,__s + sVar12);
  pcVar25 = local_470;
  if (*(long *)(this + 0x60) == 0) {
    plVar15 = *(long **)(this + 0x58);
    if (plVar15 != (long *)0x0) {
      sVar12 = CONCAT44(uStack_464,local_468);
      do {
        if ((sVar12 == plVar15[3]) &&
           ((sVar12 == 0 || (iVar7 = memcmp(pcVar25,(void *)plVar15[2],sVar12), iVar7 == 0))))
        goto LAB_001029ea;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
LAB_00102ada:
    if (param_1[0x19] == (TPpToken)0x0) {
LAB_00102ae6:
      if (param_2) {
        plVar15 = (long *)operator_new(0x18);
        puVar19 = *(undefined8 **)(this + 400);
        *(undefined1 *)(plVar15 + 1) = 0;
        plVar15[2] = (long)this;
        *plVar15 = (long)&PTR__tZeroInput_0010ac28;
        local_4c8 = plVar15;
        if (puVar19 == *(undefined8 **)(this + 0x198)) {
          std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
          _M_realloc_insert<glslang::TPpContext::tInput*const&>
                    ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>
                      *)(this + 0x188),puVar19,&local_4c8);
          pcVar13 = *(code **)(*plVar15 + 0x50);
        }
        else {
          *puVar19 = plVar15;
          pcVar13 = tInput::notifyActivated;
          *(undefined8 **)(this + 400) = puVar19 + 1;
        }
        (*pcVar13)(plVar15);
        uVar14 = 3;
        goto LAB_00102b97;
      }
    }
  }
  else {
    uVar28 = 0x811c9dc5;
    if (CONCAT44(uStack_464,local_468) != 0) {
      uVar9 = 0x811c9dc5;
      do {
        cVar2 = *pcVar25;
        pcVar25 = pcVar25 + 1;
        uVar9 = (uVar9 ^ (int)cVar2) * 0x1000193;
      } while (local_470 + CONCAT44(uStack_464,local_468) != pcVar25);
      uVar28 = (ulong)uVar9;
    }
    puVar19 = (undefined8 *)
              std::
              _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
              ::_M_find_before_node
                        ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                          *)(this + 0x40),uVar28 % *(ulong *)(this + 0x50),
                         (basic_string *)&local_478,uVar28);
    if ((puVar19 == (undefined8 *)0x0) || (plVar15 = (long *)*puVar19, plVar15 == (long *)0x0))
    goto LAB_00102ada;
LAB_001029ea:
    iVar7 = (int)plVar15[6];
    if (param_1[0x19] == (TPpToken)0x0) {
      iVar10 = (int)this;
      if (iVar7 == 0xb4) {
        plVar15 = *(long **)(this + 0x100);
        lVar16 = plVar15[0x1b];
        if (*(char *)(lVar16 + 0x58) == '\0') {
          plVar24 = *(long **)(lVar16 + 0x30);
          iVar7 = *(int *)(lVar16 + 0x20);
          iVar8 = (*(int *)(lVar16 + 8) - *(int *)(lVar16 + 0x3c)) + -1;
          iVar29 = iVar7;
          if (iVar8 <= iVar7) {
            iVar29 = iVar8;
          }
          plVar31 = plVar24;
          if (0 < iVar29) {
            plVar31 = plVar24 + (long)iVar29 * 3;
          }
          if (*plVar31 != 0) {
LAB_00102c07:
            (**(code **)(*plVar15 + 0x30))
                      (plVar15,param_1,1,&E_GL_GOOGLE_cpp_style_line_directive,
                       "filename-based __FILE__");
            lVar16 = *(long *)(*(long *)(this + 0x100) + 0xd8);
            if (*(char *)(lVar16 + 0x58) != '\0') goto LAB_00102ce3;
            plVar24 = *(long **)(lVar16 + 0x30);
            iVar7 = *(int *)(lVar16 + 0x20);
            iVar8 = (*(int *)(lVar16 + 8) - *(int *)(lVar16 + 0x3c)) + -1;
          }
          if (iVar7 < iVar8) {
            iVar8 = iVar7;
          }
          if (0 < iVar8) {
            plVar24 = plVar24 + (long)iVar8 * 3;
          }
        }
        else {
          if (*(long *)(lVar16 + 0x40) != 0) goto LAB_00102c07;
LAB_00102ce3:
          plVar24 = (long *)(lVar16 + 0x40);
        }
        *(int *)(param_1 + 0x20) = (int)plVar24[1];
        TSourceLoc::getStringNameOrNum_abi_cxx11_(SUB81((basic_string *)&local_478,0));
        snprintf((char *)__s,0x401,"%s",local_478);
        if (local_478 != &local_468) {
          operator_delete(local_478,CONCAT44(uStack_464,local_468) + 1);
        }
        glslang::TPpContext::UngetToken(iVar10,(TPpToken *)0x98);
        goto LAB_00102b92;
      }
      if (iVar7 == 0xb5) {
        uVar3 = *(undefined4 *)(*(long *)(this + 0x100) + 0x18);
LAB_00102b5b:
        *(undefined4 *)(param_1 + 0x20) = uVar3;
LAB_00102b60:
        __snprintf_chk(__s,0x401,2,0xffffffffffffffff,&_LC68);
        glslang::TPpContext::UngetToken(iVar10,(TPpToken *)0x98);
        goto LAB_00102b92;
      }
      if (iVar7 == 0xb3) {
        if (*(int *)(param_1 + 0x20) == 0) {
          lVar27 = *(long *)(*(long *)(this + 0x100) + 0xd8);
          lVar16 = lVar27 + 0x40;
          if (*(char *)(lVar27 + 0x58) == '\0') {
            lVar16 = *(long *)(lVar27 + 0x30);
            iVar7 = (*(int *)(lVar27 + 8) - *(int *)(lVar27 + 0x3c)) + -1;
            if (*(int *)(lVar27 + 0x20) < iVar7) {
              iVar7 = *(int *)(lVar27 + 0x20);
            }
            if (0 < iVar7) {
              lVar16 = lVar16 + (long)iVar7 * 0x18;
            }
          }
          uVar3 = *(undefined4 *)(lVar16 + 0xc);
          goto LAB_00102b5b;
        }
        goto LAB_00102b60;
      }
      if (iVar7 != 0) {
        pTVar18 = *(TPpContext **)(this + 0x20);
        pTVar33 = this + 0x18;
        if (pTVar18 != (TPpContext *)0x0) {
          do {
            pTVar17 = *(TPpContext **)(pTVar18 + 0x18);
            if (iVar7 <= *(int *)(pTVar18 + 0x20)) {
              pTVar17 = *(TPpContext **)(pTVar18 + 0x10);
              pTVar33 = pTVar18;
            }
            pTVar18 = pTVar17;
          } while (pTVar17 != (TPpContext *)0x0);
          if ((this + 0x18 != pTVar33) && (*(int *)(pTVar33 + 0x20) <= iVar7)) {
            if (((byte)pTVar33[0x70] & 2) != 0) {
              param_1[0x19] = (TPpToken)0x1;
              uVar14 = 0;
              goto LAB_00102b97;
            }
            if (((byte)pTVar33[0x70] & 4) == 0) {
              plVar15 = (long *)operator_new(0x68);
              *(undefined1 *)(plVar15 + 1) = 0;
              plVar15[2] = (long)this;
              *plVar15 = (long)&PTR__tMacroInput_0010abb8;
              lVar16 = glslang::GetThreadPoolAllocator();
              plVar15[5] = 0;
              plVar15[4] = lVar16;
              plVar15[6] = 0;
              plVar15[7] = 0;
              lVar16 = glslang::GetThreadPoolAllocator();
              local_4c8 = *(long **)param_1;
              uStack_4c0 = *(undefined8 *)(param_1 + 8);
              plVar15[9] = 0;
              plVar15[8] = lVar16;
              local_4b8 = *(undefined8 *)(param_1 + 0x10);
              plVar15[10] = 0;
              plVar15[0xb] = 0;
              *(undefined2 *)(plVar15 + 0xc) = 0;
              plVar15[3] = (long)(pTVar33 + 0x28);
              if (((byte)pTVar33[0x70] & 1) == 0) goto LAB_0010303e;
              local_458 = 0;
              local_478 = (undefined4 *)0x0;
              local_470 = (char *)0x0;
              local_468 = 0;
              local_450 = 0;
              local_460[0] = 0;
              uVar9 = scanToken(this,(TPpToken *)&local_478);
              if (param_3) {
                while (uVar9 == 10) {
                  uVar9 = scanToken(this,(TPpToken *)&local_478);
                }
              }
              if (uVar9 != 0x28) {
                glslang::TPpContext::UngetToken(iVar10,(TPpToken *)(ulong)uVar9);
                if (*(code **)(*plVar15 + 8) != tMacroInput::~tMacroInput) {
                  (**(code **)(*plVar15 + 8))(plVar15);
                  uVar14 = 0;
                  goto LAB_00102b97;
                }
                lVar16 = plVar15[5];
                uVar28 = 0;
                *plVar15 = (long)&PTR__tMacroInput_0010abb8;
                if (lVar16 != plVar15[6]) {
                  do {
                    pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                    if (pvVar4 != (void *)0x0) {
                      operator_delete(pvVar4,0x28);
                      lVar16 = plVar15[5];
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < (ulong)(plVar15[6] - lVar16 >> 3));
                }
                lVar16 = plVar15[9];
                uVar28 = 0;
                if (plVar15[10] != lVar16) {
                  do {
                    pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                    if (pvVar4 != (void *)0x0) {
                      operator_delete(pvVar4,0x28);
                      lVar16 = plVar15[9];
                    }
                    uVar28 = uVar28 + 1;
                  } while (uVar28 < (ulong)(plVar15[10] - lVar16 >> 3));
                }
                operator_delete(plVar15,0x68);
                goto LAB_00102f10;
              }
              lVar20 = plVar15[3];
              lVar16 = *(long *)(lVar20 + 0x10);
              lVar27 = *(long *)(lVar20 + 8);
              uVar30 = plVar15[6] - plVar15[5] >> 3;
              uVar28 = lVar16 - lVar27 >> 2;
              if (uVar30 < uVar28) {
                std::
                vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
                ::_M_default_append((vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
                                     *)(plVar15 + 4),uVar28 - uVar30);
                lVar20 = plVar15[3];
                lVar16 = *(long *)(lVar20 + 0x10);
                lVar27 = *(long *)(lVar20 + 8);
              }
              else if ((uVar28 < uVar30) && (lVar1 = plVar15[5] + uVar28 * 8, plVar15[6] != lVar1))
              {
                plVar15[6] = lVar1;
              }
              uVar28 = 0;
              if (lVar16 == lVar27) {
                lVar16 = plVar15[9];
                if (lVar16 == plVar15[10]) goto LAB_001031c3;
LAB_0010318c:
                plVar15[10] = lVar16;
                uVar30 = *(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 2;
              }
              else {
                do {
                  puVar19 = (undefined8 *)operator_new(0x28);
                  uVar14 = glslang::GetThreadPoolAllocator();
                  puVar19[1] = 0;
                  *puVar19 = uVar14;
                  lVar16 = plVar15[5];
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                  puVar19[4] = 0;
                  *(undefined8 **)(lVar16 + uVar28 * 8) = puVar19;
                  lVar20 = plVar15[3];
                  uVar28 = uVar28 + 1;
                  uVar30 = *(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 2;
                } while (uVar28 < uVar30);
                uVar28 = plVar15[10] - plVar15[9] >> 3;
                if (uVar28 < uVar30) {
                  std::
                  vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
                  ::_M_default_append((vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
                                       *)(plVar15 + 8),uVar30 - uVar28);
                  uVar30 = *(long *)(plVar15[3] + 0x10) - *(long *)(plVar15[3] + 8) >> 2;
                }
                else if ((uVar30 < uVar28) &&
                        (lVar16 = plVar15[9] + uVar30 * 8, plVar15[10] != lVar16))
                goto LAB_0010318c;
              }
              if (uVar30 != 0) {
                memset((void *)plVar15[9],0,uVar30 << 3);
              }
LAB_001031c3:
              local_500 = 0;
              bVar6 = false;
LAB_001031f8:
              uVar28 = glslang::GetThreadPoolAllocator();
              puVar32 = (undefined1 *)0x0;
              local_4f0 = (undefined1 *)0x0;
              local_520 = (undefined1 *)0x0;
LAB_00103225:
              do {
                uVar9 = scanToken(this,param_1);
                if ((~uVar9 & 0xfffffffd) == 0) {
                  (**(code **)(**(long **)(this + 0x100) + 0x168))
                            (*(long **)(this + 0x100),&local_4c8,"End of input in macro",
                             "macro expansion",
                             *(undefined8 *)
                              (*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
                  pcVar13 = *(code **)(*plVar15 + 8);
                  if (pcVar13 == tMacroInput::~tMacroInput) {
                    lVar16 = plVar15[5];
                    uVar28 = 0;
                    *plVar15 = (long)&PTR__tMacroInput_0010abb8;
                    if (plVar15[6] != lVar16) {
                      do {
                        pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                        if (pvVar4 != (void *)0x0) {
                          operator_delete(pvVar4,0x28);
                          lVar16 = plVar15[5];
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 < (ulong)(plVar15[6] - lVar16 >> 3));
                    }
                    lVar16 = plVar15[9];
                    uVar28 = 0;
                    if (lVar16 != plVar15[10]) {
                      do {
                        pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                        if (pvVar4 != (void *)0x0) {
                          operator_delete(pvVar4,0x28);
                          lVar16 = plVar15[9];
                        }
                        uVar28 = uVar28 + 1;
                      } while (uVar28 < (ulong)(plVar15[10] - lVar16 >> 3));
                    }
                    goto LAB_0010349b;
                  }
                  goto LAB_00103680;
                }
                if (uVar9 == 10) goto LAB_001033b0;
                if (uVar9 == 0x23) {
                  (**(code **)(**(long **)(this + 0x100) + 0x168))
                            (*(long **)(this + 0x100),param_1,"unexpected \'#\'","macro expansion",
                             *(undefined8 *)
                              (*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
                  pcVar13 = *(code **)(*plVar15 + 8);
                  if (pcVar13 != tMacroInput::~tMacroInput) goto LAB_00103680;
                  lVar16 = plVar15[5];
                  uVar28 = 0;
                  *plVar15 = (long)&PTR__tMacroInput_0010abb8;
                  if (lVar16 != plVar15[6]) {
                    do {
                      pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                      if (pvVar4 != (void *)0x0) {
                        operator_delete(pvVar4,0x28);
                        lVar16 = plVar15[5];
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar28 < (ulong)(plVar15[6] - lVar16 >> 3));
                  }
                  lVar16 = plVar15[9];
                  uVar28 = 0;
                  if (lVar16 != plVar15[10]) {
                    do {
                      pvVar4 = *(void **)(lVar16 + uVar28 * 8);
                      if (pvVar4 != (void *)0x0) {
                        operator_delete(pvVar4,0x28);
                        lVar16 = plVar15[9];
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar28 < (ulong)(plVar15[10] - lVar16 >> 3));
                  }
                  goto LAB_0010349b;
                }
                lVar16 = plVar15[3];
                if ((uVar9 != 0x29) && (*(long *)(lVar16 + 0x10) == *(long *)(lVar16 + 8)))
                goto LAB_00103891;
                if (puVar32 == local_520) {
                  if ((uVar9 == 0x2c) || (uVar9 == 0x29)) goto LAB_00103869;
                  if (uVar9 == 0x28) {
                    uVar26 = 0;
                    uVar30 = 1;
                    if (local_4f0 == puVar32) goto LAB_001035c0;
LAB_0010355d:
                    *puVar32 = 0x29;
                    puVar32 = puVar32 + 1;
                  }
                }
                else if (uVar9 == 0x28) {
                  if (local_4f0 != puVar32) goto LAB_0010355d;
                  uVar26 = (long)puVar32 - (long)local_520;
                  if (uVar26 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_realloc_insert");
                  }
                  uVar5 = uVar26 * 2;
                  uVar21 = 0x7fffffffffffffff;
                  if (uVar5 < 0x8000000000000000) {
                    uVar21 = uVar5;
                  }
                  uVar30 = 0x7fffffffffffffff;
                  if (uVar26 <= uVar5) {
                    uVar30 = uVar21;
                  }
LAB_001035c0:
                  puVar22 = (undefined1 *)glslang::TPoolAllocator::allocate(uVar28);
                  puVar22[uVar26] = 0x29;
                  puVar23 = puVar22;
                  if (puVar32 != local_520) {
                    lVar16 = 0;
                    do {
                      puVar22[lVar16] = local_520[lVar16];
                      lVar16 = lVar16 + 1;
                    } while (lVar16 != (long)puVar32 - (long)local_520);
                    puVar23 = puVar22 + lVar16;
                  }
                  puVar32 = puVar23 + 1;
                  local_4f0 = puVar22 + uVar30;
                  local_520 = puVar22;
                }
                else {
                  puVar32 = puVar32 + -(ulong)((int)(char)puVar32[-1] == uVar9);
                }
                local_4a8 = glslang::GetThreadPoolAllocator();
                local_4a0 = local_490;
                sVar12 = strlen((char *)__s);
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                _M_construct<char_const*>((basic_string *)&local_4a8,__s,__s + sVar12);
                sVar12 = local_498;
                pcVar25 = local_4a0;
                if (*(long *)(this + 0x60) == 0) {
                  for (puVar19 = *(undefined8 **)(this + 0x58); puVar19 != (undefined8 *)0x0;
                      puVar19 = (undefined8 *)*puVar19) {
                    if ((sVar12 == puVar19[3]) &&
                       ((sVar12 == 0 ||
                        (iVar10 = memcmp(pcVar25,(void *)puVar19[2],sVar12), iVar10 == 0))))
                    goto LAB_00103339;
                  }
                }
                else {
                  uVar30 = 0x811c9dc5;
                  if (local_498 != 0) {
                    uVar11 = 0x811c9dc5;
                    do {
                      cVar2 = *pcVar25;
                      pcVar25 = pcVar25 + 1;
                      uVar11 = (uVar11 ^ (int)cVar2) * 0x1000193;
                    } while (pcVar25 != local_4a0 + local_498);
                    uVar30 = (ulong)uVar11;
                  }
                  puVar19 = (undefined8 *)
                            std::
                            _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                            ::_M_find_before_node
                                      ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                                        *)(this + 0x40),uVar30 % *(ulong *)(this + 0x50),
                                       (basic_string *)&local_4a8,uVar30);
                  if ((puVar19 != (undefined8 *)0x0) &&
                     (puVar19 = (undefined8 *)*puVar19, puVar19 != (undefined8 *)0x0)) {
LAB_00103339:
                    if (*(int *)(puVar19 + 6) == 0xb3) {
                      lVar27 = *(long *)(*(long *)(this + 0x100) + 0xd8);
                      lVar16 = lVar27 + 0x40;
                      if (*(char *)(lVar27 + 0x58) == '\0') {
                        lVar16 = *(long *)(lVar27 + 0x30);
                        iVar10 = (*(int *)(lVar27 + 8) - *(int *)(lVar27 + 0x3c)) + -1;
                        if (*(int *)(lVar27 + 0x20) < iVar10) {
                          iVar10 = *(int *)(lVar27 + 0x20);
                        }
                        if (0 < iVar10) {
                          lVar16 = lVar16 + (long)iVar10 * 0x18;
                        }
                      }
                      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar16 + 0xc);
                    }
                  }
                }
                bVar6 = true;
                glslang::TPpContext::TokenStream::putToken
                          ((int)*(undefined8 *)(plVar15[5] + local_500 * 8),(TPpToken *)(ulong)uVar9
                          );
              } while( true );
            }
          }
        }
      }
      goto LAB_00102ae6;
    }
  }
LAB_00102f10:
  uVar14 = 0;
LAB_00102b97:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
LAB_001033b0:
  if (!param_3) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),&local_4c8,"End of line in macro substitution:",
               "macro expansion",
               *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
    pcVar13 = *(code **)(*plVar15 + 8);
    if (pcVar13 == tMacroInput::~tMacroInput) {
      lVar16 = plVar15[5];
      uVar28 = 0;
      *plVar15 = (long)&PTR__tMacroInput_0010abb8;
      if (plVar15[6] != lVar16) {
        do {
          pvVar4 = *(void **)(lVar16 + uVar28 * 8);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4,0x28);
            lVar16 = plVar15[5];
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < (ulong)(plVar15[6] - lVar16 >> 3));
      }
      lVar16 = plVar15[9];
      uVar28 = 0;
      if (lVar16 != plVar15[10]) {
        do {
          pvVar4 = *(void **)(lVar16 + uVar28 * 8);
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4,0x28);
            lVar16 = plVar15[9];
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 < (ulong)(plVar15[10] - lVar16 >> 3));
      }
LAB_0010349b:
      operator_delete(plVar15,0x68);
    }
    else {
LAB_00103680:
      (*pcVar13)(plVar15);
    }
    goto LAB_001034a8;
  }
  goto LAB_00103225;
LAB_00103869:
  lVar27 = *(long *)(lVar16 + 0x10) - *(long *)(lVar16 + 8);
  uVar28 = lVar27 >> 2;
  if (uVar9 != 0x29) {
    local_500 = local_500 + 1;
    if (uVar28 <= local_500) {
LAB_00103891:
      iVar10 = 0;
LAB_001038a8:
      do {
        if (uVar9 == 0x29) goto LAB_0010398c;
        while( true ) {
          if (uVar9 == 0x7d) {
LAB_0010398c:
            iVar10 = iVar10 + -1;
          }
          uVar9 = scanToken(this,param_1);
          if ((uVar9 == 0x28) || (uVar9 == 0x7b)) break;
          if (uVar9 == 0xffffffff) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),&local_4c8,"End of input in macro","macro expansion"
                       ,*(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
            (**(code **)(*plVar15 + 8))(plVar15);
LAB_001034a8:
            uVar14 = 1;
            goto LAB_00102b97;
          }
          if (0 < iVar10) goto LAB_001038a8;
          if (uVar9 == 0x29) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),&local_4c8,"Too many args in macro",
                       "macro expansion",
                       *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
            lVar16 = plVar15[3];
            goto LAB_00102ffa;
          }
        }
        iVar10 = iVar10 + 1;
      } while( true );
    }
    goto LAB_001031f8;
  }
  if ((lVar27 != 4) || (bVar6)) {
    local_500 = local_500 + 1;
  }
  if (local_500 < uVar28) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),&local_4c8,"Too few args in Macro","macro expansion",
               *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)iVar7 * 8) + 8));
    lVar16 = plVar15[3];
  }
LAB_00102ffa:
  for (uVar28 = 0; uVar28 < (ulong)(*(long *)(lVar16 + 0x10) - *(long *)(lVar16 + 8) >> 2);
      uVar28 = uVar28 + 1) {
    uVar14 = PrescanMacroArg((TokenStream *)this,*(TPpToken **)(plVar15[5] + uVar28 * 8),
                             SUB81(param_1,0));
    *(undefined8 *)(plVar15[9] + uVar28 * 8) = uVar14;
    lVar16 = plVar15[3];
  }
LAB_0010303e:
  puVar19 = *(undefined8 **)(this + 400);
  local_4d0 = plVar15;
  if (puVar19 == *(undefined8 **)(this + 0x198)) {
    std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
    _M_realloc_insert<glslang::TPpContext::tInput*const&>
              ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *)
               (this + 0x188),puVar19,&local_4d0);
  }
  else {
    *puVar19 = plVar15;
    *(undefined8 **)(this + 400) = puVar19 + 1;
  }
  (**(code **)(*plVar15 + 0x50))(plVar15);
  pTVar33[0x70] = (TPpContext)((byte)pTVar33[0x70] | 2);
  *(undefined8 *)(pTVar33 + 0x68) = 0;
LAB_00102b92:
  uVar14 = 2;
  goto LAB_00102b97;
}



/* glslang::TPpContext::evalToToken(int, bool, int&, bool&, glslang::TPpToken*) */

int __thiscall
glslang::TPpContext::evalToToken
          (TPpContext *this,int param_1,bool param_2,int *param_3,bool *param_4,TPpToken *param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    if (param_1 != 0xa2) {
      return param_1;
    }
    iVar2 = strcmp("defined",(char *)(param_5 + 0x28));
    if (iVar2 == 0) break;
    uVar3 = MacroExpand(this,param_5,true,false);
    if (uVar3 < 2) {
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_5,"can\'t evaluate expression",
                 "preprocessor evaluation",&_LC3);
      *param_4 = true;
      *param_3 = 0;
    }
    else if (((uVar3 == 3) && (!param_2)) &&
            (plVar1 = *(long **)(this + 0x100), *(int *)((long)plVar1 + 0xc) == 8)) {
      if ((*(byte *)(plVar1 + 0x1a) & 1) == 0) {
        (**(code **)(*plVar1 + 0x168))
                  (plVar1,param_5,"undefined macro in expression not allowed in es profile",
                   "preprocessor evaluation",param_5 + 0x28);
      }
      else {
        (**(code **)(*plVar1 + 0x170))();
      }
    }
    param_1 = scanToken(this,param_5);
    if (*param_4 != false) {
      return param_1;
    }
  }
  return 0xa2;
}



/* glslang::TPpContext::PrescanMacroArg(glslang::TPpContext::TokenStream&, glslang::TPpToken*, bool)
    */

undefined8 *
glslang::TPpContext::PrescanMacroArg(TokenStream *param_1,TPpToken *param_2,bool param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  bool in_CL;
  undefined7 in_register_00000011;
  TPpToken *pTVar8;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  pTVar8 = (TPpToken *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined8 *)operator_new(0x28);
  uVar5 = glslang::GetThreadPoolAllocator();
  puVar4[1] = 0;
  *puVar4 = uVar5;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  plVar6 = (long *)operator_new(0x18);
  puVar1 = *(undefined8 **)(param_1 + 400);
  *(undefined1 *)(plVar6 + 1) = 0;
  plVar6[2] = (long)param_1;
  *plVar6 = (long)&PTR__tMarkerInput_0010aad8;
  local_48 = plVar6;
  if (puVar1 == *(undefined8 **)(param_1 + 0x198)) {
    std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
    _M_realloc_insert<glslang::TPpContext::tInput*const&>
              ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *)
               (param_1 + 0x188),puVar1,&local_48);
    pcVar7 = *(code **)(*plVar6 + 0x50);
  }
  else {
    *puVar1 = plVar6;
    pcVar7 = tInput::notifyActivated;
    *(undefined8 **)(param_1 + 400) = puVar1 + 1;
  }
  (*pcVar7)(plVar6);
  glslang::TPpContext::pushTokenStreamInput(param_1,SUB81(param_2,0),false);
LAB_00103bbc:
  uVar2 = scanToken((TPpContext *)param_1,pTVar8);
  if (uVar2 != 0xfffffffd) {
    if (uVar2 == 0xffffffff) goto LAB_00103c25;
    uVar2 = glslang::TPpContext::tokenPaste((int)param_1,(TPpToken *)(ulong)uVar2);
    if (uVar2 == 0xa2) {
      iVar3 = MacroExpand((TPpContext *)param_1,pTVar8,false,in_CL);
      if (iVar3 != 1) goto code_r0x00103bfd;
      goto LAB_00103c10;
    }
    if ((~uVar2 & 0xfffffffd) != 0) goto LAB_00103bae;
    if (uVar2 != 0xfffffffd) goto LAB_00103c25;
  }
  goto LAB_00103c35;
code_r0x00103bfd:
  if (1 < iVar3 - 2U) {
LAB_00103bae:
    glslang::TPpContext::TokenStream::putToken((int)puVar4,(TPpToken *)(ulong)uVar2);
  }
  goto LAB_00103bbc;
  while (iVar3 != -1) {
LAB_00103c10:
    iVar3 = scanToken((TPpContext *)param_1,pTVar8);
    if (iVar3 == -3) goto LAB_00103c35;
  }
LAB_00103c25:
  operator_delete(puVar4,0x28);
  puVar4 = (undefined8 *)0x0;
LAB_00103c35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* glslang::TPpContext::CPPdefine(glslang::TPpToken*) */

TPpToken * __thiscall glslang::TPpContext::CPPdefine(TPpContext *this,TPpToken *param_1)

{
  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
  *this_00;
  long lVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  TPpContext *pTVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  TPpContext *pTVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  char *pcVar19;
  TPpContext *pTVar20;
  undefined8 uVar21;
  long lVar22;
  uint *puVar23;
  TPpToken *__s;
  long *plVar24;
  TPpToken *pTVar25;
  long in_FS_OFFSET;
  TPpContext *local_920;
  TPpContext *local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  ulong local_8f8;
  uint *local_8f0;
  uint *local_8e8;
  uint *local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  byte local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined4 local_898;
  undefined2 local_890;
  double local_888;
  char local_880 [1032];
  undefined8 local_478;
  char *local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  char local_460 [8];
  double local_458;
  uint local_450 [260];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8f8 = glslang::GetThreadPoolAllocator();
  local_8f0 = (uint *)0x0;
  local_8e8 = (uint *)0x0;
  local_8e0 = (uint *)0x0;
  local_8d8 = glslang::GetThreadPoolAllocator();
  local_8b0 = local_8b0 & 0xf8;
  local_8d0 = 0;
  local_8c8 = 0;
  local_8c0 = 0;
  local_8b8 = 0;
  uVar7 = scanToken(this,param_1);
  if (uVar7 != 0xa2) {
    pTVar25 = (TPpToken *)(ulong)uVar7;
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"must be followed by macro name","#define",&_LC3);
    goto LAB_00103d6e;
  }
  if (*(int *)(param_1 + 8) < 0) {
    local_478 = glslang::GetThreadPoolAllocator();
  }
  else {
    (**(code **)(**(long **)(this + 0x100) + 0x1a8))
              (*(long **)(this + 0x100),param_1,param_1 + 0x28,"#define");
    local_478 = glslang::GetThreadPoolAllocator();
  }
  __s = param_1 + 0x28;
  local_470 = local_460;
  sVar11 = strlen((char *)__s);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_478,__s,__s + sVar11);
  pcVar19 = local_470;
  this_00 = (_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
             *)(this + 0x40);
  if (*(long *)(this + 0x60) == 0) {
    plVar24 = *(long **)(this + 0x58);
    if (plVar24 != (long *)0x0) {
      sVar11 = CONCAT44(uStack_464,local_468);
      do {
        if ((sVar11 == plVar24[3]) &&
           ((sVar11 == 0 || (iVar8 = memcmp(pcVar19,(void *)plVar24[2],sVar11), iVar8 == 0))))
        goto LAB_00103e75;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
LAB_001040d9:
    uVar7 = *(uint *)(this + 0xa0);
    *(uint *)(this + 0xa0) = uVar7 + 1;
    local_478 = glslang::GetThreadPoolAllocator();
    local_470 = local_460;
    sVar11 = strlen((char *)__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_478,__s,__s + sVar11);
    local_450[0] = uVar7;
    lVar16 = std::
             _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
             ::
             _M_emplace<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int>>
                       (this_00,(basic_string *)&local_478);
    lVar22 = *(long *)(this + 0x90);
    lVar17 = *(long *)(this + 0x88);
    uVar13 = lVar22 - lVar17 >> 3;
    if (uVar13 < (long)(int)uVar7 + 1U) {
      local_918 = this + 0xa8;
      uVar14 = (ulong)(int)(uVar7 + 100);
      if (uVar13 < uVar14) {
        std::
        vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
        ::_M_fill_insert((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                          *)(this + 0x80),lVar22,uVar14 - uVar13,&local_918);
        lVar17 = *(long *)(this + 0x88);
      }
      else if ((uVar14 < uVar13) && (lVar1 = lVar17 + uVar14 * 8, lVar22 != lVar1)) {
        *(long *)(this + 0x90) = lVar1;
      }
    }
    *(long *)(lVar17 + (long)(int)uVar7 * 8) = lVar16 + 8;
  }
  else {
    uVar13 = 0x811c9dc5;
    if (CONCAT44(uStack_464,local_468) != 0) {
      uVar7 = 0x811c9dc5;
      do {
        cVar2 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        uVar7 = (uVar7 ^ (int)cVar2) * 0x1000193;
      } while (pcVar19 != local_470 + CONCAT44(uStack_464,local_468));
      uVar13 = (ulong)uVar7;
    }
    puVar15 = (undefined8 *)
              std::
              _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
              ::_M_find_before_node
                        (this_00,uVar13 % *(ulong *)(this + 0x50),(basic_string *)&local_478,uVar13)
    ;
    if ((puVar15 == (undefined8 *)0x0) || (plVar24 = (long *)*puVar15, plVar24 == (long *)0x0))
    goto LAB_001040d9;
LAB_00103e75:
    uVar7 = *(uint *)(plVar24 + 6);
    if (uVar7 == 0) goto LAB_001040d9;
  }
  local_918 = *(TPpContext **)param_1;
  uStack_910 = *(undefined8 *)(param_1 + 8);
  local_908 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = scanToken(this,param_1);
  pTVar25 = (TPpToken *)(ulong)uVar9;
  if (uVar9 == 0x28) {
    if (param_1[0x18] == (TPpToken)0x0) {
      local_8b0 = local_8b0 | 1;
      do {
        uVar13 = scanToken(this,param_1);
        if ((local_8f0 == local_8e8) && ((int)uVar13 == 0x29)) goto LAB_00103f03;
        if ((int)uVar13 != 0xa2) {
          pTVar25 = (TPpToken *)(uVar13 & 0xffffffff);
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_1,"bad argument","#define",&_LC3);
          goto LAB_00103d6e;
        }
        local_478 = glslang::GetThreadPoolAllocator();
        local_470 = local_460;
        sVar11 = strlen((char *)__s);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>((basic_string *)&local_478,__s,__s + sVar11);
        pcVar19 = local_470;
        if (*(long *)(this + 0x60) == 0) {
          plVar24 = *(long **)(this + 0x58);
          if (plVar24 != (long *)0x0) {
            sVar11 = CONCAT44(uStack_464,local_468);
            do {
              if ((sVar11 == plVar24[3]) &&
                 ((sVar11 == 0 || (iVar8 = memcmp(pcVar19,(void *)plVar24[2],sVar11), iVar8 == 0))))
              goto LAB_001042a3;
              plVar24 = (long *)*plVar24;
            } while (plVar24 != (long *)0x0);
          }
LAB_00104409:
          uVar9 = *(uint *)(this + 0xa0);
          *(uint *)(this + 0xa0) = uVar9 + 1;
          local_478 = glslang::GetThreadPoolAllocator();
          local_470 = local_460;
          sVar11 = strlen((char *)__s);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_construct<char_const*>((basic_string *)&local_478,__s,__s + sVar11);
          local_450[0] = uVar9;
          lVar16 = std::
                   _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                   ::
                   _M_emplace<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int>>
                             (this_00,(basic_string *)&local_478);
          lVar22 = *(long *)(this + 0x90);
          lVar17 = *(long *)(this + 0x88);
          uVar13 = lVar22 - lVar17 >> 3;
          if (uVar13 < (long)(int)uVar9 + 1U) {
            local_920 = this + 0xa8;
            uVar14 = (ulong)(int)(uVar9 + 100);
            if (uVar13 < uVar14) {
              std::
              vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
              ::_M_fill_insert((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                                *)(this + 0x80),lVar22,uVar14 - uVar13,&local_920);
              lVar17 = *(long *)(this + 0x88);
            }
            else if ((uVar14 < uVar13) && (lVar1 = lVar17 + uVar14 * 8, lVar22 != lVar1)) {
              *(long *)(this + 0x90) = lVar1;
            }
          }
          *(long *)(lVar17 + (long)(int)uVar9 * 8) = lVar16 + 8;
        }
        else {
          uVar13 = 0x811c9dc5;
          if (CONCAT44(uStack_464,local_468) != 0) {
            uVar9 = 0x811c9dc5;
            do {
              cVar2 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              uVar9 = (uVar9 ^ (int)cVar2) * 0x1000193;
            } while (pcVar19 != local_470 + CONCAT44(uStack_464,local_468));
            uVar13 = (ulong)uVar9;
          }
          puVar15 = (undefined8 *)
                    std::
                    _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                    ::_M_find_before_node
                              (this_00,uVar13 % *(ulong *)(this + 0x50),(basic_string *)&local_478,
                               uVar13);
          if ((puVar15 == (undefined8 *)0x0) || (plVar24 = (long *)*puVar15, plVar24 == (long *)0x0)
             ) goto LAB_00104409;
LAB_001042a3:
          uVar9 = *(uint *)(plVar24 + 6);
          if (uVar9 == 0) goto LAB_00104409;
        }
        puVar5 = local_8e8;
        puVar4 = local_8f0;
        puVar23 = (uint *)((long)local_8e8 - (long)local_8f0);
        uVar13 = (long)puVar23 >> 2;
        if (puVar23 != (uint *)0x0) {
          uVar14 = 0;
          do {
            if (local_8f0[uVar14] == uVar9) {
              (**(code **)(**(long **)(this + 0x100) + 0x168))
                        (*(long **)(this + 0x100),param_1,"duplicate macro parameter","#define",
                         &_LC3);
              goto LAB_0010431e;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar13);
        }
        if (local_8e0 == local_8e8) {
          if (uVar13 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          if (local_8f0 == local_8e8) {
            puVar18 = puVar23 + 1;
LAB_00104789:
            local_8f0 = (uint *)glslang::TPoolAllocator::allocate(local_8f8);
            *(uint *)((long)local_8f0 + (long)puVar23) = uVar9;
            local_8e0 = (uint *)((long)local_8f0 + (long)puVar18);
            local_8e8 = local_8f0 + 1;
            if (puVar4 == puVar5) goto LAB_0010431e;
          }
          else {
            uVar14 = uVar13 * 2;
            if (uVar14 < uVar13) {
              puVar18 = (uint *)0x7ffffffffffffffc;
              goto LAB_00104789;
            }
            if (uVar14 != 0) {
              if (0x1fffffffffffffff < uVar14) {
                uVar14 = 0x1fffffffffffffff;
              }
              puVar18 = (uint *)(uVar14 * 4);
              goto LAB_00104789;
            }
            *puVar23 = uVar9;
            local_8f0 = (uint *)0x0;
            local_8e0 = (uint *)0x0;
          }
          lVar22 = 0;
          do {
            lVar17 = lVar22;
            *(undefined4 *)((long)local_8f0 + lVar17) = *(undefined4 *)((long)puVar4 + lVar17);
            lVar22 = lVar17 + 4;
          } while (lVar17 + 4 != (long)puVar5 - (long)puVar4);
          local_8e8 = (uint *)((long)local_8f0 + lVar17 + 8);
        }
        else {
          *local_8e8 = uVar9;
          local_8e8 = local_8e8 + 1;
        }
LAB_0010431e:
        uVar9 = scanToken(this,param_1);
      } while (uVar9 == 0x2c);
      pTVar25 = (TPpToken *)(ulong)uVar9;
      if (uVar9 != 0x29) {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_1,"missing parenthesis","#define",&_LC3);
        goto LAB_00103d6e;
      }
LAB_00103f03:
      uVar9 = scanToken(this,param_1);
      pTVar25 = (TPpToken *)(ulong)uVar9;
      if ((uVar9 == 0xffffffff) || (uVar9 == 10)) goto LAB_00103f6b;
    }
LAB_00103f25:
    do {
      glslang::TPpContext::TokenStream::putToken((int)&local_8d8,pTVar25);
      uVar9 = scanToken(this,param_1);
      pTVar25 = (TPpToken *)(ulong)uVar9;
      if (uVar9 == 10) break;
      if (param_1[0x18] != (TPpToken)0x0) {
        glslang::TPpContext::TokenStream::putToken((int)&local_8d8,(TPpToken *)0x20);
      }
    } while (uVar9 != 0xffffffff);
  }
  else if ((uVar9 != 10) && (uVar9 != 0xffffffff)) {
    if (param_1[0x18] == (TPpToken)0x0) {
      (**(code **)(**(long **)(this + 0x100) + 0x170))
                (*(long **)(this + 0x100),param_1,"missing space after macro name","#define",&_LC3);
      goto LAB_00103d6e;
    }
    goto LAB_00103f25;
  }
LAB_00103f6b:
  pTVar6 = *(TPpContext **)(this + 0x20);
  pTVar20 = this + 0x18;
  if (*(TPpContext **)(this + 0x20) == (TPpContext *)0x0) {
LAB_00103fac:
    addMacroDef(this,uVar7,(MacroSymbol *)&local_8f8);
  }
  else {
    do {
      while( true ) {
        pTVar12 = pTVar6;
        if (*(int *)(pTVar12 + 0x20) < (int)uVar7) break;
        pTVar6 = *(TPpContext **)(pTVar12 + 0x10);
        pTVar20 = pTVar12;
        if (*(TPpContext **)(pTVar12 + 0x10) == (TPpContext *)0x0) goto LAB_00103fa1;
      }
      pTVar6 = *(TPpContext **)(pTVar12 + 0x18);
    } while (*(TPpContext **)(pTVar12 + 0x18) != (TPpContext *)0x0);
LAB_00103fa1:
    if ((this + 0x18 == pTVar20) || ((int)uVar7 < *(int *)(pTVar20 + 0x20))) goto LAB_00103fac;
    if (((byte)pTVar20[0x70] & 4) == 0) {
      pTVar25 = *(TPpToken **)(this + 0x100);
      if ((((byte)pTVar20[0x70] ^ local_8b0) & 1) == 0) {
        sVar11 = (long)local_8e8 - (long)local_8f0;
        if (sVar11 == *(long *)(pTVar20 + 0x38) - (long)*(void **)(pTVar20 + 0x30)) {
          if ((sVar11 != 0) &&
             (iVar8 = memcmp(*(void **)(pTVar20 + 0x30),local_8f0,sVar11), iVar8 != 0)) {
            (**(code **)(*(long *)pTVar25 + 0x168))
                      (pTVar25,&local_918,"Macro redefined; different argument names:","#define",
                       *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)(int)uVar7 * 8) + 8)
                      );
            pTVar25 = *(TPpToken **)(this + 0x100);
          }
          *(undefined8 *)(pTVar20 + 0x68) = 0;
          bVar3 = true;
          local_8b8 = 0;
          while( true ) {
            local_880[0] = '\0';
            local_460[0] = '\0';
            local_460[1] = '\0';
            local_888 = 0.0;
            local_8a8 = 0;
            local_8a0 = 0;
            local_898 = 0;
            local_890 = 0;
            local_458 = 0.0;
            local_478 = 0;
            local_470 = (char *)0x0;
            local_468 = 0;
            local_450[0] = local_450[0] & 0xffffff00;
            iVar8 = glslang::TPpContext::TokenStream::getToken
                              ((TParseContextBase *)(pTVar20 + 0x48),pTVar25);
            iVar10 = glslang::TPpContext::TokenStream::getToken
                               ((TParseContextBase *)&local_8d8,*(TPpToken **)(this + 0x100));
            if (!bVar3) break;
            local_460[0] = (char)local_890;
            if (iVar8 != iVar10) goto LAB_00104740;
LAB_0010472c:
            if ((((local_888._0_4_ != local_458._0_4_) || (local_888 != local_458)) ||
                (local_888 != local_458)) ||
               (iVar8 = strncmp(local_880,(char *)local_450,0x400), iVar8 != 0)) goto LAB_00104740;
            bVar3 = false;
            if (iVar10 == -1) goto LAB_00104023;
            pTVar25 = *(TPpToken **)(this + 0x100);
          }
          if ((iVar8 == iVar10) && ((char)local_890 == local_460[0])) goto LAB_0010472c;
LAB_00104740:
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),&local_918,"Macro redefined; different substitutions:"
                     ,"#define",
                     *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)(int)uVar7 * 8) + 8));
          goto LAB_00104023;
        }
        pcVar19 = "Macro redefined; different number of arguments:";
        lVar22 = *(long *)pTVar25;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)(int)uVar7 * 8) + 8);
      }
      else {
        pcVar19 = "Macro redefined; function-like versus object-like:";
        lVar22 = *(long *)pTVar25;
        uVar21 = *(undefined8 *)(*(long *)(*(long *)(this + 0x88) + (long)(int)uVar7 * 8) + 8);
      }
      (**(code **)(lVar22 + 0x168))(pTVar25,&local_918,pcVar19,"#define",uVar21);
    }
LAB_00104023:
    std::vector<int,glslang::pool_allocator<int>>::operator=
              ((vector<int,glslang::pool_allocator<int>> *)(pTVar20 + 0x28),(vector *)&local_8f8);
    std::
    vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
    ::operator=((vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
                 *)(pTVar20 + 0x48),(vector *)&local_8d8);
    *(undefined8 *)(pTVar20 + 0x68) = local_8b8;
    pTVar20[0x70] = (TPpContext)((byte)pTVar20[0x70] & 0xf8 | local_8b0 & 7);
  }
  pTVar25 = (TPpToken *)0xa;
LAB_00103d6e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pTVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::eval(int, int, bool, int&, bool&, glslang::TPpToken*) */

int __thiscall
glslang::TPpContext::eval
          (TPpContext *this,int param_1,int param_2,bool param_3,int *param_4,bool *param_5,
          TPpToken *param_6)

{
  TPpToken *__s2;
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  TPpContext *pTVar8;
  TPpContext *pTVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 extraout_RDX;
  long *plVar14;
  int iVar15;
  TPpContext *pTVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_88 = *(undefined8 *)param_6;
  uStack_80 = *(undefined8 *)(param_6 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = *(undefined8 *)(param_6 + 0x10);
  if (param_1 == 0xa2) {
    __s2 = param_6 + 0x28;
    iVar4 = strcmp("defined",(char *)__s2);
    if (iVar4 != 0) {
      iVar4 = glslang::TPpContext::tokenPaste((int)this,(TPpToken *)0xa2);
      iVar4 = evalToToken(this,iVar4,param_3,param_4,param_5,param_6);
      param_1 = eval(this,iVar4,param_2,param_3,param_4,param_5,param_6);
      goto LAB_00104a38;
    }
    if ((*(long *)(this + 400) != *(long *)(this + 0x188)) &&
       (cVar3 = (**(code **)(**(long **)(*(long *)(this + 400) + -8) + 0x40))(), cVar3 != '\0')) {
      plVar14 = *(long **)(this + 0x100);
      if ((*(byte *)(plVar14 + 0x1a) & 1) == 0) {
        (**(code **)(*plVar14 + 0x168))
                  (plVar14,param_6,"cannot use in preprocessor expression when expanded from macros"
                   ,"defined",&_LC3);
      }
      else {
        (**(code **)(*plVar14 + 0x170))
                  (plVar14,param_6,
                   "nonportable when expanded from macros for preprocessor expression");
      }
    }
    param_1 = scanToken(this,param_6);
    bVar19 = param_1 == 0x28;
    if (bVar19) {
      param_1 = scanToken(this,param_6);
    }
    if (param_1 == 0xa2) {
      local_68 = glslang::GetThreadPoolAllocator();
      local_60 = local_50;
      sVar7 = strlen((char *)__s2);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>((basic_string *)&local_68,__s2,__s2 + sVar7);
      pcVar12 = local_60;
      if (*(long *)(this + 0x60) == 0) {
        plVar14 = *(long **)(this + 0x58);
        if (plVar14 == (long *)0x0) {
LAB_00104f9f:
          iVar4 = 0;
        }
        else {
          do {
            if ((local_58 == plVar14[3]) &&
               ((local_58 == 0 || (iVar4 = memcmp(pcVar12,(void *)plVar14[2],local_58), iVar4 == 0))
               )) goto LAB_00104ee9;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
          iVar4 = 0;
        }
      }
      else {
        uVar11 = 0x811c9dc5;
        if (local_58 != 0) {
          uVar17 = 0x811c9dc5;
          do {
            cVar3 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            uVar17 = (uVar17 ^ (int)cVar3) * 0x1000193;
          } while (local_60 + local_58 != pcVar12);
          uVar11 = (ulong)uVar17;
        }
        puVar10 = (undefined8 *)
                  std::
                  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                  ::_M_find_before_node
                            ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                              *)(this + 0x40),uVar11 % *(ulong *)(this + 0x50),
                             (basic_string *)&local_68,uVar11);
        if ((puVar10 == (undefined8 *)0x0) || (plVar14 = (long *)*puVar10, plVar14 == (long *)0x0))
        goto LAB_00104f9f;
LAB_00104ee9:
        iVar4 = (int)plVar14[6];
      }
      pTVar9 = *(TPpContext **)(this + 0x20);
      uVar17 = 0;
      pTVar16 = this + 0x18;
      if (pTVar9 != (TPpContext *)0x0) {
        do {
          pTVar8 = *(TPpContext **)(pTVar9 + 0x18);
          if (iVar4 <= *(int *)(pTVar9 + 0x20)) {
            pTVar8 = *(TPpContext **)(pTVar9 + 0x10);
            pTVar16 = pTVar9;
          }
          pTVar9 = pTVar8;
        } while (pTVar8 != (TPpContext *)0x0);
        if ((this + 0x18 != pTVar16) && (*(int *)(pTVar16 + 0x20) <= iVar4)) {
          uVar17 = ((byte)pTVar16[0x70] >> 2 ^ 1) & 1;
        }
      }
      *param_4 = uVar17;
      param_1 = scanToken(this,param_6);
      if (!bVar19) goto LAB_00104c63;
      if (param_1 == 0x29) goto LAB_00104e37;
      plVar14 = *(long **)(this + 0x100);
      pcVar12 = "expected \')\'";
      lVar18 = *plVar14;
    }
    else {
      plVar14 = *(long **)(this + 0x100);
      pcVar12 = "incorrect directive, expected identifier";
      lVar18 = *plVar14;
    }
LAB_00104a20:
    (**(code **)(lVar18 + 0x168))(plVar14,&local_88,pcVar12,"preprocessor evaluation",&_LC3);
    *param_5 = true;
    *param_4 = 0;
  }
  else {
    if (param_1 == 0x98) {
      *param_4 = *(int *)(param_6 + 0x20);
LAB_00104e37:
      param_1 = scanToken(this,param_6);
    }
    else if (param_1 == 0x28) {
      iVar4 = scanToken(this,param_6);
      param_1 = eval(this,iVar4,0,param_3,param_4,param_5,param_6);
      if (*param_5 == false) {
        if (param_1 != 0x29) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),&local_88,"expected \')\'","preprocessor evaluation",
                     &_LC3);
          *param_5 = true;
          *param_4 = 0;
          goto LAB_00104a38;
        }
        param_1 = scanToken(this,param_6);
      }
    }
    else {
      if (param_1 == 0x21) {
        lVar18 = 3;
      }
      else if (param_1 == 0x7e) {
        lVar18 = 2;
      }
      else if (param_1 == 0x2d) {
        lVar18 = 1;
      }
      else {
        if (param_1 != 0x2b) {
          plVar14 = *(long **)(this + 0x100);
          pcVar12 = "bad expression";
          lVar18 = *plVar14;
          goto LAB_00104a20;
        }
        lVar18 = 0;
      }
      iVar4 = scanToken(this,param_6);
      param_1 = eval(this,iVar4,0xc,param_3,param_4,param_5,param_6);
      iVar4 = (**(code **)((anonymous_namespace)::unop + lVar18 * 0x10 + 8))(*param_4);
      *param_4 = iVar4;
    }
LAB_00104c63:
    param_1 = evalToToken(this,param_1,param_3,param_4,param_5,param_6);
    if (((*param_5 == false) && (param_1 != 0x29)) && (param_1 != 10)) {
      while( true ) {
        piVar6 = (int *)((anonymous_namespace)::binop + 0x110);
        iVar4 = 0x11;
        while (*piVar6 != param_1) {
          iVar4 = iVar4 + -1;
          piVar6 = piVar6 + -4;
          if (iVar4 == -1) goto LAB_00104a38;
        }
        iVar15 = *(int *)((anonymous_namespace)::binop + (long)iVar4 * 0x10 + 4);
        if (iVar15 <= param_2) break;
        iVar1 = *param_4;
        bVar19 = true;
        if ((param_3 == false) &&
           (param_3 = param_1 == 0x8e && iVar1 == 1, param_1 != 0x8e || iVar1 != 1)) {
          param_3 = param_1 == 0x8d && iVar1 == 0;
          bVar19 = param_3;
        }
        iVar5 = scanToken(this,param_6);
        param_1 = eval(this,iVar5,iVar15,bVar19,param_4,param_5,param_6);
        iVar15 = *param_4;
        uVar13 = 0x104d4e;
        pcVar2 = *(code **)((anonymous_namespace)::binop + (long)iVar4 * 0x10 + 8);
        if (((pcVar2 == (anonymous_namespace)::op_mod) || (pcVar2 == (anonymous_namespace)::op_div))
           && (iVar15 == 0)) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),&local_88,"division by 0","preprocessor evaluation",
                     &_LC3);
          *param_4 = 1;
          iVar15 = 1;
          uVar13 = extraout_RDX;
        }
        iVar4 = (*pcVar2)(iVar1,iVar15,uVar13);
        *param_4 = iVar4;
        if (((*param_5 != false) || (param_1 == 0x29)) || (param_1 == 10)) break;
      }
    }
  }
LAB_00104a38:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* glslang::TPpContext::CPPif(glslang::TPpToken*) */

undefined8 __thiscall glslang::TPpContext::CPPif(TPpContext *this,TPpToken *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  bool local_25;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = scanToken(this,param_1);
  if ((*(int *)(this + 0x138) < 0x41) && (*(int *)(this + 0x180) < 0x41)) {
    local_24 = 0;
    local_25 = false;
    *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
    *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
    uVar2 = eval(this,iVar1,0,false,&local_24,&local_25,param_1);
    iVar1 = (int)uVar2;
    if ((iVar1 != 10) && (iVar1 != -1)) {
      uVar2 = extraTokenCheck(this,0xa5,param_1,iVar1);
    }
    if ((local_24 == 0) && (local_25 == false)) {
      uVar2 = CPPelse(this,1,param_1);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"maximum nesting depth exceeded",&_LC30,&_LC3);
    uVar2 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00105542) */
/* glslang::TPpContext::CPPelse(int, glslang::TPpToken*) */

undefined8 __thiscall glslang::TPpContext::CPPelse(TPpContext *this,int param_1,TPpToken *param_2)

{
  TPpToken *__s;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = scanToken(this,param_2);
  if (iVar2 == -1) {
LAB_001051f9:
    uVar4 = 0xffffffff;
LAB_001051fe:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
LAB_00105673:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar9 = 0;
LAB_001051d0:
  if (iVar2 != 0x23) {
    if (iVar2 != 10) goto LAB_001051e0;
LAB_00105359:
    iVar2 = scanToken(this,param_2);
LAB_00105364:
    if (iVar2 == -1) goto LAB_001051f9;
    goto LAB_001051d0;
  }
  iVar2 = scanToken(this,param_2);
  if (iVar2 != 0xa2) goto LAB_00105364;
  local_68 = glslang::GetThreadPoolAllocator();
  __s = param_2 + 0x28;
  local_60 = local_50;
  sVar5 = strlen((char *)__s);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_68,__s,__s + sVar5);
  sVar5 = local_58;
  pcVar8 = local_60;
  if (*(long *)(this + 0x60) == 0) {
    for (puVar6 = *(undefined8 **)(this + 0x58); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((sVar5 == puVar6[3]) &&
         ((sVar5 == 0 || (iVar2 = memcmp(pcVar8,(void *)puVar6[2],sVar5), iVar2 == 0))))
      goto LAB_001052cb;
    }
    if ((iVar9 == 0) && (param_1 != 0)) {
      iVar9 = 0;
    }
  }
  else {
    uVar7 = 0x811c9dc5;
    if (local_58 != 0) {
      uVar3 = 0x811c9dc5;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      } while (pcVar8 != local_60 + local_58);
      uVar7 = (ulong)uVar3;
    }
    puVar6 = (undefined8 *)
             std::
             _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
             ::_M_find_before_node
                       ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                         *)(this + 0x40),uVar7 % *(ulong *)(this + 0x50),(basic_string *)&local_68,
                        uVar7);
    if ((puVar6 == (undefined8 *)0x0) ||
       (puVar6 = (undefined8 *)*puVar6, puVar6 == (undefined8 *)0x0)) goto LAB_001051e0;
LAB_001052cb:
    iVar2 = *(int *)(puVar6 + 6);
    if (iVar2 - 0xa5U < 3) {
      iVar9 = iVar9 + 1;
      if ((*(int *)(this + 0x138) < 0x41) && (*(int *)(this + 0x180) < 0x41)) {
        *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
        *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
        goto LAB_001051e0;
      }
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_2,"maximum nesting depth exceeded",
                 "#if/#ifdef/#ifndef",&_LC3);
      goto LAB_001051f9;
    }
    if (iVar2 == 0xaa) {
      uVar4 = scanToken(this,param_2);
      iVar2 = (int)uVar4;
      if ((iVar2 != 10) && (iVar2 != -1)) {
        uVar4 = extraTokenCheck(this,0xaa,param_2,iVar2);
      }
      iVar2 = *(int *)(this + 0x180);
      this[(long)iVar2 + 0x13c] = (TPpContext)0x0;
      *(int *)(this + 0x180) = iVar2 + -1;
      iVar2 = *(int *)(this + 0x138);
      if (iVar9 == 0) {
        if (0 < iVar2) {
          *(int *)(this + 0x138) = iVar2 + -1;
        }
        goto LAB_001051fe;
      }
      iVar9 = iVar9 + -1;
      *(int *)(this + 0x138) = iVar2 + -1;
      goto LAB_00105350;
    }
    if ((param_1 != 0) && (iVar9 == 0)) {
      if (iVar2 == 0xa8) {
        this[(long)*(int *)(this + 0x180) + 0x13c] = (TPpContext)0x1;
        uVar4 = scanToken(this,param_2);
        iVar2 = (int)uVar4;
        if ((iVar2 == 10) || (iVar2 == -1)) goto LAB_001051fe;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = extraTokenCheck(this,0xa8,param_2,iVar2);
          return uVar4;
        }
      }
      else {
        if (iVar2 != 0xa9) {
          iVar9 = 0;
          goto LAB_001051e0;
        }
        if (this[(long)*(int *)(this + 0x180) + 0x13c] != (TPpContext)0x0) {
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,"#elif after #else","#elif",&_LC3);
        }
        if (0 < *(int *)(this + 0x138)) {
          iVar2 = *(int *)(this + 0x180);
          *(int *)(this + 0x138) = *(int *)(this + 0x138) + -1;
          this[(long)iVar2 + 0x13c] = (TPpContext)0x0;
          *(int *)(this + 0x180) = iVar2 + -1;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = CPPif(this,param_2);
          return uVar4;
        }
      }
      goto LAB_00105673;
    }
    if (iVar2 == 0xa8) {
      if (this[(long)*(int *)(this + 0x180) + 0x13c] == (TPpContext)0x0) {
        this[(long)*(int *)(this + 0x180) + 0x13c] = (TPpContext)0x1;
      }
      else {
        (**(code **)(**(long **)(this + 0x100) + 0x168))
                  (*(long **)(this + 0x100),param_2,"#else after #else","#else",&_LC3);
      }
      iVar2 = scanToken(this,param_2);
      if (iVar2 == 10) goto LAB_00105359;
      if (iVar2 != -1) {
        iVar2 = extraTokenCheck(this,0xa8,param_2,iVar2);
        goto LAB_00105364;
      }
      goto LAB_001051f9;
    }
    if ((iVar2 == 0xa9) && (this[(long)*(int *)(this + 0x180) + 0x13c] != (TPpContext)0x0)) {
      (**(code **)(**(long **)(this + 0x100) + 0x168))
                (*(long **)(this + 0x100),param_2,"#elif after #else","#elif",&_LC3);
    }
  }
LAB_001051e0:
  while( true ) {
    uVar4 = scanToken(this,param_2);
    if ((int)uVar4 == 10) break;
    if ((int)uVar4 == -1) goto LAB_001051f9;
  }
LAB_00105350:
  if ((int)uVar4 != -1) goto LAB_00105359;
  goto LAB_001051f9;
}



/* glslang::TPpContext::CPPifdef(int, glslang::TPpToken*) */

ulong __thiscall glslang::TPpContext::CPPifdef(TPpContext *this,int param_1,TPpToken *param_2)

{
  TPpToken *__s;
  char cVar1;
  long *plVar2;
  TPpContext *pTVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  TPpContext *pTVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  TPpContext *pTVar11;
  long in_FS_OFFSET;
  undefined8 local_68;
  char *local_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = scanToken(this,param_2);
  uVar8 = (ulong)uVar4;
  if ((*(int *)(this + 0x138) < 0x42) && (*(int *)(this + 0x180) < 0x42)) {
    *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
    *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
    if (uVar4 == 0xa2) {
      local_68 = glslang::GetThreadPoolAllocator();
      __s = param_2 + 0x28;
      local_60 = local_50;
      sVar6 = strlen((char *)__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>(&local_68,__s,__s + sVar6);
      pcVar9 = local_60;
      if (*(long *)(this + 0x60) == 0) {
        for (puVar10 = *(undefined8 **)(this + 0x58); puVar10 != (undefined8 *)0x0;
            puVar10 = (undefined8 *)*puVar10) {
          if ((local_58 == puVar10[3]) &&
             ((local_58 == 0 || (iVar5 = memcmp(pcVar9,(void *)puVar10[2],local_58), iVar5 == 0))))
          goto LAB_001057eb;
        }
LAB_0010598d:
        iVar5 = 0;
      }
      else {
        uVar8 = 0x811c9dc5;
        if (local_58 != 0) {
          uVar8 = 0x811c9dc5;
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            uVar8 = (ulong)(((uint)uVar8 ^ (int)cVar1) * 0x1000193);
          } while (pcVar9 != local_60 + local_58);
        }
        puVar10 = (undefined8 *)
                  std::
                  _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                  ::_M_find_before_node
                            ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                              *)(this + 0x40),uVar8 % *(ulong *)(this + 0x50),
                             (basic_string *)&local_68,uVar8);
        if ((puVar10 == (undefined8 *)0x0) ||
           (puVar10 = (undefined8 *)*puVar10, puVar10 == (undefined8 *)0x0)) goto LAB_0010598d;
LAB_001057eb:
        iVar5 = *(int *)(puVar10 + 6);
      }
      pTVar3 = *(TPpContext **)(this + 0x20);
      pTVar11 = this + 0x18;
      if (*(TPpContext **)(this + 0x20) == (TPpContext *)0x0) {
LAB_0010582a:
        uVar4 = scanToken(this,param_2);
        uVar8 = (ulong)uVar4;
        if (uVar4 != 10) {
          pTVar11 = (TPpContext *)0x0;
          (**(code **)(**(long **)(this + 0x100) + 0x168))
                    (*(long **)(this + 0x100),param_2,
                     "unexpected tokens following #ifdef directive - expected a newline","#ifdef",
                     &_LC3);
          if (uVar4 != 0xffffffff) goto LAB_001058c0;
        }
        uVar4 = 0;
      }
      else {
        do {
          while( true ) {
            pTVar7 = pTVar3;
            if (*(int *)(pTVar7 + 0x20) < iVar5) break;
            pTVar3 = *(TPpContext **)(pTVar7 + 0x10);
            pTVar11 = pTVar7;
            if (*(TPpContext **)(pTVar7 + 0x10) == (TPpContext *)0x0) goto LAB_00105820;
          }
          pTVar3 = *(TPpContext **)(pTVar7 + 0x18);
        } while (*(TPpContext **)(pTVar7 + 0x18) != (TPpContext *)0x0);
LAB_00105820:
        if ((this + 0x18 == pTVar11) || (iVar5 < *(int *)(pTVar11 + 0x20))) goto LAB_0010582a;
        pTVar11 = pTVar11 + 0x28;
        uVar4 = scanToken(this,param_2);
        uVar8 = (ulong)uVar4;
        if ((uVar4 != 10) &&
           ((**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_2,
                       "unexpected tokens following #ifdef directive - expected a newline","#ifdef",
                       &_LC3), uVar4 != 0xffffffff)) {
LAB_001058c0:
          do {
            uVar4 = scanToken(this,param_2);
            uVar8 = (ulong)uVar4;
            if (uVar4 == 10) break;
          } while (uVar4 != 0xffffffff);
          uVar4 = 0;
          if (pTVar11 == (TPpContext *)0x0) goto LAB_001058ec;
        }
        uVar4 = ((byte)pTVar11[0x48] >> 2 ^ 1) & 1;
      }
LAB_001058ec:
      if (uVar4 != param_1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CPPelse(this,1,param_2);
          return uVar8;
        }
        goto LAB_001059cd;
      }
    }
    else {
      plVar2 = *(long **)(this + 0x100);
      if (param_1 == 0) {
        (**(code **)(*plVar2 + 0x168))(plVar2,param_2,"must be followed by macro name","#ifndef");
      }
      else {
        (**(code **)(*plVar2 + 0x168))
                  (plVar2,param_2,"must be followed by macro name","#ifdef",&_LC3);
      }
    }
  }
  else {
    uVar8 = 0xffffffff;
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_2,"maximum nesting depth exceeded","#ifdef",&_LC3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_001059cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::CPPline(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::CPPline(TPpContext *this,TPpToken *param_1)

{
  TPpToken *__s;
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  ulong uVar18;
  TPpContext *__s_00;
  long in_FS_OFFSET;
  bool local_b7;
  bool local_b6;
  undefined1 local_b5;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  TPpContext *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  char *local_70;
  size_t local_68;
  char local_60 [16];
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = scanToken(this,param_1);
  local_98 = *(undefined8 *)param_1;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  local_88 = *(undefined8 *)(param_1 + 0x10);
  if (iVar6 == 10) {
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"must by followed by an integral literal","#line",
               &_LC3);
LAB_00105d8b:
    iVar7 = 10;
    goto LAB_00105aac;
  }
  local_b4 = 0;
  local_b0 = 0;
  local_b7 = false;
  local_b6 = false;
  this[0x3c8] = (TPpContext)0x1;
  iVar7 = eval(this,iVar6,0,false,&local_b4,&local_b7,param_1);
  iVar6 = local_b4;
  this[0x3c8] = (TPpContext)0x0;
  if (local_b7 == false) {
    if (iVar7 == 10) {
      local_b4 = local_b4 + 1;
    }
    cVar5 = (**(code **)(**(long **)(this + 0x100) + 0x1b8))();
    if (cVar5 != '\0') {
      local_b4 = local_b4 + -1;
    }
    plVar2 = *(long **)(this + 0x100);
    lVar15 = plVar2[0x1b];
    *(int *)(lVar15 + 0x4c) = local_b4;
    iVar8 = *(int *)(lVar15 + 8) + -1;
    if (*(int *)(lVar15 + 0x20) < iVar8) {
      iVar8 = *(int *)(lVar15 + 0x20);
    }
    *(int *)(*(long *)(lVar15 + 0x30) + (long)iVar8 * 0x18 + 0xc) = local_b4;
    if (iVar7 == 10) {
      if (local_b6 != false) goto LAB_00105d8b;
      bVar4 = false;
      __s_00 = (TPpContext *)0x0;
      uVar16 = 0;
    }
    else {
      if (iVar7 == 0xa1) {
        __s = param_1 + 0x28;
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,&local_98,1,&E_GL_GOOGLE_cpp_style_line_directive,"filename-based #line");
        local_78 = glslang::GetThreadPoolAllocator();
        local_70 = local_60;
        sVar10 = strlen((char *)__s);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>((basic_string *)&local_78,__s,__s + sVar10);
        pcVar14 = local_70;
        if (*(long *)(this + 0x60) == 0) {
          for (puVar12 = *(undefined8 **)(this + 0x58); puVar12 != (undefined8 *)0x0;
              puVar12 = (undefined8 *)*puVar12) {
            if ((local_68 == puVar12[3]) &&
               ((local_68 == 0 || (iVar7 = memcmp(pcVar14,(void *)puVar12[2],local_68), iVar7 == 0))
               )) goto LAB_00105c13;
          }
LAB_00105e6e:
          iVar7 = *(int *)(this + 0xa0);
          *(int *)(this + 0xa0) = iVar7 + 1;
          local_78 = glslang::GetThreadPoolAllocator();
          local_70 = local_60;
          sVar10 = strlen((char *)__s);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_construct<char_const*>((basic_string *)&local_78,__s,__s + sVar10);
          local_50 = iVar7;
          lVar15 = std::
                   _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                   ::
                   _M_emplace<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,int>>
                             ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                               *)(this + 0x40),(basic_string *)&local_78);
          lVar3 = *(long *)(this + 0x90);
          lVar17 = *(long *)(this + 0x88);
          uVar11 = lVar3 - lVar17 >> 3;
          if (uVar11 < (long)iVar7 + 1U) {
            local_a0 = this + 0xa8;
            uVar18 = (ulong)(iVar7 + 100);
            if (uVar11 < uVar18) {
              std::
              vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
              ::_M_fill_insert((vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                                *)(this + 0x80),lVar3,uVar18 - uVar11,&local_a0);
              lVar17 = *(long *)(this + 0x88);
            }
            else if ((uVar18 < uVar11) && (lVar1 = lVar17 + uVar18 * 8, lVar3 != lVar1)) {
              *(long *)(this + 0x90) = lVar1;
            }
          }
          lVar15 = lVar15 + 8;
          *(long *)(lVar17 + (long)iVar7 * 8) = lVar15;
        }
        else {
          uVar11 = 0x811c9dc5;
          if (local_68 != 0) {
            uVar11 = 0x811c9dc5;
            do {
              cVar5 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              uVar11 = (ulong)(((uint)uVar11 ^ (int)cVar5) * 0x1000193);
            } while (pcVar14 != local_70 + local_68);
          }
          puVar12 = (undefined8 *)
                    std::
                    _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                    ::_M_find_before_node
                              ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                                *)(this + 0x40),uVar11 % *(ulong *)(this + 0x50),
                               (basic_string *)&local_78,uVar11);
          if ((puVar12 == (undefined8 *)0x0) ||
             (puVar12 = (undefined8 *)*puVar12, puVar12 == (undefined8 *)0x0)) goto LAB_00105e6e;
LAB_00105c13:
          if (*(int *)(puVar12 + 6) == 0) goto LAB_00105e6e;
          lVar15 = *(long *)(*(long *)(this + 0x88) + (long)*(int *)(puVar12 + 6) * 8);
        }
        __s_00 = *(TPpContext **)(lVar15 + 8);
        lVar15 = *(long *)(*(long *)(this + 0x100) + 0xd8);
        uVar11 = glslang::GetThreadPoolAllocator();
        puVar12 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar11);
        uVar13 = glslang::GetThreadPoolAllocator();
        *puVar12 = uVar13;
        puVar12[1] = puVar12 + 3;
        if (__s_00 == (TPpContext *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_logic_error("basic_string: construction from null is not valid");
        }
        sVar10 = strlen((char *)__s_00);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(puVar12,__s_00,__s_00 + sVar10);
        *(undefined8 **)(lVar15 + 0x40) = puVar12;
        iVar7 = *(int *)(lVar15 + 8) + -1;
        if (*(int *)(lVar15 + 0x20) < iVar7) {
          iVar7 = *(int *)(lVar15 + 0x20);
        }
        *(undefined8 **)(*(long *)(lVar15 + 0x30) + (long)iVar7 * 0x18) = puVar12;
        iVar7 = scanToken(this,param_1);
        bVar4 = iVar7 != 10 && iVar7 != -1;
        if (local_b6 != false) goto LAB_00105a93;
      }
      else {
        iVar7 = eval(this,iVar7,0,false,&local_b0,&local_b6,param_1);
        if (local_b6 != false) {
          bVar4 = iVar7 != -1 && iVar7 != 10;
          goto LAB_00105a93;
        }
        lVar15 = *(long *)(*(long *)(this + 0x100) + 0xd8);
        *(int *)(lVar15 + 0x48) = local_b0;
        lVar3 = *(long *)(lVar15 + 0x30);
        iVar9 = *(int *)(lVar15 + 8) + -1;
        iVar8 = *(int *)(lVar15 + 0x20);
        if (iVar9 <= *(int *)(lVar15 + 0x20)) {
          iVar8 = iVar9;
        }
        *(int *)(lVar3 + 8 + (long)iVar8 * 0x18) = local_b0;
        *(undefined8 *)(lVar15 + 0x40) = 0;
        if (*(int *)(lVar15 + 0x20) < iVar9) {
          iVar9 = *(int *)(lVar15 + 0x20);
        }
        *(undefined8 *)(lVar3 + (long)iVar9 * 0x18) = 0;
        __s_00 = (TPpContext *)0x0;
        bVar4 = iVar7 != 10 && iVar7 != -1;
      }
      uVar16 = 1;
    }
    if (local_b7 == false) {
      plVar2 = *(long **)(this + 0x100);
      if (*(code **)(*plVar2 + 0x1e0) == TParseContextBase::notifyLineDirective) {
        if (plVar2[0x7c] != 0) {
          local_ac = uStack_90._4_4_;
          local_a4 = local_b0;
          local_a8 = iVar6;
          local_b5 = uVar16;
          local_a0 = __s_00;
          (*(code *)plVar2[0x7d])(plVar2 + 0x7a,&local_ac,&local_a8,&local_b5,&local_a4,&local_a0);
        }
      }
      else {
        (**(code **)(*plVar2 + 0x1e0))(plVar2,uStack_90._4_4_,iVar6,uVar16,local_b0,__s_00);
      }
    }
  }
  else {
    bVar4 = iVar7 != 10 && iVar7 != -1;
  }
LAB_00105a93:
  if (bVar4) {
    iVar7 = extraTokenCheck(this,0xab,param_1,iVar7);
  }
LAB_00105aac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::readCPPline(glslang::TPpToken*) */

void __thiscall glslang::TPpContext::readCPPline(TPpContext *this,TPpToken *param_1)

{
  TPpToken *__s;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  char *local_68;
  char *pcStack_60;
  size_t local_58;
  char local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = scanToken(this,param_1);
  if (iVar3 == 0xa2) {
    local_68 = (char *)glslang::GetThreadPoolAllocator();
    __s = param_1 + 0x28;
    pcStack_60 = local_50;
    sVar5 = strlen((char *)__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>((basic_string *)&local_68,__s,__s + sVar5);
    pcVar9 = pcStack_60;
    if (*(long *)(this + 0x60) == 0) {
      for (puVar6 = *(undefined8 **)(this + 0x58); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        if ((local_58 == puVar6[3]) &&
           ((local_58 == 0 || (iVar3 = memcmp(pcVar9,(void *)puVar6[2],local_58), iVar3 == 0))))
        goto LAB_0010612f;
      }
    }
    else {
      uVar8 = 0x811c9dc5;
      if (local_58 != 0) {
        uVar4 = 0x811c9dc5;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
        } while (pcVar9 != pcStack_60 + local_58);
        uVar8 = (ulong)uVar4;
      }
      puVar6 = (undefined8 *)
               std::
               _Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
               ::_M_find_before_node
                         ((_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                           *)(this + 0x40),uVar8 % *(ulong *)(this + 0x50),(basic_string *)&local_68
                          ,uVar8);
      if ((puVar6 != (undefined8 *)0x0) &&
         (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0)) {
LAB_0010612f:
        switch(*(undefined4 *)(puVar6 + 6)) {
        case 0xa3:
          iVar3 = CPPdefine(this,param_1);
          goto LAB_0010606b;
        case 0xa4:
          iVar3 = CPPundef(this,param_1);
          goto LAB_0010606b;
        case 0xa5:
          iVar3 = CPPif(this,param_1);
          goto LAB_0010606b;
        case 0xa6:
          iVar3 = CPPifdef(this,1,param_1);
          goto LAB_0010606b;
        case 0xa7:
          iVar3 = CPPifdef(this,0,param_1);
          goto LAB_0010606b;
        case 0xa8:
          lVar7 = (long)*(int *)(this + 0x180);
          if (this[lVar7 + 0x13c] != (TPpContext)0x0) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_1,"#else after #else","#else",&_LC3);
            lVar7 = (long)*(int *)(this + 0x180);
          }
          iVar3 = *(int *)(this + 0x138);
          this[lVar7 + 0x13c] = (TPpContext)0x1;
          if (iVar3 == 0) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_1,"mismatched statements","#else",&_LC3);
          }
          iVar3 = scanToken(this,param_1);
          if ((iVar3 != 10) && (iVar3 != -1)) {
            extraTokenCheck(this,0xa8,param_1,iVar3);
          }
          break;
        case 0xa9:
          if (*(int *)(this + 0x138) == 0) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_1,"mismatched statements","#elif",&_LC3);
          }
          if (this[(long)*(int *)(this + 0x180) + 0x13c] != (TPpContext)0x0) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_1,"#elif after #else","#elif",&_LC3);
          }
          iVar3 = scanToken(this,param_1);
          if ((iVar3 != -1) && (iVar3 != 10)) {
            do {
              iVar3 = scanToken(this,param_1);
              if (iVar3 == 10) break;
            } while (iVar3 != -1);
          }
          break;
        case 0xaa:
          iVar3 = *(int *)(this + 0x138);
          if (iVar3 == 0) {
            (**(code **)(**(long **)(this + 0x100) + 0x168))
                      (*(long **)(this + 0x100),param_1,"mismatched statements","#endif",&_LC3);
          }
          else {
            iVar2 = *(int *)(this + 0x180);
            this[(long)iVar2 + 0x13c] = (TPpContext)0x0;
            *(int *)(this + 0x138) = iVar3 + -1;
            *(int *)(this + 0x180) = iVar2 + -1;
          }
          iVar3 = scanToken(this,param_1);
          if ((iVar3 != 10) && (iVar3 != -1)) {
            iVar3 = extraTokenCheck(this,0xaa,param_1,iVar3);
            goto LAB_0010606b;
          }
          goto LAB_00106075;
        case 0xab:
          iVar3 = CPPline(this,param_1);
          goto LAB_0010606b;
        case 0xac:
          iVar3 = CPPpragma(this,param_1);
          goto LAB_0010606b;
        case 0xad:
          iVar3 = CPPerror(this,param_1);
          goto LAB_0010606b;
        case 0xae:
          iVar3 = CPPversion(this,param_1);
          goto LAB_0010606b;
        default:
          goto switchD_0010614c_caseD_af;
        case 0xb2:
          iVar3 = CPPextension(this,param_1);
          goto LAB_0010606b;
        case 0xb6:
          local_68 = "GL_GOOGLE_include_directive";
          pcStack_60 = "GL_ARB_shading_language_include";
          (**(code **)(**(long **)(this + 0x100) + 0x30))
                    (*(long **)(this + 0x100),param_1,2,(basic_string *)&local_68,"#include");
          iVar3 = CPPinclude(this,param_1);
          goto LAB_0010606b;
        }
        iVar3 = CPPelse(this,0,param_1);
        goto LAB_0010606b;
      }
    }
switchD_0010614c_caseD_af:
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"invalid directive:",&_LC25,__s);
  }
  else {
    if ((iVar3 == 10) || (iVar3 == -1)) goto LAB_00106075;
    (**(code **)(**(long **)(this + 0x100) + 0x168))
              (*(long **)(this + 0x100),param_1,"invalid directive",&_LC25,&_LC3);
  }
  do {
    iVar3 = scanToken(this,param_1);
LAB_0010606b:
  } while ((iVar3 != 10) && (iVar3 != -1));
LAB_00106075:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TShader::Includer::includeSystem(char const*, char const*, unsigned long) */

undefined8 glslang::TShader::Includer::includeSystem(char *param_1,char *param_2,ulong param_3)

{
  return 0;
}



/* glslang::TShader::Includer::includeLocal(char const*, char const*, unsigned long) */

undefined8 glslang::TShader::Includer::includeLocal(char *param_1,char *param_2,ulong param_3)

{
  return 0;
}



/* glslang::TShader::ForbidIncluder::releaseInclude(glslang::TShader::Includer::IncludeResult*) */

void glslang::TShader::ForbidIncluder::releaseInclude(IncludeResult *param_1)

{
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



/* glslang::TPpContext::tMacroInput::getch() */

undefined8 glslang::TPpContext::tMacroInput::getch(void)

{
  return 0xffffffff;
}



/* glslang::TPpContext::tMacroInput::ungetch() */

void glslang::TPpContext::tMacroInput::ungetch(void)

{
  return;
}



/* glslang::TPpContext::tMacroInput::peekPasting() */

tMacroInput __thiscall glslang::TPpContext::tMacroInput::peekPasting(tMacroInput *this)

{
  return this[0x60];
}



/* glslang::TPpContext::tMacroInput::peekContinuedPasting(int) */

ulong __thiscall
glslang::TPpContext::tMacroInput::peekContinuedPasting(tMacroInput *this,int param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x18);
  uVar5 = (*(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28) >> 3) * 0x6db6db6db6db6db7;
  bVar3 = *(ulong *)(lVar2 + 0x40) < uVar5 && param_1 == 0xa2;
  uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar3);
  if (bVar3) {
    piVar1 = (int *)(*(long *)(lVar2 + 0x28) + *(ulong *)(lVar2 + 0x40) * 0x38);
    uVar5 = 0;
    if ((char)piVar1[1] == '\0') {
      uVar4 = *piVar1 - 0x98;
      return (ulong)CONCAT31((int3)(uVar4 >> 8),uVar4 < 0xb);
    }
  }
  return uVar5;
}



/* glslang::TPpContext::tMacroInput::endOfReplacementList() */

undefined8 __thiscall glslang::TPpContext::tMacroInput::endOfReplacementList(tMacroInput *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x18);
  uVar2 = (*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x28) >> 3) * 0x6db6db6db6db6db7;
  return CONCAT71((int7)(uVar2 >> 8),uVar2 <= *(ulong *)(lVar1 + 0x40));
}



/* glslang::TPpContext::tMacroInput::isMacroInput() */

undefined8 glslang::TPpContext::tMacroInput::isMacroInput(void)

{
  return 1;
}



/* glslang::TPpContext::tMarkerInput::scan(glslang::TPpToken*) */

undefined8 glslang::TPpContext::tMarkerInput::scan(TPpToken *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1[8] == (TPpToken)0x0) {
    param_1[8] = (TPpToken)0x1;
    uVar1 = 0xfffffffd;
  }
  return uVar1;
}



/* glslang::TPpContext::tMarkerInput::getch() */

undefined8 glslang::TPpContext::tMarkerInput::getch(void)

{
  return 0xffffffff;
}



/* glslang::TPpContext::tMarkerInput::ungetch() */

void glslang::TPpContext::tMarkerInput::ungetch(void)

{
  return;
}



/* glslang::TPpContext::tZeroInput::getch() */

undefined8 glslang::TPpContext::tZeroInput::getch(void)

{
  return 0xffffffff;
}



/* glslang::TPpContext::tZeroInput::ungetch() */

void glslang::TPpContext::tZeroInput::ungetch(void)

{
  return;
}



/* glslang::TPpContext::tZeroInput::~tZeroInput() */

void __thiscall glslang::TPpContext::tZeroInput::~tZeroInput(tZeroInput *this)

{
  return;
}



/* glslang::TPpContext::tMarkerInput::~tMarkerInput() */

void __thiscall glslang::TPpContext::tMarkerInput::~tMarkerInput(tMarkerInput *this)

{
  return;
}



/* glslang::TPpContext::TokenizableIncludeFile::scan(glslang::TPpToken*) */

void glslang::TPpContext::TokenizableIncludeFile::scan(TPpToken *param_1)

{
  glslang::TPpContext::tStringInput::scan(param_1 + 0xf8);
  return;
}



/* glslang::TPpContext::tZeroInput::~tZeroInput() */

void __thiscall glslang::TPpContext::tZeroInput::~tZeroInput(tZeroInput *this)

{
  operator_delete(this,0x18);
  return;
}



/* glslang::TPpContext::tMarkerInput::~tMarkerInput() */

void __thiscall glslang::TPpContext::tMarkerInput::~tMarkerInput(tMarkerInput *this)

{
  operator_delete(this,0x18);
  return;
}



/* glslang::TInputScanner::~TInputScanner() */

void __thiscall glslang::TInputScanner::~TInputScanner(TInputScanner *this)

{
  *(undefined ***)this = &PTR__TInputScanner_0010aab8;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    return;
  }
  return;
}



/* glslang::TInputScanner::~TInputScanner() */

void __thiscall glslang::TInputScanner::~TInputScanner(TInputScanner *this)

{
  *(undefined ***)this = &PTR__TInputScanner_0010aab8;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  operator_delete(this,0x60);
  return;
}



/* glslang::TParseContextBase::notifyVersion(int, int, char const*) */

void __thiscall
glslang::TParseContextBase::notifyVersion
          (TParseContextBase *this,int param_1,int param_2,char *param_3)

{
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x420) != 0) {
    local_20 = param_1;
    local_1c = param_2;
    local_18 = param_3;
    (**(code **)(this + 0x428))(this + 0x410,&local_20,&local_1c,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TParseContextBase::notifyErrorDirective(int, char const*) */

void __thiscall
glslang::TParseContextBase::notifyErrorDirective(TParseContextBase *this,int param_1,char *param_2)

{
  long in_FS_OFFSET;
  int local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x460) != 0) {
    local_1c = param_1;
    local_18 = param_2;
    (**(code **)(this + 0x468))(this + 0x450,&local_1c,&local_18,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TParseContextBase::notifyLineDirective(int, int, bool, int, char const*) */

void __thiscall
glslang::TParseContextBase::notifyLineDirective
          (TParseContextBase *this,int param_1,int param_2,bool param_3,int param_4,char *param_5)

{
  long in_FS_OFFSET;
  undefined1 local_25;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x3e0) != 0) {
    local_25 = param_3;
    local_24 = param_1;
    local_20 = param_2;
    local_1c = param_4;
    local_18 = param_5;
    (**(code **)(this + 1000))(this + 0x3d0,&local_24,&local_20,&local_25,&local_1c,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TParseContextBase::notifyExtensionDirective(int, char const*, char const*) */

void __thiscall
glslang::TParseContextBase::notifyExtensionDirective
          (TParseContextBase *this,int param_1,char *param_2,char *param_3)

{
  long in_FS_OFFSET;
  int local_24;
  char *local_20;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x440) != 0) {
    local_24 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    (**(code **)(this + 0x448))(this + 0x430,&local_24,&local_20,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Rb_tree<int, std::pair<int const, glslang::TPpContext::MacroSymbol>,
   std::_Select1st<std::pair<int const, glslang::TPpContext::MacroSymbol> >, std::less<int>,
   glslang::pool_allocator<std::pair<int const, glslang::TPpContext::MacroSymbol> >
   >::_M_get_insert_unique_pos(int const&) [clone .isra.0] */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
::_M_get_insert_unique_pos
          (_Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
           *this,int *param_1)

{
  undefined1 auVar1 [16];
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar6 = (int)param_1;
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x18);
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var2 = (_Rb_tree_node_base *)(this + 0x10);
  }
  else {
    do {
      p_Var4 = p_Var2;
      iVar5 = *(int *)(p_Var4 + 0x20);
      p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x18);
      if (iVar6 < iVar5) {
        p_Var2 = *(_Rb_tree_node_base **)(p_Var4 + 0x10);
      }
    } while (p_Var2 != (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var4;
    if (iVar5 <= iVar6) goto LAB_00106958;
  }
  if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = p_Var2;
    return auVar1 << 0x40;
  }
  p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var2);
  iVar5 = *(int *)(p_Var4 + 0x20);
LAB_00106958:
  p_Var3 = (_Rb_tree_node_base *)0x0;
  if (iVar5 < iVar6) {
    p_Var4 = p_Var3;
    p_Var3 = p_Var2;
  }
  auVar7._8_8_ = p_Var3;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}



/* glslang::TPpContext::TokenizableIncludeFile::notifyDeleted() */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::notifyDeleted(TokenizableIncludeFile *this)

{
  long lVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar2 = *(void **)(lVar1 + 0x208);
  *(undefined8 *)(*(long *)(lVar1 + 0x100) + 0xd8) = *(undefined8 *)(this + 0xf0);
  if (pvVar2 == *(void **)(lVar1 + 0x210)) {
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x220) + -8) + 0x1f8);
    operator_delete(pvVar2,0x200);
    lVar4 = *(long *)(*(long *)(lVar1 + 0x220) + -8);
    *(long *)(lVar1 + 0x220) = *(long *)(lVar1 + 0x220) + -8;
    *(long *)(lVar1 + 0x210) = lVar4;
    *(long *)(lVar1 + 0x218) = lVar4 + 0x200;
    *(long *)(lVar1 + 0x208) = lVar4 + 0x1f8;
  }
  else {
    uVar5 = *(undefined8 *)((long)pvVar2 + -8);
    *(long *)(lVar1 + 0x208) = (long)pvVar2 + -8;
  }
  pcVar3 = *(code **)(**(long **)(lVar1 + 0x1a8) + 0x10);
  if (pcVar3 != TShader::ForbidIncluder::releaseInclude) {
    (*pcVar3)(*(long **)(lVar1 + 0x1a8),uVar5);
  }
  std::__cxx11::string::_M_assign((string *)(lVar1 + 0x228));
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
      goto LAB_00106b14;
    }
    if (__n == 0) goto LAB_00106b14;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00106b14:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TPpContext::tMacroInput::~tMacroInput() */

void __thiscall glslang::TPpContext::tMacroInput::~tMacroInput(tMacroInput *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__tMacroInput_0010abb8;
  lVar2 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x30) != lVar2) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(lVar2 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,0x28);
        lVar2 = *(long *)(this + 0x28);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x30) - lVar2 >> 3));
  }
  lVar2 = *(long *)(this + 0x48);
  if (*(long *)(this + 0x50) != lVar2) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(lVar2 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,0x28);
        lVar2 = *(long *)(this + 0x48);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x50) - lVar2 >> 3));
  }
  return;
}



/* glslang::TPpContext::TokenizableIncludeFile::notifyActivated() */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::notifyActivated(TokenizableIncludeFile *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  size_t sVar6;
  long *__src;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar11;
  
  lVar1 = *(long *)(this + 0x10);
  uVar2 = *(undefined8 *)(this + 0x58);
  lVar10 = *(long *)(lVar1 + 0x100);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(lVar10 + 0xd8);
  *(TokenizableIncludeFile **)(lVar10 + 0xd8) = this + 0x90;
  std::__cxx11::string::_M_assign((string *)(lVar1 + 0x228));
  puVar4 = *(undefined8 **)(lVar1 + 0x208);
  if (puVar4 != (undefined8 *)(*(long *)(lVar1 + 0x218) + -8)) {
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
    goto LAB_00106cba;
  }
  plVar8 = *(long **)(lVar1 + 0x220);
  __src = *(long **)(lVar1 + 0x200);
  lVar10 = (long)plVar8 - (long)__src;
  if (((long)puVar4 - *(long *)(lVar1 + 0x210) >> 3) +
      ((lVar10 >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 0x40 +
      (*(long *)(lVar1 + 0x1f8) - *(long *)(lVar1 + 0x1e8) >> 3) == 0xfffffffffffffff) {
LAB_00106f34:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar7 = *(ulong *)(lVar1 + 0x1e0);
  if (uVar7 - ((long)plVar8 - *(long *)(lVar1 + 0x1d8) >> 3) < 2) {
    __dest = (long *)((lVar10 >> 3) + 2);
    if ((ulong)((long)__dest * 2) < uVar7) {
      __dest = (long *)(*(long *)(lVar1 + 0x1d8) + (uVar7 - (long)__dest >> 1) * 8);
      sVar6 = (long)plVar8 + (8 - (long)__src);
      if (__dest < __src) {
        if ((long)sVar6 < 9) {
          if (sVar6 == 8) {
            *__dest = *__src;
          }
        }
        else {
          memmove(__dest,__src,sVar6);
        }
      }
      else if ((long)sVar6 < 9) {
        if (sVar6 == 8) {
          *(long *)((long)__dest + lVar10) = *__src;
        }
      }
      else {
        memmove((void *)((long)__dest + ((lVar10 + 8) - sVar6)),__src,sVar6);
      }
    }
    else {
      if (uVar7 == 0) {
        uVar7 = 0x18;
        uVar9 = 3;
LAB_00106dd7:
        unaff_R15 = operator_new(uVar7);
        __src = *(long **)(lVar1 + 0x200);
        __dest = (long *)((long)unaff_R15 + (uVar9 - (long)__dest >> 1) * 8);
        sVar6 = (*(long *)(lVar1 + 0x220) + 8) - (long)__src;
        uVar11 = sVar6 == 8;
        if ((long)sVar6 < 9) goto LAB_00106efb;
        memmove(__dest,__src,sVar6);
      }
      else {
        uVar9 = (uVar7 + 1) * 2;
        if (uVar9 < 0x1000000000000000) {
          uVar7 = (uVar7 + 1) * 0x10;
          goto LAB_00106dd7;
        }
        uVar9 = uVar9 >> 0x3d;
        uVar11 = uVar9 == 0;
        if ((bool)uVar11) {
          std::__throw_bad_alloc();
          goto LAB_00106f34;
        }
        std::__throw_bad_array_new_length();
LAB_00106efb:
        if ((bool)uVar11) {
          *__dest = *__src;
        }
      }
      operator_delete(*(void **)(lVar1 + 0x1d8),*(long *)(lVar1 + 0x1e0) * 8);
      *(void **)(lVar1 + 0x1d8) = unaff_R15;
      *(ulong *)(lVar1 + 0x1e0) = uVar9;
    }
    lVar3 = *__dest;
    plVar8 = (long *)((long)__dest + lVar10);
    *(long **)(lVar1 + 0x200) = __dest;
    *(long **)(lVar1 + 0x220) = plVar8;
    *(long *)(lVar1 + 0x1f0) = lVar3;
    *(long *)(lVar1 + 0x1f8) = lVar3 + 0x200;
    lVar10 = *plVar8;
    *(long *)(lVar1 + 0x210) = lVar10;
    *(long *)(lVar1 + 0x218) = lVar10 + 0x200;
  }
  pvVar5 = operator_new(0x200);
  plVar8[1] = (long)pvVar5;
  **(undefined8 **)(lVar1 + 0x208) = uVar2;
  puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x220) + 8);
  *(long *)(lVar1 + 0x220) = *(long *)(lVar1 + 0x220) + 8;
  *(undefined8 **)(lVar1 + 0x210) = puVar4;
  *(undefined8 **)(lVar1 + 0x218) = puVar4 + 0x40;
LAB_00106cba:
  *(undefined8 **)(lVar1 + 0x208) = puVar4;
  return;
}



/* glslang::TPpContext::tMacroInput::~tMacroInput() */

void __thiscall glslang::TPpContext::tMacroInput::~tMacroInput(tMacroInput *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__tMacroInput_0010abb8;
  lVar2 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x30) != lVar2) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(lVar2 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,0x28);
        lVar2 = *(long *)(this + 0x28);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x30) - lVar2 >> 3));
  }
  lVar2 = *(long *)(this + 0x48);
  if (*(long *)(this + 0x50) != lVar2) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(lVar2 + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1,0x28);
        lVar2 = *(long *)(this + 0x48);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x50) - lVar2 >> 3));
  }
  operator_delete(this,0x68);
  return;
}



/* glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile() */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile(TokenizableIncludeFile *this)

{
  *(undefined ***)this = &PTR__TokenizableIncludeFile_0010ab48;
  *(undefined ***)(this + 0x90) = &PTR__TInputScanner_0010aab8;
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc0));
  }
  if (*(TokenizableIncludeFile **)(this + 0x38) != this + 0x48) {
    operator_delete(*(TokenizableIncludeFile **)(this + 0x38),*(long *)(this + 0x48) + 1);
  }
  if (*(TokenizableIncludeFile **)(this + 0x18) != this + 0x28) {
    operator_delete(*(TokenizableIncludeFile **)(this + 0x18),*(long *)(this + 0x28) + 1);
    return;
  }
  return;
}



/* glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile() */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile(TokenizableIncludeFile *this)

{
  *(undefined ***)this = &PTR__TokenizableIncludeFile_0010ab48;
  *(undefined ***)(this + 0x90) = &PTR__TInputScanner_0010aab8;
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc0));
  }
  if (*(TokenizableIncludeFile **)(this + 0x38) != this + 0x48) {
    operator_delete(*(TokenizableIncludeFile **)(this + 0x38),*(long *)(this + 0x48) + 1);
  }
  if (*(TokenizableIncludeFile **)(this + 0x18) != this + 0x28) {
    operator_delete(*(TokenizableIncludeFile **)(this + 0x18),*(long *)(this + 0x28) + 1);
  }
  operator_delete(this,0x118);
  return;
}



/* glslang::TInputScanner::get() */

uint __thiscall glslang::TInputScanner::get(TInputScanner *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  iVar2 = *(int *)(this + 8);
  iVar7 = *(int *)(this + 0x20);
  if (iVar7 < iVar2) {
    lVar10 = (long)iVar7;
    uVar11 = *(ulong *)(this + 0x28);
    lVar4 = *(long *)(this + 0x18);
    lVar6 = lVar10 * 8;
    uVar8 = uVar11;
    do {
      if (uVar8 < *(ulong *)(lVar4 + lVar6)) {
        lVar5 = *(long *)(this + 0x30);
        bVar1 = *(byte *)(*(long *)(*(long *)(this + 0x10) + lVar6) + uVar8);
        lVar6 = lVar5 + lVar10 * 0x18;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
        uVar9 = (uint)bVar1;
        if (uVar9 == 10) {
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          *(undefined4 *)(this + 0x50) = 0;
          *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
          *(undefined4 *)(lVar6 + 0x10) = 0;
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(this + 0x28) = uVar11;
        if (uVar11 < *(ulong *)(lVar4 + lVar10 * 8)) {
          return uVar9;
        }
        iVar7 = iVar7 + 1;
        *(int *)(this + 0x20) = iVar7;
        if (iVar7 < iVar2) {
          iVar3 = *(int *)(lVar6 + 8);
          lVar6 = lVar5 + 0x18 + lVar10 * 0x18;
          *(undefined8 *)(lVar6 + 0xc) = 1;
          *(int *)(lVar6 + 8) = iVar3 + 1;
        }
        lVar6 = (long)iVar7;
        goto LAB_00107451;
      }
      lVar6 = lVar6 + 8;
      uVar8 = 0;
    } while (lVar6 != ((ulong)(uint)(iVar2 - iVar7) + lVar10) * 8);
  }
  else {
    this[0x59] = (TInputScanner)0x1;
  }
  return 0xffffffff;
LAB_00107451:
  if ((iVar2 <= iVar7) || (*(long *)(lVar4 + lVar6 * 8) != 0)) {
LAB_0010746c:
    *(undefined8 *)(this + 0x28) = 0;
    return uVar9;
  }
  iVar7 = (int)lVar6 + 1;
  *(int *)(this + 0x20) = iVar7;
  if (iVar2 <= (int)lVar6 + 1) goto LAB_0010746c;
  lVar6 = (long)iVar7;
  lVar10 = lVar5 + lVar6 * 0x18;
  iVar3 = *(int *)(lVar5 + -0x10 + lVar6 * 0x18);
  *(undefined8 *)(lVar10 + 0xc) = 1;
  *(int *)(lVar10 + 8) = iVar3 + 1;
  goto LAB_00107451;
}



/* glslang::TInputScanner::unget() */

void __thiscall glslang::TInputScanner::unget(TInputScanner *this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  if (this[0x59] == (TInputScanner)0x0) {
    iVar2 = *(int *)(this + 0x20);
    if (*(long *)(this + 0x28) == 0) {
      lVar3 = (long)(iVar2 + -1);
      do {
        lVar7 = *(long *)(*(long *)(this + 0x18) + lVar3 * 8);
        iVar2 = (int)lVar3;
        if (iVar2 < 1) {
          *(int *)(this + 0x20) = iVar2;
          if (lVar7 != 0) goto LAB_00107613;
          *(undefined8 *)(this + 0x28) = 0;
          goto LAB_0010753d;
        }
        lVar3 = lVar3 + -1;
      } while (lVar7 == 0);
      *(int *)(this + 0x20) = iVar2;
LAB_00107613:
      *(long *)(this + 0x28) = lVar7 + -1;
      iVar2 = *(int *)(this + 0x20);
    }
    else {
      lVar3 = *(long *)(this + 0x28) + -1;
      *(long *)(this + 0x28) = lVar3;
      lVar7 = *(long *)(this + 0x30) + (long)iVar2 * 0x18;
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + -1;
      if (*(int *)(lVar7 + 0x10) < 0) {
        if (lVar3 != 0) {
          lVar4 = lVar3;
          do {
            if (*(char *)(*(long *)(*(long *)(this + 0x10) + (long)iVar2 * 8) + lVar4) == '\n')
            goto LAB_001075fd;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        lVar4 = 0;
LAB_001075fd:
        iVar5 = (int)lVar3 - (int)lVar4;
        *(int *)(this + 0x50) = iVar5;
        *(int *)(lVar7 + 0x10) = iVar5;
      }
    }
LAB_0010753d:
    if (*(int *)(this + 8) <= iVar2) {
      this[0x59] = (TInputScanner)0x1;
      return;
    }
    lVar7 = (long)iVar2;
    uVar6 = *(ulong *)(this + 0x28);
    lVar3 = lVar7 * 8;
    do {
      if (uVar6 < *(ulong *)(*(long *)(this + 0x18) + lVar3)) {
        if (*(char *)(*(long *)(*(long *)(this + 0x10) + lVar3) + uVar6) != '\n') {
          return;
        }
        piVar1 = (int *)(*(long *)(this + 0x30) + 0xc + lVar7 * 0x18);
        *piVar1 = *piVar1 + -1;
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        return;
      }
      lVar3 = lVar3 + 8;
      uVar6 = 0;
    } while (((ulong)(uint)(*(int *)(this + 8) - iVar2) + lVar7) * 8 != lVar3);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107785) */
/* glslang::TPpContext::TokenizableIncludeFile::ungetch() */

void __thiscall glslang::TPpContext::TokenizableIncludeFile::ungetch(TokenizableIncludeFile *this)

{
  char cVar1;
  int iVar2;
  TInputScanner *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  this_00 = *(TInputScanner **)(this + 0x110);
  TInputScanner::unget(this_00);
  iVar2 = *(int *)(this_00 + 0x20);
  iVar6 = *(int *)(this_00 + 8);
  if (iVar2 < iVar6) {
    lVar3 = *(long *)(this_00 + 0x18);
    do {
      lVar5 = (long)iVar2;
      uVar7 = *(ulong *)(this_00 + 0x28);
      while (*(ulong *)(lVar3 + lVar5 * 8) <= uVar7) {
        lVar5 = lVar5 + 1;
        uVar7 = 0;
        if (iVar6 <= (int)lVar5) {
          return;
        }
      }
      lVar4 = *(long *)(this_00 + 0x10);
      cVar1 = *(char *)(*(long *)(lVar4 + lVar5 * 8) + uVar7);
      if (cVar1 != '\r') {
        if (cVar1 != '\n') {
          return;
        }
        TInputScanner::unget(this_00);
        iVar6 = *(int *)(this_00 + 0x20);
        if (iVar6 < *(int *)(this_00 + 8)) {
          uVar7 = *(ulong *)(this_00 + 0x28);
          lVar5 = (long)iVar6 * 8;
          do {
            if (uVar7 < *(ulong *)(lVar3 + lVar5)) {
              if (*(char *)(*(long *)(lVar4 + lVar5) + uVar7) == '\r') goto LAB_00107710;
              break;
            }
            lVar5 = lVar5 + 8;
            uVar7 = 0;
          } while (((ulong)(uint)(*(int *)(this_00 + 8) - iVar6) + (long)iVar6) * 8 != lVar5);
        }
        else {
          this_00[0x59] = (TInputScanner)0x1;
        }
        TInputScanner::get(this_00);
      }
LAB_00107710:
      TInputScanner::unget(this_00);
      iVar6 = *(int *)(this_00 + 0x20);
      if (*(int *)(this_00 + 8) <= iVar6) {
        this_00[0x59] = (TInputScanner)0x1;
LAB_001077a1:
        TInputScanner::get(this_00);
        return;
      }
      uVar7 = *(ulong *)(this_00 + 0x28);
      lVar5 = (long)iVar6 * 8;
      while (*(ulong *)(lVar3 + lVar5) <= uVar7) {
        lVar5 = lVar5 + 8;
        uVar7 = 0;
        if (((ulong)(uint)(*(int *)(this_00 + 8) - iVar6) + (long)iVar6) * 8 == lVar5)
        goto LAB_001077a1;
      }
      if (*(char *)(*(long *)(lVar4 + lVar5) + uVar7) != '\\') goto LAB_001077a1;
      TInputScanner::unget(this_00);
      iVar2 = *(int *)(this_00 + 0x20);
      iVar6 = *(int *)(this_00 + 8);
    } while (iVar2 < iVar6);
  }
  this_00[0x59] = (TInputScanner)0x1;
  return;
}



/* glslang::TPpContext::tStringInput::getch() */

int __thiscall glslang::TPpContext::tStringInput::getch(tStringInput *this)

{
  TInputScanner *pTVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  TInputScanner *pTVar9;
  long lVar10;
  int iVar11;
  
  pTVar1 = *(TInputScanner **)(this + 0x18);
  iVar4 = TInputScanner::get(pTVar1);
  do {
    if (iVar4 != 0x5c) {
      if (iVar4 == 0xd) {
        pTVar1 = *(TInputScanner **)(this + 0x18);
        iVar4 = *(int *)(pTVar1 + 0x20);
        if (iVar4 < *(int *)(pTVar1 + 8)) {
          uVar8 = *(ulong *)(pTVar1 + 0x28);
          lVar6 = (long)iVar4 * 8;
          do {
            if (uVar8 < *(ulong *)(*(long *)(pTVar1 + 0x18) + lVar6)) {
              if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar6) + uVar8) != '\n') {
                return 10;
              }
              TInputScanner::get(pTVar1);
              return 10;
            }
            lVar6 = lVar6 + 8;
            uVar8 = 0;
          } while (((ulong)(uint)(*(int *)(pTVar1 + 8) - iVar4) + (long)iVar4) * 8 != lVar6);
        }
        else {
          pTVar1[0x59] = (TInputScanner)0x1;
        }
      }
      else if (iVar4 != 10) {
        return iVar4;
      }
      return 10;
    }
    iVar4 = *(int *)(pTVar1 + 0x20);
    iVar11 = *(int *)(pTVar1 + 8);
    if (iVar11 <= iVar4) {
      pTVar1[0x59] = (TInputScanner)0x1;
      return 0x5c;
    }
    uVar8 = *(ulong *)(pTVar1 + 0x28);
    lVar6 = (long)iVar4 * 8;
    lVar10 = ((ulong)(uint)(iVar11 - iVar4) + (long)iVar4) * 8;
    lVar5 = lVar6;
    uVar7 = uVar8;
    do {
      if (uVar7 < *(ulong *)(*(long *)(pTVar1 + 0x18) + lVar5)) {
        if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar5) + uVar7) == '\r')
        goto LAB_00107813;
        break;
      }
      lVar5 = lVar5 + 8;
      uVar7 = 0;
    } while (lVar5 != lVar10);
    while (*(ulong *)(*(long *)(pTVar1 + 0x18) + lVar6) <= uVar8) {
      lVar6 = lVar6 + 8;
      uVar8 = 0;
      if (lVar10 == lVar6) {
        return 0x5c;
      }
    }
    if (*(char *)(*(long *)(*(long *)(pTVar1 + 0x10) + lVar6) + uVar8) != '\n') {
      return 0x5c;
    }
LAB_00107813:
    pTVar9 = pTVar1 + 0x40;
    plVar2 = *(long **)(*(long *)(this + 0x10) + 0x100);
    if (pTVar1[0x58] == (TInputScanner)0x0) {
      pTVar9 = *(TInputScanner **)(pTVar1 + 0x30);
      iVar11 = (iVar11 - *(int *)(pTVar1 + 0x3c)) + -1;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
      if (0 < iVar11) {
        pTVar9 = pTVar9 + (long)iVar11 * 0x18;
      }
    }
    cVar3 = (**(code **)(*plVar2 + 0x1b0))
                      (plVar2,pTVar9,*(undefined1 *)(*(long *)(this + 0x10) + 0x1b0));
    if ((cVar3 == '\0') && (*(char *)(*(long *)(this + 0x10) + 0x1b0) != '\0')) {
      return 0x5c;
    }
    pTVar1 = *(TInputScanner **)(this + 0x18);
    iVar11 = TInputScanner::get(pTVar1);
    iVar4 = TInputScanner::get(pTVar1);
    if ((iVar11 == 0xd) && (iVar4 == 10)) {
      iVar4 = TInputScanner::get(pTVar1);
    }
  } while( true );
}



/* glslang::TPpContext::TokenizableIncludeFile::getch() */

void __thiscall glslang::TPpContext::TokenizableIncludeFile::getch(TokenizableIncludeFile *this)

{
  tStringInput::getch((tStringInput *)(this + 0xf8));
  return;
}



/* glslang::TPpContext::TokenizableIncludeFile::TokenizableIncludeFile(glslang::TSourceLoc const&,
   std::__cxx11::string const&, glslang::TShader::Includer::IncludeResult*, std::__cxx11::string
   const&, glslang::TPpContext*) */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::TokenizableIncludeFile
          (TokenizableIncludeFile *this,TSourceLoc *param_1,string *param_2,IncludeResult *param_3,
          string *param_4,TPpContext *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  
  *(undefined ***)this = &PTR__TokenizableIncludeFile_0010ab48;
  *(TPpContext **)(this + 0x10) = param_5;
  this[8] = (TokenizableIncludeFile)0x0;
  *(TokenizableIncludeFile **)(this + 0x18) = this + 0x28;
  std::__cxx11::string::_M_construct<char*>
            (this + 0x18,*(long *)param_2,*(long *)(param_2 + 8) + *(long *)param_2);
  lVar2 = *(long *)(param_4 + 8);
  *(TokenizableIncludeFile **)(this + 0x38) = this + 0x48;
  std::__cxx11::string::_M_construct<char*>(this + 0x38,*(long *)param_4,lVar2 + *(long *)param_4);
  *(IncludeResult **)(this + 0x58) = param_3;
  *(undefined ***)(this + 0x90) = &PTR__TInputScanner_0010aab8;
  *(TokenizableIncludeFile **)(this + 0xa0) = this + 0x60;
  *(TokenizableIncludeFile **)(this + 0xa8) = this + 0x78;
  *(undefined4 *)(this + 0x98) = 3;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined2 *)(this + 0xe8) = 1;
  puVar4 = (undefined8 *)operator_new__(0x48);
  iVar3 = *(int *)(this + 0x98);
  *(undefined8 **)(this + 0xc0) = puVar4;
  if (0 < iVar3) {
    iVar1 = *(int *)(this + 200);
    iVar9 = -iVar1;
    puVar5 = puVar4;
    do {
      *(int *)(puVar5 + 1) = iVar9;
      iVar9 = iVar9 + 1;
      *puVar5 = 0;
      *(undefined4 *)((long)puVar5 + 0xc) = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5 = puVar5 + 3;
    } while (iVar3 - iVar1 != iVar9);
  }
  iVar1 = *(int *)(this + 0xb0);
  *(undefined8 *)(this + 0xd8) = 1;
  *(code **)(this + 0xf8) = strlen;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)((long)puVar4 + (long)iVar1 * 0x18 + 0xc) = 1;
  iVar9 = iVar3 + -1;
  if (iVar1 < iVar3 + -1) {
    iVar9 = iVar1;
  }
  this[0x100] = (TokenizableIncludeFile)0x0;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x18);
  *(TPpContext **)(this + 0x108) = param_5;
  uVar7 = *(undefined8 *)(*(long *)(this + 0x58) + 0x20);
  *(undefined8 *)(this + 0xf0) = 0;
  *(TokenizableIncludeFile **)(this + 0x110) = this + 0x90;
  *(undefined8 *)(this + 0x68) = uVar7;
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x20);
  uVar7 = *(undefined8 *)(*(long *)(this + 0x58) + 0x28);
  puVar4[(long)iVar9 * 3] = 0;
  *(undefined8 *)(this + 0x80) = uVar7;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 8);
  (puVar4 + (long)iVar9 * 3)[1] = uVar7;
  lVar2 = *(long *)param_1;
  *(undefined8 *)(this + 0xd8) = uVar7;
  if (lVar2 == 0) {
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    pcVar10 = "";
    *puVar4 = uVar7;
    pcVar11 = "";
    puVar4[1] = puVar4 + 3;
  }
  else {
    pcVar11 = *(char **)(lVar2 + 8);
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    *puVar4 = uVar7;
    puVar4[1] = puVar4 + 3;
    if (pcVar11 == (char *)0x0) goto LAB_00107e37;
    sVar8 = strlen(pcVar11);
    pcVar10 = pcVar11 + sVar8;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(puVar4,pcVar11,pcVar10);
  iVar3 = *(int *)(this + 0x98) + -1;
  if (*(int *)(this + 0xb0) < *(int *)(this + 0x98) + -1) {
    iVar3 = *(int *)(this + 0xb0);
  }
  if (iVar3 == 0) {
    *(undefined8 **)(this + 0xd0) = puVar4;
  }
  **(long **)(this + 0xc0) = (long)puVar4;
  if (*(long *)param_1 == 0) {
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    pcVar10 = "";
    *puVar4 = uVar7;
    pcVar11 = "";
    puVar4[1] = puVar4 + 3;
  }
  else {
    pcVar11 = *(char **)(*(long *)param_1 + 8);
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    *puVar4 = uVar7;
    puVar4[1] = puVar4 + 3;
    if (pcVar11 == (char *)0x0) goto LAB_00107e37;
    sVar8 = strlen(pcVar11);
    pcVar10 = pcVar11 + sVar8;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(puVar4,pcVar11,pcVar10);
  iVar3 = *(int *)(this + 0x98) + -1;
  if (*(int *)(this + 0xb0) < *(int *)(this + 0x98) + -1) {
    iVar3 = *(int *)(this + 0xb0);
  }
  if (iVar3 == 1) {
    *(undefined8 **)(this + 0xd0) = puVar4;
  }
  *(undefined8 **)(*(long *)(this + 0xc0) + 0x18) = puVar4;
  if (*(long *)param_1 == 0) {
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    pcVar10 = "";
    *puVar4 = uVar7;
    pcVar11 = "";
    puVar4[1] = puVar4 + 3;
  }
  else {
    pcVar11 = *(char **)(*(long *)param_1 + 8);
    uVar6 = glslang::GetThreadPoolAllocator();
    puVar4 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar6);
    uVar7 = glslang::GetThreadPoolAllocator();
    *puVar4 = uVar7;
    puVar4[1] = puVar4 + 3;
    if (pcVar11 == (char *)0x0) {
LAB_00107e37:
                    /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
    }
    sVar8 = strlen(pcVar11);
    pcVar10 = pcVar11 + sVar8;
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(puVar4,pcVar11,pcVar10);
  iVar3 = *(int *)(this + 0x98) + -1;
  if (*(int *)(this + 0xb0) < *(int *)(this + 0x98) + -1) {
    iVar3 = *(int *)(this + 0xb0);
  }
  if (iVar3 == 2) {
    *(undefined8 **)(this + 0xd0) = puVar4;
  }
  *(undefined8 **)(*(long *)(this + 0xc0) + 0x30) = puVar4;
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_append(char const*, unsigned long) */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar3;
  
  __n = *(size_t *)(this + 0x10);
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = param_2 + __n;
  if (__dest == this + 0x18) {
    uVar2 = 0xf;
    if (0xf < uVar1) goto LAB_00107ee0;
  }
  else {
    uVar2 = *(ulong *)(this + 0x18);
    if (uVar2 < uVar1) {
LAB_00107ee0:
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::_M_create");
      }
      uVar2 = uVar2 * 2;
      uVar3 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
        uVar3 = uVar2;
      }
      if (uVar2 <= uVar1) {
        uVar3 = uVar1;
      }
      __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               glslang::TPoolAllocator::allocate(*(ulong *)this);
      if (__n != 0) {
        if (__n == 1) {
          *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                      (this + 8);
        }
        else {
          memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **
                         )(this + 8),__n);
        }
      }
      if ((param_1 != (char *)0x0) && (param_2 != 0)) {
        if (param_2 == 1) {
          __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)
                        *param_1;
        }
        else {
          memcpy(__dest + __n,param_1,param_2);
        }
      }
      *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) =
           __dest;
      *(ulong *)(this + 0x18) = uVar3;
      goto LAB_00107eac;
    }
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)
                    *param_1;
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    else {
      memcpy(__dest + __n,param_1,param_2);
      __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
  }
LAB_00107eac:
  *(ulong *)(this + 0x10) = uVar1;
  __dest[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TSourceLoc::getStringNameOrNum[abi:cxx11](bool) const */

ulong * glslang::TSourceLoc::getStringNameOrNum_abi_cxx11_(bool param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  char *pcVar7;
  char in_DL;
  uint uVar8;
  ulong uVar9;
  ulong **ppuVar10;
  long lVar11;
  char cVar12;
  long *in_RSI;
  undefined7 in_register_00000039;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong *local_180;
  ulong local_178;
  ulong *local_170;
  undefined8 local_168;
  ulong local_160 [3];
  ulong **local_148;
  undefined8 local_140;
  ulong *local_138;
  ulong local_130 [3];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  char acStack_57 [23];
  long local_40;
  
  puVar13 = (ulong *)CONCAT71(in_register_00000039,param_1);
  lVar11 = *in_RSI;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar11 != 0) {
    if (in_DL == '\0') {
      local_178 = glslang::GetThreadPoolAllocator();
      local_170 = local_160;
      puVar1 = *(undefined1 **)(lVar11 + 8);
      uVar14 = *(ulong *)(lVar11 + 0x10);
      if (uVar14 < 0x10) {
        if (uVar14 == 1) {
          local_160[0] = CONCAT71(local_160[0]._1_7_,*puVar1);
        }
        else if (uVar14 != 0) goto LAB_00108542;
      }
      else {
        if ((long)uVar14 < 0) goto LAB_0010880d;
        local_170 = (ulong *)glslang::TPoolAllocator::allocate(local_178);
        local_160[0] = uVar14;
LAB_00108542:
        memcpy(local_170,puVar1,uVar14);
      }
      *(undefined1 *)((long)local_170 + uVar14) = 0;
      local_168 = uVar14;
    }
    else {
      uVar15 = *(ulong *)(lVar11 + 0x10);
      pcVar7 = *(char **)(lVar11 + 8);
      local_148 = (ulong **)glslang::GetThreadPoolAllocator();
      local_130[0] = local_130[0] & 0xffffffffffffff00;
      local_140 = local_130;
      uVar14 = uVar15 + 1;
      local_138 = (ulong *)0x0;
      puVar4 = local_140;
      uVar9 = local_130[0];
      if (0xf < uVar14) {
        if ((long)uVar14 < 0) {
LAB_0010880d:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::_M_create");
        }
        uVar9 = 0x1e;
        if (0x1d < uVar14) {
          uVar9 = uVar14;
        }
        puVar4 = (ulong *)glslang::TPoolAllocator::allocate((ulong)local_148);
        if (local_138 == (ulong *)0x0) {
          *(char *)puVar4 = (char)*local_140;
        }
        else {
          if ((undefined1 *)((long)local_138 + 1U) == (undefined1 *)0x0) goto LAB_00108088;
          puVar4 = (ulong *)memcpy(puVar4,local_140,(long)local_138 + 1U);
        }
        local_140 = puVar4;
        local_130[0] = uVar9;
        if (local_138 == (ulong *)0x7fffffffffffffff) goto LAB_001082b7;
      }
LAB_00108088:
      local_130[0] = uVar9;
      local_140 = puVar4;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                &local_148,"\"",1);
      if ((0x7fffffffffffffffU - (long)local_138 < uVar15) ||
         (std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    &local_148,pcVar7,uVar15), local_138 == (ulong *)0x7fffffffffffffff)) {
LAB_001082b7:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      puVar5 = (ulong *)std::__cxx11::
                        basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                        _M_append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                   *)&local_148,"\"",1);
      local_170 = local_160;
      local_178 = *puVar5;
      puVar4 = puVar5 + 3;
      if ((ulong *)puVar5[1] == puVar4) {
        local_168 = puVar5[2];
        uVar14 = local_168 + 1;
        uVar6 = (uint)uVar14;
        if (7 < uVar6) {
          *(undefined8 *)((long)local_160 + ((uVar14 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)puVar5 + (uVar14 & 0xffffffff) + 0x10);
          if (7 < uVar6 - 1) {
            uVar8 = 0;
            do {
              uVar14 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)((long)local_170 + uVar14) = *(undefined8 *)((long)puVar4 + uVar14);
            } while (uVar8 < (uVar6 - 1 & 0xfffffff8));
          }
          goto LAB_00108119;
        }
        if ((uVar14 & 4) == 0) {
          if (uVar6 != 0) {
            local_160[0] = CONCAT71(local_160[0]._1_7_,(char)puVar5[3]);
            if ((uVar14 & 2) == 0) goto LAB_00108119;
            *(undefined2 *)((long)local_160 + ((uVar14 & 0xffffffff) - 2)) =
                 *(undefined2 *)((long)puVar5 + (uVar14 & 0xffffffff) + 0x16);
            local_168 = puVar5[2];
          }
        }
        else {
          local_160[0] = CONCAT44(local_160[0]._4_4_,(int)puVar5[3]);
          *(undefined4 *)((long)local_160 + ((uVar14 & 0xffffffff) - 4)) =
               *(undefined4 *)((long)puVar5 + (uVar14 & 0xffffffff) + 0x14);
          local_168 = puVar5[2];
        }
      }
      else {
        local_160[0] = puVar5[3];
        local_170 = (ulong *)puVar5[1];
LAB_00108119:
        local_168 = puVar5[2];
      }
      puVar5[1] = (ulong)puVar4;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    puVar4 = local_170;
    local_148 = &local_138;
    if (local_170 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
    }
    puVar5 = (ulong *)strlen((char *)local_170);
    local_180 = puVar5;
    if (puVar5 < (ulong *)0x10) {
      ppuVar10 = &local_138;
      if (puVar5 == (ulong *)0x1) {
        local_138 = (ulong *)CONCAT71(local_138._1_7_,(char)*puVar4);
      }
      else if (puVar5 != (ulong *)0x0) goto LAB_00108261;
    }
    else {
      local_148 = (ulong **)std::__cxx11::string::_M_create((ulong *)&local_148,(ulong)&local_180);
      local_138 = local_180;
      ppuVar10 = local_148;
LAB_00108261:
      memcpy(ppuVar10,puVar4,(size_t)puVar5);
      ppuVar10 = local_148;
    }
    local_140 = local_180;
    *(undefined1 *)((long)ppuVar10 + (long)local_180) = 0;
    *puVar13 = (ulong)(puVar13 + 2);
    if (local_148 == &local_138) {
      puVar1 = (undefined1 *)((long)local_180 + 1);
      uVar6 = (uint)puVar1;
      if (uVar6 < 8) {
        if (((ulong)puVar1 & 4) == 0) {
          if (uVar6 != 0) {
            *(undefined1 *)(puVar13 + 2) = local_138._0_1_;
            if (((ulong)puVar1 & 2) != 0) {
              *(undefined2 *)((long)puVar13 + ((ulong)puVar1 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)(puVar13 + 2) = local_138._0_4_;
          *(undefined4 *)((long)puVar13 + ((ulong)puVar1 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff) + 4);
        }
      }
      else {
        puVar13[2] = (ulong)local_138;
        *(undefined8 *)((long)puVar13 + ((ulong)puVar1 & 0xffffffff) + 8) =
             *(undefined8 *)((long)&local_140 + ((ulong)puVar1 & 0xffffffff));
        lVar11 = (long)(puVar13 + 2) - ((ulong)(puVar13 + 3) & 0xfffffffffffffff8);
        uVar6 = uVar6 + (int)lVar11 & 0xfffffff8;
        if (7 < uVar6) {
          uVar14 = 0;
          do {
            uVar8 = (int)uVar14 + 8;
            *(undefined8 *)(((ulong)(puVar13 + 3) & 0xfffffffffffffff8) + uVar14) =
                 *(undefined8 *)((long)&local_138 + (uVar14 - lVar11));
            uVar14 = (ulong)uVar8;
          } while (uVar8 < uVar6);
        }
      }
    }
    else {
      *puVar13 = (ulong)local_148;
      puVar13[2] = (ulong)local_138;
    }
    puVar13[1] = (ulong)local_180;
    goto LAB_001081ae;
  }
  uVar6 = *(uint *)(in_RSI + 1);
  uVar14 = (long)(int)uVar6;
  if ((int)uVar6 < 0) {
    uVar14 = -(long)(int)uVar6;
  }
  uVar15 = (ulong)(uVar6 >> 0x1f);
  cVar12 = (char)((int)uVar6 >> 0x1f);
  if (uVar14 < 10) {
    *puVar13 = (ulong)(puVar13 + 2);
    std::__cxx11::string::_M_construct((ulong)puVar13,'\x01' - cVar12);
    pcVar7 = (char *)(*puVar13 + uVar15);
LAB_001084c6:
    *pcVar7 = (char)uVar14 + '0';
  }
  else {
    if (uVar14 < 100) {
      *puVar13 = (ulong)(puVar13 + 2);
      std::__cxx11::string::_M_construct((ulong)puVar13,'\x02' - cVar12);
      local_118 = __LC10;
      uStack_110 = _UNK_0010ae18;
      pcVar7 = (char *)(*puVar13 + uVar15);
      local_108 = __LC11;
      uStack_100 = _UNK_0010ae28;
      local_f8 = __LC12;
      uStack_f0 = _UNK_0010ae38;
      local_e8 = __LC13;
      uStack_e0 = _UNK_0010ae48;
      local_d8 = __LC14;
      uStack_d0 = _UNK_0010ae58;
      local_c8 = __LC15;
      uStack_c0 = _UNK_0010ae68;
      local_b8 = __LC16;
      uStack_b0 = _UNK_0010ae78;
      local_a8 = __LC17;
      uStack_a0 = _UNK_0010ae88;
      local_98 = __LC18;
      uStack_90 = _UNK_0010ae98;
      local_88 = __LC19;
      uStack_80 = _UNK_0010aea8;
      local_78 = __LC20;
      uStack_70 = _UNK_0010aeb8;
      local_68 = __LC21;
      uStack_60 = (undefined1)_UNK_0010aec8;
      uStack_5f = (undefined7)_LC22._0_8_;
      cStack_58 = SUB81(_LC22._0_8_,7);
      acStack_57[0] = _LC22[8];
      acStack_57[1] = _LC22[9];
      acStack_57[2] = _LC22[10];
      acStack_57[3] = _LC22[0xb];
      acStack_57[4] = _LC22[0xc];
      acStack_57[5] = _LC22[0xd];
      acStack_57[6] = _LC22[0xe];
      acStack_57[7] = _LC22[0xf];
    }
    else {
      if (uVar14 < 1000) {
        uVar6 = 2;
        iVar3 = 3;
LAB_00108569:
        cVar12 = (char)iVar3 - cVar12;
        *puVar13 = (ulong)(puVar13 + 2);
      }
      else {
        if (uVar14 < 10000) {
          uVar6 = 3;
          iVar3 = 4;
          goto LAB_00108569;
        }
        iVar3 = 5;
        if (uVar14 < 100000) {
LAB_00108565:
          uVar6 = iVar3 - 1;
          goto LAB_00108569;
        }
        if (999999 < uVar14) {
          uVar6 = 6;
          iVar3 = 7;
          if (9999999 < uVar14) {
            if (99999999 < uVar14) {
              if (uVar14 < 1000000000) {
                iVar3 = 9;
                goto LAB_00108565;
              }
              uVar6 = 9;
              goto LAB_00108368;
            }
            uVar6 = 7;
            iVar3 = 8;
          }
          goto LAB_00108569;
        }
        uVar6 = 5;
LAB_00108368:
        cVar12 = ('\x01' - cVar12) + (char)uVar6;
        *puVar13 = (ulong)(puVar13 + 2);
      }
      std::__cxx11::string::_M_construct((ulong)puVar13,cVar12);
      local_118 = __LC10;
      uStack_110 = _UNK_0010ae18;
      pcVar7 = (char *)(*puVar13 + uVar15);
      local_108 = __LC11;
      uStack_100 = _UNK_0010ae28;
      local_f8 = __LC12;
      uStack_f0 = _UNK_0010ae38;
      local_e8 = __LC13;
      uStack_e0 = _UNK_0010ae48;
      local_d8 = __LC14;
      uStack_d0 = _UNK_0010ae58;
      local_c8 = __LC15;
      uStack_c0 = _UNK_0010ae68;
      local_b8 = __LC16;
      uStack_b0 = _UNK_0010ae78;
      local_a8 = __LC17;
      uStack_a0 = _UNK_0010ae88;
      local_98 = __LC18;
      uStack_90 = _UNK_0010ae98;
      local_88 = __LC19;
      uStack_80 = _UNK_0010aea8;
      local_78 = __LC20;
      uStack_70 = _UNK_0010aeb8;
      local_68 = __LC21;
      uStack_60 = (undefined1)_UNK_0010aec8;
      uStack_5f = (undefined7)_LC22._0_8_;
      cStack_58 = SUB81(_LC22._0_8_,7);
      acStack_57[0] = _LC22[8];
      acStack_57[1] = _LC22[9];
      acStack_57[2] = _LC22[10];
      acStack_57[3] = _LC22[0xb];
      acStack_57[4] = _LC22[0xc];
      acStack_57[5] = _LC22[0xd];
      acStack_57[6] = _LC22[0xe];
      acStack_57[7] = _LC22[0xf];
      do {
        uVar15 = uVar14;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar15 >> 2;
        uVar14 = (uVar15 >> 2) / 0x19;
        lVar11 = (uVar15 + ((SUB168(auVar2 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                           uVar14) * -0x14) * 2;
        cVar12 = *(char *)((long)&local_118 + lVar11);
        pcVar7[uVar6] = *(char *)((long)&local_118 + lVar11 + 1);
        uVar8 = uVar6 - 1;
        uVar6 = uVar6 - 2;
        pcVar7[uVar8] = cVar12;
      } while (9999 < uVar15);
      if (uVar15 < 1000) goto LAB_001084c6;
    }
    cVar12 = *(char *)((long)&local_118 + uVar14 * 2);
    pcVar7[1] = *(char *)((long)&local_118 + uVar14 * 2 + 1);
    *pcVar7 = cVar12;
  }
LAB_001081ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar13;
}



/* std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const*>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const**,
   std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const*> > >, unsigned long,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const*
   const&) */

void __thiscall
std::
vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
::_M_fill_insert(vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const*>>
                 *this,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t __n;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar11 >> 3) < param_3) {
    puVar9 = *(undefined8 **)(this + 8);
    uVar2 = (long)puVar11 - (long)puVar9 >> 3;
    if (param_3 <= 0xfffffffffffffff - uVar2) {
      if (uVar2 < param_3) {
        uVar2 = uVar2 + param_3;
        if (0xfffffffffffffff < uVar2) {
          uVar2 = 0xfffffffffffffff;
        }
        lVar4 = uVar2 * 8;
      }
      else {
        lVar4 = 0x7ffffffffffffff8;
        uVar12 = uVar2 * 2;
        if (uVar2 <= uVar12) {
          if (0xfffffffffffffff < uVar12) {
            uVar12 = 0xfffffffffffffff;
          }
          lVar4 = uVar12 * 8;
        }
      }
      lVar3 = glslang::TPoolAllocator::allocate(*(ulong *)this);
      puVar5 = (undefined8 *)((long)param_2 + (lVar3 - (long)puVar9));
      puVar6 = puVar5;
      do {
        puVar7 = puVar6 + 1;
        *puVar6 = *param_4;
        puVar6 = puVar7;
      } while (puVar7 != puVar5 + param_3);
      lVar8 = lVar3;
      if (puVar9 != param_2) {
        lVar8 = 0;
        do {
          *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)((long)puVar9 + lVar8);
          lVar8 = lVar8 + 8;
        } while (lVar8 != (long)param_2 - (long)puVar9);
        lVar8 = lVar8 + lVar3;
      }
      lVar8 = lVar8 + param_3 * 8;
      if (puVar11 != param_2) {
        lVar10 = 0;
        do {
          *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)((long)param_2 + lVar10);
          lVar10 = lVar10 + 8;
        } while (lVar10 != (long)puVar11 - (long)param_2);
        lVar8 = lVar8 + lVar10;
      }
      *(long *)(this + 8) = lVar3;
      *(long *)(this + 0x10) = lVar8;
      *(long *)(this + 0x18) = lVar3 + lVar4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_fill_insert");
  }
  uVar1 = *param_4;
  uVar2 = (long)puVar11 - (long)param_2 >> 3;
  if (param_3 < uVar2) {
    lVar4 = 0;
    puVar9 = puVar11 + -param_3;
    if (puVar11 != puVar9) {
      do {
        *(undefined8 *)((long)puVar11 + lVar4) = *(undefined8 *)((long)puVar9 + lVar4);
        lVar4 = lVar4 + 8;
      } while (param_3 * 8 != lVar4);
    }
    __n = (long)puVar9 - (long)param_2;
    *(undefined8 **)(this + 0x10) = puVar11 + param_3;
    if ((long)__n < 9) {
      if (__n == 8) {
        puVar11[-1] = *param_2;
      }
    }
    else {
      memmove((void *)((long)puVar11 - __n),param_2,__n);
    }
    puVar11 = param_2 + param_3;
    if (puVar11 == param_2) {
      return;
    }
    puVar9 = param_2;
    if (((long)puVar11 - (long)param_2 & 8U) != 0) {
      *param_2 = uVar1;
      puVar9 = param_2 + 1;
      if (puVar11 == param_2 + 1) {
        return;
      }
    }
    do {
      *puVar9 = uVar1;
      puVar6 = puVar9 + 2;
      puVar9[1] = uVar1;
      puVar9 = puVar6;
    } while (puVar11 != puVar6);
    return;
  }
  param_3 = param_3 - uVar2;
  puVar9 = puVar11;
  if (param_3 == 0) goto LAB_001088c8;
  uVar2 = 0;
  if ((param_3 & 1) == 0) {
LAB_001088b0:
    do {
      puVar11[uVar2] = uVar1;
      puVar11[uVar2 + 1] = uVar1;
      uVar2 = uVar2 + 2;
    } while (param_3 != uVar2);
  }
  else {
    *puVar11 = uVar1;
    uVar2 = 1;
    if (param_3 != 1) goto LAB_001088b0;
  }
  puVar9 = puVar11 + param_3;
LAB_001088c8:
  lVar4 = (long)puVar9 + ((long)puVar11 - (long)param_2);
  if (puVar11 == param_2) {
    *(long *)(this + 0x10) = lVar4;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)puVar9 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      lVar3 = lVar3 + 8;
    } while ((long)puVar11 - (long)param_2 != lVar3);
    *(long *)(this + 0x10) = lVar4;
    puVar9 = param_2;
    if (((long)puVar11 - (long)param_2 & 8U) != 0) {
      puVar9 = param_2 + 1;
      *param_2 = uVar1;
      if (puVar11 == puVar9) {
        return;
      }
    }
    do {
      *puVar9 = uVar1;
      puVar6 = puVar9 + 2;
      puVar9[1] = uVar1;
      puVar9 = puVar6;
    } while (puVar11 != puVar6);
  }
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
    if (0xfffffffffffffffe < uVar2) goto LAB_00108c50;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_00108c5a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00108c50:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_00108c5a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00108c5a;
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
    if (__src == (void *)0x0) goto LAB_00108c2c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00108c2c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<int, std::allocator<int> >::_M_realloc_insert<int
   const&>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&)
    */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
          (vector<int,std::allocator<int>> *this,void *param_2,undefined4 *param_3)

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
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00108de0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_00108dea:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00108de0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_00108dea;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_00108dea;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00108dbb;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00108dbb:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<glslang::TSourceLoc, std::allocator<glslang::TSourceLoc>
   >::_M_realloc_insert<glslang::TSourceLoc
   const&>(__gnu_cxx::__normal_iterator<glslang::TSourceLoc*, std::vector<glslang::TSourceLoc,
   std::allocator<glslang::TSourceLoc> > >, glslang::TSourceLoc const&) */

void __thiscall
std::vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>>::
_M_realloc_insert<glslang::TSourceLoc_const&>
          (vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest_00;
  ulong uVar6;
  size_t __n;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  lVar4 = (long)pvVar1 - (long)__src >> 3;
  uVar5 = lVar4 * -0x5555555555555555;
  if (uVar5 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    uVar6 = uVar5 + 1;
    if (0xfffffffffffffffe < uVar5) goto LAB_00108f80;
    if (0x555555555555555 < uVar6) {
      uVar6 = 0x555555555555555;
    }
    uVar6 = uVar6 * 0x18;
LAB_00108f8a:
    __dest_00 = operator_new(uVar6);
    lVar4 = uVar6 + (long)__dest_00;
  }
  else {
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5) {
LAB_00108f80:
      uVar6 = 0x7ffffffffffffff8;
      goto LAB_00108f8a;
    }
    if (uVar6 != 0) {
      if (0x555555555555555 < uVar6) {
        uVar6 = 0x555555555555555;
      }
      uVar6 = uVar6 * 0x18;
      goto LAB_00108f8a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x18);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n + 0x10) = param_3[2];
  *(undefined8 *)((long)__dest_00 + __n) = uVar2;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00108f66;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00108f66:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* glslang::TPpContext::scanToken(glslang::TPpToken*) */

int __thiscall glslang::TPpContext::scanToken(TPpContext *this,TPpToken *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char cVar11;
  long in_FS_OFFSET;
  bool bVar12;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = -1;
  lVar6 = *(long *)(this + 400);
  if (lVar6 == *(long *)(this + 0x188)) {
    iVar5 = -1;
  }
  else {
    do {
      iVar5 = (**(code **)(**(long **)(lVar6 + -8) + 0x10))(*(long **)(lVar6 + -8),param_1);
      lVar6 = *(long *)(this + 400);
      local_44 = iVar5;
      if (iVar5 != -1) {
        if (lVar6 != *(long *)(this + 0x188)) {
          cVar4 = (**(code **)(**(long **)(lVar6 + -8) + 0x48))();
          if (cVar4 != '\0') {
            piVar10 = *(int **)(this + 0x110);
            if (iVar5 == 10) {
              piVar7 = *(int **)(this + 0x108);
              if (1 < (int)((long)piVar10 - (long)piVar7 >> 2)) {
                cVar11 = '\0';
                iVar9 = 0;
                do {
                  lVar6 = (long)iVar9;
                  iVar1 = iVar9 + 1;
                  iVar8 = iVar1;
                  if (((piVar7[lVar6] == 0x23) && (iVar8 = iVar9 + 2, piVar7[lVar6 + 1] != 0x23)) &&
                     (bVar12 = cVar11 != '\0', iVar8 = iVar1, cVar11 = cVar4, bVar12)) {
                    (**(code **)(**(long **)(this + 0x100) + 0x168))
                              (*(long **)(this + 0x100),*(long *)(this + 0x120) + lVar6 * 0x18,
                               "(#) can be preceded in its line only by spaces or horizontal tabs",
                               &_LC25,&_LC3);
                    piVar10 = *(int **)(this + 0x110);
                    piVar7 = *(int **)(this + 0x108);
                  }
                  iVar9 = iVar8;
                } while (iVar8 < (int)((long)piVar10 - (long)piVar7 >> 2) + -1);
              }
              if (piVar10 != piVar7) {
                *(int **)(this + 0x110) = piVar7;
              }
              if (*(long *)(this + 0x120) != *(long *)(this + 0x128)) {
                *(long *)(this + 0x128) = *(long *)(this + 0x120);
              }
            }
            else {
              if (*(int **)(this + 0x118) == piVar10) {
                std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                          ((vector<int,std::allocator<int>> *)(this + 0x108),piVar10,&local_44);
              }
              else {
                *piVar10 = iVar5;
                *(int **)(this + 0x110) = piVar10 + 1;
              }
              puVar2 = *(undefined8 **)(this + 0x128);
              if (puVar2 == *(undefined8 **)(this + 0x130)) {
                std::vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>>::
                _M_realloc_insert<glslang::TSourceLoc_const&>
                          ((vector<glslang::TSourceLoc,std::allocator<glslang::TSourceLoc>> *)
                           (this + 0x120),puVar2,param_1);
              }
              else {
                uVar3 = *(undefined8 *)(param_1 + 8);
                *puVar2 = *(undefined8 *)param_1;
                puVar2[1] = uVar3;
                puVar2[2] = *(undefined8 *)(param_1 + 0x10);
                *(undefined8 **)(this + 0x128) = puVar2 + 3;
              }
            }
          }
        }
        break;
      }
      if (*(long *)(this + 0x188) == lVar6) break;
      (**(code **)(**(long **)(lVar6 + -8) + 0x58))();
      lVar6 = *(long *)(this + 400);
      if (*(long **)(lVar6 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + -8) + 8))();
        lVar6 = *(long *)(this + 400);
      }
      lVar6 = lVar6 + -8;
      *(long *)(this + 400) = lVar6;
    } while (*(long *)(this + 0x188) != lVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* std::vector<glslang::TPpContext::TokenStream*,
   glslang::pool_allocator<glslang::TPpContext::TokenStream*> >::_M_default_append(unsigned long) */

void __thiscall
std::
vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
::_M_default_append(vector<glslang::TPpContext::TokenStream*,glslang::pool_allocator<glslang::TPpContext::TokenStream*>>
                    *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  __s = *(void **)(this + 0x10);
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x18) - (long)__s >> 3) < param_1) {
    uVar6 = (long)__s - (long)pvVar2 >> 3;
    if (0xfffffffffffffff - uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
    }
    uVar1 = param_1 + uVar6;
    uVar3 = 0xfffffffffffffff;
    if (uVar1 < 0x1000000000000000) {
      uVar3 = uVar1;
    }
    if ((param_1 <= uVar6) && (uVar3 = uVar6 * 2, 0xfffffffffffffff < uVar3)) {
      uVar3 = 0xfffffffffffffff;
    }
    lVar4 = glslang::TPoolAllocator::allocate(*(ulong *)this);
    memset((void *)(lVar4 + ((long)__s - (long)pvVar2)),0,param_1 * 8);
    lVar5 = 0;
    if (pvVar2 != __s) {
      do {
        *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)((long)pvVar2 + lVar5);
        lVar5 = lVar5 + 8;
      } while ((long)__s - (long)pvVar2 != lVar5);
    }
    *(long *)(this + 8) = lVar4;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 8;
    *(ulong *)(this + 0x18) = lVar4 + uVar3 * 8;
    return;
  }
  memset(__s,0,param_1 * 8);
  *(void **)(this + 0x10) = (void *)(param_1 * 8 + (long)__s);
  return;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_assign(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          basic_string *param_1)

{
  ulong __n;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
  ulong uVar1;
  ulong uVar2;
  
  if (this == (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)param_1) {
    return;
  }
  __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if (__dest == this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
  }
  if (uVar1 < __n) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar1 = uVar1 * 2;
    uVar2 = 0x7fffffffffffffff;
    if (uVar1 < 0x8000000000000000) {
      uVar2 = uVar1;
    }
    if (uVar1 <= __n) {
      uVar2 = __n;
    }
    __dest = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
             glslang::TPoolAllocator::allocate(*(ulong *)this);
    *(ulong *)(this + 0x18) = uVar2;
    *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) = __dest
    ;
  }
  else if (__n == 0) goto LAB_00109a3c;
  if (__n == 1) {
    *__dest = **(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (param_1 + 8);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
  else {
    memcpy(__dest,*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                   (param_1 + 8),__n);
    __dest = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
  }
LAB_00109a3c:
  *(ulong *)(this + 0x10) = __n;
  __dest[__n] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
  return;
}



/* glslang::TPpContext::addMacroDef(int, glslang::TPpContext::MacroSymbol&) */

void __thiscall glslang::TPpContext::addMacroDef(TPpContext *this,int param_1,MacroSymbol *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base _Var2;
  MacroSymbol MVar3;
  uint uVar4;
  _Rb_tree_node_base *p_Var5;
  undefined8 uVar6;
  _Rb_tree_node_base *p_Var7;
  byte bVar8;
  _Rb_tree_node_base *p_Var9;
  bool bVar10;
  undefined1 auVar11 [16];
  
  p_Var1 = (_Rb_tree_node_base *)(this + 0x18);
  p_Var5 = *(_Rb_tree_node_base **)(this + 0x20);
  p_Var9 = p_Var1;
  if (*(_Rb_tree_node_base **)(this + 0x20) != (_Rb_tree_node_base *)0x0) {
    do {
      while( true ) {
        p_Var7 = p_Var5;
        if (*(int *)(p_Var7 + 0x20) < param_1) break;
        p_Var5 = *(_Rb_tree_node_base **)(p_Var7 + 0x10);
        p_Var9 = p_Var7;
        if (*(_Rb_tree_node_base **)(p_Var7 + 0x10) == (_Rb_tree_node_base *)0x0) goto LAB_00109b20;
      }
      p_Var5 = *(_Rb_tree_node_base **)(p_Var7 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var7 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_00109b20:
    if ((p_Var1 != p_Var9) && (*(int *)(p_Var9 + 0x20) <= param_1)) goto LAB_00109bed;
  }
  p_Var5 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)(this + 8));
  *(int *)(p_Var5 + 0x20) = param_1;
  uVar6 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(p_Var5 + 0x30) = 0;
  *(undefined8 *)(p_Var5 + 0x28) = uVar6;
  *(undefined8 *)(p_Var5 + 0x38) = 0;
  *(undefined8 *)(p_Var5 + 0x40) = 0;
  uVar6 = glslang::GetThreadPoolAllocator();
  p_Var5[0x70] = (_Rb_tree_node_base)((byte)p_Var5[0x70] & 0xf8);
  uVar4 = *(uint *)(p_Var5 + 0x20);
  *(undefined8 *)(p_Var5 + 0x48) = uVar6;
  *(undefined8 *)(p_Var5 + 0x50) = 0;
  *(undefined8 *)(p_Var5 + 0x58) = 0;
  *(undefined8 *)(p_Var5 + 0x60) = 0;
  *(undefined8 *)(p_Var5 + 0x68) = 0;
  if (p_Var1 == p_Var9) {
    if ((*(long *)(this + 0x38) == 0) ||
       (p_Var7 = *(_Rb_tree_node_base **)(this + 0x30), (int)uVar4 <= *(int *)(p_Var7 + 0x20))) {
LAB_00109c78:
      auVar11 = std::
                _Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
                ::_M_get_insert_unique_pos
                          ((_Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
                            *)(this + 8),(int *)(ulong)uVar4);
      p_Var7 = auVar11._8_8_;
      p_Var9 = auVar11._0_8_;
      if (p_Var7 == (_Rb_tree_node_base *)0x0) goto LAB_00109bed;
      bVar10 = p_Var9 != (_Rb_tree_node_base *)0x0;
    }
    else {
      bVar10 = false;
    }
LAB_00109c99:
    p_Var9 = p_Var7;
    if ((p_Var1 == p_Var7) || (bVar10)) goto LAB_00109bd2;
LAB_00109caa:
    bVar10 = (int)uVar4 < *(int *)(p_Var9 + 0x20);
  }
  else {
    if (*(int *)(p_Var9 + 0x20) <= (int)uVar4) {
      if ((int)uVar4 <= *(int *)(p_Var9 + 0x20)) goto LAB_00109bed;
      if (*(_Rb_tree_node_base **)(this + 0x30) != p_Var9) {
        p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var9);
        if (*(int *)(p_Var7 + 0x20) <= (int)uVar4) goto LAB_00109c78;
        if (*(long *)(p_Var9 + 0x18) != 0) {
          bVar10 = true;
          goto LAB_00109c99;
        }
      }
      goto LAB_00109caa;
    }
    if (*(_Rb_tree_node_base **)(this + 0x28) != p_Var9) {
      p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var9);
      if ((int)uVar4 <= *(int *)(p_Var7 + 0x20)) goto LAB_00109c78;
      if (*(long *)(p_Var7 + 0x18) == 0) {
        bVar10 = false;
        goto LAB_00109c99;
      }
    }
LAB_00109bd2:
    bVar10 = true;
  }
  std::_Rb_tree_insert_and_rebalance(bVar10,p_Var5,p_Var9,p_Var1);
  *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  p_Var9 = p_Var5;
LAB_00109bed:
  std::vector<int,glslang::pool_allocator<int>>::operator=
            ((vector<int,glslang::pool_allocator<int>> *)(p_Var9 + 0x28),(vector *)param_2);
  std::
  vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
  ::operator=((vector<glslang::TPpContext::TokenStream::Token,glslang::pool_allocator<glslang::TPpContext::TokenStream::Token>>
               *)(p_Var9 + 0x48),(vector *)(param_2 + 0x20));
  *(undefined8 *)(p_Var9 + 0x68) = *(undefined8 *)(param_2 + 0x40);
  _Var2 = p_Var9[0x70];
  bVar8 = (byte)param_2[0x48] & 1;
  p_Var9[0x70] = (_Rb_tree_node_base)((byte)_Var2 & 0xfe | bVar8);
  MVar3 = param_2[0x48];
  p_Var9[0x70] = (_Rb_tree_node_base)((byte)_Var2 & 0xfc | bVar8 | (byte)MVar3 & 2);
  p_Var9[0x70] = (_Rb_tree_node_base)
                 ((byte)_Var2 & 0xf8 | bVar8 | (byte)MVar3 & 2 | (byte)param_2[0x48] & 4);
  return;
}



/* void std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >
   >::_M_realloc_insert<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >(__gnu_cxx::__normal_iterator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >*,
   std::vector<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, glslang::pool_allocator<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > > > >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >&&) */

void __thiscall
std::
vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
::
_M_realloc_insert<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>
          (vector<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,glslang::pool_allocator<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
           *this,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *local_58;
  ulong local_48;
  
  lVar1 = *(long *)(this + 0x10);
  lVar8 = *(long *)(this + 8);
  lVar3 = lVar1 - lVar8 >> 3;
  uVar4 = lVar3 * -0x3333333333333333;
  if (uVar4 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar8 == lVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_00109e60;
    local_48 = 0x333333333333333;
    if (uVar4 + 1 < 0x333333333333334) {
      local_48 = uVar4 + 1;
    }
LAB_00109e6f:
    local_58 = (ulong *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  }
  else {
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4) {
LAB_00109e60:
      local_48 = 0x333333333333333;
      goto LAB_00109e6f;
    }
    if (uVar5 != 0) {
      local_48 = 0x333333333333333;
      if (uVar5 < 0x333333333333334) {
        local_48 = uVar5;
      }
      goto LAB_00109e6f;
    }
    local_58 = (ulong *)0x0;
    local_48 = uVar5;
  }
  puVar7 = (ulong *)((param_2 - lVar8) + (long)local_58);
  uVar5 = glslang::GetThreadPoolAllocator();
  puVar6 = puVar7 + 3;
  *puVar7 = uVar5;
  puVar7[1] = (ulong)puVar6;
  puVar2 = *(undefined1 **)(param_3 + 8);
  uVar4 = *(ulong *)(param_3 + 0x10);
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar7 + 3) = *puVar2;
      goto LAB_00109dbd;
    }
    if (uVar4 == 0) goto LAB_00109dbd;
  }
  else {
    if ((long)uVar4 < 0) {
LAB_0010a019:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    puVar6 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
    puVar7[1] = (ulong)puVar6;
    puVar7[3] = uVar4;
  }
  memcpy(puVar6,puVar2,uVar4);
  puVar6 = (ulong *)puVar7[1];
LAB_00109dbd:
  puVar7[2] = uVar4;
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  puVar6 = local_58;
  for (; param_2 != lVar8; lVar8 = lVar8 + 0x28) {
    uVar5 = glslang::GetThreadPoolAllocator();
    uVar4 = *(ulong *)(lVar8 + 0x10);
    puVar7 = puVar6 + 3;
    puVar6[1] = (ulong)puVar7;
    puVar2 = *(undefined1 **)(lVar8 + 8);
    *puVar6 = uVar5;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        *(undefined1 *)(puVar6 + 3) = *puVar2;
      }
      else if (uVar4 != 0) goto LAB_00109e49;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_0010a019;
      puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
      puVar6[3] = uVar4;
      puVar6[1] = (ulong)puVar7;
LAB_00109e49:
      memcpy(puVar7,puVar2,uVar4);
      puVar7 = (ulong *)puVar6[1];
    }
    puVar6[2] = uVar4;
    puVar6 = puVar6 + 5;
    *(undefined1 *)((long)puVar7 + uVar4) = 0;
  }
  puVar6 = puVar6 + 5;
  if (param_2 != lVar1) {
    do {
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong *)(param_2 + 0x10);
      puVar7 = puVar6 + 3;
      puVar6[1] = (ulong)puVar7;
      puVar2 = *(undefined1 **)(param_2 + 8);
      *puVar6 = uVar5;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          *(undefined1 *)(puVar6 + 3) = *puVar2;
        }
        else if (uVar4 != 0) goto LAB_00109f0e;
      }
      else {
        if ((long)uVar4 < 0) goto LAB_0010a019;
        puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
        puVar6[3] = uVar4;
        puVar6[1] = (ulong)puVar7;
LAB_00109f0e:
        memcpy(puVar7,puVar2,uVar4);
        puVar7 = (ulong *)puVar6[1];
      }
      param_2 = param_2 + 0x28;
      puVar6[2] = uVar4;
      puVar6 = puVar6 + 5;
      *(undefined1 *)((long)puVar7 + uVar4) = 0;
    } while (param_2 != lVar1);
  }
  *(ulong **)(this + 8) = local_58;
  *(ulong **)(this + 0x10) = puVar6;
  *(ulong **)(this + 0x18) = local_58 + local_48 * 5;
  return;
}



/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::string >,
   std::_Select1st<std::pair<std::__cxx11::string const, std::__cxx11::string > >,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::string > > >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
           *this,string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 8;
LAB_0010a154:
    if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0010a11a;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x28);
    __s2 = *(void **)(p_Var5 + 0x20);
    uVar10 = *(ulong *)(param_1 + 8);
    local_50 = *(void **)param_1;
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)param_1;
    uVar10 = *(ulong *)(param_1 + 8);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x20);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0010a0c4:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0010a0e2;
        if (-0x80000001 < (long)uVar4) goto LAB_0010a0de;
LAB_0010a088:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0010a0c4;
LAB_0010a0de:
        if ((int)uVar4 < 0) goto LAB_0010a088;
LAB_0010a0e2:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0010a154;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0010a11a;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0010a11a;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0010a11a:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::string >,
   std::_Select1st<std::pair<std::__cxx11::string const, std::__cxx11::string > >,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::string > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::string
   const, std::__cxx11::string > >, std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
           *this,_Rb_tree_node_base *param_2,string *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__s1;
  void *__s2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_2 == (_Rb_tree_node_base *)(this + 8)) {
    if (*(long *)(this + 0x28) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar1 = *(ulong *)(param_3 + 8);
      uVar2 = *(ulong *)(param_2 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x20),*(void **)param_3,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0010a3f6;
        if (lVar5 < -0x80000000) goto LAB_0010a386;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0010a3f6;
      goto LAB_0010a386;
    }
    goto LAB_0010a3f6;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  uVar2 = *(ulong *)(param_2 + 0x28);
  __s1 = *(void **)param_3;
  __s2 = *(void **)(param_2 + 0x20);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0010a2aa:
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_2) goto LAB_0010a27b;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x20),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0010a3f6;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0010a308;
        }
      }
      else {
LAB_0010a308:
        if (-1 < iVar3) goto LAB_0010a3f6;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0010a27b;
    }
LAB_0010a254:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0010a26e;
      goto LAB_0010a3a0;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0010a2aa;
        iVar3 = (int)lVar5;
        goto LAB_0010a243;
      }
    }
    else {
LAB_0010a243:
      if (iVar3 < 0) goto LAB_0010a2aa;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0010a254;
LAB_0010a26e:
    if ((int)uVar6 < 0) {
LAB_0010a3a0:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) {
LAB_0010a386:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0010a3dc:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0010a3f6;
        if (-0x80000001 < (long)uVar6) goto LAB_0010a3f2;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x20),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0010a3dc;
LAB_0010a3f2:
        if (-1 < (int)uVar6) {
LAB_0010a3f6:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0010a27b;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0010a27b:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* glslang::TIntermediate::addIncludeText(char const*, char const*, unsigned long) */

void glslang::TIntermediate::addIncludeText(char *param_1,char *param_2,ulong param_3)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  ulong uVar3;
  ulong *__s2;
  int iVar4;
  uint uVar5;
  size_t __n;
  _Rb_tree_node_base *p_Var6;
  uint uVar7;
  ulong *puVar8;
  _Rb_tree_node_base *p_Var9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  _Rb_tree_node_base *p_Var14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  ulong local_70;
  ulong *local_68;
  undefined8 local_60;
  ulong local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = local_58;
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  __n = strlen(param_2);
  local_70 = __n;
  if (__n < 0x10) {
    puVar8 = local_58;
    if (__n == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*param_2);
    }
    else if (__n != 0) goto LAB_0010a706;
  }
  else {
    local_68 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_70);
    local_58[0] = local_70;
    puVar8 = local_68;
LAB_0010a706:
    memcpy(puVar8,param_2,__n);
    puVar8 = local_68;
  }
  __s2 = local_68;
  uVar3 = local_70;
  *(undefined1 *)((long)puVar8 + local_70) = 0;
  p_Var2 = (_Rb_tree_node_base *)(param_1 + 0x7a8);
  p_Var1 = *(_Rb_tree_node_base **)(param_1 + 0x7b0);
  p_Var14 = p_Var2;
  local_60 = local_70;
  if (*(_Rb_tree_node_base **)(param_1 + 0x7b0) != (_Rb_tree_node_base *)0x0) {
    do {
      while( true ) {
        p_Var6 = p_Var1;
        uVar11 = *(ulong *)(p_Var6 + 0x28);
        uVar10 = uVar3;
        if (uVar11 <= uVar3) {
          uVar10 = uVar11;
        }
        if ((uVar10 != 0) && (iVar4 = memcmp(*(void **)(p_Var6 + 0x20),__s2,uVar10), iVar4 != 0))
        break;
        lVar13 = uVar11 - uVar3;
        if (lVar13 < 0x80000000) {
          if (-0x80000001 < lVar13) {
            iVar4 = (int)lVar13;
            break;
          }
          goto LAB_0010a4f8;
        }
LAB_0010a542:
        p_Var1 = *(_Rb_tree_node_base **)(p_Var6 + 0x10);
        p_Var14 = p_Var6;
        if (*(_Rb_tree_node_base **)(p_Var6 + 0x10) == (_Rb_tree_node_base *)0x0) goto LAB_0010a54e;
      }
      if (-1 < iVar4) goto LAB_0010a542;
LAB_0010a4f8:
      p_Var1 = *(_Rb_tree_node_base **)(p_Var6 + 0x18);
    } while (*(_Rb_tree_node_base **)(p_Var6 + 0x18) != (_Rb_tree_node_base *)0x0);
LAB_0010a54e:
    if (p_Var2 != p_Var14) {
      uVar11 = *(ulong *)(p_Var14 + 0x28);
      uVar10 = uVar3;
      if (uVar11 <= uVar3) {
        uVar10 = uVar11;
      }
      if ((uVar10 == 0) || (iVar4 = memcmp(__s2,*(void **)(p_Var14 + 0x20),uVar10), iVar4 == 0)) {
        lVar13 = uVar3 - uVar11;
        if (0x7fffffff < lVar13) goto LAB_0010a66d;
        if (lVar13 < -0x80000000) goto LAB_0010a5a7;
        iVar4 = (int)lVar13;
      }
      if (-1 < iVar4) goto LAB_0010a66d;
    }
  }
LAB_0010a5a7:
  p_Var6 = (_Rb_tree_node_base *)operator_new(0x60);
  uVar3 = local_60;
  p_Var1 = p_Var6 + 0x30;
  *(_Rb_tree_node_base **)(p_Var6 + 0x20) = p_Var1;
  if (local_68 == local_58) {
    uVar11 = local_60 + 1;
    uVar5 = (uint)uVar11;
    if (uVar5 < 8) {
      if ((uVar11 & 4) == 0) {
        if (uVar5 != 0) {
          *p_Var1 = local_58[0]._0_1_;
          if ((uVar11 & 2) != 0) {
            *(undefined2 *)(p_Var6 + (uVar11 & 0xffffffff) + 0x2e) =
                 *(undefined2 *)((long)local_58 + ((uVar11 & 0xffffffff) - 2));
          }
        }
      }
      else {
        *(undefined4 *)p_Var1 = (undefined4)local_58[0];
        *(undefined4 *)(p_Var6 + (uVar11 & 0xffffffff) + 0x2c) =
             *(undefined4 *)((long)local_58 + ((uVar11 & 0xffffffff) - 4));
      }
    }
    else {
      *(ulong *)p_Var1 = local_58[0];
      *(undefined8 *)(p_Var6 + (uVar11 & 0xffffffff) + 0x28) =
           *(undefined8 *)((long)local_58 + ((uVar11 & 0xffffffff) - 8));
      lVar13 = (long)p_Var1 - ((ulong)(p_Var6 + 0x38) & 0xfffffffffffffff8);
      uVar5 = uVar5 + (int)lVar13 & 0xfffffff8;
      if (7 < uVar5) {
        uVar11 = 0;
        do {
          uVar7 = (int)uVar11 + 8;
          *(undefined8 *)(((ulong)(p_Var6 + 0x38) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)((long)local_58 + (uVar11 - lVar13));
          uVar11 = (ulong)uVar7;
        } while (uVar7 < uVar5);
      }
    }
  }
  else {
    *(ulong **)(p_Var6 + 0x20) = local_68;
    *(ulong *)(p_Var6 + 0x30) = local_58[0];
  }
  *(ulong *)(p_Var6 + 0x28) = local_60;
  *(undefined8 *)(p_Var6 + 0x48) = 0;
  *(_Rb_tree_node_base **)(p_Var6 + 0x40) = p_Var6 + 0x50;
  p_Var6[0x50] = (_Rb_tree_node_base)0x0;
  local_60 = 0;
  local_58[0] = local_58[0] & 0xffffffffffffff00;
  local_68 = local_58;
  auVar15 = std::
            _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
            ::_M_get_insert_hint_unique_pos
                      ((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::string>>>
                        *)(param_1 + 0x7a0),p_Var14,p_Var6 + 0x20);
  p_Var9 = auVar15._8_8_;
  p_Var14 = auVar15._0_8_;
  if (p_Var9 == (_Rb_tree_node_base *)0x0) {
    if (p_Var1 != *(_Rb_tree_node_base **)(p_Var6 + 0x20)) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var6 + 0x20),*(long *)(p_Var6 + 0x30) + 1);
    }
    operator_delete(p_Var6,0x60);
    goto LAB_0010a66d;
  }
  if ((p_Var2 == p_Var9) || (p_Var14 != (_Rb_tree_node_base *)0x0)) {
LAB_0010a64f:
    bVar12 = true;
  }
  else {
    uVar11 = *(ulong *)(p_Var9 + 0x28);
    uVar10 = uVar3;
    if (uVar11 <= uVar3) {
      uVar10 = uVar11;
    }
    if ((uVar10 == 0) ||
       (iVar4 = memcmp(*(void **)(p_Var6 + 0x20),*(void **)(p_Var9 + 0x20),uVar10), iVar4 == 0)) {
      lVar13 = uVar3 - uVar11;
      bVar12 = false;
      if (0x7fffffff < lVar13) goto LAB_0010a654;
      if (lVar13 < -0x80000000) goto LAB_0010a64f;
      iVar4 = (int)lVar13;
    }
    bVar12 = SUB41((uint)iVar4 >> 0x1f,0);
  }
LAB_0010a654:
  std::_Rb_tree_insert_and_rebalance(bVar12,p_Var6,p_Var9,p_Var2);
  *(long *)(param_1 + 0x7c8) = *(long *)(param_1 + 0x7c8) + 1;
  p_Var14 = p_Var6;
LAB_0010a66d:
  std::__cxx11::string::_M_replace((ulong)(p_Var14 + 0x40),0,*(char **)(p_Var14 + 0x48),param_3);
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Hashtable<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, int>,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, int> >, std::__detail::_Select1st,
   std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >, std::hash<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_find_before_node(unsigned long,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   unsigned long) const */

long * __thiscall
std::
_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::_M_find_before_node
          (_Hashtable<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,int>>,std::__detail::_Select1st,std::equal_to<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::hash<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
           *this,ulong param_1,basic_string *param_2,ulong param_3)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)(this + 8) + param_1 * 8);
  if (plVar5 != (long *)0x0) {
    uVar3 = ((long *)*plVar5)[7];
    plVar1 = (long *)*plVar5;
    do {
      plVar4 = plVar1;
      if ((uVar3 == param_3) && (__n = *(size_t *)(param_2 + 0x10), __n == plVar4[3])) {
        if (__n == 0) {
          return plVar5;
        }
        iVar2 = memcmp(*(void **)(param_2 + 8),(void *)plVar4[2],__n);
        if (iVar2 == 0) {
          return plVar5;
        }
      }
      plVar1 = (long *)*plVar4;
    } while ((plVar1 != (long *)0x0) &&
            (uVar3 = plVar1[7], plVar5 = plVar4, param_1 == uVar3 % *(ulong *)(this + 0x10)));
    plVar5 = (long *)0x0;
  }
  return plVar5;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile() */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::~TokenizableIncludeFile(TokenizableIncludeFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tMacroInput::~tMacroInput() */

void __thiscall glslang::TPpContext::tMacroInput::~tMacroInput(tMacroInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::TokenizableIncludeFile::TokenizableIncludeFile(glslang::TSourceLoc const&,
   std::__cxx11::string const&, glslang::TShader::Includer::IncludeResult*, std::__cxx11::string
   const&, glslang::TPpContext*) */

void __thiscall
glslang::TPpContext::TokenizableIncludeFile::TokenizableIncludeFile
          (TokenizableIncludeFile *this,TSourceLoc *param_1,string *param_2,IncludeResult *param_3,
          string *param_4,TPpContext *param_5)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TInputScanner::~TInputScanner() */

void __thiscall glslang::TInputScanner::~TInputScanner(TInputScanner *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tMarkerInput::~tMarkerInput() */

void __thiscall glslang::TPpContext::tMarkerInput::~tMarkerInput(tMarkerInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TPpContext::tZeroInput::~tZeroInput() */

void __thiscall glslang::TPpContext::tZeroInput::~tZeroInput(tZeroInput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


