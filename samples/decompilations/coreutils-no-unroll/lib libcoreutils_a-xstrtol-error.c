
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xstrtol_fatal(uint param_1,int param_2,undefined1 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  uVar1 = _exit_failure;
  local_20 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    pcVar5 = "invalid suffix in %s%s argument \'%s\'";
    if ((param_1 < 2) && (pcVar5 = "%s%s argument \'%s\' too large", param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
      xstrtol_fatal_cold();
    }
  }
  else {
    pcVar5 = "invalid %s%s argument \'%s\'";
    if (param_1 != 4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (param_2 < 0) {
    puVar4 = &local_22;
    local_21 = 0;
    puVar3 = &_LC3 + -(long)param_2;
    local_22 = param_3;
  }
  else {
    puVar4 = *(undefined1 **)(param_4 + (long)param_2 * 0x20);
    puVar3 = &_LC3;
  }
  uVar2 = dcgettext("gnulib",pcVar5,5);
  error(uVar1,0,uVar2,puVar3,puVar4,param_5);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void xstrtol_fatal_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


