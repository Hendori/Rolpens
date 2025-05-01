
/* WARNING: Unknown calling convention */

size_t dir_len(char *file)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  cVar1 = *file;
  lVar3 = last_component();
  uVar2 = lVar3 - (long)file;
  do {
    uVar4 = uVar2;
    if (uVar4 <= (cVar1 == '/')) {
      return uVar4;
    }
    uVar2 = uVar4 - 1;
  } while (file[uVar4 - 1] == '/');
  return uVar4;
}



/* WARNING: Unknown calling convention */

char * mdir_name(char *file)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  char *pcVar5;
  ulong __n;
  
  cVar1 = *file;
  lVar3 = last_component();
  uVar2 = lVar3 - (long)file;
  do {
    __n = uVar2;
    if (__n <= (cVar1 == '/')) {
      pvVar4 = malloc(__n + 1 + (__n ^ 1));
      if (pvVar4 == (void *)0x0) goto LAB_001000e7;
      pcVar5 = (char *)memcpy(pvVar4,file,__n);
      if (__n != 1) {
        *pcVar5 = '.';
      }
      __n = 1;
      goto LAB_001000b0;
    }
    uVar2 = __n - 1;
  } while (file[__n - 1] == '/');
  pvVar4 = malloc(__n + 1);
  if (pvVar4 == (void *)0x0) {
LAB_001000e7:
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = (char *)__memcpy_chk(pvVar4,file,__n,__n + 1);
LAB_001000b0:
    pcVar5[__n] = '\0';
  }
  return pcVar5;
}


