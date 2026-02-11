
void DES_pcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,int enc)

{
  byte *pbVar1;
  DES_cblock auVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long in_FS_OFFSET;
  uint uVar15;
  undefined8 local_48;
  long local_40;
  
  auVar2 = *ivec;
  uVar9 = auVar2._4_4_;
  uVar11 = (ulong)auVar2 & 0xffffffff;
  uVar10 = auVar2._0_4_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    if (0 < length) {
      uVar4 = length & 0xfffffffffffffff8;
      puVar12 = (ulong *)output;
      do {
        local_48 = *(ulong *)input;
        uVar15 = (uint)local_48;
        uVar3 = local_48 >> 0x20;
        DES_encrypt1((uint *)&local_48,schedule,0);
        uVar10 = (uint)local_48 ^ (uint)uVar11;
        uVar6 = local_48._4_4_ ^ uVar9;
        bVar5 = (byte)(uVar10 >> 8);
        if (puVar12 == (ulong *)(output + uVar4)) {
          puVar13 = (undefined1 *)((long)puVar12 + length);
          puVar14 = puVar13;
          switch(length) {
          default:
            goto switchD_00100338_caseD_0;
          case 2:
            goto LAB_00100379;
          case 3:
            goto switchD_00100338_caseD_3;
          case 4:
            break;
          case 7:
            puVar13 = puVar13 + -1;
            *puVar13 = (char)(uVar6 >> 0x10);
          case 6:
            puVar13 = puVar13 + -1;
            *puVar13 = (char)(uVar6 >> 8);
          case 5:
            puVar13[-1] = (char)uVar6;
            puVar13 = puVar13 + -1;
          }
          puVar14 = puVar13 + -1;
          puVar13[-1] = (char)(uVar10 >> 0x18);
switchD_00100338_caseD_3:
          puVar13 = puVar14 + -1;
          puVar14[-1] = (char)(uVar10 >> 0x10);
LAB_00100379:
          puVar13[-1] = bVar5;
          puVar13 = puVar13 + -1;
switchD_00100338_caseD_0:
          puVar13[-1] = (char)uVar10;
          break;
        }
        length = length + -8;
        uVar11 = (ulong)(uVar15 ^ uVar10);
        uVar9 = (uint)uVar3 ^ uVar6;
        *puVar12 = (((((((ulong)(uVar6 >> 0x18) << 8 | (ulong)(uVar6 >> 0x10 & 0xff)) << 8 |
                       (ulong)(uVar6 >> 8 & 0xff)) << 8 | (ulong)(uVar6 & 0xff)) << 8 |
                     (ulong)(uVar10 >> 0x18)) << 8 | (ulong)(uVar10 >> 0x10 & 0xff)) << 8 |
                   (ulong)bVar5) << 8 | (ulong)uVar10 & 0xff;
        input = (uchar *)((long)input + 8);
        puVar12 = puVar12 + 1;
      } while (0 < length);
    }
    goto LAB_001001fb;
  }
  if (length < 1) goto LAB_001001fb;
  puVar12 = (ulong *)output;
  if (7 < length) {
    do {
      uVar11 = *(ulong *)input;
      puVar12 = (ulong *)((long)output + 8);
      uVar4 = *(ulong *)input;
      uVar9 = *(uint *)((long)input + 4);
      length = length + -8;
      input = (uchar *)((long)input + 8);
      local_48 = (ulong)auVar2 ^ uVar11;
      DES_encrypt1((uint *)&local_48,schedule,1);
      auVar2 = (DES_cblock)(uVar11 ^ local_48);
      *(ulong *)output =
           (((((((ulong)(local_48._4_4_ >> 0x18) << 8 | (ulong)(local_48._4_4_ >> 0x10 & 0xff)) << 8
               | (ulong)(local_48._4_4_ >> 8 & 0xff)) << 8 | (ulong)(local_48._4_4_ & 0xff)) << 8 |
             local_48 >> 0x18 & 0xff) << 8 | local_48 >> 0x10 & 0xff) << 8 |
           (local_48 & 0xffffffff) >> 8 & 0xff) << 8 | local_48 & 0xff;
      output = (uchar *)puVar12;
    } while (7 < length);
    if (length == 0) goto LAB_001001fb;
    uVar10 = (uint)uVar4 ^ (uint)local_48;
    uVar9 = uVar9 ^ local_48._4_4_;
  }
  lVar7 = (long)input + length;
  lVar8 = lVar7;
  switch(length) {
  default:
    uVar6 = 0;
    goto LAB_001001cb;
  case 2:
    uVar6 = 0;
    goto LAB_001001bd;
  case 3:
    uVar6 = 0;
    goto LAB_001001b0;
  case 4:
    goto switchD_0010017a_caseD_4;
  case 5:
    uVar6 = 0;
    goto LAB_00100197;
  case 6:
    uVar6 = 0;
    break;
  case 7:
    pbVar1 = (byte *)(lVar7 + -1);
    lVar7 = lVar7 + -1;
    uVar6 = (uint)*pbVar1 << 0x10;
  }
  pbVar1 = (byte *)(lVar7 + -1);
  lVar7 = lVar7 + -1;
  uVar6 = (uint)*pbVar1 << 8 | uVar6;
LAB_00100197:
  lVar8 = lVar7 + -1;
  uVar9 = uVar9 ^ (uVar6 | *(byte *)(lVar7 + -1));
switchD_0010017a_caseD_4:
  lVar7 = lVar8 + -1;
  uVar6 = (uint)*(byte *)(lVar8 + -1) << 0x18;
LAB_001001b0:
  uVar6 = (uint)*(byte *)(lVar7 + -1) << 0x10 | uVar6;
  lVar7 = lVar7 + -1;
LAB_001001bd:
  pbVar1 = (byte *)(lVar7 + -1);
  lVar7 = lVar7 + -1;
  uVar6 = (uint)*pbVar1 << 8 | uVar6;
LAB_001001cb:
  local_48 = CONCAT44(uVar9,(*(byte *)(lVar7 + -1) | uVar6) ^ uVar10);
  DES_encrypt1((uint *)&local_48,schedule,1);
  *puVar12 = local_48;
LAB_001001fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


