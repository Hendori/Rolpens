
/* operator new(unsigned long, void* (*)(unsigned long)) */

void * operator_new(ulong param_1,_func_void_ptr_ulong *param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (*param_2)(param_1);
  return pvVar1;
}



/* Memory::alloc_aligned_static(unsigned long, unsigned long) */

void Memory::alloc_aligned_static(ulong param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  pvVar1 = malloc(param_1 + param_2 + 3);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (long)pvVar1 + param_2 + 3 & -param_2;
    *(int *)(uVar2 - 4) = (int)uVar2 - (int)pvVar1;
  }
  return;
}



/* Memory::realloc_aligned_static(void*, unsigned long, unsigned long, unsigned long) */

void * Memory::realloc_aligned_static(void *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  void *__dest;
  
  lVar1 = param_4 + 3;
  if (param_1 == (void *)0x0) {
    __dest = malloc(param_2 + lVar1);
    if (__dest != (void *)0x0) {
      pvVar2 = (void *)((long)__dest + lVar1 & -param_4);
      *(int *)((long)pvVar2 - 4) = (int)pvVar2 - (int)__dest;
      return pvVar2;
    }
  }
  else {
    pvVar2 = malloc(param_2 + lVar1);
    __dest = pvVar2;
    if (pvVar2 != (void *)0x0) {
      __dest = (void *)((long)pvVar2 + lVar1 & -param_4);
      *(int *)((long)__dest + -4) = (int)__dest - (int)pvVar2;
      memcpy(__dest,param_1,param_3);
    }
    free((void *)((long)param_1 - (ulong)*(uint *)((long)param_1 + -4)));
  }
  return __dest;
}



/* Memory::free_aligned_static(void*) */

void Memory::free_aligned_static(void *param_1)

{
  free((void *)((long)param_1 - (ulong)*(uint *)((long)param_1 + -4)));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100145) */
/* Memory::alloc_static(unsigned long, bool) */

ulong * Memory::alloc_static(ulong param_1,bool param_2)

{
  long lVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)malloc(param_1 + 0x10);
  if (puVar2 != (ulong *)0x0) {
    LOCK();
    alloc_count = alloc_count + 1;
    UNLOCK();
    *puVar2 = param_1;
    lVar1 = mem_usage;
    LOCK();
    mem_usage = mem_usage + param_1;
    UNLOCK();
    if (max_usage < lVar1 + param_1) {
      LOCK();
      UNLOCK();
      max_usage = lVar1 + param_1;
    }
    return puVar2 + 2;
  }
  _err_print_error("alloc_static","core/os/memory.cpp",0x6c,"Parameter \"mem\" is null.",0,0);
  return (ulong *)0x0;
}



/* operator new(unsigned long, char const*) */

void * operator_new(ulong param_1,char *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)Memory::alloc_static(param_1,false);
  return pvVar1;
}



/* WARNING: Removing unreachable block (ram,0x001001d8) */
/* WARNING: Removing unreachable block (ram,0x001001e3) */
/* Memory::realloc_static(void*, unsigned long, bool) */

ulong * Memory::realloc_static(void *param_1,ulong param_2,bool param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1 == (void *)0x0) {
    puVar2 = (ulong *)alloc_static(param_2,param_3);
    return puVar2;
  }
  uVar3 = *(ulong *)((long)param_1 + -0x10);
  if (uVar3 < param_2) {
    LOCK();
    lVar1 = mem_usage + (param_2 - uVar3);
    UNLOCK();
    uVar3 = mem_usage + (param_2 - uVar3);
    mem_usage = lVar1;
    if (max_usage < uVar3) {
      LOCK();
      UNLOCK();
      max_usage = uVar3;
    }
  }
  else {
    LOCK();
    mem_usage = mem_usage - (uVar3 - param_2);
    UNLOCK();
    if (param_2 == 0) {
      free((void *)((long)param_1 + -0x10));
      return (ulong *)0x0;
    }
  }
  *(ulong *)((long)param_1 + -0x10) = param_2;
  puVar2 = (ulong *)realloc((void *)((long)param_1 + -0x10),param_2 + 0x10);
  if (puVar2 == (ulong *)0x0) {
    _err_print_error("realloc_static","core/os/memory.cpp",0xa1,"Parameter \"mem\" is null.",0,0);
    return (ulong *)0x0;
  }
  *puVar2 = param_2;
  return puVar2 + 2;
}



/* Memory::free_static(void*, bool) */

void Memory::free_static(void *param_1,bool param_2)

{
  if (param_1 != (void *)0x0) {
    LOCK();
    alloc_count = alloc_count + -1;
    UNLOCK();
    LOCK();
    mem_usage = mem_usage - *(long *)((long)param_1 + -0x10);
    UNLOCK();
    free((void *)((long)param_1 + -0x10));
    return;
  }
  _err_print_error("free_static","core/os/memory.cpp",0xb3,"Parameter \"p_ptr\" is null.",0,0);
  return;
}



/* Memory::get_mem_available() */

undefined8 Memory::get_mem_available(void)

{
  return 0xffffffffffffffff;
}



/* Memory::get_mem_usage() */

undefined8 Memory::get_mem_usage(void)

{
  return mem_usage;
}



/* Memory::get_mem_max_usage() */

undefined8 Memory::get_mem_max_usage(void)

{
  return max_usage;
}


