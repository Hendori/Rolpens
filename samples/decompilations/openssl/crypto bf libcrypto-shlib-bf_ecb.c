
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BF_options(void)

{
  return "blowfish(ptr)";
}



void BF_ecb_encrypt(uchar *in,uchar *out,BF_KEY *key,int enc)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)in;
  local_18 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(in + 4);
  local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (enc == 0) {
    BF_decrypt(&local_18,key);
  }
  else {
    BF_encrypt(&local_18,key);
  }
  *(ulong *)out =
       (((((((ulong)(local_14 & 0xff) << 8 | (ulong)(local_14 >> 8 & 0xff)) << 8 |
           (ulong)(local_14 >> 0x10) & 0xff) << 8 | (ulong)(local_14 >> 0x18)) << 8 |
         (ulong)(local_18 & 0xff)) << 8 | (ulong)(local_18 >> 8 & 0xff)) << 8 |
       (ulong)(local_18 >> 0x10 & 0xff)) << 8 | (ulong)(local_18 >> 0x18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


