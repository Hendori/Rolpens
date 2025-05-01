
/* WARNING: Unknown calling convention */

void * imalloc(idx_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  return pvVar1;
}



/* WARNING: Unknown calling convention */

void * irealloc(void *p,idx_t s)

{
  void *pvVar1;
  
  if (s == 0) {
    s = 1;
  }
  pvVar1 = realloc(p,s);
  return pvVar1;
}



/* WARNING: Unknown calling convention */

void * icalloc(idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = calloc(n,s);
  return pvVar1;
}



/* WARNING: Unknown calling convention */

void * ireallocarray(void *p,idx_t n,idx_t s)

{
  void *pvVar1;
  
  pvVar1 = (void *)rpl_reallocarray();
  return pvVar1;
}


