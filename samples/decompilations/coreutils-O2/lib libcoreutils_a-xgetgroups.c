
/* WARNING: Control flow encountered bad instruction data */

int xgetgroups(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mgetgroups();
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
      xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return iVar1;
}


