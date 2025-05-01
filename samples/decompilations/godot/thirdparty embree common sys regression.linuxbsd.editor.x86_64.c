
/* embree::get_regression_tests() */

undefined8 * embree::get_regression_tests(void)

{
  int iVar1;
  
  if (get_regression_tests()::regression_tests == '\0') {
    iVar1 = __cxa_guard_acquire(&get_regression_tests()::regression_tests);
    if (iVar1 != 0) {
      get_regression_tests()::regression_tests = 0;
      DAT_001002b8 = 0;
      DAT_001002c0 = 0;
      __cxa_atexit(std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
                   ~vector,&get_regression_tests()::regression_tests,&__dso_handle);
      __cxa_guard_release(&get_regression_tests()::regression_tests);
      return &get_regression_tests()::regression_tests;
    }
  }
  return &get_regression_tests()::regression_tests;
}



/* embree::getRegressionTest(unsigned long) */

undefined8 embree::getRegressionTest(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (get_regression_tests()::regression_tests == '\0') {
    iVar1 = __cxa_guard_acquire(&get_regression_tests()::regression_tests);
    if (iVar1 != 0) {
      get_regression_tests()::regression_tests = 0;
      DAT_001002b8 = 0;
      DAT_001002c0 = 0;
      __cxa_atexit(std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
                   ~vector,&get_regression_tests()::regression_tests,&__dso_handle);
      __cxa_guard_release(&get_regression_tests()::regression_tests);
    }
  }
  uVar2 = 0;
  if (param_1 < (ulong)(DAT_001002b8 - get_regression_tests()::regression_tests >> 3)) {
    if (get_regression_tests()::regression_tests == '\0') {
      iVar1 = __cxa_guard_acquire(&get_regression_tests()::regression_tests);
      if (iVar1 != 0) {
        get_regression_tests()::regression_tests = 0;
        DAT_001002b8 = 0;
        DAT_001002c0 = 0;
        __cxa_atexit(std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
                     ~vector,&get_regression_tests()::regression_tests,&__dso_handle);
        __cxa_guard_release(&get_regression_tests()::regression_tests);
      }
    }
    uVar2 = *(undefined8 *)(get_regression_tests()::regression_tests + param_1 * 8);
  }
  return uVar2;
}



/* embree::registerRegressionTest(embree::RegressionTest*) */

void embree::registerRegressionTest(RegressionTest *param_1)

{
  int iVar1;
  RegressionTest *local_20 [2];
  
  local_20[0] = param_1;
  if (get_regression_tests()::regression_tests == '\0') {
    iVar1 = __cxa_guard_acquire(&get_regression_tests()::regression_tests);
    if (iVar1 != 0) {
      get_regression_tests()::regression_tests = 0;
      DAT_001002b8 = (undefined8 *)0x0;
      DAT_001002c0 = (undefined8 *)0x0;
      __cxa_atexit(std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
                   ~vector,&get_regression_tests()::regression_tests,&__dso_handle);
      __cxa_guard_release(&get_regression_tests()::regression_tests);
      if (DAT_001002b8 == DAT_001002c0) goto LAB_0010027d;
      goto LAB_001001f5;
    }
  }
  if (DAT_001002b8 == DAT_001002c0) {
LAB_0010027d:
    std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
    _M_realloc_insert<embree::RegressionTest*const&>
              ((vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>> *)
               &get_regression_tests()::regression_tests,DAT_001002b8,local_20);
    return;
  }
LAB_001001f5:
  *DAT_001002b8 = local_20[0];
  DAT_001002b8 = DAT_001002b8 + 1;
  return;
}



/* std::vector<embree::RegressionTest*, std::allocator<embree::RegressionTest*> >::~vector() */

void __thiscall
std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::~vector
          (vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x10) - (long)pvVar1);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<embree::RegressionTest*, std::allocator<embree::RegressionTest*>
   >::_M_realloc_insert<embree::RegressionTest*
   const&>(__gnu_cxx::__normal_iterator<embree::RegressionTest**,
   std::vector<embree::RegressionTest*, std::allocator<embree::RegressionTest*> > >,
   embree::RegressionTest* const&) */

void __thiscall
std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::
_M_realloc_insert<embree::RegressionTest*const&>
          (vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>> *this,
          void *param_2,undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar1) goto LAB_001003f0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_001003f0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00100379;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00100379:
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
/* std::vector<embree::RegressionTest*, std::allocator<embree::RegressionTest*> >::~vector() */

void __thiscall
std::vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>>::~vector
          (vector<embree::RegressionTest*,std::allocator<embree::RegressionTest*>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


