
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xvprintf_part_0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","cannot perform formatted output",5);
  piVar3 = __errno_location();
  error(uVar1,*piVar3,&_LC2,uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xvfprintf_part_0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","cannot perform formatted output",5);
  piVar3 = __errno_location();
  error(uVar1,*piVar3,&_LC2,uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long xprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  if (in_AL != '\0') {
    local_98 = param_1;
    local_88 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_48 = param_6;
    local_38 = param_7;
    local_28 = param_8;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_e8 = 8;
  local_e4 = 0x30;
  local_c0 = param_10;
  local_b8 = param_11;
  local_b0 = param_12;
  local_a8 = param_13;
  local_a0 = param_14;
  lVar2 = vzprintf(param_9,&local_e8);
  if (lVar2 < 0) {
    iVar1 = ferror(_stdout);
    if (iVar1 == 0) {
      xvprintf_part_0(param_9,&local_e8);
    }
  }
  if (local_d0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long xvprintf(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = vzprintf();
  if (lVar2 < 0) {
    iVar1 = ferror(_stdout);
    if (iVar1 == 0) {
      xvprintf_part_0(param_1,param_2);
    }
  }
  return lVar2;
}



long xfprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             FILE *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = &stack0x00000008;
  local_e8 = local_d8;
  local_f8 = 0x10;
  local_f4 = 0x30;
  local_c8 = param_11;
  local_c0 = param_12;
  local_b8 = param_13;
  local_b0 = param_14;
  lVar2 = vfzprintf(param_9,param_10,&local_f8);
  if (lVar2 < 0) {
    iVar1 = ferror(param_9);
    if (iVar1 == 0) {
      xvfprintf_part_0(param_9,param_10,&local_f8);
    }
  }
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long xvfprintf(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = vfzprintf();
  if (lVar2 < 0) {
    iVar1 = ferror(param_1);
    if (iVar1 == 0) {
      xvfprintf_part_0(param_1,param_2,param_3);
    }
  }
  return lVar2;
}


