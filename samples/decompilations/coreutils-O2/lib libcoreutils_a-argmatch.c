
long argmatch(char *param_1,long *param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  size_t sVar4;
  long lVar5;
  void *__s2;
  char *__s1;
  long local_58;
  
  __n = strlen(param_1);
  __s1 = (char *)*param_2;
  if (__s1 == (char *)0x0) {
    local_58 = -1;
    lVar2 = local_58;
  }
  else {
    bVar1 = false;
    local_58 = -1;
    lVar2 = 0;
    __s2 = param_3;
LAB_001000a7:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,param_1,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + param_4);
          __s1 = (char *)param_2[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_001000a7;
        }
        if (param_3 == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * param_4 + (long)param_3),__s2,param_4);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + param_4);
      __s1 = (char *)param_2[lVar5 + 1];
      lVar2 = lVar5 + 1;
    } while (__s1 != (char *)0x0);
    lVar2 = -2;
    if (!bVar1) {
      lVar2 = local_58;
    }
  }
  local_58 = lVar2;
  return local_58;
}



long argmatch_exact(char *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  __s1 = (char *)*param_2;
  if (__s1 != (char *)0x0) {
    lVar2 = 0;
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      __s1 = (char *)param_2[lVar2];
    } while (__s1 != (char *)0x0);
  }
  return -1;
}



void argmatch_invalid(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = dcgettext("gnulib","invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext("gnulib","ambiguous argument %s for %s",5);
  }
  uVar2 = quote_n(1,param_1);
  uVar3 = quotearg_n_style(0,8,param_2);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void argmatch_valid(long *param_1,void *param_2,size_t param_3)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  void *__s1;
  long lVar5;
  
  __stream = _stderr;
  lVar4 = 0;
  pcVar2 = (char *)dcgettext("gnulib","Valid arguments are:",5);
  fputs_unlocked(pcVar2,__stream);
  lVar5 = *param_1;
  if (lVar5 == 0) {
LAB_00100300:
    pcVar2 = _stderr->_IO_write_ptr;
    if (_stderr->_IO_write_end <= pcVar2) {
      __overflow(_stderr,10);
      return;
    }
    _stderr->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = '\n';
    return;
  }
  do {
    __s1 = param_2;
    uVar3 = quote(lVar5);
    __fprintf_chk(_stderr,2,"\n  - %s",uVar3);
    param_2 = __s1;
    while( true ) {
      lVar4 = lVar4 + 1;
      param_2 = (void *)((long)param_2 + param_3);
      lVar5 = param_1[lVar4];
      if (lVar5 == 0) goto LAB_00100300;
      iVar1 = memcmp(__s1,param_2,param_3);
      if (iVar1 != 0) break;
      uVar3 = quote(lVar5);
      __fprintf_chk(_stderr,2,&_LC5,uVar3);
    }
  } while( true );
}



long argmatch_to_argument(void *param_1,long *param_2,void *param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      iVar1 = memcmp(param_1,param_3,param_4);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = *param_2;
      param_3 = (void *)((long)param_3 + param_4);
      param_2 = param_2 + 1;
    } while (lVar2 != 0);
  }
  return lVar2;
}


