
/* glslang::TPoolAllocator::~TPoolAllocator() */

void __thiscall glslang::TPoolAllocator::~TPoolAllocator(TPoolAllocator *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x30);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    operator_delete__(puVar3);
    *(undefined8 **)(this + 0x30) = puVar1;
    puVar3 = puVar1;
  }
  puVar3 = *(undefined8 **)(this + 0x28);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    operator_delete__(puVar3);
    *(undefined8 **)(this + 0x28) = puVar1;
    puVar3 = puVar1;
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2,*(long *)(this + 0x48) - (long)pvVar2);
  return;
}



/* glslang::SetThreadPoolAllocator(glslang::TPoolAllocator*) */

void glslang::SetThreadPoolAllocator(TPoolAllocator *param_1)

{
  undefined8 *in_FS_OFFSET;
  
  *in_FS_OFFSET = param_1;
  return;
}



/* glslang::TAllocation::checkGuardBlock(unsigned char*, unsigned char, char const*) const */

void glslang::TAllocation::checkGuardBlock(uchar *param_1,uchar param_2,char *param_3)

{
  return;
}



/* glslang::TPoolAllocator::pop() */

void __thiscall glslang::TPoolAllocator::pop(TPoolAllocator *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(this + 0x40);
  if (*(long *)(this + 0x38) == lVar3) {
    return;
  }
  puVar1 = *(undefined8 **)(lVar3 + -8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(lVar3 + -0x10);
  puVar4 = *(undefined8 **)(this + 0x30);
  if (puVar1 != *(undefined8 **)(this + 0x30)) {
    do {
      while (puVar2 = (undefined8 *)*puVar4, (ulong)puVar4[1] < 2) {
        *puVar4 = *(undefined8 *)(this + 0x28);
        *(undefined8 **)(this + 0x28) = puVar4;
        *(undefined8 **)(this + 0x30) = puVar2;
        puVar4 = puVar2;
        if (puVar1 == puVar2) goto LAB_001000ff;
      }
      operator_delete__(puVar4);
      *(undefined8 **)(this + 0x30) = puVar2;
      puVar4 = puVar2;
    } while (puVar1 != puVar2);
LAB_001000ff:
    lVar3 = *(long *)(this + 0x40);
  }
  *(long *)(this + 0x40) = lVar3 + -0x10;
  return;
}



/* glslang::TPoolAllocator::popAll() */

void __thiscall glslang::TPoolAllocator::popAll(TPoolAllocator *this)

{
  if (*(long *)(this + 0x40) == *(long *)(this + 0x38)) {
    return;
  }
  do {
    pop(this);
  } while (*(long *)(this + 0x40) != *(long *)(this + 0x38));
  return;
}



/* glslang::TPoolAllocator::allocate(unsigned long) */

long __thiscall glslang::TPoolAllocator::allocate(TPoolAllocator *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(this + 0x20);
  *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
  *(ulong *)(this + 0x58) = *(long *)(this + 0x58) + param_1;
  uVar1 = *(ulong *)this;
  uVar5 = lVar4 + param_1;
  if (uVar5 <= uVar1) {
    *(ulong *)(this + 0x20) = uVar5 + *(ulong *)(this + 0x10) & ~*(ulong *)(this + 0x10);
    return lVar4 + *(long *)(this + 0x30);
  }
  lVar4 = *(long *)(this + 0x18);
  uVar5 = lVar4 + param_1;
  if (uVar5 <= uVar1) {
    puVar3 = *(undefined8 **)(this + 0x28);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)operator_new__(uVar1);
      lVar4 = *(long *)(this + 0x18);
      uVar5 = param_1 + lVar4;
    }
    else {
      *(undefined8 *)(this + 0x28) = *puVar3;
    }
    uVar2 = *(undefined8 *)(this + 0x30);
    puVar3[1] = 1;
    *puVar3 = uVar2;
    *(undefined8 **)(this + 0x30) = puVar3;
    *(ulong *)(this + 0x20) = uVar5 + *(ulong *)(this + 0x10) & ~*(ulong *)(this + 0x10);
    return (long)puVar3 + lVar4;
  }
  puVar3 = (undefined8 *)operator_new__(uVar5);
  uVar1 = *(ulong *)this;
  *(ulong *)(this + 0x20) = uVar1;
  *puVar3 = *(undefined8 *)(this + 0x30);
  *(undefined8 **)(this + 0x30) = puVar3;
  puVar3[1] = ((uVar5 - 1) + uVar1) / uVar1;
  return *(long *)(this + 0x18) + (long)puVar3;
}



/* glslang::TAllocation::checkAllocList() const */

void glslang::TAllocation::checkAllocList(void)

{
  return;
}



/* glslang::TPoolAllocator::push() */

void __thiscall glslang::TPoolAllocator::push(TPoolAllocator *this)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  puVar1 = *(undefined8 **)(this + 0x40);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *(undefined8 *)(this + 0x20);
  uStack_20 = *(undefined8 *)(this + 0x30);
  if (puVar1 == *(undefined8 **)(this + 0x48)) {
    std::
    vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>
    ::_M_realloc_insert<glslang::TPoolAllocator::tAllocState_const&>
              ((vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>
                *)(this + 0x38),puVar1,&local_28);
  }
  else {
    *puVar1 = local_28;
    puVar1[1] = uStack_20;
    *(undefined8 **)(this + 0x40) = puVar1 + 2;
  }
  *(undefined8 *)(this + 0x20) = *(undefined8 *)this;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::TPoolAllocator::TPoolAllocator(int, int) */

void __thiscall
glslang::TPoolAllocator::TPoolAllocator(TPoolAllocator *this,int param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_28 [3];
  long local_10;
  
  local_28[0] = (ulong)param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  if (local_28[0] < 0x1000) {
    local_28[0] = 0x1000;
  }
  uVar3 = (long)param_2 & 0xfffffffffffffff8;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(ulong *)this = local_28[0];
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  *(ulong *)(this + 0x20) = local_28[0];
  uVar1 = 1;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 * 2;
  } while (uVar1 < uVar3);
  *(ulong *)(this + 8) = uVar1;
  *(ulong *)(this + 0x10) = uVar1 - 1;
  local_28[1] = 0;
  *(ulong *)(this + 0x18) = uVar1 + 0xf & uVar2 * -2;
  std::
  vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>
  ::_M_realloc_insert<glslang::TPoolAllocator::tAllocState_const&>
            ((vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>
              *)(this + 0x38),0,local_28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)this;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* glslang::GetThreadPoolAllocator() */

long glslang::GetThreadPoolAllocator(void)

{
  TPoolAllocator *this;
  long *in_FS_OFFSET;
  
  if (*in_FS_OFFSET != 0) {
    return *in_FS_OFFSET;
  }
  if ((char)*in_FS_OFFSET != '\0') {
    return *in_FS_OFFSET;
  }
  this = (TPoolAllocator *)*in_FS_OFFSET;
  TPoolAllocator::TPoolAllocator(this,0x2000,0x10);
  *(char *)in_FS_OFFSET = '\x01';
  __cxa_thread_atexit(0x100000,this,&__dso_handle);
  return *in_FS_OFFSET;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<glslang::TPoolAllocator::tAllocState,
   std::allocator<glslang::TPoolAllocator::tAllocState>
   >::_M_realloc_insert<glslang::TPoolAllocator::tAllocState
   const&>(__gnu_cxx::__normal_iterator<glslang::TPoolAllocator::tAllocState*,
   std::vector<glslang::TPoolAllocator::tAllocState,
   std::allocator<glslang::TPoolAllocator::tAllocState> > >, glslang::TPoolAllocator::tAllocState
   const&) */

void __thiscall
std::
vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>::
_M_realloc_insert<glslang::TPoolAllocator::tAllocState_const&>
          (vector<glslang::TPoolAllocator::tAllocState,std::allocator<glslang::TPoolAllocator::tAllocState>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  long lVar5;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar3 = (long)pvVar1 - (long)__src >> 4;
  if (uVar3 == 0x7ffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00100530;
    uVar4 = 0x7ffffffffffffff;
    if (uVar3 + 1 < 0x800000000000000) {
      uVar4 = uVar3 + 1;
    }
    uVar4 = uVar4 << 4;
LAB_0010053a:
    __dest_00 = operator_new(uVar4);
    lVar5 = uVar4 + (long)__dest_00;
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar3) {
LAB_00100530:
      uVar4 = 0x7ffffffffffffff0;
      goto LAB_0010053a;
    }
    if (uVar4 != 0) {
      if (0x7ffffffffffffff < uVar4) {
        uVar4 = 0x7ffffffffffffff;
      }
      uVar4 = uVar4 << 4;
      goto LAB_0010053a;
    }
    lVar5 = 0;
    __dest_00 = (void *)0x0;
  }
  uVar2 = param_3[1];
  __dest = (void *)((long)__dest_00 + __n + 0x10);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  ((undefined8 *)((long)__dest_00 + __n))[1] = uVar2;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0010050e;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0010050e:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar5;
  return;
}


