
void dir_len(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  cVar1 = *param_1;
  lVar2 = last_component();
  uVar3 = lVar2 - (long)param_1;
  do {
    if (uVar3 <= (cVar1 == '/')) {
      return;
    }
    lVar2 = uVar3 - 1;
    uVar3 = uVar3 - 1;
  } while (param_1[lVar2] == '/');
  return;
}



undefined1 * mdir_name(char *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  ulong __n;
  
  cVar1 = *param_1;
  lVar3 = last_component();
  uVar2 = lVar3 - (long)param_1;
  do {
    __n = uVar2;
    if (__n <= (cVar1 == '/')) {
      pvVar4 = malloc(__n + 1 + (__n ^ 1));
      if (pvVar4 == (void *)0x0) goto LAB_001000e7;
      puVar5 = (undefined1 *)memcpy(pvVar4,param_1,__n);
      if (__n != 1) {
        *puVar5 = 0x2e;
      }
      __n = 1;
      goto LAB_001000b0;
    }
    uVar2 = __n - 1;
  } while (param_1[__n - 1] == '/');
  pvVar4 = malloc(__n + 1);
  if (pvVar4 == (void *)0x0) {
LAB_001000e7:
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = (undefined1 *)__memcpy_chk(pvVar4,param_1,__n,__n + 1);
LAB_001000b0:
    puVar5[__n] = 0;
  }
  return puVar5;
}


