
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * imalloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void irealloc(void *param_1,size_t param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  realloc(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * icalloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



void ireallocarray(void)

{
  rpl_reallocarray();
  return;
}


