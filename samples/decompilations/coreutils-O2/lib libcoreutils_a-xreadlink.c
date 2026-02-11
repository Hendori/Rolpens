
/* WARNING: Control flow encountered bad instruction data */

long xreadlink(void)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = areadlink();
  if (lVar1 == 0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
      xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return lVar1;
}


