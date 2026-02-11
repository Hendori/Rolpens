
void cl_strtold(char *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long in_FS_OFFSET;
  char *local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  strtold(param_1,&local_40);
  pcVar2 = local_40;
  if (*local_40 != '\0') {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    c_strtold(param_1,&local_38);
    pcVar2 = local_38;
    if (local_38 <= local_40) {
      *piVar3 = iVar1;
      pcVar2 = local_40;
    }
  }
  local_40 = pcVar2;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = local_40;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


