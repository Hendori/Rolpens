
/* WARNING: Control flow encountered bad instruction data */

void xalignalloc(void)

{
  long lVar1;
  
  lVar1 = aligned_alloc();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


