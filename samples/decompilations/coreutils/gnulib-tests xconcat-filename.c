
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

char * xconcatenated_filename(char *directory,char *filename,char *suffix)

{
  char *pcVar1;
  
  pcVar1 = (char *)concatenated_filename();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


