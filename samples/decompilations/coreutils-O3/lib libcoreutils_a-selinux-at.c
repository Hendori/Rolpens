
undefined8 getfileconat(uint param_1,char *param_2)

{
  int iVar1;
  undefined1 *__ptr;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_ff8 [4];
  undefined1 local_fe8 [4040];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0xffffff9c) || (*param_2 == '/')) {
    piVar3 = __errno_location();
    *piVar3 = 0x5f;
  }
  else {
    piVar3 = (int *)(ulong)param_1;
    __ptr = (undefined1 *)openat_proc_name(local_fe8,param_1,param_2);
    if (__ptr != (undefined1 *)0x0) {
      piVar2 = __errno_location();
      *piVar2 = 0x5f;
      if (__ptr != local_fe8) {
        free(__ptr);
      }
    }
    iVar1 = save_cwd(local_ff8);
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      openat_save_fail(*piVar2);
LAB_00100136:
      openat_restore_fail(*piVar3);
      uVar4 = getfileconat();
      return uVar4;
    }
    if (((int)param_1 < 0) || (local_ff8[0] != param_1)) {
      iVar1 = fchdir(param_1);
      if (iVar1 == 0) {
        piVar3 = __errno_location();
        *piVar3 = 0x5f;
        iVar1 = restore_cwd(local_ff8);
        if (iVar1 != 0) goto LAB_00100136;
        free_cwd(local_ff8);
        *piVar3 = 0x5f;
      }
      else {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        free_cwd(local_ff8);
        *piVar3 = iVar1;
      }
    }
    else {
      free_cwd(local_ff8);
      piVar3 = __errno_location();
      *piVar3 = 9;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void lgetfileconat(void)

{
  getfileconat();
  return;
}



void setfileconat(void)

{
  getfileconat();
  return;
}



void lsetfileconat(void)

{
  getfileconat();
  return;
}


