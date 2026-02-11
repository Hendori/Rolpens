
/* std::_Rb_tree<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> >, std::pair<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   std::_Select1st<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > >,
   glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const, std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > > >*) [clone .isra.0] */

void std::
     _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
     ::_M_erase(_Rb_tree_node *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != (_Rb_tree_node *)0x0) {
    do {
      for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
        for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
          for (lVar3 = *(long *)(lVar2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
            for (lVar4 = *(long *)(lVar3 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
              for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
                for (lVar6 = *(long *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
                  for (lVar7 = *(long *)(lVar6 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10))
                  {
                    for (lVar8 = *(long *)(lVar7 + 0x18); lVar8 != 0;
                        lVar8 = *(long *)(lVar8 + 0x10)) {
                      _M_erase(*(_Rb_tree_node **)(lVar8 + 0x18));
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_1 = *(_Rb_tree_node **)(param_1 + 0x10);
    } while (param_1 != (_Rb_tree_node *)0x0);
    return;
  }
  return;
}



/* glslang::RemoveAllTreeNodes(TIntermNode*) */

void glslang::RemoveAllTreeNodes(TIntermNode *param_1)

{
  long in_FS_OFFSET;
  undefined **local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0x10000;
  local_3c = 0;
  local_48 = &PTR__TIntermTraverser_00100548;
  local_30 = glslang::GetThreadPoolAllocator();
  local_28 = 0;
  local_48 = &PTR__TRemoveTraverser_001005b0;
  local_20 = 0;
  local_18 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
  return;
}



/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */

void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1)

{
  return;
}



/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 glslang::TIntermTraverser::visitBinary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 glslang::TIntermTraverser::visitUnary(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined8 glslang::TIntermTraverser::visitSelection(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 glslang::TIntermTraverser::visitAggregate(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */

undefined8 glslang::TIntermTraverser::visitLoop(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */

undefined8 glslang::TIntermTraverser::visitBranch(void)

{
  return 1;
}



/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */

undefined8 glslang::TIntermTraverser::visitSwitch(void)

{
  return 1;
}



/* glslang::TRemoveTraverser::visitSymbol(glslang::TIntermSymbol*) */

void __thiscall
glslang::TRemoveTraverser::visitSymbol(TRemoveTraverser *this,TIntermSymbol *param_1)

{
  if (param_1 != (TIntermSymbol *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010024f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xe0))(param_1);
    return;
  }
  return;
}



/* glslang::TRemoveTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitBinary(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitUnary(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitSelection(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitSwitch(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */

void __thiscall
glslang::TRemoveTraverser::visitConstantUnion(TRemoveTraverser *this,TIntermConstantUnion *param_1)

{
  if (param_1 != (TIntermConstantUnion *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010032f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xe0))(param_1);
    return;
  }
  return;
}



/* glslang::TRemoveTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitLoop(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitBranch(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  return 1;
}



/* glslang::TRemoveTraverser::~TRemoveTraverser() */

void __thiscall glslang::TRemoveTraverser::~TRemoveTraverser(TRemoveTraverser *this)

{
  return;
}



/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
  long lVar1;
  
  *(code **)this = __stack_chk_fail;
  if ((*(long *)(this + 0x130) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x130) + 0x18), lVar1 != 0)) {
    do {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x18));
      lVar1 = *(long *)(lVar1 + 0x10);
    } while (lVar1 != 0);
    return;
  }
  return;
}



/* glslang::TRemoveTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */

undefined8 __thiscall
glslang::TRemoveTraverser::visitAggregate(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (param_3 == (long *)0x0) {
    return 1;
  }
  if (*(code **)(*param_3 + 0xe0) != TIntermAggregate::~TIntermAggregate) {
    (**(code **)(*param_3 + 0xe0))(param_3);
    return 1;
  }
  *param_3 = (long)__stack_chk_fail;
  if (param_3[0x26] != 0) {
    for (lVar1 = *(long *)(param_3[0x26] + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x18));
    }
  }
  return 1;
}



/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
  long lVar1;
  
  *(code **)this = __stack_chk_fail;
  if ((*(long *)(this + 0x130) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x130) + 0x18), lVar1 != 0)) {
    do {
      std::
      _Rb_tree<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>,std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,std::_Select1st<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>,std::less<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>,glslang::pool_allocator<std::pair<std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>const,std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>>>>
      ::_M_erase(*(_Rb_tree_node **)(lVar1 + 0x18));
      lVar1 = *(long *)(lVar1 + 0x10);
    } while (lVar1 != 0);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermTraverser::~TIntermTraverser() */

void __thiscall glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TIntermAggregate::~TIntermAggregate() */

void __thiscall glslang::TIntermAggregate::~TIntermAggregate(TIntermAggregate *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* glslang::TRemoveTraverser::~TRemoveTraverser() */

void __thiscall glslang::TRemoveTraverser::~TRemoveTraverser(TRemoveTraverser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


