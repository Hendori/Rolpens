
uint DES_cbc_cksum(uchar *input,DES_cblock *output,long length,DES_key_schedule *schedule,
                  const_DES_cblock *ivec)

{
  ulong uVar1;
  byte *pbVar2;
  const_DES_cblock auVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  auVar3 = *ivec;
  uVar4 = (ulong)*(uint *)*ivec;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (length < 1) {
    uVar4 = (ulong)auVar3 & 0xffffffff;
    uVar5 = auVar3._4_4_;
  }
  else {
    lVar8 = length + -8;
    uVar1 = length - 1;
    uVar7 = (uint)length & 7;
    local_48._4_4_ = *(uint *)(*ivec + 4);
    do {
      if ((ulong)uVar7 == length) {
        lVar8 = (long)input + (ulong)uVar7;
        pbVar2 = (byte *)(lVar8 + -1);
        switch(uVar7) {
        default:
          uVar5 = 0;
          goto LAB_0010010b;
        case 2:
          uVar5 = 0;
          goto LAB_001000fe;
        case 3:
          uVar5 = 0;
          goto LAB_001000f0;
        case 4:
          goto LAB_001000e5;
        case 5:
          uVar5 = 0;
          goto LAB_001000d8;
        case 6:
          uVar5 = 0;
          break;
        case 7:
          lVar8 = lVar8 + -1;
          uVar5 = (uint)*pbVar2 << 0x10;
        }
        pbVar2 = (byte *)(lVar8 + -1);
        lVar8 = lVar8 + -1;
        uVar5 = (uint)*pbVar2 << 8 | uVar5;
LAB_001000d8:
        pbVar2 = (byte *)(lVar8 + -1);
        lVar8 = lVar8 + -1;
        local_48._4_4_ = local_48._4_4_ ^ (uVar5 | *pbVar2);
LAB_001000e5:
        uVar5 = (uint)*(byte *)(lVar8 + -1) << 0x18;
        lVar8 = lVar8 + -1;
LAB_001000f0:
        pbVar2 = (byte *)(lVar8 + -1);
        lVar8 = lVar8 + -1;
        uVar5 = (uint)*pbVar2 << 0x10 | uVar5;
LAB_001000fe:
        pbVar2 = (byte *)(lVar8 + -1);
        lVar8 = lVar8 + -1;
        uVar5 = (uint)*pbVar2 << 8 | uVar5;
LAB_0010010b:
        uVar6 = (*(byte *)(lVar8 + -1) | uVar5) ^ (uint)uVar4;
        uVar5 = local_48._4_4_ >> 0x10;
        uVar7 = local_48._4_4_ >> 0x18;
        local_48._4_1_ = (char)local_48._4_4_;
        local_48._5_1_ = (char)(local_48._4_4_ >> 8);
        local_48._6_1_ = (char)uVar5;
        local_48._7_1_ = (char)uVar7;
        local_48._0_1_ = (char)uVar6;
        local_48._1_1_ = (char)(uVar6 >> 8);
        local_48._2_1_ = (char)(uVar6 >> 0x10);
        local_48._3_1_ = (char)(uVar6 >> 0x18);
        DES_encrypt1((uint *)&local_48,schedule,1);
        uVar4 = (ulong)local_48 & 0xffffffff;
        uVar5 = local_48._4_4_;
        break;
      }
      uVar4 = *(ulong *)input;
      length = length - 8;
      input = (uchar *)((long)input + 8);
      local_48 = (const_DES_cblock)(uVar4 ^ (ulong)auVar3);
      DES_encrypt1((uint *)&local_48,schedule,1);
      uVar4 = (ulong)local_48 & 0xffffffff;
      uVar5 = local_48._4_4_;
      auVar3 = local_48;
    } while (lVar8 - (uVar1 & 0xfffffffffffffff8) != length);
  }
  if (output != (DES_cblock *)0x0) {
    *output = (DES_cblock)
              ((((((((ulong)(uVar5 >> 0x18) << 8 | (ulong)(uVar5 >> 0x10 & 0xff)) << 8 |
                   (ulong)(uVar5 >> 8 & 0xff)) << 8 | (ulong)(uVar5 & 0xff)) << 8 | uVar4 >> 0x18)
                 << 8 | uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 | uVar4 & 0xff);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


