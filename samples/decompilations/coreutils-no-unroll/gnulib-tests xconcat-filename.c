
/* WARNING: Control flow encountered bad instruction data */

void xconcatenated_filename(void)

{
  long lVar1;
  
  lVar1 = concatenated_filename();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


