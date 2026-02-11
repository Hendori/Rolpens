
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sha384_init_ctx(SHA512_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA384_Init(c);
  return iVar1;
}



uchar * sha384_finish_ctx(SHA512_CTX *param_1,uchar *param_2)

{
  SHA384_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * sha384_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA384(d,n,md);
  return puVar1;
}



uchar * sha384_read_ctx(ulonglong *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  SHA512_CTX local_e8;
  long local_10;
  
  local_e8.h[0] = *param_1;
  local_e8.h[1] = param_1[1];
  local_e8.h[2] = param_1[2];
  local_e8.h[3] = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8.h[4] = param_1[4];
  local_e8.h[5] = param_1[5];
  local_e8.h[6] = param_1[6];
  local_e8.h[7] = param_1[7];
  local_e8.Nl = param_1[8];
  local_e8.Nh = param_1[9];
  local_e8.u.d[0] = param_1[10];
  local_e8.u.d[1] = param_1[0xb];
  local_e8.u.d[2] = param_1[0xc];
  local_e8.u.d[3] = param_1[0xd];
  local_e8.u.d[4] = param_1[0xe];
  local_e8.u.d[5] = param_1[0xf];
  local_e8.u.d[6] = param_1[0x10];
  local_e8.u.d[7] = param_1[0x11];
  local_e8.u.d[8] = param_1[0x12];
  local_e8.u.d[9] = param_1[0x13];
  local_e8.u.d[10] = param_1[0x14];
  local_e8.u.d[0xb] = param_1[0x15];
  local_e8.u.d[0xc] = param_1[0x16];
  local_e8.u.d[0xd] = param_1[0x17];
  local_e8.u.d[0xe] = param_1[0x18];
  local_e8.u.d[0xf] = param_1[0x19];
  local_e8._208_8_ = param_1[0x1a];
  SHA384_Final(param_2,&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sha512_init_ctx(SHA512_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA512_Init(c);
  return iVar1;
}



void sha512_process_bytes(void *param_1,size_t param_2,SHA512_CTX *param_3)

{
  SHA512_Update(param_3,param_1,param_2);
  return;
}



void sha512_process_block(void *param_1,size_t param_2,SHA512_CTX *param_3)

{
  SHA512_Update(param_3,param_1,param_2);
  return;
}



uchar * sha512_finish_ctx(SHA512_CTX *param_1,uchar *param_2)

{
  SHA512_Final(param_2,param_1);
  return param_2;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uchar * sha512_buffer(uchar *d,size_t n,uchar *md)

{
  uchar *puVar1;
  
  puVar1 = SHA512(d,n,md);
  return puVar1;
}



uchar * sha512_read_ctx(ulonglong *param_1,uchar *param_2)

{
  long in_FS_OFFSET;
  SHA512_CTX local_e8;
  long local_10;
  
  local_e8.h[0] = *param_1;
  local_e8.h[1] = param_1[1];
  local_e8.h[2] = param_1[2];
  local_e8.h[3] = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8.h[4] = param_1[4];
  local_e8.h[5] = param_1[5];
  local_e8.h[6] = param_1[6];
  local_e8.h[7] = param_1[7];
  local_e8.Nl = param_1[8];
  local_e8.Nh = param_1[9];
  local_e8.u.d[0] = param_1[10];
  local_e8.u.d[1] = param_1[0xb];
  local_e8.u.d[2] = param_1[0xc];
  local_e8.u.d[3] = param_1[0xd];
  local_e8.u.d[4] = param_1[0xe];
  local_e8.u.d[5] = param_1[0xf];
  local_e8.u.d[6] = param_1[0x10];
  local_e8.u.d[7] = param_1[0x11];
  local_e8.u.d[8] = param_1[0x12];
  local_e8.u.d[9] = param_1[0x13];
  local_e8.u.d[10] = param_1[0x14];
  local_e8.u.d[0xb] = param_1[0x15];
  local_e8.u.d[0xc] = param_1[0x16];
  local_e8.u.d[0xd] = param_1[0x17];
  local_e8.u.d[0xe] = param_1[0x18];
  local_e8.u.d[0xf] = param_1[0x19];
  local_e8._208_8_ = param_1[0x1a];
  SHA512_Final(param_2,&local_e8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


