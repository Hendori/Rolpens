
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



/* std::_Rb_tree<int, std::pair<int const, glslang::TPpContext::MacroSymbol>,
   std::_Select1st<std::pair<int const, glslang::TPpContext::MacroSymbol> >, std::less<int>,
   glslang::pool_allocator<std::pair<int const, glslang::TPpContext::MacroSymbol> >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, glslang::TPpContext::MacroSymbol> >*) [clone
   .isra.0] */

void std::
     _Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TPpContext::~TPpContext() */

void __thiscall glslang::TPpContext::~TPpContext(TPpContext *this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__TPpContext_00100a88;
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd0));
  }
  lVar2 = *(long *)(this + 400);
  if (lVar2 != *(long *)(this + 0x188)) {
    do {
      (**(code **)(**(long **)(lVar2 + -8) + 0x58))();
      lVar2 = *(long *)(this + 400);
      if (*(long **)(lVar2 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + -8) + 8))();
        lVar2 = *(long *)(this + 400);
      }
      lVar2 = lVar2 + -8;
      *(long *)(this + 400) = lVar2;
    } while (*(long *)(this + 0x188) != lVar2);
  }
  *(undefined **)(this + 0x248) = &std::streambuf::vtable;
  *(code **)(this + 0x2c0) = memset;
  *(undefined **)(this + 600) = &std::streambuf::vtable;
  if (*(TPpContext **)(this + 0x2a0) != this + 0x2b0) {
    operator_delete(*(TPpContext **)(this + 0x2a0),*(long *)(this + 0x2b0) + 1);
  }
  *(undefined **)(this + 600) = &std::__cxx11::istringstream::VTT;
  std::locale::~locale((locale *)(this + 0x290));
  uVar1 = __ios_base;
  lVar2 = _vtable;
  *(long *)(this + 0x248) = _vtable;
  *(undefined8 *)(this + *(long *)(lVar2 + -0x18) + 0x248) = uVar1;
  *(code **)(this + 0x2c0) = memset;
  *(undefined8 *)(this + 0x250) = 0;
  std::ios_base::~ios_base((ios_base *)(this + 0x2c0));
  if (*(TPpContext **)(this + 0x228) != this + 0x238) {
    operator_delete(*(TPpContext **)(this + 0x228),*(long *)(this + 0x238) + 1);
  }
  pvVar4 = *(void **)(this + 0x1d8);
  if (pvVar4 != (void *)0x0) {
    lVar2 = *(long *)(this + 0x220);
    puVar3 = *(undefined8 **)(this + 0x200);
    if (puVar3 < (undefined8 *)(lVar2 + 8U)) {
      do {
        pvVar4 = (void *)*puVar3;
        puVar3 = puVar3 + 1;
        operator_delete(pvVar4,0x200);
      } while (puVar3 < (undefined8 *)(lVar2 + 8U));
      pvVar4 = *(void **)(this + 0x1d8);
    }
    operator_delete(pvVar4,*(long *)(this + 0x1e0) * 8);
  }
  if (*(TPpContext **)(this + 0x1b8) != this + 0x1c8) {
    operator_delete(*(TPpContext **)(this + 0x1b8),*(long *)(this + 0x1c8) + 1);
  }
  pvVar4 = *(void **)(this + 0x188);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x198) - (long)pvVar4);
  }
  pvVar4 = *(void **)(this + 0x120);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x130) - (long)pvVar4);
  }
  pvVar4 = *(void **)(this + 0x108);
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(this + 0x118) - (long)pvVar4);
  }
  memset(*(void **)(this + 0x48),0,*(long *)(this + 0x50) * 8);
  for (lVar2 = *(long *)(this + 0x20); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    std::
    _Rb_tree<int,std::pair<int_const,glslang::TPpContext::MacroSymbol>,std::_Select1st<std::pair<int_const,glslang::TPpContext::MacroSymbol>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TPpContext::MacroSymbol>>>
    ::_M_erase(*(_Rb_tree_node **)(lVar2 + 0x18));
  }
  return;
}



/* glslang::TPpContext::~TPpContext() */

void __thiscall glslang::TPpContext::~TPpContext(TPpContext *this)

{
  ~TPpContext(this);
  operator_delete(this,0x3d0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* glslang::TPpContext::TPpContext(glslang::TParseContextBase&, std::__cxx11::string const&,
   glslang::TShader::Includer&) */

void __thiscall
glslang::TPpContext::TPpContext
          (TPpContext *this,TParseContextBase *param_1,string *param_2,Includer *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  locale alStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__TPpContext_00100a88;
  uVar4 = glslang::GetThreadPoolAllocator();
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar4;
  *(TPpContext **)(this + 0x28) = this + 0x18;
  *(TPpContext **)(this + 0x30) = this + 0x18;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  glslang::TStringAtomMap::TStringAtomMap((TStringAtomMap *)(this + 0x40));
  *(undefined8 *)(this + 0xd0) = 0;
  *(TPpContext **)(this + 0x1b8) = this + 0x1c8;
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)param_2;
  *(Includer **)(this + 0x1a8) = param_3;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf8) = 10;
  *(TParseContextBase **)(this + 0x100) = param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1b0] = (TPpContext)0x0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  std::__cxx11::string::_M_construct<char*>(this + 0x1b8,lVar3,lVar2 + lVar3);
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 8;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  pvVar5 = operator_new(0x40);
  *(void **)(this + 0x1d8) = pvVar5;
  puVar1 = (undefined8 *)((long)pvVar5 + (*(long *)(this + 0x1e0) * 4 - 4U & 0xfffffffffffffff8));
  pvVar5 = operator_new(0x200);
  *puVar1 = pvVar5;
  *(void **)(this + 0x1e8) = pvVar5;
  *(void **)(this + 0x1f0) = pvVar5;
  *(void **)(this + 0x208) = pvVar5;
  *(void **)(this + 0x210) = pvVar5;
  *(long *)(this + 0x1f8) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x200) = puVar1;
  *(long *)(this + 0x218) = (long)pvVar5 + 0x200;
  *(undefined8 **)(this + 0x220) = puVar1;
  lVar2 = *(long *)(param_2 + 8);
  *(TPpContext **)(this + 0x228) = this + 0x238;
  std::__cxx11::string::_M_construct<char*>(this + 0x228,*(long *)param_2,lVar2 + *(long *)param_2);
  std::ios_base::ios_base((ios_base *)(this + 0x2c0));
  *(code **)(this + 0x2c0) = memset;
  uVar4 = __ios_base;
  *(undefined2 *)(this + 0x3a0) = 0;
  lVar3 = _vtable;
  *(undefined1 (*) [16])(this + 0x3a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3b8) = (undefined1  [16])0x0;
  lVar2 = *(long *)(lVar3 + -0x18);
  *(long *)(this + 0x248) = lVar3;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + lVar2 + 0x248) = uVar4;
  *(undefined8 *)(this + 0x250) = 0;
  std::ios::init((streambuf *)(this + *(long *)(lVar3 + -0x18) + 0x248));
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined **)(this + 0x248) = &std::streambuf::vtable;
  *(code **)(this + 0x2c0) = memset;
  *(undefined **)(this + 600) = &std::__cxx11::istringstream::VTT;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  std::locale::locale((locale *)(this + 0x290));
  *(undefined **)(this + 600) = &std::streambuf::vtable;
  *(TPpContext **)(this + 0x2a0) = this + 0x2b0;
  *(undefined4 *)(this + 0x298) = 8;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[0x2b0] = (TPpContext)0x0;
  std::ios::init((streambuf *)(this + 0x2c0));
  this[0x3c8] = (TPpContext)0x0;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x17c] = (TPpContext)0x0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined1 (*) [16])(this + 0x13c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x14c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x15c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x16c) = (undefined1  [16])0x0;
  std::locale::classic();
  std::ios::imbue(alStack_38);
  std::locale::~locale(alStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPpContext::setInput(glslang::TInputScanner&, bool) */

void __thiscall glslang::TPpContext::setInput(TPpContext *this,TInputScanner *param_1,bool param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)operator_new(0x20);
  puVar1 = *(undefined8 **)(this + 400);
  *(undefined1 *)(plVar2 + 1) = 0;
  plVar2[2] = (long)this;
  lVar3 = 0x1010c8;
  *plVar2 = 0x1010c8;
  plVar2[3] = (long)param_1;
  local_38 = plVar2;
  if (puVar1 == *(undefined8 **)(this + 0x198)) {
    std::vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>>::
    _M_realloc_insert<glslang::TPpContext::tInput*const&>
              ((vector<glslang::TPpContext::tInput*,std::allocator<glslang::TPpContext::tInput*>> *)
               (this + 0x188),puVar1,&local_38);
    lVar3 = *plVar2;
  }
  else {
    *puVar1 = plVar2;
    *(undefined8 **)(this + 400) = puVar1 + 1;
  }
  (**(code **)(lVar3 + 0x50))(plVar2);
  this[0x1a0] = (TPpContext)param_2;
  this[0x1a1] = (TPpContext)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
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
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00100980;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010098a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00100980:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010098a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010098a;
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
    if (__src == (void *)0x0) goto LAB_0010095c;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010095c:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}


