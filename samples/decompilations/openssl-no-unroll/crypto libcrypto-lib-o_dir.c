
long OPENSSL_DIR_read(long *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  dirent *pdVar3;
  undefined8 *puVar4;
  DIR *pDVar5;
  
  piVar2 = __errno_location();
  if (param_1 == (long *)0x0 || param_2 == (char *)0x0) {
    *piVar2 = 0x16;
    return 0;
  }
  *piVar2 = 0;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)calloc(0x1010,1);
    *param_1 = (long)puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      *piVar2 = 0xc;
      return 0;
    }
    pDVar5 = opendir(param_2);
    *puVar4 = pDVar5;
    pDVar5 = *(DIR **)*param_1;
    if (pDVar5 == (DIR *)0x0) {
      iVar1 = *piVar2;
      free((long *)*param_1);
      *param_1 = 0;
      *piVar2 = iVar1;
      return 0;
    }
  }
  else {
    pDVar5 = *(DIR **)*param_1;
  }
  pdVar3 = readdir(pDVar5);
  if (pdVar3 == (dirent *)0x0) {
    return 0;
  }
  OPENSSL_strlcpy(*param_1 + 8,pdVar3->d_name,0x1001);
  return *param_1 + 8;
}



undefined8 OPENSSL_DIR_end(long *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (long *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = closedir(*(DIR **)*param_1);
    free((void *)*param_1);
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 == 0) {
      return 1;
    }
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0;
}


