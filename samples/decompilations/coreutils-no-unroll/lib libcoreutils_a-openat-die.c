
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void openat_save_fail(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","unable to record current working directory",5);
  error(uVar1,param_1,&_LC2,uVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void openat_restore_fail(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","failed to return to initial working directory",5);
  error(uVar1,param_1,&_LC2,uVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}


