
void DES_ofb64_encrypt(uchar *in,uchar *out,long length,DES_key_schedule *schedule,DES_cblock *ivec,
                      int *num)

{
  byte bVar1;
  DES_cblock auVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  long in_FS_OFFSET;
  uint uVar6;
  DES_cblock local_50;
  DES_cblock local_48;
  long local_40;
  
  local_50 = *ivec;
  uVar3 = *num;
  uVar6 = local_50._4_4_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar2 = (DES_cblock)
           ((((((((ulong)(uVar6 >> 0x18) << 8 | (ulong)(uVar6 >> 0x10 & 0xff)) << 8 |
                (ulong)(uVar6 >> 8 & 0xff)) << 8 | (ulong)(uVar6 & 0xff)) << 8 |
              (ulong)local_50 >> 0x18 & 0xff) << 8 | (ulong)local_50 >> 0x10 & 0xff) << 8 |
            ((ulong)local_50 & 0xffffffff) >> 8 & 0xff) << 8 | (ulong)local_50 & 0xff);
  local_48[0] = auVar2[0];
  local_48[1] = auVar2[1];
  local_48[2] = auVar2[2];
  local_48[3] = auVar2[3];
  local_48[4] = auVar2[4];
  local_48[5] = auVar2[5];
  local_48[6] = auVar2[6];
  local_48[7] = auVar2[7];
  if (length != 0) {
    iVar5 = 0;
    pbVar4 = in;
    do {
      if (uVar3 == 0) {
        iVar5 = iVar5 + 1;
        DES_encrypt1((uint *)local_50,schedule,1);
        local_48[0] = local_50[0];
        local_48[1] = local_50[1];
        local_48[2] = local_50[2];
        local_48[3] = local_50[3];
        local_48[4] = local_50[4];
        local_48[5] = local_50[5];
        local_48[6] = local_50[6];
        local_48[7] = local_50[7];
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *out = bVar1 ^ local_48[(int)uVar3];
      uVar3 = uVar3 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar4) != (uchar *)0x0);
    if (iVar5 != 0) {
      *ivec = local_50;
    }
  }
  *num = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


