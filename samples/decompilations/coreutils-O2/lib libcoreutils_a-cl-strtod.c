
double cl_strtod(char *param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  long in_FS_OFFSET;
  double dVar4;
  double dVar5;
  char *local_40;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = strtod(param_1,&local_40);
  dVar5 = dVar4;
  pcVar2 = local_40;
  if (*local_40 != '\0') {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    dVar5 = (double)c_strtod(param_1,&local_38);
    pcVar2 = local_38;
    if (local_38 <= local_40) {
      *piVar3 = iVar1;
      dVar5 = dVar4;
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
  return dVar5;
}


