
void * rpl_reallocarray(void *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  void *pvVar3;
  int *piVar4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  __size = SUB168(auVar1 * auVar2,0);
  if (SUB168(auVar1 * auVar2,8) == 0) {
    if (__size == 0) {
      __size = 1;
    }
    pvVar3 = realloc(param_1,__size);
    return pvVar3;
  }
  piVar4 = __errno_location();
  *piVar4 = 0xc;
  return (void *)0x0;
}


