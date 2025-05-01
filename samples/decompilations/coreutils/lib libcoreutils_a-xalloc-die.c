
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void xalloc_die(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = _exit_failure;
  uVar2 = dcgettext("gnulib","memory exhausted",5);
  error(uVar1,0,&_LC2,uVar2);
                    /* WARNING: Subroutine does not return */
  abort();
}


