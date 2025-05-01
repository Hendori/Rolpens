
void BF_ofb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  long in_FS_OFFSET;
  uint local_50;
  uint local_4c;
  ulong local_48;
  long local_40;
  
  uVar5 = *(uint *)ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *num;
  uVar2 = *(uint *)(ivec + 4);
  uVar3 = (uVar5 & 0xff00) << 8;
  local_50 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | uVar3 | uVar5 << 0x18;
  uVar4 = (uVar2 & 0xff00) << 8;
  local_4c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | uVar4 | uVar2 << 0x18;
  local_48 = (((((((ulong)(uVar2 >> 0x18) << 8 | (ulong)((uVar2 & 0xff0000) >> 0x10)) << 8 |
                 (ulong)(uVar4 >> 0x10)) << 8 | (ulong)(uVar2 & 0xff)) << 8 | (ulong)(uVar5 >> 0x18)
               ) << 8 | (ulong)((uVar5 & 0xff0000) >> 0x10)) << 8 | (ulong)(uVar3 >> 0x10)) << 8 |
             (ulong)(uVar5 & 0xff);
  if (length != 0) {
    iVar8 = 0;
    pbVar7 = in;
    do {
      if (uVar6 == 0) {
        iVar8 = iVar8 + 1;
        BF_encrypt(&local_50,schedule);
        local_48 = (((((((ulong)(local_4c & 0xff) << 8 | (ulong)(local_4c >> 8 & 0xff)) << 8 |
                       (ulong)(local_4c >> 0x10 & 0xff)) << 8 | (ulong)(local_4c >> 0x18)) << 8 |
                     (ulong)(local_50 & 0xff)) << 8 | (ulong)(local_50 >> 8 & 0xff)) << 8 |
                   (ulong)(local_50 >> 0x10 & 0xff)) << 8 | (ulong)(local_50 >> 0x18);
      }
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar5 = uVar6 + 1;
      *out = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar6);
      uVar6 = uVar5 & 7;
      out = out + 1;
    } while (in + (length - (long)pbVar7) != (uchar *)0x0);
    uVar6 = uVar5 & 7;
    if (iVar8 != 0) {
      *(ulong *)ivec =
           (((((((ulong)(local_4c & 0xff) << 8 | (ulong)(local_4c >> 8 & 0xff)) << 8 |
               (ulong)(local_4c >> 0x10 & 0xff)) << 8 | (ulong)(local_4c >> 0x18)) << 8 |
             (ulong)(local_50 & 0xff)) << 8 | (ulong)(local_50 >> 8 & 0xff)) << 8 |
           (ulong)(local_50 >> 0x10 & 0xff)) << 8 | (ulong)(local_50 >> 0x18);
    }
  }
  *num = uVar6;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


