
int mbedtls_version_check_feature(char *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *__s1;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  iVar1 = strncmp(param_1,"MBEDTLS_",8);
  if (iVar1 == 0) {
    puVar2 = features;
    __s1 = "HAVE_ASM";
    do {
      iVar1 = strcmp(__s1,param_1 + 8);
      if (iVar1 == 0) {
        return iVar1;
      }
      __s1 = *(char **)(puVar2 + 8);
      puVar2 = puVar2 + 8;
    } while (__s1 != (char *)0x0);
  }
  return -1;
}


