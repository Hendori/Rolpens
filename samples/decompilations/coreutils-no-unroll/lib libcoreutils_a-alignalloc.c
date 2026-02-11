
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void alignfree(void *__ptr)

{
  free(__ptr);
  return;
}



void alignalloc(void)

{
  aligned_alloc();
  return;
}


