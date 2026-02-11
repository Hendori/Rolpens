
undefined1 * openat_proc_name(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  char acStack_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == '\0') {
    *param_1 = 0;
    goto LAB_0010008a;
  }
  if (proc_status_0 == 0) {
    iVar1 = open("/proc/self/fd",0x90900);
    if (iVar1 < 0) {
      proc_status_0 = 0xffffffff;
      param_1 = (undefined1 *)0x0;
      goto LAB_0010008a;
    }
    __sprintf_chk(acStack_58,2,0x20,"/proc/self/fd/%d/../fd",iVar1);
    iVar2 = access(acStack_58,0);
    proc_status_0 = -(uint)(iVar2 != 0) | 1;
    close(iVar1);
  }
  if ((int)proc_status_0 < 0) {
LAB_001000bd:
    param_1 = (undefined1 *)0x0;
  }
  else {
    sVar3 = strlen(param_3);
    if (0xfc0 < sVar3 + 0x1b) {
      param_1 = (undefined1 *)malloc(sVar3 + 0x1b);
      if (param_1 == (undefined1 *)0x0) goto LAB_001000bd;
    }
    iVar1 = __sprintf_chk(param_1,2,0xffffffffffffffff,"/proc/self/fd/%d/",param_2);
    strcpy(param_1 + iVar1,param_3);
  }
LAB_0010008a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


