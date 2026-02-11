
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sha1_init_ctx(SHA_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA1_Init(c);
  return iVar1;
}



void sha1_process_bytes(void *param_1,size_t param_2,SHA_CTX *param_3)

{
  SHA1_Update(param_3,param_1,param_2);
  return;
}



void sha1_process_block(void *param_1,size_t param_2,SHA_CTX *param_3)

{
  SHA1_Update(param_3,param_1,param_2);
  return;
}



uchar * sha1_finish_ctx(SHA_CTX *param_1,uchar *param_2)

{
  SHA1_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * sha1_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA1(d,n,md);
  return puVar1;
}



uchar * sha1_read_ctx(undefined8 *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  SHA_CTX local_78;
  long local_10;
  
  local_78._0_8_ = *param_1;
  local_78._8_8_ = param_1[1];
  local_78._16_8_ = param_1[2];
  local_78._24_8_ = param_1[3];
  local_78.data._4_8_ = param_1[4];
  local_78.data._12_8_ = param_1[5];
  local_78.data._20_8_ = param_1[6];
  local_78.data._28_8_ = param_1[7];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78.data._36_8_ = param_1[8];
  local_78.data._44_8_ = param_1[9];
  local_78.data._52_8_ = param_1[10];
  local_78._88_8_ = param_1[0xb];
  SHA1_Final(param_2,&local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


