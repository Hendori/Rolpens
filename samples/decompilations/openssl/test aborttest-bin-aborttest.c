
/* WARNING: Control flow encountered bad instruction data */

void main(void)

{
  OPENSSL_die("Voluntary abort",0x100000,0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


