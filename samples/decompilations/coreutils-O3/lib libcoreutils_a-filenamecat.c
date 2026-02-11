
/* WARNING: Control flow encountered bad instruction data */

void file_name_concat(void)

{
  long lVar1;
  
  lVar1 = mfile_name_concat();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


