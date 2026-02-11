
/* glslang::TBuiltIns::~TBuiltIns() */

void __thiscall glslang::TBuiltIns::~TBuiltIns(TBuiltIns *this)

{
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



/* glslang::BuiltInVariable(char const*, char const*, glslang::TBuiltInVariable,
   glslang::TSymbolTable&) */

void glslang::BuiltInVariable(char *param_1,char *param_2,short param_3,TSymbolTable *param_4)

{
  ulong uVar1;
  void *__s1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = local_50;
  sVar4 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_68,param_1,param_1 + sVar4);
  plVar5 = (long *)TSymbolTable::find(param_4,(basic_string *)&local_68,(bool *)0x0,(bool *)0x0,
                                      (int *)0x0);
  if (plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5);
    lVar6 = *(long *)(lVar6 + 0x68);
    lVar10 = *(long *)(lVar6 + 8);
    if (0 < (int)(*(long *)(lVar6 + 0x10) - lVar10 >> 5)) {
      lVar9 = 0;
      do {
        plVar5 = *(long **)(lVar10 + lVar9 * 0x20);
        pcVar2 = *(code **)(*plVar5 + 0x30);
        if (pcVar2 == TType::getFieldName_abi_cxx11_) {
          lVar8 = plVar5[0xe];
        }
        else {
          lVar8 = (*pcVar2)();
          lVar10 = *(long *)(lVar6 + 8);
        }
        uVar1 = *(ulong *)(lVar8 + 0x10);
        __s1 = *(void **)(lVar8 + 8);
        sVar7 = strlen(param_2);
        sVar4 = sVar7;
        if (uVar1 <= sVar7) {
          sVar4 = uVar1;
        }
        if (sVar4 == 0) {
LAB_00100193:
          lVar8 = uVar1 - sVar7;
          if (((lVar8 < 0x80000000) && (-0x80000001 < lVar8)) && ((int)lVar8 == 0)) {
            plVar5 = *(long **)(lVar10 + lVar9 * 0x20);
            pcVar2 = *(code **)(*plVar5 + 0x50);
            if (pcVar2 == TType::getQualifier) {
              plVar5 = plVar5 + 2;
            }
            else {
              plVar5 = (long *)(*pcVar2)();
            }
            *(ushort *)(plVar5 + 1) = *(ushort *)(plVar5 + 1) & 0x7f | param_3 << 7;
            break;
          }
        }
        else {
          iVar3 = memcmp(__s1,param_2,sVar4);
          if (iVar3 == 0) goto LAB_00100193;
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)(*(long *)(lVar6 + 0x10) - lVar10 >> 5));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::SpecialQualifier(char const*, glslang::TStorageQualifier, glslang::TBuiltInVariable,
   glslang::TSymbolTable&) */

void glslang::SpecialQualifier(char *param_1,ushort param_2,int param_3,TSymbolTable *param_4)

{
  size_t sVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  sVar1 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_58,param_1,param_1 + sVar1);
  plVar2 = (long *)TSymbolTable::find(param_4,(basic_string *)&local_58,(bool *)0x0,(bool *)0x0,
                                      (int *)0x0);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2);
    if (*(code **)(*plVar2 + 0x50) == TType::getQualifier) {
      plVar2 = plVar2 + 2;
    }
    else {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
    }
    *(ushort *)(plVar2 + 1) = (ushort)(param_3 << 7) | param_2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::BuiltInVariable(char const*, glslang::TBuiltInVariable, glslang::TSymbolTable&) */

void glslang::BuiltInVariable(char *param_1,int param_2,TSymbolTable *param_3)

{
  size_t sVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  sVar1 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_58,param_1,param_1 + sVar1);
  plVar2 = (long *)TSymbolTable::find(param_3,(basic_string *)&local_58,(bool *)0x0,(bool *)0x0,
                                      (int *)0x0);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2);
    if (*(code **)(*plVar2 + 0x50) == TType::getQualifier) {
      plVar2 = plVar2 + 2;
    }
    else {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
    }
    *(ushort *)(plVar2 + 1) = (ushort)(param_2 << 7) | *(ushort *)(plVar2 + 1) & 0x7f;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::ModifyFlatDecoration(char const*, bool, glslang::TSymbolTable&) [clone .constprop.0] */

void glslang::ModifyFlatDecoration(char *param_1,bool param_2,TSymbolTable *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = glslang::GetThreadPoolAllocator();
  local_40 = local_30;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_48,"gl_SubGroupSizeARB");
  plVar1 = (long *)TSymbolTable::find((TSymbolTable *)param_1,(basic_string *)&local_48,(bool *)0x0,
                                      (bool *)0x0,(int *)0x0);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(code **)(*plVar1 + 0x50) == TType::getQualifier) {
      plVar1 = plVar1 + 2;
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
    }
    *(byte *)((long)plVar1 + 0xb) = *(byte *)((long)plVar1 + 0xb) | 0x80;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TBuiltIns::relateTabledBuiltins(int, EProfile, glslang::SpvVersion const&, EShLanguage,
   glslang::TSymbolTable&) */

void glslang::TBuiltIns::relateTabledBuiltins(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *in_R9;
  undefined4 *puVar6;
  
  puVar6 = &(anonymous_namespace)::BaseFunctions;
  lVar4 = in_R9[1];
  lVar3 = *in_R9;
  do {
    uVar1 = *puVar6;
    uVar2 = *(undefined8 *)(puVar6 + 2);
    if (lVar4 != lVar3) {
      uVar5 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator(*(undefined8 *)(lVar3 + uVar5 * 8),uVar2,uVar1)
        ;
        lVar4 = in_R9[1];
        lVar3 = *in_R9;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
    }
    puVar6 = puVar6 + 0xc;
  } while (puVar6 != (undefined4 *)&_LC40);
  puVar6 = &(anonymous_namespace)::DerivativeFunctions;
  do {
    uVar1 = *puVar6;
    uVar2 = *(undefined8 *)(puVar6 + 2);
    if (lVar3 != lVar4) {
      uVar5 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator(*(undefined8 *)(lVar3 + uVar5 * 8),uVar2,uVar1)
        ;
        lVar4 = in_R9[1];
        lVar3 = *in_R9;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
    }
    puVar6 = puVar6 + 0xc;
  } while (puVar6 != (undefined4 *)&DAT_0014d850);
  puVar6 = &(anonymous_namespace)::CustomFunctions;
  do {
    uVar1 = *puVar6;
    uVar2 = *(undefined8 *)(puVar6 + 2);
    uVar5 = 0;
    if (lVar4 != lVar3) {
      do {
        glslang::TSymbolTableLevel::relateToOperator(*(undefined8 *)(lVar3 + uVar5 * 8),uVar2,uVar1)
        ;
        lVar4 = in_R9[1];
        lVar3 = *in_R9;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
    }
    puVar6 = puVar6 + 8;
  } while (puVar6 != &(anonymous_namespace)::DerivativeFunctions);
  return;
}



/* glslang::TBuiltInParseables::TBuiltInParseables() */

void __thiscall glslang::TBuiltInParseables::TBuiltInParseables(TBuiltInParseables *this)

{
  undefined8 uVar1;
  TBuiltInParseables *pTVar2;
  TBuiltInParseables *pTVar3;
  
  *(undefined **)this = &DAT_0014ce78;
  uVar1 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(TBuiltInParseables **)(this + 0x10) = this + 0x20;
  this[0x20] = (TBuiltInParseables)0x0;
  pTVar2 = this + 0x30;
  do {
    uVar1 = glslang::GetThreadPoolAllocator();
    *(undefined8 *)(pTVar2 + 0x10) = 0;
    *(undefined8 *)pTVar2 = uVar1;
    pTVar3 = pTVar2 + 0x28;
    *(TBuiltInParseables **)(pTVar2 + 8) = pTVar2 + 0x18;
    pTVar2[0x18] = (TBuiltInParseables)0x0;
    pTVar2 = pTVar3;
  } while (pTVar3 != this + 0x260);
  return;
}



/* glslang::TBuiltInParseables::~TBuiltInParseables() */

void __thiscall glslang::TBuiltInParseables::~TBuiltInParseables(TBuiltInParseables *this)

{
  return;
}



/* glslang::TBuiltInParseables::~TBuiltInParseables() */

void __thiscall glslang::TBuiltInParseables::~TBuiltInParseables(TBuiltInParseables *this)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::TBuiltIns() */

void __thiscall glslang::TBuiltIns::TBuiltIns(TBuiltIns *this)

{
  undefined8 uVar1;
  TBuiltIns *pTVar2;
  TBuiltIns *pTVar3;
  
  *(undefined **)this = &DAT_0014ce78;
  uVar1 = glslang::GetThreadPoolAllocator();
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(TBuiltIns **)(this + 0x10) = this + 0x20;
  this[0x20] = (TBuiltIns)0x0;
  pTVar2 = this + 0x30;
  do {
    uVar1 = glslang::GetThreadPoolAllocator();
    *(undefined8 *)(pTVar2 + 0x10) = 0;
    *(undefined8 *)pTVar2 = uVar1;
    pTVar3 = pTVar2 + 0x28;
    *(TBuiltIns **)(pTVar2 + 8) = pTVar2 + 0x18;
    pTVar2[0x18] = (TBuiltIns)0x0;
    pTVar2 = pTVar3;
  } while (pTVar3 != this + 0x260);
  *(undefined ***)this = &PTR__TBuiltIns_0014cec8;
  *(undefined **)(this + 0x290) = &_LC37;
  *(undefined **)(this + 0x2a0) = &_LC27;
  *(undefined **)(this + 0x2a8) = &_LC28;
  *(undefined **)(this + 0x2b0) = &_LC29;
  *(undefined **)(this + 0x2b8) = &_LC30;
  *(undefined **)(this + 0x2e0) = &_LC38;
  *(undefined **)(this + 0x2c0) = &_LC31;
  *(undefined **)(this + 0x2c8) = &_LC32;
  *(undefined **)(this + 0x280) = &_LC39;
  *(undefined **)(this + 0x2d0) = &_LC33;
  *(undefined **)(this + 0x2d8) = &_LC34;
  *(undefined **)(this + 0x270) = &_LC35;
  *(undefined **)(this + 0x278) = &_LC36;
  uVar1 = _UNK_0014eaf8;
  *(undefined8 *)(this + 0x34c) = __LC40;
  *(undefined8 *)(this + 0x354) = uVar1;
  uVar1 = _UNK_0014eb08;
  *(undefined8 *)(this + 0x35c) = __LC41;
  *(undefined8 *)(this + 0x364) = uVar1;
  return;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

undefined8 *
std::
__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)param_2 - (long)param_1;
  if (0 < lVar2 >> 7) {
    puVar3 = param_1 + (lVar2 >> 7) * 0x10;
    do {
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (*param_1);
      if (bVar1) {
        return param_1;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[4]);
      if (bVar1) {
        return param_1 + 4;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[8]);
      if (bVar1) {
        return param_1 + 8;
      }
      bVar1 = glslang::TType::
              contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                        (param_1[0xc]);
      if (bVar1) {
        return param_1 + 0xc;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar3);
    lVar2 = (long)param_2 - (long)param_1;
  }
  lVar2 = lVar2 >> 5;
  if (lVar2 != 2) {
    if (lVar2 != 3) {
      if (lVar2 != 1) {
        return param_2;
      }
      goto LAB_001008d1;
    }
    bVar1 = glslang::TType::
            contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                      (*param_1);
    if (bVar1) {
      return param_1;
    }
    param_1 = param_1 + 4;
  }
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (bVar1) {
    return param_1;
  }
  param_1 = param_1 + 4;
LAB_001008d1:
  bVar1 = glslang::TType::
          contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
                    (*param_1);
  if (!bVar1) {
    return param_2;
  }
  return param_1;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::append(char const*, unsigned long) [clone .isra.0] */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (0x7fffffffffffffff - uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8);
  uVar1 = uVar2 + param_2;
  if (pbVar4 == this + 0x18) {
    uVar3 = 0xf;
  }
  else {
    uVar3 = *(ulong *)(this + 0x18);
  }
  if (uVar1 <= uVar3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        pbVar4[uVar2] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)*param_1;
        *(ulong *)(this + 0x10) = uVar1;
        *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
        return;
      }
      memcpy(pbVar4 + uVar2,param_1,param_2);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    *(ulong *)(this + 0x10) = uVar1;
    pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
    return;
  }
  _M_mutate(this,uVar2,0,param_1,param_2);
  *(ulong *)(this + 0x10) = uVar1;
  *(undefined1 *)(*(long *)(this + 8) + uVar1) = 0;
  return;
}



/* glslang::TBuiltIns::initialize(TBuiltInResource const&, int, EProfile, glslang::SpvVersion
   const&, EShLanguage) */

void __thiscall
glslang::TBuiltIns::initialize
          (TBuiltIns *this,undefined4 *param_1,int param_2,int param_4,int *param_5,int param_6)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  bool bVar1;
  bool bVar2;
  long in_FS_OFFSET;
  bool bVar3;
  char local_108 [200];
  long local_40;
  
  this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 8) {
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxVertexAttribs = %d;",param_1[4]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxVertexUniformVectors = %d;",
                   param_1[0xc]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxVertexTextureImageUnits = %d;",
                   param_1[7]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxCombinedTextureImageUnits = %d;",
                   param_1[8]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxTextureImageUnits = %d;",param_1[9]
                  );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxFragmentUniformVectors = %d;",
                   param_1[0xe]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxDrawBuffers = %d;",param_1[0xb]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    if (param_2 == 100) {
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxVaryingVectors = %d;",
                     param_1[0xd]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
    }
    else {
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxVertexOutputVectors = %d;",
                     param_1[0xf]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxFragmentInputVectors = %d;",
                     param_1[0x10]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MinProgramTexelOffset = %d;",
                     param_1[0x11]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxProgramTexelOffset = %d;",
                     param_1[0x12]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (0x135 < param_2) {
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryInputComponents = %d;",
                       param_1[0x21]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryOutputComponents = %d;",
                       param_1[0x22]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryImageUniforms = %d;",
                       param_1[0x2b]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryTextureImageUnits = %d;",
                       param_1[0x2e]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryOutputVertices = %d;",
                       param_1[0x2f]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryTotalOutputComponents = %d;",
                       param_1[0x30]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryUniformComponents = %d;",
                       param_1[0x31]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryAtomicCounters = %d;",
                       param_1[0x43]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryAtomicCounterBuffers = %d;",
                       param_1[0x4a]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlInputComponents = %d;",
                       param_1[0x33]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlOutputComponents = %d;",
                       param_1[0x34]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlTextureImageUnits = %d;",
                       param_1[0x35]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlUniformComponents = %d;",
                       param_1[0x36]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlTotalOutputComponents = %d;",
                       param_1[0x37]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationInputComponents = %d;",
                       param_1[0x38]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationOutputComponents = %d;",
                       param_1[0x39]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationTextureImageUnits = %d;",
                       param_1[0x3a]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationUniformComponents = %d;",
                       param_1[0x3b]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessPatchComponents = %d;",param_1[0x3c]
                      );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxPatchVertices = %d;",param_1[0x3d]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessGenLevel = %d;",param_1[0x3e]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        if (param_6 - 1U < 2) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,
                 "in gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;highp vec4 gl_SecondaryPositionNV;highp vec4 gl_PositionPerViewNV[];} gl_in[gl_MaxPatchVertices];\n"
                );
        }
        if (0x13f < param_2) {
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlImageUniforms = %d;",
                         param_1[0x29]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationImageUniforms = %d;",
                         param_1[0x2a]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlAtomicCounters = %d;",
                         param_1[0x41]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationAtomicCounters = %d;",
                         param_1[0x42]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlAtomicCounterBuffers = %d;"
                         ,param_1[0x48]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
          __snprintf_chk(local_108,200,2,200,
                         "const int gl_MaxTessEvaluationAtomicCounterBuffers = %d;",param_1[0x49]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
        }
        __snprintf_chk(local_108,200,2,200,"const mediump int gl_MaxDualSourceDrawBuffersEXT = %d;",
                       param_1[0x65]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        if (param_6 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,
                 "mediump vec4 gl_SecondaryFragColorEXT;mediump vec4 gl_SecondaryFragDataEXT[gl_MaxDualSourceDrawBuffersEXT];\n"
                );
        }
        bVar2 = true;
        goto LAB_00101c90;
      }
      if (param_2 < 100) goto LAB_00101525;
    }
    __snprintf_chk(local_108,200,2,200,"const mediump int gl_MaxDualSourceDrawBuffersEXT = %d;",
                   param_1[0x65]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    if (param_6 == 4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,
                 "mediump vec4 gl_SecondaryFragColorEXT;mediump vec4 gl_SecondaryFragDataEXT[gl_MaxDualSourceDrawBuffersEXT];\n"
                );
      goto LAB_00101525;
    }
    bVar2 = true;
LAB_00102689:
    if ((param_2 < 0x140) || (!bVar2)) goto LAB_00101525;
  }
  else {
    if (400 < param_2) {
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVertexUniformVectors = %d;",param_1[0xc])
      ;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxFragmentUniformVectors = %d;",
                     param_1[0xe]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVaryingVectors = %d;",param_1[0xd]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
    }
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVertexAttribs = %d;",param_1[4]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVertexTextureImageUnits = %d;",param_1[7]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxCombinedTextureImageUnits = %d;",param_1[8]
                  );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxTextureImageUnits = %d;",param_1[9]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxDrawBuffers = %d;",param_1[0xb]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxLights = %d;",*param_1);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxClipPlanes = %d;",param_1[1]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxTextureUnits = %d;",param_1[2]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxTextureCoords = %d;",param_1[3]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVertexUniformComponents = %d;",param_1[5]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    if ((param_2 < 0x1a4) || (param_4 == 4)) {
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxVaryingFloats = %d;",param_1[6]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxFragmentUniformComponents = %d;",
                     param_1[10]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (*param_5 != 0) {
LAB_00101511:
        if (param_2 < 0x82) goto LAB_00101525;
        goto LAB_00100c5e;
      }
      if (param_2 < 0x83) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,
               "uniform mat4  gl_TextureMatrix[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverse[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixTranspose[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverseTranspose[gl_MaxTextureCoords];uniform vec4  gl_ClipPlane[gl_MaxClipPlanes];uniform gl_LightSourceParameters  gl_LightSource[gl_MaxLights];uniform gl_LightProducts gl_FrontLightProduct[gl_MaxLights];uniform gl_LightProducts gl_BackLightProduct[gl_MaxLights];uniform vec4  gl_TextureEnvColor[gl_MaxTextureImageUnits];uniform vec4  gl_EyePlaneS[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneT[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneR[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneQ[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneS[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneT[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneR[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneQ[gl_MaxTextureCoords];"
              );
        goto LAB_00101511;
      }
      if (param_2 != 0x8c) {
        if (param_4 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,
                 "uniform mat4  gl_TextureMatrix[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverse[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixTranspose[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverseTranspose[gl_MaxTextureCoords];uniform vec4  gl_ClipPlane[gl_MaxClipPlanes];uniform gl_LightSourceParameters  gl_LightSource[gl_MaxLights];uniform gl_LightProducts gl_FrontLightProduct[gl_MaxLights];uniform gl_LightProducts gl_BackLightProduct[gl_MaxLights];uniform vec4  gl_TextureEnvColor[gl_MaxTextureImageUnits];uniform vec4  gl_EyePlaneS[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneT[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneR[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneQ[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneS[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneT[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneR[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneQ[gl_MaxTextureCoords];"
                );
        }
        goto LAB_00100c5e;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,
                 "uniform mat4  gl_TextureMatrix[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverse[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixTranspose[gl_MaxTextureCoords];uniform mat4  gl_TextureMatrixInverseTranspose[gl_MaxTextureCoords];uniform vec4  gl_ClipPlane[gl_MaxClipPlanes];uniform gl_LightSourceParameters  gl_LightSource[gl_MaxLights];uniform gl_LightProducts gl_FrontLightProduct[gl_MaxLights];uniform gl_LightProducts gl_BackLightProduct[gl_MaxLights];uniform vec4  gl_TextureEnvColor[gl_MaxTextureImageUnits];uniform vec4  gl_EyePlaneS[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneT[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneR[gl_MaxTextureCoords];uniform vec4  gl_EyePlaneQ[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneS[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneT[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneR[gl_MaxTextureCoords];uniform vec4  gl_ObjectPlaneQ[gl_MaxTextureCoords];"
                );
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxClipDistances = %d;",param_1[0x13]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVaryingComponents = %d;",param_1[0x1f]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MinProgramTexelOffset = %d;",
                     param_1[0x11]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxProgramTexelOffset = %d;",
                     param_1[0x12]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
LAB_00100d27:
      __snprintf_chk(local_108,200,2,200,
                     "const int gl_MaxCombinedImageUnitsAndFragmentOutputs = %d;",param_1[0x25]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxImageSamples = %d;",param_1[0x27]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlImageUniforms = %d;",
                     param_1[0x29]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationImageUniforms = %d;",
                     param_1[0x2a]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryImageUniforms = %d;",param_1[0x2b]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
LAB_00100e28:
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxImageUnits = %d;",param_1[0x24]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedShaderOutputResources = %d;",
                     param_1[0x26]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVertexImageUniforms = %d;",param_1[0x28]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxFragmentImageUniforms = %d;",param_1[0x2c]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedImageUniforms = %d;",param_1[0x2d]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      bVar3 = true;
LAB_00100f27:
      bVar1 = (bool)(0x1a3 < param_2 & bVar3);
      if (bVar1) {
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeImageUniforms = %d;",
                       param_1[0x1c]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeAtomicCounters = %d;",
                       param_1[0x1d]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeAtomicCounterBuffers = %d;",
                       param_1[0x1e]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,"\n");
        bVar2 = false;
        bVar3 = bVar1;
        goto LAB_00100fe2;
      }
      bVar2 = (bool)(0x1c1 < param_2 & bVar3);
      if (!bVar2) goto LAB_00102689;
    }
    else {
      __snprintf_chk(local_108,200,2,200,"const int  gl_MaxFragmentUniformComponents = %d;",
                     param_1[10]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (*param_5 == 0) {
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxClipDistances = %d;",param_1[0x13]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxVaryingComponents = %d;",param_1[0x1f]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MinProgramTexelOffset = %d;",
                       param_1[0x11]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxProgramTexelOffset = %d;",
                       param_1[0x12]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
      }
      else {
LAB_00100c5e:
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxClipDistances = %d;",param_1[0x13]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxVaryingComponents = %d;",param_1[0x1f]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MinProgramTexelOffset = %d;",
                       param_1[0x11]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const mediump int  gl_MaxProgramTexelOffset = %d;",
                       param_1[0x12]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        if (param_2 < 0x96) goto LAB_00100d27;
      }
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryInputComponents = %d;",
                     param_1[0x21]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryOutputComponents = %d;",
                     param_1[0x22]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryTextureImageUnits = %d;",
                     param_1[0x2e]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryOutputVertices = %d;",
                     param_1[0x2f]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryTotalOutputComponents = %d;",
                     param_1[0x30]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryUniformComponents = %d;",
                     param_1[0x31]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryVaryingComponents = %d;",
                     param_1[0x32]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVertexOutputComponents = %d;",
                     param_1[0x20]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxFragmentInputComponents = %d;",
                     param_1[0x23]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlInputComponents = %d;",
                     param_1[0x33]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlOutputComponents = %d;",
                     param_1[0x34]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlTextureImageUnits = %d;",
                     param_1[0x35]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlUniformComponents = %d;",
                     param_1[0x36]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlTotalOutputComponents = %d;",
                     param_1[0x37]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationInputComponents = %d;",
                     param_1[0x38]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationOutputComponents = %d;",
                     param_1[0x39]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationTextureImageUnits = %d;",
                     param_1[0x3a]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationUniformComponents = %d;",
                     param_1[0x3b]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessPatchComponents = %d;",param_1[0x3c]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessGenLevel = %d;",param_1[0x3e]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxPatchVertices = %d;",param_1[0x3d]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (param_6 - 1U < 2) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,
               "in gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
        if (param_4 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
        }
        if (0x1c1 < param_2) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,
                 "float gl_CullDistance[];vec4 gl_SecondaryPositionNV;vec4 gl_PositionPerViewNV[];")
          ;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,"} gl_in[gl_MaxPatchVertices];\n");
      }
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxViewports = %d;",param_1[0x3f]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,
                     "const int gl_MaxCombinedImageUnitsAndFragmentOutputs = %d;",param_1[0x25]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxImageSamples = %d;",param_1[0x27]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlImageUniforms = %d;",
                     param_1[0x29]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationImageUniforms = %d;",
                     param_1[0x2a]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryImageUniforms = %d;",param_1[0x2b]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (param_2 < 0x1ae) {
        if (param_2 < 0x1a4) goto LAB_00100e28;
      }
      else {
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTransformFeedbackBuffers = %d;",
                       param_1[0x4e]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,
                       "const int gl_MaxTransformFeedbackInterleavedComponents = %d;",param_1[0x4f])
        ;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
      }
      bVar2 = false;
LAB_00101c90:
      __snprintf_chk(local_108,200,2,200,
                     "const ivec3 gl_MaxComputeWorkGroupCount = ivec3(%d,%d,%d);",param_1[0x14],
                     param_1[0x15],param_1[0x16]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const ivec3 gl_MaxComputeWorkGroupSize = ivec3(%d,%d,%d);"
                     ,param_1[0x17],param_1[0x18],param_1[0x19]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeUniformComponents = %d;",
                     param_1[0x1a]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeTextureImageUnits = %d;",
                     param_1[0x1b]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,"\n");
      bVar3 = param_4 != 8;
      if (!bVar2) {
        if ((0x81 < param_2) && (bVar3)) goto LAB_00100e28;
        goto LAB_00100f27;
      }
      bVar1 = 0x1a3 < param_2 && bVar3;
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxImageUnits = %d;",param_1[0x24]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedShaderOutputResources = %d;",
                     param_1[0x26]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVertexImageUniforms = %d;",param_1[0x28]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxFragmentImageUniforms = %d;",param_1[0x2c]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedImageUniforms = %d;",param_1[0x2d]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeImageUniforms = %d;",param_1[0x1c])
      ;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeAtomicCounters = %d;",param_1[0x1d]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxComputeAtomicCounterBuffers = %d;",
                     param_1[0x1e]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,"\n");
LAB_00100fe2:
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVertexAtomicCounters = %d;",param_1[0x40])
      ;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxFragmentAtomicCounters = %d;",
                     param_1[0x44]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedAtomicCounters = %d;",
                     param_1[0x45]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxAtomicCounterBindings = %d;",param_1[0x46]
                    );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxVertexAtomicCounterBuffers = %d;",
                     param_1[0x47]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxFragmentAtomicCounterBuffers = %d;",
                     param_1[0x4b]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedAtomicCounterBuffers = %d;",
                     param_1[0x4c]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      __snprintf_chk(local_108,200,2,200,"const int gl_MaxAtomicCounterBufferSize = %d;",
                     param_1[0x4d]);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,local_108);
      if (bVar1) {
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlAtomicCounters = %d;",
                       param_1[0x41]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessEvaluationAtomicCounters = %d;",
                       param_1[0x42]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryAtomicCounters = %d;",
                       param_1[0x43]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxTessControlAtomicCounterBuffers = %d;",
                       param_1[0x48]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,
                       "const int gl_MaxTessEvaluationAtomicCounterBuffers = %d;",param_1[0x49]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        __snprintf_chk(local_108,200,2,200,"const int gl_MaxGeometryAtomicCounterBuffers = %d;",
                       param_1[0x4a]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,local_108);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,"\n");
      }
      if ((param_2 < 0x1c2) || (!bVar3)) {
        if (bVar2) {
          __snprintf_chk(local_108,200,2,200,"const int gl_MaxSamples = %d;",param_1[0x52]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,local_108);
        }
        goto LAB_00102689;
      }
    }
    __snprintf_chk(local_108,200,2,200,"const int gl_MaxCullDistances = %d;",param_1[0x50]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int gl_MaxCombinedClipAndCullDistances = %d;",
                   param_1[0x51]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
    __snprintf_chk(local_108,200,2,200,"const int gl_MaxSamples = %d;",param_1[0x52]);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,local_108);
  }
  __snprintf_chk(local_108,200,2,200,"const int gl_MaxMeshOutputVerticesNV = %d;",param_1[0x53]);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,local_108);
  __snprintf_chk(local_108,200,2,200,"const int gl_MaxMeshOutputPrimitivesNV = %d;",param_1[0x54]);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,local_108);
  __snprintf_chk(local_108,200,2,200,"const ivec3 gl_MaxMeshWorkGroupSizeNV = ivec3(%d,%d,%d);",
                 param_1[0x55],param_1[0x56],param_1[0x57]);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,local_108);
  __snprintf_chk(local_108,200,2,200,"const ivec3 gl_MaxTaskWorkGroupSizeNV = ivec3(%d,%d,%d);",
                 param_1[0x58],param_1[0x59],param_1[0x5a]);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,local_108);
  __snprintf_chk(local_108,200,2,200,"const int gl_MaxMeshViewCountNV = %d;",param_1[0x5b]);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,local_108);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"\n");
LAB_00101525:
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"\n");
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* glslang::TBuiltIns::addSamplingFunctions(glslang::TSampler, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile) */

void __thiscall
glslang::TBuiltIns::addSamplingFunctions
          (TBuiltIns *this,uint param_2,long param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  long in_FS_OFFSET;
  int local_cc;
  int local_ac;
  byte local_7a;
  int local_74;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  ulong local_58;
  char local_50 [16];
  long local_40;
  
  uVar11 = 0;
  uVar14 = param_2 >> 8 & 0xff;
  bVar7 = (byte)(param_2 >> 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar16 = (byte)param_2;
  uVar12 = param_2 >> 0x11;
  uVar9 = param_2 >> 0x14;
  uVar13 = param_2 >> 0x12;
  bVar19 = (byte)uVar12 & 1;
LAB_00102a79:
  iVar17 = 0;
LAB_00102a90:
  iVar22 = 0;
LAB_00102aad:
  iVar23 = iVar17 + uVar11 + iVar22;
  bVar6 = false;
LAB_00102aca:
  cVar20 = (char)iVar17;
  if (((3 < iVar23) || (bVar7 == 6 || (uVar13 & 1) != 0)) || ((uVar9 & 1) == 0)) {
    bVar4 = false;
    iVar15 = iVar23;
    goto LAB_00102c33;
  }
  bVar4 = false;
  local_cc = iVar23;
  do {
    iVar15 = local_cc;
    local_ac = uVar11 + 1;
    bVar3 = false;
    do {
      uVar21 = 0;
LAB_00102b6b:
      local_74 = (uint)((byte)(param_2 >> 0x10) & 1) + *(int *)(this + (ulong)uVar14 * 4 + 0x348);
      if ((uVar12 & 1) == 0) {
        local_74 = local_74 + uVar11;
        local_7a = 0;
      }
      else {
        iVar18 = 2;
        if (1 < local_74) {
          iVar18 = local_74;
        }
        local_74 = iVar18 + local_ac;
        local_7a = 0;
        if (4 < local_74) {
          local_74 = 4;
          local_7a = bVar19;
        }
      }
      if ((((uVar11 ^ 1) & uVar21) == 0) &&
         ((uVar21 == 0 || ((bVar7 != 3 && (uVar12 & 1) == 0 && ((uVar9 & 1) != 0)))))) {
        bVar1 = false;
LAB_00102e59:
        bVar2 = false;
LAB_00102e6a:
        local_68 = glslang::GetThreadPoolAllocator();
        local_58 = 0;
        local_50[0] = '\0';
        local_60 = local_50;
        if ((uVar12 & 1) == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,*(char **)(this + (ulong)bVar16 * 8 + 0x288));
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"vec4 ");
        }
        else if (bVar16 == 3) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"float16_t ");
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"float ");
        }
        if (bVar4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"texel");
          if (uVar11 == 0) {
            if (iVar17 == 0) {
              if (!bVar3) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,"Fetch");
                if (bVar6) {
                  bVar5 = false;
                  goto LAB_00103484;
                }
LAB_00102f14:
                bVar5 = false;
                if (bVar2) goto LAB_001031e9;
                goto LAB_00102f1f;
              }
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"Grad");
LAB_00103881:
              bVar5 = false;
              goto LAB_001034b5;
            }
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,"Lod");
            if (!bVar3) goto LAB_00103881;
            goto LAB_0010372c;
          }
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"texture");
          if (uVar11 == 0) {
            if (iVar17 == 0) {
              if (!bVar3) {
                if (bVar6) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,"Offset");
                }
                goto LAB_00102f14;
              }
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"Grad");
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"Lod");
              if (bVar3) goto LAB_0010372c;
            }
            bVar5 = false;
            goto LAB_0010345f;
          }
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
               "Proj");
        if (iVar17 != 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"Lod");
        }
        if (!bVar3) {
          bVar5 = false;
          goto LAB_00103455;
        }
LAB_0010372c:
        bVar5 = false;
LAB_0010372f:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
               "Grad");
LAB_00103455:
        if (bVar4) goto LAB_001034b5;
LAB_0010345f:
        if (bVar6) goto LAB_00103484;
LAB_00103469:
        if (bVar2) goto LAB_001031e9;
        if (bVar5) goto LAB_001033b4;
LAB_00102f1f:
        bVar5 = false;
        do {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"(");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,*(char **)(param_3 + 8),*(ulong *)(param_3 + 0x10));
          if (uVar21 == 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,",");
            iVar18 = 8;
            if (!bVar4) {
              iVar18 = (-(uint)!bVar1 & 0xfffffffe) + 3;
            }
            if (local_74 == 1) {
              pcVar10 = (char *)TType::getBasicString();
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,pcVar10);
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,*(char **)(this + (long)iVar18 * 8 + 0x288));
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"vec");
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,*(char **)(this + (long)local_74 * 8 + 0x260));
            }
            if (local_7a != 0) goto LAB_001035ae;
LAB_001035bd:
            if (bVar4) {
LAB_00102f86:
              if (((bVar7 != 6) && (bVar7 != 5)) || ((uVar13 & 1) != 0)) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",int");
              }
            }
            if (iVar17 == 0) {
LAB_001035d7:
              if (bVar3) {
                if (*(int *)(this + (ulong)uVar14 * 4 + 0x348) == 1) {
                  if (!bVar1) goto LAB_00103272;
                  goto LAB_001034d1;
                }
                if (!bVar1) goto LAB_00103600;
LAB_00102ff4:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",f16vec");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,
                           *(char **)(this + (long)*(int *)(this + (ulong)uVar14 * 4 + 0x348) * 8 +
                                             0x260));
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",f16vec");
LAB_00103034:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,
                           *(char **)(this + (long)*(int *)(this + (ulong)uVar14 * 4 + 0x348) * 8 +
                                             0x260));
              }
              if (bVar6) goto LAB_0010305a;
LAB_00103097:
              if (bVar2) {
                if (bVar1) goto LAB_001030b4;
LAB_0010329b:
                local_70 = ",float";
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",float");
                if (bVar5) goto LAB_001033c0;
                if (iVar22 == 0) goto LAB_001032c1;
              }
              else {
LAB_001034fa:
                if (bVar5) goto LAB_001033c0;
                if (iVar22 == 0) goto LAB_0010350f;
LAB_00103402:
                local_70 = ",float16_t";
                if (!bVar1) {
                  local_70 = ",float";
                }
              }
LAB_001030dd:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,local_70);
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,");\n");
              bVar8 = bVar3;
            }
            else {
              if (!bVar1) goto LAB_0010323b;
LAB_00102fbd:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",float16_t");
              local_70 = ",float16_t";
              if (bVar3) {
                if (*(int *)(this + (ulong)uVar14 * 4 + 0x348) != 1) goto LAB_00102ff4;
LAB_001034d1:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",float16_t,float16_t");
                if (bVar6) goto LAB_0010305a;
                if (!bVar2) goto LAB_001034fa;
              }
              else {
                if (bVar6) goto LAB_0010305a;
                if (!bVar2) goto LAB_001037a3;
              }
LAB_001030b4:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",float16_t");
              local_70 = ",float16_t";
              if (bVar5) {
LAB_001033c0:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_68,",out ");
                if ((uVar12 & 1) == 0) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,*(char **)(this + (ulong)bVar16 * 8 + 0x288));
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,"vec4");
                }
                else if (bVar16 == 3) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,"float16_t");
                }
                else {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,"float");
                }
                if (iVar22 != 0) goto LAB_00103402;
              }
              else if (iVar22 != 0) goto LAB_001030dd;
LAB_001032c1:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,");\n");
              bVar8 = (bool)((bVar3 ^ 1U) & bVar2);
            }
            if (bVar8) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       (this + 0xd0),local_60,local_58);
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       (this + 0xf8),local_60,local_58);
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       (this + 8),local_60,local_58);
            }
            if (!bVar5) goto LAB_0010313e;
LAB_00103173:
            if ((!bVar2) &&
               (((param_5 != 8 && (0x1c1 < param_4)) &&
                (bVar2 = true, !bVar4 && (uVar11 == 0 && iVar17 == 0))))) goto LAB_00102e6a;
            if ((bVar1) || (bVar16 != 3)) {
              if (uVar21 != 0) break;
              uVar21 = 1;
              goto LAB_00102b6b;
            }
            if (((uVar12 & 1) != 0) && (local_7a == 0)) {
              local_74 = local_74 + -1;
              local_7a = bVar19;
            }
            bVar1 = true;
            goto LAB_00102e59;
          }
          if (bVar1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,",f16vec4");
            if (local_7a != 0) {
LAB_001035ae:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",float");
              goto LAB_001035bd;
            }
            if (bVar4) goto LAB_00102f86;
            if (iVar17 != 0) goto LAB_00102fbd;
            goto LAB_001035d7;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,",vec4");
          if (local_7a != 0) goto LAB_001035ae;
          if (bVar4) goto LAB_00102f86;
          if (iVar17 == 0) goto LAB_001035d7;
LAB_0010323b:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,",float");
          local_70 = ",float";
          if (bVar3) {
            if (*(int *)(this + (ulong)uVar14 * 4 + 0x348) != 1) {
LAB_00103600:
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",vec");
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,
                       *(char **)(this + (long)*(int *)(this + (ulong)uVar14 * 4 + 0x348) * 8 +
                                         0x260));
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",vec");
              goto LAB_00103034;
            }
LAB_00103272:
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,",float,float");
            if (bVar6) goto LAB_0010305a;
            if (bVar2) goto LAB_0010329b;
            goto LAB_001034fa;
          }
          if (bVar6) {
LAB_0010305a:
            if (*(int *)(this + (ulong)uVar14 * 4 + 0x348) == 1) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",int");
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,",ivec");
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,
                       *(char **)(this + (long)*(int *)(this + (ulong)uVar14 * 4 + 0x348) * 8 +
                                         0x260));
            }
            goto LAB_00103097;
          }
          if (bVar2) goto LAB_0010329b;
LAB_001037a3:
          if (bVar5) goto LAB_001033c0;
          if (iVar22 != 0) goto LAB_001030dd;
LAB_0010350f:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,");\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 8),local_60,local_58);
LAB_0010313e:
          if ((((bVar7 == 1 || bVar7 == 6) || param_4 < 0x1c2) || param_5 == 8) || (uVar11 != 0))
          goto LAB_00103173;
          local_68 = glslang::GetThreadPoolAllocator();
          local_58 = 0;
          local_50[0] = '\0';
          local_60 = local_50;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"int ");
          if (!bVar4) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,"sparseTexture");
            if (iVar17 == 0) {
              if (!bVar3) {
                if (bVar6) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&local_68,"Offset");
                }
                goto LAB_001033a6;
              }
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"Grad");
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_68,"Lod");
              if (bVar3) goto LAB_00103820;
            }
            bVar5 = true;
            goto LAB_0010345f;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"sparseTexel");
          bVar5 = bVar4;
          if (iVar17 != 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,"Lod");
            if (!bVar3) goto LAB_001034b5;
LAB_00103820:
            bVar5 = true;
            goto LAB_0010372f;
          }
          if (bVar3) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,"Grad");
            goto LAB_001034b5;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"Fetch");
          bVar5 = bVar6;
          if (bVar6) goto LAB_00103484;
LAB_001033a6:
          bVar5 = true;
          if (bVar2) {
LAB_001031e9:
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_68,"Clamp");
          }
          else {
LAB_001033b4:
            bVar5 = true;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"ARB");
        } while( true );
      }
      if (((bVar3) ||
          (((byte)uVar9 & 1) != 1 || ((cVar20 != '\0' || (char)iVar22 != '\0') || (uVar13 & 1) != 0)
          )) || (bVar7 == 6)) break;
      local_cc = local_cc + 1;
      bVar3 = true;
    } while (local_cc != 4);
LAB_00102c33:
    local_cc = iVar15 + 1;
    if (((bVar4) || (3 < local_cc)) ||
       ((bVar7 == 4 || (uVar12 & 1) != 0 || (cVar20 != '\0' || (char)iVar22 != '\0'))))
    goto LAB_00102c5d;
    bVar4 = true;
  } while( true );
LAB_001034b5:
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
             "Fetch");
  goto LAB_0010345f;
LAB_00103484:
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
             "Offset");
  goto LAB_00103469;
LAB_00102c5d:
  iVar23 = iVar23 + 1;
  if (((bVar6) || (iVar23 == 4)) || ((bVar6 = true, (bVar7 & 0xfd) == 4 || ((uVar13 & 1) != 0))))
  goto LAB_00102c86;
  goto LAB_00102aca;
LAB_00102c86:
  if (((iVar22 != 1) && ((uVar13 & 1) == 0 && cVar20 == '\0')) && ((uVar9 & 1) != 0)) {
    if ((uVar14 - 2 & 0xfd) == 0) {
      if (((uVar12 & 1) != 0) && ((param_2 & 0x10000) != 0)) goto LAB_00102cc6;
    }
    else if ((byte)(bVar7 - 5) < 2) goto LAB_00102cc6;
    iVar22 = 1;
    goto LAB_00102aad;
  }
  if (iVar17 == 1) goto LAB_00102cdb;
LAB_00102cc6:
  if (((byte)(bVar7 - 5) < 2 || (uVar13 & 1) != 0) || ((uVar9 & 1) == 0)) goto LAB_00102cdb;
  if (bVar7 == 2) {
    uVar21 = param_2 & 0x10000;
    if ((uVar12 & 1) == 0) goto LAB_00102d51;
  }
  else {
    uVar21 = uVar12 & 1;
    if (bVar7 != 4) goto LAB_00102d51;
  }
  if (uVar21 != 0) goto LAB_00102d13;
LAB_00102d51:
  iVar17 = 1;
  goto LAB_00102a90;
LAB_00102cdb:
  if ((uVar11 == 1) ||
     ((uVar11 = 1, (bVar7 & 0xfd) == 4 || ((param_2 & 0x10000) != 0 || (uVar13 & 1) != 0) ||
      ((uVar9 & 1) == 0)))) {
LAB_00102d13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00102a79;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::(anonymous namespace)::AddTabledBuiltin(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >&, glslang::(anonymous
   namespace)::BuiltInFunction const&) */

void glslang::(anonymous_namespace)::AddTabledBuiltin
               (basic_string *param_1,BuiltInFunction *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint local_58;
  basic_string *local_48;
  
  uVar9 = *(uint *)(param_2 + 0x18);
  local_58 = uVar9 >> 1 & 1;
  if ((uVar9 & 0x1f) == 0) {
    local_58 = 0;
  }
  do {
    uVar3 = local_58;
    uVar14 = 0;
LAB_0010391e:
    do {
      uVar13 = (uint)uVar14;
      if ((*(uint *)(param_2 + 0x14) >> ((int)uVar13 >> 2 & 0x1fU) & 1) != 0) {
        if ((uVar9 & 0x100) == 0) {
          if ((uVar9 & 0x4000) == 0) {
            if (local_58 == 1) {
              if ((uVar14 & 3) == 0) goto LAB_00103ffe;
            }
            else {
LAB_0010395c:
              if (((uVar9 & 0x800) != 0) && ((uVar14 & 3) == 0)) goto LAB_00103910;
            }
          }
          else {
            if ((uVar13 & 3) != 2) goto LAB_00103910;
            if (local_58 != 1) goto LAB_0010395c;
          }
LAB_00103968:
          uVar11 = *(ulong *)(param_1 + 0x10);
          if ((uVar9 & 0x40) == 0) {
            if ((uVar9 & 0x400) == 0) {
              pbVar7 = (basic_string *)(&TypeString)[uVar14];
            }
            else {
              pbVar7 = (basic_string *)(&TypeString)[(int)(uVar13 & 0xfffffffc)];
            }
            sVar5 = strlen((char *)pbVar7);
            if (0x7fffffffffffffff - uVar11 < sVar5) goto LAB_0010428a;
            uVar8 = sVar5 + uVar11;
            pbVar6 = *(basic_string **)(param_1 + 8);
            if (pbVar6 != param_1 + 0x18) goto LAB_001039d2;
LAB_00104126:
            uVar10 = 0xf;
          }
          else {
            pbVar7 = (basic_string *)(&TypeString)[uVar13 & 3];
            sVar5 = strlen((char *)pbVar7);
            if (0x7fffffffffffffff - uVar11 < sVar5) goto LAB_0010428a;
            uVar8 = sVar5 + uVar11;
            pbVar6 = *(basic_string **)(param_1 + 8);
            if (pbVar6 == param_1 + 0x18) goto LAB_00104126;
LAB_001039d2:
            uVar10 = *(ulong *)(param_1 + 0x18);
          }
          local_48 = param_1 + 0x18;
          if (uVar10 < uVar8) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      param_1,uVar11,0,(char *)pbVar7,sVar5);
            pbVar6 = *(basic_string **)(param_1 + 8);
          }
          else if (sVar5 != 0) {
            if (sVar5 == 1) {
              pbVar6[uVar11] = *pbVar7;
              pbVar6 = *(basic_string **)(param_1 + 8);
            }
            else {
              memcpy(pbVar6 + uVar11,pbVar7,sVar5);
              pbVar6 = *(basic_string **)(param_1 + 8);
            }
          }
          *(ulong *)(param_1 + 0x10) = uVar8;
          pbVar6[uVar8] = (basic_string)0x0;
          uVar11 = *(ulong *)(param_1 + 0x10);
          if (uVar11 != 0x7fffffffffffffff) {
            if (*(basic_string **)(param_1 + 8) == local_48) {
              uVar8 = 0xf;
            }
            else {
              uVar8 = *(ulong *)(param_1 + 0x18);
            }
            if (uVar8 < uVar11 + 1) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )param_1,uVar11,0," ",1);
            }
            else {
              (*(basic_string **)(param_1 + 8))[uVar11] = (basic_string)0x20;
            }
            *(ulong *)(param_1 + 0x10) = uVar11 + 1;
            *(undefined1 *)(*(long *)(param_1 + 8) + 1 + uVar11) = 0;
            pbVar7 = *(basic_string **)(param_2 + 8);
            sVar5 = strlen((char *)pbVar7);
            uVar11 = *(ulong *)(param_1 + 0x10);
            if (sVar5 <= 0x7fffffffffffffff - uVar11) {
              pbVar6 = *(basic_string **)(param_1 + 8);
              uVar8 = sVar5 + uVar11;
              if (local_48 == pbVar6) {
                uVar10 = 0xf;
              }
              else {
                uVar10 = *(ulong *)(param_1 + 0x18);
              }
              if (uVar10 < uVar8) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)param_1,uVar11,0,(char *)pbVar7,sVar5);
                pbVar6 = *(basic_string **)(param_1 + 8);
              }
              else if (sVar5 != 0) {
                if (sVar5 == 1) {
                  pbVar6[uVar11] = *pbVar7;
                  pbVar6 = *(basic_string **)(param_1 + 8);
                }
                else {
                  memcpy(pbVar6 + uVar11,pbVar7,sVar5);
                  pbVar6 = *(basic_string **)(param_1 + 8);
                }
              }
              *(ulong *)(param_1 + 0x10) = uVar8;
              pbVar6[uVar8] = (basic_string)0x0;
              uVar11 = *(ulong *)(param_1 + 0x10);
              if (uVar11 != 0x7fffffffffffffff) {
                if (local_48 == *(basic_string **)(param_1 + 8)) {
                  uVar8 = 0xf;
                }
                else {
                  uVar8 = *(ulong *)(param_1 + 0x18);
                }
                if (uVar8 < uVar11 + 1) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)param_1,uVar11,0,"(",1);
                }
                else {
                  (*(basic_string **)(param_1 + 8))[uVar11] = (basic_string)0x28;
                }
                *(ulong *)(param_1 + 0x10) = uVar11 + 1;
                *(undefined1 *)(*(long *)(param_1 + 8) + 1 + uVar11) = 0;
                iVar4 = *(int *)(param_2 + 0x10);
                if (iVar4 < 1) {
                  uVar11 = *(ulong *)(param_1 + 0x10);
                }
                else {
                  uVar11 = *(ulong *)(param_1 + 0x10);
                  iVar12 = 0;
LAB_00103c2d:
                  do {
                    uVar9 = *(uint *)(param_2 + 0x18);
                    if ((iVar4 + -1 == iVar12) && ((uVar9 & 0x20) != 0)) {
                      if (0x7fffffffffffffff - uVar11 < 4) goto LAB_0010428a;
                      uVar8 = uVar11 + 4;
                      if (local_48 == *(basic_string **)(param_1 + 8)) {
                        uVar10 = 0xf;
                      }
                      else {
                        uVar10 = *(ulong *)(param_1 + 0x18);
                      }
                      if (uVar10 < uVar8) {
                        std::__cxx11::
                        basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                        _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                   *)param_1,uVar11,0,"out ",4);
                      }
                      else {
                        *(undefined4 *)(*(basic_string **)(param_1 + 8) + uVar11) = 0x2074756f;
                      }
                      *(ulong *)(param_1 + 0x10) = uVar8;
                      *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                      uVar9 = *(uint *)(param_2 + 0x18);
                      uVar11 = *(ulong *)(param_1 + 0x10);
                    }
                    uVar2 = _UNK_0014eb18;
                    uVar1 = __LC179;
                    if (iVar12 == 0) {
                      if ((uVar9 & 0x1000) != 0) {
                        if (0x7fffffffffffffff - uVar11 < 0x12) goto LAB_0010428a;
                        uVar8 = uVar11 + 0x12;
                        if (local_48 == *(basic_string **)(param_1 + 8)) {
                          uVar10 = 0xf;
                        }
                        else {
                          uVar10 = *(ulong *)(param_1 + 0x18);
                        }
                        if (uVar10 < uVar8) {
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                          _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1,uVar11,0,"coherent volatile ",0x12);
                        }
                        else {
                          pbVar7 = *(basic_string **)(param_1 + 8) + uVar11;
                          *(undefined2 *)(pbVar7 + 0x10) = 0x2065;
                          *(undefined8 *)pbVar7 = uVar1;
                          *(undefined8 *)(pbVar7 + 8) = uVar2;
                        }
                        *(ulong *)(param_1 + 0x10) = uVar8;
                        *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                        uVar9 = *(uint *)(param_2 + 0x18);
                        uVar11 = *(ulong *)(param_1 + 0x10);
                      }
                      if ((uVar9 & 0x200) != 0) {
                        if (0x7fffffffffffffff - uVar11 < 6) goto LAB_0010428a;
                        uVar8 = uVar11 + 6;
                        if (local_48 == *(basic_string **)(param_1 + 8)) {
                          uVar10 = 0xf;
                        }
                        else {
                          uVar10 = *(ulong *)(param_1 + 0x18);
                        }
                        if (uVar10 < uVar8) {
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                          _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1,uVar11,0,"inout ",6);
                        }
                        else {
                          pbVar7 = *(basic_string **)(param_1 + 8) + uVar11;
                          *(undefined4 *)pbVar7 = 0x756f6e69;
                          *(undefined2 *)(pbVar7 + 4) = 0x2074;
                        }
                        *(ulong *)(param_1 + 0x10) = uVar8;
                        *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                        uVar9 = *(uint *)(param_2 + 0x18);
                        uVar11 = *(ulong *)(param_1 + 0x10);
                      }
                      if ((uVar9 & 0x2000) != 0) {
                        if (0x7fffffffffffffff - uVar11 < 4) goto LAB_0010428a;
                        uVar8 = uVar11 + 4;
                        if (local_48 == *(basic_string **)(param_1 + 8)) {
                          uVar10 = 0xf;
                        }
                        else {
                          uVar10 = *(ulong *)(param_1 + 0x18);
                        }
                        if (uVar10 < uVar8) {
                          std::__cxx11::
                          basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                          _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                     *)param_1,uVar11,0,"out ",4);
                        }
                        else {
                          *(undefined4 *)(*(basic_string **)(param_1 + 8) + uVar11) = 0x2074756f;
                        }
                        *(ulong *)(param_1 + 0x10) = uVar8;
                        *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                        uVar9 = *(uint *)(param_2 + 0x18);
                        uVar11 = *(ulong *)(param_1 + 0x10);
                      }
                    }
                    uVar8 = uVar14;
                    if ((uVar9 & 0x80) == 0) {
                      if (local_58 != 0) {
                        iVar4 = *(int *)(param_2 + 0x10);
                        if (iVar4 + -1 == iVar12) {
                          if ((uVar9 & 7) == 0) {
                            if (iVar12 == 0) goto LAB_00103b91;
LAB_00103c99:
                            if (iVar12 != 1) goto LAB_00103ba3;
                            uVar9 = uVar9 & 0x10;
joined_r0x00103b94:
                            if (uVar9 == 0) goto LAB_00103ba3;
                          }
                        }
                        else {
LAB_00103b7c:
                          if ((iVar4 + -2 != iVar12) || ((uVar9 & 4) == 0)) {
                            if (iVar12 != 0) goto LAB_00103c99;
LAB_00103b91:
                            uVar9 = uVar9 & 0x18;
                            goto joined_r0x00103b94;
                          }
                        }
                        uVar8 = (long)(int)(uVar13 & 0xfffffffc);
                      }
LAB_00103ba3:
                      pbVar7 = (basic_string *)(&TypeString)[uVar8];
                    }
                    else {
                      iVar4 = *(int *)(param_2 + 0x10);
                      if (iVar4 + -1 != iVar12) {
                        if (local_58 != 0) goto LAB_00103b7c;
                        goto LAB_00103ba3;
                      }
                      pbVar7 = (basic_string *)(&TypeString)[uVar13 & 3];
                    }
                    sVar5 = strlen((char *)pbVar7);
                    if (0x7fffffffffffffff - uVar11 < sVar5) goto LAB_0010428a;
                    pbVar6 = *(basic_string **)(param_1 + 8);
                    uVar8 = sVar5 + uVar11;
                    if (local_48 == pbVar6) {
                      uVar10 = 0xf;
                    }
                    else {
                      uVar10 = *(ulong *)(param_1 + 0x18);
                    }
                    if (uVar10 < uVar8) {
                      std::__cxx11::
                      basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                 *)param_1,uVar11,0,(char *)pbVar7,sVar5);
                      pbVar6 = *(basic_string **)(param_1 + 8);
                    }
                    else if (sVar5 != 0) {
                      if (sVar5 == 1) {
                        pbVar6[uVar11] = *pbVar7;
                        pbVar6 = *(basic_string **)(param_1 + 8);
                      }
                      else {
                        memcpy(pbVar6 + uVar11,pbVar7,sVar5);
                        pbVar6 = *(basic_string **)(param_1 + 8);
                      }
                    }
                    *(ulong *)(param_1 + 0x10) = uVar8;
                    pbVar6[uVar8] = (basic_string)0x0;
                    iVar4 = *(int *)(param_2 + 0x10);
                    uVar11 = *(ulong *)(param_1 + 0x10);
                    if (iVar4 + -1 <= iVar12) {
                      iVar12 = iVar12 + 1;
                      if (iVar4 <= iVar12) break;
                      goto LAB_00103c2d;
                    }
                    if (uVar11 == 0x7fffffffffffffff) goto LAB_0010428a;
                    uVar8 = uVar11 + 1;
                    if (local_48 == *(basic_string **)(param_1 + 8)) {
                      uVar10 = 0xf;
                    }
                    else {
                      uVar10 = *(ulong *)(param_1 + 0x18);
                    }
                    if (uVar10 < uVar8) {
                      std::__cxx11::
                      basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                                 *)param_1,uVar11,0,",",1);
                    }
                    else {
                      (*(basic_string **)(param_1 + 8))[uVar11] = (basic_string)0x2c;
                    }
                    *(ulong *)(param_1 + 0x10) = uVar8;
                    iVar12 = iVar12 + 1;
                    *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                    iVar4 = *(int *)(param_2 + 0x10);
                    uVar11 = *(ulong *)(param_1 + 0x10);
                  } while (iVar12 < iVar4);
                }
                if (2 < 0x7fffffffffffffff - uVar11) {
                  uVar8 = uVar11 + 3;
                  if (local_48 == *(basic_string **)(param_1 + 8)) {
                    uVar10 = 0xf;
                  }
                  else {
                    uVar10 = *(ulong *)(param_1 + 0x18);
                  }
                  if (uVar10 < uVar8) {
                    std::__cxx11::
                    basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
                    _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                               *)param_1,uVar11,0,");\n",3);
                  }
                  else {
                    pbVar7 = *(basic_string **)(param_1 + 8) + uVar11;
                    *(undefined2 *)pbVar7 = 0x3b29;
                    pbVar7[2] = (basic_string)0xa;
                  }
                  uVar14 = uVar14 + 1;
                  *(ulong *)(param_1 + 0x10) = uVar8;
                  *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
                  uVar9 = *(uint *)(param_2 + 0x18);
                  if (uVar14 == 0x10) break;
                  goto LAB_0010391e;
                }
              }
            }
          }
LAB_0010428a:
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("basic_string::append");
        }
        if ((uVar14 & 3) == 0 && (uVar9 & 0x4000) == 0) {
          if (local_58 == 1) {
LAB_00103ffe:
            if ((uVar9 & 2) == 0) goto LAB_00103910;
          }
          if ((uVar9 & 0x800) == 0) goto LAB_00103968;
        }
      }
LAB_00103910:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x10);
    if ((uVar9 & 0x1f) == 0) {
      return;
    }
    local_58 = 1;
    if (uVar3 == 1) {
      return;
    }
  } while( true );
}



/* glslang::TBuiltIns::addTabledBuiltins(int, EProfile, glslang::SpvVersion const&) */

void glslang::TBuiltIns::addTabledBuiltins(long param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  BuiltInFunction *pBVar3;
  BuiltInFunction *pBVar4;
  
  pBVar3 = (BuiltInFunction *)&(anonymous_namespace)::BaseFunctions;
  do {
    while (*(long *)(pBVar3 + 0x28) == 0) {
LAB_00104430:
      pBVar4 = pBVar3 + 0x30;
      (anonymous_namespace)::AddTabledBuiltin((basic_string *)(param_1 + 8),pBVar3);
      pBVar3 = pBVar4;
      if (pBVar4 == (BuiltInFunction *)&_LC40) goto LAB_00104323;
    }
    puVar2 = *(uint **)(pBVar3 + 0x20);
    puVar1 = puVar2 + *(long *)(pBVar3 + 0x28) * 6;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      if (((param_3 & *puVar2) != 0) &&
         (((int)puVar2[2] <= param_2 || ((0 < (int)puVar2[3] && ((int)puVar2[1] <= param_2))))))
      goto LAB_00104430;
    }
    pBVar3 = pBVar3 + 0x30;
  } while (pBVar3 != (BuiltInFunction *)&_LC40);
LAB_00104323:
  pBVar3 = (BuiltInFunction *)&(anonymous_namespace)::DerivativeFunctions;
  do {
    while (*(long *)(pBVar3 + 0x28) == 0) {
LAB_00104410:
      pBVar4 = pBVar3 + 0x30;
      (anonymous_namespace)::AddTabledBuiltin((basic_string *)(param_1 + 0xd0),pBVar3);
      pBVar3 = pBVar4;
      if (pBVar4 == (BuiltInFunction *)&DAT_0014d850) goto LAB_00104393;
    }
    puVar2 = *(uint **)(pBVar3 + 0x20);
    puVar1 = puVar2 + *(long *)(pBVar3 + 0x28) * 6;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      if (((param_3 & *puVar2) != 0) &&
         (((int)puVar2[2] <= param_2 || ((0 < (int)puVar2[3] && ((int)puVar2[1] <= param_2))))))
      goto LAB_00104410;
    }
    pBVar3 = pBVar3 + 0x30;
  } while (pBVar3 != (BuiltInFunction *)&DAT_0014d850);
LAB_00104393:
  if (param_3 == 8) {
    if (param_2 < 0x140) {
      return;
    }
  }
  else if (param_2 < 0x1c2) {
    return;
  }
  pBVar3 = (BuiltInFunction *)&(anonymous_namespace)::DerivativeFunctions;
  do {
    while (*(long *)(pBVar3 + 0x28) == 0) {
LAB_00104450:
      pBVar4 = pBVar3 + 0x30;
      (anonymous_namespace)::AddTabledBuiltin((basic_string *)(param_1 + 0xf8),pBVar3);
      pBVar3 = pBVar4;
      if (pBVar4 == (BuiltInFunction *)&DAT_0014d850) {
        return;
      }
    }
    puVar2 = *(uint **)(pBVar3 + 0x20);
    puVar1 = puVar2 + *(long *)(pBVar3 + 0x28) * 6;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      if (((param_3 & *puVar2) != 0) &&
         (((int)puVar2[2] <= param_2 || ((0 < (int)puVar2[3] && ((int)puVar2[1] <= param_2))))))
      goto LAB_00104450;
    }
    pBVar3 = pBVar3 + 0x30;
    if (pBVar3 == (BuiltInFunction *)&DAT_0014d850) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::addSubpassSampling(glslang::TSampler, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile) */

void glslang::TBuiltIns::addSubpassSampling(long param_1,ulong param_2,long param_3)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this;
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  this = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(param_1 + 0xd0)
  ;
  pcVar3 = *(char **)(param_1 + 0x288 + (param_2 & 0xff) * 8);
  sVar6 = strlen(pcVar3);
  uVar4 = *(ulong *)(param_1 + 0xe0);
  if (sVar6 <= 0x7fffffffffffffff - uVar4) {
    lVar11 = *(long *)(param_1 + 0xd8);
    lVar1 = param_1 + 0xe8;
    uVar10 = sVar6 + uVar4;
    if (lVar11 == lVar1) {
      uVar9 = 0xf;
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0xe8);
    }
    if (uVar9 < uVar10) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate(this,uVar4,0,pcVar3,sVar6);
      lVar11 = *(long *)(param_1 + 0xd8);
    }
    else if (sVar6 != 0) {
      if (sVar6 == 1) {
        *(char *)(lVar11 + uVar4) = *pcVar3;
        lVar11 = *(long *)(param_1 + 0xd8);
      }
      else {
        memcpy((char *)(lVar11 + uVar4),pcVar3,sVar6);
        lVar11 = *(long *)(param_1 + 0xd8);
      }
    }
    *(ulong *)(param_1 + 0xe0) = uVar10;
    *(undefined1 *)(lVar11 + uVar10) = 0;
    uVar5 = _UNK_0014eb28;
    uVar4 = *(ulong *)(param_1 + 0xe0);
    if (0xf < 0x7fffffffffffffff - uVar4) {
      if (lVar1 == *(long *)(param_1 + 0xd8)) {
        uVar10 = 0xf;
      }
      else {
        uVar10 = *(ulong *)(param_1 + 0xe8);
      }
      if (uVar10 < uVar4 + 0x10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this,uVar4,0,"vec4 subpassLoad",0x10);
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0xd8) + uVar4);
        *puVar2 = __LC182;
        puVar2[1] = uVar5;
      }
      *(ulong *)(param_1 + 0xe0) = uVar4 + 0x10;
      *(undefined1 *)(*(long *)(param_1 + 0xd8) + 0x10 + uVar4) = 0;
      uVar4 = *(ulong *)(param_1 + 0xe0);
      if (uVar4 != 0x7fffffffffffffff) {
        if (lVar1 == *(long *)(param_1 + 0xd8)) {
          uVar10 = 0xf;
        }
        else {
          uVar10 = *(ulong *)(param_1 + 0xe8);
        }
        if (uVar10 < uVar4 + 1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this,uVar4,0,"(",1);
        }
        else {
          *(undefined1 *)(*(long *)(param_1 + 0xd8) + uVar4) = 0x28;
        }
        *(ulong *)(param_1 + 0xe0) = uVar4 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0xd8) + 1 + uVar4) = 0;
        pcVar3 = *(char **)(param_3 + 8);
        sVar6 = strlen(pcVar3);
        uVar4 = *(ulong *)(param_1 + 0xe0);
        if (sVar6 <= 0x7fffffffffffffff - uVar4) {
          lVar11 = *(long *)(param_1 + 0xd8);
          uVar10 = sVar6 + uVar4;
          if (lVar1 == lVar11) {
            uVar9 = 0xf;
          }
          else {
            uVar9 = *(ulong *)(param_1 + 0xe8);
          }
          if (uVar9 < uVar10) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate(this,uVar4,0,pcVar3,sVar6);
            lVar11 = *(long *)(param_1 + 0xd8);
          }
          else if (sVar6 != 0) {
            if (sVar6 == 1) {
              *(char *)(lVar11 + uVar4) = *pcVar3;
              lVar11 = *(long *)(param_1 + 0xd8);
            }
            else {
              memcpy((char *)(lVar11 + uVar4),pcVar3,sVar6);
              lVar11 = *(long *)(param_1 + 0xd8);
            }
          }
          *(ulong *)(param_1 + 0xe0) = uVar10;
          *(undefined1 *)(lVar11 + uVar10) = 0;
          if ((param_2 & 0x40000) != 0) {
            uVar4 = *(ulong *)(param_1 + 0xe0);
            if (0x7fffffffffffffff - uVar4 < 5) goto LAB_001048fa;
            if (lVar1 == *(long *)(param_1 + 0xd8)) {
              uVar10 = 0xf;
            }
            else {
              uVar10 = *(ulong *)(param_1 + 0xe8);
            }
            if (uVar10 < uVar4 + 5) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate(this,uVar4,0,", int",5);
            }
            else {
              puVar8 = (undefined4 *)(*(long *)(param_1 + 0xd8) + uVar4);
              *puVar8 = 0x6e69202c;
              *(undefined1 *)(puVar8 + 1) = 0x74;
            }
            *(ulong *)(param_1 + 0xe0) = uVar4 + 5;
            *(undefined1 *)(*(long *)(param_1 + 0xd8) + 5 + uVar4) = 0;
          }
          uVar4 = *(ulong *)(param_1 + 0xe0);
          if (2 < 0x7fffffffffffffff - uVar4) {
            if (lVar1 == *(long *)(param_1 + 0xd8)) {
              uVar10 = 0xf;
            }
            else {
              uVar10 = *(ulong *)(param_1 + 0xe8);
            }
            if (uVar10 < uVar4 + 3) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate(this,uVar4,0,");\n",3);
            }
            else {
              puVar7 = (undefined2 *)(*(long *)(param_1 + 0xd8) + uVar4);
              *puVar7 = 0x3b29;
              *(undefined1 *)(puVar7 + 1) = 10;
            }
            *(ulong *)(param_1 + 0xe0) = uVar4 + 3;
            *(undefined1 *)(*(long *)(param_1 + 0xd8) + 3 + uVar4) = 0;
            return;
          }
        }
      }
    }
  }
LAB_001048fa:
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TBuiltIns::addQueryFunctions(glslang::TSampler, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile) */

void __thiscall
glslang::TBuiltIns::addQueryFunctions
          (TBuiltIns *this,uint param_2,long param_3,int param_4,int param_5)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_01;
  ulong uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  TBuiltIns *pTVar9;
  byte bVar10;
  uint uVar11;
  char *pcVar12;
  TBuiltIns *pTVar13;
  int iVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_d8;
  char local_c8;
  byte local_c1;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar11 = param_2 >> 0x13;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_2 >> 0x14;
  local_c1 = (byte)uVar4 & 1;
  bVar10 = (byte)(param_2 >> 8);
  uVar5 = param_2 >> 0x12;
  iVar14 = (param_2 >> 0x10 & 1) + *(int *)(this + (ulong)bVar10 * 4 + 0x348);
  if (bVar10 == 4) {
    iVar14 = iVar14 + -1;
    if ((uVar11 & 1) == 0) goto joined_r0x00104abe;
LAB_00104d0f:
    if (param_5 != 8) {
      if (param_4 < 0x1a4) goto LAB_00104c90;
      if (param_5 == 8) goto LAB_00104d31;
      if (iVar14 != 1) goto LAB_001049c0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 8),"int");
      goto LAB_00104a94;
    }
    if (0x135 < param_4) goto LAB_00104d31;
    goto LAB_00104c90;
  }
  if (((uVar11 & 1) == 0) || (bVar10 == 7)) {
joined_r0x00104abe:
    if (param_5 == 8) {
LAB_00104d31:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 8),"highp ");
      if (iVar14 != 1) goto LAB_001049c0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 8),"int");
    }
    else {
      if (iVar14 == 1) goto LAB_00104ade;
LAB_001049c0:
      local_d8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 8);
      uVar1 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar1 < 4) goto LAB_00105314;
      if (*(TBuiltIns **)(this + 0x10) == this + 0x20) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar1 + 4) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(local_d8,uVar1,0,"ivec",4);
      }
      else {
        *(undefined4 *)(*(TBuiltIns **)(this + 0x10) + uVar1) = 0x63657669;
      }
      *(ulong *)(this + 0x18) = uVar1 + 4;
      *(undefined1 *)(*(long *)(this + 0x10) + 4 + uVar1) = 0;
      pTVar9 = *(TBuiltIns **)(this + (long)iVar14 * 8 + 0x260);
      __n = strlen((char *)pTVar9);
      uVar1 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar1 < __n) goto LAB_00105314;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
      uVar8 = __n + uVar1;
      if (this + 0x20 == pTVar13) {
        uVar7 = 0xf;
      }
      else {
        uVar7 = *(ulong *)(this + 0x20);
      }
      if (uVar7 < uVar8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(local_d8,uVar1,0,(char *)pTVar9,__n);
        pTVar13 = *(TBuiltIns **)(this + 0x10);
      }
      else if (__n != 0) {
        if (__n == 1) {
          pTVar13[uVar1] = *pTVar9;
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar13 + uVar1,pTVar9,__n);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
      }
      *(ulong *)(this + 0x18) = uVar8;
      pTVar13[uVar8] = (TBuiltIns)0x0;
    }
    if (((uVar11 & 1) == 0) || ((byte)(bVar10 - 7) < 2)) goto LAB_00104aed;
LAB_00104a94:
    local_d8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
    ;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_d8," imageSize(readonly writeonly volatile coherent ");
  }
  else {
    if (bVar10 != 8) goto LAB_00104d0f;
    if (param_5 == 8) goto LAB_00104d31;
    if (iVar14 != 1) goto LAB_001049c0;
LAB_00104ade:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,"int");
LAB_00104aed:
    local_d8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
    ;
    uVar1 = *(ulong *)(this + 0x18);
    if (0x7fffffffffffffff - uVar1 < 0xd) goto LAB_00105314;
    if (*(TBuiltIns **)(this + 0x10) == this + 0x20) {
      uVar8 = 0xf;
    }
    else {
      uVar8 = *(ulong *)(this + 0x20);
    }
    if (uVar8 < uVar1 + 0xd) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate(local_d8,uVar1,0," textureSize(",0xd);
    }
    else {
      pTVar9 = *(TBuiltIns **)(this + 0x10) + uVar1;
      *(undefined8 *)pTVar9 = 0x6572757478657420;
      *(undefined8 *)(pTVar9 + 5) = 0x28657a6953657275;
    }
    *(ulong *)(this + 0x18) = uVar1 + 0xd;
    *(undefined1 *)(*(long *)(this + 0x10) + 0xd + uVar1) = 0;
  }
  local_d8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  uVar1 = *(ulong *)(this + 0x18);
  uVar8 = *(ulong *)(param_3 + 0x10);
  pTVar9 = *(TBuiltIns **)(param_3 + 8);
  if (0x7fffffffffffffff - uVar1 < uVar8) {
LAB_00105314:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  pTVar13 = *(TBuiltIns **)(this + 0x10);
  uVar7 = uVar8 + uVar1;
  if (pTVar13 == this + 0x20) {
    uVar6 = 0xf;
  }
  else {
    uVar6 = *(ulong *)(this + 0x20);
  }
  if (uVar6 < uVar7) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (local_d8,uVar1,0,(char *)pTVar9,uVar8);
    pTVar13 = *(TBuiltIns **)(this + 0x10);
  }
  else if (uVar8 != 0) {
    if (uVar8 == 1) {
      pTVar13[uVar1] = *pTVar9;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
    }
    else {
      memcpy(pTVar13 + uVar1,pTVar9,uVar8);
      pTVar13 = *(TBuiltIns **)(this + 0x10);
    }
  }
  *(ulong *)(this + 0x18) = uVar7;
  pTVar13[uVar7] = (TBuiltIns)0x0;
  if ((uVar11 & 1) == 0) {
    bVar3 = bVar10 - 5;
  }
  else {
    bVar3 = bVar10 - 7;
  }
  if ((bVar3 < 2) || ((uVar5 & 1) != 0)) {
    uVar1 = *(ulong *)(this + 0x18);
    if (0x7fffffffffffffff - uVar1 < 3) goto LAB_00105314;
    if (this + 0x20 == *(TBuiltIns **)(this + 0x10)) {
      uVar8 = 0xf;
    }
    else {
      uVar8 = *(ulong *)(this + 0x20);
    }
    if (uVar8 < uVar1 + 3) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate(local_d8,uVar1,0,");\n",3);
    }
    else {
      pTVar9 = *(TBuiltIns **)(this + 0x10) + uVar1;
      *(undefined2 *)pTVar9 = 0x3b29;
      pTVar9[2] = (TBuiltIns)0xa;
    }
    *(ulong *)(this + 0x18) = uVar1 + 3;
    *(undefined1 *)(*(long *)(this + 0x10) + 3 + uVar1) = 0;
    if ((param_4 < 0x1ae) || (param_5 == 8)) {
      if ((0x95 < param_4) &&
         (((param_5 != 8 && ((uVar4 & 1) != 0)) && (uVar4 = uVar5, bVar10 != 5))))
      goto joined_r0x001052cb;
      goto LAB_00104c90;
    }
    if ((uVar5 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        if (bVar10 != 5) goto LAB_00104c7d;
        goto LAB_00104c90;
      }
      if ((uVar11 & 1) != 0) goto LAB_00105282;
      if ((bVar10 == 5) || (bVar10 == 6)) goto LAB_00104c90;
      goto LAB_00104e60;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_d8,"int ");
    if (((byte)(bVar10 - 7) < 2) ||
       (pcVar12 = "imageSamples(readonly writeonly volatile coherent ", (uVar11 & 1) == 0)) {
      pcVar12 = "textureSamples(";
    }
  }
  else {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_d8,",int);\n");
    if ((param_4 < 0x1ae) || (param_5 == 8)) {
      if ((0x95 < param_4) && (param_5 != 8)) {
joined_r0x001052cb:
        if ((uVar4 & 1) != 0) {
          local_c1 = 0;
LAB_00104c7d:
          if (bVar10 != 6) goto LAB_00104eb8;
        }
      }
LAB_00104c90:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00105320;
    }
    if ((uVar4 & 1) != 0) {
LAB_00104eb8:
      local_98 = glslang::GetThreadPoolAllocator();
      puVar15 = &local_98;
      local_90 = local_80;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>(puVar15,"vec2 textureQueryLod(");
      local_70 = glslang::GetThreadPoolAllocator();
      local_68 = local_58;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_construct<char_const*>(&local_70,"vec2 textureQueryLOD(");
      this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xd0);
      this_01 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xf8);
      do {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,(char *)puVar15[1],puVar15[2]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,*(char **)(param_3 + 8),*(ulong *)(param_3 + 0x10));
        if (*(int *)(this + (ulong)bVar10 * 4 + 0x348) == 1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float");
          bVar2 = false;
          goto LAB_00104fb3;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,", vec");
        bVar2 = false;
        while( true ) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,*(char **)(this + (long)*(int *)(this + (ulong)bVar10 * 4 + 0x348) * 8 +
                                           0x260));
LAB_00104fb3:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,");\n");
          if ((bVar2) || (local_c8 = (char)param_2, local_c8 != '\x03')) goto LAB_001051f2;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)puVar15[1],puVar15[2]);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,*(char **)(param_3 + 8),*(ulong *)(param_3 + 0x10));
          if (*(int *)(this + (ulong)bVar10 * 4 + 0x348) == 1) break;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", f16vec");
          bVar2 = true;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,", float16_t");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,");\n");
LAB_001051f2:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,(char *)puVar15[1],puVar15[2]);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,*(char **)(param_3 + 8),*(ulong *)(param_3 + 0x10));
        if (*(int *)(this + (ulong)bVar10 * 4 + 0x348) == 1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,", float");
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,", vec");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,*(char **)(this + (long)*(int *)(this + (ulong)bVar10 * 4 + 0x348) * 8 +
                                           0x260));
        }
        puVar15 = puVar15 + 5;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,");\n");
      } while (&local_48 != puVar15);
      if (local_c1 == 0) goto LAB_00104c90;
    }
    if ((uVar11 & 1) != 0) {
LAB_00105282:
      if ((bVar10 != 7) && (bVar10 != 8)) goto LAB_00104c90;
    }
LAB_00104e60:
    pcVar12 = "int textureQueryLevels(";
  }
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (local_d8,pcVar12);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (local_d8,*(char **)(param_3 + 8),*(ulong *)(param_3 + 0x10));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_d8,");\n");
    return;
  }
LAB_00105320:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TBuiltIns::addGatherFunctions(glslang::TSampler, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile) */

void __thiscall
glslang::TBuiltIns::addGatherFunctions
          (TBuiltIns *this,ulong param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  TBuiltIns *pTVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  char *pcVar16;
  byte bVar17;
  bool bVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined8 local_98;
  TBuiltIns *local_90;
  ulong local_88;
  uint local_80;
  uint uStack_7c;
  undefined8 uStack_68;
  char *local_60;
  ulong local_58;
  char local_50;
  undefined7 uStack_4f;
  long local_40;
  
  uVar14 = param_2 & 0xffffffff;
  uVar2 = param_2 >> 0x11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = (byte)(param_2 >> 8);
  bVar17 = (byte)(param_2 >> 0x10) & 1;
  cVar15 = (char)param_2;
  if (bVar3 == 2) {
    bVar20 = (bool)((byte)(param_2 >> 0x12) & 1);
    if ((param_2 >> 0x12 & 1) != 0) goto LAB_00105490;
  }
  else if (((1 < (byte)(bVar3 - 4)) || ((param_2 & 0x40000) != 0)) ||
          ((bVar20 = bVar3 == 5, cVar15 != '\x01' && bVar20 && (param_4 < 0x8c))))
  goto LAB_00105490;
  lVar1 = (param_2 & 0xff) + 0x50;
  bVar18 = false;
  while ((!bVar18 || (cVar15 == '\x03'))) {
    iVar19 = 0;
    do {
      bVar5 = false;
      while ((!bVar5 || ((uVar2 & 1) == 0))) {
        if ((iVar19 == 0) || (bVar3 != 4)) {
          local_98 = glslang::GetThreadPoolAllocator();
          local_80 = local_80 & 0xffffff00;
          local_88 = 0;
          pcVar16 = *(char **)(this + lVar1 * 8 + 8);
          local_90 = (TBuiltIns *)&local_80;
          sVar7 = strlen(pcVar16);
          if (sVar7 < 0x10) {
            pTVar8 = (TBuiltIns *)&local_80;
            if (sVar7 != 0) {
              if (sVar7 == 1) {
                local_80 = CONCAT31(local_80._1_3_,*pcVar16);
              }
              else {
                memcpy((TBuiltIns *)&local_80,pcVar16,sVar7);
              }
            }
          }
          else {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      &local_98,0,0,pcVar16,sVar7);
            pTVar8 = local_90;
          }
          pTVar8[sVar7] = (TBuiltIns)0x0;
          local_88 = sVar7;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"vec4 ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_98,"textureGather");
          if (iVar19 == 1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_98,"Offset");
          }
          else if (iVar19 == 2) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &local_98,"Offsets");
          }
          bVar4 = false;
          uVar12 = local_88;
          do {
            local_88 = uVar12;
            if (uVar12 == 0x7fffffffffffffff) {
LAB_00105975:
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("basic_string::append");
            }
            uVar11 = uVar12 + 1;
            if (local_90 == (TBuiltIns *)&local_80) {
              uVar13 = 0xf;
            }
            else {
              uVar13 = CONCAT44(uStack_7c,local_80);
            }
            if (uVar13 < uVar11) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )&local_98,uVar12,0,"(",1);
            }
            else {
              local_90[uVar12] = (TBuiltIns)0x28;
            }
            local_90[uVar12 + 1] = (TBuiltIns)0x0;
            uVar12 = *(ulong *)(param_3 + 0x10);
            pTVar8 = *(TBuiltIns **)(param_3 + 8);
            local_88 = uVar11;
            if (0x7fffffffffffffff - uVar11 < uVar12) goto LAB_00105975;
            uVar13 = uVar12 + uVar11;
            if (local_90 == (TBuiltIns *)&local_80) {
              uVar9 = 0xf;
            }
            else {
              uVar9 = CONCAT44(uStack_7c,local_80);
            }
            if (uVar9 < uVar13) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )&local_98,uVar11,0,(char *)pTVar8,uVar12);
            }
            else if (uVar12 != 0) {
              if (uVar12 == 1) {
                local_90[uVar11] = *pTVar8;
              }
              else {
                memcpy(local_90 + uVar11,pTVar8,uVar12);
              }
            }
            local_90[uVar13] = (TBuiltIns)0x0;
            local_88 = uVar13;
            if (bVar18) {
              if (0x7fffffffffffffff - uVar13 < 7) goto LAB_00105975;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar12 = 0xf;
              }
              else {
                uVar12 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar12 < uVar13 + 7) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,uVar13,0,",f16vec",7);
              }
              else {
                *(undefined4 *)(local_90 + uVar13) = 0x3631662c;
                *(undefined4 *)(local_90 + uVar13 + 3) = 0x63657636;
              }
              local_90[uVar13 + 7] = (TBuiltIns)0x0;
              local_88 = uVar13 + 7;
            }
            else {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_98,",vec");
            }
            pTVar8 = *(TBuiltIns **)
                      (this + (long)(int)((uint)bVar17 +
                                         *(int *)(this + ((ulong)bVar3 + 0xd0) * 4 + 8)) * 8 + 0x260
                      );
            sVar7 = strlen((char *)pTVar8);
            if (0x7fffffffffffffff - local_88 < sVar7) goto LAB_00105975;
            uVar12 = sVar7 + local_88;
            if (local_90 == (TBuiltIns *)&local_80) {
              uVar11 = 0xf;
            }
            else {
              uVar11 = CONCAT44(uStack_7c,local_80);
            }
            if (uVar11 < uVar12) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )&local_98,local_88,0,(char *)pTVar8,sVar7);
            }
            else if (sVar7 != 0) {
              if (sVar7 == 1) {
                local_90[local_88] = *pTVar8;
              }
              else {
                memcpy(local_90 + local_88,pTVar8,sVar7);
              }
            }
            local_90[uVar12] = (TBuiltIns)0x0;
            local_88 = uVar12;
            if ((uVar2 & 1) != 0) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_98,",float");
            }
            if (iVar19 != 0) {
              if (0x7fffffffffffffff - local_88 < 6) goto LAB_00105975;
              uVar12 = local_88 + 6;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar11 < uVar12) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,local_88,0,",ivec2",6);
              }
              else {
                *(undefined4 *)(local_90 + local_88) = 0x6576692c;
                *(undefined2 *)(local_90 + local_88 + 4) = 0x3263;
              }
              local_90[uVar12] = (TBuiltIns)0x0;
              local_88 = uVar12;
              if (iVar19 == 2) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,"[4]");
              }
            }
            if (bVar4) {
              if (0x7fffffffffffffff - local_88 < 5) goto LAB_00105975;
              uVar12 = local_88 + 5;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar11 < uVar12) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,local_88,0,",out ",5);
              }
              else {
                *(undefined4 *)(local_90 + local_88) = 0x74756f2c;
                (local_90 + local_88)[4] = (TBuiltIns)0x20;
              }
              local_90[uVar12] = (TBuiltIns)0x0;
              pTVar8 = *(TBuiltIns **)(this + lVar1 * 8 + 8);
              local_88 = uVar12;
              sVar7 = strlen((char *)pTVar8);
              if (0x7fffffffffffffff - local_88 < sVar7) goto LAB_00105975;
              uVar12 = sVar7 + local_88;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar11 < uVar12) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,local_88,0,(char *)pTVar8,sVar7);
              }
              else if (sVar7 != 0) {
                if (sVar7 == 1) {
                  local_90[local_88] = *pTVar8;
                }
                else {
                  memcpy(local_90 + local_88,pTVar8,sVar7);
                }
              }
              local_90[uVar12] = (TBuiltIns)0x0;
              local_88 = uVar12;
              if (0x7fffffffffffffff - uVar12 < 5) goto LAB_00105975;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar11 < uVar12 + 5) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,uVar12,0,"vec4 ",5);
              }
              else {
                *(undefined4 *)(local_90 + uVar12) = 0x34636576;
                (local_90 + uVar12)[4] = (TBuiltIns)0x20;
              }
              local_90[uVar12 + 5] = (TBuiltIns)0x0;
              local_88 = uVar12 + 5;
            }
            if (bVar5) {
              if (0x7fffffffffffffff - local_88 < 4) goto LAB_00105975;
              uVar12 = local_88 + 4;
              if (local_90 == (TBuiltIns *)&local_80) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT44(uStack_7c,local_80);
              }
              if (uVar11 < uVar12) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&local_98,local_88,0,",int",4);
              }
              else {
                *(undefined4 *)(local_90 + local_88) = 0x746e692c;
              }
              local_90[uVar12] = (TBuiltIns)0x0;
              local_88 = uVar12;
            }
            if (0x7fffffffffffffff - local_88 < 3) goto LAB_00105975;
            uVar12 = local_88 + 3;
            if (local_90 == (TBuiltIns *)&local_80) {
              uVar11 = 0xf;
            }
            else {
              uVar11 = CONCAT44(uStack_7c,local_80);
            }
            if (uVar11 < uVar12) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )&local_98,local_88,0,");\n",3);
            }
            else {
              *(undefined2 *)(local_90 + local_88) = 0x3b29;
              (local_90 + local_88)[2] = (TBuiltIns)0xa;
            }
            local_90[uVar12] = (TBuiltIns)0x0;
            uVar11 = *(ulong *)(this + 0x18);
            local_88 = uVar12;
            if (0x7fffffffffffffff - uVar11 < uVar12) goto LAB_00105975;
            pTVar8 = *(TBuiltIns **)(this + 0x10);
            uVar13 = uVar12 + uVar11;
            if (pTVar8 == this + 0x20) {
              uVar9 = 0xf;
            }
            else {
              uVar9 = *(ulong *)(this + 0x20);
            }
            if (uVar9 < uVar13) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )(this + 8),uVar11,0,(char *)local_90,uVar12);
              pTVar8 = *(TBuiltIns **)(this + 0x10);
            }
            else if (uVar12 != 0) {
              if (uVar12 == 1) {
                pTVar8[uVar11] = *local_90;
                pTVar8 = *(TBuiltIns **)(this + 0x10);
              }
              else {
                memcpy(pTVar8 + uVar11,local_90,uVar12);
                pTVar8 = *(TBuiltIns **)(this + 0x10);
              }
            }
            *(ulong *)(this + 0x18) = uVar13;
            pTVar8[uVar13] = (TBuiltIns)0x0;
            if (((bVar4) || (param_5 == 8)) || (param_4 < 0x1c2)) break;
            local_98 = glslang::GetThreadPoolAllocator();
            local_80 = 0x20746e69;
            local_88 = 4;
            uStack_7c = uStack_7c & 0xffffff00;
            local_90 = (TBuiltIns *)&local_80;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      &local_98,4,0,"sparseTextureGather",0x13);
            local_88 = 0x17;
            local_90[0x17] = (TBuiltIns)0x0;
            if (iVar19 == 1) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_98,"Offset");
            }
            else if (iVar19 == 2) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &local_98,"Offsets");
            }
            uVar11 = local_88;
            if (0x7fffffffffffffff - local_88 < 3) goto LAB_00105975;
            uVar12 = local_88 + 3;
            if (local_90 == (TBuiltIns *)&local_80) {
              uVar13 = 0xf;
            }
            else {
              uVar13 = CONCAT44(uStack_7c,local_80);
            }
            if (uVar13 < uVar12) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *
                          )&local_98,local_88,0,"ARB",3);
            }
            else {
              *(undefined2 *)(local_90 + local_88) = 0x5241;
              (local_90 + local_88)[2] = (TBuiltIns)0x42;
            }
            local_90[uVar11 + 3] = (TBuiltIns)0x0;
            bVar4 = true;
          } while( true );
        }
        if (bVar5) break;
        bVar5 = true;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != 3);
    uVar14 = uVar14 & 0xff;
    if (bVar18) break;
    bVar18 = true;
  }
  if (((bVar20 == false) && ((uVar2 & 1) == 0)) && ((param_5 != 8 && (0x1c1 < param_4)))) {
    lVar1 = (ulong)bVar3 + 0xd0;
    bVar20 = false;
LAB_00105444:
    bVar18 = (bool)(bVar20 ^ 1);
    do {
      bVar5 = false;
      while ((!bVar5 || (cVar15 == '\x03'))) {
        iVar19 = 0;
        lVar10 = (uVar14 & 0xff) + 0x50;
        do {
          if ((!bVar20) && ((bVar3 != 4 || (iVar19 == 0)))) {
            bVar4 = false;
            goto LAB_00105fc2;
          }
          do {
            if ((bVar3 == 4) && (iVar19 != 0)) break;
            bVar4 = true;
LAB_00105fc2:
            uStack_68 = glslang::GetThreadPoolAllocator();
            local_58 = 0;
            local_50 = '\0';
            local_60 = &local_50;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &uStack_68,*(char **)(this + lVar10 * 8 + 8));
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &uStack_68,"vec4 ");
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   &uStack_68,"textureGather");
            if (bVar18) {
              bVar6 = false;
              goto LAB_001060ae;
            }
            if (iVar19 == 1) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &uStack_68,"Offset");
            }
            else if (iVar19 == 2) {
              bVar6 = false;
              goto LAB_001062f7;
            }
            bVar6 = false;
            while( true ) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &uStack_68,"(");
              uVar2 = *(ulong *)(param_3 + 0x10);
              pcVar16 = *(char **)(param_3 + 8);
              if (0x7fffffffffffffff - local_58 < uVar2) goto LAB_00105975;
              uVar12 = uVar2 + local_58;
              if (local_60 == &local_50) {
                uVar11 = 0xf;
              }
              else {
                uVar11 = CONCAT71(uStack_4f,local_50);
              }
              if (uVar11 < uVar12) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,local_58,0,pcVar16,uVar2);
              }
              else if (uVar2 != 0) {
                if (uVar2 == 1) {
                  local_60[local_58] = *pcVar16;
                }
                else {
                  memcpy(local_60 + local_58,pcVar16,uVar2);
                }
              }
              local_60[uVar12] = '\0';
              local_58 = uVar12;
              if (bVar5) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,",f16vec");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,
                           *(char **)(this + (long)(int)((uint)bVar17 +
                                                        *(int *)(this + lVar1 * 4 + 8)) * 8 + 0x260)
                          );
                if (bVar18) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,",float16_t");
                }
              }
              else {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,",vec");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,
                           *(char **)(this + (long)(int)((uint)bVar17 +
                                                        *(int *)(this + lVar1 * 4 + 8)) * 8 + 0x260)
                          );
                if (bVar18) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,",float");
                }
              }
              if ((iVar19 != 0) &&
                 (std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,",ivec2"), iVar19 == 2)) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,"[4]");
              }
              if (bVar6) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,",out ");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,*(char **)(this + lVar10 * 8 + 8));
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,"vec4 ");
              }
              if (bVar4) {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,",int");
              }
              if (bVar20) {
                pcVar16 = ",float16_t";
                if (!bVar5) {
                  pcVar16 = ",float";
                }
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,pcVar16);
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,");\n");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)(this + 0xd0),local_60,local_58);
              }
              else {
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,");\n");
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)(this + 8),local_60,local_58);
              }
              if (bVar6) break;
              uStack_68 = glslang::GetThreadPoolAllocator();
              local_58 = 0;
              local_50 = '\0';
              local_60 = &local_50;
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &uStack_68,"int ");
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                       &uStack_68,"sparseTextureGather");
              bVar6 = bVar18;
              if (bVar18) {
LAB_001060ae:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,"Lod");
                if (iVar19 == 1) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,"Offset");
                }
                else if (iVar19 == 2) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,"Offsets");
                }
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,"AMD");
              }
              else {
                if (iVar19 == 1) {
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,"Offset");
                  goto LAB_00106310;
                }
                if (iVar19 != 2) goto LAB_00106310;
                bVar6 = true;
LAB_001062f7:
                std::__cxx11::
                basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                          ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                            *)&uStack_68,"Offsets");
                if (bVar6) {
LAB_00106310:
                  bVar6 = true;
                  std::__cxx11::
                  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                            ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
                              *)&uStack_68,"ARB");
                }
              }
            }
          } while (!bVar4);
          iVar19 = iVar19 + 1;
        } while (iVar19 != 3);
        uVar14 = uVar14 & 0xff;
        if (bVar5) break;
        bVar5 = true;
      }
      if (bVar18) goto LAB_001064bc;
      bVar18 = true;
      if (bVar20) break;
    } while( true );
  }
LAB_00105490:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001064bc:
  if (bVar20) goto LAB_00105490;
  bVar20 = true;
  goto LAB_00105444;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::addImageFunctions(glslang::TSampler, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, int, EProfile) */

void __thiscall
glslang::TBuiltIns::addImageFunctions
          (TBuiltIns *this,uint param_2,long param_3,int param_4,int param_5)

{
  TBuiltIns *pTVar1;
  undefined1 *puVar2;
  TBuiltIns *__s;
  undefined8 uVar3;
  uint uVar4;
  byte bVar9;
  ulong uVar5;
  TBuiltIns *pTVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar10;
  uint uVar11;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  undefined **ppuVar12;
  TBuiltIns *pTVar13;
  ulong uVar14;
  size_t sVar15;
  char **ppcVar16;
  char *pcVar17;
  char **ppcVar18;
  char cVar19;
  long in_FS_OFFSET;
  bool bVar20;
  size_t local_f8;
  int local_d8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_c0;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_b8;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  TBuiltIns *local_90;
  ulong local_88;
  ulong local_80 [3];
  char *local_68;
  char **ppcStack_60;
  char *local_58;
  char *pcStack_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar9 = (byte)(param_2 >> 8);
  local_d8 = *(int *)(this + (ulong)bVar9 * 4 + 0x348);
  if ((param_2 & 0x10000) != 0) {
    local_d8 = (local_d8 + 1) - (uint)(bVar9 == 4);
  }
  local_98 = (char *)glslang::GetThreadPoolAllocator();
  local_90 = (TBuiltIns *)local_80;
  puVar2 = *(undefined1 **)(param_3 + 8);
  uVar14 = *(ulong *)(param_3 + 0x10);
  if (uVar14 < 0x10) {
    if (uVar14 == 1) {
      local_80[0] = CONCAT71(local_80[0]._1_7_,*puVar2);
    }
    else if (uVar14 != 0) goto LAB_00107665;
  }
  else {
    if ((long)uVar14 < 0) goto LAB_00107ced;
    local_90 = (TBuiltIns *)glslang::TPoolAllocator::allocate((ulong)local_98);
    local_80[0] = uVar14;
LAB_00107665:
    memcpy(local_90,puVar2,uVar14);
  }
  local_90[uVar14] = (TBuiltIns)0x0;
  local_88 = uVar14;
  if (local_d8 == 1) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               ", int");
  }
  else {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               ", ivec");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98,
               *(char **)(this + (long)local_d8 * 8 + 0x260));
  }
  if ((param_2 >> 0x12 & 1) != 0) {
    local_c0 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_c0,", int");
  }
  if (param_5 == 8) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,"highp ");
  }
  local_c0 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_98;
  this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  cVar19 = (char)param_2;
  uVar5 = (ulong)param_2 & 0xff;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,*(char **)(this + uVar5 * 8 + 0x288));
  uVar3 = _UNK_0014eb38;
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < 0x2a) goto LAB_00107cdc;
  pTVar1 = this + 0x20;
  if (*(TBuiltIns **)(this + 0x10) == pTVar1) {
    uVar10 = 0xf;
  }
  else {
    uVar10 = *(ulong *)(this + 0x20);
  }
  if (uVar10 < uVar14 + 0x2a) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,"vec4 imageLoad(readonly volatile coherent ",0x2a);
  }
  else {
    pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
    *(undefined8 *)pTVar6 = __LC253;
    *(undefined8 *)(pTVar6 + 8) = uVar3;
    uVar3 = _UNK_0014eb48;
    *(undefined8 *)(pTVar6 + 0x10) = __LC254;
    *(undefined8 *)(pTVar6 + 0x18) = uVar3;
    uVar3 = _UNK_0014eb58;
    *(undefined8 *)(pTVar6 + 0x1a) = __LC255;
    *(undefined8 *)(pTVar6 + 0x22) = uVar3;
  }
  *(ulong *)(this + 0x18) = uVar14 + 0x2a;
  *(undefined1 *)(*(long *)(this + 0x10) + 0x2a + uVar14) = 0;
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < local_88) goto LAB_00107cdc;
  pTVar6 = *(TBuiltIns **)(this + 0x10);
  uVar10 = local_88 + uVar14;
  if (pTVar1 == pTVar6) {
    uVar8 = 0xf;
  }
  else {
    uVar8 = *(ulong *)(this + 0x20);
  }
  if (uVar8 < uVar10) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,(char *)local_90,local_88);
    pTVar6 = *(TBuiltIns **)(this + 0x10);
  }
  else if (local_88 != 0) {
    if (local_88 == 1) {
      pTVar6[uVar14] = *local_90;
      pTVar6 = *(TBuiltIns **)(this + 0x10);
    }
    else {
      memcpy(pTVar6 + uVar14,local_90,local_88);
      pTVar6 = *(TBuiltIns **)(this + 0x10);
    }
  }
  *(ulong *)(this + 0x18) = uVar10;
  pTVar6[uVar10] = (TBuiltIns)0x0;
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < 3) goto LAB_00107cdc;
  if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
    uVar10 = 0xf;
  }
  else {
    uVar10 = *(ulong *)(this + 0x20);
  }
  if (uVar10 < uVar14 + 3) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,");\n",3);
  }
  else {
    pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
    *(undefined2 *)pTVar6 = 0x3b29;
    pTVar6[2] = (TBuiltIns)0xa;
  }
  *(ulong *)(this + 0x18) = uVar14 + 3;
  *(undefined1 *)(*(long *)(this + 0x10) + 3 + uVar14) = 0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"void imageStore(writeonly volatile coherent ");
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < local_88) goto LAB_00107cdc;
  pTVar6 = *(TBuiltIns **)(this + 0x10);
  uVar10 = local_88 + uVar14;
  if (pTVar1 == pTVar6) {
    uVar8 = 0xf;
  }
  else {
    uVar8 = *(ulong *)(this + 0x20);
  }
  if (uVar8 < uVar10) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,(char *)local_90,local_88);
    pTVar6 = *(TBuiltIns **)(this + 0x10);
  }
  else if (local_88 != 0) {
    if (local_88 == 1) {
      pTVar6[uVar14] = *local_90;
      pTVar6 = *(TBuiltIns **)(this + 0x10);
    }
    else {
      memcpy(pTVar6 + uVar14,local_90,local_88);
      pTVar6 = *(TBuiltIns **)(this + 0x10);
    }
  }
  *(ulong *)(this + 0x18) = uVar10;
  pTVar6[uVar10] = (TBuiltIns)0x0;
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < 2) goto LAB_00107cdc;
  if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
    uVar10 = 0xf;
  }
  else {
    uVar10 = *(ulong *)(this + 0x20);
  }
  if (uVar10 < uVar14 + 2) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,", ",2);
  }
  else {
    *(undefined2 *)(*(TBuiltIns **)(this + 0x10) + uVar14) = 0x202c;
  }
  *(ulong *)(this + 0x18) = uVar14 + 2;
  *(undefined1 *)(*(long *)(this + 0x10) + 2 + uVar14) = 0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,*(char **)(this + uVar5 * 8 + 0x288));
  uVar14 = *(ulong *)(this + 0x18);
  if (0x7fffffffffffffff - uVar14 < 7) goto LAB_00107cdc;
  if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
    uVar10 = 0xf;
  }
  else {
    uVar10 = *(ulong *)(this + 0x20);
  }
  if (uVar10 < uVar14 + 7) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
              (this_00,uVar14,0,"vec4);\n",7);
  }
  else {
    pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
    *(undefined4 *)pTVar6 = 0x34636576;
    *(undefined4 *)(pTVar6 + 3) = 0xa3b2934;
  }
  *(ulong *)(this + 0x18) = uVar14 + 7;
  *(undefined1 *)(*(long *)(this + 0x10) + 7 + uVar14) = 0;
  if (bVar9 != 1) {
    bVar20 = param_5 != 8;
    if (bVar9 == 6) {
      if ((param_4 < 0x136) && (!bVar20)) goto LAB_00107550;
      if ((byte)(cVar19 - 8U) < 4) goto LAB_00106d00;
      if ((param_5 == 8) && (0x135 < param_4)) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,"float imageAtomicExchange(volatile coherent ");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,(char *)local_90,local_88);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,", float);\n");
        goto LAB_00107550;
      }
LAB_0010690a:
      if ((param_4 < 0x1ae) || (!bVar20)) {
LAB_001078df:
        if ((0x1c1 < param_4) && (bVar20)) {
          pcVar17 = ", float";
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicAdd(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicAdd(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicExchange(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicExchange(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicLoad(readonly volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"void imageAtomicStore(writeonly volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicMin(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicMin(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicMax(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", float);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,"float imageAtomicMax(volatile coherent ");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,(char *)local_90,local_88);
          goto LAB_00107352;
        }
        goto LAB_00107365;
      }
    }
    else {
      if ((param_4 < 0x1c2) || (!bVar20)) {
        if (param_5 == 8) {
          if (0x135 < param_4) goto LAB_001075f9;
          goto LAB_00107365;
        }
        goto LAB_001068f9;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,"int sparseImageLoadARB(readonly volatile coherent ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,(char *)local_90,local_88);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,", out ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,*(char **)(this + uVar5 * 8 + 0x288));
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,"vec4");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,");\n");
      if ((byte)(cVar19 - 8U) < 4) goto LAB_00106d00;
    }
    sVar15 = 7;
    local_68 = " imageAtomicAdd(volatile coherent ";
    ppcStack_60 = (char **)0x123f48;
    local_58 = " imageAtomicMax(volatile coherent ";
    pcStack_50 = " imageAtomicExchange(volatile coherent ";
    ppcVar16 = &local_a8;
    local_a8 = "f16vec2";
    pcStack_a0 = "f16vec4";
    ppcVar18 = &local_68;
    while( true ) {
      uVar14 = *(ulong *)(this + 0x18);
      pTVar6 = (TBuiltIns *)*ppcVar16;
      if (0x7fffffffffffffff - uVar14 < sVar15) break;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
      uVar10 = uVar14 + sVar15;
      if (pTVar1 == pTVar13) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,(char *)pTVar6,sVar15);
        pTVar13 = *(TBuiltIns **)(this + 0x10);
      }
      else if (sVar15 != 0) {
        if (sVar15 == 1) {
          pTVar13[uVar14] = *pTVar6;
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar13 + uVar14,pTVar6,sVar15);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
      }
      __s = (TBuiltIns *)*ppcVar18;
      *(ulong *)(this + 0x18) = uVar10;
      pTVar13[uVar10] = (TBuiltIns)0x0;
      sVar15 = strlen((char *)__s);
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < sVar15) break;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
      uVar10 = sVar15 + uVar14;
      if (pTVar1 == pTVar13) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,(char *)__s,sVar15);
        pTVar13 = *(TBuiltIns **)(this + 0x10);
      }
      else if (sVar15 != 0) {
        if (sVar15 == 1) {
          pTVar13[uVar14] = *__s;
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar13 + uVar14,__s,sVar15);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
      }
      *(ulong *)(this + 0x18) = uVar10;
      pTVar13[uVar10] = (TBuiltIns)0x0;
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < local_88) break;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
      uVar10 = local_88 + uVar14;
      if (pTVar1 == pTVar13) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,(char *)local_90,local_88);
        pTVar13 = *(TBuiltIns **)(this + 0x10);
      }
      else if (local_88 != 0) {
        if (local_88 == 1) {
          pTVar13[uVar14] = *local_90;
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar13 + uVar14,local_90,local_88);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
      }
      *(ulong *)(this + 0x18) = uVar10;
      pTVar13[uVar10] = (TBuiltIns)0x0;
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < 2) break;
      if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
        uVar10 = 0xf;
      }
      else {
        uVar10 = *(ulong *)(this + 0x20);
      }
      if (uVar10 < uVar14 + 2) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,", ",2);
      }
      else {
        *(undefined2 *)(*(TBuiltIns **)(this + 0x10) + uVar14) = 0x202c;
      }
      *(ulong *)(this + 0x18) = uVar14 + 2;
      *(undefined1 *)(*(long *)(this + 0x10) + 2 + uVar14) = 0;
      sVar15 = strlen((char *)pTVar6);
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < sVar15) break;
      pTVar13 = *(TBuiltIns **)(this + 0x10);
      uVar10 = sVar15 + uVar14;
      if (pTVar1 == pTVar13) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,(char *)pTVar6,sVar15);
        pTVar13 = *(TBuiltIns **)(this + 0x10);
      }
      else if (sVar15 != 0) {
        if (sVar15 == 1) {
          pTVar13[uVar14] = *pTVar6;
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar13 + uVar14,pTVar6,sVar15);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
      }
      *(ulong *)(this + 0x18) = uVar10;
      pTVar13[uVar10] = (TBuiltIns)0x0;
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < 3) break;
      if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
        uVar10 = 0xf;
      }
      else {
        uVar10 = *(ulong *)(this + 0x20);
      }
      if (uVar10 < uVar14 + 3) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,");\n",3);
      }
      else {
        pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
        *(undefined2 *)pTVar6 = 0x3b29;
        pTVar6[2] = (TBuiltIns)0xa;
      }
      *(ulong *)(this + 0x18) = uVar14 + 3;
      ppcVar18 = ppcVar18 + 1;
      *(undefined1 *)(*(long *)(this + 0x10) + 3 + uVar14) = 0;
      if (&local_48 == ppcVar18) {
        ppcVar16 = ppcVar16 + 1;
        if (local_c0 ==
            (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)ppcVar16) {
          bVar20 = true;
          goto LAB_001078df;
        }
        sVar15 = strlen(*ppcVar16);
        ppcVar18 = &local_68;
      }
    }
LAB_00107cdc:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  if (param_5 == 8) {
    if (param_4 < 0x136) goto LAB_00107550;
LAB_001075f9:
    if ((byte)(cVar19 - 8U) < 4) goto LAB_00106d00;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,"float imageAtomicExchange(volatile coherent ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,(char *)local_90,local_88);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", float);\n");
  }
  else {
LAB_001068f9:
    if (3 < (byte)(cVar19 - 8U)) {
      bVar20 = true;
      goto LAB_0010690a;
    }
LAB_00106d00:
    if (cVar19 == '\n') {
      local_f8 = 0xd;
      pcVar17 = "highp int64_t";
    }
    else {
      local_f8 = 0xe;
      pcVar17 = "highp uint64_t";
      if (cVar19 != '\v') {
        pcVar17 = "highp uint";
        local_f8 = (ulong)(cVar19 == '\t') + 9;
        if (cVar19 != '\t') {
          pcVar17 = "highp int";
        }
      }
    }
    local_c0._0_4_ = 2;
    bVar20 = false;
    while( true ) {
      ppuVar12 = &addImageFunctions(glslang::TSampler,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const&,int,EProfile)
                  ::atomicFunc;
      do {
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < local_f8) goto LAB_00107cdc;
        uVar10 = local_f8 + uVar14;
        if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
          uVar8 = 0xf;
        }
        else {
          uVar8 = *(ulong *)(this + 0x20);
        }
        if (uVar8 < uVar10) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,pcVar17,local_f8);
        }
        else {
          pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
          *(undefined8 *)pTVar6 = *(undefined8 *)pcVar17;
          *(undefined8 *)(pTVar6 + ((local_f8 & 0xffffffff) - 8)) =
               *(undefined8 *)(pcVar17 + ((local_f8 & 0xffffffff) - 8));
          lVar7 = (long)pTVar6 - ((ulong)(pTVar6 + 8) & 0xfffffffffffffff8);
          uVar4 = (int)lVar7 + (int)local_f8 & 0xfffffff8;
          if (7 < uVar4) {
            uVar11 = 0;
            do {
              uVar14 = (ulong)uVar11;
              uVar11 = uVar11 + 8;
              *(undefined8 *)(((ulong)(pTVar6 + 8) & 0xfffffffffffffff8) + uVar14) =
                   *(undefined8 *)(pcVar17 + (uVar14 - lVar7));
            } while (uVar11 < uVar4);
          }
        }
        *(ulong *)(this + 0x18) = uVar10;
        *(undefined1 *)(*(long *)(this + 0x10) + uVar10) = 0;
        pTVar6 = (TBuiltIns *)*ppuVar12;
        sVar15 = strlen((char *)pTVar6);
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < sVar15) goto LAB_00107cdc;
        pTVar13 = *(TBuiltIns **)(this + 0x10);
        uVar10 = sVar15 + uVar14;
        if (pTVar1 == pTVar13) {
          uVar8 = 0xf;
        }
        else {
          uVar8 = *(ulong *)(this + 0x20);
        }
        if (uVar8 < uVar10) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,(char *)pTVar6,sVar15);
          pTVar13 = *(TBuiltIns **)(this + 0x10);
        }
        else if (sVar15 != 0) {
          if (sVar15 == 1) {
            pTVar13[uVar14] = *pTVar6;
            pTVar13 = *(TBuiltIns **)(this + 0x10);
          }
          else {
            memcpy(pTVar13 + uVar14,pTVar6,sVar15);
            pTVar13 = *(TBuiltIns **)(this + 0x10);
          }
        }
        *(ulong *)(this + 0x18) = uVar10;
        pTVar13[uVar10] = (TBuiltIns)0x0;
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < local_88) goto LAB_00107cdc;
        pTVar6 = *(TBuiltIns **)(this + 0x10);
        uVar10 = local_88 + uVar14;
        if (pTVar1 == pTVar6) {
          uVar8 = 0xf;
        }
        else {
          uVar8 = *(ulong *)(this + 0x20);
        }
        if (uVar8 < uVar10) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,(char *)local_90,local_88);
          pTVar6 = *(TBuiltIns **)(this + 0x10);
        }
        else if (local_88 != 0) {
          if (local_88 == 1) {
            pTVar6[uVar14] = *local_90;
            pTVar6 = *(TBuiltIns **)(this + 0x10);
          }
          else {
            memcpy(pTVar6 + uVar14,local_90,local_88);
            pTVar6 = *(TBuiltIns **)(this + 0x10);
          }
        }
        *(ulong *)(this + 0x18) = uVar10;
        pTVar6[uVar10] = (TBuiltIns)0x0;
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < 2) goto LAB_00107cdc;
        if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
          uVar10 = 0xf;
        }
        else {
          uVar10 = *(ulong *)(this + 0x20);
        }
        if (uVar10 < uVar14 + 2) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,", ",2);
        }
        else {
          *(undefined2 *)(*(TBuiltIns **)(this + 0x10) + uVar14) = 0x202c;
        }
        *(ulong *)(this + 0x18) = uVar14 + 2;
        *(undefined1 *)(*(long *)(this + 0x10) + 2 + uVar14) = 0;
        local_f8 = strlen(pcVar17);
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < local_f8) goto LAB_00107cdc;
        uVar10 = local_f8 + uVar14;
        if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
          uVar8 = 0xf;
        }
        else {
          uVar8 = *(ulong *)(this + 0x20);
        }
        if (uVar8 < uVar10) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,pcVar17,local_f8);
        }
        else {
          pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
          *(undefined8 *)pTVar6 = *(undefined8 *)pcVar17;
          *(undefined8 *)(pTVar6 + ((local_f8 & 0xffffffff) - 8)) =
               *(undefined8 *)(pcVar17 + ((local_f8 & 0xffffffff) - 8));
          lVar7 = (long)pTVar6 - ((ulong)(pTVar6 + 8) & 0xfffffffffffffff8);
          uVar4 = (int)lVar7 + (int)local_f8 & 0xfffffff8;
          if (7 < uVar4) {
            uVar11 = 0;
            do {
              uVar14 = (ulong)uVar11;
              uVar11 = uVar11 + 8;
              *(undefined8 *)(((ulong)(pTVar6 + 8) & 0xfffffffffffffff8) + uVar14) =
                   *(undefined8 *)(pcVar17 + (uVar14 - lVar7));
            } while (uVar11 < uVar4);
          }
        }
        *(ulong *)(this + 0x18) = uVar10;
        *(undefined1 *)(*(long *)(this + 0x10) + uVar10) = 0;
        if (bVar20) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_00,", int, int, int");
        }
        uVar14 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar14 < 3) goto LAB_00107cdc;
        if (pTVar1 == *(TBuiltIns **)(this + 0x10)) {
          uVar10 = 0xf;
        }
        else {
          uVar10 = *(ulong *)(this + 0x20);
        }
        if (uVar10 < uVar14 + 3) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(this_00,uVar14,0,");\n",3);
        }
        else {
          pTVar6 = *(TBuiltIns **)(this + 0x10) + uVar14;
          *(undefined2 *)pTVar6 = 0x3b29;
          pTVar6[2] = (TBuiltIns)0xa;
        }
        *(ulong *)(this + 0x18) = uVar14 + 3;
        ppuVar12 = ppuVar12 + 1;
        *(undefined1 *)(*(long *)(this + 0x10) + 3 + uVar14) = 0;
      } while (ppuVar12 != (undefined **)&DAT_0014cf58);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,pcVar17);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00," imageAtomicCompSwap(volatile coherent ");
      uVar14 = *(ulong *)(this + 0x18);
      if (0x7fffffffffffffff - uVar14 < local_88) goto LAB_00107cdc;
      pTVar6 = *(TBuiltIns **)(this + 0x10);
      uVar10 = local_88 + uVar14;
      if (pTVar1 == pTVar6) {
        uVar8 = 0xf;
      }
      else {
        uVar8 = *(ulong *)(this + 0x20);
      }
      if (uVar8 < uVar10) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(this_00,uVar14,0,(char *)local_90,local_88);
        pTVar6 = *(TBuiltIns **)(this + 0x10);
      }
      else if (local_88 != 0) {
        if (local_88 == 1) {
          pTVar6[uVar14] = *local_90;
          pTVar6 = *(TBuiltIns **)(this + 0x10);
        }
        else {
          memcpy(pTVar6 + uVar14,local_90,local_88);
          pTVar6 = *(TBuiltIns **)(this + 0x10);
        }
      }
      *(ulong *)(this + 0x18) = uVar10;
      pTVar6[uVar10] = (TBuiltIns)0x0;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,", ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,pcVar17);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,", ");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,pcVar17);
      if ((int)local_c0 == 1) break;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,");\n");
      local_c0._0_4_ = 1;
      bVar20 = true;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", int, int, int, int, int");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,");\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,pcVar17);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00," imageAtomicLoad(volatile coherent ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,(char *)local_90,local_88);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", int, int, int);\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,"void imageAtomicStore(volatile coherent ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,(char *)local_90,local_88);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", ");
LAB_00107352:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,pcVar17);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", int, int, int);\n");
  }
LAB_00107365:
  if (((((byte)(bVar9 - 5) < 2) || ((param_2 & 0x20000) != 0)) || ((param_2 >> 0x12 & 1) != 0)) ||
     ((param_5 == 8 || (param_4 < 0x1c2)))) goto LAB_00107550;
  local_68 = (char *)glslang::GetThreadPoolAllocator();
  ppcStack_60 = &pcStack_50;
  puVar2 = *(undefined1 **)(param_3 + 8);
  pcVar17 = *(char **)(param_3 + 0x10);
  if (pcVar17 < (char *)0x10) {
    if (pcVar17 == (char *)0x1) {
      pcStack_50 = (char *)CONCAT71(pcStack_50._1_7_,*puVar2);
    }
    else if (pcVar17 != (char *)0x0) goto LAB_00107cc4;
  }
  else {
    if ((long)pcVar17 < 0) {
LAB_00107ced:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    ppcStack_60 = (char **)glslang::TPoolAllocator::allocate((ulong)local_68);
    pcStack_50 = pcVar17;
LAB_00107cc4:
    memcpy(ppcStack_60,puVar2,(size_t)pcVar17);
  }
  *(char *)((long)ppcStack_60 + (long)pcVar17) = '\0';
  local_58 = pcVar17;
  if (local_d8 == 1) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
               ", int");
  }
  else {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
               ", ivec");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68,
               *(char **)(this + (long)local_d8 * 8 + 0x260));
  }
  local_b8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_68;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (local_b8,", int");
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,*(char **)(this + uVar5 * 8 + 0x288));
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"vec4 imageLoadLodAMD(readonly volatile coherent ");
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,(char *)ppcStack_60,(ulong)local_58);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,");\n");
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"void imageStoreLodAMD(writeonly volatile coherent ");
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,(char *)ppcStack_60,(ulong)local_58);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,", ");
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,*(char **)(this + uVar5 * 8 + 0x288));
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (this_00,"vec4);\n");
  if (bVar9 != 1) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,"int sparseImageLoadLodAMD(readonly volatile coherent ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,(char *)ppcStack_60,(ulong)local_58);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,", out ");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,*(char **)(this + uVar5 * 8 + 0x288));
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,"vec4");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,");\n");
  }
LAB_00107550:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::add2ndGenerationSamplingImaging(int, EProfile, glslang::SpvVersion const&) */

void __thiscall
glslang::TBuiltIns::add2ndGenerationSamplingImaging
          (TBuiltIns *this,int param_1,int param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  TBuiltIns *pTVar8;
  ushort uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  ushort uVar16;
  byte bVar17;
  ushort uVar18;
  ushort uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  byte local_f8;
  byte local_ce;
  bool local_b9;
  undefined4 local_ac;
  int iStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98 [48];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar20 = param_3 == 8;
  local_9c = 3;
  local_a4 = _LC256;
  bVar21 = param_3 != 8;
  bVar7 = param_1 < 0x136 && bVar20;
  local_b9 = bVar7 || param_1 < 0x8c && bVar21;
  local_ce = 0;
  uVar16 = 0;
  uVar9 = 0;
  uVar19 = uVar16;
LAB_00107db0:
  uVar3 = 0;
LAB_00107de1:
  uVar11 = 1;
LAB_00107df5:
  if (uVar11 != 7) {
    local_f8 = (byte)uVar3;
    uVar18 = uVar3;
    uVar14 = uVar9;
    if ((uVar11 & 0xfffffffb) != 1) goto LAB_00107e80;
    do {
      if (param_3 == 8) goto LAB_00107e70;
      while (uVar16 != 0) {
        uVar11 = uVar11 + 1;
        if ((uVar11 & 0xfffffffb) != 1) goto LAB_00107e80;
      }
      bVar22 = uVar11 == 5;
      while( true ) {
        if ((uVar11 != 3) || (uVar6 = 4, (char)uVar9 == '\0')) break;
LAB_00107e44:
        uVar11 = uVar6;
        bVar13 = uVar11 == 6 && local_b9;
        if (bVar13) goto LAB_00108090;
        if (uVar11 == 6) {
          if (uVar3 != 0 || uVar9 != 0) goto LAB_00108090;
          bVar22 = false;
          uVar11 = 6;
          uVar18 = 0;
          uVar14 = (ushort)bVar13;
          goto LAB_00107eb0;
        }
        bVar22 = false;
      }
      bVar17 = uVar11 == 4 & local_f8;
      if (bVar17 == 0) {
        if ((uVar11 != 3 && !bVar22) || (uVar3 == 0)) goto LAB_00107eb0;
        goto LAB_001082ff;
      }
      uVar11 = 5;
    } while (bVar7 || param_1 < 0x82 && bVar21);
    uVar11 = 4;
    uVar18 = (ushort)bVar17;
    goto LAB_00107eb0;
  }
LAB_00108090:
  if ((*(int *)(param_4 + 8) != 0) && ((uVar19 == 0 && uVar9 == 0) && uVar3 == 0)) {
    uVar11 = 7;
    uVar18 = 0;
    uVar14 = 0;
    goto LAB_001080b0;
  }
  goto LAB_00108074;
LAB_00107e70:
  do {
    uVar11 = uVar11 + 1;
  } while ((uVar11 & 0xfffffffb) == 1);
LAB_00107e80:
  if (uVar11 != 2) {
LAB_001082f6:
    uVar6 = uVar11;
    if (uVar16 == 0) goto LAB_00107e44;
LAB_001082ff:
    uVar11 = uVar11 + 1;
    goto LAB_00107df5;
  }
  if ((uVar3 & uVar16) == 0) {
LAB_001080b0:
    bVar22 = false;
  }
  else {
    if (bVar7) {
      uVar11 = 3;
      goto LAB_001082f6;
    }
    bVar22 = false;
    uVar18 = 1;
  }
LAB_00107eb0:
  lVar12 = 0;
  iVar15 = 1;
LAB_00107f02:
  if (((bool)(bVar22 & param_1 < 0x8c)) && (lVar12 != 0)) goto LAB_00107fae;
  if ((uVar9 != 0) && (iVar15 - 8U < 2)) goto LAB_00107fae;
  if (uVar11 == 7) goto LAB_00107fe3;
LAB_00107f36:
  local_ac._0_2_ = CONCAT11((char)uVar11,(char)iVar15);
  if (uVar19 == 0) {
    local_ac = CONCAT22(uVar14 * 2 | uVar18 | 0x10 | (ushort)local_ce << 2 | local_ac._2_2_ & 0x9fc0
                        ,(undefined2)local_ac);
    TSampler::getString_abi_cxx11_();
    addQueryFunctions(this,local_ac,local_98,param_1,param_3);
    addSamplingFunctions(this,local_ac,local_98,param_1,param_3);
    addGatherFunctions(this,local_ac,local_98,param_1,param_3);
    if ((0 < *(int *)(param_4 + 8)) && ((char)uVar14 == '\0')) {
      local_ac = local_ac & 0xffefffff;
      TSampler::getString_abi_cxx11_();
      addSamplingFunctions(this,local_ac,local_68,param_1,param_3);
      addQueryFunctions(this,local_ac,local_68,param_1,param_3);
    }
  }
  else {
    local_ac = CONCAT22(uVar14 * 2 | uVar18 | 8 | (ushort)local_ce * 4 | local_ac._2_2_ & 0x9fc0,
                        (undefined2)local_ac);
    TSampler::getString_abi_cxx11_();
    addQueryFunctions(this,local_ac,local_98,param_1,param_3);
    addImageFunctions(this,local_ac,local_98,param_1,param_3);
  }
LAB_00107fae:
  while (lVar12 = lVar12 + 1, lVar12 != 4) {
    while( true ) {
      iVar15 = (&iStack_a8)[lVar12];
      if (iVar15 != 3) goto LAB_00107f02;
      if ((param_1 < 0x1c2) || (bVar20)) break;
      if (uVar11 != 7) goto LAB_00107f36;
LAB_00107fe3:
      local_ac = CONCAT31(local_ac._1_3_,(char)iVar15);
      lVar12 = lVar12 + 1;
      local_ac = (uint)local_ce << 0x12 | 0x80700 | local_ac & 0x9fc000ff;
      TSampler::getString_abi_cxx11_();
      addSubpassSampling(this,local_ac,local_98,param_1,param_3);
      if (lVar12 == 4) goto LAB_00108050;
    }
  }
LAB_00108050:
  uVar11 = uVar11 + 1;
  if (uVar11 == 8) goto LAB_00108074;
  goto LAB_00107df5;
LAB_00108074:
  uVar5 = _UNK_0014eb68;
  uVar4 = __LC258;
  if (uVar3 != 0) goto LAB_00108110;
  uVar3 = 1;
  goto LAB_00107de1;
LAB_00108110:
  if (uVar16 == 1) {
    if (uVar9 != 1) goto joined_r0x001081ba;
    goto LAB_00108195;
  }
LAB_00108122:
  do {
    if (uVar9 == 0) {
      local_ce = 1;
      uVar16 = 1;
      if (param_3 == 8) goto LAB_001081a9;
      if (0x8b < param_1) {
LAB_00108140:
        local_ce = 1;
        uVar9 = 0;
        uVar16 = 1;
        goto LAB_00107db0;
      }
    }
    else {
LAB_00108195:
      if (uVar19 != 0) {
        if ((0x1c1 < param_1) && (bVar21)) {
          uVar2 = *(ulong *)(this + 0x18);
          if (0x7fffffffffffffff - uVar2 < 0x28) {
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
          }
          uVar1 = uVar2 + 0x28;
          if (*(TBuiltIns **)(this + 0x10) == this + 0x20) {
            uVar10 = 0xf;
          }
          else {
            uVar10 = *(ulong *)(this + 0x20);
          }
          if (uVar10 < uVar1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      (this + 8),uVar2,0,"bool sparseTexelsResidentARB(int code);\n",0x28);
            *(ulong *)(this + 0x18) = uVar1;
            *(undefined1 *)(*(long *)(this + 0x10) + 0x28 + uVar2) = 0;
          }
          else {
            pTVar8 = *(TBuiltIns **)(this + 0x10) + uVar2;
            *(undefined8 *)(pTVar8 + 0x20) = 0xa3b2965646f6320;
            *(undefined8 *)pTVar8 = uVar4;
            *(undefined8 *)(pTVar8 + 8) = uVar5;
            uVar4 = _UNK_0014eb78;
            *(undefined8 *)(pTVar8 + 0x10) = __LC259;
            *(undefined8 *)(pTVar8 + 0x18) = uVar4;
            *(ulong *)(this + 0x18) = uVar1;
            *(undefined1 *)(*(long *)(this + 0x10) + 0x28 + uVar2) = 0;
          }
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      uVar19 = 1;
      uVar16 = 0;
      local_ce = 0;
LAB_001081a9:
      if ((uVar19 & uVar16) == 0) {
        uVar9 = 0;
        if (((bVar20 & local_ce) == 0) ||
           (local_ce = bVar20 & local_ce, param_1 >= 0x136 || !bVar20)) goto LAB_00107db0;
        uVar9 = uVar16;
        if (uVar16 != 1) goto LAB_00108122;
      }
      else if (param_3 != 8) goto LAB_00108140;
    }
joined_r0x001081ba:
    uVar9 = uVar19;
    uVar19 = uVar9;
  } while (uVar9 != 0);
  local_ce = 0;
  uVar16 = 0;
  uVar9 = 1;
  goto LAB_00107db0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::initialize(int, EProfile, glslang::SpvVersion const&) */

void __thiscall glslang::TBuiltIns::initialize(TBuiltIns *this,int param_1,int param_3,int *param_4)

{
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_00;
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ushort uVar12;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar13;
  size_t sVar14;
  char *pcVar15;
  long lVar16;
  TBuiltIns *pTVar17;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar18;
  bool bVar19;
  ulong uVar20;
  bool bVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  char *pcVar26;
  ulong uVar27;
  char cVar28;
  uint uVar29;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this_01;
  undefined **ppuVar30;
  undefined **ppuVar31;
  TBuiltIns *pTVar32;
  long in_FS_OFFSET;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  byte bVar38;
  char *local_2b0;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_2a8;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_298;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_288;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_280;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_278;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_270;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  char *local_200;
  ulong local_1f8;
  char local_1f0 [24];
  undefined8 local_1d8;
  char *local_1d0;
  ulong local_1c8;
  char local_1c0 [24];
  undefined8 local_1a8;
  char *local_1a0;
  ulong local_198;
  char local_190 [24];
  ulong *local_178;
  ulong local_170;
  ulong local_168 [3];
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  long local_40;
  
  bVar38 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  addTabledBuiltins();
  local_208 = glslang::GetThreadPoolAllocator();
  local_200 = local_1f0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>
            (&local_208,
             "float dFdxFine(float p);vec2  dFdxFine(vec2  p);vec3  dFdxFine(vec3  p);vec4  dFdxFine(vec4  p);float dFdyFine(float p);vec2  dFdyFine(vec2  p);vec3  dFdyFine(vec3  p);vec4  dFdyFine(vec4  p);float fwidthFine(float p);vec2  fwidthFine(vec2  p);vec3  fwidthFine(vec3  p);vec4  fwidthFine(vec4  p);float dFdxCoarse(float p);vec2  dFdxCoarse(vec2  p);vec3  dFdxCoarse(vec3  p);vec4  dFdxCoarse(vec4  p);float dFdyCoarse(float p);vec2  dFdyCoarse(vec2  p);vec3  dFdyCoarse(vec3  p);vec4  dFdyCoarse(vec4  p);float fwidthCoarse(float p);vec2  fwidthCoarse(vec2  p);vec3  fwidthCoarse(vec3  p);vec4  fwidthCoarse(vec4  p);"
            );
  local_1d8 = glslang::GetThreadPoolAllocator();
  local_1d0 = local_1c0;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>
            (&local_1d8,
             "float16_t dFdx(float16_t);f16vec2   dFdx(f16vec2);f16vec3   dFdx(f16vec3);f16vec4   dFdx(f16vec4);float16_t dFdy(float16_t);f16vec2   dFdy(f16vec2);f16vec3   dFdy(f16vec3);f16vec4   dFdy(f16vec4);float16_t dFdxFine(float16_t);f16vec2   dFdxFine(f16vec2);f16vec3   dFdxFine(f16vec3);f16vec4   dFdxFine(f16vec4);float16_t dFdyFine(float16_t);f16vec2   dFdyFine(f16vec2);f16vec3   dFdyFine(f16vec3);f16vec4   dFdyFine(f16vec4);float16_t dFdxCoarse(float16_t);f16vec2   dFdxCoarse(f16vec2);f16vec3   dFdxCoarse(f16vec3);f16vec4   dFdxCoarse(f16vec4);float16_t dFdyCoarse(float16_t);f16vec2   dFdyCoarse(f16vec2);f16vec3   dFdyCoarse(f16vec3);f16vec4   dFdyCoarse(f16vec4);float16_t fwidth(float16_t);f16vec2   fwidth(f16vec2);f16vec3   fwidth(f16vec3);f16vec4   fwidth(f16vec4);float16_t fwidthFine(float16_t);f16vec2   fwidthFine(f16vec2);f16vec3   fwidthFine(f16vec3);f16vec4   fwidthFine(f16vec4);float16_t fwidthCoarse(float16_t);f16vec2   fwidthCoarse(f16vec2);f16vec3   fwidthCoarse(f16vec3);f16vec4   fwidthCoarse(f16vec4);"
            );
  local_1a8 = glslang::GetThreadPoolAllocator();
  local_1a0 = local_190;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>
            (&local_1a8,
             "float64_t dFdx(float64_t);f64vec2   dFdx(f64vec2);f64vec3   dFdx(f64vec3);f64vec4   dFdx(f64vec4);float64_t dFdy(float64_t);f64vec2   dFdy(f64vec2);f64vec3   dFdy(f64vec3);f64vec4   dFdy(f64vec4);float64_t dFdxFine(float64_t);f64vec2   dFdxFine(f64vec2);f64vec3   dFdxFine(f64vec3);f64vec4   dFdxFine(f64vec4);float64_t dFdyFine(float64_t);f64vec2   dFdyFine(f64vec2);f64vec3   dFdyFine(f64vec3);f64vec4   dFdyFine(f64vec4);float64_t dFdxCoarse(float64_t);f64vec2   dFdxCoarse(f64vec2);f64vec3   dFdxCoarse(f64vec3);f64vec4   dFdxCoarse(f64vec4);float64_t dFdyCoarse(float64_t);f64vec2   dFdyCoarse(f64vec2);f64vec3   dFdyCoarse(f64vec3);f64vec4   dFdyCoarse(f64vec4);float64_t fwidth(float64_t);f64vec2   fwidth(f64vec2);f64vec3   fwidth(f64vec3);f64vec4   fwidth(f64vec4);float64_t fwidthFine(float64_t);f64vec2   fwidthFine(f64vec2);f64vec3   fwidthFine(f64vec3);f64vec4   fwidthFine(f64vec4);float64_t fwidthCoarse(float64_t);f64vec2   fwidthCoarse(f64vec2);f64vec3   fwidthCoarse(f64vec3);f64vec4   fwidthCoarse(f64vec4);"
            );
  bVar33 = param_3 != 8;
  bVar37 = 0x95 < param_1;
  bVar7 = bVar37 && bVar33;
  if (bVar37 && bVar33) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,
               "double sqrt(double);dvec2  sqrt(dvec2);dvec3  sqrt(dvec3);dvec4  sqrt(dvec4);double inversesqrt(double);dvec2  inversesqrt(dvec2);dvec3  inversesqrt(dvec3);dvec4  inversesqrt(dvec4);double abs(double);dvec2  abs(dvec2);dvec3  abs(dvec3);dvec4  abs(dvec4);double sign(double);dvec2  sign(dvec2);dvec3  sign(dvec3);dvec4  sign(dvec4);double floor(double);dvec2  floor(dvec2);dvec3  floor(dvec3);dvec4  floor(dvec4);double trunc(double);dvec2  trunc(dvec2);dvec3  trunc(dvec3);dvec4  trunc(dvec4);double round(double);dvec2  round(dvec2);dvec3  round(dvec3);dvec4  round(dvec4);double roundEven(double);dvec2  roundEven(dvec2);dvec3  roundEven(dvec3);dvec4  roundEven(dvec4);double ceil(double);dvec2  ceil(dvec2);dvec3  ceil(dvec3);dvec4  ceil(dvec4);double fract(double);dvec2  fract(dvec2);dvec3  fract(dvec3);dvec4  fract(dvec4);double mod(double, double);dvec2  mod(dvec2 , double);dvec3  mod(dvec3 , double);dvec4  mod(dvec4 , double);dvec2  mod(dvec2 , dvec2);dvec3  mod(dvec3 , dvec3);dvec4  mod(dvec4 , dvec4);double modf(double, out double);dvec2  modf(dvec2,  out dvec2);dvec3  modf(dvec3,  out dvec3);dvec4  modf(dvec4,  out dvec4);double min(double, double);dvec2  min(dvec2,  double);dvec3  min(dvec3,  double);dvec4  min(dvec4,  double);dvec2  min(dvec2,  dvec2);dvec3  min(dvec3,  dvec3);dvec4  min(dvec4,  dvec4);double max(double, double);dvec2  max(dvec2 , double);dvec3  max(dvec3 , double);dvec4  max(dvec4 , double);dvec2  max(dvec2 , dvec2);dvec3  max(dvec3 , dvec3);dvec4  max(dvec4 , dvec4);double clamp(double, double, double);dvec2  clamp(dvec2 , double, double);dvec3  clamp(dvec3 , double, double);dvec4  clamp(dvec4 , double, double);dvec2  clamp(dvec2 , dvec2 , dvec2);dvec3  clamp(dvec3 , dvec3 , dvec3);dvec4  clamp(dvec4 , dvec4 , dvec4);double mix(double, double, double);dvec2  mix(dvec2,  dvec2,  double);dvec3  mix(dvec3,  dvec3,  double);dvec4  mix(dvec4,  dvec4,  double);dvec2  mix(dvec2,  dvec2,  dvec2);dvec3  mix(dvec3,  dvec3,  dvec3);dvec4  mix(dvec4,  dvec4,  dvec4);double mix(double, double, bool);dvec..." /* TRUNCATED STRING LITERAL */
              );
    if (param_1 < 0x1c2) {
      if (param_1 < 0x1ae) {
        bVar34 = false;
        bVar2 = false;
        bVar8 = false;
        bVar11 = false;
        bVar4 = false;
        bVar9 = 299 < param_1;
        goto LAB_001085e7;
      }
      bVar34 = false;
LAB_0010ca97:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float min3(float, float, float);vec2  min3(vec2,  vec2,  vec2);vec3  min3(vec3,  vec3,  vec3);vec4  min3(vec4,  vec4,  vec4);int   min3(int,   int,   int);ivec2 min3(ivec2, ivec2, ivec2);ivec3 min3(ivec3, ivec3, ivec3);ivec4 min3(ivec4, ivec4, ivec4);uint  min3(uint,  uint,  uint);uvec2 min3(uvec2, uvec2, uvec2);uvec3 min3(uvec3, uvec3, uvec3);uvec4 min3(uvec4, uvec4, uvec4);float max3(float, float, float);vec2  max3(vec2,  vec2,  vec2);vec3  max3(vec3,  vec3,  vec3);vec4  max3(vec4,  vec4,  vec4);int   max3(int,   int,   int);ivec2 max3(ivec2, ivec2, ivec2);ivec3 max3(ivec3, ivec3, ivec3);ivec4 max3(ivec4, ivec4, ivec4);uint  max3(uint,  uint,  uint);uvec2 max3(uvec2, uvec2, uvec2);uvec3 max3(uvec3, uvec3, uvec3);uvec4 max3(uvec4, uvec4, uvec4);float mid3(float, float, float);vec2  mid3(vec2,  vec2,  vec2);vec3  mid3(vec3,  vec3,  vec3);vec4  mid3(vec4,  vec4,  vec4);int   mid3(int,   int,   int);ivec2 mid3(ivec2, ivec2, ivec2);ivec3 mid3(ivec3, ivec3, ivec3);ivec4 mid3(ivec4, ivec4, ivec4);uint  mid3(uint,  uint,  uint);uvec2 mid3(uvec2, uvec2, uvec2);uvec3 mid3(uvec3, uvec3, uvec3);uvec4 mid3(uvec4, uvec4, uvec4);float16_t min3(float16_t, float16_t, float16_t);f16vec2   min3(f16vec2,   f16vec2,   f16vec2);f16vec3   min3(f16vec3,   f16vec3,   f16vec3);f16vec4   min3(f16vec4,   f16vec4,   f16vec4);float16_t max3(float16_t, float16_t, float16_t);f16vec2   max3(f16vec2,   f16vec2,   f16vec2);f16vec3   max3(f16vec3,   f16vec3,   f16vec3);f16vec4   max3(f16vec4,   f16vec4,   f16vec4);float16_t mid3(float16_t, float16_t, float16_t);f16vec2   mid3(f16vec2,   f16vec2,   f16vec2);f16vec3   mid3(f16vec3,   f16vec3,   f16vec3);f16vec4   mid3(f16vec4,   f16vec4,   f16vec4);int16_t   min3(int16_t,   int16_t,   int16_t);i16vec2   min3(i16vec2,   i16vec2,   i16vec2);i16vec3   min3(i16vec3,   i16vec3,   i16vec3);i16vec4   min3(i16vec4,   i16vec4,   i16vec4);int16_t   max3(int16_t,   int16_t,   int16_t);i16vec2   max3(i16vec2,   i16vec2,   i16vec2);i16vec3   max3(i16vec3,   i16vec3,   i16vec3);i16vec4   max3(i16vec4,   i16vec4,..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicAdd(coherent volatile inout uint, uint, int, int, int); int atomicAdd(coherent volatile inout  int,  int, int, int, int);uint atomicMin(coherent volatile inout uint, uint, int, int, int); int atomicMin(coherent volatile inout  int,  int, int, int, int);uint atomicMax(coherent volatile inout uint, uint, int, int, int); int atomicMax(coherent volatile inout  int,  int, int, int, int);uint atomicAnd(coherent volatile inout uint, uint, int, int, int); int atomicAnd(coherent volatile inout  int,  int, int, int, int);uint atomicOr (coherent volatile inout uint, uint, int, int, int); int atomicOr (coherent volatile inout  int,  int, int, int, int);uint atomicXor(coherent volatile inout uint, uint, int, int, int); int atomicXor(coherent volatile inout  int,  int, int, int, int);uint atomicExchange(coherent volatile inout uint, uint, int, int, int); int atomicExchange(coherent volatile inout  int,  int, int, int, int);uint atomicCompSwap(coherent volatile inout uint, uint, uint, int, int, int, int, int); int atomicCompSwap(coherent volatile inout  int,  int,  int, int, int, int, int, int);uint atomicLoad(coherent volatile in uint, int, int, int); int atomicLoad(coherent volatile in  int, int, int, int);void atomicStore(coherent volatile out uint, uint, int, int, int);void atomicStore(coherent volatile out  int,  int, int, int, int);\n"
                );
      if (0x1b7 < param_1) {
        bVar4 = false;
        goto LAB_00108ca7;
      }
      bVar11 = false;
      bVar4 = false;
    }
    else {
      bVar34 = false;
LAB_00108c70:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "int64_t abs(int64_t);i64vec2 abs(i64vec2);i64vec3 abs(i64vec3);i64vec4 abs(i64vec4);int64_t sign(int64_t);i64vec2 sign(i64vec2);i64vec3 sign(i64vec3);i64vec4 sign(i64vec4);int64_t  min(int64_t,  int64_t);i64vec2  min(i64vec2,  int64_t);i64vec3  min(i64vec3,  int64_t);i64vec4  min(i64vec4,  int64_t);i64vec2  min(i64vec2,  i64vec2);i64vec3  min(i64vec3,  i64vec3);i64vec4  min(i64vec4,  i64vec4);uint64_t min(uint64_t, uint64_t);u64vec2  min(u64vec2,  uint64_t);u64vec3  min(u64vec3,  uint64_t);u64vec4  min(u64vec4,  uint64_t);u64vec2  min(u64vec2,  u64vec2);u64vec3  min(u64vec3,  u64vec3);u64vec4  min(u64vec4,  u64vec4);int64_t  max(int64_t,  int64_t);i64vec2  max(i64vec2,  int64_t);i64vec3  max(i64vec3,  int64_t);i64vec4  max(i64vec4,  int64_t);i64vec2  max(i64vec2,  i64vec2);i64vec3  max(i64vec3,  i64vec3);i64vec4  max(i64vec4,  i64vec4);uint64_t max(uint64_t, uint64_t);u64vec2  max(u64vec2,  uint64_t);u64vec3  max(u64vec3,  uint64_t);u64vec4  max(u64vec4,  uint64_t);u64vec2  max(u64vec2,  u64vec2);u64vec3  max(u64vec3,  u64vec3);u64vec4  max(u64vec4,  u64vec4);int64_t  clamp(int64_t,  int64_t,  int64_t);i64vec2  clamp(i64vec2,  int64_t,  int64_t);i64vec3  clamp(i64vec3,  int64_t,  int64_t);i64vec4  clamp(i64vec4,  int64_t,  int64_t);i64vec2  clamp(i64vec2,  i64vec2,  i64vec2);i64vec3  clamp(i64vec3,  i64vec3,  i64vec3);i64vec4  clamp(i64vec4,  i64vec4,  i64vec4);uint64_t clamp(uint64_t, uint64_t, uint64_t);u64vec2  clamp(u64vec2,  uint64_t, uint64_t);u64vec3  clamp(u64vec3,  uint64_t, uint64_t);u64vec4  clamp(u64vec4,  uint64_t, uint64_t);u64vec2  clamp(u64vec2,  u64vec2,  u64vec2);u64vec3  clamp(u64vec3,  u64vec3,  u64vec3);u64vec4  clamp(u64vec4,  u64vec4,  u64vec4);int64_t  mix(int64_t,  int64_t,  bool);i64vec2  mix(i64vec2,  i64vec2,  bvec2);i64vec3  mix(i64vec3,  i64vec3,  bvec3);i64vec4  mix(i64vec4,  i64vec4,  bvec4);uint64_t mix(uint64_t, uint64_t, bool);u64vec2  mix(u64vec2,  u64vec2,  bvec2);u64vec3  mix(u64vec3,  u64vec3,  bvec3);u64vec4  mix(u64vec4,  u64vec4,  bvec4);int64_t doubleBitsToInt64(float64_..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float min3(float, float, float);vec2  min3(vec2,  vec2,  vec2);vec3  min3(vec3,  vec3,  vec3);vec4  min3(vec4,  vec4,  vec4);int   min3(int,   int,   int);ivec2 min3(ivec2, ivec2, ivec2);ivec3 min3(ivec3, ivec3, ivec3);ivec4 min3(ivec4, ivec4, ivec4);uint  min3(uint,  uint,  uint);uvec2 min3(uvec2, uvec2, uvec2);uvec3 min3(uvec3, uvec3, uvec3);uvec4 min3(uvec4, uvec4, uvec4);float max3(float, float, float);vec2  max3(vec2,  vec2,  vec2);vec3  max3(vec3,  vec3,  vec3);vec4  max3(vec4,  vec4,  vec4);int   max3(int,   int,   int);ivec2 max3(ivec2, ivec2, ivec2);ivec3 max3(ivec3, ivec3, ivec3);ivec4 max3(ivec4, ivec4, ivec4);uint  max3(uint,  uint,  uint);uvec2 max3(uvec2, uvec2, uvec2);uvec3 max3(uvec3, uvec3, uvec3);uvec4 max3(uvec4, uvec4, uvec4);float mid3(float, float, float);vec2  mid3(vec2,  vec2,  vec2);vec3  mid3(vec3,  vec3,  vec3);vec4  mid3(vec4,  vec4,  vec4);int   mid3(int,   int,   int);ivec2 mid3(ivec2, ivec2, ivec2);ivec3 mid3(ivec3, ivec3, ivec3);ivec4 mid3(ivec4, ivec4, ivec4);uint  mid3(uint,  uint,  uint);uvec2 mid3(uvec2, uvec2, uvec2);uvec3 mid3(uvec3, uvec3, uvec3);uvec4 mid3(uvec4, uvec4, uvec4);float16_t min3(float16_t, float16_t, float16_t);f16vec2   min3(f16vec2,   f16vec2,   f16vec2);f16vec3   min3(f16vec3,   f16vec3,   f16vec3);f16vec4   min3(f16vec4,   f16vec4,   f16vec4);float16_t max3(float16_t, float16_t, float16_t);f16vec2   max3(f16vec2,   f16vec2,   f16vec2);f16vec3   max3(f16vec3,   f16vec3,   f16vec3);f16vec4   max3(f16vec4,   f16vec4,   f16vec4);float16_t mid3(float16_t, float16_t, float16_t);f16vec2   mid3(f16vec2,   f16vec2,   f16vec2);f16vec3   mid3(f16vec3,   f16vec3,   f16vec3);f16vec4   mid3(f16vec4,   f16vec4,   f16vec4);int16_t   min3(int16_t,   int16_t,   int16_t);i16vec2   min3(i16vec2,   i16vec2,   i16vec2);i16vec3   min3(i16vec3,   i16vec3,   i16vec3);i16vec4   min3(i16vec4,   i16vec4,   i16vec4);int16_t   max3(int16_t,   int16_t,   int16_t);i16vec2   max3(i16vec2,   i16vec2,   i16vec2);i16vec3   max3(i16vec3,   i16vec3,   i16vec3);i16vec4   max3(i16vec4,   i16vec4,..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicAdd(coherent volatile inout uint, uint, int, int, int); int atomicAdd(coherent volatile inout  int,  int, int, int, int);uint atomicMin(coherent volatile inout uint, uint, int, int, int); int atomicMin(coherent volatile inout  int,  int, int, int, int);uint atomicMax(coherent volatile inout uint, uint, int, int, int); int atomicMax(coherent volatile inout  int,  int, int, int, int);uint atomicAnd(coherent volatile inout uint, uint, int, int, int); int atomicAnd(coherent volatile inout  int,  int, int, int, int);uint atomicOr (coherent volatile inout uint, uint, int, int, int); int atomicOr (coherent volatile inout  int,  int, int, int, int);uint atomicXor(coherent volatile inout uint, uint, int, int, int); int atomicXor(coherent volatile inout  int,  int, int, int, int);uint atomicExchange(coherent volatile inout uint, uint, int, int, int); int atomicExchange(coherent volatile inout  int,  int, int, int, int);uint atomicCompSwap(coherent volatile inout uint, uint, uint, int, int, int, int, int); int atomicCompSwap(coherent volatile inout  int,  int,  int, int, int, int, int, int);uint atomicLoad(coherent volatile in uint, int, int, int); int atomicLoad(coherent volatile in  int, int, int, int);void atomicStore(coherent volatile out uint, uint, int, int, int);void atomicStore(coherent volatile out  int,  int, int, int, int);\n"
                );
      bVar4 = true;
LAB_00108ca7:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint64_t atomicMin(coherent volatile inout uint64_t, uint64_t); int64_t atomicMin(coherent volatile inout  int64_t,  int64_t);uint64_t atomicMin(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicMin(coherent volatile inout  int64_t,  int64_t, int, int, int);float16_t atomicMin(coherent volatile inout float16_t, float16_t);float16_t atomicMin(coherent volatile inout float16_t, float16_t, int, int, int);   float atomicMin(coherent volatile inout float, float);   float atomicMin(coherent volatile inout float, float, int, int, int);  double atomicMin(coherent volatile inout double, double);  double atomicMin(coherent volatile inout double, double, int, int, int);uint64_t atomicMax(coherent volatile inout uint64_t, uint64_t); int64_t atomicMax(coherent volatile inout  int64_t,  int64_t);uint64_t atomicMax(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicMax(coherent volatile inout  int64_t,  int64_t, int, int, int);float16_t atomicMax(coherent volatile inout float16_t, float16_t);float16_t atomicMax(coherent volatile inout float16_t, float16_t, int, int, int);   float atomicMax(coherent volatile inout float, float);   float atomicMax(coherent volatile inout float, float, int, int, int);  double atomicMax(coherent volatile inout double, double);  double atomicMax(coherent volatile inout double, double, int, int, int);uint64_t atomicAnd(coherent volatile inout uint64_t, uint64_t); int64_t atomicAnd(coherent volatile inout  int64_t,  int64_t);uint64_t atomicAnd(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicAnd(coherent volatile inout  int64_t,  int64_t, int, int, int);uint64_t atomicOr (coherent volatile inout uint64_t, uint64_t); int64_t atomicOr (coherent volatile inout  int64_t,  int64_t);uint64_t atomicOr (coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicOr (coherent volatile inout  int64_t,  int64_t, int, int, int);uint64_t atomicXor(coherent volatile inout uint64_t, uint64_t); int64_t atomicXor(coherent volatile in..." /* TRUNCATED STRING LITERAL */
                );
      bVar11 = true;
    }
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    bVar2 = true;
    bVar8 = false;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "f16vec2 atomicAdd(coherent volatile inout f16vec2, f16vec2);f16vec4 atomicAdd(coherent volatile inout f16vec4, f16vec4);f16vec2 atomicMin(coherent volatile inout f16vec2, f16vec2);f16vec4 atomicMin(coherent volatile inout f16vec4, f16vec4);f16vec2 atomicMax(coherent volatile inout f16vec2, f16vec2);f16vec4 atomicMax(coherent volatile inout f16vec4, f16vec4);f16vec2 atomicExchange(coherent volatile inout f16vec2, f16vec2);f16vec4 atomicExchange(coherent volatile inout f16vec4, f16vec4);\n"
              );
    bVar9 = true;
LAB_001085e7:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "int   floatBitsToInt(highp float value);ivec2 floatBitsToInt(highp vec2  value);ivec3 floatBitsToInt(highp vec3  value);ivec4 floatBitsToInt(highp vec4  value);uint  floatBitsToUint(highp float value);uvec2 floatBitsToUint(highp vec2  value);uvec3 floatBitsToUint(highp vec3  value);uvec4 floatBitsToUint(highp vec4  value);float intBitsToFloat(highp int   value);vec2  intBitsToFloat(highp ivec2 value);vec3  intBitsToFloat(highp ivec3 value);vec4  intBitsToFloat(highp ivec4 value);float uintBitsToFloat(highp uint  value);vec2  uintBitsToFloat(highp uvec2 value);vec3  uintBitsToFloat(highp uvec3 value);vec4  uintBitsToFloat(highp uvec4 value);\n"
              );
    bVar21 = 399 < param_1;
    bVar19 = bVar33 && bVar21;
    bVar36 = bVar34;
    bVar5 = bVar19;
    if ((bVar19) || (bVar5 = bVar21, bVar8)) {
LAB_00108d7b:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float  fma(float,  float,  float );vec2   fma(vec2,   vec2,   vec2  );vec3   fma(vec3,   vec3,   vec3  );vec4   fma(vec4,   vec4,   vec4  );\n"
                );
      bVar34 = bVar36;
      if (bVar7) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "double fma(double, double, double);dvec2  fma(dvec2,  dvec2,  dvec2 );dvec3  fma(dvec3,  dvec3,  dvec3 );dvec4  fma(dvec4,  dvec4,  dvec4 );\n"
              );
        if (!bVar8) {
          if (!bVar19) goto LAB_00109ec6;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "float frexp(highp float, out highp int);vec2  frexp(highp vec2,  out highp ivec2);vec3  frexp(highp vec3,  out highp ivec3);vec4  frexp(highp vec4,  out highp ivec4);float ldexp(highp float, highp int);vec2  ldexp(highp vec2,  highp ivec2);vec3  ldexp(highp vec3,  highp ivec3);vec4  ldexp(highp vec4,  highp ivec4);\n"
                );
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "double frexp(double, out int);dvec2  frexp( dvec2, out ivec2);dvec3  frexp( dvec3, out ivec3);dvec4  frexp( dvec4, out ivec4);double ldexp(double, int);dvec2  ldexp( dvec2, ivec2);dvec3  ldexp( dvec3, ivec3);dvec4  ldexp( dvec4, ivec4);double packDouble2x32(uvec2);uvec2 unpackDouble2x32(double);\n"
                );
          goto LAB_00109b95;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float64_t fma(float64_t, float64_t, float64_t);f64vec2  fma(f64vec2,  f64vec2,  f64vec2 );f64vec3  fma(f64vec3,  f64vec3,  f64vec3 );f64vec4  fma(f64vec4,  f64vec4,  f64vec4 );\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float frexp(highp float, out highp int);vec2  frexp(highp vec2,  out highp ivec2);vec3  frexp(highp vec3,  out highp ivec3);vec4  frexp(highp vec4,  out highp ivec4);float ldexp(highp float, highp int);vec2  ldexp(highp vec2,  highp ivec2);vec3  ldexp(highp vec3,  highp ivec3);vec4  ldexp(highp vec4,  highp ivec4);\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "double frexp(double, out int);dvec2  frexp( dvec2, out ivec2);dvec3  frexp( dvec3, out ivec3);dvec4  frexp( dvec4, out ivec4);double ldexp(double, int);dvec2  ldexp( dvec2, ivec2);dvec3  ldexp( dvec3, ivec3);dvec4  ldexp( dvec4, ivec4);double packDouble2x32(uvec2);uvec2 unpackDouble2x32(double);\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float64_t frexp(float64_t, out int);f64vec2  frexp( f64vec2, out ivec2);f64vec3  frexp( f64vec3, out ivec3);f64vec4  frexp( f64vec4, out ivec4);float64_t ldexp(float64_t, int);f64vec2  ldexp( f64vec2, ivec2);f64vec3  ldexp( f64vec3, ivec3);f64vec4  ldexp( f64vec4, ivec4);\n"
              );
        if (bVar36) goto LAB_00109d48;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"highp uint packUnorm2x16(vec2);vec2 unpackUnorm2x16(highp uint);\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "highp uint packSnorm2x16(vec2);      vec2 unpackSnorm2x16(highp uint);highp uint packHalf2x16(vec2);\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"        vec2 unpackHalf2x16(highp uint);\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"highp uint packSnorm4x8(vec4);highp uint packUnorm4x8(vec4);\n");
      }
      else {
        bVar21 = bVar5;
        if (!bVar8) {
LAB_00108da2:
          local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      (this + 8);
          if (!bVar19) goto LAB_0010862c;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "float frexp(highp float, out highp int);vec2  frexp(highp vec2,  out highp ivec2);vec3  frexp(highp vec3,  out highp ivec3);vec4  frexp(highp vec4,  out highp ivec4);float ldexp(highp float, highp int);vec2  ldexp(highp vec2,  highp ivec2);vec3  ldexp(highp vec3,  highp ivec3);vec4  ldexp(highp vec4,  highp ivec4);\n"
                );
          bVar8 = bVar9;
          bVar5 = bVar21;
          if (!bVar36) goto LAB_0010863c;
          goto LAB_0010c670;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float64_t fma(float64_t, float64_t, float64_t);f64vec2  fma(f64vec2,  f64vec2,  f64vec2 );f64vec3  fma(f64vec3,  f64vec3,  f64vec3 );f64vec4  fma(f64vec4,  f64vec4,  f64vec4 );\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float frexp(highp float, out highp int);vec2  frexp(highp vec2,  out highp ivec2);vec3  frexp(highp vec3,  out highp ivec3);vec4  frexp(highp vec4,  out highp ivec4);float ldexp(highp float, highp int);vec2  ldexp(highp vec2,  highp ivec2);vec3  ldexp(highp vec3,  highp ivec3);vec4  ldexp(highp vec4,  highp ivec4);\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float64_t frexp(float64_t, out int);f64vec2  frexp( f64vec2, out ivec2);f64vec3  frexp( f64vec3, out ivec3);f64vec4  frexp( f64vec4, out ivec4);float64_t ldexp(float64_t, int);f64vec2  ldexp( f64vec2, ivec2);f64vec3  ldexp( f64vec3, ivec3);f64vec4  ldexp( f64vec4, ivec4);\n"
              );
        if (bVar36) {
LAB_00109d48:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,"highp uint packUnorm2x16(vec2);vec2 unpackUnorm2x16(highp uint);\n");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "highp uint packSnorm2x16(vec2);      vec2 unpackSnorm2x16(highp uint);highp uint packHalf2x16(vec2);\n"
                );
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,"mediump vec2 unpackHalf2x16(highp uint);\n");
          bVar36 = true;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"highp uint packSnorm4x8(vec4);highp uint packUnorm4x8(vec4);\n");
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "mediump vec4 unpackSnorm4x8(highp uint);mediump vec4 unpackUnorm4x8(highp uint);\n"
                );
      bVar8 = true;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "mat2 matrixCompMult(mat2 x, mat2 y);mat3 matrixCompMult(mat3 x, mat3 y);mat4 matrixCompMult(mat4 x, mat4 y);\n"
                );
      goto LAB_00108ea3;
    }
    if (!bVar37 || !bVar33) {
LAB_0010862c:
      bVar8 = bVar9;
      bVar5 = bVar21;
      if (bVar36) {
LAB_0010c670:
        local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    (this + 8);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"highp uint packUnorm2x16(vec2);vec2 unpackUnorm2x16(highp uint);\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "highp uint packSnorm2x16(vec2);      vec2 unpackSnorm2x16(highp uint);highp uint packHalf2x16(vec2);\n"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,"mediump vec2 unpackHalf2x16(highp uint);\n");
        bVar8 = bVar9;
        bVar5 = bVar21;
      }
      goto LAB_0010863c;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "double fma(double, double, double);dvec2  fma(dvec2,  dvec2,  dvec2 );dvec3  fma(dvec3,  dvec3,  dvec3 );dvec4  fma(dvec4,  dvec4,  dvec4 );\n"
              );
LAB_00109ec6:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "double frexp(double, out int);dvec2  frexp( dvec2, out ivec2);dvec3  frexp( dvec3, out ivec3);dvec4  frexp( dvec4, out ivec4);double ldexp(double, int);dvec2  ldexp( dvec2, ivec2);dvec3  ldexp( dvec3, ivec3);dvec4  ldexp( dvec4, ivec4);double packDouble2x32(uvec2);uvec2 unpackDouble2x32(double);\n"
              );
    bVar19 = false;
LAB_00109b95:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    if (bVar36) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"highp uint packUnorm2x16(vec2);vec2 unpackUnorm2x16(highp uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "highp uint packSnorm2x16(vec2);      vec2 unpackSnorm2x16(highp uint);highp uint packHalf2x16(vec2);\n"
                );
      pcVar26 = "mediump vec2 unpackHalf2x16(highp uint);\n";
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"highp uint packUnorm2x16(vec2);vec2 unpackUnorm2x16(highp uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "highp uint packSnorm2x16(vec2);      vec2 unpackSnorm2x16(highp uint);highp uint packHalf2x16(vec2);\n"
                );
      pcVar26 = "        vec2 unpackHalf2x16(highp uint);\n";
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,pcVar26);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"highp uint packSnorm4x8(vec4);highp uint packUnorm4x8(vec4);\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"vec4 unpackSnorm4x8(highp uint);vec4 unpackUnorm4x8(highp uint);\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "mat2 matrixCompMult(mat2 x, mat2 y);mat3 matrixCompMult(mat3 x, mat3 y);mat4 matrixCompMult(mat4 x, mat4 y);\n"
              );
    bVar8 = false;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "mat2   outerProduct(vec2 c, vec2 r);mat3   outerProduct(vec3 c, vec3 r);mat4   outerProduct(vec4 c, vec4 r);mat2x3 outerProduct(vec3 c, vec2 r);mat3x2 outerProduct(vec2 c, vec3 r);mat2x4 outerProduct(vec4 c, vec2 r);mat4x2 outerProduct(vec2 c, vec4 r);mat3x4 outerProduct(vec4 c, vec3 r);mat4x3 outerProduct(vec3 c, vec4 r);mat2   transpose(mat2   m);mat3   transpose(mat3   m);mat4   transpose(mat4   m);mat2x3 transpose(mat3x2 m);mat3x2 transpose(mat2x3 m);mat2x4 transpose(mat4x2 m);mat4x2 transpose(mat2x4 m);mat3x4 transpose(mat4x3 m);mat4x3 transpose(mat3x4 m);mat2x3 matrixCompMult(mat2x3, mat2x3);mat2x4 matrixCompMult(mat2x4, mat2x4);mat3x2 matrixCompMult(mat3x2, mat3x2);mat3x4 matrixCompMult(mat3x4, mat3x4);mat4x2 matrixCompMult(mat4x2, mat4x2);mat4x3 matrixCompMult(mat4x3, mat4x3);\n"
              );
    bVar34 = bVar36;
LAB_00109c15:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "float determinant(mat2 m);float determinant(mat3 m);float determinant(mat4 m);mat2 inverse(mat2 m);mat3 inverse(mat3 m);mat4 inverse(mat4 m);\n"
              );
    iVar23 = *param_4;
    bVar21 = false;
    bVar35 = false;
LAB_00108edc:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    if ((param_3 != 4) && (((param_3 != 2 || (0x1a3 < param_1)) && (param_3 != 1))))
    goto LAB_00109165;
    if (iVar23 == 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "vec4 texture2D(sampler2D, vec2);vec4 texture2DProj(sampler2D, vec3);vec4 texture2DProj(sampler2D, vec4);vec4 texture3D(sampler3D, vec3);vec4 texture3DProj(sampler3D, vec4);vec4 textureCube(samplerCube, vec3);\n"
                );
      iVar23 = *param_4;
LAB_001086ad:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      if (iVar23 != 0) goto LAB_00108f04;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "vec4 texture1D(sampler1D, float);vec4 texture1DProj(sampler1D, vec2);vec4 texture1DProj(sampler1D, vec4);vec4 shadow1D(sampler1DShadow, vec3);vec4 shadow2D(sampler2DShadow, vec3);vec4 shadow1DProj(sampler1DShadow, vec4);vec4 shadow2DProj(sampler2DShadow, vec4);vec4 texture2DRect(sampler2DRect, vec2);vec4 texture2DRectProj(sampler2DRect, vec3);vec4 texture2DRectProj(sampler2DRect, vec4);vec4 shadow2DRect(sampler2DRectShadow, vec3);vec4 shadow2DRectProj(sampler2DRectShadow, vec4);vec4 texture1DArray(sampler1DArray, vec2);vec4 texture2DArray(sampler2DArray, vec3);vec4 shadow1DArray(sampler1DArrayShadow, vec3);vec4 shadow2DArray(sampler2DArrayShadow, vec4);vec4 texture1DArray(sampler1DArray, vec2, float);vec4 texture2DArray(sampler2DArray, vec3, float);vec4 shadow1DArray(sampler1DArrayShadow, vec3, float);vec4 texture1DArrayLod(sampler1DArray, vec2, float);vec4 texture2DArrayLod(sampler2DArray, vec3, float);vec4 shadow1DArrayLod(sampler1DArrayShadow, vec3, float);\n"
                );
      iVar23 = *param_4;
      goto LAB_001086c9;
    }
LAB_00108f04:
    iVar23 = param_4[2];
joined_r0x001086e8:
    if (iVar23 == 0) {
      if ((bVar33) && (bVar9)) {
LAB_00108f26:
        local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    (this + 8);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uint atomicCounterIncrement(atomic_uint);uint atomicCounterDecrement(atomic_uint);uint atomicCounter(atomic_uint);\n"
              );
        if ((param_1 == 0x1c2) && (bVar33)) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "uint atomicCounterAddARB(atomic_uint, uint);uint atomicCounterSubtractARB(atomic_uint, uint);uint atomicCounterMinARB(atomic_uint, uint);uint atomicCounterMaxARB(atomic_uint, uint);uint atomicCounterAndARB(atomic_uint, uint);uint atomicCounterOrARB(atomic_uint, uint);uint atomicCounterXorARB(atomic_uint, uint);uint atomicCounterExchangeARB(atomic_uint, uint);uint atomicCounterCompSwapARB(atomic_uint, uint, uint);\n"
                );
          if (bVar8) goto LAB_00108f7d;
        }
        else {
LAB_00108f4d:
          local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                      (this + 8);
          if ((param_1 < 0x1cc) || (!bVar33)) goto LAB_00108737;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "uint atomicCounterAdd(atomic_uint, uint);uint atomicCounterSubtract(atomic_uint, uint);uint atomicCounterMin(atomic_uint, uint);uint atomicCounterMax(atomic_uint, uint);uint atomicCounterAnd(atomic_uint, uint);uint atomicCounterOr(atomic_uint, uint);uint atomicCounterXor(atomic_uint, uint);uint atomicCounterExchange(atomic_uint, uint);uint atomicCounterCompSwap(atomic_uint, uint, uint);\n"
                );
          if (bVar8) goto LAB_00108f7d;
        }
      }
      else {
LAB_001091d6:
        local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    (this + 8);
        if (bVar8) goto LAB_00108f26;
        bVar8 = param_1 == 0x1c2 && bVar33;
        if (param_1 != 0x1c2 || !bVar33) goto LAB_00108f4d;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uint atomicCounterAddARB(atomic_uint, uint);uint atomicCounterSubtractARB(atomic_uint, uint);uint atomicCounterMinARB(atomic_uint, uint);uint atomicCounterMaxARB(atomic_uint, uint);uint atomicCounterAndARB(atomic_uint, uint);uint atomicCounterOrARB(atomic_uint, uint);uint atomicCounterXorARB(atomic_uint, uint);uint atomicCounterExchangeARB(atomic_uint, uint);uint atomicCounterCompSwapARB(atomic_uint, uint, uint);\n"
              );
      }
LAB_00109204:
      local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "  int bitfieldExtract(  int, int, int);ivec2 bitfieldExtract(ivec2, int, int);ivec3 bitfieldExtract(ivec3, int, int);ivec4 bitfieldExtract(ivec4, int, int); uint bitfieldExtract( uint, int, int);uvec2 bitfieldExtract(uvec2, int, int);uvec3 bitfieldExtract(uvec3, int, int);uvec4 bitfieldExtract(uvec4, int, int);  int bitfieldInsert(  int base,   int, int, int);ivec2 bitfieldInsert(ivec2 base, ivec2, int, int);ivec3 bitfieldInsert(ivec3 base, ivec3, int, int);ivec4 bitfieldInsert(ivec4 base, ivec4, int, int); uint bitfieldInsert( uint base,  uint, int, int);uvec2 bitfieldInsert(uvec2 base, uvec2, int, int);uvec3 bitfieldInsert(uvec3 base, uvec3, int, int);uvec4 bitfieldInsert(uvec4 base, uvec4, int, int);\n"
                );
      if (!bVar19) goto LAB_0010874a;
      goto LAB_00109220;
    }
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    if ((char)param_4[4] != '\0') {
      if ((!bVar33) || (!bVar9)) goto LAB_0010c00a;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicCounterIncrement(volatile coherent uint);uint atomicCounterDecrement(volatile coherent uint);uint atomicCounter(volatile coherent uint);\n"
                );
      if (0x1cb < param_1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uint atomicCounterAdd(volatile coherent uint, uint);uint atomicCounterSubtract(volatile coherent uint, uint);uint atomicCounterMin(volatile coherent uint, uint);uint atomicCounterMax(volatile coherent uint, uint);uint atomicCounterAnd(volatile coherent uint, uint);uint atomicCounterOr(volatile coherent uint, uint);uint atomicCounterXor(volatile coherent uint, uint);uint atomicCounterExchange(volatile coherent uint, uint);uint atomicCounterCompSwap(volatile coherent uint, uint, uint);\n"
              );
        if (bVar8) goto LAB_00108f7d;
        goto LAB_00109204;
      }
    }
LAB_00108737:
    if (!bVar8) goto LAB_0010873f;
LAB_00108f7d:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "  int bitfieldExtract(  int, int, int);ivec2 bitfieldExtract(ivec2, int, int);ivec3 bitfieldExtract(ivec3, int, int);ivec4 bitfieldExtract(ivec4, int, int); uint bitfieldExtract( uint, int, int);uvec2 bitfieldExtract(uvec2, int, int);uvec3 bitfieldExtract(uvec3, int, int);uvec4 bitfieldExtract(uvec4, int, int);  int bitfieldInsert(  int base,   int, int, int);ivec2 bitfieldInsert(ivec2 base, ivec2, int, int);ivec3 bitfieldInsert(ivec3 base, ivec3, int, int);ivec4 bitfieldInsert(ivec4 base, ivec4, int, int); uint bitfieldInsert( uint base,  uint, int, int);uvec2 bitfieldInsert(uvec2 base, uvec2, int, int);uvec3 bitfieldInsert(uvec3 base, uvec3, int, int);uvec4 bitfieldInsert(uvec4 base, uvec4, int, int);\n"
              );
    if (bVar19) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "  int findLSB(  int);ivec2 findLSB(ivec2);ivec3 findLSB(ivec3);ivec4 findLSB(ivec4);  int findLSB( uint);ivec2 findLSB(uvec2);ivec3 findLSB(uvec3);ivec4 findLSB(uvec4);\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "  int bitCount(  int);ivec2 bitCount(ivec2);ivec3 bitCount(ivec3);ivec4 bitCount(ivec4);  int bitCount( uint);ivec2 bitCount(uvec2);ivec3 bitCount(uvec3);ivec4 bitCount(uvec4);  int findMSB(highp   int);ivec2 findMSB(highp ivec2);ivec3 findMSB(highp ivec3);ivec4 findMSB(highp ivec4);  int findMSB(highp  uint);ivec2 findMSB(highp uvec2);ivec3 findMSB(highp uvec3);ivec4 findMSB(highp uvec4);\n"
                );
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "lowp   int findLSB(  int);lowp ivec2 findLSB(ivec2);lowp ivec3 findLSB(ivec3);lowp ivec4 findLSB(ivec4);lowp   int findLSB( uint);lowp ivec2 findLSB(uvec2);lowp ivec3 findLSB(uvec3);lowp ivec4 findLSB(uvec4);\n"
                );
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               " uint uaddCarry(highp  uint, highp  uint, out lowp  uint carry);uvec2 uaddCarry(highp uvec2, highp uvec2, out lowp uvec2 carry);uvec3 uaddCarry(highp uvec3, highp uvec3, out lowp uvec3 carry);uvec4 uaddCarry(highp uvec4, highp uvec4, out lowp uvec4 carry); uint usubBorrow(highp  uint, highp  uint, out lowp  uint borrow);uvec2 usubBorrow(highp uvec2, highp uvec2, out lowp uvec2 borrow);uvec3 usubBorrow(highp uvec3, highp uvec3, out lowp uvec3 borrow);uvec4 usubBorrow(highp uvec4, highp uvec4, out lowp uvec4 borrow);void umulExtended(highp  uint, highp  uint, out highp  uint, out highp  uint lsb);void umulExtended(highp uvec2, highp uvec2, out highp uvec2, out highp uvec2 lsb);void umulExtended(highp uvec3, highp uvec3, out highp uvec3, out highp uvec3 lsb);void umulExtended(highp uvec4, highp uvec4, out highp uvec4, out highp uvec4 lsb);void imulExtended(highp   int, highp   int, out highp   int, out highp   int lsb);void imulExtended(highp ivec2, highp ivec2, out highp ivec2, out highp ivec2 lsb);void imulExtended(highp ivec3, highp ivec3, out highp ivec3, out highp ivec3 lsb);void imulExtended(highp ivec4, highp ivec4, out highp ivec4, out highp ivec4 lsb);  int bitfieldReverse(highp   int);ivec2 bitfieldReverse(highp ivec2);ivec3 bitfieldReverse(highp ivec3);ivec4 bitfieldReverse(highp ivec4); uint bitfieldReverse(highp  uint);uvec2 bitfieldReverse(highp uvec2);uvec3 bitfieldReverse(highp uvec3);uvec4 bitfieldReverse(highp uvec4);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "lowp   int bitCount(  int);lowp ivec2 bitCount(ivec2);lowp ivec3 bitCount(ivec3);lowp ivec4 bitCount(ivec4);lowp   int bitCount( uint);lowp ivec2 bitCount(uvec2);lowp ivec3 bitCount(uvec3);lowp ivec4 bitCount(uvec4);lowp   int findMSB(highp   int);lowp ivec2 findMSB(highp ivec2);lowp ivec3 findMSB(highp ivec3);lowp ivec4 findMSB(highp ivec4);lowp   int findMSB(highp  uint);lowp ivec2 findMSB(highp uvec2);lowp ivec3 findMSB(highp uvec3);lowp ivec4 findMSB(highp uvec4);\n"
              );
    if (bVar4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint64_t ballotARB(bool);float readInvocationARB(float, uint);vec2  readInvocationARB(vec2,  uint);vec3  readInvocationARB(vec3,  uint);vec4  readInvocationARB(vec4,  uint);int   readInvocationARB(int,   uint);ivec2 readInvocationARB(ivec2, uint);ivec3 readInvocationARB(ivec3, uint);ivec4 readInvocationARB(ivec4, uint);uint  readInvocationARB(uint,  uint);uvec2 readInvocationARB(uvec2, uint);uvec3 readInvocationARB(uvec3, uint);uvec4 readInvocationARB(uvec4, uint);float readFirstInvocationARB(float);vec2  readFirstInvocationARB(vec2);vec3  readFirstInvocationARB(vec3);vec4  readFirstInvocationARB(vec4);int   readFirstInvocationARB(int);ivec2 readFirstInvocationARB(ivec2);ivec3 readFirstInvocationARB(ivec3);ivec4 readFirstInvocationARB(ivec4);uint  readFirstInvocationARB(uint);uvec2 readFirstInvocationARB(uvec2);uvec3 readFirstInvocationARB(uvec3);uvec4 readFirstInvocationARB(uvec4);\n"
                );
      bVar8 = bVar4;
      bVar9 = bVar2;
      if (!bVar2) goto LAB_00108fe8;
    }
    else {
      bVar9 = bVar4;
      if (!bVar2) {
        bVar8 = true;
        goto LAB_00108fe8;
      }
    }
LAB_00109284:
    bVar4 = bVar9;
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "bool anyInvocationARB(bool);bool allInvocationsARB(bool);bool allInvocationsEqualARB(bool);\n"
              );
    bVar8 = bVar2;
LAB_00108fe8:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "void subgroupBarrier();void subgroupMemoryBarrier();void subgroupMemoryBarrierBuffer();void subgroupMemoryBarrierImage();bool subgroupElect();bool   subgroupAll(bool);\nbool   subgroupAny(bool);\nuvec4  subgroupBallot(bool);\nbool   subgroupInverseBallot(uvec4);\nbool   subgroupBallotBitExtract(uvec4, uint);\nuint   subgroupBallotBitCount(uvec4);\nuint   subgroupBallotInclusiveBitCount(uvec4);\nuint   subgroupBallotExclusiveBitCount(uvec4);\nuint   subgroupBallotFindLSB(uvec4);\nuint   subgroupBallotFindMSB(uvec4);\n"
              );
    pcVar26 = (char *)0x0;
    ppuVar30 = &initialize(int,EProfile,glslang::SpvVersion_const&)::subgroupOps;
    local_2b0 = initialize(int,EProfile,glslang::SpvVersion_const&)::subgroupOps;
    do {
      pcVar15 = strstr(local_2b0,"And");
      if (pcVar15 != (char *)0x0) goto LAB_00109050;
      pcVar15 = strstr(local_2b0,"Xor");
      if (pcVar15 == (char *)0x0) {
        bVar9 = true;
        if (((pcVar26 == (char *)0x0) && (pcVar26 = strstr(local_2b0,"Mul"), pcVar26 == (char *)0x0)
            ) && (pcVar26 = strstr(local_2b0,"Min"), pcVar26 == (char *)0x0)) {
          pcVar26 = strstr(local_2b0,"Max");
          bVar9 = pcVar26 != (char *)0x0;
        }
LAB_001093ce:
        ppuVar31 = &initialize(int,EProfile,glslang::SpvVersion_const&)::floatTypes;
        do {
          __snprintf_chk(&local_148,0x100,2,0x100,local_2b0,*ppuVar31,*ppuVar31);
          sVar14 = strlen((char *)&local_148);
          uVar20 = *(ulong *)(this + 0x18);
          if (0x7fffffffffffffff - uVar20 < sVar14) goto LAB_001099d7;
          pTVar32 = *(TBuiltIns **)(this + 0x10);
          uVar22 = sVar14 + uVar20;
          if (pTVar32 == this + 0x20) {
            uVar27 = 0xf;
          }
          else {
            uVar27 = *(ulong *)(this + 0x20);
          }
          if (uVar27 < uVar22) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_mutate(local_2a8,uVar20,0,(char *)&local_148,sVar14);
            pTVar32 = *(TBuiltIns **)(this + 0x10);
          }
          else if (sVar14 != 0) {
            pTVar17 = pTVar32 + uVar20;
            if (sVar14 == 1) {
              *pTVar17 = local_148._0_1_;
              pTVar32 = *(TBuiltIns **)(this + 0x10);
            }
            else {
              uVar29 = (uint)sVar14;
              if (uVar29 < 8) {
                if ((sVar14 & 4) == 0) {
                  if (uVar29 != 0) {
                    *pTVar17 = local_148._0_1_;
                    if ((sVar14 & 2) == 0) goto LAB_0010941a;
                    *(undefined2 *)(pTVar17 + ((sVar14 & 0xffffffff) - 2)) =
                         *(undefined2 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 6);
                    pTVar32 = *(TBuiltIns **)(this + 0x10);
                  }
                }
                else {
                  *(undefined4 *)pTVar17 = local_148;
                  *(undefined4 *)(pTVar17 + ((sVar14 & 0xffffffff) - 4)) =
                       *(undefined4 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 4);
                  pTVar32 = *(TBuiltIns **)(this + 0x10);
                }
              }
              else {
                *(ulong *)pTVar17 = CONCAT44(uStack_144,local_148);
                *(undefined8 *)(pTVar17 + ((sVar14 & 0xffffffff) - 8)) =
                     *(undefined8 *)((long)&uStack_150 + (sVar14 & 0xffffffff));
                lVar16 = (long)pTVar17 - (long)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                pcVar26 = (char *)((long)&local_148 + -lVar16);
                puVar25 = (undefined8 *)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                for (uVar20 = (ulong)((int)lVar16 + uVar29 >> 3); uVar20 != 0; uVar20 = uVar20 - 1)
                {
                  *puVar25 = *(undefined8 *)pcVar26;
                  pcVar26 = pcVar26 + ((ulong)bVar38 * -2 + 1) * 8;
                  puVar25 = puVar25 + (ulong)bVar38 * -2 + 1;
                }
LAB_0010941a:
                pTVar32 = *(TBuiltIns **)(this + 0x10);
              }
            }
          }
          ppuVar31 = ppuVar31 + 1;
          *(ulong *)(this + 0x18) = uVar22;
          pTVar32[uVar22] = (TBuiltIns)0x0;
        } while (ppuVar31 != &initialize(int,EProfile,glslang::SpvVersion_const&)::subgroupOps);
        if (bVar19) {
          ppuVar31 = &initialize(int,EProfile,glslang::SpvVersion_const&)::doubleTypes;
          do {
            __snprintf_chk(&local_148,0x100,2,0x100,local_2b0,*ppuVar31,*ppuVar31);
            sVar14 = strlen((char *)&local_148);
            uVar20 = *(ulong *)(this + 0x18);
            if (0x7fffffffffffffff - uVar20 < sVar14) goto LAB_001099d7;
            pTVar32 = *(TBuiltIns **)(this + 0x10);
            uVar22 = sVar14 + uVar20;
            if (this + 0x20 == pTVar32) {
              uVar27 = 0xf;
            }
            else {
              uVar27 = *(ulong *)(this + 0x20);
            }
            if (uVar27 < uVar22) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate(local_2a8,uVar20,0,(char *)&local_148,sVar14);
              pTVar32 = *(TBuiltIns **)(this + 0x10);
            }
            else if (sVar14 != 0) {
              pTVar17 = pTVar32 + uVar20;
              if (sVar14 == 1) {
                *pTVar17 = local_148._0_1_;
                pTVar32 = *(TBuiltIns **)(this + 0x10);
              }
              else {
                uVar29 = (uint)sVar14;
                if (uVar29 < 8) {
                  if ((sVar14 & 4) == 0) {
                    if (uVar29 != 0) {
                      *pTVar17 = local_148._0_1_;
                      if ((sVar14 & 2) == 0) goto LAB_001097b0;
                      *(undefined2 *)(pTVar17 + ((sVar14 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 6);
                      pTVar32 = *(TBuiltIns **)(this + 0x10);
                    }
                  }
                  else {
                    *(undefined4 *)pTVar17 = local_148;
                    *(undefined4 *)(pTVar17 + ((sVar14 & 0xffffffff) - 4)) =
                         *(undefined4 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 4);
                    pTVar32 = *(TBuiltIns **)(this + 0x10);
                  }
                }
                else {
                  *(ulong *)pTVar17 = CONCAT44(uStack_144,local_148);
                  *(undefined8 *)(pTVar17 + ((sVar14 & 0xffffffff) - 8)) =
                       *(undefined8 *)((long)&uStack_150 + (sVar14 & 0xffffffff));
                  lVar16 = (long)pTVar17 - (long)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                  pcVar26 = (char *)((long)&local_148 + -lVar16);
                  puVar25 = (undefined8 *)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                  for (uVar20 = (ulong)(uVar29 + (int)lVar16 >> 3); uVar20 != 0; uVar20 = uVar20 - 1
                      ) {
                    *puVar25 = *(undefined8 *)pcVar26;
                    pcVar26 = pcVar26 + ((ulong)bVar38 * -2 + 1) * 8;
                    puVar25 = puVar25 + (ulong)bVar38 * -2 + 1;
                  }
LAB_001097b0:
                  pTVar32 = *(TBuiltIns **)(this + 0x10);
                }
              }
            }
            ppuVar31 = ppuVar31 + 1;
            *(ulong *)(this + 0x18) = uVar22;
            pTVar32[uVar22] = (TBuiltIns)0x0;
          } while (ppuVar31 != &initialize(int,EProfile,glslang::SpvVersion_const&)::floatTypes);
        }
        if (!bVar9) goto LAB_00109536;
      }
      else {
        pcVar15 = strstr(local_2b0,"ShuffleXor");
        if (((pcVar26 == (char *)0x0) && (pcVar26 = strstr(local_2b0,"Mul"), pcVar26 == (char *)0x0)
            ) && ((pcVar26 = strstr(local_2b0,"Min"), pcVar26 == (char *)0x0 &&
                  (pcVar26 = strstr(local_2b0,"Max"), pcVar26 == (char *)0x0)))) {
          if (pcVar15 == (char *)0x0) goto LAB_00109536;
          bVar9 = false;
          goto LAB_001093ce;
        }
        if (pcVar15 != (char *)0x0) {
          bVar9 = true;
          goto LAB_001093ce;
        }
      }
LAB_00109059:
      ppuVar31 = &initialize(int,EProfile,glslang::SpvVersion_const&)::intTypes;
      do {
        __snprintf_chk(&local_148,0x100,2,0x100,local_2b0,*ppuVar31,*ppuVar31);
        sVar14 = strlen((char *)&local_148);
        uVar20 = *(ulong *)(this + 0x18);
        if (0x7fffffffffffffff - uVar20 < sVar14) goto LAB_001099d7;
        pTVar32 = *(TBuiltIns **)(this + 0x10);
        uVar22 = sVar14 + uVar20;
        if (pTVar32 == this + 0x20) {
          uVar27 = 0xf;
        }
        else {
          uVar27 = *(ulong *)(this + 0x20);
        }
        if (uVar27 < uVar22) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          _M_mutate(local_2a8,uVar20,0,(char *)&local_148,sVar14);
          pTVar32 = *(TBuiltIns **)(this + 0x10);
        }
        else if (sVar14 != 0) {
          pTVar17 = pTVar32 + uVar20;
          if (sVar14 == 1) {
            *pTVar17 = local_148._0_1_;
            pTVar32 = *(TBuiltIns **)(this + 0x10);
          }
          else {
            uVar29 = (uint)sVar14;
            if (uVar29 < 8) {
              if ((sVar14 & 4) == 0) {
                if (uVar29 != 0) {
                  *pTVar17 = local_148._0_1_;
                  if ((sVar14 & 2) == 0) goto LAB_001090b2;
                  *(undefined2 *)(pTVar17 + ((sVar14 & 0xffffffff) - 2)) =
                       *(undefined2 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 6);
                  pTVar32 = *(TBuiltIns **)(this + 0x10);
                }
              }
              else {
                *(undefined4 *)pTVar17 = local_148;
                *(undefined4 *)(pTVar17 + ((sVar14 & 0xffffffff) - 4)) =
                     *(undefined4 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 4);
                pTVar32 = *(TBuiltIns **)(this + 0x10);
              }
            }
            else {
              *(ulong *)pTVar17 = CONCAT44(uStack_144,local_148);
              *(undefined8 *)(pTVar17 + ((sVar14 & 0xffffffff) - 8)) =
                   *(undefined8 *)((long)&uStack_150 + (sVar14 & 0xffffffff));
              lVar16 = (long)pTVar17 - (long)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
              pcVar26 = (char *)((long)&local_148 + -lVar16);
              puVar25 = (undefined8 *)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
              for (uVar20 = (ulong)((int)lVar16 + uVar29 >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
                *puVar25 = *(undefined8 *)pcVar26;
                pcVar26 = pcVar26 + ((ulong)bVar38 * -2 + 1) * 8;
                puVar25 = puVar25 + (ulong)bVar38 * -2 + 1;
              }
LAB_001090b2:
              pTVar32 = *(TBuiltIns **)(this + 0x10);
            }
          }
        }
        ppuVar31 = ppuVar31 + 1;
        *(ulong *)(this + 0x18) = uVar22;
        pTVar32[uVar22] = (TBuiltIns)0x0;
      } while (ppuVar31 != &initialize(int,EProfile,glslang::SpvVersion_const&)::doubleTypes);
      ppuVar30 = ppuVar30 + 1;
      if (ppuVar30 == (undefined **)&DAT_0014d2d8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xf8),"void subgroupMemoryBarrierShared();\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),"void subgroupMemoryBarrierShared();\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x210),"void subgroupMemoryBarrierShared();\n");
        bVar9 = 0x8b < param_1 && bVar33;
        if ((bVar8) || (bVar9)) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,"bool subgroupQuadAll(bool);\nbool subgroupQuadAny(bool);\n");
        }
        goto LAB_0010877d;
      }
      pcVar26 = *ppuVar30;
      pcVar15 = strstr(pcVar26,"Or");
      pcVar26 = strstr(pcVar26,"Add");
      local_2b0 = *ppuVar30;
      if (pcVar15 != (char *)0x0) {
LAB_00109050:
        if ((((pcVar26 == (char *)0x0) &&
             (pcVar26 = strstr(local_2b0,"Mul"), pcVar26 == (char *)0x0)) &&
            (pcVar26 = strstr(local_2b0,"Min"), pcVar26 == (char *)0x0)) &&
           (pcVar26 = strstr(local_2b0,"Max"), pcVar26 == (char *)0x0)) {
LAB_00109536:
          ppuVar31 = &initialize(int,EProfile,glslang::SpvVersion_const&)::boolTypes;
          do {
            __snprintf_chk(&local_148,0x100,2,0x100,local_2b0,*ppuVar31,*ppuVar31);
            sVar14 = strlen((char *)&local_148);
            uVar20 = *(ulong *)(this + 0x18);
            if (0x7fffffffffffffff - uVar20 < sVar14) goto LAB_001099d7;
            pTVar32 = *(TBuiltIns **)(this + 0x10);
            uVar22 = sVar14 + uVar20;
            if (pTVar32 == this + 0x20) {
              uVar27 = 0xf;
            }
            else {
              uVar27 = *(ulong *)(this + 0x20);
            }
            if (uVar27 < uVar22) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::_M_mutate(local_2a8,uVar20,0,(char *)&local_148,sVar14);
              pTVar32 = *(TBuiltIns **)(this + 0x10);
            }
            else if (sVar14 != 0) {
              pTVar17 = pTVar32 + uVar20;
              if (sVar14 == 1) {
                *pTVar17 = local_148._0_1_;
                pTVar32 = *(TBuiltIns **)(this + 0x10);
              }
              else {
                uVar29 = (uint)sVar14;
                if (uVar29 < 8) {
                  if ((sVar14 & 4) == 0) {
                    if (uVar29 != 0) {
                      *pTVar17 = local_148._0_1_;
                      if ((sVar14 & 2) == 0) goto LAB_0010957a;
                      *(undefined2 *)(pTVar17 + ((sVar14 & 0xffffffff) - 2)) =
                           *(undefined2 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 6);
                      pTVar32 = *(TBuiltIns **)(this + 0x10);
                    }
                  }
                  else {
                    *(undefined4 *)pTVar17 = local_148;
                    *(undefined4 *)(pTVar17 + ((sVar14 & 0xffffffff) - 4)) =
                         *(undefined4 *)((long)&uStack_150 + (sVar14 & 0xffffffff) + 4);
                    pTVar32 = *(TBuiltIns **)(this + 0x10);
                  }
                }
                else {
                  *(ulong *)pTVar17 = CONCAT44(uStack_144,local_148);
                  *(undefined8 *)(pTVar17 + ((sVar14 & 0xffffffff) - 8)) =
                       *(undefined8 *)((long)&uStack_150 + (sVar14 & 0xffffffff));
                  lVar16 = (long)pTVar17 - (long)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                  pcVar26 = (char *)((long)&local_148 + -lVar16);
                  puVar25 = (undefined8 *)((ulong)(pTVar17 + 8) & 0xfffffffffffffff8);
                  for (uVar20 = (ulong)(uVar29 + (int)lVar16 >> 3); uVar20 != 0; uVar20 = uVar20 - 1
                      ) {
                    *puVar25 = *(undefined8 *)pcVar26;
                    pcVar26 = pcVar26 + ((ulong)bVar38 * -2 + 1) * 8;
                    puVar25 = puVar25 + (ulong)bVar38 * -2 + 1;
                  }
LAB_0010957a:
                  pTVar32 = *(TBuiltIns **)(this + 0x10);
                }
              }
            }
            ppuVar31 = ppuVar31 + 1;
            *(ulong *)(this + 0x18) = uVar22;
            pTVar32[uVar22] = (TBuiltIns)0x0;
          } while (ppuVar31 != &initialize(int,EProfile,glslang::SpvVersion_const&)::intTypes);
        }
        goto LAB_00109059;
      }
    } while( true );
  }
  bVar34 = param_3 == 8;
  bVar8 = 0x135 < param_1 && bVar34;
  if (0x135 < param_1 && bVar34) {
    bVar2 = false;
    pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "float64_t sqrt(float64_t);f64vec2  sqrt(f64vec2);f64vec3  sqrt(f64vec3);f64vec4  sqrt(f64vec4);float64_t inversesqrt(float64_t);f64vec2  inversesqrt(f64vec2);f64vec3  inversesqrt(f64vec3);f64vec4  inversesqrt(f64vec4);float64_t abs(float64_t);f64vec2  abs(f64vec2);f64vec3  abs(f64vec3);f64vec4  abs(f64vec4);float64_t sign(float64_t);f64vec2  sign(f64vec2);f64vec3  sign(f64vec3);f64vec4  sign(f64vec4);float64_t floor(float64_t);f64vec2  floor(f64vec2);f64vec3  floor(f64vec3);f64vec4  floor(f64vec4);float64_t trunc(float64_t);f64vec2  trunc(f64vec2);f64vec3  trunc(f64vec3);f64vec4  trunc(f64vec4);float64_t round(float64_t);f64vec2  round(f64vec2);f64vec3  round(f64vec3);f64vec4  round(f64vec4);float64_t roundEven(float64_t);f64vec2  roundEven(f64vec2);f64vec3  roundEven(f64vec3);f64vec4  roundEven(f64vec4);float64_t ceil(float64_t);f64vec2  ceil(f64vec2);f64vec3  ceil(f64vec3);f64vec4  ceil(f64vec4);float64_t fract(float64_t);f64vec2  fract(f64vec2);f64vec3  fract(f64vec3);f64vec4  fract(f64vec4);float64_t mod(float64_t, float64_t);f64vec2  mod(f64vec2 , float64_t);f64vec3  mod(f64vec3 , float64_t);f64vec4  mod(f64vec4 , float64_t);f64vec2  mod(f64vec2 , f64vec2);f64vec3  mod(f64vec3 , f64vec3);f64vec4  mod(f64vec4 , f64vec4);float64_t modf(float64_t, out float64_t);f64vec2  modf(f64vec2,  out f64vec2);f64vec3  modf(f64vec3,  out f64vec3);f64vec4  modf(f64vec4,  out f64vec4);float64_t min(float64_t, float64_t);f64vec2  min(f64vec2,  float64_t);f64vec3  min(f64vec3,  float64_t);f64vec4  min(f64vec4,  float64_t);f64vec2  min(f64vec2,  f64vec2);f64vec3  min(f64vec3,  f64vec3);f64vec4  min(f64vec4,  f64vec4);float64_t max(float64_t, float64_t);f64vec2  max(f64vec2 , float64_t);f64vec3  max(f64vec3 , float64_t);f64vec4  max(f64vec4 , float64_t);f64vec2  max(f64vec2 , f64vec2);f64vec3  max(f64vec3 , f64vec3);f64vec4  max(f64vec4 , f64vec4);float64_t clamp(float64_t, float64_t, float64_t);f64vec2  clamp(f64vec2 , float64_t, float64_t);f64vec3  clamp(f64vec3 , float64_t, float64_t);f64vec4  clamp(f64vec4 , float64_t, float..." /* TRUNCATED STRING LITERAL */
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "int64_t abs(int64_t);i64vec2 abs(i64vec2);i64vec3 abs(i64vec3);i64vec4 abs(i64vec4);int64_t sign(int64_t);i64vec2 sign(i64vec2);i64vec3 sign(i64vec3);i64vec4 sign(i64vec4);int64_t  min(int64_t,  int64_t);i64vec2  min(i64vec2,  int64_t);i64vec3  min(i64vec3,  int64_t);i64vec4  min(i64vec4,  int64_t);i64vec2  min(i64vec2,  i64vec2);i64vec3  min(i64vec3,  i64vec3);i64vec4  min(i64vec4,  i64vec4);uint64_t min(uint64_t, uint64_t);u64vec2  min(u64vec2,  uint64_t);u64vec3  min(u64vec3,  uint64_t);u64vec4  min(u64vec4,  uint64_t);u64vec2  min(u64vec2,  u64vec2);u64vec3  min(u64vec3,  u64vec3);u64vec4  min(u64vec4,  u64vec4);int64_t  max(int64_t,  int64_t);i64vec2  max(i64vec2,  int64_t);i64vec3  max(i64vec3,  int64_t);i64vec4  max(i64vec4,  int64_t);i64vec2  max(i64vec2,  i64vec2);i64vec3  max(i64vec3,  i64vec3);i64vec4  max(i64vec4,  i64vec4);uint64_t max(uint64_t, uint64_t);u64vec2  max(u64vec2,  uint64_t);u64vec3  max(u64vec3,  uint64_t);u64vec4  max(u64vec4,  uint64_t);u64vec2  max(u64vec2,  u64vec2);u64vec3  max(u64vec3,  u64vec3);u64vec4  max(u64vec4,  u64vec4);int64_t  clamp(int64_t,  int64_t,  int64_t);i64vec2  clamp(i64vec2,  int64_t,  int64_t);i64vec3  clamp(i64vec3,  int64_t,  int64_t);i64vec4  clamp(i64vec4,  int64_t,  int64_t);i64vec2  clamp(i64vec2,  i64vec2,  i64vec2);i64vec3  clamp(i64vec3,  i64vec3,  i64vec3);i64vec4  clamp(i64vec4,  i64vec4,  i64vec4);uint64_t clamp(uint64_t, uint64_t, uint64_t);u64vec2  clamp(u64vec2,  uint64_t, uint64_t);u64vec3  clamp(u64vec3,  uint64_t, uint64_t);u64vec4  clamp(u64vec4,  uint64_t, uint64_t);u64vec2  clamp(u64vec2,  u64vec2,  u64vec2);u64vec3  clamp(u64vec3,  u64vec3,  u64vec3);u64vec4  clamp(u64vec4,  u64vec4,  u64vec4);int64_t  mix(int64_t,  int64_t,  bool);i64vec2  mix(i64vec2,  i64vec2,  bvec2);i64vec3  mix(i64vec3,  i64vec3,  bvec3);i64vec4  mix(i64vec4,  i64vec4,  bvec4);uint64_t mix(uint64_t, uint64_t, bool);u64vec2  mix(u64vec2,  u64vec2,  bvec2);u64vec3  mix(u64vec3,  u64vec3,  bvec3);u64vec4  mix(u64vec4,  u64vec4,  bvec4);int64_t doubleBitsToInt64(float64_..." /* TRUNCATED STRING LITERAL */
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "uint atomicAdd(coherent volatile inout uint, uint, int, int, int); int atomicAdd(coherent volatile inout  int,  int, int, int, int);uint atomicMin(coherent volatile inout uint, uint, int, int, int); int atomicMin(coherent volatile inout  int,  int, int, int, int);uint atomicMax(coherent volatile inout uint, uint, int, int, int); int atomicMax(coherent volatile inout  int,  int, int, int, int);uint atomicAnd(coherent volatile inout uint, uint, int, int, int); int atomicAnd(coherent volatile inout  int,  int, int, int, int);uint atomicOr (coherent volatile inout uint, uint, int, int, int); int atomicOr (coherent volatile inout  int,  int, int, int, int);uint atomicXor(coherent volatile inout uint, uint, int, int, int); int atomicXor(coherent volatile inout  int,  int, int, int, int);uint atomicExchange(coherent volatile inout uint, uint, int, int, int); int atomicExchange(coherent volatile inout  int,  int, int, int, int);uint atomicCompSwap(coherent volatile inout uint, uint, uint, int, int, int, int, int); int atomicCompSwap(coherent volatile inout  int,  int,  int, int, int, int, int, int);uint atomicLoad(coherent volatile in uint, int, int, int); int atomicLoad(coherent volatile in  int, int, int, int);void atomicStore(coherent volatile out uint, uint, int, int, int);void atomicStore(coherent volatile out  int,  int, int, int, int);\n"
              );
    bVar4 = false;
    bVar9 = bVar8;
    bVar34 = bVar8;
    bVar11 = false;
    goto LAB_001085e7;
  }
  if ((0x1c1 < param_1) && (bVar33)) goto LAB_00108c70;
  bVar9 = 0x1b7 < param_1 && bVar33;
  bVar8 = 0x1ad < param_1 && bVar33;
  if (bVar8) goto LAB_0010ca97;
  bVar11 = bVar9;
  if (bVar9) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,
               "uint64_t atomicMin(coherent volatile inout uint64_t, uint64_t); int64_t atomicMin(coherent volatile inout  int64_t,  int64_t);uint64_t atomicMin(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicMin(coherent volatile inout  int64_t,  int64_t, int, int, int);float16_t atomicMin(coherent volatile inout float16_t, float16_t);float16_t atomicMin(coherent volatile inout float16_t, float16_t, int, int, int);   float atomicMin(coherent volatile inout float, float);   float atomicMin(coherent volatile inout float, float, int, int, int);  double atomicMin(coherent volatile inout double, double);  double atomicMin(coherent volatile inout double, double, int, int, int);uint64_t atomicMax(coherent volatile inout uint64_t, uint64_t); int64_t atomicMax(coherent volatile inout  int64_t,  int64_t);uint64_t atomicMax(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicMax(coherent volatile inout  int64_t,  int64_t, int, int, int);float16_t atomicMax(coherent volatile inout float16_t, float16_t);float16_t atomicMax(coherent volatile inout float16_t, float16_t, int, int, int);   float atomicMax(coherent volatile inout float, float);   float atomicMax(coherent volatile inout float, float, int, int, int);  double atomicMax(coherent volatile inout double, double);  double atomicMax(coherent volatile inout double, double, int, int, int);uint64_t atomicAnd(coherent volatile inout uint64_t, uint64_t); int64_t atomicAnd(coherent volatile inout  int64_t,  int64_t);uint64_t atomicAnd(coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicAnd(coherent volatile inout  int64_t,  int64_t, int, int, int);uint64_t atomicOr (coherent volatile inout uint64_t, uint64_t); int64_t atomicOr (coherent volatile inout  int64_t,  int64_t);uint64_t atomicOr (coherent volatile inout uint64_t, uint64_t, int, int, int); int64_t atomicOr (coherent volatile inout  int64_t,  int64_t, int, int, int);uint64_t atomicXor(coherent volatile inout uint64_t, uint64_t); int64_t atomicXor(coherent volatile in..." /* TRUNCATED STRING LITERAL */
              );
    bVar2 = false;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,
               "int   floatBitsToInt(highp float value);ivec2 floatBitsToInt(highp vec2  value);ivec3 floatBitsToInt(highp vec3  value);ivec4 floatBitsToInt(highp vec4  value);uint  floatBitsToUint(highp float value);uvec2 floatBitsToUint(highp vec2  value);uvec3 floatBitsToUint(highp vec3  value);uvec4 floatBitsToUint(highp vec4  value);float intBitsToFloat(highp int   value);vec2  intBitsToFloat(highp ivec2 value);vec3  intBitsToFloat(highp ivec3 value);vec4  intBitsToFloat(highp ivec4 value);float uintBitsToFloat(highp uint  value);vec2  uintBitsToFloat(highp uvec2 value);vec3  uintBitsToFloat(highp uvec3 value);vec4  uintBitsToFloat(highp uvec4 value);\n"
              );
    bVar4 = false;
    bVar19 = bVar9;
    bVar36 = bVar34;
    bVar5 = bVar9;
    goto LAB_00108d7b;
  }
  bVar9 = 299 < param_1 && bVar34;
  if (bVar9) {
    bVar2 = false;
    bVar4 = false;
    bVar34 = bVar9;
    goto LAB_001085e7;
  }
  bVar9 = bVar33 && 399 < param_1;
  if (bVar9) {
    bVar2 = false;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8)
               ,
               "float  fma(float,  float,  float );vec2   fma(vec2,   vec2,   vec2  );vec3   fma(vec3,   vec3,   vec3  );vec4   fma(vec4,   vec4,   vec4  );\n"
              );
    bVar4 = false;
    bVar36 = false;
    bVar19 = bVar9;
    bVar21 = bVar9;
    goto LAB_00108da2;
  }
  bVar19 = false;
  bVar2 = false;
  bVar4 = false;
  bVar8 = 299 < param_1;
  bVar36 = bVar9;
  bVar5 = 399 < param_1;
LAB_0010863c:
  bVar9 = bVar8;
  local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (local_2a8,
             "mat2 matrixCompMult(mat2 x, mat2 y);mat3 matrixCompMult(mat3 x, mat3 y);mat4 matrixCompMult(mat4 x, mat4 y);\n"
            );
  if (0x77 < param_1) {
    bVar8 = false;
LAB_00108ea3:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "mat2   outerProduct(vec2 c, vec2 r);mat3   outerProduct(vec3 c, vec3 r);mat4   outerProduct(vec4 c, vec4 r);mat2x3 outerProduct(vec3 c, vec2 r);mat3x2 outerProduct(vec2 c, vec3 r);mat2x4 outerProduct(vec4 c, vec2 r);mat4x2 outerProduct(vec2 c, vec4 r);mat3x4 outerProduct(vec4 c, vec3 r);mat4x3 outerProduct(vec3 c, vec4 r);mat2   transpose(mat2   m);mat3   transpose(mat3   m);mat4   transpose(mat4   m);mat2x3 transpose(mat3x2 m);mat3x2 transpose(mat2x3 m);mat2x4 transpose(mat4x2 m);mat4x2 transpose(mat2x4 m);mat3x4 transpose(mat4x3 m);mat4x3 transpose(mat3x4 m);mat2x3 matrixCompMult(mat2x3, mat2x3);mat2x4 matrixCompMult(mat2x4, mat2x4);mat3x2 matrixCompMult(mat3x2, mat3x2);mat3x4 matrixCompMult(mat3x4, mat3x4);mat4x2 matrixCompMult(mat4x2, mat4x2);mat4x3 matrixCompMult(mat4x3, mat4x3);\n"
              );
    if (0x95 < param_1) goto LAB_00109c15;
    bVar35 = param_1 == 100;
    iVar23 = *param_4;
    bVar21 = (bool)(bVar35 & bVar34);
    goto LAB_00108edc;
  }
  iVar23 = *param_4;
  bVar35 = param_1 == 100;
  bVar21 = (bool)(bVar35 & bVar34);
  if (!bVar21) {
    bVar21 = false;
    bVar8 = false;
    goto LAB_00108edc;
  }
  bVar34 = bVar21;
  bVar35 = bVar21;
  if (iVar23 == 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "vec4 texture2D(sampler2D, vec2);vec4 texture2DProj(sampler2D, vec3);vec4 texture2DProj(sampler2D, vec4);vec4 texture3D(sampler3D, vec3);vec4 texture3DProj(sampler3D, vec4);vec4 textureCube(samplerCube, vec3);\n"
              );
    iVar23 = *param_4;
    if (param_3 != 4) goto LAB_00108685;
LAB_0010869f:
    bVar8 = false;
    goto LAB_001086ad;
  }
  if (param_3 == 4) {
    bVar8 = false;
    goto LAB_00108f04;
  }
LAB_00108685:
  bVar8 = param_3 == 1 || param_3 == 2;
  if (param_3 == 1 || param_3 == 2) goto LAB_0010869f;
LAB_00109165:
  local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  if (param_3 != 8) {
LAB_001086c9:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    if (iVar23 != 0) goto LAB_00108f04;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "float noise1(float x);float noise1(vec2  x);float noise1(vec3  x);float noise1(vec4  x);vec2 noise2(float x);vec2 noise2(vec2  x);vec2 noise2(vec3  x);vec2 noise2(vec4  x);vec3 noise3(float x);vec3 noise3(vec2  x);vec3 noise3(vec3  x);vec3 noise3(vec4  x);vec4 noise4(float x);vec4 noise4(vec2  x);vec4 noise4(vec3  x);vec4 noise4(vec4  x);\n"
              );
    iVar23 = param_4[2];
    goto joined_r0x001086e8;
  }
  if (iVar23 == 0) {
    if (param_1 < 300) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "vec4 texture2D(samplerExternalOES, vec2 coord);vec4 texture2DProj(samplerExternalOES, vec3);vec4 texture2DProj(samplerExternalOES, vec4);\n"
                );
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "highp ivec2 textureSize(samplerExternalOES, int lod);vec4 texture(samplerExternalOES, vec2);vec4 texture(samplerExternalOES, vec2, float bias);vec4 textureProj(samplerExternalOES, vec3);vec4 textureProj(samplerExternalOES, vec3, float bias);vec4 textureProj(samplerExternalOES, vec4);vec4 textureProj(samplerExternalOES, vec4, float bias);vec4 texelFetch(samplerExternalOES, ivec2, int lod);\n"
                );
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "highp ivec2 textureSize(__samplerExternal2DY2YEXT, int lod);vec4 texture(__samplerExternal2DY2YEXT, vec2);vec4 texture(__samplerExternal2DY2YEXT, vec2, float bias);vec4 textureProj(__samplerExternal2DY2YEXT, vec3);vec4 textureProj(__samplerExternal2DY2YEXT, vec3, float bias);vec4 textureProj(__samplerExternal2DY2YEXT, vec4);vec4 textureProj(__samplerExternal2DY2YEXT, vec4, float bias);vec4 texelFetch(__samplerExternal2DY2YEXT sampler, ivec2, int lod);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "vec4 texture2DGradEXT(sampler2D, vec2, vec2, vec2);vec4 texture2DProjGradEXT(sampler2D, vec3, vec2, vec2);vec4 texture2DProjGradEXT(sampler2D, vec4, vec2, vec2);vec4 textureCubeGradEXT(samplerCube, vec3, vec3, vec3);float shadow2DEXT(sampler2DShadow, vec3);float shadow2DProjEXT(sampler2DShadow, vec4);\n"
              );
    if (*param_4 != 0) goto LAB_00109f37;
    if (param_4[2] == 0) goto LAB_001091d6;
    if ((char)param_4[4] == '\0') goto LAB_00108737;
LAB_0010c00a:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    bVar9 = 0x1cb < param_1 && bVar33;
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicCounterIncrement(volatile coherent uint);uint atomicCounterDecrement(volatile coherent uint);uint atomicCounter(volatile coherent uint);\n"
                );
      if (bVar9) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uint atomicCounterAdd(volatile coherent uint, uint);uint atomicCounterSubtract(volatile coherent uint, uint);uint atomicCounterMin(volatile coherent uint, uint);uint atomicCounterMax(volatile coherent uint, uint);uint atomicCounterAnd(volatile coherent uint, uint);uint atomicCounterOr(volatile coherent uint, uint);uint atomicCounterXor(volatile coherent uint, uint);uint atomicCounterExchange(volatile coherent uint, uint);uint atomicCounterCompSwap(volatile coherent uint, uint, uint);\n"
              );
      }
      goto LAB_00108f7d;
    }
    if (bVar9) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicCounterAdd(volatile coherent uint, uint);uint atomicCounterSubtract(volatile coherent uint, uint);uint atomicCounterMin(volatile coherent uint, uint);uint atomicCounterMax(volatile coherent uint, uint);uint atomicCounterAnd(volatile coherent uint, uint);uint atomicCounterOr(volatile coherent uint, uint);uint atomicCounterXor(volatile coherent uint, uint);uint atomicCounterExchange(volatile coherent uint, uint);uint atomicCounterCompSwap(volatile coherent uint, uint, uint);\n"
                );
    }
  }
  else {
LAB_00109f37:
    if (param_4[2] == 0) goto LAB_001091d6;
    if ((char)param_4[4] == '\0') goto LAB_00108737;
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint atomicCounterIncrement(volatile coherent uint);uint atomicCounterDecrement(volatile coherent uint);uint atomicCounter(volatile coherent uint);\n"
                );
      goto LAB_00108f7d;
    }
  }
LAB_0010873f:
  local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  if (bVar19) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "  int bitfieldExtract(  int, int, int);ivec2 bitfieldExtract(ivec2, int, int);ivec3 bitfieldExtract(ivec3, int, int);ivec4 bitfieldExtract(ivec4, int, int); uint bitfieldExtract( uint, int, int);uvec2 bitfieldExtract(uvec2, int, int);uvec3 bitfieldExtract(uvec3, int, int);uvec4 bitfieldExtract(uvec4, int, int);  int bitfieldInsert(  int base,   int, int, int);ivec2 bitfieldInsert(ivec2 base, ivec2, int, int);ivec3 bitfieldInsert(ivec3 base, ivec3, int, int);ivec4 bitfieldInsert(ivec4 base, ivec4, int, int); uint bitfieldInsert( uint base,  uint, int, int);uvec2 bitfieldInsert(uvec2 base, uvec2, int, int);uvec3 bitfieldInsert(uvec3 base, uvec3, int, int);uvec4 bitfieldInsert(uvec4 base, uvec4, int, int);\n"
              );
LAB_00109220:
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "  int findLSB(  int);ivec2 findLSB(ivec2);ivec3 findLSB(ivec3);ivec4 findLSB(ivec4);  int findLSB( uint);ivec2 findLSB(uvec2);ivec3 findLSB(uvec3);ivec4 findLSB(uvec4);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "  int bitCount(  int);ivec2 bitCount(ivec2);ivec3 bitCount(ivec3);ivec4 bitCount(ivec4);  int bitCount( uint);ivec2 bitCount(uvec2);ivec3 bitCount(uvec3);ivec4 bitCount(uvec4);  int findMSB(highp   int);ivec2 findMSB(highp ivec2);ivec3 findMSB(highp ivec3);ivec4 findMSB(highp ivec4);  int findMSB(highp  uint);ivec2 findMSB(highp uvec2);ivec3 findMSB(highp uvec3);ivec4 findMSB(highp uvec4);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               " uint uaddCarry(highp  uint, highp  uint, out lowp  uint carry);uvec2 uaddCarry(highp uvec2, highp uvec2, out lowp uvec2 carry);uvec3 uaddCarry(highp uvec3, highp uvec3, out lowp uvec3 carry);uvec4 uaddCarry(highp uvec4, highp uvec4, out lowp uvec4 carry); uint usubBorrow(highp  uint, highp  uint, out lowp  uint borrow);uvec2 usubBorrow(highp uvec2, highp uvec2, out lowp uvec2 borrow);uvec3 usubBorrow(highp uvec3, highp uvec3, out lowp uvec3 borrow);uvec4 usubBorrow(highp uvec4, highp uvec4, out lowp uvec4 borrow);void umulExtended(highp  uint, highp  uint, out highp  uint, out highp  uint lsb);void umulExtended(highp uvec2, highp uvec2, out highp uvec2, out highp uvec2 lsb);void umulExtended(highp uvec3, highp uvec3, out highp uvec3, out highp uvec3 lsb);void umulExtended(highp uvec4, highp uvec4, out highp uvec4, out highp uvec4 lsb);void imulExtended(highp   int, highp   int, out highp   int, out highp   int lsb);void imulExtended(highp ivec2, highp ivec2, out highp ivec2, out highp ivec2 lsb);void imulExtended(highp ivec3, highp ivec3, out highp ivec3, out highp ivec3 lsb);void imulExtended(highp ivec4, highp ivec4, out highp ivec4, out highp ivec4 lsb);  int bitfieldReverse(highp   int);ivec2 bitfieldReverse(highp ivec2);ivec3 bitfieldReverse(highp ivec3);ivec4 bitfieldReverse(highp ivec4); uint bitfieldReverse(highp  uint);uvec2 bitfieldReverse(highp uvec2);uvec3 bitfieldReverse(highp uvec3);uvec4 bitfieldReverse(highp uvec4);\n"
              );
    bVar19 = true;
    bVar9 = bVar2;
  }
  else {
LAB_0010874a:
    bVar19 = false;
    bVar9 = bVar2;
  }
  if (bVar4) {
    local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "uint64_t ballotARB(bool);float readInvocationARB(float, uint);vec2  readInvocationARB(vec2,  uint);vec3  readInvocationARB(vec3,  uint);vec4  readInvocationARB(vec4,  uint);int   readInvocationARB(int,   uint);ivec2 readInvocationARB(ivec2, uint);ivec3 readInvocationARB(ivec3, uint);ivec4 readInvocationARB(ivec4, uint);uint  readInvocationARB(uint,  uint);uvec2 readInvocationARB(uvec2, uint);uvec3 readInvocationARB(uvec3, uint);uvec4 readInvocationARB(uvec4, uint);float readFirstInvocationARB(float);vec2  readFirstInvocationARB(vec2);vec3  readFirstInvocationARB(vec3);vec4  readFirstInvocationARB(vec4);int   readFirstInvocationARB(int);ivec2 readFirstInvocationARB(ivec2);ivec3 readFirstInvocationARB(ivec3);ivec4 readFirstInvocationARB(ivec4);uint  readFirstInvocationARB(uint);uvec2 readFirstInvocationARB(uvec2);uvec3 readFirstInvocationARB(uvec3);uvec4 readFirstInvocationARB(uvec4);\n"
              );
    if (bVar9) {
      bVar2 = false;
      goto LAB_00109284;
    }
  }
  else if (bVar9) {
    bVar2 = false;
    bVar9 = bVar4;
    goto LAB_00109284;
  }
  bVar8 = false;
  bVar9 = 0x8b < param_1 && bVar33;
  if (0x8b < param_1 && bVar33) goto LAB_00108fe8;
LAB_0010877d:
  local_2a8 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 8);
  bVar2 = 0x1cb < param_1;
  bVar10 = bVar2 && bVar33;
  pTVar32 = (TBuiltIns *)local_2a8;
  if (bVar10) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "bool anyInvocation(bool);bool allInvocations(bool);bool allInvocationsEqual(bool);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "float minInvocationsAMD(float);vec2  minInvocationsAMD(vec2);vec3  minInvocationsAMD(vec3);vec4  minInvocationsAMD(vec4);int   minInvocationsAMD(int);ivec2 minInvocationsAMD(ivec2);ivec3 minInvocationsAMD(ivec3);ivec4 minInvocationsAMD(ivec4);uint  minInvocationsAMD(uint);uvec2 minInvocationsAMD(uvec2);uvec3 minInvocationsAMD(uvec3);uvec4 minInvocationsAMD(uvec4);double minInvocationsAMD(double);dvec2  minInvocationsAMD(dvec2);dvec3  minInvocationsAMD(dvec3);dvec4  minInvocationsAMD(dvec4);int64_t minInvocationsAMD(int64_t);i64vec2 minInvocationsAMD(i64vec2);i64vec3 minInvocationsAMD(i64vec3);i64vec4 minInvocationsAMD(i64vec4);uint64_t minInvocationsAMD(uint64_t);u64vec2  minInvocationsAMD(u64vec2);u64vec3  minInvocationsAMD(u64vec3);u64vec4  minInvocationsAMD(u64vec4);float16_t minInvocationsAMD(float16_t);f16vec2   minInvocationsAMD(f16vec2);f16vec3   minInvocationsAMD(f16vec3);f16vec4   minInvocationsAMD(f16vec4);int16_t minInvocationsAMD(int16_t);i16vec2 minInvocationsAMD(i16vec2);i16vec3 minInvocationsAMD(i16vec3);i16vec4 minInvocationsAMD(i16vec4);uint16_t minInvocationsAMD(uint16_t);u16vec2  minInvocationsAMD(u16vec2);u16vec3  minInvocationsAMD(u16vec3);u16vec4  minInvocationsAMD(u16vec4);float minInvocationsInclusiveScanAMD(float);vec2  minInvocationsInclusiveScanAMD(vec2);vec3  minInvocationsInclusiveScanAMD(vec3);vec4  minInvocationsInclusiveScanAMD(vec4);int   minInvocationsInclusiveScanAMD(int);ivec2 minInvocationsInclusiveScanAMD(ivec2);ivec3 minInvocationsInclusiveScanAMD(ivec3);ivec4 minInvocationsInclusiveScanAMD(ivec4);uint  minInvocationsInclusiveScanAMD(uint);uvec2 minInvocationsInclusiveScanAMD(uvec2);uvec3 minInvocationsInclusiveScanAMD(uvec3);uvec4 minInvocationsInclusiveScanAMD(uvec4);double minInvocationsInclusiveScanAMD(double);dvec2  minInvocationsInclusiveScanAMD(dvec2);dvec3  minInvocationsInclusiveScanAMD(dvec3);dvec4  minInvocationsInclusiveScanAMD(dvec4);int64_t minInvocationsInclusiveScanAMD(int64_t);i64vec2 minInvocationsInclusiveScanAMD(i64vec2);i64vec3 minInvocationsInclusiveSca..." /* TRUNCATED STRING LITERAL */
              );
    if (bVar11) {
LAB_00109a71:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float cubeFaceIndexAMD(vec3);vec2  cubeFaceCoordAMD(vec3);uint64_t timeAMD();in int gl_SIMDGroupSizeAMD;\n"
                );
      goto LAB_00109a82;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "uint fragmentMaskFetchAMD(sampler2DMS,       ivec2);uint fragmentMaskFetchAMD(isampler2DMS,      ivec2);uint fragmentMaskFetchAMD(usampler2DMS,      ivec2);uint fragmentMaskFetchAMD(sampler2DMSArray,  ivec3);uint fragmentMaskFetchAMD(isampler2DMSArray, ivec3);uint fragmentMaskFetchAMD(usampler2DMSArray, ivec3);vec4  fragmentFetchAMD(sampler2DMS,       ivec2, uint);ivec4 fragmentFetchAMD(isampler2DMS,      ivec2, uint);uvec4 fragmentFetchAMD(usampler2DMS,      ivec2, uint);vec4  fragmentFetchAMD(sampler2DMSArray,  ivec3, uint);ivec4 fragmentFetchAMD(isampler2DMSArray, ivec3, uint);uvec4 fragmentFetchAMD(usampler2DMSArray, ivec3, uint);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "uint countLeadingZeros(uint);uvec2 countLeadingZeros(uvec2);uvec3 countLeadingZeros(uvec3);uvec4 countLeadingZeros(uvec4);uint countTrailingZeros(uint);uvec2 countTrailingZeros(uvec2);uvec3 countTrailingZeros(uvec3);uvec4 countTrailingZeros(uvec4);uint absoluteDifference(int, int);uvec2 absoluteDifference(ivec2, ivec2);uvec3 absoluteDifference(ivec3, ivec3);uvec4 absoluteDifference(ivec4, ivec4);uint16_t absoluteDifference(int16_t, int16_t);u16vec2 absoluteDifference(i16vec2, i16vec2);u16vec3 absoluteDifference(i16vec3, i16vec3);u16vec4 absoluteDifference(i16vec4, i16vec4);uint64_t absoluteDifference(int64_t, int64_t);u64vec2 absoluteDifference(i64vec2, i64vec2);u64vec3 absoluteDifference(i64vec3, i64vec3);u64vec4 absoluteDifference(i64vec4, i64vec4);uint absoluteDifference(uint, uint);uvec2 absoluteDifference(uvec2, uvec2);uvec3 absoluteDifference(uvec3, uvec3);uvec4 absoluteDifference(uvec4, uvec4);uint16_t absoluteDifference(uint16_t, uint16_t);u16vec2 absoluteDifference(u16vec2, u16vec2);u16vec3 absoluteDifference(u16vec3, u16vec3);u16vec4 absoluteDifference(u16vec4, u16vec4);uint64_t absoluteDifference(uint64_t, uint64_t);u64vec2 absoluteDifference(u64vec2, u64vec2);u64vec3 absoluteDifference(u64vec3, u64vec3);u64vec4 absoluteDifference(u64vec4, u64vec4);int addSaturate(int, int);ivec2 addSaturate(ivec2, ivec2);ivec3 addSaturate(ivec3, ivec3);ivec4 addSaturate(ivec4, ivec4);int16_t addSaturate(int16_t, int16_t);i16vec2 addSaturate(i16vec2, i16vec2);i16vec3 addSaturate(i16vec3, i16vec3);i16vec4 addSaturate(i16vec4, i16vec4);int64_t addSaturate(int64_t, int64_t);i64vec2 addSaturate(i64vec2, i64vec2);i64vec3 addSaturate(i64vec3, i64vec3);i64vec4 addSaturate(i64vec4, i64vec4);uint addSaturate(uint, uint);uvec2 addSaturate(uvec2, uvec2);uvec3 addSaturate(uvec3, uvec3);uvec4 addSaturate(uvec4, uvec4);uint16_t addSaturate(uint16_t, uint16_t);u16vec2 addSaturate(u16vec2, u16vec2);u16vec3 addSaturate(u16vec3, u16vec3);u16vec4 addSaturate(u16vec4, u16vec4);uint64_t addSaturate(uint64_t, uint64_t);u64vec2 addSaturate(u..." /* TRUNCATED STRING LITERAL */
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
              );
    bVar11 = bVar10;
    bVar3 = bVar36;
    if (!bVar36) goto LAB_00109dca;
LAB_00108828:
    bVar11 = bVar3;
    if (!bVar4) goto LAB_00108833;
LAB_0010be00:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "float16_t radians(float16_t);f16vec2   radians(f16vec2);f16vec3   radians(f16vec3);f16vec4   radians(f16vec4);float16_t degrees(float16_t);f16vec2   degrees(f16vec2);f16vec3   degrees(f16vec3);f16vec4   degrees(f16vec4);float16_t sin(float16_t);f16vec2   sin(f16vec2);f16vec3   sin(f16vec3);f16vec4   sin(f16vec4);float16_t cos(float16_t);f16vec2   cos(f16vec2);f16vec3   cos(f16vec3);f16vec4   cos(f16vec4);float16_t tan(float16_t);f16vec2   tan(f16vec2);f16vec3   tan(f16vec3);f16vec4   tan(f16vec4);float16_t asin(float16_t);f16vec2   asin(f16vec2);f16vec3   asin(f16vec3);f16vec4   asin(f16vec4);float16_t acos(float16_t);f16vec2   acos(f16vec2);f16vec3   acos(f16vec3);f16vec4   acos(f16vec4);float16_t atan(float16_t, float16_t);f16vec2   atan(f16vec2,   f16vec2);f16vec3   atan(f16vec3,   f16vec3);f16vec4   atan(f16vec4,   f16vec4);float16_t atan(float16_t);f16vec2   atan(f16vec2);f16vec3   atan(f16vec3);f16vec4   atan(f16vec4);float16_t sinh(float16_t);f16vec2   sinh(f16vec2);f16vec3   sinh(f16vec3);f16vec4   sinh(f16vec4);float16_t cosh(float16_t);f16vec2   cosh(f16vec2);f16vec3   cosh(f16vec3);f16vec4   cosh(f16vec4);float16_t tanh(float16_t);f16vec2   tanh(f16vec2);f16vec3   tanh(f16vec3);f16vec4   tanh(f16vec4);float16_t asinh(float16_t);f16vec2   asinh(f16vec2);f16vec3   asinh(f16vec3);f16vec4   asinh(f16vec4);float16_t acosh(float16_t);f16vec2   acosh(f16vec2);f16vec3   acosh(f16vec3);f16vec4   acosh(f16vec4);float16_t atanh(float16_t);f16vec2   atanh(f16vec2);f16vec3   atanh(f16vec3);f16vec4   atanh(f16vec4);float16_t pow(float16_t, float16_t);f16vec2   pow(f16vec2,   f16vec2);f16vec3   pow(f16vec3,   f16vec3);f16vec4   pow(f16vec4,   f16vec4);float16_t exp(float16_t);f16vec2   exp(f16vec2);f16vec3   exp(f16vec3);f16vec4   exp(f16vec4);float16_t log(float16_t);f16vec2   log(f16vec2);f16vec3   log(f16vec3);f16vec4   log(f16vec4);float16_t exp2(float16_t);f16vec2   exp2(f16vec2);f16vec3   exp2(f16vec3);f16vec4   exp2(f16vec4);float16_t log2(float16_t);f16vec2   log2(f16vec2);f16vec3   log2(f16vec3);f16vec4   lo..." /* TRUNCATED STRING LITERAL */
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "int8_t abs(int8_t);i8vec2 abs(i8vec2);i8vec3 abs(i8vec3);i8vec4 abs(i8vec4);int8_t sign(int8_t);i8vec2 sign(i8vec2);i8vec3 sign(i8vec3);i8vec4 sign(i8vec4);int8_t min(int8_t x, int8_t y);i8vec2 min(i8vec2 x, int8_t y);i8vec3 min(i8vec3 x, int8_t y);i8vec4 min(i8vec4 x, int8_t y);i8vec2 min(i8vec2 x, i8vec2 y);i8vec3 min(i8vec3 x, i8vec3 y);i8vec4 min(i8vec4 x, i8vec4 y);uint8_t min(uint8_t x, uint8_t y);u8vec2 min(u8vec2 x, uint8_t y);u8vec3 min(u8vec3 x, uint8_t y);u8vec4 min(u8vec4 x, uint8_t y);u8vec2 min(u8vec2 x, u8vec2 y);u8vec3 min(u8vec3 x, u8vec3 y);u8vec4 min(u8vec4 x, u8vec4 y);int8_t max(int8_t x, int8_t y);i8vec2 max(i8vec2 x, int8_t y);i8vec3 max(i8vec3 x, int8_t y);i8vec4 max(i8vec4 x, int8_t y);i8vec2 max(i8vec2 x, i8vec2 y);i8vec3 max(i8vec3 x, i8vec3 y);i8vec4 max(i8vec4 x, i8vec4 y);uint8_t max(uint8_t x, uint8_t y);u8vec2 max(u8vec2 x, uint8_t y);u8vec3 max(u8vec3 x, uint8_t y);u8vec4 max(u8vec4 x, uint8_t y);u8vec2 max(u8vec2 x, u8vec2 y);u8vec3 max(u8vec3 x, u8vec3 y);u8vec4 max(u8vec4 x, u8vec4 y);int8_t    clamp(int8_t x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, int8_t minVal, int8_t maxVal);i8vec3  clamp(i8vec3  x, int8_t minVal, int8_t maxVal);i8vec4  clamp(i8vec4  x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, i8vec2  minVal, i8vec2  maxVal);i8vec3  clamp(i8vec3  x, i8vec3  minVal, i8vec3  maxVal);i8vec4  clamp(i8vec4  x, i8vec4  minVal, i8vec4  maxVal);uint8_t   clamp(uint8_t x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, uint8_t minVal, uint8_t maxVal);u8vec3  clamp(u8vec3  x, uint8_t minVal, uint8_t maxVal);u8vec4  clamp(u8vec4  x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, u8vec2  minVal, u8vec2  maxVal);u8vec3  clamp(u8vec3  x, u8vec3  minVal, u8vec3  maxVal);u8vec4  clamp(u8vec4  x, u8vec4  minVal, u8vec4  maxVal);int8_t  mix(int8_t,  int8_t,  bool);i8vec2  mix(i8vec2,  i8vec2,  bvec2);i8vec3  mix(i8vec3,  i8vec3,  bvec3);i8vec4  mix(i8vec4,  i8vec4,  bvec4);uint8_t mix(uint8_t, uint8_t, bool);u8vec2  mix(u8vec2,  u8vec2,  bvec2)..." /* TRUNCATED STRING LITERAL */
              );
    if (bVar36) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
                );
    }
    else if (bVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
                );
LAB_00109b1b:
      bVar11 = true;
    }
    else {
LAB_0010cef4:
      bVar11 = false;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xd0),local_1a0,local_198);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xd0),
               "float64_t interpolateAtCentroid(float64_t);f64vec2   interpolateAtCentroid(f64vec2);f64vec3   interpolateAtCentroid(f64vec3);f64vec4   interpolateAtCentroid(f64vec4);float64_t interpolateAtSample(float64_t, int);f64vec2   interpolateAtSample(f64vec2,   int);f64vec3   interpolateAtSample(f64vec3,   int);f64vec4   interpolateAtSample(f64vec4,   int);float64_t interpolateAtOffset(float64_t, f64vec2);f64vec2   interpolateAtOffset(f64vec2,   f64vec2);f64vec3   interpolateAtOffset(f64vec3,   f64vec2);f64vec4   interpolateAtOffset(f64vec4,   f64vec2);\n"
              );
LAB_00109e38:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "void assumeEXT(bool);bool expectEXT(bool, bool);bvec2 expectEXT(bvec2, bvec2);bvec3 expectEXT(bvec3, bvec3);bvec4 expectEXT(bvec4, bvec4);int expectEXT(int, int);ivec2 expectEXT(ivec2, ivec2);ivec3 expectEXT(ivec3, ivec3);ivec4 expectEXT(ivec4, ivec4);uint expectEXT(uint, uint);uvec2 expectEXT(uvec2, uvec2);uvec3 expectEXT(uvec3, uvec3);uvec4 expectEXT(uvec4, uvec4);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "vec4 textureWeightedQCOM(sampler2D, vec2, sampler2DArray);vec4 textureWeightedQCOM(sampler2D, vec2, sampler1DArray);vec4 textureBoxFilterQCOM(sampler2D, vec2, vec2);vec4 textureBlockMatchSADQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);vec4 textureBlockMatchSSDQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);vec4 textureBlockMatchWindowSSDQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);vec4 textureBlockMatchWindowSADQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);vec4 textureBlockMatchGatherSSDQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);vec4 textureBlockMatchGatherSADQCOM(sampler2D, uvec2, sampler2D, uvec2, uvec2);\n"
              );
    if (param_4[2] != 0) goto LAB_001088cb;
    if (param_3 != 8) {
LAB_00109e71:
      if ((param_1 == 0x8c) && (*param_4 == 0)) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x30),"vec4 ftransform();");
        goto LAB_001088cb;
      }
      if (param_3 != 4) {
        if (bVar21) {
          if (*param_4 == 0) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(local_2a8,
                   "vec4 texture2DLod(sampler2D, vec2, float);vec4 texture2DProjLod(sampler2D, vec3, float);vec4 texture2DProjLod(sampler2D, vec4, float);vec4 texture3DLod(sampler3D, vec3, float);vec4 texture3DProjLod(sampler3D, vec4, float);vec4 textureCubeLod(samplerCube, vec3, float);\n"
                  );
          }
          goto LAB_001088e9;
        }
        goto LAB_0010a613;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x30),"vec4 ftransform();");
      if (bVar21) {
        if (*param_4 != 0) goto LAB_0010890d;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "vec4 texture2DLod(sampler2D, vec2, float);vec4 texture2DProjLod(sampler2D, vec3, float);vec4 texture2DProjLod(sampler2D, vec4, float);vec4 texture3DLod(sampler3D, vec3, float);vec4 texture3DProjLod(sampler3D, vec4, float);vec4 textureCubeLod(samplerCube, vec3, float);\n"
              );
        goto LAB_0010bd10;
      }
      goto LAB_0010bd4a;
    }
LAB_0010b89c:
    if (param_1 != 100) {
      if (!bVar21) goto LAB_0010b8b0;
      iVar23 = *param_4;
LAB_0010c6d0:
      if (iVar23 != 0) goto LAB_001088e9;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pTVar32,
                 "vec4 texture2DLod(sampler2D, vec2, float);vec4 texture2DProjLod(sampler2D, vec3, float);vec4 texture2DProjLod(sampler2D, vec4, float);vec4 texture3DLod(sampler3D, vec3, float);vec4 texture3DProjLod(sampler3D, vec4, float);vec4 textureCubeLod(samplerCube, vec3, float);\n"
                );
      goto LAB_0010890d;
    }
    if (bVar21) {
      pTVar32 = this + 0x30;
      iVar23 = *param_4;
      goto LAB_0010c6d0;
    }
LAB_0010b8b0:
    if (!bVar8) goto LAB_00108948;
    bVar7 = false;
LAB_0010b8c7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xa8),"void EmitVertex();void EndPrimitive();\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x58),"void barrier();");
LAB_0010a6b0:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xf8),"void barrier();");
  }
  else {
    if (bVar4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float minInvocationsAMD(float);vec2  minInvocationsAMD(vec2);vec3  minInvocationsAMD(vec3);vec4  minInvocationsAMD(vec4);int   minInvocationsAMD(int);ivec2 minInvocationsAMD(ivec2);ivec3 minInvocationsAMD(ivec3);ivec4 minInvocationsAMD(ivec4);uint  minInvocationsAMD(uint);uvec2 minInvocationsAMD(uvec2);uvec3 minInvocationsAMD(uvec3);uvec4 minInvocationsAMD(uvec4);double minInvocationsAMD(double);dvec2  minInvocationsAMD(dvec2);dvec3  minInvocationsAMD(dvec3);dvec4  minInvocationsAMD(dvec4);int64_t minInvocationsAMD(int64_t);i64vec2 minInvocationsAMD(i64vec2);i64vec3 minInvocationsAMD(i64vec3);i64vec4 minInvocationsAMD(i64vec4);uint64_t minInvocationsAMD(uint64_t);u64vec2  minInvocationsAMD(u64vec2);u64vec3  minInvocationsAMD(u64vec3);u64vec4  minInvocationsAMD(u64vec4);float16_t minInvocationsAMD(float16_t);f16vec2   minInvocationsAMD(f16vec2);f16vec3   minInvocationsAMD(f16vec3);f16vec4   minInvocationsAMD(f16vec4);int16_t minInvocationsAMD(int16_t);i16vec2 minInvocationsAMD(i16vec2);i16vec3 minInvocationsAMD(i16vec3);i16vec4 minInvocationsAMD(i16vec4);uint16_t minInvocationsAMD(uint16_t);u16vec2  minInvocationsAMD(u16vec2);u16vec3  minInvocationsAMD(u16vec3);u16vec4  minInvocationsAMD(u16vec4);float minInvocationsInclusiveScanAMD(float);vec2  minInvocationsInclusiveScanAMD(vec2);vec3  minInvocationsInclusiveScanAMD(vec3);vec4  minInvocationsInclusiveScanAMD(vec4);int   minInvocationsInclusiveScanAMD(int);ivec2 minInvocationsInclusiveScanAMD(ivec2);ivec3 minInvocationsInclusiveScanAMD(ivec3);ivec4 minInvocationsInclusiveScanAMD(ivec4);uint  minInvocationsInclusiveScanAMD(uint);uvec2 minInvocationsInclusiveScanAMD(uvec2);uvec3 minInvocationsInclusiveScanAMD(uvec3);uvec4 minInvocationsInclusiveScanAMD(uvec4);double minInvocationsInclusiveScanAMD(double);dvec2  minInvocationsInclusiveScanAMD(dvec2);dvec3  minInvocationsInclusiveScanAMD(dvec3);dvec4  minInvocationsInclusiveScanAMD(dvec4);int64_t minInvocationsInclusiveScanAMD(int64_t);i64vec2 minInvocationsInclusiveScanAMD(i64vec2);i64vec3 minInvocationsInclusiveSca..." /* TRUNCATED STRING LITERAL */
                );
      if (bVar11) goto LAB_00109a71;
LAB_00109a82:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint fragmentMaskFetchAMD(sampler2DMS,       ivec2);uint fragmentMaskFetchAMD(isampler2DMS,      ivec2);uint fragmentMaskFetchAMD(usampler2DMS,      ivec2);uint fragmentMaskFetchAMD(sampler2DMSArray,  ivec3);uint fragmentMaskFetchAMD(isampler2DMSArray, ivec3);uint fragmentMaskFetchAMD(usampler2DMSArray, ivec3);vec4  fragmentFetchAMD(sampler2DMS,       ivec2, uint);ivec4 fragmentFetchAMD(isampler2DMS,      ivec2, uint);uvec4 fragmentFetchAMD(usampler2DMS,      ivec2, uint);vec4  fragmentFetchAMD(sampler2DMSArray,  ivec3, uint);ivec4 fragmentFetchAMD(isampler2DMSArray, ivec3, uint);uvec4 fragmentFetchAMD(usampler2DMSArray, ivec3, uint);\n"
                );
      bVar3 = 0x81 < param_1;
      bVar11 = bVar3 && bVar33;
      if (bVar3 && bVar33) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uint countLeadingZeros(uint);uvec2 countLeadingZeros(uvec2);uvec3 countLeadingZeros(uvec3);uvec4 countLeadingZeros(uvec4);uint countTrailingZeros(uint);uvec2 countTrailingZeros(uvec2);uvec3 countTrailingZeros(uvec3);uvec4 countTrailingZeros(uvec4);uint absoluteDifference(int, int);uvec2 absoluteDifference(ivec2, ivec2);uvec3 absoluteDifference(ivec3, ivec3);uvec4 absoluteDifference(ivec4, ivec4);uint16_t absoluteDifference(int16_t, int16_t);u16vec2 absoluteDifference(i16vec2, i16vec2);u16vec3 absoluteDifference(i16vec3, i16vec3);u16vec4 absoluteDifference(i16vec4, i16vec4);uint64_t absoluteDifference(int64_t, int64_t);u64vec2 absoluteDifference(i64vec2, i64vec2);u64vec3 absoluteDifference(i64vec3, i64vec3);u64vec4 absoluteDifference(i64vec4, i64vec4);uint absoluteDifference(uint, uint);uvec2 absoluteDifference(uvec2, uvec2);uvec3 absoluteDifference(uvec3, uvec3);uvec4 absoluteDifference(uvec4, uvec4);uint16_t absoluteDifference(uint16_t, uint16_t);u16vec2 absoluteDifference(u16vec2, u16vec2);u16vec3 absoluteDifference(u16vec3, u16vec3);u16vec4 absoluteDifference(u16vec4, u16vec4);uint64_t absoluteDifference(uint64_t, uint64_t);u64vec2 absoluteDifference(u64vec2, u64vec2);u64vec3 absoluteDifference(u64vec3, u64vec3);u64vec4 absoluteDifference(u64vec4, u64vec4);int addSaturate(int, int);ivec2 addSaturate(ivec2, ivec2);ivec3 addSaturate(ivec3, ivec3);ivec4 addSaturate(ivec4, ivec4);int16_t addSaturate(int16_t, int16_t);i16vec2 addSaturate(i16vec2, i16vec2);i16vec3 addSaturate(i16vec3, i16vec3);i16vec4 addSaturate(i16vec4, i16vec4);int64_t addSaturate(int64_t, int64_t);i64vec2 addSaturate(i64vec2, i64vec2);i64vec3 addSaturate(i64vec3, i64vec3);i64vec4 addSaturate(i64vec4, i64vec4);uint addSaturate(uint, uint);uvec2 addSaturate(uvec2, uvec2);uvec3 addSaturate(uvec3, uvec3);uvec4 addSaturate(uvec4, uvec4);uint16_t addSaturate(uint16_t, uint16_t);u16vec2 addSaturate(u16vec2, u16vec2);u16vec3 addSaturate(u16vec3, u16vec3);u16vec4 addSaturate(u16vec4, u16vec4);uint64_t addSaturate(uint64_t, uint64_t);u64vec2 addSaturate(u..." /* TRUNCATED STRING LITERAL */
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
              );
        if (bVar36) {
          bVar11 = bVar36;
          if (param_1 < 0x136) goto LAB_0010c823;
LAB_0010881d:
          bVar3 = bVar11;
          if (bVar7) {
LAB_0010ca59:
            bVar3 = bVar11;
            if (param_1 < 0x1c2) goto LAB_0010c828;
          }
          goto LAB_00108828;
        }
      }
      else {
        if (bVar36) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "uint countLeadingZeros(uint);uvec2 countLeadingZeros(uvec2);uvec3 countLeadingZeros(uvec3);uvec4 countLeadingZeros(uvec4);uint countTrailingZeros(uint);uvec2 countTrailingZeros(uvec2);uvec3 countTrailingZeros(uvec3);uvec4 countTrailingZeros(uvec4);uint absoluteDifference(int, int);uvec2 absoluteDifference(ivec2, ivec2);uvec3 absoluteDifference(ivec3, ivec3);uvec4 absoluteDifference(ivec4, ivec4);uint16_t absoluteDifference(int16_t, int16_t);u16vec2 absoluteDifference(i16vec2, i16vec2);u16vec3 absoluteDifference(i16vec3, i16vec3);u16vec4 absoluteDifference(i16vec4, i16vec4);uint64_t absoluteDifference(int64_t, int64_t);u64vec2 absoluteDifference(i64vec2, i64vec2);u64vec3 absoluteDifference(i64vec3, i64vec3);u64vec4 absoluteDifference(i64vec4, i64vec4);uint absoluteDifference(uint, uint);uvec2 absoluteDifference(uvec2, uvec2);uvec3 absoluteDifference(uvec3, uvec3);uvec4 absoluteDifference(uvec4, uvec4);uint16_t absoluteDifference(uint16_t, uint16_t);u16vec2 absoluteDifference(u16vec2, u16vec2);u16vec3 absoluteDifference(u16vec3, u16vec3);u16vec4 absoluteDifference(u16vec4, u16vec4);uint64_t absoluteDifference(uint64_t, uint64_t);u64vec2 absoluteDifference(u64vec2, u64vec2);u64vec3 absoluteDifference(u64vec3, u64vec3);u64vec4 absoluteDifference(u64vec4, u64vec4);int addSaturate(int, int);ivec2 addSaturate(ivec2, ivec2);ivec3 addSaturate(ivec3, ivec3);ivec4 addSaturate(ivec4, ivec4);int16_t addSaturate(int16_t, int16_t);i16vec2 addSaturate(i16vec2, i16vec2);i16vec3 addSaturate(i16vec3, i16vec3);i16vec4 addSaturate(i16vec4, i16vec4);int64_t addSaturate(int64_t, int64_t);i64vec2 addSaturate(i64vec2, i64vec2);i64vec3 addSaturate(i64vec3, i64vec3);i64vec4 addSaturate(i64vec4, i64vec4);uint addSaturate(uint, uint);uvec2 addSaturate(uvec2, uvec2);uvec3 addSaturate(uvec3, uvec3);uvec4 addSaturate(uvec4, uvec4);uint16_t addSaturate(uint16_t, uint16_t);u16vec2 addSaturate(u16vec2, u16vec2);u16vec3 addSaturate(u16vec3, u16vec3);u16vec4 addSaturate(u16vec4, u16vec4);uint64_t addSaturate(uint64_t, uint64_t);u64vec2 addSaturate(u..." /* TRUNCATED STRING LITERAL */
                );
          if (!bVar4) goto LAB_001087f0;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
                );
          if (param_1 < 0x136) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(local_2a8,
                   "int mix(int, int, bool);ivec2 mix(ivec2, ivec2, bvec2);ivec3 mix(ivec3, ivec3, bvec3);ivec4 mix(ivec4, ivec4, bvec4);uint  mix(uint,  uint,  bool );uvec2 mix(uvec2, uvec2, bvec2);uvec3 mix(uvec3, uvec3, bvec3);uvec4 mix(uvec4, uvec4, bvec4);bool  mix(bool,  bool,  bool );bvec2 mix(bvec2, bvec2, bvec2);bvec3 mix(bvec3, bvec3, bvec3);bvec4 mix(bvec4, bvec4, bvec4);\n"
                  );
          }
          else if (bVar7) goto LAB_0010ca59;
          goto LAB_0010be00;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
              );
      }
      if (bVar7) {
LAB_00109dca:
        bVar3 = bVar11;
        if (bVar4) goto LAB_0010be00;
joined_r0x0010cc0a:
        if (!bVar8) goto LAB_00108847;
LAB_00109dde:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float16_t radians(float16_t);f16vec2   radians(f16vec2);f16vec3   radians(f16vec3);f16vec4   radians(f16vec4);float16_t degrees(float16_t);f16vec2   degrees(f16vec2);f16vec3   degrees(f16vec3);f16vec4   degrees(f16vec4);float16_t sin(float16_t);f16vec2   sin(f16vec2);f16vec3   sin(f16vec3);f16vec4   sin(f16vec4);float16_t cos(float16_t);f16vec2   cos(f16vec2);f16vec3   cos(f16vec3);f16vec4   cos(f16vec4);float16_t tan(float16_t);f16vec2   tan(f16vec2);f16vec3   tan(f16vec3);f16vec4   tan(f16vec4);float16_t asin(float16_t);f16vec2   asin(f16vec2);f16vec3   asin(f16vec3);f16vec4   asin(f16vec4);float16_t acos(float16_t);f16vec2   acos(f16vec2);f16vec3   acos(f16vec3);f16vec4   acos(f16vec4);float16_t atan(float16_t, float16_t);f16vec2   atan(f16vec2,   f16vec2);f16vec3   atan(f16vec3,   f16vec3);f16vec4   atan(f16vec4,   f16vec4);float16_t atan(float16_t);f16vec2   atan(f16vec2);f16vec3   atan(f16vec3);f16vec4   atan(f16vec4);float16_t sinh(float16_t);f16vec2   sinh(f16vec2);f16vec3   sinh(f16vec3);f16vec4   sinh(f16vec4);float16_t cosh(float16_t);f16vec2   cosh(f16vec2);f16vec3   cosh(f16vec3);f16vec4   cosh(f16vec4);float16_t tanh(float16_t);f16vec2   tanh(f16vec2);f16vec3   tanh(f16vec3);f16vec4   tanh(f16vec4);float16_t asinh(float16_t);f16vec2   asinh(f16vec2);f16vec3   asinh(f16vec3);f16vec4   asinh(f16vec4);float16_t acosh(float16_t);f16vec2   acosh(f16vec2);f16vec3   acosh(f16vec3);f16vec4   acosh(f16vec4);float16_t atanh(float16_t);f16vec2   atanh(f16vec2);f16vec3   atanh(f16vec3);f16vec4   atanh(f16vec4);float16_t pow(float16_t, float16_t);f16vec2   pow(f16vec2,   f16vec2);f16vec3   pow(f16vec3,   f16vec3);f16vec4   pow(f16vec4,   f16vec4);float16_t exp(float16_t);f16vec2   exp(f16vec2);f16vec3   exp(f16vec3);f16vec4   exp(f16vec4);float16_t log(float16_t);f16vec2   log(f16vec2);f16vec3   log(f16vec3);f16vec4   log(f16vec4);float16_t exp2(float16_t);f16vec2   exp2(f16vec2);f16vec3   exp2(f16vec3);f16vec4   exp2(f16vec4);float16_t log2(float16_t);f16vec2   log2(f16vec2);f16vec3   log2(f16vec3);f16vec4   lo..." /* TRUNCATED STRING LITERAL */
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "int8_t abs(int8_t);i8vec2 abs(i8vec2);i8vec3 abs(i8vec3);i8vec4 abs(i8vec4);int8_t sign(int8_t);i8vec2 sign(i8vec2);i8vec3 sign(i8vec3);i8vec4 sign(i8vec4);int8_t min(int8_t x, int8_t y);i8vec2 min(i8vec2 x, int8_t y);i8vec3 min(i8vec3 x, int8_t y);i8vec4 min(i8vec4 x, int8_t y);i8vec2 min(i8vec2 x, i8vec2 y);i8vec3 min(i8vec3 x, i8vec3 y);i8vec4 min(i8vec4 x, i8vec4 y);uint8_t min(uint8_t x, uint8_t y);u8vec2 min(u8vec2 x, uint8_t y);u8vec3 min(u8vec3 x, uint8_t y);u8vec4 min(u8vec4 x, uint8_t y);u8vec2 min(u8vec2 x, u8vec2 y);u8vec3 min(u8vec3 x, u8vec3 y);u8vec4 min(u8vec4 x, u8vec4 y);int8_t max(int8_t x, int8_t y);i8vec2 max(i8vec2 x, int8_t y);i8vec3 max(i8vec3 x, int8_t y);i8vec4 max(i8vec4 x, int8_t y);i8vec2 max(i8vec2 x, i8vec2 y);i8vec3 max(i8vec3 x, i8vec3 y);i8vec4 max(i8vec4 x, i8vec4 y);uint8_t max(uint8_t x, uint8_t y);u8vec2 max(u8vec2 x, uint8_t y);u8vec3 max(u8vec3 x, uint8_t y);u8vec4 max(u8vec4 x, uint8_t y);u8vec2 max(u8vec2 x, u8vec2 y);u8vec3 max(u8vec3 x, u8vec3 y);u8vec4 max(u8vec4 x, u8vec4 y);int8_t    clamp(int8_t x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, int8_t minVal, int8_t maxVal);i8vec3  clamp(i8vec3  x, int8_t minVal, int8_t maxVal);i8vec4  clamp(i8vec4  x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, i8vec2  minVal, i8vec2  maxVal);i8vec3  clamp(i8vec3  x, i8vec3  minVal, i8vec3  maxVal);i8vec4  clamp(i8vec4  x, i8vec4  minVal, i8vec4  maxVal);uint8_t   clamp(uint8_t x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, uint8_t minVal, uint8_t maxVal);u8vec3  clamp(u8vec3  x, uint8_t minVal, uint8_t maxVal);u8vec4  clamp(u8vec4  x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, u8vec2  minVal, u8vec2  maxVal);u8vec3  clamp(u8vec3  x, u8vec3  minVal, u8vec3  maxVal);u8vec4  clamp(u8vec4  x, u8vec4  minVal, u8vec4  maxVal);int8_t  mix(int8_t,  int8_t,  bool);i8vec2  mix(i8vec2,  i8vec2,  bvec2);i8vec3  mix(i8vec3,  i8vec3,  bvec3);i8vec4  mix(i8vec4,  i8vec4,  bvec4);uint8_t mix(uint8_t, uint8_t, bool);u8vec2  mix(u8vec2,  u8vec2,  bvec2)..." /* TRUNCATED STRING LITERAL */
              );
        if ((bVar36) || (bVar11)) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_2a8,
                 "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
                );
        }
        else {
LAB_0010bff9:
          bVar11 = false;
        }
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float16_t radians(float16_t);f16vec2   radians(f16vec2);f16vec3   radians(f16vec3);f16vec4   radians(f16vec4);float16_t degrees(float16_t);f16vec2   degrees(f16vec2);f16vec3   degrees(f16vec3);f16vec4   degrees(f16vec4);float16_t sin(float16_t);f16vec2   sin(f16vec2);f16vec3   sin(f16vec3);f16vec4   sin(f16vec4);float16_t cos(float16_t);f16vec2   cos(f16vec2);f16vec3   cos(f16vec3);f16vec4   cos(f16vec4);float16_t tan(float16_t);f16vec2   tan(f16vec2);f16vec3   tan(f16vec3);f16vec4   tan(f16vec4);float16_t asin(float16_t);f16vec2   asin(f16vec2);f16vec3   asin(f16vec3);f16vec4   asin(f16vec4);float16_t acos(float16_t);f16vec2   acos(f16vec2);f16vec3   acos(f16vec3);f16vec4   acos(f16vec4);float16_t atan(float16_t, float16_t);f16vec2   atan(f16vec2,   f16vec2);f16vec3   atan(f16vec3,   f16vec3);f16vec4   atan(f16vec4,   f16vec4);float16_t atan(float16_t);f16vec2   atan(f16vec2);f16vec3   atan(f16vec3);f16vec4   atan(f16vec4);float16_t sinh(float16_t);f16vec2   sinh(f16vec2);f16vec3   sinh(f16vec3);f16vec4   sinh(f16vec4);float16_t cosh(float16_t);f16vec2   cosh(f16vec2);f16vec3   cosh(f16vec3);f16vec4   cosh(f16vec4);float16_t tanh(float16_t);f16vec2   tanh(f16vec2);f16vec3   tanh(f16vec3);f16vec4   tanh(f16vec4);float16_t asinh(float16_t);f16vec2   asinh(f16vec2);f16vec3   asinh(f16vec3);f16vec4   asinh(f16vec4);float16_t acosh(float16_t);f16vec2   acosh(f16vec2);f16vec3   acosh(f16vec3);f16vec4   acosh(f16vec4);float16_t atanh(float16_t);f16vec2   atanh(f16vec2);f16vec3   atanh(f16vec3);f16vec4   atanh(f16vec4);float16_t pow(float16_t, float16_t);f16vec2   pow(f16vec2,   f16vec2);f16vec3   pow(f16vec3,   f16vec3);f16vec4   pow(f16vec4,   f16vec4);float16_t exp(float16_t);f16vec2   exp(f16vec2);f16vec3   exp(f16vec3);f16vec4   exp(f16vec4);float16_t log(float16_t);f16vec2   log(f16vec2);f16vec3   log(f16vec3);f16vec4   log(f16vec4);float16_t exp2(float16_t);f16vec2   exp2(f16vec2);f16vec3   exp2(f16vec3);f16vec4   exp2(f16vec4);float16_t log2(float16_t);f16vec2   log2(f16vec2);f16vec3   log2(f16vec3);f16vec4   lo..." /* TRUNCATED STRING LITERAL */
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "int8_t abs(int8_t);i8vec2 abs(i8vec2);i8vec3 abs(i8vec3);i8vec4 abs(i8vec4);int8_t sign(int8_t);i8vec2 sign(i8vec2);i8vec3 sign(i8vec3);i8vec4 sign(i8vec4);int8_t min(int8_t x, int8_t y);i8vec2 min(i8vec2 x, int8_t y);i8vec3 min(i8vec3 x, int8_t y);i8vec4 min(i8vec4 x, int8_t y);i8vec2 min(i8vec2 x, i8vec2 y);i8vec3 min(i8vec3 x, i8vec3 y);i8vec4 min(i8vec4 x, i8vec4 y);uint8_t min(uint8_t x, uint8_t y);u8vec2 min(u8vec2 x, uint8_t y);u8vec3 min(u8vec3 x, uint8_t y);u8vec4 min(u8vec4 x, uint8_t y);u8vec2 min(u8vec2 x, u8vec2 y);u8vec3 min(u8vec3 x, u8vec3 y);u8vec4 min(u8vec4 x, u8vec4 y);int8_t max(int8_t x, int8_t y);i8vec2 max(i8vec2 x, int8_t y);i8vec3 max(i8vec3 x, int8_t y);i8vec4 max(i8vec4 x, int8_t y);i8vec2 max(i8vec2 x, i8vec2 y);i8vec3 max(i8vec3 x, i8vec3 y);i8vec4 max(i8vec4 x, i8vec4 y);uint8_t max(uint8_t x, uint8_t y);u8vec2 max(u8vec2 x, uint8_t y);u8vec3 max(u8vec3 x, uint8_t y);u8vec4 max(u8vec4 x, uint8_t y);u8vec2 max(u8vec2 x, u8vec2 y);u8vec3 max(u8vec3 x, u8vec3 y);u8vec4 max(u8vec4 x, u8vec4 y);int8_t    clamp(int8_t x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, int8_t minVal, int8_t maxVal);i8vec3  clamp(i8vec3  x, int8_t minVal, int8_t maxVal);i8vec4  clamp(i8vec4  x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, i8vec2  minVal, i8vec2  maxVal);i8vec3  clamp(i8vec3  x, i8vec3  minVal, i8vec3  maxVal);i8vec4  clamp(i8vec4  x, i8vec4  minVal, i8vec4  maxVal);uint8_t   clamp(uint8_t x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, uint8_t minVal, uint8_t maxVal);u8vec3  clamp(u8vec3  x, uint8_t minVal, uint8_t maxVal);u8vec4  clamp(u8vec4  x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, u8vec2  minVal, u8vec2  maxVal);u8vec3  clamp(u8vec3  x, u8vec3  minVal, u8vec3  maxVal);u8vec4  clamp(u8vec4  x, u8vec4  minVal, u8vec4  maxVal);int8_t  mix(int8_t,  int8_t,  bool);i8vec2  mix(i8vec2,  i8vec2,  bvec2);i8vec3  mix(i8vec3,  i8vec3,  bvec3);i8vec4  mix(i8vec4,  i8vec4,  bvec4);uint8_t mix(uint8_t, uint8_t, bool);u8vec2  mix(u8vec2,  u8vec2,  bvec2)..." /* TRUNCATED STRING LITERAL */
              );
        if (!bVar3 || !bVar33) goto LAB_0010cef4;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
              );
        if (bVar4) goto LAB_00109b1b;
LAB_0010885f:
        bVar11 = true;
      }
      if (!bVar8) goto LAB_0010886d;
      goto LAB_00109e38;
    }
    if (bVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float cubeFaceIndexAMD(vec3);vec2  cubeFaceCoordAMD(vec3);uint64_t timeAMD();in int gl_SIMDGroupSizeAMD;\n"
                );
    }
    bVar3 = (bool)(bVar34 & 0x13f < param_1);
    bVar11 = 0x81 < param_1 && bVar33;
    if (bVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint countLeadingZeros(uint);uvec2 countLeadingZeros(uvec2);uvec3 countLeadingZeros(uvec3);uvec4 countLeadingZeros(uvec4);uint countTrailingZeros(uint);uvec2 countTrailingZeros(uvec2);uvec3 countTrailingZeros(uvec3);uvec4 countTrailingZeros(uvec4);uint absoluteDifference(int, int);uvec2 absoluteDifference(ivec2, ivec2);uvec3 absoluteDifference(ivec3, ivec3);uvec4 absoluteDifference(ivec4, ivec4);uint16_t absoluteDifference(int16_t, int16_t);u16vec2 absoluteDifference(i16vec2, i16vec2);u16vec3 absoluteDifference(i16vec3, i16vec3);u16vec4 absoluteDifference(i16vec4, i16vec4);uint64_t absoluteDifference(int64_t, int64_t);u64vec2 absoluteDifference(i64vec2, i64vec2);u64vec3 absoluteDifference(i64vec3, i64vec3);u64vec4 absoluteDifference(i64vec4, i64vec4);uint absoluteDifference(uint, uint);uvec2 absoluteDifference(uvec2, uvec2);uvec3 absoluteDifference(uvec3, uvec3);uvec4 absoluteDifference(uvec4, uvec4);uint16_t absoluteDifference(uint16_t, uint16_t);u16vec2 absoluteDifference(u16vec2, u16vec2);u16vec3 absoluteDifference(u16vec3, u16vec3);u16vec4 absoluteDifference(u16vec4, u16vec4);uint64_t absoluteDifference(uint64_t, uint64_t);u64vec2 absoluteDifference(u64vec2, u64vec2);u64vec3 absoluteDifference(u64vec3, u64vec3);u64vec4 absoluteDifference(u64vec4, u64vec4);int addSaturate(int, int);ivec2 addSaturate(ivec2, ivec2);ivec3 addSaturate(ivec3, ivec3);ivec4 addSaturate(ivec4, ivec4);int16_t addSaturate(int16_t, int16_t);i16vec2 addSaturate(i16vec2, i16vec2);i16vec3 addSaturate(i16vec3, i16vec3);i16vec4 addSaturate(i16vec4, i16vec4);int64_t addSaturate(int64_t, int64_t);i64vec2 addSaturate(i64vec2, i64vec2);i64vec3 addSaturate(i64vec3, i64vec3);i64vec4 addSaturate(i64vec4, i64vec4);uint addSaturate(uint, uint);uvec2 addSaturate(uvec2, uvec2);uvec3 addSaturate(uvec3, uvec3);uvec4 addSaturate(uvec4, uvec4);uint16_t addSaturate(uint16_t, uint16_t);u16vec2 addSaturate(u16vec2, u16vec2);u16vec3 addSaturate(u16vec3, u16vec3);u16vec4 addSaturate(u16vec4, u16vec4);uint64_t addSaturate(uint64_t, uint64_t);u64vec2 addSaturate(u..." /* TRUNCATED STRING LITERAL */
                );
      if (!bVar3) {
        bVar3 = bVar36;
        if (!bVar36) goto LAB_0010bd89;
        goto LAB_00109ef5;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
                );
      if (!bVar36) {
        bVar11 = bVar8;
        if (0x1c1 < param_1) goto joined_r0x0010cc0a;
LAB_0010c823:
        bVar11 = true;
LAB_0010c828:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "int mix(int, int, bool);ivec2 mix(ivec2, ivec2, bvec2);ivec3 mix(ivec3, ivec3, bvec3);ivec4 mix(ivec4, ivec4, bvec4);uint  mix(uint,  uint,  bool );uvec2 mix(uvec2, uvec2, bvec2);uvec3 mix(uvec3, uvec3, bvec3);uvec4 mix(uvec4, uvec4, bvec4);bool  mix(bool,  bool,  bool );bvec2 mix(bvec2, bvec2, bvec2);bvec3 mix(bvec3, bvec3, bvec3);bvec4 mix(bvec4, bvec4, bvec4);\n"
              );
        bVar3 = bVar11;
        goto LAB_00108828;
      }
      bVar11 = bVar36;
      if (param_1 < 0x1c2) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "int mix(int, int, bool);ivec2 mix(ivec2, ivec2, bvec2);ivec3 mix(ivec3, ivec3, bvec3);ivec4 mix(ivec4, ivec4, bvec4);uint  mix(uint,  uint,  bool );uvec2 mix(uvec2, uvec2, bvec2);uvec3 mix(uvec3, uvec3, bvec3);uvec4 mix(uvec4, uvec4, bvec4);bool  mix(bool,  bool,  bool );bvec2 mix(bvec2, bvec2, bvec2);bvec3 mix(bvec3, bvec3, bvec3);bvec4 mix(bvec4, bvec4, bvec4);\n"
              );
      }
LAB_00108833:
      if (bVar8) goto LAB_00109dde;
      bVar3 = bVar11;
      if (bVar36) goto LAB_00109f21;
LAB_00108847:
      bVar11 = bVar3;
      if (bVar11) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
              );
        goto LAB_0010885f;
      }
LAB_0010886d:
      if (bVar9) goto LAB_00109e38;
      if (param_4[2] != 0) {
LAB_001088b3:
        if (param_1 == 100) {
          pTVar32 = this + 0x30;
        }
        goto LAB_001088cb;
      }
LAB_00108884:
      if (param_3 == 8) goto LAB_0010b89c;
      if (param_1 < 0x83) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x30),"vec4 ftransform();");
        goto LAB_001088b3;
      }
      goto LAB_00109e71;
    }
    if (bVar36) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "uint countLeadingZeros(uint);uvec2 countLeadingZeros(uvec2);uvec3 countLeadingZeros(uvec3);uvec4 countLeadingZeros(uvec4);uint countTrailingZeros(uint);uvec2 countTrailingZeros(uvec2);uvec3 countTrailingZeros(uvec3);uvec4 countTrailingZeros(uvec4);uint absoluteDifference(int, int);uvec2 absoluteDifference(ivec2, ivec2);uvec3 absoluteDifference(ivec3, ivec3);uvec4 absoluteDifference(ivec4, ivec4);uint16_t absoluteDifference(int16_t, int16_t);u16vec2 absoluteDifference(i16vec2, i16vec2);u16vec3 absoluteDifference(i16vec3, i16vec3);u16vec4 absoluteDifference(i16vec4, i16vec4);uint64_t absoluteDifference(int64_t, int64_t);u64vec2 absoluteDifference(i64vec2, i64vec2);u64vec3 absoluteDifference(i64vec3, i64vec3);u64vec4 absoluteDifference(i64vec4, i64vec4);uint absoluteDifference(uint, uint);uvec2 absoluteDifference(uvec2, uvec2);uvec3 absoluteDifference(uvec3, uvec3);uvec4 absoluteDifference(uvec4, uvec4);uint16_t absoluteDifference(uint16_t, uint16_t);u16vec2 absoluteDifference(u16vec2, u16vec2);u16vec3 absoluteDifference(u16vec3, u16vec3);u16vec4 absoluteDifference(u16vec4, u16vec4);uint64_t absoluteDifference(uint64_t, uint64_t);u64vec2 absoluteDifference(u64vec2, u64vec2);u64vec3 absoluteDifference(u64vec3, u64vec3);u64vec4 absoluteDifference(u64vec4, u64vec4);int addSaturate(int, int);ivec2 addSaturate(ivec2, ivec2);ivec3 addSaturate(ivec3, ivec3);ivec4 addSaturate(ivec4, ivec4);int16_t addSaturate(int16_t, int16_t);i16vec2 addSaturate(i16vec2, i16vec2);i16vec3 addSaturate(i16vec3, i16vec3);i16vec4 addSaturate(i16vec4, i16vec4);int64_t addSaturate(int64_t, int64_t);i64vec2 addSaturate(i64vec2, i64vec2);i64vec3 addSaturate(i64vec3, i64vec3);i64vec4 addSaturate(i64vec4, i64vec4);uint addSaturate(uint, uint);uvec2 addSaturate(uvec2, uvec2);uvec3 addSaturate(uvec3, uvec3);uvec4 addSaturate(uvec4, uvec4);uint16_t addSaturate(uint16_t, uint16_t);u16vec2 addSaturate(u16vec2, u16vec2);u16vec3 addSaturate(u16vec3, u16vec3);u16vec4 addSaturate(u16vec4, u16vec4);uint64_t addSaturate(uint64_t, uint64_t);u64vec2 addSaturate(u..." /* TRUNCATED STRING LITERAL */
                );
LAB_001087f0:
      bVar3 = (bool)(0x13f < param_1 & bVar34);
      if (bVar3) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
              );
        bVar11 = false;
        goto LAB_0010881d;
      }
LAB_00109ef5:
      bVar11 = bVar3;
      if (param_1 < 0x136) goto LAB_0010bda0;
      if (!bVar37 || !bVar33) goto LAB_00108833;
      if (param_1 < 0x1c2) goto LAB_0010c828;
      if (bVar8) goto LAB_00109dde;
LAB_00109f21:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float texture(sampler2DArrayShadow, vec4, float);float texture(samplerCubeArrayShadow, vec4, float, float);float textureLod(sampler2DArrayShadow, vec4, float);float textureLod(samplerCubeShadow, vec4, float);float textureLod(samplerCubeArrayShadow, vec4, float, float);float textureLodOffset(sampler2DArrayShadow, vec4, float, ivec2);float textureOffset(sampler2DArrayShadow, vec4 , ivec2, float);\n"
                );
      goto LAB_0010886d;
    }
    if (!bVar3) {
LAB_0010bd89:
      bVar3 = bVar11;
      if ((0x1c1 < param_1) || (!bVar37 || !bVar33)) goto joined_r0x0010cc0a;
LAB_0010bda0:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "int mix(int, int, bool);ivec2 mix(ivec2, ivec2, bvec2);ivec3 mix(ivec3, ivec3, bvec3);ivec4 mix(ivec4, ivec4, bvec4);uint  mix(uint,  uint,  bool );uvec2 mix(uvec2, uvec2, bvec2);uvec3 mix(uvec3, uvec3, bvec3);uvec4 mix(uvec4, uvec4, bvec4);bool  mix(bool,  bool,  bool );bvec2 mix(bvec2, bvec2, bvec2);bvec3 mix(bvec3, bvec3, bvec3);bvec4 mix(bvec4, bvec4, bvec4);\n"
                );
      goto LAB_00108833;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "struct gl_TextureFootprint2DNV {uvec2 anchor;uvec2 offset;uvec2 mask;uint lod;uint granularity;};struct gl_TextureFootprint3DNV {uvec3 anchor;uvec3 offset;uvec2 mask;uint lod;uint granularity;};bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintNV(sampler2D, vec2, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintNV(sampler3D, vec3, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintClampNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV, float);bool textureFootprintClampNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV, float);bool textureFootprintLodNV(sampler2D, vec2, float, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintLodNV(sampler3D, vec3, float, int, bool, out gl_TextureFootprint3DNV);bool textureFootprintGradNV(sampler2D, vec2, vec2, vec2, int, bool, out gl_TextureFootprint2DNV);bool textureFootprintGradClampNV(sampler2D, vec2, vec2, vec2, float, int, bool, out gl_TextureFootprint2DNV);\n"
              );
    if (bVar7) {
      if (param_1 < 0x1c2) goto LAB_0010c828;
      if (bVar8) goto LAB_00109dde;
      goto LAB_0010886d;
    }
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "float16_t radians(float16_t);f16vec2   radians(f16vec2);f16vec3   radians(f16vec3);f16vec4   radians(f16vec4);float16_t degrees(float16_t);f16vec2   degrees(f16vec2);f16vec3   degrees(f16vec3);f16vec4   degrees(f16vec4);float16_t sin(float16_t);f16vec2   sin(f16vec2);f16vec3   sin(f16vec3);f16vec4   sin(f16vec4);float16_t cos(float16_t);f16vec2   cos(f16vec2);f16vec3   cos(f16vec3);f16vec4   cos(f16vec4);float16_t tan(float16_t);f16vec2   tan(f16vec2);f16vec3   tan(f16vec3);f16vec4   tan(f16vec4);float16_t asin(float16_t);f16vec2   asin(f16vec2);f16vec3   asin(f16vec3);f16vec4   asin(f16vec4);float16_t acos(float16_t);f16vec2   acos(f16vec2);f16vec3   acos(f16vec3);f16vec4   acos(f16vec4);float16_t atan(float16_t, float16_t);f16vec2   atan(f16vec2,   f16vec2);f16vec3   atan(f16vec3,   f16vec3);f16vec4   atan(f16vec4,   f16vec4);float16_t atan(float16_t);f16vec2   atan(f16vec2);f16vec3   atan(f16vec3);f16vec4   atan(f16vec4);float16_t sinh(float16_t);f16vec2   sinh(f16vec2);f16vec3   sinh(f16vec3);f16vec4   sinh(f16vec4);float16_t cosh(float16_t);f16vec2   cosh(f16vec2);f16vec3   cosh(f16vec3);f16vec4   cosh(f16vec4);float16_t tanh(float16_t);f16vec2   tanh(f16vec2);f16vec3   tanh(f16vec3);f16vec4   tanh(f16vec4);float16_t asinh(float16_t);f16vec2   asinh(f16vec2);f16vec3   asinh(f16vec3);f16vec4   asinh(f16vec4);float16_t acosh(float16_t);f16vec2   acosh(f16vec2);f16vec3   acosh(f16vec3);f16vec4   acosh(f16vec4);float16_t atanh(float16_t);f16vec2   atanh(f16vec2);f16vec3   atanh(f16vec3);f16vec4   atanh(f16vec4);float16_t pow(float16_t, float16_t);f16vec2   pow(f16vec2,   f16vec2);f16vec3   pow(f16vec3,   f16vec3);f16vec4   pow(f16vec4,   f16vec4);float16_t exp(float16_t);f16vec2   exp(f16vec2);f16vec3   exp(f16vec3);f16vec4   exp(f16vec4);float16_t log(float16_t);f16vec2   log(f16vec2);f16vec3   log(f16vec3);f16vec4   log(f16vec4);float16_t exp2(float16_t);f16vec2   exp2(f16vec2);f16vec3   exp2(f16vec3);f16vec4   exp2(f16vec4);float16_t log2(float16_t);f16vec2   log2(f16vec2);f16vec3   log2(f16vec3);f16vec4   lo..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "int8_t abs(int8_t);i8vec2 abs(i8vec2);i8vec3 abs(i8vec3);i8vec4 abs(i8vec4);int8_t sign(int8_t);i8vec2 sign(i8vec2);i8vec3 sign(i8vec3);i8vec4 sign(i8vec4);int8_t min(int8_t x, int8_t y);i8vec2 min(i8vec2 x, int8_t y);i8vec3 min(i8vec3 x, int8_t y);i8vec4 min(i8vec4 x, int8_t y);i8vec2 min(i8vec2 x, i8vec2 y);i8vec3 min(i8vec3 x, i8vec3 y);i8vec4 min(i8vec4 x, i8vec4 y);uint8_t min(uint8_t x, uint8_t y);u8vec2 min(u8vec2 x, uint8_t y);u8vec3 min(u8vec3 x, uint8_t y);u8vec4 min(u8vec4 x, uint8_t y);u8vec2 min(u8vec2 x, u8vec2 y);u8vec3 min(u8vec3 x, u8vec3 y);u8vec4 min(u8vec4 x, u8vec4 y);int8_t max(int8_t x, int8_t y);i8vec2 max(i8vec2 x, int8_t y);i8vec3 max(i8vec3 x, int8_t y);i8vec4 max(i8vec4 x, int8_t y);i8vec2 max(i8vec2 x, i8vec2 y);i8vec3 max(i8vec3 x, i8vec3 y);i8vec4 max(i8vec4 x, i8vec4 y);uint8_t max(uint8_t x, uint8_t y);u8vec2 max(u8vec2 x, uint8_t y);u8vec3 max(u8vec3 x, uint8_t y);u8vec4 max(u8vec4 x, uint8_t y);u8vec2 max(u8vec2 x, u8vec2 y);u8vec3 max(u8vec3 x, u8vec3 y);u8vec4 max(u8vec4 x, u8vec4 y);int8_t    clamp(int8_t x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, int8_t minVal, int8_t maxVal);i8vec3  clamp(i8vec3  x, int8_t minVal, int8_t maxVal);i8vec4  clamp(i8vec4  x, int8_t minVal, int8_t maxVal);i8vec2  clamp(i8vec2  x, i8vec2  minVal, i8vec2  maxVal);i8vec3  clamp(i8vec3  x, i8vec3  minVal, i8vec3  maxVal);i8vec4  clamp(i8vec4  x, i8vec4  minVal, i8vec4  maxVal);uint8_t   clamp(uint8_t x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, uint8_t minVal, uint8_t maxVal);u8vec3  clamp(u8vec3  x, uint8_t minVal, uint8_t maxVal);u8vec4  clamp(u8vec4  x, uint8_t minVal, uint8_t maxVal);u8vec2  clamp(u8vec2  x, u8vec2  minVal, u8vec2  maxVal);u8vec3  clamp(u8vec3  x, u8vec3  minVal, u8vec3  maxVal);u8vec4  clamp(u8vec4  x, u8vec4  minVal, u8vec4  maxVal);int8_t  mix(int8_t,  int8_t,  bool);i8vec2  mix(i8vec2,  i8vec2,  bvec2);i8vec3  mix(i8vec3,  i8vec3,  bvec3);i8vec4  mix(i8vec4,  i8vec4,  bvec4);uint8_t mix(uint8_t, uint8_t, bool);u8vec2  mix(u8vec2,  u8vec2,  bvec2)..." /* TRUNCATED STRING LITERAL */
                );
      goto LAB_0010bff9;
    }
    if (bVar9) goto LAB_00109e38;
    if (param_4[2] == 0) goto LAB_00108884;
LAB_001088cb:
    if (bVar21) {
      if (*param_4 == 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pTVar32,
               "vec4 texture2DLod(sampler2D, vec2, float);vec4 texture2DProjLod(sampler2D, vec3, float);vec4 texture2DProjLod(sampler2D, vec4, float);vec4 texture3DLod(sampler3D, vec3, float);vec4 texture3DProjLod(sampler3D, vec4, float);vec4 textureCubeLod(samplerCube, vec3, float);\n"
              );
        if (param_3 != 4) goto LAB_001088e9;
LAB_0010bd10:
        iVar23 = *param_4;
LAB_0010bd13:
        if (iVar23 == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pTVar32,
                 "vec4 texture1DLod(sampler1D, float, float);vec4 texture1DProjLod(sampler1D, vec2, float);vec4 texture1DProjLod(sampler1D, vec4, float);vec4 shadow1DLod(sampler1DShadow, vec3, float);vec4 shadow2DLod(sampler2DShadow, vec3, float);vec4 shadow1DProjLod(sampler1DShadow, vec4, float);vec4 shadow2DProjLod(sampler2DShadow, vec4, float);vec4 texture1DGradARB(sampler1D, float, float, float);vec4 texture1DProjGradARB(sampler1D, vec2, float, float);vec4 texture1DProjGradARB(sampler1D, vec4, float, float);vec4 texture2DGradARB(sampler2D, vec2, vec2, vec2);vec4 texture2DProjGradARB(sampler2D, vec3, vec2, vec2);vec4 texture2DProjGradARB(sampler2D, vec4, vec2, vec2);vec4 texture3DGradARB(sampler3D, vec3, vec3, vec3);vec4 texture3DProjGradARB(sampler3D, vec4, vec3, vec3);vec4 textureCubeGradARB(samplerCube, vec3, vec3, vec3);vec4 shadow1DGradARB(sampler1DShadow, vec3, float, float);vec4 shadow1DProjGradARB( sampler1DShadow, vec4, float, float);vec4 shadow2DGradARB(sampler2DShadow, vec3, vec2, vec2);vec4 shadow2DProjGradARB( sampler2DShadow, vec4, vec2, vec2);vec4 texture2DRectGradARB(sampler2DRect, vec2, vec2, vec2);vec4 texture2DRectProjGradARB( sampler2DRect, vec3, vec2, vec2);vec4 texture2DRectProjGradARB( sampler2DRect, vec4, vec2, vec2);vec4 shadow2DRectGradARB( sampler2DRectShadow, vec3, vec2, vec2);vec4 shadow2DRectProjGradARB(sampler2DRectShadow, vec4, vec2, vec2);\n"
                );
        }
      }
      else if (param_3 != 4) {
LAB_001088e9:
        if ((param_3 == 2 && param_1 < 0x1a4) || (param_3 == 1)) goto LAB_0010bd10;
      }
LAB_0010890d:
      if (bVar7) goto LAB_0010a641;
      bVar7 = 0x1a3 < param_1 && bVar33;
      if (bVar8) goto LAB_0010b8c7;
      if (0x1a3 >= param_1 || !bVar33) goto LAB_00108948;
LAB_0010bf25:
      bVar7 = true;
      goto LAB_0010a6b0;
    }
    if (param_3 == 4) {
LAB_0010bd4a:
      if (*param_4 == 0) {
LAB_0010bd56:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)pTVar32,
               "vec4 texture2DLod(sampler2D, vec2, float);vec4 texture2DProjLod(sampler2D, vec3, float);vec4 texture2DProjLod(sampler2D, vec4, float);vec4 texture3DLod(sampler3D, vec3, float);vec4 texture3DProjLod(sampler3D, vec4, float);vec4 textureCubeLod(samplerCube, vec3, float);\n"
              );
        iVar23 = *param_4;
        goto LAB_0010bd13;
      }
      goto LAB_0010890d;
    }
LAB_0010a613:
    if ((param_3 != 2) || (0x1a3 < param_1)) {
      if (param_3 != 1) goto LAB_0010890d;
      goto LAB_0010bd4a;
    }
    if (*param_4 == 0) goto LAB_0010bd56;
    if (!bVar37 || !bVar33) {
      if (bVar8) {
        bVar7 = false;
        goto LAB_0010b8c7;
      }
      goto LAB_00108948;
    }
LAB_0010a641:
    pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (this + 0xa8);
    if ((param_1 == 0x96) || (bVar5)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"void EmitStreamVertex(int);void EndStreamPrimitive(int);");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"void EmitVertex();void EndPrimitive();\n");
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"void EmitVertex();void EndPrimitive();\n");
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x58),"void barrier();");
    if (0x1a3 < param_1) goto LAB_0010bf25;
    if (bVar8) {
      bVar7 = false;
      goto LAB_0010a6b0;
    }
LAB_00108948:
    bVar7 = false;
  }
  local_270 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (this + 0x58);
  pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 0xd0)
  ;
  this_01 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)(this + 0x30)
  ;
  if ((bVar4) || ((0x13f < param_1 && (bVar34)))) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),"void barrier();");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x210),"void barrier();");
    if (bVar11) goto LAB_0010b86b;
    if (bVar8) goto LAB_00109f8b;
    if (bVar7) goto LAB_00109f9c;
LAB_001089c0:
    if (!bVar4) goto LAB_001089cb;
LAB_0010a004:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),"void memoryBarrierShared();void groupMemoryBarrier();");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x210),"void memoryBarrierShared();void groupMemoryBarrier();");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "void controlBarrier(int, int, int, int);\nvoid memoryBarrier(int, int, int);\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"void debugPrintfEXT();\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xf8),
               "void coopMatLoadNV(out fcoopmatNV m, volatile coherent float16_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent float[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uint8_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uint16_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uint[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uint64_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uvec2[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatLoadNV(out fcoopmatNV m, volatile coherent uvec4[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent float16_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent float[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent float64_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uint8_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uint16_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uint[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uint64_t[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uvec2[] buf, uint element, uint stride, bool colMajor);\nvoid coopMatStoreNV(fcoopmatNV m, volatile coherent uvec4[] buf, uint element, uint stride, bool colMajor);\nfcoopmatNV coopMatMulAddNV(fcoopmatNV A, fcoopmatNV B, fcoopmatNV C);\nvoid coopMatLoadNV(out icoopmatNV m, volatile coherent int8_t[] buf, uint element, uint stri..." /* TRUNCATED STRING LITERAL */
              );
    local_218 = 0x1cbf;
    local_178 = local_168;
    local_178 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_178,(ulong)&local_218);
    local_168[0] = local_218;
    *local_178 = _LC482._0_8_;
    *(undefined8 *)((long)local_178 + 0x1cb7) = _LC482._7351_8_;
    lVar16 = (long)local_178 - (long)((ulong)(local_178 + 1) & 0xfffffffffffffff8);
    pcVar26 = "void coopMatLoad(out coopmat m, volatile coherent int8_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent int16_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent int32_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent int64_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent uint8_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent uint16_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent uint32_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent uint64_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent float16_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent float[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent float64_t[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent i8vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent i16vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent i32vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent i64vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent u8vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent u16vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coherent u32vec2[] buf, uint element, uint stride, int matrixLayout);\nvoid coopMatLoad(out coopmat m, volatile coheren..." /* TRUNCATED STRING LITERAL */
              + -lVar16;
    puVar25 = (undefined8 *)((ulong)(local_178 + 1) & 0xfffffffffffffff8);
    for (uVar20 = (ulong)((int)lVar16 + 0x1cbfU >> 3); uVar20 != 0; uVar20 = uVar20 - 1) {
      *puVar25 = *(undefined8 *)pcVar26;
      pcVar26 = pcVar26 + ((ulong)bVar38 * -2 + 1) * 8;
      puVar25 = puVar25 + (ulong)bVar38 * -2 + 1;
    }
    local_170 = local_218;
    *(char *)((long)local_178 + local_218) = '\0';
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,(char *)local_178);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "const int gl_MatrixUseA = 0;\nconst int gl_MatrixUseB = 1;\nconst int gl_MatrixUseAccumulator = 2;\nconst int gl_MatrixOperandsSaturatingAccumulation = 0x10;\nconst int gl_CooperativeMatrixLayoutRowMajor = 0;\nconst int gl_CooperativeMatrixLayoutColumnMajor = 1;\n\n"
              );
    if (local_178 != local_168) {
      operator_delete(local_178,local_168[0] + 1);
    }
    if (*param_4 == 0) {
LAB_0010a16b:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "vec4 texture2D(sampler2D, vec2, float);vec4 texture2DProj(sampler2D, vec3, float);vec4 texture2DProj(sampler2D, vec4, float);vec4 texture3D(sampler3D, vec3, float);vec4 texture3DProj(sampler3D, vec4, float);vec4 textureCube(samplerCube, vec3, float);\n"
                );
      if (*param_4 == 0) {
        if ((100 < param_1) && (bVar33)) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,
                 "vec4 texture1D(sampler1D, float, float);vec4 texture1DProj(sampler1D, vec2, float);vec4 texture1DProj(sampler1D, vec4, float);vec4 shadow1D(sampler1DShadow, vec3, float);vec4 shadow2D(sampler2DShadow, vec3, float);vec4 shadow1DProj(sampler1DShadow, vec4, float);vec4 shadow2DProj(sampler2DShadow, vec4, float);\n"
                );
          bVar11 = param_3 == 8;
          goto LAB_00108a68;
        }
        if (param_3 == 8) goto LAB_00108a54;
      }
    }
LAB_00109f7c:
    bVar11 = param_3 == 8;
  }
  else {
    if (bVar11) {
LAB_0010b86b:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"void memoryBarrier();");
      if ((!bVar7) && (!bVar8)) goto LAB_001089c0;
    }
    else if (bVar8) {
LAB_00109f8b:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"void memoryBarrier();");
    }
    else if (!bVar7) goto LAB_001089cb;
LAB_00109f9c:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"void memoryBarrierBuffer();");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xf8),"void memoryBarrierShared();void groupMemoryBarrier();");
    if ((param_4[2] == 0) || ((char)param_4[4] != '\0')) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"void memoryBarrierAtomicCounter();");
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"void memoryBarrierImage();");
    if (bVar4) goto LAB_0010a004;
LAB_001089cb:
    if ((0x13f < param_1) && (bVar34)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),"void memoryBarrierShared();void groupMemoryBarrier();");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x210),"void memoryBarrierShared();void groupMemoryBarrier();");
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "void controlBarrier(int, int, int, int);\nvoid memoryBarrier(int, int, int);\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"void debugPrintfEXT();\n");
    if (*param_4 != 0) goto LAB_00109f7c;
    if ((bVar33) || (bVar35)) goto LAB_0010a16b;
LAB_00108a54:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "vec4 texture2DLodEXT(sampler2D, vec2, float);vec4 texture2DProjLodEXT(sampler2D, vec3, float);vec4 texture2DProjLodEXT(sampler2D, vec4, float);vec4 textureCubeLodEXT(samplerCube, vec3, float);\n"
              );
    bVar11 = true;
  }
LAB_00108a68:
  if (0 < param_4[2]) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "lowp uint stencilAttachmentReadEXT();lowp uint stencilAttachmentReadEXT(int);highp float depthAttachmentReadEXT();highp float depthAttachmentReadEXT(int);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "vec4 colorAttachmentReadEXT(attachmentEXT);vec4 colorAttachmentReadEXT(attachmentEXT, int);ivec4 colorAttachmentReadEXT(iattachmentEXT);ivec4 colorAttachmentReadEXT(iattachmentEXT, int);uvec4 colorAttachmentReadEXT(uattachmentEXT);uvec4 colorAttachmentReadEXT(uattachmentEXT, int);\n"
              );
  }
  if (bVar19) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,local_200,local_1f8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"\n");
LAB_0010a1e6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "float interpolateAtCentroid(float);vec2  interpolateAtCentroid(vec2);vec3  interpolateAtCentroid(vec3);vec4  interpolateAtCentroid(vec4);float interpolateAtSample(float, int);vec2  interpolateAtSample(vec2,  int);vec3  interpolateAtSample(vec3,  int);vec4  interpolateAtSample(vec4,  int);float interpolateAtOffset(float, vec2);vec2  interpolateAtOffset(vec2,  vec2);vec3  interpolateAtOffset(vec3,  vec2);vec4  interpolateAtOffset(vec4,  vec2);\n"
              );
  }
  else if (bVar8) goto LAB_0010a1e6;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (pbVar13,"void beginInvocationInterlockARB(void);void endInvocationInterlockARB(void);")
  ;
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
            (pbVar13,"bool helperInvocationEXT();\n");
  if (bVar4) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "float interpolateAtVertexAMD(float, uint);vec2  interpolateAtVertexAMD(vec2,  uint);vec3  interpolateAtVertexAMD(vec3,  uint);vec4  interpolateAtVertexAMD(vec4,  uint);int   interpolateAtVertexAMD(int,   uint);ivec2 interpolateAtVertexAMD(ivec2, uint);ivec3 interpolateAtVertexAMD(ivec3, uint);ivec4 interpolateAtVertexAMD(ivec4, uint);uint  interpolateAtVertexAMD(uint,  uint);uvec2 interpolateAtVertexAMD(uvec2, uint);uvec3 interpolateAtVertexAMD(uvec3, uint);uvec4 interpolateAtVertexAMD(uvec4, uint);float16_t interpolateAtVertexAMD(float16_t, uint);f16vec2   interpolateAtVertexAMD(f16vec2,   uint);f16vec3   interpolateAtVertexAMD(f16vec3,   uint);f16vec4   interpolateAtVertexAMD(f16vec4,   uint);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,local_1d0,local_1c8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "float16_t interpolateAtCentroid(float16_t);f16vec2   interpolateAtCentroid(f16vec2);f16vec3   interpolateAtCentroid(f16vec3);f16vec4   interpolateAtCentroid(f16vec4);float16_t interpolateAtSample(float16_t, int);f16vec2   interpolateAtSample(f16vec2,   int);f16vec3   interpolateAtSample(f16vec3,   int);f16vec4   interpolateAtSample(f16vec4,   int);float16_t interpolateAtOffset(float16_t, f16vec2);f16vec2   interpolateAtOffset(f16vec2,   f16vec2);f16vec3   interpolateAtOffset(f16vec3,   f16vec2);f16vec4   interpolateAtOffset(f16vec4,   f16vec2);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,
               "uvec2 clock2x32ARB();uint64_t clockARB();uvec2 clockRealtime2x32EXT();uint64_t clockRealtimeEXT();\n"
              );
    if (param_4[2] < 1) {
      if (bVar10) goto LAB_0010a6e2;
LAB_0010a4fb:
      bVar34 = (bool)(bVar34 & 0x13f < param_1);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),local_200,local_1f8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),"\n");
LAB_0010a540:
      local_280 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0xf8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_280,local_1d0,local_1c8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_280,local_1a0,local_198);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_280,"\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),"void writePackedPrimitiveIndices4x8NV(uint, uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x210),"void EmitMeshTasksEXT(uint, uint, uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),"void SetMeshOutputsEXT(uint, uint);\n");
      bVar19 = bVar34;
      if (bVar10) goto LAB_0010a829;
      bVar36 = bVar34;
      if (!bVar34) goto LAB_00108af5;
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "uint fragmentMaskFetchAMD(subpassInputMS);uint fragmentMaskFetchAMD(isubpassInputMS);uint fragmentMaskFetchAMD(usubpassInputMS);vec4  fragmentFetchAMD(subpassInputMS,  uint);ivec4 fragmentFetchAMD(isubpassInputMS, uint);uvec4 fragmentFetchAMD(usubpassInputMS, uint);\n"
                );
      if (!bVar2 || !bVar33) goto LAB_0010a4fb;
LAB_0010a6e2:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "void rayQueryInitializeEXT(rayQueryEXT, accelerationStructureEXT, uint, uint, vec3, float, vec3, float);void rayQueryTerminateEXT(rayQueryEXT);void rayQueryGenerateIntersectionEXT(rayQueryEXT, float);void rayQueryConfirmIntersectionEXT(rayQueryEXT);bool rayQueryProceedEXT(rayQueryEXT);uint rayQueryGetIntersectionTypeEXT(rayQueryEXT, bool);float rayQueryGetRayTMinEXT(rayQueryEXT);uint rayQueryGetRayFlagsEXT(rayQueryEXT);vec3 rayQueryGetWorldRayOriginEXT(rayQueryEXT);vec3 rayQueryGetWorldRayDirectionEXT(rayQueryEXT);float rayQueryGetIntersectionTEXT(rayQueryEXT, bool);int rayQueryGetIntersectionInstanceCustomIndexEXT(rayQueryEXT, bool);int rayQueryGetIntersectionInstanceIdEXT(rayQueryEXT, bool);uint rayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetEXT(rayQueryEXT, bool);int rayQueryGetIntersectionGeometryIndexEXT(rayQueryEXT, bool);int rayQueryGetIntersectionPrimitiveIndexEXT(rayQueryEXT, bool);vec2 rayQueryGetIntersectionBarycentricsEXT(rayQueryEXT, bool);bool rayQueryGetIntersectionFrontFaceEXT(rayQueryEXT, bool);bool rayQueryGetIntersectionCandidateAABBOpaqueEXT(rayQueryEXT);vec3 rayQueryGetIntersectionObjectRayDirectionEXT(rayQueryEXT, bool);vec3 rayQueryGetIntersectionObjectRayOriginEXT(rayQueryEXT, bool);mat4x3 rayQueryGetIntersectionObjectToWorldEXT(rayQueryEXT, bool);mat4x3 rayQueryGetIntersectionWorldToObjectEXT(rayQueryEXT, bool);void rayQueryGetIntersectionTriangleVertexPositionsEXT(rayQueryEXT, bool, out vec3[3]);\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x120),
                 "void traceNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void traceRayMotionNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void traceRayEXT(accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void executeCallableNV(uint, int);void executeCallableEXT(uint, int);void hitObjectTraceRayNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectTraceRayMotionNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitMotionNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitWithIndexNV(hitObjectNV, accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitWithIndexMotionNV(hitObjectNV, accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordMissNV(hitObjectNV,uint,vec3,float,vec3,float);void hitObjectRecordMissMotionNV(hitObjectNV,uint,vec3,float,vec3,float,float);void hitObjectRecordEmptyNV(hitObjectNV);void hitObjectExecuteShaderNV(hitObjectNV,int);bool hitObjectIsEmptyNV(hitObjectNV);bool hitObjectIsMissNV(hitObjectNV);bool hitObjectIsHitNV(hitObjectNV);float hitObjectGetRayTMinNV(hitObjectNV);float hitObjectGetRayTMaxNV(hitObjectNV);vec3 hitObjectGetWorldRayOriginNV(hitObjectNV);vec3 hitObjectGetWorldRayDirectionNV(hitObjectNV);vec3 hitObjectGetObjectRayOriginNV(hitObjectNV);vec3 hitObjectGetObjectRayDirectionNV(hitObjectNV);mat4x3 hitObjectGetWorldToObjectNV(hitObjectNV);mat4x3 hitObjectGetObjectToWorldNV(hitObjectNV);int hitObjectGetInstanceCustomIndexNV(hitObjectNV);int hitObjectGetInstanceIdNV(hitObjectNV);int hitObjectGetGeometryIndexNV(hitObjectNV);int hitObjectGetPrimitiveIndexNV(hitObjectNV);uint hitObjectGetHitKindNV(hitObjectNV);void hitOb..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x148),
                 "bool reportIntersectionNV(float, uint);bool reportIntersectionEXT(float, uint);\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x170),"void ignoreIntersectionNV();void terminateRayNV();\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x198),
                 "void traceNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void traceRayMotionNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void traceRayEXT(accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void executeCallableNV(uint, int);void executeCallableEXT(uint, int);void hitObjectTraceRayNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectTraceRayMotionNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitMotionNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitWithIndexNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitWithIndexMotionNV(hitObjectNV, accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordMissNV(hitObjectNV, uint, vec3, float, vec3, float);void hitObjectRecordMissMotionNV(hitObjectNV,uint,vec3,float,vec3,float,float);void hitObjectRecordEmptyNV(hitObjectNV);void hitObjectExecuteShaderNV(hitObjectNV, int);bool hitObjectIsEmptyNV(hitObjectNV);bool hitObjectIsMissNV(hitObjectNV);bool hitObjectIsHitNV(hitObjectNV);float hitObjectGetRayTMinNV(hitObjectNV);float hitObjectGetRayTMaxNV(hitObjectNV);vec3 hitObjectGetWorldRayOriginNV(hitObjectNV);vec3 hitObjectGetWorldRayDirectionNV(hitObjectNV);vec3 hitObjectGetObjectRayOriginNV(hitObjectNV);vec3 hitObjectGetObjectRayDirectionNV(hitObjectNV);mat4x3 hitObjectGetWorldToObjectNV(hitObjectNV);mat4x3 hitObjectGetObjectToWorldNV(hitObjectNV);int hitObjectGetInstanceCustomIndexNV(hitObjectNV);int hitObjectGetInstanceIdNV(hitObjectNV);int hitObjectGetGeometryIndexNV(hitObjectNV);int hitObjectGetPrimitiveIndexNV(hitObjectNV);uint hitObjectGetHitKindNV(hitObjectNV);void ..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1c0),
                 "void traceNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void traceRayMotionNV(accelerationStructureNV,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void traceRayEXT(accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void executeCallableNV(uint, int);void executeCallableEXT(uint, int);void hitObjectTraceRayNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectTraceRayMotionNV(hitObjectNV,accelerationStructureEXT,uint,uint,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitMotionNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordHitWithIndexNV(hitObjectNV,accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,int);void hitObjectRecordHitWithIndexMotionNV(hitObjectNV, accelerationStructureEXT,int,int,int,uint,uint,vec3,float,vec3,float,float,int);void hitObjectRecordMissNV(hitObjectNV, uint, vec3, float, vec3, float);void hitObjectRecordMissMotionNV(hitObjectNV,uint,vec3,float,vec3,float,float);void hitObjectRecordEmptyNV(hitObjectNV);void hitObjectExecuteShaderNV(hitObjectNV, int);bool hitObjectIsEmptyNV(hitObjectNV);bool hitObjectIsMissNV(hitObjectNV);bool hitObjectIsHitNV(hitObjectNV);float hitObjectGetRayTMinNV(hitObjectNV);float hitObjectGetRayTMaxNV(hitObjectNV);vec3 hitObjectGetWorldRayOriginNV(hitObjectNV);vec3 hitObjectGetWorldRayDirectionNV(hitObjectNV);vec3 hitObjectGetObjectRayOriginNV(hitObjectNV);vec3 hitObjectGetObjectRayDirectionNV(hitObjectNV);mat4x3 hitObjectGetWorldToObjectNV(hitObjectNV);mat4x3 hitObjectGetObjectToWorldNV(hitObjectNV);int hitObjectGetInstanceCustomIndexNV(hitObjectNV);int hitObjectGetInstanceIdNV(hitObjectNV);int hitObjectGetGeometryIndexNV(hitObjectNV);int hitObjectGetPrimitiveIndexNV(hitObjectNV);uint hitObjectGetHitKindNV(hitObjectNV);void ..." /* TRUNCATED STRING LITERAL */
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1e8),
                 "void executeCallableNV(uint, int);void executeCallableEXT(uint, int);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),local_200,local_1f8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),"\n");
      if (bVar4) goto LAB_0010a540;
      if (bVar34) goto LAB_0010a7c6;
      bVar36 = false;
    }
LAB_0010a5e3:
    local_280 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xf8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),
               "vec3 fetchMicroTriangleVertexPositionNV(accelerationStructureEXT, int, int, int, ivec2);vec2 fetchMicroTriangleVertexBarycentricNV(accelerationStructureEXT, int, int, int, ivec2);\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_280,
               "vec3 fetchMicroTriangleVertexPositionNV(accelerationStructureEXT, int, int, int, ivec2);vec2 fetchMicroTriangleVertexBarycentricNV(accelerationStructureEXT, int, int, int, ivec2);\n"
              );
  }
  else {
    if (bVar10) goto LAB_0010a6e2;
    if ((0x13f < param_1) && (bVar34)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),local_200,local_1f8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),"\n");
LAB_0010a7c6:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),"void writePackedPrimitiveIndices4x8NV(uint, uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x210),"void EmitMeshTasksEXT(uint, uint, uint);\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),"void SetMeshOutputsEXT(uint, uint);\n");
      bVar34 = true;
      bVar19 = bVar10;
      bVar36 = true;
      if (!bVar2 || !bVar33) goto LAB_0010a5e3;
LAB_0010a829:
      bVar34 = bVar19;
      bVar36 = (bool)(bVar34 | bVar4);
      goto LAB_0010a5e3;
    }
LAB_00108af5:
    bVar34 = false;
    bVar36 = bVar4;
  }
  bVar19 = param_3 == 4;
  if (*param_4 == 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"struct gl_DepthRangeParameters {");
    if (bVar11) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"highp float near;highp float far;highp float diff;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"};uniform gl_DepthRangeParameters gl_DepthRange;\n");
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"float near;float far;float diff;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,"};uniform gl_DepthRangeParameters gl_DepthRange;\n");
      if ((*param_4 == 0) && ((param_1 < 0x83 || param_1 == 0x8c || (bVar19)))) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_2a8,
               "uniform mat4  gl_ModelViewMatrix;uniform mat4  gl_ProjectionMatrix;uniform mat4  gl_ModelViewProjectionMatrix;uniform mat3  gl_NormalMatrix;uniform mat4  gl_ModelViewMatrixInverse;uniform mat4  gl_ProjectionMatrixInverse;uniform mat4  gl_ModelViewProjectionMatrixInverse;uniform mat4  gl_ModelViewMatrixTranspose;uniform mat4  gl_ProjectionMatrixTranspose;uniform mat4  gl_ModelViewProjectionMatrixTranspose;uniform mat4  gl_ModelViewMatrixInverseTranspose;uniform mat4  gl_ProjectionMatrixInverseTranspose;uniform mat4  gl_ModelViewProjectionMatrixInverseTranspose;uniform float gl_NormalScale;struct gl_PointParameters {float size;float sizeMin;float sizeMax;float fadeThresholdSize;float distanceConstantAttenuation;float distanceLinearAttenuation;float distanceQuadraticAttenuation;};uniform gl_PointParameters gl_Point;struct gl_MaterialParameters {vec4  emission;vec4  ambient;vec4  diffuse;vec4  specular;float shininess;};uniform gl_MaterialParameters  gl_FrontMaterial;uniform gl_MaterialParameters  gl_BackMaterial;struct gl_LightSourceParameters {vec4  ambient;vec4  diffuse;vec4  specular;vec4  position;vec4  halfVector;vec3  spotDirection;float spotExponent;float spotCutoff;float spotCosCutoff;float constantAttenuation;float linearAttenuation;float quadraticAttenuation;};struct gl_LightModelParameters {vec4  ambient;};uniform gl_LightModelParameters  gl_LightModel;struct gl_LightModelProducts {vec4  sceneColor;};uniform gl_LightModelProducts gl_FrontLightModelProduct;uniform gl_LightModelProducts gl_BackLightModelProduct;struct gl_LightProducts {vec4  ambient;vec4  diffuse;vec4  specular;};struct gl_FogParameters {vec4  color;float density;float start;float end;float scale;};uniform gl_FogParameters gl_Fog;\n"
              );
      }
    }
  }
  if ((bVar7) || (bVar8)) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xf8),
               "in    highp uvec3 gl_NumWorkGroups;const highp uvec3 gl_WorkGroupSize = uvec3(1,1,1);in highp uvec3 gl_WorkGroupID;in highp uvec3 gl_LocalInvocationID;in highp uvec3 gl_GlobalInvocationID;in highp uint gl_LocalInvocationIndex;\n"
              );
LAB_0010a219:
    local_280 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xf8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_280,"in highp int gl_DeviceIndex;\n");
    if (bVar36) goto LAB_00108b42;
LAB_0010a235:
    if (param_3 != 8) {
      if (0x81 < param_1) {
        if (param_1 != 0x82) goto LAB_00108bef;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,
               "in vec4  gl_Color;in vec4  gl_SecondaryColor;in vec3  gl_Normal;in vec4  gl_Vertex;in vec4  gl_MultiTexCoord0;in vec4  gl_MultiTexCoord1;in vec4  gl_MultiTexCoord2;in vec4  gl_MultiTexCoord3;in vec4  gl_MultiTexCoord4;in vec4  gl_MultiTexCoord5;in vec4  gl_MultiTexCoord6;in vec4  gl_MultiTexCoord7;in float gl_FogCoord;\n"
              );
        goto LAB_0010b3ce;
      }
LAB_0010a24c:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,
                 "attribute vec4  gl_Color;attribute vec4  gl_SecondaryColor;attribute vec3  gl_Normal;attribute vec4  gl_Vertex;attribute vec4  gl_MultiTexCoord0;attribute vec4  gl_MultiTexCoord1;attribute vec4  gl_MultiTexCoord2;attribute vec4  gl_MultiTexCoord3;attribute vec4  gl_MultiTexCoord4;attribute vec4  gl_MultiTexCoord5;attribute vec4  gl_MultiTexCoord6;attribute vec4  gl_MultiTexCoord7;attribute float gl_FogCoord;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,
                 "        vec4  gl_ClipVertex;varying vec4  gl_FrontColor;varying vec4  gl_BackColor;varying vec4  gl_FrontSecondaryColor;varying vec4  gl_BackSecondaryColor;varying vec4  gl_TexCoord[];varying float gl_FogFragCoord;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"vec4 gl_Position;float gl_PointSize;");
      if (param_4[2] == 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"int gl_InstanceID;");
        if (param_4[2] < 1) goto LAB_0010b449;
      }
      else if (param_4[2] < 1) goto LAB_0010b569;
LAB_0010a28b:
      if (bVar9) {
LAB_0010c615:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
        goto LAB_0010c3b1;
      }
      if (!bVar8) goto LAB_0010b4aa;
LAB_0010a29f:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
LAB_0010a2b6:
      if (bVar4) goto LAB_0010b2c5;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"out highp int gl_PrimitiveShadingRateEXT;\n");
      if (!bVar8) goto LAB_0010a2df;
LAB_0010b5cf:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xa8),
                 "in gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;} gl_in[];\nin highp int gl_PrimitiveIDIn;in highp int gl_InvocationID;\nout gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;};\nout highp int gl_PrimitiveID;out highp int gl_Layer;\n"
                );
LAB_0010b392:
      local_298 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0xa8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_298,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      goto LAB_0010b3a1;
    }
    if (param_1 != 100) goto LAB_0010b519;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_01,
               "highp   vec4  gl_Position;mediump float gl_PointSize;highp int gl_InstanceID;");
    if (bVar9) goto LAB_0010c615;
    if (bVar8) goto LAB_0010a29f;
    if (bVar4) goto LAB_0010c27c;
LAB_0010a83b:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,
               "in highp int gl_PatchVerticesIn;in highp int gl_PrimitiveID;in highp int gl_InvocationID;out gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,
               "} gl_out[];patch out highp float gl_TessLevelOuter[4];patch out highp float gl_TessLevelInner[2];patch out highp vec4 gl_BoundingBoxOES[2];patch out highp vec4 gl_BoundingBoxEXT[2];\n"
              );
    if (!bVar34) {
      if (!bVar9) goto LAB_0010a874;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      if (bVar8) goto LAB_0010bc7e;
LAB_0010bc1e:
      local_288 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0x80);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_288,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      if (param_3 != 8) {
LAB_0010ba43:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"vec4  gl_FragCoord;bool  gl_FrontFacing;float gl_FragDepth;");
LAB_0010ba52:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"vec2 gl_PointCoord;");
        if (0x8b < param_1) goto LAB_0010a433;
        if (0x82 < param_1) {
          if (param_3 == 4) {
            bVar37 = false;
            goto LAB_0010cdde;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,"vec4 gl_FragColor;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,"in float gl_ClipDistance[];");
          goto LAB_0010baa2;
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"vec4 gl_FragColor;");
        if (param_1 != 0x82) goto LAB_0010af5f;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"in float gl_ClipDistance[];");
        goto LAB_0010c4c7;
      }
LAB_0010bc38:
      if (299 < param_1) {
LAB_0010a8e1:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "highp   vec4  gl_FragCoord;        bool  gl_FrontFacing;mediump vec2  gl_PointCoord;highp   float gl_FragDepth;"
              );
        if (param_1 < 0x136) goto LAB_0010a8fc;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "bool gl_HelperInvocation;flat in highp int gl_PrimitiveID;flat in highp int gl_Layer;"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "flat  in lowp     int gl_SampleID;      in mediump vec2 gl_SamplePosition;flat  in highp    int gl_SampleMaskIn[];     out highp    int gl_SampleMask[];"
              );
        if (*param_4 == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,"uniform lowp int gl_NumSamples;");
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"highp float gl_FragDepthEXT;");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in ivec2 gl_FragSizeEXT;flat in int   gl_FragInvocationCountEXT;");
        if (0x13f < param_1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,"flat in ivec2 gl_FragmentSizeNV;flat in int   gl_InvocationsPerPixelNV;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,
                 "in vec3 gl_BaryCoordNV;in vec3 gl_BaryCoordNoPerspNV;in vec3 gl_BaryCoordEXT;in vec3 gl_BaryCoordNoPerspEXT;"
                );
        }
        pcVar26 = "flat in highp int gl_ShadingRateEXT;";
LAB_0010c7e7:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,pcVar26);
        goto LAB_0010b698;
      }
LAB_0010a8fc:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"highp float gl_FragDepthEXT;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"\n");
      if (param_1 < 0x82) {
joined_r0x0010a929:
        if (!bVar9) goto LAB_0010a92f;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
        goto joined_r0x0010af9a;
      }
LAB_0010baec:
      add2ndGenerationSamplingImaging(this,param_1,param_3,param_4);
      if (bVar9) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
        if (299 < param_1) goto LAB_0010c8cd;
        goto joined_r0x0010af9a;
      }
      if (bVar8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
        if (param_1 < 300) goto joined_r0x0010af9a;
LAB_0010b6db:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in highp uint gl_ViewID_OVR;\n");
        if (bVar4) goto LAB_0010afa0;
        if (!bVar8) goto LAB_0010b6fe;
        goto LAB_0010b12c;
      }
      if (param_1 < 300) goto LAB_0010a938;
LAB_0010c89f:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"flat in highp uint gl_ViewID_OVR;\n");
      if (bVar4) goto LAB_0010afa0;
LAB_0010b6fe:
      if (!bVar2 || !bVar33) goto LAB_0010a943;
      goto LAB_0010b73d;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,"patch out highp vec4 gl_BoundingBox[2];\n");
    if (bVar9) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
LAB_0010bc7e:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x80),
                 "in highp int gl_PatchVerticesIn;in highp int gl_PrimitiveID;in highp vec3 gl_TessCoord;patch in highp float gl_TessLevelOuter[4];patch in highp float gl_TessLevelInner[2];out gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x80),"};\n");
      goto LAB_0010bc1e;
    }
LAB_0010a874:
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      pbVar18 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0x80);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,
                 "in highp int gl_PatchVerticesIn;in highp int gl_PrimitiveID;in highp vec3 gl_TessCoord;patch in highp float gl_TessLevelOuter[4];patch in highp float gl_TessLevelInner[2];out gl_PerVertex {highp vec4 gl_Position;highp float gl_PointSize;"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"};\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      if (param_3 != 8) goto LAB_0010af38;
      if (param_1 == 100) goto LAB_0010bbc2;
      goto LAB_0010a8e1;
    }
    if (param_3 != 8) {
LAB_0010af38:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4  gl_FragCoord;bool  gl_FrontFacing;float gl_FragDepth;");
      if (0x77 < param_1) goto LAB_0010ba52;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4 gl_FragColor;");
LAB_0010af5f:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "varying vec4  gl_Color;varying vec4  gl_SecondaryColor;varying vec4  gl_TexCoord[];varying float gl_FogFragCoord;"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"\n");
      goto joined_r0x0010a929;
    }
    if (param_1 != 100) goto LAB_0010bc38;
LAB_0010bbc2:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "mediump vec4 gl_FragCoord;        bool gl_FrontFacing;mediump vec4 gl_FragColor;mediump vec2 gl_PointCoord;"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"highp float gl_FragDepthEXT;");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"\n");
LAB_0010a92f:
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
      goto joined_r0x0010af9a;
    }
LAB_0010a938:
    if (bVar4) goto LAB_0010afa0;
LAB_0010a943:
    if (!bVar7) goto LAB_0010a94a;
LAB_0010a973:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeDevice      = 1;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeWorkgroup   = 2;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeSubgroup    = 3;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeInvocation  = 4;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeQueueFamily = 5;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_ScopeShaderCallEXT = 6;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsRelaxed         = 0x0;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsAcquire         = 0x2;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsRelease         = 0x4;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsAcquireRelease  = 0x8;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsMakeAvailable   = 0x2000;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsMakeVisible     = 0x4000;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_SemanticsVolatile        = 0x8000;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_StorageSemanticsNone     = 0x0;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_StorageSemanticsBuffer   = 0x40;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_StorageSemanticsShared   = 0x100;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_StorageSemanticsImage    = 0x800;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_2a8,"const int gl_StorageSemanticsOutput   = 0x1000;\n");
    if ((bVar8) || (bVar4)) goto LAB_0010aa96;
  }
  else {
    if (bVar9) goto LAB_0010a219;
    if (!bVar36) goto LAB_0010a235;
LAB_00108b42:
    pbVar18 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (this + 0x238);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "out gl_MeshPerVertexNV {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];float gl_CullDistance[];perviewNV vec4 gl_PositionPerViewNV[];perviewNV float gl_ClipDistancePerViewNV[][];perviewNV float gl_CullDistancePerViewNV[][];} gl_MeshVerticesNV[];"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "perprimitiveNV out gl_MeshPerPrimitiveNV {int gl_PrimitiveID;int gl_Layer;int gl_ViewportIndex;int gl_ViewportMask[];perviewNV int gl_LayerPerViewNV[];perviewNV int gl_ViewportMaskPerViewNV[][];} gl_MeshPrimitivesNV[];"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "out uint gl_PrimitiveCountNV;out uint gl_PrimitiveIndicesNV[];in uint gl_MeshViewCountNV;in uint gl_MeshViewIndicesNV[4];const highp uvec3 gl_WorkGroupSize = uvec3(1,1,1);in highp uvec3 gl_WorkGroupID;in highp uvec3 gl_LocalInvocationID;in highp uvec3 gl_GlobalInvocationID;in highp uint gl_LocalInvocationIndex;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "out uint gl_PrimitivePointIndicesEXT[];out uvec2 gl_PrimitiveLineIndicesEXT[];out uvec3 gl_PrimitiveTriangleIndicesEXT[];in    highp uvec3 gl_NumWorkGroups;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "out gl_MeshPerVertexEXT {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];float gl_CullDistance[];} gl_MeshVerticesEXT[];"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "perprimitiveEXT out gl_MeshPerPrimitiveEXT {int gl_PrimitiveID;int gl_Layer;int gl_ViewportIndex;bool gl_CullPrimitiveEXT;int  gl_PrimitiveShadingRateEXT;} gl_MeshPrimitivesEXT[];"
              );
    this_00 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (this + 0x210);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_00,
               "out uint gl_TaskCountNV;const highp uvec3 gl_WorkGroupSize = uvec3(1,1,1);in highp uvec3 gl_WorkGroupID;in highp uvec3 gl_LocalInvocationID;in highp uvec3 gl_GlobalInvocationID;in highp uint gl_LocalInvocationIndex;in uint gl_MeshViewCountNV;in uint gl_MeshViewIndicesNV[4];in    highp uvec3 gl_NumWorkGroups;\n"
              );
    if (bVar4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"in highp int gl_DeviceIndex;in int gl_DrawIDARB;in int gl_ViewIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_00,"in highp int gl_DeviceIndex;in int gl_DrawIDARB;\n");
      if (0x1cb < param_1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar18,"in int gl_DrawID;\n");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_00,"in int gl_DrawID;\n");
        if (!bVar2 || !bVar33) goto LAB_0010b519;
        if (param_3 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "in vec4  gl_Color;in vec4  gl_SecondaryColor;in vec3  gl_Normal;in vec4  gl_Vertex;in vec4  gl_MultiTexCoord0;in vec4  gl_MultiTexCoord1;in vec4  gl_MultiTexCoord2;in vec4  gl_MultiTexCoord3;in vec4  gl_MultiTexCoord4;in vec4  gl_MultiTexCoord5;in vec4  gl_MultiTexCoord6;in vec4  gl_MultiTexCoord7;in float gl_FogCoord;\n"
                );
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
        }
LAB_0010c34e:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"float gl_CullDistance[];");
LAB_0010c35d:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"};\n");
        goto LAB_0010b40a;
      }
      if (param_3 != 8) goto LAB_00108be3;
      if (param_1 != 100) goto LAB_0010b519;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,
                 "highp   vec4  gl_Position;mediump float gl_PointSize;highp int gl_InstanceID;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"out highp int gl_PrimitiveShadingRateEXT;\n");
      if (bVar8) goto LAB_0010ca7c;
      if (bVar9) goto LAB_0010c99c;
LAB_0010c27c:
      bVar19 = false;
LAB_0010b3a1:
      local_298 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0xa8);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_298,"out highp int gl_PrimitiveShadingRateEXT;\n");
    }
    else if (param_3 == 8) {
LAB_0010b519:
      iVar23 = param_4[2];
      if ((iVar23 == 0) || ((char)param_4[4] != '\0')) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp int gl_VertexID;in highp int gl_InstanceID;");
        iVar23 = param_4[2];
      }
      if (0 < iVar23) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp int gl_VertexIndex;in highp int gl_InstanceIndex;");
      }
      if (0x135 < param_1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"out gl_PerVertex {highp vec4  gl_Position;highp float gl_PointSize;};");
        goto joined_r0x0010c385;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"highp vec4  gl_Position;highp float gl_PointSize;");
LAB_0010b569:
      if (!bVar9) {
        if (bVar8) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
          if (param_1 < 300) goto LAB_0010a2b6;
          goto LAB_0010b5a0;
        }
        if (param_1 < 300) goto LAB_0010b4aa;
        goto LAB_0010b49b;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      if (param_1 < 300) goto LAB_0010c3b1;
LAB_0010c3a2:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"in highp uint gl_ViewID_OVR;\n");
LAB_0010c3b1:
      if (bVar4) {
LAB_0010b2c5:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"out highp int gl_PrimitiveShadingRateEXT;\n");
        if ((param_3 - 2U & 0xfffffffd) == 0) goto LAB_0010b2ea;
        if (bVar8) {
LAB_0010ca7c:
          bVar19 = false;
          goto LAB_0010b5cf;
        }
        if (!bVar9) goto LAB_0010c27c;
LAB_0010c99c:
        bVar19 = false;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0xa8),"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      }
      else {
        if (bVar8) goto LAB_0010b5ba;
        if ((param_3 - 2U & 0xfffffffd) != 0) {
          if (bVar9) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                   (this + 0xa8),"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
          }
          goto LAB_0010b4c5;
        }
LAB_0010b2ea:
        pbVar18 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0xa8);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar18,
               "in gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
        if (param_3 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
          if (0x1c1 < param_1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(pbVar18,
                   "float gl_CullDistance[];vec4 gl_SecondaryPositionNV;vec4 gl_PositionPerViewNV[];"
                  );
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(pbVar18,
                   "} gl_in[];in int gl_PrimitiveIDIn;out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];\n"
                  );
            if (bVar5) {
              std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
              ::append(pbVar18,
                       "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                      );
            }
            goto LAB_0010c1f6;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "} gl_in[];in int gl_PrimitiveIDIn;out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];\n"
                );
          if (!bVar5) goto LAB_0010b331;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"};out int gl_PrimitiveID;out int gl_Layer;");
          if (param_1 < 0x96) goto LAB_0010c1bd;
LAB_0010cce2:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"out int gl_ViewportIndex;");
          if (param_1 < 400) {
            if (bVar19) goto LAB_0010c1bd;
            if (param_1 < 400) goto LAB_0010b359;
          }
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"in int gl_InvocationID;");
          if (0x1ad < param_1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(pbVar18,"out int gl_ViewportMask[];");
          }
        }
        else if (param_1 < 0x1c2) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "} gl_in[];in int gl_PrimitiveIDIn;out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];\n"
                );
LAB_0010b331:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"};out int gl_PrimitiveID;out int gl_Layer;");
          if (0x95 < param_1) goto LAB_0010cce2;
          if (param_3 == 4) {
LAB_0010c1bd:
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(pbVar18,"out vec4 gl_ClipVertex;");
          }
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "float gl_CullDistance[];vec4 gl_SecondaryPositionNV;vec4 gl_PositionPerViewNV[];")
          ;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,
                 "} gl_in[];in int gl_PrimitiveIDIn;out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];\n"
                );
LAB_0010c1f6:
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"float gl_CullDistance[];");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"};out int gl_PrimitiveID;out int gl_Layer;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"out int gl_ViewportIndex;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"in int gl_InvocationID;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"out int gl_ViewportMask[];");
          if (0x1c1 < param_1) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(pbVar18,
                   "out int gl_SecondaryViewportMaskNV[];out vec4 gl_SecondaryPositionNV;out vec4 gl_PositionPerViewNV[];out int  gl_ViewportMaskPerViewNV[];"
                  );
          }
        }
LAB_0010b359:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar18,"\n");
        if (bVar9) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar18,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
          if (bVar8) goto LAB_0010b3a1;
        }
        else if (bVar8) goto LAB_0010b392;
      }
      if (bVar4) goto LAB_0010b3a1;
    }
    else {
LAB_00108be3:
      if (param_1 < 0x82) goto LAB_0010a24c;
LAB_00108bef:
      bVar36 = param_1 == 0x8c;
      bVar21 = *param_4 == 0 && bVar36;
      if (*param_4 != 0 || !bVar36) {
        if (param_3 == 4) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "in vec4  gl_Color;in vec4  gl_SecondaryColor;in vec3  gl_Normal;in vec4  gl_Vertex;in vec4  gl_MultiTexCoord0;in vec4  gl_MultiTexCoord1;in vec4  gl_MultiTexCoord2;in vec4  gl_MultiTexCoord3;in vec4  gl_MultiTexCoord4;in vec4  gl_MultiTexCoord5;in vec4  gl_MultiTexCoord6;in vec4  gl_MultiTexCoord7;in float gl_FogCoord;\n"
                );
          if (param_1 < 0x96) goto LAB_0010b3ce;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
        }
        else {
          if (param_1 < 0x96) goto LAB_0010b3dd;
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,
                 "out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];");
        }
        if (0x1c1 < param_1) goto LAB_0010c34e;
        goto LAB_0010c35d;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,
                 "in vec4  gl_Color;in vec4  gl_SecondaryColor;in vec3  gl_Normal;in vec4  gl_Vertex;in vec4  gl_MultiTexCoord0;in vec4  gl_MultiTexCoord1;in vec4  gl_MultiTexCoord2;in vec4  gl_MultiTexCoord3;in vec4  gl_MultiTexCoord4;in vec4  gl_MultiTexCoord5;in vec4  gl_MultiTexCoord6;in vec4  gl_MultiTexCoord7;in float gl_FogCoord;\n"
                );
      bVar36 = bVar21;
      if ((*param_4 == 0) || (param_3 == 4)) {
LAB_0010b3ce:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,
               "    vec4  gl_ClipVertex;out vec4  gl_FrontColor;out vec4  gl_BackColor;out vec4  gl_FrontSecondaryColor;out vec4  gl_BackSecondaryColor;out vec4  gl_TexCoord[];out float gl_FogFragCoord;\n"
              );
LAB_0010b3dd:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"vec4 gl_Position;float gl_PointSize;");
        if ((param_1 != 0x82) && (!bVar36)) goto LAB_0010b40a;
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"vec4 gl_Position;float gl_PointSize;");
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"out float gl_ClipDistance[];");
LAB_0010b40a:
      iVar23 = param_4[2];
      if (iVar23 == 0) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"int gl_VertexID;");
        iVar23 = param_4[2];
        if (iVar23 == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"int gl_InstanceID;");
          iVar23 = param_4[2];
        }
      }
      if (0 < iVar23) {
        if (param_1 < 0x8c) goto LAB_0010a28b;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in int gl_VertexIndex;in int gl_InstanceIndex;");
        if ((0 < param_4[2]) && ((char)param_4[4] != '\0')) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"in int gl_VertexID;in int gl_InstanceID;");
        }
      }
LAB_0010b449:
      if (param_1 < 0x1b8) {
        if (param_1 < 0x19a) goto LAB_0010b569;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"out int gl_ViewportIndex;out int gl_Layer;");
        if (0x1ad < param_1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"out int gl_ViewportMask[];");
        }
      }
      else {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in int gl_BaseVertexARB;in int gl_BaseInstanceARB;in int gl_DrawIDARB;");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"out int gl_ViewportIndex;out int gl_Layer;");
        if (param_1 < 0x1cc) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"out int gl_ViewportMask[];");
          if (param_1 < 0x1c2) goto joined_r0x0010c385;
        }
        else {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"in int gl_BaseVertex;in int gl_BaseInstance;in int gl_DrawID;");
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(this_01,"out int gl_ViewportMask[];");
        }
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,
               "out int gl_SecondaryViewportMaskNV[];out vec4 gl_SecondaryPositionNV;out vec4 gl_PositionPerViewNV[];out int  gl_ViewportMaskPerViewNV[];"
              );
      }
joined_r0x0010c385:
      if (bVar9) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
        goto LAB_0010c3a2;
      }
      if (bVar8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
LAB_0010b5a0:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"in highp uint gl_ViewID_OVR;\n");
        if (bVar4) goto LAB_0010b2c5;
LAB_0010b5ba:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(this_01,"out highp int gl_PrimitiveShadingRateEXT;\n");
        goto LAB_0010b5cf;
      }
LAB_0010b49b:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,"in highp uint gl_ViewID_OVR;\n");
LAB_0010b4aa:
      if (bVar4) goto LAB_0010b2c5;
      if ((param_3 - 2U & 0xfffffffd) == 0) goto LAB_0010b2ea;
LAB_0010b4c5:
      bVar19 = false;
    }
LAB_0010a2df:
    if (!bVar37 || !bVar33) goto LAB_0010a83b;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,
               "in int gl_PatchVerticesIn;in int gl_PrimitiveID;in int gl_InvocationID;out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];"
              );
    if (param_3 == 4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
    }
    if (0x1c1 < param_1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"float gl_CullDistance[];");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"int  gl_ViewportMask[];");
      pcVar26 = 
      "vec4 gl_SecondaryPositionNV;int  gl_SecondaryViewportMaskNV[];vec4 gl_PositionPerViewNV[];int  gl_ViewportMaskPerViewNV[];"
      ;
LAB_0010bf7f:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,pcVar26);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,
                 "} gl_out[];patch out float gl_TessLevelOuter[4];patch out float gl_TessLevelInner[2];\n"
                );
LAB_0010bf96:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,"out int gl_ViewportIndex;out int gl_Layer;\n");
      if ((bVar9) || (bVar8)) {
LAB_0010a34f:
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_270,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      }
      pbVar18 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0x80);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,
                 "in int gl_PatchVerticesIn;in int gl_PrimitiveID;in vec3 gl_TessCoord;patch in float gl_TessLevelOuter[4];patch in float gl_TessLevelInner[2];out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];"
                );
      if ((bVar5) && (bVar19)) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar18,
               "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
              );
      }
      if (param_1 < 0x1c2) {
LAB_0010ba01:
        local_288 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                    (this + 0x80);
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(local_288,"};\n");
        if ((0x199 < param_1) &&
           (std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            append(local_288,"out int gl_ViewportIndex;out int gl_Layer;\n"), 0x1ad < param_1)) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(local_288,"out int  gl_ViewportMask[];");
        }
        goto LAB_0010ba1e;
      }
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"float gl_CullDistance[];");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"};\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"out int gl_ViewportIndex;out int gl_Layer;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,"out int  gl_ViewportMask[];");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,
                 "out vec4 gl_SecondaryPositionNV;out int  gl_SecondaryViewportMaskNV[];out vec4 gl_PositionPerViewNV[];out int  gl_ViewportMaskPerViewNV[];"
                );
      if (!bVar9) goto LAB_0010ba29;
LAB_0010a404:
      local_288 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0x80);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_288,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4  gl_FragCoord;bool  gl_FrontFacing;float gl_FragDepth;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec2 gl_PointCoord;");
LAB_0010a433:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"out int gl_FragStencilRefARB;");
      iVar23 = *param_4;
      bVar37 = param_1 == 0x8c;
      if (iVar23 != 0 || !bVar37) goto LAB_0010b622;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4 gl_FragColor;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"in float gl_ClipDistance[];");
      bVar37 = iVar23 == 0 && bVar37;
LAB_0010ce05:
      if ((*param_4 != 0) || (!bVar37)) {
LAB_0010baa2:
        if (param_3 != 4) goto LAB_0010baad;
        if (0x95 < param_1) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,
                 "in gl_PerFragment {in float gl_FogFragCoord;in vec4  gl_TexCoord[];in vec4  gl_Color;in vec4  gl_SecondaryColor;};"
                );
          goto LAB_0010b648;
        }
      }
LAB_0010c4c7:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "in float gl_FogFragCoord;in vec4  gl_TexCoord[];in vec4  gl_Color;in vec4  gl_SecondaryColor;"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "flat in  int  gl_SampleID;     in  vec2 gl_SamplePosition;     out int  gl_SampleMask[];"
                );
      if (*param_4 == 0) goto LAB_0010c4f0;
LAB_0010badf:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"\n");
      goto LAB_0010baec;
    }
    if (0x1ad < param_1) {
      pcVar26 = "int  gl_ViewportMask[];";
      goto LAB_0010bf7f;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,
               "} gl_out[];patch out float gl_TessLevelOuter[4];patch out float gl_TessLevelInner[2];\n"
              );
    if (0x199 < param_1) goto LAB_0010bf96;
    if (!bVar9) {
      if (!bVar8) goto LAB_0010b9bc;
      goto LAB_0010a34f;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
LAB_0010b9bc:
    pbVar18 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
              (this + 0x80);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,
               "in int gl_PatchVerticesIn;in int gl_PrimitiveID;in vec3 gl_TessCoord;patch in float gl_TessLevelOuter[4];patch in float gl_TessLevelInner[2];out gl_PerVertex {vec4 gl_Position;float gl_PointSize;float gl_ClipDistance[];"
              );
    if ((bVar5) && (bVar19)) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar18,
                 "vec4 gl_ClipVertex;vec4 gl_FrontColor;vec4 gl_BackColor;vec4 gl_FrontSecondaryColor;vec4 gl_BackSecondaryColor;vec4 gl_TexCoord[];float gl_FogFragCoord;"
                );
      goto LAB_0010ba01;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar18,"};\n");
LAB_0010ba1e:
    if (bVar9) goto LAB_0010a404;
LAB_0010ba29:
    local_288 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0x80);
    if (bVar8) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_288,"in highp int gl_DeviceIndex;in highp int gl_ViewIndex;\n");
      goto LAB_0010ba43;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"vec4  gl_FragCoord;bool  gl_FrontFacing;float gl_FragDepth;");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"vec2 gl_PointCoord;");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"out int gl_FragStencilRefARB;");
    bVar37 = false;
LAB_0010b622:
    if (param_3 == 4) {
LAB_0010cdde:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4 gl_FragColor;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"in float gl_ClipDistance[];");
      goto LAB_0010ce05;
    }
    if (param_1 < 0x1a4) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"vec4 gl_FragColor;");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"in float gl_ClipDistance[];");
      if ((*param_4 == 0) && (bVar37)) goto LAB_0010c4c7;
LAB_0010baad:
      if (param_1 < 0x96) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "flat in  int  gl_SampleID;     in  vec2 gl_SamplePosition;     out int  gl_SampleMask[];"
              );
        if (*param_4 == 0) {
          std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
          append(pbVar13,"uniform int gl_NumSamples;");
        }
        goto LAB_0010badf;
      }
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"in float gl_ClipDistance[];");
    }
LAB_0010b648:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"flat in int gl_PrimitiveID;");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "flat in  int  gl_SampleID;     in  vec2 gl_SamplePosition;     out int  gl_SampleMask[];"
              );
    if (*param_4 == 0) {
LAB_0010c4f0:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"uniform int gl_NumSamples;");
    }
    if (param_1 < 400) goto LAB_0010badf;
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"flat in  int  gl_SampleMaskIn[];");
    if (0x1ad < param_1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,"flat in int gl_Layer;flat in int gl_ViewportIndex;");
      pcVar26 = "in bool gl_FragFullyCoveredNV;";
      if (0x1c1 < param_1) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"in float gl_CullDistance[];bool gl_HelperInvocation;");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in ivec2 gl_FragSizeEXT;flat in int   gl_FragInvocationCountEXT;");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "in vec2 gl_BaryCoordNoPerspAMD;in vec2 gl_BaryCoordNoPerspCentroidAMD;in vec2 gl_BaryCoordNoPerspSampleAMD;in vec2 gl_BaryCoordSmoothAMD;in vec2 gl_BaryCoordSmoothCentroidAMD;in vec2 gl_BaryCoordSmoothSampleAMD;in vec3 gl_BaryCoordPullModelAMD;"
              );
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"in bool gl_FragFullyCoveredNV;");
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,
               "flat in ivec2 gl_FragmentSizeNV;flat in int   gl_InvocationsPerPixelNV;in vec3 gl_BaryCoordNV;in vec3 gl_BaryCoordNoPerspNV;in vec3 gl_BaryCoordEXT;in vec3 gl_BaryCoordNoPerspEXT;"
              );
        pcVar26 = "flat in int gl_ShadingRateEXT;";
      }
      goto LAB_0010c7e7;
    }
LAB_0010b698:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"\n");
    add2ndGenerationSamplingImaging(this,param_1,param_3,param_4);
    if (!bVar9) {
      if (bVar8) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        append(pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
        goto LAB_0010b6db;
      }
      goto LAB_0010c89f;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"flat in highp int gl_DeviceIndex;flat in highp int gl_ViewIndex;\n");
LAB_0010c8cd:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,"flat in highp uint gl_ViewID_OVR;\n");
joined_r0x0010af9a:
    if (bVar4) {
LAB_0010afa0:
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (this_01,
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_270,
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x80),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xa8),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0xf8),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (pbVar13,
                 "uniform uint gl_SubGroupSizeARB;flat in uint     gl_SubGroupInvocationARB;flat in uint64_t gl_SubGroupEqMaskARB;flat in uint64_t gl_SubGroupGeMaskARB;flat in uint64_t gl_SubGroupGtMaskARB;flat in uint64_t gl_SubGroupLeMaskARB;flat in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x238),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x210),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x120),
                 "uniform volatile uint gl_SubGroupSizeARB;in volatile uint     gl_SubGroupInvocationARB;in volatile uint64_t gl_SubGroupEqMaskARB;in volatile uint64_t gl_SubGroupGeMaskARB;in volatile uint64_t gl_SubGroupGtMaskARB;in volatile uint64_t gl_SubGroupLeMaskARB;in volatile uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x148),
                 "uniform volatile uint gl_SubGroupSizeARB;in volatile uint     gl_SubGroupInvocationARB;in volatile uint64_t gl_SubGroupEqMaskARB;in volatile uint64_t gl_SubGroupGeMaskARB;in volatile uint64_t gl_SubGroupGtMaskARB;in volatile uint64_t gl_SubGroupLeMaskARB;in volatile uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x170),
                 "uniform uint gl_SubGroupSizeARB;in uint     gl_SubGroupInvocationARB;in uint64_t gl_SubGroupEqMaskARB;in uint64_t gl_SubGroupGeMaskARB;in uint64_t gl_SubGroupGtMaskARB;in uint64_t gl_SubGroupLeMaskARB;in uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x198),
                 "uniform volatile uint gl_SubGroupSizeARB;in volatile uint     gl_SubGroupInvocationARB;in volatile uint64_t gl_SubGroupEqMaskARB;in volatile uint64_t gl_SubGroupGeMaskARB;in volatile uint64_t gl_SubGroupGtMaskARB;in volatile uint64_t gl_SubGroupLeMaskARB;in volatile uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1c0),
                 "uniform volatile uint gl_SubGroupSizeARB;in volatile uint     gl_SubGroupInvocationARB;in volatile uint64_t gl_SubGroupEqMaskARB;in volatile uint64_t gl_SubGroupGeMaskARB;in volatile uint64_t gl_SubGroupGtMaskARB;in volatile uint64_t gl_SubGroupLeMaskARB;in volatile uint64_t gl_SubGroupLtMaskARB;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1e8),
                 "uniform volatile uint gl_SubGroupSizeARB;in volatile uint     gl_SubGroupInvocationARB;in volatile uint64_t gl_SubGroupEqMaskARB;in volatile uint64_t gl_SubGroupGeMaskARB;in volatile uint64_t gl_SubGroupGtMaskARB;in volatile uint64_t gl_SubGroupLeMaskARB;in volatile uint64_t gl_SubGroupLtMaskARB;\n"
                );
    }
LAB_0010b12c:
    local_278 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0x170);
    local_280 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xf8);
    local_288 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0x80);
    local_298 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (this + 0xa8);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (this_01,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_270,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_288,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_298,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_280,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_280,"in highp   uint  gl_NumSubgroups;in highp   uint  gl_SubgroupID;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (pbVar13,
               "flat in mediump uint  gl_SubgroupSize;flat in mediump uint  gl_SubgroupInvocationID;flat in highp   uvec4 gl_SubgroupEqMask;flat in highp   uvec4 gl_SubgroupGeMask;flat in highp   uvec4 gl_SubgroupGtMask;flat in highp   uvec4 gl_SubgroupLeMask;flat in highp   uvec4 gl_SubgroupLtMask;flat in highp   uint  gl_WarpsPerSMNV;flat in highp   uint  gl_SMCountNV;flat in highp   uint  gl_WarpIDNV;flat in highp   uint  gl_SMIDNV;flat in highp   uint  gl_CoreIDARM;flat in highp   uint  gl_CoreCountARM;flat in highp   uint  gl_CoreMaxIDARM;flat in highp   uint  gl_WarpIDARM;flat in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x238),"in highp   uint  gl_NumSubgroups;in highp   uint  gl_SubgroupID;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x210),
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x210),"in highp   uint  gl_NumSubgroups;in highp   uint  gl_SubgroupID;\n");
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x120),
               "in mediump volatile uint  gl_SubgroupSize;in mediump volatile uint  gl_SubgroupInvocationID;in highp   volatile uvec4 gl_SubgroupEqMask;in highp   volatile uvec4 gl_SubgroupGeMask;in highp   volatile uvec4 gl_SubgroupGtMask;in highp   volatile uvec4 gl_SubgroupLeMask;in highp   volatile uvec4 gl_SubgroupLtMask;in highp    uint  gl_WarpsPerSMNV;in highp    uint  gl_SMCountNV;in highp volatile uint  gl_WarpIDNV;in highp volatile uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x148),
               "in mediump volatile uint  gl_SubgroupSize;in mediump volatile uint  gl_SubgroupInvocationID;in highp   volatile uvec4 gl_SubgroupEqMask;in highp   volatile uvec4 gl_SubgroupGeMask;in highp   volatile uvec4 gl_SubgroupGtMask;in highp   volatile uvec4 gl_SubgroupLeMask;in highp   volatile uvec4 gl_SubgroupLtMask;in highp    uint  gl_WarpsPerSMNV;in highp    uint  gl_SMCountNV;in highp volatile uint  gl_WarpIDNV;in highp volatile uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              (local_278,
               "in mediump uint  gl_SubgroupSize;in mediump uint  gl_SubgroupInvocationID;in highp   uvec4 gl_SubgroupEqMask;in highp   uvec4 gl_SubgroupGeMask;in highp   uvec4 gl_SubgroupGtMask;in highp   uvec4 gl_SubgroupLeMask;in highp   uvec4 gl_SubgroupLtMask;in highp   uint  gl_WarpsPerSMNV;in highp   uint  gl_SMCountNV;in highp   uint  gl_WarpIDNV;in highp   uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x198),
               "in mediump volatile uint  gl_SubgroupSize;in mediump volatile uint  gl_SubgroupInvocationID;in highp   volatile uvec4 gl_SubgroupEqMask;in highp   volatile uvec4 gl_SubgroupGeMask;in highp   volatile uvec4 gl_SubgroupGtMask;in highp   volatile uvec4 gl_SubgroupLeMask;in highp   volatile uvec4 gl_SubgroupLtMask;in highp    uint  gl_WarpsPerSMNV;in highp    uint  gl_SMCountNV;in highp volatile uint  gl_WarpIDNV;in highp volatile uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x1c0),
               "in mediump volatile uint  gl_SubgroupSize;in mediump volatile uint  gl_SubgroupInvocationID;in highp   volatile uvec4 gl_SubgroupEqMask;in highp   volatile uvec4 gl_SubgroupGeMask;in highp   volatile uvec4 gl_SubgroupGtMask;in highp   volatile uvec4 gl_SubgroupLeMask;in highp   volatile uvec4 gl_SubgroupLtMask;in highp    uint  gl_WarpsPerSMNV;in highp    uint  gl_SMCountNV;in highp volatile uint  gl_WarpIDNV;in highp volatile uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
               (this + 0x1e8),
               "in mediump volatile uint  gl_SubgroupSize;in mediump volatile uint  gl_SubgroupInvocationID;in highp   volatile uvec4 gl_SubgroupEqMask;in highp   volatile uvec4 gl_SubgroupGeMask;in highp   volatile uvec4 gl_SubgroupGtMask;in highp   volatile uvec4 gl_SubgroupLeMask;in highp   volatile uvec4 gl_SubgroupLtMask;in highp    uint  gl_WarpsPerSMNV;in highp    uint  gl_SMCountNV;in highp volatile uint  gl_WarpIDNV;in highp volatile uint  gl_SMIDNV;in highp   uint  gl_CoreIDARM;in highp   uint  gl_CoreCountARM;in highp   uint  gl_CoreMaxIDARM;in highp   uint  gl_WarpIDARM;in highp   uint  gl_WarpMaxIDARM;\n"
              );
    if (bVar10) {
LAB_0010b73d:
      local_278 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0x170);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "const uint gl_RayQueryCandidateIntersectionEXT = 0U;const uint gl_RayQueryCommittedIntersectionEXT = 1U;const uint gl_RayQueryCommittedIntersectionNoneEXT = 0U;const uint gl_RayQueryCommittedIntersectionTriangleEXT = 1U;const uint gl_RayQueryCommittedIntersectionGeneratedEXT = 2U;const uint gl_RayQueryCandidateIntersectionTriangleEXT = 0U;const uint gl_RayQueryCandidateIntersectionAABBEXT = 1U;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_2a8,
                 "const uint gl_RayFlagsNoneNV = 0U;const uint gl_RayFlagsNoneEXT = 0U;const uint gl_RayFlagsOpaqueNV = 1U;const uint gl_RayFlagsOpaqueEXT = 1U;const uint gl_RayFlagsNoOpaqueNV = 2U;const uint gl_RayFlagsNoOpaqueEXT = 2U;const uint gl_RayFlagsTerminateOnFirstHitNV = 4U;const uint gl_RayFlagsTerminateOnFirstHitEXT = 4U;const uint gl_RayFlagsSkipClosestHitShaderNV = 8U;const uint gl_RayFlagsSkipClosestHitShaderEXT = 8U;const uint gl_RayFlagsCullBackFacingTrianglesNV = 16U;const uint gl_RayFlagsCullBackFacingTrianglesEXT = 16U;const uint gl_RayFlagsCullFrontFacingTrianglesNV = 32U;const uint gl_RayFlagsCullFrontFacingTrianglesEXT = 32U;const uint gl_RayFlagsCullOpaqueNV = 64U;const uint gl_RayFlagsCullOpaqueEXT = 64U;const uint gl_RayFlagsCullNoOpaqueNV = 128U;const uint gl_RayFlagsCullNoOpaqueEXT = 128U;const uint gl_RayFlagsSkipTrianglesEXT = 256U;const uint gl_RayFlagsSkipAABBEXT = 512U;const uint gl_RayFlagsForceOpacityMicromap2StateEXT = 1024U;const uint gl_HitKindFrontFacingTriangleEXT = 254U;const uint gl_HitKindBackFacingTriangleEXT = 255U;in    uint gl_HitKindFrontFacingMicroTriangleNV;in    uint gl_HitKindBackFacingMicroTriangleNV;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x120),
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x148),
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;in     int   gl_PrimitiveID;in     int   gl_InstanceID;in     int   gl_InstanceCustomIndexNV;in     int   gl_InstanceCustomIndexEXT;in     int   gl_GeometryIndexEXT;in    vec3   gl_WorldRayOriginNV;in    vec3   gl_WorldRayOriginEXT;in    vec3   gl_WorldRayDirectionNV;in    vec3   gl_WorldRayDirectionEXT;in    vec3   gl_ObjectRayOriginNV;in    vec3   gl_ObjectRayOriginEXT;in    vec3   gl_ObjectRayDirectionNV;in    vec3   gl_ObjectRayDirectionEXT;in    float  gl_RayTminNV;in    float  gl_RayTminEXT;in    float  gl_RayTmaxNV;in volatile float gl_RayTmaxEXT;in    mat4x3 gl_ObjectToWorldNV;in    mat4x3 gl_ObjectToWorldEXT;in    mat3x4 gl_ObjectToWorld3x4EXT;in    mat4x3 gl_WorldToObjectNV;in    mat4x3 gl_WorldToObjectEXT;in    mat3x4 gl_WorldToObject3x4EXT;in    uint   gl_IncomingRayFlagsNV;in    uint   gl_IncomingRayFlagsEXT;in    float  gl_CurrentRayTimeNV;in    uint   gl_CullMaskEXT;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_278,
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;in     int   gl_PrimitiveID;in     int   gl_InstanceID;in     int   gl_InstanceCustomIndexNV;in     int   gl_InstanceCustomIndexEXT;in     int   gl_GeometryIndexEXT;in    vec3   gl_WorldRayOriginNV;in    vec3   gl_WorldRayOriginEXT;in    vec3   gl_WorldRayDirectionNV;in    vec3   gl_WorldRayDirectionEXT;in    vec3   gl_ObjectRayOriginNV;in    vec3   gl_ObjectRayOriginEXT;in    vec3   gl_ObjectRayDirectionNV;in    vec3   gl_ObjectRayDirectionEXT;in    float  gl_RayTminNV;in    float  gl_RayTminEXT;in    float  gl_RayTmaxNV;in    float  gl_RayTmaxEXT;in    float  gl_HitTNV;in    float  gl_HitTEXT;in    uint   gl_HitKindNV;in    uint   gl_HitKindEXT;in    mat4x3 gl_ObjectToWorldNV;in    mat4x3 gl_ObjectToWorldEXT;in    mat3x4 gl_ObjectToWorld3x4EXT;in    mat4x3 gl_WorldToObjectNV;in    mat4x3 gl_WorldToObjectEXT;in    mat3x4 gl_WorldToObject3x4EXT;in    uint   gl_IncomingRayFlagsNV;in    uint   gl_IncomingRayFlagsEXT;in    float  gl_CurrentRayTimeNV;in    uint   gl_CullMaskEXT;in    vec3   gl_HitTriangleVertexPositionsEXT[3];in    vec3   gl_HitMicroTriangleVertexPositionsNV[3];in    vec2   gl_HitMicroTriangleVertexBarycentricsNV[3];\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x198),
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;in     int   gl_PrimitiveID;in     int   gl_InstanceID;in     int   gl_InstanceCustomIndexNV;in     int   gl_InstanceCustomIndexEXT;in     int   gl_GeometryIndexEXT;in    vec3   gl_WorldRayOriginNV;in    vec3   gl_WorldRayOriginEXT;in    vec3   gl_WorldRayDirectionNV;in    vec3   gl_WorldRayDirectionEXT;in    vec3   gl_ObjectRayOriginNV;in    vec3   gl_ObjectRayOriginEXT;in    vec3   gl_ObjectRayDirectionNV;in    vec3   gl_ObjectRayDirectionEXT;in    float  gl_RayTminNV;in    float  gl_RayTminEXT;in    float  gl_RayTmaxNV;in    float  gl_RayTmaxEXT;in    float  gl_HitTNV;in    float  gl_HitTEXT;in    uint   gl_HitKindNV;in    uint   gl_HitKindEXT;in    mat4x3 gl_ObjectToWorldNV;in    mat4x3 gl_ObjectToWorldEXT;in    mat3x4 gl_ObjectToWorld3x4EXT;in    mat4x3 gl_WorldToObjectNV;in    mat4x3 gl_WorldToObjectEXT;in    mat3x4 gl_WorldToObject3x4EXT;in    uint   gl_IncomingRayFlagsNV;in    uint   gl_IncomingRayFlagsEXT;in    float  gl_CurrentRayTimeNV;in    uint   gl_CullMaskEXT;in    vec3   gl_HitTriangleVertexPositionsEXT[3];in    vec3   gl_HitMicroTriangleVertexPositionsNV[3];in    vec2   gl_HitMicroTriangleVertexBarycentricsNV[3];\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1c0),
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;in    vec3   gl_WorldRayOriginNV;in    vec3   gl_WorldRayOriginEXT;in    vec3   gl_WorldRayDirectionNV;in    vec3   gl_WorldRayDirectionEXT;in    vec3   gl_ObjectRayOriginNV;in    vec3   gl_ObjectRayDirectionNV;in    float  gl_RayTminNV;in    float  gl_RayTminEXT;in    float  gl_RayTmaxNV;in    float  gl_RayTmaxEXT;in    uint   gl_IncomingRayFlagsNV;in    uint   gl_IncomingRayFlagsEXT;in    float  gl_CurrentRayTimeNV;in    uint   gl_CullMaskEXT;\n"
                );
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1e8),
                 "in    uvec3  gl_LaunchIDNV;in    uvec3  gl_LaunchIDEXT;in    uvec3  gl_LaunchSizeNV;in    uvec3  gl_LaunchSizeEXT;\n"
                );
LAB_0010b811:
      local_278 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                  (this + 0x170);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x120),"in highp int gl_DeviceIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x148),"in highp int gl_DeviceIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                (local_278,"in highp int gl_DeviceIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x198),"in highp int gl_DeviceIndex;\n");
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 (this + 0x1c0),"in highp int gl_DeviceIndex;\n");
    }
    else if (bVar9) goto LAB_0010b811;
    if ((bVar8) || (bVar7)) goto LAB_0010a973;
    if (!bVar4) goto LAB_0010a94a;
LAB_0010aa96:
    pTVar32 = this + 0x48;
    do {
      uVar6 = _UNK_0014eb88;
      uVar20 = *(ulong *)(pTVar32 + -8);
      pbVar13 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                (pTVar32 + -0x18);
      if (0x7fffffffffffffff - uVar20 < 0x40) {
LAB_001099d7:
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      if (*(TBuiltIns **)(pTVar32 + -0x10) == pTVar32) {
        uVar22 = 0xf;
      }
      else {
        uVar22 = *(ulong *)pTVar32;
      }
      if (uVar22 < uVar20 + 0x40) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(pbVar13,uVar20,0,
                  "const highp int gl_ShadingRateFlag2VerticalPixelsEXT       = 1;\n",0x40);
      }
      else {
        pTVar17 = *(TBuiltIns **)(pTVar32 + -0x10) + uVar20;
        *(undefined8 *)pTVar17 = __LC496;
        *(undefined8 *)(pTVar17 + 8) = uVar6;
        uVar6 = _UNK_0014eb98;
        *(undefined8 *)(pTVar17 + 0x10) = __LC497;
        *(undefined8 *)(pTVar17 + 0x18) = uVar6;
        uVar6 = _UNK_0014eba8;
        *(undefined8 *)(pTVar17 + 0x20) = __LC498;
        *(undefined8 *)(pTVar17 + 0x28) = uVar6;
        uVar6 = _UNK_0014ebb8;
        *(undefined8 *)(pTVar17 + 0x30) = __LC499;
        *(undefined8 *)(pTVar17 + 0x38) = uVar6;
      }
      *(ulong *)(pTVar32 + -8) = uVar20 + 0x40;
      *(undefined1 *)(*(ulong *)(pTVar32 + -0x10) + 0x40 + uVar20) = 0;
      uVar6 = _UNK_0014eb88;
      uVar20 = *(ulong *)(pTVar32 + -8);
      if (0x7fffffffffffffff - uVar20 < 0x40) goto LAB_001099d7;
      if (*(TBuiltIns **)(pTVar32 + -0x10) == pTVar32) {
        uVar22 = 0xf;
      }
      else {
        uVar22 = *(ulong *)pTVar32;
      }
      if (uVar22 < uVar20 + 0x40) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(pbVar13,uVar20,0,
                  "const highp int gl_ShadingRateFlag4VerticalPixelsEXT       = 2;\n",0x40);
      }
      else {
        pTVar17 = *(TBuiltIns **)(pTVar32 + -0x10) + uVar20;
        *(undefined8 *)pTVar17 = __LC496;
        *(undefined8 *)(pTVar17 + 8) = uVar6;
        uVar6 = _UNK_0014eb98;
        *(undefined8 *)(pTVar17 + 0x10) = __LC497;
        *(undefined8 *)(pTVar17 + 0x18) = uVar6;
        uVar6 = _UNK_0014ebc8;
        *(undefined8 *)(pTVar17 + 0x20) = __LC500;
        *(undefined8 *)(pTVar17 + 0x28) = uVar6;
        uVar6 = _UNK_0014ebd8;
        *(undefined8 *)(pTVar17 + 0x30) = __LC501;
        *(undefined8 *)(pTVar17 + 0x38) = uVar6;
      }
      *(ulong *)(pTVar32 + -8) = uVar20 + 0x40;
      *(undefined1 *)(*(ulong *)(pTVar32 + -0x10) + 0x40 + uVar20) = 0;
      uVar6 = _UNK_0014eb88;
      uVar20 = *(ulong *)(pTVar32 + -8);
      if (0x7fffffffffffffff - uVar20 < 0x40) goto LAB_001099d7;
      if (*(TBuiltIns **)(pTVar32 + -0x10) == pTVar32) {
        uVar22 = 0xf;
      }
      else {
        uVar22 = *(ulong *)pTVar32;
      }
      if (uVar22 < uVar20 + 0x40) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(pbVar13,uVar20,0,
                  "const highp int gl_ShadingRateFlag2HorizontalPixelsEXT     = 4;\n",0x40);
      }
      else {
        pTVar17 = *(TBuiltIns **)(pTVar32 + -0x10) + uVar20;
        *(undefined8 *)pTVar17 = __LC496;
        *(undefined8 *)(pTVar17 + 8) = uVar6;
        uVar6 = _UNK_0014eb98;
        *(undefined8 *)(pTVar17 + 0x10) = __LC497;
        *(undefined8 *)(pTVar17 + 0x18) = uVar6;
        uVar6 = _UNK_0014ebe8;
        *(undefined8 *)(pTVar17 + 0x20) = __LC502;
        *(undefined8 *)(pTVar17 + 0x28) = uVar6;
        uVar6 = _UNK_0014ebf8;
        *(undefined8 *)(pTVar17 + 0x30) = __LC503;
        *(undefined8 *)(pTVar17 + 0x38) = uVar6;
      }
      *(ulong *)(pTVar32 + -8) = uVar20 + 0x40;
      *(undefined1 *)(*(ulong *)(pTVar32 + -0x10) + 0x40 + uVar20) = 0;
      uVar6 = _UNK_0014eb88;
      uVar20 = *(ulong *)(pTVar32 + -8);
      if (0x7fffffffffffffff - uVar20 < 0x40) goto LAB_001099d7;
      if (*(TBuiltIns **)(pTVar32 + -0x10) == pTVar32) {
        uVar22 = 0xf;
      }
      else {
        uVar22 = *(ulong *)pTVar32;
      }
      if (uVar22 < uVar20 + 0x40) {
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_mutate(pbVar13,uVar20,0,
                  "const highp int gl_ShadingRateFlag4HorizontalPixelsEXT     = 8;\n",0x40);
      }
      else {
        pTVar17 = *(TBuiltIns **)(pTVar32 + -0x10) + uVar20;
        *(undefined8 *)pTVar17 = __LC496;
        *(undefined8 *)(pTVar17 + 8) = uVar6;
        uVar6 = _UNK_0014eb98;
        *(undefined8 *)(pTVar17 + 0x10) = __LC497;
        *(undefined8 *)(pTVar17 + 0x18) = uVar6;
        uVar6 = _UNK_0014ec08;
        *(undefined8 *)(pTVar17 + 0x20) = __LC504;
        *(undefined8 *)(pTVar17 + 0x28) = uVar6;
        uVar6 = _UNK_0014ec18;
        *(undefined8 *)(pTVar17 + 0x30) = __LC505;
        *(undefined8 *)(pTVar17 + 0x38) = uVar6;
      }
      pTVar17 = pTVar32 + -0x10;
      *(ulong *)(pTVar32 + -8) = uVar20 + 0x40;
      pTVar32 = pTVar32 + 0x28;
      *(undefined1 *)(*(ulong *)pTVar17 + 0x40 + uVar20) = 0;
    } while (this + 0x278 != pTVar32);
    if (bVar8) goto LAB_0010ad51;
  }
  if (!bVar7) {
LAB_0010a94a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010ad51:
  uVar29 = 2;
  local_210 = _LC475;
LAB_0010ad78:
  bVar38 = 0;
  do {
    uVar20 = 1;
LAB_0010ad98:
    do {
      cVar28 = (char)(uVar29 & 1);
      if (((uint)uVar20 & 0xfffffffb) == 1) {
        if (bVar11) {
          do {
            iVar23 = (int)uVar20;
            uVar24 = iVar23 + 1;
            uVar20 = (ulong)uVar24;
            if ((uVar24 & 0xfffffffb) != 1) break;
            uVar24 = iVar23 + 2;
            uVar20 = (ulong)uVar24;
          } while ((uVar24 & 0xfffffffb) == 1);
        }
        else {
          do {
            iVar23 = (int)uVar20;
            if ((iVar23 == 5) && (bVar38 != 0)) {
              iVar23 = 6;
              goto LAB_0010addb;
            }
            if ((iVar23 == 2) || (cVar28 == '\0')) goto LAB_0010ae30;
            uVar20 = (ulong)(iVar23 + 1U);
          } while ((iVar23 + 1U & 0xfffffffb) == 1);
        }
      }
      iVar23 = (int)uVar20;
      if ((0x48UL >> (uVar20 & 0x3f) & 1) != 0) {
LAB_0010addb:
        if (bVar38 != 0) {
          uVar20 = (ulong)(iVar23 + 1U);
          if (iVar23 + 1U == 7) goto LAB_0010af17;
          goto LAB_0010ad98;
        }
      }
      if ((iVar23 == 2) || (cVar28 == '\0')) {
LAB_0010ae30:
        local_288._0_2_ = (ushort)bVar38;
        puVar25 = &local_210;
        do {
          uVar20 = local_218;
          uVar1 = *(undefined4 *)puVar25;
          puVar25 = (undefined8 *)((long)puVar25 + 4);
          local_218._2_2_ = SUB82(uVar20,2);
          uVar12 = local_218._2_2_ & 0x9fc0;
          local_218._4_4_ = SUB84(uVar20,4);
          local_218._0_4_ =
               CONCAT22(uVar12 | (ushort)((uVar29 & 1) << 2) | (ushort)local_288 | 8,
                        CONCAT11((char)iVar23,(char)uVar1));
          TSampler::getString_abi_cxx11_();
          addQueryFunctions(this,local_218 & 0xffffffff,&local_178,param_1,param_3);
          addImageFunctions(this,local_218 & 0xffffffff,&local_178,param_1,param_3);
        } while (puVar25 != &local_208);
      }
      uVar20 = (ulong)(iVar23 + 1U);
    } while (iVar23 + 1U != 7);
    if (bVar38 != 0) break;
    bVar38 = 1;
  } while( true );
LAB_0010af17:
  if (uVar29 == 1) goto LAB_0010a94a;
  uVar29 = 1;
  goto LAB_0010ad78;
}



/* glslang::TBuiltIns::identifyBuiltIns(int, EProfile, glslang::SpvVersion const&, EShLanguage,
   glslang::TSymbolTable&, TBuiltInResource const&) */

void __thiscall
glslang::TBuiltIns::identifyBuiltIns
          (undefined8 param_1_00,int param_1,int param_3,int *param_4,uint param_5,
          TSymbolTable *param_6,long param_7)

{
  TSymbolTable TVar1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *this;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  TVariable *this_00;
  basic_string *pbVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var16;
  size_t sVar17;
  ulong uVar18;
  char extraout_DL;
  TVariable *pTVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 uStack_220;
  undefined **local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  byte local_1c8;
  undefined8 local_1c4;
  undefined1 local_1bc;
  uint7 uStack_1bb;
  undefined1 uStack_1b4;
  undefined3 uStack_1b3;
  undefined5 local_1b0;
  undefined3 uStack_1ab;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 *local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  uint local_168;
  undefined1 local_160 [16];
  undefined8 local_148;
  undefined1 *local_140;
  ulong local_138;
  undefined1 local_130 [24];
  ulong local_118;
  ulong *local_110;
  ulong local_108;
  ulong local_100 [2];
  TVariable *local_f0;
  ulong local_e8;
  ulong *local_e0;
  ulong local_d8;
  ulong local_d0 [2];
  TVariable *local_c0;
  ulong local_b8;
  ulong *local_b0;
  ulong local_a8;
  ulong local_a0 [2];
  TVariable *local_90;
  ulong local_88;
  ulong *local_80;
  ulong local_78;
  ulong local_70 [2];
  undefined8 *local_60;
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar21 = param_3 != 8;
  if ((param_1 < 0x1ae) || (!bVar21)) {
    if ((0x81 < param_1) && (bVar21)) {
      if (0x1a3 < param_1) goto LAB_0010cf5e;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MinProgramTexelOffset",1,&E_GL_ARB_shading_language_420pack);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxProgramTexelOffset",1,&E_GL_ARB_shading_language_420pack);
    }
    if ((param_1 - 0x96U < 0x104) && (bVar21)) {
      TSymbolTable::setVariableExtensions(param_6,"gl_MaxViewports",1,&E_GL_ARB_viewport_array);
      if (2 < param_5) {
        if (param_5 != 4) goto LAB_0010d19c;
LAB_0010cfe8:
        if (param_1 < 0x83) goto LAB_0010cf84;
        if ((*param_4 != 0) || (param_1 != 0x8c)) goto LAB_0010cf72;
        bVar5 = 0;
LAB_0010d2ec:
        local_1c8 = local_1c8 & 0xf0;
        local_160 = (undefined1  [16])0x0;
        local_1e8 = &PTR__TType_0014cc70;
        local_1e0 = local_1e0 & 0xf8000000 | 0x401;
        local_1a4 = 0xfffff800;
        local_190 = 0;
        local_180 = (undefined1  [16])0x0;
        local_1bc = 0xff;
        local_168 = local_168 & 0x9fc00000;
        local_1a8 = 0;
        local_170 = 0;
        uStack_1ab = 0;
        uStack_1bb = uStack_1bb & 0xffc000 | 0xffffffff001fcf;
        local_19c = 0xffffffff;
        uStack_1b4 = 0xff;
        uVar8 = (ulong)(CONCAT43((int)local_1b0,uStack_1b3) & 0xfe07ff00ffffff) | 0x1ffffff7fffff;
        uStack_1b3 = (undefined3)uVar8;
        local_1b0 = (undefined5)(uVar8 >> 0x18);
        local_1d8 = 0;
        local_1d0 = (ulong)bVar5 << 0x19 | 0x1c | local_1d0 & 0x8000000400000000;
        local_1c4 = 0xffffffffffffffff;
        local_198 = 0;
        uVar8 = glslang::GetThreadPoolAllocator();
        puVar9 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar8);
        uVar7 = *(undefined4 *)(param_7 + 0x2c);
        *(undefined2 *)((long)puVar9 + 0x14) = 1;
        *puVar9 = &PTR__TSmallArrayVector_0014cc50;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        uVar8 = glslang::GetThreadPoolAllocator();
        puVar10 = (ulong *)glslang::TPoolAllocator::allocate(uVar8);
        uVar8 = glslang::GetThreadPoolAllocator();
        puVar10[1] = 0;
        *puVar10 = uVar8;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar9[1] = puVar10;
        puVar11 = (undefined4 *)glslang::TPoolAllocator::allocate(uVar8);
        *puVar11 = uVar7;
        *(undefined8 *)(puVar11 + 2) = 0;
        puVar10[2] = (ulong)(puVar11 + 4);
        puVar10[3] = (ulong)(puVar11 + 4);
        puVar10[1] = (ulong)puVar11;
        local_188 = puVar9;
        uVar8 = glslang::GetThreadPoolAllocator();
        this_00 = (TVariable *)glslang::TPoolAllocator::allocate(uVar8);
        uVar8 = glslang::GetThreadPoolAllocator();
        pbVar12 = (basic_string *)glslang::TPoolAllocator::allocate(uVar8);
        uVar13 = glslang::GetThreadPoolAllocator();
        *(undefined8 *)pbVar12 = uVar13;
        *(basic_string **)(pbVar12 + 8) = pbVar12 + 0x18;
        std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
        _M_construct<char_const*>(pbVar12,"gl_FragData");
        TVariable::TVariable(this_00,pbVar12,(TType *)&local_1e8,false);
        lVar14 = *(long *)(param_6 + 0x18);
        puVar9 = *(undefined8 **)param_6;
        lVar15 = *(long *)(param_6 + 8);
        TVar1 = param_6[0x21];
        *(long *)(param_6 + 0x18) = lVar14 + 1;
        *(long *)(this_00 + 0x10) = lVar14 + 1;
        if (TVar1 == (TSymbolTable)0x0) {
          iVar20 = (int)(lVar15 - (long)puVar9 >> 3);
          cVar6 = TSymbolTableLevel::hasFunctionName
                            ((TSymbolTableLevel *)puVar9[iVar20 + -1],
                             *(basic_string **)(this_00 + 8));
          if (cVar6 == '\0') goto LAB_0010d53d;
        }
        else {
          iVar20 = (int)(lVar15 - (long)puVar9 >> 3);
LAB_0010d53d:
          if ((param_6[0x20] != (TSymbolTable)0x0) && (iVar20 - 2U < 3)) {
            pbVar12 = *(basic_string **)(this_00 + 8);
            cVar6 = TSymbolTableLevel::hasFunctionName((TSymbolTableLevel *)*puVar9,pbVar12);
            if ((cVar6 != '\0') ||
               ((iVar20 != 2 &&
                (cVar6 = TSymbolTableLevel::hasFunctionName((TSymbolTableLevel *)puVar9[1],pbVar12),
                cVar6 != '\0')))) goto LAB_0010d670;
          }
          this = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                  *)puVar9[iVar20 + -1];
          uStack_220 = 0x10d566;
          local_148 = glslang::GetThreadPoolAllocator();
          local_130[0] = 0;
          lVar14 = *(long *)this_00;
          local_140 = local_130;
          TVar1 = param_6[0x21];
          local_138 = 0;
          if (*(code **)(lVar14 + 0x18) == TSymbol::getName_abi_cxx11_) {
            pbVar12 = *(basic_string **)(this_00 + 8);
          }
          else {
            uStack_220 = 0x10dabd;
            pbVar12 = (basic_string *)(**(code **)(lVar14 + 0x18))(this_00);
            if (local_138 != 0) {
              local_118 = glslang::GetThreadPoolAllocator();
              uVar8 = local_138;
              puVar2 = local_140;
              local_110 = local_100;
              if (local_138 < 0x10) {
                if (local_138 == 1) {
                  local_100[0] = CONCAT71(local_100[0]._1_7_,*local_140);
                }
                else if (local_138 != 0) goto LAB_0010dbd8;
              }
              else {
                if ((long)local_138 < 0) goto LAB_0010dde3;
                local_110 = (ulong *)glslang::TPoolAllocator::allocate(local_118);
                local_100[0] = uVar8;
LAB_0010dbd8:
                memcpy(local_110,puVar2,uVar8);
              }
              local_108 = uVar8;
              *(undefined1 *)((long)local_110 + uVar8) = 0;
              local_f0 = this_00;
              std::
              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
              ::
              _M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>
                        (this,(pair_conflict *)&local_118);
              goto LAB_0010d670;
            }
            lVar14 = *(long *)this_00;
          }
          if (*(long *)(pbVar12 + 0x10) == 0) {
            pTVar19 = this_00;
            if (*(code **)(lVar14 + 0x48) != TVariable::getAsVariable) {
              uStack_220 = 0x10dc72;
              pTVar19 = (TVariable *)(**(code **)(lVar14 + 0x48))();
              lVar14 = *(long *)pTVar19;
            }
            pcVar3 = *(code **)(lVar14 + 0xe0);
            iVar20 = *(int *)(this + 0x60);
            *(int *)(this + 0x60) = iVar20 + 1;
            if (pcVar3 == TVariable::setAnonId) {
              *(int *)(pTVar19 + 0xe8) = iVar20;
            }
            else {
              uStack_220 = 0x10dc62;
              (*pcVar3)();
            }
            lVar14 = *(long *)this_00;
            pTVar19 = this_00;
            if (*(code **)(lVar14 + 0x48) != TVariable::getAsVariable) {
              uStack_220 = 0x10dcb2;
              pTVar19 = (TVariable *)(**(code **)(lVar14 + 0x48))();
              lVar14 = *(long *)pTVar19;
            }
            if (*(code **)(lVar14 + 0xe8) == TVariable::getAnonId) {
              uVar8 = (ulong)*(uint *)(pTVar19 + 0xe8);
            }
            else {
              uStack_220 = 0x10dca2;
              uVar8 = (**(code **)(lVar14 + 0xe8))();
            }
            __snprintf_chk(local_58,0x14,2,0x14,&_LC515,"anon@",uVar8);
            pcVar3 = *(code **)(*(long *)this_00 + 0x20);
            uVar8 = glslang::GetThreadPoolAllocator();
            puVar9 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar8);
            uVar13 = glslang::GetThreadPoolAllocator();
            *puVar9 = uVar13;
            puVar9[1] = puVar9 + 3;
            sVar17 = strlen(local_58);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
            _M_construct<char_const*>(puVar9,local_58,local_58 + sVar17);
            if (pcVar3 == TSymbol::changeName) {
              *(undefined8 **)(this_00 + 8) = puVar9;
            }
            else {
              (*pcVar3)(this_00,puVar9,uStack_220);
            }
            lVar14 = *(long *)this_00;
            pTVar19 = this_00;
            if (*(code **)(lVar14 + 0x48) != TVariable::getAsVariable) {
              pTVar19 = (TVariable *)(**(code **)(lVar14 + 0x48))();
              lVar14 = *(long *)pTVar19;
            }
            if (*(code **)(lVar14 + 0x60) == TVariable::getType) {
              pTVar19 = pTVar19 + 0x28;
            }
            else {
              pTVar19 = (TVariable *)(**(code **)(lVar14 + 0x60))();
            }
            lVar14 = *(long *)(pTVar19 + 0x68);
            if (*(long *)(lVar14 + 8) != *(long *)(lVar14 + 0x10)) {
              uVar8 = 0;
              do {
                uVar18 = glslang::GetThreadPoolAllocator();
                puVar9 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar18);
                lVar15 = *(long *)this_00;
                pTVar19 = this_00;
                if (*(code **)(lVar15 + 0x48) != TVariable::getAsVariable) {
                  pTVar19 = (TVariable *)(**(code **)(lVar15 + 0x48))();
                  lVar15 = *(long *)pTVar19;
                }
                if (*(code **)(lVar15 + 0xe8) == TVariable::getAnonId) {
                  uVar7 = *(undefined4 *)(pTVar19 + 0xe8);
                }
                else {
                  uVar7 = (**(code **)(lVar15 + 0xe8))();
                }
                pTVar19 = this_00;
                if (*(code **)(*(long *)this_00 + 0x48) != TVariable::getAsVariable) {
                  pTVar19 = (TVariable *)(**(code **)(*(long *)this_00 + 0x48))(this_00);
                }
                plVar4 = *(long **)(uVar8 * 0x20 + *(long *)(lVar14 + 8));
                pcVar3 = *(code **)(*plVar4 + 0x30);
                if (pcVar3 == TType::getFieldName_abi_cxx11_) {
                  lVar15 = plVar4[0xe];
                }
                else {
                  lVar15 = (*pcVar3)();
                }
                puVar9[1] = lVar15;
                puVar9[2] = 0;
                puVar9[3] = 0;
                *(undefined1 *)(puVar9 + 4) = 1;
                *puVar9 = &__cxxabiv1::__class_type_info::vtable;
                puVar9[5] = pTVar19;
                *(int *)(puVar9 + 6) = (int)uVar8;
                *(undefined4 *)((long)puVar9 + 0x34) = uVar7;
                local_88 = glslang::GetThreadPoolAllocator();
                puVar2 = *(undefined1 **)(lVar15 + 8);
                uVar18 = *(ulong *)(lVar15 + 0x10);
                local_80 = local_70;
                if (uVar18 < 0x10) {
                  if (uVar18 == 1) {
                    local_70[0] = CONCAT71(local_70[0]._1_7_,*puVar2);
                  }
                  else if (uVar18 != 0) goto LAB_0010da30;
                }
                else {
                  if ((long)uVar18 < 0) goto LAB_0010dde3;
                  local_80 = (ulong *)glslang::TPoolAllocator::allocate(local_88);
                  local_70[0] = uVar18;
LAB_0010da30:
                  memcpy(local_80,puVar2,uVar18);
                }
                *(undefined1 *)((long)local_80 + uVar18) = 0;
                local_78 = uVar18;
                local_60 = puVar9;
                std::
                _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                ::
                _M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>
                          (this,(pair_conflict *)&local_88);
              } while ((extraout_DL != '\0') &&
                      (uVar8 = (ulong)((int)uVar8 + 1),
                      uVar8 < (ulong)(*(long *)(lVar14 + 0x10) - *(long *)(lVar14 + 8) >> 5)));
            }
          }
          else {
            lVar14 = (**(code **)(lVar14 + 0x30))(this_00);
            lVar15 = (**(code **)(*(long *)this_00 + 0x38))(this_00);
            if (lVar15 == 0) {
              local_b8 = glslang::GetThreadPoolAllocator();
              local_b0 = local_a0;
              puVar2 = *(undefined1 **)(lVar14 + 8);
              uVar8 = *(ulong *)(lVar14 + 0x10);
              if (uVar8 < 0x10) {
                if (uVar8 == 1) {
                  local_a0[0] = CONCAT71(local_a0[0]._1_7_,*puVar2);
                }
                else if (uVar8 != 0) goto LAB_0010ddbc;
              }
              else {
                if ((long)uVar8 < 0) {
LAB_0010dde3:
                    /* WARNING: Subroutine does not return */
                  std::__throw_length_error("basic_string::_M_create");
                }
                local_b0 = (ulong *)glslang::TPoolAllocator::allocate(local_b8);
                local_a0[0] = uVar8;
LAB_0010ddbc:
                memcpy(local_b0,puVar2,uVar8);
              }
              *(undefined1 *)((long)local_b0 + uVar8) = 0;
              local_a8 = uVar8;
              local_90 = this_00;
              std::
              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
              ::
              _M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>
                        (this,(pair_conflict *)&local_b8);
            }
            else if ((TVar1 != (TSymbolTable)0x0) ||
                    (p_Var16 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                                *)std::
                                  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                                  ::find(this,pbVar12), this + 0x10 == p_Var16)) {
              local_e8 = glslang::GetThreadPoolAllocator();
              local_e0 = local_d0;
              puVar2 = *(undefined1 **)(lVar14 + 8);
              uVar8 = *(ulong *)(lVar14 + 0x10);
              if (uVar8 < 0x10) {
                if (uVar8 == 1) {
                  local_d0[0] = CONCAT71(local_d0[0]._1_7_,*puVar2);
                }
                else if (uVar8 != 0) goto LAB_0010dd68;
              }
              else {
                if ((long)uVar8 < 0) goto LAB_0010dde3;
                local_e0 = (ulong *)glslang::TPoolAllocator::allocate(local_e8);
                local_d0[0] = uVar8;
LAB_0010dd68:
                memcpy(local_e0,puVar2,uVar8);
              }
              *(undefined1 *)((long)local_e0 + uVar8) = 0;
              local_d8 = uVar8;
              local_c0 = this_00;
              std::
              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
              ::
              _M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>
                        (this,(pair_conflict *)&local_e8);
            }
          }
        }
LAB_0010d670:
        SpecialQualifier("gl_FragData",0x1c,0x42,param_6);
        if (param_3 == 8) goto LAB_0010d221;
        goto LAB_0010d19c;
      }
    }
    else if (2 < param_5) {
      if (param_5 == 4) {
        bVar5 = (param_3 == 8) * '\x02';
        if (param_1 != 100) goto LAB_0010d217;
        goto LAB_0010d2ec;
      }
      goto LAB_0010d19c;
    }
LAB_0010d01a:
    if (param_5 != 0) {
      BuiltInVariable("gl_in","gl_Position",0x1e,param_6);
      BuiltInVariable("gl_in","gl_PointSize",0x1f,param_6);
      BuiltInVariable("gl_in","gl_ClipDistance",0x21,param_6);
      BuiltInVariable("gl_in","gl_CullDistance",0x22,param_6);
      BuiltInVariable("gl_in","gl_ClipVertex",0x20,param_6);
      BuiltInVariable("gl_in","gl_FrontColor",0x2d,param_6);
      BuiltInVariable("gl_in","gl_BackColor",0x2e,param_6);
      BuiltInVariable("gl_in","gl_FrontSecondaryColor",0x2f,param_6);
      BuiltInVariable("gl_in","gl_BackSecondaryColor",0x30,param_6);
      BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
      BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_in","gl_SecondaryPositionNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_in","gl_PositionPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      BuiltInVariable("gl_in","gl_SecondaryPositionNV",0x59,param_6);
      BuiltInVariable("gl_in","gl_PositionPerViewNV",0x5b,param_6);
      if (param_3 == 8) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_in","gl_PointSize",2,(char **)AEP_tessellation_point_size);
          return;
        }
        goto LAB_0010ddde;
      }
    }
  }
  else if (param_1 < 0x1b8) {
    TSymbolTable::setVariableExtensions
              (param_6,"gl_MaxTransformFeedbackBuffers",1,&E_GL_ARB_enhanced_layouts);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_MaxTransformFeedbackInterleavedComponents",1,&E_GL_ARB_enhanced_layouts);
    if (param_5 < 3) goto LAB_0010d01a;
    if (param_5 != 4) goto LAB_0010d19c;
LAB_0010d217:
    if (param_3 != 8) goto LAB_0010cfe8;
LAB_0010d221:
    if (99 < param_1) {
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxDualSourceDrawBuffersEXT",1,&E_GL_EXT_blend_func_extended);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryFragColorEXT",1,&E_GL_EXT_blend_func_extended);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryFragDataEXT",1,&E_GL_EXT_blend_func_extended);
      SpecialQualifier("gl_SecondaryFragColorEXT",4,0x57,param_6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SpecialQualifier("gl_SecondaryFragDataEXT",4,0x56,param_6);
        return;
      }
      goto LAB_0010ddde;
    }
  }
  else {
LAB_0010cf5e:
    if (param_5 < 3) goto LAB_0010d01a;
    if (param_5 == 4) {
LAB_0010cf72:
      if ((param_3 == 4) || (param_1 < 0x1a4)) {
LAB_0010cf84:
        bVar5 = 0;
        goto LAB_0010d2ec;
      }
    }
  }
LAB_0010d19c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ddde:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::RetargetVariable(char const*, char const*, glslang::TSymbolTable&) */

void glslang::RetargetVariable(char *param_1,char *param_2,TSymbolTable *param_3)

{
  size_t sVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  sVar1 = strlen(param_2);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_58,param_2,param_2 + sVar1);
  local_88 = glslang::GetThreadPoolAllocator();
  local_80 = local_70;
  sVar1 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_88,param_1,param_1 + sVar1);
  TSymbolTableLevel::retargetSymbol
            (*(TSymbolTableLevel **)
              (*(long *)param_3 +
              (long)((int)(*(long *)(param_3 + 8) - *(long *)param_3 >> 3) + -1) * 8),
             (basic_string *)&local_88,(basic_string *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TBuiltIns::identifyBuiltIns(int, EProfile, glslang::SpvVersion const&, EShLanguage,
   glslang::TSymbolTable&) */

void __thiscall
glslang::TBuiltIns::identifyBuiltIns
          (TBuiltIns *this,int param_1,int param_3,int *param_4,int param_5,TSymbolTable *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  TSymbolTable *extraout_RDX;
  undefined8 uVar9;
  TSymbolTable *extraout_RDX_00;
  undefined1 uVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  undefined8 local_70;
  char *local_68;
  char *pcStack_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar12 = param_3 != 8;
  switch(param_5) {
  case 0:
    if (param_4[2] < 1) {
      if (param_4[2] == 0) goto LAB_00116da0;
LAB_00112473:
      if (param_3 != 8) {
        if (param_1 < 0x1b8) {
LAB_0011248b:
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b560,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b56a,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b57c,(char **)0x1);
          if (param_1 < 0x1ae) goto LAB_00112585;
        }
        else {
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaseVertexARB",1,&E_GL_ARB_shader_draw_parameters);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaseInstanceARB",1,&E_GL_ARB_shader_draw_parameters);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_DrawIDARB",1,&E_GL_ARB_shader_draw_parameters);
          BuiltInVariable("gl_BaseVertexARB",0x1b,param_6);
          BuiltInVariable("gl_BaseInstanceARB",0x1c,param_6);
          BuiltInVariable("gl_DrawIDARB",0x1d,param_6);
          if (0x1cb < param_1) {
            BuiltInVariable("gl_BaseVertex",0x1b,param_6);
            BuiltInVariable("gl_BaseInstance",0x1c,param_6);
            BuiltInVariable("gl_DrawID",0x1d,param_6);
          }
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b560,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b56a,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b57c,(char **)0x1);
        }
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b593,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b5a4,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b5b6,(char **)0x1);
        goto LAB_00112585;
      }
LAB_001185b1:
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b397,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3a9,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3bc,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3cf,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3db,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3ec,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3f4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b403,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b411,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b424,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b43c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b452,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b469,(char **)0x1);
      if (*param_4 == 0) goto LAB_0011930d;
LAB_00118721:
      if (param_1 == 0x136) {
LAB_00119ae8:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b815,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b819,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b828,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b837,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b846,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b855,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b863,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b872,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b886,(char **)0x1);
LAB_00118747:
        TSymbolTable::setVariableExtensions(param_6,"gl_ViewID_OVR",2,(char **)OVR_multiview_EXTs);
        BuiltInVariable("gl_ViewID_OVR",0x50,param_6);
      }
      else {
LAB_0011872e:
        if (0x13f < param_1) goto LAB_00118747;
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b819,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b828,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b837,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b846,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b855,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b863,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b872,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b886,(char **)0x1);
        if (299 < param_1) goto LAB_00118747;
      }
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b89a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8a6,(char **)0x1);
      goto LAB_00114d81;
    }
    BuiltInVariable("gl_VertexIndex",0x19,param_6);
    BuiltInVariable("gl_InstanceIndex",0x1a,param_6);
    iVar4 = param_4[2];
    if (iVar4 != 0) {
LAB_00116de9:
      if ((0 < iVar4) && ((char)param_4[4] != '\0')) {
LAB_00116e0a:
        RetargetVariable("gl_InstanceID","gl_InstanceIndex",param_6);
        RetargetVariable("gl_VertexID","gl_VertexIndex",param_6);
      }
      goto LAB_00112473;
    }
LAB_00116da0:
    SpecialQualifier("gl_VertexID",0x14,0x17,param_6);
    SpecialQualifier("gl_InstanceID",0x15,0x18,param_6);
    if (0x8b < param_1) {
      iVar4 = param_4[2];
      goto LAB_00116de9;
    }
    TSymbolTable::setVariableExtensions(param_6,"gl_InstanceID",1,&E_GL_EXT_draw_instanced);
    if (0 < param_4[2]) {
      if ((char)param_4[4] != '\0') goto LAB_00116e0a;
      if (param_3 == 8) goto LAB_001185b1;
      goto LAB_0011248b;
    }
    if (param_3 == 8) goto LAB_001185b1;
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b560,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b56a,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b57c,(char **)0x1);
LAB_00112585:
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b5cd,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b5df,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b5f1,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b603,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b61f,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b63b,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b657,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148cf8,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b66d,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b680,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148d20,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148d40,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148d60,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148d80,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148db0,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148de0,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148e10,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148e30,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148e50,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148e70,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148ea0,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x148ed0,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b689,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b68e,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b693,(char **)0x1);
    TSymbolTable::setVariableExtensions(param_6,"gl_SIMDGroupSizeAMD",1,&E_GL_AMD_gcn_shader);
    SpecialQualifier("gl_SIMDGroupSizeAMD",3,9,param_6);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b6ac,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b6bd,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b6ce,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b6d6,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b6eb,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b397,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3a9,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3bc,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3cf,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3db,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3ec,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b3f4,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b403,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b411,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b424,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b43c,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b452,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11b469,(char **)0x1);
    if (*param_4 == 0) {
LAB_0011930d:
      BuiltInVariable("gl_Color",0x3c,param_6);
      BuiltInVariable("gl_SecondaryColor",0x3d,param_6);
      BuiltInVariable("gl_Normal",0x23,param_6);
      BuiltInVariable("gl_Vertex",0x24,param_6);
      BuiltInVariable("gl_MultiTexCoord0",0x25,param_6);
      BuiltInVariable("gl_MultiTexCoord1",0x26,param_6);
      BuiltInVariable("gl_MultiTexCoord2",0x27,param_6);
      BuiltInVariable("gl_MultiTexCoord3",0x28,param_6);
      BuiltInVariable("gl_MultiTexCoord4",0x29,param_6);
      BuiltInVariable("gl_MultiTexCoord5",0x2a,param_6);
      BuiltInVariable("gl_MultiTexCoord6",0x2b,param_6);
      BuiltInVariable("gl_MultiTexCoord7",0x2c,param_6);
      BuiltInVariable("gl_FogCoord",0x32,param_6);
      if (param_3 == 8) {
        if (*param_4 != 0) goto LAB_00118721;
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7c7,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7d8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7ed,(char **)0x1);
        if (param_1 != 0x136) goto LAB_0011872e;
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b800,(char **)0x2);
        goto LAB_00119ae8;
      }
      if (299 < param_1) goto LAB_001198eb;
    }
    else {
      if (param_3 == 8) goto LAB_00118721;
      if (param_1 < 300) goto LAB_001110a0;
LAB_001198eb:
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewID_OVR",2,(char **)OVR_multiview_EXTs);
      BuiltInVariable("gl_ViewID_OVR",0x50,param_6);
    }
    if (*param_4 == 0) {
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8b6,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8c5,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8d4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8e2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8f0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b902,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b914,(char **)0x1);
    }
    goto LAB_001110a0;
  case 1:
LAB_00114d81:
    if ((param_3 == 8) && (0x135 < param_1)) {
      BuiltInVariable("gl_BoundingBoxEXT",0x3a,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BoundingBoxEXT",1,&E_GL_EXT_primitive_bounding_box);
      BuiltInVariable("gl_BoundingBoxOES",0x3a,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BoundingBoxOES",1,&E_GL_OES_primitive_bounding_box);
      if (0x13f < param_1) {
        BuiltInVariable("gl_BoundingBox",0x3a,param_6);
      }
    }
    goto LAB_001110a0;
  case 2:
  case 3:
LAB_001110a0:
    SpecialQualifier("gl_Position",0x16,0x1e,param_6);
    SpecialQualifier("gl_PointSize",0x17,0x1f,param_6);
    BuiltInVariable("gl_in","gl_Position",0x1e,param_6);
    BuiltInVariable("gl_in","gl_PointSize",0x1f,param_6);
    BuiltInVariable("gl_out","gl_Position",0x1e,param_6);
    BuiltInVariable("gl_out","gl_PointSize",0x1f,param_6);
    SpecialQualifier("gl_ClipVertex",0x18,0x20,param_6);
    BuiltInVariable("gl_in","gl_ClipDistance",0x21,param_6);
    BuiltInVariable("gl_in","gl_CullDistance",0x22,param_6);
    BuiltInVariable("gl_out","gl_ClipDistance",0x21,param_6);
    BuiltInVariable("gl_out","gl_CullDistance",0x22,param_6);
    BuiltInVariable("gl_ClipDistance",0x21,param_6);
    BuiltInVariable("gl_CullDistance",0x22,param_6);
    BuiltInVariable("gl_PrimitiveIDIn",0x34,param_6);
    BuiltInVariable("gl_PrimitiveID",0x34,param_6);
    BuiltInVariable("gl_InvocationID",0x33,param_6);
    BuiltInVariable("gl_Layer",0x35,param_6);
    BuiltInVariable("gl_ViewportIndex",0x36,param_6);
    if (param_5 == 3) {
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewportMask",1,&E_GL_NV_viewport_array2);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryPositionNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryViewportMaskNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_PositionPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ViewportMaskPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      BuiltInVariable("gl_ViewportMask",0x58,param_6);
      BuiltInVariable("gl_SecondaryPositionNV",0x59,param_6);
      BuiltInVariable("gl_SecondaryViewportMaskNV",0x5a,param_6);
      BuiltInVariable("gl_PositionPerViewNV",0x5b,param_6);
      BuiltInVariable("gl_ViewportMaskPerViewNV",0x5c,param_6);
      bVar3 = true;
LAB_00111344:
      TSymbolTable::setVariableExtensions
                (param_6,"gl_in","gl_SecondaryPositionNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_in","gl_PositionPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      BuiltInVariable("gl_in","gl_SecondaryPositionNV",0x59,param_6);
      BuiltInVariable("gl_in","gl_PositionPerViewNV",0x5b,param_6);
      bVar13 = true;
    }
    else {
      TSymbolTable::setVariableExtensions(param_6,"gl_Layer",2,(char **)viewportEXTs);
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewportIndex",2,(char **)viewportEXTs);
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewportMask",1,&E_GL_NV_viewport_array2);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryPositionNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SecondaryViewportMaskNV",1,&E_GL_NV_stereo_view_rendering);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_PositionPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ViewportMaskPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
      BuiltInVariable("gl_ViewportMask",0x58,param_6);
      BuiltInVariable("gl_SecondaryPositionNV",0x59,param_6);
      BuiltInVariable("gl_SecondaryViewportMaskNV",0x5a,param_6);
      BuiltInVariable("gl_PositionPerViewNV",0x5b,param_6);
      BuiltInVariable("gl_ViewportMaskPerViewNV",0x5c,param_6);
      if (param_5 == 0) {
        bVar3 = false;
        goto LAB_00111344;
      }
      bVar13 = false;
      bVar3 = false;
    }
    TSymbolTable::setVariableExtensions
              (param_6,"gl_out","gl_ViewportMask",1,&E_GL_NV_viewport_array2);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_out","gl_SecondaryPositionNV",1,&E_GL_NV_stereo_view_rendering);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_out","gl_SecondaryViewportMaskNV",1,&E_GL_NV_stereo_view_rendering);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_out","gl_PositionPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_out","gl_ViewportMaskPerViewNV",1,&E_GL_NVX_multiview_per_view_attributes
              );
    BuiltInVariable("gl_out","gl_ViewportMask",0x58,param_6);
    BuiltInVariable("gl_out","gl_SecondaryPositionNV",0x59,param_6);
    BuiltInVariable("gl_out","gl_SecondaryViewportMaskNV",0x5a,param_6);
    BuiltInVariable("gl_out","gl_PositionPerViewNV",0x5b,param_6);
    BuiltInVariable("gl_out","gl_ViewportMaskPerViewNV",0x5c,param_6);
    BuiltInVariable("gl_PatchVerticesIn",0x37,param_6);
    BuiltInVariable("gl_TessLevelOuter",0x38,param_6);
    BuiltInVariable("gl_TessLevelInner",0x39,param_6);
    BuiltInVariable("gl_TessCoord",0x3b,param_6);
    if (param_1 < 0x19a) {
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewportIndex",1,&E_GL_ARB_viewport_array);
    }
    BuiltInVariable("gl_in","gl_ClipVertex",0x20,param_6);
    BuiltInVariable("gl_in","gl_FrontColor",0x2d,param_6);
    BuiltInVariable("gl_in","gl_BackColor",0x2e,param_6);
    BuiltInVariable("gl_in","gl_FrontSecondaryColor",0x2f,param_6);
    BuiltInVariable("gl_in","gl_BackSecondaryColor",0x30,param_6);
    BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
    BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
    BuiltInVariable("gl_out","gl_ClipVertex",0x20,param_6);
    BuiltInVariable("gl_out","gl_FrontColor",0x2d,param_6);
    BuiltInVariable("gl_out","gl_BackColor",0x2e,param_6);
    BuiltInVariable("gl_out","gl_FrontSecondaryColor",0x2f,param_6);
    BuiltInVariable("gl_out","gl_BackSecondaryColor",0x30,param_6);
    BuiltInVariable("gl_out","gl_TexCoord",0x31,param_6);
    BuiltInVariable("gl_out","gl_FogFragCoord",0x32,param_6);
    BuiltInVariable("gl_ClipVertex",0x20,param_6);
    BuiltInVariable("gl_FrontColor",0x2d,param_6);
    BuiltInVariable("gl_BackColor",0x2e,param_6);
    BuiltInVariable("gl_FrontSecondaryColor",0x2f,param_6);
    BuiltInVariable("gl_BackSecondaryColor",0x30,param_6);
    BuiltInVariable("gl_TexCoord",0x31,param_6);
    BuiltInVariable("gl_FogFragCoord",0x32,param_6);
    if (param_3 == 8) {
      if (bVar3) {
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_PointSize",2,(char **)AEP_geometry_point_size);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_in","gl_PointSize",2,(char **)AEP_geometry_point_size);
      }
      else if (param_5 - 1U < 2) {
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_PointSize",2,(char **)AEP_tessellation_point_size);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_out","gl_PointSize",2,(char **)AEP_tessellation_point_size);
      }
      if (0x135 < param_1) {
        bVar3 = false;
        TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
        BuiltInVariable("gl_DeviceIndex",0x51,param_6);
        TSymbolTable::setVariableExtensions(param_6,"gl_ViewIndex",1,&E_GL_EXT_multiview);
        BuiltInVariable("gl_ViewIndex",0x50,param_6);
        bVar2 = true;
        goto LAB_0011180c;
      }
    }
    else {
      if (0x8b < param_1) {
        TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
        BuiltInVariable("gl_DeviceIndex",0x51,param_6);
        TSymbolTable::setVariableExtensions(param_6,"gl_ViewIndex",1,&E_GL_EXT_multiview);
        BuiltInVariable("gl_ViewIndex",0x50,param_6);
      }
      bVar3 = 0x8b < param_1;
      BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
      BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
      BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
      BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
      BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
      BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
      if (param_4[2] < 1) {
        BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
      }
      else {
        uVar10 = 3;
        SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
        if (param_5 == 4) {
          ModifyFlatDecoration((char *)param_6,(bool)uVar10,extraout_RDX);
        }
      }
      bVar2 = false;
      if (param_1 < 0x8c) {
        if (!bVar13) break;
LAB_00115719:
        if ((0x1c1 < param_1) && (bVar13)) {
LAB_00111b30:
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_PrimitiveShadingRateEXT",1,&E_GL_EXT_fragment_shading_rate);
          BuiltInVariable("gl_PrimitiveShadingRateEXT",0x53,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_ShadingRateFlag2VerticalPixelsEXT",1,
                     &E_GL_EXT_fragment_shading_rate);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_ShadingRateFlag4VerticalPixelsEXT",1,
                     &E_GL_EXT_fragment_shading_rate);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_ShadingRateFlag2HorizontalPixelsEXT",1,
                     &E_GL_EXT_fragment_shading_rate);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_ShadingRateFlag4HorizontalPixelsEXT",1,
                     &E_GL_EXT_fragment_shading_rate);
        }
      }
      else {
LAB_0011180c:
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
        BuiltInVariable("gl_SubgroupSize",0x10,param_6);
        BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
        BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
        BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
        BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
        BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
        BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
        TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins)
        ;
        TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
        TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
        TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
        BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
        BuiltInVariable("gl_SMCountNV",0x88,param_6);
        BuiltInVariable("gl_WarpIDNV",0x89,param_6);
        BuiltInVariable("gl_SMIDNV",0x8a,param_6);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
        TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins)
        ;
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
        TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins)
        ;
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
        BuiltInVariable("gl_CoreCountARM",0x95,param_6);
        BuiltInVariable("gl_CoreIDARM",0x96,param_6);
        BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
        BuiltInVariable("gl_WarpIDARM",0x98,param_6);
        BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
        if (bVar13) {
          bVar13 = bVar3;
          if (!bVar2) goto LAB_00115719;
          goto LAB_00111b30;
        }
      }
    }
    break;
  case 4:
    SpecialQualifier("gl_FrontFacing",0x19,0x3e,param_6);
    SpecialQualifier("gl_FragCoord",0x1a,0x3f,param_6);
    SpecialQualifier("gl_PointCoord",0x1b,0x40);
    if (*param_4 == 0) {
      SpecialQualifier("gl_FragColor",0x1c,0x41,param_6);
    }
    else {
      local_70 = glslang::GetThreadPoolAllocator();
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      basic_string<glslang::std::allocator<char>>
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_68,"gl_FragColor",(allocator *)&local_70);
      plVar6 = (long *)TSymbolTable::find(param_6,(basic_string *)&local_68,(bool *)0x0,(bool *)0x0,
                                          (int *)0x0);
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6);
        if (*(code **)(*plVar7 + 0x50) == TType::getQualifier) {
          plVar7 = plVar7 + 2;
        }
        else {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7);
        }
        *(byte *)(plVar7 + 1) = *(byte *)(plVar7 + 1) & 0x80 | 4;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6);
        if (*(code **)(*plVar6 + 0x50) == TType::getQualifier) {
          plVar6 = plVar6 + 2;
        }
        else {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
        }
        *(ushort *)((long)plVar6 + 0x1c) = *(ushort *)((long)plVar6 + 0x1c) & 0xf000;
      }
    }
    SpecialQualifier("gl_FragDepth",0x1d,0x43,param_6);
    SpecialQualifier("gl_FragDepthEXT",0x1d,0x43,param_6);
    SpecialQualifier("gl_FragStencilRefARB",0x1e,0x44,param_6);
    SpecialQualifier("gl_HelperInvocation",3,0x48,param_6);
    BuiltInVariable("gl_ClipDistance",0x21,param_6);
    BuiltInVariable("gl_CullDistance",0x22,param_6);
    BuiltInVariable("gl_PrimitiveID",0x34,param_6);
    bVar3 = 0x8b < param_1;
    if (bVar3 && bVar12) {
      TSymbolTable::setVariableExtensions
                (param_6,"gl_FragStencilRefARB",1,&E_GL_ARB_shader_stencil_export);
      BuiltInVariable("gl_FragStencilRefARB",0x44,param_6);
    }
    bVar13 = param_3 == 8;
    if (param_1 < 400 && bVar12) {
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bbc8,(char **)0x1);
      if (0x81 < param_1) {
        BuiltInVariable("gl_SampleID",0x45,param_6);
        BuiltInVariable("gl_SamplePosition",0x46,param_6);
        BuiltInVariable("gl_SampleMask",0x47,param_6);
        BuiltInVariable("gl_NumSamples",0x47,param_6);
        TSymbolTable::setVariableExtensions(param_6,"gl_SampleMask",1,&E_GL_ARB_sample_shading);
        TSymbolTable::setVariableExtensions(param_6,"gl_SampleID",1,&E_GL_ARB_sample_shading);
        TSymbolTable::setVariableExtensions(param_6,"gl_SamplePosition",1,&E_GL_ARB_sample_shading);
        TSymbolTable::setVariableExtensions(param_6,"gl_NumSamples",1,&E_GL_ARB_sample_shading);
        BuiltInVariable("gl_Layer",0x35,param_6);
        BuiltInVariable("gl_ViewportIndex",0x36,param_6);
        BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_in","gl_Color",0x3c,param_6);
        BuiltInVariable("gl_in","gl_SecondaryColor",0x3d,param_6);
        BuiltInVariable("gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_Color",0x3c,param_6);
        BuiltInVariable("gl_SecondaryColor",0x3d,param_6);
        iVar4 = *param_4;
joined_r0x001177df:
        if (iVar4 == 0) goto LAB_001177ec;
LAB_001171ea:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd7e,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd8c,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bda3,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bdba,(char **)0x1);
        bVar2 = true;
LAB_00113033:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c052,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c05b,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c064,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c06f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c07a,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c085,(char **)0x1);
        goto LAB_001130c4;
      }
LAB_001170bf:
      if ((0x135 < param_1) && (bVar13)) goto LAB_00112e05;
      BuiltInVariable("gl_Layer",0x35,param_6);
      BuiltInVariable("gl_ViewportIndex",0x36,param_6);
      BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
      BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
      BuiltInVariable("gl_in","gl_Color",0x3c,param_6);
      BuiltInVariable("gl_in","gl_SecondaryColor",0x3d,param_6);
      BuiltInVariable("gl_FogFragCoord",0x32,param_6);
      BuiltInVariable("gl_TexCoord",0x31,param_6);
      BuiltInVariable("gl_Color",0x3c,param_6);
      BuiltInVariable("gl_SecondaryColor",0x3d,param_6);
      if (param_3 == 8) goto LAB_001198b3;
      if (param_1 < 0x82) {
        if (*param_4 == 0) {
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bdc8,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bdd5,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bde2,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bdef,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bdfe,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be0f,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be20,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be31,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be3d,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be49,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11be59,(char **)0x1);
          iVar4 = *param_4;
          goto joined_r0x001177df;
        }
        goto LAB_001171ea;
      }
LAB_0011a18d:
      if (*param_4 == 0) {
LAB_001177ec:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11be69,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11be7a,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11be8f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bea0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11beb5,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bec6,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bedb,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11beee,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11befe,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf12,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf22,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf36,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf4b,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf64,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf78,(char **)0x1);
      }
      if (param_1 < 0x1a4) goto LAB_001171ea;
      if (param_1 != 0x1c2 || !bVar12) goto LAB_0011300a;
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bf90,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bfa4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bfbd,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bfd1,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bfe5,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bff9,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c00c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c020,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c039,(char **)0x1);
      bVar2 = false;
LAB_00117a44:
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c092,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c0a3,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c0b7,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c0ce,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c0e2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c0fc,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c116,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c12b,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c146,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c15d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c17a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c198,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c1ab,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c1c0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c1d6,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c1f2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1492b0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c20c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c21c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c232,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c246,(char **)0x1);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordNoPerspAMD",1,&E_GL_AMD_shader_explicit_vertex_parameter);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordNoPerspCentroidAMD",1,
                 &E_GL_AMD_shader_explicit_vertex_parameter);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordNoPerspSampleAMD",1,&E_GL_AMD_shader_explicit_vertex_parameter
                );
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordSmoothAMD",1,&E_GL_AMD_shader_explicit_vertex_parameter);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordSmoothCentroidAMD",1,
                 &E_GL_AMD_shader_explicit_vertex_parameter);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordSmoothSampleAMD",1,&E_GL_AMD_shader_explicit_vertex_parameter)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_BaryCoordPullModelAMD",1,&E_GL_AMD_shader_explicit_vertex_parameter);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c2fd,(char **)0x1);
      BuiltInVariable("gl_BaryCoordNoPerspAMD",0x49,param_6);
      BuiltInVariable("gl_BaryCoordNoPerspCentroidAMD",0x4a,param_6);
      BuiltInVariable("gl_BaryCoordNoPerspSampleAMD",0x4b,param_6);
      BuiltInVariable("gl_BaryCoordSmoothAMD",0x4c,param_6);
      BuiltInVariable("gl_BaryCoordSmoothCentroidAMD",0x4d,param_6);
      BuiltInVariable("gl_BaryCoordSmoothSampleAMD",0x4e,param_6);
      BuiltInVariable("gl_BaryCoordPullModelAMD",0x4f,param_6);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c314,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c328,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c342,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c35d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1492f0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149310,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c377,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c387,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c398,(char **)0x1);
      if (0x1ad < param_1) {
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_FragFullyCoveredNV",1,&E_GL_NV_conservative_raster_underestimation);
        BuiltInVariable("gl_FragFullyCoveredNV",0x5d,param_6);
        if (0x1c1 < param_1) {
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_FragmentSizeNV",1,&E_GL_NV_shading_rate_image);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_InvocationsPerPixelNV",1,&E_GL_NV_shading_rate_image);
          BuiltInVariable("gl_FragmentSizeNV",0x5e,param_6);
          BuiltInVariable("gl_InvocationsPerPixelNV",0x5f,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaryCoordNV",1,&E_GL_NV_fragment_shader_barycentric);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaryCoordNoPerspNV",1,&E_GL_NV_fragment_shader_barycentric);
          BuiltInVariable("gl_BaryCoordNV",0x73,param_6);
          BuiltInVariable("gl_BaryCoordNoPerspNV",0x74,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaryCoordEXT",1,&E_GL_EXT_fragment_shader_barycentric);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_BaryCoordNoPerspEXT",1,&E_GL_EXT_fragment_shader_barycentric);
          BuiltInVariable("gl_BaryCoordEXT",0x75,param_6);
          BuiltInVariable("gl_BaryCoordNoPerspEXT",0x76,param_6);
          bVar1 = true;
LAB_001131f2:
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_FragSizeEXT",1,&E_GL_EXT_fragment_invocation_density);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_FragInvocationCountEXT",1,&E_GL_EXT_fragment_invocation_density);
          BuiltInVariable("gl_FragSizeEXT",0x54,param_6);
          BuiltInVariable("gl_FragInvocationCountEXT",0x55,param_6);
          goto LAB_0011324d;
        }
      }
      bVar1 = false;
    }
    else {
      if ((param_1 < 0x1cc) || (!bVar12)) {
        if ((param_1 < 0x82) || (!bVar12)) goto LAB_001170bf;
      }
      else {
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bbd8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bbee,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x148fa0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x148fc0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bc03,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x148fe0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bc16,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bc32,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bc49,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149000,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149030,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149058,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1490a0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1490c8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1490f8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149120,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149148,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149178,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1491a8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1491d8,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149200,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bc5f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149228,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x149248,(char **)0x1);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_RayFlagsSkipAABBEXT",1,&E_GL_EXT_ray_flags_primitive_culling);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_RayFlagsSkipTrianglesEXT",1,&E_GL_EXT_ray_flags_primitive_culling);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_RayFlagsForceOpacityMicromap2StateEXT",1,&E_GL_EXT_opacity_micromap);
      }
LAB_00112e05:
      BuiltInVariable("gl_SampleID",0x45,param_6);
      BuiltInVariable("gl_SamplePosition",0x46,param_6);
      BuiltInVariable("gl_SampleMask",0x47,param_6);
      BuiltInVariable("gl_SampleMaskIn",0x47,param_6);
      if ((param_1 < 0x140) && (bVar13)) {
        TSymbolTable::setVariableExtensions(param_6,"gl_SampleID",1,&E_GL_OES_sample_variables);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_SamplePosition",1,&E_GL_OES_sample_variables);
        TSymbolTable::setVariableExtensions(param_6,"gl_SampleMaskIn",1,&E_GL_OES_sample_variables);
        TSymbolTable::setVariableExtensions(param_6,"gl_SampleMask",1,&E_GL_OES_sample_variables);
        TSymbolTable::setVariableExtensions(param_6,"gl_NumSamples",1,&E_GL_OES_sample_variables);
        BuiltInVariable("gl_Layer",0x35,param_6);
        BuiltInVariable("gl_ViewportIndex",0x36,param_6);
        BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_in","gl_Color",0x3c,param_6);
        BuiltInVariable("gl_in","gl_SecondaryColor",0x3d,param_6);
        BuiltInVariable("gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_Color",0x3c,param_6);
        BuiltInVariable("gl_SecondaryColor",0x3d,param_6);
        if (*param_4 == 0) {
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bcf9,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd09,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd1d,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7c7,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7d8,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7ed,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b800,(char **)0x2);
        }
LAB_00112ffd:
        if (param_1 == 0x136) {
LAB_00119eb1:
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b815,(char **)0x2);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd40,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd56,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd6a,(char **)0x1);
        }
LAB_0011300a:
        if ((param_1 < 0x1c2) && (bVar2 = false, bVar12)) goto LAB_00113033;
      }
      else {
        BuiltInVariable("gl_Layer",0x35,param_6);
        BuiltInVariable("gl_ViewportIndex",0x36,param_6);
        BuiltInVariable("gl_in","gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_in","gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_in","gl_Color",0x3c,param_6);
        BuiltInVariable("gl_in","gl_SecondaryColor",0x3d,param_6);
        BuiltInVariable("gl_FogFragCoord",0x32,param_6);
        BuiltInVariable("gl_TexCoord",0x31,param_6);
        BuiltInVariable("gl_Color",0x3c,param_6);
        BuiltInVariable("gl_SecondaryColor",0x3d,param_6);
        if (param_3 != 8) goto LAB_0011a18d;
LAB_001198b3:
        if (*param_4 == 0) {
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bcf9,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd09,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd1d,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7c7,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7d8,(char **)0x1);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11b7ed,(char **)0x1);
          if (param_1 < 0x140) {
            TSymbolTable::setFunctionExtensions((char *)param_6,0x11b800,(char **)0x2);
            if (param_1 != 100) goto LAB_00112ffd;
            goto LAB_00119e60;
          }
        }
        else {
          if (param_1 == 100) {
LAB_00119e60:
            TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd2f,(char **)0x1);
            TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd34,(char **)0x1);
            TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd39,(char **)0x1);
            goto LAB_0011300a;
          }
          if (param_1 == 0x136) goto LAB_00119eb1;
        }
      }
      bVar2 = false;
LAB_001130c4:
      if (param_3 != 8) goto LAB_00117a44;
      if (0x13f < param_1) {
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_FragmentSizeNV",1,&E_GL_NV_shading_rate_image);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_InvocationsPerPixelNV",1,&E_GL_NV_shading_rate_image);
        BuiltInVariable("gl_FragmentSizeNV",0x5e,param_6);
        BuiltInVariable("gl_InvocationsPerPixelNV",0x5f,param_6);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_BaryCoordNV",1,&E_GL_NV_fragment_shader_barycentric);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_BaryCoordNoPerspNV",1,&E_GL_NV_fragment_shader_barycentric);
        BuiltInVariable("gl_BaryCoordNV",0x73,param_6);
        BuiltInVariable("gl_BaryCoordNoPerspNV",0x74,param_6);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_BaryCoordEXT",1,&E_GL_EXT_fragment_shader_barycentric);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_BaryCoordNoPerspEXT",1,&E_GL_EXT_fragment_shader_barycentric);
        BuiltInVariable("gl_BaryCoordEXT",0x75,param_6);
        BuiltInVariable("gl_BaryCoordNoPerspEXT",0x76,param_6);
LAB_001131ed:
        bVar1 = false;
        goto LAB_001131f2;
      }
      bVar1 = 0x135 < param_1;
      if (0x135 < param_1) goto LAB_001131ed;
    }
LAB_0011324d:
    TSymbolTable::setVariableExtensions(param_6,"gl_FragDepthEXT",1,&E_GL_EXT_frag_depth);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11c3ed,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11c3f6,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11c403,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11c414,(char **)0x1);
    if ((param_1 < 0x140) && (bVar13)) {
      TSymbolTable::setVariableExtensions(param_6,"gl_PrimitiveID",2,(char **)AEP_geometry_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_Layer",2,(char **)AEP_geometry_shader);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b819,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b828,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b837,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b846,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b855,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b863,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b872,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11b886,(char **)0x1);
LAB_00113401:
      if (bVar2) goto LAB_00117494;
    }
    else {
      if ((param_1 < 0x14a) && (bVar12)) {
        local_68 = "GL_ARB_shader_bit_encoding";
        pcStack_60 = "GL_ARB_gpu_shader5";
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c457,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c466,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c476,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c485,(char **)0x2);
LAB_00117303:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c495,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c49f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4a9,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4b3,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4bd,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4c7,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4d0,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4da,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4e9,(char **)0x1);
      }
      else if ((param_1 < 0x1ae) && (bVar12)) goto LAB_00117303;
      if (param_1 >= 400 || !bVar12) goto LAB_00113401;
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c4f8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c506,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c516,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c523,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c530,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c53f,(char **)0x1);
LAB_00117494:
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c54e,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c55c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c56c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c57b,(char **)0x1);
    }
    TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
    BuiltInVariable("gl_DeviceIndex",0x51,param_6);
    TSymbolTable::setVariableExtensions(param_6,"gl_ViewIndex",1,&E_GL_EXT_multiview);
    BuiltInVariable("gl_ViewIndex",0x50,param_6);
    if (param_1 < 300) {
      if (param_3 == 8) {
LAB_00113480:
        bVar13 = false;
        goto LAB_00113485;
      }
LAB_00117fdd:
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
      BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
      BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
      BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
      BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
      BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
      BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
      if (param_4[2] < 1) {
        BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
      }
      else {
        uVar10 = 3;
        SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
        ModifyFlatDecoration((char *)param_6,(bool)uVar10,extraout_RDX_00);
      }
      if (bVar3 && bVar12) {
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11d949,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11d953,(char **)0x1);
        bVar13 = false;
        goto LAB_001188ce;
      }
      bVar13 = false;
    }
    else {
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewID_OVR",2,(char **)OVR_multiview_EXTs);
      BuiltInVariable("gl_ViewID_OVR",0x50,param_6);
      if (param_3 != 8) goto LAB_00117fdd;
      if (param_1 < 0x136) goto LAB_00113480;
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d949,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d953,(char **)0x1);
      bVar1 = true;
      bVar13 = true;
LAB_001188ce:
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      BuiltInVariable("gl_SubgroupSize",0x10,param_6);
      BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
      BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
      BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
      BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
      BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
      BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c5b2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c5c2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c5d8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c5f4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c60f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c61d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c629,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c635,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c646,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c658,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c66f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c67e,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c694,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c6ad,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149338,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149358,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c6c4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c6da,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c6f0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c700,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c713,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c725,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c739,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c748,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c760,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c76c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c778,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c784,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c790,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c79c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c7a7,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c7b3,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c7c8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c7dd,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c7f2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c807,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c81c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c830,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c845,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c85a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c86f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c884,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c899,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c8ae,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c8c2,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c8d7,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c8ec,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c901,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c916,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c92b,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c940,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c954,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c969,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c97f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c99a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c9b3,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c9cc,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c9e0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c9f9,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ca12,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ca2b,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ca44,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ca5d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ca75,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149378,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1493a0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1493c8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1493f0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149418,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149440,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149468,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149490,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1494b8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1494e0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149508,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149530,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149558,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149580,(char **)0x1);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
      BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
      BuiltInVariable("gl_SMCountNV",0x88,param_6);
      BuiltInVariable("gl_WarpIDNV",0x89,param_6);
      BuiltInVariable("gl_SMIDNV",0x8a,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      BuiltInVariable("gl_CoreCountARM",0x95,param_6);
      BuiltInVariable("gl_CoreIDARM",0x96,param_6);
      BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
      BuiltInVariable("gl_WarpIDARM",0x98,param_6);
      BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
      if (param_3 == 8) {
LAB_00113485:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b89a,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11b8a6,(char **)0x1);
      }
    }
    if (0 < param_4[2]) {
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ScopeDevice",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ScopeWorkgroup",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ScopeSubgroup",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ScopeInvocation",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsRelaxed",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsAcquire",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsRelease",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsAcquireRelease",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsMakeAvailable",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsMakeVisible",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SemanticsVolatile",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_StorageSemanticsNone",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_StorageSemanticsBuffer",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_StorageSemanticsShared",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_StorageSemanticsImage",1,&E_GL_KHR_memory_scope_semantics);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_StorageSemanticsOutput",1,&E_GL_KHR_memory_scope_semantics);
    }
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cbf0,(char **)0x1);
    if (bVar1) {
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ShadingRateEXT",1,&E_GL_EXT_fragment_shading_rate);
      BuiltInVariable("gl_ShadingRateEXT",0x52,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ShadingRateFlag2VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ShadingRateFlag4VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ShadingRateFlag2HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ShadingRateFlag4HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate)
      ;
      if ((!bVar3 || !bVar12) && (!bVar13)) {
LAB_001187ba:
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc36,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc4f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc66,(char **)0x1);
        break;
      }
    }
    else if (!bVar3 || !bVar12) goto LAB_001187ba;
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc16,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc26,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc36,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc4f,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc66,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc7d,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cc91,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cca6,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ccbf,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x1495a8,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x1495c8,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x1495e8,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x149608,(char **)0x1);
    break;
  case 5:
    BuiltInVariable("gl_NumWorkGroups",1,param_6);
    BuiltInVariable("gl_WorkGroupSize",2,param_6);
    BuiltInVariable("gl_WorkGroupID",3,param_6);
    BuiltInVariable("gl_LocalInvocationID",4,param_6);
    BuiltInVariable("gl_GlobalInvocationID",5,param_6);
    BuiltInVariable("gl_LocalInvocationIndex",6,param_6);
    BuiltInVariable("gl_DeviceIndex",0x51,param_6);
    BuiltInVariable("gl_ViewIndex",0x50,param_6);
    bVar3 = 0x8b < param_1 && bVar12;
    if ((bVar3) || ((param_3 == 8 && (0x135 < param_1)))) {
      TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
      TSymbolTable::setVariableExtensions(param_6,"gl_ViewIndex",1,&E_GL_EXT_multiview);
    }
    if ((param_1 < 0x1ae) && (bVar12)) {
      TSymbolTable::setVariableExtensions(param_6,"gl_NumWorkGroups",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupSize",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupID",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_LocalInvocationID",1,&E_GL_ARB_compute_shader)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_GlobalInvocationID",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_LocalInvocationIndex",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeWorkGroupCount",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeWorkGroupSize",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeUniformComponents",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeTextureImageUnits",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeImageUniforms",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeAtomicCounters",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxComputeAtomicCounterBuffers",1,&E_GL_ARB_compute_shader);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdd3,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11cddb,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdf6,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce0a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce1d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce31,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce44,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce53,(char **)0x1);
LAB_00115a21:
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
      BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
      BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
      BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
      BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
      BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
      BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
      if (param_4[2] < 1) {
        BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
      }
      else {
        SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
      }
      if (bVar3) {
        bVar3 = false;
        goto LAB_00114779;
      }
LAB_00119d2a:
      bVar13 = false;
      bVar3 = false;
    }
    else {
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce44,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce53,(char **)0x1);
      if (param_3 != 8) goto LAB_00115a21;
      bVar3 = true;
      if (param_1 < 0x136) {
        local_68 = "GL_NV_cooperative_matrix";
        pcStack_60 = "GL_NV_integer_cooperative_matrix";
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce9c,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ceaa,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ceb9,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cec9,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ced5,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cee2,(char **)0x1);
        goto LAB_00114cf3;
      }
LAB_00114779:
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      BuiltInVariable("gl_SubgroupSize",0x10,param_6);
      BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
      BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
      BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
      BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
      BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
      BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
      BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
      BuiltInVariable("gl_SMCountNV",0x88,param_6);
      BuiltInVariable("gl_WarpIDNV",0x89,param_6);
      BuiltInVariable("gl_SMIDNV",0x8a,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      BuiltInVariable("gl_CoreCountARM",0x95,param_6);
      BuiltInVariable("gl_CoreIDARM",0x96,param_6);
      BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
      BuiltInVariable("gl_WarpIDARM",0x98,param_6);
      BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
      bVar13 = bVar3;
      if ((!bVar3) && (bVar13 = false, 0x8b >= param_1 || !bVar12)) goto LAB_00119d2a;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_NumSubgroups",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupID",1,&E_GL_KHR_shader_subgroup_basic)
      ;
      BuiltInVariable("gl_NumSubgroups",7,param_6);
      BuiltInVariable("gl_SubgroupID",8,param_6);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce80,(char **)0x1);
    }
    local_68 = "GL_NV_cooperative_matrix";
    pcStack_60 = "GL_NV_integer_cooperative_matrix";
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce9c,(char **)0x2);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ceaa,(char **)0x2);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ceb9,(char **)0x2);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cec9,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ced5,(char **)0x1);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11cee2,(char **)0x1);
    if ((param_1 < 0x1c2) || (!bVar12)) {
      if ((0x13f < param_1) && (bVar3)) {
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd2f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd34,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd39,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c052,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c05b,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c064,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c06f,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c07a,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11c085,(char **)0x1);
      }
      if (!bVar13) goto LAB_00114cf3;
    }
    else {
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd2f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd34,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11bd39,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c052,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c05b,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c064,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c06f,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c07a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11c085,(char **)0x1);
    }
LAB_00114c90:
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag2VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag4VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag2HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag4HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    goto LAB_00114cf3;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((param_1 < 0x1cc) || (!bVar12)) {
      if (((param_3 != 8) || (param_1 < 0x136)) && ((param_1 < 0x1c2 || (!bVar12)))) break;
    }
    else {
      local_68 = "GL_NV_ray_tracing";
      pcStack_60 = "GL_EXT_ray_tracing";
      TSymbolTable::setVariableExtensions(param_6,"gl_LaunchIDNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_LaunchIDEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_LaunchSizeNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_LaunchSizeEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_PrimitiveID",2,&local_68);
      TSymbolTable::setVariableExtensions(param_6,"gl_InstanceID",2,&local_68);
      TSymbolTable::setVariableExtensions(param_6,"gl_InstanceCustomIndexNV",1,&E_GL_NV_ray_tracing)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_InstanceCustomIndexEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_GeometryIndexEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldRayOriginNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldRayOriginEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldRayDirectionNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldRayDirectionEXT",1,&E_GL_EXT_ray_tracing)
      ;
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectRayOriginNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectRayOriginEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectRayDirectionNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_ObjectRayDirectionEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_RayTminNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_RayTminEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_RayTmaxNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_RayTmaxEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_CullMaskEXT",1,&E_GL_EXT_ray_cull_mask);
      TSymbolTable::setVariableExtensions(param_6,"gl_HitTNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_HitTEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_HitKindNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_HitKindEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectToWorldNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectToWorldEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_ObjectToWorld3x4EXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldToObjectNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldToObjectEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorldToObject3x4EXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_IncomingRayFlagsNV",1,&E_GL_NV_ray_tracing);
      TSymbolTable::setVariableExtensions(param_6,"gl_IncomingRayFlagsEXT",1,&E_GL_EXT_ray_tracing);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CurrentRayTimeNV",1,&E_GL_NV_ray_tracing_motion_blur);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_HitTriangleVertexPositionsEXT",1,&E_GL_EXT_ray_tracing_position_fetch);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_HitMicroTriangleVertexPositionsNV",1,&E_GL_NV_displacement_micromap);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_HitMicroTriangleVertexBarycentricsNV",1,&E_GL_NV_displacement_micromap)
      ;
      TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d180,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d188,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d199,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d1a5,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d1ba,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d1d0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d1e5,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d1f4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d206,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d219,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d22d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d247,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d25c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d277,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149780,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d295,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d2ab,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d2c7,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d2de,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d2f7,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d30a,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d31c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d32d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d343,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d359,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1497a8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d377,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1497d0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d394,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d3b0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1497f0,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d3cb,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d3e4,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d400,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d41d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d433,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d44c,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149818,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x149848,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11d466,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1496b8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1496e0,(char **)0x1);
      BuiltInVariable("gl_LaunchIDNV",0x60,param_6);
      BuiltInVariable("gl_LaunchIDEXT",0x60,param_6);
      BuiltInVariable("gl_LaunchSizeNV",0x61,param_6);
      BuiltInVariable("gl_LaunchSizeEXT",0x61,param_6);
      BuiltInVariable("gl_PrimitiveID",0x34,param_6);
      BuiltInVariable("gl_InstanceID",0x18,param_6);
      BuiltInVariable("gl_InstanceCustomIndexNV",0x62,param_6);
      BuiltInVariable("gl_InstanceCustomIndexEXT",0x62,param_6);
      BuiltInVariable("gl_GeometryIndexEXT",99,param_6);
      BuiltInVariable("gl_WorldRayOriginNV",100,param_6);
      BuiltInVariable("gl_WorldRayOriginEXT",100,param_6);
      BuiltInVariable("gl_WorldRayDirectionNV",0x65,param_6);
      BuiltInVariable("gl_WorldRayDirectionEXT",0x65,param_6);
      BuiltInVariable("gl_ObjectRayOriginNV",0x66,param_6);
      BuiltInVariable("gl_ObjectRayOriginEXT",0x66,param_6);
      BuiltInVariable("gl_ObjectRayDirectionNV",0x67,param_6);
      BuiltInVariable("gl_ObjectRayDirectionEXT",0x67,param_6);
      BuiltInVariable("gl_RayTminNV",0x68,param_6);
      BuiltInVariable("gl_RayTminEXT",0x68,param_6);
      BuiltInVariable("gl_RayTmaxNV",0x69,param_6);
      BuiltInVariable("gl_RayTmaxEXT",0x69,param_6);
      BuiltInVariable("gl_CullMaskEXT",0x6a,param_6);
      BuiltInVariable("gl_HitTNV",0x6b,param_6);
      BuiltInVariable("gl_HitTEXT",0x6b,param_6);
      BuiltInVariable("gl_HitKindNV",0x6c,param_6);
      BuiltInVariable("gl_HitKindEXT",0x6c,param_6);
      BuiltInVariable("gl_ObjectToWorldNV",0x6d,param_6);
      BuiltInVariable("gl_ObjectToWorldEXT",0x6d,param_6);
      BuiltInVariable("gl_ObjectToWorld3x4EXT",0x6e,param_6);
      BuiltInVariable("gl_WorldToObjectNV",0x6f,param_6);
      BuiltInVariable("gl_WorldToObjectEXT",0x6f,param_6);
      BuiltInVariable("gl_WorldToObject3x4EXT",0x70,param_6);
      BuiltInVariable("gl_IncomingRayFlagsNV",0x71,param_6);
      BuiltInVariable("gl_IncomingRayFlagsEXT",0x71,param_6);
      BuiltInVariable("gl_DeviceIndex",0x51,param_6);
      BuiltInVariable("gl_CurrentRayTimeNV",0x72,param_6);
      BuiltInVariable("gl_HitTriangleVertexPositionsEXT",0x9a,param_6);
      BuiltInVariable("gl_HitMicroTriangleVertexPositionsNV",0x7f,param_6);
      BuiltInVariable("gl_HitMicroTriangleVertexBarycentricsNV",0x80,param_6);
      BuiltInVariable("gl_HitKindFrontFacingMicroTriangleNV",0x81,param_6);
      BuiltInVariable("gl_HitKindBackFacingMicroTriangleNV",0x82,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
      BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
      BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
      BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
      BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
      BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
      BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
      if (param_4[2] < 1) {
        BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
      }
      else {
        SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
      }
      TSymbolTable::setVariableExtensions
                (param_6,"gl_NumSubgroups",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupID",1,&E_GL_KHR_shader_subgroup_basic)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
      BuiltInVariable("gl_NumSubgroups",7,param_6);
      BuiltInVariable("gl_SubgroupID",8,param_6);
      BuiltInVariable("gl_SubgroupSize",0x10,param_6);
      BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
      BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
      BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
      BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
      BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
      BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
      BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
      BuiltInVariable("gl_SMCountNV",0x88,param_6);
      BuiltInVariable("gl_WarpIDNV",0x89,param_6);
      BuiltInVariable("gl_SMIDNV",0x8a,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
      BuiltInVariable("gl_CoreCountARM",0x95,param_6);
      BuiltInVariable("gl_CoreIDARM",0x96,param_6);
      BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
      BuiltInVariable("gl_WarpIDARM",0x98,param_6);
      BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
    }
LAB_0010dfb0:
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag2VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag4VerticalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag2HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_ShadingRateFlag4HorizontalPixelsEXT",1,&E_GL_EXT_fragment_shading_rate);
    break;
  case 0xc:
    bVar3 = 0x1c1 < param_1 && bVar12;
    if (bVar3) {
      TSymbolTable::setVariableExtensions(param_6,"gl_TaskCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewIndicesNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupSize",2,(char **)AEP_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupID",2,(char **)AEP_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_LocalInvocationID",2,(char **)AEP_mesh_shader)
      ;
      TSymbolTable::setVariableExtensions
                (param_6,"gl_GlobalInvocationID",2,(char **)AEP_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_LocalInvocationIndex",2,(char **)AEP_mesh_shader);
      BuiltInVariable("gl_TaskCountNV",0x77,param_6);
      BuiltInVariable("gl_WorkGroupSize",2,param_6);
      BuiltInVariable("gl_WorkGroupID",3,param_6);
      BuiltInVariable("gl_LocalInvocationID",4,param_6);
      BuiltInVariable("gl_GlobalInvocationID",5,param_6);
      BuiltInVariable("gl_LocalInvocationIndex",6,param_6);
      BuiltInVariable("gl_MeshViewCountNV",0x7d,param_6);
      BuiltInVariable("gl_MeshViewIndicesNV",0x7e,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxTaskWorkGroupSizeNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MaxMeshViewCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdd3,(char **)0x2);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce1d,(char **)0x2);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce31,(char **)0x2);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11dba6,(char **)0x1);
      TSymbolTable::setVariableExtensions(param_6,"gl_NumWorkGroups",1,&E_GL_EXT_mesh_shader);
      BuiltInVariable("gl_NumWorkGroups",1,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
      BuiltInVariable("gl_DeviceIndex",0x51,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_DrawIDARB",1,&E_GL_ARB_shader_draw_parameters)
      ;
      BuiltInVariable("gl_DrawIDARB",0x1d,param_6);
      if (0x1cb < param_1) {
        BuiltInVariable("gl_DrawID",0x1d,param_6);
      }
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
      TSymbolTable::setVariableExtensions(param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
      BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
      BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
      BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
      BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
      BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
      BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
      if (param_4[2] < 1) {
        BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
      }
      else {
        SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
      }
LAB_001170a1:
      bVar13 = false;
    }
    else {
      if ((param_1 < 0x140) || (param_3 != 8)) {
        if ((param_1 < 0x136) || (param_3 != 8)) {
          if ((param_1 < 0x8c) || (!bVar12)) break;
          goto LAB_001170a1;
        }
      }
      else {
        TSymbolTable::setVariableExtensions(param_6,"gl_TaskCountNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewCountNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewIndicesNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupSize",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupID",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_LocalInvocationID",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_GlobalInvocationID",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_LocalInvocationIndex",1,&E_GL_NV_mesh_shader);
        BuiltInVariable("gl_TaskCountNV",0x77,param_6);
        BuiltInVariable("gl_WorkGroupSize",2,param_6);
        BuiltInVariable("gl_WorkGroupID",3,param_6);
        BuiltInVariable("gl_LocalInvocationID",4,param_6);
        BuiltInVariable("gl_GlobalInvocationID",5,param_6);
        BuiltInVariable("gl_LocalInvocationIndex",6,param_6);
        BuiltInVariable("gl_MeshViewCountNV",0x7d,param_6);
        BuiltInVariable("gl_MeshViewIndicesNV",0x7e,param_6);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_MaxTaskWorkGroupSizeNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_MaxMeshViewCountNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdd3,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce1d,(char **)0x1);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce31,(char **)0x1);
      }
      bVar13 = true;
    }
    TSymbolTable::setVariableExtensions(param_6,"gl_NumSubgroups",1,&E_GL_KHR_shader_subgroup_basic)
    ;
    TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupID",1,&E_GL_KHR_shader_subgroup_basic);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic)
    ;
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
    BuiltInVariable("gl_NumSubgroups",7,param_6);
    BuiltInVariable("gl_SubgroupID",8,param_6);
    BuiltInVariable("gl_SubgroupSize",0x10,param_6);
    BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
    BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
    BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
    BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
    BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
    BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce80,(char **)0x1);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
    BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
    BuiltInVariable("gl_SMCountNV",0x88,param_6);
    BuiltInVariable("gl_WarpIDNV",0x89,param_6);
    BuiltInVariable("gl_SMIDNV",0x8a,param_6);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
    BuiltInVariable("gl_CoreCountARM",0x95,param_6);
    BuiltInVariable("gl_CoreIDARM",0x96,param_6);
    BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
    BuiltInVariable("gl_WarpIDARM",0x98,param_6);
    BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
    if ((bVar13) || (bVar3)) goto LAB_0010dfb0;
    break;
  case 0xd:
    bVar3 = 0x1c1 < param_1 && bVar12;
    if ((bVar3) || ((0x13f < param_1 && (param_3 == 8)))) {
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_Position",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_PointSize",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_ClipDistance",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_CullDistance",1,&E_GL_NV_mesh_shader);
      BuiltInVariable("gl_MeshVerticesNV","gl_Position",0x1e,param_6);
      BuiltInVariable("gl_MeshVerticesNV","gl_PointSize",0x1f,param_6);
      BuiltInVariable("gl_MeshVerticesNV","gl_ClipDistance",0x21,param_6);
      BuiltInVariable("gl_MeshVerticesNV","gl_CullDistance",0x22,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_PositionPerViewNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_ClipDistancePerViewNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshVerticesNV","gl_CullDistancePerViewNV",1,&E_GL_NV_mesh_shader);
      BuiltInVariable("gl_MeshVerticesNV","gl_PositionPerViewNV",0x5b,param_6);
      BuiltInVariable("gl_MeshVerticesNV","gl_ClipDistancePerViewNV",0x7a,param_6);
      BuiltInVariable("gl_MeshVerticesNV","gl_CullDistancePerViewNV",0x7b,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_PrimitiveID",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_Layer",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_ViewportIndex",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_ViewportMask",1,&E_GL_NV_mesh_shader);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_PrimitiveID",0x34,param_6);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_Layer",0x35,param_6);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_ViewportIndex",0x36,param_6);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_ViewportMask",0x58,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_LayerPerViewNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MeshPrimitivesNV","gl_ViewportMaskPerViewNV",1,&E_GL_NV_mesh_shader);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_LayerPerViewNV",0x7c,param_6);
      BuiltInVariable("gl_MeshPrimitivesNV","gl_ViewportMaskPerViewNV",0x5c,param_6);
      TSymbolTable::setVariableExtensions(param_6,"gl_PrimitiveCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_PrimitiveIndicesNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MeshViewIndicesNV",1,&E_GL_NV_mesh_shader);
      if (param_3 != 8) {
        TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupSize",2,(char **)AEP_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupID",2,(char **)AEP_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_LocalInvocationID",2,(char **)AEP_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_GlobalInvocationID",2,(char **)AEP_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_LocalInvocationIndex",2,(char **)AEP_mesh_shader);
        BuiltInVariable("gl_PrimitiveCountNV",0x78,param_6);
        BuiltInVariable("gl_PrimitiveIndicesNV",0x79,param_6);
        BuiltInVariable("gl_MeshViewCountNV",0x7d,param_6);
        BuiltInVariable("gl_MeshViewIndicesNV",0x7e,param_6);
        BuiltInVariable("gl_WorkGroupSize",2,param_6);
        BuiltInVariable("gl_WorkGroupID",3,param_6);
        BuiltInVariable("gl_LocalInvocationID",4,param_6);
        BuiltInVariable("gl_GlobalInvocationID",5,param_6);
        BuiltInVariable("gl_LocalInvocationIndex",6,param_6);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_MaxMeshOutputVerticesNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_MaxMeshOutputPrimitivesNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions
                  (param_6,"gl_MaxMeshWorkGroupSizeNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setVariableExtensions(param_6,"gl_MaxMeshViewCountNV",1,&E_GL_NV_mesh_shader);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdd3,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce1d,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce31,(char **)0x2);
        TSymbolTable::setFunctionExtensions((char *)param_6,0x1498c0,(char **)0x1);
        if (bVar3) {
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_PrimitivePointIndicesEXT",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_PrimitiveLineIndicesEXT",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_PrimitiveTriangleIndicesEXT",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions(param_6,"gl_NumWorkGroups",1,&E_GL_EXT_mesh_shader);
          BuiltInVariable("gl_PrimitivePointIndicesEXT",0x83,param_6);
          BuiltInVariable("gl_PrimitiveLineIndicesEXT",0x84,param_6);
          BuiltInVariable("gl_PrimitiveTriangleIndicesEXT",0x85,param_6);
          BuiltInVariable("gl_NumWorkGroups",1,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshVerticesEXT","gl_Position",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshVerticesEXT","gl_PointSize",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshVerticesEXT","gl_ClipDistance",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshVerticesEXT","gl_CullDistance",1,&E_GL_EXT_mesh_shader);
          BuiltInVariable("gl_MeshVerticesEXT","gl_Position",0x1e,param_6);
          BuiltInVariable("gl_MeshVerticesEXT","gl_PointSize",0x1f,param_6);
          BuiltInVariable("gl_MeshVerticesEXT","gl_ClipDistance",0x21,param_6);
          BuiltInVariable("gl_MeshVerticesEXT","gl_CullDistance",0x22,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshPrimitivesEXT","gl_PrimitiveID",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshPrimitivesEXT","gl_Layer",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshPrimitivesEXT","gl_ViewportIndex",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshPrimitivesEXT","gl_CullPrimitiveEXT",1,&E_GL_EXT_mesh_shader);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_MeshPrimitivesEXT","gl_PrimitiveShadingRateEXT",1,
                     &E_GL_EXT_fragment_shading_rate);
          BuiltInVariable("gl_MeshPrimitivesEXT","gl_PrimitiveID",0x34,param_6);
          BuiltInVariable("gl_MeshPrimitivesEXT","gl_Layer",0x35,param_6);
          BuiltInVariable("gl_MeshPrimitivesEXT","gl_ViewportIndex",0x36,param_6);
          BuiltInVariable("gl_MeshPrimitivesEXT","gl_CullPrimitiveEXT",0x86,param_6);
          BuiltInVariable("gl_MeshPrimitivesEXT","gl_PrimitiveShadingRateEXT",0x53,param_6);
          TSymbolTable::setFunctionExtensions((char *)param_6,0x11d60d,(char **)0x1);
          TSymbolTable::setVariableExtensions(param_6,"gl_DeviceIndex",1,&E_GL_EXT_device_group);
          BuiltInVariable("gl_DeviceIndex",0x51,param_6);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_DrawIDARB",1,&E_GL_ARB_shader_draw_parameters);
          BuiltInVariable("gl_DrawIDARB",0x1d,param_6);
          if (0x1cb < param_1) {
            BuiltInVariable("gl_DrawID",0x1d,param_6);
          }
          BuiltInVariable("gl_ViewIndex",0x50,param_6);
          TSymbolTable::setVariableExtensions(param_6,"gl_ViewIndex",1,&E_GL_EXT_multiview);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupSizeARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupInvocationARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupEqMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupGtMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLeMaskARB",1,&E_GL_ARB_shader_ballot);
          TSymbolTable::setVariableExtensions
                    (param_6,"gl_SubGroupLtMaskARB",1,&E_GL_ARB_shader_ballot);
          BuiltInVariable("gl_SubGroupInvocationARB",10,param_6);
          BuiltInVariable("gl_SubGroupEqMaskARB",0xb,param_6);
          BuiltInVariable("gl_SubGroupGeMaskARB",0xc,param_6);
          BuiltInVariable("gl_SubGroupGtMaskARB",0xd,param_6);
          BuiltInVariable("gl_SubGroupLeMaskARB",0xe,param_6);
          BuiltInVariable("gl_SubGroupLtMaskARB",0xf,param_6);
          if (param_4[2] < 1) {
            BuiltInVariable("gl_SubGroupSizeARB",9,param_6);
          }
          else {
            SpecialQualifier("gl_SubGroupSizeARB",3,9,param_6);
          }
        }
        goto LAB_0011426c;
      }
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupSize",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_WorkGroupID",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_LocalInvocationID",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_GlobalInvocationID",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_LocalInvocationIndex",1,&E_GL_NV_mesh_shader);
      BuiltInVariable("gl_PrimitiveCountNV",0x78,param_6);
      BuiltInVariable("gl_PrimitiveIndicesNV",0x79,param_6);
      BuiltInVariable("gl_MeshViewCountNV",0x7d,param_6);
      BuiltInVariable("gl_MeshViewIndicesNV",0x7e,param_6);
      BuiltInVariable("gl_WorkGroupSize",2,param_6);
      BuiltInVariable("gl_WorkGroupID",3,param_6);
      BuiltInVariable("gl_LocalInvocationID",4,param_6);
      BuiltInVariable("gl_GlobalInvocationID",5,param_6);
      BuiltInVariable("gl_LocalInvocationIndex",6,param_6);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxMeshOutputVerticesNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxMeshOutputPrimitivesNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions
                (param_6,"gl_MaxMeshWorkGroupSizeNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setVariableExtensions(param_6,"gl_MaxMeshViewCountNV",1,&E_GL_NV_mesh_shader);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11cdd3,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce1d,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce31,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1498c0,(char **)0x1);
LAB_00116d5e:
      bVar13 = true;
    }
    else {
      if ((0x135 < param_1) && (param_3 == 8)) goto LAB_00116d5e;
      if ((param_1 < 0x8c) || (!bVar12)) goto LAB_00114cf3;
LAB_0011426c:
      bVar13 = false;
    }
    TSymbolTable::setVariableExtensions(param_6,"gl_NumSubgroups",1,&E_GL_KHR_shader_subgroup_basic)
    ;
    TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupID",1,&E_GL_KHR_shader_subgroup_basic);
    TSymbolTable::setVariableExtensions(param_6,"gl_SubgroupSize",1,&E_GL_KHR_shader_subgroup_basic)
    ;
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupInvocationID",1,&E_GL_KHR_shader_subgroup_basic);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupEqMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupGeMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupGtMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupLeMask",1,&E_GL_KHR_shader_subgroup_ballot);
    TSymbolTable::setVariableExtensions
              (param_6,"gl_SubgroupLtMask",1,&E_GL_KHR_shader_subgroup_ballot);
    BuiltInVariable("gl_NumSubgroups",7,param_6);
    BuiltInVariable("gl_SubgroupID",8,param_6);
    BuiltInVariable("gl_SubgroupSize",0x10,param_6);
    BuiltInVariable("gl_SubgroupInvocationID",0x11,param_6);
    BuiltInVariable("gl_SubgroupEqMask",0x12,param_6);
    BuiltInVariable("gl_SubgroupGeMask",0x13,param_6);
    BuiltInVariable("gl_SubgroupGtMask",0x14,param_6);
    BuiltInVariable("gl_SubgroupLeMask",0x15,param_6);
    BuiltInVariable("gl_SubgroupLtMask",0x16,param_6);
    TSymbolTable::setFunctionExtensions((char *)param_6,0x11ce80,(char **)0x1);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpsPerSMNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_SMCountNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDNV",1,&E_GL_NV_shader_sm_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_SMIDNV",1,&E_GL_NV_shader_sm_builtins);
    BuiltInVariable("gl_WarpsPerSMNV",0x87,param_6);
    BuiltInVariable("gl_SMCountNV",0x88,param_6);
    BuiltInVariable("gl_WarpIDNV",0x89,param_6);
    BuiltInVariable("gl_SMIDNV",0x8a,param_6);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreCountARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_CoreMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpIDARM",1,&E_GL_ARM_shader_core_builtins);
    TSymbolTable::setVariableExtensions(param_6,"gl_WarpMaxIDARM",1,&E_GL_ARM_shader_core_builtins);
    BuiltInVariable("gl_CoreCountARM",0x95,param_6);
    BuiltInVariable("gl_CoreIDARM",0x96,param_6);
    BuiltInVariable("gl_CoreMaxIDARM",0x97,param_6);
    BuiltInVariable("gl_WarpIDARM",0x98,param_6);
    BuiltInVariable("gl_WarpMaxIDARM",0x99,param_6);
    if ((bVar13) || (bVar3)) goto LAB_00114c90;
LAB_00114cf3:
    if ((0x1cb < param_1) && (bVar12)) {
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1496b8,(char **)0x1);
      TSymbolTable::setFunctionExtensions((char *)param_6,0x1496e0,(char **)0x1);
    }
  }
  relateTabledBuiltins(this,param_1,param_3,param_4,param_5,param_6);
  lVar5 = *(long *)param_6;
  if (*(long *)(param_6 + 8) != lVar5) {
    uVar8 = 0;
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"doubleBitsToInt64",0xe9);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"doubleBitsToUint64",0xea);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"int64BitsToDouble",0xeb);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
        if (lVar5 != *(long *)(param_6 + 8)) {
          uVar8 = 0;
          do {
            glslang::TSymbolTableLevel::relateToOperator
                      (*(undefined8 *)(lVar5 + uVar8 * 8),"uint64BitsToDouble",0xec);
            lVar5 = *(long *)param_6;
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
          if (lVar5 != *(long *)(param_6 + 8)) {
            uVar8 = 0;
            do {
              glslang::TSymbolTableLevel::relateToOperator
                        (*(undefined8 *)(lVar5 + uVar8 * 8),"halfBitsToInt16",0xed);
              lVar5 = *(long *)param_6;
              uVar8 = (ulong)((int)uVar8 + 1);
            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
            if (lVar5 != *(long *)(param_6 + 8)) {
              uVar8 = 0;
              do {
                glslang::TSymbolTableLevel::relateToOperator
                          (*(undefined8 *)(lVar5 + uVar8 * 8),"halfBitsToUint16",0xee);
                lVar5 = *(long *)param_6;
                uVar8 = (ulong)((int)uVar8 + 1);
              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
              if (lVar5 != *(long *)(param_6 + 8)) {
                uVar8 = 0;
                do {
                  glslang::TSymbolTableLevel::relateToOperator
                            (*(undefined8 *)(lVar5 + uVar8 * 8),"float16BitsToInt16",0xed);
                  lVar5 = *(long *)param_6;
                  uVar8 = (ulong)((int)uVar8 + 1);
                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                if (lVar5 != *(long *)(param_6 + 8)) {
                  uVar8 = 0;
                  do {
                    glslang::TSymbolTableLevel::relateToOperator
                              (*(undefined8 *)(lVar5 + uVar8 * 8),"float16BitsToUint16",0xee);
                    lVar5 = *(long *)param_6;
                    uVar8 = (ulong)((int)uVar8 + 1);
                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                  if (lVar5 != *(long *)(param_6 + 8)) {
                    uVar8 = 0;
                    do {
                      glslang::TSymbolTableLevel::relateToOperator
                                (*(undefined8 *)(lVar5 + uVar8 * 8),"int16BitsToFloat16",0xef);
                      lVar5 = *(long *)param_6;
                      uVar8 = (ulong)((int)uVar8 + 1);
                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                    if (lVar5 != *(long *)(param_6 + 8)) {
                      uVar8 = 0;
                      do {
                        glslang::TSymbolTableLevel::relateToOperator
                                  (*(undefined8 *)(lVar5 + uVar8 * 8),"uint16BitsToFloat16",0xf0);
                        lVar5 = *(long *)param_6;
                        uVar8 = (ulong)((int)uVar8 + 1);
                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                      if (lVar5 != *(long *)(param_6 + 8)) {
                        uVar8 = 0;
                        do {
                          glslang::TSymbolTableLevel::relateToOperator
                                    (*(undefined8 *)(lVar5 + uVar8 * 8),"int16BitsToHalf",0xef);
                          lVar5 = *(long *)param_6;
                          uVar8 = (ulong)((int)uVar8 + 1);
                        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                        if (lVar5 != *(long *)(param_6 + 8)) {
                          uVar8 = 0;
                          do {
                            glslang::TSymbolTableLevel::relateToOperator
                                      (*(undefined8 *)(lVar5 + uVar8 * 8),"uint16BitsToHalf",0xf0);
                            lVar5 = *(long *)param_6;
                            uVar8 = (ulong)((int)uVar8 + 1);
                          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                          if (lVar5 != *(long *)(param_6 + 8)) {
                            uVar8 = 0;
                            do {
                              glslang::TSymbolTableLevel::relateToOperator
                                        (*(undefined8 *)(lVar5 + uVar8 * 8),"packSnorm4x8",0xf5);
                              lVar5 = *(long *)param_6;
                              uVar8 = (ulong)((int)uVar8 + 1);
                            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                            if (lVar5 != *(long *)(param_6 + 8)) {
                              uVar8 = 0;
                              do {
                                glslang::TSymbolTableLevel::relateToOperator
                                          (*(undefined8 *)(lVar5 + uVar8 * 8),"unpackSnorm4x8",0xf6)
                                ;
                                lVar5 = *(long *)param_6;
                                uVar8 = (ulong)((int)uVar8 + 1);
                              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                              if (lVar5 != *(long *)(param_6 + 8)) {
                                uVar8 = 0;
                                do {
                                  glslang::TSymbolTableLevel::relateToOperator
                                            (*(undefined8 *)(lVar5 + uVar8 * 8),"packUnorm4x8",0xf7)
                                  ;
                                  lVar5 = *(long *)param_6;
                                  uVar8 = (ulong)((int)uVar8 + 1);
                                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                if (lVar5 != *(long *)(param_6 + 8)) {
                                  uVar8 = 0;
                                  do {
                                    glslang::TSymbolTableLevel::relateToOperator
                                              (*(undefined8 *)(lVar5 + uVar8 * 8),"unpackUnorm4x8",
                                               0xf8);
                                    lVar5 = *(long *)param_6;
                                    uVar8 = (ulong)((int)uVar8 + 1);
                                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                    uVar8 = 0;
                                    do {
                                      glslang::TSymbolTableLevel::relateToOperator
                                                (*(undefined8 *)(lVar5 + uVar8 * 8),"packDouble2x32"
                                                 ,0xfb);
                                      lVar5 = *(long *)param_6;
                                      uVar8 = (ulong)((int)uVar8 + 1);
                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                      uVar8 = 0;
                                      do {
                                        glslang::TSymbolTableLevel::relateToOperator
                                                  (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                   "unpackDouble2x32",0xfc);
                                        lVar5 = *(long *)param_6;
                                        uVar8 = (ulong)((int)uVar8 + 1);
                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3))
                                      ;
                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                        uVar8 = 0;
                                        do {
                                          glslang::TSymbolTableLevel::relateToOperator
                                                    (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                     "packInt2x32",0xfd);
                                          lVar5 = *(long *)param_6;
                                          uVar8 = (ulong)((int)uVar8 + 1);
                                        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3
                                                                ));
                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                          uVar8 = 0;
                                          do {
                                            glslang::TSymbolTableLevel::relateToOperator
                                                      (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                       "unpackInt2x32",0xfe);
                                            lVar5 = *(long *)param_6;
                                            uVar8 = (ulong)((int)uVar8 + 1);
                                          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >>
                                                                  3));
                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                            uVar8 = 0;
                                            do {
                                              glslang::TSymbolTableLevel::relateToOperator
                                                        (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                         "packUint2x32",0xff);
                                              lVar5 = *(long *)param_6;
                                              uVar8 = (ulong)((int)uVar8 + 1);
                                            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5
                                                                    >> 3));
                                            if (lVar5 != *(long *)(param_6 + 8)) {
                                              uVar8 = 0;
                                              do {
                                                glslang::TSymbolTableLevel::relateToOperator
                                                          (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                           "unpackUint2x32",0x100);
                                                lVar5 = *(long *)param_6;
                                                uVar8 = (ulong)((int)uVar8 + 1);
                                              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                       lVar5 >> 3));
                                              if (lVar5 != *(long *)(param_6 + 8)) {
                                                uVar8 = 0;
                                                do {
                                                  glslang::TSymbolTableLevel::relateToOperator
                                                            (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                             "packInt2x16",0x103);
                                                  lVar5 = *(long *)param_6;
                                                  uVar8 = (ulong)((int)uVar8 + 1);
                                                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                         lVar5 >> 3));
                                                if (lVar5 != *(long *)(param_6 + 8)) {
                                                  uVar8 = 0;
                                                  do {
                                                    glslang::TSymbolTableLevel::relateToOperator
                                                              (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                               "unpackInt2x16",0x104);
                                                    lVar5 = *(long *)param_6;
                                                    uVar8 = (ulong)((int)uVar8 + 1);
                                                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                           lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "packUint2x16",0x105);
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),
                                                                   "unpackUint2x16",0x106);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
                                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                                        uVar8 = 0;
                                                        do {
                                                          glslang::TSymbolTableLevel::
                                                          relateToOperator(*(undefined8 *)
                                                                            (lVar5 + uVar8 * 8),
                                                                           "packInt4x16",0x107);
                                                          lVar5 = *(long *)param_6;
                                                          uVar8 = (ulong)((int)uVar8 + 1);
                                                        } while (uVar8 < (ulong)(*(long *)(param_6 +
                                                                                          8) - lVar5
                                                                                >> 3));
                                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                                          uVar8 = 0;
                                                          do {
                                                            glslang::TSymbolTableLevel::
                                                            relateToOperator(*(undefined8 *)
                                                                              (lVar5 + uVar8 * 8),
                                                                             "unpackInt4x16",0x108);
                                                            lVar5 = *(long *)param_6;
                                                            uVar8 = (ulong)((int)uVar8 + 1);
                                                          } while (uVar8 < (ulong)(*(long *)(param_6
                                                                                            + 8) -
                                                                                   lVar5 >> 3));
                                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                                            uVar8 = 0;
                                                            do {
                                                              glslang::TSymbolTableLevel::
                                                              relateToOperator(*(undefined8 *)
                                                                                (lVar5 + uVar8 * 8),
                                                                               "packUint4x16",0x109)
                                                              ;
                                                              lVar5 = *(long *)param_6;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar8 < (ulong)(*(long *)(
                                                  param_6 + 8) - lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "unpackUint4x16",0x10a);
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),
                                                                   "packFloat2x16",0x101);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
                                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                                        uVar8 = 0;
                                                        do {
                                                          glslang::TSymbolTableLevel::
                                                          relateToOperator(*(undefined8 *)
                                                                            (lVar5 + uVar8 * 8),
                                                                           "unpackFloat2x16",0x102);
                                                          lVar5 = *(long *)param_6;
                                                          uVar8 = (ulong)((int)uVar8 + 1);
                                                        } while (uVar8 < (ulong)(*(long *)(param_6 +
                                                                                          8) - lVar5
                                                                                >> 3));
                                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                                          uVar8 = 0;
                                                          do {
                                                            glslang::TSymbolTableLevel::
                                                            relateToOperator(*(undefined8 *)
                                                                              (lVar5 + uVar8 * 8),
                                                                             "pack16",0x10b);
                                                            lVar5 = *(long *)param_6;
                                                            uVar8 = (ulong)((int)uVar8 + 1);
                                                          } while (uVar8 < (ulong)(*(long *)(param_6
                                                                                            + 8) -
                                                                                   lVar5 >> 3));
                                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                                            uVar8 = 0;
                                                            do {
                                                              glslang::TSymbolTableLevel::
                                                              relateToOperator(*(undefined8 *)
                                                                                (lVar5 + uVar8 * 8),
                                                                               "pack32",0x10c);
                                                              lVar5 = *(long *)param_6;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar8 < (ulong)(*(long *)(
                                                  param_6 + 8) - lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "pack64",0x10d);
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),"unpack32",
                                                                   0x10e);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
                                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                                        uVar8 = 0;
                                                        do {
                                                          glslang::TSymbolTableLevel::
                                                          relateToOperator(*(undefined8 *)
                                                                            (lVar5 + uVar8 * 8),
                                                                           "unpack16",0x10f);
                                                          lVar5 = *(long *)param_6;
                                                          uVar8 = (ulong)((int)uVar8 + 1);
                                                        } while (uVar8 < (ulong)(*(long *)(param_6 +
                                                                                          8) - lVar5
                                                                                >> 3));
                                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                                          uVar8 = 0;
                                                          do {
                                                            glslang::TSymbolTableLevel::
                                                            relateToOperator(*(undefined8 *)
                                                                              (lVar5 + uVar8 * 8),
                                                                             "unpack8",0x110);
                                                            lVar5 = *(long *)param_6;
                                                            uVar8 = (ulong)((int)uVar8 + 1);
                                                          } while (uVar8 < (ulong)(*(long *)(param_6
                                                                                            + 8) -
                                                                                   lVar5 >> 3));
                                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                                            uVar8 = 0;
                                                            do {
                                                              glslang::TSymbolTableLevel::
                                                              relateToOperator(*(undefined8 *)
                                                                                (lVar5 + uVar8 * 8),
                                                                               "controlBarrier",
                                                                               0x134);
                                                              lVar5 = *(long *)param_6;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar8 < (ulong)(*(long *)(
                                                  param_6 + 8) - lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "memoryBarrierAtomicCounter",0x136)
                                                      ;
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),
                                                                   "memoryBarrierImage",0x138);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
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
  if ((char)param_4[4] != '\0') {
    TSymbolTable::relateToOperator(param_6,"memoryBarrierAtomicCounter",0x137);
    lVar5 = *(long *)param_6;
  }
  if (*(long *)(param_6 + 8) != lVar5) {
    uVar8 = 0;
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"atomicLoad",0x1b6);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"atomicStore",0x1b7);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"atomicCounterIncrement",0x1b8);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      }
    }
  }
  uVar8 = 0;
  TSymbolTable::relateToOperator(param_6,"atomicCounterDecrement",0x1b9);
  lVar5 = *(long *)param_6;
  if (*(long *)(param_6 + 8) != lVar5) {
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"atomicCounter",0x1ba);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
  }
  if ((char)param_4[4] != '\0') {
    TSymbolTable::relateToOperator(param_6,"atomicCounterIncrement",0);
    TSymbolTable::relateToOperator(param_6,"atomicCounterDecrement",0);
    TSymbolTable::relateToOperator(param_6,"atomicCounter",0);
    lVar5 = *(long *)param_6;
  }
  if (*(long *)(param_6 + 8) != lVar5) {
    uVar8 = 0;
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"clockARB",0x348);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"clock2x32ARB",0x348);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"clockRealtimeEXT",0x349);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
        if (lVar5 != *(long *)(param_6 + 8)) {
          uVar8 = 0;
          do {
            glslang::TSymbolTableLevel::relateToOperator
                      (*(undefined8 *)(lVar5 + uVar8 * 8),"clockRealtime2x32EXT",0x349);
            lVar5 = *(long *)param_6;
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
        }
      }
    }
  }
  if (param_1 == 0x1c2 && bVar12) {
    TSymbolTable::relateToOperator(param_6,"atomicCounterAddARB",0x1bb);
    TSymbolTable::relateToOperator(param_6,"atomicCounterSubtractARB",0x1bc);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMinARB",0x1bd);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMaxARB",0x1be);
    TSymbolTable::relateToOperator(param_6,"atomicCounterAndARB",0x1bf);
    TSymbolTable::relateToOperator(param_6,"atomicCounterOrARB",0x1c0);
    TSymbolTable::relateToOperator(param_6,"atomicCounterXorARB",0x1c1);
    TSymbolTable::relateToOperator(param_6,"atomicCounterExchangeARB",0x1c2);
    TSymbolTable::relateToOperator(param_6,"atomicCounterCompSwapARB",0x1c3);
LAB_00110f84:
    bVar3 = false;
  }
  else {
    bVar3 = 0x1cb < param_1 && bVar12;
    if (0x1cb >= param_1 || !bVar12) goto LAB_00110f84;
    TSymbolTable::relateToOperator(param_6,"atomicCounterAdd",0x1bb);
    TSymbolTable::relateToOperator(param_6,"atomicCounterSubtract",0x1bc);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMin",0x1bd);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMax",0x1be);
    TSymbolTable::relateToOperator(param_6,"atomicCounterAnd",0x1bf);
    TSymbolTable::relateToOperator(param_6,"atomicCounterOr",0x1c0);
    TSymbolTable::relateToOperator(param_6,"atomicCounterXor",0x1c1);
    TSymbolTable::relateToOperator(param_6,"atomicCounterExchange",0x1c2);
    TSymbolTable::relateToOperator(param_6,"atomicCounterCompSwap",0x1c3);
  }
  if ((char)param_4[4] != '\0') {
    TSymbolTable::relateToOperator(param_6,"atomicCounterAdd",0x1ad);
    TSymbolTable::relateToOperator(param_6,"atomicCounterSubtract",0x1ae);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMin",0x1af);
    TSymbolTable::relateToOperator(param_6,"atomicCounterMax",0x1b0);
    TSymbolTable::relateToOperator(param_6,"atomicCounterAnd",0x1b1);
    TSymbolTable::relateToOperator(param_6,"atomicCounterOr",0x1b2);
    TSymbolTable::relateToOperator(param_6,"atomicCounterXor",0x1b3);
    TSymbolTable::relateToOperator(param_6,"atomicCounterExchange",0x1b4);
    TSymbolTable::relateToOperator(param_6,"atomicCounterCompSwap",0x1b5);
  }
  lVar5 = *(long *)param_6;
  if (*(long *)(param_6 + 8) != lVar5) {
    uVar8 = 0;
    do {
      glslang::TSymbolTableLevel::relateToOperator(*(undefined8 *)(lVar5 + uVar8 * 8),&_LC618,0xe2);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"frexp",0xe3);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"ldexp",0xe4);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
        if (lVar5 != *(long *)(param_6 + 8)) {
          uVar8 = 0;
          do {
            glslang::TSymbolTableLevel::relateToOperator
                      (*(undefined8 *)(lVar5 + uVar8 * 8),"uaddCarry",0x2ae);
            lVar5 = *(long *)param_6;
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
          if (lVar5 != *(long *)(param_6 + 8)) {
            uVar8 = 0;
            do {
              glslang::TSymbolTableLevel::relateToOperator
                        (*(undefined8 *)(lVar5 + uVar8 * 8),"usubBorrow",0x2af);
              lVar5 = *(long *)param_6;
              uVar8 = (ulong)((int)uVar8 + 1);
            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
            if (lVar5 != *(long *)(param_6 + 8)) {
              uVar8 = 0;
              do {
                glslang::TSymbolTableLevel::relateToOperator
                          (*(undefined8 *)(lVar5 + uVar8 * 8),"umulExtended",0x2b0);
                lVar5 = *(long *)param_6;
                uVar8 = (ulong)((int)uVar8 + 1);
              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
              if (lVar5 != *(long *)(param_6 + 8)) {
                uVar8 = 0;
                do {
                  glslang::TSymbolTableLevel::relateToOperator
                            (*(undefined8 *)(lVar5 + uVar8 * 8),"imulExtended",0x2b1);
                  lVar5 = *(long *)param_6;
                  uVar8 = (ulong)((int)uVar8 + 1);
                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                if (lVar5 != *(long *)(param_6 + 8)) {
                  uVar8 = 0;
                  do {
                    glslang::TSymbolTableLevel::relateToOperator
                              (*(undefined8 *)(lVar5 + uVar8 * 8),"bitfieldExtract",0x2b2);
                    lVar5 = *(long *)param_6;
                    uVar8 = (ulong)((int)uVar8 + 1);
                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                  if (lVar5 != *(long *)(param_6 + 8)) {
                    uVar8 = 0;
                    do {
                      glslang::TSymbolTableLevel::relateToOperator
                                (*(undefined8 *)(lVar5 + uVar8 * 8),"bitfieldInsert",0x2b3);
                      lVar5 = *(long *)param_6;
                      uVar8 = (ulong)((int)uVar8 + 1);
                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                    if (lVar5 != *(long *)(param_6 + 8)) {
                      uVar8 = 0;
                      do {
                        glslang::TSymbolTableLevel::relateToOperator
                                  (*(undefined8 *)(lVar5 + uVar8 * 8),"bitfieldReverse",0x2b4);
                        lVar5 = *(long *)param_6;
                        uVar8 = (ulong)((int)uVar8 + 1);
                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                      if (lVar5 != *(long *)(param_6 + 8)) {
                        uVar8 = 0;
                        do {
                          glslang::TSymbolTableLevel::relateToOperator
                                    (*(undefined8 *)(lVar5 + uVar8 * 8),"bitCount",0x2b5);
                          lVar5 = *(long *)param_6;
                          uVar8 = (ulong)((int)uVar8 + 1);
                        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                        if (lVar5 != *(long *)(param_6 + 8)) {
                          uVar8 = 0;
                          do {
                            glslang::TSymbolTableLevel::relateToOperator
                                      (*(undefined8 *)(lVar5 + uVar8 * 8),"findLSB",0x2b6);
                            lVar5 = *(long *)param_6;
                            uVar8 = (ulong)((int)uVar8 + 1);
                          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                          if (lVar5 != *(long *)(param_6 + 8)) {
                            uVar8 = 0;
                            do {
                              glslang::TSymbolTableLevel::relateToOperator
                                        (*(undefined8 *)(lVar5 + uVar8 * 8),"findMSB",0x2b7);
                              lVar5 = *(long *)param_6;
                              uVar8 = (ulong)((int)uVar8 + 1);
                            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                            if (lVar5 != *(long *)(param_6 + 8)) {
                              uVar8 = 0;
                              do {
                                glslang::TSymbolTableLevel::relateToOperator
                                          (*(undefined8 *)(lVar5 + uVar8 * 8),"helperInvocationEXT",
                                           0x1ce);
                                lVar5 = *(long *)param_6;
                                uVar8 = (ulong)((int)uVar8 + 1);
                              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                              if (lVar5 != *(long *)(param_6 + 8)) {
                                uVar8 = 0;
                                do {
                                  glslang::TSymbolTableLevel::relateToOperator
                                            (*(undefined8 *)(lVar5 + uVar8 * 8),"countLeadingZeros",
                                             0x2b8);
                                  lVar5 = *(long *)param_6;
                                  uVar8 = (ulong)((int)uVar8 + 1);
                                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                if (lVar5 != *(long *)(param_6 + 8)) {
                                  uVar8 = 0;
                                  do {
                                    glslang::TSymbolTableLevel::relateToOperator
                                              (*(undefined8 *)(lVar5 + uVar8 * 8),
                                               "countTrailingZeros",0x2b9);
                                    lVar5 = *(long *)param_6;
                                    uVar8 = (ulong)((int)uVar8 + 1);
                                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                    uVar8 = 0;
                                    do {
                                      glslang::TSymbolTableLevel::relateToOperator
                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                 "absoluteDifference",0x2ba);
                                      lVar5 = *(long *)param_6;
                                      uVar8 = (ulong)((int)uVar8 + 1);
                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                      uVar8 = 0;
                                      do {
                                        glslang::TSymbolTableLevel::relateToOperator
                                                  (*(undefined8 *)(lVar5 + uVar8 * 8),"addSaturate",
                                                   699);
                                        lVar5 = *(long *)param_6;
                                        uVar8 = (ulong)((int)uVar8 + 1);
                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3))
                                      ;
                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                        uVar8 = 0;
                                        do {
                                          glslang::TSymbolTableLevel::relateToOperator
                                                    (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                     "subtractSaturate",700);
                                          lVar5 = *(long *)param_6;
                                          uVar8 = (ulong)((int)uVar8 + 1);
                                        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3
                                                                ));
                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                          uVar8 = 0;
                                          do {
                                            glslang::TSymbolTableLevel::relateToOperator
                                                      (*(undefined8 *)(lVar5 + uVar8 * 8),"average",
                                                       0x2bd);
                                            lVar5 = *(long *)param_6;
                                            uVar8 = (ulong)((int)uVar8 + 1);
                                          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >>
                                                                  3));
                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                            uVar8 = 0;
                                            do {
                                              glslang::TSymbolTableLevel::relateToOperator
                                                        (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                         "averageRounded",0x2be);
                                              lVar5 = *(long *)param_6;
                                              uVar8 = (ulong)((int)uVar8 + 1);
                                            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5
                                                                    >> 3));
                                            if (lVar5 != *(long *)(param_6 + 8)) {
                                              uVar8 = 0;
                                              do {
                                                glslang::TSymbolTableLevel::relateToOperator
                                                          (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                           "multiply32x16",0x2bf);
                                                lVar5 = *(long *)param_6;
                                                uVar8 = (ulong)((int)uVar8 + 1);
                                              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                       lVar5 >> 3));
                                              if (lVar5 != *(long *)(param_6 + 8)) {
                                                uVar8 = 0;
                                                do {
                                                  glslang::TSymbolTableLevel::relateToOperator
                                                            (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                             "debugPrintfEXT",0x1cf);
                                                  lVar5 = *(long *)param_6;
                                                  uVar8 = (ulong)((int)uVar8 + 1);
                                                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                         lVar5 >> 3));
                                                if (lVar5 != *(long *)(param_6 + 8)) {
                                                  uVar8 = 0;
                                                  do {
                                                    glslang::TSymbolTableLevel::relateToOperator
                                                              (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                               "assumeEXT",0x346);
                                                    lVar5 = *(long *)param_6;
                                                    uVar8 = (ulong)((int)uVar8 + 1);
                                                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) -
                                                                           lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "expectEXT",0x347);
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),"imageSize",
                                                                   0x25a);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
                                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                                        uVar8 = 0;
                                                        do {
                                                          glslang::TSymbolTableLevel::
                                                          relateToOperator(*(undefined8 *)
                                                                            (lVar5 + uVar8 * 8),
                                                                           "imageSamples",0x25b);
                                                          lVar5 = *(long *)param_6;
                                                          uVar8 = (ulong)((int)uVar8 + 1);
                                                        } while (uVar8 < (ulong)(*(long *)(param_6 +
                                                                                          8) - lVar5
                                                                                >> 3));
                                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                                          uVar8 = 0;
                                                          do {
                                                            glslang::TSymbolTableLevel::
                                                            relateToOperator(*(undefined8 *)
                                                                              (lVar5 + uVar8 * 8),
                                                                             "imageLoad",0x25c);
                                                            lVar5 = *(long *)param_6;
                                                            uVar8 = (ulong)((int)uVar8 + 1);
                                                          } while (uVar8 < (ulong)(*(long *)(param_6
                                                                                            + 8) -
                                                                                   lVar5 >> 3));
                                                          if (lVar5 != *(long *)(param_6 + 8)) {
                                                            uVar8 = 0;
                                                            do {
                                                              glslang::TSymbolTableLevel::
                                                              relateToOperator(*(undefined8 *)
                                                                                (lVar5 + uVar8 * 8),
                                                                               "imageStore",0x25d);
                                                              lVar5 = *(long *)param_6;
                                                              uVar8 = (ulong)((int)uVar8 + 1);
                                                            } while (uVar8 < (ulong)(*(long *)(
                                                  param_6 + 8) - lVar5 >> 3));
                                                  if (lVar5 != *(long *)(param_6 + 8)) {
                                                    uVar8 = 0;
                                                    do {
                                                      glslang::TSymbolTableLevel::relateToOperator
                                                                (*(undefined8 *)(lVar5 + uVar8 * 8),
                                                                 "imageAtomicAdd",0x260);
                                                      lVar5 = *(long *)param_6;
                                                      uVar8 = (ulong)((int)uVar8 + 1);
                                                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8)
                                                                             - lVar5 >> 3));
                                                    if (lVar5 != *(long *)(param_6 + 8)) {
                                                      uVar8 = 0;
                                                      do {
                                                        glslang::TSymbolTableLevel::relateToOperator
                                                                  (*(undefined8 *)
                                                                    (lVar5 + uVar8 * 8),
                                                                   "imageAtomicMin",0x261);
                                                        lVar5 = *(long *)param_6;
                                                        uVar8 = (ulong)((int)uVar8 + 1);
                                                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8
                                                                                        ) - lVar5 >>
                                                                              3));
                                                      if (lVar5 != *(long *)(param_6 + 8)) {
                                                        uVar8 = 0;
                                                        do {
                                                          glslang::TSymbolTableLevel::
                                                          relateToOperator(*(undefined8 *)
                                                                            (lVar5 + uVar8 * 8),
                                                                           "imageAtomicMax",0x262);
                                                          lVar5 = *(long *)param_6;
                                                          uVar8 = (ulong)((int)uVar8 + 1);
                                                        } while (uVar8 < (ulong)(*(long *)(param_6 +
                                                                                          8) - lVar5
                                                                                >> 3));
                                                        if (lVar5 != *(long *)(param_6 + 8)) {
                                                          uVar8 = 0;
                                                          do {
                                                            glslang::TSymbolTableLevel::
                                                            relateToOperator(*(undefined8 *)
                                                                              (lVar5 + uVar8 * 8),
                                                                             "imageAtomicAnd",0x263)
                                                            ;
                                                            lVar5 = *(long *)param_6;
                                                            uVar8 = (ulong)((int)uVar8 + 1);
                                                          } while (uVar8 < (ulong)(*(long *)(param_6
                                                                                            + 8) -
                                                                                   lVar5 >> 3));
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
  uVar8 = 0;
  TSymbolTable::relateToOperator(param_6,"imageAtomicOr",0x264);
  lVar5 = *(long *)param_6;
  if (*(long *)(param_6 + 8) != lVar5) {
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"imageAtomicXor",0x265);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"imageAtomicExchange",0x266);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"imageAtomicCompSwap",0x267);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
        if (lVar5 != *(long *)(param_6 + 8)) {
          uVar8 = 0;
          do {
            glslang::TSymbolTableLevel::relateToOperator
                      (*(undefined8 *)(lVar5 + uVar8 * 8),"imageAtomicLoad",0x268);
            lVar5 = *(long *)param_6;
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
          if (lVar5 != *(long *)(param_6 + 8)) {
            uVar8 = 0;
            do {
              glslang::TSymbolTableLevel::relateToOperator
                        (*(undefined8 *)(lVar5 + uVar8 * 8),"imageAtomicStore",0x269);
              lVar5 = *(long *)param_6;
              uVar8 = (ulong)((int)uVar8 + 1);
            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
            if (lVar5 != *(long *)(param_6 + 8)) {
              uVar8 = 0;
              do {
                glslang::TSymbolTableLevel::relateToOperator
                          (*(undefined8 *)(lVar5 + uVar8 * 8),"subpassLoad",0x26a);
                lVar5 = *(long *)param_6;
                uVar8 = (ulong)((int)uVar8 + 1);
              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
              if (lVar5 != *(long *)(param_6 + 8)) {
                uVar8 = 0;
                do {
                  glslang::TSymbolTableLevel::relateToOperator
                            (*(undefined8 *)(lVar5 + uVar8 * 8),"subpassLoadMS",0x26b);
                  lVar5 = *(long *)param_6;
                  uVar8 = (ulong)((int)uVar8 + 1);
                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                if (lVar5 != *(long *)(param_6 + 8)) {
                  uVar8 = 0;
                  do {
                    glslang::TSymbolTableLevel::relateToOperator
                              (*(undefined8 *)(lVar5 + uVar8 * 8),"textureGather",0x284);
                    lVar5 = *(long *)param_6;
                    uVar8 = (ulong)((int)uVar8 + 1);
                  } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                  if (lVar5 != *(long *)(param_6 + 8)) {
                    uVar8 = 0;
                    do {
                      glslang::TSymbolTableLevel::relateToOperator
                                (*(undefined8 *)(lVar5 + uVar8 * 8),"textureGatherOffset",0x285);
                      lVar5 = *(long *)param_6;
                      uVar8 = (ulong)((int)uVar8 + 1);
                    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                    if (lVar5 != *(long *)(param_6 + 8)) {
                      uVar8 = 0;
                      do {
                        glslang::TSymbolTableLevel::relateToOperator
                                  (*(undefined8 *)(lVar5 + uVar8 * 8),"textureGatherOffsets",0x286);
                        lVar5 = *(long *)param_6;
                        uVar8 = (ulong)((int)uVar8 + 1);
                      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                      if (lVar5 != *(long *)(param_6 + 8)) {
                        uVar8 = 0;
                        do {
                          glslang::TSymbolTableLevel::relateToOperator
                                    (*(undefined8 *)(lVar5 + uVar8 * 8),"noise1",0x12f);
                          lVar5 = *(long *)param_6;
                          uVar8 = (ulong)((int)uVar8 + 1);
                        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                        if (lVar5 != *(long *)(param_6 + 8)) {
                          uVar8 = 0;
                          do {
                            glslang::TSymbolTableLevel::relateToOperator
                                      (*(undefined8 *)(lVar5 + uVar8 * 8),"noise2",0x12f);
                            lVar5 = *(long *)param_6;
                            uVar8 = (ulong)((int)uVar8 + 1);
                          } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                          if (lVar5 != *(long *)(param_6 + 8)) {
                            uVar8 = 0;
                            do {
                              glslang::TSymbolTableLevel::relateToOperator
                                        (*(undefined8 *)(lVar5 + uVar8 * 8),"noise3",0x12f);
                              lVar5 = *(long *)param_6;
                              uVar8 = (ulong)((int)uVar8 + 1);
                            } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                            if (lVar5 != *(long *)(param_6 + 8)) {
                              uVar8 = 0;
                              do {
                                glslang::TSymbolTableLevel::relateToOperator
                                          (*(undefined8 *)(lVar5 + uVar8 * 8),"noise4",0x12f);
                                lVar5 = *(long *)param_6;
                                uVar8 = (ulong)((int)uVar8 + 1);
                              } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
                              if (lVar5 != *(long *)(param_6 + 8)) {
                                uVar8 = 0;
                                do {
                                  glslang::TSymbolTableLevel::relateToOperator
                                            (*(undefined8 *)(lVar5 + uVar8 * 8),"textureFootprintNV"
                                             ,0x2a6);
                                  lVar5 = *(long *)param_6;
                                  uVar8 = (ulong)((int)uVar8 + 1);
                                } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
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
  uVar8 = 0;
  TSymbolTable::relateToOperator(param_6,"textureFootprintClampNV",0x2a7);
  lVar5 = *(long *)param_6;
  if (*(long *)(param_6 + 8) != lVar5) {
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar5 + uVar8 * 8),"textureFootprintLodNV",0x2a8);
      lVar5 = *(long *)param_6;
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
    if (lVar5 != *(long *)(param_6 + 8)) {
      uVar8 = 0;
      do {
        glslang::TSymbolTableLevel::relateToOperator
                  (*(undefined8 *)(lVar5 + uVar8 * 8),"textureFootprintGradNV",0x2a9);
        lVar5 = *(long *)param_6;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      if (lVar5 != *(long *)(param_6 + 8)) {
        uVar8 = 0;
        do {
          glslang::TSymbolTableLevel::relateToOperator
                    (*(undefined8 *)(lVar5 + uVar8 * 8),"textureFootprintGradClampNV",0x2aa);
          lVar5 = *(long *)param_6;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(*(long *)(param_6 + 8) - lVar5 >> 3));
      }
    }
  }
  if (*param_4 != 0) {
LAB_00110d76:
    if (param_3 == 8) goto LAB_00110d81;
LAB_0010fd90:
    TSymbolTable::relateToOperator(param_6,"sparseTextureARB",0x291);
    TSymbolTable::relateToOperator(param_6,"sparseTextureLodARB",0x292);
    TSymbolTable::relateToOperator(param_6,"sparseTextureOffsetARB",0x293);
    TSymbolTable::relateToOperator(param_6,"sparseTexelFetchARB",0x294);
    TSymbolTable::relateToOperator(param_6,"sparseTexelFetchOffsetARB",0x295);
    TSymbolTable::relateToOperator(param_6,"sparseTextureLodOffsetARB",0x296);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGradARB",0x297);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGradOffsetARB",0x298);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherARB",0x299);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherOffsetARB",0x29a);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherOffsetsARB",0x29b);
    TSymbolTable::relateToOperator(param_6,"sparseImageLoadARB",0x26c);
    TSymbolTable::relateToOperator(param_6,"sparseTexelsResidentARB",0x29c);
    TSymbolTable::relateToOperator(param_6,"sparseTextureClampARB",0x29d);
    TSymbolTable::relateToOperator(param_6,"sparseTextureOffsetClampARB",0x29e);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGradClampARB",0x29f);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGradOffsetClampARB",0x2a0);
    TSymbolTable::relateToOperator(param_6,"textureClampARB",0x287);
    TSymbolTable::relateToOperator(param_6,"textureOffsetClampARB",0x288);
    TSymbolTable::relateToOperator(param_6,"textureGradClampARB",0x289);
    TSymbolTable::relateToOperator(param_6,"textureGradOffsetClampARB",0x28a);
    TSymbolTable::relateToOperator(param_6,"ballotARB",0x13b);
    TSymbolTable::relateToOperator(param_6,"readInvocationARB",0x13c);
    TSymbolTable::relateToOperator(param_6,"readFirstInvocationARB",0x13d);
    if (0x1ad < param_1) {
      TSymbolTable::relateToOperator(param_6,"anyInvocationARB",0x13e);
      TSymbolTable::relateToOperator(param_6,"allInvocationsARB",0x13f);
      TSymbolTable::relateToOperator(param_6,"allInvocationsEqualARB",0x140);
      if (0x1cb < param_1) {
        TSymbolTable::relateToOperator(param_6,"anyInvocation",0x13e);
        TSymbolTable::relateToOperator(param_6,"allInvocations",0x13f);
        TSymbolTable::relateToOperator(param_6,"allInvocationsEqual",0x140);
      }
    }
    TSymbolTable::relateToOperator(param_6,"minInvocationsAMD",0x194);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsAMD",0x195);
    TSymbolTable::relateToOperator(param_6,"addInvocationsAMD",0x196);
    TSymbolTable::relateToOperator(param_6,"minInvocationsNonUniformAMD",0x197);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsNonUniformAMD",0x198);
    TSymbolTable::relateToOperator(param_6,"addInvocationsNonUniformAMD",0x199);
    TSymbolTable::relateToOperator(param_6,"minInvocationsInclusiveScanAMD",0x19a);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsInclusiveScanAMD",0x19b);
    TSymbolTable::relateToOperator(param_6,"addInvocationsInclusiveScanAMD",0x19c);
    TSymbolTable::relateToOperator(param_6,"minInvocationsInclusiveScanNonUniformAMD",0x19d);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsInclusiveScanNonUniformAMD",0x19e);
    TSymbolTable::relateToOperator(param_6,"addInvocationsInclusiveScanNonUniformAMD",0x19f);
    TSymbolTable::relateToOperator(param_6,"minInvocationsExclusiveScanAMD",0x1a0);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsExclusiveScanAMD",0x1a1);
    TSymbolTable::relateToOperator(param_6,"addInvocationsExclusiveScanAMD",0x1a2);
    TSymbolTable::relateToOperator(param_6,"minInvocationsExclusiveScanNonUniformAMD",0x1a3);
    TSymbolTable::relateToOperator(param_6,"maxInvocationsExclusiveScanNonUniformAMD",0x1a4);
    TSymbolTable::relateToOperator(param_6,"addInvocationsExclusiveScanNonUniformAMD",0x1a5);
    TSymbolTable::relateToOperator(param_6,"swizzleInvocationsAMD",0x1a6);
    TSymbolTable::relateToOperator(param_6,"swizzleInvocationsMaskedAMD",0x1a7);
    TSymbolTable::relateToOperator(param_6,"writeInvocationAMD",0x1a8);
    TSymbolTable::relateToOperator(param_6,"mbcntAMD",0x1a9);
    TSymbolTable::relateToOperator(param_6,&_LC592,0x119);
    TSymbolTable::relateToOperator(param_6,&_LC593,0x11a);
    TSymbolTable::relateToOperator(param_6,&_LC594,0x11b);
    TSymbolTable::relateToOperator(param_6,"cubeFaceIndexAMD",0x1aa);
    TSymbolTable::relateToOperator(param_6,"cubeFaceCoordAMD",0x1ab);
    TSymbolTable::relateToOperator(param_6,"timeAMD",0x1ac);
    TSymbolTable::relateToOperator(param_6,"textureGatherLodAMD",0x28b);
    TSymbolTable::relateToOperator(param_6,"textureGatherLodOffsetAMD",0x28c);
    TSymbolTable::relateToOperator(param_6,"textureGatherLodOffsetsAMD",0x28d);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherLodAMD",0x2a1);
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherLodOffsetAMD",0x2a2);
    bVar12 = false;
    TSymbolTable::relateToOperator(param_6,"sparseTextureGatherLodOffsetsAMD",0x2a3);
    TSymbolTable::relateToOperator(param_6,"imageLoadLodAMD",0x25e);
    TSymbolTable::relateToOperator(param_6,"imageStoreLodAMD",0x25f);
    TSymbolTable::relateToOperator(param_6,"sparseImageLoadLodAMD",0x26d);
    TSymbolTable::relateToOperator(param_6,"fragmentMaskFetchAMD",0x28e);
    TSymbolTable::relateToOperator(param_6,"fragmentFetchAMD",0x28f);
    if (0x8b < param_1) {
      bVar13 = false;
      bVar12 = false;
      goto LAB_0011029f;
    }
LAB_00110da0:
    if (*param_4 == 0) {
      TSymbolTable::relateToOperator(param_6,"texture1DArray",0x276);
      TSymbolTable::relateToOperator(param_6,"texture2DArray",0x276);
      TSymbolTable::relateToOperator(param_6,"shadow1DArray",0x276);
      TSymbolTable::relateToOperator(param_6,"shadow2DArray",0x276);
      TSymbolTable::relateToOperator(param_6,"texture1DArrayLod",0x278);
      TSymbolTable::relateToOperator(param_6,"texture2DArrayLod",0x278);
      TSymbolTable::relateToOperator(param_6,"shadow1DArrayLod",0x278);
    }
    switch(param_5) {
    case 3:
      goto switchD_001109b3_caseD_3;
    case 4:
      if (399 < param_1) {
        TSymbolTable::relateToOperator(param_6,"dFdxFine",0x11f);
        TSymbolTable::relateToOperator(param_6,"dFdyFine",0x120);
        TSymbolTable::relateToOperator(param_6,"fwidthFine",0x121);
        TSymbolTable::relateToOperator(param_6,"dFdxCoarse",0x122);
        TSymbolTable::relateToOperator(param_6,"dFdyCoarse",0x123);
        TSymbolTable::relateToOperator(param_6,"fwidthCoarse",0x124);
      }
      goto switchD_001109b3_caseD_4;
    case 5:
      TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierShared",0x146);
      if (param_1 < 0x1c2) goto LAB_00115413;
LAB_00114f91:
      TSymbolTable::relateToOperator(param_6,&_LC717,0x11c);
      TSymbolTable::relateToOperator(param_6,&_LC718,0x11d);
      TSymbolTable::relateToOperator(param_6,"fwidth",0x11e);
      TSymbolTable::relateToOperator(param_6,"dFdxFine",0x11f);
      TSymbolTable::relateToOperator(param_6,"dFdyFine",0x120);
      TSymbolTable::relateToOperator(param_6,"fwidthFine",0x121);
      TSymbolTable::relateToOperator(param_6,"dFdxCoarse",0x122);
      TSymbolTable::relateToOperator(param_6,"dFdyCoarse",0x123);
      TSymbolTable::relateToOperator(param_6,"fwidthCoarse",0x124);
      goto LAB_00115045;
    case 6:
      goto switchD_001109b3_caseD_6;
    case 7:
      goto switchD_001109b3_caseD_7;
    case 8:
      goto switchD_001109b3_caseD_8;
    case 9:
    case 10:
      goto switchD_001109b3_caseD_9;
    case 0xb:
      goto switchD_001109b3_caseD_b;
    case 0xc:
      if (0x1c1 < param_1) {
        TSymbolTable::relateToOperator(param_6,"memoryBarrierShared",0x139);
        TSymbolTable::relateToOperator(param_6,"groupMemoryBarrier",0x13a);
        TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierShared",0x146);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
        uVar9 = 0x2c9;
        pcVar11 = "EmitMeshTasksEXT";
        goto LAB_00114f57;
      }
      goto switchD_001109b3_caseD_c;
    case 0xd:
      if (param_1 < 0x1c2) goto switchD_001109b3_caseD_d;
      TSymbolTable::relateToOperator(param_6,"writePackedPrimitiveIndices4x8NV",0x2c8);
      TSymbolTable::relateToOperator(param_6,"memoryBarrierShared",0x139);
      TSymbolTable::relateToOperator(param_6,"groupMemoryBarrier",0x13a);
      TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierShared",0x146);
      TSymbolTable::relateToOperator(param_6,"SetMeshOutputsEXT",0x2ca);
      goto LAB_001150bd;
    default:
      goto switchD_001109b3_default;
    }
  }
  if (param_3 != 8) {
    if (((param_1 == 0x8c || param_1 < 0x83) || (param_3 == 4)) &&
       (TSymbolTable::relateToOperator(param_6,"ftransform",0x12e), *param_4 == 0))
    goto LAB_001109ca;
    goto LAB_0010fd90;
  }
  if (param_1 == 100) {
LAB_001109ca:
    TSymbolTable::relateToOperator(param_6,"texture1D",0x276);
    TSymbolTable::relateToOperator(param_6,"texture1DGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"texture1DProj",0x277);
    TSymbolTable::relateToOperator(param_6,"texture1DProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"texture1DLod",0x278);
    TSymbolTable::relateToOperator(param_6,"texture1DProjLod",0x27e);
    TSymbolTable::relateToOperator(param_6,"texture2DRect",0x276);
    TSymbolTable::relateToOperator(param_6,"texture2DRectProj",0x277);
    TSymbolTable::relateToOperator(param_6,"texture2DRectGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"texture2DRectProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"shadow2DRect",0x276);
    TSymbolTable::relateToOperator(param_6,"shadow2DRectProj",0x277);
    TSymbolTable::relateToOperator(param_6,"shadow2DRectGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"shadow2DRectProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"texture2D",0x276);
    TSymbolTable::relateToOperator(param_6,"texture2DProj",0x277);
    TSymbolTable::relateToOperator(param_6,"texture2DGradEXT",0x280);
    TSymbolTable::relateToOperator(param_6,"texture2DGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"texture2DProjGradEXT",0x282);
    TSymbolTable::relateToOperator(param_6,"texture2DProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"texture2DLod",0x278);
    TSymbolTable::relateToOperator(param_6,"texture2DLodEXT",0x278);
    TSymbolTable::relateToOperator(param_6,"texture2DProjLod",0x27e);
    TSymbolTable::relateToOperator(param_6,"texture2DProjLodEXT",0x27e);
    TSymbolTable::relateToOperator(param_6,"texture3D",0x276);
    TSymbolTable::relateToOperator(param_6,"texture3DGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"texture3DProj",0x277);
    TSymbolTable::relateToOperator(param_6,"texture3DProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"texture3DLod",0x278);
    TSymbolTable::relateToOperator(param_6,"texture3DProjLod",0x27e);
    TSymbolTable::relateToOperator(param_6,"textureCube",0x276);
    TSymbolTable::relateToOperator(param_6,"textureCubeGradEXT",0x280);
    TSymbolTable::relateToOperator(param_6,"textureCubeGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"textureCubeLod",0x278);
    TSymbolTable::relateToOperator(param_6,"textureCubeLodEXT",0x278);
    TSymbolTable::relateToOperator(param_6,"shadow1D",0x276);
    TSymbolTable::relateToOperator(param_6,"shadow1DGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"shadow2D",0x276);
    TSymbolTable::relateToOperator(param_6,"shadow2DGradARB",0x280);
    TSymbolTable::relateToOperator(param_6,"shadow1DProj",0x277);
    TSymbolTable::relateToOperator(param_6,"shadow2DProj",0x277);
    TSymbolTable::relateToOperator(param_6,"shadow1DProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"shadow2DProjGradARB",0x282);
    TSymbolTable::relateToOperator(param_6,"shadow1DLod",0x278);
    TSymbolTable::relateToOperator(param_6,"shadow2DLod",0x278);
    TSymbolTable::relateToOperator(param_6,"shadow1DProjLod",0x27e);
    TSymbolTable::relateToOperator(param_6,"shadow2DProjLod",0x27e);
    goto LAB_00110d76;
  }
LAB_00110d81:
  if (param_1 < 0x136) {
    bVar12 = true;
    TSymbolTable::relateToOperator(param_6,"shadow2DEXT",0x276);
    TSymbolTable::relateToOperator(param_6,"shadow2DProjEXT",0x277);
  }
  else {
    bVar13 = true;
    bVar12 = true;
LAB_0011029f:
    TSymbolTable::relateToOperator(param_6,"subgroupBarrier",0x142);
    TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrier",0x143);
    TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierBuffer",0x144);
    TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierImage",0x145);
    TSymbolTable::relateToOperator(param_6,"subgroupElect",0x147);
    TSymbolTable::relateToOperator(param_6,"subgroupAll",0x148);
    TSymbolTable::relateToOperator(param_6,"subgroupAny",0x149);
    TSymbolTable::relateToOperator(param_6,"subgroupAllEqual",0x14a);
    TSymbolTable::relateToOperator(param_6,"subgroupBroadcast",0x14b);
    TSymbolTable::relateToOperator(param_6,"subgroupBroadcastFirst",0x14c);
    TSymbolTable::relateToOperator(param_6,"subgroupBallot",0x14d);
    TSymbolTable::relateToOperator(param_6,"subgroupInverseBallot",0x14e);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotBitExtract",0x14f);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotBitCount",0x150);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotInclusiveBitCount",0x151);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotExclusiveBitCount",0x152);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotFindLSB",0x153);
    TSymbolTable::relateToOperator(param_6,"subgroupBallotFindMSB",0x154);
    TSymbolTable::relateToOperator(param_6,"subgroupShuffle",0x155);
    TSymbolTable::relateToOperator(param_6,"subgroupShuffleXor",0x156);
    TSymbolTable::relateToOperator(param_6,"subgroupShuffleUp",0x157);
    TSymbolTable::relateToOperator(param_6,"subgroupShuffleDown",0x158);
    TSymbolTable::relateToOperator(param_6,"subgroupRotate",0x159);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredRotate",0x15a);
    TSymbolTable::relateToOperator(param_6,"subgroupAdd",0x15b);
    TSymbolTable::relateToOperator(param_6,"subgroupMul",0x15c);
    TSymbolTable::relateToOperator(param_6,"subgroupMin",0x15d);
    TSymbolTable::relateToOperator(param_6,"subgroupMax",0x15e);
    TSymbolTable::relateToOperator(param_6,"subgroupAnd",0x15f);
    TSymbolTable::relateToOperator(param_6,"subgroupOr",0x160);
    TSymbolTable::relateToOperator(param_6,"subgroupXor",0x161);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveAdd",0x162);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveMul",0x163);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveMin",0x164);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveMax",0x165);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveAnd",0x166);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveOr",0x167);
    TSymbolTable::relateToOperator(param_6,"subgroupInclusiveXor",0x168);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveAdd",0x169);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveMul",0x16a);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveMin",0x16b);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveMax",0x16c);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveAnd",0x16d);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveOr",0x16e);
    TSymbolTable::relateToOperator(param_6,"subgroupExclusiveXor",0x16f);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredAdd",0x170);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredMul",0x171);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredMin",0x172);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredMax",0x173);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredAnd",0x174);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredOr",0x175);
    TSymbolTable::relateToOperator(param_6,"subgroupClusteredXor",0x176);
    TSymbolTable::relateToOperator(param_6,"subgroupQuadBroadcast",0x177);
    TSymbolTable::relateToOperator(param_6,"subgroupQuadSwapHorizontal",0x178);
    TSymbolTable::relateToOperator(param_6,"subgroupQuadSwapVertical",0x179);
    TSymbolTable::relateToOperator(param_6,"subgroupQuadSwapDiagonal",0x17a);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionNV",0x17d);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedAddNV",0x17e);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedMulNV",0x17f);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedMinNV",0x180);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedMaxNV",0x181);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedAndNV",0x182);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedOrNV",0x183);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedXorNV",0x184);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveAddNV",0x185);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveMulNV",0x186);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveMinNV",0x187);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveMaxNV",0x188);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveAndNV",0x189);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveOrNV",0x18a);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedInclusiveXorNV",0x18b);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveAddNV",0x18c);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveMulNV",0x18d);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveMinNV",0x18e);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveMaxNV",399);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveAndNV",400);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveOrNV",0x191);
    TSymbolTable::relateToOperator(param_6,"subgroupPartitionedExclusiveXorNV",0x192);
    if (param_3 == 8) {
      TSymbolTable::relateToOperator(param_6,"shadow2DEXT",0x276);
      TSymbolTable::relateToOperator(param_6,"shadow2DProjEXT",0x277);
      if (!bVar13) goto LAB_00110995;
    }
    TSymbolTable::relateToOperator(param_6,"subgroupQuadAll",0x17b);
    TSymbolTable::relateToOperator(param_6,"subgroupQuadAny",0x17c);
    TSymbolTable::relateToOperator(param_6,"textureWeightedQCOM",0x34d);
    TSymbolTable::relateToOperator(param_6,"textureBoxFilterQCOM",0x34e);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchSADQCOM",0x34f);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchSSDQCOM",0x350);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchWindowSSDQCOM",0x351);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchWindowSADQCOM",0x352);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchGatherSSDQCOM",0x353);
    TSymbolTable::relateToOperator(param_6,"textureBlockMatchGatherSADQCOM",0x354);
    if (param_3 != 8) goto LAB_00110da0;
  }
LAB_00110995:
  switch(param_5) {
  case 3:
    goto switchD_001109b3_caseD_3;
  case 4:
switchD_001109b3_caseD_4:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"rayQueryInitializeEXT",0x2cb);
      TSymbolTable::relateToOperator(param_6,"rayQueryTerminateEXT",0x2cc);
      TSymbolTable::relateToOperator(param_6,"rayQueryGenerateIntersectionEXT",0x2cd);
      TSymbolTable::relateToOperator(param_6,"rayQueryConfirmIntersectionEXT",0x2ce);
      TSymbolTable::relateToOperator(param_6,"rayQueryProceedEXT",0x2cf);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionTypeEXT",0x2d0);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetRayTMinEXT",0x2d1);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetRayFlagsEXT",0x2d2);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionTEXT",0x2d3);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionInstanceCustomIndexEXT",0x2d4);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionInstanceIdEXT",0x2d5);
      TSymbolTable::relateToOperator
                (param_6,"rayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetEXT",0x2d6);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionGeometryIndexEXT",0x2d7);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionPrimitiveIndexEXT",0x2d8);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionBarycentricsEXT",0x2d9);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionFrontFaceEXT",0x2da);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionCandidateAABBOpaqueEXT",0x2db);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionObjectRayDirectionEXT",0x2dc);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionObjectRayOriginEXT",0x2dd);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetWorldRayDirectionEXT",0x2de);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetWorldRayOriginEXT",0x2df);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionObjectToWorldEXT",0x2e0);
      TSymbolTable::relateToOperator(param_6,"rayQueryGetIntersectionWorldToObjectEXT",0x2e1);
      TSymbolTable::relateToOperator
                (param_6,"rayQueryGetIntersectionTriangleVertexPositionsEXT",0x34a);
    }
    TSymbolTable::relateToOperator(param_6,"interpolateAtCentroid",0x125);
    TSymbolTable::relateToOperator(param_6,"interpolateAtSample",0x126);
    TSymbolTable::relateToOperator(param_6,"interpolateAtOffset",0x127);
    if (param_3 != 8) {
      TSymbolTable::relateToOperator(param_6,"interpolateAtVertexAMD",0x128);
    }
    TSymbolTable::relateToOperator(param_6,"beginInvocationInterlockARB",0x1cc);
    TSymbolTable::relateToOperator(param_6,"endInvocationInterlockARB",0x1cd);
    TSymbolTable::relateToOperator(param_6,"stencilAttachmentReadEXT",0x34b);
    TSymbolTable::relateToOperator(param_6,"depthAttachmentReadEXT",0x34c);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
    uVar9 = 0x26e;
    pcVar11 = "colorAttachmentReadEXT";
    goto LAB_00114f57;
  case 5:
    TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierShared",0x146);
LAB_00115413:
    if ((0x13f < param_1) && (bVar12)) goto LAB_00114f91;
LAB_00115045:
    TSymbolTable::relateToOperator(param_6,"coopMatLoadNV",0x1c9);
    TSymbolTable::relateToOperator(param_6,"coopMatStoreNV",0x1ca);
    TSymbolTable::relateToOperator(param_6,"coopMatMulAddNV",0x1cb);
    TSymbolTable::relateToOperator(param_6,"coopMatLoad",0x1c6);
    TSymbolTable::relateToOperator(param_6,"coopMatStore",0x1c7);
    TSymbolTable::relateToOperator(param_6,"coopMatMulAdd",0x1c8);
    goto LAB_001150bd;
  case 6:
switchD_001109b3_caseD_6:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"fetchMicroTriangleVertexPositionNV",0x301);
      TSymbolTable::relateToOperator(param_6,"fetchMicroTriangleVertexBarycentricNV",0x302);
LAB_00111bd9:
      TSymbolTable::relateToOperator(param_6,"traceNV",0x2c0);
      TSymbolTable::relateToOperator(param_6,"traceRayMotionNV",0x2c1);
      TSymbolTable::relateToOperator(param_6,"traceRayEXT",0x2c2);
      TSymbolTable::relateToOperator(param_6,"executeCallableNV",0x2c6);
      TSymbolTable::relateToOperator(param_6,"executeCallableEXT",0x2c7);
      TSymbolTable::relateToOperator(param_6,"hitObjectTraceRayNV",0x2e2);
      TSymbolTable::relateToOperator(param_6,"hitObjectTraceRayMotionNV",0x2e3);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordHitNV",0x2e4);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordHitMotionNV",0x2e5);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordHitWithIndexNV",0x2e6);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordHitWithIndexMotionNV",0x2e7);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordMissNV",0x2e8);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordMissMotionNV",0x2e9);
      TSymbolTable::relateToOperator(param_6,"hitObjectRecordEmptyNV",0x2ea);
      TSymbolTable::relateToOperator(param_6,"hitObjectExecuteShaderNV",0x2eb);
      TSymbolTable::relateToOperator(param_6,"hitObjectIsEmptyNV",0x2ec);
      TSymbolTable::relateToOperator(param_6,"hitObjectIsMissNV",0x2ed);
      TSymbolTable::relateToOperator(param_6,"hitObjectIsHitNV",0x2ee);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetRayTMinNV",0x2ef);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetRayTMaxNV",0x2f0);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetObjectRayOriginNV",0x2f1);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetObjectRayDirectionNV",0x2f2);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetWorldRayOriginNV",0x2f3);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetWorldRayDirectionNV",0x2f4);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetWorldToObjectNV",0x2f5);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetObjectToWorldNV",0x2f6);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetInstanceCustomIndexNV",0x2f7);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetInstanceIdNV",0x2f8);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetGeometryIndexNV",0x2f9);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetPrimitiveIndexNV",0x2fa);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetHitKindNV",0x2fb);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetAttributesNV",0x2fe);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetCurrentTimeNV",0x2ff);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetShaderBindingTableRecordIndexNV",0x2fc);
      TSymbolTable::relateToOperator(param_6,"hitObjectGetShaderRecordBufferHandleNV",0x2fd);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
      uVar9 = 0x300;
      pcVar11 = "reorderThreadNV";
      goto LAB_00114f57;
    }
    break;
  case 7:
switchD_001109b3_caseD_7:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"reportIntersectionNV",0x2c3);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
      uVar9 = 0x2c3;
      pcVar11 = "reportIntersectionEXT";
      goto LAB_00114f57;
    }
    break;
  case 8:
switchD_001109b3_caseD_8:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"ignoreIntersectionNV",0x2c4);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
      uVar9 = 0x2c5;
      pcVar11 = "terminateRayNV";
      goto LAB_00114f57;
    }
    break;
  case 9:
  case 10:
switchD_001109b3_caseD_9:
    if (bVar3) goto LAB_00111bd9;
    break;
  case 0xb:
switchD_001109b3_caseD_b:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"executeCallableNV",0x2c6);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
      uVar9 = 0x2c7;
      pcVar11 = "executeCallableEXT";
      goto LAB_00114f57;
    }
    break;
  case 0xc:
switchD_001109b3_caseD_c:
    if ((0x13f < param_1) && (bVar12)) {
      TSymbolTable::relateToOperator(param_6,"memoryBarrierShared",0x139);
      TSymbolTable::relateToOperator(param_6,"groupMemoryBarrier",0x13a);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
      uVar9 = 0x146;
      pcVar11 = "subgroupMemoryBarrierShared";
      goto LAB_00114f57;
    }
    break;
  case 0xd:
switchD_001109b3_caseD_d:
    if ((0x13f < param_1) && (bVar12)) {
      TSymbolTable::relateToOperator(param_6,"writePackedPrimitiveIndices4x8NV",0x2c8);
      TSymbolTable::relateToOperator(param_6,"memoryBarrierShared",0x139);
      TSymbolTable::relateToOperator(param_6,"groupMemoryBarrier",0x13a);
      TSymbolTable::relateToOperator(param_6,"subgroupMemoryBarrierShared",0x146);
    }
LAB_001150bd:
    if (bVar3) {
      TSymbolTable::relateToOperator(param_6,"fetchMicroTriangleVertexPositionNV",0x301);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar9 = 0x302;
        pcVar11 = "fetchMicroTriangleVertexBarycentricNV";
LAB_00114f57:
        TSymbolTable::relateToOperator(param_6,pcVar11,uVar9);
        return;
      }
      goto LAB_0011a19c;
    }
  }
switchD_001109b3_default:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a19c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001109b3_caseD_3:
  TSymbolTable::relateToOperator(param_6,"EmitStreamVertex",0x132);
  TSymbolTable::relateToOperator(param_6,"EndStreamPrimitive",0x133);
  TSymbolTable::relateToOperator(param_6,"EmitVertex",0x130);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0011a19c;
  uVar9 = 0x131;
  pcVar11 = "EndPrimitive";
  goto LAB_00114f57;
}



/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
  return;
}



/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
  return;
}



/* glslang::TType::hideMember() */

void __thiscall glslang::TType::hideMember(TType *this)

{
  *(ushort *)(this + 8) = *(ushort *)(this + 8) & 0xf000 | 0x100;
  return;
}



/* glslang::TType::hiddenMember() const */

bool __thiscall glslang::TType::hiddenMember(TType *this)

{
  return this[8] == (TType)0x0;
}



/* glslang::TType::getTypeName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getTypeName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x78);
}



/* glslang::TType::getFieldName[abi:cxx11]() const */

undefined8 __thiscall glslang::TType::getFieldName_abi_cxx11_(TType *this)

{
  return *(undefined8 *)(this + 0x70);
}



/* glslang::TType::getBasicType() const */

TType __thiscall glslang::TType::getBasicType(TType *this)

{
  return this[8];
}



/* glslang::TType::getSampler() const */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getSampler() */

TType * __thiscall glslang::TType::getSampler(TType *this)

{
  return this + 0x80;
}



/* glslang::TType::getQualifier() */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getQualifier() const */

TType * __thiscall glslang::TType::getQualifier(TType *this)

{
  return this + 0x10;
}



/* glslang::TType::getVectorSize() const */

byte __thiscall glslang::TType::getVectorSize(TType *this)

{
  return (byte)this[9] & 0xf;
}



/* glslang::TType::getMatrixCols() const */

byte __thiscall glslang::TType::getMatrixCols(TType *this)

{
  return (byte)this[9] >> 4;
}



/* glslang::TType::getMatrixRows() const */

byte __thiscall glslang::TType::getMatrixRows(TType *this)

{
  return (byte)this[10] & 0xf;
}



/* glslang::TType::getOuterArraySize() const */

undefined4 __thiscall glslang::TType::getOuterArraySize(TType *this)

{
  return **(undefined4 **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
}



/* glslang::TType::getOuterArrayNode() const */

undefined8 __thiscall glslang::TType::getOuterArrayNode(TType *this)

{
  return *(undefined8 *)(*(long *)(*(long *)(*(long *)(this + 0x60) + 8) + 8) + 8);
}



/* glslang::TType::getCumulativeArraySize() const */

int __thiscall glslang::TType::getCumulativeArraySize(TType *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  lVar2 = *(long *)(*(long *)(this + 0x60) + 8);
  if (lVar2 != 0) {
    piVar3 = *(int **)(lVar2 + 8);
    iVar4 = (int)(*(long *)(lVar2 + 0x10) - (long)piVar3 >> 4);
    if (0 < iVar4) {
      piVar1 = piVar3 + (ulong)(iVar4 - 1) * 4 + 4;
      iVar4 = 1;
      do {
        iVar4 = iVar4 * *piVar3;
        piVar3 = piVar3 + 4;
      } while (piVar3 != piVar1);
      return iVar4;
    }
  }
  return 1;
}



/* glslang::TType::getImplicitArraySize() const */

int __thiscall glslang::TType::getImplicitArraySize(TType *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



/* glslang::TType::getArraySizes() const */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getArraySizes() */

undefined8 __thiscall glslang::TType::getArraySizes(TType *this)

{
  return *(undefined8 *)(this + 0x60);
}



/* glslang::TType::getReferentType() const */

undefined8 __thiscall glslang::TType::getReferentType(TType *this)

{
  return *(undefined8 *)(this + 0x68);
}



/* glslang::TType::getTypeParameters() const */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::getTypeParameters() */

undefined8 __thiscall glslang::TType::getTypeParameters(TType *this)

{
  return *(undefined8 *)(this + 0x88);
}



/* glslang::TType::isVector() const */

byte __thiscall glslang::TType::isVector(TType *this)

{
  if (1 < ((byte)this[9] & 0xf)) {
    return 1;
  }
  return (byte)this[10] >> 4 & 1;
}



/* glslang::TType::isMatrix() const */

bool __thiscall glslang::TType::isMatrix(TType *this)

{
  return 0xf < (byte)this[9];
}



/* glslang::TType::isArray() const */

bool __thiscall glslang::TType::isArray(TType *this)

{
  return *(long *)(this + 0x60) != 0;
}



/* glslang::TType::isArrayVariablyIndexed() const */

undefined1 __thiscall glslang::TType::isArrayVariablyIndexed(TType *this)

{
  return *(undefined1 *)(*(long *)(this + 0x60) + 0x15);
}



/* glslang::TType::setArrayVariablyIndexed() */

void __thiscall glslang::TType::setArrayVariablyIndexed(TType *this)

{
  *(undefined1 *)(*(long *)(this + 0x60) + 0x15) = 1;
  return;
}



/* glslang::TType::updateImplicitArraySize(int) */

void __thiscall glslang::TType::updateImplicitArraySize(TType *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x60) + 0x10);
  if (iVar1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(*(long *)(this + 0x60) + 0x10) = iVar1;
  return;
}



/* glslang::TType::setImplicitlySized(bool) */

void __thiscall glslang::TType::setImplicitlySized(TType *this,bool param_1)

{
  *(bool *)(*(long *)(this + 0x60) + 0x14) = param_1;
  return;
}



/* glslang::TType::isStruct() const */

undefined4 __thiscall glslang::TType::isStruct(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 0xf >> 8),(byte)((byte)this[8] - 0xf) < 2);
}



/* glslang::TType::isFloatingDomain() const */

undefined4 __thiscall glslang::TType::isFloatingDomain(TType *this)

{
  return CONCAT31((int3)((byte)this[8] - 1 >> 8),(byte)((byte)this[8] - 1) < 3);
}



/* glslang::TType::isIntegerDomain() const */

bool __thiscall glslang::TType::isIntegerDomain(TType *this)

{
  TType TVar1;
  
  TVar1 = this[8];
  if ((byte)TVar1 < 0xc) {
    return 3 < (byte)TVar1;
  }
  return TVar1 == (TType)0xd;
}



/* glslang::TType::isOpaque() const */

undefined8 __thiscall glslang::TType::isOpaque(TType *this)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)this[8] < 0x15) {
    uVar1 = CONCAT71(0x1a60,(0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0);
  }
  return uVar1;
}



/* glslang::TType::isParameterized() const */

bool __thiscall glslang::TType::isParameterized(TType *this)

{
  return *(long *)(this + 0x88) != 0;
}



/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
  return;
}



/* glslang::TSymbol::getName[abi:cxx11]() const */

undefined8 __thiscall glslang::TSymbol::getName_abi_cxx11_(TSymbol *this)

{
  return *(undefined8 *)(this + 8);
}



/* glslang::TSymbol::changeName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*) */

void __thiscall glslang::TSymbol::changeName(TSymbol *this,basic_string *param_1)

{
  *(basic_string **)(this + 8) = param_1;
  return;
}



/* glslang::TVariable::getAsVariable() */

TVariable * __thiscall glslang::TVariable::getAsVariable(TVariable *this)

{
  return this;
}



/* glslang::TVariable::getType() const */

TVariable * __thiscall glslang::TVariable::getType(TVariable *this)

{
  return this + 0x28;
}



/* glslang::TVariable::setAnonId(int) */

void __thiscall glslang::TVariable::setAnonId(TVariable *this,int param_1)

{
  *(int *)(this + 0xe8) = param_1;
  return;
}



/* glslang::TVariable::getAnonId() const */

undefined4 __thiscall glslang::TVariable::getAnonId(TVariable *this)

{
  return *(undefined4 *)(this + 0xe8);
}



/* glslang::TBuiltInParseables::getCommonString[abi:cxx11]() const */

TBuiltInParseables * __thiscall
glslang::TBuiltInParseables::getCommonString_abi_cxx11_(TBuiltInParseables *this)

{
  return this + 8;
}



/* glslang::TBuiltInParseables::getStageString[abi:cxx11](EShLanguage) const */

TBuiltInParseables * __thiscall
glslang::TBuiltInParseables::getStageString_abi_cxx11_(TBuiltInParseables *this,int param_2)

{
  return this + (long)param_2 * 0x28 + 0x30;
}



/* glslang::TType::isBuiltIn() const */

bool __thiscall glslang::TType::isBuiltIn(TType *this)

{
  long lVar1;
  
  if (*(code **)(*(long *)this + 0x58) == getQualifier) {
    return 0x7f < *(ushort *)(this + 0x18);
  }
  lVar1 = (**(code **)(*(long *)this + 0x58))();
  return 0x7f < *(ushort *)(lVar1 + 8);
}



/* glslang::TType::isAttachmentEXT() const */

bool __thiscall glslang::TType::isAttachmentEXT(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x8;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\b';
}



/* glslang::TType::isImage() const */

undefined4 __thiscall glslang::TType::isImage(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar3 = (**(code **)(*(long *)this + 0x40))();
      uVar2 = 0;
      if ((*(byte *)(lVar3 + 2) & 8) != 0) {
        iVar1 = *(byte *)(lVar3 + 1) - 7;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1 < (byte)iVar1);
      }
      return uVar2;
    }
    if (((byte)this[0x82] & 8) != 0) {
      return CONCAT31((int3)((byte)this[0x81] - 7 >> 8),1 < (byte)((byte)this[0x81] - 7));
    }
  }
  return 0;
}



/* glslang::TType::isSubpass() const */

bool __thiscall glslang::TType::isSubpass(TType *this)

{
  long lVar1;
  
  if (this[8] != (TType)0xe) {
    return false;
  }
  if (*(code **)(*(long *)this + 0x40) == getSampler) {
    return this[0x81] == (TType)0x7;
  }
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  return *(char *)(lVar1 + 1) == '\a';
}



/* glslang::TType::isTexture() const */

byte __thiscall glslang::TType::isTexture(TType *this)

{
  byte bVar1;
  long lVar2;
  
  if (this[8] == (TType)0xe) {
    if (*(code **)(*(long *)this + 0x40) != getSampler) {
      lVar2 = (**(code **)(*(long *)this + 0x40))();
      if ((*(byte *)(lVar2 + 2) & 0x20) == 0) {
        bVar1 = *(byte *)(lVar2 + 2) >> 3 & 1 ^ 1;
      }
      else {
        bVar1 = 0;
      }
      return bVar1;
    }
    if (((byte)this[0x82] & 0x20) == 0) {
      return (byte)this[0x82] >> 3 & 1 ^ 1;
    }
  }
  return 0;
}



/* glslang::TType::isSizedArray() const */

undefined4 __thiscall glslang::TType::isSizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return uVar2;
}



/* glslang::TType::isUnsizedArray() const */

undefined4 __thiscall glslang::TType::isUnsizedArray(TType *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar3 == '\0') {
      return 0;
    }
    iVar1 = **(int **)(*(long *)(*(long *)(this + 0x60) + 8) + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  return uVar2;
}



/* glslang::TType::isImplicitlySizedArray() const */

undefined1 __thiscall glslang::TType::isImplicitlySizedArray(TType *this)

{
  undefined1 uVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) == 0) {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xe8))();
    if (cVar2 == '\0') {
      return 0;
    }
    uVar1 = *(undefined1 *)(*(long *)(this + 0x60) + 0x14);
  }
  return uVar1;
}



/* glslang::TType::isScalarOrVector() const */

uint __thiscall glslang::TType::isScalarOrVector(TType *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (*(code **)(lVar3 + 0xe0) == isMatrix) {
    if (0xf < (byte)this[9]) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0xe0))();
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
      return 0;
    }
  }
  else {
    cVar1 = (**(code **)(lVar3 + 0x128))(this);
    if (cVar1 != '\0') {
      return 0;
    }
    lVar3 = *(long *)this;
  }
  if (*(code **)(lVar3 + 0xe8) == isArray) {
    uVar2 = (uint)CONCAT71(0x11a4,*(long *)(this + 0x60) != 0);
  }
  else {
    uVar2 = (**(code **)(lVar3 + 0xe8))(this);
  }
  return uVar2 ^ 1;
}



/* glslang::TType::isScalar() const */

uint __thiscall glslang::TType::isScalar(TType *this)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(*(long *)this + 0xd8) == isVector) {
    if (1 < ((byte)this[9] & 0xf)) {
      return 0;
    }
    bVar1 = (byte)this[10] >> 4 & 1;
  }
  else {
    bVar1 = (**(code **)(*(long *)this + 0xd8))();
  }
  if (bVar1 == 0) {
    lVar4 = *(long *)this;
    if (*(code **)(lVar4 + 0xe0) == isMatrix) {
      if (0xf < (byte)this[9]) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe0))(this);
      if (cVar2 != '\0') {
        return 0;
      }
      lVar4 = *(long *)this;
    }
    if (*(code **)(lVar4 + 0x128) == isStruct) {
      if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0011aa51:
        if (*(code **)(lVar4 + 0xe8) == isArray) {
          uVar3 = (uint)CONCAT71(0x11a4,*(long *)(this + 0x60) != 0);
        }
        else {
          uVar3 = (**(code **)(lVar4 + 0xe8))(this);
        }
        return uVar3 ^ 1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(this);
      if (cVar2 == '\0') {
        lVar4 = *(long *)this;
        goto LAB_0011aa51;
      }
    }
  }
  return 0;
}



/* glslang::TType::isUnusableName() const */

bool __thiscall glslang::TType::isUnusableName(TType *this)

{
  char cVar1;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if (1 < (byte)((char)this[8] - 0xfU)) {
      return false;
    }
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x128))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return *(long *)(this + 0x68) == 0;
}



/* glslang::TType::isBindlessTexture() const */

TType __thiscall glslang::TType::isBindlessTexture(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x168);
  if (pcVar1 == isTexture) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 0x20) == 0) && (((byte)pTVar3[2] & 8) == 0)) {
        return this[0x58];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x58];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::isBindlessImage() const */

TType __thiscall glslang::TType::isBindlessImage(TType *this)

{
  code *pcVar1;
  char cVar2;
  TType *pTVar3;
  
  pcVar1 = *(code **)(*(long *)this + 0x158);
  if (pcVar1 == isImage) {
    if (this[8] == (TType)0xe) {
      pcVar1 = *(code **)(*(long *)this + 0x40);
      if (pcVar1 == getSampler) {
        pTVar3 = this + 0x80;
      }
      else {
        pTVar3 = (TType *)(*pcVar1)();
      }
      if ((((byte)pTVar3[2] & 8) != 0) && (1 < (byte)((char)pTVar3[1] - 7U))) {
        return this[0x59];
      }
    }
  }
  else {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return this[0x59];
    }
  }
  return (TType)0x0;
}



/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

void __thiscall glslang::TType::setFieldName(TType *this,basic_string *param_1)

{
  char *__s;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  __s = *(char **)(param_1 + 8);
  uVar1 = glslang::GetThreadPoolAllocator();
  puVar2 = (undefined8 *)glslang::TPoolAllocator::allocate(uVar1);
  uVar3 = glslang::GetThreadPoolAllocator();
  *puVar2 = uVar3;
  puVar2[1] = puVar2 + 3;
  if (__s != (char *)0x0) {
    sVar4 = strlen(__s);
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
    _M_construct<char_const*>(puVar2,__s,__s + sVar4);
    *(undefined8 **)(this + 0x70) = puVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_logic_error("basic_string: construction from null is not valid");
}



/* glslang::TType::isScalarOrVec1() const */

byte __thiscall glslang::TType::isScalarOrVec1(TType *this)

{
  TType TVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  
  pcVar2 = *(code **)(*(long *)this + 0xc0);
  if (pcVar2 == isScalar) {
    pcVar2 = *(code **)(*(long *)this + 0xd8);
    if (pcVar2 == isVector) {
      TVar1 = this[10];
      bVar3 = (byte)TVar1 >> 4 & 1;
      if (1 < ((byte)this[9] & 0xf)) goto LAB_0011e823;
    }
    else {
      bVar3 = (*pcVar2)();
    }
    if (bVar3 == 0) {
      lVar5 = *(long *)this;
      if (*(code **)(lVar5 + 0xe0) == isMatrix) {
        if ((byte)this[9] < 0x10) {
LAB_0011e84c:
          if (*(code **)(lVar5 + 0x128) == isStruct) {
            if (1 < (byte)((char)this[8] - 0xfU)) {
LAB_0011e86b:
              if (*(code **)(lVar5 + 0xe8) == isArray) {
                if (*(long *)(this + 0x60) == 0) {
                  return 1;
                }
              }
              else {
                cVar4 = (**(code **)(lVar5 + 0xe8))(this);
                if (cVar4 == '\0') {
                  return 1;
                }
              }
            }
          }
          else {
            cVar4 = (**(code **)(lVar5 + 0x128))(this);
            if (cVar4 == '\0') {
              lVar5 = *(long *)this;
              goto LAB_0011e86b;
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(lVar5 + 0xe0))(this);
        if (cVar4 == '\0') {
          lVar5 = *(long *)this;
          goto LAB_0011e84c;
        }
      }
    }
  }
  else {
    cVar4 = (*pcVar2)();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  TVar1 = this[10];
LAB_0011e823:
  return (byte)TVar1 >> 4 & 1;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0 < lVar5 >> 7) {
    plVar6 = param_1 + (lVar5 >> 7) * 0x10;
    do {
      plVar2 = (long *)*param_1;
      bVar1 = *(byte *)(plVar2 + 1);
      if (bVar1 < 0xd) {
        return param_1;
      }
      if (bVar1 == 0x12) {
        return param_1;
      }
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011ea7d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011ea7d;
      }
      plVar2 = (long *)param_1[4];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011e97f;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011eabd:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011e97f:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011eabd;
      }
      plVar2 = (long *)param_1[8];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011e9bf;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011eaed:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011e9bf:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011eaed;
      }
      plVar2 = (long *)param_1[0xc];
      bVar1 = *(byte *)(plVar2 + 1);
      if ((bVar1 < 0xd) || (bVar1 == 0x12)) goto LAB_0011e9ff;
      if (*(code **)(*plVar2 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011eb1d:
          lVar5 = *(long *)(plVar2[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar2[0xd] + 8),lVar5);
          if (lVar5 != lVar4) {
LAB_0011e9ff:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x128))(plVar2);
        if (cVar3 != '\0') goto LAB_0011eb1d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar6);
    lVar5 = (long)param_2 - (long)param_1;
  }
  lVar5 = lVar5 >> 5;
  if (lVar5 != 2) {
    if (lVar5 != 3) {
      if (lVar5 != 1) {
        return param_2;
      }
      goto LAB_0011ebb9;
    }
    plVar6 = (long *)*param_1;
    bVar1 = *(byte *)(plVar6 + 1);
    if (bVar1 < 0xd) {
      return param_1;
    }
    if (bVar1 == 0x12) {
      return param_1;
    }
    if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011ec5b:
        lVar5 = *(long *)(plVar6[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
        if (lVar5 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
      if (cVar3 != '\0') goto LAB_0011ec5b;
    }
    param_1 = param_1 + 4;
  }
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(bVar1 - 0xf) < 2) {
LAB_0011ec1d:
      lVar5 = *(long *)(plVar6[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
      if (lVar5 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 != '\0') goto LAB_0011ec1d;
  }
  param_1 = param_1 + 4;
LAB_0011ebb9:
  plVar6 = (long *)*param_1;
  bVar1 = *(byte *)(plVar6 + 1);
  if (bVar1 < 0xd) {
    return param_1;
  }
  if (bVar1 == 0x12) {
    return param_1;
  }
  if (*(code **)(*plVar6 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(bVar1 - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
    if (cVar3 == '\0') {
      return param_2;
    }
  }
  lVar5 = *(long *)(plVar6[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar6[0xd] + 8),lVar5);
  if (lVar5 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsNonOpaque() const */

ulong __thiscall glslang::TType::containsNonOpaque(TType *this)

{
  TType TVar1;
  long lVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  TVar1 = this[8];
  if (((byte)TVar1 < 0xd) || (TVar1 == (TType)0x12)) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)TVar1 - 0xfU) < 2) {
LAB_0011ece0:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar4 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return CONCAT71(auVar4._9_7_,lVar2 != auVar4._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))();
    if (cVar3 != '\0') goto LAB_0011ece0;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      if (*(byte *)(plVar1 + 1) == param_3) {
        return param_1;
      }
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_0011ee4d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011ee4d;
      }
      plVar1 = (long *)param_1[4];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_0011ee9c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_0011ee7d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_0011ee9c:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011ee7d;
      }
      plVar1 = (long *)param_1[8];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_0011eed4;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_0011eeb5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_0011eed4:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011eeb5;
      }
      plVar1 = (long *)param_1[0xc];
      if (*(byte *)(plVar1 + 1) == param_3) goto LAB_0011ef0c;
      if (*(code **)(*plVar1 + 0x128) == glslang::TType::isStruct) {
        if ((byte)(*(byte *)(plVar1 + 1) - 0xf) < 2) {
LAB_0011eeed:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4,param_3);
          if (lVar4 != lVar3) {
LAB_0011ef0c:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011eeed;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0011efae;
    }
    plVar5 = (long *)*param_1;
    if (*(byte *)(plVar5 + 1) == param_3) {
      return param_1;
    }
    if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
      if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_0011f052:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0011f052;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  if (*(byte *)(plVar5 + 1) == param_3) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if ((byte)(*(byte *)(plVar5 + 1) - 0xf) < 2) {
LAB_0011f011:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_0011f011;
  }
  param_1 = param_1 + 4;
LAB_0011efae:
  plVar5 = (long *)*param_1;
  if (param_3 == *(byte *)(plVar5 + 1)) {
    return param_1;
  }
  if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)(*(byte *)(plVar5 + 1) - 0xf)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4,param_3);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBasicType(glslang::TBasicType) const */

ulong __thiscall glslang::TType::containsBasicType(TType *this,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if ((byte)this[8] == param_2) {
    return 1;
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0011f0d6:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      auVar3 = std::
               __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                         (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,param_2);
      return CONCAT71(auVar3._9_7_,lVar1 != auVar3._0_8_) & 0xffffffff;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_0011f0d6;
  }
  return 0;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011f34d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f34d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011f2c3;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f2c3;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011f2a5:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011f2c3:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f2a5;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011f2fb;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f2fb;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011f2dd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011f2fb:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f2dd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        if (plVar1[0xc] != 0) goto LAB_0011f333;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f333;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011f315:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011f333:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011f315;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_0011f41e;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f5bc:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_0011f5bc;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f563:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_0011f563;
  }
  param_1 = param_1 + 4;
LAB_0011f41e:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    if (plVar5[0xc] != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsArray() const */

bool __thiscall glslang::TType::containsArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    if (*(long *)(this + 0x60) != 0) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0011f639:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_0011f639;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = (long)param_2 - (long)param_1;
  if (0 < lVar6 >> 7) {
    plVar7 = param_1 + (lVar6 >> 7) * 0x10;
    do {
      plVar5 = (long *)*param_1;
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) {
          return param_1;
        }
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f8e5:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011f8e5;
      }
      plVar5 = (long *)param_1[4];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011f86a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 4;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f84d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011f86a:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011f84d;
      }
      plVar5 = (long *)param_1[8];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011f89a;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 8;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f87d:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011f89a:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011f87d;
      }
      plVar5 = (long *)param_1[0xc];
      pcVar1 = *(code **)(*plVar5 + 0x148);
      if (pcVar1 == glslang::TType::isBuiltIn) {
        pcVar1 = *(code **)(*plVar5 + 0x58);
        if (pcVar1 == glslang::TType::getQualifier) {
          plVar3 = plVar5 + 2;
        }
        else {
          plVar3 = (long *)(*pcVar1)(plVar5);
        }
        if (0x7f < *(ushort *)(plVar3 + 1)) goto LAB_0011f8ca;
      }
      else {
        cVar2 = (*pcVar1)(plVar5);
        if (cVar2 != '\0') {
          return param_1 + 0xc;
        }
      }
      if (*(code **)(*plVar5 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0011f8ad:
          lVar6 = *(long *)(plVar5[0xd] + 0x10);
          lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar6);
          if (lVar6 != lVar4) {
LAB_0011f8ca:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_0011f8ad;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar7);
    lVar6 = (long)param_2 - (long)param_1;
  }
  lVar6 = lVar6 >> 5;
  if (lVar6 != 2) {
    if (lVar6 != 3) {
      if (lVar6 != 1) {
        return param_2;
      }
      goto LAB_0011f9f8;
    }
    plVar7 = (long *)*param_1;
    pcVar1 = *(code **)(*plVar7 + 0x148);
    if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code **)(*plVar7 + 0x58);
      if (pcVar1 == glslang::TType::getQualifier) {
        plVar5 = plVar7 + 2;
      }
      else {
        plVar5 = (long *)(*pcVar1)(plVar7);
      }
      if (0x7f < *(ushort *)(plVar5 + 1)) {
        return param_1;
      }
    }
    else {
      cVar2 = (*pcVar1)(plVar7);
      if (cVar2 != '\0') {
        return param_1;
      }
    }
    if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_0011fbf6:
        lVar6 = *(long *)(plVar7[0xd] + 0x10);
        lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
        if (lVar6 != lVar4) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
      if (cVar2 != '\0') goto LAB_0011fbf6;
    }
    param_1 = param_1 + 4;
  }
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar7[1] - 0xfU) < 2) {
LAB_0011fb7f:
      lVar6 = *(long *)(plVar7[0xd] + 0x10);
      lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
      if (lVar6 != lVar4) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 != '\0') goto LAB_0011fb7f;
  }
  param_1 = param_1 + 4;
LAB_0011f9f8:
  plVar7 = (long *)*param_1;
  pcVar1 = *(code **)(*plVar7 + 0x148);
  if (pcVar1 == glslang::TType::isBuiltIn) {
    pcVar1 = *(code **)(*plVar7 + 0x58);
    if (pcVar1 == glslang::TType::getQualifier) {
      plVar5 = plVar7 + 2;
    }
    else {
      plVar5 = (long *)(*pcVar1)(plVar7);
    }
    if (0x7f < *(ushort *)(plVar5 + 1)) {
      return param_1;
    }
  }
  else {
    cVar2 = (*pcVar1)(plVar7);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
  if (*(code **)(*plVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar7[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x128))(plVar7);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar6 = *(long *)(plVar7[0xd] + 0x10);
  lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar7[0xd] + 8),lVar6);
  if (lVar6 == lVar4) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsBuiltIn() const */

bool __thiscall glslang::TType::containsBuiltIn(TType *this)

{
  code *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  TType *pTVar5;
  
  pcVar1 = *(code **)(*(long *)this + 0x148);
  if (pcVar1 == isBuiltIn) {
    pcVar1 = *(code **)(*(long *)this + 0x58);
    if (pcVar1 == getQualifier) {
      pTVar5 = this + 0x10;
    }
    else {
      pTVar5 = (TType *)(*pcVar1)();
    }
    if (0x7f < *(ushort *)(pTVar5 + 8)) {
      return true;
    }
  }
  else {
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      return true;
    }
  }
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_0011fc99:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar4 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar4;
    }
  }
  else {
    cVar3 = (**(code **)(*(long *)this + 0x128))(this);
    if (cVar3 != '\0') goto LAB_0011fc99;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0011fd38:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_0011fd60;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_0011fd38;
        }
LAB_0011fd60:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011ff7d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011ff7d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0011fda4:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_0011fdb3;
          goto LAB_0011fdc0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_0011fda4;
        }
LAB_0011fdc0:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011ffad:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011fdb3:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011ffad;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0011fe04:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_0011fe13;
          goto LAB_0011fe20;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_0011fe04;
        }
LAB_0011fe20:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0011ffdd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011fe13:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0011ffdd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_0011fe64:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) goto LAB_0011fe73;
          goto LAB_0011fe80;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
        if (cVar2 != '\0') {
          lVar3 = plVar1[0xc];
          goto LAB_0011fe64;
        }
LAB_0011fe80:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0012000d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_0011fe73:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0012000d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_0012010e:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_0012012e:
        if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
          return param_1;
        }
        goto LAB_00120141;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 != '\0') {
        lVar3 = plVar5[0xc];
        goto LAB_0012012e;
      }
LAB_00120141:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00120187:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00120187;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_001200cd:
          if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
            return param_1;
          }
          goto LAB_001200e0;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_001200cd;
        }
LAB_001200e0:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_001201f5:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_001201f5;
      }
      param_1 = param_1 + 4;
      goto LAB_0012010e;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
    lVar3 = plVar5[0xc];
    if (lVar3 == 0) goto LAB_0011ff19;
LAB_0011ff02:
    if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
    if (cVar2 != '\0') {
      lVar3 = plVar5[0xc];
      goto LAB_0011ff02;
    }
  }
  lVar4 = *plVar5;
LAB_0011ff19:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsSpecializationSize() const */

bool __thiscall glslang::TType::containsSpecializationSize(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xe8) == isArray) {
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_0012027a:
      if (*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) != 0) {
        return true;
      }
      goto LAB_0012028e;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar3 = *(long *)(this + 0x60);
      goto LAB_0012027a;
    }
LAB_0012028e:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_001202a1:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_001202a1;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) {
          return param_1;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0012057d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0012057d;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_001203a0;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_001203a0;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001205ad:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001203a0:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001205ad;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00120408;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00120408;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001205dd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00120408:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_001205dd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
        if ((*(byte *)(plVar1 + 1) < 0x15) &&
           ((0x1a6000UL >> ((ulong)*(byte *)(plVar1 + 1) & 0x3f) & 1) != 0)) goto LAB_00120470;
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x140))(plVar1);
        if (cVar2 != '\0') goto LAB_00120470;
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0012060d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00120470:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_0012060d;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 != 2) {
    if (lVar4 != 3) {
      if (lVar4 != 1) {
        return param_2;
      }
      goto LAB_001204ed;
    }
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
      if ((*(byte *)(plVar5 + 1) < 0x15) &&
         ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
        return param_1;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00120778:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00120778;
    }
    param_1 = param_1 + 4;
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_0012071f:
      lVar4 = *(long *)(plVar5[0xd] + 0x10);
      lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
      if (lVar4 != lVar3) {
        return param_1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 != '\0') goto LAB_0012071f;
  }
  param_1 = param_1 + 4;
LAB_001204ed:
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0x140) == glslang::TType::isOpaque) {
    if ((*(byte *)(plVar5 + 1) < 0x15) &&
       ((0x1a6000UL >> ((ulong)*(byte *)(plVar5 + 1) & 0x3f) & 1) != 0)) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x140))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar4 = *plVar5;
  }
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsOpaque() const */

bool __thiscall glslang::TType::containsOpaque(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x140) == isOpaque) {
    if (((byte)this[8] < 0x15) && ((0x1a6000UL >> ((ulong)(byte)this[8] & 0x3f) & 1) != 0)) {
      return true;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x140))();
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00120819:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00120819;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (0 < lVar4 >> 7) {
    plVar5 = param_1 + (lVar4 >> 7) * 0x10;
    do {
      plVar1 = (long *)*param_1;
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_001208bb;
          }
          goto LAB_001208e9;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_001208bb:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_001208e9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_001208e9:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00120b65:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00120b65;
      }
      plVar1 = (long *)param_1[4];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_00120938;
          }
          goto LAB_00120961;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00120938:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_00120948;
          goto LAB_00120961;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00120948;
LAB_00120961:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00120b9d:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00120948:
            return param_1 + 4;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00120b9d;
      }
      plVar1 = (long *)param_1[8];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_001209b0;
          }
          goto LAB_001209d9;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_001209b0:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_001209be;
          goto LAB_001209d9;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_001209be;
LAB_001209d9:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00120bcd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_001209be:
            return param_1 + 8;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00120bcd;
      }
      plVar1 = (long *)param_1[0xc];
      lVar4 = *plVar1;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar1);
          if (cVar2 != '\0') {
            lVar3 = plVar1[0xc];
            goto LAB_00120a28;
          }
          goto LAB_00120a49;
        }
        lVar3 = plVar1[0xc];
        if (lVar3 != 0) {
LAB_00120a28:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) goto LAB_00120a36;
          goto LAB_00120a49;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar1);
        if (cVar2 != '\0') goto LAB_00120a36;
LAB_00120a49:
        lVar4 = *plVar1;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00120bfd:
          lVar4 = *(long *)(plVar1[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar1[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
LAB_00120a36:
            return param_1 + 0xc;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar1);
        if (cVar2 != '\0') goto LAB_00120bfd;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 != plVar5);
    lVar4 = (long)param_2 - (long)param_1;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 2) {
LAB_00120d17:
    plVar5 = (long *)*param_1;
    lVar4 = *plVar5;
    if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
      if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
        cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
        if (cVar2 != '\0') {
          lVar3 = plVar5[0xc];
          goto LAB_00120d4f;
        }
        goto LAB_00120d61;
      }
      lVar3 = plVar5[0xc];
      if (lVar3 != 0) {
LAB_00120d4f:
        if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
          return param_1;
        }
        goto LAB_00120d61;
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
      if (cVar2 != '\0') {
        return param_1;
      }
LAB_00120d61:
      lVar4 = *plVar5;
    }
    if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00120da9:
        lVar4 = *(long *)(plVar5[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
        if (lVar4 != lVar3) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
      if (cVar2 != '\0') goto LAB_00120da9;
    }
    param_1 = param_1 + 4;
  }
  else {
    if (lVar4 == 3) {
      plVar5 = (long *)*param_1;
      lVar4 = *plVar5;
      if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
        if (*(code **)(lVar4 + 0xe8) != glslang::TType::isArray) {
          cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
          if (cVar2 != '\0') {
            lVar3 = plVar5[0xc];
            goto LAB_00120cd5;
          }
          goto LAB_00120ce7;
        }
        lVar3 = plVar5[0xc];
        if (lVar3 != 0) {
LAB_00120cd5:
          if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
            return param_1;
          }
          goto LAB_00120ce7;
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
        if (cVar2 != '\0') {
          return param_1;
        }
LAB_00120ce7:
        lVar4 = *plVar5;
      }
      if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
        if ((byte)((char)plVar5[1] - 0xfU) < 2) {
LAB_00120e3a:
          lVar4 = *(long *)(plVar5[0xd] + 0x10);
          lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                            (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
          if (lVar4 != lVar3) {
            return param_1;
          }
        }
      }
      else {
        cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
        if (cVar2 != '\0') goto LAB_00120e3a;
      }
      param_1 = param_1 + 4;
      goto LAB_00120d17;
    }
    if (lVar4 != 1) {
      return param_2;
    }
  }
  plVar5 = (long *)*param_1;
  lVar4 = *plVar5;
  if (*(code **)(lVar4 + 0xf8) == glslang::TType::isUnsizedArray) {
    if (*(code **)(lVar4 + 0xe8) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 == 0) goto LAB_00120aff;
    }
    else {
      cVar2 = (**(code **)(lVar4 + 0xe8))(plVar5);
      if (cVar2 == '\0') goto LAB_00120afb;
      lVar3 = plVar5[0xc];
    }
    if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
      return param_1;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0xf8))(plVar5);
    if (cVar2 != '\0') {
      return param_1;
    }
  }
LAB_00120afb:
  lVar4 = *plVar5;
LAB_00120aff:
  if (*(code **)(lVar4 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar5[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 0x128))(plVar5);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar4 = *(long *)(plVar5[0xd] + 0x10);
  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar5[0xd] + 8),lVar4);
  if (lVar4 == lVar3) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsUnsizedArray() const */

bool __thiscall glslang::TType::containsUnsizedArray(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0xf8) == isUnsizedArray) {
    if (*(code **)(lVar2 + 0xe8) != isArray) {
      cVar1 = (**(code **)(lVar2 + 0xe8))();
      if (cVar1 != '\0') {
        lVar3 = *(long *)(this + 0x60);
        goto LAB_00120eea;
      }
      goto LAB_00120f06;
    }
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
LAB_00120eea:
      if (**(int **)(*(long *)(lVar3 + 8) + 8) == 0) {
        return true;
      }
      goto LAB_00120f06;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0xf8))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00120f06:
    lVar2 = *(long *)this;
  }
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00120f19:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00120f19;
  }
  return false;
}



/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */

long * std::
       __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                 (long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0 < lVar7 >> 7) {
    plVar1 = param_1;
LAB_00120f80:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00120fd0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00120fed:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
              return plVar6;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00120fed;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') {
            return plVar6;
          }
          lVar5 = *plVar1;
          goto LAB_00120fd0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) {
          return plVar6;
        }
      }
      plVar1 = (long *)plVar6[4];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00121050:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_0012106d:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_00121036:
              return plVar6 + 4;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_0012106d;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00121036;
          lVar5 = *plVar1;
          goto LAB_00121050;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00121036;
      }
      plVar1 = (long *)plVar6[8];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_001210d0:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_001210ed:
            lVar5 = *(long *)(plVar1[0xd] + 0x10);
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                              (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
            if (lVar5 != lVar3) {
LAB_001210b6:
              return plVar6 + 8;
            }
          }
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001210ed;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_001210b6;
          lVar5 = *plVar1;
          goto LAB_001210d0;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_001210b6;
      }
      plVar1 = (long *)plVar6[0xc];
      lVar5 = *plVar1;
      if (plVar1 == param_3) {
LAB_00121150:
        if (*(code **)(lVar5 + 0x128) == glslang::TType::isStruct) {
          if (1 < (byte)((char)plVar1[1] - 0xfU)) goto LAB_0012118a;
        }
        else {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 == '\0') {
            plVar1 = plVar6 + 0x10;
            if (plVar6 + 0x10 == param_1 + (lVar7 >> 7) * 0x10) break;
            goto LAB_00120f80;
          }
        }
        lVar5 = *(long *)(plVar1[0xd] + 0x10);
        lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar5,param_3);
        if (lVar5 != lVar3) {
LAB_00121136:
          return plVar6 + 0xc;
        }
      }
      else {
        if (*(code **)(lVar5 + 0x128) != glslang::TType::isStruct) {
          cVar2 = (**(code **)(lVar5 + 0x128))(plVar1);
          if (cVar2 != '\0') goto LAB_00121136;
          lVar5 = *plVar1;
          goto LAB_00121150;
        }
        if ((byte)((char)plVar1[1] - 0xfU) < 2) goto LAB_00121136;
      }
LAB_0012118a:
      plVar1 = plVar6 + 0x10;
    } while (plVar6 + 0x10 != param_1 + (lVar7 >> 7) * 0x10);
    param_1 = plVar6 + 0x10;
    lVar7 = (long)param_2 - (long)param_1;
  }
  lVar7 = lVar7 >> 5;
  if (lVar7 != 2) {
    if (lVar7 != 3) {
      if (lVar7 != 1) {
        return param_2;
      }
      goto LAB_001211c2;
    }
    plVar1 = (long *)*param_1;
    pcVar4 = *(code **)(*plVar1 + 0x128);
    if (param_3 == plVar1) {
LAB_00121302:
      if (pcVar4 == glslang::TType::isStruct) {
        cVar2 = (char)plVar1[1];
        goto LAB_001212d9;
      }
      cVar2 = (*pcVar4)(plVar1);
      if (cVar2 != '\0') goto LAB_001213db;
    }
    else {
      if (pcVar4 != glslang::TType::isStruct) {
        cVar2 = (*pcVar4)(plVar1);
        if (cVar2 != '\0') {
          return param_1;
        }
        pcVar4 = *(code **)(*plVar1 + 0x128);
        goto LAB_00121302;
      }
      cVar2 = (char)plVar1[1];
      if ((byte)(cVar2 - 0xfU) < 2) {
        return param_1;
      }
LAB_001212d9:
      if ((byte)(cVar2 - 0xfU) < 2) {
LAB_001213db:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    param_1 = param_1 + 4;
  }
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 == param_3) {
LAB_00121324:
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if ((byte)((char)plVar1[1] - 0xfU) < 2) {
LAB_00121345:
        lVar7 = *(long *)(plVar1[0xd] + 0x10);
        lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                          (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
        if (lVar7 != lVar5) {
          return param_1;
        }
      }
    }
    else {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') goto LAB_00121345;
    }
  }
  else {
    if (*(code **)(lVar7 + 0x128) != glslang::TType::isStruct) {
      cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
      if (cVar2 != '\0') {
        return param_1;
      }
      lVar7 = *plVar1;
      goto LAB_00121324;
    }
    if ((byte)((char)plVar1[1] - 0xfU) < 2) {
      return param_1;
    }
  }
  param_1 = param_1 + 4;
LAB_001211c2:
  plVar1 = (long *)*param_1;
  lVar7 = *plVar1;
  if (plVar1 != param_3) {
    if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
      if (1 < (byte)((char)plVar1[1] - 0xfU)) {
        return param_2;
      }
      return param_1;
    }
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 != '\0') {
      return param_1;
    }
    lVar7 = *plVar1;
  }
  if (*(code **)(lVar7 + 0x128) == glslang::TType::isStruct) {
    if (1 < (byte)((char)plVar1[1] - 0xfU)) {
      return param_2;
    }
  }
  else {
    cVar2 = (**(code **)(lVar7 + 0x128))(plVar1);
    if (cVar2 == '\0') {
      return param_2;
    }
  }
  lVar7 = *(long *)(plVar1[0xd] + 0x10);
  lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                    (*(undefined8 *)(plVar1[0xd] + 8),lVar7,param_3);
  if (lVar7 == lVar5) {
    return param_2;
  }
  return param_1;
}



/* glslang::TType::containsStructure() const */

bool __thiscall glslang::TType::containsStructure(TType *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (*(code **)(*(long *)this + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00121466:
      lVar1 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar1,this);
      return lVar1 != lVar3;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x128))();
    if (cVar2 != '\0') goto LAB_00121466;
  }
  return false;
}



/* glslang::TType::getBasicString(glslang::TBasicType) */

char * glslang::TType::getBasicString(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "void";
  case 1:
    return "float";
  case 2:
    return "double";
  case 3:
    return "float16_t";
  case 4:
    return "int8_t";
  case 5:
    return "uint8_t";
  case 6:
    return "int16_t";
  case 7:
    return "uint16_t";
  case 8:
    return "int";
  case 9:
    return "uint";
  case 10:
    return "int64_t";
  case 0xb:
    return "uint64_t";
  case 0xc:
    return "bool";
  case 0xd:
    return "atomic_uint";
  case 0xe:
    return "sampler/image";
  case 0xf:
    return "structure";
  case 0x10:
    return "block";
  case 0x11:
    return "accelerationStructureNV";
  case 0x12:
    return "reference";
  case 0x13:
    return "rayQueryEXT";
  default:
    return "unknown type";
  case 0x15:
    return "coopmat";
  case 0x16:
    return "spirv_type";
  case 0x17:
    return "string";
  }
}



/* glslang::TVariable::TVariable(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::TType const&, bool) */

void __thiscall
glslang::TVariable::TVariable(TVariable *this,basic_string *param_1,TType *param_2,bool param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(basic_string **)(this + 8) = param_1;
  this[0x40] = (TVariable)((byte)this[0x40] & 0x80);
  uVar1 = (ushort)((uint)*(undefined4 *)(this + 0x30) >> 0x10);
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  *(code **)this = memchr;
  *(uint *)(this + 0x30) = CONCAT22(uVar1,0x100) & 0xf800ffff;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar11 = *(undefined8 *)(param_2 + 0x48);
  *(undefined ***)(this + 0x28) = &PTR__TType_0014cc70;
  *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0x9fc00000;
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  this[0xc0] = (TVariable)param_3;
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xa8) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (TVariable)0x1;
  *(undefined ***)(this + 200) = &PTR__TConstUnionArray_0014ce58;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar6;
  *(undefined8 *)(this + 0x50) = uVar7;
  *(undefined8 *)(this + 0x58) = uVar8;
  *(undefined8 *)(this + 0x60) = uVar9;
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x70) = uVar11;
  *(undefined8 *)(this + 0x78) = uVar12;
  *(undefined8 *)(this + 0x80) = uVar13;
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(this + 0xa0) = uVar4;
  *(uint *)(this + 0x30) = (uint)(uVar1 & 0xf800) << 0x10 | uVar3 & 0x1fffff;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(ushort *)(param_2 + 10);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(this + 0xb8) = uVar4;
  *(ushort *)(this + 0x32) = uVar1 & 0x7e0 | *(ushort *)(this + 0x32) & 0xf81f;
  return;
}



/* glslang::TSymbolTableLevel::hasFunctionName(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) const */

bool __thiscall
glslang::TSymbolTableLevel::hasFunctionName(TSymbolTableLevel *this,basic_string *param_1)

{
  TSymbolTableLevel *pTVar1;
  void *__s2;
  ulong uVar2;
  void *__s;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  TSymbolTableLevel *pTVar8;
  TSymbolTableLevel *pTVar9;
  bool bVar10;
  
  if (*(TSymbolTableLevel **)(this + 0x18) == (TSymbolTableLevel *)0x0) {
    bVar10 = false;
  }
  else {
    __s2 = *(void **)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    pTVar8 = this + 0x10;
    pTVar9 = *(TSymbolTableLevel **)(this + 0x18);
    do {
      while( true ) {
        uVar7 = *(ulong *)(pTVar9 + 0x30);
        uVar5 = uVar2;
        if (uVar7 <= uVar2) {
          uVar5 = uVar7;
        }
        if ((uVar5 != 0) && (iVar3 = memcmp(*(void **)(pTVar9 + 0x28),__s2,uVar5), iVar3 != 0))
        break;
        lVar6 = uVar7 - uVar2;
        if (lVar6 < 0x80000000) {
          if (-0x80000001 < lVar6) {
            iVar3 = (int)lVar6;
            break;
          }
          goto LAB_00121900;
        }
LAB_00121949:
        pTVar1 = pTVar9 + 0x10;
        pTVar8 = pTVar9;
        pTVar9 = *(TSymbolTableLevel **)pTVar1;
        if (*(TSymbolTableLevel **)pTVar1 == (TSymbolTableLevel *)0x0) goto LAB_00121955;
      }
      if (-1 < iVar3) goto LAB_00121949;
LAB_00121900:
      pTVar9 = *(TSymbolTableLevel **)(pTVar9 + 0x18);
    } while (pTVar9 != (TSymbolTableLevel *)0x0);
LAB_00121955:
    bVar10 = false;
    if ((this + 0x10 != pTVar8) && (uVar7 = *(ulong *)(pTVar8 + 0x30), uVar7 != 0)) {
      __s = *(void **)(pTVar8 + 0x28);
      pvVar4 = memchr(__s,0x28,uVar7);
      if ((pvVar4 != (void *)0x0) &&
         (uVar5 = (long)pvVar4 - (long)__s, bVar10 = false, uVar5 != 0xffffffffffffffff)) {
        if (uVar5 < uVar7) {
          uVar7 = uVar5;
        }
        uVar5 = uVar7;
        if (uVar2 <= uVar7) {
          uVar5 = uVar2;
        }
        if ((uVar5 != 0) && (iVar3 = memcmp(__s,__s2,uVar5), iVar3 != 0)) {
          return false;
        }
        lVar6 = uVar7 - uVar2;
        bVar10 = false;
        if ((lVar6 < 0x80000000) && (-0x80000001 < lVar6)) {
          bVar10 = (int)lVar6 == 0;
        }
      }
    }
  }
  return bVar10;
}



/* glslang::TSymbolTable::find(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&, bool*, bool*, int*) */

long __thiscall
glslang::TSymbolTable::find
          (TSymbolTable *this,basic_string *param_1,bool *param_2,bool *param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  int local_60;
  int iVar7;
  
  lVar1 = *(long *)this;
  local_60 = 0;
  iVar7 = (int)(*(long *)(this + 8) - lVar1 >> 3);
  iVar6 = iVar7 + -1;
  lVar12 = (long)iVar6;
  do {
    iVar8 = (int)lVar12;
    lVar2 = *(long *)(lVar1 + lVar12 * 8);
    lVar9 = *(long *)(lVar2 + 0x18);
    local_60 = (local_60 + 1) - (uint)(*(char *)(lVar2 + 100) == '\0');
    if (lVar9 == 0) {
LAB_00121b6d:
      bVar14 = true;
      if (-1 < -iVar8) break;
    }
    else {
      __s2 = *(void **)(param_1 + 8);
      uVar3 = *(ulong *)(param_1 + 0x10);
      lVar13 = lVar2 + 0x10;
      do {
        while( true ) {
          lVar11 = lVar9;
          uVar4 = *(ulong *)(lVar11 + 0x30);
          uVar10 = uVar3;
          if (uVar4 <= uVar3) {
            uVar10 = uVar4;
          }
          if ((uVar10 != 0) && (iVar5 = memcmp(*(void **)(lVar11 + 0x28),__s2,uVar10), iVar5 != 0))
          break;
          lVar9 = uVar4 - uVar3;
          if (lVar9 < 0x80000000) {
            if (-0x80000001 < lVar9) {
              iVar5 = (int)lVar9;
              break;
            }
            goto LAB_00121aa0;
          }
LAB_00121aec:
          lVar9 = *(long *)(lVar11 + 0x10);
          lVar13 = lVar11;
          if (lVar9 == 0) goto LAB_00121af8;
        }
        if (-1 < iVar5) goto LAB_00121aec;
LAB_00121aa0:
        lVar9 = *(long *)(lVar11 + 0x18);
      } while (lVar9 != 0);
LAB_00121af8:
      if (lVar2 + 0x10 == lVar13) goto LAB_00121b6d;
      uVar4 = *(ulong *)(lVar13 + 0x30);
      uVar10 = uVar3;
      if (uVar4 <= uVar3) {
        uVar10 = uVar4;
      }
      if ((uVar10 == 0) || (iVar5 = memcmp(__s2,*(void **)(lVar13 + 0x28),uVar10), iVar5 == 0)) {
        lVar11 = uVar3 - uVar4;
        if (lVar11 < 0x80000000) {
          if (lVar11 < -0x80000000) goto LAB_00121b6d;
          iVar5 = (int)lVar11;
          goto LAB_00121b64;
        }
      }
      else {
LAB_00121b64:
        if (iVar5 < 0) goto LAB_00121b6d;
      }
      lVar9 = *(long *)(lVar13 + 0x48);
      bVar14 = lVar9 == 0;
      if (iVar8 < 1) break;
    }
    lVar12 = lVar12 + -1;
  } while (bVar14);
  if (param_2 != (bool *)0x0) {
    *param_2 = iVar8 < 3;
  }
  if (param_3 != (bool *)0x0) {
    *param_3 = iVar8 == iVar6 || iVar7 < 5;
  }
  if (param_4 != (int *)0x0) {
    iVar6 = 0;
    if (*(char *)(lVar2 + 100) != '\0') {
      iVar6 = local_60;
    }
    *param_4 = iVar6;
  }
  return lVar9;
}



/* glslang::TSymbolTable::relateToOperator(char const*, glslang::TOperator) */

void __thiscall
glslang::TSymbolTable::relateToOperator(TSymbolTable *this,undefined8 param_1,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (*(long *)(this + 8) != lVar2) {
    uVar1 = 0;
    do {
      glslang::TSymbolTableLevel::relateToOperator
                (*(undefined8 *)(lVar2 + uVar1 * 8),param_1,param_3);
      lVar2 = *(long *)this;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(this + 8) - lVar2 >> 3));
  }
  return;
}



/* glslang::TSymbolTable::setFunctionExtensions(char const*, int, char const* const*) */

void glslang::TSymbolTable::setFunctionExtensions(char *param_1,int param_2,char **param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar2) {
    uVar1 = 0;
    do {
      glslang::TSymbolTableLevel::setFunctionExtensions
                (*(char **)(lVar2 + uVar1 * 8),param_2,(char **)((ulong)param_3 & 0xffffffff));
      lVar2 = *(long *)param_1;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (ulong)(*(long *)(param_1 + 8) - lVar2 >> 3));
  }
  return;
}



/* glslang::TSymbolTable::setVariableExtensions(char const*, int, char const* const*) */

void __thiscall
glslang::TSymbolTable::setVariableExtensions
          (TSymbolTable *this,char *param_1,int param_2,char **param_3)

{
  size_t sVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = glslang::GetThreadPoolAllocator();
  local_50 = local_40;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  sVar1 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>(&local_58,param_1,param_1 + sVar1);
  plVar2 = (long *)find(this,(basic_string *)&local_58,(bool *)0x0,(bool *)0x0,(int *)0x0);
  if (plVar2 == (long *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x80))(plVar2,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TSymbolTable::setVariableExtensions(char const*, char const*, int, char const* const*)
    */

void __thiscall
glslang::TSymbolTable::setVariableExtensions
          (TSymbolTable *this,char *param_1,char *param_2,int param_3,char **param_4)

{
  ulong uVar1;
  void *__s1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = glslang::GetThreadPoolAllocator();
  local_60 = local_50;
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  sVar4 = strlen(param_1);
  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
  _M_construct<char_const*>((basic_string *)&local_68,param_1,param_1 + sVar4);
  plVar5 = (long *)find(this,(basic_string *)&local_68,(bool *)0x0,(bool *)0x0,(int *)0x0);
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5);
    lVar7 = *plVar6;
    plVar5 = plVar6;
    if (*(code **)(lVar7 + 0x48) != TVariable::getAsVariable) {
      plVar5 = (long *)(**(code **)(lVar7 + 0x48))();
      lVar7 = *plVar5;
    }
    if (*(code **)(lVar7 + 0x60) == TVariable::getType) {
      plVar5 = plVar5 + 5;
    }
    else {
      plVar5 = (long *)(**(code **)(lVar7 + 0x60))();
    }
    lVar7 = plVar5[0xd];
    lVar9 = *(long *)(lVar7 + 8);
    if (0 < (int)(*(long *)(lVar7 + 0x10) - lVar9 >> 5)) {
      uVar10 = 0;
      do {
        plVar5 = *(long **)(lVar9 + uVar10 * 0x20);
        pcVar2 = *(code **)(*plVar5 + 0x30);
        if (pcVar2 == TType::getFieldName_abi_cxx11_) {
          lVar9 = plVar5[0xe];
        }
        else {
          lVar9 = (*pcVar2)();
        }
        uVar1 = *(ulong *)(lVar9 + 0x10);
        __s1 = *(void **)(lVar9 + 8);
        sVar8 = strlen(param_2);
        sVar4 = sVar8;
        if (uVar1 <= sVar8) {
          sVar4 = uVar1;
        }
        if (sVar4 == 0) {
LAB_00121ee5:
          lVar9 = uVar1 - sVar8;
          if (((lVar9 < 0x80000000) && (-0x80000001 < lVar9)) && ((int)lVar9 == 0)) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0xf0))(plVar6,uVar10 & 0xffffffff,param_3,param_4);
              return;
            }
            goto LAB_00121fcd;
          }
        }
        else {
          iVar3 = memcmp(__s1,param_2,sVar4);
          if (iVar3 == 0) goto LAB_00121ee5;
        }
        lVar9 = *(long *)(lVar7 + 8);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)(*(long *)(lVar7 + 0x10) - lVar9 >> 5));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00121fcd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string<glslang::std::allocator<char> >(char const*, glslang::std::allocator<char>
   const&) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
basic_string<glslang::std::allocator<char>>
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1,allocator *param_2)

{
  size_t sVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) =
       this + 0x18;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _M_construct<char_const*>(this,param_1,param_1 + sVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_logic_error("basic_string: construction from null is not valid");
}



/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */

bool glslang::TType::
     contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>
               (long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_00122110;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00122160;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00122110:
    lVar2 = *param_1;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if ((char)param_1[1] != '\x0e') goto LAB_0012207f;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))(param_1);
      }
      if (((*plVar4 & 0x80000) != 0) && (1 < (byte)(*(char *)((long)plVar4 + 1) - 7U))) {
        return true;
      }
    }
    else {
LAB_00122160:
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *param_1;
  }
LAB_0012207f:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)param_1[1] - 0xfU) < 2) {
LAB_001220b1:
      lVar2 = *(long *)(param_1[0xd] + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(param_1[0xd] + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(param_1);
    if (cVar1 != '\0') goto LAB_001220b1;
  }
  return false;
}



/* glslang::TType::containsSampler() const */

bool __thiscall glslang::TType::containsSampler(TType *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  TType *pTVar4;
  code *pcVar5;
  
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if (this[8] == (TType)0xe) {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))();
      }
      if ((((byte)pTVar4[2] & 0x20) == 0) && (((byte)pTVar4[2] & 8) == 0)) {
        return true;
      }
      goto LAB_00122260;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_001222b0;
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x168))();
    if (cVar1 != '\0') {
      return true;
    }
LAB_00122260:
    lVar2 = *(long *)this;
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 == isImage) {
      if (this[8] != (TType)0xe) goto LAB_001221cf;
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        pTVar4 = this + 0x80;
      }
      else {
        pTVar4 = (TType *)(**(code **)(lVar2 + 0x40))(this);
      }
      if ((((byte)pTVar4[2] & 8) != 0) && (1 < (byte)((char)pTVar4[1] - 7U))) {
        return true;
      }
    }
    else {
LAB_001222b0:
      cVar1 = (*pcVar5)(this);
      if (cVar1 != '\0') {
        return true;
      }
    }
    lVar2 = *(long *)this;
  }
LAB_001221cf:
  if (*(code **)(lVar2 + 0x128) == isStruct) {
    if ((byte)((char)this[8] - 0xfU) < 2) {
LAB_00122201:
      lVar2 = *(long *)(*(long *)(this + 0x68) + 0x10);
      lVar3 = std::
              __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
                        (*(undefined8 *)(*(long *)(this + 0x68) + 8),lVar2);
      return lVar2 != lVar3;
    }
  }
  else {
    cVar1 = (**(code **)(lVar2 + 0x128))(this);
    if (cVar1 != '\0') goto LAB_00122201;
  }
  return false;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >
   >::find(std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> >
   const&) */

_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
* __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
::find(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
       *this,basic_string *param_1)

{
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var1;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var2;
  void *__s2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var8;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var9;
  
  p_Var1 = this + 0x10;
  p_Var8 = p_Var1;
  if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
        **)(this + 0x18) !=
      (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
       *)0x0) {
    __s2 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
               **)(this + 0x18);
    do {
      while( true ) {
        uVar4 = *(ulong *)(p_Var9 + 0x30);
        uVar6 = uVar3;
        if (uVar4 <= uVar3) {
          uVar6 = uVar4;
        }
        if ((uVar6 != 0) && (iVar5 = memcmp(*(void **)(p_Var9 + 0x28),__s2,uVar6), iVar5 != 0))
        break;
        lVar7 = uVar4 - uVar3;
        if (lVar7 < 0x80000000) {
          if (-0x80000001 < lVar7) {
            iVar5 = (int)lVar7;
            break;
          }
          goto LAB_00122320;
        }
LAB_00122369:
        p_Var2 = p_Var9 + 0x10;
        p_Var8 = p_Var9;
        p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                   **)p_Var2;
        if (*(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
              **)p_Var2 ==
            (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
             *)0x0) goto LAB_00122375;
      }
      if (-1 < iVar5) goto LAB_00122369;
LAB_00122320:
      p_Var9 = *(_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                 **)(p_Var9 + 0x18);
    } while (p_Var9 != (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                        *)0x0);
LAB_00122375:
    if (p_Var1 != p_Var8) {
      uVar4 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = uVar4;
      }
      if ((uVar6 == 0) || (iVar5 = memcmp(__s2,*(void **)(p_Var8 + 0x28),uVar6), iVar5 == 0)) {
        lVar7 = uVar3 - uVar4;
        if (0x7fffffff < lVar7) {
          return p_Var8;
        }
        if (lVar7 < -0x80000000) {
          return p_Var1;
        }
        iVar5 = (int)lVar7;
      }
      if (iVar5 < 0) {
        p_Var8 = p_Var1;
      }
    }
  }
  return p_Var8;
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  undefined1 *__src;
  
  uVar3 = (param_4 - param_2) + *(long *)(this + 0x10);
  __n = *(long *)(this + 0x10) - (param_1 + param_2);
  if (*(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8) ==
      this + 0x18) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
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
    __dest = (undefined1 *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)(this + 8);
      }
      else {
        __dest = (undefined1 *)memcpy(__dest,*(undefined1 **)(this + 8),param_1);
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
      __src = (undefined1 *)(param_1 + param_2 + *(long *)(this + 8));
      if (__n == 1) {
        __dest[param_1 + param_4] = *__src;
      }
      else {
        memcpy(__dest + param_1 + param_4,__src,__n);
      }
    }
    *(undefined1 **)(this + 8) = __dest;
    *(ulong *)(this + 0x18) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::_M_create");
}



/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::append(char const*) */

basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar4;
  
  __n = strlen(param_1);
  uVar2 = *(ulong *)(this + 0x10);
  if (__n <= 0x7fffffffffffffff - uVar2) {
    pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)(this + 8)
    ;
    uVar1 = uVar2 + __n;
    if (pbVar4 == this + 0x18) {
      uVar3 = 0xf;
    }
    else {
      uVar3 = *(ulong *)(this + 0x18);
    }
    if (uVar3 < uVar1) {
      _M_mutate(this,uVar2,0,param_1,__n);
      pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                (this + 8);
    }
    else if (__n != 0) {
      if (__n == 1) {
        pbVar4[uVar2] =
             (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)*param_1;
        pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                  (this + 8);
      }
      else {
        memcpy(pbVar4 + uVar2,param_1,__n);
        pbVar4 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> **)
                  (this + 8);
      }
    }
    *(ulong *)(this + 0x10) = uVar1;
    pbVar4[uVar1] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_length_error("basic_string::append");
}



/* glslang::TSampler::getString[abi:cxx11]() const */

void glslang::TSampler::getString_abi_cxx11_(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined8 uVar12;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  char local_70;
  undefined2 uStack_6f;
  undefined4 uStack_6d;
  undefined1 uStack_69;
  ulong local_58;
  ulong *local_50;
  long local_48;
  ulong local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = glslang::GetThreadPoolAllocator();
  bVar6 = in_RSI[2];
  local_78 = 0;
  local_70 = '\0';
  local_80 = &local_70;
  if ((bVar6 & 0x20) != 0) {
    *in_RDI = local_88;
    local_70 = 's';
    uStack_6f = 0x6d61;
    uStack_69 = 0;
    uStack_6d = 0x72656c70;
    in_RDI[1] = in_RDI + 3;
    in_RDI[2] = 7;
    in_RDI[3] = 0x72656c706d6173;
    goto LAB_0014a971;
  }
  switch(*in_RSI) {
  case 3:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "f16");
    bVar6 = in_RSI[2];
    break;
  case 4:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i8");
    bVar6 = in_RSI[2];
    break;
  case 5:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u16");
    bVar6 = in_RSI[2];
    break;
  case 6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i16");
    bVar6 = in_RSI[2];
    break;
  case 7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u8");
    bVar6 = in_RSI[2];
    break;
  case 8:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i");
    bVar6 = in_RSI[2];
    break;
  case 9:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u");
    bVar6 = in_RSI[2];
    break;
  case 10:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "i64");
    bVar6 = in_RSI[2];
    break;
  case 0xb:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "u64");
    bVar6 = in_RSI[2];
  }
  if ((bVar6 & 8) == 0) {
    if ((bVar6 & 0x10) == 0) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_88,"texture");
      goto LAB_0014a9dc;
    }
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "sampler");
    bVar6 = in_RSI[3];
    pcVar8 = local_80;
    uVar11 = local_78;
  }
  else {
    if (in_RSI[1] == '\b') {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_88,"attachmentEXT");
    }
    else if (in_RSI[1] == '\a') {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_88,"subpass");
    }
    else {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_88,"image");
    }
LAB_0014a9dc:
    bVar6 = in_RSI[3];
    pcVar8 = local_80;
    uVar11 = local_78;
  }
  local_80 = pcVar8;
  local_78 = uVar11;
  if ((bVar6 & 0x20) != 0) {
    if (0x7fffffffffffffff - uVar11 < 0xb) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    uVar1 = uVar11 + 0xb;
    if (pcVar8 == &local_70) {
      uVar10 = 0xf;
    }
    else {
      uVar10 = CONCAT17(uStack_69,CONCAT43(uStack_6d,CONCAT21(uStack_6f,local_70)));
    }
    if (uVar10 < uVar1) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
      _M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88
                ,uVar11,0,"ExternalOES",0xb);
    }
    else {
      builtin_strncpy(pcVar8 + uVar11,"ExternalOES",0xb);
    }
    local_78 = uVar1;
    local_80[uVar11 + 0xb] = '\0';
    *in_RDI = local_88;
    in_RDI[1] = in_RDI + 3;
    if (local_80 == &local_70) {
      uVar11 = uVar11 + 0xc;
      uVar3 = (uint)uVar11;
      if (uVar3 < 8) {
        if ((uVar11 & 4) == 0) {
          if ((uVar3 != 0) && (*(char *)(in_RDI + 3) = local_70, (uVar11 & 2) != 0)) {
            *(undefined2 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x16) =
                 *(undefined2 *)((long)&local_78 + (uVar11 & 0xffffffff) + 6);
          }
        }
        else {
          *(uint *)(in_RDI + 3) = CONCAT13((undefined1)uStack_6d,CONCAT21(uStack_6f,local_70));
          *(undefined4 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)&local_78 + (uVar11 & 0xffffffff) + 4);
        }
      }
      else {
        in_RDI[3] = CONCAT17(uStack_69,CONCAT43(uStack_6d,CONCAT21(uStack_6f,local_70)));
        *(undefined8 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)&local_78 + (uVar11 & 0xffffffff));
        lVar9 = (long)(in_RDI + 3) - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
        uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
        if (7 < uVar3) {
          uVar11 = 0;
          do {
            uVar7 = (int)uVar11 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar11) =
                 *(undefined8 *)(&local_70 + (uVar11 - lVar9));
            uVar11 = (ulong)uVar7;
          } while (uVar7 < uVar3);
        }
      }
    }
    else {
      in_RDI[1] = local_80;
      in_RDI[3] = CONCAT17(uStack_69,CONCAT43(uStack_6d,CONCAT21(uStack_6f,local_70)));
    }
    in_RDI[2] = uVar1;
    goto LAB_0014a971;
  }
  if ((bVar6 & 0x40) != 0) {
    local_58 = glslang::GetThreadPoolAllocator();
    local_40[0] = local_40[0] & 0xffffffffffffff00;
    local_50 = local_40;
    uVar1 = uVar11 + 2;
    local_48 = 0;
    if (uVar1 < 0x10) {
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_58,"__",2);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_58,pcVar8,uVar11);
      puVar4 = (undefined8 *)
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
               ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                        &local_58,"External2DY2YEXT");
      uVar12 = *puVar4;
    }
    else {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::_M_create");
      }
      uVar10 = 0x1e;
      if (0x1d < uVar1) {
        uVar10 = uVar1;
      }
      __dest = (ulong *)glslang::TPoolAllocator::allocate(local_58);
      if (local_48 == 0) {
        *(char *)__dest = (char)*local_50;
      }
      else if (local_48 + 1U != 0) {
        __dest = (ulong *)memcpy(__dest,local_50,local_48 + 1U);
      }
      local_50 = __dest;
      local_40[0] = uVar10;
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_58,"__",2);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
                ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                 &local_58,pcVar8,uVar11);
      puVar4 = (undefined8 *)
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>
               ::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)
                        &local_58,"External2DY2YEXT");
      uVar12 = *puVar4;
    }
    puVar5 = in_RDI + 3;
    *in_RDI = uVar12;
    in_RDI[1] = puVar5;
    puVar2 = puVar4 + 3;
    if ((undefined8 *)puVar4[1] == puVar2) {
      uVar11 = puVar4[2] + 1;
      uVar3 = (uint)uVar11;
      if (uVar3 < 8) {
        if ((uVar11 & 4) == 0) {
          if ((uVar3 != 0) && (*(undefined1 *)puVar5 = *(undefined1 *)puVar2, (uVar11 & 2) != 0)) {
            *(undefined2 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x16) =
                 *(undefined2 *)((long)puVar4 + (uVar11 & 0xffffffff) + 0x16);
          }
        }
        else {
          *(undefined4 *)puVar5 = *(undefined4 *)puVar2;
          *(undefined4 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x14) =
               *(undefined4 *)((long)puVar4 + (uVar11 & 0xffffffff) + 0x14);
        }
      }
      else {
        *puVar5 = *puVar2;
        *(undefined8 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x10) =
             *(undefined8 *)((long)puVar4 + (uVar11 & 0xffffffff) + 0x10);
        lVar9 = (long)puVar5 - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
        uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
        if (7 < uVar3) {
          uVar7 = 0;
          do {
            uVar11 = (ulong)uVar7;
            uVar7 = uVar7 + 8;
            *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar11) =
                 *(undefined8 *)((long)puVar2 + (uVar11 - lVar9));
          } while (uVar7 < uVar3);
        }
      }
    }
    else {
      in_RDI[1] = (undefined8 *)puVar4[1];
      in_RDI[3] = puVar4[3];
    }
    uVar12 = puVar4[2];
    puVar4[1] = puVar2;
    puVar4[2] = 0;
    in_RDI[2] = uVar12;
    *(undefined1 *)(puVar4 + 3) = 0;
    goto LAB_0014a971;
  }
  switch(in_RSI[1]) {
  case 1:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "1D");
    break;
  case 2:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "2D");
    break;
  case 3:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "3D");
    break;
  case 4:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "Cube");
    break;
  case 5:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "2DRect");
    break;
  case 6:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "Buffer");
    break;
  case 7:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "Input");
    break;
  case 8:
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "");
  }
  bVar6 = in_RSI[2];
  if ((bVar6 & 4) != 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "MS");
    bVar6 = in_RSI[2];
  }
  if ((bVar6 & 1) != 0) {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "Array");
    bVar6 = in_RSI[2];
  }
  if ((bVar6 & 2) == 0) {
    *in_RDI = local_88;
    in_RDI[1] = in_RDI + 3;
    if (local_80 == &local_70) goto LAB_0014ad7a;
LAB_0014ac2a:
    in_RDI[1] = local_80;
    in_RDI[3] = CONCAT17(uStack_69,CONCAT43(uStack_6d,CONCAT21(uStack_6f,local_70)));
  }
  else {
    std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append
              ((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *)&local_88,
               "Shadow");
    *in_RDI = local_88;
    in_RDI[1] = in_RDI + 3;
    if (local_80 != &local_70) goto LAB_0014ac2a;
LAB_0014ad7a:
    pcVar8 = (char *)(in_RDI + 3);
    uVar11 = local_78 + 1;
    uVar3 = (uint)uVar11;
    if (uVar3 < 8) {
      if ((uVar11 & 4) == 0) {
        if ((uVar3 != 0) && (*pcVar8 = local_70, (uVar11 & 2) != 0)) {
          *(undefined2 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x16) =
               *(undefined2 *)((long)&local_78 + (uVar11 & 0xffffffff) + 6);
        }
      }
      else {
        *(uint *)pcVar8 = CONCAT13((undefined1)uStack_6d,CONCAT21(uStack_6f,local_70));
        *(undefined4 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x14) =
             *(undefined4 *)((long)&local_78 + (uVar11 & 0xffffffff) + 4);
      }
    }
    else {
      *(ulong *)pcVar8 = CONCAT17(uStack_69,CONCAT43(uStack_6d,CONCAT21(uStack_6f,local_70)));
      *(undefined8 *)((long)in_RDI + (uVar11 & 0xffffffff) + 0x10) =
           *(undefined8 *)((long)&local_78 + (uVar11 & 0xffffffff));
      lVar9 = (long)pcVar8 - ((ulong)(in_RDI + 4) & 0xfffffffffffffff8);
      uVar3 = uVar3 + (int)lVar9 & 0xfffffff8;
      if (7 < uVar3) {
        uVar11 = 0;
        do {
          uVar7 = (int)uVar11 + 8;
          *(undefined8 *)(((ulong)(in_RDI + 4) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)(&local_70 + (uVar11 - lVar9));
          uVar11 = (ulong)uVar7;
        } while (uVar7 < uVar3);
      }
    }
  }
  in_RDI[2] = local_78;
LAB_0014a971:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >
   >::_M_get_insert_unique_pos(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
           *this,basic_string *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  size_t __n;
  _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
  *p_Var7;
  _Rb_tree_node_base *p_Var8;
  ulong uVar9;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  void *local_50;
  
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
    p_Var7 = this + 0x10;
LAB_0014b2e4:
    if (*(_Rb_tree_node_base **)(this + 0x20) == (_Rb_tree_node_base *)p_Var7) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0014b2aa;
    }
    p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
    uVar9 = *(ulong *)(p_Var5 + 0x30);
    __s2 = *(void **)(p_Var5 + 0x28);
    uVar10 = *(ulong *)(param_1 + 0x10);
    local_50 = *(void **)(param_1 + 8);
    __n = uVar9;
    if (uVar10 <= uVar9) {
      __n = uVar10;
    }
  }
  else {
    local_50 = *(void **)(param_1 + 8);
    uVar10 = *(ulong *)(param_1 + 0x10);
    p_Var5 = *(_Rb_tree_node_base **)(this + 0x18);
    do {
      p_Var7 = (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                *)p_Var5;
      uVar9 = *(ulong *)((_Rb_tree_node_base *)p_Var7 + 0x30);
      __s2 = *(void **)((_Rb_tree_node_base *)p_Var7 + 0x28);
      __n = uVar9;
      if (uVar10 <= uVar9) {
        __n = uVar10;
      }
      if (__n == 0) {
LAB_0014b254:
        uVar4 = uVar10 - uVar9;
        if (0x7fffffff < (long)uVar4) goto LAB_0014b272;
        if (-0x80000001 < (long)uVar4) goto LAB_0014b26e;
LAB_0014b218:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x10);
        bVar1 = true;
      }
      else {
        uVar2 = memcmp(local_50,__s2,__n);
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0) goto LAB_0014b254;
LAB_0014b26e:
        if ((int)uVar4 < 0) goto LAB_0014b218;
LAB_0014b272:
        p_Var5 = *(_Rb_tree_node_base **)((_Rb_tree_node_base *)p_Var7 + 0x18);
        bVar1 = false;
      }
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    p_Var5 = (_Rb_tree_node_base *)p_Var7;
    if (bVar1) goto LAB_0014b2e4;
  }
  if ((__n == 0) || (iVar3 = memcmp(__s2,local_50,__n), iVar3 == 0)) {
    lVar6 = uVar9 - uVar10;
    if (0x7fffffff < lVar6) {
      p_Var8 = (_Rb_tree_node_base *)0x0;
      goto LAB_0014b2aa;
    }
    if (lVar6 < -0x80000000) {
      p_Var5 = (_Rb_tree_node_base *)0x0;
      p_Var8 = (_Rb_tree_node_base *)p_Var7;
      goto LAB_0014b2aa;
    }
    iVar3 = (int)lVar6;
  }
  p_Var8 = (_Rb_tree_node_base *)0x0;
  if (iVar3 < 0) {
    p_Var8 = (_Rb_tree_node_base *)p_Var7;
    p_Var5 = (_Rb_tree_node_base *)0x0;
  }
LAB_0014b2aa:
  auVar11._8_8_ = p_Var8;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}



/* std::pair<std::_Rb_tree_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*> >, bool>
   std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >
   >::_M_emplace_unique<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*>
   const>(std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> const&&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
::
_M_emplace_unique<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>const>
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
           *this,pair_conflict *param_1)

{
  ulong uVar1;
  int iVar2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  undefined8 uVar7;
  ulong __n;
  bool bVar8;
  long lVar9;
  undefined1 auVar10 [16];
  _Rb_tree_node_base *p_Var6;
  
  p_Var3 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  uVar4 = glslang::GetThreadPoolAllocator();
  uVar1 = *(ulong *)(param_1 + 0x10);
  p_Var5 = p_Var3 + 0x38;
  *(_Rb_tree_node_base **)(p_Var3 + 0x28) = p_Var5;
  p_Var6 = *(_Rb_tree_node_base **)(param_1 + 8);
  *(ulong *)(p_Var3 + 0x20) = uVar4;
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
      p_Var3[0x38] = *p_Var6;
    }
    else if (uVar1 != 0) goto LAB_0014b431;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    p_Var5 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar4);
    *(ulong *)(p_Var3 + 0x38) = uVar1;
    *(_Rb_tree_node_base **)(p_Var3 + 0x28) = p_Var5;
LAB_0014b431:
    memcpy(p_Var5,p_Var6,uVar1);
    p_Var5 = *(_Rb_tree_node_base **)(p_Var3 + 0x28);
  }
  *(ulong *)(p_Var3 + 0x30) = uVar1;
  p_Var5[uVar1] = (_Rb_tree_node_base)0x0;
  *(undefined8 *)(p_Var3 + 0x48) = *(undefined8 *)(param_1 + 0x28);
  auVar10 = _M_get_insert_unique_pos(this,(basic_string *)(p_Var3 + 0x20));
  p_Var6 = auVar10._8_8_;
  uVar7 = 0;
  p_Var5 = auVar10._0_8_;
  if (p_Var6 == (_Rb_tree_node_base *)0x0) goto LAB_0014b3ef;
  bVar8 = true;
  if ((auVar10._0_8_ == (_Rb_tree_node_base *)0x0) &&
     (p_Var6 != (_Rb_tree_node_base *)(this + 0x10))) {
    uVar1 = *(ulong *)(p_Var3 + 0x30);
    uVar4 = *(ulong *)(p_Var6 + 0x30);
    __n = uVar4;
    if (uVar1 <= uVar4) {
      __n = uVar1;
    }
    if ((__n == 0) ||
       (iVar2 = memcmp(*(void **)(p_Var3 + 0x28),*(void **)(p_Var6 + 0x28),__n), iVar2 == 0)) {
      lVar9 = uVar1 - uVar4;
      bVar8 = false;
      if (lVar9 < 0x80000000) {
        if (-0x80000001 < lVar9) {
          iVar2 = (int)lVar9;
          goto LAB_0014b4a1;
        }
        bVar8 = true;
      }
    }
    else {
LAB_0014b4a1:
      bVar8 = SUB41((uint)iVar2 >> 0x1f,0);
    }
  }
  std::_Rb_tree_insert_and_rebalance(bVar8,p_Var3,p_Var6,(_Rb_tree_node_base *)(this + 0x10));
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  uVar7 = 1;
  p_Var5 = p_Var3;
LAB_0014b3ef:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = p_Var5;
  return auVar10;
}



/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*>,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::less<std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   > >, glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, glslang::TSymbol*> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, glslang::TSymbol*> >,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
           *this,_Rb_tree_node_base *param_2,basic_string *param_3)

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
  
  if (param_2 == (_Rb_tree_node_base *)(this + 0x10)) {
    if (*(long *)(this + 0x30) != 0) {
      param_2 = *(_Rb_tree_node_base **)(this + 0x28);
      uVar1 = *(ulong *)(param_3 + 0x10);
      uVar2 = *(ulong *)(param_2 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) ||
         (iVar3 = memcmp(*(void **)(param_2 + 0x28),*(void **)(param_3 + 8),uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0014b6f6;
        if (lVar5 < -0x80000000) goto LAB_0014b687;
        iVar3 = (int)lVar5;
      }
      if (-1 < iVar3) goto LAB_0014b6f6;
      goto LAB_0014b687;
    }
    goto LAB_0014b6f6;
  }
  uVar1 = *(ulong *)(param_3 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x30);
  __s1 = *(void **)(param_3 + 8);
  __s2 = *(void **)(param_2 + 0x28);
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  p_Var7 = param_2;
  if (uVar6 == 0) {
    lVar5 = uVar1 - uVar2;
    if ((lVar5 < 0x80000000) && ((lVar5 < -0x80000000 || ((int)lVar5 < 0)))) {
LAB_0014b5aa:
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_2) goto LAB_0014b57c;
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if ((uVar6 == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x28),__s1,uVar6), iVar3 == 0)) {
        lVar5 = uVar2 - uVar1;
        if (0x7fffffff < lVar5) goto LAB_0014b6f6;
        if (-0x80000001 < lVar5) {
          iVar3 = (int)lVar5;
          goto LAB_0014b608;
        }
      }
      else {
LAB_0014b608:
        if (-1 < iVar3) goto LAB_0014b6f6;
      }
      if (*(long *)(p_Var8 + 0x18) == 0) {
        p_Var7 = (_Rb_tree_node_base *)0x0;
        param_2 = p_Var8;
      }
      goto LAB_0014b57c;
    }
LAB_0014b555:
    uVar6 = uVar2 - uVar1;
    if ((long)uVar6 < 0x80000000) {
      if (-0x80000001 < (long)uVar6) goto LAB_0014b56f;
      goto LAB_0014b6a0;
    }
  }
  else {
    iVar3 = memcmp(__s1,__s2,uVar6);
    if (iVar3 == 0) {
      lVar5 = uVar1 - uVar2;
      if (lVar5 < 0x80000000) {
        if (lVar5 < -0x80000000) goto LAB_0014b5aa;
        iVar3 = (int)lVar5;
        goto LAB_0014b544;
      }
    }
    else {
LAB_0014b544:
      if (iVar3 < 0) goto LAB_0014b5aa;
    }
    uVar4 = memcmp(__s2,__s1,uVar6);
    uVar6 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0014b555;
LAB_0014b56f:
    if ((int)uVar6 < 0) {
LAB_0014b6a0:
      if (*(_Rb_tree_node_base **)(this + 0x28) == param_2) {
LAB_0014b687:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_2;
        return auVar10 << 0x40;
      }
      p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_2);
      uVar2 = *(ulong *)(p_Var8 + 0x30);
      uVar6 = uVar1;
      if (uVar2 <= uVar1) {
        uVar6 = uVar2;
      }
      if (uVar6 == 0) {
LAB_0014b6dc:
        uVar6 = uVar1 - uVar2;
        if (0x7fffffff < (long)uVar6) goto LAB_0014b6f6;
        if (-0x80000001 < (long)uVar6) goto LAB_0014b6f2;
      }
      else {
        uVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x28),uVar6);
        uVar6 = (ulong)uVar4;
        if (uVar4 == 0) goto LAB_0014b6dc;
LAB_0014b6f2:
        if (-1 < (int)uVar6) {
LAB_0014b6f6:
          auVar10 = _M_get_insert_unique_pos(this,param_3);
          return auVar10;
        }
      }
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)(param_2 + 0x18) != 0) {
        p_Var7 = p_Var8;
        param_2 = p_Var8;
      }
      goto LAB_0014b57c;
    }
  }
  param_2 = (_Rb_tree_node_base *)0x0;
LAB_0014b57c:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}



/* void std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_realloc_insert<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >
   >(__gnu_cxx::__normal_iterator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > >*, std::vector<std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > > > >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> >, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >&&) */

void __thiscall
std::
vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
::
_M_realloc_insert<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
          (vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
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
  ulong *local_60;
  ulong local_50;
  
  lVar1 = *(long *)(this + 0x10);
  lVar8 = *(long *)(this + 8);
  lVar3 = lVar1 - lVar8 >> 4;
  uVar4 = lVar3 * -0x3333333333333333;
  if (uVar4 == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (lVar8 == lVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_0014b950;
    local_50 = 0x199999999999999;
    if (uVar4 + 1 < 0x19999999999999a) {
      local_50 = uVar4 + 1;
    }
LAB_0014b95f:
    local_60 = (ulong *)glslang::TPoolAllocator::allocate(*(ulong *)this);
  }
  else {
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4) {
LAB_0014b950:
      local_50 = 0x199999999999999;
      goto LAB_0014b95f;
    }
    if (uVar5 != 0) {
      local_50 = 0x199999999999999;
      if (uVar5 < 0x19999999999999a) {
        local_50 = uVar5;
      }
      goto LAB_0014b95f;
    }
    local_60 = (ulong *)0x0;
    local_50 = uVar5;
  }
  puVar7 = (ulong *)((param_2 - lVar8) + (long)local_60);
  uVar5 = glslang::GetThreadPoolAllocator();
  uVar4 = *(ulong *)(param_3 + 0x10);
  puVar6 = puVar7 + 3;
  *puVar7 = uVar5;
  puVar7[1] = (ulong)puVar6;
  puVar2 = *(undefined1 **)(param_3 + 8);
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar7 + 3) = *puVar2;
    }
    else if (uVar4 != 0) goto LAB_0014bbcc;
  }
  else {
    if ((long)uVar4 < 0) goto LAB_0014bc36;
    puVar6 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
    puVar7[1] = (ulong)puVar6;
    puVar7[3] = uVar4;
LAB_0014bbcc:
    memcpy(puVar6,puVar2,uVar4);
    puVar6 = (ulong *)puVar7[1];
  }
  puVar7[2] = uVar4;
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  uVar5 = glslang::GetThreadPoolAllocator();
  puVar6 = puVar7 + 8;
  puVar7[5] = uVar5;
  puVar7[6] = (ulong)puVar6;
  puVar2 = *(undefined1 **)(param_3 + 0x30);
  uVar4 = *(ulong *)(param_3 + 0x38);
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar7 + 8) = *puVar2;
      goto LAB_0014b861;
    }
    if (uVar4 == 0) goto LAB_0014b861;
  }
  else {
    if ((long)uVar4 < 0) {
LAB_0014bc36:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    puVar6 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
    puVar7[6] = (ulong)puVar6;
    puVar7[8] = uVar4;
  }
  memcpy(puVar6,puVar2,uVar4);
  puVar6 = (ulong *)puVar7[6];
LAB_0014b861:
  puVar7[7] = uVar4;
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  puVar6 = local_60;
  for (; param_2 != lVar8; lVar8 = lVar8 + 0x50) {
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
      else if (uVar4 != 0) goto LAB_0014b936;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_0014bc36;
      puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
      puVar6[3] = uVar4;
      puVar6[1] = (ulong)puVar7;
LAB_0014b936:
      memcpy(puVar7,puVar2,uVar4);
      puVar7 = (ulong *)puVar6[1];
    }
    puVar6[2] = uVar4;
    *(undefined1 *)((long)puVar7 + uVar4) = 0;
    uVar5 = glslang::GetThreadPoolAllocator();
    uVar4 = *(ulong *)(lVar8 + 0x38);
    puVar7 = puVar6 + 8;
    puVar6[6] = (ulong)puVar7;
    puVar2 = *(undefined1 **)(lVar8 + 0x30);
    puVar6[5] = uVar5;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        *(undefined1 *)(puVar6 + 8) = *puVar2;
      }
      else if (uVar4 != 0) goto LAB_0014b9c8;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_0014bc36;
      puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
      puVar6[8] = uVar4;
      puVar6[6] = (ulong)puVar7;
LAB_0014b9c8:
      memcpy(puVar7,puVar2,uVar4);
      puVar7 = (ulong *)puVar6[6];
    }
    puVar6[7] = uVar4;
    puVar6 = puVar6 + 10;
    *(undefined1 *)((long)puVar7 + uVar4) = 0;
  }
  puVar6 = puVar6 + 10;
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
        else if (uVar4 != 0) goto LAB_0014ba98;
      }
      else {
        if ((long)uVar4 < 0) goto LAB_0014bc36;
        puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
        puVar6[3] = uVar4;
        puVar6[1] = (ulong)puVar7;
LAB_0014ba98:
        memcpy(puVar7,puVar2,uVar4);
        puVar7 = (ulong *)puVar6[1];
      }
      puVar6[2] = uVar4;
      *(undefined1 *)((long)puVar7 + uVar4) = 0;
      uVar5 = glslang::GetThreadPoolAllocator();
      uVar4 = *(ulong *)(param_2 + 0x38);
      puVar7 = puVar6 + 8;
      puVar6[6] = (ulong)puVar7;
      puVar2 = *(undefined1 **)(param_2 + 0x30);
      puVar6[5] = uVar5;
      if (uVar4 < 0x10) {
        if (uVar4 == 1) {
          *(undefined1 *)(puVar6 + 8) = *puVar2;
        }
        else if (uVar4 != 0) goto LAB_0014baf0;
      }
      else {
        if ((long)uVar4 < 0) goto LAB_0014bc36;
        puVar7 = (ulong *)glslang::TPoolAllocator::allocate(uVar5);
        puVar6[8] = uVar4;
        puVar6[6] = (ulong)puVar7;
LAB_0014baf0:
        memcpy(puVar7,puVar2,uVar4);
        puVar7 = (ulong *)puVar6[6];
      }
      param_2 = param_2 + 0x50;
      puVar6[7] = uVar4;
      puVar6 = puVar6 + 10;
      *(undefined1 *)((long)puVar7 + uVar4) = 0;
    } while (param_2 != lVar1);
  }
  *(ulong **)(this + 8) = local_60;
  *(ulong **)(this + 0x10) = puVar6;
  *(ulong **)(this + 0x18) = local_60 + local_50 * 10;
  return;
}



/* glslang::TSymbolTableLevel::retargetSymbol(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&) */

void __thiscall
glslang::TSymbolTableLevel::retargetSymbol
          (TSymbolTableLevel *this,basic_string *param_1,basic_string *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  undefined8 uVar3;
  void *__s2;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  ulong local_98;
  ulong *local_90;
  ulong local_88;
  ulong local_80 [2];
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var9 = (_Rb_tree_node_base *)
           std::
           _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
           ::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                   *)this,param_1);
  p_Var10 = (_Rb_tree_node_base *)
            std::
            _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
            ::find((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                    *)this,param_2);
  p_Var1 = (_Rb_tree_node_base *)(this + 0x10);
  if ((p_Var1 == p_Var9) || (p_Var10 == p_Var1)) goto LAB_0014bfa0;
  if (*(long **)(p_Var9 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(p_Var9 + 0x48) + 0x10))();
  }
  uVar3 = *(undefined8 *)(p_Var10 + 0x48);
  p_Var9 = p_Var1;
  if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
LAB_0014bdd0:
    p_Var11 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(*(ulong *)this);
    uVar12 = glslang::GetThreadPoolAllocator();
    uVar4 = *(ulong *)(param_1 + 0x10);
    p_Var10 = p_Var11 + 0x38;
    *(_Rb_tree_node_base **)(p_Var11 + 0x28) = p_Var10;
    p_Var2 = *(_Rb_tree_node_base **)(param_1 + 8);
    *(ulong *)(p_Var11 + 0x20) = uVar12;
    if (uVar4 < 0x10) {
      if (uVar4 == 1) {
        p_Var11[0x38] = *p_Var2;
      }
      else if (uVar4 != 0) goto LAB_0014c178;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_0014c205;
      p_Var10 = (_Rb_tree_node_base *)glslang::TPoolAllocator::allocate(uVar12);
      *(ulong *)(p_Var11 + 0x38) = uVar4;
      *(_Rb_tree_node_base **)(p_Var11 + 0x28) = p_Var10;
LAB_0014c178:
      memcpy(p_Var10,p_Var2,uVar4);
      p_Var10 = *(_Rb_tree_node_base **)(p_Var11 + 0x28);
    }
    *(ulong *)(p_Var11 + 0x30) = uVar4;
    p_Var10[uVar4] = (_Rb_tree_node_base)0x0;
    *(undefined8 *)(p_Var11 + 0x48) = 0;
    auVar17 = std::
              _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
              ::_M_get_insert_hint_unique_pos
                        ((_Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,glslang::TSymbol*>>>
                          *)this,p_Var9,p_Var11 + 0x20);
    p_Var10 = auVar17._8_8_;
    p_Var9 = auVar17._0_8_;
    if (p_Var10 != (_Rb_tree_node_base *)0x0) {
      if ((p_Var1 == p_Var10) || (auVar17._0_8_ != (_Rb_tree_node_base *)0x0)) {
LAB_0014be53:
        bVar16 = true;
      }
      else {
        uVar4 = *(ulong *)(p_Var11 + 0x30);
        uVar12 = *(ulong *)(p_Var10 + 0x30);
        uVar15 = uVar12;
        if (uVar4 <= uVar12) {
          uVar15 = uVar4;
        }
        if ((uVar15 == 0) ||
           (iVar8 = memcmp(*(void **)(p_Var11 + 0x28),*(void **)(p_Var10 + 0x28),uVar15), iVar8 == 0
           )) {
          lVar14 = uVar4 - uVar12;
          bVar16 = false;
          if (0x7fffffff < lVar14) goto LAB_0014be58;
          if (lVar14 < -0x80000000) goto LAB_0014be53;
          iVar8 = (int)lVar14;
        }
        bVar16 = SUB41((uint)iVar8 >> 0x1f,0);
      }
LAB_0014be58:
      std::_Rb_tree_insert_and_rebalance(bVar16,p_Var11,p_Var10,p_Var1);
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      p_Var9 = p_Var11;
    }
  }
  else {
    __s2 = *(void **)(param_1 + 8);
    uVar4 = *(ulong *)(param_1 + 0x10);
    p_Var10 = *(_Rb_tree_node_base **)(this + 0x18);
    do {
      while( true ) {
        uVar12 = *(ulong *)(p_Var10 + 0x30);
        uVar15 = uVar4;
        if (uVar12 <= uVar4) {
          uVar15 = uVar12;
        }
        if ((uVar15 != 0) && (iVar8 = memcmp(*(void **)(p_Var10 + 0x28),__s2,uVar15), iVar8 != 0))
        break;
        lVar14 = uVar12 - uVar4;
        if (lVar14 < 0x80000000) {
          if (-0x80000001 < lVar14) {
            iVar8 = (int)lVar14;
            break;
          }
          goto LAB_0014bd20;
        }
LAB_0014bd72:
        p_Var2 = p_Var10 + 0x10;
        p_Var9 = p_Var10;
        p_Var10 = *(_Rb_tree_node_base **)p_Var2;
        if (*(_Rb_tree_node_base **)p_Var2 == (_Rb_tree_node_base *)0x0) goto LAB_0014bd7e;
      }
      if (-1 < iVar8) goto LAB_0014bd72;
LAB_0014bd20:
      p_Var10 = *(_Rb_tree_node_base **)(p_Var10 + 0x18);
    } while (p_Var10 != (_Rb_tree_node_base *)0x0);
LAB_0014bd7e:
    if (p_Var1 == p_Var9) goto LAB_0014bdd0;
    uVar12 = *(ulong *)(p_Var9 + 0x30);
    uVar15 = uVar4;
    if (uVar12 <= uVar4) {
      uVar15 = uVar12;
    }
    if ((uVar15 == 0) || (iVar8 = memcmp(__s2,*(void **)(p_Var9 + 0x28),uVar15), iVar8 == 0)) {
      lVar14 = uVar4 - uVar12;
      if (lVar14 < 0x80000000) {
        if (lVar14 < -0x80000000) goto LAB_0014bdd0;
        iVar8 = (int)lVar14;
        goto LAB_0014bdc8;
      }
    }
    else {
LAB_0014bdc8:
      if (iVar8 < 0) goto LAB_0014bdd0;
    }
  }
  *(undefined8 *)(p_Var9 + 0x48) = uVar3;
  local_98 = glslang::GetThreadPoolAllocator();
  uVar4 = *(ulong *)(param_1 + 0x10);
  local_90 = local_80;
  puVar5 = *(undefined1 **)(param_1 + 8);
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      local_80[0] = CONCAT71(local_80[0]._1_7_,*puVar5);
    }
    else if (uVar4 != 0) goto LAB_0014c012;
  }
  else {
    if ((long)uVar4 < 0) goto LAB_0014c205;
    local_90 = (ulong *)glslang::TPoolAllocator::allocate(local_98);
    local_80[0] = uVar4;
LAB_0014c012:
    memcpy(local_90,puVar5,uVar4);
  }
  *(undefined1 *)((long)local_90 + uVar4) = 0;
  local_88 = uVar4;
  local_70 = glslang::GetThreadPoolAllocator();
  local_68 = local_58;
  uVar4 = *(ulong *)(param_2 + 0x10);
  puVar5 = *(undefined1 **)(param_2 + 8);
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      local_58[0] = CONCAT71(local_58[0]._1_7_,*puVar5);
    }
    else if (uVar4 != 0) goto LAB_0014c052;
  }
  else {
    if ((long)uVar4 < 0) goto LAB_0014c205;
    local_68 = (ulong *)glslang::TPoolAllocator::allocate(local_70);
    local_58[0] = uVar4;
LAB_0014c052:
    memcpy(local_68,puVar5,uVar4);
  }
  *(undefined1 *)((long)local_68 + uVar4) = 0;
  puVar6 = *(ulong **)(this + 0x50);
  local_60 = uVar4;
  if (puVar6 == *(ulong **)(this + 0x58)) {
    std::
    vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
    ::
    _M_realloc_insert<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>
              ((vector<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
                *)(this + 0x40),puVar6,&local_98);
    goto LAB_0014bfa0;
  }
  uVar12 = glslang::GetThreadPoolAllocator();
  uVar4 = local_88;
  puVar7 = local_90;
  puVar13 = puVar6 + 3;
  puVar6[1] = (ulong)puVar13;
  *puVar6 = uVar12;
  if (local_88 < 0x10) {
    if (local_88 == 1) {
      *(char *)(puVar6 + 3) = (char)*local_90;
    }
    else if (local_88 != 0) goto LAB_0014c109;
  }
  else {
    if ((long)local_88 < 0) goto LAB_0014c205;
    puVar13 = (ulong *)glslang::TPoolAllocator::allocate(uVar12);
    puVar6[3] = uVar4;
    puVar6[1] = (ulong)puVar13;
LAB_0014c109:
    memcpy(puVar13,puVar7,uVar4);
    puVar13 = (ulong *)puVar6[1];
  }
  puVar6[2] = uVar4;
  *(undefined1 *)((long)puVar13 + uVar4) = 0;
  uVar12 = glslang::GetThreadPoolAllocator();
  uVar4 = local_60;
  puVar7 = local_68;
  puVar13 = puVar6 + 8;
  puVar6[6] = (ulong)puVar13;
  puVar6[5] = uVar12;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      uVar4 = *local_68;
      puVar6[7] = 1;
      *(char *)(puVar6 + 8) = (char)uVar4;
      *(undefined1 *)((long)puVar6 + 0x41) = 0;
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x50;
      goto LAB_0014bfa0;
    }
    if (local_60 == 0) {
      puVar6[7] = 0;
      *(undefined1 *)puVar13 = 0;
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x50;
      goto LAB_0014bfa0;
    }
  }
  else {
    if ((long)local_60 < 0) {
LAB_0014c205:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    puVar13 = (ulong *)glslang::TPoolAllocator::allocate(uVar12);
    puVar6[8] = uVar4;
    puVar6[6] = (ulong)puVar13;
  }
  memcpy(puVar13,puVar7,uVar4);
  puVar6[7] = uVar4;
  *(undefined1 *)(puVar6[6] + uVar4) = 0;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x50;
LAB_0014bfa0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TBuiltIns::addTabledBuiltins(int, EProfile, glslang::SpvVersion const&) */

void glslang::TBuiltIns::_GLOBAL__sub_I_addTabledBuiltins(void)

{
  (anonymous_namespace)::Es300Desktop130Version._24_8_ = 7;
  _DAT_0014e498 = &_LC1193;
  _DAT_0014e4c8 = &_LC1195;
  _DAT_0014e4f8 = &_LC1196;
  _DAT_0014e528 = "asinh";
  _DAT_0014e4a4 = _LC1194;
  _DAT_0014e4b0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e4d4 = _LC1194;
  _DAT_0014e4e0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e504 = _LC1194;
  _DAT_0014e510 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e534 = _LC1194;
  (anonymous_namespace)::Es300Desktop130Version._32_8_ = 0x82;
  (anonymous_namespace)::Es300Desktop130Version._40_8_ = 0;
  (anonymous_namespace)::Es310Desktop400Version._24_8_ = 7;
  (anonymous_namespace)::Es310Desktop400Version._32_8_ = 400;
  (anonymous_namespace)::Es310Desktop400Version._40_8_ = 0;
  (anonymous_namespace)::Es310Desktop450Version._24_8_ = 7;
  (anonymous_namespace)::Es310Desktop450Version._32_8_ = 0x1c2;
  (anonymous_namespace)::Es310Desktop450Version._40_8_ = 0;
  _DAT_0014e490 = 0xc4;
  _DAT_0014e4a0 = 1;
  _DAT_0014e4b8 = 2;
  _DAT_0014e4c0 = 0xc5;
  _DAT_0014e4d0 = 1;
  _DAT_0014e4e8 = 2;
  _DAT_0014e4f0 = 0xc6;
  _DAT_0014e500 = 1;
  _DAT_0014e518 = 2;
  _DAT_0014e520 = 199;
  _DAT_0014e530 = 1;
  _DAT_0014e540 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e558 = "acosh";
  _DAT_0014e588 = "atanh";
  _DAT_0014e5b8 = &_LC1200;
  _DAT_0014e564 = _LC1194;
  _DAT_0014e5c4 = _LC1201;
  _DAT_0014e5f4 = _LC1201;
  _DAT_0014e570 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e594 = _LC1194;
  _DAT_0014e5a0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e5d0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e5e8 = &_LC1202;
  _DAT_0014e600 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e618 = "trunc";
  _DAT_0014e624 = _LC1194;
  _DAT_0014e630 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e548 = 2;
  _DAT_0014e550 = 200;
  _DAT_0014e560 = 1;
  _DAT_0014e578 = 2;
  _DAT_0014e580 = 0xc9;
  _DAT_0014e590 = 1;
  _DAT_0014e5a8 = 2;
  _DAT_0014e5b0 = 0xd1;
  _DAT_0014e5c0 = 1;
  _DAT_0014e5d8 = 2;
  _DAT_0014e5e0 = 0xd2;
  _DAT_0014e5f0 = 1;
  _DAT_0014e608 = 2;
  _DAT_0014e610 = 0xd4;
  _DAT_0014e620 = 1;
  _DAT_0014e638 = 2;
  _DAT_0014e640 = 0xd5;
  _DAT_0014e654 = _LC1194;
  _DAT_0014e684 = _LC1194;
  _DAT_0014e648 = "round";
  _DAT_0014e6b4 = _LC1207;
  _DAT_0014e6d8 = &_LC1208;
  _DAT_0014e678 = "roundEven";
  _DAT_0014e6a8 = &_LC1206;
  _DAT_0014e6e4 = _LC1209;
  _DAT_0014e714 = _LC1209;
  _DAT_0014e660 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e690 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e6c0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e6f0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e708 = &_LC1210;
  _DAT_0014e720 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e650 = 1;
  _DAT_0014e668 = 2;
  _DAT_0014e670 = 0xd6;
  _DAT_0014e680 = 1;
  _DAT_0014e698 = 2;
  _DAT_0014e6a0 = 0xd9;
  _DAT_0014e6b0 = 2;
  _DAT_0014e6c8 = 2;
  _DAT_0014e6d0 = 0xda;
  _DAT_0014e6e0 = 2;
  _DAT_0014e6f8 = 2;
  _DAT_0014e700 = 0xdb;
  _DAT_0014e710 = 2;
  _DAT_0014e728 = 2;
  _DAT_0014e730 = 0xdc;
  _DAT_0014e738 = "clamp";
  _DAT_0014e750 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e744 = _LC1212;
  _DAT_0014e780 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e774 = _LC1214;
  _DAT_0014e798 = "isinf";
  _DAT_0014e7b0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e7a4 = _LC1216;
  _DAT_0014e7d4 = _LC1216;
  _DAT_0014e7f8 = "lessThan";
  _DAT_0014e7c8 = "isnan";
  _DAT_0014e7e0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e804 = _LC1219;
  _DAT_0014e810 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e740 = 3;
  _DAT_0014e758 = 2;
  _DAT_0014e760 = 0xdd;
  _DAT_0014e768 = &_LC1213;
  _DAT_0014e770 = 3;
  _DAT_0014e788 = 2;
  _DAT_0014e790 = 0xe1;
  _DAT_0014e7a0 = 1;
  _DAT_0014e7b8 = 2;
  _DAT_0014e7c0 = 0xe0;
  _DAT_0014e7d0 = 1;
  _DAT_0014e7e8 = 2;
  _DAT_0014e7f0 = 0xaa;
  _DAT_0014e800 = 2;
  _DAT_0014e818 = 2;
  _DAT_0014e820 = 0xac;
  _DAT_0014e828 = "lessThanEqual";
  _DAT_0014e834 = _LC1219;
  _DAT_0014e840 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e864 = _LC1219;
  _DAT_0014e870 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e894 = _LC1219;
  _DAT_0014e8a0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e8c4 = _LC1219;
  _DAT_0014e8d0 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e8f4 = _LC1219;
  _DAT_0014e900 = (anonymous_namespace)::Es300Desktop130Version;
  _DAT_0014e830 = 2;
  _DAT_0014e848 = 2;
  _DAT_0014e850 = 0xab;
  _DAT_0014e858 = "greaterThan";
  _DAT_0014e860 = 2;
  _DAT_0014e878 = 2;
  _DAT_0014e880 = 0xad;
  _DAT_0014e888 = "greaterThanEqual";
  _DAT_0014e890 = 2;
  _DAT_0014e8a8 = 2;
  _DAT_0014e8b0 = 0xa8;
  _DAT_0014e8b8 = "equal";
  _DAT_0014e8c0 = 2;
  _DAT_0014e8d8 = 2;
  _DAT_0014e8e0 = 0xa9;
  _DAT_0014e8e8 = "notEqual";
  _DAT_0014e8f0 = 2;
  _DAT_0014e908 = 2;
  _DAT_0014e910 = 0x1ad;
  _DAT_0014e918 = "atomicAdd";
  _DAT_0014e920 = 2;
  _DAT_0014e948 = "atomicMin";
  _DAT_0014e978 = "atomicMax";
  _DAT_0014e9a8 = "atomicAnd";
  _DAT_0014e9d8 = "atomicOr";
  _DAT_0014e924 = _LC1225;
  _DAT_0014e954 = _LC1225;
  _DAT_0014e984 = _LC1225;
  _DAT_0014e9b4 = _LC1225;
  _DAT_0014e9e4 = _LC1225;
  _DAT_0014ea08 = "atomicXor";
  _DAT_0014ea14 = _LC1225;
  _DAT_0014e930 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014e938 = 2;
  _DAT_0014e940 = 0x1af;
  _DAT_0014e950 = 2;
  _DAT_0014e960 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014e968 = 2;
  _DAT_0014e970 = 0x1b0;
  _DAT_0014e980 = 2;
  _DAT_0014e990 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014e998 = 2;
  _DAT_0014e9a0 = 0x1b1;
  _DAT_0014e9b0 = 2;
  _DAT_0014e9c0 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014e9c8 = 2;
  _DAT_0014e9d0 = 0x1b2;
  _DAT_0014e9e0 = 2;
  _DAT_0014e9f0 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014e9f8 = 2;
  _DAT_0014ea00 = 0x1b3;
  _DAT_0014ea10 = 2;
  _DAT_0014ea20 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014ea44 = _LC1225;
  _DAT_0014ea74 = _LC1225;
  _DAT_0014ea38 = "atomicExchange";
  _DAT_0014ea28 = 2;
  _DAT_0014ea30 = 0x1b4;
  _DAT_0014ea40 = 2;
  _DAT_0014ea50 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014ea58 = 2;
  _DAT_0014ea60 = 0x1b5;
  _DAT_0014ea68 = "atomicCompSwap";
  _DAT_0014ea70 = 3;
  _DAT_0014ea80 = (anonymous_namespace)::Es310Desktop400Version;
  _DAT_0014ea88 = 2;
  _DAT_0014ea90 = 0xdd;
  _DAT_0014ea98 = &_LC1213;
  _DAT_0014eaa0 = 3;
  _DAT_0014eaa4 = 1;
  _DAT_0014eab0 = (anonymous_namespace)::Es310Desktop450Version;
  _DAT_0014eab8 = 2;
  _DAT_0014eac0 = 0xdd;
  _DAT_0014eac8 = &_LC1213;
  _DAT_0014ead0 = 3;
  _DAT_0014ead4 = _LC1227;
  _DAT_0014eae0 = (anonymous_namespace)::Es310Desktop450Version;
  _DAT_0014eae8 = 2;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TType::~TType() */

void __thiscall glslang::TType::~TType(TType *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TSmallArrayVector::~TSmallArrayVector() */

void __thiscall glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::basic_string<glslang::std::allocator<char> >(char const*, glslang::std::allocator<char>
   const&) */

void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::
     basic_string<glslang::std::allocator<char>>(char *param_1,allocator *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TVariable::TVariable(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const*, glslang::TType const&, bool) */

void __thiscall
glslang::TVariable::TVariable(TVariable *this,basic_string *param_1,TType *param_2,bool param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TConstUnionArray::~TConstUnionArray() */

void __thiscall glslang::TConstUnionArray::~TConstUnionArray(TConstUnionArray *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


