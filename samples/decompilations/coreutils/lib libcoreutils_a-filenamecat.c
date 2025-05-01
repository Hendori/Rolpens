
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

char * file_name_concat(char *dir,char *base,char **base_in_result)

{
  char *pcVar1;
  
  pcVar1 = (char *)mfile_name_concat();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


