
/* WARNING: Unknown calling convention */

ptrdiff_t argmatch(char *arg,char **arglist,void *vallist,size_t valsize)

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
  
  __n = strlen(arg);
  __s1 = *arglist;
  if (__s1 == (char *)0x0) {
    local_58 = -1;
    lVar2 = local_58;
  }
  else {
    bVar1 = false;
    local_58 = -1;
    lVar2 = 0;
    __s2 = vallist;
LAB_001000a7:
    do {
      lVar5 = lVar2;
      iVar3 = strncmp(__s1,arg,__n);
      if (iVar3 == 0) {
        sVar4 = strlen(__s1);
        if (sVar4 == __n) {
          return lVar5;
        }
        if (local_58 == -1) {
          __s2 = (void *)((long)__s2 + valsize);
          __s1 = arglist[lVar5 + 1];
          lVar2 = lVar5 + 1;
          local_58 = lVar5;
          if (__s1 == (char *)0x0) break;
          goto LAB_001000a7;
        }
        if (vallist == (void *)0x0) {
          bVar1 = true;
        }
        else {
          iVar3 = memcmp((void *)(local_58 * valsize + (long)vallist),__s2,valsize);
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
      }
      __s2 = (void *)((long)__s2 + valsize);
      __s1 = arglist[lVar5 + 1];
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



/* WARNING: Unknown calling convention */

ptrdiff_t argmatch_exact(char *arg,char **arglist)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  __s1 = *arglist;
  if (__s1 != (char *)0x0) {
    lVar2 = 0;
    do {
      iVar1 = strcmp(__s1,arg);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
      __s1 = arglist[lVar2];
    } while (__s1 != (char *)0x0);
  }
  return -1;
}



/* WARNING: Unknown calling convention */

void argmatch_invalid(char *context,char *value,ptrdiff_t problem)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (problem == -1) {
    uVar1 = dcgettext("gnulib","invalid argument %s for %s",5);
  }
  else {
    uVar1 = dcgettext("gnulib","ambiguous argument %s for %s",5);
  }
  uVar2 = quote_n(1,context);
  uVar3 = quotearg_n_style(0,8,value);
  error(0,0,uVar1,uVar3,uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void argmatch_valid(char **arglist,void *vallist,size_t valsize)

{
  FILE *__stream;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  void *__s1;
  
  __stream = _stderr;
  lVar4 = 0;
  pcVar2 = (char *)dcgettext("gnulib","Valid arguments are:",5);
  fputs_unlocked(pcVar2,__stream);
  pcVar2 = *arglist;
  if (pcVar2 == (char *)0x0) {
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
    __s1 = vallist;
    uVar3 = quote(pcVar2);
    __fprintf_chk(_stderr,2,"\n  - %s",uVar3);
    vallist = __s1;
    while( true ) {
      lVar4 = lVar4 + 1;
      vallist = (void *)((long)vallist + valsize);
      pcVar2 = arglist[lVar4];
      if (pcVar2 == (char *)0x0) goto LAB_00100300;
      iVar1 = memcmp(__s1,vallist,valsize);
      if (iVar1 != 0) break;
      uVar3 = quote(pcVar2);
      __fprintf_chk(_stderr,2,&_LC5,uVar3);
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

char * argmatch_to_argument(void *value,char **arglist,void *vallist,size_t valsize)

{
  int iVar1;
  char **ppcVar2;
  char *pcVar3;
  
  pcVar3 = *arglist;
  if (pcVar3 != (char *)0x0) {
    ppcVar2 = arglist + 1;
    do {
      iVar1 = memcmp(value,vallist,valsize);
      if (iVar1 == 0) {
        return pcVar3;
      }
      pcVar3 = *ppcVar2;
      vallist = (void *)((long)vallist + valsize);
      ppcVar2 = ppcVar2 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return pcVar3;
}


