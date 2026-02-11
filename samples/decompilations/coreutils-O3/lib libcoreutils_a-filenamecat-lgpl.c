
void * mfile_name_concat(long param_1,char *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  size_t __n;
  void *pvVar3;
  undefined1 *puVar4;
  size_t __size;
  ulong uVar5;
  undefined1 local_41;
  
  lVar1 = last_component();
  lVar2 = base_len(lVar1);
  lVar1 = (lVar1 - param_1) + lVar2;
  __n = strlen(param_2);
  if (lVar2 == 0) {
    local_41 = 0;
    if (*param_2 == '/') {
      local_41 = 0x2e;
    }
    uVar5 = (ulong)(*param_2 == '/');
  }
  else if (*(char *)(param_1 + -1 + lVar1) == '/') {
    local_41 = 0;
    uVar5 = 0;
  }
  else {
    local_41 = 0;
    if (*param_2 != '/') {
      local_41 = 0x2f;
    }
    uVar5 = (ulong)(*param_2 != '/');
  }
  __size = lVar1 + 1 + __n + uVar5;
  pvVar3 = malloc(__size);
  if (pvVar3 != (void *)0x0) {
    puVar4 = (undefined1 *)__mempcpy_chk(pvVar3,param_1,lVar1,__size);
    *puVar4 = local_41;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar4 + uVar5;
    }
    puVar4 = (undefined1 *)mempcpy(puVar4 + uVar5,param_2,__n);
    *puVar4 = 0;
  }
  return pvVar3;
}


