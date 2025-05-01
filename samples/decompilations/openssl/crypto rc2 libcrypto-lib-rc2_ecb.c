
void RC2_ecb_encrypt(uchar *in,uchar *out,RC2_KEY *key,int enc)

{
  long in_FS_OFFSET;
  ulong local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ulong)*(uint *)in;
  local_30 = (ulong)*(uint *)(in + 4);
  if (enc == 0) {
    RC2_decrypt(&local_38,key);
  }
  else {
    RC2_encrypt(&local_38,key);
  }
  *(ulong *)out =
       (((((((ulong)((uint)(local_30 >> 0x10) & 0xff00) | local_30 >> 0x10 & 0xff) << 8 |
           local_30 >> 8 & 0xff) << 8 | local_30 & 0xff) << 8 | local_38 >> 0x18 & 0xff) << 8 |
        local_38 >> 0x10 & 0xff) << 8 | local_38 >> 8 & 0xff) << 8 | local_38 & 0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


