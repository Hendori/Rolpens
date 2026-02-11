
int str2sig(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char *__s1;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  __s1 = &DAT_00100264;
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*param_1 - 0x30U < 10) {
    uVar3 = __isoc23_strtol(param_1,&local_38,10);
    if ((*local_38 == '\0') && ((long)uVar3 < 0x41)) {
LAB_00100069:
      iVar1 = (int)uVar3;
      iVar5 = iVar1 >> 0x1f;
      goto LAB_0010006a;
    }
  }
  else {
    do {
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        uVar3 = (ulong)(uint)(&numname_table)[uVar3 * 3];
        goto LAB_00100069;
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar6;
      __s1 = __s1 + 0xc;
    } while (uVar6 != 0x23);
    iVar1 = __libc_current_sigrtmin();
    iVar5 = __libc_current_sigrtmax();
    if (0 < iVar1) {
      iVar2 = strncmp(param_1,"RTMIN",5);
      if (iVar2 == 0) {
        lVar4 = __isoc23_strtol(param_1 + 5,&local_38,10);
        if (((*local_38 == '\0') && (-1 < lVar4)) && (lVar4 <= iVar5 - iVar1)) {
          uVar3 = (ulong)(uint)(iVar1 + (int)lVar4);
          goto LAB_00100069;
        }
        goto LAB_001000ac;
      }
    }
    if (0 < iVar5) {
      iVar2 = strncmp(param_1,"RTMAX",5);
      if (iVar2 == 0) {
        lVar4 = __isoc23_strtol(param_1 + 5,&local_38,10);
        if (((*local_38 == '\0') && (iVar1 - iVar5 <= lVar4)) && (lVar4 < 1)) {
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
  *param_2 = iVar1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 sig2str(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar4 = 0;
  piVar6 = &numname_table;
  do {
    if (*piVar6 == param_1) {
      strcpy(param_2,&DAT_00100264 + uVar4 * 0xc);
      goto LAB_001001d1;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
    piVar6 = piVar6 + 3;
  } while (uVar1 != 0x23);
  iVar2 = __libc_current_sigrtmin();
  iVar3 = __libc_current_sigrtmax();
  if ((param_1 < iVar2) || (iVar3 < param_1)) {
    uVar5 = 0xffffffff;
  }
  else {
    if ((iVar3 - iVar2 >> 1) + iVar2 < param_1) {
      builtin_strncpy(param_2,"RTMAX",6);
      iVar2 = iVar3;
    }
    else {
      builtin_strncpy(param_2,"RTMIN",6);
    }
    if (param_1 - iVar2 != 0) {
      __sprintf_chk(param_2 + 5,2,0xffffffffffffffff,&_LC2,param_1 - iVar2);
    }
LAB_001001d1:
    uVar5 = 0;
  }
  return uVar5;
}


