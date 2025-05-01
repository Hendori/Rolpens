
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

char * dir_name(char *file)

{
  char *pcVar1;
  
  pcVar1 = (char *)mdir_name();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


