
undefined1 * ossl_slh_dsa_params_get(char *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *__s1;
  
  if (param_1 != (char *)0x0) {
    puVar2 = slh_dsa_params;
    __s1 = "SLH-DSA-SHA2-128s";
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        return puVar2;
      }
      __s1 = *(char **)(puVar2 + 0x40);
      puVar2 = puVar2 + 0x40;
    } while (__s1 != (char *)0x0);
  }
  return (undefined1 *)0x0;
}


