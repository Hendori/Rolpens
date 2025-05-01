
/* WARNING: Unknown calling convention */

void * rpl_realloc(void *ptr,size_t size)

{
  void *pvVar1;
  
  if (size == 0) {
    size = 1;
  }
  pvVar1 = realloc(ptr,size);
  return pvVar1;
}


