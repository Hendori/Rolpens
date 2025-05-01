
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

char * xreadlink(char *filename)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = (char *)areadlink();
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


