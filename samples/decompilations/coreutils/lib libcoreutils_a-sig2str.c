
/* WARNING: Unknown calling convention */

int str2sig(char *signame,int *signum)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char *__s1;
  long in_FS_OFFSET;
  char *endp;
  long local_30;
  
  __s1 = numname_table[0].name;
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*signame - 0x30U < 10) {
    uVar3 = __isoc23_strtol(signame,&endp,10);
    if ((*endp == '\0') && ((long)uVar3 < 0x41)) {
LAB_00100069:
      iVar1 = (int)uVar3;
      iVar5 = iVar1 >> 0x1f;
      goto LAB_0010006a;
    }
  }
  else {
    do {
      iVar1 = strcmp(__s1,signame);
      if (iVar1 == 0) {
        uVar3 = (ulong)(uint)numname_table[uVar3].num;
        goto LAB_00100069;
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar6;
      __s1 = __s1 + 0xc;
    } while (uVar6 != 0x23);
    iVar1 = __libc_current_sigrtmin();
    iVar5 = __libc_current_sigrtmax();
    if (0 < iVar1) {
      iVar2 = strncmp(signame,"RTMIN",5);
      if (iVar2 == 0) {
        lVar4 = __isoc23_strtol(signame + 5,&endp,10);
        if (((*endp == '\0') && (-1 < lVar4)) && (lVar4 <= iVar5 - iVar1)) {
          uVar3 = (ulong)(uint)(iVar1 + (int)lVar4);
          goto LAB_00100069;
        }
        goto LAB_001000ac;
      }
    }
    if (0 < iVar5) {
      iVar2 = strncmp(signame,"RTMAX",5);
      if (iVar2 == 0) {
        lVar4 = __isoc23_strtol(signame + 5,&endp,10);
        if (((*endp == '\0') && (iVar1 - iVar5 <= lVar4)) && (lVar4 < 1)) {
          uVar3 = (ulong)(uint)((int)lVar4 + iVar5);
          goto LAB_00100069;
        }
      }
    }
  }
LAB_001000ac:
  iVar1 = -1;
  iVar5 = -1;
LAB_0010006a:
  *signum = iVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

int sig2str(int signum,char *signame)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  numname *pnVar5;
  
  uVar4 = 0;
  pnVar5 = numname_table;
  do {
    if (pnVar5->num == signum) {
      strcpy(signame,numname_table[uVar4].name);
      goto LAB_001001d1;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    pnVar5 = pnVar5 + 1;
  } while (uVar1 != 0x23);
  iVar2 = __libc_current_sigrtmin();
  iVar3 = __libc_current_sigrtmax();
  if ((signum < iVar2) || (iVar3 < signum)) {
    iVar2 = -1;
  }
  else {
    if ((iVar3 - iVar2 >> 1) + iVar2 < signum) {
      builtin_strncpy(signame,"RTMAX",6);
      iVar2 = iVar3;
    }
    else {
      builtin_strncpy(signame,"RTMIN",6);
    }
    if (signum - iVar2 != 0) {
      __sprintf_chk(signame + 5,2,0xffffffffffffffff,&_LC2,signum - iVar2);
    }
LAB_001001d1:
    iVar2 = 0;
  }
  return iVar2;
}


