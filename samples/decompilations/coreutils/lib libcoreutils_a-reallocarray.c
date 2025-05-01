
/* WARNING: Unknown calling convention */

void * rpl_reallocarray(void *ptr,size_t nmemb,size_t size)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  void *pvVar3;
  int *piVar4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = nmemb;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = size;
  __size = SUB168(auVar1 * auVar2,0);
  if (SUB168(auVar1 * auVar2,8) == 0) {
    if (__size == 0) {
      __size = 1;
    }
    pvVar3 = realloc(ptr,__size);
    return pvVar3;
  }
  piVar4 = __errno_location();
  *piVar4 = 0xc;
  return (void *)0x0;
}


