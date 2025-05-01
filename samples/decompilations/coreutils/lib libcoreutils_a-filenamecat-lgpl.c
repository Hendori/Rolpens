
/* WARNING: Unknown calling convention */

char * mfile_name_concat(char *dir,char *base,char **base_in_result)

{
  long lVar1;
  long lVar2;
  size_t __n;
  char *pcVar3;
  undefined1 *puVar4;
  size_t __size;
  ulong uVar5;
  undefined1 local_41;
  
  lVar1 = last_component();
  lVar2 = base_len(lVar1);
  lVar1 = (lVar1 - (long)dir) + lVar2;
  __n = strlen(base);
  if (lVar2 == 0) {
    local_41 = 0;
    if (*base == '/') {
      local_41 = 0x2e;
    }
    uVar5 = (ulong)(*base == '/');
  }
  else if (dir[lVar1 + -1] == '/') {
    local_41 = 0;
    uVar5 = 0;
  }
  else {
    local_41 = 0;
    if (*base != '/') {
      local_41 = 0x2f;
    }
    uVar5 = (ulong)(*base != '/');
  }
  __size = lVar1 + 1 + __n + uVar5;
  pcVar3 = (char *)malloc(__size);
  if (pcVar3 != (char *)0x0) {
    puVar4 = (undefined1 *)__mempcpy_chk(pcVar3,dir,lVar1,__size);
    *puVar4 = local_41;
    if (base_in_result != (char **)0x0) {
      *base_in_result = puVar4 + uVar5;
    }
    puVar4 = (undefined1 *)mempcpy(puVar4 + uVar5,base,__n);
    *puVar4 = 0;
  }
  return pcVar3;
}


