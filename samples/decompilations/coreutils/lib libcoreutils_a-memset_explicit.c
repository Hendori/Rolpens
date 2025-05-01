
/* WARNING: Unknown calling convention */

void * memset_explicit(void *s,int c,size_t len)

{
  void *pvVar1;
  
  pvVar1 = memset(s,c,len);
  return pvVar1;
}


