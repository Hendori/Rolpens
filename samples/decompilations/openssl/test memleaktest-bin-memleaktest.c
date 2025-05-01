
undefined4 main(undefined8 param_1,long param_2)

{
  char *__s1;
  int iVar1;
  undefined4 uVar2;
  undefined2 *ptr;
  
  ptr = (undefined2 *)CRYPTO_malloc(3,"test/memleaktest.c",0x31);
  iVar1 = test_ptr(0x100000,0x32,&_LC1,ptr);
  uVar2 = 1;
  if (iVar1 != 0) {
    __s1 = *(char **)(param_2 + 8);
    *ptr = 0x6261;
    *(undefined1 *)(ptr + 1) = 0;
    if (__s1 != (char *)0x0) {
      iVar1 = strcmp(__s1,"freeit");
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


