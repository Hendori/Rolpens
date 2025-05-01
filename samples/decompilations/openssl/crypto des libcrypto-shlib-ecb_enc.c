
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * DES_options(void)

{
  if (init_1 == 0) {
    return buf_0;
  }
  OPENSSL_strlcpy(buf_0,"des(int)",0xc);
  init_1 = 0;
  return buf_0;
}



void DES_ecb_encrypt(const_DES_cblock *input,DES_cblock *output,DES_key_schedule *ks,int enc)

{
  long in_FS_OFFSET;
  DES_cblock local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *input;
  DES_encrypt1((uint *)local_18,ks,enc);
  *output = local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


