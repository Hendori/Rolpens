
void DES_ecb3_encrypt(const_DES_cblock *input,DES_cblock *output,DES_key_schedule *ks1,
                     DES_key_schedule *ks2,DES_key_schedule *ks3,int enc)

{
  long in_FS_OFFSET;
  DES_cblock local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *input;
  if (enc == 0) {
    DES_decrypt3((uint *)local_18,ks1,ks2,ks3);
  }
  else {
    DES_encrypt3((uint *)local_18,ks1,ks2,ks3);
  }
  *output = local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


