
void BF_cfb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num,int enc
                     )

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar5 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar6 = in;
    if (length != 0) {
      do {
        if (uVar5 == 0) {
          uVar2 = *(uint *)ivec;
          local_48 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
          ;
          uVar2 = *(uint *)(ivec + 4);
          local_44 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
          ;
          BF_encrypt(&local_48,schedule);
          *(ulong *)ivec =
               (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(local_44 >> 8 & 0xff)) << 8 |
                   (ulong)(local_44 >> 0x10 & 0xff)) << 8 | (ulong)(local_44 >> 0x18)) << 8 |
                 (ulong)(local_48 & 0xff)) << 8 | (ulong)(local_48 >> 8 & 0xff)) << 8 |
               (ulong)(local_48 >> 0x10 & 0xff)) << 8 | (ulong)(local_48 >> 0x18);
        }
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        bVar1 = ivec[(int)uVar5];
        ivec[(int)uVar5] = bVar4;
        uVar5 = uVar5 + 1 & 7;
        *out = bVar4 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar6) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar6 = in;
    do {
      if (uVar5 == 0) {
        uVar2 = *(uint *)ivec;
        local_48 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = *(uint *)(ivec + 4);
        local_44 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        BF_encrypt(&local_48,schedule);
        *(ulong *)ivec =
             (((((((ulong)(local_44 & 0xff) << 8 | (ulong)(local_44 >> 8 & 0xff)) << 8 |
                 (ulong)(local_44 >> 0x10 & 0xff)) << 8 | (ulong)(local_44 >> 0x18)) << 8 |
               (ulong)(local_48 & 0xff)) << 8 | (ulong)(local_48 >> 8 & 0xff)) << 8 |
             (ulong)(local_48 >> 0x10 & 0xff)) << 8 | (ulong)(local_48 >> 0x18);
      }
      lVar3 = (long)(int)uVar5;
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar4 ^ ivec[lVar3];
      uVar5 = uVar5 + 1 & 7;
      *out = bVar4;
      ivec[lVar3] = bVar4;
      out = out + 1;
    } while (in + (length - (long)pbVar6) != (uchar *)0x0);
  }
  *num = uVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


