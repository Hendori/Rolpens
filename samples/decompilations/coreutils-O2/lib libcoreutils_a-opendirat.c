
DIR * opendirat(undefined8 param_1,undefined8 param_2,uint param_3,int *param_4)

{
  int iVar1;
  int __fd;
  DIR *pDVar2;
  int *piVar3;
  
  __fd = openat_safer(param_1,param_2,param_3 | 0x90900);
  if (-1 < __fd) {
    pDVar2 = fdopendir(__fd);
    if (pDVar2 != (DIR *)0x0) {
      *param_4 = __fd;
      return pDVar2;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(__fd);
    *piVar3 = iVar1;
  }
  return (DIR *)0x0;
}


