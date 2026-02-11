
void RC2_cfb64_encrypt(uchar *in,uchar *out,long length,RC2_KEY *schedule,uchar *ivec,int *num,
                      int enc)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar3 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar3 == 0) {
          local_58 = (ulong)*(uint *)ivec;
          local_50 = (ulong)*(uint *)(ivec + 4);
          RC2_encrypt(&local_58,schedule);
          *(ulong *)ivec =
               (((((((ulong)((uint)(local_50 >> 0x10) & 0xff00) | local_50 >> 0x10 & 0xff) << 8 |
                   local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) <<
                 8 | local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
        }
        bVar4 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = ivec[(int)uVar3];
        ivec[(int)uVar3] = bVar4;
        uVar3 = uVar3 + 1 & 7;
        *out = bVar4 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar3 == 0) {
        local_58 = (ulong)*(uint *)ivec;
        local_50 = (ulong)*(uint *)(ivec + 4);
        RC2_encrypt(&local_58,schedule);
        *(ulong *)ivec =
             (((((((ulong)((uint)(local_50 >> 0x10) & 0xff00) | local_50 >> 0x10 & 0xff) << 8 |
                 local_50 >> 8 & 0xff) << 8 | local_50 & 0xff) << 8 | local_58 >> 0x18 & 0xff) << 8
              | local_58 >> 0x10 & 0xff) << 8 | local_58 >> 8 & 0xff) << 8 | local_58 & 0xff;
      }
      lVar2 = (long)(int)uVar3;
      bVar4 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar4 = bVar4 ^ ivec[lVar2];
      uVar3 = uVar3 + 1 & 7;
      *out = bVar4;
      ivec[lVar2] = bVar4;
      out = out + 1;
    } while (in + (length - (long)pbVar5) != (uchar *)0x0);
  }
  *num = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


