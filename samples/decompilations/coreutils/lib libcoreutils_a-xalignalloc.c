
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void * xalignalloc(idx_t alignment,idx_t size)

{
  void *pvVar1;
  
  pvVar1 = (void *)aligned_alloc();
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


