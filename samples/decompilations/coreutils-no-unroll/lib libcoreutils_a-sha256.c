
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sha224_init_ctx(SHA256_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA224_Init(c);
  return iVar1;
}



uchar * sha224_finish_ctx(SHA256_CTX *param_1,uchar *param_2)

{
  SHA224_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * sha224_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA224(d,n,md);
  return puVar1;
}



uchar * sha224_read_ctx(uint *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  SHA256_CTX local_88;
  long local_10;
  
  local_88.h._0_8_ = *(undefined8 *)param_1;
  local_88.h._8_8_ = *(undefined8 *)(param_1 + 2);
  local_88.h._16_8_ = *(undefined8 *)(param_1 + 4);
  local_88.h._24_8_ = *(undefined8 *)(param_1 + 6);
  local_88.Nl = param_1[8];
  local_88.Nh = param_1[9];
  local_88.data._0_8_ = *(undefined8 *)(param_1 + 10);
  local_88.data._8_8_ = *(undefined8 *)(param_1 + 0xc);
  local_88.data._16_8_ = *(undefined8 *)(param_1 + 0xe);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88.data._24_8_ = *(undefined8 *)(param_1 + 0x10);
  local_88.data._32_8_ = *(undefined8 *)(param_1 + 0x12);
  local_88.data._40_8_ = *(undefined8 *)(param_1 + 0x14);
  local_88.data._48_8_ = *(undefined8 *)(param_1 + 0x16);
  local_88.data._56_8_ = *(undefined8 *)(param_1 + 0x18);
  local_88.num = param_1[0x1a];
  local_88.md_len = param_1[0x1b];
  SHA224_Final(param_2,&local_88);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sha256_init_ctx(SHA256_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA256_Init(c);
  return iVar1;
}



void sha256_process_bytes(void *param_1,size_t param_2,SHA256_CTX *param_3)

{
  SHA256_Update(param_3,param_1,param_2);
  return;
}



void sha256_process_block(void *param_1,size_t param_2,SHA256_CTX *param_3)

{
  SHA256_Update(param_3,param_1,param_2);
  return;
}



uchar * sha256_finish_ctx(SHA256_CTX *param_1,uchar *param_2)

{
  SHA256_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * sha256_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA256(d,n,md);
  return puVar1;
}



uchar * sha256_read_ctx(uint *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  SHA256_CTX local_88;
  long local_10;
  
  local_88.h._0_8_ = *(undefined8 *)param_1;
  local_88.h._8_8_ = *(undefined8 *)(param_1 + 2);
  local_88.h._16_8_ = *(undefined8 *)(param_1 + 4);
  local_88.h._24_8_ = *(undefined8 *)(param_1 + 6);
  local_88.Nl = param_1[8];
  local_88.Nh = param_1[9];
  local_88.data._0_8_ = *(undefined8 *)(param_1 + 10);
  local_88.data._8_8_ = *(undefined8 *)(param_1 + 0xc);
  local_88.data._16_8_ = *(undefined8 *)(param_1 + 0xe);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88.data._24_8_ = *(undefined8 *)(param_1 + 0x10);
  local_88.data._32_8_ = *(undefined8 *)(param_1 + 0x12);
  local_88.data._40_8_ = *(undefined8 *)(param_1 + 0x14);
  local_88.data._48_8_ = *(undefined8 *)(param_1 + 0x16);
  local_88.data._56_8_ = *(undefined8 *)(param_1 + 0x18);
  local_88.num = param_1[0x1a];
  local_88.md_len = param_1[0x1b];
  SHA256_Final(param_2,&local_88);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


