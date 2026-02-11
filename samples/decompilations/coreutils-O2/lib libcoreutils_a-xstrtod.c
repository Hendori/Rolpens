
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 xstrtod(char *param_1,undefined8 *param_2,double *param_3,code *param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  double dVar4;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  dVar4 = (double)(*param_4)(param_1,&local_38);
  if (local_38 == param_1) {
    uVar3 = 0;
    uVar1 = 0;
    if (param_2 == (undefined8 *)0x0) goto LAB_00100066;
  }
  else {
    if (param_2 == (undefined8 *)0x0) {
      uVar3 = 0;
      if (*local_38 == '\0') {
        if ((dVar4 != 0.0) && (*piVar2 == 0x22)) {
          uVar3 = 0;
          if ((__LC1 <= dVar4) || (dVar4 <= _LC2)) goto LAB_00100066;
          *piVar2 = 0;
        }
        uVar3 = 1;
      }
      goto LAB_00100066;
    }
    if ((dVar4 != 0.0) && (*piVar2 == 0x22)) {
      uVar1 = 0;
      if ((__LC1 <= dVar4) || (dVar4 <= _LC2)) goto LAB_00100062;
      *piVar2 = 0;
    }
    uVar1 = 1;
  }
LAB_00100062:
  uVar3 = uVar1;
  *param_2 = local_38;
LAB_00100066:
  *param_3 = dVar4;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


