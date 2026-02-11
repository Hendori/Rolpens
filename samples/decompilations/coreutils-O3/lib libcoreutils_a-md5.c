
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int md5_init_ctx(MD5_CTX *c)

{
  int iVar1;
  
  iVar1 = MD5_Init(c);
  return iVar1;
}



void md5_process_bytes(void *param_1,size_t param_2,MD5_CTX *param_3)

{
  MD5_Update(param_3,param_1,param_2);
  return;
}



void md5_process_block(void *param_1,size_t param_2,MD5_CTX *param_3)

{
  MD5_Update(param_3,param_1,param_2);
  return;
}



uchar * md5_finish_ctx(MD5_CTX *param_1,uchar *param_2)

{
  MD5_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * md5_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = MD5(d,n,md);
  return puVar1;
}



uchar * md5_read_ctx(undefined8 *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  MD5_CTX local_78;
  long local_10;
  
  local_78._0_8_ = *param_1;
  local_78._8_8_ = param_1[1];
  local_78._16_8_ = param_1[2];
  local_78.data._0_8_ = param_1[3];
  local_78.data._8_8_ = param_1[4];
  local_78.data._16_8_ = param_1[5];
  local_78.data._24_8_ = param_1[6];
  local_78.data._32_8_ = param_1[7];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78.data._40_8_ = param_1[8];
  local_78._84_8_ = *(undefined8 *)((long)param_1 + 0x54);
  local_78.data[0xc] = (uint)param_1[9];
  local_78.data[0xd] = (uint)*(undefined8 *)((long)param_1 + 0x4c);
  local_78.data[0xe] = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x4c) >> 0x20);
  MD5_Final(param_2,&local_78);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


