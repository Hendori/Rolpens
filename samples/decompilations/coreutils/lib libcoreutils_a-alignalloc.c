
/* WARNING: Unknown calling convention */

void alignfree(void *ptr)

{
  free(ptr);
  return;
}



/* WARNING: Unknown calling convention */

void * alignalloc(idx_t alignment,idx_t size)

{
  void *pvVar1;
  
  pvVar1 = (void *)aligned_alloc();
  return pvVar1;
}


