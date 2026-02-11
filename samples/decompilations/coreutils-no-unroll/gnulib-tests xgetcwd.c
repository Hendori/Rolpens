
/* WARNING: Control flow encountered bad instruction data */

char * xgetcwd(void)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = getcwd((char *)0x0,0);
  if (pcVar1 == (char *)0x0) {
    piVar2 = __errno_location();
    if (*piVar2 == 0xc) {
      xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return pcVar1;
}


