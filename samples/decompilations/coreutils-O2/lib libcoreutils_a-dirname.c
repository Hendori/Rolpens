
/* WARNING: Control flow encountered bad instruction data */

void dir_name(void)

{
  long lVar1;
  
  lVar1 = mdir_name();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


