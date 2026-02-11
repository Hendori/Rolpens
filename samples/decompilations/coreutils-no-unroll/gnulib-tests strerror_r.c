
int rpl_strerror_r(int param_1,char *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  char acStack_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 2) {
    if (param_3 != 0) {
      *param_2 = '\0';
    }
    iVar2 = 0x22;
    goto LAB_00100062;
  }
  *param_2 = '\0';
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = __xpg_strerror_r(param_1,param_2,param_3);
  if (*param_2 == '\0') {
    __s = strerror_r(param_1,acStack_98,0x50);
    if (__s == (char *)0x0) {
      iVar2 = *piVar3;
      goto joined_r0x00100127;
    }
    __n = strlen(__s);
    if (__n < param_3) {
      iVar2 = 0;
      memmove(param_2,__s,__n);
      param_2[__n] = '\0';
    }
    else {
      iVar2 = 0x22;
      memmove(param_2,__s,param_3 - 1);
      param_2[param_3 - 1] = '\0';
    }
  }
  else {
joined_r0x00100127:
    if ((iVar2 == 0x16) && (*param_2 == '\0')) {
      __snprintf_chk(param_2,param_3,2,0xffffffffffffffff,"Unknown error %d",param_1);
    }
  }
  *piVar3 = iVar1;
LAB_00100062:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


