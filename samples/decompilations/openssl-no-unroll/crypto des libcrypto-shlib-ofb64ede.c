
void DES_ede3_ofb64_encrypt
               (uchar *in,uchar *out,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int *num)

{
  byte bVar1;
  DES_cblock auVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  DES_cblock local_50;
  DES_cblock local_48;
  long local_40;
  
  local_50 = *ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *num;
  uVar3 = (ulong)local_50._4_4_;
  uVar4 = (ulong)local_50 & 0xffffffff;
  auVar2 = (DES_cblock)
           (((((((((ulong)local_50 >> 0x38) << 8 | (ulong)(local_50._4_4_ >> 0x10 & 0xff)) << 8 |
                (ulong)local_50 >> 0x28 & 0xff) << 8 | (ulong)local_50 >> 0x20 & 0xff) << 8 |
              (ulong)local_50 >> 0x18 & 0xff) << 8 | (ulong)local_50 >> 0x10 & 0xff) << 8 |
            uVar4 >> 8 & 0xff) << 8 | (ulong)local_50 & 0xff);
  local_48[0] = auVar2[0];
  local_48[1] = auVar2[1];
  local_48[2] = auVar2[2];
  local_48[3] = auVar2[3];
  local_48[4] = auVar2[4];
  local_48[5] = auVar2[5];
  local_48[6] = auVar2[6];
  local_48[7] = auVar2[7];
  if (length != 0) {
    iVar6 = 0;
    pbVar7 = in;
    do {
      if (uVar5 == 0) {
        iVar6 = iVar6 + 1;
        DES_encrypt3((uint *)local_50,ks1,ks2,ks3);
        uVar4 = (ulong)local_50 & 0xffffffff;
        uVar3 = (ulong)local_50 >> 0x20;
        local_48[0] = local_50[0];
        local_48[1] = local_50[1];
        local_48[2] = local_50[2];
        local_48[3] = local_50[3];
        local_48[4] = local_50[4];
        local_48[5] = local_50[5];
        local_48[6] = local_50[6];
        local_48[7] = local_50[7];
      }
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      *out = bVar1 ^ local_48[(int)uVar5];
      uVar5 = uVar5 + 1 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar7) != (uchar *)0x0);
    if (iVar6 != 0) {
      *ivec = (DES_cblock)
              ((((((((uVar3 >> 0x18) << 8 | uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 |
                  uVar3 & 0xff) << 8 | uVar4 >> 0x18) << 8 | uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 8 & 0xff) << 8 | uVar4 & 0xff);
    }
  }
  *num = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


